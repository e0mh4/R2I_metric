// Address range: 0x401a40 - 0x401a45
int64_t function_401a40(void) {
    // 0x401a40
    abort();
    // UNREACHABLE
}
// Address range: 0x401a45 - 0x401a4a
int64_t function_401a45(void) {
    // 0x401a45
    abort();
    // UNREACHABLE
}
// Address range: 0x401a4a - 0x401a4f
int64_t function_401a4a(void) {
    // 0x401a4a
    abort();
    // UNREACHABLE
}
// Address range: 0x401a4f - 0x401a54
int64_t function_401a4f(void) {
    // 0x401a4f
    abort();
    // UNREACHABLE
}
// Address range: 0x401a54 - 0x401a59
int64_t function_401a54(void) {
    // 0x401a54
    abort();
    // UNREACHABLE
}
// Address range: 0x401a59 - 0x401a5e
int64_t function_401a59(void) {
    // 0x401a59
    abort();
    // UNREACHABLE
}
// Address range: 0x401a5e - 0x401a63
int64_t function_401a5e(void) {
    // 0x401a5e
    abort();
    // UNREACHABLE
}
// Address range: 0x401a63 - 0x401a68
int64_t function_401a63(void) {
    // 0x401a63
    abort();
    // UNREACHABLE
}
// Address range: 0x401a68 - 0x401a6d
int64_t function_401a68(void) {
    // 0x401a68
    abort();
    // UNREACHABLE
}
// Address range: 0x401a6d - 0x401a72
int64_t function_401a6d(void) {
    // 0x401a6d
    abort();
    // UNREACHABLE
}
// Address range: 0x401a80 - 0x401c34
int64_t function_401a80(int64_t a1, int64_t a2) {
    // 0x401a80
    function_404760(a2);
    setlocale(LC_ALL, (char *)&g18);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    if (g44 == 0) {
        int64_t v1 = function_407ee0(1024); // 0x401b90
        g44 = v1;
        g45 = v1;
    }
    int64_t v2 = a1 & 0xffffffff; // 0x401a87
    int64_t v3; // 0x401a80
    function_40bc60(0x4045f0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3);
    function_40bc60(0x4023d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3);
    int64_t v4; // 0x401a80
    int64_t v5; // 0x401a80
    int64_t v6; // bp-56, 0x401a80
    int64_t v7; // 0x401ba8
    int64_t v8; // 0x401bcc
    int64_t v9; // 0x401c16
    int64_t v10; // 0x401a80
    int64_t v11; // 0x401c16
    while (true) {
        int64_t v12 = function_408f40(v2, a2, (int64_t *)&g18, &g10, 0, v3); // 0x401af5
        int32_t v13 = v12;
        switch (v13) {
            case -1: {
                // 0x401ba8
                v7 = (int64_t)*(int32_t *)0x6132bc;
                v8 = v7;
                v4 = 1;
                if (v2 > v7) {
                    v4 = (char)function_404170(*(int64_t *)(8 * v8 + a2)) == 0 ? 0 : v4;
                    v8++;
                    while (v8 != v2) {
                        // 0x401bbd
                        v4 = (char)function_404170(*(int64_t *)(8 * v8 + a2)) == 0 ? 0 : v4;
                        v8++;
                    }
                    // 0x401bd5
                    return v4 % 256 ^ 1;
                }
                // 0x401bea
                function_406f70(&v6);
                v9 = function_406f80(g39, "\n\t ", 3, &v6);
                v10 = 1;
                v5 = 1;
                if (v9 != -1) {
                    v10 &= function_404170(v3);
                    v11 = function_406f80(g39, "\n\t ", 3, &v6);
                    v5 = v10;
                    while (v11 != -1) {
                        // 0x401bfa
                        v10 &= function_404170(v3);
                        v11 = function_406f80(g39, "\n\t ", 3, &v6);
                        v5 = v10;
                    }
                }
                // 0x401c26
                free((int64_t *)v3);
                // 0x401bd5
                return v5 % 256 ^ 1;
            }
            case -130: {
                // 0x401c2d
                function_4042e0(0);
                // UNREACHABLE
            }
        }
        if (v13 != 128) {
            if (v13 != -131) {
                // 0x401b27
                function_4042e0(1);
                // UNREACHABLE
            }
            // 0x401b38
            function_405150("Niels Moller", &g2);
            int64_t v14 = function_405150("Torbjorn Granlund", &g3); // 0x401b54
            function_407da0((int64_t)g38, "factor", "GNU coreutils", (int64_t)g27, "Paul Rubin", v14);
            exit(0);
            // UNREACHABLE
        }
        // 0x401b15
        g46 = 1;
    }
    // 0x401ba8
    v7 = (int64_t)*(int32_t *)0x6132bc;
    v8 = v7;
    v4 = 1;
    if (v2 > v7) {
        v4 = (char)function_404170(*(int64_t *)(8 * v8 + a2)) == 0 ? 0 : v4;
        v8++;
        while (v8 != v2) {
            // 0x401bbd
            v4 = (char)function_404170(*(int64_t *)(8 * v8 + a2)) == 0 ? 0 : v4;
            v8++;
        }
        // 0x401bd5
        return v4 % 256 ^ 1;
    }
    // 0x401bea
    function_406f70(&v6);
    v9 = function_406f80(g39, "\n\t ", 3, &v6);
    v10 = 1;
    v5 = 1;
    if (v9 != -1) {
        v10 &= function_404170(v3);
        v11 = function_406f80(g39, "\n\t ", 3, &v6);
        v5 = v10;
        while (v11 != -1) {
            // 0x401bfa
            v10 &= function_404170(v3);
            v11 = function_406f80(g39, "\n\t ", 3, &v6);
            v5 = v10;
        }
    }
    // 0x401c26
    free((int64_t *)v3);
    // 0x401bd5
    return v5 % 256 ^ 1;
}
// Address range: 0x401c40 - 0x401c6b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401c40
    int64_t v1; // 0x401c40
    __libc_start_main(0x401a80, (int32_t)a4, (char **)&v1, (void (*)())0x40bbf0, (void (*)())0x40bc50, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401c6b - 0x401c8a
int64_t function_401c6b(void) {
    // 0x401c6b
    return &g37;
}
// Address range: 0x401c8a - 0x401cc1
int64_t function_401c8a(void) {
    // 0x401c8a
    return 0;
}
// Address range: 0x401cc1 - 0x401d18
int64_t function_401cc1(void) {
    // 0x401cc1
    if (g42 != 0) {
        // 0x401d17
        int64_t result; // 0x401cc1
        return result;
    }
    int64_t v1 = g43; // 0x401cf4
    int64_t result2; // 0x401d06
    if (g43 >= ((int64_t)&g23 - (int64_t)&g22 >> 3) - 1) {
        // 0x401d06
        result2 = function_401c6b();
        g42 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g23 - (int64_t)&g22 >> 3) - 1) {
        // 0x401cf6
        v1++;
    }
    // 0x401cea
    g43 = v1;
    // 0x401d06
    result2 = function_401c6b();
    g42 = 1;
    return result2;
}
// Address range: 0x401d18 - 0x401d1d
int64_t function_401d18(void) {
    // 0x401d18
    return function_401c8a();
}
// Address range: 0x401d20 - 0x401d79
int64_t function_401d20(int64_t a1, uint64_t a2) {
    uint64_t result = a2 % 2 != 0 ? a2 : a1;
    int64_t v1 = a2 % 2 != 0 ? a1 : a2;
    if (v1 == 0) {
        // 0x401d78
        return result;
    }
    int64_t v2 = result / 2; // 0x401d37
    int64_t v3 = v1; // 0x401d37
    uint64_t v4; // 0x401d20
    while (true) {
        // 0x401d59
        v4 = v3;
        int64_t v5 = v2;
        int64_t v6 = v4 / 2; // 0x401d5c
        v2 = v5;
        v3 = v6;
        if (v4 % 2 != 0) {
            int64_t v7 = v6 - v5; // 0x401d65
            if (v7 == 0) {
                // break -> 0x401d6a
                break;
            }
            int64_t v8 = v7 >> 63; // 0x401d46
            v2 = (v8 & v7) + v5;
            v3 = (v8 ^ v7) - v8;
        }
    }
    // 0x401d6a
    return v4 | 1;
}
// Address range: 0x401d80 - 0x401e55
int64_t function_401d80(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 + 224; // 0x401d82
    int64_t v2 = a1 + 16; // 0x401d8b
    char * v3 = (char *)(a1 + 250); // 0x401d91
    unsigned char v4 = *v3; // 0x401d91
    int64_t v5 = (int64_t)v4 + 0xffffffff; // 0x401d9a
    int64_t v6 = v2; // 0x401da0
    int64_t v7 = v1; // 0x401da0
    int64_t v8; // 0x401d80
    int64_t result; // 0x401d80
    int64_t result2; // 0x401d80
    int64_t v9; // 0x401dba
    int64_t v10; // 0x401d80
    int64_t v11; // 0x401dd6
    int64_t v12; // 0x401e26
    int64_t v13; // 0x401e2a
    int64_t v14; // 0x401da2
    int64_t v15; // 0x401d80
    uint64_t v16; // 0x401da5
    if ((int32_t)v5 == -1) {
        goto lab_0x401e06;
    } else {
        int64_t v17 = 0x100000000 * v5;
        v14 = v17 >> 32;
        v15 = v17 >> 29;
        v16 = *(int64_t *)(v15 + v2);
        if (v16 <= a2) {
            // 0x401e38
            result2 = v15;
            v8 = v14;
            if (v16 != a2) {
                // 0x401e49
                result = v15;
                v6 = a1 + 24 + v15;
                v7 = a1 + 225 + v14;
                goto lab_0x401e06;
            } else {
                goto lab_0x401e3d;
            }
        } else {
            int64_t v18 = v5 & 0xffffffff; // 0x401d9a
            v9 = v14 - 1;
            v10 = a1 + 24;
            int64_t v19 = v9; // 0x401dc3
            int64_t v20 = v18 + 0xffffffff; // 0x401dd6
            v11 = v20 & 0xffffffff;
            while ((int32_t)v20 != -1) {
                int64_t v21 = v19;
                v19 = v21 - 1;
                uint64_t v22 = *(int64_t *)(8 * v19 + v10); // 0x401dcc
                if (v22 <= a2) {
                    // 0x401e20
                    result2 = v11;
                    v8 = v21;
                    if (v22 == a2) {
                        goto lab_0x401e3d;
                    } else {
                        int64_t v23 = v21 + 1; // 0x401e22
                        v12 = 8 * v23 + v2;
                        v13 = v23 + v1;
                        result = v11;
                        v6 = v12;
                        v7 = v13;
                        if (v18 > v11) {
                            goto lab_0x401de9;
                        } else {
                            goto lab_0x401e06;
                        }
                    }
                }
                v20 = v11 + 0xffffffff;
                v11 = v20 & 0xffffffff;
            }
        }
    }
  lab_0x401e06:
    // 0x401e06
    *(int64_t *)v6 = a2;
    *(char *)v7 = (char)a3;
    *v3 = v4 + 1;
    return result;
  lab_0x401e3d:;
    char * v24 = (char *)(v8 + v1); // 0x401e3d
    *v24 = *v24 + (char)a3;
    return result2;
  lab_0x401de9:
    // 0x401de9
    *(int64_t *)(v15 + v10) = v16;
    int64_t v25 = a1 + 225; // 0x401df7
    *(char *)(v14 + v25) = *(char *)(v14 + v1);
    result = v11;
    v6 = v12;
    v7 = v13;
    if (v11 < v9) {
        int64_t v26 = v9;
        int64_t v27 = 8 * v26;
        int64_t v28 = v26 - 1; // 0x401de5
        *(int64_t *)(v27 + v10) = *(int64_t *)(v27 + v2);
        *(char *)(v26 + v25) = *(char *)(v26 + v1);
        result = v11;
        v6 = v12;
        v7 = v13;
        while (v11 < v28) {
            // 0x401de0
            v26 = v28;
            v27 = 8 * v26;
            v28 = v26 - 1;
            *(int64_t *)(v27 + v10) = *(int64_t *)(v27 + v2);
            *(char *)(v26 + v25) = *(char *)(v26 + v1);
            result = v11;
            v6 = v12;
            v7 = v13;
        }
    }
    goto lab_0x401e06;
}
// Address range: 0x401e60 - 0x401ec9
int64_t function_401e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // 0x401e67
    int64_t result = a1; // 0x401e67
    int64_t v2 = a2; // 0x401e67
    if (a2 % 2 == 0) {
        goto lab_0x401ec0;
    } else {
        goto lab_0x401e70;
    }
  lab_0x401ec0:;
    // 0x401ec0
    int64_t v3; // 0x401e60
    result = v3;
    v1 = v2;
    if (v1 == 0) {
        // 0x401ec5
        return result;
    }
    goto lab_0x401e70;
  lab_0x401e70:;
    int64_t v4 = v1 / 2; // 0x401e91
    int64_t v5 = v4; // 0x401e98
    v2 = v4;
    if ((v1 & 2) != 0) {
        uint64_t v6 = v5;
        int64_t v7 = v6 / 2; // 0x401e91
        v2 = v7;
        while ((v6 & 2) != 0) {
            // 0x401e9a
            v6 = v7;
            v7 = v6 / 2;
            v2 = v7;
        }
    }
    // 0x401ec0
    v3 = result;
    goto lab_0x401ec0;
}
// Address range: 0x401ed0 - 0x401f5d
int64_t function_401ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t a6) {
    int64_t v1 = function_401e60(a3, a4, a1, a2); // 0x401eef
    bool v2 = v1 == a6 | v1 == a1 - a6;
    int64_t v3 = a6 & -256 | (int64_t)v2; // 0x401f07
    if (a5 < 2 || v2) {
        // 0x401f55
        return v3 & 0xffffffff;
    }
    int64_t v4 = 1; // 0x401f4d
    // 0x401f55
    return v4 & 0xffffffff;
}
// Address range: 0x401f60 - 0x402234
int64_t function_401f60(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    if (a2 >= 0) {
        if (a4 >= 0) {
            if (a6 >= 0) {

                // 0x402059
                return 0;
            }
            // 0x402079
            __assert_fail("(m1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 1001, "mulredc2");
        }
        // 0x402092
        __assert_fail("(b1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 1000, "mulredc2");
    }
    // 0x4020ab
    __assert_fail("(a1 >> (W_TYPE_SIZE - 1)) == 0", "src/factor.c", 999, "mulredc2");
    int64_t v1; // bp-160, 0x401f60
    int64_t v2 = &v1; // 0x4020e5
    int64_t * v3 = (int64_t *)(v2 - 8);
    int64_t * v4 = (int64_t *)(v2 - 16);
    int64_t * v5 = (int64_t *)(v2 + 16);
    int64_t * v6 = (int64_t *)(v2 + 8);
    int64_t * v7 = (int64_t *)(v2 + 24);
    int64_t * v8 = (int64_t *)(v2 + 32);
    int32_t v9 = 64; // 0x402110
    int64_t v10 = *(int64_t *)999; // 0x402110
    int64_t v11 = 0x632e726f;
    int64_t v12 = 0x746361662f637273;
    int64_t v13 = v12; // 0x402148
    int64_t v14 = v11; // 0x402148
    int64_t v15; // 0x402157
    int64_t v16; // 0x40215f
    int64_t v17; // 0x40216e
    if (v10 % 2 != 0) {
        // 0x40214a
        *v3 = a5;
        *v4 = 0x32636465726c756d;
        v15 = *v5;
        v16 = *v6;
        *v7 = v11;
        *v8 = v12;
        v17 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v16, v15, v11, v12, 0, (int64_t)&g62, (int64_t)&g62);
        *v5 = v17;
        *v6 = 0x28203e3e20316128;
        v13 = *v8;
        v14 = *v7;
    }
    int64_t v18 = v14;
    int64_t v19 = v13;
    *v3 = a5;
    *v4 = 0x32636465726c756d;
    int64_t v20 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v18, v19, v18, v19, 0, (int64_t)&g62, (int64_t)&g62); // 0x402131
    v9--;
    v10 /= 2;
    while (v9 != 0) {
        // 0x402144
        v11 = 0x28203e3e20316128;
        v12 = v20;
        v13 = v12;
        v14 = v11;
        if (v10 % 2 != 0) {
            // 0x40214a
            *v3 = a5;
            *v4 = 0x32636465726c756d;
            v15 = *v5;
            v16 = *v6;
            *v7 = v11;
            *v8 = v12;
            v17 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v16, v15, v11, v12, 0, (int64_t)&g62, (int64_t)&g62);
            *v5 = v17;
            *v6 = 0x28203e3e20316128;
            v13 = *v8;
            v14 = *v7;
        }
        // 0x402118
        v18 = v14;
        v19 = v13;
        *v3 = a5;
        *v4 = 0x32636465726c756d;
        v20 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v18, v19, v18, v19, 0, (int64_t)&g62, (int64_t)&g62);
        v9--;
        v10 /= 2;
    }
    int64_t v21 = *(int64_t *)(*(int64_t *)(v2 + 40) + 8); // 0x402195
    uint64_t v22 = v21; // 0x40219c
    if (v21 == 0) {
        // 0x402218
        *(int64_t *)"(a1 >> (W_TYPE_SIZE - 1)) == 0" = *v6;
        return *v5;
    }
    int64_t v23 = v20; // 0x4021cc
    int64_t v24 = 0x28203e3e20316128; // 0x4021cc
    int64_t v25; // 0x4021db
    int64_t v26; // 0x4021e3
    int64_t v27; // 0x4021f2
    if (v22 % 2 != 0) {
        // 0x4021ce
        *v3 = a5;
        *v4 = 0x32636465726c756d;
        v25 = *v5;
        v26 = *v6;
        *v8 = v20;
        *v7 = 0x28203e3e20316128;
        v27 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v26, v25, 0x28203e3e20316128, v20, 0, (int64_t)&g62, (int64_t)&g62);
        *v5 = v27;
        *v6 = 0x28203e3e20316128;
        v23 = *v8;
        v24 = *v7;
    }
    int64_t v28 = v24;
    int64_t v29 = v23;
    *v3 = a5;
    *v4 = 0x32636465726c756d;
    int64_t v30 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v28, v29, v28, v29, 0, (int64_t)&g62, (int64_t)&g62); // 0x4021b6
    while (v22 >= 2) {
        // 0x4021c8
        v22 /= 2;
        int64_t v31 = v30;
        v23 = v31;
        v24 = 0x28203e3e20316128;
        if (v22 % 2 != 0) {
            // 0x4021ce
            *v3 = a5;
            *v4 = 0x32636465726c756d;
            v25 = *v5;
            v26 = *v6;
            *v8 = v31;
            *v7 = 0x28203e3e20316128;
            v27 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v26, v25, 0x28203e3e20316128, v31, 0, (int64_t)&g62, (int64_t)&g62);
            *v5 = v27;
            *v6 = 0x28203e3e20316128;
            v23 = *v8;
            v24 = *v7;
        }
        // 0x4021a0
        v28 = v24;
        v29 = v23;
        *v3 = a5;
        *v4 = 0x32636465726c756d;
        v30 = function_401f60((int64_t)"(a1 >> (W_TYPE_SIZE - 1)) == 0", v28, v29, v28, v29, 0, (int64_t)&g62, (int64_t)&g62);
    }
    // 0x402218
    *(int64_t *)"(a1 >> (W_TYPE_SIZE - 1)) == 0" = *v6;
    return *v5;
}
// Address range: 0x402240 - 0x402337
int64_t function_402240(int64_t * a1, int64_t a2, int64_t * a3, int64_t * a4, uint32_t a5, int64_t * a6) {
    uint64_t v1 = (int64_t)a6;
    int64_t v2; // bp-88, 0x402240
    int64_t v3 = &v2; // 0x402262
    int64_t * v4 = (int64_t *)(v1 + 8); // 0x402278
    uint64_t v5 = *v4; // 0x402278
    int64_t v6; // 0x402240
    if (v6 == v1 && v5 == v6) {
        // 0x402330
        *(char *)(v3 + 15) = 1;
        // 0x40230b
        return (int64_t)*(char *)(v3 + 15);
    }
    int64_t * v7 = (int64_t *)((int64_t)a1 + 8); // 0x402285
    int64_t v8 = *v7; // 0x402285
    int64_t v9 = v5 - v1; // 0x402292
    int64_t v10 = v8 + (int64_t)(v5 < v1) - v5; // 0x402295
    v2 = v10;
    if (v6 == v9 == v6 == v10) {
        // 0x402330
        *(char *)(v3 + 15) = 1;
        // 0x40230b
        return (int64_t)*(char *)(v3 + 15);
    }
    if (a5 < 2) {
        // 0x40230b
        return (int64_t)*(char *)(v3 + 15);
    }
    int64_t v11 = v8; // 0x4022d4
    int64_t v12 = 1; // 0x402240
    int64_t v13; // 0x402240
    int64_t v14 = v13;
    int64_t v15; // 0x402240
    int64_t v16 = v15;
    *(int64_t *)(v3 - 8) = a2;
    *(int64_t *)(v3 - 16) = v5;
    int64_t v17 = function_401f60(v5, v14, v16, v14, v16, v11, (int64_t)&g62, (int64_t)&g62); // 0x4022e9
    int64_t v18 = *(int64_t *)(v3 + 24); // 0x4022ee
    while (v9 == v17 != (v2 == v18)) {
        if (v11 == v17) {
            // 0x402305
            if (*v4 == v18) {
                // 0x40230b
                return (int64_t)*(char *)(v3 + 15);
            }
        }
        int64_t v19 = v12 + 1; // 0x4022c8
        if ((int32_t)v19 == a5) {
            // 0x40230b
            return (int64_t)*(char *)(v3 + 15);
        }
        // 0x4022d1
        v11 = *v7;
        v12 = v19 & 0xffffffff;
        v14 = v18;
        v16 = v17;
        *(int64_t *)(v3 - 8) = a2;
        *(int64_t *)(v3 - 16) = v5;
        v17 = function_401f60(v5, v14, v16, v14, v16, v11, (int64_t)&g62, (int64_t)&g62);
        v18 = *(int64_t *)(v3 + 24);
    }
    // 0x402330
    *(char *)(v3 + 15) = 1;
    // 0x40230b
    return (int64_t)*(char *)(v3 + 15);
}
// Address range: 0x402340 - 0x4023c1
int64_t function_402340(int64_t a1, uint64_t a2) {
    // 0x402340
    int64_t v1; // bp-56, 0x402340
    int64_t v2 = function_404710(a1, &v1); // 0x40234f
    int64_t v3 = v2 - (int64_t)&v1; // 0x40235c
    uint64_t v4 = 20 - v3; // 0x402362
    int64_t v5 = g45;
    int64_t * dest_mem; // 0x40239b
    int64_t result; // 0x40239b
    if (v4 >= a2) {
        // 0x402392
        dest_mem = memcpy((int64_t *)v5, (int64_t *)v2, (int32_t)v4);
        result = (int64_t)dest_mem;
        g45 = v4 + result;
        return result;
    }
    int64_t v6 = a2 - 20 + v5 + v3;
    int64_t v7 = v5; // 0x40237d
    *(char *)v7 = 48;
    v7++;
    while (v7 != v6) {
        // 0x402380
        *(char *)v7 = 48;
        v7++;
    }
    // 0x402392
    dest_mem = memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v4);
    result = (int64_t)dest_mem;
    g45 = v4 + result;
    return result;
}
// Address range: 0x4023d0 - 0x402640
int64_t function_4023d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = g45 - g44; // 0x4023e4
    if (function_404690(1, g44, v1) == v1) {
        // 0x4023f4
        g45 = g44;
        return g44;
    }
    char * v2 = dcgettext(NULL, "write error", 5); // 0x402410
    uint32_t err_num = *__errno_location(); // 0x40242a
    error(1, err_num, "%s", v2);
    if (err_num == 0) {
        // 0x402460
        return function_401d80(1, (int64_t)"%s", 1);
    }
    // 0x402448
    if (*(int64_t *)9 == 0) {
        // 0x40244f
        *(int64_t *)1 = (int64_t)"%s";
        *(int64_t *)9 = (int64_t)err_num;
        return (int64_t)"%s";
    }
    // 0x40246d
    __assert_fail("factors->plarge[1] == 0", "src/factor.c", 565, "factor_insert_large");
    int64_t v3 = (int64_t)"src/factor.c"; // 0x402494
    uint64_t v4 = a5; // 0x402494
    int64_t v5 = 565; // 0x402494
    uint64_t v6 = (int64_t)"factor_insert_large"; // 0x402494
    int64_t v7; // 0x4023d0
    uint64_t v8; // 0x4023d0
    int64_t v9; // 0x4023d0
    uint64_t v10; // 0x4023d0
    int64_t v11; // 0x4023d0
    int64_t v12; // 0x4023d0
    int64_t result; // 0x4023d0
    int64_t v13; // 0x4023d0
    int64_t v14; // 0x4023d0
    int64_t v15; // 0x4023d0
    int64_t v16; // 0x4023d0
    int32_t v17; // 0x4025d3
    if (a5 % 2 == 0) {
        // 0x402568
        __assert_fail("b0 & 1", "src/factor.c", 483, "gcd2_odd");
        int64_t v18 = llvm_ctlz_i64((int64_t)"gcd2_odd", true); // 0x4025a1
        uint64_t v19 = v18 - llvm_ctlz_i64((int64_t)"src/factor.c", true); // 0x4025b3
        v17 = v19;
        if (v17 < 1) {
            // 0x40260a
            *(int64_t *)"b0 & 1" = (int64_t)"src/factor.c";
            return 483;
        }
        uint64_t v20 = v19 % 64; // 0x4025bc
        v11 = 483;
        v13 = 0;
        v14 = (int64_t)"src/factor.c";
        v7 = a5 << v20;
        v9 = a5 >> -v19 % 64 | (int64_t)"gcd2_odd" << v20;
        while (true) {
          lab_0x4025e0:
            // 0x4025e0
            v10 = v9;
            v8 = v7;
            int64_t v21 = v14;
            uint64_t v22 = v11;
            if (v21 > v10) {
                // 0x4025ec
                v12 = v22 - v8;
                v15 = v21 - v10 + (int64_t)(v22 < v8);
                goto lab_0x4025f2;
            } else {
                // 0x4025e5
                v12 = v22;
                v15 = v21;
                if (v22 < v8 || v21 != v10) {
                    goto lab_0x4025f2;
                } else {
                    // 0x4025ec
                    v12 = v22 - v8;
                    v15 = v21 - v10 + (int64_t)(v22 < v8);
                    goto lab_0x4025f2;
                }
            }
        }
      lab_0x40260a:
        // 0x40260a
        *(int64_t *)"b0 & 1" = v16;
        return result;
    }
    uint64_t v23; // 0x4023d0
    uint64_t result2; // 0x4023d0
    while (true) {
        // 0x4024d0
        result2 = v5;
        v23 = v3;
        int64_t v24; // 0x4023d0
        int64_t v25; // 0x4023d0
        while (v23 <= v6) {
            if (v4 < result2 == v23 == v6) {
                // break -> 0x402530
                break;
            }
            if (v23 >= v6 && v23 == v6 != v4 > result2) {
                // break (via goto) -> 0x402561
                goto lab_0x402561;
            }
            int64_t v26 = v6 - v23 + (int64_t)(v4 < result2); // 0x4024f5
            uint64_t v27 = v4 - result2;
            int64_t v28 = v26 / 2; // 0x402502
            int64_t v29 = v27 / 2 | 0x8000000000000000 * v26; // 0x402505
            v26 = v28;
            while ((v27 & 2) == 0) {
                // 0x4024f8
                v27 = v29;
                v28 = v26 / 2;
                v29 = v27 / 2 | 0x8000000000000000 * v26;
                v26 = v28;
            }
            // 0x40250e
            v25 = result2;
            v24 = v29;
            if ((v28 || v23) == 0) {
                // 0x402516
                *(int64_t *)"factors->plarge[1] == 0" = 0;
                return function_401d20(v24, v25);
            }
            v4 = v29;
            v6 = v28;
        }
        int64_t v30 = v23 - v6 + (int64_t)(result2 < v4); // 0x402536
        uint64_t v31 = result2 - v4;
        v3 = v30 / 2;
        v5 = 0x8000000000000000 * v30 | v31 / 2;
        v30 = v3;
        while ((v31 & 2) == 0) {
            // 0x402540
            v31 = v5;
            v3 = v30 / 2;
            v5 = 0x8000000000000000 * v30 | v31 / 2;
            v30 = v3;
        }
        // 0x4024c8
        v25 = v5;
        v24 = v4;
        if ((v3 || v6) == 0) {
            // 0x402516
            *(int64_t *)"factors->plarge[1] == 0" = 0;
            return function_401d20(v24, v25);
        }
    }
  lab_0x402561:
    // 0x402561
    *(int64_t *)"factors->plarge[1] == 0" = v23;
    return result2;
  lab_0x4025f2:;
    int64_t v32 = v13 + 1; // 0x4025f8
    v11 = v12;
    v13 = v32 & 0xffffffff;
    v14 = v15;
    v7 = 0x8000000000000000 * v10 | v8 / 2;
    v9 = v10 / 2;
    result = v12;
    v16 = v15;
    if (v17 == (int32_t)v32) {
        // break -> 0x40260a
        goto lab_0x40260a;
    }
    goto lab_0x4025e0;
}
// Address range: 0x402640 - 0x4026e4
int64_t function_402640(uint64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x4026da
        return function_402340(a2, 0);
    }
    uint64_t v1 = 0; // 0x402684
    uint64_t v2 = 0x3b9aca00; // 0x402684
    int64_t v3 = 0; // 0x402684
    int64_t v4 = a1 / 512 % 0x3b9aca00; // 0x402684
    int64_t v5 = a2; // 0x402684
    int32_t v6 = 64; // 0x402684
    uint64_t v7; // 0x402640
    int64_t v8; // 0x402640
    int64_t v9; // 0x402640
    int64_t v10; // 0x402640
    int64_t v11; // 0x40268e
    while (true) {
      lab_0x402688:
        // 0x402688
        v7 = v5;
        v9 = v4;
        uint64_t v12 = v2;
        v11 = 2 * v3;
        v2 = v12 / 2;
        v1 = 0x8000000000000000 * v12 | v1 / 2;
        if (v9 > v2) {
            goto lab_0x4026a7;
        } else {
            // 0x4026a0
            v10 = v11;
            v4 = v9;
            v8 = v7;
            if (v9 != v2 || v7 < v1) {
                goto lab_0x4026b1;
            } else {
                goto lab_0x4026a7;
            }
        }
    }
  lab_0x4026b7:
    // 0x4026b7
    function_402640(0, v3);
    return function_402340(v5, 9);
  lab_0x4026a7:
    // 0x4026a7
    v10 = v11 | 1;
    v4 = v9 - v2 + (int64_t)(v7 < v1);
    v8 = v7 - v1;
    goto lab_0x4026b1;
  lab_0x4026b1:
    // 0x4026b1
    v5 = v8;
    v3 = v10;
    v6--;
    if (v6 == 0) {
        // break -> 0x4026b7
        goto lab_0x4026b7;
    }
    goto lab_0x402688;
}
// Address range: 0x4026f0 - 0x4027c2
int64_t function_4026f0(int64_t a1) {
    int64_t result = g45; // 0x4026f6
    int64_t v1 = result + 1; // 0x4026fd
    char v2 = a1; // 0x402701
    *(char *)result = v2;
    g45 = v1;
    if (v2 != 10) {
        // 0x402711
        return result;
    }
    int64_t v3 = a1; // 0x402730
    int32_t v4 = g26; // 0x402730
    if (g26 == -1) {
        // 0x4027b0
        v4 = isatty(0);
        g26 = v4;
        v3 = 0;
    }
    // 0x402732
    int64_t v5; // 0x4026f0
    if (v4 != 0) {
        // 0x4027a0
        return function_4023d0(v3, v5, v5, v5, v5);
    }
    int64_t result2 = v1 - g44; // 0x402739
    if (result2 < 512) {
        // 0x402711
        return result2;
    }
    int64_t v6 = g44 + 512;
    int64_t v7 = v6 - 1; // 0x40275b
    while (*(char *)v7 != 10) {
        // 0x40275b
        v6 = v7;
        v7 = v6 - 1;
    }
    // 0x402765
    g45 = v6;
    int64_t v8 = v1 - v6; // 0x40276c
    function_4023d0(v3, v5, v5, v5, v5);
    int64_t dest_mem = (int64_t)memcpy((int64_t *)g44, (int64_t *)v6, (int32_t)v8); // 0x402784
    g45 = v8 + dest_mem;
    return dest_mem;
}
// Address range: 0x4027d0 - 0x402be1
int64_t function_4027d0(uint64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2; // 0x4027eb
    int64_t v2 = a1; // 0x4027eb
    int64_t v3; // 0x4027d0
    int64_t v4; // 0x4027d0
    int64_t v5; // 0x4027d0
    int64_t v6; // 0x4027d0
    int64_t v7; // 0x4027d0
    int64_t v8; // 0x4027d0
    int64_t v9; // 0x4027d0
    int64_t v10; // 0x4027d0
    int64_t v11; // 0x4027d0
    int64_t v12; // 0x4027d0
    int64_t v13; // 0x4027d0
    int64_t v14; // 0x4027d0
    int64_t v15; // 0x4027d0
    int64_t v16; // 0x4027d0
    int64_t v17; // 0x4027d0
    int64_t v18; // 0x4027d0
    uint64_t v19; // 0x4027d0
    int64_t v20; // 0x4027d0
    int64_t v21; // 0x4027d0
    int32_t v22; // 0x4027d0
    uint64_t v23; // 0x4027d0
    uint64_t v24; // 0x40282a
    uint64_t v25; // 0x40282d
    if (a1 >= 2) {
        while (true) {
          lab_0x402801:;
            int64_t v26 = v2;
            int64_t v27 = v5;
            int64_t v28 = v3;
            int64_t v29 = v11;
            v23 = v1;
            v13 = 1;
            v16 = v26;
            v21 = 0;
            v22 = 64;
            v18 = 0;
            while (true) {
              lab_0x402820:
                // 0x402820
                v19 = v18;
                v14 = v13;
                v24 = v16 / 2;
                v25 = v21 / 2 | 0x8000000000000000 * v16;
                if (v14 > v24) {
                    // 0x40283c
                    goto lab_0x402842;
                } else {
                    // 0x402835
                    if (v14 != v24 || v19 < v25) {
                        goto lab_0x402842;
                    } else {
                        // 0x40283c
                        goto lab_0x402842;
                    }
                }
            }
          lab_0x402847:;
            int64_t v30 = (v26 - v20 > v20 ? v26 : 0) + 2 * v20 - v26; // 0x402866
            v17 = 1;
            v7 = v26;
            v9 = 1;
            v10 = v30;
            v15 = v30;
            v12 = v29;
            v4 = v28;
            v6 = v27;
            v8 = v26;
            if (v26 > v23) {
                goto lab_0x402888;
            } else {
                goto lab_0x402b1b;
            }
        }
    }
  lab_0x402bb9:
    // 0x402bb9
    __assert_fail("(1) < (n)", "src/factor.c", 1474, "factor_using_pollard_rho");
    // 0x402bd2
    return &g62;
  lab_0x4029e0:;
    uint64_t v31 = function_401d20(0, v2); // 0x402a26
    if (v31 == 1) {
        goto lab_0x4029e0;
    } else {
        goto lab_0x402a31;
    }
  lab_0x402842:
    // 0x402842
    v20 = v19 - v25;
    int32_t v32 = v22 - 1; // 0x402842
    v13 = v14 - v24 + (int64_t)(v19 < v25);
    v16 = v24;
    v21 = v25;
    v22 = v32;
    v18 = v20;
    if (v32 == 0) {
        // break -> 0x402847
        goto lab_0x402847;
    }
    goto lab_0x402820;
  lab_0x402888:;
    int64_t v33 = v23 - v7; // 0x4028d8
    int64_t v34 = v7 - v23; // 0x4028d8
    int64_t v35 = v17; // 0x4028d8
    int64_t v36 = v7; // 0x4028d8
    int64_t v37 = v9; // 0x4028d8
    int64_t v38 = v10; // 0x4028d8
    goto lab_0x4028e0_2;
  lab_0x402b1b:
    // 0x402b1b
    __assert_fail("a < n", "src/factor.c", 1480, "factor_using_pollard_rho");
    int64_t v49 = (int64_t)"factor_using_pollard_rho"; // 0x402b34
    int64_t v50 = v15; // 0x402b34
    int64_t v51 = v12; // 0x402b34
    int64_t v52 = v4; // 0x402b34
    int64_t v53 = v6; // 0x402b34
    int64_t v54 = v8; // 0x402b34
  lab_0x402b38:
    // 0x402b38
    v33 = v51;
    v34 = v52;
    v35 = v49;
    v36 = v54;
    v37 = v53;
    v38 = v50;
    goto lab_0x4028e0_2;
  lab_0x4028e0_2:
    // 0x4028e0
    v1 = v23 + 1;
    uint64_t v39 = v38;
    v2 = v36;
    int64_t v40 = v34;
    int64_t v41 = v33;
    int64_t v42 = v35; // 0x4027d0
    int64_t v43 = v37; // 0x4027d0
    int64_t v44; // 0x4027d0
    int64_t v45; // 0x4027d0
    while (true) {
      lab_0x4028e0:
        // 0x4028e0
        v44 = v42;
        v45 = v43;
        if (v45 % 32 == 1) {
            // 0x4029c0
            if (function_401d20(0, v2) != 1) {
                goto lab_0x4029e0;
            }
        }
        int64_t v46 = v45 - 1; // 0x402950
        while (v46 != 0) {
            // 0x4028e0
            v45 = v46;
            if (v45 % 32 == 1) {
                // 0x4029c0
                if (function_401d20(0, v2) != 1) {
                    goto lab_0x4029e0;
                }
            }
            // 0x402950
            v46 = v45 - 1;
        }
        int64_t v47 = 2 * v44; // 0x402956
        int64_t v48 = v46; // 0x40295d
        v49 = 0;
        v50 = 0;
        v51 = v41;
        v52 = v40;
        v53 = 0;
        v54 = v2;
        if (v44 == 0) {
            goto lab_0x402b38;
        }
        while (true) {
          lab_0x402970:
            // 0x402970
            v48++;
            v42 = v47;
            v43 = v48;
            if (v44 != v48) {
                goto lab_0x402970;
            } else {
                goto lab_0x4028e0;
            }
        }
    }
    goto lab_0x402a31;
  lab_0x402a31:;
    uint64_t v55; // 0x4027d0
    if (v2 == v31) {
        // 0x402ba4
        v11 = v41;
        v3 = v40;
        v5 = v2;
        if (v2 < 2) {
            // break -> 0x402bb9
            goto lab_0x402bb9;
        }
        goto lab_0x402801;
    } else {
        // 0x402a40
        v55 = v2 / v31;
        if (v31 < 2) {
            goto lab_0x402b49;
        } else {
            if (v31 < 0x17ded79) {
                goto lab_0x402a8f;
            } else {
                // 0x402a61
                if ((char)function_403840(v31) == 0) {
                    goto lab_0x402b49;
                } else {
                    goto lab_0x402a8f;
                }
            }
        }
    }
  lab_0x402b49:;
    int64_t v56 = function_4027d0(v31, v1, a3); // 0x402b73
    if (v55 < 2) {
        goto lab_0x402b79;
    } else {
        goto lab_0x402abf;
    }
  lab_0x402b79:;
    int64_t v57 = 0; // 0x402b79
    int64_t result = v56; // 0x402b79
    if (v55 == 1) {
        // 0x402bd2
        return result;
    }
    goto lab_0x402b11;
  lab_0x402abf:
    if (v55 < 0x17ded79 || (char)function_403840(v55) != 0) {
        // 0x402b84
        return function_401d80(a3, v55, 1);
    }
    // 0x402af0
    v57 = v39 % v55;
    goto lab_0x402b11;
  lab_0x402a8f:
    // 0x402a8f
    v56 = function_401d80(a3, v31, 1);
    if (v55 < 2) {
        goto lab_0x402b79;
    } else {
        goto lab_0x402abf;
    }
  lab_0x402b11:
    // 0x402b11
    v17 = v44;
    v7 = v55;
    v9 = v45;
    v10 = v57;
    v15 = 0;
    v12 = v41;
    v4 = v40;
    v6 = v31;
    v8 = v55;
    if (v23 < v55) {
        goto lab_0x402888;
    } else {
        goto lab_0x402b1b;
    }
}
// Address range: 0x402bf0 - 0x403205
int64_t function_402bf0(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 >= 2; // 0x402c2c
    int64_t v2 = a1 < 2 ? 127 : 63; // 0x402c2c
    int64_t v3 = a1 < 2; // 0x402c2c
    int64_t v4; // 0x402bf0
    int64_t v5; // 0x402bf0
    int64_t v6; // 0x402bf0
    while (true) {
      lab_0x402c30:
        // 0x402c30
        v5 = v2;
        uint64_t v7 = 2 * v3; // 0x402c36
        int64_t v8 = v3 >> 63 | 2 * v1; // 0x402c3d
        if (v8 > a1) {
            // 0x402c4c
            v4 = v8 - a1 + (int64_t)(v7 < a2);
            v6 = v7 - a2;
            goto lab_0x402c52;
        } else {
            // 0x402c45
            if (v7 < a2 || v8 != a1) {
                goto lab_0x402c52;
            } else {
                // 0x402c4c
                v4 = v8 - a1 + (int64_t)(v7 < a2);
                v6 = v7 - a2;
                goto lab_0x402c52;
            }
        }
    }
  lab_0x402c5c:;
    // 0x402c5c
    int64_t v9; // 0x402bf0
    int64_t v10 = v9; // bp-168, 0x402c5f
    int64_t v11; // 0x402bf0
    uint64_t v12 = 2 * v11; // 0x402c68
    int64_t v13 = 2 * v9 | (int64_t)(v12 < v11); // 0x402c6b
    int64_t v14; // 0x402bf0
    int64_t v15; // 0x402bf0
    if (v13 > a1) {
        // 0x402c85
        v14 = (int64_t)(v12 < a2) - a1 + v13;
        v15 = v12 - a2;
        goto lab_0x402c96;
    } else {
        // 0x402c7e
        v14 = v13;
        v15 = v12;
        if (v12 < a2 || v13 != a1) {
            goto lab_0x402c96;
        } else {
            // 0x402c85
            v14 = (int64_t)(v12 < a2) - a1 + v13;
            v15 = v12 - a2;
            goto lab_0x402c96;
        }
    }
  lab_0x402f35:;
    // 0x402f35
    uint64_t v16; // 0x402bf0
    uint64_t v17; // 0x402bf0
    uint64_t v18; // 0x402f15
    int64_t v19; // 0x402f18
    int64_t v20 = (int64_t)(v18 < v16) - v17 + v19; // 0x402f38
    int64_t * v21; // 0x402bf0
    *v21 = v20;
    int64_t v22 = v20; // 0x402f43
    int64_t v23 = v18 - v16; // 0x402f43
    goto lab_0x402f46;
  lab_0x402f46:;
    int64_t v24 = v23;
    int64_t * v25; // 0x402bf0
    int64_t v26 = *v25; // 0x402f6f
    if (v26 != 0) {
        // break (via goto) -> 0x402f7d
        goto lab_0x402f7d;
    }
    int64_t v27 = v22; // 0x402eec
    int64_t v28 = v24; // 0x402eec
    if (v24 != 1) {
        // break -> 0x40304b
        goto lab_0x40304b;
    }
    goto lab_0x402ef2;
  lab_0x402e3e:;
    // 0x402e3e
    uint64_t v38; // 0x402e1c
    int64_t v39; // 0x402e1f
    int64_t v40 = (int64_t)(v38 < v16) - v17 + v39; // 0x402e41
    int64_t * v41; // 0x402bf0
    *v41 = v40;
    int64_t v42 = v38 - v16; // 0x402e4c
    int64_t v43 = v40; // 0x402e4c
    goto lab_0x402e4f;
  lab_0x402e4f:;
    // 0x402e4f
    int64_t v44; // 0x402bf0
    int64_t v45 = v44 + 1; // 0x402e4f
    int64_t v46 = v42; // 0x402e56
    int64_t v47 = v43; // 0x402e56
    v44 = v45;
    int64_t v48; // 0x402dca
    if (v48 == v45) {
        // break -> 0x402e58
        goto lab_0x402e58;
    }
    goto lab_0x402e00;
  lab_0x402d51:;
    // 0x402d51
    uint64_t v53; // 0x402d2f
    int64_t v54; // 0x402d34
    int64_t v55 = (int64_t)(v53 < v16) - v17 + v54; // 0x402d54
    *v41 = v55;
    int64_t v56 = v53 - v16; // 0x402d5f
    int64_t v57 = v55; // 0x402d5f
    goto lab_0x402d62;
  lab_0x402d62:;
    int64_t v58 = v56;
    int64_t * v59; // 0x402bf0
    uint64_t v60 = *v59; // 0x402d67
    int64_t v61 = v60 - v58; // 0x402d6c
    int64_t * v62; // 0x402bf0
    int64_t v63 = *v62 - v57 + (int64_t)(v60 < v58); // 0x402d6f
    int64_t v64 = v63; // 0x402d75
    int64_t v65 = v61; // 0x402d75
    if (v63 < 0) {
        int64_t v66 = v61 + v16; // 0x402d77
        v64 = v63 + v17 + (int64_t)(v66 < v61);
        v65 = v66;
    }
    // 0x402d7d
    int64_t v32; // 0x402d0a
    int64_t * v31; // 0x402bf0
    *v31 = v32;
    int64_t * v33; // 0x402bf0
    *v33 = v16;
    int64_t * v67; // 0x402bf0
    int64_t v68 = *v67; // 0x402d84
    int64_t v35; // 0x402d20
    int64_t v69 = function_401f60(v35, v10, v68, v64, v65, v17, (int64_t)&g62, (int64_t)&g62); // 0x402d93
    *v67 = v69;
    int64_t * v37; // 0x402bf0
    v10 = *v37;
    uint64_t v70; // 0x402bf0
    int64_t v71; // 0x402bf0
    int64_t v72; // 0x402bf0
    int64_t v73; // 0x402bf0
    if (v70 % 32 == 1) {
        // 0x402e88
        if (*v25 != 0) {
            // break -> 0x402ec8
            goto lab_0x402ec8;
        }
        int64_t v74 = *v41; // 0x402eaf
        *v21 = v74;
        v73 = v74;
        v72 = v58;
    } else {
        // 0x402dbb
        v73 = *v41;
        v72 = v71;
    }
    int64_t v75 = v73;
    int64_t v76 = v70 - 1; // 0x402dc0
    int64_t v77 = v58; // 0x402dc4
    int64_t v78 = v75; // 0x402dc4
    int64_t v79 = v76; // 0x402dc4
    int64_t v80 = v72; // 0x402dc4
    int64_t * v52; // 0x402bf0
    int64_t * v81; // 0x402bf0
    int64_t * v82; // 0x402bf0
    if (v76 == 0) {
        // 0x402dca
        v48 = *v81;
        *v62 = v75;
        *v59 = 2 * v48;
        int64_t v83 = v58; // 0x402de3
        int64_t v84 = v75; // 0x402de3
        int64_t v85 = v58; // 0x402de3
        if (v48 != 0) {
            // 0x402de5
            *v82 = v58;
            v46 = v58;
            v47 = v75;
            v44 = v76;
            while (true) {
              lab_0x402e00:;
                int64_t v49 = v47;
                int64_t v50 = v46;
                *v31 = v32;
                *v33 = v16;
                uint64_t v51 = function_401f60(v35, v49, v50, v49, v50, v17, (int64_t)&g62, (int64_t)&g62); // 0x402e12
                v38 = v51 + *v52;
                v39 = *v37 + (int64_t)(v38 < v51);
                *v41 = v39;
                if (v17 < v39) {
                    goto lab_0x402e3e;
                } else {
                    // 0x402e37
                    v42 = v38;
                    v43 = v39;
                    if (v38 < v16 || v17 != v39) {
                        goto lab_0x402e4f;
                    } else {
                        goto lab_0x402e3e;
                    }
                }
            }
          lab_0x402e58:;
            int64_t v86 = *v82; // 0x402e58
            v83 = v86;
            int64_t v87; // 0x402bf0
            v84 = v87;
            int64_t v88; // 0x402bf0
            v85 = v88;
        }
        // 0x402e60
        *v59 = v83;
        *v21 = v84;
        *v81 = 0;
        v77 = v85;
        v78 = v84;
        v79 = *v81;
        v80 = v85;
    }
    int64_t v89 = v77; // 0x402bf0
    int64_t v90 = v78; // 0x402bf0
    int64_t v91 = v79; // 0x402bf0
    int64_t v92 = v80; // 0x402bf0
    goto lab_0x402d10;
  lab_0x403170:;
    // 0x403170
    int64_t v96; // 0x402bf0
    int64_t * v97; // 0x402bf0
    function_4027d0(v96, *v52 + 1, *v97);
    goto lab_0x4030f5;
  lab_0x4030f5:;
    // 0x4030f5
    unsigned char v98; // 0x403068
    int64_t v99 = v98; // 0x403068
    int64_t v100 = (2 - v24 * v99) * v99; // 0x40307b
    int64_t v101 = (2 - v100 * v24) * v100; // 0x40308a
    goto lab_0x403007;
    int64_t v103 = 0; // 0x40316b
    int64_t v104 = (2 - v101 * v24) * v101 * v16; // 0x40316b
    int64_t v105; // 0x403063
    int64_t v106 = v105; // 0x40316b
    goto lab_0x402cd0;
  lab_0x4030e3:;
    // 0x4030e3
    int64_t v112; // 0x4030d6
    function_401d80(*v97, v112, 1);
    goto lab_0x4030f5;
  lab_0x402c52:
    // 0x402c52
    v11 = v6;
    v9 = v4;
    v1 = v9;
    v2 = v5 - 1;
    v3 = v11;
    if (v5 == 0) {
        // break -> 0x402c5c
        goto lab_0x402c5c;
    }
    goto lab_0x402c30;
  lab_0x402c96:;
    int64_t result = v14; // 0x402ca4
    if (a1 == 0 == a2 == 1) {
        // 0x40303c
        return result;
    }
    int64_t v111 = &v10; // 0x402c00
    v25 = (int64_t *)(v111 + 96);
    v31 = (int64_t *)(v111 - 8);
    v33 = (int64_t *)(v111 - 16);
    v35 = v111 + 104;
    v37 = (int64_t *)v35;
    v52 = (int64_t *)(v111 + 24);
    v41 = (int64_t *)(v111 + 72);
    v62 = (int64_t *)(v111 + 80);
    v59 = (int64_t *)(v111 + 16);
    v67 = (int64_t *)(v111 + 8);
    v21 = (int64_t *)(v111 + 88);
    v81 = (int64_t *)(v111 + 32);
    v82 = (int64_t *)(v111 + 40);
    v97 = (int64_t *)(v111 + 48);
    v103 = a1;
    v104 = a2;
    v106 = 1;
    int64_t v36; // 0x402ecd
    while (true) {
      lab_0x402cd0:
        // 0x402cd0
        v16 = v104;
        v17 = v103;
        unsigned char v107 = *(char *)(v16 / 2 % 128 + (int64_t)&g4); // 0x402cd9
        int64_t v108 = v107; // 0x402cd9
        int64_t v109 = (2 - v16 * v108) * v108; // 0x402cec
        int64_t v110 = (2 - v109 * v16) * v109; // 0x402cfb
        v32 = (2 - v110 * v16) * v110;
        v89 = v15;
        v90 = v14;
        v91 = v106;
        v92 = v15;
        while (true) {
          lab_0x402d10:
            // 0x402d10
            v71 = v92;
            v70 = v91;
            int64_t v93 = v90;
            int64_t v94 = v89;
            *v31 = v32;
            *v33 = v16;
            uint64_t v95 = function_401f60(v35, v93, v94, v93, v94, v17, (int64_t)&g62, (int64_t)&g62); // 0x402d25
            v53 = *v52 + v95;
            v54 = *v37 + (int64_t)(v53 < v95);
            *v41 = v54;
            if (v17 < v54) {
                goto lab_0x402d51;
            } else {
                // 0x402d4a
                v56 = v53;
                v57 = v54;
                if (v53 < v16 || v17 != v54) {
                    goto lab_0x402d62;
                } else {
                    goto lab_0x402d51;
                }
            }
        }
      lab_0x402ec8:
        // 0x402ec8
        *v82 = v70;
        v36 = *v52;
        *(int64_t *)(v111 + 56) = v58;
        v27 = *v21;
        v28 = v71;
        while (true) {
          lab_0x402ef2:;
            int64_t v29 = v28;
            int64_t v30 = v27; // 0x402ef2
            *v31 = v32;
            *v33 = v16;
            uint64_t v34 = function_401f60(v35, v30, v29, v30, v29, v17, (int64_t)&g62, (int64_t)&g62); // 0x402f0b
            v18 = v34 + v36;
            v19 = *v37 + (int64_t)(v18 < v34);
            *v21 = v19;
            if (v17 < v19) {
                goto lab_0x402f35;
            } else {
                // 0x402f2e
                v22 = v19;
                v23 = v18;
                if (v18 < v16 || v17 != v19) {
                    goto lab_0x402f46;
                } else {
                    goto lab_0x402f35;
                }
            }
        }
      lab_0x40304b:
        // 0x40304b
        *v52 = v36;
        v105 = *v82;
        v98 = *(char *)(v24 / 2 % 128 + (int64_t)&g4);
        // 0x4030b6
        v96 = v24;
        if (v24 < 2) {
            goto lab_0x403170;
        } else {
            // 0x4030c0
            v112 = v24;
            if (v24 < 0x17ded79) {
                goto lab_0x4030e3;
            } else {
                // 0x4030c9
                *v82 = v24;
                int64_t v113 = function_403840(v24); // 0x4030d1
                v112 = *v82;
                v96 = v112;
                if ((char)v113 == 0) {
                    goto lab_0x403170;
                } else {
                    goto lab_0x4030e3;
                }
            }
        }
    }
  lab_0x402f7d:
    // 0x402f7d
    *v52 = v36;
    if (v16 == v24 == v17 == v26) {
        // 0x40303c
        return function_402bf0(v17, v16, v36 + 1, *v97);
    }
    // 0x402f93
    v10 = v24;
    unsigned char v114 = *(char *)(v24 / 2 % 128 + (int64_t)&g4); // 0x402fa3
    int64_t v115 = v114; // 0x402fa3
    int64_t v116 = (2 - v24 * v115) * v115; // 0x402fb6
    int64_t v117 = (2 - v116 * v24) * v116; // 0x402fc5
    int64_t v118 = v117 * v16 * (2 - v117 * v24); // 0x402fd7
    int64_t v102 = v118; // 0x402fe6
    if ((char)function_404050(v26, v24) == 0) {
        // 0x402fec
        function_402bf0(*v25, v10, *v52 + 1, *v97);
        v102 = v118;
    }
  lab_0x403007:
    // 0x403007
    if (v102 < 2) {
        // 0x403192
        return function_4027d0(v102, *v52, *v97);
    }
    if (v102 >= 0x17ded79) {
        // 0x40301a
        if ((char)function_403840(v102) == 0) {
            // 0x403192
            return function_4027d0(v102, *v52, *v97);
        }
    }
    // 0x40303c
    return function_401d80(*v97, v102, 1);
}
// Address range: 0x403210 - 0x403836
int64_t function_403210(int32_t a1, uint64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    *(char *)(v1 + 250) = 0;
    *(int64_t *)(v1 + 8) = 0;
    if (a1 == 0 == a2 < 2) {
        // 0x403245
        int64_t result; // 0x403210
        return result;
    }
    int32_t v2 = a1; // 0x40325c
    int64_t v3 = a2; // 0x40325c
    int64_t v4; // 0x403210
    int64_t v5; // 0x403210
    int64_t v6; // 0x403210
    if (a2 % 2 != 0) {
        goto lab_0x4032f5;
    } else {
        uint64_t v7 = (int64_t)a1;
        if (a2 != 0) {
            uint64_t v8 = llvm_cttz_i64(a2, true); // 0x4032cf
            int64_t v9 = function_401d80(v1, 2, v8); // 0x4032f0
            v2 = v7 >> v8;
            v6 = v9;
            v3 = v7 << -v8 % 64 | a2 >> v8;
            goto lab_0x4032f5;
        } else {
            uint64_t v10 = a1 == 0 ? a4 : llvm_cttz_i64(v7, true); // 0x403276
            v5 = function_401d80(v1, 2, v10 + 64 & 0xffffffff);
            v4 = v7 >> v10 % 64;
            goto lab_0x403291;
        }
    }
  lab_0x4032f5:
    // 0x4032f5
    v5 = v6;
    v4 = v3;
    int64_t v11; // 0x403210
    int64_t v12; // 0x403210
    int64_t v13; // 0x403210
    int64_t v14; // 0x403210
    int64_t result3; // 0x403210
    int64_t v15; // 0x403210
    int32_t v16; // 0x403210
    int32_t v17; // 0x403210
    if (v2 == 0) {
        goto lab_0x403291;
    } else {
        function_401d80(v1, 3, 1);
        while (true) {
            function_401d80(v1, 3, 1);
        }
        // 0x4033d8
        v16 = 0;
        v14 = 0;
        v15 = 1;
        v11 = 0;
        v12 = 0;
        v17 = 0;
        result3 = 0;
        v13 = 0;
        goto lab_0x403670;
    }
  lab_0x403291:;
    int32_t v18 = 0; // 0x4032b5
    int64_t v19 = v5; // 0x4032b5
    int64_t v20 = 0; // 0x4032b5
    int64_t v21 = -0x5555555555555555; // 0x4032b5
    int64_t v22 = 3; // 0x4032b5
    int64_t v23 = 26; // 0x4032b5
    int64_t v24 = v4; // 0x4032b5
    int64_t v25 = 0x5555555555555555; // 0x4032b5
    goto lab_0x4034af;
  lab_0x4034af:;
    uint64_t v26 = v25;
    int64_t v27 = v24;
    int64_t v28 = v22;
    int64_t v29 = v21;
    int64_t v30 = v20;
    int64_t v31 = 16 * v30; // 0x4034b2
    int64_t v32 = v27 * v29; // 0x4034b6
    int64_t v33 = v32; // 0x4034c4
    int64_t * v34; // 0x403210
    int64_t * v35; // 0x403210
    int64_t v36; // 0x403210
    int64_t v37; // 0x403210
    int64_t v38; // 0x403210
    if (v32 > v26) {
        int64_t * v39 = (int64_t *)(v31 + (int64_t)&g5 + 16);
        int64_t v40 = *v39 * v27; // 0x4033f4
        int64_t * v41 = (int64_t *)(v31 + (int64_t)&g5 + 24);
        v37 = v19;
        v36 = v27;
        v35 = v41;
        v34 = v39;
        v38 = v40;
        if (v40 > *v41) {
            goto lab_0x403402;
        } else {
            goto lab_0x403510;
        }
    } else {
        int64_t v42 = v33;
        int64_t v43 = function_401d80(v1, v28, 1); // 0x4034df
        int64_t v44 = v42 * v29; // 0x4034ec
        while (v44 <= v26) {
            // 0x4034ca
            v42 = v44;
            v43 = function_401d80(v1, v28, 1);
            v44 = v42 * v29;
        }
        int64_t * v45 = (int64_t *)(v31 + (int64_t)&g5 + 16);
        int64_t v46 = *v45 * v42; // 0x4034f9
        int64_t * v47 = (int64_t *)(v31 + (int64_t)&g5 + 24);
        v37 = v43;
        v36 = v42;
        v35 = v47;
        v34 = v45;
        v38 = v46;
        if (v46 > *v47) {
            goto lab_0x403402;
        } else {
            goto lab_0x403510;
        }
    }
  lab_0x403490:;
    int64_t v48 = v15 & 0xffffffff;
    int64_t v49 = 16 * v48; // 0x40349d
    v18 = v16;
    v19 = v14;
    v20 = v48;
    v21 = *(int64_t *)(v49 + (int64_t)&g5);
    v22 = v11;
    v23 = (int64_t)*(char *)(v48 + (int64_t)&g7);
    v24 = v12;
    v25 = *(int64_t *)(v49 + (int64_t)&g6);
    goto lab_0x4034af;
  lab_0x403670:
    // 0x403670
    if (v17 != 0) {
        int64_t v50 = v17; // 0x403800
        int64_t result2 = function_404050(v50, v13); // 0x403808
        if ((char)result2 == 0) {
            // 0x403811
            return function_402bf0(v50, v13, 1, v1);
        }
        // 0x403245
        return result2;
    }
    // 0x40367c
    if (v13 < 2) {
        // 0x403245
        return result3;
    }
    int64_t result4 = function_404050(0, v13); // 0x40368b
    if ((char)result4 == 0) {
        // 0x403698
        return function_4027d0(v13, 1, v1);
    }
    // 0x403245
    return result4;
  lab_0x403402:;
    int64_t * v51 = (int64_t *)(v31 + (int64_t)&g5 + 32);
    int64_t v52 = *v51 * v36; // 0x403406
    int64_t * v53 = (int64_t *)(v31 + (int64_t)&g5 + 40);
    int64_t v54 = v37; // 0x40340e
    int64_t v55 = v36; // 0x40340e
    int64_t * v56; // 0x403210
    int64_t * v57; // 0x403210
    int64_t v58; // 0x403210
    char * v59; // 0x403210
    int64_t v60; // 0x403210
    if (v52 > *v53) {
        goto lab_0x403414;
    } else {
        int64_t v61 = v30 + 1;
        v59 = (char *)((v61 & 0xffffffff) + 0x40efa0);
        v58 = v61;
        v57 = v53;
        v56 = v51;
        v60 = v52;
        goto lab_0x403558;
    }
  lab_0x403510:;
    int64_t v62 = v30 + 1;
    char * v63 = (char *)((v62 & 0xffffffff) + 0x40efa0);
    int64_t v64 = v38;
    int64_t v65 = function_401d80(v1, v28 + (int64_t)*v63, 1); // 0x40352e
    int64_t v66 = *v34 * v64; // 0x403537
    while (v66 <= *v35) {
        // 0x40351e
        v64 = v66;
        v65 = function_401d80(v1, v28 + (int64_t)*v63, 1);
        v66 = *v34 * v64;
    }
    int64_t * v67 = (int64_t *)(v31 + (int64_t)&g5 + 32);
    int64_t v68 = *v67 * v64; // 0x403545
    int64_t * v69 = (int64_t *)(v31 + (int64_t)&g5 + 40);
    v54 = v65;
    v55 = v64;
    v59 = v63;
    v58 = v62;
    v57 = v69;
    v56 = v67;
    v60 = v68;
    if (v68 > *v69) {
        goto lab_0x403414;
    } else {
        goto lab_0x403558;
    }
  lab_0x403414:;
    int64_t * v70 = (int64_t *)(v31 + (int64_t)&g5 + 48);
    int64_t v71 = *v70 * v55; // 0x403418
    int64_t * v72 = (int64_t *)(v31 + (int64_t)&g5 + 56);
    int64_t v73 = v54; // 0x403420
    int64_t v74 = v55; // 0x403420
    int64_t * v75; // 0x403210
    int64_t * v76; // 0x403210
    int64_t v77; // 0x403210
    char * v78; // 0x403210
    char * v79; // 0x403210
    int64_t v80; // 0x403210
    if (*v72 >= v71) {
        int64_t v81 = v30 + 1; // 0x4035b0
        v79 = (char *)((v30 + 2 & 0xffffffff) + 0x40efa0);
        v78 = (char *)((v81 & 0xffffffff) + 0x40efa0);
        v77 = v81;
        v76 = v72;
        v75 = v70;
        v80 = v71;
        goto lab_0x4035b0;
    } else {
        goto lab_0x403426;
    }
  lab_0x403558:;
    char * v82 = (char *)((v30 + 2 & 0xffffffff) + 0x40efa0);
    int64_t v83 = v28 + (int64_t)*v59 + (int64_t)*v82; // 0x403570
    int64_t v84 = v60;
    int64_t v85 = function_401d80(v1, v83, 1); // 0x403583
    int64_t v86 = *v56 * v84; // 0x40358c
    while (v86 <= *v57) {
        // 0x403573
        v84 = v86;
        v85 = function_401d80(v1, v83, 1);
        v86 = *v56 * v84;
    }
    int64_t * v87 = (int64_t *)(v31 + (int64_t)&g5 + 48);
    int64_t v88 = *v87 * v84; // 0x40359a
    int64_t * v89 = (int64_t *)(v31 + (int64_t)&g5 + 56);
    v73 = v85;
    v74 = v84;
    v79 = v82;
    v78 = v59;
    v77 = v58;
    v76 = v89;
    v75 = v87;
    v80 = v88;
    if (*v89 < v88) {
        goto lab_0x403426;
    } else {
        goto lab_0x4035b0;
    }
  lab_0x403426:;
    int64_t * v90 = (int64_t *)(v31 + (int64_t)&g5 + 64);
    int64_t v91 = *v90 * v74; // 0x40342a
    int64_t * v92 = (int64_t *)(v31 + (int64_t)&g5 + 72);
    int64_t v93 = v73; // 0x403432
    int64_t v94 = v74; // 0x403432
    int64_t * v95; // 0x403210
    int64_t * v96; // 0x403210
    int64_t v97; // 0x403210
    int64_t v98; // 0x403210
    if (*v92 >= v91) {
        // 0x403426
        v97 = v30 + 1;
        v96 = v92;
        v95 = v90;
        v98 = v91;
        goto lab_0x403610;
    } else {
        goto lab_0x403438;
    }
  lab_0x4035b0:;
    unsigned char v99 = *v78; // 0x4035b3
    unsigned char v100 = *(char *)((v30 + 3 & 0xffffffff) + 0x40efa0); // 0x4035be
    unsigned char v101 = *v79; // 0x4035cb
    int64_t v102 = v28 + (int64_t)v99 + (int64_t)v100 + (int64_t)v101; // 0x4035d5
    int64_t v103 = v80;
    int64_t v104 = function_401d80(v1, v102, 1); // 0x4035e8
    int64_t v105 = *v75 * v103; // 0x4035f1
    while (v105 <= *v76) {
        // 0x4035d8
        v103 = v105;
        v104 = function_401d80(v1, v102, 1);
        v105 = *v75 * v103;
    }
    int64_t * v106 = (int64_t *)(v31 + (int64_t)&g5 + 64);
    int64_t v107 = *v106 * v103; // 0x4035ff
    int64_t * v108 = (int64_t *)(v31 + (int64_t)&g5 + 72);
    v93 = v104;
    v94 = v103;
    v97 = v77;
    v96 = v108;
    v95 = v106;
    v98 = v107;
    if (*v108 < v107) {
        goto lab_0x403438;
    } else {
        goto lab_0x403610;
    }
  lab_0x403438:;
    int64_t * v109 = (int64_t *)(v31 + (int64_t)&g5 + 80); // 0x403438
    int64_t v110 = *v109 * v94; // 0x40343c
    int64_t * v111 = (int64_t *)(v31 + (int64_t)&g5 + 88); // 0x403440
    int64_t v112 = v93; // 0x403444
    int64_t v113 = v94; // 0x403444
    if (v110 <= *v111) {
        int64_t v114 = v30 + 6; // 0x403787
        int64_t v115 = v30 + 1 & 0xffffffff;
        int64_t v116 = v115 + 1; // 0x40379a
        unsigned char v117 = *(char *)(v115 + (int64_t)&g8); // 0x40379d
        int64_t v118 = v28 + (int64_t)v117; // 0x4037a4
        int64_t v119 = v118; // 0x4037aa
        while ((int32_t)v114 != (int32_t)v116) {
            // 0x403798
            v115 = v116 & 0xffffffff;
            v116 = v115 + 1;
            v117 = *(char *)(v115 + (int64_t)&g8);
            v118 = v119 + (int64_t)v117;
            v119 = v118;
        }
        int64_t v120 = function_401d80(v1, v118, 1); // 0x4037bb
        int64_t v121 = *v109 * v110; // 0x4037c9
        v112 = v120;
        v113 = v110;
        v114 &= 0xffffffff;
        while (v121 <= *v111) {
            int64_t v122 = v121;
            v115 = v30 + 1 & 0xffffffff;
            v116 = v115 + 1;
            v117 = *(char *)(v115 + (int64_t)&g8);
            v118 = v28 + (int64_t)v117;
            v119 = v118;
            while ((int32_t)v114 != (int32_t)v116) {
                // 0x403798
                v115 = v116 & 0xffffffff;
                v116 = v115 + 1;
                v117 = *(char *)(v115 + (int64_t)&g8);
                v118 = v119 + (int64_t)v117;
                v119 = v118;
            }
            // 0x4037ac
            v120 = function_401d80(v1, v118, 1);
            v121 = *v109 * v122;
            v112 = v120;
            v113 = v122;
            v114 &= 0xffffffff;
        }
    }
    int64_t * v123 = (int64_t *)(v31 + (int64_t)&g5 + 96); // 0x40344a
    int64_t v124 = *v123 * v113; // 0x40344e
    int64_t * v125 = (int64_t *)(v31 + (int64_t)&g5 + 104); // 0x403452
    int64_t v126 = v112; // 0x403456
    int64_t v127 = v113; // 0x403456
    if (*v125 >= v124) {
        int64_t v128 = v30 + 7; // 0x403727
        int64_t v129 = v30 + 1 & 0xffffffff;
        int64_t v130 = v129 + 1; // 0x40373a
        unsigned char v131 = *(char *)(v129 + (int64_t)&g8); // 0x40373d
        int64_t v132 = v28 + (int64_t)v131; // 0x403744
        int64_t v133 = v132; // 0x40374a
        while ((int32_t)v128 != (int32_t)v130) {
            // 0x403738
            v129 = v130 & 0xffffffff;
            v130 = v129 + 1;
            v131 = *(char *)(v129 + (int64_t)&g8);
            v132 = v133 + (int64_t)v131;
            v133 = v132;
        }
        int64_t v134 = function_401d80(v1, v132, 1); // 0x40375b
        int64_t v135 = *v123 * v124; // 0x403769
        v126 = v134;
        v127 = v124;
        v128 &= 0xffffffff;
        while (v135 <= *v125) {
            int64_t v136 = v135;
            v129 = v30 + 1 & 0xffffffff;
            v130 = v129 + 1;
            v131 = *(char *)(v129 + (int64_t)&g8);
            v132 = v28 + (int64_t)v131;
            v133 = v132;
            while ((int32_t)v128 != (int32_t)v130) {
                // 0x403738
                v129 = v130 & 0xffffffff;
                v130 = v129 + 1;
                v131 = *(char *)(v129 + (int64_t)&g8);
                v132 = v133 + (int64_t)v131;
                v133 = v132;
            }
            // 0x40374c
            v134 = function_401d80(v1, v132, 1);
            v135 = *v123 * v136;
            v126 = v134;
            v127 = v136;
            v128 &= 0xffffffff;
        }
    }
    int64_t * v137 = (int64_t *)(v31 + (int64_t)&g5 + 112); // 0x40345c
    int64_t v138 = *v137 * v127; // 0x403460
    int64_t * v139 = (int64_t *)(v31 + (int64_t)&g5 + 120); // 0x403464
    int64_t v140 = v126; // 0x403468
    int64_t v141 = v127; // 0x403468
    if (v138 <= *v139) {
        int64_t v142 = v30 + 8; // 0x4036c7
        int64_t v143 = v30 + 1 & 0xffffffff;
        int64_t v144 = v143 + 1; // 0x4036da
        unsigned char v145 = *(char *)(v143 + (int64_t)&g8); // 0x4036dd
        int64_t v146 = v28 + (int64_t)v145; // 0x4036e4
        int64_t v147 = v146; // 0x4036ea
        while ((int32_t)v142 != (int32_t)v144) {
            // 0x4036d8
            v143 = v144 & 0xffffffff;
            v144 = v143 + 1;
            v145 = *(char *)(v143 + (int64_t)&g8);
            v146 = v147 + (int64_t)v145;
            v147 = v146;
        }
        int64_t v148 = function_401d80(v1, v146, 1); // 0x4036fb
        int64_t v149 = *v137 * v138; // 0x403709
        v140 = v148;
        v141 = v138;
        v142 &= 0xffffffff;
        while (v149 <= *v139) {
            int64_t v150 = v149;
            v143 = v30 + 1 & 0xffffffff;
            v144 = v143 + 1;
            v145 = *(char *)(v143 + (int64_t)&g8);
            v146 = v28 + (int64_t)v145;
            v147 = v146;
            while ((int32_t)v142 != (int32_t)v144) {
                // 0x4036d8
                v143 = v144 & 0xffffffff;
                v144 = v143 + 1;
                v145 = *(char *)(v143 + (int64_t)&g8);
                v146 = v147 + (int64_t)v145;
                v147 = v146;
            }
            // 0x4036ec
            v148 = function_401d80(v1, v146, 1);
            v149 = *v137 * v150;
            v140 = v148;
            v141 = v150;
            v142 &= 0xffffffff;
        }
    }
    int64_t v151 = v23 + v28; // 0x40346e
    v17 = v18;
    result3 = v140;
    v13 = v141;
    if (v141 < v151 * v151) {
        goto lab_0x403670;
    } else {
        int64_t v152 = v30 + 8; // 0x403481
        v16 = v18;
        v14 = v140;
        v15 = v152;
        v11 = v151;
        v12 = v141;
        v17 = v18;
        result3 = v140;
        v13 = v141;
        if ((int32_t)v152 < 668) {
            goto lab_0x403490;
        } else {
            goto lab_0x403670;
        }
    }
  lab_0x403610:;
    int64_t v153 = v30 + 5; // 0x403617
    int64_t v154 = v97 & 0xffffffff;
    int64_t v155 = v154 + 1; // 0x40362a
    unsigned char v156 = *(char *)(v154 + (int64_t)&g8); // 0x40362d
    int64_t v157 = v28 + (int64_t)v156; // 0x403634
    int64_t v158 = v157; // 0x40363a
    while ((int32_t)v153 != (int32_t)v155) {
        // 0x403628
        v154 = v155 & 0xffffffff;
        v155 = v154 + 1;
        v156 = *(char *)(v154 + (int64_t)&g8);
        v157 = v158 + (int64_t)v156;
        v158 = v157;
    }
    int64_t v159 = function_401d80(v1, v157, 1); // 0x40364b
    int64_t v160 = *v95 * v98; // 0x403659
    v93 = v159;
    v94 = v98;
    v153 &= 0xffffffff;
    int64_t v161 = v160; // 0x403661
    while (v160 <= *v96) {
        // 0x40361b
        v154 = v97 & 0xffffffff;
        v155 = v154 + 1;
        v156 = *(char *)(v154 + (int64_t)&g8);
        v157 = v28 + (int64_t)v156;
        v158 = v157;
        while ((int32_t)v153 != (int32_t)v155) {
            // 0x403628
            v154 = v155 & 0xffffffff;
            v155 = v154 + 1;
            v156 = *(char *)(v154 + (int64_t)&g8);
            v157 = v158 + (int64_t)v156;
            v158 = v157;
        }
        // 0x40363c
        v159 = function_401d80(v1, v157, 1);
        v160 = *v95 * v161;
        v93 = v159;
        v94 = v161;
        v153 &= 0xffffffff;
        v161 = v160;
    }
    goto lab_0x403438;
}
// Address range: 0x403840 - 0x404045
int64_t function_403840(uint64_t a1) {
    // 0x403840
    int32_t v1; // 0x403840
    uint32_t v2 = v1;
    int64_t v3 = a1 - 1; // 0x403844
    int64_t v4 = v3; // 0x403861
    int32_t v5 = 0; // 0x403861
    if (v3 % 2 == 0) {
        uint64_t v6 = v4;
        v4 = v6 / 2;
        int64_t v7 = 1; // 0x403873
        int64_t v8 = v7 & 0xffffffff; // 0x40387a
        while ((v6 & 2) == 0) {
            // 0x403870
            v6 = v4;
            v4 = v6 / 2;
            v7 = v8 + 1;
            v8 = v7 & 0xffffffff;
        }
        // 0x40387c
        v5 = v7;
    }
    unsigned char v9 = *(char *)(a1 / 2 % 128 + (int64_t)&g4); // 0x403894
    int64_t v10 = v9; // 0x403894
    int64_t v11 = (2 - v10 * a1) * v10; // 0x4038a7
    int64_t v12 = (2 - v11 * a1) * v11; // 0x4038b6
    int64_t v13 = 1; // 0x4038cf
    uint64_t v14 = a1; // 0x4038cf
    uint64_t v15 = 0; // 0x4038cf
    int32_t v16 = 64; // 0x4038cf
    int64_t v17 = 0; // 0x4038cf
    int64_t v18; // 0x403840
    while (true) {
      lab_0x4038d0:;
        uint64_t v19 = v17;
        uint64_t v20 = v14;
        int64_t v21 = v13;
        v14 = v20 / 2;
        v15 = v15 / 2 | 0x8000000000000000 * v20;
        if (v21 > v14) {
            // 0x4038ec
            v13 = v21 - v14 + (int64_t)(v19 < v15);
            v18 = v19 - v15;
            goto lab_0x4038f2;
        } else {
            // 0x4038e5
            v13 = v21;
            v18 = v19;
            if (v21 != v14 || v19 < v15) {
                goto lab_0x4038f2;
            } else {
                // 0x4038ec
                v13 = v21 - v14 + (int64_t)(v19 < v15);
                v18 = v19 - v15;
                goto lab_0x4038f2;
            }
        }
    }
  lab_0x4038f7:;
    int64_t v22 = (2 - v12 * a1) * v12; // 0x4038c7
    int64_t v23; // 0x403840
    int64_t v24 = (a1 - v23 > v23 ? a1 : 0) + 2 * v23 - a1; // 0x403928
    int64_t v25 = function_401ed0(a1, v22, v24, v4, v5, v23); // 0x40392f
    if ((char)v25 == 0) {
        // 0x403a51
        return 0;
    }
    // 0x403940
    int64_t v26; // bp-312, 0x403840
    function_403210(0, v3, &v26, v4);
    uint32_t v27 = v1 % 256;
    int64_t v28 = v24; // 0x40397d
    int64_t v29 = (int64_t)&g8; // 0x40397d
    int64_t v30 = 2; // 0x40397d
    int64_t v31; // 0x403840
    int64_t v32; // 0x403840
    char * v33; // bp-768, 0x403840
    int32_t v34; // 0x403840
    while (true) {
        int64_t v35 = v29;
        v32 = v25;
        if (v27 == 0) {
            // break -> 0x403a51
            break;
        }
        int64_t v36; // bp-296, 0x403840
        int64_t v37 = &v36;
        int64_t v38 = function_401e60(v28, v3 / *(int64_t *)v37, a1, v22); // 0x4039aa
        int64_t v39; // bp-360, 0x403840
        while (8 * (int64_t)(v27 - 1) + 64 + (int64_t)&v39 != v37) {
            int64_t v40 = v37 + 8; // 0x4039c1
            if (v38 == v23) {
                goto lab_0x4039c8;
            }
            v37 = v40;
            v38 = function_401e60(v28, v3 / *(int64_t *)v37, a1, v22);
        }
        // 0x403a48
        v32 = v25;
        if (v38 != v23) {
            // break -> 0x403a51
            break;
        }
      lab_0x4039c8:;
        int64_t v41 = v30 + (int64_t)*(char *)v35; // 0x4039cd
        if (false) {
            // 0x403ac5
            __assert_fail("(s1) < (n)", "src/factor.c", 1268, "prime_p");
            if ((int64_t)"src/factor.c" != 1) {
                int64_t v42 = llvm_cttz_i64((int64_t)"src/factor.c" - 1, true); // 0x403ff4
                uint64_t v43 = (int64_t)"src/factor.c" == 1 ? (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) : v42; // 0x403ff4
                int32_t v44 = v43; // 0x403ff8
                uint32_t v45 = -v44 % 64;
                int64_t v46 = v45 == 0 ? (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) : (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) << (int64_t)v45;
                uint64_t v47 = v43 % 64; // 0x404008
                int64_t v48 = v47 == 0 ? (int64_t)"src/factor.c" - 1 : (int64_t)"src/factor.c" - 1 >> v47;
                v33 = (char *)(v46 | v48);
                v34 = v44;
                goto lab_0x403b38;
            } else {
                int64_t v49 = llvm_cttz_i64((int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256), true); // 0x403b1c
                uint64_t v50 = (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) == 0 ? (int64_t)"prime_p" : v49; // 0x403b1c
                uint64_t v51 = v50 % 64; // 0x403b29
                int64_t v52 = v51 == 0 ? (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) : (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) >> v51;
                v33 = (char *)v52;
                v34 = (int32_t)v50 + 64;
                goto lab_0x403b38;
            }
            while (true) {
              lab_0x403a80:
                goto lab_0x403aa2;
            }
        } else {
            // 0x4039e2
            v31 = v41 * v23 % a1;
        }
      lab_0x4039ea:
        // 0x4039ea
        v32 = 0;
        if ((char)function_401ed0(a1, v22, v31, v4, v5, v23) == 0) {
            // break -> 0x403a51
            break;
        }
        // 0x403a0d
        v28 = v31;
        v29 = v35 + 1;
        v30 = v41;
        if (v35 == (int64_t)&g9 - 1) {
            // 0x403a1f
            error(0, (int32_t)"Lucas prime test failure.  This should not happen" ^ (int32_t)"Lucas prime test failure.  This should not happen", dcgettext(NULL, "Lucas prime test failure.  This should not happen", 5));
            abort();
            // UNREACHABLE
        }
    }
    // 0x403a51
    return v32 % 256;
  lab_0x403aa2:
    // 0x403aa2
    v31 = 0;
    // break -> 0x4039ea
    goto lab_0x4039ea;
    goto lab_0x403a80;
  lab_0x4038f2:
    // 0x4038f2
    v23 = v18;
    v16--;
    v17 = v23;
    if (v16 == 0) {
        // break -> 0x4038f7
        goto lab_0x4038f7;
    }
    goto lab_0x4038d0;
  lab_0x403b38:;
    unsigned char v53 = *(char *)(((int64_t)"src/factor.c" >> 1 & 127) + (int64_t)&g4); // 0x403b41
    int64_t v54 = v53; // 0x403b41
    int64_t v55 = (2 - v54 * (int64_t)"src/factor.c") * v54; // 0x403b54
    int64_t v56 = (2 - v55 * (int64_t)"src/factor.c") * v55; // 0x403b63
    int64_t v57 = (int64_t)"(s1) < (n)" >= 2; // 0x403b93
    int64_t v58 = (int64_t)"(s1) < (n)" < 2 ? 127 : 63; // 0x403b93
    int64_t v59 = (int64_t)"(s1) < (n)" < 2; // 0x403b93
    goto lab_0x403b98;
  lab_0x403b98:;
    int64_t v60 = v58;
    uint64_t v61 = 2 * v59; // 0x403b9e
    int64_t v62 = v59 >> 63 | 2 * v57; // 0x403ba5
    int64_t v63; // 0x403840
    int64_t v64; // 0x403840
    if (v62 > (int64_t)"(s1) < (n)") {
        goto lab_0x403bb4;
    } else {
        // 0x403bad
        v63 = v62;
        v64 = v61;
        if (v61 < (int64_t)"src/factor.c" || v62 != (int64_t)"(s1) < (n)") {
            goto lab_0x403bba;
        } else {
            goto lab_0x403bb4;
        }
    }
  lab_0x403bb4:;
    int64_t v65 = v61 < (int64_t)"src/factor.c" ? (int64_t)"(s1) < (n)" + 1 : (int64_t)"(s1) < (n)"; // 0x403bb7
    v63 = v62 - v65;
    v64 = v61 - (int64_t)"src/factor.c";
    goto lab_0x403bba;
  lab_0x403bba:;
    int64_t v66 = v64;
    int64_t v67 = v63;
    v57 = v67;
    v58 = v60 - 1;
    v59 = v66;
    int64_t v68; // bp-736, 0x403840
    int64_t v69; // bp-752, 0x403840
    if (v60 != 0) {
        goto lab_0x403b98;
    } else {
        // 0x403bc4
        v68 = v66;
        uint64_t v70 = 2 * v66; // 0x403bd1
        uint64_t v71 = 2 * v67 | (int64_t)(v70 < v66); // 0x403bd4
        v69 = v70;
        if (v71 > (int64_t)"(s1) < (n)") {
            // 0x403fd0
            v69 = v70 - (int64_t)"src/factor.c";
            goto lab_0x403bf0;
        } else {
            if (v70 < (int64_t)"src/factor.c" || v71 != (int64_t)"(s1) < (n)") {
                goto lab_0x403bf0;
            } else {
                // 0x403fd0
                v69 = v70 - (int64_t)"src/factor.c";
                goto lab_0x403bf0;
            }
        }
    }
  lab_0x403bf0:;
    int64_t v72 = (2 - v56 * (int64_t)"src/factor.c") * v56; // 0x403b72
    char * v73 = "src/factor.c"; // bp-720, 0x403c0f
    int64_t v74 = function_402240((int64_t *)&v73, v72, &v69, (int64_t *)&v33, v34, &v68); // 0x403c1f
    if ((char)v74 == 0) {
        // 0x403ee6
        return v74 % 256;
    }
    // 0x403c30
    int128_t v75; // bp-672, 0x403840
    function_403210((int32_t)((int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256)), (int64_t)"src/factor.c" - 1, (int64_t *)&v75, (int64_t)&v33);
    uint32_t v76 = v2 % 256;
    int64_t v77 = 2; // 0x403c85
    int64_t v78 = (int64_t)&g8; // 0x403c85
    goto lab_0x403c88;
  lab_0x403c88:;
    int64_t v79 = v78;
    int64_t v80; // 0x403840
    int64_t v81; // 0x403840
    if (v81 != 0) {
        uint64_t v82 = (int64_t)v75; // 0x403f00
        unsigned char v83 = *(char *)(v82 / 2 % 128 + (int64_t)&g4); // 0x403f2f
        int64_t v84 = v83; // 0x403f2f
        int64_t v85 = (2 - v84 * v82) * v84; // 0x403f42
        int64_t v86 = (2 - v85 * v82) * v85; // 0x403f51
        if (v86 * ((int64_t)"src/factor.c" - 1) * (2 - v86 * v82) != v68) {
            goto lab_0x403c97;
        } else {
            if ((char)v2 == 0) {
                goto lab_0x404038;
            } else {
                // 0x403fb9
                if (v81 != v67) {
                    // 0x403ca5
                    v80 = 1;
                    goto lab_0x403d96;
                } else {
                    goto lab_0x403e00;
                }
            }
        }
    } else {
        goto lab_0x403c97;
    }
  lab_0x403c97:
    // 0x403c97
    if ((char)v2 == 0) {
        // 0x403ee6
        return v74 % 256;
    }
    // 0x403ca5
    v80 = 1;
    goto lab_0x403d96;
  lab_0x404038:
    // 0x404038
    if (v81 != v67) {
        // 0x403ee6
        return v74 % 256;
    }
    goto lab_0x403e00;
  lab_0x403e00:;
    uint64_t v106 = v77 + (int64_t)*(char *)v79; // 0x403e05
    int64_t v100 = v106 < (int64_t)"(s1) < (n)" ? v106 : 0; // 0x403e29
    int64_t v96 = v106 < (int64_t)"(s1) < (n)" ? 63 : 127; // 0x403e29
    int64_t v98 = v106 < (int64_t)"(s1) < (n)" ? 0 : v106; // 0x403e29
    goto lab_0x403e30;
  lab_0x403d96:;
    int64_t v87 = v80;
    int64_t v88; // bp-848, 0x403840
    uint64_t v89 = *(int64_t *)((int64_t)&v88 + 184 + 8 * v87); // 0x403d96
    int64_t v90 = (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256) >> 1; // 0x403da2
    if (v89 != 2) {
        unsigned char v91 = *(char *)(v89 / 2 % 128 + (int64_t)&g4); // 0x403cec
        int64_t v92 = v91; // 0x403cec
        int64_t v93 = (2 - v89 * v92) * v92; // 0x403cff
        int64_t v94 = (2 - v93 * v89) * v93; // 0x403d0e
        v90 = v94 * v89 * v94;
        if (v89 > (int64_t)"(s1) < (n)" - ((int64_t)((int32_t)&g62 ^ (int32_t)&g62) & -256)) {
            goto lab_0x403d4d;
        } else {
            // 0x403d2d
            v90 = 0;
            goto lab_0x403d4d;
        }
    } else {
        goto lab_0x403d4d;
    }
  lab_0x403e30:;
    int64_t v95 = v96;
    uint64_t v97 = 2 * v98; // 0x403e36
    int64_t v99 = v98 >> 63 | 2 * v100; // 0x403e3d
    int64_t v101; // 0x403840
    int64_t v102; // 0x403840
    if (v99 > (int64_t)"(s1) < (n)") {
        goto lab_0x403e4c;
    } else {
        // 0x403e45
        v101 = v99;
        v102 = v97;
        if (v97 < (int64_t)"src/factor.c" || v99 != (int64_t)"(s1) < (n)") {
            goto lab_0x403e52;
        } else {
            goto lab_0x403e4c;
        }
    }
  lab_0x403d4d:
    // 0x403d4d
    if (v90 == v68) {
        if (v76 > (int32_t)v87) {
            if (v81 != v67) {
                // 0x403d92
                v80 = v87 + 1;
                goto lab_0x403d96;
            } else {
                goto lab_0x403e00;
            }
        } else {
            goto lab_0x404038;
        }
    } else {
        // 0x403d81
        if (v76 <= (int32_t)v87) {
            // 0x403ee6
            return v74 % 256;
        }
        // 0x403d92
        v80 = v87 + 1;
        goto lab_0x403d96;
    }
  lab_0x403e4c:;
    int64_t v103 = v97 < (int64_t)"src/factor.c" ? (int64_t)"(s1) < (n)" + 1 : (int64_t)"(s1) < (n)"; // 0x403e4f
    v101 = v99 - v103;
    v102 = v97 - (int64_t)"src/factor.c";
    goto lab_0x403e52;
  lab_0x403e52:;
    int64_t v104 = v102;
    v100 = v101;
    v96 = v95 - 1;
    v98 = v104;
    if (v95 != 0) {
        goto lab_0x403e30;
    } else {
        // 0x403e5c
        v69 = v104;
        int64_t v105 = function_402240((int64_t *)&v73, v72, &v69, (int64_t *)&v33, v34, &v68); // 0x403e85
        if ((char)v105 == 0) {
            // 0x403ee6
            return 0;
        }
        // 0x403e8e
        v77 = v106;
        v78 = v79 + 1;
        if (v79 == (int64_t)&g9 - 1) {
            // 0x403ea0
            error(0, (int32_t)"Lucas prime test failure.  This should not happen" ^ (int32_t)"Lucas prime test failure.  This should not happen", dcgettext(NULL, "Lucas prime test failure.  This should not happen", 5));
            abort();
            // UNREACHABLE
        }
        goto lab_0x403c88;
    }
}
// Address range: 0x404050 - 0x404093
int64_t function_404050(int64_t a1, uint64_t a2) {
    if (a1 != 0) {
        // 0x404055
        int64_t result; // 0x404050
        return result;
    }
    // 0x404060
    if (a2 < 2) {
        // 0x404055
        return 0;
    }
    // 0x404066
    if (a2 < 0x17ded79) {
        // 0x404055
        return 1;
    }
    // 0x40406f
    return function_403840(a2);
}
// Address range: 0x4040a0 - 0x40416e
int64_t function_4040a0(int64_t a1, int64_t a2) {
    // 0x4040a0
    function_402640(a1, a2);
    function_4026f0(58);
    int64_t v1; // bp-296, 0x4040a0
    int64_t v2; // 0x4040a0
    function_403210((int32_t)a1, a2, &v1, v2);
    int32_t v3; // 0x4040a0
    if ((char)v3 != 0) {
        int64_t v4 = &v1; // 0x4040b8
        int64_t v5 = v4; // 0x4040e4
        int64_t v6; // bp-280, 0x4040a0
        int64_t v7 = &v6;
        char * v8 = (char *)(v5 + 224); // 0x4040ea
        int64_t v9; // 0x4040a0
        int64_t v10; // 0x4040fd
        if (*v8 != 0) {
            // 0x4040f8
            v10 = 1;
            function_4026f0(32);
            function_402340(*(int64_t *)v7, 0);
            v9 = v10 & 0xffffffff;
            while ((int32_t)*v8 > (int32_t)v10) {
                // 0x4040f8
                v10 = v9 + 1;
                function_4026f0(32);
                function_402340(*(int64_t *)v7, 0);
                v9 = v10 & 0xffffffff;
            }
        }
        // 0x40411b
        v5++;
        int64_t v11 = v7 + 8; // 0x404132
        while (v3 % 256 + (int32_t)v4 != (int32_t)v5) {
            // 0x4040e8
            v7 = v11;
            v8 = (char *)(v5 + 224);
            if (*v8 != 0) {
                // 0x4040f8
                v10 = 1;
                function_4026f0(32);
                function_402340(*(int64_t *)v7, 0);
                v9 = v10 & 0xffffffff;
                while ((int32_t)*v8 > (int32_t)v10) {
                    // 0x4040f8
                    v10 = v9 + 1;
                    function_4026f0(32);
                    function_402340(*(int64_t *)v7, 0);
                    v9 = v10 & 0xffffffff;
                }
            }
            // 0x40411b
            v5++;
            v11 = v7 + 8;
        }
    }
    if (v2 != 0) {
        // 0x404154
        function_4026f0(32);
        function_402640(v2, v1);
    }
    // 0x40413c
    return function_4026f0(10);
}
// Address range: 0x404170 - 0x4042de
int64_t function_404170(int64_t a1) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40417f
    int64_t v3 = a1; // 0x40417f
    char v4 = v1; // 0x40417f
    if (v1 == 32) {
        v2++;
        char v5 = *(char *)v2; // 0x40418c
        v3 = v2;
        v4 = v5;
        while (v5 == 32) {
            // 0x404188
            v2++;
            v5 = *(char *)v2;
            v3 = v2;
            v4 = v5;
        }
    }
    int64_t v6 = v3 + 1; // 0x404194
    int64_t v7 = v4 != 43 ? v3 : v6;
    char v8 = *(char *)v7; // 0x4041b4
    char v9 = v8; // 0x4041ba
    int64_t v10 = v7; // 0x4041ba
    int64_t v11; // 0x404170
    int64_t v12; // 0x404170
    int64_t v13; // 0x404170
    char v14; // 0x404170
    if (v8 != 0) {
        while ((int32_t)v9 < 58) {
            // 0x4041b0
            v10++;
            v9 = *(char *)v10;
            v14 = v8;
            v13 = 0;
            v12 = 0;
            v11 = v4 != 43 ? v6 : v3 + 2;
            if (v9 == 0) {
                goto lab_0x404220;
            }
        }
    }
    // 0x4041c6
    function_406f50(a1);
    // 0x4041d8
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"%s is not a valid positive integer", 5));
    // 0x4041f2
    return (int32_t)&g62 ^ (int32_t)&g62;
  lab_0x404220:;
    uint64_t v15 = v12;
    uint64_t v16 = (int64_t)v14 + 0xffffffd0 & 0xffffffff;
    uint64_t v17 = 10 * v15; // 0x404234
    int64_t v18 = v16 + v17; // 0x404245
    uint64_t v19 = v15 / 0x8000000000000000 + v15 / 0x2000000000000000 + (int64_t)(v17 < 2 * v15) + (int64_t)(v18 < v16); // 0x404255
    uint64_t v20 = v19 + 10 * v13; // 0x404258
    if (v20 < v19) {
        // 0x404272
        function_406f50(a1);
    } else {
        char v21 = *(char *)v11; // 0x404261
        if (v21 == 0) {
            // 0x404290
        } else {
            // 0x40426a
            v14 = v21;
            v13 = v20;
            v12 = v18;
            v11++;
            if (v20 > 0x1999999999999999) {
                // 0x404272
                function_406f50(a1);
            } else {
                goto lab_0x404220;
            }
        }
    }
}
// Address range: 0x4042e0 - 0x4045cd
int64_t function_4042e0(int64_t a1) {
    int32_t status = a1; // 0x4042f6
    if (status != 0) {
        // 0x4042fa
        __fprintf_chk(g41, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40431f
        exit(status);
        // UNREACHABLE
    }
    // 0x404326
    __printf_chk(1, dcgettext(NULL, "Usage: %s [NUMBER]...\n  or:  %s OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the prime factors of each specified integer NUMBER.  If none\nare specified on the command line, read them from standard input.\n\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g38);
    int64_t v1 = &g1; // bp-136, 0x4043b0
    bool v2; // 0x4042e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x404430
    int64_t v6 = *(int64_t *)v5; // 0x404434
    int64_t v7 = 7; // 0x40443a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"factor";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x404446
        char v11 = *(char *)v9; // 0x404446
        char v12 = v11; // 0x404446
        bool v13 = false; // 0x404446
        while (v10 == v11) {
            // 0x40443c
            v7--;
            int64_t v14 = v9 + v3; // 0x404446
            int64_t v15 = v8 + v3; // 0x404446
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
            // break -> 0x404452
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x404452
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x404564;
        } else {
            // 0x40454e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4045a3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4044b4;
            } else {
                goto lab_0x404564;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4044b4;
        } else {
            // 0x40449a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4045a3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4044b4;
            } else {
                goto lab_0x4044b4;
            }
        }
    }
  lab_0x404564:
    // 0x404564
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4044f4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40431f
    exit(status);
    // UNREACHABLE
  lab_0x4044b4:
    // 0x4044b4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4044f4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40431f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4045d0 - 0x4045d8
int64_t function_4045d0(int64_t a1) {
    // 0x4045d0
    g48 = a1;
    int64_t result; // 0x4045d0
    return result;
}
// Address range: 0x4045e0 - 0x4045e8
int64_t function_4045e0(int64_t a1) {
    // 0x4045e0
    g47 = a1;
    int64_t result; // 0x4045e0
    return result;
}
// Address range: 0x4045f0 - 0x40468e
int64_t function_4045f0(void) {
    // 0x4045f0
    int32_t * err_num; // 0x404606
    if ((int32_t)function_4091b0((int64_t)g38) == 0) {
        goto lab_0x40461c;
    } else {
        // 0x404606
        err_num = __errno_location();
        if (g47 == 0) {
            goto lab_0x404633;
        } else {
            // 0x404617
            if (*err_num != 32) {
                goto lab_0x404633;
            } else {
                goto lab_0x40461c;
            }
        }
    }
  lab_0x40461c:;
    int64_t result = function_4091b0((int64_t)g41); // 0x404623
    if ((int32_t)result == 0) {
        // 0x40462c
        return result;
    }
    // 0x40466e
    _exit(g28);
    // UNREACHABLE
  lab_0x404633:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40463f
    if (g48 == 0) {
        // 0x404679
        error(0, *err_num, "%s", v1);
    } else {
        // 0x404653
        error(0, *err_num, "%s: %s", (char *)function_406da0((int64_t)g48), v1);
    }
    // 0x40466e
    _exit(g28);
    // UNREACHABLE
}
// Address range: 0x404690 - 0x404706
int64_t function_404690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404690
    if (a3 == 0) {
        // 0x4046d4
        return 0;
    }
    int64_t v1 = a3; // 0x4046ab
    int64_t v2 = a2; // 0x4046ab
    int64_t result = 0;
    int64_t v3 = function_4072e0(a1 & 0xffffffff, v2, v1); // 0x4046c9
    int64_t result2 = result; // 0x4046d2
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x4046e8
            *__errno_location() = 28;
            return result;
        }
        int64_t v4 = v3 + result; // 0x4046b5
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x4046d4
            break;
        }
        result = v4;
        v3 = function_4072e0(a1 & 0xffffffff, v2, v1);
        result2 = result;
    }
    // 0x4046d4
    return result2;
}
// Address range: 0x404710 - 0x404758
int64_t function_404710(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x404710
    *(char *)v1 = 0;
    int64_t result = v1; // 0x404722
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40472b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x404754
    return result;
}
// Address range: 0x404760 - 0x4047f9
int64_t function_404760(int64_t str) {
    // 0x404760
    if (str == 0) {
        // 0x4047d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g41);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40476e
    int64_t result = (int64_t)found_char_pos; // 0x40476e
    if (found_char_pos == NULL) {
        // 0x4047c9
        g49 = str;
        g40 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x404778
    if (v1 - str < 7) {
        // 0x4047c9
        g49 = str;
        g40 = str;
        return result;
    }
    // 0x404788
    bool v2; // 0x404760
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x404760
    int64_t v5 = result - 6; // 0x404760
    int64_t v6 = 7; // 0x404796
    unsigned char v7 = *(char *)v5; // 0x404796
    char v8 = *(char *)v4; // 0x404796
    char v9 = v8; // 0x404796
    bool v10 = false; // 0x404796
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
    int64_t v12 = (int64_t)"lt-"; // 0x4047a0
    int64_t v13 = v1; // 0x4047a0
    int64_t v14 = 3; // 0x4047a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4047c9
        g49 = str;
        g40 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4047b2
    char v16 = *(char *)v12; // 0x4047b2
    char v17 = v16; // 0x4047b2
    bool v18 = false; // 0x4047b2
    while (v15 == v16) {
        // 0x4047a2
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
    int64_t v20 = v1; // 0x4047bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4047be
        v20 = result + 4;
        g37 = v20;
    }
    // 0x4047c9
    g49 = v20;
    g40 = v20;
    return result;
}
// Address range: 0x404800 - 0x405144
int64_t function_404800(void) {
    // 0x404800
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    int64_t v1; // 0x404800
    int64_t v2 = function_4073a0((int64_t)"lib/mbuiter.h", 2, 179, (int64_t)"mbuiter_multi_next", v1, v1, v1); // 0x40483c
    char * str = (char *)v2; // 0x40484b
    int64_t v3 = (int64_t)"iter->cur.wc == 0"; // 0x404d21
    int64_t v4 = 179; // 0x404ec2
    int64_t v5 = (int64_t)"mbuiter_multi_next";
    char * v6; // 0x404800
    char * str3; // 0x404ba3
    int64_t v7; // 0x404800
    int64_t v8; // 0x404800
    int64_t wc; // 0x404800
    int64_t v9; // 0x404800
    int64_t v10; // 0x404800
    int64_t v11; // 0x404800
    int64_t v12; // 0x404800
    int32_t wc2; // 0x404800
    int64_t v13; // 0x404800
    int64_t v14; // 0x404800
    int64_t v15; // 0x404800
    int64_t len3; // 0x404800
    int64_t ps2; // bp-124, 0x404800
    char v16; // 0x404800
    char v17; // 0x404800
    char v18; // 0x404800
    int32_t v19; // bp-156, 0x404800
    char v20; // 0x404800
    int64_t v21; // 0x404800
    char * str5; // 0x404800
    int64_t v22; // 0x404800
    int64_t v23; // 0x404800
    char * str4; // 0x404800
    int64_t v24; // 0x404800
    int64_t v25; // 0x404800
    int64_t ps; // bp-188, 0x404800
    char v26; // 0x404800
    char v27; // 0x404800
    char v28; // 0x404800
    char v29; // 0x404800
    char v30; // 0x404800
    int32_t v31; // bp-92, 0x404800
    int64_t v32; // 0x404800
    int32_t len; // 0x40487a
    uint64_t v33; // 0x40485d
    while (true) {
      lab_0x404855_2:;
        int64_t v34 = v9;
        v13 = v4;
        v12 = v3;
        uint64_t v35; // 0x404800
        while (true) {
          lab_0x404855:
            // 0x404855
            v35 = v12;
            int64_t v36 = v13;
            v33 = function_40a420(v35, v2, v36, v5, v34);
            v7 = 0;
            if (v33 == 0) {
                // break (via goto) -> 0x4048cc
                goto lab_0x4048cc_8;
            }
            // 0x40486a
            if (__ctype_get_mb_cur_max() >= 2) {
                // break -> 0x4048f0
                break;
            }
            // 0x404875
            len = strlen(str);
            v14 = v36;
            if (v35 >= v33) {
                goto lab_0x40489b;
            } else {
                int16_t ** v37 = __ctype_b_loc(); // 0x404889
                int64_t v38 = (int64_t)*(char *)(v33 - 1); // 0x40488e
                v14 = v38;
                v15 = v38;
                if ((*(char *)(2 * v38 + (int64_t)*v37) & 8) != 0) {
                    goto lab_0x4048ba;
                } else {
                    goto lab_0x40489b;
                }
            }
        }
        // 0x4048f0
        ps = 0;
        v27 = 0;
        v22 = v35;
        int64_t v39 = 1; // 0x404910
        if (v35 < v33) {
            while (true) {
              lab_0x404988:
                // 0x404988
                v23 = v22;
                str5 = (char *)v23;
                v28 = v27;
                if (v27 == 0) {
                    unsigned char v40 = *str5; // 0x404925
                    int32_t v41 = *(int32_t *)((int64_t)(4 * v40 / 32) + (int64_t)&g20); // 0x404930
                    if ((1 << (int32_t)(v40 % 32) & v41) == 0) {
                        int32_t v42 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404a23
                        v28 = 1;
                        if (v42 == 0) {
                            // 0x405069
                            __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                            // 0x405082
                            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                            goto lab_0x40509b_3;
                        }
                        goto lab_0x40498f;
                    } else {
                        // 0x404941
                        v19 = v40;
                        v26 = 0;
                        v21 = 1;
                        v8 = v40;
                        goto lab_0x40495d;
                    }
                } else {
                    goto lab_0x40498f;
                }
            }
          lab_0x404a98:
            // 0x404a98
            v39 = 1;
            if (v20 != 0) {
                // 0x404aa0
                v39 = v5 & -256 | (int64_t)(iswalnum((int32_t)wc) == 0);
            }
        }
        // 0x404aae
        v32 = v39;
        ps = 0;
        ps2 = 0;
        v6 = str;
        v29 = 0;
        v17 = 0;
        v10 = v34;
        v24 = v33;
        while (true) {
          lab_0x404bb2:
            // 0x404bb2
            v25 = v24;
            v11 = v10;
            v30 = v29;
            str3 = v6;
            str4 = (char *)v25;
            v18 = v17;
            if (v17 == 0) {
                unsigned char v43 = *str3; // 0x404af5
                int32_t v44 = *(int32_t *)((int64_t)(4 * v43 / 32) + (int64_t)&g20); // 0x404b00
                if ((1 << (int32_t)(v43 % 32) & v44) == 0) {
                    int32_t v45 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x404df3
                    v18 = 1;
                    if (v45 == 0) {
                        // 0x405069
                        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                        // 0x405082
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                        goto lab_0x40509b_3;
                    }
                    goto lab_0x404bbd;
                } else {
                    // 0x404b11
                    v31 = v43;
                    v16 = 0;
                    len3 = 1;
                    if (v43 == 0) {
                        // break -> 0x404c56
                        break;
                    }
                    goto lab_0x404b42;
                }
            } else {
                goto lab_0x404bbd;
            }
        }
        if (v30 != 0) {
            goto lab_0x404eb2;
        } else {
            unsigned char v46 = *str4; // 0x404c66
            int32_t v47 = *(int32_t *)((int64_t)(4 * v46 / 32) + (int64_t)&g20); // 0x404c71
            if ((1 << (int32_t)(v46 % 32) & v47) == 0) {
                // 0x404e9b
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                    // 0x405069
                    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                    // 0x405082
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40509b_3;
                }
                goto lab_0x404eb2;
            } else {
                int32_t v48 = v46; // 0x404c8b
                v19 = v48;
                wc2 = v48;
                goto lab_0x404c9c;
            }
        }
    }
  lab_0x4048cc_8:
    // 0x4048cc
    free((int64_t *)v2);
    return v7 & 0xffffffff;
  lab_0x40509b_3:
    // 0x40509b
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    char * str2 = dcgettext((char *)((int32_t)"iter->cur.wc == 0" ^ (int32_t)"iter->cur.wc == 0"), "iter->cur.wc == 0", 5); // 0x4050d1
    int64_t result2 = (int64_t)str2; // 0x4050d1
    if (str2 != "iter->cur.wc == 0" == (char)result2 == 0) {
        int32_t len2 = strlen(str2); // 0x4050fb
        int64_t result = function_407ee0((int64_t)len2 + 4 + (int64_t)strlen("iter->cur.wc == 0")); // 0x405110
        __sprintf_chk((char *)result, 1, -1, "%s (%s)", str2, "iter->cur.wc == 0");
        return result;
    }
    // 0x4050ed
    return result2;
  lab_0x404bbd:;
    char v49 = v18;
    int64_t v50 = (int64_t)str3; // 0x404bc2
    int64_t v51 = function_407340(v50, (int64_t)__ctype_get_mb_cur_max()); // 0x404bcd
    int64_t v52 = function_408fc0((int64_t *)&v31, v50, v51); // 0x404bde
    v16 = v49;
    len3 = 1;
    switch (v52) {
        case -1: {
            goto lab_0x404b42;
        }
        case -2: {
            // 0x404e48
            v16 = v49;
            len3 = strlen(str3);
            goto lab_0x404b42;
        }
        default: {
            // 0x404bfc
            if (v52 == 0) {
                char v53 = *str3; // 0x404c0f
                if (v53 != 0) {
                    // 0x405082
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40509b_3;
                }
                int32_t v54 = v31; // 0x404c18
                if (v54 != 0) {
                    goto lab_0x40509b_3;
                }
            }
            int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x404c2c
            v16 = v55 == 0 ? v49 : 0;
            len3 = v52;
            if (v31 == 0) {
                // break -> 0x404c56
                break;
            }
            goto lab_0x404b42;
        }
    }
  lab_0x404b42:;
    int64_t v56 = len3;
    char v57 = v16;
    char v58 = v30; // 0x404b47
    int32_t v59; // 0x404800
    int64_t v60; // 0x404800
    int64_t v61; // 0x404800
    char v62; // 0x404800
    if (v30 != 0) {
        goto lab_0x404d47;
    } else {
        unsigned char v63 = *str4; // 0x404b52
        int32_t v64 = *(int32_t *)((int64_t)(4 * v63 / 32) + (int64_t)&g20); // 0x404b5d
        if ((1 << (int32_t)(v63 % 32) & v64) == 0) {
            int32_t v65 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404d35
            v58 = 1;
            if (v65 == 0) {
                // 0x405069
                __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                // 0x405082
                __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                goto lab_0x40509b_3;
            }
            goto lab_0x404d47;
        } else {
            int32_t v66 = v63; // 0x404b7f
            v19 = v66;
            v59 = v66;
            v62 = v30;
            v61 = 1;
            v60 = v11;
            goto lab_0x404b88;
        }
    }
  lab_0x404d47:;
    char v67 = v58;
    int64_t v68 = function_407340(v25, (int64_t)__ctype_get_mb_cur_max()); // 0x404d57
    int64_t v69 = function_408fc0((int64_t *)&v19, v25, v68); // 0x404d6a
    char v70 = v67; // 0x404800
    int64_t len4 = 1; // 0x404800
    int64_t v71 = v11; // 0x404800
    switch (v69) {
        case -1: {
            goto lab_0x404b94;
        }
        case -2: {
            // 0x404e70
            v70 = v67;
            len4 = strlen(str4);
            v71 = v11;
            goto lab_0x404b94;
        }
        default: {
            int64_t v72 = v69; // 0x404d8b
            int64_t v73 = v11; // 0x404d8b
            if (v69 == 0) {
                // 0x404d8d
                if (*str4 != 0) {
                    // 0x405082
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40509b_3;
                }
                // 0x404da4
                v72 = 1;
                v73 = v19;
                if (v19 != 0) {
                    goto lab_0x40509b_3;
                }
            }
            int32_t v74 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404dbc
            v59 = v19;
            v62 = v74 == 0 ? v67 : 0;
            v61 = v72;
            v60 = v73;
            goto lab_0x404b88;
        }
    }
  lab_0x404b94:
    // 0x404b94
    v6 = (char *)(v56 + (int64_t)str3);
    v29 = v70;
    v17 = v57;
    v10 = v71;
    v24 = len4 + v25;
    goto lab_0x404bb2;
  lab_0x404b88:
    // 0x404b88
    v70 = v62;
    len4 = v61;
    v71 = v60;
    if (v59 == 0) {
        abort();
        // UNREACHABLE
    }
    goto lab_0x404b94;
  lab_0x40498f:;
    char v75 = v28;
    int64_t v76 = function_407340(v23, (int64_t)__ctype_get_mb_cur_max()); // 0x40499f
    int64_t v77 = function_408fc0((int64_t *)&v19, v23, v76); // 0x4049b0
    int64_t len5; // 0x404800
    char v78; // 0x404800
    switch (v77) {
        case -1: {
            // 0x404a40
            v78 = v75;
            len5 = 1;
            v20 = 0;
            wc = v19;
            goto lab_0x40496b;
        }
        case -2: {
            // 0x404a60
            v78 = v75;
            len5 = strlen(str5);
            v20 = 0;
            wc = v19;
            goto lab_0x40496b;
        }
        default: {
            int32_t v79; // 0x404800
            int64_t v80; // 0x404800
            if (v77 != 0) {
                // 0x404a88
                v80 = v77;
                v79 = v19;
            } else {
                // 0x4049d7
                if (*str5 != 0) {
                    // 0x405082
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40509b_3;
                }
                // 0x4049ee
                v80 = 1;
                v79 = v19;
                if (v19 != 0) {
                    goto lab_0x40509b_3;
                }
            }
            int32_t v81 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404a04
            v26 = v81 == 0 ? v75 : 0;
            v21 = v80;
            v8 = v79;
            goto lab_0x40495d;
        }
    }
  lab_0x40495d:
    // 0x40495d
    v78 = v26;
    len5 = v21;
    v20 = 1;
    wc = v8;
    if ((int32_t)v8 == 0) {
        abort();
        // UNREACHABLE
    }
    goto lab_0x40496b;
  lab_0x40496b:;
    int64_t v82 = len5 + v23; // 0x40496b
    v27 = v78;
    v22 = v82;
    if (v82 >= v33) {
        // break -> 0x404a98
        goto lab_0x404a98;
    }
    goto lab_0x404988;
  lab_0x40489b:;
    unsigned char v83 = *(char *)(v33 + (int64_t)len); // 0x40489b
    v7 = 1;
    if (v83 == 0) {
        // break (via goto) -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    int16_t * v84 = *__ctype_b_loc(); // 0x4048ad
    v15 = v14;
    v7 = 1;
    if ((*(char *)(2 * (int64_t)v83 + (int64_t)v84) & 8) == 0) {
        // break (via goto) -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    goto lab_0x4048ba;
  lab_0x4048ba:
    // 0x4048ba
    v7 = 0;
    if (*(char *)v33 == 0) {
        // break (via goto) -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    int64_t v85 = v33 + 1; // 0x4048c0
    v13 = v15;
    v12 = v85;
    v7 = 0;
    if (*(char *)v85 == 0) {
        // break (via goto) -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    goto lab_0x404855;
  lab_0x404eb2:
    // 0x404eb2
    v4 = function_407340(v25, (int64_t)__ctype_get_mb_cur_max());
    int64_t v86 = function_408fc0((int64_t *)&v19, v25, v4); // 0x404ed5
    int32_t v87; // 0x404800
    switch (v86) {
        case -1: {
            goto lab_0x404cb2;
        }
        case -2: {
            // 0x40503c
            strlen(str4);
            goto lab_0x404cb2;
        }
        case 0: {
            // 0x405000
            if (*str4 != 0) {
                // 0x405082
                __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                goto lab_0x40509b_3;
            }
            // 0x405013
            v87 = 0;
            if (v19 == 0) {
                goto lab_0x404f00;
            } else {
                goto lab_0x405028;
            }
        }
        default: {
            // 0x404efc
            v87 = v19;
            goto lab_0x404f00;
        }
    }
  lab_0x404cb2:
    // 0x404cb2
    v7 = v32;
    if ((char)v32 != 0) {
        // break -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    goto lab_0x404cbb;
  lab_0x404f00:
    // 0x404f00
    mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
    wc2 = v87;
    goto lab_0x404c9c;
  lab_0x404cbb:
    // 0x404cbb
    ps = 0;
    unsigned char v88 = *(char *)v33; // 0x404cd8
    int32_t v89 = *(int32_t *)((int64_t)(4 * v88 / 32) + (int64_t)&g20); // 0x404ce4
    int64_t v90; // 0x404800
    int64_t len6; // 0x404800
    if ((1 << (int32_t)(v88 % 32) & v89) == 0) {
        int32_t v91 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404f43
        if (v91 == 0) {
            // 0x405069
            __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
            // 0x405082
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
            goto lab_0x40509b_3;
        }
        int64_t v92 = function_407340(v33, (int64_t)__ctype_get_mb_cur_max()); // 0x404f65
        int64_t v93 = function_408fc0((int64_t *)&v19, v33, v92); // 0x404f76
        len6 = 1;
        switch (v93) {
            case -1: {
                goto lab_0x404d1c;
            }
            case -2: {
                goto lab_0x405028;
            }
            default: {
                // 0x404f90
                v90 = v93;
                if (v93 != 0) {
                    goto lab_0x404fb4;
                } else {
                    // 0x404f95
                    char * v94; // 0x404cbb
                    char v95 = *v94; // 0x404fa3
                    if (v95 != 0) {
                        // 0x405082
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                        goto lab_0x40509b_3;
                    }
                    uint32_t v96 = v19; // 0x404fac
                    v90 = 1;
                    if (v96 != 0) {
                        goto lab_0x405028;
                    } else {
                        goto lab_0x404fb4;
                    }
                }
            }
        }
    } else {
        // 0x404cf5
        v19 = v88;
        goto lab_0x404d10;
    }
  lab_0x405028:
    // 0x405028
    len6 = strlen(str4);
    goto lab_0x404d1c;
  lab_0x404c9c:
    // 0x404c9c
    if (wc2 == 0) {
        goto lab_0x404cb2;
    } else {
        // 0x404ca7
        if (iswalnum(wc2) != 0) {
            goto lab_0x404cbb;
        } else {
            goto lab_0x404cb2;
        }
    }
  lab_0x404d1c:
    // 0x404d1c
    v3 = len6 + v33;
    v9 = v11;
    v7 = 0;
    if (*(char *)v3 == 0) {
        // break -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    goto lab_0x404855_2;
  lab_0x404d10:;
    // 0x404d10
    int64_t v97; // 0x404800
    int64_t v98 = v97;
    int32_t v99; // 0x404800
    int32_t v100 = v99; // 0x404d10
    v7 = 0;
    len6 = v98;
    if (v100 == 0) {
        // break -> 0x4048cc
        goto lab_0x4048cc_8;
    }
    goto lab_0x404d1c;
  lab_0x404fb4:;
    int64_t v101 = v90;
    mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
    int32_t v102 = v19;
    v99 = v102;
    v97 = v101;
    goto lab_0x404d10;
}
// Address range: 0x405150 - 0x4053d0
int64_t function_405150(char * str4, int64_t * a2) {
    int64_t v1 = (int64_t)str4;
    char * str3 = dcgettext(NULL, str4, 5); // 0x40516e
    int64_t str = function_409270(); // 0x405176
    int64_t result2; // 0x405150
    int64_t v2; // 0x405150
    int64_t v3; // 0x405150
    int64_t v4; // 0x405150
    int32_t v5; // 0x405150
    int64_t v6; // 0x405150
    int64_t result; // 0x40529b
    if ((int32_t)function_409150(str, "UTF-8", 5) != 0) {
        // 0x405290
        result = function_4081c0();
        int32_t len = strlen((char *)str); // 0x4052a6
        int64_t v7 = len; // 0x4052a6
        int64_t * dest_mem = memcpy((int64_t *)function_407ee0(v7 + 11), (int64_t *)str, len); // 0x4052c0
        int64_t v8 = (int64_t)dest_mem + v7; // 0x4052d0
        *(int64_t *)v8 = 0x4c534e4152542f2f;
        *(int16_t *)(v8 + 8) = 0x5449;
        *(char *)(v8 + 10) = 0;
        int64_t str2 = function_4081c0(); // 0x4052f7
        free(dest_mem);
        if (str2 == 0) {
            // 0x4053a0
            v6 = 0;
            result2 = v1;
            v2 = 0;
            v4 = 0;
            if (result != 0) {
                goto lab_0x405334;
            } else {
                goto lab_0x4051a1;
            }
        } else {
            // 0x405315
            if (strchr((char *)str2, 63) == NULL) {
                // 0x405370
                v6 = 0;
                result2 = str2;
                v2 = str2;
                v4 = str2;
                if (result == 0) {
                    goto lab_0x4051a1;
                } else {
                    int32_t strcmp_rc = strcmp(str3, str4); // 0x40537e
                    v5 = strcmp_rc;
                    v3 = str2;
                    if (strcmp_rc == 0) {
                        // 0x405387
                        if (result != str2) {
                            // 0x405390
                            free((int64_t *)str2);
                        }
                        // 0x4051f2
                        return result;
                    }
                    goto lab_0x40534d;
                }
            } else {
                // 0x405327
                free((int64_t *)str2);
                v6 = 0;
                result2 = v1;
                v2 = 0;
                v4 = 0;
                if (result == 0) {
                    goto lab_0x4051a1;
                } else {
                    goto lab_0x405334;
                }
            }
        }
    } else {
        int64_t v9 = (int64_t)a2;
        v6 = v9;
        result2 = a2 == NULL ? v1 : v9;
        v2 = 0;
        v4 = v9;
        goto lab_0x4051a1;
    }
  lab_0x4051a1:;
    int32_t strcmp_rc2 = strcmp(str3, str4); // 0x4051a7
    if (strcmp_rc2 == 0) {
        // 0x4051f2
        return result2;
    }
    char v10 = strcmp_rc2;
    char v11 = v10; // 0x4051bf
    int64_t v12 = v6; // 0x4051bf
    int64_t v13 = 0; // 0x4051bf
    int64_t v14 = result2; // 0x4051bf
    int64_t v15 = v2; // 0x4051bf
    int64_t v16 = v4; // 0x4051bf
    int64_t v17 = v2; // 0x4051bf
    if (v10 != 0) {
        goto lab_0x4051e2;
    } else {
        goto lab_0x4051c1;
    }
  lab_0x405334:;
    int32_t strcmp_rc3 = strcmp(str3, str4); // 0x40533a
    v5 = strcmp_rc3;
    v3 = 0;
    if (strcmp_rc3 == 0) {
        // 0x4051f2
        return result;
    }
    goto lab_0x40534d;
  lab_0x4051e2:;
    int64_t result4 = (int64_t)str3; // 0x40516e
    int64_t result3 = result4; // 0x4051e8
    int64_t v21 = v17; // 0x4051e8
    if (v17 == 0) {
        // 0x4051f2
        return result4;
    }
    goto lab_0x4051ea;
  lab_0x4051c1:
    // 0x4051c1
    if (v11 == 0 || v12 == 0) {
        // 0x405218
        if (v11 != 0 == (v16 != 0)) {
            goto lab_0x4051d5;
        } else {
            int32_t len2 = strlen(str3); // 0x40522f
            char * str5 = (char *)v14; // 0x40523a
            int64_t result5 = function_407ee0((int64_t)len2 + 4 + (int64_t)strlen(str5)); // 0x405244
            __sprintf_chk((char *)result5, 1, -1, "%s (%s)", str3, str5);
            if (v13 != 0) {
                // 0x405272
                free((int64_t *)v13);
            }
            // 0x40527a
            result3 = result5;
            v21 = v15;
            if (v15 == 0) {
                // 0x4051f2
                return result5;
            }
            goto lab_0x4051ea;
        }
    } else {
        goto lab_0x4051d5;
    }
  lab_0x40534d:;
    char v18 = v5;
    v11 = v18;
    v12 = result;
    v13 = result;
    v14 = result;
    v15 = v3;
    v16 = v3;
    int64_t v19 = result; // 0x40535a
    int64_t v20 = v3; // 0x40535a
    if (v18 != 0) {
        goto lab_0x4051da;
    } else {
        goto lab_0x4051c1;
    }
  lab_0x4051ea:
    // 0x4051ea
    free((int64_t *)v21);
    // 0x4051f2
    return result3;
  lab_0x4051d5:
    // 0x4051d5
    v19 = v13;
    v20 = v15;
    v17 = v15;
    if (v13 == 0) {
        goto lab_0x4051e2;
    } else {
        goto lab_0x4051da;
    }
  lab_0x4051da:
    // 0x4051da
    free((int64_t *)v19);
    v17 = v20;
    goto lab_0x4051e2;
}
// Address range: 0x4053d0 - 0x4054c2
int64_t function_4053d0(int64_t * a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4053e4
    if ((int64_t *)v1 != a1) {
        // 0x4053f1
        return (int64_t)v1;
    }
    int64_t v2 = function_409270(); // 0x405400
    char v3 = *(char *)v2 & -33;
    int64_t result; // 0x4054b6
    if (v3 == 85) {
        // 0x405410
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4054a8
            result = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g12;
            return result;
        }
        char v4 = *v1; // 0x40543e
        int64_t result2 = v4 != 96 ? (int64_t)&g13 : (int64_t)&g16; // 0x40544b
        // 0x4053f1
        return result2;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4054a8
        result = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g12;
        return result;
    }
    char v5 = *v1; // 0x40548d
    int64_t result3 = v5 != 96 ? (int64_t)&g14 : (int64_t)&g15; // 0x40549a
    // 0x4053f1
    return result3;
}
// Address range: 0x4054d0 - 0x405527
int64_t function_4054d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x4054d0
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x405527 - 0x4066f1
int64_t function_405527(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x405571
    int64_t v3 = 0; // 0x405571
    int64_t v4; // 0x405527
    int64_t v5; // 0x405527
    int64_t v6; // 0x405527
    int64_t v7; // 0x405527
    int64_t v8; // 0x405527
    int64_t v9; // 0x405527
    int64_t v10; // 0x405527
    int64_t v11; // 0x405527
    int64_t v12; // 0x405527
    int64_t v13; // 0x405527
    int64_t v14; // 0x405527
    int64_t v15; // 0x405527
    int64_t v16; // 0x405527
    int64_t v17; // 0x405527
    int64_t v18; // 0x405527
    int64_t result; // 0x405527
    int64_t v19; // 0x405527
    int32_t wc; // bp+132, 0x405527
    int64_t ps; // bp+136, 0x405527
    char v20; // 0x405ae0
    int64_t v21; // 0x405ae0
    int64_t v22; // 0x405e88
    int64_t v23; // 0x405527
    int64_t v24; // 0x405ea7
    int32_t v25; // 0x405527
    while (true) {
      lab_0x405578_2:
        // 0x405578
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x405527
        int64_t v27; // 0x4055ac
        while (true) {
          lab_0x405578:
            // 0x405578
            v5 = v26;
            bool v28 = v15 == v5; // 0x405583
            if (v15 == -1) {
                // 0x405585
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x405593
            if (v28) {
                // break (via goto) -> 0x405cf8
                goto lab_0x405cf8;
            }
            // 0x40559c
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
                    // 0x405b8b
                    if (v25 % 2 == 0) {
                        goto lab_0x4056d1;
                    }
                    // 0x405fad
                    v26 = v5 + 1;
                    goto lab_0x405578;
                }
                case 7: {
                    goto lab_0x4056d1;
                }
                case 8: {
                    goto lab_0x4056d1;
                }
                case 9: {
                    goto lab_0x4058ea_2;
                }
                case 10: {
                    goto lab_0x4058ea_2;
                }
                case 11: {
                    goto lab_0x4056d1;
                }
                case 12: {
                    goto lab_0x4056d1;
                }
                case 13: {
                    goto lab_0x4058ea_2;
                }
                case 32: {
                    goto lab_0x4058ea_2;
                }
                case 33: {
                    goto lab_0x4058ea_2;
                }
                case 34: {
                    goto lab_0x4058ea_2;
                }
                case 35: {
                    goto lab_0x40569d;
                }
                case 36: {
                    goto lab_0x4058ea_2;
                }
                case 37: {
                    goto lab_0x4056d1;
                }
                case 38: {
                    goto lab_0x4058ea_2;
                }
                case 39: {
                    goto lab_0x4058ea_2;
                }
                case 40: {
                    goto lab_0x4058ea_2;
                }
                case 41: {
                    goto lab_0x4058ea_2;
                }
                case 42: {
                    goto lab_0x4058ea_2;
                }
                case 43: {
                    goto lab_0x4056d1;
                }
                case 44: {
                    goto lab_0x4056d1;
                }
                case 45: {
                    goto lab_0x4056d1;
                }
                case 46: {
                    goto lab_0x4056d1;
                }
                case 47: {
                    goto lab_0x4056d1;
                }
                case 48: {
                    goto lab_0x4056d1;
                }
                case 49: {
                    goto lab_0x4056d1;
                }
                case 50: {
                    goto lab_0x4056d1;
                }
                case 51: {
                    goto lab_0x4056d1;
                }
                case 52: {
                    goto lab_0x4056d1;
                }
                case 53: {
                    goto lab_0x4056d1;
                }
                case 54: {
                    goto lab_0x4056d1;
                }
                case 55: {
                    goto lab_0x4056d1;
                }
                case 56: {
                    goto lab_0x4056d1;
                }
                case 57: {
                    goto lab_0x4056d1;
                }
                case 58: {
                    goto lab_0x4056d1;
                }
                case 59: {
                    goto lab_0x4058ea_2;
                }
                case 60: {
                    goto lab_0x4058ea_2;
                }
                case 61: {
                    goto lab_0x4058ea_2;
                }
                case 62: {
                    goto lab_0x4058ea_2;
                }
                case 63: {
                    goto lab_0x4058ea_2;
                }
                case 65: {
                    goto lab_0x4056d1;
                }
                case 66: {
                    goto lab_0x4056d1;
                }
                case 67: {
                    goto lab_0x4056d1;
                }
                case 68: {
                    goto lab_0x4056d1;
                }
                case 69: {
                    goto lab_0x4056d1;
                }
                case 70: {
                    goto lab_0x4056d1;
                }
                case 71: {
                    goto lab_0x4056d1;
                }
                case 72: {
                    goto lab_0x4056d1;
                }
                case 73: {
                    goto lab_0x4056d1;
                }
                case 74: {
                    goto lab_0x4056d1;
                }
                case 75: {
                    goto lab_0x4056d1;
                }
                case 76: {
                    goto lab_0x4056d1;
                }
                case 77: {
                    goto lab_0x4056d1;
                }
                case 78: {
                    goto lab_0x4056d1;
                }
                case 79: {
                    goto lab_0x4056d1;
                }
                case 80: {
                    goto lab_0x4056d1;
                }
                case 81: {
                    goto lab_0x4056d1;
                }
                case 82: {
                    goto lab_0x4056d1;
                }
                case 83: {
                    goto lab_0x4056d1;
                }
                case 84: {
                    goto lab_0x4056d1;
                }
                case 85: {
                    goto lab_0x4056d1;
                }
                case 86: {
                    goto lab_0x4056d1;
                }
                case 87: {
                    goto lab_0x4056d1;
                }
                case 88: {
                    goto lab_0x4056d1;
                }
                case 89: {
                    goto lab_0x4056d1;
                }
                case 90: {
                    goto lab_0x4056d1;
                }
                case 91: {
                    goto lab_0x4058ea_2;
                }
                case 92: {
                    goto lab_0x4058ea_2;
                }
                case 93: {
                    goto lab_0x4056d1;
                }
                case 94: {
                    goto lab_0x4058ea_2;
                }
                case 95: {
                    goto lab_0x4056d1;
                }
                case 96: {
                    goto lab_0x4058ea_2;
                }
                case 97: {
                    goto lab_0x4056d1;
                }
                case 98: {
                    goto lab_0x4056d1;
                }
                case 99: {
                    goto lab_0x4056d1;
                }
                case 100: {
                    goto lab_0x4056d1;
                }
                case 101: {
                    goto lab_0x4056d1;
                }
                case 102: {
                    goto lab_0x4056d1;
                }
                case 103: {
                    goto lab_0x4056d1;
                }
                case 104: {
                    goto lab_0x4056d1;
                }
                case 105: {
                    goto lab_0x4056d1;
                }
                case 106: {
                    goto lab_0x4056d1;
                }
                case 107: {
                    goto lab_0x4056d1;
                }
                case 108: {
                    goto lab_0x4056d1;
                }
                case 109: {
                    goto lab_0x4056d1;
                }
                case 110: {
                    goto lab_0x4056d1;
                }
                case 111: {
                    goto lab_0x4056d1;
                }
                case 112: {
                    goto lab_0x4056d1;
                }
                case 113: {
                    goto lab_0x4056d1;
                }
                case 114: {
                    goto lab_0x4056d1;
                }
                case 115: {
                    goto lab_0x4056d1;
                }
                case 116: {
                    goto lab_0x4056d1;
                }
                case 117: {
                    goto lab_0x4056d1;
                }
                case 118: {
                    goto lab_0x4056d1;
                }
                case 119: {
                    goto lab_0x4056d1;
                }
                case 120: {
                    goto lab_0x4056d1;
                }
                case 121: {
                    goto lab_0x4056d1;
                }
                case 122: {
                    goto lab_0x4056d1;
                }
                case 123: {
                    goto lab_0x405675;
                }
                case 124: {
                    goto lab_0x4058ea_2;
                }
                case 125: {
                    goto lab_0x405675;
                }
                case 126: {
                    goto lab_0x40569d;
                }
                default: {
                    goto lab_0x405a75;
                }
            }
        }
      lab_0x405a75:
        if (v23 != 1) {
            // 0x405de0
            ps = 0;
            int64_t len = v15; // 0x405df0
            if (v15 == -1) {
                // 0x405df2
                len = strlen((char *)str);
            }
            // 0x405e1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x405e7f:
                // 0x405e7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x405e84
                int64_t v30 = v29 + str;
                v24 = function_408fc0((int64_t *)&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4063fa_2;
                    }
                    case -1: {
                        goto lab_0x4063fa_2;
                    }
                    case -2: {
                        // 0x4064dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x406517
                            v19 = v18;
                            int64_t v31 = v18; // 0x40651a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x406527
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x406520
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4063fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4063fa_2;
                    }
                    case 1: {
                        goto lab_0x405e50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x405efc
                        char v34 = *(char *)v33; // 0x405f0d
                        unsigned char v35; // 0x405527
                        if (v34 < 125) {
                            // 0x405f18
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x405f2f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x4058ea_2;
                            }
                        }
                        // 0x405f00
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x405f0d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x405f18
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x405f2f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x4058ea_2;
                                }
                            }
                            // 0x405f00
                            v33++;
                        }
                        goto lab_0x405e50;
                    }
                }
            }
            goto lab_0x4063fa_2;
        } else {
            // 0x405ac4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4056d1;
        }
    }
  lab_0x405cf8:
    // 0x405cf8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4065fa
        if (v8 > result) {
            // 0x406603
            *(char *)(v12 + result) = 0;
        }
        // 0x405927
        return result;
    }
    goto lab_0x4058ea_2;
  lab_0x4056d1:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x4056e0
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4058ea_2;
        }
    }
    int64_t v42 = result; // 0x4057e1
    char v43 = v20; // 0x4057e1
    int64_t v44 = v58; // 0x4057e1
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x4057e1
    int64_t v46 = v56; // 0x4057e1
    goto lab_0x40575d;
  lab_0x4058ea_2:;
    // 0x405927
    char * v36; // 0x405527
    return function_4054d0(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x4063fa_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x4056d1;
    } else {
        uint64_t v40 = v37 + v5; // 0x405fce
        int64_t v41 = v5 + 1; // 0x4060b1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x4060b8
        char v48 = v20; // 0x4060b8
        int64_t v49 = result; // 0x4060b8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x406081
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x406085
            int64_t v52 = v50 + 1; // 0x40608a
            int64_t v53 = v47 + 1; // 0x4060b1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40607c
                v50 = v52;
                if (v38 > v50) {
                    // 0x406081
                    *(char *)(v50 + v39) = v51;
                }
                // 0x406085
                v51 = *(char *)(v47 + str);
                v52 = v50 + 1;
                v53 = v47 + 1;
                v42 = v52;
                v43 = v51;
                v44 = v22;
                v3 = v53;
                v45 = v38;
                v46 = v39;
                v47 = v53;
            }
        }
        goto lab_0x40575d;
    }
  lab_0x405e50:
    // 0x405e50
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x405e6f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405e72
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x4063fa
        goto lab_0x4063fa_2;
    }
    goto lab_0x405e7f;
  lab_0x40569d:
    // 0x40569d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4058ea_2;
    }
    goto lab_0x4056d1;
  lab_0x405675:;
    bool v61 = v15 == 1; // 0x405680
    if (v15 == -1) {
        // 0x405682
        v61 = *(char *)v1 == 0;
    }
    // 0x40568e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x4056d1;
    } else {
        goto lab_0x40569d;
    }
  lab_0x40575d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x405762
        *(char *)(v59 + v60) = v43;
    }
    // 0x405766
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x405578_2;
}
// Address range: 0x406700 - 0x40689e
int64_t function_406700(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x406702
    int32_t * v3 = __errno_location(); // 0x40671c
    int64_t v4 = (int64_t)g30; // 0x406721
    int32_t v5 = *v3; // 0x40672b
    int64_t v6 = v4; // 0x406741
    if (v2 >= (int64_t)*(int32_t *)&g33) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x406899
            function_408130(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x406750
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x406757
        int64_t v9; // 0x406700
        if (g30 == &g31) {
            int64_t v10 = function_407f40(0, v8); // 0x40687a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g31); // 0x40687f
            *(int64_t *)&g30 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_407f40(v4, v8); // 0x40676b
            *(int64_t *)&g30 = v12;
            v9 = v12;
        }
        // 0x40677a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g33; // 0x40677a
        int32_t v14 = v7; // 0x406781
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g33 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x4067b1
    int64_t v17 = v15 + 8; // 0x4067b4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x4067bb
    int64_t * v19 = (int64_t *)v16; // 0x4067be
    uint64_t v20 = *v19; // 0x4067be
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x4067c1
    int64_t result = *v21; // 0x4067c1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x4067cc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x4067d5
    int64_t v24; // 0x406700
    uint64_t v25 = function_4054d0(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x4067e4
    if (v20 > v25) {
        // 0x40685b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x4067f7
    *v19 = v26;
    if (result != (int64_t)&g50) {
        // 0x406807
        free((int64_t *)result);
    }
    int64_t result2 = function_407ee0(v26); // 0x406821
    *v21 = result2;
    int64_t v27 = *v22; // 0x40683b
    int64_t v28 = *v23; // 0x40683e
    int64_t v29; // 0x406700
    function_4054d0(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40685b
    *v3 = v5;
    return result2;
}
// Address range: 0x4068a0 - 0x4068d4
int64_t function_4068a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4068a7
    int64_t result = function_4080e0(a1 == 0 ? (int64_t)&g51 : a1, 56); // 0x4068c6
    return result;
}
// Address range: 0x4068e0 - 0x4068ef
int64_t function_4068e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g51 : a1); // 0x4068ec
    return result;
}
// Address range: 0x4068f0 - 0x4068ff
int64_t function_4068f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g51 : a1; // 0x4068f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g51;
}
// Address range: 0x406900 - 0x406933
int64_t function_406900(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g51 + 8 : a1 + 8; // 0x406919
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40691e
    uint32_t v3 = *v2; // 0x40691e
    uint32_t v4 = (int32_t)a2 % 32; // 0x406922
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x406940 - 0x406953
int64_t function_406940(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g51 + 4 : a1 + 4); // 0x40694c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x406960 - 0x40698b
int64_t function_406960(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g51 : a1; // 0x406968
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x406985
        abort();
        // UNREACHABLE
    }
    // 0x40697c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g51;
}
// Address range: 0x406990 - 0x406a02
int64_t function_406990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g51 : a5; // 0x4069b2
    int32_t * v2 = __errno_location(); // 0x4069bb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x4069d4
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x4069d8
    uint32_t v5 = *(int32_t *)v1; // 0x4069db
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x4069e1
    int64_t result = function_4054d0(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x4069ea
    return result;
}
// Address range: 0x406a10 - 0x406af1
int64_t function_406a10(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g51 : a4; // 0x406a32
    int32_t * v2 = __errno_location(); // 0x406a38
    int64_t v3 = v1 + 8; // 0x406a4f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x406a57
    int32_t * v5 = (int32_t *)v1; // 0x406a5a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x406a68
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x406a6b
    int64_t v8 = function_4054d0(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x406a75
    int64_t v9 = v8 + 1; // 0x406a7a
    int64_t result = function_407ee0(v9); // 0x406a8f
    function_4054d0(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x406ad4
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x406add
    return result;
}
// Address range: 0x406b00 - 0x406b0a
int64_t function_406b00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406b00
    return function_406a10(a1, a2, 0, a3);
}
// Address range: 0x406b10 - 0x406ba5
int64_t function_406b10(void) {
    uint32_t v1 = *(int32_t *)&g33; // 0x406b10
    int64_t v2 = v1; // 0x406b10
    int64_t v3 = v2; // 0x406b24
    if (v1 >= 2) {
        int64_t v4 = &g33;
        int64_t v5 = v4 + 16; // 0x406b43
        free((int64_t *)*(int64_t *)v4);
        v3 = &g62;
        while (v5 != (int64_t)g30 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x406b40
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g62;
        }
    }
    int64_t v6 = v3; // 0x406b5d
    if (g31 != 0x613340) {
        // 0x406b5f
        free((int64_t *)g31);
        g31 = 256;
        *(int64_t *)&g32 = (int64_t)&g50;
        v6 = &g62;
    }
    int64_t result = v6; // 0x406b81
    if (g30 != &g31) {
        // 0x406b83
        free(g30);
        *(int64_t *)&g30 = (int64_t)&g31;
        result = &g62;
    }
    // 0x406b96
    *(int32_t *)&g33 = 1;
    return result;
}
// Address range: 0x406bb0 - 0x406bc1
int64_t function_406bb0(void) {
    // 0x406bb0
    int64_t v1; // 0x406bb0
    return function_406700(v1, v1, -1, (int64_t *)&g51);
}
// Address range: 0x406bd0 - 0x406bda
int64_t function_406bd0(void) {
    // 0x406bd0
    int64_t v1; // 0x406bd0
    return function_406700(v1, v1, v1, (int64_t *)&g51);
}
// Address range: 0x406be0 - 0x406bf6
int64_t function_406be0(int64_t a1) {
    // 0x406be0
    return function_406700(0, a1, -1, (int64_t *)&g51);
}
// Address range: 0x406c00 - 0x406c12
int64_t function_406c00(int64_t a1, int64_t a2) {
    // 0x406c00
    return function_406700(0, a1, a2, (int64_t *)&g51);
}
// Address range: 0x406c20 - 0x406c88
int64_t function_406c20(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406c30
    return function_406700((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406c90 - 0x406cf4
int64_t function_406c90(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406ca0
    return function_406700((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x406d00 - 0x406d0c
int64_t function_406d00(int64_t a1, int64_t a2) {
    // 0x406d00
    return function_406c20(0, a1 & 0xffffffff, a2);
}
// Address range: 0x406d10 - 0x406d1f
int64_t function_406d10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406d10
    return function_406c90(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x406d20 - 0x406d90
int64_t function_406d20(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g51); // 0x406d2d
    int128_t v2 = __asm_movdqa(g52); // 0x406d35
    int128_t v3 = __asm_movdqa(g53); // 0x406d3d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x406d52
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x406d68
    uint32_t v6 = *v5; // 0x406d68
    uint32_t v7 = (int32_t)a3 % 32; // 0x406d6d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_406700(0, a1, a2, &v4);
}
// Address range: 0x406d90 - 0x406d9d
int64_t function_406d90(int64_t a1, int64_t a2) {
    // 0x406d90
    return function_406d20(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x406da0 - 0x406db1
int64_t function_406da0(int64_t a1) {
    // 0x406da0
    return function_406d20(a1, -1, 58);
}
// Address range: 0x406dc0 - 0x406dca
int64_t function_406dc0(void) {
    // 0x406dc0
    int64_t v1; // 0x406dc0
    return function_406d20(v1, v1, 58);
}
// Address range: 0x406dd0 - 0x406e3e
int64_t function_406dd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406dea
    return function_406700(a1, a3, -1, &v1);
}
// Address range: 0x406e40 - 0x406eac
int64_t function_406e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g51); // 0x406e47
    int128_t v2 = __asm_movdqa(g52); // 0x406e4f
    int128_t v3 = __asm_movdqa(g53); // 0x406e57
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x406e79
    if (a2 == 0 || a3 == 0) {
        // 0x406ea7
        abort();
        // UNREACHABLE
    }
    // 0x406e8a
    return function_406700(a1, a4, a5, &v4);
}
// Address range: 0x406eb0 - 0x406eb9
int64_t function_406eb0(void) {
    // 0x406eb0
    int64_t v1; // 0x406eb0
    return function_406e40(v1, v1, v1, v1, -1);
}
// Address range: 0x406ec0 - 0x406ed7
int64_t function_406ec0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406ec0
    return function_406e40(0, a1, a2, a3, -1);
}
// Address range: 0x406ee0 - 0x406ef3
int64_t function_406ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x406ee0
    return function_406e40(0, a1, a2, a3, a4);
}
// Address range: 0x406f00 - 0x406f0a
int64_t function_406f00(void) {
    // 0x406f00
    int64_t v1; // 0x406f00
    return function_406700(v1, v1, v1, &g29);
}
// Address range: 0x406f10 - 0x406f22
int64_t function_406f10(int64_t a1, int64_t a2) {
    // 0x406f10
    return function_406700(0, a1, a2, &g29);
}
// Address range: 0x406f30 - 0x406f41
int64_t function_406f30(void) {
    // 0x406f30
    int64_t v1; // 0x406f30
    return function_406700(v1, v1, -1, &g29);
}
// Address range: 0x406f50 - 0x406f66
int64_t function_406f50(int64_t a1) {
    // 0x406f50
    return function_406700(0, a1, -1, &g29);
}
// Address range: 0x406f70 - 0x406f80
int64_t function_406f70(int64_t * a1) {
    // 0x406f70
    *a1 = 0;
    *(int64_t *)((int64_t)a1 + 8) = 0;
    int64_t result; // 0x406f70
    return result;
}
// Address range: 0x406f80 - 0x4070f9
int64_t function_406f80(int64_t a1, char * a2, int64_t a3, int64_t * a4) {
    // 0x406f80
    int128_t v1; // 0x406f80
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a4;
    int128_t v4 = __asm_pxor(v2, v2); // 0x406f82
    int64_t v5; // bp-88, 0x406f80
    int64_t v6 = &v5; // 0x406f94
    v5 = __asm_movaps(v4);
    __asm_movaps(v4);
    int64_t v7 = v3; // 0x406fa4
    int64_t v8 = a1; // 0x406fa4
    int64_t * v9; // 0x406f80
    int64_t v10; // 0x406f80
    int64_t v11; // 0x406f80
    int64_t v12; // 0x406f80
    int64_t v13; // 0x406f80
    if (a3 == 0) {
        goto lab_0x406ffc;
    } else {
        int64_t v14 = (int64_t)a2;
        int64_t v15 = v14; // 0x406fae
        unsigned char v16 = *(char *)v15; // 0x406fb0
        int64_t v17 = v16; // 0x406fb0
        v15++;
        unsigned char v18 = v16 % 64;
        int64_t * v19 = (int64_t *)((v17 / 8 & 24) + v6); // 0x406fc7
        *v19 = (v18 == 0 ? 1 : 1 << (int64_t)v18) | *v19;
        while (v14 + a3 != v15) {
            // 0x406fb0
            v16 = *(char *)v15;
            v17 = v16;
            v15++;
            v18 = v16 % 64;
            v19 = (int64_t *)((v17 / 8 & 24) + v6);
            *v19 = (v18 == 0 ? 1 : 1 << (int64_t)v18) | *v19;
        }
        int64_t * v20 = (int64_t *)(a1 + 8);
        uint64_t v21 = *v20; // 0x406fd0
        v9 = v20;
        v10 = v21;
        v11 = v17;
        v13 = 1;
        v12 = v17;
        if (v21 >= *(int64_t *)(a1 + 16)) {
            goto lab_0x407006;
        } else {
            goto lab_0x406fe0;
        }
    }
  lab_0x406ffc:;
    int64_t * v22 = (int64_t *)(a1 + 8);
    uint64_t v23 = *v22; // 0x406ffc
    v9 = v22;
    v10 = v23;
    v11 = v7;
    v13 = v8;
    v12 = v7;
    if (v23 < *(int64_t *)(a1 + 16)) {
        goto lab_0x406fe0;
    } else {
        goto lab_0x407006;
    }
  lab_0x406fe0:
    // 0x406fe0
    *v9 = v10 + 1;
    int64_t v24 = v11; // 0x406fe8
    int64_t v25 = (int64_t)*(char *)v10; // 0x406fe8
    int64_t v26 = v13; // 0x406fe8
    goto lab_0x406feb;
  lab_0x407006:;
    int32_t v56 = __uflow((struct _IO_FILE *)a1); // 0x407009
    int64_t v57 = v56; // 0x40700e
    v24 = v12;
    v25 = v57;
    v26 = a1;
    int64_t v28 = v12; // 0x407012
    int64_t v29 = v57; // 0x407012
    int64_t v30 = a1; // 0x407012
    if (v56 >= 0) {
        goto lab_0x406feb;
    } else {
        goto lab_0x407014;
    }
  lab_0x406feb:
    // 0x406feb
    v8 = v26;
    v7 = v24;
    int64_t v27 = *(int64_t *)(8 * (0x100000000 * v25 >> 32) / 64 + v6); // 0x406ff2
    v28 = v7;
    v29 = v25;
    v30 = v8;
    if ((1 << v25 % 64 & v27) == 0) {
        goto lab_0x407014;
    } else {
        goto lab_0x406ffc;
    }
  lab_0x407014:
    // 0x407014
    if ((int32_t)v29 < 0) {
        // 0x4070b3
        return -1;
    }
    int64_t * v31 = (int64_t *)(v3 + 8); // 0x407014
    int64_t * v32 = (int64_t *)(a1 + 8);
    int64_t v33 = v29; // 0x406f80
    int64_t result = 0;
    int64_t v34 = *v31;
    bool v35 = false;
    int64_t v36; // 0x406f80
    int64_t v37; // 0x406f80
    int64_t v38; // 0x406f80
    int64_t v39; // 0x406f80
    int64_t v40; // 0x406f80
    int64_t v41; // 0x407093
    if (result != v28) {
        // 0x407028
        v40 = result + v34;
        v39 = v30;
        v36 = v28;
        v38 = v34;
        if (v35) {
            // break -> 0x4070a8
            break;
        }
    } else {
        if (v34 == 0) {
            // 0x4070d8
            v37 = 128;
        } else {
            if (result >= 0x5555555555555554) {
                // 0x4070ea
                function_408130(v30);
                // UNREACHABLE
            }
            // 0x407082
            v37 = result + 1 + result / 2;
        }
        // 0x40708d
        v41 = function_407f40(v34, v37);
        v40 = v41 + result;
        v39 = v34;
        v36 = v37;
        v38 = v41;
        if (v35) {
            // break -> 0x4070a8
            break;
        }
    }
    int64_t v42 = *(int64_t *)(8 * (0x100000000 * v33 >> 32) / 64 + v6); // 0x407037
    int64_t v43 = v40; // 0x40703f
    int64_t v44 = v36; // 0x40703f
    int64_t v45 = v38; // 0x40703f
    while ((v42 & 1 << v33 % 64) == 0) {
        int64_t v46 = v39;
        *(char *)v40 = (char)v33;
        uint64_t v47 = *v32; // 0x407047
        int64_t v48; // 0x406f80
        int64_t v49; // 0x406f80
        if (v47 >= *(int64_t *)(a1 + 16)) {
            // 0x4070c8
            v48 = __uflow((struct _IO_FILE *)a1);
            v49 = a1;
        } else {
            // 0x407051
            *v32 = v47 + 1;
            v48 = (int64_t)*(char *)v47;
            v49 = v46;
        }
        int64_t v50 = result + 1; // 0x407043
        bool v51 = v50 == 0; // 0x40705e
        v33 = v48;
        if (v50 == 0 == (int32_t)v48 < 0) {
            // 0x4070b3
            return -1;
        }
        int64_t v52 = v49;
        result = v50;
        int64_t v53 = v36;
        v34 = v38;
        v35 = (int32_t)v48 < 0;
        if (result != v53) {
            int64_t v54 = result + v34; // 0x407028
            v40 = v54;
            v39 = v52;
            v36 = v53;
            v38 = v34;
            v43 = v54;
            v44 = v53;
            v45 = v34;
            if (v35) {
                // break -> 0x4070a8
                break;
            }
        } else {
            if (v34 == 0) {
                // 0x4070d8
                v37 = 128;
                if (!v51) {
                    // 0x4070e8
                    v37 = v53;
                    if (result < 0) {
                        // 0x4070ea
                        function_408130(v52);
                        // UNREACHABLE
                    }
                }
            } else {
                if (result >= 0x5555555555555554) {
                    // 0x4070ea
                    function_408130(v52);
                    // UNREACHABLE
                }
                // 0x407082
                v37 = result + 1 + result / 2;
            }
            // 0x40708d
            v41 = function_407f40(v34, v37);
            int64_t v55 = v41 + result; // 0x40709b
            v40 = v55;
            v39 = v34;
            v36 = v37;
            v38 = v41;
            v43 = v55;
            v44 = v37;
            v45 = v41;
            if (v35) {
                // break -> 0x4070a8
                break;
            }
        }
        // 0x407030
        v42 = *(int64_t *)(8 * (0x100000000 * v33 >> 32) / 64 + v6);
        v43 = v40;
        v44 = v36;
        v45 = v38;
    }
    // 0x4070a8
    *(char *)v43 = 0;
    *v31 = v45;
    *a4 = v44;
    // 0x4070b3
    return result;
}
// Address range: 0x407100 - 0x4072d9
int64_t function_407100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 512; // 0x407129
    int64_t v2 = 64; // 0x407129
    if (a2 != 0) {
        // 0x40712b
        v2 = a2 + 1;
        v1 = 8 * v2;
        if (v1 > -1 != v2 < 0x2000000000000000) {
            // 0x40714a
            function_408130(a1);
            // UNREACHABLE
        }
    }
    int64_t v3 = 0; // bp-72, 0x40716f
    int64_t v4 = 0; // 0x407184
    int64_t v5 = v2; // 0x407184
    int64_t v6 = function_407ee0(v1); // 0x407184
    int64_t v7 = function_407ee0(v1); // 0x407184
    int64_t v8; // 0x407100
    int64_t v9; // 0x407100
    uint64_t result; // 0x407100
    while (true) {
        int64_t v10 = v7;
        int64_t v11 = v6;
        uint64_t v12 = v5;
        result = v4;
        int64_t v13 = function_406f80(a1, (char *)a3, a4, &v3); // 0x4071db
        int64_t v14; // 0x407100
        int64_t v15; // 0x407100
        int64_t v16; // 0x407100
        if (result < v12) {
            // 0x407190
            v5 = v12;
            v16 = a1;
            v14 = v11;
            v15 = v10;
            v8 = v11;
            v9 = v10;
            if (v13 == -1) {
                // break -> 0x407247
                break;
            }
        } else {
            int64_t v17; // 0x407100
            int64_t v18; // 0x407100
            if (v11 == 0) {
                // 0x407290
                v18 = 128;
                v17 = 16;
                if (v12 != 0) {
                    int64_t v19 = 8 * v12; // 0x4072a2
                    v18 = v19;
                    v17 = v12;
                    if (v19 > -1 != v12 < 0x2000000000000000) {
                        // 0x40714a
                        function_408130(a1);
                        // UNREACHABLE
                    }
                }
            } else {
                // 0x4071f1
                if (v12 >= 0xaaaaaaaaaaaaaaa) {
                    // 0x40714a
                    function_408130(a1);
                    // UNREACHABLE
                }
                int64_t v20 = v12 + 1 + v12 / 2; // 0x40720a
                v18 = 8 * v20;
                v17 = v20;
            }
            int64_t v21 = function_407f40(v11, v18); // 0x407222
            int64_t v22 = function_407f40(v10, v18); // 0x407235
            v5 = v17;
            v16 = v10;
            v14 = v21;
            v15 = v22;
            v8 = v21;
            v9 = v22;
            if (v13 == -1) {
                // break -> 0x407247
                break;
            }
        }
        int64_t v23 = v13 + 1; // 0x40719d
        int64_t v24 = v16; // 0x4071a1
        if (v23 < 0) {
            // 0x40714a
            function_408130(v24);
            // UNREACHABLE
        }
        // 0x4071a3
        v7 = v15;
        v6 = v14;
        int64_t v25 = function_407ee0(v23); // 0x4071a6
        int64_t v26 = 8 * result; // 0x4071ab
        *(int64_t *)(v7 + v26) = v13;
        int64_t * dest_mem = memcpy((int64_t *)v25, NULL, (int32_t)v23); // 0x4071bb
        *(int64_t *)(v6 + v26) = (int64_t)dest_mem;
        v4 = result + 1;
    }
    int64_t v27 = 8 * result; // 0x407247
    *(int64_t *)(v8 + v27) = 0;
    *(int64_t *)(v9 + v27) = 0;
    free(NULL);
    *(int64_t *)a5 = v8;
    if (a6 == 0) {
        // 0x4072cf
        free((int64_t *)v9);
    } else {
        // 0x407272
        *(int64_t *)a6 = v9;
    }
    // 0x40727a
    return result;
}
// Address range: 0x4072e0 - 0x40733e
int64_t function_4072e0(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x407301
    while (result < 0) {
        // 0x40730e
        if (*__errno_location() != 4) {
            // break -> 0x40731a
            break;
        }
        result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x407340 - 0x407371
int64_t function_407340(int64_t a1, int64_t a2) {
    int64_t v1 = function_409040(a1, 0, a2); // 0x407351
    return v1 != 0 ? 1 - a1 + v1 : a2;
}
// Address range: 0x407380 - 0x4073a0
int64_t function_407380(void) {
    // 0x407380
    __assert_fail("iter->cur.wc == 0", "lib/mbiter.h", 170, "mbiter_multi_next");
    return &g62;
}
// Address range: 0x4073a0 - 0x407d1d
int64_t function_4073a0(int64_t str, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    char * v1 = strdup((char *)str); // 0x4073b0
    if (v1 == NULL) {
        // 0x407900
        function_408130(str);
        // UNREACHABLE
    }
    int64_t result = (int64_t)v1; // 0x4073b0
    int32_t v2 = a2;
    if (__ctype_get_mb_cur_max() < 2) {
        if (v2 != 0) {
            char v3 = *v1; // 0x407604
            int64_t v4 = result; // 0x40760b
            if (v3 != 0) {
                int16_t * v5 = *__ctype_b_loc(); // 0x407619
                char v6 = v3; // 0x40761c
                int64_t v7 = result; // 0x40761c
                v4 = v7;
                while ((*(char *)((int64_t)v5 + 1 + 2 * (int64_t)v6) & 32) != 0) {
                    // 0x407620
                    v7++;
                    v6 = *(char *)v7;
                    v4 = v7;
                    if (v6 == 0) {
                        // break -> 0x407634
                        break;
                    }
                    v4 = v7;
                }
            }
            int64_t str2 = v4;
            memmove((int64_t *)v1, (int64_t *)str2, strlen((char *)str2) + 1);
            if (v2 == 1) {
              lab_0x40751a:
                // 0x40751a
                return result;
            }
        }
        int64_t v8 = result;
        int32_t v9 = *(int32_t *)v8; // 0x407657
        int64_t v10 = v8 + 4; // 0x407659
        int32_t v11 = v9 - 0x1010101 & (v9 ^ -0x7f7f7f80); // 0x407665
        uint32_t v12 = v11 & -0x7f7f7f80; // 0x407667
        while (v12 == 0) {
            // 0x407657
            v8 = v10;
            v9 = *(int32_t *)v8;
            v10 = v8 + 4;
            v11 = v9 - 0x1010101 & (v9 ^ -0x7f7f7f80);
            v12 = v11 & -0x7f7f7f80;
        }
        unsigned char v13 = (char)((v11 & 0x8080) == 0 ? v12 / 0x10000 : v12); // 0x407685
        int64_t v14 = (-1 - v13 < v13 ? -5 : -4) + ((v11 & 0x8080) == 0 ? v8 + 6 : v10); // 0x40768c
        if (v14 < result) {
            // 0x40751a
            return result;
        }
        int16_t * v15 = *__ctype_b_loc(); // 0x40769e
        int64_t v16 = v14; // 0x4076a1
        char * v17 = (char *)v16; // 0x4076b8
        char v18 = *(char *)((int64_t)v15 + 1 + 2 * (int64_t)*v17); // 0x4076bb
        while ((v18 & 32) != 0) {
            // 0x4076a8
            *v17 = 0;
            v16--;
            if (v16 < result) {
                // break -> 0x40751a
                break;
            }
            v17 = (char *)v16;
            v18 = *(char *)((int64_t)v15 + 1 + 2 * (int64_t)*v17);
        }
        // 0x40751a
        return result;
    }
    // 0x4073d0
    char * wc2; // 0x4073a0
    int64_t v19; // 0x4073a0
    int64_t v20; // 0x4073a0
    int64_t v21; // 0x4073a0
    int64_t v22; // 0x4073a0
    char * v23; // 0x4073a0
    char * v24; // 0x4073a0
    int64_t ps; // bp-124, 0x4073a0
    char v25; // 0x4073a0
    char v26; // 0x4073a0
    char v27; // 0x4073a0
    char * wc; // bp-92, 0x4073a0
    uint64_t v28; // 0x40776f
    if (v2 != 0) {
        int64_t v29 = result;
        int32_t v30 = *(int32_t *)v29; // 0x407728
        int64_t v31 = v29 + 4; // 0x40772a
        int32_t v32 = v30 - 0x1010101 & (v30 ^ -0x7f7f7f80); // 0x407736
        uint32_t v33 = v32 & -0x7f7f7f80; // 0x407738
        while (v33 == 0) {
            // 0x407728
            v29 = v31;
            v30 = *(int32_t *)v29;
            v31 = v29 + 4;
            v32 = v30 - 0x1010101 & (v30 ^ -0x7f7f7f80);
            v33 = v32 & -0x7f7f7f80;
        }
        // 0x40773f
        ps = 0;
        unsigned char v34 = (char)((v32 & 0x8080) == 0 ? v33 / 0x10000 : v33); // 0x40776c
        v28 = ((v32 & 0x8080) == 0 ? v29 + 6 : v31) - (-1 - v34 < v34 ? 4 : 3);
        v21 = result;
        if (v28 > result) {
            // 0x4077f2
            v23 = v1;
            v26 = 0;
            v19 = result;
            while (true) {
              lab_0x4077f2:
                // 0x4077f2
                v20 = v19;
                v24 = v23;
                v27 = v26;
                if (v26 == 0) {
                    unsigned char v35 = *(char *)v20; // 0x407788
                    int32_t v36 = *(int32_t *)((int64_t)(4 * v35 / 32) + (int64_t)&g20); // 0x407794
                    if ((1 << (int32_t)(v35 % 32) & v36) == 0) {
                        int32_t v37 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40788d
                        v27 = 1;
                        if (v37 == 0) {
                            goto lab_0x407905_2;
                        }
                        goto lab_0x4077f9;
                    } else {
                        char * v38 = (char *)((int64_t)v35 & 0xffffffff); // 0x4077bc
                        wc = v38;
                        wc2 = v38;
                        v25 = 0;
                        v22 = 1;
                        goto lab_0x4077c5;
                    }
                } else {
                    goto lab_0x4077f9;
                }
            }
          lab_0x4078b8_3:
            // 0x4078b8
            v21 = (int64_t)v24;
        }
      lab_0x4078b8_2:;
        int64_t str3 = v21;
        memmove((int64_t *)v1, (int64_t *)str3, strlen((char *)str3) + 1);
        if (v2 == 1) {
            // 0x40751a
            return result;
        }
    }
    int64_t v39 = result;
    int32_t v40 = *(int32_t *)v39; // 0x4073e0
    int64_t v41 = v39 + 4; // 0x4073e3
    int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x4073ef
    uint32_t v43 = v42 & -0x7f7f7f80; // 0x4073f1
    while (v43 == 0) {
        // 0x4073e0
        v39 = v41;
        v40 = *(int32_t *)v39;
        v41 = v39 + 4;
        v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
        v43 = v42 & -0x7f7f7f80;
    }
    // 0x4073f8
    ps = 0;
    unsigned char v44 = (char)((v42 & 0x8080) == 0 ? v43 / 0x10000 : v43); // 0x407425
    uint64_t v45 = ((v42 & 0x8080) == 0 ? v39 + 6 : v41) - (-1 - v44 < v44 ? 4 : 3); // 0x407428
    if (v45 <= result) {
        // 0x40751a
        return result;
    }
    char * v46 = v1; // 0x4073a0
    char v47 = 0; // 0x4073a0
    int64_t v48 = result;
    int64_t v49 = 0;
    int64_t v50; // 0x4073a0
    int64_t v51; // 0x4073a0
    int64_t v52; // 0x4073a0
    int64_t v53; // 0x4073a0
    int64_t v54; // 0x4073a0
    int64_t v55; // 0x4073a0
    int64_t v56; // 0x4073a0
    int64_t v57; // 0x4073a0
    int64_t v58; // 0x4073a0
    char * v59; // 0x4073a0
    char * v60; // 0x4073a0
    char v61; // 0x4073a0
    char v62; // 0x4073a0
    char v63; // 0x4073a0
    while (true) {
      lab_0x407472_2:
        // 0x407472
        v52 = v51;
        v59 = v46;
        v54 = v49;
        while (true) {
          lab_0x407472:
            // 0x407472
            v55 = v54;
            v57 = v48;
            char v64 = v47;
            v60 = v59;
            v61 = v64;
            if (v64 != 0) {
                goto lab_0x407547;
            } else {
                unsigned char v65 = *(char *)v57; // 0x40747d
                int32_t v66 = *(int32_t *)((int64_t)(4 * v65 / 32) + (int64_t)&g20); // 0x407488
                if ((1 << (int32_t)(v65 % 32) & v66) == 0) {
                    int32_t v67 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x407535
                    v61 = 1;
                    if (v67 == 0) {
                        // break (via goto) -> 0x407905
                        goto lab_0x407905_2;
                    }
                    goto lab_0x407547;
                } else {
                    int64_t v68 = (int64_t)v60; // 0x4074a5
                    wc = (char *)((int64_t)v65 & 0xffffffff);
                    v47 = v64;
                    v62 = 1;
                    v58 = v68 + 1;
                    v56 = v68;
                    goto lab_0x4074bb;
                }
            }
        }
      lab_0x407440:
        // 0x407440
        v50 = v52;
        v53 = 1;
        if (v63 != 0) {
            // 0x40744d
            v50 = v52;
            v53 = iswspace((int32_t)(int64_t)wc) == 0;
        }
        goto lab_0x40745f;
    }
  lab_0x407905_2:
    // 0x407905
    __assert_fail("mbsinit (&iter->state)", "lib/mbiter.h", 142, "mbiter_multi_next");
  lab_0x407937_3:
    // 0x407937
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbiter.h", 169, "mbiter_multi_next");
    function_407380();
    struct _IO_FILE * v69 = (struct _IO_FILE *)"*iter->cur.ptr == '\\0'"; // 0x4073a0
    int64_t v70 = (int64_t)"lib/mbiter.h"; // 0x4073a0
    int64_t v71 = 169; // 0x4073a0
    int64_t v72 = (int64_t)"mbiter_multi_next"; // 0x4073a0
    goto lab_0x40795c;
  lab_0x407510_2:;
    // 0x407510
    int64_t v75; // 0x4073a0
    int64_t v76; // 0x4073a0
    if ((int32_t)v76 == 2) {
        // 0x407878
        *(char *)v75 = 0;
        goto lab_0x40751a;
    } else {
        goto lab_0x40751a;
    }
  lab_0x40745f:
    // 0x40745f
    v49 = v53;
    v46 = (char *)v48;
    v51 = v50;
    v75 = v50;
    v76 = v49;
    if (v48 >= v45) {
        goto lab_0x407510_2;
    }
    goto lab_0x407472_2;
  lab_0x407937_4:
    // 0x407937
    function_407380();
    v69 = (struct _IO_FILE *)&wc;
    int64_t v77; // 0x4073a0
    v70 = v77;
    int64_t v78; // 0x4073a0
    v71 = v78;
    v72 = &ps;
    struct _IO_FILE * v73; // 0x4073a0
    if (v77 == 0) {
        // 0x4079d8
        __fprintf_chk((struct _IO_FILE *)&wc, 1, "%s %s\n", (char *)v78, &ps);
        v73 = (struct _IO_FILE *)&wc;
        goto lab_0x407976;
    } else {
        goto lab_0x40795c;
    }
  lab_0x407547:;
    char v79 = v61;
    int64_t v80 = v45 - v57; // 0x407557
    int64_t v81 = function_408fc0((int64_t *)&wc, v57, v80); // 0x40755a
    int64_t v82 = (int64_t)v60;
    v47 = v79;
    v62 = 0;
    v58 = v45;
    v56 = v82;
    switch (v81) {
        case -1: {
            // 0x4076d0
            v47 = v79;
            v62 = 0;
            v58 = v82 + 1;
            v56 = v82;
            goto lab_0x4074bb;
        }
        case -2: {
            goto lab_0x4074bb;
        }
        default: {
            int64_t v83 = v81; // 0x407583
            if (v81 == 0) {
                // 0x407585
                if (*v60 != 0) {
                    goto lab_0x407937_3;
                }
                // 0x407598
                v83 = 1;
                v78 = v80;
                v77 = v57;
                if ((int32_t)(int64_t)wc != 0) {
                    goto lab_0x407937_4;
                }
            }
            int32_t v84 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4075b6
            v47 = v84 == 0 ? v79 : 0;
            v62 = 1;
            v58 = v83 + v82;
            v56 = v82;
            goto lab_0x4074bb;
        }
    }
  lab_0x4074bb:
    // 0x4074bb
    v48 = v58;
    v63 = v62;
    int32_t v85 = v55; // 0x4074c0
    switch (v85) {
        case 0: {
            goto lab_0x407440;
        }
        case 1: {
            // 0x4075d8
            v50 = v52;
            v53 = v55;
            if (v63 != 0) {
                int32_t v86 = iswspace((int32_t)(int64_t)wc); // 0x4075e7
                v50 = v86 != 0 ? v56 : v52;
                v53 = v86 != 0 ? 2 : v55 & 0xffffffff;
            }
            goto lab_0x40745f;
        }
        default: {
            // 0x4074d3
            v50 = v52;
            v53 = 1;
            if (v85 != 2 || v63 == 0) {
                goto lab_0x40745f;
            }
            int64_t v87 = iswspace((int32_t)(int64_t)wc) == 0 ? 1 : v55 & 0xffffffff; // 0x407502
            v59 = (char *)v48;
            v54 = v87;
            v75 = v52;
            v76 = v87;
            if (v48 >= v45) {
                goto lab_0x407510_2;
            }
            goto lab_0x407472;
        }
    }
  lab_0x4077f9:;
    int64_t v88 = function_408fc0((int64_t *)&wc, v20, v28 - v20); // 0x40780c
    if (v88 > 0xfffffffffffffffd) {
        // break -> 0x4078b8
        goto lab_0x4078b8_3;
    }
    int64_t v89 = v88; // 0x407832
    if (v88 == 0) {
        // 0x407834
        if (*v24 != 0) {
            goto lab_0x407937_3;
        }
        int64_t v90 = (int64_t)wc;
        v89 = 1;
        if ((int32_t)v90 != 0) {
            // 0x407937
            v78 = v90 & 0xffffffff;
            v77 = v20;
            goto lab_0x407937_4;
        }
    }
    int32_t v91 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40785d
    wc2 = wc;
    v25 = v91 == 0 ? v27 : 0;
    v22 = v89;
    goto lab_0x4077c5;
  lab_0x4077c5:;
    int64_t v92 = (int64_t)v24;
    v21 = v92;
    if (iswspace((int32_t)(int64_t)wc2) == 0) {
        goto lab_0x4078b8_2;
    }
    int64_t v93 = v22 + v92; // 0x4077da
    v23 = (char *)v93;
    v26 = v25;
    v19 = v93;
    v21 = v93;
    if (v93 >= v28) {
        goto lab_0x4078b8_2;
    }
    goto lab_0x4077f2;
  lab_0x40795c:
    // 0x40795c
    __fprintf_chk(v69, 1, "%s (%s) %s\n", (char *)v70, (char *)v71, (char *)v72);
    v73 = v69;
    goto lab_0x407976;
  lab_0x407976:
    // 0x407976
    __fprintf_chk(v73, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result2 = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v73); // 0x4079bb
    if (a6 < 10) {
        // 0x4079ca
        return result2;
    }
    char * v74 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x407ac2
    return __fprintf_chk(v73, 1, v74);
}
// Address range: 0x407d20 - 0x407d40
int64_t function_407d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407d20
    int64_t result; // 0x407d20
    if (a5 == 0) {
        // 0x407d3b
        return result;
    }
    int64_t v1 = 0; // 0x407d27
    while (*(int64_t *)(8 * (v1 + 1) + a5) != 0) {
        // 0x407d30
        v1++;
    }
    // 0x407d3b
    return result;
}
// Address range: 0x407d40 - 0x407da0
int64_t function_407d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x407d40
    int64_t v3 = &v2; // 0x407d40
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x407d73
    int64_t v6; // 0x407d40
    int64_t v7; // 0x407d5d
    int64_t * v8; // 0x407d7b
    int64_t v9; // 0x407d7b
    int64_t v10; // 0x407d87
    if (v5 < 48) {
        // 0x407d50
        *(int32_t *)v1 = v5 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v7;
        v6 = v7;
        if (v7 == 0) {
            // break -> 0x407d93
            break;
        }
    } else {
        // 0x407d7b
        v8 = (int64_t *)(v1 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v4 + v3) = v10;
        v6 = v10;
        if (v10 == 0) {
            // break -> 0x407d93
            break;
        }
    }
    int64_t result = v6; // 0x407d71
    while (v4 != 9) {
        // 0x407d69
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x407d50
            *(int32_t *)v1 = v5 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v7;
            v6 = v7;
            result = 0;
            if (v7 == 0) {
                // break -> 0x407d93
                break;
            }
        } else {
            // 0x407d7b
            v8 = (int64_t *)(v1 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v4 + v3) = v10;
            v6 = v10;
            result = v10;
            if (v10 == 0) {
                // break -> 0x407d93
                break;
            }
        }
        // 0x407d69
        result = v6;
    }
    // 0x407d93
    return result;
}
// Address range: 0x407da0 - 0x407e5c
int64_t function_407da0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int64_t a6) {
    // 0x407da0
    int64_t v1; // bp-168, 0x407da0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x407da0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x407da0
    int64_t v8; // 0x407da0
    int64_t v9; // 0x407da0
    int64_t v10; // bp-56, 0x407da0
    int64_t v11; // 0x407e05
    int64_t v12; // 0x407e29
    if ((int32_t)v6 < 48) {
        // 0x407df0
        v11 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v10);
        *(int64_t *)(8 * v5 + v2) = v11;
        v9 = v11;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v11 == 0) {
            // break -> 0x407e40
            break;
        }
    } else {
        // 0x407e22
        v12 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v12;
        v9 = v12;
        v8 = v6;
        v7 = v4 + 8;
        if (v12 == 0) {
            // break -> 0x407e40
            break;
        }
    }
    int64_t v13 = v5 + 1; // 0x407e1a
    int64_t result = v9; // 0x407e1a
    while (v5 != 9) {
        // 0x407e1c
        v4 = v7;
        v5 = v13;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x407df0
            v11 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v10);
            *(int64_t *)(8 * v5 + v2) = v11;
            v9 = v11;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            result = 0;
            if (v11 == 0) {
                // break -> 0x407e40
                break;
            }
        } else {
            // 0x407e22
            v12 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v12;
            v9 = v12;
            v8 = v6;
            v7 = v4 + 8;
            result = v12;
            if (v12 == 0) {
                // break -> 0x407e40
                break;
            }
        }
        // 0x407e12
        v13 = v5 + 1;
        result = v9;
    }
    // 0x407e40
    return result;
}
// Address range: 0x407e60 - 0x407ed4
int64_t function_407e60(int64_t a1) {
    // 0x407e60
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x407ec3
    return fputs_unlocked(v1, g38);
}
// Address range: 0x407ee0 - 0x407efa
int64_t function_407ee0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x407ee4
    if (size != 0 != (mem == NULL)) {
        // 0x407ef3
        return (int64_t)mem;
    }
    // 0x407ef5
    function_408130(size);
    // UNREACHABLE
}
// Address range: 0x407f00 - 0x407f21
int64_t function_407f00(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x407f03
    int64_t v2 = v1; // 0x407f03
    if (v2 < 0) {
        // 0x407f1b
        function_408130(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407f19
        return function_407ee0(v2);
    }
    // 0x407f1b
    function_408130(v2);
    // UNREACHABLE
}
// Address range: 0x407f30 - 0x407f32
int64_t function_407f30(void) {
    // 0x407f30
    int64_t v1; // 0x407f30
    return function_407ee0(v1);
}
// Address range: 0x407f40 - 0x407f76
int64_t function_407f40(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x407f68
        free(v1);
        return (int32_t)&g62 ^ (int32_t)&g62;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x407f51
    if (a2 != 0 != (mem == NULL)) {
        // 0x407f60
        return (int64_t)mem;
    }
    // 0x407f71
    function_408130(a1);
    // UNREACHABLE
}
// Address range: 0x407f80 - 0x407fa1
int64_t function_407f80(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x407f83
    int64_t v2 = v1; // 0x407f83
    if (v2 < 0) {
        // 0x407f9b
        function_408130(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407f99
        return function_407f40(a1, v2);
    }
    // 0x407f9b
    function_408130(a1);
    // UNREACHABLE
}
// Address range: 0x407fb0 - 0x408036
int64_t function_407fb0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40800b
            function_408130(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407f40(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x407ff3
    if (a2 == 0) {
        // 0x408018
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x407ff8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40800b
        function_408130(a1);
        // UNREACHABLE
    }
    // 0x407fda
    *(int64_t *)a2 = v2;
    return function_407f40(a1, v2 * a3);
}
// Address range: 0x408040 - 0x408090
int64_t function_408040(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x408040
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40808a
            function_408130(a1);
            // UNREACHABLE
        }
        // 0x408062
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407f40(a1, v1);
    }
    if (a2 == 0) {
        // 0x408075
        *(int64_t *)a2 = 128;
        return function_407f40(0, 128);
    }
    // 0x408088
    if (a2 < 0) {
        // 0x40808a
        function_408130(a1);
        // UNREACHABLE
    }
    // 0x408062
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_407f40(a1, v1);
}
// Address range: 0x408090 - 0x4080a7
int64_t function_408090(int64_t a1, int64_t a2) {
    // 0x408090
    return (int64_t)memset((int64_t *)function_407ee0(a1), 0, (int32_t)a1);
}
// Address range: 0x4080b0 - 0x4080de
int64_t function_4080b0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4080b7
    if ((int64_t)v1 < 0) {
        // 0x4080d9
        function_408130(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4080d9
        function_408130(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4080ca
    if (mem != NULL) {
        // 0x4080d4
        return (int64_t)mem;
    }
    // 0x4080d9
    function_408130(nmemb);
    // UNREACHABLE
}
// Address range: 0x4080e0 - 0x408108
int64_t function_4080e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_407ee0(a2); // 0x4080ef
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x408110 - 0x408123
int64_t function_408110(int64_t str) {
    // 0x408110
    return function_4080e0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x408130 - 0x408161
int64_t function_408130(int64_t a1) {
    // 0x408130
    error(g28, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x408170 - 0x40818f
int64_t function_408170(void) {
    // 0x408170
    int64_t v1; // 0x408170
    int64_t v2 = function_40b2f0(v1, v1, v1, v1, v1); // 0x408171
    if ((int32_t)v2 >= 0 || *__errno_location() != 12) {
        // 0x40817c
        return v2 & 0xffffffff;
    }
    // 0x40818a
    function_408130(v1);
    // UNREACHABLE
}
// Address range: 0x408190 - 0x4081b7
int64_t function_408190(void) {
    // 0x408190
    int64_t v1; // 0x408190
    int64_t result = function_40b540(v1, v1, v1, v1, v1); // 0x408191
    if (result != 0 || *__errno_location() != 12) {
        // 0x40819e
        return result;
    }
    // 0x4081b2
    function_408130(v1);
    // UNREACHABLE
}
// Address range: 0x4081c0 - 0x4081e7
int64_t function_4081c0(void) {
    // 0x4081c0
    int64_t v1; // 0x4081c0
    int64_t result = function_40b710(v1, v1, v1); // 0x4081c1
    if (result != 0 || *__errno_location() != 12) {
        // 0x4081ce
        return result;
    }
    // 0x4081e2
    function_408130(v1);
    // UNREACHABLE
}
// Address range: 0x4081f0 - 0x4082cf
int64_t function_4081f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4081fc
    uint32_t v2 = *v1; // 0x4081fc
    int64_t v3 = a2 & 0xffffffff; // 0x408201
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408204
    uint64_t v5 = (int64_t)*v4; // 0x408204
    int64_t v6; // 0x408272
    if (v3 <= v5) {
      lab_0x40826c_2:
        // 0x40826c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4081f2
    int64_t v8 = v2; // 0x4081f0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40826c
        goto lab_0x40826c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408228
    int64_t v17; // 0x408236
    int64_t * v18; // 0x408250
    int64_t * v19; // 0x408253
    int64_t v20; // 0x40825e
    int64_t v21; // 0x408236
    while ((v16 & 0xffffffff) > v10) {
        // 0x408233
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x408250
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x408267
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40826c
            goto lab_0x40826c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40826c
            goto lab_0x40826c_2;
        }
        // 0x408222
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4082ab
    int64_t * v23 = (int64_t *)v22; // 0x4082b0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4082b3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4082b0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4082c7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40821d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40826c
            goto lab_0x40826c_2;
        }
        // 0x408222
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408233
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x408250
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x408267
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40826c
                goto lab_0x40826c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40826c
                goto lab_0x40826c_2;
            }
            // 0x408222
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x408290
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4082b0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4082c7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40826c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4082d0 - 0x4088ec
int64_t function_4082d0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4082ef
    int64_t v2 = *v1; // 0x4082ef
    char * str2 = (char *)v2; // 0x4082fc
    char c = *str2; // 0x4082fc
    int64_t v3 = v2; // 0x408328
    int64_t v4 = 0; // 0x4082d0
    int32_t v5; // 0x4082d0
    int64_t v6; // 0x4082d0
    int64_t v7; // 0x4082d0
    int64_t v8; // 0x4082d0
    int64_t v9; // 0x4082d0
    int64_t v10; // 0x4082d0
    int64_t v11; // 0x4082d0
    int64_t v12; // 0x4082d0
    int64_t v13; // 0x4082d0
    int64_t str3; // 0x4082d0
    int64_t v14; // 0x4082d0
    int64_t v15; // 0x4082d0
    int64_t v16; // 0x4082d0
    int64_t v17; // 0x4082d0
    int32_t v18; // 0x4082d0
    int32_t v19; // 0x4082d0
    int32_t v20; // 0x4082d0
    int32_t v21; // 0x4082d0
    int32_t v22; // 0x4082d0
    int32_t v23; // 0x4082d0
    int32_t v24; // 0x4082d0
    int32_t v25; // 0x4082d0
    int32_t v26; // 0x4082d0
    int32_t v27; // 0x4082d0
    int32_t v28; // 0x4082d0
    int32_t v29; // 0x4082d0
    int64_t nmemb; // 0x4082d0
    int64_t v30; // 0x4082d0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40832c
            while (v31 != 0 == (v31 != 61)) {
                // 0x408328
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408338
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40833e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408308
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40836c
                int64_t v34; // 0x4082d0
                int64_t v35; // 0x4082d0
                if (strncmp(str, str2, n) == 0) {
                    // 0x408375
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4084f0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408386
                int64_t v37 = *(int64_t *)v36; // 0x40838a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x408360
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408375
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4084f0;
                        }
                    }
                    // 0x408386
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
                  lab_0x4083d6:
                    // 0x4083d6
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
                        goto lab_0x408430;
                    } else {
                        if (v11 == 0) {
                            // 0x4085a0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408430;
                        } else {
                            if (v39 == 0) {
                                // 0x408550
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4083fa;
                                } else {
                                    // 0x40855c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4083fa;
                                    } else {
                                        // 0x40856a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4083fa;
                                        } else {
                                            goto lab_0x408430;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4083fa;
                            }
                        }
                    }
                }
              lab_0x408441:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408616
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4087c2
                            flockfile(g41);
                            int64_t v41 = *v1; // 0x4087e2
                            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40882f
                            int64_t v43 = (int64_t)g41;
                            int64_t v44 = v43; // 0x408849
                            int64_t v45; // 0x40884b
                            if (*(char *)v42 != 0) {
                                // 0x40884b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g41;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408843
                            while (v17 + nmemb != v42) {
                                // 0x408845
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40884b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g41;
                                }
                                // 0x408838
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x408870
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g41);
                            v40 = *v1;
                        } else {
                            // 0x408624
                            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40877f
                        free((int64_t *)v17);
                    }
                    // 0x408679
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408690
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40853e
                    return 63;
                }
                // 0x408460
                v5 = v39;
                if (v13 != 0) {
                    // 0x4084e4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4084f0:;
                    int32_t * v49 = (int32_t *)a7; // 0x408500
                    uint32_t v50 = *v49; // 0x408500
                    int64_t v51 = v50; // 0x408500
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40850a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408513
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40873f
                                __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4086ea
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40853e
                            return 63;
                        }
                        // 0x408588
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40889f
                                    __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40879d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4087b0
                                // 0x40853e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4086ae
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4086c2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40852b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40852e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408532
                    int64_t result = v59; // 0x408538
                    if (v58 != 0) {
                        // 0x40853a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40853e
                    return result;
                }
            } else {
                // 0x40833e
                v5 = v32;
            }
            // break -> 0x408465
            break;
        }
    }
    // 0x408465
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40847d
        if (*(char *)(v60 + 1) != 45) {
            // 0x408487
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40853e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4085c9
        __fprintf_chk(g41, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4084b6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4084c6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408430:
    // 0x408430
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408430
    int64_t v63 = *(int64_t *)v62; // 0x408434
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408441
        goto lab_0x408441;
    }
    goto lab_0x4083d6;
  lab_0x4083fa:
    // 0x4083fa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4082d0
    int32_t v65; // 0x4082d0
    int32_t v66; // 0x4082d0
    if (v27 != 0) {
        goto lab_0x408430;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4085b0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408430;
            } else {
                goto lab_0x408421;
            }
        } else {
            // 0x408415
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40870c
                int64_t v67 = (int64_t)mem; // 0x40870c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408430;
                } else {
                    // 0x40871f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408421;
                }
            } else {
                goto lab_0x408421;
            }
        }
    }
  lab_0x408421:
    // 0x408421
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408430;
}
// Address range: 0x4088f0 - 0x408eb6
int64_t function_4088f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x408911
    if (v3 < 1) {
        // 0x408ace
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40890d
    int32_t v5 = *(int32_t *)a7; // 0x408919
    uint64_t v6 = a1 & 0xffffffff; // 0x40891b
    int64_t v7 = v2; // 0x408920
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x408923
    *v8 = 0;
    int64_t v9; // 0x4088f0
    int64_t v10; // 0x4088f0
    int64_t v11; // 0x4088f0
    int64_t v12; // 0x4088f0
    int64_t str; // 0x4088f0
    int64_t v13; // 0x4088f0
    int64_t v14; // 0x4088f0
    int64_t v15; // 0x4088f0
    int64_t v16; // 0x4088f0
    int64_t v17; // 0x4088f0
    int32_t v18; // 0x4088f0
    char v19; // 0x4088f0
    if (v5 == 0) {
        // 0x408b08
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40893a;
    } else {
        // 0x408933
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x408980
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x408983
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x408a48;
            } else {
                int64_t v22 = v7 + 1; // 0x408996
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4089a6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x408a5c;
                } else {
                    goto lab_0x4089b8;
                }
            }
        } else {
            goto lab_0x40893a;
        }
    }
  lab_0x40893a:
    // 0x40893a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x408940
    *v24 = 0;
    int64_t v25; // 0x4088f0
    int64_t v26; // 0x4088f0
    int64_t v27; // 0x4088f0
    switch (*(char *)&v2) {
        case 45: {
            // 0x408a30
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x408a3d;
        }
        case 43: {
            // 0x408d40
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x408a3d;
        }
        default: {
            // 0x40895c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x408cbf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408dd8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x408a3d;
                } else {
                    // 0x408ccd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40896a;
                }
            } else {
                goto lab_0x40896a;
            }
        }
    }
  lab_0x408a48:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x408a4f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4089b8;
    } else {
        goto lab_0x408a5c;
    }
  lab_0x40896a:
    // 0x40896a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x408a3d;
  lab_0x408a3d:
    // 0x408a3d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x408a48;
  lab_0x4089b8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4089b8
    int64_t v31 = v30; // 0x4089b8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4089ba
    if ((int64_t)*v32 > v31) {
        // 0x4089bf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4089c2
    if (*v33 > v30) {
        // 0x4089c7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4089ca
    int64_t v35 = v31; // 0x4089ce
    int64_t v36 = v15; // 0x4089ce
    int64_t v37; // 0x4088f0
    int64_t v38; // 0x4088f0
    int64_t v39; // 0x4088f0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x408b38
        int64_t v41 = v40; // 0x408b38
        v2 = v41;
        int64_t v42; // 0x4088f0
        if (*v33 == v40) {
            // 0x408d20
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408d28
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x408b44
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x408b58
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x408b61
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x408b6a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x408b81
            int64_t v47 = v45 & 0xffffffff; // 0x408b85
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x408b8e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x408b94
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x408b96;
                }
            }
            int64_t v48 = v47 + 1; // 0x408b70
            int64_t v49 = v48 & 0xffffffff; // 0x408b70
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x408b81
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x408b8e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x408b94
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x408b96;
                    }
                }
                // 0x408b70
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408d38
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x408b96;
    } else {
        goto lab_0x4089d4;
    }
  lab_0x408a5c:
    // 0x408a5c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x408a5f
    int64_t v51 = v12; // 0x408a5f
    int64_t v52 = v14; // 0x408a5f
    if (*(char *)v10 == 0) {
        goto lab_0x4089b8;
    } else {
        goto lab_0x408a65;
    }
  lab_0x4089d4:;
    int32_t v53 = v35; // 0x4089d4
    int64_t v54; // 0x4088f0
    int64_t v55; // 0x4088f0
    int64_t v56; // 0x4088f0
    int64_t v57; // 0x4088f0
    int64_t v58; // 0x4088f0
    int64_t v59; // 0x4088f0
    char * v60; // 0x4088f0
    int64_t v61; // 0x4088f0
    int64_t v62; // 0x4089e9
    int64_t v63; // 0x4088f0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x408b23
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x408b26;
    } else {
        // 0x4089dc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4088f0
        int64_t v66 = v65 ? -1 : 1; // 0x4089f0
        int64_t v67 = (int64_t)"--"; // 0x4088f0
        int64_t v68 = v62; // 0x4088f0
        int64_t v69 = 3; // 0x4089f0
        unsigned char v70 = *(char *)v68; // 0x4089f0
        char v71 = *(char *)v67; // 0x4089f0
        char v72 = v71; // 0x4089f0
        bool v73 = false; // 0x4089f0
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
            // 0x408ae0
            if (*(char *)v62 == 45) {
                // 0x408ba0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x408ba0
                if (c == 0) {
                    goto lab_0x408aea;
                } else {
                    // 0x408bad
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x408c30;
                    } else {
                        if (c == 45) {
                            // 0x408e13
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x408c85;
                        } else {
                            // 0x408bbe
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x408c30;
                            } else {
                                // 0x408bc3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408be4;
                                } else {
                                    // 0x408bca
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x408c30;
                                    } else {
                                        goto lab_0x408be4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x408aea;
            }
        } else {
            uint32_t v75 = *v33; // 0x408a00
            v2 = v75;
            int32_t v76 = *v32; // 0x408a03
            int64_t v77 = v35 + 1; // 0x408a06
            int32_t v78 = v77; // 0x408a09
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x408d70
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x408a17
                    v2 = (int64_t)*v33;
                }
            }
            // 0x408a25
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x408b26;
        }
    }
  lab_0x408a65:;
    // 0x408a65
    int64_t v79; // bp-104, 0x4088f0
    int64_t v80 = &v79; // 0x4088fa
    int64_t v81 = v50 + 1; // 0x408a65
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x408a6c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x408a71
    *v83 = v81;
    char v84 = *(char *)v2; // 0x408a75
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x408a79
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x408a81
    *v86 = v84;
    char * str2 = (char *)v52; // 0x408a86
    int32_t c2 = v84; // 0x408a86
    char * found_char_pos = strchr(str2, c2); // 0x408a86
    int64_t v87 = *v82; // 0x408a8b
    v2 = v87;
    int64_t v88 = *v85; // 0x408a95
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x408aa0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x408d90
            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x408d5d
        *(int32_t *)(v1 + 8) = c2;
        // 0x408ace
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x408a86
    char v91 = *(char *)(v90 + 1); // 0x408abb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x408a75
        if (v91 != 58) {
            // 0x408ace
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408ce4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408de8
                *v8 = 0;
            } else {
                // 0x408dcc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x408d0e
            *v83 = 0;
            // 0x408ace
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x408cee
        if (v93 != 0) {
            // 0x408d80
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x408d0e
            *v83 = 0;
            // 0x408ace
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408d01
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x408d0e
            *v83 = 0;
            // 0x408ace
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x408e4a
            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x408dfa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408e01
        // 0x408d0e
        *v83 = 0;
        // 0x408ace
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x408c59
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x408c5b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x408e80
                __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408e31
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408e38
            // 0x408ace
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x408c66
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x408c6a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x408c85;
  lab_0x408b96:
    // 0x408b96
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4089d4;
  lab_0x408c85:;
    int64_t v99 = function_4082d0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408ca3
    // 0x408ace
    return v99 & 0xffffffff;
  lab_0x408b26:;
    int32_t v100 = v55; // 0x408b26
    if (v100 != (int32_t)v59) {
        // 0x408b2a
        *(int32_t *)a7 = v100;
    }
    // 0x408ace
    return 0xffffffff;
  lab_0x408aea:
    // 0x408aea
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408af1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x408ace
    return v99 & 0xffffffff;
  lab_0x408c30:
    // 0x408c30
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x408a65;
  lab_0x408be4:
    // 0x408be4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4082d0(v6, a2, str, a4, a5, v57, v1, v11, &g17); // 0x408c0a
    if ((int32_t)v101 != -1) {
        // 0x408ace
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x408c1f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x408c30;
}
// Address range: 0x408ec0 - 0x408f16
int64_t function_408ec0(int64_t a1) {
    // 0x408ec0
    *(int32_t *)&g54 = g36;
    *(int32_t *)&g55 = g35;
    int64_t v1; // 0x408ec0
    int64_t result = function_4088f0(v1, v1, v1, v1, v1, v1, &g54, a1 & 0xffffffff); // 0x408ee6
    g36 = *(int32_t *)&g54;
    g60 = g57;
    *(int32_t *)&g34 = g56;
    return result;
}
// Address range: 0x408f20 - 0x408f38
int64_t function_408f20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408f20
    return function_408ec0(1);
}
// Address range: 0x408f40 - 0x408f53
int64_t function_408f40(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x408f40
    return function_408ec0(0);
}
// Address range: 0x408f60 - 0x408f75
int64_t function_408f60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408f60
    return function_4088f0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x408f80 - 0x408f96
int64_t function_408f80(void) {
    // 0x408f80
    return function_408ec0(0);
}
// Address range: 0x408fa0 - 0x408fb8
int64_t function_408fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408fa0
    return function_4088f0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408fc0 - 0x40903a
int64_t function_408fc0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x408fcb
    int64_t v2 = (int64_t)&g18; // 0x408fcb
    int64_t * pwc; // 0x408fc0
    int64_t v3; // 0x408fc0
    int64_t n; // 0x408fc0
    if (a2 == 0) {
        goto lab_0x409012;
    } else {
        // 0x408fcd
        if (a3 == 0) {
            // 0x408ff8
            return -2;
        }
        // 0x408fd9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409012;
        } else {
            goto lab_0x408fe4;
        }
    }
  lab_0x409012:
    // 0x409012
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408fc0
    pwc = &v4;
    goto lab_0x408fe4;
  lab_0x408fe4:;
    char * wstr = (char *)v3; // 0x408fea
    int64_t ps; // 0x408fc0
    int32_t v5 = mbrtowc((int32_t *)pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x408fea
    int64_t result = v5; // 0x408fea
    if (v5 < 0xfffffffe) {
        // 0x408ff8
        return result;
    }
    int64_t result2 = result; // 0x409029
    if ((char)function_409210(0, v3) == 0) {
        // 0x40902b
        *(int32_t *)pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408ff8
    return result2;
}
// Address range: 0x409040 - 0x409144
int64_t function_409040(int64_t result, int32_t a2, int64_t a3) {
    // 0x409040
    if (a3 == 0) {
        // 0x409079
        return 0;
    }
    int64_t v1 = result; // 0x40904c
    int64_t v2 = a3; // 0x40904c
    int64_t result2; // 0x409040
    if (result % 8 != 0) {
        char v3 = a2; // 0x40904e
        int64_t v4 = result; // 0x409051
        if ((char)result == v3) {
            // 0x409079
            return result;
        }
        int64_t v5 = a3; // 0x409051
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x409060
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x409080;
            }
            // 0x409066
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x409079
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x409079
        return result2;
    }
  lab_0x409080:;
    int64_t result3 = v1; // 0x4090ad
    int64_t v6 = v2; // 0x4090ad
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x40908f
        int64_t v9 = 0x10000 * v8 | v8; // 0x40909c
        int64_t v10 = 0x100000000 * v9 | v9; // 0x4090a6
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x4090c6
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x4090f5
            int64_t v13 = v1 + 8; // 0x4090f9
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x4090e3
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x40910c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x409103
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x409079
                return 0;
            }
        }
    }
  lab_0x40910c:;
    char v15 = a2; // 0x40910c
    if (*(char *)result3 == v15) {
        // 0x409079
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x409120
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x409079
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x409079
    return result2;
}
// Address range: 0x409150 - 0x4091a9
int64_t function_409150(int64_t a1, char * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (v1 == a1) {
        // 0x4091a8
        return 0;
    }
    int64_t v2 = 0; // 0x409155
    unsigned char v3 = *(char *)(v2 + a1); // 0x409168
    int64_t v4 = v3; // 0x409168
    uint64_t v5 = v3 == 90 | (int32_t)v3 < 90 ? v4 + 32 : v4;
    unsigned char v6 = *(char *)(v2 + v1); // 0x409180
    bool v7 = v6 == 90 | (int32_t)v6 < 90; // 0x409190
    char v8 = v5; // 0x409199
    while (v8 != 0) {
        // 0x409160
        v2++;
        if ((v7 ? v6 + 32 : v6) != v8) {
            // break -> 0x40919d
            break;
        }
        v3 = *(char *)(v2 + a1);
        v4 = v3;
        v5 = v3 == 90 | (int32_t)v3 < 90 ? v4 + 32 : v4;
        v6 = *(char *)(v2 + v1);
        v7 = v6 == 90 | (int32_t)v6 < 90;
        v8 = v5;
    }
    int64_t v9 = v6; // 0x409180
    // 0x4091a8
    return v5 % 256 - (v7 ? v9 + 32 : v9) % 256 & 0xffffffff;
}
// Address range: 0x4091b0 - 0x40920d
int64_t function_4091b0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4091b7
    int64_t v2; // 0x4091b0
    int64_t result = function_40b800(a1, v2); // 0x4091c8
    if ((v2 & 32) != 0) {
        // 0x4091f0
        if ((int32_t)result == 0) {
            // 0x4091f4
            *__errno_location() = 0;
        }
        // 0x4091ea
        return 0xffffffff;
    }
    // 0x4091d1
    if ((int32_t)result == 0) {
        // 0x4091ea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4091d8
    if (v1 == 0) {
        // 0x4091da
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4091ea
    return result2;
}
// Address range: 0x409210 - 0x40926e
int64_t function_409210(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x409216
    if (locale == NULL) {
        // 0x409243
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x409216
    bool v2; // 0x409210
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g19; // 0x409210
    int64_t v5 = v1; // 0x409210
    int64_t v6 = 2; // 0x409235
    unsigned char v7 = *(char *)v5; // 0x409235
    char v8 = *(char *)v4; // 0x409235
    char v9 = v8; // 0x409235
    bool v10 = false; // 0x409235
    while (v7 == v8) {
        // 0x409228
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409241
    int64_t v13 = v1; // 0x409241
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409243
        return 0;
    }
    int64_t v14 = 6; // 0x409241
    unsigned char v15 = *(char *)v13; // 0x40925d
    char v16 = *(char *)v12; // 0x40925d
    char v17 = v16; // 0x40925d
    bool v18 = false; // 0x40925d
    while (v15 == v16) {
        // 0x409250
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
// Address range: 0x409270 - 0x4097d2
int64_t function_409270(void) {
    char * v1 = nl_langinfo(14); // 0x409286
    char * v2 = g58; // 0x40928b
    char * v3; // 0x409270
    int64_t v4; // 0x409270
    int64_t v5; // 0x409270
    int64_t v6; // 0x409270
    int64_t v7; // 0x409270
    int32_t size; // 0x409270
    int32_t size2; // 0x409270
    int32_t len; // 0x409342
    int64_t v8; // 0x409342
    char * env_val; // 0x40932d
    if (v2 == NULL) {
        // 0x409328
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409395;
        } else {
            // 0x40933a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409395;
            } else {
                // 0x40933f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40932d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4097c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409395;
                    } else {
                        // 0x409739
                        size2 = len + 14;
                        goto lab_0x40935b;
                    }
                } else {
                    goto lab_0x40935b;
                }
            }
        }
    } else {
        // 0x409270
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4092aa;
    }
  lab_0x4095dc:;
    // 0x4095dc
    struct _IO_FILE * stream; // 0x40941b
    int32_t v10 = __uflow(stream); // 0x4095df
    int64_t v11; // 0x409270
    int64_t v12 = v11; // 0x4095e9
    int64_t v13; // 0x409270
    int64_t v14 = v13; // 0x4095e9
    int32_t v15 = v10; // 0x4095e9
    int64_t v16; // 0x409270
    int64_t v17 = v16; // 0x4095e9
    int64_t v18 = v11; // 0x4095e9
    int64_t v19 = v13; // 0x4095e9
    int64_t v20 = v16; // 0x4095e9
    if (v10 == -1) {
        // break -> 0x4095ef
        goto lab_0x4095ef;
    }
    goto lab_0x409469;
  lab_0x40945e:;
    // 0x40945e
    int64_t v90; // 0x409270
    int64_t * v32; // 0x409450
    *v32 = v90 + 1;
    int64_t v89; // 0x409270
    v12 = v89;
    int64_t v91; // 0x409270
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x409270
    v17 = v92;
    goto lab_0x409469;
  lab_0x409469:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x409270
    int32_t v25; // bp-120, 0x409270
    int32_t v26; // bp-184, 0x409270
    int64_t v27; // 0x40941b
    int64_t v28; // 0x409438
    int64_t v29; // 0x40943d
    int64_t * v30; // 0x409454
    switch (c) {
        case 32: {
            goto lab_0x409450;
        }
        case 10: {
            goto lab_0x409450;
        }
        case 9: {
            goto lab_0x409450;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409641
            int32_t v33; // 0x409270
            char v34; // 0x409270
            int32_t v35; // 0x40964e
            if (v31 < *v30) {
                // 0x409620
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40964b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409641
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409620
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40964b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409630
                v36 = v33;
            }
            // 0x40971f
            if (v36 == -1) {
                // break -> 0x4095ef
                break;
            }
            goto lab_0x409450;
        }
        default: {
            // 0x40947f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4095ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4094a8
            int64_t v39 = v37 + 4; // 0x4094aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4094b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4094b8
            while (v41 == 0) {
                // 0x4094a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4094d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4094e2
            int64_t v45 = v43 + 4; // 0x4094e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4094f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4094f2
            while (v47 == 0) {
                // 0x4094e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4094df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409508
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409518
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40951c
            int64_t v52 = v51 + v48; // 0x409525
            int64_t * mem; // 0x409270
            int64_t v53; // 0x409270
            int64_t v54; // 0x409270
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40965b
                int64_t v56 = v55 + 3; // 0x409667
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409541
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409550
            if (mem == NULL) {
                // 0x40977c
                free((int64_t *)v21);
                function_40b800(v27, v53);
                v24 = (int64_t)&g18;
                goto lab_0x4093f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409568
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409572
            uint32_t v62 = (int32_t)v59; // 0x409575
            int64_t v63; // 0x409270
            if (v62 >= 8) {
                // 0x409684
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40969e
                int64_t v66 = v61 - v65; // 0x4096a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4096ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4096be
                    int64_t v70 = v69 & 0xffffffff; // 0x4096be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4096bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40974f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409587
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40958b
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
            int64_t v73 = v51 + 1; // 0x40959b
            int64_t v74 = v60 - 1; // 0x40959f
            uint32_t v75 = (int32_t)v73; // 0x4095a4
            int64_t v76; // 0x409270
            if (v75 >= 8) {
                // 0x4096d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4096dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4096ec
                int64_t v80 = v74 - v79; // 0x4096f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4096fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40970b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409709
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409766
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40976e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4095b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4095ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4097b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4095ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40945e;
            } else {
                goto lab_0x4095dc;
            }
        }
    }
  lab_0x409450:;
    int64_t v93 = v23; // 0x409270
    int64_t v94 = v22; // 0x409270
    int64_t v95 = v21; // 0x409270
    goto lab_0x409450_2;
  lab_0x409395:;
    int64_t * mem3 = malloc(size); // 0x409395
    int64_t v97 = (int64_t)&g18; // 0x4093a0
    int64_t v98; // 0x409270
    int64_t path; // 0x409270
    if (mem3 == NULL) {
        goto lab_0x409372;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x409395
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4093b6;
    }
  lab_0x4092aa:;
    int64_t str = v1 == NULL ? (int64_t)&g18 : (int64_t)v1; // 0x40929d
    char v100 = *v3; // 0x4092aa
    int64_t v101; // 0x409270
    if (v100 == 0) {
        // 0x409304
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x409270
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x409270
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4092f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4092f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4092c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4092cd
        char v107 = *(char *)v106; // 0x4092d2
        v102 = v107;
        if (v107 == 0) {
            // 0x409304
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4092db
    v104 = v103 + 1;
  lab_0x4092f7:
    // 0x409304
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x409372:;
    char * v108 = (char *)v97;
    g58 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4092aa;
  lab_0x4093b6:;
    int64_t v109 = v98 + path; // 0x4093b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4093e2
    v24 = (int64_t)&g18;
    if (fd >= 0) {
        // 0x409411
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409742
            close(fd);
            v24 = (int64_t)&g18;
        } else {
            // 0x409435
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409450_2:;
                uint64_t v96 = *v32; // 0x409450
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4095dc;
                } else {
                    goto lab_0x40945e;
                }
            }
          lab_0x4095ef:
            // 0x4095ef
            function_40b800(v27, v19);
            v24 = (int64_t)&g18;
            if (v18 != 0) {
                // 0x40960e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4093f4;
  lab_0x40935b:;
    int64_t * mem4 = malloc(size2); // 0x40935b
    v97 = (int64_t)&g18;
    if (mem4 != NULL) {
        // 0x409401
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4093b6;
    } else {
        goto lab_0x409372;
    }
  lab_0x4093f4:
    // 0x4093f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x409372;
}
// Address range: 0x4097e0 - 0x409801
int64_t function_4097e0(int64_t a1) {
    int32_t wc = a1; // 0x4097e3
    int32_t result = wcwidth(wc); // 0x4097e3
    if (result < 0) {
        // 0x4097f0
        return iswcntrl(wc) == 0;
    }
    // 0x4097ec
    return result;
}
// Address range: 0x409810 - 0x409866
int64_t function_409810(int64_t a1, int64_t a2) {
    // 0x409810
    *(int64_t *)a1 = a2;
    char v1 = *(char *)(a2 + 16); // 0x40982f
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(char *)(a1 + 16) = v1;
    int64_t result = 0; // 0x40983c
    if (v1 != 0) {
        uint32_t v2 = *(int32_t *)(a2 + 20); // 0x40983e
        *(int32_t *)(a1 + 20) = v2;
        result = v2;
    }
    // 0x409844
    return result;
}
// Address range: 0x409870 - 0x409887
int64_t function_409870(uint64_t a1) {
    uint32_t v1 = *(int32_t *)((a1 / 8 & 28) + (int64_t)&g20); // 0x40987a
    return (v1 >> (int32_t)a1 % 32) % 2;
}
// Address range: 0x409890 - 0x409a13
int64_t function_409890(int64_t a1, int64_t a2, uint64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = 8 * a3; // 0x4098a9
    int64_t v2 = v1; // 0x4098a9
    if (v1 < 0) {
        // 0x4099b0
        return 0;
    }
    if (a3 >= 0x2000000000000000) {
        // 0x4099b0
        return 0;
    }
    int64_t v3; // 0x409890
    if (v1 < 4016) {
        // 0x4098cc
        int64_t v4; // bp-56, 0x409890
        int64_t v5 = 31 - (v1 + 39 & -16) + (int64_t)&v4 & -16; // 0x4098e0
        v2 = v5;
        v3 = v5;
        if (v5 == 0) {
            // 0x4099b0
            return 0;
        }
    } else {
        int64_t v6 = function_40b920(v1, a2, a3, (int64_t)a4); // 0x409993
        v2 = v6;
        v3 = v6;
        if (v6 == 0) {
            // 0x4099b0
            return 0;
        }
    }
    // 0x4098ed
    *(int64_t *)(v3 + 8) = 1;
    if (a3 >= 3) {
        int64_t v7 = 0;
        int64_t v8 = 2;
        char v9 = *(char *)(a2 - 1 + v8); // 0x409908
        int64_t v10 = v7; // 0x409912
        int64_t v11 = v7; // 0x409912
        int64_t v12; // 0x409890
        int64_t v13; // 0x409890
        int64_t v14; // 0x4099f8
        int64_t v15; // 0x409920
        if (v9 != *(char *)(v7 + a2)) {
            v12 = v10;
            while (v12 != 0) {
                // 0x409920
                v15 = v12 - *(int64_t *)(8 * v12 + v2);
                if (*(char *)(v15 + a2) == v9) {
                    goto lab_0x4099f8;
                }
                v12 = v15;
            }
            // 0x409933
            *(int64_t *)(v2 + 8 * v8) = v8;
            v13 = 0;
        } else {
            // 0x4099f8
            v14 = v11 + 1;
            *(int64_t *)(v2 + 8 * v8) = v8 - v14;
            v13 = v14;
        }
        // 0x40993a
        v7 = v13;
        int64_t v16 = v8 + 1; // 0x40993a
        while (v16 != a3) {
            // 0x409908
            v8 = v16;
            v9 = *(char *)(a2 - 1 + v8);
            v10 = v7;
            v11 = v7;
            if (v9 != *(char *)(v7 + a2)) {
                v12 = v10;
                while (v12 != 0) {
                    // 0x409920
                    v15 = v12 - *(int64_t *)(8 * v12 + v2);
                    if (*(char *)(v15 + a2) == v9) {
                        goto lab_0x4099f8;
                    }
                    v12 = v15;
                }
                // 0x409933
                *(int64_t *)(v2 + 8 * v8) = v8;
                v13 = 0;
            } else {
                // 0x4099f8
                v14 = v11 + 1;
                *(int64_t *)(v2 + 8 * v8) = v8 - v14;
                v13 = v14;
            }
            // 0x40993a
            v7 = v13;
            v16 = v8 + 1;
        }
    }
    // 0x409943
    *a4 = 0;
    char v17 = *(char *)&v2;
    char v18 = v17; // 0x40995b
    int64_t v19 = a1; // 0x40995b
    int64_t v20 = a1; // 0x40995b
    int64_t v21 = 0; // 0x40995b
    if (v17 == 0) {
        // 0x409977
        function_40b990(v2);
        return 1;
    }
    int64_t v22; // 0x409890
    while (true) {
        char v23 = v18;
        int64_t v24 = v20; // 0x409961
        int64_t v25 = v21; // 0x409961
        int64_t v26 = v21; // 0x409961
        int64_t v27 = v20; // 0x409961
        if (*(char *)(v21 + a2) == v23) {
          lab_0x4099c0:
            // 0x4099c0
            v22 = v27;
            int64_t v28 = v26 + 1; // 0x4099c0
            v21 = v28;
            v20 = v22;
            if (v28 == a3) {
                // break -> 0x409a0b
                break;
            }
        } else {
            int64_t v29 = v25;
            int64_t v30 = v24;
            while (v29 != 0) {
                int64_t v31 = *(int64_t *)(8 * v29 + v2); // 0x409968
                int64_t v32 = v31 + v30; // 0x40996c
                int64_t v33 = v29 - v31; // 0x40996f
                v24 = v32;
                v25 = v33;
                v26 = v33;
                v27 = v32;
                if (*(char *)(v33 + a2) == v23) {
                    goto lab_0x4099c0;
                }
                v29 = v25;
                v30 = v24;
            }
            // 0x4099e0
            v21 = 0;
            v20 = v30 + 1;
        }
        // 0x409958
        v19++;
        v18 = *(char *)v19;
        if (v18 == 0) {
            // 0x409977
            function_40b990(v2);
            return 1;
        }
    }
    // 0x409a0b
    *a4 = v22;
    // 0x409977
    function_40b990(v2);
    return 1;
}
// Address range: 0x409a20 - 0x409a40
int64_t function_409a20(void) {
    // 0x409a20
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return &g62;
}
// Address range: 0x409a40 - 0x40a420
int64_t function_409a40(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3; // bp-280, 0x409a61
    uint64_t v2 = function_40ba20(a2); // 0x409a68
    uint128_t v3 = 56 * (int128_t)v2; // 0x409a7f
    if ((int64_t)v3 < 0 || v3 % 0x3f0000000000000001 != 0) {
        // 0x409e51
        return 0;
    }
    int64_t v4 = 0x100000000 * v2 / 0x100000000; // 0x409a9a
    uint64_t v5 = 56 * v4; // 0x409aac
    int64_t v6; // 0x409a40
    if (v5 < 4015) {
        // 0x409abd
        v6 = (int64_t)&v1 + 31 - (v5 + 39 & -16) & -16;
    } else {
        // 0x409f2e
        v6 = function_40b920(v5, a2, (int64_t)(v3 % 0x3f0000000000000001 != 0), v2);
    }
    int64_t len3 = 0; // 0x409ad8
    if (v6 == 0) {
      lab_0x409e51:
        // 0x409e51
        return len3;
    }
    int64_t ps = 0; // bp-244, 0x409b01
    int64_t v7 = v6 + 48 * v4; // 0x409b10
    int64_t v8 = a2; // 0x409b13
    char v9 = 0; // 0x409b13
    int64_t v10 = v6; // 0x409b13
    int64_t v11; // 0x409a40
    int32_t v12; // bp-212, 0x409a40
    char v13; // 0x409a40
    int32_t len; // 0x409a40
    int64_t str; // 0x409a40
    char v14; // 0x409a40
    while (true) {
      lab_0x409bc5:
        // 0x409bc5
        v11 = v10;
        str = v8;
        v14 = v9;
        if (v9 == 0) {
            unsigned char v15 = *(char *)str; // 0x409b27
            int32_t v16 = *(int32_t *)((int64_t)(4 * v15 / 32) + (int64_t)&g20); // 0x409b32
            if ((1 << (int32_t)(v15 % 32) & v16) == 0) {
                int32_t v17 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x409f4b
                v14 = 1;
                if (v17 == 0) {
                    // break -> 0x40a3df
                    break;
                }
                goto lab_0x409bd2;
            } else {
                // 0x409b43
                v12 = v15;
                v9 = 0;
                len = 1;
                v13 = 1;
                if (v15 == 0) {
                    goto lab_0x409c87_2;
                }
                goto lab_0x409b7a;
            }
        } else {
            goto lab_0x409bd2;
        }
    }
  lab_0x40a3df:
    // 0x40a3df
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x40a3f8
    function_409a20();
    // 0x40a3fd
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return &g62;
  lab_0x409c87_2:
    // 0x409c87
    *(int64_t *)(v7 + 8) = 1;
    struct _TYPEDEF___mbstate_t * v18 = (struct _TYPEDEF___mbstate_t *)2; // 0x409caa
    int64_t v19 = v6; // 0x409caa
    int64_t v20 = 0; // 0x409caa
    if ((int32_t)v2 < 3) {
        goto lab_0x409d3b;
    } else {
        goto lab_0x409cb0;
    }
  lab_0x409bd2:;
    char v21 = v14;
    int64_t v22 = function_407340(str, (int64_t)__ctype_get_mb_cur_max()); // 0x409be4
    int64_t v23 = function_408fc0((int64_t *)&v12, str, v22); // 0x409bfe
    v9 = v21;
    len = 1;
    v13 = 0;
    switch (v23) {
        case -1: {
            goto lab_0x409b7a;
        }
        case -2: {
            // 0x409fb0
            v9 = v21;
            len = strlen((char *)str);
            v13 = 0;
            goto lab_0x409b7a;
        }
        default: {
            int32_t v24 = v23; // 0x409c21
            if (v23 == 0) {
                // 0x409c23
                if (*(char *)str != 0) {
                    // 0x40a3c6
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40a3df;
                }
                // 0x409c3e
                v24 = 1;
                if (v12 != 0) {
                    // 0x40a3f8
                    function_409a20();
                    // 0x40a3fd
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return &g62;
                }
            }
            int32_t v25 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x409c60
            v9 = v25 == 0 ? v21 : 0;
            len = v24;
            v13 = 1;
            if (v12 == 0) {
                goto lab_0x409c87_2;
            }
            goto lab_0x409b7a;
        }
    }
  lab_0x409b7a:;
    int32_t v26 = len;
    int64_t v27; // bp-208, 0x409a40
    if (str == (int64_t)&v27) {
        int64_t * dest_mem = memcpy((int64_t *)(v11 + 24), &v27, v26); // 0x409f6f
        *(int64_t *)v11 = (int64_t)dest_mem;
    } else {
        // 0x409b9c
        *(int64_t *)v11 = str;
    }
    int64_t v28 = v26;
    *(int64_t *)(v11 + 8) = v28;
    *(char *)(v11 + 16) = v13;
    if (v13 != 0) {
        // 0x409baa
        *(int32_t *)(v11 + 20) = v12;
    }
    // 0x409bb3
    v8 = str + v28;
    v10 = v11 + 48;
    goto lab_0x409bc5;
  lab_0x409d3b:
    // 0x409d3b
    *(int64_t *)v1 = 0;
    int64_t ps3 = 0; // bp-180, 0x409d7f
    int64_t ps2 = 0; // bp-116, 0x409d8a
    char v29 = 0; // 0x409daa
    char v30 = 0; // 0x409daa
    char v31 = 0; // 0x409daa
    int64_t v32 = a1; // 0x409daa
    int64_t v33 = a1; // 0x409daa
    int64_t v34 = 0; // 0x409daa
    goto lab_0x409db0;
  lab_0x409cb0:;
    struct _TYPEDEF___mbstate_t * v137 = v18;
    int64_t v142 = v19 + 48;
    int32_t * v67 = (int32_t *)(v19 + 68);
    int64_t * v77 = (int64_t *)(v19 + 56);
    int64_t * str2 = (int64_t *)v142;
    int64_t v65 = v20; // 0x409cb5
    goto lab_0x409cdd;
  lab_0x409db0:;
    int64_t v35 = v34;
    int64_t v36 = v33;
    int64_t v37 = v32;
    char v38 = v31;
    char v39 = v30;
    char v40 = v29;
    char v41 = v40; // 0x409db2
    char v42 = v39; // 0x409db2
    int64_t v43 = v37; // 0x409db2
    int64_t v44 = v36; // 0x409db2
    int64_t v45 = v35; // 0x409db2
    int64_t v46; // 0x409a40
    int64_t v47; // 0x409a40
    int64_t v48; // 0x409a40
    int64_t v49; // 0x409a40
    char v50; // 0x409a40
    char v51; // 0x409a40
    char v52; // 0x409a40
    char v53; // 0x409a40
    int64_t v54; // 0x409a40
    int64_t v55; // 0x409a40
    char v56; // 0x409a40
    char v57; // 0x409a40
    char v58; // 0x409a40
    char v59; // 0x409a40
    char v60; // 0x409a40
    int64_t v61; // 0x409a40
    int64_t v62; // 0x409a40
    int64_t v63; // 0x409a40
    if (v38 == 0) {
        goto lab_0x409e72;
    } else {
        // 0x409db8
        v52 = v40;
        v56 = v39;
        v50 = v38;
        v54 = v37;
        v48 = v36;
        v59 = v58;
        v62 = v61;
        v46 = v35;
        v53 = v40;
        v57 = v39;
        v51 = v38;
        v55 = v37;
        v49 = v36;
        v60 = v58;
        v63 = v61;
        v47 = v35;
        if (v58 != 0) {
            goto lab_0x409eb2;
        } else {
            goto lab_0x409dc2;
        }
    }
  lab_0x409cdd:;
    int64_t v64 = v65;
    int64_t v66 = 48 * v64 + v6; // 0x409ce5
    if (*(char *)(v19 + 64) != 0) {
        // 0x409cc0
        if (*(char *)(v66 + 16) == 0) {
            goto lab_0x409cec;
        } else {
            // 0x409cc6
            if (*v67 == *(int32_t *)(v66 + 20)) {
                goto lab_0x409d05;
            } else {
                goto lab_0x409ccf;
            }
        }
    } else {
        goto lab_0x409cec;
    }
  lab_0x409e72:;
    int64_t v68 = v45;
    int64_t str4 = v44;
    int64_t v69 = v43;
    char v70 = v42;
    char v71 = v41;
    char v72 = v71; // 0x409e76
    int32_t v73; // bp-84, 0x409a40
    if (v71 != 0) {
        goto lab_0x409ff8;
    } else {
        unsigned char v74 = *(char *)str4; // 0x409e80
        int32_t v75 = *(int32_t *)((int64_t)(4 * v74 / 32) + (int64_t)&g20); // 0x409e8b
        if ((1 << (int32_t)(v74 % 32) & v75) == 0) {
            int32_t v76 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x409fe7
            v72 = 1;
            if (v76 == 0) {
                goto lab_0x40a3df;
            } else {
                goto lab_0x409ff8;
            }
        } else {
            // 0x409e9c
            v73 = v74;
            v53 = v71;
            v57 = v70;
            v51 = 1;
            v55 = v69;
            v49 = str4;
            v60 = 1;
            v63 = 1;
            v47 = v68;
            goto lab_0x409eb2;
        }
    }
  lab_0x409cec:;
    int64_t n = *v77; // 0x409cec
    if (n != *(int64_t *)(v66 + 8)) {
        goto lab_0x409ccf;
    } else {
        int64_t str3 = *(int64_t *)v66; // 0x409cf6
        if (memcmp((int64_t *)*str2, (int64_t *)str3, (int32_t)n) != 0) {
            goto lab_0x409ccf;
        } else {
            goto lab_0x409d05;
        }
    }
  lab_0x409ff8:;
    char v78 = v72;
    int64_t v79 = function_407340(str4, (int64_t)__ctype_get_mb_cur_max()); // 0x40a007
    int64_t v80 = function_408fc0((int64_t *)&v73, str4, v79); // 0x40a01e
    v52 = v78;
    v56 = v70;
    v50 = 1;
    v54 = v69;
    v48 = str4;
    v59 = 0;
    v62 = 1;
    v46 = v68;
    int64_t v81; // 0x409a40
    switch (v80) {
        case -1: {
            goto lab_0x409dc2;
        }
        case -2: {
            int32_t len2 = strlen((char *)str4); // 0x40a35c
            v52 = v78;
            v56 = v70;
            v50 = 1;
            v54 = v69;
            v48 = str4;
            v59 = 0;
            v62 = len2;
            v46 = v68;
            goto lab_0x409dc2;
        }
        default: {
            // 0x40a03b
            v81 = v80;
            if (v80 != 0) {
                goto lab_0x40a060;
            } else {
                // 0x40a040
                if (*(char *)str4 != 0) {
                    // 0x40a3c6
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40a3df;
                } else {
                    // 0x40a055
                    v81 = 1;
                    if (v73 != 0) {
                        goto lab_0x40a3f8;
                    } else {
                        goto lab_0x40a060;
                    }
                }
            }
        }
    }
  lab_0x409eb2:;
    int32_t v82 = v73; // 0x409eb2
    if (v82 == 0) {
        // 0x409f01
        function_40b990(v6);
        return 1;
    }
    int64_t v83 = v47;
    int64_t v84 = v63;
    char v85 = v60;
    int64_t v86 = v49;
    int64_t v87 = v55;
    char v88 = v51;
    char v89 = v57;
    char v90 = v53;
    int64_t v91 = 48 * v83 + v6; // 0x409ec1
    char v92 = v90; // 0x409ec8
    char v93 = v89; // 0x409ec8
    char v94 = v88; // 0x409ec8
    int64_t v95 = v87; // 0x409ec8
    int64_t v96 = v86; // 0x409ec8
    char v97 = v85; // 0x409ec8
    int64_t v98 = v84; // 0x409ec8
    int64_t v99 = v91; // 0x409ec8
    int64_t v100 = v83; // 0x409ec8
    int64_t v101; // 0x409a40
    int64_t v102; // 0x409a40
    int64_t v103; // 0x409a40
    int64_t v104; // 0x409a40
    char v105; // 0x409a40
    char v106; // 0x409a40
    char v107; // 0x409a40
    int64_t v108; // 0x409a40
    int64_t v109; // 0x409a40
    char v110; // 0x409a40
    char v111; // 0x409a40
    char v112; // 0x409a40
    int64_t v113; // 0x409a40
    int64_t v114; // 0x409a40
    if (*(char *)(v91 + 16) == 0) {
        goto lab_0x409dcd;
    } else {
        // 0x409ece
        v106 = v90;
        v110 = v89;
        v105 = v88;
        v108 = v87;
        v103 = v86;
        v112 = v85;
        v113 = v84;
        v102 = v83;
        v107 = v90;
        v111 = v89;
        v109 = v87;
        v104 = v86;
        v114 = v84;
        v101 = v83;
        if (*(int32_t *)(v91 + 20) != v82) {
            goto lab_0x409ddb;
        } else {
            goto lab_0x409ed7;
        }
    }
  lab_0x409dc2:
    // 0x409dc2
    v92 = v52;
    v93 = v56;
    v94 = v50;
    v95 = v54;
    v96 = v48;
    v97 = v59;
    v98 = v62;
    v99 = 48 * v46 + v6;
    v100 = v46;
    goto lab_0x409dcd;
  lab_0x409ccf:;
    int64_t v139; // 0x409a40
    int64_t v140; // 0x409a40
    if (v64 == 0) {
        int64_t v184 = (int64_t)v137;
        *(int64_t *)(8 * v184 + v7) = v184;
        v139 = v184;
        v140 = 0;
        goto lab_0x409d1b;
    } else {
        // 0x409cd8
        v65 = v64 - *(int64_t *)(8 * v64 + v7);
        goto lab_0x409cdd;
    }
  lab_0x409dcd:;
    int64_t v115 = v100;
    int64_t v116 = v99;
    int64_t n2 = v98;
    char v117 = v97;
    int64_t str6 = v96;
    int64_t v118 = v95;
    char v119 = v94;
    char v120 = v93;
    char v121 = v92;
    v106 = v121;
    v110 = v120;
    v105 = v119;
    v108 = v118;
    v103 = str6;
    v112 = v117;
    v113 = n2;
    v102 = v115;
    int64_t v122; // 0x409a40
    int64_t v123; // 0x409a40
    int64_t v124; // 0x409a40
    int64_t v125; // 0x409a40
    char v126; // 0x409a40
    char v127; // 0x409a40
    char v128; // 0x409a40
    int64_t v129; // 0x409a40
    int64_t v130; // 0x409a40
    char v131; // 0x409a40
    char v132; // 0x409a40
    char v133; // 0x409a40
    int64_t v134; // 0x409a40
    int64_t v135; // 0x409a40
    if (*(int64_t *)(v116 + 8) == n2) {
        int64_t str5 = *(int64_t *)v116; // 0x40a08c
        int32_t memcmp_rc = memcmp((int64_t *)str5, (int64_t *)str6, (int32_t)n2); // 0x40a08f
        v107 = v121;
        v111 = v120;
        v109 = v118;
        v104 = str6;
        v114 = n2;
        v101 = v115;
        if (memcmp_rc == 0) {
            goto lab_0x409ed7;
        } else {
            // 0x40a09c
            v128 = v121;
            v131 = v120;
            v129 = v118;
            v124 = str6;
            v134 = n2;
            v123 = 0;
            v127 = v121;
            v132 = v120;
            v126 = v119;
            v130 = v118;
            v125 = str6;
            v133 = v117;
            v135 = n2;
            v122 = v115;
            if (v115 == 0) {
                goto lab_0x409df1;
            } else {
                goto lab_0x40a0a5;
            }
        }
    } else {
        goto lab_0x409ddb;
    }
  lab_0x409d05:;
    int64_t v136 = (int64_t)v137;
    int64_t v138 = v64 + 1; // 0x409d0c
    *(int64_t *)(8 * v136 + v7) = v136 - v138;
    v139 = v136;
    v140 = v138;
    goto lab_0x409d1b;
  lab_0x40a060:;
    int32_t v183 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x40a06c
    v53 = v183 == 0 ? v78 : 0;
    v57 = v70;
    v51 = 1;
    v55 = v69;
    v49 = str4;
    v60 = 1;
    v63 = v81;
    v47 = v68;
    goto lab_0x409eb2;
  lab_0x409ddb:
    // 0x409ddb
    v128 = v106;
    v131 = v110;
    v129 = v108;
    v124 = v103;
    v134 = v113;
    v123 = v102;
    v127 = v106;
    v132 = v110;
    v126 = v105;
    v130 = v108;
    v125 = v103;
    v133 = v112;
    v135 = v113;
    v122 = v102;
    if (v102 != 0) {
        goto lab_0x40a0a5;
    } else {
        goto lab_0x409df1;
    }
  lab_0x409d1b:;
    int64_t v141 = v139 + 1; // 0x409d1b
    v18 = (struct _TYPEDEF___mbstate_t *)v141;
    v19 = v142;
    v20 = v140;
    if (v141 != v4) {
        goto lab_0x409cb0;
    } else {
        goto lab_0x409d3b;
    }
  lab_0x409ed7:;
    int64_t v143 = v109;
    int64_t v144 = v101 + 1; // 0x409edb
    v41 = v107;
    v42 = v111;
    v43 = v143;
    v44 = v114 + v104;
    v45 = v144;
    if (v144 == v4) {
        // 0x409ef0
        *(int64_t *)v1 = v143;
        // 0x409f01
        function_40b990(v6);
        return 1;
    }
    goto lab_0x409e72;
  lab_0x40a0a5:;
    int64_t v145 = *(int64_t *)(8 * v122 + v7); // 0x40a0a5
    int64_t v146 = v122 - v145; // 0x40a0b1
    char v147 = v132; // 0x40a0b7
    int64_t v148 = v130; // 0x40a0b7
    int64_t v149 = v122; // 0x40a0b7
    char v150 = v132; // 0x40a0b7
    int64_t v151 = v130; // 0x40a0b7
    int64_t v152 = v145; // 0x40a0b7
    if (v145 == 0) {
        goto lab_0x409db0_2;
    } else {
        goto lab_0x40a0ee;
    }
  lab_0x409df1:;
    int64_t str7 = v129;
    char v153 = v131;
    char v154 = v153; // 0x409df8
    int32_t v155; // bp-148, 0x409a40
    int64_t v156; // 0x409a40
    char v157; // 0x409a40
    if (v153 != 0) {
        goto lab_0x40a293;
    } else {
        unsigned char v158 = *(char *)str7; // 0x409e05
        int32_t v159 = *(int32_t *)((int64_t)(4 * v158 / 32) + (int64_t)&g20); // 0x409e10
        if ((1 << (int32_t)(v158 % 32) & v159) == 0) {
            int32_t v160 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40a27f
            v154 = 1;
            if (v160 == 0) {
                goto lab_0x40a3df;
            } else {
                goto lab_0x40a293;
            }
        } else {
            // 0x409e21
            v155 = v158;
            v157 = v153;
            v156 = 1;
            goto lab_0x409e43;
        }
    }
  lab_0x409db0_2:
    // 0x409db0
    v29 = v127;
    v30 = v147;
    v31 = v126;
    v32 = v148;
    v33 = v125;
    v58 = v133;
    v61 = v135;
    v34 = v149;
    goto lab_0x409db0;
  lab_0x40a0ee:;
    int64_t str8 = v151;
    char v161 = v150;
    char v162 = v161; // 0x40a0f5
    int32_t v163; // 0x409a40
    int64_t v164; // 0x409a40
    int64_t v165; // 0x409a40
    char v166; // 0x409a40
    if (v161 != 0) {
        goto lab_0x40a16b;
    } else {
        unsigned char v167 = *(char *)str8; // 0x40a0fe
        int32_t v168 = *(int32_t *)((int64_t)(4 * v167 / 32) + (int64_t)&g20); // 0x40a109
        if ((1 << (int32_t)(v167 % 32) & v168) == 0) {
            int32_t v169 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40a157
            v162 = 1;
            if (v169 == 0) {
                goto lab_0x40a3df;
            } else {
                goto lab_0x40a16b;
            }
        } else {
            int32_t v170 = v167; // 0x40a12b
            v155 = v170;
            v163 = v170;
            v166 = v161;
            v165 = 1;
            v164 = v167;
            goto lab_0x40a138;
        }
    }
  lab_0x40a293:;
    int64_t v171 = function_407340(str7, (int64_t)__ctype_get_mb_cur_max()); // 0x40a2a5
    int64_t v172 = function_408fc0((int64_t *)&v155, str7, v171); // 0x40a2c2
    len3 = -1;
    int64_t v173; // 0x409a40
    switch (v172) {
        case -1: {
            goto lab_0x409e51;
        }
        case -2: {
            // 0x40a3a7
            len3 = strlen((char *)str7);
            goto lab_0x409e51;
        }
        default: {
            // 0x40a2e2
            v173 = v172;
            if (v172 != 0) {
                goto lab_0x40a310;
            } else {
                // 0x40a2e7
                if (*(char *)str7 != 0) {
                    // 0x40a3c6
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40a3df;
                } else {
                    // 0x40a302
                    v173 = 1;
                    if (v155 != 0) {
                        goto lab_0x40a3f8;
                    } else {
                        goto lab_0x40a310;
                    }
                }
            }
        }
    }
  lab_0x40a16b:;
    char v174 = v162;
    int64_t v175 = function_407340(str8, (int64_t)__ctype_get_mb_cur_max()); // 0x40a17d
    int64_t v176 = function_408fc0((int64_t *)&v155, str8, v175); // 0x40a197
    char v177 = v174; // 0x409a40
    int64_t len4 = 1; // 0x409a40
    int64_t v178; // 0x409a40
    switch (v176) {
        case -1: {
            goto lab_0x40a0cf;
        }
        case -2: {
            // 0x40a230
            v177 = v174;
            len4 = strlen((char *)str8);
            goto lab_0x40a0cf;
        }
        default: {
            // 0x40a1b3
            v178 = v176;
            if (v176 != 0) {
                goto lab_0x40a1e1;
            } else {
                // 0x40a1b8
                if (*(char *)str8 != 0) {
                    // 0x40a3c6
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40a3df;
                } else {
                    // 0x40a1d3
                    v178 = 1;
                    if (v155 != 0) {
                        goto lab_0x40a3fd;
                    } else {
                        goto lab_0x40a1e1;
                    }
                }
            }
        }
    }
  lab_0x40a0cf:;
    int64_t v179 = len4 + str8; // 0x40a0dd
    int64_t v180 = v152 - 1; // 0x40a0e4
    v147 = v177;
    v148 = v179;
    v149 = v146;
    v150 = v177;
    v151 = v179;
    v152 = v180;
    if (v180 == 0) {
        goto lab_0x409db0_2;
    } else {
        goto lab_0x40a0ee;
    }
  lab_0x40a310:;
    int32_t v181 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40a322
    v157 = v181 == 0 ? v154 : 0;
    v156 = v173;
    goto lab_0x409e43;
  lab_0x409e43:
    // 0x409e43
    v41 = v128;
    v42 = v157;
    v43 = v156 + str7;
    v44 = v134 + v124;
    v45 = v123;
    goto lab_0x409e72;
  lab_0x40a1e1:;
    int32_t v182 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40a1f3
    v163 = v155;
    v166 = v182 == 0 ? v174 : 0;
    v165 = v178;
    v164 = v182;
    goto lab_0x40a138;
  lab_0x40a138:
    // 0x40a138
    len3 = v164;
    v177 = v166;
    len4 = v165;
    if (v163 != 0) {
        goto lab_0x40a0cf;
    } else {
        goto lab_0x409e51;
    }
}
// Address range: 0x40a420 - 0x40b2f0
int64_t function_40a420(int64_t result, int64_t str2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40a420
    int64_t v1; // 0x40a420
    char v2 = v1;
    int64_t v3; // 0x40a420
    int64_t v4; // 0x40a420
    int64_t v5; // 0x40a420
    int64_t v6; // 0x40a420
    int64_t v7; // 0x40a420
    int64_t v8; // 0x40a420
    int64_t v9; // 0x40a420
    int64_t v10; // 0x40a420
    int64_t result2; // 0x40a420
    int64_t v11; // 0x40a420
    int64_t v12; // 0x40a420
    char v13; // 0x40a420
    int64_t v14; // 0x40a420
    int64_t v15; // 0x40a4e2
    int64_t v16; // 0x40a4da
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x40a446
        if (v2 == 0) {
            // 0x40a57d
            return result;
        }
        char v17 = v1;
        if (v17 == 0) {
            // 0x40a57d
            return 0;
        }
        // 0x40a4da
        v10 = 1;
        v13 = v17;
        v14 = 0;
        v11 = result;
        v6 = 0;
        v8 = str2;
        v3 = 0;
        while (true) {
          lab_0x40a4da:;
            int64_t str = v8;
            int64_t v18 = v6;
            int64_t v19 = v11;
            int64_t v20 = v14;
            v15 = v19 + 1;
            int64_t v21; // 0x40a420
            if (v13 == v2) {
                char v22 = *(char *)(str2 + 1); // 0x40a590
                result2 = v19;
                if (v22 == 0) {
                    // break -> 0x40a57d
                    break;
                }
                char v23 = *(char *)v15; // 0x40a599
                result2 = 0;
                if (v23 == 0) {
                    // break -> 0x40a57d
                    break;
                }
                int64_t v24 = v20 + 2; // 0x40a5a6
                v21 = v24;
                if (v22 == v23) {
                    int64_t v25 = v24; // 0x40a5be
                    char v26 = *(char *)(str2 - v20 + v25); // 0x40a5da
                    result2 = v19;
                    if (v26 == 0) {
                        return result2;
                    }
                    char v27 = *(char *)(v19 - v20 + v25); // 0x40a5c0
                    result2 = 0;
                    if (v27 == 0) {
                        return result2;
                    }
                    // 0x40a5cd
                    v25++;
                    v21 = v25;
                    while (v26 == v27) {
                        // 0x40a5da
                        v26 = *(char *)(str2 - v20 + v25);
                        result2 = v19;
                        if (v26 == 0) {
                            return result2;
                        }
                        // 0x40a5c0
                        v27 = *(char *)(v19 - v20 + v25);
                        result2 = 0;
                        if (v27 == 0) {
                            return result2;
                        }
                        // 0x40a5cd
                        v25++;
                        v21 = v25;
                    }
                }
            } else {
                // 0x40a4ef
                v21 = v20 + 1;
                result2 = 0;
                if (*(char *)v15 == 0) {
                    // break -> 0x40a57d
                    break;
                }
            }
            // 0x40a4f9
            v16 = v3 + 1;
            v12 = v21;
            unsigned char v28 = (char)(v16 >= 10) & (char)v10; // 0x40a500
            v9 = v10;
            v5 = v18;
            v7 = str;
            if (v28 == 0) {
                goto lab_0x40a4d0;
            } else {
                int64_t v29 = v28; // 0x40a500
                v9 = v29;
                v5 = v18;
                v7 = str;
                if (v12 >= 5 * v16) {
                    // 0x40a478
                    v4 = v18;
                    if (str == 0) {
                        goto lab_0x40a49f;
                    } else {
                        int64_t v30 = str + (int64_t)strnlen((char *)str, (int32_t)(v12 - v18)); // 0x40a496
                        v4 = v12;
                        v9 = v29;
                        v5 = v12;
                        v7 = v30;
                        if (*(char *)v30 != 0) {
                            goto lab_0x40a4d0;
                        } else {
                            goto lab_0x40a49f;
                        }
                    }
                } else {
                    goto lab_0x40a4d0;
                }
            }
        }
      lab_0x40a57d_2:
        // 0x40a57d
        return result2;
    }
    int64_t ps = 0; // bp-372, 0x40a53b
    int32_t * v31 = (int32_t *)((v1 / 8 & 28) + (int64_t)&g20); // 0x40a54a
    int32_t v32 = 1 << (int32_t)(v2 % 32);
    int32_t v33; // 0x40a420
    int32_t v34; // 0x40a420
    char v35; // 0x40a420
    int64_t v36; // 0x40a420
    int32_t v37; // bp-340, 0x40a420
    bool v38; // 0x40a420
    int64_t v39; // 0x40a420
    int64_t len; // 0x40a420
    if ((*v31 & v32) == 0) {
        // 0x40b160
        if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
          lab_0x40b2bc_5:
            // 0x40b2bc
            __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
            // 0x40b2d5
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
            return &g62;
        }
        int64_t v40 = function_407340(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x40b185
        int64_t v41 = function_408fc0((int64_t *)&v37, str2, v40); // 0x40b198
        len = 1;
        v38 = true;
        switch (v41) {
            case -1: {
                goto lab_0x40a5f7;
            }
            case -2: {
                // 0x40b26e
                len = strlen((char *)str2);
                v38 = true;
                goto lab_0x40a5f7;
            }
            default: {
                // 0x40b1b6
                if (v41 == 0) {
                    if (v2 != 0) {
                        // 0x40b2d5
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    }
                    int32_t v42; // 0x40b1d2
                    if (v42 != 0) {
                      lab_0x40b1da_6:
                        // 0x40b1da
                        function_409a20();
                    }
                }
                // 0x40b1e0
                mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
                v33 = v37;
                v39 = v41;
                int32_t v43; // 0x40a420
                v34 = v43;
                char v44; // 0x40a420
                v35 = v44;
                int64_t v45; // 0x40a420
                v36 = v45;
                goto lab_0x40a572;
            }
        }
    } else {
        int32_t v46 = v2; // 0x40a564
        v37 = v46;
        v33 = v46;
        v39 = 1;
        goto lab_0x40a572;
    }
  lab_0x40a4d0:
    // 0x40a4d0
    v10 = v9;
    v13 = *(char *)v15;
    v14 = v12;
    v11 = v15;
    v6 = v5;
    v8 = v7;
    v3 = v16;
    goto lab_0x40a4da;
  lab_0x40a49f:;
    int32_t len2 = strlen((char *)str2); // 0x40a4a6
    char v47; // bp-120, 0x40a420
    int64_t v48 = function_409890(v15, str2, (int64_t)len2, (int64_t *)&v47, v4); // 0x40a4bc
    v9 = v48;
    v5 = v4;
    v7 = 0;
    if ((char)v48 != 0) {
        // 0x40b261
        result2 = v47;
        goto lab_0x40a57d_2;
    }
    goto lab_0x40a4d0;
  lab_0x40a933:;
    // 0x40a933
    int64_t str3; // 0x40a420
    int64_t v49 = function_407340(str3, (int64_t)__ctype_get_mb_cur_max()); // 0x40a946
    int32_t v50; // bp-84, 0x40a420
    int64_t v51 = function_408fc0((int64_t *)&v50, str3, v49); // 0x40a965
    int64_t len3 = 1; // 0x40a420
    char v52 = 0; // 0x40a420
    int64_t ps2; // bp-116, 0x40a420
    int64_t str6; // 0x40a420
    switch (v51) {
        case -1: {
            goto lab_0x40a867;
        }
        case -2: {
            // 0x40ad18
            len3 = strlen((char *)str3);
            v52 = 0;
            goto lab_0x40a867;
        }
        default: {
            // 0x40a986
            if (v51 == 0) {
                char v53 = *(char *)str3; // 0x40a99f
                if (v53 != 0) {
                    // 0x40b2d5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g62;
                }
                int32_t v54 = v50; // 0x40a9a8
                if (v54 != 0) {
                    goto lab_0x40b1da_6;
                }
            }
            // 0x40a9b7
            if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) != 0) {
                // 0x40a9d0
                v47 = 0;
            }
            // 0x40a9d8
            result2 = str6;
            len3 = v51;
            v52 = 1;
            if (v50 == 0) {
                // 0x40a57d
                return result2;
            }
            goto lab_0x40a867;
        }
    }
  lab_0x40a867:;
    // 0x40a867
    int64_t v55; // 0x40a420
    int64_t v56 = v55 + 1;
    int64_t str5; // 0x40a420
    char * str4 = (char *)str5;
    char v57 = v52;
    int64_t v58 = len3;
    char v59; // 0x40a420
    char v60 = v59; // 0x40a86f
    int32_t v61; // 0x40a420
    int32_t v62; // bp-148, 0x40a420
    int32_t v63; // 0x40a420
    int64_t ps3; // bp-180, 0x40a420
    char v64; // 0x40a420
    if (v59 != 0) {
        goto lab_0x40aa75;
    } else {
        unsigned char v65 = *str4; // 0x40a87d
        int32_t v66 = *(int32_t *)((int64_t)(4 * v65 / 32) + (int64_t)&g20); // 0x40a888
        if ((1 << (int32_t)(v65 % 32) & v66) == 0) {
            int32_t v67 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40aa60
            v60 = 1;
            if (v67 == 0) {
                // break (via goto) -> 0x40b2bc
                goto lab_0x40b2bc_5;
            }
            goto lab_0x40aa75;
        } else {
            int32_t v68 = v65; // 0x40a8b0
            v62 = v68;
            v63 = 1;
            v64 = v59;
            v61 = v68;
            if (v65 == 0) {
                // 0x40a57d
                return 0;
            }
            goto lab_0x40a8ce;
        }
    }
  lab_0x40aa75:;
    char v69 = v60;
    int64_t v70 = function_407340(str5, (int64_t)__ctype_get_mb_cur_max()); // 0x40aa88
    int64_t v71 = function_408fc0((int64_t *)&v62, str5, v70); // 0x40aaa7
    int32_t len4 = 1; // 0x40a420
    char v72 = v69; // 0x40a420
    switch (v71) {
        case -1: {
            goto lab_0x40aa1c;
        }
        case -2: {
            // 0x40ad48
            len4 = strlen(str4);
            v72 = v69;
            goto lab_0x40aa1c;
        }
        default: {
            int32_t v73 = v71; // 0x40aacb
            if (v71 == 0) {
                // 0x40aacd
                if (*str4 != 0) {
                    // 0x40b2d5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g62;
                }
                // 0x40aaea
                v73 = 1;
                if (v62 != 0) {
                    goto lab_0x40b1da_6;
                }
            }
            int32_t v74 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40ab09
            v63 = v73;
            v64 = v74 == 0 ? v69 : 0;
            v61 = v62;
            if (v62 == 0) {
                // 0x40a57d
                return 0;
            }
            goto lab_0x40a8ce;
        }
    }
  lab_0x40aa1c:;
    int32_t n = len4;
    int64_t v75; // 0x40a420
    int64_t v76 = v75; // 0x40aa2c
    char v77; // 0x40a420
    char v78 = v77; // 0x40aa2c
    char v79; // 0x40a420
    char v80 = v79; // 0x40aa2c
    int128_t v81; // 0x40a420
    int128_t v82 = v81; // 0x40aa2c
    int64_t v83; // 0x40a420
    int64_t v84 = v83; // 0x40aa2c
    int32_t v85; // 0x40a420
    int32_t v86 = v85; // 0x40aa2c
    int32_t v87 = n; // 0x40aa2c
    char v88; // 0x40a420
    char v89 = v88; // 0x40aa2c
    int64_t v90; // 0x40a420
    int64_t v91 = v90; // 0x40aa2c
    int64_t v92 = v56; // 0x40aa2c
    int64_t v93; // 0x40a420
    int64_t v94 = v93; // 0x40aa2c
    if (v58 != (int64_t)n) {
        // break -> 0x40aa32
        goto lab_0x40aa32_3;
    }
    int32_t memcmp_rc = memcmp((int64_t *)str5, (int64_t *)str3, n); // 0x40ab68
    int32_t v95 = n; // 0x40ab72
    char v96 = v72; // 0x40ab72
    bool v97 = memcmp_rc == 0; // 0x40ab72
    goto lab_0x40a8e6;
  lab_0x40a8ce:;
    char v305 = v64;
    int32_t v306 = v63;
    len4 = v306;
    v72 = v305;
    if (v57 == 0) {
        goto lab_0x40aa1c;
    } else {
        // 0x40a8dc
        v95 = v306;
        v96 = v305;
        v97 = v50 == v61;
        goto lab_0x40a8e6;
    }
  lab_0x40a8e6:;
    int32_t v98 = v95;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v82 = v81;
    v84 = v83;
    v86 = v85;
    v87 = v98;
    v89 = v88;
    v91 = v90;
    v92 = v56;
    v94 = v93;
    if (!v97) {
        // break -> 0x40aa32
        goto lab_0x40aa32_3;
    }
    int64_t v99 = v58 + str3; // 0x40a91d
    int64_t v100 = str5 + (int64_t)v98; // 0x40a91d
    char v101 = v96; // 0x40a91d
    v55 = v56;
    goto lab_0x40a925;
  lab_0x40ac69:;
    // 0x40ac69
    int128_t v104; // 0x40a420
    int128_t v105 = v104;
    int64_t v106 = function_407340(str6, (int64_t)__ctype_get_mb_cur_max()); // 0x40ac80
    int32_t v107; // bp-212, 0x40a420
    int64_t v108 = function_408fc0((int64_t *)&v107, str6, v106); // 0x40ac97
    int32_t len5 = 1; // 0x40a420
    int32_t v109; // 0x40a420
    int32_t v110; // 0x40a420
    int64_t ps4; // bp-244, 0x40a420
    int128_t v111; // 0x40a420
    switch (v108) {
        case -1: {
            goto lab_0x40abc4;
        }
        case -2: {
            // 0x40af38
            len5 = strlen((char *)str6);
            goto lab_0x40abc4;
        }
        default: {
            int32_t v112 = v108; // 0x40acbb
            if (v108 == 0) {
                // 0x40acbd
                if (*(char *)str6 != 0) {
                    // 0x40b2d5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g62;
                }
                // 0x40acda
                v112 = 1;
                if (v107 != 0) {
                    goto lab_0x40b1da_6;
                }
            }
            int32_t v113 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x40acf5
            v109 = v107;
            v111 = v113 == 0 ? v105 : 0;
            v110 = v112;
            goto lab_0x40a6b0;
        }
    }
  lab_0x40abc4:;
    int32_t v114 = len5;
    uint64_t v115; // 0x40a420
    int64_t v116; // 0x40a420
    unsigned char v117 = (char)(v115 >= 10) & (char)v116; // 0x40abcb
    int64_t v118; // 0x40a420
    int64_t v119; // 0x40a420
    int64_t v120; // 0x40a420
    int128_t v121; // 0x40a420
    int128_t v122; // 0x40a420
    int32_t v123; // 0x40a420
    int32_t v124; // 0x40a420
    int128_t v125; // 0x40a420
    int128_t v126; // 0x40a420
    char v127; // 0x40a420
    char v128; // 0x40a420
    int64_t v129; // 0x40a420
    int64_t v130; // 0x40a420
    int64_t v131; // 0x40a420
    int64_t v132; // 0x40a420
    char v133; // 0x40a420
    char v134; // 0x40a420
    char v135; // 0x40a420
    char v136; // 0x40a420
    int64_t v137; // 0x40a420
    int64_t v138; // 0x40a420
    if (v117 == 0) {
        // 0x40ad88
        v132 = v131;
        v136 = v135;
        v134 = v133;
        v125 = v105;
        v138 = v137;
        v123 = v114;
        v121 = 0;
        v128 = v127;
        v130 = v129;
        v120 = v119 + 1;
        v118 = v116;
        goto lab_0x40abe8;
    } else {
        // 0x40abd4
        v126 = v105;
        v124 = v114;
        v122 = 0;
        if (v119 >= 5 * v115) {
            goto lab_0x40ad98;
        } else {
            // 0x40abe1
            v132 = v131;
            v136 = v135;
            v134 = v133;
            v125 = v105;
            v138 = v137;
            v123 = v114;
            v121 = 0;
            v128 = v127;
            v130 = v129;
            v120 = v119 + 1;
            v118 = v117;
            goto lab_0x40abe8;
        }
    }
  lab_0x40a6b0:
    // 0x40a6b0
    if (v109 == 0) {
        // 0x40a57d
        return 0;
    }
    int32_t v139 = v110;
    int128_t v140 = v111;
    unsigned char v141 = (char)(v115 >= 10) & (char)v116; // 0x40a6c8
    int64_t v142; // 0x40a420
    int64_t v143; // 0x40a420
    int128_t v144; // 0x40a420
    int32_t v145; // 0x40a420
    int128_t v146; // 0x40a420
    char v147; // 0x40a420
    int64_t v148; // 0x40a420
    int64_t v149; // 0x40a420
    char v150; // 0x40a420
    char v151; // 0x40a420
    int64_t v152; // 0x40a420
    if (v141 == 0) {
        // 0x40ad78
        v149 = v131;
        v151 = v135;
        v150 = v133;
        v146 = v140;
        v152 = v137;
        v145 = v139;
        v144 = 1;
        v147 = v127;
        v148 = v129;
        v143 = v119 + 1;
        v142 = v116;
        goto lab_0x40a6e5;
    } else {
        // 0x40a6d1
        v126 = v140;
        v124 = v139;
        v122 = 1;
        if (v119 >= 5 * v115) {
            goto lab_0x40ad98;
        } else {
            // 0x40a6de
            v149 = v131;
            v151 = v135;
            v150 = v133;
            v146 = v140;
            v152 = v137;
            v145 = v139;
            v144 = 1;
            v147 = v127;
            v148 = v129;
            v143 = v119 + 1;
            v142 = v141;
            goto lab_0x40a6e5;
        }
    }
  lab_0x40abe8:;
    int64_t v153 = v118;
    int64_t v154 = v120;
    int64_t v155 = v130;
    char v156 = v128;
    int32_t n2 = v123;
    int64_t v157 = v138;
    int128_t v158 = v125;
    char v159 = v134;
    char v160 = v136;
    int64_t v161 = v132;
    int64_t v162 = n2; // 0x40abe8
    int64_t v163 = v161; // 0x40abf5
    char v164 = v160; // 0x40abf5
    char v165 = v159; // 0x40abf5
    int128_t v166 = v158; // 0x40abf5
    int64_t v167 = v157; // 0x40abf5
    int32_t v168; // 0x40a420
    int32_t v169 = v168; // 0x40abf5
    char v170 = v156; // 0x40abf5
    int64_t v171 = v155; // 0x40abf5
    int64_t v172 = v154; // 0x40abf5
    int64_t v173 = v153; // 0x40abf5
    int64_t v174 = v162; // 0x40abf5
    int64_t v175; // 0x40a420
    int64_t v176; // 0x40a420
    int128_t v177; // 0x40a420
    int32_t v178; // 0x40a420
    int128_t v179; // 0x40a420
    char v180; // 0x40a420
    int64_t v181; // 0x40a420
    int64_t v182; // 0x40a420
    char v183; // 0x40a420
    char v184; // 0x40a420
    int64_t v185; // 0x40a420
    int64_t v186; // 0x40a420
    if (v185 != v162) {
        goto lab_0x40aa3a;
    } else {
        int32_t memcmp_rc2 = memcmp((int64_t *)str6, (int64_t *)str2, n2); // 0x40ac0b
        v182 = v161;
        v184 = v160;
        v183 = v159;
        v179 = v158;
        v186 = v157;
        v178 = n2;
        v177 = v121;
        v180 = v156;
        v181 = v155;
        v176 = v154;
        v175 = v153;
        v163 = v161;
        v164 = v160;
        v165 = v159;
        v166 = v158;
        v167 = v157;
        v169 = v168;
        v170 = v156;
        v171 = v155;
        v172 = v154;
        v173 = v153;
        v174 = v162;
        if (memcmp_rc2 != 0) {
            goto lab_0x40aa3a;
        } else {
            goto lab_0x40a701;
        }
    }
  lab_0x40ad98:;
    int128_t v187 = v122;
    int32_t v188 = v124;
    int128_t v189 = v126;
    int64_t v190 = v119 - v137; // 0x40ada0
    int64_t v191; // 0x40a420
    int64_t v192; // 0x40a420
    char v193; // 0x40a420
    char v194; // 0x40a420
    char v195; // 0x40a420
    int64_t v196; // 0x40a420
    int64_t v197; // 0x40a420
    int64_t v198; // 0x40a420
    int64_t v199; // 0x40a420
    int64_t v200; // 0x40a420
    int64_t v201; // 0x40a420
    int64_t v202; // 0x40a420
    int64_t v203; // 0x40a420
    int64_t v204; // 0x40a420
    int64_t v205; // 0x40a420
    char v206; // 0x40a420
    char v207; // 0x40a420
    char v208; // 0x40a420
    char v209; // 0x40a420
    char v210; // 0x40a420
    char v211; // 0x40a420
    char v212; // 0x40a420
    char v213; // 0x40a420
    char v214; // 0x40a420
    if (v190 == 0) {
        // 0x40b2a4
        v200 = v131;
        v209 = v135;
        if (v133 == 0) {
            goto lab_0x40af68;
        } else {
            // 0x40b2ac
            v201 = v131;
            v210 = v135;
            v207 = v133;
            v194 = v127;
            v196 = v129;
            v202 = v131;
            v211 = v135;
            v208 = v133;
            v195 = 0;
            v197 = v129;
            if (v127 == 0) {
                goto lab_0x40afbc;
            } else {
                goto lab_0x40afae;
            }
        }
    } else {
        // 0x40adab
        v204 = v131;
        v213 = v135;
        v192 = v190;
        if (v133 == 0) {
            goto lab_0x40adcf;
        } else {
            // 0x40adaf
            v203 = v131;
            v212 = v135;
            v198 = v129;
            v191 = v190;
            v205 = v131;
            v214 = v135;
            v206 = v133;
            v193 = v127;
            v199 = v129;
            if (v127 != 0) {
                goto lab_0x40ae11;
            } else {
                goto lab_0x40adb6;
            }
        }
    }
  lab_0x40a6e5:;
    int64_t v215 = v142;
    int64_t v216 = v143;
    int64_t v217 = v148;
    char v218 = v147;
    int128_t v219 = v144;
    int32_t v220 = v145;
    int64_t v221 = v152;
    int128_t v222 = v146;
    char v223 = v150;
    char v224 = v151;
    int64_t v225 = v149;
    v132 = v225;
    v136 = v224;
    v134 = v223;
    v125 = v222;
    v138 = v221;
    v123 = v220;
    v121 = v219;
    v128 = v218;
    v130 = v217;
    v120 = v216;
    v118 = v215;
    bool v226; // 0x40a420
    if (v226) {
        goto lab_0x40abe8;
    } else {
        // 0x40a6f0
        v182 = v225;
        v184 = v224;
        v183 = v223;
        v179 = v222;
        v186 = v221;
        v178 = v220;
        v177 = v219;
        v180 = v218;
        v181 = v217;
        v176 = v216;
        v175 = v215;
        v76 = v225;
        v78 = v224;
        v80 = v223;
        v82 = v222;
        v84 = v221;
        v86 = v220;
        v87 = v168;
        v89 = v218;
        v91 = v217;
        v92 = v216;
        v94 = v215;
        if (v107 != v37) {
            goto lab_0x40aa32_3;
        } else {
            goto lab_0x40a701;
        }
    }
  lab_0x40aa3a:;
    int64_t v227 = v163; // 0x40aa4e
    char v228 = v164; // 0x40aa4e
    char v229 = v165; // 0x40aa4e
    int64_t v230 = v174 + str6; // 0x40aa4e
    int128_t v231 = v166; // 0x40aa4e
    int64_t v232 = v167; // 0x40aa4e
    int32_t v233 = v169; // 0x40aa4e
    char v234 = v170; // 0x40aa4e
    int64_t v235 = v171; // 0x40aa4e
    int64_t v236 = v172; // 0x40aa4e
    int64_t v237 = v115 + 1; // 0x40aa4e
    int64_t v238 = v173; // 0x40aa4e
    goto lab_0x40a650;
  lab_0x40a701:
    // 0x40a701
    v93 = v175;
    int64_t v244 = v176;
    v90 = v181;
    v88 = v180;
    v85 = v178;
    v83 = v186;
    v81 = v179;
    v79 = v183;
    v77 = v184;
    v75 = v182;
    int128_t v245 = __asm_movdqa((int128_t)str6); // 0x40a706
    int128_t v246 = __asm_movdqa(0); // 0x40a71f
    v47 = 0;
    int64_t v247 = __asm_movaps(v245); // 0x40a730
    int128_t v248 = __asm_movdqa(v177); // 0x40a740
    int128_t v249; // 0x40a420
    int128_t v250 = __asm_movdqa(v249); // 0x40a753
    int64_t v251 = __asm_movaps(v246); // 0x40a75f
    __asm_movaps(v248);
    __asm_movaps(v250);
    ps2 = 0;
    int64_t v252; // 0x40a420
    if ((*v31 & v32) == 0) {
        // 0x40afe8
        if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) == 0) {
            // break -> 0x40b2bc
            goto lab_0x40b2bc_5;
        }
        // 0x40aff8
        v47 = 1;
        int64_t v253 = function_407340(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x40b017
        int64_t v254 = function_408fc0((int64_t *)&v50, str2, v253); // 0x40b031
        result2 = -1;
        switch (v254) {
            case -1: {
                goto lab_0x40a57d_2;
            }
            case -2: {
                // 0x40a57d
                return strlen((char *)str2);
            }
            default: {
                int64_t v255 = v254; // 0x40b055
                if (v254 == 0) {
                    if (v2 != 0) {
                        // 0x40b2d5
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                        return &g62;
                    }
                    // 0x40b074
                    v255 = 1;
                    if (v50 != 0) {
                        goto lab_0x40b1da_6;
                    }
                }
                int64_t v256 = v255;
                int32_t v257 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x40b093
                v252 = v256;
                if (v257 != 0) {
                    // 0x40b09c
                    v47 = 0;
                    v252 = v256;
                }
                goto lab_0x40a7ca;
            }
        }
    } else {
        // 0x40a7a7
        v50 = v2;
        v252 = 1;
        goto lab_0x40a7ca;
    }
  lab_0x40af68:;
    char v258 = v209;
    int64_t str7 = v200;
    char v259 = v258; // 0x40af6d
    int32_t v260; // 0x40a420
    int32_t v261; // bp-276, 0x40a420
    char v262; // 0x40a420
    int64_t v263; // 0x40a420
    int64_t v264; // 0x40a420
    char v265; // 0x40a420
    int64_t ps5; // bp-308, 0x40a420
    char v266; // 0x40a420
    if (v258 != 0) {
        goto lab_0x40b0c8;
    } else {
        unsigned char v267 = *(char *)str7; // 0x40af78
        int32_t v268 = *(int32_t *)((int64_t)(4 * v267 / 32) + (int64_t)&g20); // 0x40af83
        if ((1 << (int32_t)(v267 % 32) & v268) == 0) {
            int32_t v269 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x40b0b6
            v259 = 1;
            if (v269 == 0) {
                // break -> 0x40b2bc
                goto lab_0x40b2bc_5;
            }
            goto lab_0x40b0c8;
        } else {
            int32_t v270 = v267; // 0x40afa5
            v261 = v270;
            v260 = v270;
            v264 = str7;
            v266 = v258;
            v265 = 1;
            v262 = 1;
            v263 = 1;
            goto lab_0x40afae_2;
        }
    }
  lab_0x40adcf:;
    int64_t v271 = v192;
    char v272 = v213;
    int64_t str8 = v204;
    char v273 = v272; // 0x40add4
    if (v272 != 0) {
        goto lab_0x40ae6f;
    } else {
        unsigned char v274 = *(char *)str8; // 0x40addf
        int32_t v275 = *(int32_t *)((int64_t)(4 * v274 / 32) + (int64_t)&g20); // 0x40adea
        if ((1 << (int32_t)(v274 % 32) & v275) == 0) {
            int32_t v276 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x40ae5d
            v273 = 1;
            if (v276 == 0) {
                // break -> 0x40b2bc
                goto lab_0x40b2bc_5;
            }
            goto lab_0x40ae6f;
        } else {
            // 0x40adf7
            v261 = v274;
            v205 = str8;
            v214 = v272;
            v206 = 1;
            v193 = 1;
            v199 = 1;
            goto lab_0x40ae11;
        }
    }
  lab_0x40aa32_3:
    // 0x40aa32
    v163 = v76;
    v164 = v78;
    v165 = v80;
    v166 = v82;
    v167 = v84;
    v169 = v87;
    v170 = v89;
    v171 = v91;
    v172 = v92;
    v173 = v94;
    v174 = v86;
    goto lab_0x40aa3a;
  lab_0x40b0c8:;
    char v277 = v259;
    int64_t v278 = function_407340(str7, (int64_t)__ctype_get_mb_cur_max()); // 0x40b0d8
    int64_t v279 = function_408fc0((int64_t *)&v261, str7, v278); // 0x40b0f1
    v202 = str7;
    v211 = v277;
    v208 = 1;
    v195 = 0;
    v197 = 1;
    switch (v279) {
        case -1: {
            goto lab_0x40afbc;
        }
        case -2: {
            int32_t len6 = strlen((char *)str7); // 0x40b248
            v202 = str7;
            v211 = v277;
            v208 = 1;
            v195 = 0;
            v197 = len6;
            goto lab_0x40afbc;
        }
        default: {
            int64_t v280 = v279; // 0x40b112
            if (v279 == 0) {
                // 0x40b114
                if (*(char *)str7 != 0) {
                    // 0x40b2d5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g62;
                }
                // 0x40b12b
                v280 = 1;
                if (v261 != 0) {
                    goto lab_0x40b1da_6;
                }
            }
            int32_t v281 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x40b143
            v201 = str7;
            v210 = v281 == 0 ? v277 : 0;
            v207 = 1;
            v194 = 1;
            v196 = v280;
            goto lab_0x40afae;
        }
    }
  lab_0x40afbc:;
    int64_t v282 = v202; // 0x40afc4
    char v283 = v211; // 0x40afc4
    char v284 = v208; // 0x40afc4
    char v285 = v195; // 0x40afc4
    int64_t v286 = v197; // 0x40afc4
    int64_t v287 = 1; // 0x40afc4
    goto lab_0x40afca;
  lab_0x40afae:
    // 0x40afae
    v260 = v261;
    v264 = v201;
    v266 = v210;
    v265 = v207;
    v262 = v194;
    v263 = v196;
    goto lab_0x40afae_2;
  lab_0x40ae6f:;
    char v298 = v273;
    int64_t v299 = function_407340(str8, (int64_t)__ctype_get_mb_cur_max()); // 0x40ae7f
    int64_t v300 = function_408fc0((int64_t *)&v261, str8, v299); // 0x40ae98
    v203 = str8;
    v212 = v298;
    v198 = 1;
    v191 = v271;
    switch (v300) {
        case -1: {
            goto lab_0x40adb6;
        }
        case -2: {
            int32_t len7 = strlen((char *)str8); // 0x40af1d
            v203 = str8;
            v212 = v298;
            v198 = len7;
            v191 = v271;
            goto lab_0x40adb6;
        }
        default: {
            int64_t v301 = v300; // 0x40aeb1
            if (v300 == 0) {
                // 0x40aeb3
                if (*(char *)str8 != 0) {
                    // 0x40b2d5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g62;
                }
                // 0x40aeca
                v301 = 1;
                if (v261 != 0) {
                    goto lab_0x40b1da_6;
                }
            }
            int32_t v302 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x40aee2
            v205 = str8;
            v214 = v302 == 0 ? v298 : 0;
            v206 = 1;
            v193 = 1;
            v199 = v301;
            goto lab_0x40ae11;
        }
    }
  lab_0x40ae11:;
    int64_t v289 = v205; // 0x40ae19
    char v290 = v214; // 0x40ae19
    char v291 = v206; // 0x40ae19
    char v292 = v193; // 0x40ae19
    int64_t v293 = v199; // 0x40ae19
    if (v261 != 0) {
        goto lab_0x40adb6;
    } else {
        goto lab_0x40ae26;
    }
  lab_0x40adb6:;
    int64_t v303 = v198 + v203; // 0x40adc0
    int64_t v304 = v191 - 1; // 0x40adc5
    v204 = v303;
    v213 = v212;
    v192 = v304;
    v200 = v303;
    v209 = v212;
    if (v304 == 0) {
        goto lab_0x40af68;
    } else {
        goto lab_0x40adcf;
    }
  lab_0x40a7ca:
    // 0x40a7ca
    v99 = v252 + str2;
    v100 = v247 + (int64_t)v168;
    v101 = v251;
    v55 = v244;
    while (true) {
      lab_0x40a925:
        // 0x40a925
        v59 = v101;
        str5 = v100;
        str3 = v99;
        if (v47 == 0) {
            unsigned char v102 = *(char *)str3; // 0x40a808
            int32_t v103 = *(int32_t *)((int64_t)(4 * v102 / 32) + (int64_t)&g20); // 0x40a813
            if ((1 << (int32_t)(v102 % 32) & v103) == 0) {
                // 0x40ab80
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) == 0) {
                    // break (via goto) -> 0x40b2bc
                    goto lab_0x40b2bc_5;
                }
                // 0x40ab95
                v47 = 1;
                goto lab_0x40a933;
            } else {
                // 0x40a824
                v50 = v102;
                result2 = str6;
                len3 = 1;
                v52 = 1;
                if (v102 == 0) {
                    // 0x40a57d
                    return result2;
                }
                goto lab_0x40a867;
            }
        } else {
            goto lab_0x40a933;
        }
    }
    goto lab_0x40aa32_3;
  lab_0x40afca:;
    int64_t v288 = v119 + 1; // 0x40afca
    v149 = v282;
    v151 = v283;
    v150 = v284;
    v146 = v189;
    v152 = v119;
    v145 = v188;
    v144 = v187;
    v147 = v285;
    v148 = v286;
    v143 = v288;
    v142 = v287;
    v132 = v282;
    v136 = v283;
    v134 = v284;
    v125 = v189;
    v138 = v119;
    v123 = v188;
    v121 = v187;
    v128 = v285;
    v130 = v286;
    v120 = v288;
    v118 = v287;
    if ((char)v187 != 0) {
        goto lab_0x40a6e5;
    } else {
        goto lab_0x40abe8;
    }
  lab_0x40afae_2:
    // 0x40afae
    v289 = v264;
    v290 = v266;
    v291 = v265;
    v292 = v262;
    v293 = v263;
    v202 = v264;
    v211 = v266;
    v208 = v265;
    v195 = v262;
    v197 = v263;
    if (v260 == 0) {
        goto lab_0x40ae26;
    } else {
        goto lab_0x40afbc;
    }
  lab_0x40ae26:;
    int64_t v294 = function_409a40(result, str2, (int64_t *)&v47); // 0x40ae34
    if ((char)v294 != 0) {
        // 0x40b261
        result2 = v47;
        goto lab_0x40a57d_2;
    }
    // 0x40ae44
    v282 = v289;
    v283 = v290;
    v284 = v291;
    v285 = v292;
    v286 = v293;
    v287 = v294 & 0xffffffff;
    goto lab_0x40afca;
  lab_0x40a5f7:
    // 0x40a5f7
    v226 = v38;
    v185 = len;
    ps5 = 0;
    ps4 = 0;
    v227 = str2;
    v228 = 0;
    v229 = 0;
    v230 = result;
    v231 = 0;
    v232 = 0;
    int32_t v295; // 0x40a420
    v233 = v295;
    char v296; // 0x40a420
    v234 = v296;
    int64_t v297; // 0x40a420
    v235 = v297;
    v236 = 0;
    v237 = 0;
    v238 = 1;
    while (true) {
      lab_0x40a650:
        // 0x40a650
        v116 = v238;
        v115 = v237;
        v119 = v236;
        v129 = v235;
        v127 = v234;
        v168 = v233;
        v137 = v232;
        int128_t v239 = v231;
        str6 = v230;
        v133 = v229;
        v135 = v228;
        v131 = v227;
        v104 = v239;
        if ((char)v239 != 0) {
            goto lab_0x40ac69;
        } else {
            unsigned char v240 = *(char *)str6; // 0x40a66e
            int32_t v241 = *(int32_t *)((int64_t)(4 * v240 / 32) + (int64_t)&g20); // 0x40a679
            if ((1 << (int32_t)(v240 % 32) & v241) == 0) {
                int32_t v242 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x40ac54
                v104 = 1;
                if (v242 == 0) {
                    // break -> 0x40b2bc
                    break;
                }
                goto lab_0x40ac69;
            } else {
                int32_t v243 = v240; // 0x40a6a1
                v107 = v243;
                v109 = v243;
                v111 = v239;
                v110 = 1;
                goto lab_0x40a6b0;
            }
        }
    }
  lab_0x40b2bc_5:
    // 0x40b2bc
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x40b2d5
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
    return &g62;
  lab_0x40a572:
    // 0x40a572
    len = v39;
    v38 = false;
    v295 = v34;
    v296 = v35;
    v297 = v36;
    if (v33 == 0) {
        // 0x40a57d
        return result;
    }
    goto lab_0x40a5f7;
}
// Address range: 0x40b2f0 - 0x40b539
int64_t function_40b2f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40b2f0
    int64_t outbytesleft3; // bp-4152, 0x40b2f0
    int64_t v1 = &outbytesleft3; // 0x40b316
    int64_t * cd = (int64_t *)a3; // 0x40b334
    iconv(cd, NULL, NULL, NULL, NULL);
    int64_t inbuf = a1; // bp-4184, 0x40b339
    int64_t inbytesleft = a2; // bp-4176, 0x40b341
    char ** outbuf2; // 0x40b2f0
    int32_t * outbytesleft2; // 0x40b2f0
    int64_t v2; // 0x40b2f0
    int64_t outbytesleft; // bp-4160, 0x40b2f0
    int64_t outbuf; // bp-4168, 0x40b2f0
    if (a2 != 0) {
        int64_t v3 = 0; // 0x40b358
        outbuf = v1;
        outbytesleft = 0x1000;
        int32_t v4 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft); // 0x40b384
        if (v4 == -1) {
            // 0x40b38f
            if (*__errno_location() != 7) {
                // 0x40b39b
            }
        }
        // 0x40b350
        v3 += outbuf - v1;
        outbytesleft2 = (int32_t *)&outbytesleft;
        outbuf2 = (char **)&outbuf;
        v2 = v3;
        while (inbytesleft != 0) {
            // 0x40b363
            outbuf = v1;
            outbytesleft = 0x1000;
            v4 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft);
            if (v4 == -1) {
                // 0x40b38f
                if (*__errno_location() != 7) {
                    // 0x40b39b
                    outbytesleft2 = (int32_t *)&outbytesleft;
                }
            }
            // 0x40b350
            v3 += outbuf - v1;
            outbytesleft2 = (int32_t *)&outbytesleft;
            outbuf2 = (char **)&outbuf;
            v2 = v3;
        }
    } else {
        // 0x40b2f0
        outbytesleft2 = (int32_t *)&outbytesleft;
        outbuf2 = (char **)&outbuf;
        v2 = 0;
    }
    goto lab_0x40b3a4;
  lab_0x40b46a:;
    // 0x40b46a
    int64_t v8; // 0x40b2f0
    int64_t v5; // 0x40b3f9
    if (iconv(cd, NULL, NULL, (char **)&outbytesleft, (int32_t *)&outbytesleft3) != -1) {
        // 0x40b486
        *(int64_t *)a4 = v8;
        *(int64_t *)a5 = v5;
        // 0x40b4a8
        return 0;
    }
    goto lab_0x40b50e;
  lab_0x40b3a4:
    // 0x40b3a4
    outbuf = v1;
    outbytesleft = 0x1000;
    if (iconv(cd, NULL, NULL, outbuf2, outbytesleft2) == -1) {
        // 0x40b4a8
        return 0xffffffff;
    }
    int64_t size = outbuf - v1 + v2; // 0x40b3d6
    if (size == 0) {
        // 0x40b4f0
        *(int64_t *)a5 = 0;
        // 0x40b4a8
        return 0;
    }
    // 0x40b3f4
    v5 = 0x100000000 * size >> 32;
    int64_t * v6 = &outbuf; // 0x40b400
    if (v5 > (int64_t)&outbytesleft) {
        int64_t * mem = malloc((int32_t)size); // 0x40b4c4
        v6 = mem;
        if (mem == NULL) {
            // 0x40b4d5
            *__errno_location() = 12;
            // 0x40b4a8
            return 0xffffffff;
        }
    }
    int64_t * v7 = v6;
    v8 = (int64_t)v7;
    iconv(cd, NULL, NULL, NULL, NULL);
    outbuf = a2;
    outbytesleft = v8;
    inbytesleft = a1;
    outbytesleft3 = v5;
    if (a2 != 0) {
        while (iconv(cd, (char **)&inbytesleft, (int32_t *)&outbuf, (char **)&outbytesleft, (int32_t *)&outbytesleft3) != -1) {
            // 0x40b460
            if (outbuf == 0) {
                goto lab_0x40b46a;
            }
        }
        // 0x40b500
        if (*__errno_location() == 22) {
            goto lab_0x40b46a;
        } else {
            goto lab_0x40b50e;
        }
    } else {
        // 0x40b406
        goto lab_0x40b46a;
    }
  lab_0x40b50e:
    // 0x40b50e
    if (&outbytesleft != v7) {
        int32_t * v9 = __errno_location(); // 0x40b51d
        free(v7);
    }
    // 0x40b4a8
    return 0xffffffff;
}
// Address range: 0x40b540 - 0x40b705
int64_t function_40b540(int64_t str, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t inbuf = str; // bp-88, 0x40b551
    int32_t len = strlen((char *)str); // 0x40b555
    int64_t v1 = len; // 0x40b555
    int64_t inbytesleft = v1; // bp-80, 0x40b55d
    int64_t v2 = len >= 0x10000000 ? v1 : 16 * v1; // 0x40b56c
    int64_t size = v2 + 1; // 0x40b570
    int64_t * mem = malloc((int32_t)size); // 0x40b577
    int64_t result = (int64_t)mem; // 0x40b577
    if (mem == NULL) {
        // 0x40b6f8
        *__errno_location() = 12;
        // 0x40b6e2
        return result;
    }
    int64_t * cd = (int64_t *)a2; // 0x40b594
    iconv(cd, NULL, NULL, NULL, NULL);
    char * outbuf = (char *)mem; // bp-72, 0x40b599
    int64_t outbytesleft = v2;
    int32_t v3 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, &outbuf, (int32_t *)&outbytesleft); // 0x40b61e
    int64_t v4 = result; // 0x40b627
    int64_t v5 = result; // 0x40b627
    int64_t v6 = size; // 0x40b627
    int64_t v7; // 0x40b540
    int64_t v8; // 0x40b540
    int32_t * v9; // 0x40b540
    if (v3 == -1) {
        int64_t v10 = size;
        int32_t * v11 = __errno_location(); // 0x40b5a8
        int32_t v12 = *v11; // 0x40b5b0
        v5 = v4;
        v6 = v10;
        while (v12 != 22) {
            // 0x40b5bb
            v8 = v4;
            if (v12 != 7) {
                goto lab_0x40b6d7;
            }
            int64_t v13 = 2 * v10; // 0x40b5c9
            v7 = v4;
            v9 = v11;
            if (v10 >= v13) {
                goto lab_0x40b6d0_4;
            }
            int64_t * mem2 = realloc((int64_t *)v4, (int32_t)v13); // 0x40b5e0
            v7 = v4;
            v9 = v11;
            if (mem2 == NULL) {
                goto lab_0x40b6d0_4;
            }
            int64_t v14 = (int64_t)outbuf - v4; // 0x40b5ce
            v4 = (int64_t)mem2;
            outbuf = (char *)(v14 + v4);
            outbytesleft = v13 + -1 - v14;
            int32_t v15 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, &outbuf, (int32_t *)&outbytesleft); // 0x40b61e
            v5 = v4;
            v6 = v13;
            if (v15 != -1) {
                // break -> 0x40b67e
                break;
            }
            v10 = v13;
            v11 = __errno_location();
            v12 = *v11;
            v5 = v4;
            v6 = v10;
        }
    }
    int32_t v16 = iconv(cd, NULL, NULL, &outbuf, (int32_t *)&outbytesleft); // 0x40b68f
    int64_t v17 = v6; // 0x40b698
    int64_t v18 = v5; // 0x40b698
    int64_t v19 = v5; // 0x40b698
    int64_t v20 = v6; // 0x40b698
    if (v16 == -1) {
        int32_t * v21 = __errno_location(); // 0x40b630
        v8 = v18;
        while (*v21 == 7) {
            uint64_t v22 = v17;
            v17 = 2 * v22;
            v7 = v18;
            v9 = v21;
            if (v22 >= v17) {
                goto lab_0x40b6d0_4;
            }
            int64_t * mem3 = realloc((int64_t *)v18, (int32_t)v17); // 0x40b659
            v7 = v18;
            v9 = v21;
            if (mem3 == NULL) {
                goto lab_0x40b6d0_4;
            }
            int64_t v23 = (int64_t)outbuf - v18; // 0x40b64b
            v18 = (int64_t)mem3;
            outbuf = (char *)(v23 + v18);
            outbytesleft = v17 + -1 - v23;
            int32_t v24 = iconv(cd, NULL, NULL, &outbuf, (int32_t *)&outbytesleft); // 0x40b68f
            v19 = v18;
            v20 = v17;
            if (v24 != -1) {
                goto lab_0x40b69a;
            }
            v21 = __errno_location();
            v8 = v18;
        }
      lab_0x40b6d7:
        // 0x40b6d7
        free((int64_t *)v8);
        // 0x40b6e2
        return 0;
    }
  lab_0x40b69a:;
    char * v25 = outbuf; // 0x40b69a
    outbuf = (char *)((int64_t)v25 + 1);
    *v25 = 0;
    uint64_t v26 = (int64_t)outbuf - v19; // 0x40b6b0
    int64_t result2 = v19; // 0x40b6b6
    if (v20 > v26) {
        int64_t * mem4 = realloc((int64_t *)v19, (int32_t)v26); // 0x40b6bb
        result2 = mem4 != NULL ? (int64_t)mem4 : v19;
    }
    // 0x40b6e2
    return result2;
  lab_0x40b6d0_4:
    // 0x40b6d0
    *v9 = 12;
    v8 = v7;
    goto lab_0x40b6d7;
}
// Address range: 0x40b710 - 0x40b7fc
int64_t function_40b710(int64_t str, int64_t fromcode, int64_t a3) {
    // 0x40b710
    int64_t v1; // 0x40b710
    if ((char)v1 != 0) {
        char * tocode = (char *)a3; // 0x40b72e
        if ((int32_t)function_409150(fromcode, tocode, a3) != 0) {
            int64_t * cd = iconv_open(tocode, (char *)fromcode); // 0x40b75e
            if (cd == (int64_t *)-1) {
                // 0x40b747
                return 0;
            }
            int64_t v2 = function_40b540(str, (int64_t)cd, a3, v1, v1); // 0x40b772
            if (v2 == 0) {
                int32_t * v3 = __errno_location(); // 0x40b7e0
                iconv_close(cd);
                // 0x40b747
                return 0;
            }
            int64_t result = v2; // 0x40b789
            if (iconv_close(cd) < 0) {
                int32_t * v4 = __errno_location(); // 0x40b78b
                free((int64_t *)v2);
                result = 0;
            }
            // 0x40b747
            return result;
        }
    }
    char * v5 = strdup((char *)str); // 0x40b73a
    int64_t result2 = (int64_t)v5; // 0x40b73a
    if (v5 != NULL) {
        // 0x40b747
        return result2;
    }
    // 0x40b7b0
    *__errno_location() = 12;
    return result2;
}
// Address range: 0x40b800 - 0x40b87b
int64_t function_40b800(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40b807
    if (fileno(stream) < 0) {
        // 0x40b867
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40b81a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40b84b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40b867
            return fclose(stream);
        }
    }
    // 0x40b81c
    if ((int32_t)function_40b880(a1, v1) == 0) {
        // 0x40b867
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40b828
    int32_t v3 = *v2; // 0x40b830
    int64_t result = fclose(stream); // 0x40b83e
    if (v3 != 0) {
        // 0x40b870
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40b840
    return result;
}
// Address range: 0x40b880 - 0x40b8c0
int64_t function_40b880(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40b89a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40b89a
        return fflush(stream);
    }
    // 0x40b8a8
    function_40b8c0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40b8c0 - 0x40b917
int64_t function_40b8c0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40b8c0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40b8ca
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40b8fb
    int64_t result = -1; // 0x40b904
    if (v1 != -1) {
        // 0x40b906
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40b912
    return result;
}
// Address range: 0x40b920 - 0x40b98c
int64_t function_40b920(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40b920
    if (a1 > 0xffffffffffffffef) {
        // 0x40b97e
        return 0;
    }
    int64_t * mem = malloc((int32_t)a1 + 16); // 0x40b92a
    int64_t result = 0; // 0x40b937
    if (mem != NULL) {
        int64_t v1 = (int64_t)mem; // 0x40b92a
        result = v1 + 16;
        *(int32_t *)(v1 + 12) = 0x1415fb4a;
        int64_t v2 = g59; // 0x40b96b
        g59 = result;
        *mem = v2;
    }
    // 0x40b97e
    return result;
}
// Address range: 0x40b990 - 0x40ba16
int64_t function_40b990(int64_t a1) {
    if (a1 == 0 || *(int32_t *)(a1 - 4) != 0x1415fb4a) {
        // 0x40b99e
        int64_t result; // 0x40b990
        return result;
    }
    // 0x40b9a0
    if (g59 == 0) {
        // 0x40b99e
        return 0;
    }
    int64_t * v1 = &g59; // 0x40b9d4
    if (g59 == a1) {
      lab_0x40b9fc:;
        int64_t * v2 = (int64_t *)(a1 - 16); // 0x40b9fc
        *v1 = *v2;
        free(v2);
        return &g62;
    }
    int64_t * v3 = (int64_t *)(g59 - 16);
    int64_t result2 = *v3; // 0x40b9e8
    while (result2 != 0) {
        // 0x40b9e0
        v1 = v3;
        if (result2 == a1) {
            goto lab_0x40b9fc;
        }
        v3 = (int64_t *)(result2 - 16);
        result2 = *v3;
    }
    // 0x40b99e
    return result2;
}
// Address range: 0x40ba20 - 0x40bc4d
int64_t function_40ba20(int64_t str) {
    // 0x40ba20
    if ((uint32_t)__ctype_get_mb_cur_max() < 2) {
        // 0x40ba3f
        return strlen((char *)str);
    }
    int64_t ps = 0; // bp-84, 0x40ba5b
    char v1 = 0; // 0x40ba69
    int64_t v2 = str; // 0x40ba69
    int64_t v3 = 0; // 0x40ba69
    int32_t v4; // 0x40ba20
    int64_t v5; // 0x40ba20
    int32_t v6; // bp-52, 0x40ba20
    int64_t v7; // 0x40ba20
    int64_t str2; // 0x40ba20
    char v8; // 0x40ba20
    char v9; // 0x40ba20
    while (true) {
      lab_0x40bac1:
        // 0x40bac1
        v5 = v3;
        str2 = v2;
        v9 = v1;
        if (v1 == 0) {
            unsigned char v10 = *(char *)str2; // 0x40ba75
            int32_t v11 = *(int32_t *)((int64_t)(4 * v10 / 32) + (int64_t)&g20); // 0x40ba80
            if ((1 << (int32_t)(v10 % 32) & v11) == 0) {
                int32_t v12 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40bb55
                v9 = 1;
                if (v12 == 0) {
                    // break -> 0x40bba1
                    break;
                }
                goto lab_0x40bac7;
            } else {
                int32_t v13 = v10; // 0x40baa2
                v6 = v13;
                v4 = v13;
                v8 = 0;
                v7 = 1;
                goto lab_0x40baa6;
            }
        } else {
            goto lab_0x40bac7;
        }
    }
    // 0x40bba1
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x40bbba
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
    // 0x40bbd3
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return function_401610();
  lab_0x40bac7:;
    char v14 = v9;
    int64_t v15 = function_407340(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x40bad7
    int64_t v16 = function_408fc0((int64_t *)&v6, str2, v15); // 0x40baec
    v1 = v14;
    int64_t len = 1; // 0x40ba20
    switch (v16) {
        case -1: {
            goto lab_0x40baae;
        }
        case -2: {
            // 0x40bb88
            v1 = v14;
            len = strlen((char *)str2);
            goto lab_0x40baae;
        }
        default: {
            int64_t v17 = v16; // 0x40bb09
            if (v16 == 0) {
                // 0x40bb0b
                if (*(char *)str2 != 0) {
                    // 0x40bbba
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    // 0x40bbd3
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return function_401610();
                }
                // 0x40bb22
                v17 = 1;
                if (v6 != 0) {
                    // 0x40bbd3
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return function_401610();
                }
            }
            int32_t v18 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40bb38
            v4 = v6;
            v8 = v18 == 0 ? v14 : 0;
            v7 = v17;
            goto lab_0x40baa6;
        }
    }
  lab_0x40baae:
    // 0x40baae
    v2 = len + str2;
    v3 = v5 + 1;
    goto lab_0x40bac1;
  lab_0x40baa6:;
    int64_t result = v5; // 0x40baac
    v1 = v8;
    len = v7;
    if (v4 == 0) {
        // 0x40ba3f
        return result;
    }
    goto lab_0x40baae;
}
// Address range: 0x40bc50 - 0x40bc51
int64_t function_40bc50(void) {
    // 0x40bc50
    int64_t result; // 0x40bc50
    return result;
}
// Address range: 0x40bc60 - 0x40bc78
int64_t function_40bc60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bc60
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g25);
}
// Address range: 0x40bc78 - 0x40bc98
int64_t function_40bc78(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g21; // 0x40bc82
    while (*(int64_t *)v1 != -1) {
        // 0x40bc83
        v1 -= 8;
    }
    // 0x40bc94
    return result;
}
