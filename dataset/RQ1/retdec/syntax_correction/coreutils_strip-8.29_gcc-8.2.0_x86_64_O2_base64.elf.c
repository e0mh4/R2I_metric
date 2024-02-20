#include "decompile_retdec.h"
// Address range: 0x401810 - 0x401815
int64_t function_401810(void) {
    // 0x401810
    abort();
    // UNREACHABLE
}
// Address range: 0x401815 - 0x40181a
int64_t function_401815(void) {
    // 0x401815
    abort();
    // UNREACHABLE
}
// Address range: 0x40181a - 0x40181f
int64_t function_40181a(void) {
    // 0x40181a
    abort();
    // UNREACHABLE
}
// Address range: 0x40181f - 0x401824
int64_t function_40181f(void) {
    // 0x40181f
    abort();
    // UNREACHABLE
}
// Address range: 0x401824 - 0x401829
int64_t function_401824(void) {
    // 0x401824
    abort();
    // UNREACHABLE
}
// Address range: 0x401829 - 0x40182e
int64_t function_401829(void) {
    // 0x401829
    abort();
    // UNREACHABLE
}
// Address range: 0x401830 - 0x401acd
int64_t function_401830(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401843
    function_402be0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401830
    function_406cb0(0x402b00, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    int64_t v3 = 0; // 0x40187e
    int64_t v4 = 0; // 0x40187e
    int64_t v5 = 76; // 0x40187e
    int64_t v6; // 0x401830
    while (true) {
        // 0x401883
        v6 = v5;
        int64_t v7 = v3; // 0x401830
        int64_t v8; // 0x401830
        uint32_t v9; // 0x401830
        while (true) {
            // 0x401883
            v3 = v7;
            int64_t v10 = v4; // 0x401830
            while (true) {
              lab_0x401883:
                // 0x401883
                v4 = v10;
                v9 = (int32_t)function_406400(v1, a2, "diw:", &g2, 0, v8);
                v10 = 1;
                switch (v9) {
                    case -1: {
                        goto lab_0x401963;
                    }
                    case 100: {
                        goto lab_0x401883;
                    }
                    default: {
                        goto lab_0x4018ac;
                    }
                }
            }
          lab_0x4018ac:
            if (v9 <= 100) {
                if (v9 == -131) {
                    // 0x4018c7
                    function_404c80((int64_t)g28, "base64", "GNU coreutils", (int64_t)g17, "Simon Josefsson", 0);
                    exit(0);
                    // UNREACHABLE
                }
                if (v9 == -130) {
                    // 0x40194d
                    function_4020a0(0);
                    // UNREACHABLE
                }
                goto lab_0x401ac3;
            }
            // 0x4018ae
            v7 = 1;
            if (v9 != 105) {
                // break -> 0x401900
                break;
            }
        }
        if (v9 != 119) {
          lab_0x401ac3:
            // 0x401ac3
            function_4020a0(1);
            // UNREACHABLE
        }
        char * v11 = dcgettext(NULL, "invalid wrap size", 5); // 0x401915
        v5 = function_405120(g46, (int32_t)"invalid wrap size" ^ (int32_t)"invalid wrap size", -1, (int64_t *)&g10, (int64_t)v11, 0);
        v8 = 0;
    }
  lab_0x401963:;
    int32_t v12 = *(int32_t *)0x60b25c; // 0x401963
    int64_t v13 = v12; // 0x401963
    int32_t v14 = (int32_t)a1 - v12; // 0x40196c
    int64_t v15 = v13; // 0x401971
    int64_t v16 = a2; // 0x401971
    int64_t v17; // 0x401830
    int64_t str2; // 0x401830
    int64_t v18; // 0x401830
    int64_t v19; // 0x401830
    int64_t v20; // 0x401830
    if (v14 > 1) {
        goto lab_0x401a95;
    } else {
        int64_t v21 = v14 - 1; // 0x40196e
        v19 = v21;
        v17 = (int64_t)"-";
        if (v1 > v13) {
            int64_t v22 = *(int64_t *)(8 * v13 + a2); // 0x40197b
            char * str = (char *)v22; // 0x401987
            v19 = v21;
            v17 = v22;
            if (strcmp(str, "-") == 0) {
                goto lab_0x4019d7;
            } else {
                struct _IO_FILE * file = fopen(str, "rb"); // 0x401998
                v20 = v21;
                v18 = (int64_t)file;
                str2 = v22;
                if (file != NULL) {
                    goto lab_0x4019de;
                } else {
                    // 0x4019a5
                    error(1, *__errno_location(), "%s", (char *)function_404680(0, 3, v22));
                    v19 = (int64_t)"%s";
                    v17 = (int64_t)"-";
                    goto lab_0x4019d7;
                }
            }
        } else {
            goto lab_0x4019d7;
        }
    }
  lab_0x401a95:
    // 0x401a95
    function_404800(*(int64_t *)(v16 + 8 * v15));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x401ac3
    function_4020a0(1);
    // UNREACHABLE
  lab_0x4019d7:
    // 0x4019d7
    v20 = v19;
    v18 = g29;
    str2 = v17;
    goto lab_0x4019de;
  lab_0x4019de:
    // 0x4019de
    function_402bb0(v18, 2, v20);
    int64_t v23 = (int64_t)g28;
    if (v4 == 0) {
        // 0x401a1b
        function_401dd0(v18, v23, v6);
    } else {
        // 0x4019f0
        function_401bb0(v18, v23, v3);
    }
    // 0x401a03
    if ((int32_t)function_405590(v18, v23) != -1) {
        // 0x401a10
        return 0;
    }
    uint32_t strcmp_rc = strcmp((char *)str2, "-"); // 0x401a37
    int32_t * err_num = __errno_location(); // 0x401a3e
    if (strcmp_rc == 0) {
        // 0x401a4a
        error(1, *err_num, dcgettext(NULL, "closing standard input", 5));
    }
    // 0x401a6e
    error(1, *err_num, "%s", (char *)function_404680(0, 3, str2));
    v15 = &g50;
    v16 = strcmp_rc;
    goto lab_0x401a95;
}
// Address range: 0x401ad0 - 0x401afb
// Address range: 0x401afb - 0x401b1a
int64_t function_401afb(void) {
    // 0x401afb
    return &g27;
}
// Address range: 0x401b1a - 0x401b51
int64_t function_401b1a(void) {
    // 0x401b1a
    return 0;
}
// Address range: 0x401b51 - 0x401ba8
int64_t function_401b51(void) {
    // 0x401b51
    if (g32 != 0) {
        // 0x401ba7
        int64_t result; // 0x401b51
        return result;
    }
    int64_t v1 = g33; // 0x401b84
    int64_t result2; // 0x401b96
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401b96
        result2 = function_401afb();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401b86
        v1++;
    }
    // 0x401b7a
    g33 = v1;
    // 0x401b96
    result2 = function_401afb();
    g32 = 1;
    return result2;
}
// Address range: 0x401ba8 - 0x401bad
int64_t function_401ba8(void) {
    // 0x401ba8
    return function_401b1a();
}
// Address range: 0x401bb0 - 0x401dd0
int64_t function_401bb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x401bb0
    int64_t stream; // bp-7256, 0x401bb0
    int64_t v1 = &stream; // 0x401bbd
    stream = a2;
    int32_t v2; // bp-7232, 0x401bb0
    function_4027c0((int64_t *)&v2);
    int64_t v3; // bp-4152, 0x401bb0
    int64_t v4 = &v3; // 0x401c11
    int64_t v5 = v1 + 3105;
    int32_t v6; // 0x401bb0
    int32_t v7; // 0x401bb0
    int32_t v8; // 0x401be8
    int64_t v9; // 0x401bb0
    int64_t v10; // 0x401bb0
    int64_t v11; // 0x401bb0
    int64_t v12; // 0x401bb0
    int64_t v13; // 0x401bb0
    int64_t v14; // 0x401bb0
    int64_t v15; // 0x401bb0
    int64_t v16; // 0x401bb0
    int64_t v17; // 0x401bb0
    int32_t v18; // 0x401bb0
    int64_t result; // 0x401bb0
    int64_t v19; // 0x401bb0
    int64_t v20; // 0x401bb0
    int64_t v21; // 0x401bb0
    int64_t v22; // 0x401bb0
    int64_t v23; // 0x401bb0
    int32_t n; // bp-7240, 0x401bb0
    int64_t v24; // 0x401bb0
    int64_t v25; // 0x401bb0
    uint64_t v26; // 0x401bb0
    int64_t v27; // 0x401bec
    while (true) {
      lab_0x401be0:
        // 0x401be0
        v20 = 0;
        int64_t v28; // 0x401bb0
        v11 = v28;
        int64_t v29; // 0x401bb0
        v15 = v29;
        while (true) {
          lab_0x401c11:;
            int64_t v30 = v20 + v4; // 0x401c29
            int32_t v31 = fread_unlocked((int64_t *)v30, 1, 0x1000 - (int32_t)v20, (struct _IO_FILE *)a1); // 0x401c2d
            int64_t v32 = v31; // 0x401c2d
            n = v31;
            int32_t v33 = v30;
            v6 = v33;
            v22 = v32;
            v19 = v20;
            v9 = v11;
            v13 = v15;
            v7 = v33;
            v23 = v32;
            v21 = v20;
            v12 = v11;
            v16 = 0;
            if ((char)a3 == 0) {
                goto lab_0x401be8;
            } else {
                goto lab_0x401c44;
            }
        }
      lab_0x401ce0_2:
        // 0x401ce0
        v18 = v8;
        v17 = v14;
        v25 = 0;
        while (true) {
          lab_0x401d46:
            // 0x401d46
            v26 = v25;
            int64_t v34 = v18;
            if ((v34 & 16) == 0) {
                // 0x401ce8
                v28 = v10;
                v29 = v17;
                v24 = v27;
                if (v26 != 0) {
                    goto lab_0x401be0;
                } else {
                    goto lab_0x401cfc;
                }
            } else {
                // 0x401d4a
                result = v34;
                if (v26 >= 2) {
                    return result;
                }
                // 0x401d4f
                v24 = v27;
                if (v26 == 1) {
                    // 0x401d51
                    v24 = 0;
                    result = 0;
                    if (v2 == 0) {
                        return result;
                    }
                }
                goto lab_0x401cfc;
            }
        }
    }
    // 0x401d66
    return result;
  lab_0x401cfc:
    // 0x401cfc
    n = 3072;
    int64_t data; // bp-7224, 0x401bb0
    int64_t v35 = function_4027d0((int64_t *)&v2, &v3, v24, &data, (int64_t *)&n); // 0x401d13
    uint32_t v36 = fwrite_unlocked(&data, 1, n, (struct _IO_FILE *)stream); // 0x401d2e
    if (n > v36) {
        // 0x401d78
        error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
        goto lab_0x401da2;
    }
    if ((char)v35 == 0) {
      lab_0x401da2:
        // 0x401da2
        error(1, (int32_t)"invalid input" ^ (int32_t)"invalid input", dcgettext(NULL, "invalid input", 5));
        return &g50;
    }
    // 0x401d3f
    v18 = &data;
    v17 = v35 & 0xffffffff;
    v25 = v26 + 1 & 0xffffffff;
    goto lab_0x401d46;
  lab_0x401be8:
    // 0x401be8
    v14 = v13;
    v10 = v9;
    v8 = v6;
    v27 = v19 + v22;
    int64_t v37; // 0x401bb0
    int64_t v38; // 0x401bb0
    int64_t v39; // 0x401bb0
    int64_t v40; // 0x401bb0
    if ((v8 & 32) != 0) {
        char * format = dcgettext(NULL, "read error", 5); // 0x401c92
        int32_t * v41 = __errno_location(); // 0x401c9a
        int32_t err_num = *v41; // 0x401ca7
        error(1, err_num, format);
        v40 = (int64_t)format;
        v39 = v27;
        v37 = v10;
        v38 = v14;
      lab_0x401cb0:;
        int64_t v42 = v40 - 1; // 0x401cb0
        int64_t v43 = v37 + v4; // 0x401cc7
        n = v42;
        memmove((int64_t *)v43, (int64_t *)(v5 + v37), (int32_t)(v42 - v38));
        v7 = v43;
        v23 = v42;
        v21 = v39;
        v12 = v37;
        v16 = v38;
        goto lab_0x401c44;
    } else {
        if (v27 >= 0x1000) {
            // break -> 0x401ce0
            goto lab_0x401ce0_2;
        }
        // 0x401c09
        v20 = v27;
        v11 = v10;
        v15 = v14;
        if ((v8 & 16) != 0) {
            // break -> 0x401ce0
            goto lab_0x401ce0_2;
        }
        goto lab_0x401c11;
    }
  lab_0x401c44:;
    int64_t v44 = v16;
    int64_t v45 = v12;
    int64_t v46 = v21;
    int64_t v47 = v23;
    int32_t v48 = v7;
    v6 = v48;
    v22 = 0;
    v19 = v46;
    v9 = v45;
    v13 = v44;
    if (v47 != 0) {
        int32_t v49 = v48; // 0x401c4c
        int64_t v50 = v45; // 0x401c4c
        int64_t v51 = v44; // 0x401c4c
        int64_t v52 = v44; // 0x401c4c
        if (v44 < v47) {
            int64_t v53 = v52;
            int64_t v54 = v53 + v46; // 0x401c4e
            char v55 = *(char *)(v1 + 3104 + v54); // 0x401c53
            v40 = v47;
            v39 = v46;
            v37 = v54;
            v38 = v53;
            if (v55 != 61 == (char)function_4027a0(v55) == 0) {
                goto lab_0x401cb0;
            }
            int64_t v56 = v53 + 1; // 0x401c6e
            while (v56 < v47) {
                // 0x401c4e
                v53 = v56;
                v54 = v53 + v46;
                v55 = *(char *)(v1 + 3104 + v54);
                v40 = v47;
                v39 = v46;
                v37 = v54;
                v38 = v53;
                if (v55 != 61 == (char)function_4027a0(v55) == 0) {
                    goto lab_0x401cb0;
                }
                // 0x401c6e
                v56 = v53 + 1;
            }
            // 0x401be8
            v49 = v55;
            v50 = v54;
            v51 = v56;
        }
        // 0x401be8
        v6 = v49;
        v22 = v47;
        v19 = v46;
        v9 = v50;
        v13 = v51;
    }
    goto lab_0x401be8;
}
// Address range: 0x401dd0 - 0x4020a0
int64_t function_401dd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x401dd0
    int64_t v1; // bp-71736, 0x401dd0
    int64_t v2 = &v1;
    int64_t data2; // bp-41016, 0x401dd0
    int64_t v3 = &data2;
    int64_t * v4 = (int64_t *)(a2 + 40);
    int64_t * v5 = (int64_t *)(a2 + 48);
    struct _IO_FILE * v6 = (struct _IO_FILE *)a2;
    int64_t v7 = 0; // 0x401df4
    int64_t v8; // 0x401dd0
    int64_t v9; // 0x401dd0
    int64_t v10; // 0x401e25
    int64_t v11; // 0x401e1c
    while (true) {
      lab_0x401df8:
        // 0x401df8
        v8 = v7;
        int64_t v12 = 0;
        v11 = v12 + v2;
        v10 = v12 + (int64_t)fread_unlocked((int64_t *)v11, 1, 0x7800 - (int32_t)v12, (struct _IO_FILE *)a1);
        while ((v11 & 48) == 0) {
            int64_t v13 = v10; // 0x401e07
            if (v10 >= 0x7800) {
                // 0x401e60
                v9 = v11;
                goto lab_0x401e60_2;
            }
            v12 = v13;
            v11 = v12 + v2;
            v10 = v12 + (int64_t)fread_unlocked((int64_t *)v11, 1, 0x7800 - (int32_t)v12, (struct _IO_FILE *)a1);
        }
        // 0x401e2e
        v9 = v11;
        if (v10 == 0) {
            // break -> 0x401e33
            break;
        }
        goto lab_0x401e60_2;
    }
    int32_t v14 = v11; // 0x401dd0
    int64_t v15 = v8; // 0x401dd0
  lab_0x401e33:;
    int32_t v16 = v14; // 0x401e39
    if (a3 != 0 == (v15 != 0)) {
        uint64_t v17 = *v4; // 0x401f97
        if (v17 >= *v5) {
            // 0x401fb3
            v9 = a2;
            v16 = a2;
            if (__overflow(v6, 10) == -1) {
                char * format = dcgettext(NULL, "write error", 5); // 0x401fd1
                int32_t * err_num = __errno_location(); // 0x401fd9
                v9 = 1;
                error(1, *err_num, format);
              lab_0x401fef:;
                char * format2 = dcgettext(NULL, "write error", 5); // 0x401ffb
                int32_t * err_num2 = __errno_location(); // 0x402003
                v9 = 1;
                error(1, *err_num2, format2);
              lab_0x402019:;
                char * format3 = dcgettext(NULL, "write error", 5); // 0x402025
                int32_t * err_num3 = __errno_location(); // 0x40202d
                v9 = 1;
                error(1, *err_num3, format3);
              lab_0x402043:;
                char * format4 = dcgettext(NULL, "write error", 5); // 0x40204f
                int32_t * err_num4 = __errno_location(); // 0x402057
                v9 = 1;
                error(1, *err_num4, format4);
                // 0x40206d
                error(1, *__errno_location(), dcgettext(NULL, "read error", 5));
                return &g50;
            }
        } else {
            // 0x401fa1
            *v4 = v17 + 1;
            *(char *)v17 = 10;
            v16 = *(int32_t *)&v9;
        }
    }
    int64_t result = v16;
    if ((result & 32) == 0) {
        // 0x401e4c
        return result;
    }
    // 0x40206d
    error(1, *__errno_location(), dcgettext(NULL, "read error", 5));
    return &g50;
  lab_0x401e60_2:
    // 0x401e60
    v9 = v2;
    uint64_t n2 = (v10 + 2) / 0xc0000000 & 0x3fffffffc; // 0x401e7c
    function_402510(&v1, v10, &data2, n2);
    int32_t v18; // 0x401dd0
    int64_t v19; // 0x401dd0
    if (a3 != 0) {
        // 0x401ee0
        v18 = v2;
        v19 = v8;
        int64_t v20 = v8; // 0x401ee6
        if (n2 != 0) {
            int64_t v21 = 0;
            int64_t v22 = v20;
            uint64_t v23 = n2 - v21; // 0x401f14
            uint64_t v24 = a3 - v22; // 0x401f17
            uint64_t n = v24 > v23 ? v23 : v24; // 0x401f1d
            int64_t v25; // 0x401dd0
            int64_t v26; // 0x401dd0
            uint64_t v27; // 0x401ef0
            int64_t data; // 0x401f3d
            if (n == 0) {
                // 0x401ef0
                v27 = *v4;
                if (v27 >= *v5) {
                    // 0x401f70
                    v9 = a2;
                    if (__overflow(v6, 10) == -1) {
                        goto lab_0x402019;
                    }
                    // 0x401f8b
                    v26 = 0;
                    v25 = 0x100000000 * v21 >> 32;
                } else {
                    // 0x401efa
                    *v4 = v27 + 1;
                    *(char *)v27 = 10;
                    v26 = 0;
                    v25 = v21;
                }
            } else {
                // 0x401f26
                data = v21 + v3;
                v9 = data;
                if (n > (int64_t)fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g28)) {
                    goto lab_0x401fef;
                }
                // 0x401f63
                v26 = n + v22;
                v25 = n + v21;
            }
            int64_t v28 = v26;
            while (n2 > v25) {
                // 0x401f0c
                v21 = v25;
                v22 = v28;
                v23 = n2 - v21;
                v24 = a3 - v22;
                n = v24 > v23 ? v23 : v24;
                if (n == 0) {
                    // 0x401ef0
                    v27 = *v4;
                    if (v27 >= *v5) {
                        // 0x401f70
                        v9 = a2;
                        if (__overflow(v6, 10) == -1) {
                            goto lab_0x402019;
                        }
                        // 0x401f8b
                        v26 = 0;
                        v25 = 0x100000000 * v21 >> 32;
                    } else {
                        // 0x401efa
                        *v4 = v27 + 1;
                        *(char *)v27 = 10;
                        v26 = 0;
                        v25 = v21;
                    }
                } else {
                    // 0x401f26
                    data = v21 + v3;
                    v9 = data;
                    if (n > (int64_t)fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g28)) {
                        goto lab_0x401fef;
                    }
                    // 0x401f63
                    v26 = n + v22;
                    v25 = n + v21;
                }
                // 0x401f07
                v28 = v26;
            }
            // 0x401ec1
            v18 = *(int32_t *)&v9;
            v19 = v28;
        }
    } else {
        // 0x401e9c
        v9 = v3;
        int32_t v29 = fwrite_unlocked(&data2, 1, (int32_t)n2, g28); // 0x401eb3
        v18 = v3;
        v19 = v8;
        if (n2 > (int64_t)v29) {
            goto lab_0x402043;
        }
    }
    // 0x401ec1
    v7 = v19;
    v14 = v18;
    v15 = v7;
    if (v10 == 0x7800 != ((v18 & 48) == 0)) {
        goto lab_0x401e33;
    }
    goto lab_0x401df8;
}
// Address range: 0x4020a0 - 0x4023fd
int64_t function_4020a0(int32_t status) {
    // 0x4020a0
    if (status != 0) {
        // 0x4020ba
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4020df
        exit(status);
        // UNREACHABLE
    }
    // 0x4020e6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]\nBase%d encode or decode FILE, or standard input, to standard output.\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -d, --decode          decode data\n  -i, --ignore-garbage  when decoding, ignore non-alphabet characters\n  -w, --wrap=COLS       wrap encoded lines after COLS character (default 76).\n                          Use 0 to disable line wrapping\n\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "\nThe data are encoded as described for the %s alphabet in RFC 4648.\nWhen decoding, the input may contain newlines in addition to the bytes of\nthe formal %s alphabet.  Use --ignore-garbage to attempt to recover\nfrom any other non-alphabet bytes in the encoded stream.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x4021e0
    bool v2; // 0x4020a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402260
    int64_t v6 = *(int64_t *)v5; // 0x402264
    int64_t v7 = 7; // 0x40226a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"base64";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402276
        char v11 = *(char *)v9; // 0x402276
        char v12 = v11; // 0x402276
        bool v13 = false; // 0x402276
        while (v10 == v11) {
            // 0x40226c
            v7--;
            int64_t v14 = v9 + v3; // 0x402276
            int64_t v15 = v8 + v3; // 0x402276
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
            // break -> 0x402282
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x402282
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402394;
        } else {
            // 0x40237e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4023d3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4022e4;
            } else {
                goto lab_0x402394;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4022e4;
        } else {
            // 0x4022ca
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4023d3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4022e4;
            } else {
                goto lab_0x4022e4;
            }
        }
    }
  lab_0x402394:
    // 0x402394
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402324
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4020df
    exit(status);
    // UNREACHABLE
  lab_0x4022e4:
    // 0x4022e4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402324
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4020df
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402400 - 0x402508
int64_t function_402400(uint64_t a1, uint64_t a2, int64_t * a3, int64_t * a4) {
    // 0x402400
    if (a2 < 2) {
        // 0x4024c3
        return 0;
    }
    char v1 = *(char *)(a1 % 256 + (int64_t)&g3); // 0x402410
    if (v1 < 0) {
        // 0x4024c3
        return 0;
    }
    unsigned char v2 = *(char *)(a1 + 1); // 0x402421
    unsigned char v3 = *(char *)((int64_t)v2 + (int64_t)&g3); // 0x402426
    if (v3 < 0) {
        // 0x4024c3
        return 0;
    }
    int64_t v4 = (int64_t)a4;
    int64_t v5 = (int64_t)a3;
    int64_t v6 = v5; // 0x40243e
    if (a4 != NULL) {
        // 0x4024e0
        *(char *)a3 = v3 / 16 | 4 * v1;
        *a4 = v4 - 1;
        v6 = v5 + 1;
    }
    // 0x402444
    if (a2 == 2) {
        // 0x4024d4
        *a3 = v6;
        return 0;
    }
    unsigned char v7 = *(char *)(a1 + 2); // 0x40244e
    if (v7 == 61) {
        // 0x4024c8
        if (a2 != 4 || *(char *)(a1 + 3) != 61) {
            // 0x4024d4
            *a3 = v6;
            return 0;
        }
        // 0x4024bb
        *a3 = v6;
        // 0x4024c3
        return 1;
    }
    unsigned char v8 = *(char *)((int64_t)v7 + (int64_t)&g3); // 0x402459
    if (v8 < 0) {
        // 0x4024d4
        *a3 = v6;
        return 0;
    }
    int64_t v9 = v6; // 0x40246a
    if (a4 != NULL) {
        // 0x40246c
        *(char *)v6 = v8 / 4 | 16 * v3;
        *a4 = v4 - 1;
        v9 = v6 + 1;
    }
    // 0x402486
    if (a2 == 3) {
        // 0x4024d4
        *a3 = v9;
        return 0;
    }
    unsigned char v10 = *(char *)(a1 + 3); // 0x40248c
    if (v10 == 61) {
        // 0x402500
        if (a2 == 4) {
            // 0x4024bb
            *a3 = v9;
            // 0x4024c3
            return 1;
        }
        // 0x4024d4
        *a3 = v9;
        return 0;
    }
    char v11 = *(char *)((int64_t)v10 + (int64_t)&g3); // 0x402496
    if (v11 < 0) {
        // 0x4024d4
        *a3 = v9;
        return 0;
    }
    int64_t v12 = v9; // 0x4024a6
    if (a4 != NULL) {
        // 0x4024a8
        *(char *)v9 = v11 | 64 * v8;
        *a4 = v4 - 1;
        v12 = v9 + 1;
    }
    // 0x4024bb
    *a3 = v12;
    // 0x4024c3
    return 1;
}
// Address range: 0x402510 - 0x4026f1
int64_t function_402510(int64_t * a1, int64_t a2, int64_t * a3, uint64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a1;
    int64_t result2; // 0x402510
    if (a4 % 4 == 0) {
        int64_t v3 = 3 * a4 / 4; // 0x40251c
        result2 = v3;
        if (v3 == a2) {
            int64_t v4 = v1; // 0x402670
            if (a2 == 0) {
                // 0x40265b
                return 0;
            }
            unsigned char v5 = *(char *)v2; // 0x402678
            int64_t v6 = v2 + 3; // 0x40267f
            char v7 = *(char *)((int64_t)(v5 / 4) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x40268e
            *(char *)v4 = v7;
            unsigned char v8 = *(char *)(v2 + 1); // 0x402698
            char v9 = *(char *)((16 * (int64_t)v5 & 48 | (int64_t)(v8 / 16)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x4026a9
            *(char *)(v4 + 1) = v9;
            unsigned char v10 = *(char *)(v2 + 2); // 0x4026b3
            unsigned char result = *(char *)((int64_t)(v10 % 64) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x4026c1
            char v11 = *(char *)((4 * (int64_t)v8 & 60 | (int64_t)(v10 / 64)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x4026cf
            *(char *)(v4 + 2) = v11;
            *(char *)(v4 + 3) = result;
            v4 += 4;
            while (v2 + a2 != v6) {
                int64_t v12 = v6;
                v5 = *(char *)v12;
                v6 = v12 + 3;
                v7 = *(char *)((int64_t)(v5 / 4) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
                *(char *)v4 = v7;
                v8 = *(char *)(v12 + 1);
                v9 = *(char *)((16 * (int64_t)v5 & 48 | (int64_t)(v8 / 16)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
                *(char *)(v4 + 1) = v9;
                v10 = *(char *)(v12 + 2);
                result = *(char *)((int64_t)(v10 % 64) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
                v11 = *(char *)((4 * (int64_t)v8 & 60 | (int64_t)(v10 / 64)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
                *(char *)(v4 + 2) = v11;
                *(char *)(v4 + 3) = result;
                v4 += 4;
            }
            // 0x4026e1
            return result;
        }
    }
    int64_t v13 = v1 + a4;
    int64_t v14 = v13 - 4; // 0x402529
    int64_t v15 = a2; // 0x4025cd
    int64_t result3; // 0x402510
    int64_t v16; // 0x402510
    if (a2 == 0 || a4 == 0) {
        // 0x402660
        v16 = v1;
        result3 = result2;
        if (a4 == 0) {
            // 0x40265b
            return result2;
        }
      lab_0x402665:
        // 0x402665
        *(char *)v16 = 0;
        return result3;
    }
    int64_t v17 = a4;
    int64_t v18 = v1;
    int64_t v19 = v2;
    unsigned char v20 = *(char *)v19; // 0x4025dc
    int64_t v21 = v20; // 0x4025dc
    char v22 = *(char *)((int64_t)(v20 / 4) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x4025ea
    *(char *)v18 = v22;
    int64_t result4 = v21; // 0x4025f9
    int64_t v23; // 0x402510
    while (v17 != 1) {
        int64_t v24 = 16 * v21; // 0x4025fb
        if (v15 == 1) {
            unsigned char v25 = *(char *)((v24 & 48) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x40260b
            int64_t v26 = v25; // 0x40260b
            *(char *)(v18 + 1) = v25;
            result4 = v26;
            if (v17 == 2) {
                return result4;
            } else {
                // 0x40261f
                *(char *)(v18 + 2) = 61;
                v23 = v26;
                result4 = v26;
                if (v17 == 3) {
                    return result4;
                } else {
                    goto lab_0x40262d;
                }
            }
        }
        unsigned char v27 = *(char *)(v19 + 1); // 0x402540
        unsigned char v28 = *(char *)((v24 & 48 | (int64_t)(v27 / 16)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x402552
        *(char *)(v18 + 1) = v28;
        if (v17 == 2) {
            // 0x40265b
            result4 = v28;
            return result4;
        }
        int64_t v29 = 4 * (int64_t)v27; // 0x402566
        if (v15 == 2) {
            char v30 = *(char *)((v29 & 60) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x402644
            *(char *)(v18 + 2) = v30;
            int64_t v31 = v13 - v18; // 0x402652
            v23 = v31;
            result4 = v31;
            if (v31 != 3) {
                goto lab_0x40262d;
            } else {
                return result4;
            }
        }
        unsigned char v32 = *(char *)(v19 + 2); // 0x402574
        int64_t v33 = v32; // 0x402574
        char v34 = *(char *)((v29 & 60 | (int64_t)(v32 / 64)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x402586
        *(char *)(v18 + 2) = v34;
        result4 = v33;
        if (v13 - v18 == 3) {
            // break -> 0x40265b
            break;
        }
        unsigned char v35 = *(char *)(v33 % 64 + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"); // 0x4025a5
        *(char *)(v18 + 3) = v35;
        if (v14 == v18) {
            // 0x40265b
            result4 = v35;
            return result4;
        }
        // 0x4025c2
        v15 -= 3;
        int64_t v36 = v18 + 4; // 0x4025c2
        int64_t v37 = v17 - 4; // 0x4025c6
        if (v15 == 0 || v37 == 0) {
            int64_t v38 = v35; // 0x4025a5
            result4 = v38;
            v16 = v36;
            result3 = v38;
            if (v37 == 0) {
                return result4;
            } else {
                goto lab_0x402665;
            }
        }
        v17 = v37;
        v18 = v36;
        v19 += 3;
        v20 = *(char *)v19;
        v21 = v20;
        v22 = *(char *)((int64_t)(v20 / 4) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
        *(char *)v18 = v22;
        result4 = v21;
    }
  lab_0x40265b_3:
    // 0x40265b
    return result4;
  lab_0x40262d:
    // 0x40262d
    *(char *)(v18 + 3) = 61;
    result4 = v23;
    if (v14 == v18) {
        return result4;
    } else {
        // 0x4025c2
        result4 = v23;
        v16 = v18 + 4;
        result3 = v23;
        if (v17 == 4) {
            return result4;
        } else {
            goto lab_0x402665;
        }
    }
}
// Address range: 0x402700 - 0x402797
int64_t function_402700(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t result = (a2 + 2) / 0xc0000000 & 0x3fffffffc; // 0x402722
    uint64_t size = result | 1; // 0x40272a
    if (size < a2) {
        // 0x402733
        *(int64_t *)a3 = 0;
        return 0;
    }
    int64_t * mem = malloc((int32_t)size); // 0x402759
    *(int64_t *)a3 = (int64_t)mem;
    if (mem == NULL) {
        // 0x402788
        return size;
    }
    // 0x402767
    function_402510((int64_t *)a1, a2, mem, size);
    return result;
}
// Address range: 0x4027a0 - 0x4027b1
int64_t function_4027a0(unsigned char a1) {
    unsigned char v1 = *(char *)((int64_t)a1 + (int64_t)&g3); // 0x4027a4
    return (int64_t)(v1 / 128 ^ 1) | 0xffffff00;
}
// Address range: 0x4027c0 - 0x4027c7
int64_t function_4027c0(int64_t * a1) {
    // 0x4027c0
    *(int32_t *)a1 = 0;
    int64_t result; // 0x4027c0
    return result;
}
// Address range: 0x4027d0 - 0x402a30
int64_t function_4027d0(int64_t * a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t * a5) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = (int64_t)a4; // bp-80, 0x4027ed
    int64_t v3 = v1; // bp-64, 0x4027f7
    int64_t v4; // 0x4027d0
    int32_t v5 = v4;
    char v6 = 1; // 0x402801
    bool v7 = true; // 0x402801
    if (a1 != NULL) {
        // 0x402807
        v6 = a3 != 0;
        v7 = a3 != 0 == v5 == 0;
    }
    int64_t v8 = (int64_t)a1 + 4; // 0x402819
    int32_t v9 = v5; // 0x402821
    int32_t v10 = v5; // 0x402821
    int64_t v11 = v8; // 0x402821
    int64_t v12 = (int64_t)a2; // 0x402821
    int64_t v13 = a3; // 0x402821
    int64_t v14 = v1; // 0x402821
    int64_t v15; // 0x4027d0
    int64_t v16; // 0x4027d0
    int32_t v17; // 0x4029a4
    int32_t v18; // 0x4028a5
    int64_t v19; // 0x4027d0
    int64_t v20; // 0x4027d0
    int64_t v21; // 0x4027d0
    int64_t result; // 0x4027d0
    int64_t v22; // 0x4027d0
    int64_t v23; // 0x4027d0
    int64_t v24; // 0x4027d0
    int64_t v25; // 0x4027d0
    int64_t v26; // 0x4027d0
    int64_t v27; // 0x4027d0
    int64_t v28; // 0x4027d0
    while (true) {
      lab_0x40286c_2:;
        int64_t v29 = v14;
        int64_t v30 = v13;
        int64_t v31 = v12;
        v18 = v10;
        v17 = v9;
        int64_t v32 = v11; // 0x402872
        int64_t v33 = v29; // 0x402872
        int64_t v34 = v31; // 0x402872
        int64_t v35 = v30; // 0x402872
        int64_t v36 = v29; // 0x402872
        if (v7) {
            int64_t v37 = v31; // 0x40293f
            int64_t v38 = v30 + v31 - v37; // 0x402961
            int64_t v39 = function_402400(v37, v38, &v2, &v3); // 0x402967
            int64_t v40 = v3;
            v32 = v39;
            v33 = v40;
            v34 = v37;
            v35 = v38;
            v36 = v29;
            v37 += 4;
            while ((char)v39 != 0) {
                int64_t v41 = v40;
                v38 = v30 + v31 - v37;
                v39 = function_402400(v37, v38, &v2, &v3);
                v40 = v3;
                v32 = v39;
                v33 = v40;
                v34 = v37;
                v35 = v38;
                v36 = v41;
                v37 += 4;
            }
        }
        // 0x402878
        v27 = v35;
        int64_t v42 = v33;
        unsigned char v43 = v6 & (char)(v27 == 0); // 0x40287e
        int64_t v44 = v32 & -256 | (int64_t)v43; // 0x40287e
        result = v44;
        v25 = v42;
        if (v43 != 0) {
            // break -> 0x40291b
            break;
        }
        int64_t v45 = v36;
        v23 = v34;
        if (v27 != 0) {
            // 0x402828
            if (*(char *)v23 == 10) {
                if (a1 == NULL) {
                    // 0x4029d8
                    v3 = v45;
                    v2 += v42 - v45;
                    v16 = v23;
                    v24 = v23;
                    v28 = v27;
                    v21 = v27 + v23;
                    goto lab_0x4028f3;
                } else {
                    // 0x4029c5
                    v9 = v17;
                    v10 = v18;
                    v11 = v44;
                    v12 = v23 + 1;
                    v13 = v27 - 1;
                    v14 = v42;
                    goto lab_0x40286c_2;
                }
            } else {
                // 0x402831
                v3 = v45;
                int64_t v46 = v27 + v23; // 0x402839
                v2 += v42 - v45;
                v15 = v23;
                v22 = v23;
                v26 = v27;
                v19 = v46;
                v20 = v46;
                if (a1 != NULL) {
                    goto lab_0x4028a5;
                } else {
                    goto lab_0x40284a;
                }
            }
        } else {
            // 0x40288c
            v3 = v45;
            v2 += v42 - v45;
            v20 = v23;
            result = 1;
            v25 = v45;
            if (a1 == NULL) {
                // break -> 0x40291b
                break;
            }
            goto lab_0x4028a5;
        }
    }
  lab_0x40291b_2:
    // 0x40291b
    *a5 = v1 - v25;
    return result;
  lab_0x402911_2:
    // 0x402911
    result = 1;
    v25 = v3;
    goto lab_0x40291b_2;
  lab_0x40284a:;
    int64_t v47 = function_402400(v15, v26, &v2, &v3); // 0x402854
    result = v47;
    v25 = v3;
    if ((char)v47 == 0) {
        // break -> 0x40291b
        goto lab_0x40291b_2;
    }
    int32_t v48 = v15;
    v9 = v48;
    v10 = v48;
    v11 = v47;
    v12 = v22;
    v13 = v19 - v22;
    v14 = v3;
    goto lab_0x40286c;
  lab_0x4028a5:;
    int64_t v49 = v20;
    int32_t v50 = v18; // 0x4027d0
    switch (v18) {
        case 4: {
            // 0x402980
            *(int32_t *)a1 = 0;
            goto lab_0x402987;
        }
        case 0: {
            goto lab_0x402987;
        }
        default: {
            goto lab_0x4028b9;
        }
    }
  lab_0x402987:
    // 0x402987
    v50 = v17;
    if (v27 < 4) {
        goto lab_0x4028b9;
    } else {
        // 0x40298d
        v50 = v17;
        if (function_406500(v23, 10, 4) == 0) {
            // 0x402a1f
            v15 = v23;
            v22 = v23 + 4;
            v26 = 4;
            v19 = v49;
            goto lab_0x40284a;
        } else {
            goto lab_0x4028b9;
        }
    }
  lab_0x4028b9:;
    int64_t v51 = v50;
    int64_t v52 = v51; // 0x4028bc
    int64_t v53 = v23; // 0x4028bc
    int64_t v54 = v51; // 0x4028bc
    int64_t v55 = v23; // 0x4028bc
    if (v23 < v49) {
        int64_t v56 = v52;
        int64_t v57 = v53 + 1; // 0x4028c0
        char v58 = *(char *)v53; // 0x4028c4
        int64_t v59 = v56; // 0x4028cb
        int64_t v60; // 0x4028cd
        int32_t v61; // 0x4028d0
        if (v58 != 10) {
            // 0x4028cd
            v60 = v56 + 1;
            v61 = v60;
            *(int32_t *)a1 = v61;
            *(char *)(v56 + v8) = v58;
            v15 = v8;
            v22 = v57;
            v26 = 4;
            v19 = v49;
            if (v61 == 4) {
                goto lab_0x40284a;
            }
            // 0x4028e1
            v59 = v60 & 0xffffffff;
        }
        // 0x4028e3
        v53 = v57;
        v54 = v59;
        v55 = v57;
        while (v57 != v49) {
            // 0x4028c0
            v56 = v59;
            v57 = v53 + 1;
            v58 = *(char *)v53;
            v59 = v56;
            if (v58 != 10) {
                // 0x4028cd
                v60 = v56 + 1;
                v61 = v60;
                *(int32_t *)a1 = v61;
                *(char *)(v56 + v8) = v58;
                v15 = v8;
                v22 = v57;
                v26 = 4;
                v19 = v49;
                if (v61 == 4) {
                    goto lab_0x40284a;
                }
                // 0x4028e1
                v59 = v60 & 0xffffffff;
            }
            // 0x4028e3
            v53 = v57;
            v54 = v59;
            v55 = v57;
        }
    }
    int64_t v62 = v54 & 0xffffffff; // 0x4028e8
    v16 = v8;
    v24 = v55;
    v28 = v62;
    v21 = v49;
    if (v62 == 0) {
        goto lab_0x402911_2;
    }
    goto lab_0x4028f3;
  lab_0x4028f3:
    // 0x4028f3
    v15 = v16;
    v22 = v24;
    v26 = v28;
    v19 = v21;
    if (v28 < 4) {
        // 0x4028fd
        int64_t v63; // 0x4027d0
        v15 = v63;
        int64_t v64; // 0x4027d0
        v22 = v64;
        int64_t v65; // 0x4027d0
        v26 = v65;
        int64_t v66; // 0x4027d0
        v19 = v66;
        bool v67; // 0x4027d0
        if (!v67) {
            goto lab_0x402911_2;
        }
    }
    goto lab_0x40284a;
  lab_0x40286c:
    // 0x40286c
    goto lab_0x40286c_2;
}
// Address range: 0x402a30 - 0x402add
int64_t function_402a30(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a3 / 4; // 0x402a3a
    int64_t size = v1 + 3 + 2 * v1; // 0x402a46
    int64_t v2 = size; // bp-48, 0x402a57
    int64_t * mem = malloc((int32_t)size); // 0x402a5c
    int64_t * v3 = (int64_t *)a4; // 0x402a61
    *v3 = (int64_t)mem;
    if (mem == NULL) {
        // 0x402aa0
        return 1;
    }
    uint64_t result = function_4027d0((int64_t *)a1, (int64_t *)a2, a3, mem, &v2); // 0x402a7a
    if ((char)result == 0) {
        // 0x402ab8
        free(mem);
        *v3 = 0;
        return result % 256;
    }
    if (a5 == 0) {
        // 0x402aa0
        return 1;
    }
    // 0x402a88
    *(int64_t *)a5 = v2;
    return result;
}
// Address range: 0x402ae0 - 0x402ae8
int64_t function_402ae0(int64_t a1) {
    // 0x402ae0
    g35 = a1;
    int64_t result; // 0x402ae0
    return result;
}
// Address range: 0x402af0 - 0x402af8
int64_t function_402af0(int64_t a1) {
    // 0x402af0
    g34 = a1;
    int64_t result; // 0x402af0
    return result;
}
// Address range: 0x402b00 - 0x402b9e
int64_t function_402b00(void) {
    // 0x402b00
    int32_t * err_num; // 0x402b16
    if ((int32_t)function_406610((int64_t)g28) == 0) {
        goto lab_0x402b2c;
    } else {
        // 0x402b16
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x402b43;
        } else {
            // 0x402b27
            if (*err_num != 32) {
                goto lab_0x402b43;
            } else {
                goto lab_0x402b2c;
            }
        }
    }
  lab_0x402b2c:;
    int64_t result = function_406610((int64_t)g31); // 0x402b33
    if ((int32_t)result == 0) {
        // 0x402b3c
        return result;
    }
    // 0x402b7e
    _exit(g18);
    // UNREACHABLE
  lab_0x402b43:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402b4f
    if (g35 == 0) {
        // 0x402b89
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402b63
        error(0, *err_num, "%s: %s", (char *)function_404650((int64_t)g35), v1);
    }
    // 0x402b7e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x402ba0 - 0x402ba5
int64_t function_402ba0(void) {
    // 0x402ba0
    int64_t fd; // 0x402ba0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402bb0 - 0x402bd1
int64_t function_402bb0(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402bb0
    if (stream == 0) {
        // 0x402bd0
        int64_t result; // 0x402bb0
        return result;
    }
    // 0x402bb5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402be0 - 0x402c79
int64_t function_402be0(int64_t str) {
    // 0x402be0
    if (str == 0) {
        // 0x402c59
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402bee
    int64_t result = (int64_t)found_char_pos; // 0x402bee
    if (found_char_pos == NULL) {
        // 0x402c49
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402bf8
    if (v1 - str < 7) {
        // 0x402c49
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x402c08
    bool v2; // 0x402be0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402be0
    int64_t v5 = result - 6; // 0x402be0
    int64_t v6 = 7; // 0x402c16
    unsigned char v7 = *(char *)v5; // 0x402c16
    char v8 = *(char *)v4; // 0x402c16
    char v9 = v8; // 0x402c16
    bool v10 = false; // 0x402c16
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
    int64_t v12 = (int64_t)"lt-"; // 0x402c20
    int64_t v13 = v1; // 0x402c20
    int64_t v14 = 3; // 0x402c20
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402c49
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402c32
    char v16 = *(char *)v12; // 0x402c32
    char v17 = v16; // 0x402c32
    bool v18 = false; // 0x402c32
    while (v15 == v16) {
        // 0x402c22
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
    int64_t v20 = v1; // 0x402c3c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402c3e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402c49
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402c80 - 0x402d72
int64_t function_402c80(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402c94
    int64_t result = (int64_t)v1; // 0x402c94
    if (result != a1) {
        // 0x402ca1
        return result;
    }
    int64_t v2 = function_4066d0(); // 0x402cb0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402d66
    if (v3 == 85) {
        // 0x402cc0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402d58
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x402cee
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x402cfb
        // 0x402ca1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402d58
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x402d3d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x402d4a
    // 0x402ca1
    return result4;
}
// Address range: 0x402d80 - 0x402dd7
int64_t function_402d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402d80
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402dc8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402dd7 - 0x403fa1
int64_t function_402dd7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402e21
    int64_t v3 = 0; // 0x402e21
    int64_t v4; // 0x402dd7
    int64_t v5; // 0x402dd7
    int64_t v6; // 0x402dd7
    int64_t v7; // 0x402dd7
    int64_t v8; // 0x402dd7
    int64_t v9; // 0x402dd7
    int64_t v10; // 0x402dd7
    int64_t v11; // 0x402dd7
    int64_t v12; // 0x402dd7
    int64_t v13; // 0x402dd7
    int64_t v14; // 0x402dd7
    int64_t v15; // 0x402dd7
    int64_t v16; // 0x402dd7
    int64_t v17; // 0x402dd7
    int64_t v18; // 0x402dd7
    int64_t result; // 0x402dd7
    int64_t v19; // 0x402dd7
    int32_t wc; // bp+132, 0x402dd7
    int64_t ps; // bp+136, 0x402dd7
    char v20; // 0x403390
    int64_t v21; // 0x403390
    int64_t v22; // 0x403738
    int64_t v23; // 0x402dd7
    int64_t v24; // 0x403757
    int32_t v25; // 0x402dd7
    while (true) {
      lab_0x402e28_2:
        // 0x402e28
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402dd7
        int64_t v27; // 0x402e5c
        while (true) {
          lab_0x402e28:
            // 0x402e28
            v5 = v26;
            bool v28 = v15 == v5; // 0x402e33
            if (v15 == -1) {
                // 0x402e35
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402e43
            if (v28) {
                // break (via goto) -> 0x4035a8
                goto lab_0x4035a8;
            }
            // 0x402e4c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g49 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40343b
                    if (v25 % 2 == 0) {
                        goto lab_0x402f81;
                    }
                    // 0x40385d
                    v26 = v5 + 1;
                    goto lab_0x402e28;
                }
                case 7: {
                    goto lab_0x402f81;
                }
                case 8: {
                    goto lab_0x402f81;
                }
                case 9: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402f81;
                }
                case 12: {
                    goto lab_0x402f81;
                }
                case 13: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402f4d;
                }
                case 36: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402f81;
                }
                case 38: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402f81;
                }
                case 44: {
                    goto lab_0x402f81;
                }
                case 45: {
                    goto lab_0x402f81;
                }
                case 46: {
                    goto lab_0x402f81;
                }
                case 47: {
                    goto lab_0x402f81;
                }
                case 48: {
                    goto lab_0x402f81;
                }
                case 49: {
                    goto lab_0x402f81;
                }
                case 50: {
                    goto lab_0x402f81;
                }
                case 51: {
                    goto lab_0x402f81;
                }
                case 52: {
                    goto lab_0x402f81;
                }
                case 53: {
                    goto lab_0x402f81;
                }
                case 54: {
                    goto lab_0x402f81;
                }
                case 55: {
                    goto lab_0x402f81;
                }
                case 56: {
                    goto lab_0x402f81;
                }
                case 57: {
                    goto lab_0x402f81;
                }
                case 58: {
                    goto lab_0x402f81;
                }
                case 59: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402f81;
                }
                case 66: {
                    goto lab_0x402f81;
                }
                case 67: {
                    goto lab_0x402f81;
                }
                case 68: {
                    goto lab_0x402f81;
                }
                case 69: {
                    goto lab_0x402f81;
                }
                case 70: {
                    goto lab_0x402f81;
                }
                case 71: {
                    goto lab_0x402f81;
                }
                case 72: {
                    goto lab_0x402f81;
                }
                case 73: {
                    goto lab_0x402f81;
                }
                case 74: {
                    goto lab_0x402f81;
                }
                case 75: {
                    goto lab_0x402f81;
                }
                case 76: {
                    goto lab_0x402f81;
                }
                case 77: {
                    goto lab_0x402f81;
                }
                case 78: {
                    goto lab_0x402f81;
                }
                case 79: {
                    goto lab_0x402f81;
                }
                case 80: {
                    goto lab_0x402f81;
                }
                case 81: {
                    goto lab_0x402f81;
                }
                case 82: {
                    goto lab_0x402f81;
                }
                case 83: {
                    goto lab_0x402f81;
                }
                case 84: {
                    goto lab_0x402f81;
                }
                case 85: {
                    goto lab_0x402f81;
                }
                case 86: {
                    goto lab_0x402f81;
                }
                case 87: {
                    goto lab_0x402f81;
                }
                case 88: {
                    goto lab_0x402f81;
                }
                case 89: {
                    goto lab_0x402f81;
                }
                case 90: {
                    goto lab_0x402f81;
                }
                case 91: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402f81;
                }
                case 94: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402f81;
                }
                case 96: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402f81;
                }
                case 98: {
                    goto lab_0x402f81;
                }
                case 99: {
                    goto lab_0x402f81;
                }
                case 100: {
                    goto lab_0x402f81;
                }
                case 101: {
                    goto lab_0x402f81;
                }
                case 102: {
                    goto lab_0x402f81;
                }
                case 103: {
                    goto lab_0x402f81;
                }
                case 104: {
                    goto lab_0x402f81;
                }
                case 105: {
                    goto lab_0x402f81;
                }
                case 106: {
                    goto lab_0x402f81;
                }
                case 107: {
                    goto lab_0x402f81;
                }
                case 108: {
                    goto lab_0x402f81;
                }
                case 109: {
                    goto lab_0x402f81;
                }
                case 110: {
                    goto lab_0x402f81;
                }
                case 111: {
                    goto lab_0x402f81;
                }
                case 112: {
                    goto lab_0x402f81;
                }
                case 113: {
                    goto lab_0x402f81;
                }
                case 114: {
                    goto lab_0x402f81;
                }
                case 115: {
                    goto lab_0x402f81;
                }
                case 116: {
                    goto lab_0x402f81;
                }
                case 117: {
                    goto lab_0x402f81;
                }
                case 118: {
                    goto lab_0x402f81;
                }
                case 119: {
                    goto lab_0x402f81;
                }
                case 120: {
                    goto lab_0x402f81;
                }
                case 121: {
                    goto lab_0x402f81;
                }
                case 122: {
                    goto lab_0x402f81;
                }
                case 123: {
                    goto lab_0x402f25;
                }
                case 124: {
                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402f25;
                }
                case 126: {
                    goto lab_0x402f4d;
                }
                default: {
                    goto lab_0x403325;
                }
            }
        }
      lab_0x403325:
        if (v23 != 1) {
            // 0x403690
            ps = 0;
            int64_t len = v15; // 0x4036a0
            if (v15 == -1) {
                // 0x4036a2
                len = strlen((char *)str);
            }
            // 0x4036ce
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40372f:
                // 0x40372f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403734
                int64_t v30 = v29 + str;
                v24 = function_406480(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403caa_2;
                    }
                    case -1: {
                        goto lab_0x403caa_2;
                    }
                    case -2: {
                        // 0x403d8d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403dc7
                            v19 = v18;
                            int64_t v31 = v18; // 0x403dca
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403dd7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403dd0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403caa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403caa_2;
                    }
                    case 1: {
                        goto lab_0x403700;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4037ac
                        char v34 = *(char *)v33; // 0x4037bd
                        unsigned char v35; // 0x402dd7
                        if (v34 < 125) {
                            // 0x4037c8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4037df
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4037b0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4037bd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4037c8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4037df
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4037b0
                            v33++;
                        }
                        goto lab_0x403700;
                    }
                }
            }
            goto lab_0x403caa_2;
        } else {
            // 0x403374
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402f81;
        }
    }
  lab_0x4035a8:
    // 0x4035a8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403eaa
        if (v8 > result) {
            // 0x403eb3
            *(char *)(v12 + result) = 0;
        }
        // 0x4031d7
        return result;
    }
    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402f81:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402f90
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40319a_2;
        }
    }
    int64_t v39 = result; // 0x403091
    char v40 = v20; // 0x403091
    int64_t v41 = v38; // 0x403091
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403091
    int64_t v43 = v36; // 0x403091
    goto lab_0x40300d;
  lab_0x40319a_2:
    // 0x4031d7
    return function_402d80(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403caa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402f81;
    } else {
        uint64_t v49 = v46 + v5; // 0x40387e
        int64_t v50 = v5 + 1; // 0x403961
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403968
        char v52 = v20; // 0x403968
        int64_t v53 = result; // 0x403968
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403931
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403935
            int64_t v56 = v54 + 1; // 0x40393a
            int64_t v57 = v51 + 1; // 0x403961
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40392c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403931
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403935
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
        goto lab_0x40300d;
    }
  lab_0x403700:
    // 0x403700
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40371f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403722
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403caa
        goto lab_0x403caa_2;
    }
    goto lab_0x40372f;
  lab_0x402f4d:
    // 0x402f4d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40319a_2;
    }
    goto lab_0x402f81;
  lab_0x402f25:;
    bool v60 = v15 == 1; // 0x402f30
    if (v15 == -1) {
        // 0x402f32
        v60 = *(char *)v1 == 0;
    }
    // 0x402f3e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402f81;
    } else {
        goto lab_0x402f4d;
    }
  lab_0x40300d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403012
        *(char *)(v44 + v45) = v40;
    }
    // 0x403016
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402e28_2;
}
// Address range: 0x403fb0 - 0x40414e
int64_t function_403fb0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403fb2
    int32_t * v3 = __errno_location(); // 0x403fcc
    int64_t v4 = (int64_t)g20; // 0x403fd1
    int32_t v5 = *v3; // 0x403fdb
    int64_t v6 = v4; // 0x403ff1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404149
            function_405010(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404000
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404007
        int64_t v9; // 0x403fb0
        if (g20 == &g21) {
            int64_t v10 = function_404e20(0, v8); // 0x40412a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40412f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404e20(v4, v8); // 0x40401b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40402a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40402a
        int32_t v14 = v7; // 0x404031
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404061
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40406b
    int64_t * v17 = (int64_t *)v15; // 0x40406e
    uint64_t v18 = *v17; // 0x40406e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404071
    int64_t result = *v19; // 0x404071
    int64_t v20; // 0x403fb0
    uint64_t v21 = function_402d80(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404094
    if (v18 > v21) {
        // 0x40410b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4040a7
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x4040b7
        free((int64_t *)result);
    }
    int64_t result2 = function_404dc0(v22); // 0x4040d1
    *v19 = result2;
    int64_t v23; // 0x403fb0
    function_402d80(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40410b
    *v3 = v5;
    return result2;
}
// Address range: 0x404150 - 0x404184
int64_t function_404150(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404157
    int64_t result = function_404fc0(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x404176
    return result;
}
// Address range: 0x404190 - 0x40419f
int64_t function_404190(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x40419c
    return result;
}
// Address range: 0x4041a0 - 0x4041af
int64_t function_4041a0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x4041a8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x4041b0 - 0x4041e3
int64_t function_4041b0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x4041c9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4041ce
    uint32_t v3 = *v2; // 0x4041ce
    uint32_t v4 = (int32_t)a2 % 32; // 0x4041d2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4041f0 - 0x404203
int64_t function_4041f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x4041fc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404210 - 0x40423b
int64_t function_404210(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x404218
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404235
        abort();
        // UNREACHABLE
    }
    // 0x40422c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x404240 - 0x4042b2
int64_t function_404240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x404262
    int32_t * v2 = __errno_location(); // 0x40426b
    uint32_t v3 = *(int32_t *)v1; // 0x40428b
    int64_t result = function_402d80(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40429a
    return result;
}
// Address range: 0x4042c0 - 0x4043a1
int64_t function_4042c0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x4042e2
    int32_t * v2 = __errno_location(); // 0x4042e8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404307
    int32_t * v4 = (int32_t *)v1; // 0x40430a
    int64_t v5 = function_402d80(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404325
    int64_t v6 = v5 + 1; // 0x40432a
    int64_t result = function_404dc0(v6); // 0x40433f
    function_402d80(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404384
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40438d
    return result;
}
// Address range: 0x4043b0 - 0x4043ba
int64_t function_4043b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4043b0
    return function_4042c0(a1, a2, 0, a3);
}
// Address range: 0x4043c0 - 0x404455
int64_t function_4043c0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x4043c0
    int64_t v2 = v1; // 0x4043c0
    int64_t v3 = v2; // 0x4043d4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x4043f3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4043f0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x40440d
    if (g21 != 0x60b2c0) {
        // 0x40440f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g37;
        v6 = &g50;
    }
    int64_t result = v6; // 0x404431
    if (g20 != &g21) {
        // 0x404433
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g50;
    }
    // 0x404446
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x404460 - 0x404471
int64_t function_404460(void) {
    // 0x404460
    int64_t v1; // 0x404460
    return function_403fb0(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x404480 - 0x40448a
int64_t function_404480(void) {
    // 0x404480
    int64_t v1; // 0x404480
    return function_403fb0(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x404490 - 0x4044a6
int64_t function_404490(int64_t a1) {
    // 0x404490
    return function_403fb0(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x4044b0 - 0x4044c2
int64_t function_4044b0(int64_t a1, int64_t a2) {
    // 0x4044b0
    return function_403fb0(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x4044d0 - 0x404538
int64_t function_4044d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4044e0
    return function_403fb0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404540 - 0x4045a4
int64_t function_404540(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404550
    return function_403fb0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4045b0 - 0x4045bc
int64_t function_4045b0(int64_t a1, int64_t a2) {
    // 0x4045b0
    return function_4044d0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4045c0 - 0x4045cf
int64_t function_4045c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045c0
    return function_404540(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4045d0 - 0x404640
int64_t function_4045d0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4045dd
    int128_t v2 = __asm_movdqa(g39); // 0x4045e5
    int128_t v3 = __asm_movdqa(g40); // 0x4045ed
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404602
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404618
    uint32_t v6 = *v5; // 0x404618
    uint32_t v7 = (int32_t)a3 % 32; // 0x40461d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403fb0(0, a1, a2, &v4);
}
// Address range: 0x404640 - 0x40464d
int64_t function_404640(int64_t a1, int64_t a2) {
    // 0x404640
    return function_4045d0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404650 - 0x404661
int64_t function_404650(int64_t a1) {
    // 0x404650
    return function_4045d0(a1, -1, 58);
}
// Address range: 0x404670 - 0x40467a
int64_t function_404670(void) {
    // 0x404670
    int64_t v1; // 0x404670
    return function_4045d0(v1, v1, 58);
}
// Address range: 0x404680 - 0x4046ee
int64_t function_404680(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40469a
    return function_403fb0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4046f0 - 0x40475c
int64_t function_4046f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4046f7
    int128_t v2 = __asm_movdqa(g39); // 0x4046ff
    int128_t v3 = __asm_movdqa(g40); // 0x404707
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404729
    if (a2 == 0 || a3 == 0) {
        // 0x404757
        abort();
        // UNREACHABLE
    }
    // 0x40473a
    return function_403fb0(a1, a4, a5, &v4);
}
// Address range: 0x404760 - 0x404769
int64_t function_404760(void) {
    // 0x404760
    int64_t v1; // 0x404760
    return function_4046f0(v1, v1, v1, v1, -1);
}
// Address range: 0x404770 - 0x404787
int64_t function_404770(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404770
    return function_4046f0(0, a1, a2, a3, -1);
}
// Address range: 0x404790 - 0x4047a3
int64_t function_404790(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404790
    return function_4046f0(0, a1, a2, a3, a4);
}
// Address range: 0x4047b0 - 0x4047ba
int64_t function_4047b0(void) {
    // 0x4047b0
    int64_t v1; // 0x4047b0
    return function_403fb0(v1, v1, v1, &g19);
}
// Address range: 0x4047c0 - 0x4047d2
int64_t function_4047c0(int64_t a1, int64_t a2) {
    // 0x4047c0
    return function_403fb0(0, a1, a2, &g19);
}
// Address range: 0x4047e0 - 0x4047f1
int64_t function_4047e0(void) {
    // 0x4047e0
    int64_t v1; // 0x4047e0
    return function_403fb0(v1, v1, -1, &g19);
}
// Address range: 0x404800 - 0x404816
int64_t function_404800(int64_t a1) {
    // 0x404800
    return function_403fb0(0, a1, -1, &g19);
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
        return function_404820(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
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
    return function_404820(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x404c20 - 0x404c80
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404c20
    int64_t v3 = &v2; // 0x404c20
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404c53
    int64_t v6; // 0x404c3d
    int64_t * v7; // 0x404c5b
    int64_t v8; // 0x404c5b
    int64_t v9; // 0x404c67
    if (v5 < 48) {
        // 0x404c30
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404c73
            break;
        }
    } else {
        // 0x404c5b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404c73
            break;
        }
    }
    int64_t v10 = 10; // 0x404c51
    while (v4 != 9) {
        // 0x404c49
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404c30
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404c73
                break;
            }
        } else {
            // 0x404c5b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404c73
                break;
            }
        }
        // 0x404c49
        v10 = 10;
    }
    // 0x404c73
    return function_404820(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x404c80 - 0x404d3c
int64_t function_404c80(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
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
    int64_t result = function_404820(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x404d2f
    return result;
}
// Address range: 0x404d40 - 0x404db4
int64_t function_404d40(int64_t a1) {
    // 0x404d40
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404da3
    return fputs_unlocked(v1, g28);
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
        return (int32_t)&g50 ^ (int32_t)&g50;
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
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405050 - 0x405120
int64_t function_405050(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x405050
    int64_t result2; // bp-64, 0x405050
    int32_t v1 = function_405150(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x40507c
    int32_t * v2; // 0x405050
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x4050fa
        if (v1 == 1) {
            // 0x405118
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x405107
            v2 = v3;
            if (v1 == 3) {
                // 0x40510c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x405080
        if (result >= a3 && result <= a4) {
            // 0x4050e2
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x40508f
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_404800(a1); // 0x4050ac
    int32_t v6 = *v2; // 0x4050b1
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x4050c7
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x4050e2
    return result2;
}
// Address range: 0x405120 - 0x405141
int64_t function_405120(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x405120
    int64_t result; // 0x405120
    return result;
}
// Address range: 0x405150 - 0x405590
int64_t function_405150(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40515e
    if (v1 >= 37) {
        // 0x40556b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g50;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x405182
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x4051b2
    int64_t v4 = a1; // 0x4051b7
    char v5 = c; // 0x4051b7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x4051ac
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x4051a8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x4051b9
    if (v5 == 45) {
        // 0x4051f5
        return 4;
    }
    // 0x4051be
    int64_t v7; // bp-64, 0x405150
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x40517e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x4051c6
    int64_t * v10 = (int64_t *)v8; // 0x4051cb
    int64_t v11 = *v10; // 0x4051cb
    char v12; // 0x405150
    int64_t v13; // 0x405150
    int64_t v14; // 0x405150
    int64_t v15; // 0x405150
    int64_t v16; // 0x405150
    int64_t v17; // 0x405150
    int64_t v18; // 0x405150
    if (v11 == a1) {
        // 0x405228
        if (c == 0 || str == 0) {
            // 0x4051f5
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x405249
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x4051f5
            return 4;
        }
        goto lab_0x405257;
    } else {
        int32_t v19 = *v2; // 0x4051d6
        int64_t v20 = 0; // 0x4051dc
        if (v19 != 0) {
            // 0x405210
            v20 = 1;
            if (v19 != 34) {
                // 0x4051f5
                return 4;
            }
        }
        int64_t v21 = v9; // 0x4051c6
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x4051f2;
        } else {
            char c2 = *(char *)v11; // 0x4051e5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x405353
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x405257;
                } else {
                    goto lab_0x405365;
                }
            } else {
                goto lab_0x4051f2;
            }
        }
    }
  lab_0x405257:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40525f
    int64_t v24 = 1; // 0x40525f
    int64_t v25; // 0x405150
    int64_t v26; // 0x405150
    int64_t v27; // 0x405150
    int64_t v28; // 0x405150
    int64_t v29; // 0x405150
    int64_t v30; // 0x405150
    int64_t v31; // 0x405150
    int64_t v32; // 0x405150
    int64_t v33; // 0x405150
    int64_t v34; // 0x405150
    int64_t v35; // 0x405150
    int64_t v36; // 0x405150
    int64_t v37; // 0x405150
    int64_t v38; // 0x405150
    int64_t v39; // 0x405150
    int64_t v40; // 0x405150
    int64_t v41; // 0x405150
    int64_t v42; // 0x405150
    int64_t v43; // 0x405150
    int64_t v44; // 0x405150
    if (v22 < 48) {
        // 0x405261
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4052ca;
        } else {
            // 0x405274
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4052ca;
            } else {
                // 0x405290
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x4052ca;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x4054f9
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x4052ca;
                    }
                    default: {
                        // 0x4052a5
                        g47 = v22;
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
                                goto lab_0x40546b;
                            }
                            case 70: {
                                goto lab_0x405365;
                            }
                            case 71: {
                                goto lab_0x4054a3;
                            }
                            case 72: {
                                goto lab_0x405365;
                            }
                            case 73: {
                                goto lab_0x405365;
                            }
                            case 74: {
                                goto lab_0x405365;
                            }
                            case 75: {
                                goto lab_0x40532c;
                            }
                            case 76: {
                                goto lab_0x405365;
                            }
                            case 77: {
                                goto lab_0x4052ee;
                            }
                            case 78: {
                                goto lab_0x405365;
                            }
                            case 79: {
                                goto lab_0x405365;
                            }
                            case 80: {
                                goto lab_0x405438;
                            }
                            case 81: {
                                goto lab_0x405365;
                            }
                            case 82: {
                                goto lab_0x405365;
                            }
                            case 83: {
                                goto lab_0x405365;
                            }
                            case 84: {
                                goto lab_0x405408;
                            }
                            case 85: {
                                goto lab_0x405365;
                            }
                            case 86: {
                                goto lab_0x405365;
                            }
                            case 87: {
                                goto lab_0x405365;
                            }
                            case 88: {
                                goto lab_0x405365;
                            }
                            case 89: {
                                goto lab_0x4053d6;
                            }
                            case 90: {
                                goto lab_0x40539b;
                            }
                            case 91: {
                                goto lab_0x405365;
                            }
                            case 92: {
                                goto lab_0x405365;
                            }
                            case 93: {
                                goto lab_0x405365;
                            }
                            case 94: {
                                goto lab_0x405365;
                            }
                            case 95: {
                                goto lab_0x405365;
                            }
                            case 96: {
                                goto lab_0x405365;
                            }
                            case 97: {
                                goto lab_0x405365;
                            }
                            case 98: {
                                goto lab_0x40537f;
                            }
                            case 99: {
                                goto lab_0x405308;
                            }
                            case 100: {
                                goto lab_0x405365;
                            }
                            case 101: {
                                goto lab_0x405365;
                            }
                            case 102: {
                                goto lab_0x405365;
                            }
                            case 103: {
                                goto lab_0x4054a3;
                            }
                            case 104: {
                                goto lab_0x405365;
                            }
                            case 105: {
                                goto lab_0x405365;
                            }
                            case 106: {
                                goto lab_0x405365;
                            }
                            case 107: {
                                goto lab_0x40532c;
                            }
                            case 108: {
                                goto lab_0x405365;
                            }
                            case 109: {
                                goto lab_0x4052ee;
                            }
                            case 110: {
                                goto lab_0x405365;
                            }
                            case 111: {
                                goto lab_0x405365;
                            }
                            case 112: {
                                goto lab_0x405365;
                            }
                            case 113: {
                                goto lab_0x405365;
                            }
                            case 114: {
                                goto lab_0x405365;
                            }
                            case 115: {
                                goto lab_0x405365;
                            }
                            case 116: {
                                goto lab_0x405408;
                            }
                            default: {
                                goto lab_0x4052ca;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4052ca;
    }
  lab_0x4051f2:
    // 0x4051f2
    *a4 = v16;
    // 0x4051f5
    return v13 & 0xffffffff;
  lab_0x4052ca:
    // 0x4052ca
    g48 = v12 - 66;
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
    int64_t v46; // 0x405150
    switch (v12) {
        case 66: {
            // 0x4054c4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x405337;
            } else {
                // 0x4054d1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405308;
            }
        }
        case 69: {
            goto lab_0x40546b;
        }
        case 71: {
            goto lab_0x4054a3;
        }
        case 75: {
            goto lab_0x40532c;
        }
        case 77: {
            goto lab_0x4052ee;
        }
        case 80: {
            goto lab_0x405438;
        }
        case 84: {
            goto lab_0x405408;
        }
        case 89: {
            goto lab_0x4053d6;
        }
        case 90: {
            goto lab_0x40539b;
        }
        case 98: {
            goto lab_0x40537f;
        }
        case 99: {
            goto lab_0x405308;
        }
        case 103: {
            goto lab_0x4054a3;
        }
        case 107: {
            goto lab_0x40532c;
        }
        case 109: {
            goto lab_0x4052ee;
        }
        case 116: {
            goto lab_0x405408;
        }
        case 119: {
            // 0x405370
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x405337;
            } else {
                // 0x405375
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405308;
            }
        }
        default: {
            goto lab_0x405365;
        }
    }
  lab_0x40546b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x405483
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x40548f
    int64_t v51 = v48; // 0x405492
    int64_t v52 = v37; // 0x405492
    int64_t v53 = v49; // 0x405492
    int32_t v54 = v50; // 0x405492
    int64_t v55 = v49; // 0x405492
    while (v50 != 0) {
        // 0x405480
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
    goto lab_0x4053c4;
  lab_0x4054a3:
    // 0x4054a3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4054ae
        int128_t v56; // 0x4054a9
        uint128_t v57; // 0x4054a9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4054ae
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x405150
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x4054b3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x4054b8
                v26 = v60;
                int64_t v61; // 0x405150
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x405308;
  lab_0x40532c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40532f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x405308;
    } else {
        goto lab_0x405337;
    }
  lab_0x4052ee:;
    int128_t v65 = v27; // 0x4052f4
    uint128_t v66 = v65 * (int128_t)v17; // 0x4052f4
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x405337;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x4052f9
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x405337;
        } else {
            // 0x4052fe
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x405308;
        }
    }
  lab_0x405438:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40544b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x405457
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40545a
    int64_t v73 = v70; // 0x40545a
    while (v71 != 0) {
        // 0x405448
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
    goto lab_0x4053c4;
  lab_0x405408:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40541b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x405427
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40542a
    int64_t v79 = v76; // 0x40542a
    while (v77 != 0) {
        // 0x405418
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
    goto lab_0x4053c4;
  lab_0x4053d6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x4053eb
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x4053f7
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x4053fa
    int64_t v85 = v82; // 0x4053fa
    while (v83 != 0) {
        // 0x4053e8
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
    goto lab_0x4053c4;
  lab_0x40539b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x4053b3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x4053bf
    int32_t v90 = v89; // 0x4053c2
    int64_t v91 = v88; // 0x4053c2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x4053b0
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
    goto lab_0x4053c4;
  lab_0x40537f:
    // 0x40537f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x405337;
    } else {
        // 0x405388
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x405308;
    }
  lab_0x405308:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40530d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x4051f2;
  lab_0x405365:
    // 0x405365
    *a4 = v18;
    // 0x4051f5
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405337:
    // 0x405337
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x405308;
  lab_0x4053c4:
    // 0x4053c4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x405308;
}
// Address range: 0x405590 - 0x40560b
int64_t function_405590(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405597
    if (fileno(stream) < 0) {
        // 0x4055f7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4055aa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4055db
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4055f7
            return fclose(stream);
        }
    }
    // 0x4055ac
    if ((int32_t)function_405610(a1, v1) == 0) {
        // 0x4055f7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4055b8
    int32_t v3 = *v2; // 0x4055c0
    int64_t result = fclose(stream); // 0x4055ce
    if (v3 != 0) {
        // 0x405600
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4055d0
    return result;
}
// Address range: 0x405610 - 0x405650
int64_t function_405610(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40562a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40562a
        return fflush(stream);
    }
    // 0x405638
    function_405650(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405650 - 0x4056a7
int64_t function_405650(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405650
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40565a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40568b
    int64_t result = -1; // 0x405694
    if (v1 != -1) {
        // 0x405696
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4056a2
    return result;
}
// Address range: 0x4056b0 - 0x40578f
int64_t function_4056b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4056bc
    uint32_t v2 = *v1; // 0x4056bc
    int64_t v3 = a2 & 0xffffffff; // 0x4056c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4056c4
    uint64_t v5 = (int64_t)*v4; // 0x4056c4
    int64_t v6; // 0x405732
    if (v3 <= v5) {
      lab_0x40572c_2:
        // 0x40572c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4056b2
    int64_t v8 = v2; // 0x4056b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40572c
        goto lab_0x40572c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4056e8
    int64_t v17; // 0x4056f6
    int64_t * v18; // 0x405710
    int64_t * v19; // 0x405713
    int64_t v20; // 0x40571e
    int64_t v21; // 0x4056f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4056f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405710
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405727
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40572c
            goto lab_0x40572c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40572c
            goto lab_0x40572c_2;
        }
        // 0x4056e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40576b
    int64_t * v23 = (int64_t *)v22; // 0x405770
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405773
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405770
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405787
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4056dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40572c
            goto lab_0x40572c_2;
        }
        // 0x4056e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4056f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405710
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405727
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40572c
                goto lab_0x40572c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40572c
                goto lab_0x40572c_2;
            }
            // 0x4056e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405750
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405770
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405787
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40572c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405790 - 0x405dac
int64_t function_405790(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4057af
    int64_t v2 = *v1; // 0x4057af
    char * str2 = (char *)v2; // 0x4057bc
    char c = *str2; // 0x4057bc
    int64_t v3 = v2; // 0x4057e8
    int64_t v4 = 0; // 0x405790
    int32_t v5; // 0x405790
    int64_t v6; // 0x405790
    int64_t v7; // 0x405790
    int64_t v8; // 0x405790
    int64_t v9; // 0x405790
    int64_t v10; // 0x405790
    int64_t v11; // 0x405790
    int64_t v12; // 0x405790
    int64_t v13; // 0x405790
    int64_t str3; // 0x405790
    int64_t v14; // 0x405790
    int64_t v15; // 0x405790
    int64_t v16; // 0x405790
    int64_t v17; // 0x405790
    int32_t v18; // 0x405790
    int32_t v19; // 0x405790
    int32_t v20; // 0x405790
    int32_t v21; // 0x405790
    int32_t v22; // 0x405790
    int32_t v23; // 0x405790
    int32_t v24; // 0x405790
    int32_t v25; // 0x405790
    int32_t v26; // 0x405790
    int32_t v27; // 0x405790
    int32_t v28; // 0x405790
    int32_t v29; // 0x405790
    int64_t nmemb; // 0x405790
    int64_t v30; // 0x405790
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4057ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4057e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4057f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4057fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4057c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40582c
                int64_t v34; // 0x405790
                int64_t v35; // 0x405790
                if (strncmp(str, str2, n) == 0) {
                    // 0x405835
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4059b0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405846
                int64_t v37 = *(int64_t *)v36; // 0x40584a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405820
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405835
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4059b0;
                        }
                    }
                    // 0x405846
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
                  lab_0x405896:
                    // 0x405896
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
                        goto lab_0x4058f0;
                    } else {
                        if (v11 == 0) {
                            // 0x405a60
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4058f0;
                        } else {
                            if (v39 == 0) {
                                // 0x405a10
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4058ba;
                                } else {
                                    // 0x405a1c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4058ba;
                                    } else {
                                        // 0x405a2a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4058ba;
                                        } else {
                                            goto lab_0x4058f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4058ba;
                            }
                        }
                    }
                }
              lab_0x405901:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405ad6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405c82
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x405ca2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405cef
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405d09
                            int64_t v45; // 0x405d0b
                            if (*(char *)v42 != 0) {
                                // 0x405d0b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405d03
                            while (v17 + nmemb != v42) {
                                // 0x405d05
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405d0b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405cf8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405d30
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405ae4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405c3f
                        free((int64_t *)v17);
                    }
                    // 0x405b39
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405b50
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4059fe
                    return 63;
                }
                // 0x405920
                v5 = v39;
                if (v13 != 0) {
                    // 0x4059a4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4059b0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4059c0
                    uint32_t v50 = *v49; // 0x4059c0
                    int64_t v51 = v50; // 0x4059c0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4059ca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4059d3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405bff
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405baa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4059fe
                            return 63;
                        }
                        // 0x405a48
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405d5f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405c5d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405c70
                                // 0x4059fe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405b6e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405b82
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4059eb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4059ee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4059f2
                    int64_t result = v59; // 0x4059f8
                    if (v58 != 0) {
                        // 0x4059fa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4059fe
                    return result;
                }
            } else {
                // 0x4057fe
                v5 = v32;
            }
            // break -> 0x405925
            break;
        }
    }
    // 0x405925
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40593d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405947
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4059fe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405a89
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405976
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405986
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4058f0:
    // 0x4058f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4058f0
    int64_t v63 = *(int64_t *)v62; // 0x4058f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405901
        goto lab_0x405901;
    }
    goto lab_0x405896;
  lab_0x4058ba:
    // 0x4058ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405790
    int32_t v65; // 0x405790
    int32_t v66; // 0x405790
    if (v27 != 0) {
        goto lab_0x4058f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405a70
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4058f0;
            } else {
                goto lab_0x4058e1;
            }
        } else {
            // 0x4058d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405bcc
                int64_t v67 = (int64_t)mem; // 0x405bcc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4058f0;
                } else {
                    // 0x405bdf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4058e1;
                }
            } else {
                goto lab_0x4058e1;
            }
        }
    }
  lab_0x4058e1:
    // 0x4058e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4058f0;
}
// Address range: 0x405db0 - 0x406376
int64_t function_405db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405dd1
    if (v3 < 1) {
        // 0x405f8e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405dcd
    int32_t v5 = *(int32_t *)a7; // 0x405dd9
    uint64_t v6 = a1 & 0xffffffff; // 0x405ddb
    int64_t v7 = v2; // 0x405de0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405de3
    *v8 = 0;
    int64_t v9; // 0x405db0
    int64_t v10; // 0x405db0
    int64_t v11; // 0x405db0
    int64_t v12; // 0x405db0
    int64_t str; // 0x405db0
    int64_t v13; // 0x405db0
    int64_t v14; // 0x405db0
    int64_t v15; // 0x405db0
    int64_t v16; // 0x405db0
    int64_t v17; // 0x405db0
    int32_t v18; // 0x405db0
    char v19; // 0x405db0
    if (v5 == 0) {
        // 0x405fc8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405dfa;
    } else {
        // 0x405df3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405e40
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405e43
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405f08;
            } else {
                int64_t v22 = v7 + 1; // 0x405e56
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405e66
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405f1c;
                } else {
                    goto lab_0x405e78;
                }
            }
        } else {
            goto lab_0x405dfa;
        }
    }
  lab_0x405dfa:
    // 0x405dfa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405e00
    *v24 = 0;
    int64_t v25; // 0x405db0
    int64_t v26; // 0x405db0
    int64_t v27; // 0x405db0
    switch (*(char *)&v2) {
        case 45: {
            // 0x405ef0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405efd;
        }
        case 43: {
            // 0x406200
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405efd;
        }
        default: {
            // 0x405e1c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40617f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406298
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405efd;
                } else {
                    // 0x40618d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405e2a;
                }
            } else {
                goto lab_0x405e2a;
            }
        }
    }
  lab_0x405f08:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405f0f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405e78;
    } else {
        goto lab_0x405f1c;
    }
  lab_0x405e2a:
    // 0x405e2a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405efd;
  lab_0x405efd:
    // 0x405efd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405f08;
  lab_0x405e78:;
    uint32_t v30 = *(int32_t *)a7; // 0x405e78
    int64_t v31 = v30; // 0x405e78
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405e7a
    if ((int64_t)*v32 > v31) {
        // 0x405e7f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405e82
    if (*v33 > v30) {
        // 0x405e87
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405e8a
    int64_t v35 = v31; // 0x405e8e
    int64_t v36 = v15; // 0x405e8e
    int64_t v37; // 0x405db0
    int64_t v38; // 0x405db0
    int64_t v39; // 0x405db0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405ff8
        int64_t v41 = v40; // 0x405ff8
        v2 = v41;
        int64_t v42; // 0x405db0
        if (*v33 == v40) {
            // 0x4061e0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4061e8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406004
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406008
                function_4056b0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406018
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406021
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40602a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406041
            int64_t v47 = v45 & 0xffffffff; // 0x406045
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40604e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406054
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406056;
                }
            }
            int64_t v48 = v47 + 1; // 0x406030
            int64_t v49 = v48 & 0xffffffff; // 0x406030
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406041
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40604e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406054
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406056;
                    }
                }
                // 0x406030
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4061f8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406056;
    } else {
        goto lab_0x405e94;
    }
  lab_0x405f1c:
    // 0x405f1c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405f1f
    int64_t v51 = v12; // 0x405f1f
    int64_t v52 = v14; // 0x405f1f
    if (*(char *)v10 == 0) {
        goto lab_0x405e78;
    } else {
        goto lab_0x405f25;
    }
  lab_0x405e94:;
    int32_t v53 = v35; // 0x405e94
    int64_t v54; // 0x405db0
    int64_t v55; // 0x405db0
    int64_t v56; // 0x405db0
    int64_t v57; // 0x405db0
    int64_t v58; // 0x405db0
    int64_t v59; // 0x405db0
    char * v60; // 0x405db0
    int64_t v61; // 0x405db0
    int64_t v62; // 0x405ea9
    int64_t v63; // 0x405db0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405fe3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405fe6;
    } else {
        // 0x405e9c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405db0
        int64_t v66 = v65 ? -1 : 1; // 0x405eb0
        int64_t v67 = (int64_t)"--"; // 0x405db0
        int64_t v68 = v62; // 0x405db0
        int64_t v69 = 3; // 0x405eb0
        unsigned char v70 = *(char *)v68; // 0x405eb0
        char v71 = *(char *)v67; // 0x405eb0
        char v72 = v71; // 0x405eb0
        bool v73 = false; // 0x405eb0
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
            // 0x405fa0
            if (*(char *)v62 == 45) {
                // 0x406060
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406060
                if (c == 0) {
                    goto lab_0x405faa;
                } else {
                    // 0x40606d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4060f0;
                    } else {
                        if (c == 45) {
                            // 0x4062d3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406145;
                        } else {
                            // 0x40607e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4060f0;
                            } else {
                                // 0x406083
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4060a4;
                                } else {
                                    // 0x40608a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4060f0;
                                    } else {
                                        goto lab_0x4060a4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405faa;
            }
        } else {
            uint32_t v75 = *v33; // 0x405ec0
            v2 = v75;
            int32_t v76 = *v32; // 0x405ec3
            int64_t v77 = v35 + 1; // 0x405ec6
            int32_t v78 = v77; // 0x405ec9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406230
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405ed7
                    function_4056b0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405ee5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405fe6;
        }
    }
  lab_0x405f25:;
    // 0x405f25
    int64_t v79; // bp-104, 0x405db0
    int64_t v80 = &v79; // 0x405dba
    int64_t v81 = v50 + 1; // 0x405f25
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405f2c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405f31
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405f35
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405f39
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405f41
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405f46
    int32_t c2 = v84; // 0x405f46
    char * found_char_pos = strchr(str2, c2); // 0x405f46
    int64_t v87 = *v82; // 0x405f4b
    v2 = v87;
    int64_t v88 = *v85; // 0x405f55
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405f60
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406250
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40621d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405f8e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405f46
    char v91 = *(char *)(v90 + 1); // 0x405f7b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405f35
        if (v91 != 58) {
            // 0x405f8e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4061a4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4062a8
                *v8 = 0;
            } else {
                // 0x40628c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4061ce
            *v83 = 0;
            // 0x405f8e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4061ae
        if (v93 != 0) {
            // 0x406240
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4061ce
            *v83 = 0;
            // 0x405f8e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4061c1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4061ce
            *v83 = 0;
            // 0x405f8e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40630a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4062ba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4062c1
        // 0x4061ce
        *v83 = 0;
        // 0x405f8e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406119
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40611b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406340
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4062f1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4062f8
            // 0x405f8e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406126
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40612a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406145;
  lab_0x406056:
    // 0x406056
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405e94;
  lab_0x406145:;
    int64_t v99 = function_405790(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406163
    // 0x405f8e
    return v99 & 0xffffffff;
  lab_0x405fe6:;
    int32_t v100 = v55; // 0x405fe6
    if (v100 != (int32_t)v59) {
        // 0x405fea
        *(int32_t *)a7 = v100;
    }
    // 0x405f8e
    return 0xffffffff;
  lab_0x405faa:
    // 0x405faa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405fb1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405f8e
    return v99 & 0xffffffff;
  lab_0x4060f0:
    // 0x4060f0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405f25;
  lab_0x4060a4:
    // 0x4060a4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405790(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x4060ca
    if ((int32_t)v101 != -1) {
        // 0x405f8e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4060df
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4060f0;
}
// Address range: 0x406380 - 0x4063d6
int64_t function_406380(int64_t a1) {
    // 0x406380
    *(int32_t *)&g41 = g26;
    *(int32_t *)&g42 = g25;
    int64_t v1; // 0x406380
    int64_t result = function_405db0(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x4063a6
    g26 = *(int32_t *)&g41;
    g46 = g44;
    *(int32_t *)&g24 = g43;
    return result;
}
// Address range: 0x4063e0 - 0x4063f8
int64_t function_4063e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4063e0
    return function_406380(1);
}
// Address range: 0x406400 - 0x406413
int64_t function_406400(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x406400
    return function_406380(0);
}
// Address range: 0x406420 - 0x406435
int64_t function_406420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406420
    return function_405db0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406440 - 0x406456
int64_t function_406440(void) {
    // 0x406440
    return function_406380(0);
}
// Address range: 0x406460 - 0x406478
int64_t function_406460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406460
    return function_405db0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406480 - 0x4064fa
int64_t function_406480(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40648b
    int64_t v2 = (int64_t)&g10; // 0x40648b
    int32_t * pwc; // 0x406480
    int64_t v3; // 0x406480
    int64_t n; // 0x406480
    if (a2 == 0) {
        goto lab_0x4064d2;
    } else {
        // 0x40648d
        if (a3 == 0) {
            // 0x4064b8
            return -2;
        }
        // 0x406499
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4064d2;
        } else {
            goto lab_0x4064a4;
        }
    }
  lab_0x4064d2:
    // 0x4064d2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406480
    pwc = (int32_t *)&v4;
    goto lab_0x4064a4;
  lab_0x4064a4:;
    char * wstr = (char *)v3; // 0x4064aa
    int64_t ps; // 0x406480
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4064aa
    int64_t result = v5; // 0x4064aa
    if (v5 < 0xfffffffe) {
        // 0x4064b8
        return result;
    }
    int64_t result2 = result; // 0x4064e9
    if ((char)function_406670(0, v3) == 0) {
        // 0x4064eb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4064b8
    return result2;
}
// Address range: 0x406500 - 0x406604
int64_t function_406500(int64_t result, uint64_t a2, int64_t a3) {
    // 0x406500
    if (a3 == 0) {
        // 0x406539
        return 0;
    }
    int64_t v1 = result; // 0x40650c
    int64_t v2 = a3; // 0x40650c
    int64_t result2; // 0x406500
    if (result % 8 != 0) {
        char v3 = a2; // 0x40650e
        int64_t v4 = result; // 0x406511
        if ((char)result == v3) {
            // 0x406539
            return result;
        }
        int64_t v5 = a3; // 0x406511
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x406520
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x406540;
            }
            // 0x406526
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x406539
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x406539
        return result2;
    }
  lab_0x406540:;
    int64_t result3 = v1; // 0x40656d
    int64_t v6 = v2; // 0x40656d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40654f
        int64_t v8 = 0x10000 * v7 | v7; // 0x40655c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x406566
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x406586
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x4065b5
            int64_t v12 = v1 + 8; // 0x4065b9
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x4065a3
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x4065cc;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x4065c3
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x406539
                return 0;
            }
        }
    }
  lab_0x4065cc:;
    char v14 = a2; // 0x4065cc
    if (*(char *)result3 == v14) {
        // 0x406539
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x4065e0
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x406539
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x406539
    return result2;
}
// Address range: 0x406610 - 0x40666d
int64_t function_406610(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406617
    int64_t v2; // 0x406610
    int64_t result = function_405590(a1, v2); // 0x406628
    if ((v2 & 32) != 0) {
        // 0x406650
        if ((int32_t)result == 0) {
            // 0x406654
            *__errno_location() = 0;
        }
        // 0x40664a
        return 0xffffffff;
    }
    // 0x406631
    if ((int32_t)result == 0) {
        // 0x40664a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406638
    if (v1 == 0) {
        // 0x40663a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40664a
    return result2;
}
// Address range: 0x406670 - 0x4066ce
int64_t function_406670(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406676
    if (locale == NULL) {
        // 0x4066a3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406676
    bool v2; // 0x406670
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x406670
    int64_t v5 = v1; // 0x406670
    int64_t v6 = 2; // 0x406695
    unsigned char v7 = *(char *)v5; // 0x406695
    char v8 = *(char *)v4; // 0x406695
    char v9 = v8; // 0x406695
    bool v10 = false; // 0x406695
    while (v7 == v8) {
        // 0x406688
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4066a1
    int64_t v13 = v1; // 0x4066a1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4066a3
        return 0;
    }
    int64_t v14 = 6; // 0x4066a1
    unsigned char v15 = *(char *)v13; // 0x4066bd
    char v16 = *(char *)v12; // 0x4066bd
    char v17 = v16; // 0x4066bd
    bool v18 = false; // 0x4066bd
    while (v15 == v16) {
        // 0x4066b0
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
// Address range: 0x4066d0 - 0x406c32
int64_t function_4066d0(void) {
    char * v1 = nl_langinfo(14); // 0x4066e6
    char * v2 = g45; // 0x4066eb
    char * v3; // 0x4066d0
    int64_t v4; // 0x4066d0
    int64_t v5; // 0x4066d0
    int64_t v6; // 0x4066d0
    int64_t v7; // 0x4066d0
    int32_t size; // 0x4066d0
    int32_t size2; // 0x4066d0
    int32_t len; // 0x4067a2
    int64_t v8; // 0x4067a2
    char * env_val; // 0x40678d
    if (v2 == NULL) {
        // 0x406788
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4067f5;
        } else {
            // 0x40679a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4067f5;
            } else {
                // 0x40679f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40678d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406c25
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4067f5;
                    } else {
                        // 0x406b99
                        size2 = len + 14;
                        goto lab_0x4067bb;
                    }
                } else {
                    goto lab_0x4067bb;
                }
            }
        }
    } else {
        // 0x4066d0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40670a;
    }
  lab_0x406a3c:;
    // 0x406a3c
    struct _IO_FILE * stream; // 0x40687b
    int32_t v10 = __uflow(stream); // 0x406a3f
    int64_t v11; // 0x4066d0
    int64_t v12 = v11; // 0x406a49
    int64_t v13; // 0x4066d0
    int64_t v14 = v13; // 0x406a49
    int32_t v15 = v10; // 0x406a49
    int64_t v16; // 0x4066d0
    int64_t v17 = v16; // 0x406a49
    int64_t v18 = v11; // 0x406a49
    int64_t v19 = v13; // 0x406a49
    int64_t v20 = v16; // 0x406a49
    if (v10 == -1) {
        // break -> 0x406a4f
        goto lab_0x406a4f;
    }
    goto lab_0x4068c9;
  lab_0x4068be:;
    // 0x4068be
    int64_t v90; // 0x4066d0
    int64_t * v32; // 0x4068b0
    *v32 = v90 + 1;
    int64_t v89; // 0x4066d0
    v12 = v89;
    int64_t v91; // 0x4066d0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4066d0
    v17 = v92;
    goto lab_0x4068c9;
  lab_0x4068c9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4066d0
    int32_t v25; // bp-120, 0x4066d0
    int32_t v26; // bp-184, 0x4066d0
    int64_t v27; // 0x40687b
    int64_t v28; // 0x406898
    int64_t v29; // 0x40689d
    int64_t * v30; // 0x4068b4
    switch (c) {
        case 32: {
            goto lab_0x4068b0;
        }
        case 10: {
            goto lab_0x4068b0;
        }
        case 9: {
            goto lab_0x4068b0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406aa1
            int32_t v33; // 0x4066d0
            char v34; // 0x4066d0
            int32_t v35; // 0x406aae
            if (v31 < *v30) {
                // 0x406a80
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406aab
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406aa1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406a80
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406aab
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406a90
                v36 = v33;
            }
            // 0x406b7f
            if (v36 == -1) {
                // break -> 0x406a4f
                break;
            }
            goto lab_0x4068b0;
        }
        default: {
            // 0x4068df
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406a4f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406908
            int64_t v39 = v37 + 4; // 0x40690a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406916
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406918
            while (v41 == 0) {
                // 0x406908
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406936
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406942
            int64_t v45 = v43 + 4; // 0x406944
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406950
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406952
            while (v47 == 0) {
                // 0x406942
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40693f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406968
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406978
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40697c
            int64_t v52 = v51 + v48; // 0x406985
            int64_t * mem; // 0x4066d0
            int64_t v53; // 0x4066d0
            int64_t v54; // 0x4066d0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406abb
                int64_t v56 = v55 + 3; // 0x406ac7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4069a1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4069b0
            if (mem == NULL) {
                // 0x406bdc
                free((int64_t *)v21);
                function_405590(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x406854;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4069c8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4069d2
            uint32_t v62 = (int32_t)v59; // 0x4069d5
            int64_t v63; // 0x4066d0
            if (v62 >= 8) {
                // 0x406ae4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406afe
                int64_t v66 = v61 - v65; // 0x406b02
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406b0d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406b1e
                    int64_t v70 = v69 & 0xffffffff; // 0x406b1e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406b1b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406baf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4069e7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4069eb
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
            int64_t v73 = v51 + 1; // 0x4069fb
            int64_t v74 = v60 - 1; // 0x4069ff
            uint32_t v75 = (int32_t)v73; // 0x406a04
            int64_t v76; // 0x4066d0
            if (v75 >= 8) {
                // 0x406b32
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406b3c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406b4c
                int64_t v80 = v74 - v79; // 0x406b50
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406b5b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406b6b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406b69
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406bc6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406bce
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406a16
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406a1a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406c13
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406a2e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4068be;
            } else {
                goto lab_0x406a3c;
            }
        }
    }
  lab_0x4068b0:;
    int64_t v93 = v23; // 0x4066d0
    int64_t v94 = v22; // 0x4066d0
    int64_t v95 = v21; // 0x4066d0
    goto lab_0x4068b0_2;
  lab_0x4067f5:;
    int64_t * mem3 = malloc(size); // 0x4067f5
    int64_t v97 = (int64_t)&g10; // 0x406800
    int64_t v98; // 0x4066d0
    int64_t path; // 0x4066d0
    if (mem3 == NULL) {
        goto lab_0x4067d2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4067f5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406816;
    }
  lab_0x40670a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x4066fd
    char v100 = *v3; // 0x40670a
    int64_t v101; // 0x4066d0
    if (v100 == 0) {
        // 0x406764
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4066d0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4066d0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406750
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406757;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406720
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40672d
        char v107 = *(char *)v106; // 0x406732
        v102 = v107;
        if (v107 == 0) {
            // 0x406764
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40673b
    v104 = v103 + 1;
  lab_0x406757:
    // 0x406764
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4067d2:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40670a;
  lab_0x406816:;
    int64_t v109 = v98 + path; // 0x406816
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406842
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x406871
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406ba2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x406895
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4068b0_2:;
                uint64_t v96 = *v32; // 0x4068b0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406a3c;
                } else {
                    goto lab_0x4068be;
                }
            }
          lab_0x406a4f:
            // 0x406a4f
            function_405590(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x406a6e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406854;
  lab_0x4067bb:;
    int64_t * mem4 = malloc(size2); // 0x4067bb
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x406861
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406816;
    } else {
        goto lab_0x4067d2;
    }
  lab_0x406854:
    // 0x406854
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4067d2;
}
// Address range: 0x406c40 - 0x406c9d
int64_t function_406c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406c40
    return function_401440();
}
// Address range: 0x406ca0 - 0x406ca1
int64_t function_406ca0(void) {
    // 0x406ca0
    int64_t result; // 0x406ca0
    return result;
}
// Address range: 0x406cb0 - 0x406cc8
int64_t function_406cb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406cb0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406cc8 - 0x406ce8
int64_t function_406cc8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406cd2
    while (*(int64_t *)v1 != -1) {
        // 0x406cd3
        v1 -= 8;
    }
    // 0x406ce4
    return result;
}
