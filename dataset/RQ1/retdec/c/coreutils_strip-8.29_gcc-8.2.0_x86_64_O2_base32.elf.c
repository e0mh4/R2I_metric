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
    function_402d10(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401830
    function_406de0(0x402c30, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
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
                v9 = (int32_t)function_406530(v1, a2, "diw:", &g2, 0, v8);
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
                    function_404db0((int64_t)g28, "base32", "GNU coreutils", (int64_t)g17, "Simon Josefsson", 0);
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
        v5 = function_405250(g46, (int32_t)"invalid wrap size" ^ (int32_t)"invalid wrap size", -1, (int64_t *)&g10, (int64_t)v11, 0);
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
                    error(1, *__errno_location(), "%s", (char *)function_4047b0(0, 3, v22));
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
    function_404930(*(int64_t *)(v16 + 8 * v15));
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
    function_402ce0(v18, 2, v20);
    int64_t v23 = (int64_t)g28;
    if (v4 == 0) {
        // 0x401a1b
        function_401dd0(v18, v23, v6);
    } else {
        // 0x4019f0
        function_401bb0(v18, v23, v3);
    }
    // 0x401a03
    if ((int32_t)function_4056c0(v18, v23) != -1) {
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
    error(1, *err_num, "%s", (char *)function_4047b0(0, 3, str2));
    v15 = &g50;
    v16 = strcmp_rc;
    goto lab_0x401a95;
}
// Address range: 0x401ad0 - 0x401afb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401ad0
    int64_t v1; // 0x401ad0
    __libc_start_main(0x401830, (int32_t)a4, (char **)&v1, (void (*)())0x406d70, (void (*)())0x406dd0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
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
    int64_t stream; // bp-13416, 0x401bb0
    int64_t v1 = &stream; // 0x401bbd
    stream = a2;
    int32_t v2; // bp-13380, 0x401bb0
    function_4028f0((int64_t *)&v2);
    int64_t v3; // bp-8248, 0x401bb0
    int64_t v4 = &v3; // 0x401c11
    int64_t v5 = v1 + 0x1431;
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
    int32_t n; // bp-13392, 0x401bb0
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
            int32_t v31 = fread_unlocked((int64_t *)v30, 1, 0x2000 - (int32_t)v20, (struct _IO_FILE *)a1); // 0x401c2d
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
    n = 0x1400;
    int64_t data; // bp-13368, 0x401bb0
    int64_t v35 = function_402900((int64_t *)&v2, &v3, v24, &data, (int64_t *)&n); // 0x401d13
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
        if (v27 >= 0x2000) {
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
            char v55 = *(char *)(v1 + 0x1430 + v54); // 0x401c53
            v40 = v47;
            v39 = v46;
            v37 = v54;
            v38 = v53;
            if (v55 != 61 == (char)function_4028d0(v55) == 0) {
                goto lab_0x401cb0;
            }
            int64_t v56 = v53 + 1; // 0x401c6e
            while (v56 < v47) {
                // 0x401c4e
                v53 = v56;
                v54 = v53 + v46;
                v55 = *(char *)(v1 + 0x1430 + v54);
                v40 = v47;
                v39 = v46;
                v37 = v54;
                v38 = v53;
                if (v55 != 61 == (char)function_4028d0(v55) == 0) {
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
    int64_t v1; // bp-79928, 0x401dd0
    int64_t v2 = &v1;
    int64_t data2; // bp-49208, 0x401dd0
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
    uint64_t n2 = (v10 + 4) / 0xa0000000 & 0x7fffffff8; // 0x401e7d
    function_4025d0(&v1, v10, &data2, n2);
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
            // 0x401ec2
            v18 = *(int32_t *)&v9;
            v19 = v28;
        }
    } else {
        // 0x401e9d
        v9 = v3;
        int32_t v29 = fwrite_unlocked(&data2, 1, (int32_t)n2, g28); // 0x401eb4
        v18 = v3;
        v19 = v8;
        if (n2 > (int64_t)v29) {
            goto lab_0x402043;
        }
    }
    // 0x401ec2
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
        int64_t v8 = (int64_t)"base32";
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
// Address range: 0x402400 - 0x4025c4
int64_t function_402400(uint64_t a1, uint64_t a2, int64_t * a3, int64_t * a4) {
    // 0x402400
    if (a2 < 8) {
        // 0x402568
        return 0;
    }
    char v1 = *(char *)(a1 % 256 + (int64_t)&g3); // 0x40240f
    if (v1 < 0) {
        // 0x402568
        return 0;
    }
    unsigned char v2 = *(char *)(a1 + 1); // 0x40241f
    unsigned char v3 = *(char *)((int64_t)v2 + (int64_t)&g3); // 0x402424
    if (v3 < 0) {
        // 0x402568
        return 0;
    }
    int64_t v4 = (int64_t)a4;
    int64_t v5 = (int64_t)a3;
    int64_t v6 = v5; // 0x40243c
    if (a4 != NULL) {
        // 0x402588
        *(char *)a3 = v3 / 4 | 8 * v1;
        *a4 = v4 - 1;
        v6 = v5 + 1;
    }
    unsigned char v7 = *(char *)(a1 + 2); // 0x402442
    int64_t v8; // 0x402400
    int64_t v9; // 0x402400
    if (v7 == 61) {
        // 0x402570
        if (*(char *)(a1 + 3) != 61) {
            // 0x40257c
            *a3 = v6;
            return 0;
        }
        // 0x402576
        v8 = v6;
        if (*(char *)(a1 + 4) != 61) {
            // 0x40257c
            *a3 = v6;
            return 0;
        }
        goto lab_0x4025b0;
    } else {
        char v10 = *(char *)((int64_t)v7 + (int64_t)&g3); // 0x402450
        if (v10 < 0) {
            // 0x40257c
            *a3 = v6;
            return 0;
        }
        unsigned char v11 = *(char *)(a1 + 3); // 0x402460
        unsigned char v12 = *(char *)((int64_t)v11 + (int64_t)&g3); // 0x402465
        if (v12 < 0) {
            // 0x40257c
            *a3 = v6;
            return 0;
        }
        int64_t v13 = v6; // 0x40247a
        if (a4 != NULL) {
            // 0x40247c
            *(char *)v6 = 2 * v10 | 64 * v3 | v12 / 16;
            *a4 = v4 - 1;
            v13 = v6 + 1;
        }
        unsigned char v14 = *(char *)(a1 + 4); // 0x40249b
        v8 = v13;
        if (v14 == 61) {
            goto lab_0x4025b0;
        } else {
            unsigned char v15 = *(char *)((int64_t)v14 + (int64_t)&g3); // 0x4024a9
            if (v15 < 0) {
                // 0x40257c
                *a3 = v13;
                return 0;
            }
            int64_t v16 = v13; // 0x4024be
            if (a4 != NULL) {
                // 0x4024c0
                *(char *)v13 = v15 / 2 | 16 * v12;
                *a4 = v4 - 1;
                v16 = v13 + 1;
            }
            unsigned char v17 = *(char *)(a1 + 5); // 0x4024d9
            v9 = v16;
            if (v17 != 61) {
                char v18 = *(char *)((int64_t)v17 + (int64_t)&g3); // 0x4024e7
                if (v18 < 0) {
                    // 0x40257c
                    *a3 = v16;
                    return 0;
                }
                unsigned char v19 = *(char *)(a1 + 6); // 0x4024f7
                unsigned char v20 = *(char *)((int64_t)v19 + (int64_t)&g3); // 0x4024fc
                if (v20 < 0) {
                    // 0x40257c
                    *a3 = v16;
                    return 0;
                }
                int64_t v21 = v16; // 0x40250d
                if (a4 != NULL) {
                    // 0x40250f
                    *(char *)v16 = 4 * v18 | 128 * v15 | v20 / 8;
                    *a4 = v4 - 1;
                    v21 = v16 + 1;
                }
                unsigned char v22 = *(char *)(a1 + 7); // 0x40252f
                if (v22 == 61) {
                    // 0x402560
                    *a3 = v21;
                    // 0x402568
                    return 1;
                }
                char v23 = *(char *)((int64_t)v22 + (int64_t)&g3); // 0x402539
                if (v23 < 0) {
                    // 0x40257c
                    *a3 = v21;
                    return 0;
                }
                int64_t v24 = v21; // 0x402549
                if (a4 != NULL) {
                    // 0x40254b
                    *(char *)v21 = v23 | 32 * v20;
                    *a4 = v4 - 1;
                    v24 = v21 + 1;
                }
                // 0x402560
                *a3 = v24;
                // 0x402568
                return 1;
            }
            goto lab_0x4025b6;
        }
    }
  lab_0x4025b0:
    // 0x4025b0
    v9 = v8;
    if (*(char *)(a1 + 5) != 61) {
        // 0x40257c
        *a3 = v8;
        return 0;
    }
    goto lab_0x4025b6;
  lab_0x4025b6:
    // 0x4025b6
    if (*(char *)(a1 + 6) != 61 || *(char *)(a1 + 7) != 61) {
        // 0x40257c
        *a3 = v9;
        return 0;
    }
    // 0x402560
    *a3 = v9;
    // 0x402568
    return 1;
}
// Address range: 0x4025d0 - 0x40282b
int64_t function_4025d0(int64_t * a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t result; // 0x4025d0
    if (a2 == 0 || a4 == 0) {
        if (a4 != 0) {
            // 0x402827
            *(char *)a3 = 0;
        }
        // 0x4027de
        return result;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = v1 + a4;
    int64_t v3 = v2 - 8; // 0x4025d0
    int64_t v4 = a2; // 0x402714
    int64_t v5 = (int64_t)a1;
    int64_t v6 = v1;
    int64_t v7 = a4;
    unsigned char v8 = *(char *)v5; // 0x402738
    int64_t v9 = v8; // 0x402738
    char v10 = *(char *)((int64_t)(v8 / 8) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x402746
    *(char *)v6 = v10;
    result = v9;
    int64_t v11; // 0x4025d0
    int64_t result2; // 0x4025d0
    int64_t v12; // 0x4025d0
    int64_t v13; // 0x4025d0
    int64_t v14; // 0x4025d0
    while (v7 != 1) {
        int64_t v15 = 4 * v9; // 0x40275b
        if (v4 == 1) {
            unsigned char v16 = *(char *)((v15 & 28) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x40276b
            int64_t v17 = v16; // 0x40276b
            *(char *)(v6 + 1) = v16;
            result = v17;
            if (v7 == 2) {
                return result;
            } else {
                // 0x40277b
                *(char *)(v6 + 2) = 61;
                result = v17;
                if (v7 == 3) {
                    return result;
                } else {
                    // 0x402785
                    *(char *)(v6 + 3) = 61;
                    v12 = v17;
                    result = v17;
                    if (v7 == 4) {
                        return result;
                    } else {
                        goto lab_0x40278f;
                    }
                }
            }
        }
        unsigned char v18 = *(char *)(v5 + 1); // 0x4025f8
        unsigned char v19 = *(char *)((v15 & 28 | (int64_t)(v18 / 64)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x40260a
        *(char *)(v6 + 1) = v19;
        if (v7 == 2) {
            // 0x4027de
            result = v19;
            return result;
        }
        uint64_t v20 = (int64_t)v18; // 0x4025f8
        unsigned char v21 = *(char *)(v20 / 2 % 32 + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x402626
        *(char *)(v6 + 2) = v21;
        if (v7 == 3) {
            // 0x4027de
            result = v21;
            return result;
        }
        int64_t v22 = 16 * v20; // 0x40263a
        if (v4 == 2) {
            char v23 = *(char *)((v22 & 16) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x4027c7
            *(char *)(v6 + 3) = v23;
            int64_t v24 = v2 - v6; // 0x4027d5
            v12 = v24;
            result = v24;
            if (v24 != 4) {
                goto lab_0x40278f;
            } else {
                return result;
            }
        }
        unsigned char v25 = *(char *)(v5 + 2); // 0x402648
        int64_t v26 = v25; // 0x402648
        int64_t v27 = v2 - v6; // 0x40265d
        char v28 = *(char *)((v22 & 16 | (int64_t)(v25 / 16)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x402660
        *(char *)(v6 + 3) = v28;
        result = v26;
        if (v27 == 4) {
            // break -> 0x4027de
            break;
        }
        int64_t v29 = 2 * v26; // 0x402676
        if (v4 == 3) {
            unsigned char v30 = *(char *)((v29 & 30) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x4027e4
            int64_t v31 = v30; // 0x4027e4
            *(char *)(v6 + 4) = v30;
            v13 = v31;
            result = v31;
            if (v27 != 5) {
                goto lab_0x402799;
            } else {
                return result;
            }
        }
        unsigned char v32 = *(char *)(v5 + 3); // 0x402684
        int64_t v33 = v32; // 0x402684
        char v34 = *(char *)((v29 & 30 | (int64_t)(v32 / 128)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x402694
        *(char *)(v6 + 4) = v34;
        result = v33;
        if (v27 == 5) {
            // break -> 0x4027de
            break;
        }
        char v35 = *(char *)(v33 / 4 % 32 + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x4026b5
        *(char *)(v6 + 5) = v35;
        result = v33;
        if (v7 == 6) {
            // break -> 0x4027de
            break;
        }
        int64_t v36 = 8 * v33; // 0x4026cb
        if (v4 == 4) {
            unsigned char v37 = *(char *)((v36 & 24) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x402803
            int64_t v38 = v37; // 0x402803
            *(char *)(v6 + 6) = v37;
            v14 = v38;
            result = v38;
            if (v27 != 7) {
                goto lab_0x4027ad;
            } else {
                return result;
            }
        }
        unsigned char v39 = *(char *)(v5 + 4); // 0x4026d8
        unsigned char v40 = *(char *)((v36 & 24 | (int64_t)(v39 / 32)) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x4026e8
        *(char *)(v6 + 6) = v40;
        if (v27 == 7) {
            // 0x4027de
            result = v40;
            return result;
        }
        unsigned char v41 = *(char *)((int64_t)(v39 % 32) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567"); // 0x402700
        *(char *)(v6 + 7) = v41;
        if (v3 == v6) {
            // 0x4027de
            result = v41;
            return result;
        }
        // 0x40271e
        v4 -= 5;
        int64_t v42 = v6 + 8; // 0x40271e
        int64_t v43 = v7 - 8; // 0x402722
        if (v43 == 0 || v4 == 0) {
            int64_t v44 = v41; // 0x402700
            result = v44;
            result2 = v44;
            v11 = v42;
            if (v43 == 0) {
                return result;
            } else {
                goto lab_0x40281d;
            }
        }
        v5 += 5;
        v6 = v42;
        v7 = v43;
        v8 = *(char *)v5;
        v9 = v8;
        v10 = *(char *)((int64_t)(v8 / 8) + (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ234567");
        *(char *)v6 = v10;
        result = v9;
    }
  lab_0x4027de_5:
    // 0x4027de
    return result;
  lab_0x40278f:
    // 0x40278f
    *(char *)(v6 + 4) = 61;
    v13 = v12;
    result = v12;
    if (v7 == 5) {
        return result;
    } else {
        goto lab_0x402799;
    }
  lab_0x402799:
    // 0x402799
    *(char *)(v6 + 5) = 61;
    result = v13;
    if (v7 == 6) {
        return result;
    } else {
        // 0x4027a3
        *(char *)(v6 + 6) = 61;
        v14 = v13;
        result = v13;
        if (v7 == 7) {
            return result;
        } else {
            goto lab_0x4027ad;
        }
    }
  lab_0x4027ad:
    // 0x4027ad
    *(char *)(v6 + 7) = 61;
    result = v14;
    if (v3 == v6) {
        return result;
    } else {
        // 0x40271e
        result = v14;
        result2 = v14;
        v11 = v6 + 8;
        if (v7 == 8) {
            return result;
        } else {
            goto lab_0x40281d;
        }
    }
  lab_0x40281d:
    // 0x40281d
    *(char *)v11 = 0;
    return result2;
}
// Address range: 0x402830 - 0x4028c7
int64_t function_402830(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t result = (a2 + 4) / 0xa0000000 & 0x7fffffff8; // 0x402853
    uint64_t size = result | 1; // 0x40285b
    if (size < a2) {
        // 0x402864
        *(int64_t *)a3 = 0;
        return 0;
    }
    int64_t * mem = malloc((int32_t)size); // 0x402889
    *(int64_t *)a3 = (int64_t)mem;
    if (mem == NULL) {
        // 0x4028b8
        return size;
    }
    // 0x402897
    function_4025d0((int64_t *)a1, a2, mem, size);
    return result;
}
// Address range: 0x4028d0 - 0x4028e1
int64_t function_4028d0(unsigned char a1) {
    unsigned char v1 = *(char *)((int64_t)a1 + (int64_t)&g3); // 0x4028d4
    return (int64_t)(v1 / 128 ^ 1) | 0xffffff00;
}
// Address range: 0x4028f0 - 0x4028f7
int64_t function_4028f0(int64_t * a1) {
    // 0x4028f0
    *(int32_t *)a1 = 0;
    int64_t result; // 0x4028f0
    return result;
}
// Address range: 0x402900 - 0x402b58
int64_t function_402900(int64_t * a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t * a5) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = (int64_t)a4; // bp-80, 0x40291d
    int64_t v3 = v1; // bp-64, 0x402927
    int64_t v4; // 0x402900
    int32_t v5 = v4;
    char v6 = 1; // 0x402931
    bool v7 = true; // 0x402931
    int64_t v8; // 0x402900
    if (a1 != NULL) {
        // 0x402937
        v8 = v4 & 0xffffffff;
        v6 = a3 != 0;
        v7 = a3 != 0 == v5 == 0;
    }
    int64_t v9 = (int64_t)a1 + 4; // 0x402949
    int32_t v10 = v5; // 0x40294d
    int32_t v11 = v5; // 0x40294d
    int64_t v12 = v8; // 0x40294d
    int64_t v13 = (int64_t)a2; // 0x40294d
    int64_t v14 = a3; // 0x40294d
    int64_t v15 = v1; // 0x40294d
    int64_t v16; // 0x402900
    int64_t v17; // 0x402900
    int32_t v18; // 0x402acc
    int32_t v19; // 0x4029cd
    int64_t v20; // 0x402900
    int64_t v21; // 0x402900
    int64_t v22; // 0x402900
    int64_t result; // 0x402900
    int64_t v23; // 0x402900
    int64_t v24; // 0x402900
    int64_t v25; // 0x402900
    int64_t v26; // 0x402900
    int64_t v27; // 0x402900
    int64_t v28; // 0x402900
    int64_t v29; // 0x402900
    while (true) {
      lab_0x402994_2:;
        int64_t v30 = v15;
        int64_t v31 = v14;
        int64_t v32 = v13;
        v19 = v11;
        v18 = v10;
        int64_t v33 = v12; // 0x40299a
        int64_t v34 = v30; // 0x40299a
        int64_t v35 = v32; // 0x40299a
        int64_t v36 = v31; // 0x40299a
        int64_t v37 = v30; // 0x40299a
        if (v7) {
            int64_t v38 = v32; // 0x402a6c
            int64_t v39 = v31 + v32 - v38; // 0x402a89
            int64_t v40 = function_402400(v38, v39, &v2, &v3); // 0x402a8f
            int64_t v41 = v3;
            v33 = v40;
            v34 = v41;
            v35 = v38;
            v36 = v39;
            v37 = v30;
            v38 += 8;
            while ((char)v40 != 0) {
                int64_t v42 = v41;
                v39 = v31 + v32 - v38;
                v40 = function_402400(v38, v39, &v2, &v3);
                v41 = v3;
                v33 = v40;
                v34 = v41;
                v35 = v38;
                v36 = v39;
                v37 = v42;
                v38 += 8;
            }
        }
        // 0x4029a0
        v28 = v36;
        int64_t v43 = v34;
        unsigned char v44 = v6 & (char)(v28 == 0); // 0x4029a6
        int64_t v45 = v33 & -256 | (int64_t)v44; // 0x4029a6
        result = v45;
        v26 = v43;
        if (v44 != 0) {
            // break -> 0x402a4a
            break;
        }
        int64_t v46 = v37;
        v24 = v35;
        if (v28 != 0) {
            // 0x402950
            if (*(char *)v24 == 10) {
                if (a1 == NULL) {
                    // 0x402b00
                    v3 = v46;
                    v2 += v43 - v46;
                    v17 = v24;
                    v25 = v24;
                    v29 = v28;
                    v22 = v28 + v24;
                    goto lab_0x402a22;
                } else {
                    // 0x402aed
                    v10 = v18;
                    v11 = v19;
                    v12 = v45;
                    v13 = v24 + 1;
                    v14 = v28 - 1;
                    v15 = v43;
                    goto lab_0x402994_2;
                }
            } else {
                // 0x402959
                v3 = v46;
                int64_t v47 = v28 + v24; // 0x402961
                v2 += v43 - v46;
                v16 = v24;
                v23 = v24;
                v27 = v28;
                v20 = v47;
                v21 = v47;
                if (a1 != NULL) {
                    goto lab_0x4029cd;
                } else {
                    goto lab_0x402972;
                }
            }
        } else {
            // 0x4029b4
            v3 = v46;
            v2 += v43 - v46;
            v21 = v24;
            result = 1;
            v26 = v46;
            if (a1 == NULL) {
                // break -> 0x402a4a
                break;
            }
            goto lab_0x4029cd;
        }
    }
  lab_0x402a4a_2:
    // 0x402a4a
    *a5 = v1 - v26;
    return result;
  lab_0x402a40_2:
    // 0x402a40
    result = 1;
    v26 = v3;
    goto lab_0x402a4a_2;
  lab_0x402972:;
    int64_t v48 = function_402400(v16, v27, &v2, &v3); // 0x40297c
    result = v48;
    v26 = v3;
    if ((char)v48 == 0) {
        // break -> 0x402a4a
        goto lab_0x402a4a_2;
    }
    int32_t v49 = v16;
    v10 = v49;
    v11 = v49;
    v12 = v48;
    v13 = v23;
    v14 = v20 - v23;
    v15 = v3;
    goto lab_0x402994;
  lab_0x4029cd:;
    int64_t v50 = v21;
    int32_t v51 = v19; // 0x402900
    switch (v19) {
        case 8: {
            // 0x402aa8
            *(int32_t *)a1 = 0;
            goto lab_0x402aaf;
        }
        case 0: {
            goto lab_0x402aaf;
        }
        default: {
            goto lab_0x4029e1;
        }
    }
  lab_0x402aaf:
    // 0x402aaf
    v51 = v18;
    if (v28 < 8) {
        goto lab_0x4029e1;
    } else {
        // 0x402ab5
        v51 = v18;
        if (function_406630(v24, 10, 8) == 0) {
            // 0x402b47
            v16 = v24;
            v23 = v24 + 8;
            v27 = 8;
            v20 = v50;
            goto lab_0x402972;
        } else {
            goto lab_0x4029e1;
        }
    }
  lab_0x4029e1:;
    int64_t v52 = v51;
    int64_t v53 = v52; // 0x4029e4
    int64_t v54 = v24; // 0x4029e4
    int64_t v55 = v52; // 0x4029e4
    int64_t v56 = v24; // 0x4029e4
    if (v24 < v50) {
        int64_t v57 = v53;
        int64_t v58 = v54 + 1; // 0x4029f0
        char v59 = *(char *)v54; // 0x4029f4
        int64_t v60 = v57; // 0x4029fb
        int64_t v61; // 0x4029fd
        int32_t v62; // 0x402a00
        if (v59 != 10) {
            // 0x4029fd
            v61 = v57 + 1;
            v62 = v61;
            *(int32_t *)a1 = v62;
            *(char *)(v57 + v9) = v59;
            v16 = v9;
            v23 = v58;
            v27 = 8;
            v20 = v50;
            if (v62 == 8) {
                goto lab_0x402972;
            }
            // 0x402a11
            v60 = v61 & 0xffffffff;
        }
        // 0x402a13
        v54 = v58;
        v55 = v60;
        v56 = v58;
        while (v58 != v50) {
            // 0x4029f0
            v57 = v60;
            v58 = v54 + 1;
            v59 = *(char *)v54;
            v60 = v57;
            if (v59 != 10) {
                // 0x4029fd
                v61 = v57 + 1;
                v62 = v61;
                *(int32_t *)a1 = v62;
                *(char *)(v57 + v9) = v59;
                v16 = v9;
                v23 = v58;
                v27 = 8;
                v20 = v50;
                if (v62 == 8) {
                    goto lab_0x402972;
                }
                // 0x402a11
                v60 = v61 & 0xffffffff;
            }
            // 0x402a13
            v54 = v58;
            v55 = v60;
            v56 = v58;
        }
    }
    int64_t v63 = v55 & 0xffffffff; // 0x402a18
    v17 = v9;
    v25 = v56;
    v29 = v63;
    v22 = v50;
    if (v63 == 0) {
        goto lab_0x402a40_2;
    }
    goto lab_0x402a22;
  lab_0x402a22:
    // 0x402a22
    v16 = v17;
    v23 = v25;
    v27 = v29;
    v20 = v22;
    if (v29 < 8) {
        // 0x402a2c
        int64_t v64; // 0x402900
        v16 = v64;
        int64_t v65; // 0x402900
        v23 = v65;
        int64_t v66; // 0x402900
        v27 = v66;
        int64_t v67; // 0x402900
        v20 = v67;
        bool v68; // 0x402900
        if (!v68) {
            goto lab_0x402a40_2;
        }
    }
    goto lab_0x402972;
  lab_0x402994:
    // 0x402994
    goto lab_0x402994_2;
}
// Address range: 0x402b60 - 0x402c0d
int64_t function_402b60(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a3 / 8; // 0x402b6a
    int64_t size = v1 + 5 + 4 * v1; // 0x402b76
    int64_t v2 = size; // bp-48, 0x402b87
    int64_t * mem = malloc((int32_t)size); // 0x402b8c
    int64_t * v3 = (int64_t *)a4; // 0x402b91
    *v3 = (int64_t)mem;
    if (mem == NULL) {
        // 0x402bd0
        return 1;
    }
    uint64_t result = function_402900((int64_t *)a1, (int64_t *)a2, a3, mem, &v2); // 0x402baa
    if ((char)result == 0) {
        // 0x402be8
        free(mem);
        *v3 = 0;
        return result % 256;
    }
    if (a5 == 0) {
        // 0x402bd0
        return 1;
    }
    // 0x402bb8
    *(int64_t *)a5 = v2;
    return result;
}
// Address range: 0x402c10 - 0x402c18
int64_t function_402c10(int64_t a1) {
    // 0x402c10
    g35 = a1;
    int64_t result; // 0x402c10
    return result;
}
// Address range: 0x402c20 - 0x402c28
int64_t function_402c20(int64_t a1) {
    // 0x402c20
    g34 = a1;
    int64_t result; // 0x402c20
    return result;
}
// Address range: 0x402c30 - 0x402cce
int64_t function_402c30(void) {
    // 0x402c30
    int32_t * err_num; // 0x402c46
    if ((int32_t)function_406740((int64_t)g28) == 0) {
        goto lab_0x402c5c;
    } else {
        // 0x402c46
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x402c73;
        } else {
            // 0x402c57
            if (*err_num != 32) {
                goto lab_0x402c73;
            } else {
                goto lab_0x402c5c;
            }
        }
    }
  lab_0x402c5c:;
    int64_t result = function_406740((int64_t)g31); // 0x402c63
    if ((int32_t)result == 0) {
        // 0x402c6c
        return result;
    }
    // 0x402cae
    _exit(g18);
    // UNREACHABLE
  lab_0x402c73:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402c7f
    if (g35 == 0) {
        // 0x402cb9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402c93
        error(0, *err_num, "%s: %s", (char *)function_404780((int64_t)g35), v1);
    }
    // 0x402cae
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x402cd0 - 0x402cd5
int64_t function_402cd0(void) {
    // 0x402cd0
    int64_t fd; // 0x402cd0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402ce0 - 0x402d01
int64_t function_402ce0(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402ce0
    if (stream == 0) {
        // 0x402d00
        int64_t result; // 0x402ce0
        return result;
    }
    // 0x402ce5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402d10 - 0x402da9
int64_t function_402d10(int64_t str) {
    // 0x402d10
    if (str == 0) {
        // 0x402d89
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402d1e
    int64_t result = (int64_t)found_char_pos; // 0x402d1e
    if (found_char_pos == NULL) {
        // 0x402d79
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402d28
    if (v1 - str < 7) {
        // 0x402d79
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x402d38
    bool v2; // 0x402d10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402d10
    int64_t v5 = result - 6; // 0x402d10
    int64_t v6 = 7; // 0x402d46
    unsigned char v7 = *(char *)v5; // 0x402d46
    char v8 = *(char *)v4; // 0x402d46
    char v9 = v8; // 0x402d46
    bool v10 = false; // 0x402d46
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
    int64_t v12 = (int64_t)"lt-"; // 0x402d50
    int64_t v13 = v1; // 0x402d50
    int64_t v14 = 3; // 0x402d50
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402d79
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402d62
    char v16 = *(char *)v12; // 0x402d62
    char v17 = v16; // 0x402d62
    bool v18 = false; // 0x402d62
    while (v15 == v16) {
        // 0x402d52
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
    int64_t v20 = v1; // 0x402d6c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402d6e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402d79
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402db0 - 0x402ea2
int64_t function_402db0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402dc4
    int64_t result = (int64_t)v1; // 0x402dc4
    if (result != a1) {
        // 0x402dd1
        return result;
    }
    int64_t v2 = function_406800(); // 0x402de0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402e96
    if (v3 == 85) {
        // 0x402df0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402e88
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x402e1e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x402e2b
        // 0x402dd1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402e88
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x402e6d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x402e7a
    // 0x402dd1
    return result4;
}
// Address range: 0x402eb0 - 0x402f07
int64_t function_402eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402eb0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402ef8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402f07 - 0x4040d1
int64_t function_402f07(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402f51
    int64_t v3 = 0; // 0x402f51
    int64_t v4; // 0x402f07
    int64_t v5; // 0x402f07
    int64_t v6; // 0x402f07
    int64_t v7; // 0x402f07
    int64_t v8; // 0x402f07
    int64_t v9; // 0x402f07
    int64_t v10; // 0x402f07
    int64_t v11; // 0x402f07
    int64_t v12; // 0x402f07
    int64_t v13; // 0x402f07
    int64_t v14; // 0x402f07
    int64_t v15; // 0x402f07
    int64_t v16; // 0x402f07
    int64_t v17; // 0x402f07
    int64_t v18; // 0x402f07
    int64_t result; // 0x402f07
    int64_t v19; // 0x402f07
    int32_t wc; // bp+132, 0x402f07
    int64_t ps; // bp+136, 0x402f07
    char v20; // 0x4034c0
    int64_t v21; // 0x4034c0
    int64_t v22; // 0x403868
    int64_t v23; // 0x402f07
    int64_t v24; // 0x403887
    int32_t v25; // 0x402f07
    while (true) {
      lab_0x402f58_2:
        // 0x402f58
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402f07
        int64_t v27; // 0x402f8c
        while (true) {
          lab_0x402f58:
            // 0x402f58
            v5 = v26;
            bool v28 = v15 == v5; // 0x402f63
            if (v15 == -1) {
                // 0x402f65
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402f73
            if (v28) {
                // break (via goto) -> 0x4036d8
                goto lab_0x4036d8;
            }
            // 0x402f7c
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
                    // 0x40356b
                    if (v25 % 2 == 0) {
                        goto lab_0x4030b1;
                    }
                    // 0x40398d
                    v26 = v5 + 1;
                    goto lab_0x402f58;
                }
                case 7: {
                    goto lab_0x4030b1;
                }
                case 8: {
                    goto lab_0x4030b1;
                }
                case 9: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4030b1;
                }
                case 12: {
                    goto lab_0x4030b1;
                }
                case 13: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40307d;
                }
                case 36: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4030b1;
                }
                case 38: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4030b1;
                }
                case 44: {
                    goto lab_0x4030b1;
                }
                case 45: {
                    goto lab_0x4030b1;
                }
                case 46: {
                    goto lab_0x4030b1;
                }
                case 47: {
                    goto lab_0x4030b1;
                }
                case 48: {
                    goto lab_0x4030b1;
                }
                case 49: {
                    goto lab_0x4030b1;
                }
                case 50: {
                    goto lab_0x4030b1;
                }
                case 51: {
                    goto lab_0x4030b1;
                }
                case 52: {
                    goto lab_0x4030b1;
                }
                case 53: {
                    goto lab_0x4030b1;
                }
                case 54: {
                    goto lab_0x4030b1;
                }
                case 55: {
                    goto lab_0x4030b1;
                }
                case 56: {
                    goto lab_0x4030b1;
                }
                case 57: {
                    goto lab_0x4030b1;
                }
                case 58: {
                    goto lab_0x4030b1;
                }
                case 59: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4030b1;
                }
                case 66: {
                    goto lab_0x4030b1;
                }
                case 67: {
                    goto lab_0x4030b1;
                }
                case 68: {
                    goto lab_0x4030b1;
                }
                case 69: {
                    goto lab_0x4030b1;
                }
                case 70: {
                    goto lab_0x4030b1;
                }
                case 71: {
                    goto lab_0x4030b1;
                }
                case 72: {
                    goto lab_0x4030b1;
                }
                case 73: {
                    goto lab_0x4030b1;
                }
                case 74: {
                    goto lab_0x4030b1;
                }
                case 75: {
                    goto lab_0x4030b1;
                }
                case 76: {
                    goto lab_0x4030b1;
                }
                case 77: {
                    goto lab_0x4030b1;
                }
                case 78: {
                    goto lab_0x4030b1;
                }
                case 79: {
                    goto lab_0x4030b1;
                }
                case 80: {
                    goto lab_0x4030b1;
                }
                case 81: {
                    goto lab_0x4030b1;
                }
                case 82: {
                    goto lab_0x4030b1;
                }
                case 83: {
                    goto lab_0x4030b1;
                }
                case 84: {
                    goto lab_0x4030b1;
                }
                case 85: {
                    goto lab_0x4030b1;
                }
                case 86: {
                    goto lab_0x4030b1;
                }
                case 87: {
                    goto lab_0x4030b1;
                }
                case 88: {
                    goto lab_0x4030b1;
                }
                case 89: {
                    goto lab_0x4030b1;
                }
                case 90: {
                    goto lab_0x4030b1;
                }
                case 91: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4030b1;
                }
                case 94: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4030b1;
                }
                case 96: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4030b1;
                }
                case 98: {
                    goto lab_0x4030b1;
                }
                case 99: {
                    goto lab_0x4030b1;
                }
                case 100: {
                    goto lab_0x4030b1;
                }
                case 101: {
                    goto lab_0x4030b1;
                }
                case 102: {
                    goto lab_0x4030b1;
                }
                case 103: {
                    goto lab_0x4030b1;
                }
                case 104: {
                    goto lab_0x4030b1;
                }
                case 105: {
                    goto lab_0x4030b1;
                }
                case 106: {
                    goto lab_0x4030b1;
                }
                case 107: {
                    goto lab_0x4030b1;
                }
                case 108: {
                    goto lab_0x4030b1;
                }
                case 109: {
                    goto lab_0x4030b1;
                }
                case 110: {
                    goto lab_0x4030b1;
                }
                case 111: {
                    goto lab_0x4030b1;
                }
                case 112: {
                    goto lab_0x4030b1;
                }
                case 113: {
                    goto lab_0x4030b1;
                }
                case 114: {
                    goto lab_0x4030b1;
                }
                case 115: {
                    goto lab_0x4030b1;
                }
                case 116: {
                    goto lab_0x4030b1;
                }
                case 117: {
                    goto lab_0x4030b1;
                }
                case 118: {
                    goto lab_0x4030b1;
                }
                case 119: {
                    goto lab_0x4030b1;
                }
                case 120: {
                    goto lab_0x4030b1;
                }
                case 121: {
                    goto lab_0x4030b1;
                }
                case 122: {
                    goto lab_0x4030b1;
                }
                case 123: {
                    goto lab_0x403055;
                }
                case 124: {
                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403055;
                }
                case 126: {
                    goto lab_0x40307d;
                }
                default: {
                    goto lab_0x403455;
                }
            }
        }
      lab_0x403455:
        if (v23 != 1) {
            // 0x4037c0
            ps = 0;
            int64_t len = v15; // 0x4037d0
            if (v15 == -1) {
                // 0x4037d2
                len = strlen((char *)str);
            }
            // 0x4037fe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40385f:
                // 0x40385f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403864
                int64_t v30 = v29 + str;
                v24 = function_4065b0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403dda_2;
                    }
                    case -1: {
                        goto lab_0x403dda_2;
                    }
                    case -2: {
                        // 0x403ebd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403ef7
                            v19 = v18;
                            int64_t v31 = v18; // 0x403efa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403f07
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403f00
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403dda
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403dda_2;
                    }
                    case 1: {
                        goto lab_0x403830;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4038dc
                        char v34 = *(char *)v33; // 0x4038ed
                        unsigned char v35; // 0x402f07
                        if (v34 < 125) {
                            // 0x4038f8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40390f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4038e0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4038ed
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4038f8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40390f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4038e0
                            v33++;
                        }
                        goto lab_0x403830;
                    }
                }
            }
            goto lab_0x403dda_2;
        } else {
            // 0x4034a4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4030b1;
        }
    }
  lab_0x4036d8:
    // 0x4036d8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403fda
        if (v8 > result) {
            // 0x403fe3
            *(char *)(v12 + result) = 0;
        }
        // 0x403307
        return result;
    }
    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4030b1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4030c0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4032ca_2;
        }
    }
    int64_t v39 = result; // 0x4031c1
    char v40 = v20; // 0x4031c1
    int64_t v41 = v38; // 0x4031c1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4031c1
    int64_t v43 = v36; // 0x4031c1
    goto lab_0x40313d;
  lab_0x4032ca_2:
    // 0x403307
    return function_402eb0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403dda_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4030b1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4039ae
        int64_t v50 = v5 + 1; // 0x403a91
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403a98
        char v52 = v20; // 0x403a98
        int64_t v53 = result; // 0x403a98
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403a61
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403a65
            int64_t v56 = v54 + 1; // 0x403a6a
            int64_t v57 = v51 + 1; // 0x403a91
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403a5c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403a61
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403a65
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
        goto lab_0x40313d;
    }
  lab_0x403830:
    // 0x403830
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40384f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403852
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403dda
        goto lab_0x403dda_2;
    }
    goto lab_0x40385f;
  lab_0x40307d:
    // 0x40307d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4032ca_2;
    }
    goto lab_0x4030b1;
  lab_0x403055:;
    bool v60 = v15 == 1; // 0x403060
    if (v15 == -1) {
        // 0x403062
        v60 = *(char *)v1 == 0;
    }
    // 0x40306e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4030b1;
    } else {
        goto lab_0x40307d;
    }
  lab_0x40313d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403142
        *(char *)(v44 + v45) = v40;
    }
    // 0x403146
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402f58_2;
}
// Address range: 0x4040e0 - 0x40427e
int64_t function_4040e0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4040e2
    int32_t * v3 = __errno_location(); // 0x4040fc
    int64_t v4 = (int64_t)g20; // 0x404101
    int32_t v5 = *v3; // 0x40410b
    int64_t v6 = v4; // 0x404121
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404279
            function_405140(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404130
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404137
        int64_t v9; // 0x4040e0
        if (g20 == &g21) {
            int64_t v10 = function_404f50(0, v8); // 0x40425a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40425f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404f50(v4, v8); // 0x40414b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40415a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40415a
        int32_t v14 = v7; // 0x404161
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404191
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40419b
    int64_t * v17 = (int64_t *)v15; // 0x40419e
    uint64_t v18 = *v17; // 0x40419e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4041a1
    int64_t result = *v19; // 0x4041a1
    int64_t v20; // 0x4040e0
    uint64_t v21 = function_402eb0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4041c4
    if (v18 > v21) {
        // 0x40423b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4041d7
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x4041e7
        free((int64_t *)result);
    }
    int64_t result2 = function_404ef0(v22); // 0x404201
    *v19 = result2;
    int64_t v23; // 0x4040e0
    function_402eb0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40423b
    *v3 = v5;
    return result2;
}
// Address range: 0x404280 - 0x4042b4
int64_t function_404280(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404287
    int64_t result = function_4050f0(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x4042a6
    return result;
}
// Address range: 0x4042c0 - 0x4042cf
int64_t function_4042c0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x4042cc
    return result;
}
// Address range: 0x4042d0 - 0x4042df
int64_t function_4042d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x4042d8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x4042e0 - 0x404313
int64_t function_4042e0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x4042f9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4042fe
    uint32_t v3 = *v2; // 0x4042fe
    uint32_t v4 = (int32_t)a2 % 32; // 0x404302
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404320 - 0x404333
int64_t function_404320(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x40432c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404340 - 0x40436b
int64_t function_404340(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x404348
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404365
        abort();
        // UNREACHABLE
    }
    // 0x40435c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x404370 - 0x4043e2
int64_t function_404370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x404392
    int32_t * v2 = __errno_location(); // 0x40439b
    uint32_t v3 = *(int32_t *)v1; // 0x4043bb
    int64_t result = function_402eb0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4043ca
    return result;
}
// Address range: 0x4043f0 - 0x4044d1
int64_t function_4043f0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x404412
    int32_t * v2 = __errno_location(); // 0x404418
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404437
    int32_t * v4 = (int32_t *)v1; // 0x40443a
    int64_t v5 = function_402eb0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404455
    int64_t v6 = v5 + 1; // 0x40445a
    int64_t result = function_404ef0(v6); // 0x40446f
    function_402eb0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4044b4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4044bd
    return result;
}
// Address range: 0x4044e0 - 0x4044ea
int64_t function_4044e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4044e0
    return function_4043f0(a1, a2, 0, a3);
}
// Address range: 0x4044f0 - 0x404585
int64_t function_4044f0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x4044f0
    int64_t v2 = v1; // 0x4044f0
    int64_t v3 = v2; // 0x404504
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404523
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404520
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x40453d
    if (g21 != 0x60b2c0) {
        // 0x40453f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g37;
        v6 = &g50;
    }
    int64_t result = v6; // 0x404561
    if (g20 != &g21) {
        // 0x404563
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g50;
    }
    // 0x404576
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x404590 - 0x4045a1
int64_t function_404590(void) {
    // 0x404590
    int64_t v1; // 0x404590
    return function_4040e0(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x4045b0 - 0x4045ba
int64_t function_4045b0(void) {
    // 0x4045b0
    int64_t v1; // 0x4045b0
    return function_4040e0(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x4045c0 - 0x4045d6
int64_t function_4045c0(int64_t a1) {
    // 0x4045c0
    return function_4040e0(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x4045e0 - 0x4045f2
int64_t function_4045e0(int64_t a1, int64_t a2) {
    // 0x4045e0
    return function_4040e0(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x404600 - 0x404668
int64_t function_404600(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404610
    return function_4040e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404670 - 0x4046d4
int64_t function_404670(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404680
    return function_4040e0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4046e0 - 0x4046ec
int64_t function_4046e0(int64_t a1, int64_t a2) {
    // 0x4046e0
    return function_404600(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4046f0 - 0x4046ff
int64_t function_4046f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4046f0
    return function_404670(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404700 - 0x404770
int64_t function_404700(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x40470d
    int128_t v2 = __asm_movdqa(g39); // 0x404715
    int128_t v3 = __asm_movdqa(g40); // 0x40471d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404732
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404748
    uint32_t v6 = *v5; // 0x404748
    uint32_t v7 = (int32_t)a3 % 32; // 0x40474d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4040e0(0, a1, a2, &v4);
}
// Address range: 0x404770 - 0x40477d
int64_t function_404770(int64_t a1, int64_t a2) {
    // 0x404770
    return function_404700(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404780 - 0x404791
int64_t function_404780(int64_t a1) {
    // 0x404780
    return function_404700(a1, -1, 58);
}
// Address range: 0x4047a0 - 0x4047aa
int64_t function_4047a0(void) {
    // 0x4047a0
    int64_t v1; // 0x4047a0
    return function_404700(v1, v1, 58);
}
// Address range: 0x4047b0 - 0x40481e
int64_t function_4047b0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4047ca
    return function_4040e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404820 - 0x40488c
int64_t function_404820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x404827
    int128_t v2 = __asm_movdqa(g39); // 0x40482f
    int128_t v3 = __asm_movdqa(g40); // 0x404837
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404859
    if (a2 == 0 || a3 == 0) {
        // 0x404887
        abort();
        // UNREACHABLE
    }
    // 0x40486a
    return function_4040e0(a1, a4, a5, &v4);
}
// Address range: 0x404890 - 0x404899
int64_t function_404890(void) {
    // 0x404890
    int64_t v1; // 0x404890
    return function_404820(v1, v1, v1, v1, -1);
}
// Address range: 0x4048a0 - 0x4048b7
int64_t function_4048a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4048a0
    return function_404820(0, a1, a2, a3, -1);
}
// Address range: 0x4048c0 - 0x4048d3
int64_t function_4048c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4048c0
    return function_404820(0, a1, a2, a3, a4);
}
// Address range: 0x4048e0 - 0x4048ea
int64_t function_4048e0(void) {
    // 0x4048e0
    int64_t v1; // 0x4048e0
    return function_4040e0(v1, v1, v1, &g19);
}
// Address range: 0x4048f0 - 0x404902
int64_t function_4048f0(int64_t a1, int64_t a2) {
    // 0x4048f0
    return function_4040e0(0, a1, a2, &g19);
}
// Address range: 0x404910 - 0x404921
int64_t function_404910(void) {
    // 0x404910
    int64_t v1; // 0x404910
    return function_4040e0(v1, v1, -1, &g19);
}
// Address range: 0x404930 - 0x404946
int64_t function_404930(int64_t a1) {
    // 0x404930
    return function_4040e0(0, a1, -1, &g19);
}
// Address range: 0x404950 - 0x404d2d
int64_t function_404950(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4049e8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40496c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404986
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4049cb
    if (a6 < 10) {
        // 0x4049da
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404ad2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404d30 - 0x404d50
int64_t function_404d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404d30
    if (a5 == 0) {
        // 0x404d4b
        return function_404950(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x404d37
    v1++;
    int64_t v2 = v1; // 0x404d49
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404d40
        v1++;
        v2 = v1;
    }
    // 0x404d4b
    return function_404950(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x404d50 - 0x404db0
int64_t function_404d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404d50
    int64_t v3 = &v2; // 0x404d50
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404d83
    int64_t v6; // 0x404d6d
    int64_t * v7; // 0x404d8b
    int64_t v8; // 0x404d8b
    int64_t v9; // 0x404d97
    if (v5 < 48) {
        // 0x404d60
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404da3
            break;
        }
    } else {
        // 0x404d8b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404da3
            break;
        }
    }
    int64_t v10 = 10; // 0x404d81
    while (v4 != 9) {
        // 0x404d79
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404d60
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404da3
                break;
            }
        } else {
            // 0x404d8b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404da3
                break;
            }
        }
        // 0x404d79
        v10 = 10;
    }
    // 0x404da3
    return function_404950(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x404db0 - 0x404e6c
int64_t function_404db0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404db0
    int64_t v1; // bp-168, 0x404db0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404db0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404db0
    int64_t v8; // 0x404db0
    int64_t v9; // bp-56, 0x404db0
    int64_t v10; // 0x404e15
    int64_t v11; // 0x404e39
    if ((int32_t)v6 < 48) {
        // 0x404e00
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404e50
            break;
        }
    } else {
        // 0x404e32
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404e50
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404e2a
    int64_t v13 = 10; // 0x404e2a
    while (v5 != 9) {
        // 0x404e2c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404e00
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404e50
                break;
            }
        } else {
            // 0x404e32
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404e50
                break;
            }
        }
        // 0x404e22
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404e50
    int64_t v14; // bp-136, 0x404db0
    int64_t result = function_404950(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x404e5f
    return result;
}
// Address range: 0x404e70 - 0x404ee4
int64_t function_404e70(int64_t a1) {
    // 0x404e70
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404ed3
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404ef0 - 0x404f0a
int64_t function_404ef0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404ef4
    if (size != 0 != (mem == NULL)) {
        // 0x404f03
        return (int64_t)mem;
    }
    // 0x404f05
    function_405140(size);
    // UNREACHABLE
}
// Address range: 0x404f10 - 0x404f31
int64_t function_404f10(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404f13
    int64_t v2 = v1; // 0x404f13
    if (v2 < 0) {
        // 0x404f2b
        function_405140(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404f29
        return function_404ef0(v2);
    }
    // 0x404f2b
    function_405140(v2);
    // UNREACHABLE
}
// Address range: 0x404f40 - 0x404f42
int64_t function_404f40(void) {
    // 0x404f40
    int64_t v1; // 0x404f40
    return function_404ef0(v1);
}
// Address range: 0x404f50 - 0x404f86
int64_t function_404f50(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404f78
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404f61
    if (a2 != 0 != (mem == NULL)) {
        // 0x404f70
        return (int64_t)mem;
    }
    // 0x404f81
    function_405140(a1);
    // UNREACHABLE
}
// Address range: 0x404f90 - 0x404fb1
int64_t function_404f90(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404f93
    int64_t v2 = v1; // 0x404f93
    if (v2 < 0) {
        // 0x404fab
        function_405140(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404fa9
        return function_404f50(a1, v2);
    }
    // 0x404fab
    function_405140(a1);
    // UNREACHABLE
}
// Address range: 0x404fc0 - 0x405046
int64_t function_404fc0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40501b
            function_405140(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404f50(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405003
    if (a2 == 0) {
        // 0x405028
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405008
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40501b
        function_405140(a1);
        // UNREACHABLE
    }
    // 0x404fea
    *(int64_t *)a2 = v2;
    return function_404f50(a1, v2 * a3);
}
// Address range: 0x405050 - 0x4050a0
int64_t function_405050(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405050
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40509a
            function_405140(a1);
            // UNREACHABLE
        }
        // 0x405072
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404f50(a1, v1);
    }
    if (a2 == 0) {
        // 0x405085
        *(int64_t *)a2 = 128;
        return function_404f50(0, 128);
    }
    // 0x405098
    if (a2 < 0) {
        // 0x40509a
        function_405140(a1);
        // UNREACHABLE
    }
    // 0x405072
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404f50(a1, v1);
}
// Address range: 0x4050a0 - 0x4050b7
int64_t function_4050a0(int64_t a1, int64_t a2) {
    // 0x4050a0
    return (int64_t)memset((int64_t *)function_404ef0(a1), 0, (int32_t)a1);
}
// Address range: 0x4050c0 - 0x4050ee
int64_t function_4050c0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4050c7
    if ((int64_t)v1 < 0) {
        // 0x4050e9
        function_405140(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4050e9
        function_405140(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4050da
    if (mem != NULL) {
        // 0x4050e4
        return (int64_t)mem;
    }
    // 0x4050e9
    function_405140(nmemb);
    // UNREACHABLE
}
// Address range: 0x4050f0 - 0x405118
int64_t function_4050f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_404ef0(a2); // 0x4050ff
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405120 - 0x405133
int64_t function_405120(int64_t str) {
    // 0x405120
    return function_4050f0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405140 - 0x405171
int64_t function_405140(int64_t a1) {
    // 0x405140
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405180 - 0x405250
int64_t function_405180(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x405180
    int64_t result2; // bp-64, 0x405180
    int32_t v1 = function_405280(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x4051ac
    int32_t * v2; // 0x405180
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x40522a
        if (v1 == 1) {
            // 0x405248
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x405237
            v2 = v3;
            if (v1 == 3) {
                // 0x40523c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x4051b0
        if (result >= a3 && result <= a4) {
            // 0x405212
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x4051bf
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_404930(a1); // 0x4051dc
    int32_t v6 = *v2; // 0x4051e1
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x4051f7
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x405212
    return result2;
}
// Address range: 0x405250 - 0x405271
int64_t function_405250(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x405250
    int64_t result; // 0x405250
    return result;
}
// Address range: 0x405280 - 0x4056c0
int64_t function_405280(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40528e
    if (v1 >= 37) {
        // 0x40569b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g50;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x4052b2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x4052e2
    int64_t v4 = a1; // 0x4052e7
    char v5 = c; // 0x4052e7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x4052dc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x4052d8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x4052e9
    if (v5 == 45) {
        // 0x405325
        return 4;
    }
    // 0x4052ee
    int64_t v7; // bp-64, 0x405280
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x4052ae
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x4052f6
    int64_t * v10 = (int64_t *)v8; // 0x4052fb
    int64_t v11 = *v10; // 0x4052fb
    char v12; // 0x405280
    int64_t v13; // 0x405280
    int64_t v14; // 0x405280
    int64_t v15; // 0x405280
    int64_t v16; // 0x405280
    int64_t v17; // 0x405280
    int64_t v18; // 0x405280
    if (v11 == a1) {
        // 0x405358
        if (c == 0 || str == 0) {
            // 0x405325
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x405379
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x405325
            return 4;
        }
        goto lab_0x405387;
    } else {
        int32_t v19 = *v2; // 0x405306
        int64_t v20 = 0; // 0x40530c
        if (v19 != 0) {
            // 0x405340
            v20 = 1;
            if (v19 != 34) {
                // 0x405325
                return 4;
            }
        }
        int64_t v21 = v9; // 0x4052f6
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x405322;
        } else {
            char c2 = *(char *)v11; // 0x405315
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x405483
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x405387;
                } else {
                    goto lab_0x405495;
                }
            } else {
                goto lab_0x405322;
            }
        }
    }
  lab_0x405387:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40538f
    int64_t v24 = 1; // 0x40538f
    int64_t v25; // 0x405280
    int64_t v26; // 0x405280
    int64_t v27; // 0x405280
    int64_t v28; // 0x405280
    int64_t v29; // 0x405280
    int64_t v30; // 0x405280
    int64_t v31; // 0x405280
    int64_t v32; // 0x405280
    int64_t v33; // 0x405280
    int64_t v34; // 0x405280
    int64_t v35; // 0x405280
    int64_t v36; // 0x405280
    int64_t v37; // 0x405280
    int64_t v38; // 0x405280
    int64_t v39; // 0x405280
    int64_t v40; // 0x405280
    int64_t v41; // 0x405280
    int64_t v42; // 0x405280
    int64_t v43; // 0x405280
    int64_t v44; // 0x405280
    if (v22 < 48) {
        // 0x405391
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4053fa;
        } else {
            // 0x4053a4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4053fa;
            } else {
                // 0x4053c0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x4053fa;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x405629
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x4053fa;
                    }
                    default: {
                        // 0x4053d5
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
                                goto lab_0x40559b;
                            }
                            case 70: {
                                goto lab_0x405495;
                            }
                            case 71: {
                                goto lab_0x4055d3;
                            }
                            case 72: {
                                goto lab_0x405495;
                            }
                            case 73: {
                                goto lab_0x405495;
                            }
                            case 74: {
                                goto lab_0x405495;
                            }
                            case 75: {
                                goto lab_0x40545c;
                            }
                            case 76: {
                                goto lab_0x405495;
                            }
                            case 77: {
                                goto lab_0x40541e;
                            }
                            case 78: {
                                goto lab_0x405495;
                            }
                            case 79: {
                                goto lab_0x405495;
                            }
                            case 80: {
                                goto lab_0x405568;
                            }
                            case 81: {
                                goto lab_0x405495;
                            }
                            case 82: {
                                goto lab_0x405495;
                            }
                            case 83: {
                                goto lab_0x405495;
                            }
                            case 84: {
                                goto lab_0x405538;
                            }
                            case 85: {
                                goto lab_0x405495;
                            }
                            case 86: {
                                goto lab_0x405495;
                            }
                            case 87: {
                                goto lab_0x405495;
                            }
                            case 88: {
                                goto lab_0x405495;
                            }
                            case 89: {
                                goto lab_0x405506;
                            }
                            case 90: {
                                goto lab_0x4054cb;
                            }
                            case 91: {
                                goto lab_0x405495;
                            }
                            case 92: {
                                goto lab_0x405495;
                            }
                            case 93: {
                                goto lab_0x405495;
                            }
                            case 94: {
                                goto lab_0x405495;
                            }
                            case 95: {
                                goto lab_0x405495;
                            }
                            case 96: {
                                goto lab_0x405495;
                            }
                            case 97: {
                                goto lab_0x405495;
                            }
                            case 98: {
                                goto lab_0x4054af;
                            }
                            case 99: {
                                goto lab_0x405438;
                            }
                            case 100: {
                                goto lab_0x405495;
                            }
                            case 101: {
                                goto lab_0x405495;
                            }
                            case 102: {
                                goto lab_0x405495;
                            }
                            case 103: {
                                goto lab_0x4055d3;
                            }
                            case 104: {
                                goto lab_0x405495;
                            }
                            case 105: {
                                goto lab_0x405495;
                            }
                            case 106: {
                                goto lab_0x405495;
                            }
                            case 107: {
                                goto lab_0x40545c;
                            }
                            case 108: {
                                goto lab_0x405495;
                            }
                            case 109: {
                                goto lab_0x40541e;
                            }
                            case 110: {
                                goto lab_0x405495;
                            }
                            case 111: {
                                goto lab_0x405495;
                            }
                            case 112: {
                                goto lab_0x405495;
                            }
                            case 113: {
                                goto lab_0x405495;
                            }
                            case 114: {
                                goto lab_0x405495;
                            }
                            case 115: {
                                goto lab_0x405495;
                            }
                            case 116: {
                                goto lab_0x405538;
                            }
                            default: {
                                goto lab_0x4053fa;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4053fa;
    }
  lab_0x405322:
    // 0x405322
    *a4 = v16;
    // 0x405325
    return v13 & 0xffffffff;
  lab_0x4053fa:
    // 0x4053fa
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
    int64_t v46; // 0x405280
    switch (v12) {
        case 66: {
            // 0x4055f4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x405467;
            } else {
                // 0x405601
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405438;
            }
        }
        case 69: {
            goto lab_0x40559b;
        }
        case 71: {
            goto lab_0x4055d3;
        }
        case 75: {
            goto lab_0x40545c;
        }
        case 77: {
            goto lab_0x40541e;
        }
        case 80: {
            goto lab_0x405568;
        }
        case 84: {
            goto lab_0x405538;
        }
        case 89: {
            goto lab_0x405506;
        }
        case 90: {
            goto lab_0x4054cb;
        }
        case 98: {
            goto lab_0x4054af;
        }
        case 99: {
            goto lab_0x405438;
        }
        case 103: {
            goto lab_0x4055d3;
        }
        case 107: {
            goto lab_0x40545c;
        }
        case 109: {
            goto lab_0x40541e;
        }
        case 116: {
            goto lab_0x405538;
        }
        case 119: {
            // 0x4054a0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x405467;
            } else {
                // 0x4054a5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405438;
            }
        }
        default: {
            goto lab_0x405495;
        }
    }
  lab_0x40559b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x4055b3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x4055bf
    int64_t v51 = v48; // 0x4055c2
    int64_t v52 = v37; // 0x4055c2
    int64_t v53 = v49; // 0x4055c2
    int32_t v54 = v50; // 0x4055c2
    int64_t v55 = v49; // 0x4055c2
    while (v50 != 0) {
        // 0x4055b0
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
    goto lab_0x4054f4;
  lab_0x4055d3:
    // 0x4055d3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4055de
        int128_t v56; // 0x4055d9
        uint128_t v57; // 0x4055d9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4055de
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x405280
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x4055e3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x4055e8
                v26 = v60;
                int64_t v61; // 0x405280
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x405438;
  lab_0x40545c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40545f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x405438;
    } else {
        goto lab_0x405467;
    }
  lab_0x40541e:;
    int128_t v65 = v27; // 0x405424
    uint128_t v66 = v65 * (int128_t)v17; // 0x405424
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x405467;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x405429
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x405467;
        } else {
            // 0x40542e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x405438;
        }
    }
  lab_0x405568:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40557b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x405587
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40558a
    int64_t v73 = v70; // 0x40558a
    while (v71 != 0) {
        // 0x405578
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
    goto lab_0x4054f4;
  lab_0x405538:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40554b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x405557
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40555a
    int64_t v79 = v76; // 0x40555a
    while (v77 != 0) {
        // 0x405548
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
    goto lab_0x4054f4;
  lab_0x405506:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x40551b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x405527
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x40552a
    int64_t v85 = v82; // 0x40552a
    while (v83 != 0) {
        // 0x405518
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
    goto lab_0x4054f4;
  lab_0x4054cb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x4054e3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x4054ef
    int32_t v90 = v89; // 0x4054f2
    int64_t v91 = v88; // 0x4054f2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x4054e0
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
    goto lab_0x4054f4;
  lab_0x4054af:
    // 0x4054af
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x405467;
    } else {
        // 0x4054b8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x405438;
    }
  lab_0x405438:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40543d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x405322;
  lab_0x405495:
    // 0x405495
    *a4 = v18;
    // 0x405325
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405467:
    // 0x405467
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x405438;
  lab_0x4054f4:
    // 0x4054f4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x405438;
}
// Address range: 0x4056c0 - 0x40573b
int64_t function_4056c0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4056c7
    if (fileno(stream) < 0) {
        // 0x405727
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4056da
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40570b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405727
            return fclose(stream);
        }
    }
    // 0x4056dc
    if ((int32_t)function_405740(a1, v1) == 0) {
        // 0x405727
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4056e8
    int32_t v3 = *v2; // 0x4056f0
    int64_t result = fclose(stream); // 0x4056fe
    if (v3 != 0) {
        // 0x405730
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405700
    return result;
}
// Address range: 0x405740 - 0x405780
int64_t function_405740(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40575a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40575a
        return fflush(stream);
    }
    // 0x405768
    function_405780(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405780 - 0x4057d7
int64_t function_405780(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405780
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40578a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4057bb
    int64_t result = -1; // 0x4057c4
    if (v1 != -1) {
        // 0x4057c6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4057d2
    return result;
}
// Address range: 0x4057e0 - 0x4058bf
int64_t function_4057e0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4057ec
    uint32_t v2 = *v1; // 0x4057ec
    int64_t v3 = a2 & 0xffffffff; // 0x4057f1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4057f4
    uint64_t v5 = (int64_t)*v4; // 0x4057f4
    int64_t v6; // 0x405862
    if (v3 <= v5) {
      lab_0x40585c_2:
        // 0x40585c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4057e2
    int64_t v8 = v2; // 0x4057e0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40585c
        goto lab_0x40585c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405818
    int64_t v17; // 0x405826
    int64_t * v18; // 0x405840
    int64_t * v19; // 0x405843
    int64_t v20; // 0x40584e
    int64_t v21; // 0x405826
    while ((v16 & 0xffffffff) > v10) {
        // 0x405823
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405840
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405857
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40585c
            goto lab_0x40585c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40585c
            goto lab_0x40585c_2;
        }
        // 0x405812
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40589b
    int64_t * v23 = (int64_t *)v22; // 0x4058a0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4058a3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4058a0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4058b7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40580d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40585c
            goto lab_0x40585c_2;
        }
        // 0x405812
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405823
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405840
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405857
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40585c
                goto lab_0x40585c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40585c
                goto lab_0x40585c_2;
            }
            // 0x405812
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405880
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4058a0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4058b7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40585c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4058c0 - 0x405edc
int64_t function_4058c0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4058df
    int64_t v2 = *v1; // 0x4058df
    char * str2 = (char *)v2; // 0x4058ec
    char c = *str2; // 0x4058ec
    int64_t v3 = v2; // 0x405918
    int64_t v4 = 0; // 0x4058c0
    int32_t v5; // 0x4058c0
    int64_t v6; // 0x4058c0
    int64_t v7; // 0x4058c0
    int64_t v8; // 0x4058c0
    int64_t v9; // 0x4058c0
    int64_t v10; // 0x4058c0
    int64_t v11; // 0x4058c0
    int64_t v12; // 0x4058c0
    int64_t v13; // 0x4058c0
    int64_t str3; // 0x4058c0
    int64_t v14; // 0x4058c0
    int64_t v15; // 0x4058c0
    int64_t v16; // 0x4058c0
    int64_t v17; // 0x4058c0
    int32_t v18; // 0x4058c0
    int32_t v19; // 0x4058c0
    int32_t v20; // 0x4058c0
    int32_t v21; // 0x4058c0
    int32_t v22; // 0x4058c0
    int32_t v23; // 0x4058c0
    int32_t v24; // 0x4058c0
    int32_t v25; // 0x4058c0
    int32_t v26; // 0x4058c0
    int32_t v27; // 0x4058c0
    int32_t v28; // 0x4058c0
    int32_t v29; // 0x4058c0
    int64_t nmemb; // 0x4058c0
    int64_t v30; // 0x4058c0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40591c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405918
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405928
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40592e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4058f8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40595c
                int64_t v34; // 0x4058c0
                int64_t v35; // 0x4058c0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405965
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405ae0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405976
                int64_t v37 = *(int64_t *)v36; // 0x40597a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405950
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405965
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405ae0;
                        }
                    }
                    // 0x405976
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
                  lab_0x4059c6:
                    // 0x4059c6
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
                        goto lab_0x405a20;
                    } else {
                        if (v11 == 0) {
                            // 0x405b90
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405a20;
                        } else {
                            if (v39 == 0) {
                                // 0x405b40
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4059ea;
                                } else {
                                    // 0x405b4c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4059ea;
                                    } else {
                                        // 0x405b5a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4059ea;
                                        } else {
                                            goto lab_0x405a20;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4059ea;
                            }
                        }
                    }
                }
              lab_0x405a31:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405c06
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405db2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x405dd2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405e1f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405e39
                            int64_t v45; // 0x405e3b
                            if (*(char *)v42 != 0) {
                                // 0x405e3b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405e33
                            while (v17 + nmemb != v42) {
                                // 0x405e35
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405e3b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405e28
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405e60
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405c14
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405d6f
                        free((int64_t *)v17);
                    }
                    // 0x405c69
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405c80
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405b2e
                    return 63;
                }
                // 0x405a50
                v5 = v39;
                if (v13 != 0) {
                    // 0x405ad4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405ae0:;
                    int32_t * v49 = (int32_t *)a7; // 0x405af0
                    uint32_t v50 = *v49; // 0x405af0
                    int64_t v51 = v50; // 0x405af0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405afa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405b03
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405d2f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405cda
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405b2e
                            return 63;
                        }
                        // 0x405b78
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405e8f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405d8d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405da0
                                // 0x405b2e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405c9e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405cb2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405b1b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405b1e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405b22
                    int64_t result = v59; // 0x405b28
                    if (v58 != 0) {
                        // 0x405b2a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405b2e
                    return result;
                }
            } else {
                // 0x40592e
                v5 = v32;
            }
            // break -> 0x405a55
            break;
        }
    }
    // 0x405a55
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405a6d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405a77
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405b2e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405bb9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405aa6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405ab6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405a20:
    // 0x405a20
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405a20
    int64_t v63 = *(int64_t *)v62; // 0x405a24
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405a31
        goto lab_0x405a31;
    }
    goto lab_0x4059c6;
  lab_0x4059ea:
    // 0x4059ea
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4058c0
    int32_t v65; // 0x4058c0
    int32_t v66; // 0x4058c0
    if (v27 != 0) {
        goto lab_0x405a20;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405ba0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405a20;
            } else {
                goto lab_0x405a11;
            }
        } else {
            // 0x405a05
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405cfc
                int64_t v67 = (int64_t)mem; // 0x405cfc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405a20;
                } else {
                    // 0x405d0f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405a11;
                }
            } else {
                goto lab_0x405a11;
            }
        }
    }
  lab_0x405a11:
    // 0x405a11
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405a20;
}
// Address range: 0x405ee0 - 0x4064a6
int64_t function_405ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405f01
    if (v3 < 1) {
        // 0x4060be
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405efd
    int32_t v5 = *(int32_t *)a7; // 0x405f09
    uint64_t v6 = a1 & 0xffffffff; // 0x405f0b
    int64_t v7 = v2; // 0x405f10
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405f13
    *v8 = 0;
    int64_t v9; // 0x405ee0
    int64_t v10; // 0x405ee0
    int64_t v11; // 0x405ee0
    int64_t v12; // 0x405ee0
    int64_t str; // 0x405ee0
    int64_t v13; // 0x405ee0
    int64_t v14; // 0x405ee0
    int64_t v15; // 0x405ee0
    int64_t v16; // 0x405ee0
    int64_t v17; // 0x405ee0
    int32_t v18; // 0x405ee0
    char v19; // 0x405ee0
    if (v5 == 0) {
        // 0x4060f8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405f2a;
    } else {
        // 0x405f23
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405f70
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405f73
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406038;
            } else {
                int64_t v22 = v7 + 1; // 0x405f86
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405f96
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40604c;
                } else {
                    goto lab_0x405fa8;
                }
            }
        } else {
            goto lab_0x405f2a;
        }
    }
  lab_0x405f2a:
    // 0x405f2a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405f30
    *v24 = 0;
    int64_t v25; // 0x405ee0
    int64_t v26; // 0x405ee0
    int64_t v27; // 0x405ee0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406020
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40602d;
        }
        case 43: {
            // 0x406330
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40602d;
        }
        default: {
            // 0x405f4c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4062af
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4063c8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40602d;
                } else {
                    // 0x4062bd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405f5a;
                }
            } else {
                goto lab_0x405f5a;
            }
        }
    }
  lab_0x406038:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40603f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405fa8;
    } else {
        goto lab_0x40604c;
    }
  lab_0x405f5a:
    // 0x405f5a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40602d;
  lab_0x40602d:
    // 0x40602d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406038;
  lab_0x405fa8:;
    uint32_t v30 = *(int32_t *)a7; // 0x405fa8
    int64_t v31 = v30; // 0x405fa8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405faa
    if ((int64_t)*v32 > v31) {
        // 0x405faf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405fb2
    if (*v33 > v30) {
        // 0x405fb7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405fba
    int64_t v35 = v31; // 0x405fbe
    int64_t v36 = v15; // 0x405fbe
    int64_t v37; // 0x405ee0
    int64_t v38; // 0x405ee0
    int64_t v39; // 0x405ee0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406128
        int64_t v41 = v40; // 0x406128
        v2 = v41;
        int64_t v42; // 0x405ee0
        if (*v33 == v40) {
            // 0x406310
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406318
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406134
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406138
                function_4057e0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406148
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406151
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40615a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406171
            int64_t v47 = v45 & 0xffffffff; // 0x406175
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40617e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406184
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406186;
                }
            }
            int64_t v48 = v47 + 1; // 0x406160
            int64_t v49 = v48 & 0xffffffff; // 0x406160
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406171
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40617e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406184
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406186;
                    }
                }
                // 0x406160
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406328
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406186;
    } else {
        goto lab_0x405fc4;
    }
  lab_0x40604c:
    // 0x40604c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40604f
    int64_t v51 = v12; // 0x40604f
    int64_t v52 = v14; // 0x40604f
    if (*(char *)v10 == 0) {
        goto lab_0x405fa8;
    } else {
        goto lab_0x406055;
    }
  lab_0x405fc4:;
    int32_t v53 = v35; // 0x405fc4
    int64_t v54; // 0x405ee0
    int64_t v55; // 0x405ee0
    int64_t v56; // 0x405ee0
    int64_t v57; // 0x405ee0
    int64_t v58; // 0x405ee0
    int64_t v59; // 0x405ee0
    char * v60; // 0x405ee0
    int64_t v61; // 0x405ee0
    int64_t v62; // 0x405fd9
    int64_t v63; // 0x405ee0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406113
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406116;
    } else {
        // 0x405fcc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405ee0
        int64_t v66 = v65 ? -1 : 1; // 0x405fe0
        int64_t v67 = (int64_t)"--"; // 0x405ee0
        int64_t v68 = v62; // 0x405ee0
        int64_t v69 = 3; // 0x405fe0
        unsigned char v70 = *(char *)v68; // 0x405fe0
        char v71 = *(char *)v67; // 0x405fe0
        char v72 = v71; // 0x405fe0
        bool v73 = false; // 0x405fe0
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
            // 0x4060d0
            if (*(char *)v62 == 45) {
                // 0x406190
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406190
                if (c == 0) {
                    goto lab_0x4060da;
                } else {
                    // 0x40619d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406220;
                    } else {
                        if (c == 45) {
                            // 0x406403
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406275;
                        } else {
                            // 0x4061ae
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406220;
                            } else {
                                // 0x4061b3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4061d4;
                                } else {
                                    // 0x4061ba
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406220;
                                    } else {
                                        goto lab_0x4061d4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4060da;
            }
        } else {
            uint32_t v75 = *v33; // 0x405ff0
            v2 = v75;
            int32_t v76 = *v32; // 0x405ff3
            int64_t v77 = v35 + 1; // 0x405ff6
            int32_t v78 = v77; // 0x405ff9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406360
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406007
                    function_4057e0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406015
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406116;
        }
    }
  lab_0x406055:;
    // 0x406055
    int64_t v79; // bp-104, 0x405ee0
    int64_t v80 = &v79; // 0x405eea
    int64_t v81 = v50 + 1; // 0x406055
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40605c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406061
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406065
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406069
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406071
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406076
    int32_t c2 = v84; // 0x406076
    char * found_char_pos = strchr(str2, c2); // 0x406076
    int64_t v87 = *v82; // 0x40607b
    v2 = v87;
    int64_t v88 = *v85; // 0x406085
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406090
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406380
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40634d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4060be
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406076
    char v91 = *(char *)(v90 + 1); // 0x4060ab
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406065
        if (v91 != 58) {
            // 0x4060be
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4062d4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4063d8
                *v8 = 0;
            } else {
                // 0x4063bc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4062fe
            *v83 = 0;
            // 0x4060be
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4062de
        if (v93 != 0) {
            // 0x406370
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4062fe
            *v83 = 0;
            // 0x4060be
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4062f1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4062fe
            *v83 = 0;
            // 0x4060be
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40643a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4063ea
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4063f1
        // 0x4062fe
        *v83 = 0;
        // 0x4060be
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406249
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40624b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406470
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406421
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406428
            // 0x4060be
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406256
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40625a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406275;
  lab_0x406186:
    // 0x406186
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405fc4;
  lab_0x406275:;
    int64_t v99 = function_4058c0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406293
    // 0x4060be
    return v99 & 0xffffffff;
  lab_0x406116:;
    int32_t v100 = v55; // 0x406116
    if (v100 != (int32_t)v59) {
        // 0x40611a
        *(int32_t *)a7 = v100;
    }
    // 0x4060be
    return 0xffffffff;
  lab_0x4060da:
    // 0x4060da
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4060e1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4060be
    return v99 & 0xffffffff;
  lab_0x406220:
    // 0x406220
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406055;
  lab_0x4061d4:
    // 0x4061d4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4058c0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x4061fa
    if ((int32_t)v101 != -1) {
        // 0x4060be
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40620f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406220;
}
// Address range: 0x4064b0 - 0x406506
int64_t function_4064b0(int64_t a1) {
    // 0x4064b0
    *(int32_t *)&g41 = g26;
    *(int32_t *)&g42 = g25;
    int64_t v1; // 0x4064b0
    int64_t result = function_405ee0(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x4064d6
    g26 = *(int32_t *)&g41;
    g46 = g44;
    *(int32_t *)&g24 = g43;
    return result;
}
// Address range: 0x406510 - 0x406528
int64_t function_406510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406510
    return function_4064b0(1);
}
// Address range: 0x406530 - 0x406543
int64_t function_406530(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x406530
    return function_4064b0(0);
}
// Address range: 0x406550 - 0x406565
int64_t function_406550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406550
    return function_405ee0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406570 - 0x406586
int64_t function_406570(void) {
    // 0x406570
    return function_4064b0(0);
}
// Address range: 0x406590 - 0x4065a8
int64_t function_406590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406590
    return function_405ee0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4065b0 - 0x40662a
int64_t function_4065b0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4065bb
    int64_t v2 = (int64_t)&g10; // 0x4065bb
    int32_t * pwc; // 0x4065b0
    int64_t v3; // 0x4065b0
    int64_t n; // 0x4065b0
    if (a2 == 0) {
        goto lab_0x406602;
    } else {
        // 0x4065bd
        if (a3 == 0) {
            // 0x4065e8
            return -2;
        }
        // 0x4065c9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406602;
        } else {
            goto lab_0x4065d4;
        }
    }
  lab_0x406602:
    // 0x406602
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4065b0
    pwc = (int32_t *)&v4;
    goto lab_0x4065d4;
  lab_0x4065d4:;
    char * wstr = (char *)v3; // 0x4065da
    int64_t ps; // 0x4065b0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4065da
    int64_t result = v5; // 0x4065da
    if (v5 < 0xfffffffe) {
        // 0x4065e8
        return result;
    }
    int64_t result2 = result; // 0x406619
    if ((char)function_4067a0(0, v3) == 0) {
        // 0x40661b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4065e8
    return result2;
}
// Address range: 0x406630 - 0x406734
int64_t function_406630(int64_t result, uint64_t a2, int64_t a3) {
    // 0x406630
    if (a3 == 0) {
        // 0x406669
        return 0;
    }
    int64_t v1 = result; // 0x40663c
    int64_t v2 = a3; // 0x40663c
    int64_t result2; // 0x406630
    if (result % 8 != 0) {
        char v3 = a2; // 0x40663e
        int64_t v4 = result; // 0x406641
        if ((char)result == v3) {
            // 0x406669
            return result;
        }
        int64_t v5 = a3; // 0x406641
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x406650
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x406670;
            }
            // 0x406656
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x406669
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x406669
        return result2;
    }
  lab_0x406670:;
    int64_t result3 = v1; // 0x40669d
    int64_t v6 = v2; // 0x40669d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40667f
        int64_t v8 = 0x10000 * v7 | v7; // 0x40668c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x406696
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x4066b6
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x4066e5
            int64_t v12 = v1 + 8; // 0x4066e9
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x4066d3
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x4066fc;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x4066f3
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x406669
                return 0;
            }
        }
    }
  lab_0x4066fc:;
    char v14 = a2; // 0x4066fc
    if (*(char *)result3 == v14) {
        // 0x406669
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x406710
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x406669
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x406669
    return result2;
}
// Address range: 0x406740 - 0x40679d
int64_t function_406740(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406747
    int64_t v2; // 0x406740
    int64_t result = function_4056c0(a1, v2); // 0x406758
    if ((v2 & 32) != 0) {
        // 0x406780
        if ((int32_t)result == 0) {
            // 0x406784
            *__errno_location() = 0;
        }
        // 0x40677a
        return 0xffffffff;
    }
    // 0x406761
    if ((int32_t)result == 0) {
        // 0x40677a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406768
    if (v1 == 0) {
        // 0x40676a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40677a
    return result2;
}
// Address range: 0x4067a0 - 0x4067fe
int64_t function_4067a0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4067a6
    if (locale == NULL) {
        // 0x4067d3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4067a6
    bool v2; // 0x4067a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x4067a0
    int64_t v5 = v1; // 0x4067a0
    int64_t v6 = 2; // 0x4067c5
    unsigned char v7 = *(char *)v5; // 0x4067c5
    char v8 = *(char *)v4; // 0x4067c5
    char v9 = v8; // 0x4067c5
    bool v10 = false; // 0x4067c5
    while (v7 == v8) {
        // 0x4067b8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4067d1
    int64_t v13 = v1; // 0x4067d1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4067d3
        return 0;
    }
    int64_t v14 = 6; // 0x4067d1
    unsigned char v15 = *(char *)v13; // 0x4067ed
    char v16 = *(char *)v12; // 0x4067ed
    char v17 = v16; // 0x4067ed
    bool v18 = false; // 0x4067ed
    while (v15 == v16) {
        // 0x4067e0
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
// Address range: 0x406800 - 0x406d62
int64_t function_406800(void) {
    char * v1 = nl_langinfo(14); // 0x406816
    char * v2 = g45; // 0x40681b
    char * v3; // 0x406800
    int64_t v4; // 0x406800
    int64_t v5; // 0x406800
    int64_t v6; // 0x406800
    int64_t v7; // 0x406800
    int32_t size; // 0x406800
    int32_t size2; // 0x406800
    int32_t len; // 0x4068d2
    int64_t v8; // 0x4068d2
    char * env_val; // 0x4068bd
    if (v2 == NULL) {
        // 0x4068b8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406925;
        } else {
            // 0x4068ca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406925;
            } else {
                // 0x4068cf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4068bd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406d55
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406925;
                    } else {
                        // 0x406cc9
                        size2 = len + 14;
                        goto lab_0x4068eb;
                    }
                } else {
                    goto lab_0x4068eb;
                }
            }
        }
    } else {
        // 0x406800
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40683a;
    }
  lab_0x406b6c:;
    // 0x406b6c
    struct _IO_FILE * stream; // 0x4069ab
    int32_t v10 = __uflow(stream); // 0x406b6f
    int64_t v11; // 0x406800
    int64_t v12 = v11; // 0x406b79
    int64_t v13; // 0x406800
    int64_t v14 = v13; // 0x406b79
    int32_t v15 = v10; // 0x406b79
    int64_t v16; // 0x406800
    int64_t v17 = v16; // 0x406b79
    int64_t v18 = v11; // 0x406b79
    int64_t v19 = v13; // 0x406b79
    int64_t v20 = v16; // 0x406b79
    if (v10 == -1) {
        // break -> 0x406b7f
        goto lab_0x406b7f;
    }
    goto lab_0x4069f9;
  lab_0x4069ee:;
    // 0x4069ee
    int64_t v90; // 0x406800
    int64_t * v32; // 0x4069e0
    *v32 = v90 + 1;
    int64_t v89; // 0x406800
    v12 = v89;
    int64_t v91; // 0x406800
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406800
    v17 = v92;
    goto lab_0x4069f9;
  lab_0x4069f9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406800
    int32_t v25; // bp-120, 0x406800
    int32_t v26; // bp-184, 0x406800
    int64_t v27; // 0x4069ab
    int64_t v28; // 0x4069c8
    int64_t v29; // 0x4069cd
    int64_t * v30; // 0x4069e4
    switch (c) {
        case 32: {
            goto lab_0x4069e0;
        }
        case 10: {
            goto lab_0x4069e0;
        }
        case 9: {
            goto lab_0x4069e0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406bd1
            int32_t v33; // 0x406800
            char v34; // 0x406800
            int32_t v35; // 0x406bde
            if (v31 < *v30) {
                // 0x406bb0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406bdb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406bd1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406bb0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406bdb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406bc0
                v36 = v33;
            }
            // 0x406caf
            if (v36 == -1) {
                // break -> 0x406b7f
                break;
            }
            goto lab_0x4069e0;
        }
        default: {
            // 0x406a0f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406b7f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406a38
            int64_t v39 = v37 + 4; // 0x406a3a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406a46
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406a48
            while (v41 == 0) {
                // 0x406a38
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406a66
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406a72
            int64_t v45 = v43 + 4; // 0x406a74
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406a80
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406a82
            while (v47 == 0) {
                // 0x406a72
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406a6f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406a98
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406aa8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x406aac
            int64_t v52 = v51 + v48; // 0x406ab5
            int64_t * mem; // 0x406800
            int64_t v53; // 0x406800
            int64_t v54; // 0x406800
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406beb
                int64_t v56 = v55 + 3; // 0x406bf7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406ad1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406ae0
            if (mem == NULL) {
                // 0x406d0c
                free((int64_t *)v21);
                function_4056c0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x406984;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406af8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406b02
            uint32_t v62 = (int32_t)v59; // 0x406b05
            int64_t v63; // 0x406800
            if (v62 >= 8) {
                // 0x406c14
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406c2e
                int64_t v66 = v61 - v65; // 0x406c32
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406c3d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406c4e
                    int64_t v70 = v69 & 0xffffffff; // 0x406c4e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406c4b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406cdf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406b17
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406b1b
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
            int64_t v73 = v51 + 1; // 0x406b2b
            int64_t v74 = v60 - 1; // 0x406b2f
            uint32_t v75 = (int32_t)v73; // 0x406b34
            int64_t v76; // 0x406800
            if (v75 >= 8) {
                // 0x406c62
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406c6c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406c7c
                int64_t v80 = v74 - v79; // 0x406c80
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406c8b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406c9b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406c99
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406cf6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406cfe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406b46
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406b4a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406d43
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406b5e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4069ee;
            } else {
                goto lab_0x406b6c;
            }
        }
    }
  lab_0x4069e0:;
    int64_t v93 = v23; // 0x406800
    int64_t v94 = v22; // 0x406800
    int64_t v95 = v21; // 0x406800
    goto lab_0x4069e0_2;
  lab_0x406925:;
    int64_t * mem3 = malloc(size); // 0x406925
    int64_t v97 = (int64_t)&g10; // 0x406930
    int64_t v98; // 0x406800
    int64_t path; // 0x406800
    if (mem3 == NULL) {
        goto lab_0x406902;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406925
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406946;
    }
  lab_0x40683a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40682d
    char v100 = *v3; // 0x40683a
    int64_t v101; // 0x406800
    if (v100 == 0) {
        // 0x406894
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406800
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406800
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406880
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406887;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406850
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40685d
        char v107 = *(char *)v106; // 0x406862
        v102 = v107;
        if (v107 == 0) {
            // 0x406894
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40686b
    v104 = v103 + 1;
  lab_0x406887:
    // 0x406894
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406902:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40683a;
  lab_0x406946:;
    int64_t v109 = v98 + path; // 0x406946
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406972
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x4069a1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406cd2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4069c5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4069e0_2:;
                uint64_t v96 = *v32; // 0x4069e0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406b6c;
                } else {
                    goto lab_0x4069ee;
                }
            }
          lab_0x406b7f:
            // 0x406b7f
            function_4056c0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x406b9e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406984;
  lab_0x4068eb:;
    int64_t * mem4 = malloc(size2); // 0x4068eb
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x406991
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406946;
    } else {
        goto lab_0x406902;
    }
  lab_0x406984:
    // 0x406984
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406902;
}
// Address range: 0x406d70 - 0x406dcd
int64_t function_406d70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406d70
    return function_401440();
}
// Address range: 0x406dd0 - 0x406dd1
int64_t function_406dd0(void) {
    // 0x406dd0
    int64_t result; // 0x406dd0
    return result;
}
// Address range: 0x406de0 - 0x406df8
int64_t function_406de0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406de0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406df8 - 0x406e18
int64_t function_406df8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406e02
    while (*(int64_t *)v1 != -1) {
        // 0x406e03
        v1 -= 8;
    }
    // 0x406e14
    return result;
}
