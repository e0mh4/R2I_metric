#include "decompile_retdec.h"
// Address range: 0x4011f0 - 0x4011f5
int64_t function_4011f0(void) {
    // 0x4011f0
    abort();
    // UNREACHABLE
}
// Address range: 0x4011f5 - 0x4011fa
int64_t function_4011f5(void) {
    // 0x4011f5
    abort();
    // UNREACHABLE
}
// Address range: 0x4011fa - 0x4011ff
int64_t function_4011fa(void) {
    // 0x4011fa
    abort();
    // UNREACHABLE
}
// Address range: 0x4011ff - 0x401204
int64_t function_4011ff(void) {
    // 0x4011ff
    abort();
    // UNREACHABLE
}
// Address range: 0x401204 - 0x401209
int64_t function_401204(void) {
    // 0x401204
    abort();
    // UNREACHABLE
}
// Address range: 0x401210 - 0x401402
int64_t function_401210(int64_t a1, int64_t a2) {
    // 0x401210
    function_4015b0((char *)(a2 == 0 ? (int64_t)"bigram" : a2));
    setlocale(LC_ALL, (char *)&g2);
    bindtextdomain("findutils", "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("findutils");
    int64_t v1; // 0x401210
    if ((int32_t)function_4038b0(0x401510, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1) != 0) {
        // 0x4013c9
        error(1, *__errno_location(), dcgettext(NULL, "The atexit library function failed", 5));
    }
    int64_t v2 = 1026; // bp-48, 0x401270
    int64_t v3 = function_402fd0(1026); // bp-56, 0x401283
    int64_t v4 = function_402fd0(1026); // 0x401287
    *(char *)v4 = 0;
    int32_t v5 = __getdelim((char **)&v3, (int32_t *)&v2, 10, g21); // 0x4012ac
    int64_t v6 = v3;
    if (v5 < 1) {
        // 0x4013a0
        free((int64_t *)v6);
        free((int64_t *)v4);
        return (int32_t)&g35 ^ (int32_t)&g35;
    }
    *(char *)(v6 - 1 + (int64_t)v5) = 0;
    int64_t v7 = v3; // 0x4012c4
    char v8 = *(char *)v4; // 0x4012c8
    char v9 = *(char *)v7; // 0x4012cc
    int64_t v10 = v7; // 0x4012d1
    int64_t v11 = 0; // 0x4012d1
    char v12 = v9; // 0x4012d1
    int64_t v13; // 0x401210
    int64_t v14; // 0x4012f5
    int64_t v15; // 0x4012f9
    char v16; // 0x4012fd
    int64_t v17; // 0x401308
    if (v8 != 0 && v8 == v9) {
        v14 = v4 + 1;
        v15 = v10 + 1;
        v16 = *(char *)v14;
        v13 = v14;
        v10 = v15;
        while (!((v16 == 0 | *(char *)v15 != v16))) {
            // 0x4012f5
            v14 = v13 + 1;
            v15 = v10 + 1;
            v16 = *(char *)v14;
            v13 = v14;
            v10 = v15;
        }
        // 0x401305
        v17 = 0x100000000 * (v14 - v4) >> 32;
        v12 = *(char *)(v17 + v7);
        v11 = v17;
    }
    char v18 = v12;
    int64_t v19 = v7; // 0x401314
    int64_t v20; // 0x401210
    int64_t v21; // 0x401210
    int64_t v22; // 0x401210
    int64_t v23; // 0x401210
    char v24; // 0x401210
    int64_t v25; // 0x401210
    int64_t v26; // 0x401371
    char v27; // 0x401375
    int64_t v28; // 0x401330
    if (v18 != 0) {
        // 0x401316
        v25 = v11 + 1;
        v22 = v11;
        v24 = v18;
        v20 = v25;
        v19 = v7;
        if (*(char *)(v25 + v7) != 0) {
            v23 = v22;
            v21 = v23 + 2;
            _IO_putc((int32_t)v24, g20);
            _IO_putc((int32_t)*(char *)(v3 + v20), g20);
            _IO_putc(10, g20);
            v26 = v3;
            v27 = *(char *)(v26 + v21);
            v19 = v26;
            while (v27 != 0) {
                // 0x401330
                v28 = v23 + 3;
                v22 = v21;
                v24 = v27;
                v20 = v28;
                v19 = v26;
                if (*(char *)(v26 + v28) == 0) {
                    // break -> 0x40137e
                    break;
                }
                v23 = v22;
                v21 = v23 + 2;
                _IO_putc((int32_t)v24, g20);
                _IO_putc((int32_t)*(char *)(v3 + v20), g20);
                _IO_putc(10, g20);
                v26 = v3;
                v27 = *(char *)(v26 + v21);
                v19 = v26;
            }
        }
    }
    int64_t v29 = v19;
    int64_t v30 = v2; // 0x40137e
    v3 = v4;
    v2 = 1026;
    int32_t v31 = __getdelim((char **)&v3, (int32_t *)&v2, 10, g21); // 0x4012ac
    int64_t v32 = v3;
    int64_t v33 = v29; // 0x4012b3
    int64_t v34 = v32; // 0x4012b3
    while (v31 >= 1) {
        int64_t v35 = v29;
        int64_t v36 = v30;
        *(char *)(v32 - 1 + (int64_t)v31) = 0;
        v7 = v3;
        v8 = *(char *)v35;
        v9 = *(char *)v7;
        v13 = v35;
        v10 = v7;
        v11 = 0;
        v12 = v9;
        if (v8 != 0 && v8 == v9) {
            v14 = v13 + 1;
            v15 = v10 + 1;
            v16 = *(char *)v14;
            v13 = v14;
            v10 = v15;
            while (!((v16 == 0 | *(char *)v15 != v16))) {
                // 0x4012f5
                v14 = v13 + 1;
                v15 = v10 + 1;
                v16 = *(char *)v14;
                v13 = v14;
                v10 = v15;
            }
            // 0x401305
            v17 = 0x100000000 * (v14 - v35) >> 32;
            v12 = *(char *)(v17 + v7);
            v11 = v17;
        }
        // 0x401311
        v18 = v12;
        v19 = v7;
        if (v18 != 0) {
            // 0x401316
            v25 = v11 + 1;
            v22 = v11;
            v24 = v18;
            v20 = v25;
            v19 = v7;
            if (*(char *)(v25 + v7) != 0) {
                v23 = v22;
                v21 = v23 + 2;
                _IO_putc((int32_t)v24, g20);
                _IO_putc((int32_t)*(char *)(v3 + v20), g20);
                _IO_putc(10, g20);
                v26 = v3;
                v27 = *(char *)(v26 + v21);
                v19 = v26;
                while (v27 != 0) {
                    // 0x401330
                    v28 = v23 + 3;
                    v22 = v21;
                    v24 = v27;
                    v20 = v28;
                    v19 = v26;
                    if (*(char *)(v26 + v28) == 0) {
                        // break -> 0x40137e
                        break;
                    }
                    v23 = v22;
                    v21 = v23 + 2;
                    _IO_putc((int32_t)v24, g20);
                    _IO_putc((int32_t)*(char *)(v3 + v20), g20);
                    _IO_putc(10, g20);
                    v26 = v3;
                    v27 = *(char *)(v26 + v21);
                    v19 = v26;
                }
            }
        }
        // 0x40137e
        v29 = v19;
        v30 = v2;
        v3 = v35;
        v2 = v36;
        v31 = __getdelim((char **)&v3, (int32_t *)&v2, 10, g21);
        v32 = v3;
        v33 = v29;
        v34 = v32;
    }
    // 0x4013a0
    free((int64_t *)v34);
    free((int64_t *)v33);
    return (int32_t)&g35 ^ (int32_t)&g35;
}
// Address range: 0x401410 - 0x40143b
// Address range: 0x40143b - 0x40145a
int64_t function_40143b(void) {
    // 0x40143b
    return 0x6061d8;
}
// Address range: 0x40145a - 0x401491
int64_t function_40145a(void) {
    // 0x40145a
    return 0;
}
// Address range: 0x401491 - 0x4014e8
int64_t function_401491(void) {
    // 0x401491
    if (g24 != 0) {
        // 0x4014e7
        int64_t result; // 0x401491
        return result;
    }
    int64_t v1 = g25; // 0x4014c4
    int64_t result2; // 0x4014d6
    if (g25 >= ((int64_t)&g10 - (int64_t)&g9 >> 3) - 1) {
        // 0x4014d6
        result2 = function_40143b();
        g24 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g10 - (int64_t)&g9 >> 3) - 1) {
        // 0x4014c6
        v1++;
    }
    // 0x4014ba
    g25 = v1;
    // 0x4014d6
    result2 = function_40143b();
    g24 = 1;
    return result2;
}
// Address range: 0x4014e8 - 0x4014ed
int64_t function_4014e8(void) {
    // 0x4014e8
    return function_40145a();
}
// Address range: 0x4014f0 - 0x4014f8
int64_t function_4014f0(int64_t a1) {
    // 0x4014f0
    g27 = a1;
    int64_t result; // 0x4014f0
    return result;
}
// Address range: 0x401500 - 0x401508
int64_t function_401500(int64_t a1) {
    // 0x401500
    g26 = a1;
    int64_t result; // 0x401500
    return result;
}
// Address range: 0x401510 - 0x4015ae
int64_t function_401510(void) {
    // 0x401510
    int32_t * err_num; // 0x401526
    if ((int32_t)function_403260((int64_t)g20) == 0) {
        goto lab_0x40153c;
    } else {
        // 0x401526
        err_num = __errno_location();
        if (g26 == 0) {
            goto lab_0x401553;
        } else {
            // 0x401537
            if (*err_num != 32) {
                goto lab_0x401553;
            } else {
                goto lab_0x40153c;
            }
        }
    }
  lab_0x40153c:;
    int64_t result = function_403260((int64_t)g23); // 0x401543
    if ((int32_t)result == 0) {
        // 0x40154c
        return result;
    }
    // 0x40158e
    _exit(g13);
    // UNREACHABLE
  lab_0x401553:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40155f
    if (g27 == 0) {
        // 0x401599
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401573
        error(0, *err_num, "%s: %s", (char *)function_402e00((int64_t)g27), v1);
    }
    // 0x40158e
    _exit(g13);
    // UNREACHABLE
}
// Address range: 0x4015b0 - 0x401649
int64_t function_4015b0(char * str) {
    // 0x4015b0
    if (str == NULL) {
        // 0x401629
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g23);
        abort();
        // UNREACHABLE
    }
    int64_t v1 = (int64_t)str;
    char * found_char_pos = strrchr(str, 47); // 0x4015be
    int64_t result = (int64_t)found_char_pos; // 0x4015be
    if (found_char_pos == NULL) {
        // 0x401619
        g28 = v1;
        g22 = v1;
        return result;
    }
    int64_t v2 = result + 1; // 0x4015c8
    if (v2 - v1 < 7) {
        // 0x401619
        g28 = v1;
        g22 = v1;
        return result;
    }
    // 0x4015d8
    bool v3; // 0x4015b0
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = (int64_t)"/.libs/"; // 0x4015b0
    int64_t v6 = result - 6; // 0x4015b0
    int64_t v7 = 7; // 0x4015e6
    unsigned char v8 = *(char *)v6; // 0x4015e6
    char v9 = *(char *)v5; // 0x4015e6
    char v10 = v9; // 0x4015e6
    bool v11 = false; // 0x4015e6
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
    int64_t v13 = (int64_t)"lt-"; // 0x4015f0
    int64_t v14 = v2; // 0x4015f0
    int64_t v15 = 3; // 0x4015f0
    if ((v8 >= v12 && !v11) != v8 < v12) {
        // 0x401619
        g28 = v1;
        g22 = v1;
        return result;
    }
    unsigned char v16 = *(char *)v14; // 0x401602
    char v17 = *(char *)v13; // 0x401602
    char v18 = v17; // 0x401602
    bool v19 = false; // 0x401602
    while (v16 == v17) {
        // 0x4015f2
        v15--;
        v13 += v4;
        v14 += v4;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = v2; // 0x40160c
    if ((v16 >= v20 && !v19) == v16 < v20) {
        // 0x40160e
        v21 = result + 4;
        g19 = v21;
    }
    // 0x401619
    g28 = v21;
    g22 = v21;
    return result;
}
// Address range: 0x401650 - 0x401742
int64_t function_401650(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401664
    int64_t result = (int64_t)v1; // 0x401664
    if (result != a1) {
        // 0x401671
        return result;
    }
    int64_t v2 = function_4032d0(); // 0x401680
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401736
    if (v3 == 85) {
        // 0x401690
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401728
            result2 = (int32_t)a2 != 9 ? (int64_t)&g7 : (int64_t)&g1;
            return result2;
        }
        char v4 = *v1; // 0x4016be
        int64_t result3 = v4 != 96 ? (int64_t)&g3 : (int64_t)&g6; // 0x4016cb
        // 0x401671
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401728
        result2 = (int32_t)a2 != 9 ? (int64_t)&g7 : (int64_t)&g1;
        return result2;
    }
    char v5 = *v1; // 0x40170d
    int64_t result4 = v5 != 96 ? (int64_t)&g4 : (int64_t)&g5; // 0x40171a
    // 0x401671
    return result4;
}
// Address range: 0x401750 - 0x4017a9
int64_t function_401750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401750
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x40179a
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4017b0 - 0x402753
int64_t function_4017b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t str) {
    int64_t v1 = 0; // 0x4017ed
    int64_t v2 = 0; // 0x4017ed
    char v3; // 0x4017b0
    int64_t v4; // 0x4017b0
    int64_t v5; // 0x4017b0
    int64_t v6; // 0x4017b0
    int64_t v7; // 0x4017b0
    int64_t v8; // 0x4017b0
    int64_t v9; // 0x4017b0
    int64_t v10; // 0x4017b0
    int64_t v11; // 0x4017b0
    int64_t v12; // 0x4017b0
    int64_t v13; // 0x4017b0
    int64_t v14; // 0x4017b0
    int64_t v15; // 0x4017b0
    int64_t v16; // 0x4017b0
    int64_t v17; // 0x4017b0
    int64_t v18; // 0x4017b0
    int64_t v19; // 0x4017b0
    int64_t v20; // 0x4017b0
    int64_t v21; // 0x4017b0
    int64_t v22; // 0x4017b0
    int64_t v23; // 0x4017b0
    int64_t v24; // 0x4017b0
    int64_t v25; // 0x4017b0
    int64_t result; // 0x4017b0
    int64_t v26; // 0x4017b0
    int64_t v27; // 0x4017b0
    int64_t v28; // 0x4017b0
    int64_t ps; // bp+120, 0x4017b0
    char v29; // 0x401ee0
    int64_t v30; // 0x401ee0
    int32_t wc; // 0x4017b0
    int64_t v31; // 0x4017b0
    while (true) {
      lab_0x4017f0_2:
        // 0x4017f0
        v21 = v20;
        v15 = v14;
        v6 = v5;
        result = v1;
        int64_t v32 = v2; // 0x4017b0
        int64_t v33; // 0x401824
        while (true) {
          lab_0x4017f0:
            // 0x4017f0
            v13 = v32;
            bool v34 = v6 == v13; // 0x4017fb
            if (v6 == -1) {
                // 0x4017fd
                v34 = *(char *)(v13 + str) == 0;
            }
            // 0x40180b
            if (v34) {
                // break (via goto) -> 0x402200
                goto lab_0x402200;
            }
            // 0x401814
            v33 = v13 + str;
            v29 = *(char *)v33;
            v30 = v29;
            g34 = v30;
            v7 = v6;
            v19 = v15;
            v25 = v21;
            v4 = v6;
            v17 = v15;
            v23 = v21;
            switch (v29) {
                case 0: {
                    if (wc % 2 == 0) {
                        // 0x401ff1
                        v9 = v6;
                        v18 = v15;
                        v24 = v21;
                        v3 = 0;
                        v8 = v6;
                        v16 = v15;
                        v22 = v21;
                        if (v31 == 0) {
                            goto lab_0x401e62;
                        } else {
                            goto lab_0x401909;
                        }
                    }
                    // 0x402410
                    v32 = v13 + 1;
                    goto lab_0x4017f0;
                }
                case 7: {
                    goto lab_0x401bb8;
                }
                case 8: {
                    goto lab_0x401bb8;
                }
                case 9: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 10: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 11: {
                    goto lab_0x401bb8;
                }
                case 12: {
                    goto lab_0x401bb8;
                }
                case 13: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 32: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 33: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 34: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 35: {
                    goto lab_0x401ba1;
                }
                case 36: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 37: {
                    goto lab_0x401bb8;
                }
                case 38: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 39: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 40: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 41: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 42: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 43: {
                    goto lab_0x401bb8;
                }
                case 44: {
                    goto lab_0x401bb8;
                }
                case 45: {
                    goto lab_0x401bb8;
                }
                case 46: {
                    goto lab_0x401bb8;
                }
                case 47: {
                    goto lab_0x401bb8;
                }
                case 48: {
                    goto lab_0x401bb8;
                }
                case 49: {
                    goto lab_0x401bb8;
                }
                case 50: {
                    goto lab_0x401bb8;
                }
                case 51: {
                    goto lab_0x401bb8;
                }
                case 52: {
                    goto lab_0x401bb8;
                }
                case 53: {
                    goto lab_0x401bb8;
                }
                case 54: {
                    goto lab_0x401bb8;
                }
                case 55: {
                    goto lab_0x401bb8;
                }
                case 56: {
                    goto lab_0x401bb8;
                }
                case 57: {
                    goto lab_0x401bb8;
                }
                case 58: {
                    goto lab_0x401bb8;
                }
                case 59: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 60: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 61: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 62: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 63: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 65: {
                    goto lab_0x401bb8;
                }
                case 66: {
                    goto lab_0x401bb8;
                }
                case 67: {
                    goto lab_0x401bb8;
                }
                case 68: {
                    goto lab_0x401bb8;
                }
                case 69: {
                    goto lab_0x401bb8;
                }
                case 70: {
                    goto lab_0x401bb8;
                }
                case 71: {
                    goto lab_0x401bb8;
                }
                case 72: {
                    goto lab_0x401bb8;
                }
                case 73: {
                    goto lab_0x401bb8;
                }
                case 74: {
                    goto lab_0x401bb8;
                }
                case 75: {
                    goto lab_0x401bb8;
                }
                case 76: {
                    goto lab_0x401bb8;
                }
                case 77: {
                    goto lab_0x401bb8;
                }
                case 78: {
                    goto lab_0x401bb8;
                }
                case 79: {
                    goto lab_0x401bb8;
                }
                case 80: {
                    goto lab_0x401bb8;
                }
                case 81: {
                    goto lab_0x401bb8;
                }
                case 82: {
                    goto lab_0x401bb8;
                }
                case 83: {
                    goto lab_0x401bb8;
                }
                case 84: {
                    goto lab_0x401bb8;
                }
                case 85: {
                    goto lab_0x401bb8;
                }
                case 86: {
                    goto lab_0x401bb8;
                }
                case 87: {
                    goto lab_0x401bb8;
                }
                case 88: {
                    goto lab_0x401bb8;
                }
                case 89: {
                    goto lab_0x401bb8;
                }
                case 90: {
                    goto lab_0x401bb8;
                }
                case 91: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 92: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 93: {
                    goto lab_0x401bb8;
                }
                case 94: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 95: {
                    goto lab_0x401bb8;
                }
                case 96: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 97: {
                    goto lab_0x401bb8;
                }
                case 98: {
                    goto lab_0x401bb8;
                }
                case 99: {
                    goto lab_0x401bb8;
                }
                case 100: {
                    goto lab_0x401bb8;
                }
                case 101: {
                    goto lab_0x401bb8;
                }
                case 102: {
                    goto lab_0x401bb8;
                }
                case 103: {
                    goto lab_0x401bb8;
                }
                case 104: {
                    goto lab_0x401bb8;
                }
                case 105: {
                    goto lab_0x401bb8;
                }
                case 106: {
                    goto lab_0x401bb8;
                }
                case 107: {
                    goto lab_0x401bb8;
                }
                case 108: {
                    goto lab_0x401bb8;
                }
                case 109: {
                    goto lab_0x401bb8;
                }
                case 110: {
                    goto lab_0x401bb8;
                }
                case 111: {
                    goto lab_0x401bb8;
                }
                case 112: {
                    goto lab_0x401bb8;
                }
                case 113: {
                    goto lab_0x401bb8;
                }
                case 114: {
                    goto lab_0x401bb8;
                }
                case 115: {
                    goto lab_0x401bb8;
                }
                case 116: {
                    goto lab_0x401bb8;
                }
                case 117: {
                    goto lab_0x401bb8;
                }
                case 118: {
                    goto lab_0x401bb8;
                }
                case 119: {
                    goto lab_0x401bb8;
                }
                case 120: {
                    goto lab_0x401bb8;
                }
                case 121: {
                    goto lab_0x401bb8;
                }
                case 122: {
                    goto lab_0x401bb8;
                }
                case 123: {
                    goto lab_0x401b7d;
                }
                case 124: {
                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                }
                case 125: {
                    goto lab_0x401b7d;
                }
                case 126: {
                    goto lab_0x401ba1;
                }
                default: {
                    goto lab_0x401e7d;
                }
            }
        }
      lab_0x401e7d:
        if (v31 != 1) {
            // 0x402270
            ps = 0;
            int64_t len = v6; // 0x40227d
            if (v6 == -1) {
                // 0x40227f
                len = strlen((char *)str);
            }
            // 0x4022ab
            v10 = len;
            v26 = 0;
            while (true) {
              lab_0x402308:
                // 0x402308
                v27 = v26;
                uint64_t v35 = v27 + v13; // 0x40230d
                switch (str) {
                    case 0: {
                        goto lab_0x40261f;
                    }
                    case -1: {
                        // 0x4025e3
                        v11 = 0x100000000 * v10 >> 32;
                        goto lab_0x402610;
                    }
                    case -2: {
                        int64_t v36 = 0x100000000 * v10 >> 32; // 0x402653
                        v11 = v36;
                        if (v35 >= v36) {
                            goto lab_0x402610;
                        } else {
                            // 0x40268e
                            v11 = v36;
                            if (*(char *)(v35 - 2) != 0) {
                                int64_t v37 = 1; // 0x40269f
                                v28 = v37;
                                v12 = v36;
                                while (v36 > v37 + v13) {
                                    // 0x402698
                                    v28 = v37;
                                    v12 = v36;
                                    int64_t v38 = v37; // 0x40269d
                                    if (*(char *)(v37 + v33) == 0) {
                                        // break -> 0x402610
                                        break;
                                    }
                                    v37 = v38 + 1;
                                    v28 = v37;
                                    v12 = v36;
                                }
                                goto lab_0x402610_2;
                            } else {
                                goto lab_0x402610;
                            }
                        }
                    }
                    case 1: {
                        goto lab_0x4022e0;
                    }
                    default: {
                        int64_t v39; // 0x4017b0
                        char v40; // 0x40238d
                        unsigned char v41; // 0x4017b0
                        if (*(char *)v39 < 125) {
                            // 0x402398
                            v41 = (v40 + 37) % 64;
                            if (v41 != 0 != ((1 << (int64_t)v41 & 0x20000002b) == 0)) {
                                // 0x4023b2
                                v4 = 0x100000000 * v10 >> 32;
                                v17 = 0x100000000 * v15 >> 32;
                                v23 = 0x100000000 * v21 >> 32;
                                return function_401750(v23, v17, str, v4, 2, wc & -3);
                            }
                        }
                        int64_t v42 = v39 + 1; // 0x402380
                        v39 = v42;
                        // 0x402368
                        int64_t v43; // 0x402376
                        while (v43 != v42) {
                            // 0x40238d
                            v40 = *(char *)v39;
                            if (v40 < 125) {
                                // 0x402398
                                v41 = (v40 + 37) % 64;
                                if (v41 != 0 != ((1 << (int64_t)v41 & 0x20000002b) == 0)) {
                                    // 0x4023b2
                                    v4 = 0x100000000 * v10 >> 32;
                                    v17 = 0x100000000 * v15 >> 32;
                                    v23 = 0x100000000 * v21 >> 32;
                                    return function_401750(v23, v17, str, v4, 2, wc & -3);
                                }
                            }
                            // 0x402380
                            v42 = v39 + 1;
                            v39 = v42;
                        }
                        goto lab_0x4022e0;
                    }
                }
            }
          lab_0x40261f:
            // 0x40261f
            v11 = 0x100000000 * v10 >> 32;
            goto lab_0x402610;
        } else {
            // 0x401ec8
            __ctype_b_loc();
            v7 = 0x100000000000000 * v6 >> 56;
            v19 = v15;
            v25 = v21;
            goto lab_0x401bb8;
        }
    }
  lab_0x402200:
    // 0x402200
    v4 = v6;
    v17 = v15;
    v23 = v21;
    if (result != 0) {
        // 0x402255
        if (result < v15) {
            // 0x40225e
            *(char *)(v21 + result) = 0;
        }
        // 0x401f7c
        return result;
    }
    return function_401750(v23, v17, str, v4, 2, wc & -3);
  lab_0x401f42_2:
    // 0x401f7c
    return function_401750(v23, v17, str, v4, 2, wc & -3);
  lab_0x4022e0:
    // 0x4022e0
    iswprint(wc);
    int64_t v44 = v27 + str; // 0x4022f8
    int32_t v45 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4022fb
    v26 = v44;
    if (v45 != 0) {
        // 0x4026ba
        v28 = v44;
        v12 = 0x100000000 * v10 >> 32;
        goto lab_0x402610_2;
    }
    goto lab_0x402308;
  lab_0x401bb8:
    // 0x401bb8
    v9 = v7;
    v18 = v19;
    v24 = v25;
    v3 = v29;
    v8 = v7;
    v16 = v19;
    v22 = v25;
    if (v31 == 0) {
        goto lab_0x401e62;
    } else {
        goto lab_0x401909;
    }
  lab_0x401ba1:
    // 0x401ba1
    v7 = v6;
    v19 = v15;
    v25 = v21;
    v4 = v6;
    v17 = v15;
    v23 = v21;
    if (v13 == 0) {
        goto lab_0x401f42_2;
    }
    goto lab_0x401bb8;
  lab_0x401b7d:;
    bool v46 = v6 == 1; // 0x401b88
    if (v6 == -1) {
        // 0x401b8a
        v46 = *(char *)(str + 1) == 0;
    }
    // 0x401b96
    v7 = v6;
    v19 = v15;
    v25 = v21;
    if (!v46) {
        goto lab_0x401bb8;
    } else {
        goto lab_0x401ba1;
    }
  lab_0x402610:
    // 0x402610
    v7 = v11;
    v19 = 0x100000000 * v15 >> 32;
    v25 = 0x100000000 * v21 >> 32;
    goto lab_0x401bb8;
  lab_0x401e62:;
    int64_t v47 = result; // 0x401e6c
    int64_t v48 = v8; // 0x401e6c
    char v49 = v3; // 0x401e6c
    v2 = v13 + 1;
    int64_t v50 = v16; // 0x401e6c
    int64_t v51 = v22; // 0x401e6c
    goto lab_0x401987;
  lab_0x401909:
    // 0x401909
    v3 = v29;
    v8 = v9;
    v16 = v18;
    v22 = v24;
    v4 = v9;
    v17 = v18;
    v23 = v24;
    if ((*(int32_t *)((v30 / 8 & 28) + v31) & 1 << (int32_t)(v29 % 32)) != 0) {
        goto lab_0x401f42_2;
    }
    goto lab_0x401e62;
  lab_0x401987:;
    int64_t v52 = v51;
    uint64_t v53 = v47;
    if (v53 < v50) {
        // 0x40198c
        *(char *)(v52 + v53) = v49;
    }
    // 0x401990
    v1 = v53 + 1;
    v5 = v48;
    v14 = v50;
    v20 = v52;
    goto lab_0x4017f0_2;
  lab_0x402610_2:;
    int64_t v54 = v12;
    uint64_t v55 = v28;
    int64_t v56 = 0x100000000 * v15 >> 32;
    int64_t v57 = 0x100000000 * v21 >> 32;
    v7 = v54;
    v19 = v56;
    v25 = v57;
    if (v55 < 2) {
        goto lab_0x401bb8;
    } else {
        uint64_t v58 = v55 + v13; // 0x40241e
        int64_t v59 = v13 + 1; // 0x402514
        v47 = result;
        v48 = v54;
        v49 = v29;
        v2 = v59;
        v50 = v56;
        v51 = v57;
        int64_t v60 = v59; // 0x40251b
        int64_t v61 = result; // 0x40251b
        char v62 = v29; // 0x40251b
        if (v59 < v58) {
            uint64_t v63 = v61;
            if (v63 < v56) {
                // 0x4024e4
                *(char *)(v63 + v57) = v62;
            }
            char v64 = *(char *)(v60 + str); // 0x4024e8
            int64_t v65 = v63 + 1; // 0x4024ed
            int64_t v66 = v60 + 1; // 0x402514
            v47 = v65;
            v48 = v54;
            v49 = v64;
            v2 = v66;
            v50 = v56;
            v51 = v57;
            v60 = v66;
            while (v66 < v58) {
                // 0x4024df
                v63 = v65;
                if (v63 < v56) {
                    // 0x4024e4
                    *(char *)(v63 + v57) = v64;
                }
                // 0x4024e8
                v64 = *(char *)(v60 + str);
                v65 = v63 + 1;
                v66 = v60 + 1;
                v47 = v65;
                v48 = v54;
                v49 = v64;
                v2 = v66;
                v50 = v56;
                v51 = v57;
                v60 = v66;
            }
        }
        goto lab_0x401987;
    }
}
// Address range: 0x402760 - 0x4028fb
int64_t function_402760(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x402762
    int32_t * v3 = __errno_location(); // 0x40277c
    int64_t v4 = (int64_t)g15; // 0x402781
    int32_t v5 = *v3; // 0x40278b
    int64_t v6 = v4; // 0x4027a1
    if (*(int32_t *)0x6061d0 <= (int32_t)v2) {
        int64_t v7 = v2 + 1; // 0x4027a3
        int64_t v8 = 16 * v7 & 0xffffffff0; // 0x4027ad
        int64_t v9; // 0x402760
        if (g15 == &g16) {
            int64_t v10 = function_403020(0, v8); // 0x4028d7
            int128_t v11 = __asm_movdqa(*(int128_t *)&g16); // 0x4028dc
            *(int64_t *)&g15 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403020(v4, v8); // 0x4027c6
            *(int64_t *)&g15 = v12;
            v9 = v12;
        }
        // 0x4027da
        v6 = v9;
        uint32_t v13 = *(int32_t *)&g18; // 0x4027da
        int32_t v14 = v7;
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g18 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x40280b
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x402815
    int64_t * v17 = (int64_t *)v15; // 0x402818
    uint64_t v18 = *v17; // 0x402818
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x40281b
    int64_t result = *v19; // 0x40281b
    int64_t v20; // 0x402760
    uint64_t v21 = function_401750(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x40283e
    if (v18 > v21) {
        // 0x4028b5
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x402851
    *v17 = v22;
    if (result != (int64_t)&g29) {
        // 0x402861
        free((int64_t *)result);
    }
    int64_t result2 = function_402fd0(v22); // 0x40287b
    *v19 = result2;
    int64_t v23; // 0x402760
    function_401750(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4028b5
    *v3 = v5;
    return result2;
}
// Address range: 0x402900 - 0x402934
int64_t function_402900(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x402907
    int64_t result = function_403190(a1 == 0 ? (int64_t)&g30 : a1, 56); // 0x402926
    return result;
}
// Address range: 0x402940 - 0x40294f
int64_t function_402940(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g30 : a1); // 0x40294c
    return result;
}
// Address range: 0x402950 - 0x40295f
int64_t function_402950(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g30 : a1; // 0x402958
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g30;
}
// Address range: 0x402960 - 0x402993
int64_t function_402960(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g30 + 8 : a1 + 8; // 0x402979
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40297e
    uint32_t v3 = *v2; // 0x40297e
    uint32_t v4 = (int32_t)a2 % 32; // 0x402982
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4029a0 - 0x4029b3
int64_t function_4029a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g30 + 4 : a1 + 4); // 0x4029ac
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4029c0 - 0x4029eb
int64_t function_4029c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g30 : a1; // 0x4029c8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4029e5
        abort();
        // UNREACHABLE
    }
    // 0x4029dc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g30;
}
// Address range: 0x4029f0 - 0x402a62
int64_t function_4029f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g30 : a5; // 0x402a12
    int32_t * v2 = __errno_location(); // 0x402a1b
    uint32_t v3 = *(int32_t *)v1; // 0x402a3b
    int64_t result = function_401750(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x402a4a
    return result;
}
// Address range: 0x402a70 - 0x402b51
int64_t function_402a70(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g30 : a4; // 0x402a92
    int32_t * v2 = __errno_location(); // 0x402a98
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x402ab7
    int32_t * v4 = (int32_t *)v1; // 0x402aba
    int64_t v5 = function_401750(0, 0, a1, a2, (int64_t)*v4, v3); // 0x402ad5
    int64_t v6 = v5 + 1; // 0x402ada
    int64_t result = function_402fd0(v6); // 0x402aef
    function_401750(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x402b34
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x402b3d
    return result;
}
// Address range: 0x402b60 - 0x402b6a
int64_t function_402b60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402b60
    return function_402a70(a1, a2, 0, a3);
}
// Address range: 0x402b70 - 0x402c05
int64_t function_402b70(void) {
    uint32_t v1 = *(int32_t *)&g18; // 0x402b70
    int64_t v2 = v1; // 0x402b70
    int64_t v3 = v2; // 0x402b84
    if (v1 >= 2) {
        int64_t v4 = &g18;
        int64_t v5 = v4 + 16; // 0x402ba3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g35;
        while (v5 != (int64_t)g15 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x402ba0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g35;
        }
    }
    int64_t v6 = v3; // 0x402bbd
    if (g16 != 0x606240) {
        // 0x402bbf
        free((int64_t *)g16);
        g16 = 256;
        *(int64_t *)&g17 = (int64_t)&g29;
        v6 = &g35;
    }
    int64_t result = v6; // 0x402be1
    if (g15 != &g16) {
        // 0x402be3
        free(g15);
        *(int64_t *)&g15 = (int64_t)&g16;
        result = &g35;
    }
    // 0x402bf6
    *(int32_t *)&g18 = 1;
    return result;
}
// Address range: 0x402c10 - 0x402c21
int64_t function_402c10(void) {
    // 0x402c10
    int64_t v1; // 0x402c10
    return function_402760(v1, v1, -1, (int64_t *)&g30);
}
// Address range: 0x402c30 - 0x402c3a
int64_t function_402c30(void) {
    // 0x402c30
    int64_t v1; // 0x402c30
    return function_402760(v1, v1, v1, (int64_t *)&g30);
}
// Address range: 0x402c40 - 0x402c56
int64_t function_402c40(int64_t a1) {
    // 0x402c40
    return function_402760(0, a1, -1, (int64_t *)&g30);
}
// Address range: 0x402c60 - 0x402c72
int64_t function_402c60(int64_t a1, int64_t a2) {
    // 0x402c60
    return function_402760(0, a1, a2, (int64_t *)&g30);
}
// Address range: 0x402c80 - 0x402ce8
int64_t function_402c80(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x402c90
    return function_402760((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x402cf0 - 0x402d54
int64_t function_402cf0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x402d00
    return function_402760((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x402d60 - 0x402d6c
int64_t function_402d60(int64_t a1, int64_t a2) {
    // 0x402d60
    return function_402c80(0, a1 & 0xffffffff, a2);
}
// Address range: 0x402d70 - 0x402d7f
int64_t function_402d70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402d70
    return function_402cf0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x402d80 - 0x402df0
int64_t function_402d80(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g30); // 0x402d8d
    int128_t v2 = __asm_movdqa(g31); // 0x402d95
    int128_t v3 = __asm_movdqa(g32); // 0x402d9d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x402db2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x402dc8
    uint32_t v6 = *v5; // 0x402dc8
    uint32_t v7 = (int32_t)a3 % 32; // 0x402dcd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_402760(0, a1, a2, &v4);
}
// Address range: 0x402df0 - 0x402dfd
int64_t function_402df0(int64_t a1, int64_t a2) {
    // 0x402df0
    return function_402d80(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x402e00 - 0x402e11
int64_t function_402e00(int64_t a1) {
    // 0x402e00
    return function_402d80(a1, -1, 58);
}
// Address range: 0x402e20 - 0x402e2a
int64_t function_402e20(void) {
    // 0x402e20
    int64_t v1; // 0x402e20
    return function_402d80(v1, v1, 58);
}
// Address range: 0x402e30 - 0x402e9e
int64_t function_402e30(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x402e4a
    return function_402760(a1, a3, -1, &v1);
}
// Address range: 0x402ea0 - 0x402f0c
int64_t function_402ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g30); // 0x402ea7
    int128_t v2 = __asm_movdqa(g31); // 0x402eaf
    int128_t v3 = __asm_movdqa(g32); // 0x402eb7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x402ed9
    if (a2 == 0 || a3 == 0) {
        // 0x402f07
        abort();
        // UNREACHABLE
    }
    // 0x402eea
    return function_402760(a1, a4, a5, &v4);
}
// Address range: 0x402f10 - 0x402f19
int64_t function_402f10(void) {
    // 0x402f10
    int64_t v1; // 0x402f10
    return function_402ea0(v1, v1, v1, v1, -1);
}
// Address range: 0x402f20 - 0x402f37
int64_t function_402f20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402f20
    return function_402ea0(0, a1, a2, a3, -1);
}
// Address range: 0x402f40 - 0x402f53
int64_t function_402f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402f40
    return function_402ea0(0, a1, a2, a3, a4);
}
// Address range: 0x402f60 - 0x402f6a
int64_t function_402f60(void) {
    // 0x402f60
    int64_t v1; // 0x402f60
    return function_402760(v1, v1, v1, &g14);
}
// Address range: 0x402f70 - 0x402f82
int64_t function_402f70(int64_t a1, int64_t a2) {
    // 0x402f70
    return function_402760(0, a1, a2, &g14);
}
// Address range: 0x402f90 - 0x402fa1
int64_t function_402f90(void) {
    // 0x402f90
    int64_t v1; // 0x402f90
    return function_402760(v1, v1, -1, &g14);
}
// Address range: 0x402fb0 - 0x402fc6
int64_t function_402fb0(int64_t a1) {
    // 0x402fb0
    return function_402760(0, a1, -1, &g14);
}
// Address range: 0x402fd0 - 0x402fea
int64_t function_402fd0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x402fd4
    if (size != 0 != (mem == NULL)) {
        // 0x402fe3
        return (int64_t)mem;
    }
    // 0x402fe5
    function_4031f0(size);
    // UNREACHABLE
}
// Address range: 0x402ff0 - 0x403003
int64_t function_402ff0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x402ff3
    if (v1 <= 0xffffffffffffffff) {
        // 0x402ff8
        return function_402fd0((int64_t)v1);
    }
    // 0x402ffd
    function_4031f0(a1);
    // UNREACHABLE
}
// Address range: 0x403010 - 0x403012
int64_t function_403010(void) {
    // 0x403010
    int64_t v1; // 0x403010
    return function_402fd0(v1);
}
// Address range: 0x403020 - 0x403056
int64_t function_403020(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403048
        free(v1);
        return (int32_t)&g35 ^ (int32_t)&g35;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403031
    if (a2 != 0 != (mem == NULL)) {
        // 0x403040
        return (int64_t)mem;
    }
    // 0x403051
    function_4031f0(a1);
    // UNREACHABLE
}
// Address range: 0x403060 - 0x403073
int64_t function_403060(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403063
    if (v1 <= 0xffffffffffffffff) {
        // 0x403068
        return function_403020(a1, (int64_t)v1);
    }
    // 0x40306d
    function_4031f0(a1);
    // UNREACHABLE
}
// Address range: 0x403080 - 0x4030f6
int64_t function_403080(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x403080
    if (a1 != 0) {
        if (0xaaaaaaaaaaaaaaaa / a3 <= a2) {
            // 0x4030f0
            function_4031f0(a1);
            // UNREACHABLE
        }
        // 0x4030aa
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403020(a1, v1 * a3);
    }
    // 0x4030c0
    if (a2 == 0) {
        int64_t v2 = 128 / a3 + (int64_t)(a3 >= 129); // 0x4030dd
        *(int64_t *)a2 = v2;
        return function_403020(0, v2 * a3);
    }
    // 0x4030aa
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403020(a1, v1 * a3);
}
// Address range: 0x403100 - 0x40314d
int64_t function_403100(int64_t a1, uint64_t a2) {
    if (a1 == 0) {
        int64_t v1 = a2 == 0 ? 128 : a2; // 0x403138
        *(int64_t *)a2 = v1;
        return function_403020(0, v1);
    }
    if (a2 >= 0xaaaaaaaaaaaaaaaa) {
        // 0x403147
        function_4031f0(a1);
        // UNREACHABLE
    }
    int64_t v2 = a2 + 1 + a2 / 2; // 0x40311d
    *(int64_t *)a2 = v2;
    return function_403020(a1, v2);
}
// Address range: 0x403150 - 0x403167
int64_t function_403150(int64_t a1, int64_t a2) {
    // 0x403150
    return (int64_t)memset((int64_t *)function_402fd0(a1), 0, (int32_t)a1);
}
// Address range: 0x403170 - 0x403188
int64_t function_403170(void) {
    // 0x403170
    int64_t nmemb; // 0x403170
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)nmemb); // 0x403174
    if (mem != NULL) {
        // 0x40317e
        return (int64_t)mem;
    }
    // 0x403183
    function_4031f0(nmemb);
    // UNREACHABLE
}
// Address range: 0x403190 - 0x4031b8
int64_t function_403190(int64_t a1, int64_t a2) {
    int64_t v1 = function_402fd0(a2); // 0x40319f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4031c0 - 0x4031ee
int64_t function_4031c0(int64_t str) {
    int64_t v1 = (int64_t)strlen((char *)str) + 1; // 0x4031ce
    int64_t v2 = function_402fd0(v1); // 0x4031d5
    return (int64_t)memcpy((int64_t *)v2, (int64_t *)str, (int32_t)v1);
}
// Address range: 0x4031f0 - 0x403221
int64_t function_4031f0(int64_t a1) {
    // 0x4031f0
    error(g13, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x403230 - 0x403259
int64_t function_403230(int64_t pwc, int64_t wstr2, int64_t n) {
    // 0x403230
    int64_t ps; // 0x403230
    int32_t result; // 0x403254
    if (wstr2 == 0) {
        int64_t wstr = (int64_t)&g2;
        result = mbrtowc((int32_t *)0, (char *)wstr, (int32_t)1, (struct _TYPEDEF___mbstate_t *)ps);
        return result;
    }
    // 0x403235
    if (n == 0) {
        // 0x40323a
        return -2;
    }
    // 0x403254
    result = mbrtowc((int32_t *)pwc, (char *)wstr2, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps);
    return result;
}
// Address range: 0x403260 - 0x4032c5
int64_t function_403260(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x403267
    int32_t v1 = __fpending(stream); // 0x403267
    int32_t is_ferror = ferror(stream); // 0x403272
    int32_t v2 = fclose(stream); // 0x40327c
    if (is_ferror != 0) {
        // 0x4032a8
        if (v2 == 0) {
            // 0x4032ac
            *__errno_location() = 0;
        }
        // 0x40329e
        return 0xffffffff;
    }
    // 0x403285
    if (v2 == 0) {
        // 0x40329e
        return 0;
    }
    int64_t result = 0xffffffff; // 0x40328c
    if (v1 == 0) {
        // 0x40328e
        result = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40329e
    return result;
}
// Address range: 0x4032d0 - 0x403832
int64_t function_4032d0(void) {
    char * v1 = nl_langinfo(14); // 0x4032e6
    char * v2 = g33; // 0x4032eb
    char * v3; // 0x4032d0
    int64_t v4; // 0x4032d0
    int64_t v5; // 0x4032d0
    int64_t v6; // 0x4032d0
    int64_t v7; // 0x4032d0
    int32_t size; // 0x4032d0
    int32_t size2; // 0x4032d0
    int32_t len; // 0x4033a2
    int64_t v8; // 0x4033a2
    char * env_val; // 0x40338d
    if (v2 == NULL) {
        // 0x403388
        env_val = getenv("CHARSETALIASDIR");
        size = 116;
        v4 = 102;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 101;
        if (env_val == NULL) {
            goto lab_0x4033f5;
        } else {
            // 0x40339a
            size = 116;
            v4 = 102;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 101;
            if (*env_val == 0) {
                goto lab_0x4033f5;
            } else {
                // 0x40339f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40338d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x403825
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4033f5;
                    } else {
                        // 0x403799
                        size2 = len + 14;
                        goto lab_0x4033bb;
                    }
                } else {
                    goto lab_0x4033bb;
                }
            }
        }
    } else {
        // 0x4032d0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40330a;
    }
  lab_0x40363c:;
    // 0x40363c
    int64_t v10; // 0x4032d0
    int64_t v11 = v10;
    int64_t v12; // 0x4032d0
    int64_t v13 = v12;
    struct _IO_FILE * stream; // 0x40347b
    int32_t v14 = __uflow(stream); // 0x40363f
    int64_t v15 = v13; // 0x403649
    int32_t v16 = v14; // 0x403649
    int64_t v17 = v11; // 0x403649
    int64_t v18 = v13; // 0x403649
    int64_t v19 = v11; // 0x403649
    if (v14 == -1) {
        // break -> 0x40364f
        goto lab_0x40364f;
    }
    goto lab_0x4034c9;
  lab_0x4034be:;
    // 0x4034be
    int64_t v116; // 0x4032d0
    int64_t v137 = v116;
    int64_t v115; // 0x4032d0
    int64_t v138 = v115;
    int64_t v114; // 0x4032d0
    int64_t v139 = v114;
    int64_t * v30; // 0x4034b0
    *v30 = v138 + 1;
    unsigned char v140 = *(char *)v138; // 0x4034c6
    v15 = v139;
    v16 = v140;
    v17 = v137;
    goto lab_0x4034c9;
  lab_0x4034c9:;
    int64_t v20 = v17;
    int32_t c = v16;
    int64_t v21 = v15;
    int64_t v22; // 0x4032d0
    int32_t v23; // bp-120, 0x4032d0
    int32_t v24; // bp-184, 0x4032d0
    int64_t v25; // 0x4032d0
    int64_t v26; // 0x403498
    int64_t v27; // 0x40349d
    int64_t * v28; // 0x4034b4
    switch (c) {
        case 32: {
            // 0x4034b0
            v25 = v21;
            v22 = v20;
            goto lab_0x4034b0_2;
        }
        case 10: {
            // 0x4034b0
            v25 = v21;
            v22 = v20;
            goto lab_0x4034b0_2;
        }
        case 9: {
            // 0x4034b0
            v25 = v21;
            v22 = v20;
            goto lab_0x4034b0_2;
        }
        case 35: {
            uint64_t v29 = *v30; // 0x4036a1
            uint64_t v31 = *v28; // 0x4036a5
            int32_t v32; // 0x4032d0
            char v33; // 0x4032d0
            unsigned char v34; // 0x403688
            int32_t v35; // 0x4036ae
            if (v29 < v31) {
                // 0x403680
                *v30 = v29 + 1;
                v34 = *(char *)v29;
                v32 = v34;
                v33 = 1;
            } else {
                // 0x4036ab
                v35 = __uflow(stream);
                v32 = v35;
                v33 = v35 != -1;
            }
            char v36 = v33;
            int32_t v37 = v32;
            while (v37 != 10 && v36 != 0) {
                // 0x4036a1
                v29 = *v30;
                v31 = *v28;
                if (v29 < v31) {
                    // 0x403680
                    *v30 = v29 + 1;
                    v34 = *(char *)v29;
                    v32 = v34;
                    v33 = 1;
                } else {
                    // 0x4036ab
                    v35 = __uflow(stream);
                    v32 = v35;
                    v33 = v35 != -1;
                }
                // 0x403690
                v36 = v33;
                v37 = v32;
            }
            // 0x40377f
            v18 = v21;
            v19 = v20;
            if (v37 == -1) {
                // break -> 0x40364f
                break;
            }
            // 0x4034b0
            v25 = v21;
            v22 = v20;
            goto lab_0x4034b0_2;
        }
        default: {
            // 0x4034df
            ungetc(c, stream);
            int32_t items_assigned = fscanf(stream, "%50s %50s", &v24, &v23); // 0x4034f7
            int64_t v38 = v27; // 0x4034ff
            v18 = v21;
            v19 = v20;
            if (items_assigned < 2) {
                // break -> 0x40364f
                break;
            }
            int64_t v39 = v38;
            int32_t v40 = *(int32_t *)v39; // 0x403508
            int64_t v41 = v39 + 4; // 0x40350a
            int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x403516
            uint32_t v43 = v42 & -0x7f7f7f80; // 0x403518
            v38 = v41;
            while (v43 == 0) {
                // 0x403508
                v39 = v38;
                v40 = *(int32_t *)v39;
                v41 = v39 + 4;
                v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
                v43 = v42 & -0x7f7f7f80;
                v38 = v41;
            }
            int32_t v44 = (v42 & 0x8080) == 0 ? v43 / 0x10000 : v43; // 0x403529
            int64_t v45 = v39 + 6; // 0x40352c
            unsigned char v46 = (char)v44; // 0x403536
            int64_t v47 = -1 - v46 < v46 ? 4 : 3; // 0x40353b
            int64_t v48 = v26; // 0x40353f
            int64_t v49 = v48;
            int32_t v50 = *(int32_t *)v49; // 0x403542
            int64_t v51 = v49 + 4; // 0x403544
            int32_t v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80); // 0x403550
            uint32_t v53 = v52 & -0x7f7f7f80; // 0x403552
            v48 = v51;
            while (v53 == 0) {
                // 0x403542
                v49 = v48;
                v50 = *(int32_t *)v49;
                v51 = v49 + 4;
                v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80);
                v53 = v52 & -0x7f7f7f80;
                v48 = v51;
            }
            int64_t v54 = (v42 & 0x8080) == 0 ? v45 : v41; // 0x403530
            int64_t v55 = v54 - v47 - v27; // 0x40353f
            int32_t v56 = (v52 & 0x8080) == 0 ? v53 / 0x10000 : v53; // 0x403568
            int64_t v57 = (v52 & 0x8080) == 0 ? v49 + 6 : v51; // 0x40356f
            unsigned char v58 = (char)v56; // 0x403575
            int64_t v59 = -1 - v58 < v58 ? 4 : 3; // 0x403578
            int64_t v60 = v57 - v59 - v26; // 0x40357c
            int64_t v61 = v60 + v55; // 0x403585
            int64_t * v62; // 0x4032d0
            int64_t v63; // 0x4032d0
            if (v21 != 0) {
                int64_t v64 = v61 + v21; // 0x4036bb
                int64_t * mem = realloc((int64_t *)v20, (int32_t)v64 + 3); // 0x4036d0
                v63 = v64;
                v62 = mem;
            } else {
                int64_t * mem2 = malloc((int32_t)v61 + 3); // 0x4035a1
                v63 = v61;
                v62 = mem2;
            }
            int64_t * v65 = v62;
            if (v65 == NULL) {
                // 0x4037dc
                free((int64_t *)v20);
                fclose(stream);
                goto lab_0x403454;
            }
            int64_t v66 = v63;
            int64_t v67 = (int64_t)v65;
            int64_t v68 = v66 + 2;
            int64_t v69 = v55 + 1; // 0x4035c8
            int64_t v70 = v68 - v60 + v67;
            int64_t v71 = -2 - v55 + v70; // 0x4035d2
            uint32_t v72 = (int32_t)v69; // 0x4035d5
            if (v72 >= 8) {
                int32_t v73 = v24; // 0x4036e4
                *(int64_t *)v71 = (int64_t)v73;
                int64_t v74 = (v69 & 0xffffffff) - 8;
                int64_t v75 = *(int64_t *)(v74 + v27); // 0x4036ed
                *(int64_t *)(v71 + v74) = v75;
                int64_t v76 = v71 + 8 & -8; // 0x4036fe
                int64_t v77 = v71 - v76; // 0x403702
                uint32_t v78 = (int32_t)(v77 + v69); // 0x40370d
                if (v78 >= 8) {
                    int64_t v79 = v27 - v77; // 0x403707
                    uint32_t v80 = v78 & -8; // 0x403729
                    int64_t v81 = 0; // 0x4032d0
                    int64_t v82 = v81;
                    int64_t v83 = v82 + 8; // 0x40371e
                    int64_t v84 = *(int64_t *)(v79 + v82); // 0x403721
                    *(int64_t *)(v82 + v76) = v84;
                    v81 = v83 & 0xffffffff;
                    while (v80 > (int32_t)v83) {
                        // 0x40371b
                        v82 = v81;
                        v83 = v82 + 8;
                        v84 = *(int64_t *)(v79 + v82);
                        *(int64_t *)(v82 + v76) = v84;
                        v81 = v83 & 0xffffffff;
                    }
                }
            } else {
                if ((v69 & 4) != 0) {
                    int32_t v85 = v24; // 0x4037af
                    *(int32_t *)v71 = v85;
                    int64_t v86 = (v69 & 0xffffffff) - 4;
                    int32_t v87 = *(int32_t *)(v86 + v27); // 0x4037b7
                    *(int32_t *)(v71 + v86) = v87;
                } else {
                    if (v72 != 0) {
                        int32_t v88 = v24; // 0x4035eb
                        *(char *)v71 = (char)v88;
                        if ((v69 & 2) != 0) {
                            int64_t v89 = (v69 & 0xffffffff) - 2;
                            int16_t v90 = *(int16_t *)(v89 + v27); // 0x403802
                            *(int16_t *)(v71 + v89) = v90;
                        }
                    }
                }
            }
            int64_t v91 = v60 + 1; // 0x4035fb
            int64_t v92 = v70 - 1; // 0x4035ff
            uint32_t v93 = (int32_t)v91; // 0x403604
            if (v93 >= 8) {
                int32_t v94 = v23; // 0x403732
                *(int64_t *)v92 = (int64_t)v94;
                int64_t v95 = (v91 & 0xffffffff) - 8;
                int64_t v96 = *(int64_t *)(v95 + v26); // 0x40373e
                *(int64_t *)(v92 + v95) = v96;
                int64_t v97 = v70 + 7 & -8; // 0x40374c
                int64_t v98 = v92 - v97; // 0x403750
                uint32_t v99 = (int32_t)(v98 + v91); // 0x40375b
                if (v99 >= 8) {
                    int64_t v100 = v26 - v98; // 0x403755
                    uint32_t v101 = v99 & -8; // 0x403776
                    int64_t v102 = 0; // 0x4032d0
                    int64_t v103 = v102;
                    int64_t v104 = v103 + 8; // 0x40376b
                    int64_t v105 = *(int64_t *)(v100 + v103); // 0x40376e
                    *(int64_t *)(v103 + v97) = v105;
                    v102 = v104 & 0xffffffff;
                    while (v101 > (int32_t)v104) {
                        // 0x403769
                        v103 = v102;
                        v104 = v103 + 8;
                        v105 = *(int64_t *)(v100 + v103);
                        *(int64_t *)(v103 + v97) = v105;
                        v102 = v104 & 0xffffffff;
                    }
                }
            } else {
                if ((v91 & 4) != 0) {
                    int32_t v106 = v23; // 0x4037c6
                    *(int32_t *)v92 = v106;
                    int64_t v107 = (v91 & 0xffffffff) - 4;
                    int32_t v108 = *(int32_t *)(v107 + v26); // 0x4037ce
                    *(int32_t *)(v92 + v107) = v108;
                } else {
                    if (v93 != 0) {
                        int32_t v109 = v23; // 0x40361a
                        *(char *)v92 = (char)v109;
                        if ((v91 & 2) != 0) {
                            int64_t v110 = (v91 & 0xffffffff) - 2;
                            int16_t v111 = *(int16_t *)(v110 + v26); // 0x403815
                            *(int16_t *)(v92 + v110) = v111;
                        }
                    }
                }
            }
            uint64_t v112 = *v30; // 0x40362e
            uint64_t v113 = *v28; // 0x403632
            v114 = v68;
            v115 = v112;
            v116 = v67;
            v12 = v68;
            v10 = v67;
            if (v112 < v113) {
                goto lab_0x4034be;
            } else {
                goto lab_0x40363c;
            }
        }
    }
  lab_0x4033f5:;
    int64_t * mem3 = malloc(size); // 0x4033f5
    int64_t v117 = (int64_t)&g2; // 0x403400
    int64_t v118; // 0x4032d0
    int64_t path; // 0x4032d0
    if (mem3 == NULL) {
        goto lab_0x4033d2;
    } else {
        int64_t v119 = (int64_t)mem3; // 0x4033f5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v119) = 47;
        path = v119;
        v118 = v4;
        goto lab_0x403416;
    }
  lab_0x40330a:;
    int64_t str = v1 == NULL ? (int64_t)&g2 : (int64_t)v1; // 0x4032fd
    char v120 = *v3; // 0x40330a
    int64_t v121; // 0x4032d0
    if (v120 == 0) {
        // 0x403364
        v121 = str;
        return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
    }
    char v122 = v120; // 0x4032d0
    int64_t v123 = v7;
    char * str2 = (char *)v123;
    int64_t v124; // 0x4032d0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v125 = v123 + 1;
        if (v122 == 42) {
            // 0x403350
            v124 = v125;
            if (*(char *)v125 == 0) {
                goto lab_0x403357;
            }
        }
        int64_t str3 = v125 + (int64_t)strlen(str2); // 0x403320
        int64_t v126 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40332d
        char v127 = *(char *)v126; // 0x403332
        v122 = v127;
        if (v127 == 0) {
            // 0x403364
            v121 = str;
            return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
        }
        v123 = v126;
        str2 = (char *)v123;
    }
    // 0x40333b
    v124 = v123 + 1;
  lab_0x403357:
    // 0x403364
    v121 = v124 + (int64_t)strlen(str2);
    return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
  lab_0x4033d2:;
    char * v128 = (char *)v117;
    g33 = v128;
    v3 = v128;
    v7 = v117;
    goto lab_0x40330a;
  lab_0x403416:;
    int64_t v129 = v118 + path; // 0x403416
    *(int64_t *)v129 = 0x2e74657372616863;
    *(int16_t *)(v129 + 12) = 115;
    *(int32_t *)(v129 + 8) = 0x61696c61;
    if (open((char *)path, O_RDONLY) >= 0) {
        // 0x403471
        int32_t fd; // 0x403442
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4037a2
            close(fd);
        } else {
            int64_t v130 = (int64_t)stream; // 0x40347b
            v26 = &v23;
            v27 = &v24;
            v30 = (int64_t *)(v130 + 8);
            v28 = (int64_t *)(v130 + 16);
            v25 = 0;
            v22 = 0;
            while (true) {
              lab_0x4034b0_2:;
                int64_t v131 = v22;
                int64_t v132 = v25;
                uint64_t v133 = *v30; // 0x4034b0
                uint64_t v134 = *v28; // 0x4034b4
                v114 = v132;
                v115 = v133;
                v116 = v131;
                v12 = v132;
                v10 = v131;
                if (v133 >= v134) {
                    goto lab_0x40363c;
                } else {
                    goto lab_0x4034be;
                }
            }
          lab_0x40364f:;
            int64_t v135 = v18;
            fclose(stream);
            if (v135 != 0) {
                int64_t v136 = v19;
                *(char *)(v136 + v135) = 0;
            }
        }
    }
    goto lab_0x403454;
  lab_0x4033bb:;
    int64_t * mem4 = malloc(size2); // 0x4033bb
    v117 = (int64_t)&g2;
    if (mem4 != NULL) {
        // 0x403461
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v118 = v8;
        goto lab_0x403416;
    } else {
        goto lab_0x4033d2;
    }
  lab_0x403454:
    // 0x403454
    free((int64_t *)path);
    v117 = (int64_t)&g2;
    goto lab_0x4033d2;
}
// Address range: 0x403840 - 0x40389d
int64_t function_403840(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403840
    return function_400f58();
}
// Address range: 0x4038a0 - 0x4038a1
int64_t function_4038a0(void) {
    // 0x4038a0
    int64_t result; // 0x4038a0
    return result;
}
// Address range: 0x4038b0 - 0x4038c8
int64_t function_4038b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4038b0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g12);
}
// Address range: 0x4038c8 - 0x4038e8
int64_t function_4038c8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g8; // 0x4038d2
    while (*(int64_t *)v1 != -1) {
        // 0x4038d3
        v1 -= 8;
    }
    // 0x4038e4
    return result;
}
