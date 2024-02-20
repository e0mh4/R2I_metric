#include "decompile_retdec.h"
// Address range: 0x401630 - 0x401635
int64_t function_401630(void) {
    // 0x401630
    abort();
    // UNREACHABLE
}
// Address range: 0x401635 - 0x40163a
int64_t function_401635(void) {
    // 0x401635
    abort();
    // UNREACHABLE
}
// Address range: 0x40163a - 0x40163f
int64_t function_40163a(void) {
    // 0x40163a
    abort();
    // UNREACHABLE
}
// Address range: 0x40163f - 0x401644
int64_t function_40163f(void) {
    // 0x40163f
    abort();
    // UNREACHABLE
}
// Address range: 0x401644 - 0x401649
int64_t function_401644(void) {
    // 0x401644
    abort();
    // UNREACHABLE
}
// Address range: 0x401649 - 0x40164e
int64_t function_401649(void) {
    // 0x401649
    abort();
    // UNREACHABLE
}
// Address range: 0x401650 - 0x401890
int64_t function_401650(int64_t a1, int64_t a2) {
    // 0x401650
    int128_t v1; // 0x401650
    int128_t v2 = v1;
    int64_t v3 = a1 & 0xffffffff; // 0x401656
    function_401e80(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v4; // 0x401650
    function_405b70(0x401cd0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v4);
    function_401d70(v3, a2, "sleep", "GNU coreutils", (int64_t)g19, 0x401970);
    int64_t v5 = function_405140(v3, a2, (int64_t *)&g12, &g2, 0, 0x401970); // 0x4016e0
    if ((int32_t)v5 != -1) {
        // 0x401857
        function_401970(1);
        // UNREACHABLE
    }
    if ((int32_t)a1 == 1) {
        // 0x401838
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401857
        function_401970(1);
        // UNREACHABLE
    }
    uint32_t v6 = *(int32_t *)0x60923c; // 0x4016f7
    uint64_t v7 = (int64_t)v6; // 0x4016f7
    bool v8; // 0x401650
    int64_t v9; // 0x401650
    int64_t v10; // 0x401650
    int64_t v11; // 0x401650
    int64_t v12; // 0x401650
    int64_t v13; // 0x401650
    int64_t v14; // 0x401650
    int64_t v15; // 0x401650
    int64_t v16; // 0x401650
    int64_t v17; // 0x401650
    int64_t v18; // 0x401650
    char * v19; // bp-32, 0x401650
    int64_t v20; // bp-40, 0x401650
    int64_t v21; // 0x401650
    int64_t v22; // 0x401650
    int64_t v23; // 0x401791
    int64_t * v24; // 0x401784
    int64_t v25; // 0x401784
    int64_t v26; // 0x401779
    int128_t v27; // 0x401650
    int128_t v28; // 0x401650
    int128_t v29; // 0x401650
    if (v3 > v7) {
        // 0x401705
        v23 = (int64_t)&v19;
        v21 = 0;
        v12 = 0x100000000 * v7 / 0x20000000 + a2;
        v10 = 1;
        while (true) {
          lab_0x401784:
            // 0x401784
            v11 = v10;
            v29 = v28;
            v24 = (int64_t *)v12;
            v25 = *v24;
            int64_t v30 = function_404350(v25, (int64_t *)&v19, &v20, 0x401c40); // 0x401796
            v8 = false;
            if ((char)v30 == 0) {
                uint32_t v31 = *__errno_location(); // 0x401735
                v27 = v29;
                v8 = v31 < 34;
                if (v31 == 34) {
                    goto lab_0x40179f;
                } else {
                    goto lab_0x40173a;
                }
            } else {
                goto lab_0x40179f;
            }
        }
      lab_0x401800:
        // 0x401800
        v22 = v26;
        v16 = v15;
        v18 = v17;
        v14 = v13;
        if ((char)v9 == 0) {
            // 0x401857
            function_401970(1);
            // UNREACHABLE
        }
    } else {
        // 0x40182c
        v22 = __asm_movsd_1(__asm_pxor(v2, v2));
        v16 = (int64_t)&g12;
        v18 = a2;
        v14 = v3;
    }
    // 0x401805
    __asm_movsd(v22);
    if ((int32_t)function_4042f0(v14, v18, v16) != 0) {
        // 0x401861
        error(1, *__errno_location(), dcgettext(NULL, "cannot read realtime clock", 5));
        return &g50;
    }
    // 0x401814
    return 0;
  lab_0x40179f:;
    int128_t v32 = __asm_movsd(v20); // 0x40179f
    int128_t v33 = __asm_pxor(v29, v29); // 0x4017a5
    __asm_comisd(v32, v33);
    v27 = v33;
    int64_t v34; // 0x401650
    int128_t v35; // 0x401650
    int128_t v36; // 0x401650
    if (v8) {
        goto lab_0x40173a;
    } else {
        int64_t v37 = (int64_t)v19; // 0x4017af
        char v38 = *v19; // 0x4017b4
        v35 = v32;
        v36 = v33;
        v15 = v37;
        v34 = v11;
        v17 = v23;
        v13 = v25;
        if (v38 == 0) {
            goto lab_0x40176f;
        } else {
            // 0x4017bb
            v27 = v33;
            if (*(char *)(v37 + 1) != 0) {
                goto lab_0x40173a;
            } else {
                if (v38 == 104) {
                    // 0x40181f
                    v35 = __asm_mulsd(v32, 0x40ac200000000000);
                    v36 = v33;
                    v15 = v37;
                    v34 = v11;
                    v17 = v23;
                    v13 = v25;
                    goto lab_0x40176f;
                } else {
                    if (v38 > 104) {
                        if (v38 != 109) {
                            // 0x4017f0
                            v27 = v33;
                            v35 = v32;
                            v36 = v33;
                            v15 = v37;
                            v34 = v11;
                            v17 = v23;
                            v13 = v25;
                            if (v38 != 115) {
                                goto lab_0x40173a;
                            } else {
                                goto lab_0x40176f;
                            }
                        } else {
                            // 0x4017e4
                            v35 = __asm_mulsd(v32, 0x404e000000000000);
                            v36 = v33;
                            v15 = v37;
                            v34 = v11;
                            v17 = v23;
                            v13 = v25;
                            goto lab_0x40176f;
                        }
                    } else {
                        // 0x4017cb
                        v27 = v33;
                        if (v38 != 100) {
                            goto lab_0x40173a;
                        } else {
                            // 0x4017d3
                            v35 = __asm_mulsd(v32, 0x40f5180000000000);
                            v36 = v33;
                            v15 = v37;
                            v34 = v11;
                            v17 = v23;
                            v13 = v25;
                            goto lab_0x40176f;
                        }
                    }
                }
            }
        }
    }
  lab_0x40173a:
    // 0x40173a
    function_403aa0(*v24);
    char * format = dcgettext(NULL, "invalid time interval %s", 5); // 0x401751
    error(0, (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s", format);
    v35 = __asm_movsd(v20);
    v36 = v27;
    v15 = (int64_t)format;
    v34 = 0;
    v17 = (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s";
    v13 = 0;
    goto lab_0x40176f;
  lab_0x40176f:
    // 0x40176f
    v9 = v34;
    int64_t v39 = v12 + 8; // 0x401775
    v26 = __asm_movsd_1(__asm_addsd(v35, v21));
    v21 = v26;
    v28 = v36;
    v12 = v39;
    v10 = v9;
    if (v39 == a2 + 8 + 8 * (((v7 ^ 0xffffffff) + a1 & 0xffffffff) + (int64_t)v6)) {
        // break -> 0x401800
        goto lab_0x401800;
    }
    goto lab_0x401784;
}
// Address range: 0x401890 - 0x4018bb
// Address range: 0x4018bb - 0x4018da
int64_t function_4018bb(void) {
    // 0x4018bb
    return &g29;
}
// Address range: 0x4018da - 0x401911
int64_t function_4018da(void) {
    // 0x4018da
    return 0;
}
// Address range: 0x401911 - 0x401968
int64_t function_401911(void) {
    // 0x401911
    if (g33 != 0) {
        // 0x401967
        int64_t result; // 0x401911
        return result;
    }
    int64_t v1 = g34; // 0x401944
    int64_t result2; // 0x401956
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401956
        result2 = function_4018bb();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401946
        v1++;
    }
    // 0x40193a
    g34 = v1;
    // 0x401956
    result2 = function_4018bb();
    g33 = 1;
    return result2;
}
// Address range: 0x401968 - 0x40196d
int64_t function_401968(void) {
    // 0x401968
    return function_4018da();
}
// Address range: 0x401970 - 0x401c3d
int64_t function_401970(int64_t a1) {
    int32_t status = a1; // 0x401986
    if (status != 0) {
        // 0x40198a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4019af
        exit(status);
        // UNREACHABLE
    }
    // 0x4019b6
    __printf_chk(1, dcgettext(NULL, "Usage: %s NUMBER[SUFFIX]...\n  or:  %s OPTION\nPause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n'm' for minutes, 'h' for hours or 'd' for days.  Unlike most implementations\nthat require NUMBER be an integer, here NUMBER may be an arbitrary floating\npoint number.  Given two or more arguments, pause for the amount of time\nspecified by the sum of their values.\n\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x401a1d
    bool v2; // 0x401970
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401aa0
    int64_t v6 = *(int64_t *)v5; // 0x401aa4
    int64_t v7 = 6; // 0x401aaa
    while (v6 != 0) {
        int64_t v8 = (int64_t)"sleep";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401ab6
        char v11 = *(char *)v9; // 0x401ab6
        char v12 = v11; // 0x401ab6
        bool v13 = false; // 0x401ab6
        while (v10 == v11) {
            // 0x401aac
            v7--;
            int64_t v14 = v9 + v3; // 0x401ab6
            int64_t v15 = v8 + v3; // 0x401ab6
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
            // break -> 0x401ac2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x401ac2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401bd4;
        } else {
            // 0x401bbe
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401c13
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401b24;
            } else {
                goto lab_0x401bd4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401b24;
        } else {
            // 0x401b0a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401c13
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401b24;
            } else {
                goto lab_0x401b24;
            }
        }
    }
  lab_0x401bd4:
    // 0x401bd4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401b64
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4019af
    exit(status);
    // UNREACHABLE
  lab_0x401b24:
    // 0x401b24
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401b64
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4019af
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401c40 - 0x401caa
int64_t function_401c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x401c40
    int128_t v1; // 0x401c40
    int128_t v2 = v1;
    struct __locale_struct * v3 = g35;
    if (v3 != NULL) {
        // 0x401c64
        return strtod_l((char *)a1, (char **)a2, v3);
    }
    struct __locale_struct * v4 = newlocale(0x1fbf, "C", NULL); // 0x401c9c
    g35 = v4;
    if (v4 != NULL) {
        // 0x401c64
        return strtod_l((char *)a1, (char **)a2, v4);
    }
    if (a2 != 0) {
        // 0x401c7d
        *(int64_t *)a2 = a1;
    }
    // 0x401c80
    __asm_pxor(v2, v2);
    return (int64_t)v4;
}
// Address range: 0x401cb0 - 0x401cb8
int64_t function_401cb0(int64_t a1) {
    // 0x401cb0
    g37 = a1;
    int64_t result; // 0x401cb0
    return result;
}
// Address range: 0x401cc0 - 0x401cc8
int64_t function_401cc0(int64_t a1) {
    // 0x401cc0
    g36 = a1;
    int64_t result; // 0x401cc0
    return result;
}
// Address range: 0x401cd0 - 0x401d6e
int64_t function_401cd0(void) {
    // 0x401cd0
    int32_t * err_num; // 0x401ce6
    if ((int32_t)function_4052f0((int64_t)g30) == 0) {
        goto lab_0x401cfc;
    } else {
        // 0x401ce6
        err_num = __errno_location();
        if (g36 == 0) {
            goto lab_0x401d13;
        } else {
            // 0x401cf7
            if (*err_num != 32) {
                goto lab_0x401d13;
            } else {
                goto lab_0x401cfc;
            }
        }
    }
  lab_0x401cfc:;
    int64_t result = function_4052f0((int64_t)g32); // 0x401d03
    if ((int32_t)result == 0) {
        // 0x401d0c
        return result;
    }
    // 0x401d4e
    _exit(g20);
    // UNREACHABLE
  lab_0x401d13:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401d1f
    if (g37 == 0) {
        // 0x401d59
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401d33
        error(0, *err_num, "%s: %s", (char *)function_4038f0((int64_t)g37), v1);
    }
    // 0x401d4e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401d70 - 0x401e72
int64_t function_401d70(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x401d70
    int64_t v1; // 0x401d70
    if ((char)v1 != 0) {
        // 0x401d83
        int128_t v2; // 0x401d70
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x401dba
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x401dcf
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x401d70
        return result;
    }
    int64_t result2 = function_405140(a1, a2, &g3, (int64_t *)&g4, 0, a6); // 0x401e09
    int32_t v4 = result2; // 0x401e0e
    switch (v4) {
        default: {
            // 0x401e18
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x401e3a
                function_403ec0((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x401dcf
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
}
// Address range: 0x401e80 - 0x401f19
int64_t function_401e80(int64_t str) {
    // 0x401e80
    if (str == 0) {
        // 0x401ef9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401e8e
    int64_t result = (int64_t)found_char_pos; // 0x401e8e
    if (found_char_pos == NULL) {
        // 0x401ee9
        g38 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401e98
    if (v1 - str < 7) {
        // 0x401ee9
        g38 = str;
        g31 = str;
        return result;
    }
    // 0x401ea8
    bool v2; // 0x401e80
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401e80
    int64_t v5 = result - 6; // 0x401e80
    int64_t v6 = 7; // 0x401eb6
    unsigned char v7 = *(char *)v5; // 0x401eb6
    char v8 = *(char *)v4; // 0x401eb6
    char v9 = v8; // 0x401eb6
    bool v10 = false; // 0x401eb6
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
    int64_t v12 = (int64_t)"lt-"; // 0x401ec0
    int64_t v13 = v1; // 0x401ec0
    int64_t v14 = 3; // 0x401ec0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401ee9
        g38 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401ed2
    char v16 = *(char *)v12; // 0x401ed2
    char v17 = v16; // 0x401ed2
    bool v18 = false; // 0x401ed2
    while (v15 == v16) {
        // 0x401ec2
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
    int64_t v20 = v1; // 0x401edc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401ede
        v20 = result + 4;
        g29 = v20;
    }
    // 0x401ee9
    g38 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x401f20 - 0x402012
int64_t function_401f20(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401f34
    int64_t result = (int64_t)v1; // 0x401f34
    if (result != a1) {
        // 0x401f41
        return result;
    }
    int64_t v2 = function_405470(); // 0x401f50
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402006
    if (v3 == 85) {
        // 0x401f60
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401ff8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x401f8e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x401f9b
        // 0x401f41
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401ff8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x401fdd
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x401fea
    // 0x401f41
    return result4;
}
// Address range: 0x402020 - 0x402077
int64_t function_402020(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402020
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402068
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402077 - 0x403241
int64_t function_402077(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4020c1
    int64_t v3 = 0; // 0x4020c1
    int64_t v4; // 0x402077
    int64_t v5; // 0x402077
    int64_t v6; // 0x402077
    int64_t v7; // 0x402077
    int64_t v8; // 0x402077
    int64_t v9; // 0x402077
    int64_t v10; // 0x402077
    int64_t v11; // 0x402077
    int64_t v12; // 0x402077
    int64_t v13; // 0x402077
    int64_t v14; // 0x402077
    int64_t v15; // 0x402077
    int64_t v16; // 0x402077
    int64_t v17; // 0x402077
    int64_t v18; // 0x402077
    int64_t result; // 0x402077
    int64_t v19; // 0x402077
    int32_t wc; // bp+132, 0x402077
    int64_t ps; // bp+136, 0x402077
    char v20; // 0x402630
    int64_t v21; // 0x402630
    int64_t v22; // 0x4029d8
    int64_t v23; // 0x402077
    int64_t v24; // 0x4029f7
    int32_t v25; // 0x402077
    while (true) {
      lab_0x4020c8_2:
        // 0x4020c8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402077
        int64_t v27; // 0x4020fc
        while (true) {
          lab_0x4020c8:
            // 0x4020c8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4020d3
            if (v15 == -1) {
                // 0x4020d5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4020e3
            if (v28) {
                // break (via goto) -> 0x402848
                goto lab_0x402848;
            }
            // 0x4020ec
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
                    // 0x4026db
                    if (v25 % 2 == 0) {
                        goto lab_0x402221;
                    }
                    // 0x402afd
                    v26 = v5 + 1;
                    goto lab_0x4020c8;
                }
                case 7: {
                    goto lab_0x402221;
                }
                case 8: {
                    goto lab_0x402221;
                }
                case 9: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402221;
                }
                case 12: {
                    goto lab_0x402221;
                }
                case 13: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4021ed;
                }
                case 36: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402221;
                }
                case 38: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402221;
                }
                case 44: {
                    goto lab_0x402221;
                }
                case 45: {
                    goto lab_0x402221;
                }
                case 46: {
                    goto lab_0x402221;
                }
                case 47: {
                    goto lab_0x402221;
                }
                case 48: {
                    goto lab_0x402221;
                }
                case 49: {
                    goto lab_0x402221;
                }
                case 50: {
                    goto lab_0x402221;
                }
                case 51: {
                    goto lab_0x402221;
                }
                case 52: {
                    goto lab_0x402221;
                }
                case 53: {
                    goto lab_0x402221;
                }
                case 54: {
                    goto lab_0x402221;
                }
                case 55: {
                    goto lab_0x402221;
                }
                case 56: {
                    goto lab_0x402221;
                }
                case 57: {
                    goto lab_0x402221;
                }
                case 58: {
                    goto lab_0x402221;
                }
                case 59: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402221;
                }
                case 66: {
                    goto lab_0x402221;
                }
                case 67: {
                    goto lab_0x402221;
                }
                case 68: {
                    goto lab_0x402221;
                }
                case 69: {
                    goto lab_0x402221;
                }
                case 70: {
                    goto lab_0x402221;
                }
                case 71: {
                    goto lab_0x402221;
                }
                case 72: {
                    goto lab_0x402221;
                }
                case 73: {
                    goto lab_0x402221;
                }
                case 74: {
                    goto lab_0x402221;
                }
                case 75: {
                    goto lab_0x402221;
                }
                case 76: {
                    goto lab_0x402221;
                }
                case 77: {
                    goto lab_0x402221;
                }
                case 78: {
                    goto lab_0x402221;
                }
                case 79: {
                    goto lab_0x402221;
                }
                case 80: {
                    goto lab_0x402221;
                }
                case 81: {
                    goto lab_0x402221;
                }
                case 82: {
                    goto lab_0x402221;
                }
                case 83: {
                    goto lab_0x402221;
                }
                case 84: {
                    goto lab_0x402221;
                }
                case 85: {
                    goto lab_0x402221;
                }
                case 86: {
                    goto lab_0x402221;
                }
                case 87: {
                    goto lab_0x402221;
                }
                case 88: {
                    goto lab_0x402221;
                }
                case 89: {
                    goto lab_0x402221;
                }
                case 90: {
                    goto lab_0x402221;
                }
                case 91: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402221;
                }
                case 94: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402221;
                }
                case 96: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402221;
                }
                case 98: {
                    goto lab_0x402221;
                }
                case 99: {
                    goto lab_0x402221;
                }
                case 100: {
                    goto lab_0x402221;
                }
                case 101: {
                    goto lab_0x402221;
                }
                case 102: {
                    goto lab_0x402221;
                }
                case 103: {
                    goto lab_0x402221;
                }
                case 104: {
                    goto lab_0x402221;
                }
                case 105: {
                    goto lab_0x402221;
                }
                case 106: {
                    goto lab_0x402221;
                }
                case 107: {
                    goto lab_0x402221;
                }
                case 108: {
                    goto lab_0x402221;
                }
                case 109: {
                    goto lab_0x402221;
                }
                case 110: {
                    goto lab_0x402221;
                }
                case 111: {
                    goto lab_0x402221;
                }
                case 112: {
                    goto lab_0x402221;
                }
                case 113: {
                    goto lab_0x402221;
                }
                case 114: {
                    goto lab_0x402221;
                }
                case 115: {
                    goto lab_0x402221;
                }
                case 116: {
                    goto lab_0x402221;
                }
                case 117: {
                    goto lab_0x402221;
                }
                case 118: {
                    goto lab_0x402221;
                }
                case 119: {
                    goto lab_0x402221;
                }
                case 120: {
                    goto lab_0x402221;
                }
                case 121: {
                    goto lab_0x402221;
                }
                case 122: {
                    goto lab_0x402221;
                }
                case 123: {
                    goto lab_0x4021c5;
                }
                case 124: {
                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4021c5;
                }
                case 126: {
                    goto lab_0x4021ed;
                }
                default: {
                    goto lab_0x4025c5;
                }
            }
        }
      lab_0x4025c5:
        if (v23 != 1) {
            // 0x402930
            ps = 0;
            int64_t len = v15; // 0x402940
            if (v15 == -1) {
                // 0x402942
                len = strlen((char *)str);
            }
            // 0x40296e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4029cf:
                // 0x4029cf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4029d4
                int64_t v30 = v29 + str;
                v24 = function_4051c0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402f4a_2;
                    }
                    case -1: {
                        goto lab_0x402f4a_2;
                    }
                    case -2: {
                        // 0x40302d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403067
                            v19 = v18;
                            int64_t v31 = v18; // 0x40306a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403077
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403070
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402f4a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402f4a_2;
                    }
                    case 1: {
                        goto lab_0x4029a0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402a4c
                        char v34 = *(char *)v33; // 0x402a5d
                        unsigned char v35; // 0x402077
                        if (v34 < 125) {
                            // 0x402a68
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402a7f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402020(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402a50
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402a5d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402a68
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402a7f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402020(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402a50
                            v33++;
                        }
                        goto lab_0x4029a0;
                    }
                }
            }
            goto lab_0x402f4a_2;
        } else {
            // 0x402614
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402221;
        }
    }
  lab_0x402848:
    // 0x402848
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40314a
        if (v8 > result) {
            // 0x403153
            *(char *)(v12 + result) = 0;
        }
        // 0x402477
        return result;
    }
    return function_402020(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402221:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402230
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40243a_2;
        }
    }
    int64_t v39 = result; // 0x402331
    char v40 = v20; // 0x402331
    int64_t v41 = v38; // 0x402331
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402331
    int64_t v43 = v36; // 0x402331
    goto lab_0x4022ad;
  lab_0x40243a_2:
    // 0x402477
    return function_402020(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402f4a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402221;
    } else {
        uint64_t v49 = v46 + v5; // 0x402b1e
        int64_t v50 = v5 + 1; // 0x402c01
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402c08
        char v52 = v20; // 0x402c08
        int64_t v53 = result; // 0x402c08
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402bd1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402bd5
            int64_t v56 = v54 + 1; // 0x402bda
            int64_t v57 = v51 + 1; // 0x402c01
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402bcc
                v54 = v56;
                if (v47 > v54) {
                    // 0x402bd1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402bd5
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
        goto lab_0x4022ad;
    }
  lab_0x4029a0:
    // 0x4029a0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4029bf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4029c2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402f4a
        goto lab_0x402f4a_2;
    }
    goto lab_0x4029cf;
  lab_0x4021ed:
    // 0x4021ed
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40243a_2;
    }
    goto lab_0x402221;
  lab_0x4021c5:;
    bool v60 = v15 == 1; // 0x4021d0
    if (v15 == -1) {
        // 0x4021d2
        v60 = *(char *)v1 == 0;
    }
    // 0x4021de
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402221;
    } else {
        goto lab_0x4021ed;
    }
  lab_0x4022ad:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4022b2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4022b6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4020c8_2;
}
// Address range: 0x403250 - 0x4033ee
int64_t function_403250(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403252
    int32_t * v3 = __errno_location(); // 0x40326c
    int64_t v4 = (int64_t)g22; // 0x403271
    int32_t v5 = *v3; // 0x40327b
    int64_t v6 = v4; // 0x403291
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4033e9
            function_4042b0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4032a0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4032a7
        int64_t v9; // 0x403250
        if (g22 == &g23) {
            int64_t v10 = function_4040c0(0, v8); // 0x4033ca
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x4033cf
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4040c0(v4, v8); // 0x4032bb
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x4032ca
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x4032ca
        int32_t v14 = v7; // 0x4032d1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403301
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40330b
    int64_t * v17 = (int64_t *)v15; // 0x40330e
    uint64_t v18 = *v17; // 0x40330e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403311
    int64_t result = *v19; // 0x403311
    int64_t v20; // 0x403250
    uint64_t v21 = function_402020(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403334
    if (v18 > v21) {
        // 0x4033ab
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403347
    *v17 = v22;
    if (result != (int64_t)&g39) {
        // 0x403357
        free((int64_t *)result);
    }
    int64_t result2 = function_404060(v22); // 0x403371
    *v19 = result2;
    int64_t v23; // 0x403250
    function_402020(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4033ab
    *v3 = v5;
    return result2;
}
// Address range: 0x4033f0 - 0x403424
int64_t function_4033f0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4033f7
    int64_t result = function_404260(a1 == 0 ? (int64_t)&g40 : a1, 56); // 0x403416
    return result;
}
// Address range: 0x403430 - 0x40343f
int64_t function_403430(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g40 : a1); // 0x40343c
    return result;
}
// Address range: 0x403440 - 0x40344f
int64_t function_403440(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x403448
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g40;
}
// Address range: 0x403450 - 0x403483
int64_t function_403450(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 + 8 : a1 + 8; // 0x403469
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40346e
    uint32_t v3 = *v2; // 0x40346e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403472
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403490 - 0x4034a3
int64_t function_403490(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g40 + 4 : a1 + 4); // 0x40349c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4034b0 - 0x4034db
int64_t function_4034b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x4034b8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4034d5
        abort();
        // UNREACHABLE
    }
    // 0x4034cc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g40;
}
// Address range: 0x4034e0 - 0x403552
int64_t function_4034e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g40 : a5; // 0x403502
    int32_t * v2 = __errno_location(); // 0x40350b
    uint32_t v3 = *(int32_t *)v1; // 0x40352b
    int64_t result = function_402020(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40353a
    return result;
}
// Address range: 0x403560 - 0x403641
int64_t function_403560(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g40 : a4; // 0x403582
    int32_t * v2 = __errno_location(); // 0x403588
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4035a7
    int32_t * v4 = (int32_t *)v1; // 0x4035aa
    int64_t v5 = function_402020(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4035c5
    int64_t v6 = v5 + 1; // 0x4035ca
    int64_t result = function_404060(v6); // 0x4035df
    function_402020(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403624
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40362d
    return result;
}
// Address range: 0x403650 - 0x40365a
int64_t function_403650(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403650
    return function_403560(a1, a2, 0, a3);
}
// Address range: 0x403660 - 0x4036f5
int64_t function_403660(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403660
    int64_t v2 = v1; // 0x403660
    int64_t v3 = v2; // 0x403674
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403693
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403690
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x4036ad
    if (g23 != 0x6092a0) {
        // 0x4036af
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g39;
        v6 = &g50;
    }
    int64_t result = v6; // 0x4036d1
    if (g22 != &g23) {
        // 0x4036d3
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g50;
    }
    // 0x4036e6
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x403700 - 0x403711
int64_t function_403700(void) {
    // 0x403700
    int64_t v1; // 0x403700
    return function_403250(v1, v1, -1, (int64_t *)&g40);
}
// Address range: 0x403720 - 0x40372a
int64_t function_403720(void) {
    // 0x403720
    int64_t v1; // 0x403720
    return function_403250(v1, v1, v1, (int64_t *)&g40);
}
// Address range: 0x403730 - 0x403746
int64_t function_403730(int64_t a1) {
    // 0x403730
    return function_403250(0, a1, -1, (int64_t *)&g40);
}
// Address range: 0x403750 - 0x403762
int64_t function_403750(int64_t a1, int64_t a2) {
    // 0x403750
    return function_403250(0, a1, a2, (int64_t *)&g40);
}
// Address range: 0x403770 - 0x4037d8
int64_t function_403770(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403780
    return function_403250((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4037e0 - 0x403844
int64_t function_4037e0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4037f0
    return function_403250((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403850 - 0x40385c
int64_t function_403850(int64_t a1, int64_t a2) {
    // 0x403850
    return function_403770(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403860 - 0x40386f
int64_t function_403860(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403860
    return function_4037e0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403870 - 0x4038e0
int64_t function_403870(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x40387d
    int128_t v2 = __asm_movdqa(g41); // 0x403885
    int128_t v3 = __asm_movdqa(g42); // 0x40388d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4038a2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4038b8
    uint32_t v6 = *v5; // 0x4038b8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4038bd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403250(0, a1, a2, &v4);
}
// Address range: 0x4038e0 - 0x4038ed
int64_t function_4038e0(int64_t a1, int64_t a2) {
    // 0x4038e0
    return function_403870(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4038f0 - 0x403901
int64_t function_4038f0(int64_t a1) {
    // 0x4038f0
    return function_403870(a1, -1, 58);
}
// Address range: 0x403910 - 0x40391a
int64_t function_403910(void) {
    // 0x403910
    int64_t v1; // 0x403910
    return function_403870(v1, v1, 58);
}
// Address range: 0x403920 - 0x40398e
int64_t function_403920(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40393a
    return function_403250(a1, a3, -1, &v1);
}
// Address range: 0x403990 - 0x4039fc
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x403997
    int128_t v2 = __asm_movdqa(g41); // 0x40399f
    int128_t v3 = __asm_movdqa(g42); // 0x4039a7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4039c9
    if (a2 == 0 || a3 == 0) {
        // 0x4039f7
        abort();
        // UNREACHABLE
    }
    // 0x4039da
    return function_403250(a1, a4, a5, &v4);
}
// Address range: 0x403a00 - 0x403a09
int64_t function_403a00(void) {
    // 0x403a00
    int64_t v1; // 0x403a00
    return function_403990(v1, v1, v1, v1, -1);
}
// Address range: 0x403a10 - 0x403a27
int64_t function_403a10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a10
    return function_403990(0, a1, a2, a3, -1);
}
// Address range: 0x403a30 - 0x403a43
int64_t function_403a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403a30
    return function_403990(0, a1, a2, a3, a4);
}
// Address range: 0x403a50 - 0x403a5a
int64_t function_403a50(void) {
    // 0x403a50
    int64_t v1; // 0x403a50
    return function_403250(v1, v1, v1, &g21);
}
// Address range: 0x403a60 - 0x403a72
int64_t function_403a60(int64_t a1, int64_t a2) {
    // 0x403a60
    return function_403250(0, a1, a2, &g21);
}
// Address range: 0x403a80 - 0x403a91
int64_t function_403a80(void) {
    // 0x403a80
    int64_t v1; // 0x403a80
    return function_403250(v1, v1, -1, &g21);
}
// Address range: 0x403aa0 - 0x403ab6
int64_t function_403aa0(int64_t a1) {
    // 0x403aa0
    return function_403250(0, a1, -1, &g21);
}
// Address range: 0x403ac0 - 0x403e9d
int64_t function_403ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403b58
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403adc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403af6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403b3b
    if (a6 < 10) {
        // 0x403b4a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403c42
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403ea0 - 0x403ec0
int64_t function_403ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403ea0
    if (a5 == 0) {
        // 0x403ebb
        return function_403ac0(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x403ea7
    v1++;
    int64_t v2 = v1; // 0x403eb9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403eb0
        v1++;
        v2 = v1;
    }
    // 0x403ebb
    return function_403ac0(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x403ec0 - 0x403f20
int64_t function_403ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x403ec0
    int64_t v4 = &v3; // 0x403ec0
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x403ef3
    int64_t v7; // 0x403edd
    int64_t * v8; // 0x403efb
    int64_t v9; // 0x403efb
    int64_t v10; // 0x403f07
    if (v6 < 48) {
        // 0x403ed0
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x403f13
            break;
        }
    } else {
        // 0x403efb
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x403f13
            break;
        }
    }
    int64_t v11 = 10; // 0x403ef1
    while (v5 != 9) {
        // 0x403ee9
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x403ed0
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x403f13
                break;
            }
        } else {
            // 0x403efb
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x403f13
                break;
            }
        }
        // 0x403ee9
        v11 = 10;
    }
    // 0x403f13
    return function_403ac0(a1, a2, a3, a4, v4, v11, (int64_t)&g50);
}
// Address range: 0x403f20 - 0x403fdc
int64_t function_403f20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403f20
    int64_t v1; // bp-168, 0x403f20
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403f20
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403f20
    int64_t v8; // 0x403f20
    int64_t v9; // bp-56, 0x403f20
    int64_t v10; // 0x403f85
    int64_t v11; // 0x403fa9
    if ((int32_t)v6 < 48) {
        // 0x403f70
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403fc0
            break;
        }
    } else {
        // 0x403fa2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403fc0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403f9a
    int64_t v13 = 10; // 0x403f9a
    while (v5 != 9) {
        // 0x403f9c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403f70
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403fc0
                break;
            }
        } else {
            // 0x403fa2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403fc0
                break;
            }
        }
        // 0x403f92
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403fc0
    int64_t v14; // bp-136, 0x403f20
    int64_t result = function_403ac0(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x403fcf
    return result;
}
// Address range: 0x403fe0 - 0x404054
int64_t function_403fe0(int64_t a1) {
    // 0x403fe0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404043
    return fputs_unlocked(v1, g30);
}
// Address range: 0x404060 - 0x40407a
int64_t function_404060(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404064
    if (size != 0 != (mem == NULL)) {
        // 0x404073
        return (int64_t)mem;
    }
    // 0x404075
    function_4042b0(size);
    // UNREACHABLE
}
// Address range: 0x404080 - 0x4040a1
int64_t function_404080(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404083
    int64_t v2 = v1; // 0x404083
    if (v2 < 0) {
        // 0x40409b
        function_4042b0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404099
        return function_404060(v2);
    }
    // 0x40409b
    function_4042b0(v2);
    // UNREACHABLE
}
// Address range: 0x4040b0 - 0x4040b2
int64_t function_4040b0(void) {
    // 0x4040b0
    int64_t v1; // 0x4040b0
    return function_404060(v1);
}
// Address range: 0x4040c0 - 0x4040f6
int64_t function_4040c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4040e8
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4040d1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4040e0
        return (int64_t)mem;
    }
    // 0x4040f1
    function_4042b0(a1);
    // UNREACHABLE
}
// Address range: 0x404100 - 0x404121
int64_t function_404100(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404103
    int64_t v2 = v1; // 0x404103
    if (v2 < 0) {
        // 0x40411b
        function_4042b0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404119
        return function_4040c0(a1, v2);
    }
    // 0x40411b
    function_4042b0(a1);
    // UNREACHABLE
}
// Address range: 0x404130 - 0x4041b6
int64_t function_404130(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40418b
            function_4042b0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4040c0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404173
    if (a2 == 0) {
        // 0x404198
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404178
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40418b
        function_4042b0(a1);
        // UNREACHABLE
    }
    // 0x40415a
    *(int64_t *)a2 = v2;
    return function_4040c0(a1, v2 * a3);
}
// Address range: 0x4041c0 - 0x404210
int64_t function_4041c0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4041c0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40420a
            function_4042b0(a1);
            // UNREACHABLE
        }
        // 0x4041e2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4040c0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4041f5
        *(int64_t *)a2 = 128;
        return function_4040c0(0, 128);
    }
    // 0x404208
    if (a2 < 0) {
        // 0x40420a
        function_4042b0(a1);
        // UNREACHABLE
    }
    // 0x4041e2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4040c0(a1, v1);
}
// Address range: 0x404210 - 0x404227
int64_t function_404210(int64_t a1, int64_t a2) {
    // 0x404210
    return (int64_t)memset((int64_t *)function_404060(a1), 0, (int32_t)a1);
}
// Address range: 0x404230 - 0x40425e
int64_t function_404230(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404237
    if ((int64_t)v1 < 0) {
        // 0x404259
        function_4042b0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404259
        function_4042b0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40424a
    if (mem != NULL) {
        // 0x404254
        return (int64_t)mem;
    }
    // 0x404259
    function_4042b0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404260 - 0x404288
int64_t function_404260(int64_t a1, int64_t a2) {
    int64_t v1 = function_404060(a2); // 0x40426f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404290 - 0x4042a3
int64_t function_404290(int64_t str) {
    // 0x404290
    return function_404260(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4042b0 - 0x4042e1
int64_t function_4042b0(int64_t a1) {
    // 0x4042b0
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4042f0 - 0x404343
int64_t function_4042f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4042f0
    int64_t v1; // 0x4042f0
    int64_t v2 = function_405350(a1, a2, a3, v1); // bp-24, 0x4042fa
    int32_t * v3 = __errno_location(); // 0x404303
    *v3 = 0;
    int64_t v4 = function_405240(&v2, 0); // 0x404323
    int64_t result = v4; // 0x40432a
    while ((int32_t)v4 != 0) {
        // 0x404310
        result = 0xffffffff;
        if ((*v3 & -5) != 0) {
            // break -> 0x40432c
            break;
        }
        *v3 = 0;
        v4 = function_405240(&v2, 0);
        result = v4;
    }
    // 0x40432c
    return result;
}
// Address range: 0x404350 - 0x4043ec
int64_t function_404350(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x404368
    *v1 = 0;
    char * v2; // 0x404350
    int64_t v3 = (int64_t)v2; // 0x404381
    int64_t result = 0; // 0x404389
    int128_t v4; // 0x404350
    if (v3 != a1) {
        int64_t v5; // 0x404350
        if (a2 == NULL) {
            char v6 = *v2; // 0x4043ca
            if (v6 != 0) {
                // 0x4043b2
                *a3 = __asm_movsd_1(v4);
                return 0;
            }
            unsigned char v7 = llvm_ctpop_i8(v6); // 0x4043ca
            __asm_ucomisd(v4, 0);
            v5 = 0;
            if (v7 % 2 != 0) {
                // 0x4043b2
                *a3 = __asm_movsd_1(v4);
                return 1;
            }
        } else {
            unsigned char v8 = llvm_ctpop_i8((char)(int64_t)a2); // 0x40438b
            __asm_ucomisd(v4, 0);
            v5 = v8 % 2 == 0 ? (int64_t)v1 & -256 : 0;
        }
        // 0x4043a1
        result = v5 | (int64_t)(*v1 != 34);
    }
    // 0x4043a9
    if (a2 != NULL) {
        // 0x4043ae
        *a2 = v3;
    }
    // 0x4043b2
    *a3 = __asm_movsd_1(v4);
    return result;
}
// Address range: 0x4043f0 - 0x4044cf
int64_t function_4043f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4043fc
    uint32_t v2 = *v1; // 0x4043fc
    int64_t v3 = a2 & 0xffffffff; // 0x404401
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404404
    uint64_t v5 = (int64_t)*v4; // 0x404404
    int64_t v6; // 0x404472
    if (v3 <= v5) {
      lab_0x40446c_2:
        // 0x40446c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4043f2
    int64_t v8 = v2; // 0x4043f0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40446c
        goto lab_0x40446c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404428
    int64_t v17; // 0x404436
    int64_t * v18; // 0x404450
    int64_t * v19; // 0x404453
    int64_t v20; // 0x40445e
    int64_t v21; // 0x404436
    while ((v16 & 0xffffffff) > v10) {
        // 0x404433
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404450
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404467
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40446c
            goto lab_0x40446c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40446c
            goto lab_0x40446c_2;
        }
        // 0x404422
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4044ab
    int64_t * v23 = (int64_t *)v22; // 0x4044b0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4044b3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4044b0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4044c7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40441d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40446c
            goto lab_0x40446c_2;
        }
        // 0x404422
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404433
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404450
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404467
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40446c
                goto lab_0x40446c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40446c
                goto lab_0x40446c_2;
            }
            // 0x404422
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404490
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4044b0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4044c7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40446c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4044d0 - 0x404aec
int64_t function_4044d0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4044ef
    int64_t v2 = *v1; // 0x4044ef
    char * str2 = (char *)v2; // 0x4044fc
    char c = *str2; // 0x4044fc
    int64_t v3 = v2; // 0x404528
    int64_t v4 = 0; // 0x4044d0
    int32_t v5; // 0x4044d0
    int64_t v6; // 0x4044d0
    int64_t v7; // 0x4044d0
    int64_t v8; // 0x4044d0
    int64_t v9; // 0x4044d0
    int64_t v10; // 0x4044d0
    int64_t v11; // 0x4044d0
    int64_t v12; // 0x4044d0
    int64_t v13; // 0x4044d0
    int64_t str3; // 0x4044d0
    int64_t v14; // 0x4044d0
    int64_t v15; // 0x4044d0
    int64_t v16; // 0x4044d0
    int64_t v17; // 0x4044d0
    int32_t v18; // 0x4044d0
    int32_t v19; // 0x4044d0
    int32_t v20; // 0x4044d0
    int32_t v21; // 0x4044d0
    int32_t v22; // 0x4044d0
    int32_t v23; // 0x4044d0
    int32_t v24; // 0x4044d0
    int32_t v25; // 0x4044d0
    int32_t v26; // 0x4044d0
    int32_t v27; // 0x4044d0
    int32_t v28; // 0x4044d0
    int32_t v29; // 0x4044d0
    int64_t nmemb; // 0x4044d0
    int64_t v30; // 0x4044d0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40452c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404528
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404538
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40453e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404508
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40456c
                int64_t v34; // 0x4044d0
                int64_t v35; // 0x4044d0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404575
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4046f0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404586
                int64_t v37 = *(int64_t *)v36; // 0x40458a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404560
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404575
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4046f0;
                        }
                    }
                    // 0x404586
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
                  lab_0x4045d6:
                    // 0x4045d6
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
                        goto lab_0x404630;
                    } else {
                        if (v11 == 0) {
                            // 0x4047a0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404630;
                        } else {
                            if (v39 == 0) {
                                // 0x404750
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4045fa;
                                } else {
                                    // 0x40475c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4045fa;
                                    } else {
                                        // 0x40476a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4045fa;
                                        } else {
                                            goto lab_0x404630;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4045fa;
                            }
                        }
                    }
                }
              lab_0x404641:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404816
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4049c2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x4049e2
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404a2f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x404a49
                            int64_t v45; // 0x404a4b
                            if (*(char *)v42 != 0) {
                                // 0x404a4b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404a43
                            while (v17 + nmemb != v42) {
                                // 0x404a45
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404a4b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x404a38
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404a70
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404824
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40497f
                        free((int64_t *)v17);
                    }
                    // 0x404879
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404890
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40473e
                    return 63;
                }
                // 0x404660
                v5 = v39;
                if (v13 != 0) {
                    // 0x4046e4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4046f0:;
                    int32_t * v49 = (int32_t *)a7; // 0x404700
                    uint32_t v50 = *v49; // 0x404700
                    int64_t v51 = v50; // 0x404700
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40470a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404713
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40493f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4048ea
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40473e
                            return 63;
                        }
                        // 0x404788
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404a9f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40499d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4049b0
                                // 0x40473e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4048ae
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4048c2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40472b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40472e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404732
                    int64_t result = v59; // 0x404738
                    if (v58 != 0) {
                        // 0x40473a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40473e
                    return result;
                }
            } else {
                // 0x40453e
                v5 = v32;
            }
            // break -> 0x404665
            break;
        }
    }
    // 0x404665
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40467d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404687
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40473e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4047c9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4046b6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4046c6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404630:
    // 0x404630
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404630
    int64_t v63 = *(int64_t *)v62; // 0x404634
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404641
        goto lab_0x404641;
    }
    goto lab_0x4045d6;
  lab_0x4045fa:
    // 0x4045fa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4044d0
    int32_t v65; // 0x4044d0
    int32_t v66; // 0x4044d0
    if (v27 != 0) {
        goto lab_0x404630;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4047b0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404630;
            } else {
                goto lab_0x404621;
            }
        } else {
            // 0x404615
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40490c
                int64_t v67 = (int64_t)mem; // 0x40490c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404630;
                } else {
                    // 0x40491f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404621;
                }
            } else {
                goto lab_0x404621;
            }
        }
    }
  lab_0x404621:
    // 0x404621
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404630;
}
// Address range: 0x404af0 - 0x4050b6
int64_t function_404af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404b11
    if (v3 < 1) {
        // 0x404cce
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404b0d
    int32_t v5 = *(int32_t *)a7; // 0x404b19
    uint64_t v6 = a1 & 0xffffffff; // 0x404b1b
    int64_t v7 = v2; // 0x404b20
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404b23
    *v8 = 0;
    int64_t v9; // 0x404af0
    int64_t v10; // 0x404af0
    int64_t v11; // 0x404af0
    int64_t v12; // 0x404af0
    int64_t str; // 0x404af0
    int64_t v13; // 0x404af0
    int64_t v14; // 0x404af0
    int64_t v15; // 0x404af0
    int64_t v16; // 0x404af0
    int64_t v17; // 0x404af0
    int32_t v18; // 0x404af0
    char v19; // 0x404af0
    if (v5 == 0) {
        // 0x404d08
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404b3a;
    } else {
        // 0x404b33
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404b80
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404b83
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404c48;
            } else {
                int64_t v22 = v7 + 1; // 0x404b96
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404ba6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404c5c;
                } else {
                    goto lab_0x404bb8;
                }
            }
        } else {
            goto lab_0x404b3a;
        }
    }
  lab_0x404b3a:
    // 0x404b3a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404b40
    *v24 = 0;
    int64_t v25; // 0x404af0
    int64_t v26; // 0x404af0
    int64_t v27; // 0x404af0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404c30
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404c3d;
        }
        case 43: {
            // 0x404f40
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404c3d;
        }
        default: {
            // 0x404b5c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404ebf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404fd8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404c3d;
                } else {
                    // 0x404ecd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404b6a;
                }
            } else {
                goto lab_0x404b6a;
            }
        }
    }
  lab_0x404c48:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404c4f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404bb8;
    } else {
        goto lab_0x404c5c;
    }
  lab_0x404b6a:
    // 0x404b6a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404c3d;
  lab_0x404c3d:
    // 0x404c3d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404c48;
  lab_0x404bb8:;
    uint32_t v30 = *(int32_t *)a7; // 0x404bb8
    int64_t v31 = v30; // 0x404bb8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404bba
    if ((int64_t)*v32 > v31) {
        // 0x404bbf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404bc2
    if (*v33 > v30) {
        // 0x404bc7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404bca
    int64_t v35 = v31; // 0x404bce
    int64_t v36 = v15; // 0x404bce
    int64_t v37; // 0x404af0
    int64_t v38; // 0x404af0
    int64_t v39; // 0x404af0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404d38
        int64_t v41 = v40; // 0x404d38
        v2 = v41;
        int64_t v42; // 0x404af0
        if (*v33 == v40) {
            // 0x404f20
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404f28
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404d44
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404d48
                function_4043f0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404d58
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404d61
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404d6a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404d81
            int64_t v47 = v45 & 0xffffffff; // 0x404d85
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404d8e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404d94
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404d96;
                }
            }
            int64_t v48 = v47 + 1; // 0x404d70
            int64_t v49 = v48 & 0xffffffff; // 0x404d70
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404d81
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404d8e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404d94
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404d96;
                    }
                }
                // 0x404d70
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404f38
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404d96;
    } else {
        goto lab_0x404bd4;
    }
  lab_0x404c5c:
    // 0x404c5c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404c5f
    int64_t v51 = v12; // 0x404c5f
    int64_t v52 = v14; // 0x404c5f
    if (*(char *)v10 == 0) {
        goto lab_0x404bb8;
    } else {
        goto lab_0x404c65;
    }
  lab_0x404bd4:;
    int32_t v53 = v35; // 0x404bd4
    int64_t v54; // 0x404af0
    int64_t v55; // 0x404af0
    int64_t v56; // 0x404af0
    int64_t v57; // 0x404af0
    int64_t v58; // 0x404af0
    int64_t v59; // 0x404af0
    char * v60; // 0x404af0
    int64_t v61; // 0x404af0
    int64_t v62; // 0x404be9
    int64_t v63; // 0x404af0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404d23
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404d26;
    } else {
        // 0x404bdc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404af0
        int64_t v66 = v65 ? -1 : 1; // 0x404bf0
        int64_t v67 = (int64_t)"--"; // 0x404af0
        int64_t v68 = v62; // 0x404af0
        int64_t v69 = 3; // 0x404bf0
        unsigned char v70 = *(char *)v68; // 0x404bf0
        char v71 = *(char *)v67; // 0x404bf0
        char v72 = v71; // 0x404bf0
        bool v73 = false; // 0x404bf0
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
            // 0x404ce0
            if (*(char *)v62 == 45) {
                // 0x404da0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404da0
                if (c == 0) {
                    goto lab_0x404cea;
                } else {
                    // 0x404dad
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404e30;
                    } else {
                        if (c == 45) {
                            // 0x405013
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404e85;
                        } else {
                            // 0x404dbe
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404e30;
                            } else {
                                // 0x404dc3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404de4;
                                } else {
                                    // 0x404dca
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404e30;
                                    } else {
                                        goto lab_0x404de4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404cea;
            }
        } else {
            uint32_t v75 = *v33; // 0x404c00
            v2 = v75;
            int32_t v76 = *v32; // 0x404c03
            int64_t v77 = v35 + 1; // 0x404c06
            int32_t v78 = v77; // 0x404c09
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404f70
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404c17
                    function_4043f0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404c25
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404d26;
        }
    }
  lab_0x404c65:;
    // 0x404c65
    int64_t v79; // bp-104, 0x404af0
    int64_t v80 = &v79; // 0x404afa
    int64_t v81 = v50 + 1; // 0x404c65
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404c6c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404c71
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404c75
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404c79
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404c81
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404c86
    int32_t c2 = v84; // 0x404c86
    char * found_char_pos = strchr(str2, c2); // 0x404c86
    int64_t v87 = *v82; // 0x404c8b
    v2 = v87;
    int64_t v88 = *v85; // 0x404c95
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404ca0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404f90
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404f5d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404cce
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404c86
    char v91 = *(char *)(v90 + 1); // 0x404cbb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404c75
        if (v91 != 58) {
            // 0x404cce
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404ee4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404fe8
                *v8 = 0;
            } else {
                // 0x404fcc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404f0e
            *v83 = 0;
            // 0x404cce
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404eee
        if (v93 != 0) {
            // 0x404f80
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404f0e
            *v83 = 0;
            // 0x404cce
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404f01
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404f0e
            *v83 = 0;
            // 0x404cce
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40504a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404ffa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405001
        // 0x404f0e
        *v83 = 0;
        // 0x404cce
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404e59
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404e5b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405080
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405031
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405038
            // 0x404cce
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404e66
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404e6a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404e85;
  lab_0x404d96:
    // 0x404d96
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404bd4;
  lab_0x404e85:;
    int64_t v99 = function_4044d0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404ea3
    // 0x404cce
    return v99 & 0xffffffff;
  lab_0x404d26:;
    int32_t v100 = v55; // 0x404d26
    if (v100 != (int32_t)v59) {
        // 0x404d2a
        *(int32_t *)a7 = v100;
    }
    // 0x404cce
    return 0xffffffff;
  lab_0x404cea:
    // 0x404cea
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404cf1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404cce
    return v99 & 0xffffffff;
  lab_0x404e30:
    // 0x404e30
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404c65;
  lab_0x404de4:
    // 0x404de4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4044d0(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404e0a
    if ((int32_t)v101 != -1) {
        // 0x404cce
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404e1f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404e30;
}
// Address range: 0x4050c0 - 0x405116
int64_t function_4050c0(int64_t a1) {
    // 0x4050c0
    *(int32_t *)&g43 = g28;
    *(int32_t *)&g44 = g27;
    int64_t v1; // 0x4050c0
    int64_t result = function_404af0(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x4050e6
    g28 = *(int32_t *)&g43;
    g48 = g46;
    *(int32_t *)&g26 = g45;
    return result;
}
// Address range: 0x405120 - 0x405138
int64_t function_405120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405120
    return function_4050c0(1);
}
// Address range: 0x405140 - 0x405153
int64_t function_405140(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x405140
    return function_4050c0(0);
}
// Address range: 0x405160 - 0x405175
int64_t function_405160(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405160
    return function_404af0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405180 - 0x405196
int64_t function_405180(void) {
    // 0x405180
    return function_4050c0(0);
}
// Address range: 0x4051a0 - 0x4051b8
int64_t function_4051a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4051a0
    return function_404af0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4051c0 - 0x40523a
int64_t function_4051c0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4051cb
    int64_t v2 = (int64_t)&g12; // 0x4051cb
    int32_t * pwc; // 0x4051c0
    int64_t v3; // 0x4051c0
    int64_t n; // 0x4051c0
    if (a2 == 0) {
        goto lab_0x405212;
    } else {
        // 0x4051cd
        if (a3 == 0) {
            // 0x4051f8
            return -2;
        }
        // 0x4051d9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405212;
        } else {
            goto lab_0x4051e4;
        }
    }
  lab_0x405212:
    // 0x405212
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4051c0
    pwc = (int32_t *)&v4;
    goto lab_0x4051e4;
  lab_0x4051e4:;
    char * wstr = (char *)v3; // 0x4051ea
    int64_t ps; // 0x4051c0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4051ea
    int64_t result = v5; // 0x4051ea
    if (v5 < 0xfffffffe) {
        // 0x4051f8
        return result;
    }
    int64_t result2 = result; // 0x405229
    if ((char)function_405410(0, v3) == 0) {
        // 0x40522b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4051f8
    return result2;
}
// Address range: 0x405240 - 0x4052e2
int64_t function_405240(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    if (*(int64_t *)(v1 + 8) >= 0x3b9aca00) {
        // 0x4052d0
        *__errno_location() = 22;
        // 0x4052c7
        return 0xffffffff;
    }
    int64_t v2 = a2;
    struct timespec * rmtp = (struct timespec *)v2;
    int64_t v3 = v1; // 0x405269
    int64_t v4 = v1; // 0x405269
    int64_t rqtp; // bp-40, 0x405240
    if (a1 <= (int64_t *)0x1fa400) {
      lab_0x4052b8:
        // 0x4052b8
        rqtp = v4;
        // 0x4052c7
        return nanosleep((struct timespec *)&rqtp, rmtp);
    }
    rqtp = 0x1fa400;
    v3 -= 0x1fa400;
    int32_t v5 = nanosleep((struct timespec *)&rqtp, rmtp); // 0x405297
    while (v5 == 0) {
        // 0x405270
        v4 = v3;
        if (v3 < 0x1fa401) {
            goto lab_0x4052b8;
        }
        rqtp = 0x1fa400;
        v3 -= 0x1fa400;
        v5 = nanosleep((struct timespec *)&rqtp, rmtp);
    }
    int64_t result = v5; // 0x405297
    if (a2 == 0) {
        // 0x4052c7
        return result;
    }
    // 0x4052a5
    *(int64_t *)v2 = v3 + v2;
    return result;
}
// Address range: 0x4052f0 - 0x40534d
int64_t function_4052f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4052f7
    int64_t v2; // 0x4052f0
    int64_t result = function_4059e0(a1, v2); // 0x405308
    if ((v2 & 32) != 0) {
        // 0x405330
        if ((int32_t)result == 0) {
            // 0x405334
            *__errno_location() = 0;
        }
        // 0x40532a
        return 0xffffffff;
    }
    // 0x405311
    if ((int32_t)result == 0) {
        // 0x40532a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405318
    if (v1 == 0) {
        // 0x40531a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40532a
    return result2;
}
// Address range: 0x405350 - 0x40540c
int64_t function_405350(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405350
    int128_t v1; // 0x405350
    __asm_comisd(v1, g13);
    bool v2; // 0x405350
    if (v2 || v2) {
        // 0x40536c
        return -0x8000000000000000;
    }
    int128_t v3 = __asm_movsd(0x43e0000000000000); // 0x40535e
    __asm_comisd(v3, v1);
    int64_t v4 = __asm_cvttsd2si(v1); // 0x405380
    __asm_pxor(v3, v3);
    int128_t v5 = __asm_cvtsi2sd(v4); // 0x40538b
    int128_t v6 = __asm_mulsd(__asm_subsd(v1, v5), 0x41cdcd6500000000); // 0x405394
    __asm_pxor(v5, v5);
    int64_t v7 = __asm_cvttsd2si(v6); // 0x4053a0
    __asm_comisd(v6, __asm_cvtsi2sd(v7));
    int64_t result = (v7 >> 63) + v4; // 0x4053d2
    if ((v7 >> 63 & -0x3b9aca00) + v7 < 0) {
        // 0x405400
        return result - 1;
    }
    // 0x40536c
    return result;
}
// Address range: 0x405410 - 0x40546e
int64_t function_405410(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405416
    if (locale == NULL) {
        // 0x405443
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405416
    bool v2; // 0x405410
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"C"; // 0x405410
    int64_t v5 = v1; // 0x405410
    int64_t v6 = 2; // 0x405435
    unsigned char v7 = *(char *)v5; // 0x405435
    char v8 = *(char *)v4; // 0x405435
    char v9 = v8; // 0x405435
    bool v10 = false; // 0x405435
    while (v7 == v8) {
        // 0x405428
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405441
    int64_t v13 = v1; // 0x405441
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405443
        return 0;
    }
    int64_t v14 = 6; // 0x405441
    unsigned char v15 = *(char *)v13; // 0x40545d
    char v16 = *(char *)v12; // 0x40545d
    char v17 = v16; // 0x40545d
    bool v18 = false; // 0x40545d
    while (v15 == v16) {
        // 0x405450
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
// Address range: 0x405470 - 0x4059d2
int64_t function_405470(void) {
    char * v1 = nl_langinfo(14); // 0x405486
    char * v2 = g47; // 0x40548b
    char * v3; // 0x405470
    int64_t v4; // 0x405470
    int64_t v5; // 0x405470
    int64_t v6; // 0x405470
    int64_t v7; // 0x405470
    int32_t size; // 0x405470
    int32_t size2; // 0x405470
    int32_t len; // 0x405542
    int64_t v8; // 0x405542
    char * env_val; // 0x40552d
    if (v2 == NULL) {
        // 0x405528
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405595;
        } else {
            // 0x40553a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405595;
            } else {
                // 0x40553f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40552d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4059c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405595;
                    } else {
                        // 0x405939
                        size2 = len + 14;
                        goto lab_0x40555b;
                    }
                } else {
                    goto lab_0x40555b;
                }
            }
        }
    } else {
        // 0x405470
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4054aa;
    }
  lab_0x4057dc:;
    // 0x4057dc
    struct _IO_FILE * stream; // 0x40561b
    int32_t v10 = __uflow(stream); // 0x4057df
    int64_t v11; // 0x405470
    int64_t v12 = v11; // 0x4057e9
    int64_t v13; // 0x405470
    int64_t v14 = v13; // 0x4057e9
    int32_t v15 = v10; // 0x4057e9
    int64_t v16; // 0x405470
    int64_t v17 = v16; // 0x4057e9
    int64_t v18 = v11; // 0x4057e9
    int64_t v19 = v13; // 0x4057e9
    int64_t v20 = v16; // 0x4057e9
    if (v10 == -1) {
        // break -> 0x4057ef
        goto lab_0x4057ef;
    }
    goto lab_0x405669;
  lab_0x40565e:;
    // 0x40565e
    int64_t v90; // 0x405470
    int64_t * v32; // 0x405650
    *v32 = v90 + 1;
    int64_t v89; // 0x405470
    v12 = v89;
    int64_t v91; // 0x405470
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405470
    v17 = v92;
    goto lab_0x405669;
  lab_0x405669:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405470
    int32_t v25; // bp-120, 0x405470
    int32_t v26; // bp-184, 0x405470
    int64_t v27; // 0x40561b
    int64_t v28; // 0x405638
    int64_t v29; // 0x40563d
    int64_t * v30; // 0x405654
    switch (c) {
        case 32: {
            goto lab_0x405650;
        }
        case 10: {
            goto lab_0x405650;
        }
        case 9: {
            goto lab_0x405650;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405841
            int32_t v33; // 0x405470
            char v34; // 0x405470
            int32_t v35; // 0x40584e
            if (v31 < *v30) {
                // 0x405820
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40584b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405841
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405820
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40584b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405830
                v36 = v33;
            }
            // 0x40591f
            if (v36 == -1) {
                // break -> 0x4057ef
                break;
            }
            goto lab_0x405650;
        }
        default: {
            // 0x40567f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4057ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4056a8
            int64_t v39 = v37 + 4; // 0x4056aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4056b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4056b8
            while (v41 == 0) {
                // 0x4056a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4056d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4056e2
            int64_t v45 = v43 + 4; // 0x4056e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4056f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4056f2
            while (v47 == 0) {
                // 0x4056e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4056df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405708
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405718
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40571c
            int64_t v52 = v51 + v48; // 0x405725
            int64_t * mem; // 0x405470
            int64_t v53; // 0x405470
            int64_t v54; // 0x405470
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40585b
                int64_t v56 = v55 + 3; // 0x405867
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405741
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405750
            if (mem == NULL) {
                // 0x40597c
                free((int64_t *)v21);
                function_4059e0(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x4055f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405768
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405772
            uint32_t v62 = (int32_t)v59; // 0x405775
            int64_t v63; // 0x405470
            if (v62 >= 8) {
                // 0x405884
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40589e
                int64_t v66 = v61 - v65; // 0x4058a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4058ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4058be
                    int64_t v70 = v69 & 0xffffffff; // 0x4058be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4058bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40594f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405787
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40578b
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
            int64_t v73 = v51 + 1; // 0x40579b
            int64_t v74 = v60 - 1; // 0x40579f
            uint32_t v75 = (int32_t)v73; // 0x4057a4
            int64_t v76; // 0x405470
            if (v75 >= 8) {
                // 0x4058d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4058dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4058ec
                int64_t v80 = v74 - v79; // 0x4058f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4058fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40590b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405909
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405966
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40596e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4057b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4057ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4059b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4057ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40565e;
            } else {
                goto lab_0x4057dc;
            }
        }
    }
  lab_0x405650:;
    int64_t v93 = v23; // 0x405470
    int64_t v94 = v22; // 0x405470
    int64_t v95 = v21; // 0x405470
    goto lab_0x405650_2;
  lab_0x405595:;
    int64_t * mem3 = malloc(size); // 0x405595
    int64_t v97 = (int64_t)&g12; // 0x4055a0
    int64_t v98; // 0x405470
    int64_t path; // 0x405470
    if (mem3 == NULL) {
        goto lab_0x405572;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405595
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4055b6;
    }
  lab_0x4054aa:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x40549d
    char v100 = *v3; // 0x4054aa
    int64_t v101; // 0x405470
    if (v100 == 0) {
        // 0x405504
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405470
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405470
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4054f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4054f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4054c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4054cd
        char v107 = *(char *)v106; // 0x4054d2
        v102 = v107;
        if (v107 == 0) {
            // 0x405504
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4054db
    v104 = v103 + 1;
  lab_0x4054f7:
    // 0x405504
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405572:;
    char * v108 = (char *)v97;
    g47 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4054aa;
  lab_0x4055b6:;
    int64_t v109 = v98 + path; // 0x4055b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4055e2
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405611
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405942
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405635
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405650_2:;
                uint64_t v96 = *v32; // 0x405650
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4057dc;
                } else {
                    goto lab_0x40565e;
                }
            }
          lab_0x4057ef:
            // 0x4057ef
            function_4059e0(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40580e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4055f4;
  lab_0x40555b:;
    int64_t * mem4 = malloc(size2); // 0x40555b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405601
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4055b6;
    } else {
        goto lab_0x405572;
    }
  lab_0x4055f4:
    // 0x4055f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405572;
}
// Address range: 0x4059e0 - 0x405a5b
int64_t function_4059e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4059e7
    if (fileno(stream) < 0) {
        // 0x405a47
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4059fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405a2b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405a47
            return fclose(stream);
        }
    }
    // 0x4059fc
    if ((int32_t)function_405a60(a1, v1) == 0) {
        // 0x405a47
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405a08
    int32_t v3 = *v2; // 0x405a10
    int64_t result = fclose(stream); // 0x405a1e
    if (v3 != 0) {
        // 0x405a50
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405a20
    return result;
}
// Address range: 0x405a60 - 0x405aa0
int64_t function_405a60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405a7a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405a7a
        return fflush(stream);
    }
    // 0x405a88
    function_405aa0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405aa0 - 0x405af7
int64_t function_405aa0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405aa0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405aaa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405adb
    int64_t result = -1; // 0x405ae4
    if (v1 != -1) {
        // 0x405ae6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405af2
    return result;
}
// Address range: 0x405b00 - 0x405b5d
int64_t function_405b00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405b00
    return function_4012b0();
}
// Address range: 0x405b60 - 0x405b61
int64_t function_405b60(void) {
    // 0x405b60
    int64_t result; // 0x405b60
    return result;
}
// Address range: 0x405b70 - 0x405b88
int64_t function_405b70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405b70
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x405b88 - 0x405ba8
int64_t function_405b88(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x405b92
    while (*(int64_t *)v1 != -1) {
        // 0x405b93
        v1 -= 8;
    }
    // 0x405ba4
    return result;
}
