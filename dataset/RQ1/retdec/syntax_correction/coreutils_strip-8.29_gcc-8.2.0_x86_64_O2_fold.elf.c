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
// Address range: 0x4017e0 - 0x401a02
int64_t function_4017e0(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x4017eb
    function_402330(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x4017e0
    function_4062f0(0x402250, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    g35 = 0;
    g36 = 0;
    g37 = 0;
    int64_t v3 = function_405b50(v1, a2, "bsw:0::1::2::3::4::5::6::7::8::9::", &g2, 0, v2); // 0x401856
    int32_t v4 = v3; // 0x40185b
    int64_t v5 = 80; // 0x40185e
    if (v4 != -1) {
        // 0x401864
        char v6; // bp-42, 0x4017e0
        int64_t v7 = &v6;
        int32_t v8 = v4; // 0x40185b
        int64_t v9 = v3; // 0x401856
        int64_t v10 = 80; // 0x4018a6
        uint32_t v11; // 0x4017e0
        while (true) {
            // 0x401864
            int64_t v12; // 0x4017e0
            int64_t v13 = v12;
            int64_t v14 = v10;
            int32_t v15 = v8; // 0x401867
            int32_t v16 = v8; // 0x401867
            int64_t v17 = v9; // 0x401867
            if (v8 < 58) {
              lab_0x4018b0:
                // 0x4018b0
                v11 = v16;
                if (v11 <= 47) {
                    // break -> 0x4018b5
                    break;
                }
                int64_t v18 = g50; // 0x401920
                if (v18 == 0) {
                    // 0x40194c
                    v6 = v17;
                    g50 = v7;
                } else {
                    // 0x40192c
                    g50 = v18 - 1;
                }
            } else {
                while (true) {
                    int32_t v19 = v15;
                    if (v19 == 115) {
                        // 0x401910
                        g37 = 1;
                    } else {
                        if (v19 == 119) {
                            // break -> 0x401877
                            break;
                        }
                        if (v19 != 98) {
                            // 0x4018f5
                            function_401ed0(1);
                            // UNREACHABLE
                        }
                        // 0x401940
                        g36 = 1;
                    }
                    int64_t v20 = function_405b50(v1, a2, "bsw:0::1::2::3::4::5::6::7::8::9::", &g2, 0, v13); // 0x401856
                    int32_t v21 = v20; // 0x40185b
                    v5 = v14;
                    if (v21 == -1) {
                        goto lab_0x401966_2;
                    }
                    // 0x401864
                    v15 = v21;
                    v16 = v21;
                    v17 = v20;
                    if (v21 < 58) {
                        goto lab_0x4018b0;
                    }
                }
            }
            char * v22 = dcgettext(NULL, "invalid number of columns", 5); // 0x401883
            v10 = function_404870(g50, 1, -10, (int64_t *)&g9, (int64_t)v22, 0);
            v9 = function_405b50(v1, a2, "bsw:0::1::2::3::4::5::6::7::8::9::", &g2, 0, 0);
            v8 = v9;
            v12 = 0;
            v5 = v10;
            if (v8 == -1) {
                goto lab_0x401966_2;
            }
        }
        if (v11 == -131) {
            // 0x4018bc
            function_4043d0((int64_t)g27, "fold", "GNU coreutils", (int64_t)g16, "David MacKenzie", 0);
            exit(0);
            // UNREACHABLE
        }
        if (v11 != -130) {
            // 0x4018f5
            function_401ed0(1);
            // UNREACHABLE
        }
        // 0x401907
        function_401ed0(0);
        // UNREACHABLE
    }
  lab_0x401966_2:;
    uint32_t v23 = *(int32_t *)0x60a25c; // 0x401966
    int64_t v24; // 0x4017e0
    int64_t v25; // 0x4017e0
    if (v23 == (int32_t)a1) {
        goto lab_0x4019ea;
    } else {
        uint64_t v26 = (int64_t)v23; // 0x401966
        v24 = 1;
        v25 = a2;
        if (v1 > v26) {
            int64_t v27 = 1; // 0x40198e
            int64_t v28 = 0x100000000 * v26 / 0x20000000 + a2;
            int64_t v29 = v28 + 8; // 0x401997
            v27 &= function_401b40(*(int64_t *)v28, v5);
            v24 = v27;
            v25 = v5;
            while (v29 != a2 + 8 + 8 * (((v26 ^ 0xffffffff) + a1 & 0xffffffff) + (int64_t)v23)) {
                // 0x401990
                v28 = v29;
                v29 = v28 + 8;
                v27 &= function_401b40(*(int64_t *)v28, v5);
                v24 = v27;
                v25 = v5;
            }
        }
        goto lab_0x4019a7;
    }
  lab_0x4019ea:
    // 0x4019ea
    v24 = function_401b40((int64_t)"-", v5) & 0xffffffff;
    v25 = v5;
    goto lab_0x4019a7;
  lab_0x4019a7:;
    uint64_t v30 = v24;
    if (g35 == 0 || (int32_t)function_404ce0((int64_t)g28, v25) != -1) {
        // 0x4019b0
        return v30 % 256 ^ 1;
    }
    // 0x4019d2
    error(1, *__errno_location(), "-");
    goto lab_0x4019ea;
}
// Address range: 0x401a10 - 0x401a3b
// Address range: 0x401a3b - 0x401a5a
int64_t function_401a3b(void) {
    // 0x401a3b
    return &g26;
}
// Address range: 0x401a5a - 0x401a91
int64_t function_401a5a(void) {
    // 0x401a5a
    return 0;
}
// Address range: 0x401a91 - 0x401ae8
int64_t function_401a91(void) {
    // 0x401a91
    if (g31 != 0) {
        // 0x401ae7
        int64_t result; // 0x401a91
        return result;
    }
    int64_t v1 = g32; // 0x401ac4
    int64_t result2; // 0x401ad6
    if (g32 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401ad6
        result2 = function_401a3b();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401ac6
        v1++;
    }
    // 0x401aba
    g32 = v1;
    // 0x401ad6
    result2 = function_401a3b();
    g31 = 1;
    return result2;
}
// Address range: 0x401ae8 - 0x401aed
int64_t function_401ae8(void) {
    // 0x401ae8
    return function_401a5a();
}
// Address range: 0x401af0 - 0x401b39
int64_t function_401af0(int64_t a1, int64_t a2) {
    // 0x401af0
    if (g36 == 0) {
        // 0x401af9
        switch ((char)a2) {
            case 8: {
                // 0x401b18
                return a1 == 0 ? 0 : a1 - 1;
            }
            case 13: {
                // 0x401b11
                return 0;
            }
            case 9: {
                // 0x401b30
                return a1 + 8 & -8;
            }
        }
    }
    // 0x401b11
    return a1 + 1;
}
// Address range: 0x401b40 - 0x401ece
int64_t function_401b40(int64_t file_path, uint64_t a2) {
    // 0x401b40
    bool v1; // 0x401b40
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)"-"; // 0x401b40
    int64_t v4 = file_path; // 0x401b40
    int64_t v5 = 2; // 0x401b65
    unsigned char v6 = *(char *)v4; // 0x401b65
    char v7 = *(char *)v3; // 0x401b65
    char v8 = v7; // 0x401b65
    bool v9 = false; // 0x401b65
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
    struct _IO_FILE * file; // 0x401b40
    if ((v6 >= v10 && !v9) != v6 < v10) {
        // 0x401ea0
        file = fopen((char *)file_path, "r");
    } else {
        // 0x401b74
        g35 = 1;
        file = g28;
    }
    int32_t * err_num = __errno_location(); // 0x401b82
    int64_t v11; // 0x401b40
    int64_t v12; // 0x401b40
    int64_t v13; // 0x401b40
    int64_t v14; // 0x401b40
    int64_t v15; // 0x401b40
    int64_t v16; // 0x401b40
    int64_t n; // 0x401b40
    int64_t v17; // 0x401b40
    int64_t v18; // 0x401b40
    int64_t * v19; // 0x401ba8
    if (file == NULL) {
        goto lab_0x401e58;
    } else {
        // 0x401b95
        v18 = (int64_t)file;
        int64_t v20; // 0x401b40
        function_402300(v18, 2, v20);
        v19 = (int64_t *)(v18 + 8);
        v11 = 0;
        v14 = 0;
        while (true) {
          lab_0x401ba8_2:;
            uint64_t v21 = *v19; // 0x401ba8
            v17 = v21;
            v12 = v11;
            v15 = v14;
            v13 = v11;
            v16 = v14;
            if (v21 >= *(int64_t *)(v18 + 16)) {
                goto lab_0x401c22;
            } else {
                goto lab_0x401bb2;
            }
        }
      lab_0x401c31:
        // 0x401c31
        if (n != 0) {
            // 0x401dc0
            fwrite_unlocked((int64_t *)g33, 1, (int32_t)n, g27);
            if ((*(char *)file & 32) == 0) {
                goto lab_0x401c4b;
            } else {
                goto lab_0x401de5;
            }
        } else {
            // 0x401c41
            if ((*(char *)file & 32) != 0) {
                goto lab_0x401de5;
            } else {
                goto lab_0x401c4b;
            }
        }
    }
  lab_0x401c22:
    // 0x401c22
    n = v16;
    uint32_t v22 = __uflow(file); // 0x401c25
    int64_t v23 = v22; // 0x401c2f
    int64_t v24 = v13; // 0x401c2f
    int64_t v25 = n; // 0x401c2f
    if (v22 == -1) {
        // break -> 0x401c31
        goto lab_0x401c31;
    }
    goto lab_0x401bbd;
  lab_0x401bb2:
    // 0x401bb2
    *v19 = v17 + 1;
    v23 = (int64_t)*(char *)v17;
    v24 = v12;
    v25 = v15;
    goto lab_0x401bbd;
  lab_0x401bbd:;
    int64_t v26 = v25;
    int64_t v27 = v24;
    int64_t v28 = v23;
    int64_t n2 = v26 + 1;
    int64_t v29 = g33; // 0x401bcf
    if (n2 >= g34) {
        int64_t v30 = function_404670(g33, &g34); // 0x401ce8
        g33 = v30;
        v29 = v30;
    }
    int64_t data = v29;
    int64_t v31; // 0x401b40
    int64_t v32; // 0x401b40
    int64_t v33; // 0x401be9
    if (v28 == 10) {
        // 0x401cb0
        *(char *)(data + v26) = 10;
        fwrite_unlocked((int64_t *)data, 1, (int32_t)n2, g27);
        v31 = 0;
        v32 = 0;
        goto lab_0x401ba8;
    } else {
        // 0x401bde
        v33 = function_401af0(v27, 0x100000000000000 * v28 >> 56 & 0xffffffff);
        if (v33 > a2) {
            int64_t v34; // 0x401b40
            int64_t data2; // 0x401b40
            while (true) {
                // 0x401bfc
                int64_t v35; // 0x401b40
                data2 = v35;
                int64_t v36; // 0x401b40
                int64_t v37 = v36;
                int64_t v38; // 0x401b40
                v34 = v38;
                char v39 = g37; // 0x401bfc
                int64_t v40; // 0x401b40
                int64_t v41; // 0x401b40
                int64_t v42; // 0x401b40
                if (v39 != 0) {
                    if (v37 == 0) {
                        // break -> 0x401c0e
                        break;
                    }
                    int16_t ** v43 = __ctype_b_loc(); // 0x401d09
                    int16_t * v44 = *v43; // 0x401d11
                    int64_t v45 = (int64_t)v44; // 0x401d11
                    int64_t v46 = v37; // 0x401d14
                    int64_t n3 = v46;
                    int64_t v47 = n3 - 1;
                    unsigned char v48 = *(char *)(v47 + data2); // 0x401d2c
                    unsigned char v49 = *(char *)(2 * (int64_t)v48 + v45); // 0x401d36
                    while (v49 % 2 == 0) {
                        // 0x401d20
                        v46 = v47;
                        if (v47 == 0) {
                            goto lab_0x401c80;
                        }
                        n3 = v46;
                        v47 = n3 - 1;
                        v48 = *(char *)(v47 + data2);
                        v49 = *(char *)(2 * (int64_t)v48 + v45);
                    }
                    struct _IO_FILE * stream = g27; // 0x401d3c
                    fwrite_unlocked((int64_t *)data2, 1, (int32_t)n3, stream);
                    struct _IO_FILE * v50 = g27; // 0x401d53
                    int64_t v51 = (int64_t)v50; // 0x401d53
                    int64_t * v52 = (int64_t *)(v51 + 40); // 0x401d5a
                    uint64_t v53 = *v52; // 0x401d5a
                    uint64_t v54 = *(int64_t *)(v51 + 48); // 0x401d5e
                    if (v53 >= v54) {
                        // 0x401ebf
                        __overflow(v50, 10);
                    } else {
                        // 0x401d68
                        *v52 = v53 + 1;
                        *(char *)v53 = 10;
                    }
                    int64_t v55 = g33; // 0x401d73
                    int64_t v56 = v37 - n3; // 0x401d7a
                    memmove((int64_t *)v55, (int64_t *)(v55 + n3), (int32_t)v56);
                    v40 = v55;
                    v41 = 0;
                    v42 = 0;
                    if (v56 != 0) {
                        int64_t v57 = v55 + v56; // 0x401d98
                        int64_t v58 = v55; // 0x401d9f
                        int64_t v59 = 0; // 0x401d9f
                        int64_t v60 = v59;
                        int64_t v61 = v58;
                        char v62 = *(char *)v61; // 0x401da0
                        int64_t v63 = function_401af0(v60, (int64_t)v62); // 0x401da6
                        int64_t v64 = v61 + 1; // 0x401dab
                        v40 = v55;
                        v41 = v63;
                        v42 = v56;
                        v58 = v64;
                        v59 = v63;
                        while (v57 != v64) {
                            // 0x401da0
                            v60 = v59;
                            v61 = v58;
                            v62 = *(char *)v61;
                            v63 = function_401af0(v60, (int64_t)v62);
                            v64 = v61 + 1;
                            v40 = v55;
                            v41 = v63;
                            v42 = v56;
                            v58 = v64;
                            v59 = v63;
                        }
                    }
                } else {
                    if (v37 == 0) {
                        // break -> 0x401c0e
                        break;
                    }
                  lab_0x401c80:
                    // 0x401c80
                    *(char *)(data2 + v37) = 10;
                    struct _IO_FILE * stream2 = g27; // 0x401c8f
                    fwrite_unlocked((int64_t *)data2, 1, (int32_t)v37 + 1, stream2);
                    int64_t v65 = g33; // 0x401ca3
                    v40 = v65;
                    v41 = 0;
                    v42 = 0;
                }
                int64_t v66 = v42;
                int64_t v67 = v41;
                int64_t v68 = v40;
                int64_t v69; // 0x401be7
                int64_t v70 = function_401af0(v67, v69); // 0x401be9
                v38 = v70;
                v36 = v66;
                v35 = v68;
                if (v70 <= a2) {
                    // 0x401be4
                    goto lab_0x401e90;
                }
            }
            // 0x401c0e
            *(char *)data2 = (char)v28;
            uint64_t v71 = *v19; // 0x401c18
            int64_t * v72; // 0x401bac
            uint64_t v73 = *v72; // 0x401c1c
            v17 = v71;
            v12 = v34;
            v15 = 1;
            v13 = v34;
            v16 = 1;
            if (v71 < v73) {
                goto lab_0x401bb2;
            } else {
                goto lab_0x401c22;
            }
        } else {
            goto lab_0x401e90;
        }
    }
  lab_0x401ba8:
    // 0x401ba8
    v11 = v31;
    v14 = v32;
    goto lab_0x401ba8_2;
  lab_0x401e90:
    // 0x401e90
    *(char *)(v26 + data) = (char)v28;
    v31 = v33;
    v32 = n2;
    goto lab_0x401ba8;
  lab_0x401e58:
    // 0x401e58
    error(0, *err_num, "%s", (char *)function_403dd0(0, 3, file_path));
    // 0x401c6e
    return 0;
  lab_0x401c4b:;
    int64_t v74 = (int64_t)"-"; // 0x401b40
    int64_t v75 = 2; // 0x401b40
    unsigned char v76 = *(char *)file_path; // 0x401c5a
    char v77 = *(char *)v74; // 0x401c5a
    int64_t v78 = file_path + v2; // 0x401c5a
    char v79 = v77; // 0x401c5a
    bool v80 = false; // 0x401c5a
    while (v76 == v77) {
        int64_t v81 = v75 - 1; // 0x401c5a
        v74 += v2;
        v75 = v81;
        v79 = v76;
        v80 = true;
        if (v81 == 0) {
            // break -> 
            break;
        }
        v76 = *(char *)v78;
        v77 = *(char *)v74;
        v78 += v2;
        v79 = v77;
        v80 = false;
    }
    unsigned char v82 = v79;
    if ((v76 >= v82 && !v80) == v76 < v82 || (int32_t)function_404ce0(v18, v78) != -1) {
        // 0x401c6e
        return 1;
    }
    goto lab_0x401e58;
  lab_0x401de5:
    // 0x401de5
    error(0, *err_num, "%s", (char *)function_403dd0(0, 3, file_path));
    int64_t v83; // 0x401b40
    unsigned char v84 = *(char *)v83; // 0x401e19
    int64_t v85; // 0x401b40
    char v86 = *(char *)v85; // 0x401e19
    while (v84 == v86) {
        int64_t v87; // 0x401b40
        int64_t v88 = v87;
        int64_t v89 = v88 - 1; // 0x401e19
        int64_t v90; // 0x401b40
        v85 = v90 + v2;
        int64_t v91; // 0x401e19
        v83 = v91;
        v87 = v89;
        char v92 = v84; // 0x401e19
        bool v93 = true; // 0x401e19
        if (v89 == 0) {
            // break -> 
            break;
        }
        int64_t v94 = v83;
        v90 = v85;
        v84 = *(char *)v94;
        v86 = *(char *)v90;
        v91 = v94 + v2;
        v92 = v86;
        v93 = false;
    }
    unsigned char v95 = v86;
    if ((v84 >= v95 && true) != v84 < v95) {
        // 0x401e2a
        function_404ce0(v18, v83 + v2);
    }
    // 0x401c6e
    return 0;
}
// Address range: 0x401ed0 - 0x40222d
int64_t function_401ed0(int64_t a1) {
    int32_t status = a1; // 0x401ee6
    if (status != 0) {
        // 0x401eea
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401f0f
        exit(status);
        // UNREACHABLE
    }
    // 0x401f16
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Wrap input lines in each FILE, writing to standard output.\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "  -b, --bytes         count bytes rather than columns\n  -s, --spaces        break at spaces\n  -w, --width=WIDTH   use WIDTH columns instead of 80\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g27);
    int64_t v1 = &g1; // bp-136, 0x402006
    bool v2; // 0x401ed0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402090
    int64_t v6 = *(int64_t *)v5; // 0x402094
    int64_t v7 = 5; // 0x40209a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"fold";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4020a6
        char v11 = *(char *)v9; // 0x4020a6
        char v12 = v11; // 0x4020a6
        bool v13 = false; // 0x4020a6
        while (v10 == v11) {
            // 0x40209c
            v7--;
            int64_t v14 = v9 + v3; // 0x4020a6
            int64_t v15 = v8 + v3; // 0x4020a6
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
            // break -> 0x4020b2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x4020b2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4021c4;
        } else {
            // 0x4021ae
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402203
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402114;
            } else {
                goto lab_0x4021c4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402114;
        } else {
            // 0x4020fa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402203
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402114;
            } else {
                goto lab_0x402114;
            }
        }
    }
  lab_0x4021c4:
    // 0x4021c4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402154
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401f0f
    exit(status);
    // UNREACHABLE
  lab_0x402114:
    // 0x402114
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402154
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401f0f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402230 - 0x402238
int64_t function_402230(int64_t a1) {
    // 0x402230
    g39 = a1;
    int64_t result; // 0x402230
    return result;
}
// Address range: 0x402240 - 0x402248
int64_t function_402240(int64_t a1) {
    // 0x402240
    g38 = a1;
    int64_t result; // 0x402240
    return result;
}
// Address range: 0x402250 - 0x4022ee
int64_t function_402250(void) {
    // 0x402250
    int32_t * err_num; // 0x402266
    if ((int32_t)function_405c50((int64_t)g27) == 0) {
        goto lab_0x40227c;
    } else {
        // 0x402266
        err_num = __errno_location();
        if (g38 == 0) {
            goto lab_0x402293;
        } else {
            // 0x402277
            if (*err_num != 32) {
                goto lab_0x402293;
            } else {
                goto lab_0x40227c;
            }
        }
    }
  lab_0x40227c:;
    int64_t result = function_405c50((int64_t)g30); // 0x402283
    if ((int32_t)result == 0) {
        // 0x40228c
        return result;
    }
    // 0x4022ce
    _exit(g17);
    // UNREACHABLE
  lab_0x402293:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40229f
    if (g39 == 0) {
        // 0x4022d9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4022b3
        error(0, *err_num, "%s: %s", (char *)function_403da0((int64_t)g39), v1);
    }
    // 0x4022ce
    _exit(g17);
    // UNREACHABLE
}
// Address range: 0x4022f0 - 0x4022f5
int64_t function_4022f0(void) {
    // 0x4022f0
    int64_t fd; // 0x4022f0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402300 - 0x402321
int64_t function_402300(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402300
    if (stream == 0) {
        // 0x402320
        int64_t result; // 0x402300
        return result;
    }
    // 0x402305
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402330 - 0x4023c9
int64_t function_402330(int64_t str) {
    // 0x402330
    if (str == 0) {
        // 0x4023a9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40233e
    int64_t result = (int64_t)found_char_pos; // 0x40233e
    if (found_char_pos == NULL) {
        // 0x402399
        g40 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402348
    if (v1 - str < 7) {
        // 0x402399
        g40 = str;
        g29 = str;
        return result;
    }
    // 0x402358
    bool v2; // 0x402330
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402330
    int64_t v5 = result - 6; // 0x402330
    int64_t v6 = 7; // 0x402366
    unsigned char v7 = *(char *)v5; // 0x402366
    char v8 = *(char *)v4; // 0x402366
    char v9 = v8; // 0x402366
    bool v10 = false; // 0x402366
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
    int64_t v12 = (int64_t)"lt-"; // 0x402370
    int64_t v13 = v1; // 0x402370
    int64_t v14 = 3; // 0x402370
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402399
        g40 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402382
    char v16 = *(char *)v12; // 0x402382
    char v17 = v16; // 0x402382
    bool v18 = false; // 0x402382
    while (v15 == v16) {
        // 0x402372
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
    int64_t v20 = v1; // 0x40238c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40238e
        v20 = result + 4;
        g26 = v20;
    }
    // 0x402399
    g40 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x4023d0 - 0x4024c2
int64_t function_4023d0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4023e4
    int64_t result = (int64_t)v1; // 0x4023e4
    if (result != a1) {
        // 0x4023f1
        return result;
    }
    int64_t v2 = function_405d10(); // 0x402400
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4024b6
    if (v3 == 85) {
        // 0x402410
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4024a8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40243e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40244b
        // 0x4023f1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4024a8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40248d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40249a
    // 0x4023f1
    return result4;
}
// Address range: 0x4024d0 - 0x402527
int64_t function_4024d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4024d0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402518
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402527 - 0x4036f1
int64_t function_402527(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402571
    int64_t v3 = 0; // 0x402571
    int64_t v4; // 0x402527
    int64_t v5; // 0x402527
    int64_t v6; // 0x402527
    int64_t v7; // 0x402527
    int64_t v8; // 0x402527
    int64_t v9; // 0x402527
    int64_t v10; // 0x402527
    int64_t v11; // 0x402527
    int64_t v12; // 0x402527
    int64_t v13; // 0x402527
    int64_t v14; // 0x402527
    int64_t v15; // 0x402527
    int64_t v16; // 0x402527
    int64_t v17; // 0x402527
    int64_t v18; // 0x402527
    int64_t result; // 0x402527
    int64_t v19; // 0x402527
    int32_t wc; // bp+132, 0x402527
    int64_t ps; // bp+136, 0x402527
    char v20; // 0x402ae0
    int64_t v21; // 0x402ae0
    int64_t v22; // 0x402e88
    int64_t v23; // 0x402527
    int64_t v24; // 0x402ea7
    int32_t v25; // 0x402527
    while (true) {
      lab_0x402578_2:
        // 0x402578
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402527
        int64_t v27; // 0x4025ac
        while (true) {
          lab_0x402578:
            // 0x402578
            v5 = v26;
            bool v28 = v15 == v5; // 0x402583
            if (v15 == -1) {
                // 0x402585
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402593
            if (v28) {
                // break (via goto) -> 0x402cf8
                goto lab_0x402cf8;
            }
            // 0x40259c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g53 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x402b8b
                    if (v25 % 2 == 0) {
                        goto lab_0x4026d1;
                    }
                    // 0x402fad
                    v26 = v5 + 1;
                    goto lab_0x402578;
                }
                case 7: {
                    goto lab_0x4026d1;
                }
                case 8: {
                    goto lab_0x4026d1;
                }
                case 9: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4026d1;
                }
                case 12: {
                    goto lab_0x4026d1;
                }
                case 13: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40269d;
                }
                case 36: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4026d1;
                }
                case 38: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4026d1;
                }
                case 44: {
                    goto lab_0x4026d1;
                }
                case 45: {
                    goto lab_0x4026d1;
                }
                case 46: {
                    goto lab_0x4026d1;
                }
                case 47: {
                    goto lab_0x4026d1;
                }
                case 48: {
                    goto lab_0x4026d1;
                }
                case 49: {
                    goto lab_0x4026d1;
                }
                case 50: {
                    goto lab_0x4026d1;
                }
                case 51: {
                    goto lab_0x4026d1;
                }
                case 52: {
                    goto lab_0x4026d1;
                }
                case 53: {
                    goto lab_0x4026d1;
                }
                case 54: {
                    goto lab_0x4026d1;
                }
                case 55: {
                    goto lab_0x4026d1;
                }
                case 56: {
                    goto lab_0x4026d1;
                }
                case 57: {
                    goto lab_0x4026d1;
                }
                case 58: {
                    goto lab_0x4026d1;
                }
                case 59: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4026d1;
                }
                case 66: {
                    goto lab_0x4026d1;
                }
                case 67: {
                    goto lab_0x4026d1;
                }
                case 68: {
                    goto lab_0x4026d1;
                }
                case 69: {
                    goto lab_0x4026d1;
                }
                case 70: {
                    goto lab_0x4026d1;
                }
                case 71: {
                    goto lab_0x4026d1;
                }
                case 72: {
                    goto lab_0x4026d1;
                }
                case 73: {
                    goto lab_0x4026d1;
                }
                case 74: {
                    goto lab_0x4026d1;
                }
                case 75: {
                    goto lab_0x4026d1;
                }
                case 76: {
                    goto lab_0x4026d1;
                }
                case 77: {
                    goto lab_0x4026d1;
                }
                case 78: {
                    goto lab_0x4026d1;
                }
                case 79: {
                    goto lab_0x4026d1;
                }
                case 80: {
                    goto lab_0x4026d1;
                }
                case 81: {
                    goto lab_0x4026d1;
                }
                case 82: {
                    goto lab_0x4026d1;
                }
                case 83: {
                    goto lab_0x4026d1;
                }
                case 84: {
                    goto lab_0x4026d1;
                }
                case 85: {
                    goto lab_0x4026d1;
                }
                case 86: {
                    goto lab_0x4026d1;
                }
                case 87: {
                    goto lab_0x4026d1;
                }
                case 88: {
                    goto lab_0x4026d1;
                }
                case 89: {
                    goto lab_0x4026d1;
                }
                case 90: {
                    goto lab_0x4026d1;
                }
                case 91: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4026d1;
                }
                case 94: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4026d1;
                }
                case 96: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4026d1;
                }
                case 98: {
                    goto lab_0x4026d1;
                }
                case 99: {
                    goto lab_0x4026d1;
                }
                case 100: {
                    goto lab_0x4026d1;
                }
                case 101: {
                    goto lab_0x4026d1;
                }
                case 102: {
                    goto lab_0x4026d1;
                }
                case 103: {
                    goto lab_0x4026d1;
                }
                case 104: {
                    goto lab_0x4026d1;
                }
                case 105: {
                    goto lab_0x4026d1;
                }
                case 106: {
                    goto lab_0x4026d1;
                }
                case 107: {
                    goto lab_0x4026d1;
                }
                case 108: {
                    goto lab_0x4026d1;
                }
                case 109: {
                    goto lab_0x4026d1;
                }
                case 110: {
                    goto lab_0x4026d1;
                }
                case 111: {
                    goto lab_0x4026d1;
                }
                case 112: {
                    goto lab_0x4026d1;
                }
                case 113: {
                    goto lab_0x4026d1;
                }
                case 114: {
                    goto lab_0x4026d1;
                }
                case 115: {
                    goto lab_0x4026d1;
                }
                case 116: {
                    goto lab_0x4026d1;
                }
                case 117: {
                    goto lab_0x4026d1;
                }
                case 118: {
                    goto lab_0x4026d1;
                }
                case 119: {
                    goto lab_0x4026d1;
                }
                case 120: {
                    goto lab_0x4026d1;
                }
                case 121: {
                    goto lab_0x4026d1;
                }
                case 122: {
                    goto lab_0x4026d1;
                }
                case 123: {
                    goto lab_0x402675;
                }
                case 124: {
                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402675;
                }
                case 126: {
                    goto lab_0x40269d;
                }
                default: {
                    goto lab_0x402a75;
                }
            }
        }
      lab_0x402a75:
        if (v23 != 1) {
            // 0x402de0
            ps = 0;
            int64_t len = v15; // 0x402df0
            if (v15 == -1) {
                // 0x402df2
                len = strlen((char *)str);
            }
            // 0x402e1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402e7f:
                // 0x402e7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402e84
                int64_t v30 = v29 + str;
                v24 = function_405bd0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4033fa_2;
                    }
                    case -1: {
                        goto lab_0x4033fa_2;
                    }
                    case -2: {
                        // 0x4034dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403517
                            v19 = v18;
                            int64_t v31 = v18; // 0x40351a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403527
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403520
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4033fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4033fa_2;
                    }
                    case 1: {
                        goto lab_0x402e50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402efc
                        char v34 = *(char *)v33; // 0x402f0d
                        unsigned char v35; // 0x402527
                        if (v34 < 125) {
                            // 0x402f18
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402f2f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402f00
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402f0d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402f18
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402f2f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402f00
                            v33++;
                        }
                        goto lab_0x402e50;
                    }
                }
            }
            goto lab_0x4033fa_2;
        } else {
            // 0x402ac4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4026d1;
        }
    }
  lab_0x402cf8:
    // 0x402cf8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4035fa
        if (v8 > result) {
            // 0x403603
            *(char *)(v12 + result) = 0;
        }
        // 0x402927
        return result;
    }
    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4026d1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4026e0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4028ea_2;
        }
    }
    int64_t v39 = result; // 0x4027e1
    char v40 = v20; // 0x4027e1
    int64_t v41 = v38; // 0x4027e1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4027e1
    int64_t v43 = v36; // 0x4027e1
    goto lab_0x40275d;
  lab_0x4028ea_2:
    // 0x402927
    return function_4024d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4033fa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4026d1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402fce
        int64_t v50 = v5 + 1; // 0x4030b1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4030b8
        char v52 = v20; // 0x4030b8
        int64_t v53 = result; // 0x4030b8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403081
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403085
            int64_t v56 = v54 + 1; // 0x40308a
            int64_t v57 = v51 + 1; // 0x4030b1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40307c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403081
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403085
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
        goto lab_0x40275d;
    }
  lab_0x402e50:
    // 0x402e50
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402e6f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402e72
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4033fa
        goto lab_0x4033fa_2;
    }
    goto lab_0x402e7f;
  lab_0x40269d:
    // 0x40269d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4028ea_2;
    }
    goto lab_0x4026d1;
  lab_0x402675:;
    bool v60 = v15 == 1; // 0x402680
    if (v15 == -1) {
        // 0x402682
        v60 = *(char *)v1 == 0;
    }
    // 0x40268e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4026d1;
    } else {
        goto lab_0x40269d;
    }
  lab_0x40275d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402762
        *(char *)(v44 + v45) = v40;
    }
    // 0x402766
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402578_2;
}
// Address range: 0x403700 - 0x40389e
int64_t function_403700(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403702
    int32_t * v3 = __errno_location(); // 0x40371c
    int64_t v4 = (int64_t)g19; // 0x403721
    int32_t v5 = *v3; // 0x40372b
    int64_t v6 = v4; // 0x403741
    if (v2 >= (int64_t)*(int32_t *)&g22) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403899
            function_404760(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403750
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403757
        int64_t v9; // 0x403700
        if (g19 == &g20) {
            int64_t v10 = function_404570(0, v8); // 0x40387a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g20); // 0x40387f
            *(int64_t *)&g19 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404570(v4, v8); // 0x40376b
            *(int64_t *)&g19 = v12;
            v9 = v12;
        }
        // 0x40377a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g22; // 0x40377a
        int32_t v14 = v7; // 0x403781
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g22 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4037b1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4037bb
    int64_t * v17 = (int64_t *)v15; // 0x4037be
    uint64_t v18 = *v17; // 0x4037be
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4037c1
    int64_t result = *v19; // 0x4037c1
    int64_t v20; // 0x403700
    uint64_t v21 = function_4024d0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4037e4
    if (v18 > v21) {
        // 0x40385b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4037f7
    *v17 = v22;
    if (result != (int64_t)&g41) {
        // 0x403807
        free((int64_t *)result);
    }
    int64_t result2 = function_404510(v22); // 0x403821
    *v19 = result2;
    int64_t v23; // 0x403700
    function_4024d0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40385b
    *v3 = v5;
    return result2;
}
// Address range: 0x4038a0 - 0x4038d4
int64_t function_4038a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4038a7
    int64_t result = function_404710(a1 == 0 ? (int64_t)&g42 : a1, 56); // 0x4038c6
    return result;
}
// Address range: 0x4038e0 - 0x4038ef
int64_t function_4038e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g42 : a1); // 0x4038ec
    return result;
}
// Address range: 0x4038f0 - 0x4038ff
int64_t function_4038f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 : a1; // 0x4038f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g42;
}
// Address range: 0x403900 - 0x403933
int64_t function_403900(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 + 8 : a1 + 8; // 0x403919
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40391e
    uint32_t v3 = *v2; // 0x40391e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403922
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403940 - 0x403953
int64_t function_403940(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g42 + 4 : a1 + 4); // 0x40394c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403960 - 0x40398b
int64_t function_403960(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 : a1; // 0x403968
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403985
        abort();
        // UNREACHABLE
    }
    // 0x40397c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g42;
}
// Address range: 0x403990 - 0x403a02
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g42 : a5; // 0x4039b2
    int32_t * v2 = __errno_location(); // 0x4039bb
    uint32_t v3 = *(int32_t *)v1; // 0x4039db
    int64_t result = function_4024d0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4039ea
    return result;
}
// Address range: 0x403a10 - 0x403af1
int64_t function_403a10(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g42 : a4; // 0x403a32
    int32_t * v2 = __errno_location(); // 0x403a38
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403a57
    int32_t * v4 = (int32_t *)v1; // 0x403a5a
    int64_t v5 = function_4024d0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403a75
    int64_t v6 = v5 + 1; // 0x403a7a
    int64_t result = function_404510(v6); // 0x403a8f
    function_4024d0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403ad4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403add
    return result;
}
// Address range: 0x403b00 - 0x403b0a
int64_t function_403b00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403b00
    return function_403a10(a1, a2, 0, a3);
}
// Address range: 0x403b10 - 0x403ba5
int64_t function_403b10(void) {
    uint32_t v1 = *(int32_t *)&g22; // 0x403b10
    int64_t v2 = v1; // 0x403b10
    int64_t v3 = v2; // 0x403b24
    if (v1 >= 2) {
        int64_t v4 = &g22;
        int64_t v5 = v4 + 16; // 0x403b43
        free((int64_t *)*(int64_t *)v4);
        v3 = &g54;
        while (v5 != (int64_t)g19 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403b40
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g54;
        }
    }
    int64_t v6 = v3; // 0x403b5d
    if (g20 != 0x60a2e0) {
        // 0x403b5f
        free((int64_t *)g20);
        g20 = 256;
        *(int64_t *)&g21 = (int64_t)&g41;
        v6 = &g54;
    }
    int64_t result = v6; // 0x403b81
    if (g19 != &g20) {
        // 0x403b83
        free(g19);
        *(int64_t *)&g19 = (int64_t)&g20;
        result = &g54;
    }
    // 0x403b96
    *(int32_t *)&g22 = 1;
    return result;
}
// Address range: 0x403bb0 - 0x403bc1
int64_t function_403bb0(void) {
    // 0x403bb0
    int64_t v1; // 0x403bb0
    return function_403700(v1, v1, -1, (int64_t *)&g42);
}
// Address range: 0x403bd0 - 0x403bda
int64_t function_403bd0(void) {
    // 0x403bd0
    int64_t v1; // 0x403bd0
    return function_403700(v1, v1, v1, (int64_t *)&g42);
}
// Address range: 0x403be0 - 0x403bf6
int64_t function_403be0(int64_t a1) {
    // 0x403be0
    return function_403700(0, a1, -1, (int64_t *)&g42);
}
// Address range: 0x403c00 - 0x403c12
int64_t function_403c00(int64_t a1, int64_t a2) {
    // 0x403c00
    return function_403700(0, a1, a2, (int64_t *)&g42);
}
// Address range: 0x403c20 - 0x403c88
int64_t function_403c20(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403c30
    return function_403700((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403c90 - 0x403cf4
int64_t function_403c90(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403ca0
    return function_403700((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403d00 - 0x403d0c
int64_t function_403d00(int64_t a1, int64_t a2) {
    // 0x403d00
    return function_403c20(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403d10 - 0x403d1f
int64_t function_403d10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403d10
    return function_403c90(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403d20 - 0x403d90
int64_t function_403d20(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g42); // 0x403d2d
    int128_t v2 = __asm_movdqa(g43); // 0x403d35
    int128_t v3 = __asm_movdqa(g44); // 0x403d3d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403d52
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403d68
    uint32_t v6 = *v5; // 0x403d68
    uint32_t v7 = (int32_t)a3 % 32; // 0x403d6d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403700(0, a1, a2, &v4);
}
// Address range: 0x403d90 - 0x403d9d
int64_t function_403d90(int64_t a1, int64_t a2) {
    // 0x403d90
    return function_403d20(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403da0 - 0x403db1
int64_t function_403da0(int64_t a1) {
    // 0x403da0
    return function_403d20(a1, -1, 58);
}
// Address range: 0x403dc0 - 0x403dca
int64_t function_403dc0(void) {
    // 0x403dc0
    int64_t v1; // 0x403dc0
    return function_403d20(v1, v1, 58);
}
// Address range: 0x403dd0 - 0x403e3e
int64_t function_403dd0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403dea
    return function_403700((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403e40 - 0x403eac
int64_t function_403e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g42); // 0x403e47
    int128_t v2 = __asm_movdqa(g43); // 0x403e4f
    int128_t v3 = __asm_movdqa(g44); // 0x403e57
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403e79
    if (a2 == 0 || a3 == 0) {
        // 0x403ea7
        abort();
        // UNREACHABLE
    }
    // 0x403e8a
    return function_403700(a1, a4, a5, &v4);
}
// Address range: 0x403eb0 - 0x403eb9
int64_t function_403eb0(void) {
    // 0x403eb0
    int64_t v1; // 0x403eb0
    return function_403e40(v1, v1, v1, v1, -1);
}
// Address range: 0x403ec0 - 0x403ed7
int64_t function_403ec0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403ec0
    return function_403e40(0, a1, a2, a3, -1);
}
// Address range: 0x403ee0 - 0x403ef3
int64_t function_403ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403ee0
    return function_403e40(0, a1, a2, a3, a4);
}
// Address range: 0x403f00 - 0x403f0a
int64_t function_403f00(void) {
    // 0x403f00
    int64_t v1; // 0x403f00
    return function_403700(v1, v1, v1, &g18);
}
// Address range: 0x403f10 - 0x403f22
int64_t function_403f10(int64_t a1, int64_t a2) {
    // 0x403f10
    return function_403700(0, a1, a2, &g18);
}
// Address range: 0x403f30 - 0x403f41
int64_t function_403f30(void) {
    // 0x403f30
    int64_t v1; // 0x403f30
    return function_403700(v1, v1, -1, &g18);
}
// Address range: 0x403f50 - 0x403f66
int64_t function_403f50(int64_t a1) {
    // 0x403f50
    return function_403700(0, a1, -1, &g18);
}
// Address range: 0x403f70 - 0x40434d
int64_t function_403f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404008
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403f8c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403fa6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403feb
    if (a6 < 10) {
        // 0x403ffa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4040f2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404350 - 0x404370
int64_t function_404350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404350
    if (a5 == 0) {
        // 0x40436b
        return function_403f70(a1, a2, a3, a4, a5, 0, (int64_t)&g54);
    }
    int64_t v1 = 0; // 0x404357
    v1++;
    int64_t v2 = v1; // 0x404369
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404360
        v1++;
        v2 = v1;
    }
    // 0x40436b
    return function_403f70(a1, a2, a3, a4, a5, v2, (int64_t)&g54);
}
// Address range: 0x404370 - 0x4043d0
int64_t function_404370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404370
    int64_t v3 = &v2; // 0x404370
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4043a3
    int64_t v6; // 0x40438d
    int64_t * v7; // 0x4043ab
    int64_t v8; // 0x4043ab
    int64_t v9; // 0x4043b7
    if (v5 < 48) {
        // 0x404380
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4043c3
            break;
        }
    } else {
        // 0x4043ab
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4043c3
            break;
        }
    }
    int64_t v10 = 10; // 0x4043a1
    while (v4 != 9) {
        // 0x404399
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404380
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4043c3
                break;
            }
        } else {
            // 0x4043ab
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4043c3
                break;
            }
        }
        // 0x404399
        v10 = 10;
    }
    // 0x4043c3
    return function_403f70(a1, a2, a3, a4, v3, v10, (int64_t)&g54);
}
// Address range: 0x4043d0 - 0x40448c
int64_t function_4043d0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4043d0
    int64_t v1; // bp-168, 0x4043d0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4043d0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4043d0
    int64_t v8; // 0x4043d0
    int64_t v9; // bp-56, 0x4043d0
    int64_t v10; // 0x404435
    int64_t v11; // 0x404459
    if ((int32_t)v6 < 48) {
        // 0x404420
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404470
            break;
        }
    } else {
        // 0x404452
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404470
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40444a
    int64_t v13 = 10; // 0x40444a
    while (v5 != 9) {
        // 0x40444c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404420
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404470
                break;
            }
        } else {
            // 0x404452
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404470
                break;
            }
        }
        // 0x404442
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404470
    int64_t v14; // bp-136, 0x4043d0
    int64_t result = function_403f70(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g54); // 0x40447f
    return result;
}
// Address range: 0x404490 - 0x404504
int64_t function_404490(int64_t a1) {
    // 0x404490
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4044f3
    return fputs_unlocked(v1, g27);
}
// Address range: 0x404510 - 0x40452a
int64_t function_404510(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404514
    if (size != 0 != (mem == NULL)) {
        // 0x404523
        return (int64_t)mem;
    }
    // 0x404525
    function_404760(size);
    // UNREACHABLE
}
// Address range: 0x404530 - 0x404551
int64_t function_404530(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404533
    int64_t v2 = v1; // 0x404533
    if (v2 < 0) {
        // 0x40454b
        function_404760(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404549
        return function_404510(v2);
    }
    // 0x40454b
    function_404760(v2);
    // UNREACHABLE
}
// Address range: 0x404560 - 0x404562
int64_t function_404560(void) {
    // 0x404560
    int64_t v1; // 0x404560
    return function_404510(v1);
}
// Address range: 0x404570 - 0x4045a6
int64_t function_404570(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404598
        free(v1);
        return (int32_t)&g54 ^ (int32_t)&g54;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404581
    if (a2 != 0 != (mem == NULL)) {
        // 0x404590
        return (int64_t)mem;
    }
    // 0x4045a1
    function_404760(a1);
    // UNREACHABLE
}
// Address range: 0x4045b0 - 0x4045d1
int64_t function_4045b0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4045b3
    int64_t v2 = v1; // 0x4045b3
    if (v2 < 0) {
        // 0x4045cb
        function_404760(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4045c9
        return function_404570(a1, v2);
    }
    // 0x4045cb
    function_404760(a1);
    // UNREACHABLE
}
// Address range: 0x4045e0 - 0x404666
int64_t function_4045e0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40463b
            function_404760(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404570(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404623
    if (a2 == 0) {
        // 0x404648
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404628
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40463b
        function_404760(a1);
        // UNREACHABLE
    }
    // 0x40460a
    *(int64_t *)a2 = v2;
    return function_404570(a1, v2 * a3);
}
// Address range: 0x404670 - 0x4046c0
int64_t function_404670(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        if (a2 >= (int64_t *)0x5555555555555554) {
            // 0x4046ba
            function_404760(a1);
            // UNREACHABLE
        }
        int64_t v2 = v1 + 1 + v1 / 2;
        *a2 = v2;
        return function_404570(a1, v2);
    }
    if (a2 == NULL) {
        // 0x4046a5
        *a2 = 128;
        return function_404570(0, 128);
    }
    // 0x4046b8
    if (a2 < NULL) {
        // 0x4046ba
        function_404760(a1);
        // UNREACHABLE
    }
    // 0x404692
    *a2 = v1;
    return function_404570(a1, v1);
}
// Address range: 0x4046c0 - 0x4046d7
int64_t function_4046c0(int64_t a1, int64_t a2) {
    // 0x4046c0
    return (int64_t)memset((int64_t *)function_404510(a1), 0, (int32_t)a1);
}
// Address range: 0x4046e0 - 0x40470e
int64_t function_4046e0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4046e7
    if ((int64_t)v1 < 0) {
        // 0x404709
        function_404760(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404709
        function_404760(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4046fa
    if (mem != NULL) {
        // 0x404704
        return (int64_t)mem;
    }
    // 0x404709
    function_404760(nmemb);
    // UNREACHABLE
}
// Address range: 0x404710 - 0x404738
int64_t function_404710(int64_t a1, int64_t a2) {
    int64_t v1 = function_404510(a2); // 0x40471f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404740 - 0x404753
int64_t function_404740(int64_t str) {
    // 0x404740
    return function_404710(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404760 - 0x404791
int64_t function_404760(int64_t a1) {
    // 0x404760
    error(g17, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4047a0 - 0x404870
int64_t function_4047a0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x4047a0
    int64_t result2; // bp-64, 0x4047a0
    int32_t v1 = function_4048a0(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x4047cc
    int32_t * v2; // 0x4047a0
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x40484a
        if (v1 == 1) {
            // 0x404868
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x404857
            v2 = v3;
            if (v1 == 3) {
                // 0x40485c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x4047d0
        if (result >= a3 && result <= a4) {
            // 0x404832
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x4047df
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_403f50(a1); // 0x4047fc
    int32_t v6 = *v2; // 0x404801
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x404817
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x404832
    return result2;
}
// Address range: 0x404870 - 0x404891
int64_t function_404870(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x404870
    int64_t result; // 0x404870
    return result;
}
// Address range: 0x4048a0 - 0x404ce0
int64_t function_4048a0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x4048ae
    if (v1 >= 37) {
        // 0x404cbb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g54;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x4048d2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x404902
    int64_t v4 = a1; // 0x404907
    char v5 = c; // 0x404907
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x4048fc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x4048f8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x404909
    if (v5 == 45) {
        // 0x404945
        return 4;
    }
    // 0x40490e
    int64_t v7; // bp-64, 0x4048a0
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x4048ce
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x404916
    int64_t * v10 = (int64_t *)v8; // 0x40491b
    int64_t v11 = *v10; // 0x40491b
    char v12; // 0x4048a0
    int64_t v13; // 0x4048a0
    int64_t v14; // 0x4048a0
    int64_t v15; // 0x4048a0
    int64_t v16; // 0x4048a0
    int64_t v17; // 0x4048a0
    int64_t v18; // 0x4048a0
    if (v11 == a1) {
        // 0x404978
        if (c == 0 || str == 0) {
            // 0x404945
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x404999
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x404945
            return 4;
        }
        goto lab_0x4049a7;
    } else {
        int32_t v19 = *v2; // 0x404926
        int64_t v20 = 0; // 0x40492c
        if (v19 != 0) {
            // 0x404960
            v20 = 1;
            if (v19 != 34) {
                // 0x404945
                return 4;
            }
        }
        int64_t v21 = v9; // 0x404916
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x404942;
        } else {
            char c2 = *(char *)v11; // 0x404935
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x404aa3
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4049a7;
                } else {
                    goto lab_0x404ab5;
                }
            } else {
                goto lab_0x404942;
            }
        }
    }
  lab_0x4049a7:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x4049af
    int64_t v24 = 1; // 0x4049af
    int64_t v25; // 0x4048a0
    int64_t v26; // 0x4048a0
    int64_t v27; // 0x4048a0
    int64_t v28; // 0x4048a0
    int64_t v29; // 0x4048a0
    int64_t v30; // 0x4048a0
    int64_t v31; // 0x4048a0
    int64_t v32; // 0x4048a0
    int64_t v33; // 0x4048a0
    int64_t v34; // 0x4048a0
    int64_t v35; // 0x4048a0
    int64_t v36; // 0x4048a0
    int64_t v37; // 0x4048a0
    int64_t v38; // 0x4048a0
    int64_t v39; // 0x4048a0
    int64_t v40; // 0x4048a0
    int64_t v41; // 0x4048a0
    int64_t v42; // 0x4048a0
    int64_t v43; // 0x4048a0
    int64_t v44; // 0x4048a0
    if (v22 < 48) {
        // 0x4049b1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x404a1a;
        } else {
            // 0x4049c4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x404a1a;
            } else {
                // 0x4049e0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x404a1a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x404c49
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x404a1a;
                    }
                    default: {
                        // 0x4049f5
                        g51 = v22;
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
                                goto lab_0x404bbb;
                            }
                            case 70: {
                                goto lab_0x404ab5;
                            }
                            case 71: {
                                goto lab_0x404bf3;
                            }
                            case 72: {
                                goto lab_0x404ab5;
                            }
                            case 73: {
                                goto lab_0x404ab5;
                            }
                            case 74: {
                                goto lab_0x404ab5;
                            }
                            case 75: {
                                goto lab_0x404a7c;
                            }
                            case 76: {
                                goto lab_0x404ab5;
                            }
                            case 77: {
                                goto lab_0x404a3e;
                            }
                            case 78: {
                                goto lab_0x404ab5;
                            }
                            case 79: {
                                goto lab_0x404ab5;
                            }
                            case 80: {
                                goto lab_0x404b88;
                            }
                            case 81: {
                                goto lab_0x404ab5;
                            }
                            case 82: {
                                goto lab_0x404ab5;
                            }
                            case 83: {
                                goto lab_0x404ab5;
                            }
                            case 84: {
                                goto lab_0x404b58;
                            }
                            case 85: {
                                goto lab_0x404ab5;
                            }
                            case 86: {
                                goto lab_0x404ab5;
                            }
                            case 87: {
                                goto lab_0x404ab5;
                            }
                            case 88: {
                                goto lab_0x404ab5;
                            }
                            case 89: {
                                goto lab_0x404b26;
                            }
                            case 90: {
                                goto lab_0x404aeb;
                            }
                            case 91: {
                                goto lab_0x404ab5;
                            }
                            case 92: {
                                goto lab_0x404ab5;
                            }
                            case 93: {
                                goto lab_0x404ab5;
                            }
                            case 94: {
                                goto lab_0x404ab5;
                            }
                            case 95: {
                                goto lab_0x404ab5;
                            }
                            case 96: {
                                goto lab_0x404ab5;
                            }
                            case 97: {
                                goto lab_0x404ab5;
                            }
                            case 98: {
                                goto lab_0x404acf;
                            }
                            case 99: {
                                goto lab_0x404a58;
                            }
                            case 100: {
                                goto lab_0x404ab5;
                            }
                            case 101: {
                                goto lab_0x404ab5;
                            }
                            case 102: {
                                goto lab_0x404ab5;
                            }
                            case 103: {
                                goto lab_0x404bf3;
                            }
                            case 104: {
                                goto lab_0x404ab5;
                            }
                            case 105: {
                                goto lab_0x404ab5;
                            }
                            case 106: {
                                goto lab_0x404ab5;
                            }
                            case 107: {
                                goto lab_0x404a7c;
                            }
                            case 108: {
                                goto lab_0x404ab5;
                            }
                            case 109: {
                                goto lab_0x404a3e;
                            }
                            case 110: {
                                goto lab_0x404ab5;
                            }
                            case 111: {
                                goto lab_0x404ab5;
                            }
                            case 112: {
                                goto lab_0x404ab5;
                            }
                            case 113: {
                                goto lab_0x404ab5;
                            }
                            case 114: {
                                goto lab_0x404ab5;
                            }
                            case 115: {
                                goto lab_0x404ab5;
                            }
                            case 116: {
                                goto lab_0x404b58;
                            }
                            default: {
                                goto lab_0x404a1a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x404a1a;
    }
  lab_0x404942:
    // 0x404942
    *a4 = v16;
    // 0x404945
    return v13 & 0xffffffff;
  lab_0x404a1a:
    // 0x404a1a
    g52 = v12 - 66;
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
    int64_t v46; // 0x4048a0
    switch (v12) {
        case 66: {
            // 0x404c14
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x404a87;
            } else {
                // 0x404c21
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x404a58;
            }
        }
        case 69: {
            goto lab_0x404bbb;
        }
        case 71: {
            goto lab_0x404bf3;
        }
        case 75: {
            goto lab_0x404a7c;
        }
        case 77: {
            goto lab_0x404a3e;
        }
        case 80: {
            goto lab_0x404b88;
        }
        case 84: {
            goto lab_0x404b58;
        }
        case 89: {
            goto lab_0x404b26;
        }
        case 90: {
            goto lab_0x404aeb;
        }
        case 98: {
            goto lab_0x404acf;
        }
        case 99: {
            goto lab_0x404a58;
        }
        case 103: {
            goto lab_0x404bf3;
        }
        case 107: {
            goto lab_0x404a7c;
        }
        case 109: {
            goto lab_0x404a3e;
        }
        case 116: {
            goto lab_0x404b58;
        }
        case 119: {
            // 0x404ac0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x404a87;
            } else {
                // 0x404ac5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x404a58;
            }
        }
        default: {
            goto lab_0x404ab5;
        }
    }
  lab_0x404bbb:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x404bd3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x404bdf
    int64_t v51 = v48; // 0x404be2
    int64_t v52 = v37; // 0x404be2
    int64_t v53 = v49; // 0x404be2
    int32_t v54 = v50; // 0x404be2
    int64_t v55 = v49; // 0x404be2
    while (v50 != 0) {
        // 0x404bd0
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
    goto lab_0x404b14;
  lab_0x404bf3:
    // 0x404bf3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x404bfe
        int128_t v56; // 0x404bf9
        uint128_t v57; // 0x404bf9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x404bfe
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x4048a0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x404c03
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x404c08
                v26 = v60;
                int64_t v61; // 0x4048a0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x404a58;
  lab_0x404a7c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x404a7f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x404a58;
    } else {
        goto lab_0x404a87;
    }
  lab_0x404a3e:;
    int128_t v65 = v27; // 0x404a44
    uint128_t v66 = v65 * (int128_t)v17; // 0x404a44
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x404a87;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x404a49
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x404a87;
        } else {
            // 0x404a4e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x404a58;
        }
    }
  lab_0x404b88:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x404b9b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x404ba7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x404baa
    int64_t v73 = v70; // 0x404baa
    while (v71 != 0) {
        // 0x404b98
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
    goto lab_0x404b14;
  lab_0x404b58:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x404b6b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x404b77
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x404b7a
    int64_t v79 = v76; // 0x404b7a
    while (v77 != 0) {
        // 0x404b68
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
    goto lab_0x404b14;
  lab_0x404b26:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x404b3b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x404b47
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x404b4a
    int64_t v85 = v82; // 0x404b4a
    while (v83 != 0) {
        // 0x404b38
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
    goto lab_0x404b14;
  lab_0x404aeb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x404b03
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x404b0f
    int32_t v90 = v89; // 0x404b12
    int64_t v91 = v88; // 0x404b12
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x404b00
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
    goto lab_0x404b14;
  lab_0x404acf:
    // 0x404acf
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x404a87;
    } else {
        // 0x404ad8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x404a58;
    }
  lab_0x404a58:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x404a5d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x404942;
  lab_0x404ab5:
    // 0x404ab5
    *a4 = v18;
    // 0x404945
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x404a87:
    // 0x404a87
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x404a58;
  lab_0x404b14:
    // 0x404b14
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x404a58;
}
// Address range: 0x404ce0 - 0x404d5b
int64_t function_404ce0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404ce7
    if (fileno(stream) < 0) {
        // 0x404d47
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x404cfa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x404d2b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x404d47
            return fclose(stream);
        }
    }
    // 0x404cfc
    if ((int32_t)function_404d60(a1, v1) == 0) {
        // 0x404d47
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x404d08
    int32_t v3 = *v2; // 0x404d10
    int64_t result = fclose(stream); // 0x404d1e
    if (v3 != 0) {
        // 0x404d50
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x404d20
    return result;
}
// Address range: 0x404d60 - 0x404da0
int64_t function_404d60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x404d7a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x404d7a
        return fflush(stream);
    }
    // 0x404d88
    function_404da0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404da0 - 0x404df7
int64_t function_404da0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404da0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x404daa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x404ddb
    int64_t result = -1; // 0x404de4
    if (v1 != -1) {
        // 0x404de6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404df2
    return result;
}
// Address range: 0x404e00 - 0x404edf
int64_t function_404e00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x404e0c
    uint32_t v2 = *v1; // 0x404e0c
    int64_t v3 = a2 & 0xffffffff; // 0x404e11
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404e14
    uint64_t v5 = (int64_t)*v4; // 0x404e14
    int64_t v6; // 0x404e82
    if (v3 <= v5) {
      lab_0x404e7c_2:
        // 0x404e7c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404e02
    int64_t v8 = v2; // 0x404e00
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x404e7c
        goto lab_0x404e7c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404e38
    int64_t v17; // 0x404e46
    int64_t * v18; // 0x404e60
    int64_t * v19; // 0x404e63
    int64_t v20; // 0x404e6e
    int64_t v21; // 0x404e46
    while ((v16 & 0xffffffff) > v10) {
        // 0x404e43
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404e60
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404e77
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x404e7c
            goto lab_0x404e7c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x404e7c
            goto lab_0x404e7c_2;
        }
        // 0x404e32
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x404ebb
    int64_t * v23 = (int64_t *)v22; // 0x404ec0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404ec3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404ec0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404ed7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x404e2d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x404e7c
            goto lab_0x404e7c_2;
        }
        // 0x404e32
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404e43
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404e60
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404e77
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x404e7c
                goto lab_0x404e7c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x404e7c
                goto lab_0x404e7c_2;
            }
            // 0x404e32
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404ea0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404ec0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404ed7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x404e7c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404ee0 - 0x4054fc
int64_t function_404ee0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404eff
    int64_t v2 = *v1; // 0x404eff
    char * str2 = (char *)v2; // 0x404f0c
    char c = *str2; // 0x404f0c
    int64_t v3 = v2; // 0x404f38
    int64_t v4 = 0; // 0x404ee0
    int32_t v5; // 0x404ee0
    int64_t v6; // 0x404ee0
    int64_t v7; // 0x404ee0
    int64_t v8; // 0x404ee0
    int64_t v9; // 0x404ee0
    int64_t v10; // 0x404ee0
    int64_t v11; // 0x404ee0
    int64_t v12; // 0x404ee0
    int64_t v13; // 0x404ee0
    int64_t str3; // 0x404ee0
    int64_t v14; // 0x404ee0
    int64_t v15; // 0x404ee0
    int64_t v16; // 0x404ee0
    int64_t v17; // 0x404ee0
    int32_t v18; // 0x404ee0
    int32_t v19; // 0x404ee0
    int32_t v20; // 0x404ee0
    int32_t v21; // 0x404ee0
    int32_t v22; // 0x404ee0
    int32_t v23; // 0x404ee0
    int32_t v24; // 0x404ee0
    int32_t v25; // 0x404ee0
    int32_t v26; // 0x404ee0
    int32_t v27; // 0x404ee0
    int32_t v28; // 0x404ee0
    int32_t v29; // 0x404ee0
    int64_t nmemb; // 0x404ee0
    int64_t v30; // 0x404ee0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404f3c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404f38
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404f48
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404f4e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404f18
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x404f7c
                int64_t v34; // 0x404ee0
                int64_t v35; // 0x404ee0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404f85
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405100;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404f96
                int64_t v37 = *(int64_t *)v36; // 0x404f9a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404f70
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404f85
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405100;
                        }
                    }
                    // 0x404f96
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
                  lab_0x404fe6:
                    // 0x404fe6
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
                        goto lab_0x405040;
                    } else {
                        if (v11 == 0) {
                            // 0x4051b0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405040;
                        } else {
                            if (v39 == 0) {
                                // 0x405160
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40500a;
                                } else {
                                    // 0x40516c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40500a;
                                    } else {
                                        // 0x40517a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40500a;
                                        } else {
                                            goto lab_0x405040;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40500a;
                            }
                        }
                    }
                }
              lab_0x405051:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405226
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4053d2
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x4053f2
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40543f
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x405459
                            int64_t v45; // 0x40545b
                            if (*(char *)v42 != 0) {
                                // 0x40545b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405453
                            while (v17 + nmemb != v42) {
                                // 0x405455
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40545b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x405448
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405480
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x405234
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40538f
                        free((int64_t *)v17);
                    }
                    // 0x405289
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4052a0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40514e
                    return 63;
                }
                // 0x405070
                v5 = v39;
                if (v13 != 0) {
                    // 0x4050f4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405100:;
                    int32_t * v49 = (int32_t *)a7; // 0x405110
                    uint32_t v50 = *v49; // 0x405110
                    int64_t v51 = v50; // 0x405110
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40511a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405123
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40534f
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4052fa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40514e
                            return 63;
                        }
                        // 0x405198
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4054af
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4053ad
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4053c0
                                // 0x40514e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4052be
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4052d2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40513b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40513e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405142
                    int64_t result = v59; // 0x405148
                    if (v58 != 0) {
                        // 0x40514a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40514e
                    return result;
                }
            } else {
                // 0x404f4e
                v5 = v32;
            }
            // break -> 0x405075
            break;
        }
    }
    // 0x405075
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40508d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405097
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40514e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4051d9
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4050c6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4050d6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405040:
    // 0x405040
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405040
    int64_t v63 = *(int64_t *)v62; // 0x405044
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405051
        goto lab_0x405051;
    }
    goto lab_0x404fe6;
  lab_0x40500a:
    // 0x40500a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404ee0
    int32_t v65; // 0x404ee0
    int32_t v66; // 0x404ee0
    if (v27 != 0) {
        goto lab_0x405040;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4051c0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405040;
            } else {
                goto lab_0x405031;
            }
        } else {
            // 0x405025
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40531c
                int64_t v67 = (int64_t)mem; // 0x40531c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405040;
                } else {
                    // 0x40532f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405031;
                }
            } else {
                goto lab_0x405031;
            }
        }
    }
  lab_0x405031:
    // 0x405031
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405040;
}
// Address range: 0x405500 - 0x405ac6
int64_t function_405500(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405521
    if (v3 < 1) {
        // 0x4056de
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40551d
    int32_t v5 = *(int32_t *)a7; // 0x405529
    uint64_t v6 = a1 & 0xffffffff; // 0x40552b
    int64_t v7 = v2; // 0x405530
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405533
    *v8 = 0;
    int64_t v9; // 0x405500
    int64_t v10; // 0x405500
    int64_t v11; // 0x405500
    int64_t v12; // 0x405500
    int64_t str; // 0x405500
    int64_t v13; // 0x405500
    int64_t v14; // 0x405500
    int64_t v15; // 0x405500
    int64_t v16; // 0x405500
    int64_t v17; // 0x405500
    int32_t v18; // 0x405500
    char v19; // 0x405500
    if (v5 == 0) {
        // 0x405718
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40554a;
    } else {
        // 0x405543
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405590
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405593
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405658;
            } else {
                int64_t v22 = v7 + 1; // 0x4055a6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4055b6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40566c;
                } else {
                    goto lab_0x4055c8;
                }
            }
        } else {
            goto lab_0x40554a;
        }
    }
  lab_0x40554a:
    // 0x40554a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405550
    *v24 = 0;
    int64_t v25; // 0x405500
    int64_t v26; // 0x405500
    int64_t v27; // 0x405500
    switch (*(char *)&v2) {
        case 45: {
            // 0x405640
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40564d;
        }
        case 43: {
            // 0x405950
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40564d;
        }
        default: {
            // 0x40556c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4058cf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4059e8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40564d;
                } else {
                    // 0x4058dd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40557a;
                }
            } else {
                goto lab_0x40557a;
            }
        }
    }
  lab_0x405658:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40565f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4055c8;
    } else {
        goto lab_0x40566c;
    }
  lab_0x40557a:
    // 0x40557a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40564d;
  lab_0x40564d:
    // 0x40564d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405658;
  lab_0x4055c8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4055c8
    int64_t v31 = v30; // 0x4055c8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4055ca
    if ((int64_t)*v32 > v31) {
        // 0x4055cf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4055d2
    if (*v33 > v30) {
        // 0x4055d7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4055da
    int64_t v35 = v31; // 0x4055de
    int64_t v36 = v15; // 0x4055de
    int64_t v37; // 0x405500
    int64_t v38; // 0x405500
    int64_t v39; // 0x405500
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405748
        int64_t v41 = v40; // 0x405748
        v2 = v41;
        int64_t v42; // 0x405500
        if (*v33 == v40) {
            // 0x405930
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405938
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405754
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405758
                function_404e00(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405768
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405771
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40577a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405791
            int64_t v47 = v45 & 0xffffffff; // 0x405795
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40579e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4057a4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4057a6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405780
            int64_t v49 = v48 & 0xffffffff; // 0x405780
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405791
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40579e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4057a4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4057a6;
                    }
                }
                // 0x405780
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405948
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4057a6;
    } else {
        goto lab_0x4055e4;
    }
  lab_0x40566c:
    // 0x40566c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40566f
    int64_t v51 = v12; // 0x40566f
    int64_t v52 = v14; // 0x40566f
    if (*(char *)v10 == 0) {
        goto lab_0x4055c8;
    } else {
        goto lab_0x405675;
    }
  lab_0x4055e4:;
    int32_t v53 = v35; // 0x4055e4
    int64_t v54; // 0x405500
    int64_t v55; // 0x405500
    int64_t v56; // 0x405500
    int64_t v57; // 0x405500
    int64_t v58; // 0x405500
    int64_t v59; // 0x405500
    char * v60; // 0x405500
    int64_t v61; // 0x405500
    int64_t v62; // 0x4055f9
    int64_t v63; // 0x405500
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405733
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405736;
    } else {
        // 0x4055ec
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405500
        int64_t v66 = v65 ? -1 : 1; // 0x405600
        int64_t v67 = (int64_t)"--"; // 0x405500
        int64_t v68 = v62; // 0x405500
        int64_t v69 = 3; // 0x405600
        unsigned char v70 = *(char *)v68; // 0x405600
        char v71 = *(char *)v67; // 0x405600
        char v72 = v71; // 0x405600
        bool v73 = false; // 0x405600
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
            // 0x4056f0
            if (*(char *)v62 == 45) {
                // 0x4057b0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4057b0
                if (c == 0) {
                    goto lab_0x4056fa;
                } else {
                    // 0x4057bd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405840;
                    } else {
                        if (c == 45) {
                            // 0x405a23
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405895;
                        } else {
                            // 0x4057ce
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405840;
                            } else {
                                // 0x4057d3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4057f4;
                                } else {
                                    // 0x4057da
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405840;
                                    } else {
                                        goto lab_0x4057f4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4056fa;
            }
        } else {
            uint32_t v75 = *v33; // 0x405610
            v2 = v75;
            int32_t v76 = *v32; // 0x405613
            int64_t v77 = v35 + 1; // 0x405616
            int32_t v78 = v77; // 0x405619
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405980
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405627
                    function_404e00(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405635
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405736;
        }
    }
  lab_0x405675:;
    // 0x405675
    int64_t v79; // bp-104, 0x405500
    int64_t v80 = &v79; // 0x40550a
    int64_t v81 = v50 + 1; // 0x405675
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40567c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405681
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405685
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405689
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405691
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405696
    int32_t c2 = v84; // 0x405696
    char * found_char_pos = strchr(str2, c2); // 0x405696
    int64_t v87 = *v82; // 0x40569b
    v2 = v87;
    int64_t v88 = *v85; // 0x4056a5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4056b0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4059a0
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40596d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4056de
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405696
    char v91 = *(char *)(v90 + 1); // 0x4056cb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405685
        if (v91 != 58) {
            // 0x4056de
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4058f4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4059f8
                *v8 = 0;
            } else {
                // 0x4059dc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40591e
            *v83 = 0;
            // 0x4056de
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4058fe
        if (v93 != 0) {
            // 0x405990
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40591e
            *v83 = 0;
            // 0x4056de
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405911
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40591e
            *v83 = 0;
            // 0x4056de
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405a5a
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405a0a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405a11
        // 0x40591e
        *v83 = 0;
        // 0x4056de
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405869
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40586b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405a90
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405a41
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405a48
            // 0x4056de
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405876
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40587a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405895;
  lab_0x4057a6:
    // 0x4057a6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4055e4;
  lab_0x405895:;
    int64_t v99 = function_404ee0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4058b3
    // 0x4056de
    return v99 & 0xffffffff;
  lab_0x405736:;
    int32_t v100 = v55; // 0x405736
    if (v100 != (int32_t)v59) {
        // 0x40573a
        *(int32_t *)a7 = v100;
    }
    // 0x4056de
    return 0xffffffff;
  lab_0x4056fa:
    // 0x4056fa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405701
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4056de
    return v99 & 0xffffffff;
  lab_0x405840:
    // 0x405840
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405675;
  lab_0x4057f4:
    // 0x4057f4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404ee0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40581a
    if ((int32_t)v101 != -1) {
        // 0x4056de
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40582f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405840;
}
// Address range: 0x405ad0 - 0x405b26
int64_t function_405ad0(int64_t a1) {
    // 0x405ad0
    *(int32_t *)&g45 = g25;
    *(int32_t *)&g46 = g24;
    int64_t v1; // 0x405ad0
    int64_t result = function_405500(v1, v1, v1, v1, v1, v1, &g45, a1 & 0xffffffff); // 0x405af6
    g25 = *(int32_t *)&g45;
    g50 = g48;
    *(int32_t *)&g23 = g47;
    return result;
}
// Address range: 0x405b30 - 0x405b48
int64_t function_405b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405b30
    return function_405ad0(1);
}
// Address range: 0x405b50 - 0x405b63
int64_t function_405b50(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x405b50
    return function_405ad0(0);
}
// Address range: 0x405b70 - 0x405b85
int64_t function_405b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405b70
    return function_405500(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405b90 - 0x405ba6
int64_t function_405b90(void) {
    // 0x405b90
    return function_405ad0(0);
}
// Address range: 0x405bb0 - 0x405bc8
int64_t function_405bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405bb0
    return function_405500(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405bd0 - 0x405c4a
int64_t function_405bd0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405bdb
    int64_t v2 = (int64_t)&g9; // 0x405bdb
    int32_t * pwc; // 0x405bd0
    int64_t v3; // 0x405bd0
    int64_t n; // 0x405bd0
    if (a2 == 0) {
        goto lab_0x405c22;
    } else {
        // 0x405bdd
        if (a3 == 0) {
            // 0x405c08
            return -2;
        }
        // 0x405be9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405c22;
        } else {
            goto lab_0x405bf4;
        }
    }
  lab_0x405c22:
    // 0x405c22
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405bd0
    pwc = (int32_t *)&v4;
    goto lab_0x405bf4;
  lab_0x405bf4:;
    char * wstr = (char *)v3; // 0x405bfa
    int64_t ps; // 0x405bd0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405bfa
    int64_t result = v5; // 0x405bfa
    if (v5 < 0xfffffffe) {
        // 0x405c08
        return result;
    }
    int64_t result2 = result; // 0x405c39
    if ((char)function_405cb0(0, v3) == 0) {
        // 0x405c3b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405c08
    return result2;
}
// Address range: 0x405c50 - 0x405cad
int64_t function_405c50(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405c57
    int64_t v2; // 0x405c50
    int64_t result = function_404ce0(a1, v2); // 0x405c68
    if ((v2 & 32) != 0) {
        // 0x405c90
        if ((int32_t)result == 0) {
            // 0x405c94
            *__errno_location() = 0;
        }
        // 0x405c8a
        return 0xffffffff;
    }
    // 0x405c71
    if ((int32_t)result == 0) {
        // 0x405c8a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405c78
    if (v1 == 0) {
        // 0x405c7a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405c8a
    return result2;
}
// Address range: 0x405cb0 - 0x405d0e
int64_t function_405cb0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405cb6
    if (locale == NULL) {
        // 0x405ce3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405cb6
    bool v2; // 0x405cb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x405cb0
    int64_t v5 = v1; // 0x405cb0
    int64_t v6 = 2; // 0x405cd5
    unsigned char v7 = *(char *)v5; // 0x405cd5
    char v8 = *(char *)v4; // 0x405cd5
    char v9 = v8; // 0x405cd5
    bool v10 = false; // 0x405cd5
    while (v7 == v8) {
        // 0x405cc8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405ce1
    int64_t v13 = v1; // 0x405ce1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405ce3
        return 0;
    }
    int64_t v14 = 6; // 0x405ce1
    unsigned char v15 = *(char *)v13; // 0x405cfd
    char v16 = *(char *)v12; // 0x405cfd
    char v17 = v16; // 0x405cfd
    bool v18 = false; // 0x405cfd
    while (v15 == v16) {
        // 0x405cf0
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
// Address range: 0x405d10 - 0x406272
int64_t function_405d10(void) {
    char * v1 = nl_langinfo(14); // 0x405d26
    char * v2 = g49; // 0x405d2b
    char * v3; // 0x405d10
    int64_t v4; // 0x405d10
    int64_t v5; // 0x405d10
    int64_t v6; // 0x405d10
    int64_t v7; // 0x405d10
    int32_t size; // 0x405d10
    int32_t size2; // 0x405d10
    int32_t len; // 0x405de2
    int64_t v8; // 0x405de2
    char * env_val; // 0x405dcd
    if (v2 == NULL) {
        // 0x405dc8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405e35;
        } else {
            // 0x405dda
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405e35;
            } else {
                // 0x405ddf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405dcd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406265
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405e35;
                    } else {
                        // 0x4061d9
                        size2 = len + 14;
                        goto lab_0x405dfb;
                    }
                } else {
                    goto lab_0x405dfb;
                }
            }
        }
    } else {
        // 0x405d10
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405d4a;
    }
  lab_0x40607c:;
    // 0x40607c
    struct _IO_FILE * stream; // 0x405ebb
    int32_t v10 = __uflow(stream); // 0x40607f
    int64_t v11; // 0x405d10
    int64_t v12 = v11; // 0x406089
    int64_t v13; // 0x405d10
    int64_t v14 = v13; // 0x406089
    int32_t v15 = v10; // 0x406089
    int64_t v16; // 0x405d10
    int64_t v17 = v16; // 0x406089
    int64_t v18 = v11; // 0x406089
    int64_t v19 = v13; // 0x406089
    int64_t v20 = v16; // 0x406089
    if (v10 == -1) {
        // break -> 0x40608f
        goto lab_0x40608f;
    }
    goto lab_0x405f09;
  lab_0x405efe:;
    // 0x405efe
    int64_t v90; // 0x405d10
    int64_t * v32; // 0x405ef0
    *v32 = v90 + 1;
    int64_t v89; // 0x405d10
    v12 = v89;
    int64_t v91; // 0x405d10
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405d10
    v17 = v92;
    goto lab_0x405f09;
  lab_0x405f09:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405d10
    int32_t v25; // bp-120, 0x405d10
    int32_t v26; // bp-184, 0x405d10
    int64_t v27; // 0x405ebb
    int64_t v28; // 0x405ed8
    int64_t v29; // 0x405edd
    int64_t * v30; // 0x405ef4
    switch (c) {
        case 32: {
            goto lab_0x405ef0;
        }
        case 10: {
            goto lab_0x405ef0;
        }
        case 9: {
            goto lab_0x405ef0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4060e1
            int32_t v33; // 0x405d10
            char v34; // 0x405d10
            int32_t v35; // 0x4060ee
            if (v31 < *v30) {
                // 0x4060c0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4060eb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4060e1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4060c0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4060eb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4060d0
                v36 = v33;
            }
            // 0x4061bf
            if (v36 == -1) {
                // break -> 0x40608f
                break;
            }
            goto lab_0x405ef0;
        }
        default: {
            // 0x405f1f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40608f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405f48
            int64_t v39 = v37 + 4; // 0x405f4a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405f56
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405f58
            while (v41 == 0) {
                // 0x405f48
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405f76
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405f82
            int64_t v45 = v43 + 4; // 0x405f84
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405f90
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405f92
            while (v47 == 0) {
                // 0x405f82
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405f7f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405fa8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405fb8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x405fbc
            int64_t v52 = v51 + v48; // 0x405fc5
            int64_t * mem; // 0x405d10
            int64_t v53; // 0x405d10
            int64_t v54; // 0x405d10
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4060fb
                int64_t v56 = v55 + 3; // 0x406107
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405fe1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405ff0
            if (mem == NULL) {
                // 0x40621c
                free((int64_t *)v21);
                function_404ce0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x405e94;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406008
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406012
            uint32_t v62 = (int32_t)v59; // 0x406015
            int64_t v63; // 0x405d10
            if (v62 >= 8) {
                // 0x406124
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40613e
                int64_t v66 = v61 - v65; // 0x406142
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40614d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40615e
                    int64_t v70 = v69 & 0xffffffff; // 0x40615e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40615b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4061ef
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406027
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40602b
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
            int64_t v73 = v51 + 1; // 0x40603b
            int64_t v74 = v60 - 1; // 0x40603f
            uint32_t v75 = (int32_t)v73; // 0x406044
            int64_t v76; // 0x405d10
            if (v75 >= 8) {
                // 0x406172
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40617c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40618c
                int64_t v80 = v74 - v79; // 0x406190
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40619b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4061ab
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4061a9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406206
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40620e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406056
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40605a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406253
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40606e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405efe;
            } else {
                goto lab_0x40607c;
            }
        }
    }
  lab_0x405ef0:;
    int64_t v93 = v23; // 0x405d10
    int64_t v94 = v22; // 0x405d10
    int64_t v95 = v21; // 0x405d10
    goto lab_0x405ef0_2;
  lab_0x405e35:;
    int64_t * mem3 = malloc(size); // 0x405e35
    int64_t v97 = (int64_t)&g9; // 0x405e40
    int64_t v98; // 0x405d10
    int64_t path; // 0x405d10
    if (mem3 == NULL) {
        goto lab_0x405e12;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405e35
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405e56;
    }
  lab_0x405d4a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x405d3d
    char v100 = *v3; // 0x405d4a
    int64_t v101; // 0x405d10
    if (v100 == 0) {
        // 0x405da4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405d10
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405d10
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405d90
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405d97;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405d60
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405d6d
        char v107 = *(char *)v106; // 0x405d72
        v102 = v107;
        if (v107 == 0) {
            // 0x405da4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405d7b
    v104 = v103 + 1;
  lab_0x405d97:
    // 0x405da4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405e12:;
    char * v108 = (char *)v97;
    g49 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405d4a;
  lab_0x405e56:;
    int64_t v109 = v98 + path; // 0x405e56
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405e82
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x405eb1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4061e2
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x405ed5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405ef0_2:;
                uint64_t v96 = *v32; // 0x405ef0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40607c;
                } else {
                    goto lab_0x405efe;
                }
            }
          lab_0x40608f:
            // 0x40608f
            function_404ce0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x4060ae
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405e94;
  lab_0x405dfb:;
    int64_t * mem4 = malloc(size2); // 0x405dfb
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x405ea1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405e56;
    } else {
        goto lab_0x405e12;
    }
  lab_0x405e94:
    // 0x405e94
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405e12;
}
// Address range: 0x406280 - 0x4062dd
int64_t function_406280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406280
    return function_401400();
}
// Address range: 0x4062e0 - 0x4062e1
int64_t function_4062e0(void) {
    // 0x4062e0
    int64_t result; // 0x4062e0
    return result;
}
// Address range: 0x4062f0 - 0x406308
int64_t function_4062f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4062f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x406308 - 0x406328
int64_t function_406308(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x406312
    while (*(int64_t *)v1 != -1) {
        // 0x406313
        v1 -= 8;
    }
    // 0x406324
    return result;
}
