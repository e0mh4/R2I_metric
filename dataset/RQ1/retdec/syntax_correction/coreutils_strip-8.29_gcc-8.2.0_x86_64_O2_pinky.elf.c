#include "decompile_retdec.h"
// Address range: 0x401c90 - 0x401c95
int64_t function_401c90(void) {
    // 0x401c90
    abort();
    // UNREACHABLE
}
// Address range: 0x401c95 - 0x401c9a
int64_t function_401c95(void) {
    // 0x401c95
    abort();
    // UNREACHABLE
}
// Address range: 0x401c9a - 0x401c9f
int64_t function_401c9a(void) {
    // 0x401c9a
    abort();
    // UNREACHABLE
}
// Address range: 0x401c9f - 0x401ca4
int64_t function_401c9f(void) {
    // 0x401c9f
    abort();
    // UNREACHABLE
}
// Address range: 0x401ca4 - 0x401ca9
int64_t function_401ca4(void) {
    // 0x401ca4
    abort();
    // UNREACHABLE
}
// Address range: 0x401ca9 - 0x401cae
int64_t function_401ca9(void) {
    // 0x401ca9
    abort();
    // UNREACHABLE
}
// Address range: 0x401cb0 - 0x402130
int64_t function_401cb0(int64_t a1, int64_t a2) {
    // 0x401cb0
    function_403180(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401cb0
    function_406db0(0x402fe0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    int64_t v2; // 0x401cb0
    int64_t v3; // 0x401cb0
    int64_t v4; // 0x401cb0
    uint64_t v5; // 0x401cb0
    int16_t * v6; // bp-64, 0x401cb0
    int64_t v7; // bp-72, 0x401cb0
    int64_t v8; // 0x401ece
    int64_t v9; // 0x401ee9
    int64_t v10; // 0x401e94
    char * str; // 0x401f2b
    int64_t v11; // 0x402020
    int64_t * v12; // 0x402027
    uint64_t v13; // 0x402027
    int64_t v14; // 0x401cb0
    int32_t v15; // 0x401e64
    int64_t v16; // 0x401e64
    int32_t v17; // 0x401e6b
    while (true) {
        int32_t v18 = function_406460(a1 & 0xffffffff, a2, "sfwiqbhlp", &g2, 0, v1);
        switch (v18) {
            case -1: {
                // 0x401e64
                v15 = *(int32_t *)0x60a2fc;
                v16 = v15;
                v17 = (int32_t)a1 - v15;
                if (g18 == 0) {
                    if (v17 == 0) {
                        // 0x4020c0
                        error(0, (int32_t)"no username specified; at least one must be specified when using -l" ^ (int32_t)"no username specified; at least one must be specified when using -l", dcgettext(NULL, "no username specified; at least one must be specified when using -l", 5));
                        // 0x4020df
                        function_402bd0(1);
                        // UNREACHABLE
                    }
                    if (v17 < 1) {
                        // 0x401ea2
                        return 0;
                    }
                    // 0x401e80
                    v2 = 8 * v16 + a2;
                    v10 = v2 + 8;
                    function_402340(*(int64_t *)v2);
                    while (a2 + 8 + 8 * ((int64_t)(v17 - 1) + v16) != v10) {
                        // 0x401e90
                        v2 = v10;
                        v10 = v2 + 8;
                        function_402340(*(int64_t *)v2);
                    }
                    // 0x401ea2
                    return 0;
                }
                // 0x401eb3
                v6 = NULL;
                v8 = function_4065c0("/var/run/utmp", &v7, (int64_t *)&v6, 0);
                if ((int32_t)v8 != 0) {
                    // 0x4020f8
                    error(1, *__errno_location(), "%s", (char *)function_404c20(0, 3, "/var/run/utmp"));
                    return &g62;
                }
                // 0x401edb
                v9 = function_403080(2, (int64_t)&v7);
                g45 = (char)v9 != 0 ? "%Y-%m-%d %H:%M" : "%b %e %H:%M";
                g44 = (char)v9 != 0 ? 16 : 12;
                if (g23 != 0) {
                    // 0x401f88
                    __printf_chk(1, "%-8s", dcgettext(NULL, "Login", 5));
                    if (g22 != 0) {
                        // 0x402045
                        __printf_chk(1, " %-19s", dcgettext(NULL, "Name", 5));
                    }
                    // 0x401fba
                    __printf_chk(1, " %-9s", dcgettext(NULL, " TTY", 5));
                    if (g24 != 0) {
                        // 0x402096
                        __printf_chk(1, " %-6s", dcgettext(NULL, "Idle", 5));
                    }
                    // 0x401fec
                    __printf_chk(1, " %-*s", (int64_t)g44, dcgettext(NULL, "When", 5));
                    if (g17 != 0) {
                        // 0x40206f
                        __printf_chk(1, " %s", dcgettext(NULL, "Where", 5));
                    }
                    // 0x402020
                    v11 = (int64_t)g36;
                    v12 = (int64_t *)(v11 + 40);
                    v13 = *v12;
                    if (v13 >= *(int64_t *)(v11 + 48)) {
                        // 0x4020e9
                        __overflow(g36, 10);
                    } else {
                        // 0x402035
                        *v12 = v13 + 1;
                        *(char *)v13 = 10;
                    }
                }
                if (v7 == 0) {
                    // 0x401ea2
                    return 0;
                }
                // 0x401f2b
                v14 = v7;
                v4 = (int64_t)v6;
                str = (char *)(v4 + 44);
                if (*str != 0) {
                    // 0x401f33
                    if (*(int16_t *)v4 == 7) {
                        // 0x401f3b
                        if (v17 != 0) {
                            v5 = 0;
                            while (v5 < (int64_t)v17) {
                                // 0x401f69
                                if (strncmp(str, (char *)*(int64_t *)(8 * (v5 + v16) + a2), 32) == 0) {
                                    goto lab_0x401f3f;
                                }
                                v5++;
                            }
                        } else {
                            // 0x401f3f
                            function_4026f0(v4);
                        }
                    }
                }
                // 0x401f16
                v14--;
                v3 = v4 + 384;
                while (v14 != 0) {
                    // 0x401f2b
                    v4 = v3;
                    str = (char *)(v4 + 44);
                    if (*str != 0) {
                        // 0x401f33
                        if (*(int16_t *)v4 == 7) {
                            // 0x401f3b
                            if (v17 != 0) {
                                v5 = 0;
                                while (v5 < (int64_t)v17) {
                                    // 0x401f69
                                    if (strncmp(str, (char *)*(int64_t *)(8 * (v5 + v16) + a2), 32) == 0) {
                                        goto lab_0x401f3f;
                                    }
                                    v5++;
                                }
                            } else {
                                // 0x401f3f
                                function_4026f0(v4);
                            }
                        }
                    }
                    // 0x401f16
                    v14--;
                    v3 = v4 + 384;
                }
                // 0x401ea2
                return 0;
            }
            case 105: {
                // 0x401e20
                g22 = 0;
                g17 = 0;
                // break -> 0x401d00
                break;
            }
            default: {
                if (v18 > 105) {
                    if (v18 == 113) {
                        // 0x401e38
                        g22 = 0;
                        g17 = 0;
                        g24 = 0;
                    } else {
                        if (v18 > 113) {
                            if (v18 != 115) {
                                if (v18 != 119) {
                                    // 0x4020df
                                    function_402bd0(1);
                                    // UNREACHABLE
                                }
                                // 0x401df9
                                g22 = 0;
                            } else {
                                // 0x401d85
                                g18 = 1;
                            }
                        } else {
                            if (v18 != 108) {
                                if (v18 != 112) {
                                    // 0x4020df
                                    function_402bd0(1);
                                    // UNREACHABLE
                                }
                                // 0x401d71
                                g20 = 0;
                            } else {
                                // 0x401d3b
                                g18 = 0;
                            }
                        }
                    }
                } else {
                    if (v18 == 98) {
                        // 0x401e58
                        g19 = 0;
                    } else {
                        if (v18 <= 98) {
                            if (v18 == -131) {
                                // 0x401db7
                                function_405220((int64_t)g36, "pinky", "GNU coreutils", (int64_t)g25, "Joseph Arceneaux", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v18 == -130) {
                                // 0x401e10
                                function_402bd0(0);
                                // UNREACHABLE
                            }
                            goto lab_0x4020df;
                        }
                        if (v18 != 102) {
                            if (v18 != 104) {
                              lab_0x4020df:
                                // 0x4020df
                                function_402bd0(1);
                                // UNREACHABLE
                            }
                            // 0x401da1
                            g21 = 0;
                        } else {
                            // 0x401d58
                            g23 = 0;
                        }
                    }
                }
                // break -> 0x401d00
                break;
            }
        }
    }
    // 0x401e64
    v15 = *(int32_t *)0x60a2fc;
    v16 = v15;
    v17 = (int32_t)a1 - v15;
    if (g18 == 0) {
        if (v17 == 0) {
            // 0x4020c0
            error(0, (int32_t)"no username specified; at least one must be specified when using -l" ^ (int32_t)"no username specified; at least one must be specified when using -l", dcgettext(NULL, "no username specified; at least one must be specified when using -l", 5));
            // 0x4020df
            function_402bd0(1);
            // UNREACHABLE
        }
        if (v17 < 1) {
            // 0x401ea2
            return 0;
        }
        // 0x401e80
        v2 = 8 * v16 + a2;
        v10 = v2 + 8;
        function_402340(*(int64_t *)v2);
        while (a2 + 8 + 8 * ((int64_t)(v17 - 1) + v16) != v10) {
            // 0x401e90
            v2 = v10;
            v10 = v2 + 8;
            function_402340(*(int64_t *)v2);
        }
        // 0x401ea2
        return 0;
    }
    // 0x401eb3
    v6 = NULL;
    v8 = function_4065c0("/var/run/utmp", &v7, (int64_t *)&v6, 0);
    if ((int32_t)v8 != 0) {
        // 0x4020f8
        error(1, *__errno_location(), "%s", (char *)function_404c20(0, 3, "/var/run/utmp"));
        return &g62;
    }
    // 0x401edb
    v9 = function_403080(2, (int64_t)&v7);
    g45 = (char)v9 != 0 ? "%Y-%m-%d %H:%M" : "%b %e %H:%M";
    g44 = (char)v9 != 0 ? 16 : 12;
    if (g23 != 0) {
        // 0x401f88
        __printf_chk(1, "%-8s", dcgettext(NULL, "Login", 5));
        if (g22 != 0) {
            // 0x402045
            __printf_chk(1, " %-19s", dcgettext(NULL, "Name", 5));
        }
        // 0x401fba
        __printf_chk(1, " %-9s", dcgettext(NULL, " TTY", 5));
        if (g24 != 0) {
            // 0x402096
            __printf_chk(1, " %-6s", dcgettext(NULL, "Idle", 5));
        }
        // 0x401fec
        __printf_chk(1, " %-*s", (int64_t)g44, dcgettext(NULL, "When", 5));
        if (g17 != 0) {
            // 0x40206f
            __printf_chk(1, " %s", dcgettext(NULL, "Where", 5));
        }
        // 0x402020
        v11 = (int64_t)g36;
        v12 = (int64_t *)(v11 + 40);
        v13 = *v12;
        if (v13 >= *(int64_t *)(v11 + 48)) {
            // 0x4020e9
            __overflow(g36, 10);
        } else {
            // 0x402035
            *v12 = v13 + 1;
            *(char *)v13 = 10;
        }
    }
    if (v7 == 0) {
        // 0x401ea2
        return 0;
    }
    // 0x401f2b
    v14 = v7;
    v4 = (int64_t)v6;
    str = (char *)(v4 + 44);
    if (*str != 0) {
        // 0x401f33
        if (*(int16_t *)v4 == 7) {
            // 0x401f3b
            if (v17 != 0) {
                v5 = 0;
                while (v5 < (int64_t)v17) {
                    // 0x401f69
                    if (strncmp(str, (char *)*(int64_t *)(8 * (v5 + v16) + a2), 32) == 0) {
                        goto lab_0x401f3f;
                    }
                    v5++;
                }
            } else {
                // 0x401f3f
                function_4026f0(v4);
            }
        }
    }
    // 0x401f16
    v14--;
    v3 = v4 + 384;
    while (v14 != 0) {
        // 0x401f2b
        v4 = v3;
        str = (char *)(v4 + 44);
        if (*str != 0) {
            // 0x401f33
            if (*(int16_t *)v4 == 7) {
                // 0x401f3b
                if (v17 != 0) {
                    v5 = 0;
                    while (v5 < (int64_t)v17) {
                        // 0x401f69
                        if (strncmp(str, (char *)*(int64_t *)(8 * (v5 + v16) + a2), 32) == 0) {
                            goto lab_0x401f3f;
                        }
                        v5++;
                    }
                } else {
                    // 0x401f3f
                    function_4026f0(v4);
                }
            }
        }
        // 0x401f16
        v14--;
        v3 = v4 + 384;
    }
    // 0x401ea2
    return 0;
}
// Address range: 0x402130 - 0x40215b
// Address range: 0x40215b - 0x40217a
int64_t function_40215b(void) {
    // 0x40215b
    return &g35;
}
// Address range: 0x40217a - 0x4021b1
int64_t function_40217a(void) {
    // 0x40217a
    return 0;
}
// Address range: 0x4021b1 - 0x402208
int64_t function_4021b1(void) {
    // 0x4021b1
    if (g39 != 0) {
        // 0x402207
        int64_t result; // 0x4021b1
        return result;
    }
    int64_t v1 = g40; // 0x4021e4
    int64_t result2; // 0x4021f6
    if (g40 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4021f6
        result2 = function_40215b();
        g39 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4021e6
        v1++;
    }
    // 0x4021da
    g40 = v1;
    // 0x4021f6
    result2 = function_40215b();
    g39 = 1;
    return result2;
}
// Address range: 0x402208 - 0x40220d
int64_t function_402208(void) {
    // 0x402208
    return function_40217a();
}
// Address range: 0x402210 - 0x40233e
int64_t function_402210(int64_t str, int64_t str2) {
    int64_t v1 = str2;
    int32_t len = strlen((char *)str); // 0x402220
    int64_t v2 = str; // 0x40222c
    int64_t v3 = 0; // 0x40222c
    uint64_t v4; // 0x402210
    while (true) {
        // 0x402230
        v4 = v3;
        char v5 = *(char *)v2; // 0x402230
        v2++;
        while (v5 != 38) {
            // 0x402240
            if (v5 == 0) {
                // break (via goto) -> 0x402244
                goto lab_0x402244;
            }
            v5 = *(char *)v2;
            v2++;
        }
        // 0x402330
        v3 = v4 + 1;
    }
  lab_0x402244:;
    int64_t v6 = (int64_t)len + 1; // 0x402228
    int64_t v7 = v6; // 0x402247
    int64_t v8; // 0x402210
    if (v4 != 0) {
        uint64_t v9 = v6 - v4; // 0x40224c
        uint64_t len2 = (int64_t)strlen((char *)str2); // 0x40224f
        int64_t v10 = v4 * len2; // 0x402259
        int64_t v11 = v10 + v9; // 0x40225d
        if (v11 < v9) {
            // 0x402339
            function_4055b0(str2);
            // UNREACHABLE
        }
        // 0x402282
        v8 = str2;
        v7 = v11;
        if (v10 < 0 || (int128_t)len2 * (int128_t)v4 > 0xffffffffffffffff) {
            // 0x402339
            function_4055b0(str2);
            // UNREACHABLE
        }
    }
    char v12 = v8; // 0x402296
    int64_t result = function_405360(v7); // 0x40228e
    if (v12 == 0) {
        // 0x40231f
        *(char *)result = 0;
        return result;
    }
    int64_t v13 = str2 + 1;
    char v14 = v12; // 0x402210
    int64_t v15 = result; // 0x402210
    int64_t v16 = str; // 0x402210
    int64_t v17; // 0x402210
    int64_t v18; // 0x402210
    char v19; // 0x402210
    int64_t v20; // 0x402210
    int64_t v21; // 0x402210
    int64_t v22; // 0x402210
    while (true) {
      lab_0x4022bb_2:
        // 0x4022bb
        v18 = v16;
        int64_t v23 = v15;
        char v24 = v14;
        if (v24 != 38) {
            // 0x4022a8
            *(char *)v23 = v24;
            v20 = v23 + 1;
            goto lab_0x4022ae;
        } else {
            int16_t ** v25 = __ctype_b_loc(); // 0x4022bf
            int64_t v26 = (int64_t)*(char *)&v1; // 0x4022c4
            int64_t v27 = str2; // 0x4022d8
            int64_t v28 = v26; // 0x4022d8
            int64_t v29 = v23; // 0x4022d8
            if ((*(char *)((int64_t)*v25 + 1 + 2 * v26) & 2) != 0) {
                int32_t v30 = *(int32_t *)(4 * v26 + (int64_t)*__ctype_toupper_loc()); // 0x4022ee
                *(char *)v23 = (char)v30;
                v27 = v13;
                v28 = (int64_t)*(char *)v13;
                v29 = v23 + 1;
            }
            // 0x4022f5
            v20 = v29;
            int64_t v31 = v27; // 0x4022f7
            int64_t v32 = v28; // 0x4022f7
            int64_t v33 = v29; // 0x4022f7
            if (v28 == 0) {
                goto lab_0x4022ae;
            } else {
                int64_t v34 = v31 + 1; // 0x402300
                int64_t v35 = v33 + 1; // 0x402304
                *(char *)v33 = (char)v32;
                unsigned char v36 = *(char *)v34; // 0x40230b
                v31 = v34;
                v33 = v35;
                while (v36 != 0) {
                    // 0x402300
                    v34 = v31 + 1;
                    v35 = v33 + 1;
                    *(char *)v33 = (char)(int64_t)v36;
                    v36 = *(char *)v34;
                    v31 = v34;
                    v33 = v35;
                }
                int64_t v37 = v18 + 1; // 0x402312
                char v38 = *(char *)v37; // 0x402316
                v19 = v38;
                v21 = v35;
                v17 = v37;
                v22 = v35;
                if (v38 == 0) {
                    // break -> 0x40231f
                    break;
                }
                goto lab_0x4022bb;
            }
        }
    }
  lab_0x40231f:
    // 0x40231f
    *(char *)v22 = 0;
    return result;
  lab_0x4022ae:;
    int64_t v39 = v18 + 1; // 0x4022ae
    char v40 = *(char *)v39; // 0x4022b2
    v19 = v40;
    v21 = v20;
    v17 = v39;
    v22 = v20;
    if (v40 == 0) {
        // break -> 0x40231f
        goto lab_0x40231f;
    }
    goto lab_0x4022bb;
  lab_0x4022bb:
    // 0x4022bb
    v14 = v19;
    v15 = v21;
    v16 = v17;
    goto lab_0x4022bb_2;
}
// Address range: 0x402340 - 0x4026ee
int64_t function_402340(int64_t a1) {
    char * name = (char *)a1; // 0x402350
    struct passwd * v1 = getpwnam(name); // 0x402350
    __printf_chk(1, dcgettext(NULL, "Login name: ", 5));
    __printf_chk(1, "%-28s", name);
    __printf_chk(1, dcgettext(NULL, "In real life: ", 5));
    if (v1 == NULL) {
        // 0x40245f
        return __printf_chk(1, " %s", dcgettext(NULL, "???\n", 5));
    }
    int64_t v2 = (int64_t)v1; // 0x402350
    int64_t * v3 = (int64_t *)(v2 + 24); // 0x4023b5
    int64_t str = *v3; // 0x4023b5
    char * found_char_pos = strchr((char *)str, 44); // 0x4023c1
    int64_t v4 = str; // 0x4023c9
    if (found_char_pos != NULL) {
        // 0x4023cb
        *found_char_pos = 0;
        v4 = *v3;
    }
    int64_t v5 = function_402210(v4, *(int64_t *)v1); // 0x4023d8
    __printf_chk(1, " %s", (char *)v5);
    free((int64_t *)v5);
    int64_t v6 = (int64_t)g36; // 0x4023fc
    int64_t * v7 = (int64_t *)(v6 + 40); // 0x402403
    uint64_t v8 = *v7; // 0x402403
    if (v8 >= *(int64_t *)(v6 + 48)) {
        // 0x4026c0
        __overflow(g36, 10);
    } else {
        // 0x402411
        *v7 = v8 + 1;
        *(char *)v8 = 10;
    }
    // 0x40241c
    int64_t * str2; // 0x402340
    if (g19 != 0) {
        // 0x402470
        __printf_chk(1, dcgettext(NULL, "Directory: ", 5));
        int64_t * v9 = (int64_t *)(v2 + 32);
        __printf_chk(1, "%-29s", (char *)*v9);
        __printf_chk(1, dcgettext(NULL, "Shell: ", 5));
        __printf_chk(1, " %s", (char *)*(int64_t *)(v2 + 40));
        int64_t v10 = (int64_t)g36; // 0x4024da
        int64_t * v11 = (int64_t *)(v10 + 40); // 0x4024e1
        uint64_t v12 = *v11; // 0x4024e1
        if (v12 >= *(int64_t *)(v10 + 48)) {
            // 0x4026df
            __overflow(g36, 10);
            goto lab_0x402425;
        } else {
            // 0x4024ef
            *v11 = v12 + 1;
            *(char *)v12 = 10;
            str2 = v9;
            if (g21 == 0) {
                goto lab_0x402432;
            } else {
                goto lab_0x402507;
            }
        }
    } else {
        goto lab_0x402425;
    }
  lab_0x402425:
    // 0x402425
    if (g21 != 0) {
        // 0x402425
        str2 = (int64_t *)(v2 + 32);
        goto lab_0x402507;
    } else {
        goto lab_0x402432;
    }
  lab_0x402432:;
    // 0x402432
    int64_t * str4; // 0x402340
    if (g20 != 0) {
        // 0x402432
        str4 = (int64_t *)(v2 + 32);
        goto lab_0x4025ce;
    } else {
        goto lab_0x40243f;
    }
  lab_0x402507:;
    int64_t v13 = function_405360((int64_t)strlen((char *)*str2) + 10); // 0x402514
    char * str3 = (char *)v13; // 0x402523
    char * v14 = stpcpy(str3, (char *)*str2); // 0x402523
    *(int64_t *)v14 = 0x63656a6f72702e2f;
    *(int16_t *)((int64_t)v14 + 8) = 116;
    struct _IO_FILE * file = fopen(str3, "r"); // 0x402546
    int64_t data; // bp-1064, 0x402340
    if (file != NULL) {
        // 0x402553
        __printf_chk(1, dcgettext(NULL, "Project: ", 5));
        int32_t n = fread_unlocked(&data, 1, 1024, file); // 0x4025a7
        if (n != 0) {
            fwrite_unlocked(&data, 1, n, g36);
            int32_t v15 = fread_unlocked(&data, 1, 1024, file); // 0x4025a7
            int32_t n2 = v15; // 0x4025af
            while (v15 != 0) {
                // 0x402580
                fwrite_unlocked(&data, 1, n2, g36);
                v15 = fread_unlocked(&data, 1, 1024, file);
                n2 = v15;
            }
        }
        // 0x4025b1
        function_4055f0((int64_t)file, 1);
    }
    // 0x4025b9
    free((int64_t *)v13);
    str4 = str2;
    if (g20 == 0) {
        goto lab_0x40243f;
    } else {
        goto lab_0x4025ce;
    }
  lab_0x40243f:;
    int64_t v16 = (int64_t)g36; // 0x40243f
    int64_t * v17 = (int64_t *)(v16 + 40); // 0x402446
    uint64_t v18 = *v17; // 0x402446
    int64_t result; // 0x402340
    if (v18 >= *(int64_t *)(v16 + 48)) {
        // 0x4026d0
        result = __overflow(g36, 10);
    } else {
        // 0x402454
        *v17 = v18 + 1;
        *(char *)v18 = 10;
        result = v18;
    }
    // 0x40245f
    return result;
  lab_0x4025ce:;
    int64_t v19 = function_405360((int64_t)strlen((char *)*str4) + 7); // 0x4025db
    char * str5 = (char *)v19; // 0x4025ea
    char * v20 = stpcpy(str5, (char *)*str4); // 0x4025ea
    int64_t v21 = (int64_t)v20; // 0x4025ea
    *(int32_t *)v20 = 0x6c702e2f;
    *(int16_t *)(v21 + 4) = 0x6e61;
    *(char *)(v21 + 6) = 0;
    struct _IO_FILE * file2 = fopen(str5, "r"); // 0x40260a
    if (file2 != NULL) {
        // 0x402617
        __printf_chk(1, dcgettext(NULL, "Plan:\n", 5));
        int32_t n3 = fread_unlocked(&data, 1, 1024, file2); // 0x402667
        if (n3 != 0) {
            fwrite_unlocked(&data, 1, n3, g36);
            int32_t v22 = fread_unlocked(&data, 1, 1024, file2); // 0x402667
            int32_t n4 = v22; // 0x40266f
            while (v22 != 0) {
                // 0x402640
                fwrite_unlocked(&data, 1, n4, g36);
                v22 = fread_unlocked(&data, 1, 1024, file2);
                n4 = v22;
            }
        }
        // 0x402671
        function_4055f0((int64_t)file2, 1);
    }
    // 0x402679
    free((int64_t *)v19);
    goto lab_0x40243f;
}
// Address range: 0x4026f0 - 0x402bc4
int64_t function_4026f0(int64_t a1) {
    int64_t v1 = a1 + 8; // 0x402704
    char * v2 = (char *)v1;
    char v3 = *v2; // 0x402704
    int64_t v4; // 0x4026f0
    int64_t v5; // 0x4026f0
    int64_t v6; // bp-520, 0x4026f0
    if (v3 != 47) {
        // 0x402a80
        v6 = 0x7665642f;
        int64_t v7; // bp-515, 0x4026f0
        int64_t v8 = &v7; // 0x402a9b
        v4 = v8;
        v5 = v8;
        if (v3 != 0) {
            goto lab_0x402737;
        } else {
            goto lab_0x402747;
        }
    } else {
        // 0x402711
        v4 = &v6;
        goto lab_0x402737;
    }
  lab_0x402737:;
    int64_t v9 = v4 + 1; // 0x402737
    int64_t v10 = v1 + 1; // 0x40273b
    *(char *)v4 = v3;
    v5 = v9;
    while (v10 < a1 + 40) {
        char v11 = *(char *)v10; // 0x402730
        int64_t v12 = v9; // 0x402735
        v5 = v9;
        if (v11 == 0) {
            // break -> 0x402747
            break;
        }
        v9 = v12 + 1;
        v10++;
        *(char *)v12 = v11;
        v5 = v9;
    }
    goto lab_0x402747;
  lab_0x402747:
    // 0x402747
    *(char *)v5 = 0;
    int64_t v13; // bp-472, 0x4026f0
    int32_t v14 = __xstat(1, (char *)&v6, (struct stat *)&v13); // 0x402754
    char v15 = 63; // 0x40275b
    if (v14 == 0) {
        // 0x402761
        int32_t v16; // 0x4026f0
        v15 = (v16 & 16) == 0 ? 42 : 32;
    }
    int64_t v17 = 0;
    int64_t v18 = a1 + 44; // 0x40277e
    char name; // bp-328, 0x4026f0
    int64_t v19 = &name; // 0x402796
    char * v20 = (char *)v18; // 0x40279e
    __printf_chk(1, "%-8.*s", 32, v20);
    if (g22 != 0) {
        char v21 = *v20; // 0x4027ac
        char * v22 = &name; // 0x4027b9
        if (v21 != 0) {
            int64_t v23 = v19 + 1; // 0x4029b3
            int64_t v24 = v18 + 1; // 0x4029b7
            *(char *)v19 = v21;
            while (a1 + 76 > v24) {
                char v25 = *(char *)v24; // 0x4029a8
                int64_t v26 = v23; // 0x4029ad
                if (v25 == 0) {
                    // break -> 0x4027c0
                    break;
                }
                v23 = v26 + 1;
                v24++;
                *(char *)v26 = v25;
            }
            // 0x4027c0
            v22 = (char *)v23;
        }
        // 0x4027c0
        *v22 = 0;
        struct passwd * v27 = getpwnam(&name); // 0x4027c6
        if (v27 == NULL) {
            // 0x402ad2
            __printf_chk(1, " %19s", dcgettext(NULL, "        ???", 5));
        } else {
            int64_t * v28 = (int64_t *)((int64_t)v27 + 24); // 0x4027d7
            int64_t str = *v28; // 0x4027d7
            char * found_char_pos = strchr((char *)str, 44); // 0x4027e8
            int64_t v29 = str; // 0x4027f5
            if (found_char_pos != NULL) {
                // 0x4027f7
                *found_char_pos = 0;
                v29 = *v28;
            }
            int64_t v30 = function_402210(v29, *(int64_t *)v27); // 0x402804
            __printf_chk(1, " %-19.19s", (char *)v30);
            free((int64_t *)v30);
        }
    }
    // 0x402828
    __printf_chk(1, " %c%-8.*s", v15, 32, v2);
    if (g24 != 0) {
        int64_t v31; // 0x4026f0
        if (v17 != 0) {
            // 0x4029e0
            if (g43 == NULL) {
                // 0x402afc
                time((int32_t *)&g43);
            }
            int64_t v32 = (int64_t)g43 - v17; // 0x4029f0
            v31 = (int64_t)"     ";
            if (v32 >= 60) {
                if (v32 > 0x1517f) {
                    // 0x402b4f
                    __sprintf_chk((char *)&g42, 1, 22, "%lud", 0);
                    v31 = (int64_t)&g42;
                } else {
                    // 0x402a0f
                    __sprintf_chk((char *)&g42, 1, 22, "%02d:%02d", v32 >> 63, 0);
                    v31 = (int64_t)&g42;
                }
            }
        } else {
            // 0x402856
            v31 = (int64_t)dcgettext(NULL, "?????", 5);
        }
        // 0x40286a
        __printf_chk(1, " %-6s", (char *)v31);
    }
    // 0x40287b
    name = (char)*(int32_t *)(a1 + 340);
    struct tm * time_info = localtime((int32_t *)&name); // 0x40288d
    int64_t v33; // 0x4026f0
    if (time_info == NULL) {
        // 0x402ab8
        v33 = function_4030e0((int64_t)name, (int64_t *)&g41);
    } else {
        // 0x40289b
        strftime((char *)&g41, 33, g45, time_info);
        v33 = (int64_t)&g41;
    }
    // 0x4028b9
    __printf_chk(1, " %s", (char *)v33);
    int64_t v34; // 0x4026f0
    int64_t v35; // 0x4026f0
    char * found_char_pos2; // 0x40291a
    if (g17 == 0) {
        goto lab_0x402970;
    } else {
        int64_t v36 = a1 + 76; // 0x4028d7
        char v37 = *(char *)v36; // 0x4028d7
        if (v37 == 0) {
            goto lab_0x402970;
        } else {
            int64_t v38 = v36; // 0x4028f1
            int64_t v39 = v19 + 1; // 0x4028ff
            v38++;
            *(char *)v19 = v37;
            while (a1 + 332 > v38) {
                char v40 = *(char *)v38; // 0x4028f8
                int64_t v41 = v39; // 0x4028fd
                if (v40 == 0) {
                    // break -> 0x40290f
                    break;
                }
                v39 = v41 + 1;
                v38++;
                *(char *)v41 = v40;
            }
            // 0x40290f
            *(char *)v39 = 0;
            found_char_pos2 = strchr(&name, 58);
            if (found_char_pos2 == NULL) {
                // 0x402b12
                if (name != 0) {
                    int64_t v42 = function_402fa0((int64_t *)&name); // 0x402bae
                    v35 = v42;
                    if (v42 != 0) {
                        goto lab_0x402b23;
                    } else {
                        // 0x402b20
                        v35 = v19;
                        goto lab_0x402b23;
                    }
                } else {
                    // 0x402b20
                    v35 = v19;
                    goto lab_0x402b23;
                }
            } else {
                // 0x402928
                *found_char_pos2 = 0;
                if (name != 0) {
                    int64_t v43 = function_402fa0((int64_t *)&name); // 0x402b95
                    v34 = v43;
                    if (v43 != 0) {
                        goto lab_0x402940;
                    } else {
                        // 0x40293d
                        v34 = v19;
                        goto lab_0x402940;
                    }
                } else {
                    // 0x40293d
                    v34 = v19;
                    goto lab_0x402940;
                }
            }
        }
    }
  lab_0x402970:;
    int64_t v44 = (int64_t)g36; // 0x402970
    int64_t * v45 = (int64_t *)(v44 + 40); // 0x402977
    uint64_t v46 = *v45; // 0x402977
    int64_t result; // 0x4026f0
    if (v46 >= *(int64_t *)(v44 + 48)) {
        // 0x402b40
        result = __overflow(g36, 10);
    } else {
        // 0x402985
        *v45 = v46 + 1;
        *(char *)v46 = 10;
        result = v46;
    }
    // 0x402990
    return result;
  lab_0x402b23:
    // 0x402b23
    __printf_chk(1, " %s", (char *)v35);
    int64_t v47 = v35; // 0x402b37
    goto lab_0x402960;
  lab_0x402940:;
    int64_t v48 = (int64_t)found_char_pos2 + 1; // 0x402933
    v35 = v34;
    if (v48 == 0) {
        goto lab_0x402b23;
    } else {
        // 0x402949
        __printf_chk(1, " %s:%s", (char *)v34, (char *)v48);
        v47 = v34;
        goto lab_0x402960;
    }
  lab_0x402960:
    // 0x402960
    if (v47 != v19) {
        // 0x402965
        free((int64_t *)v47);
    }
    goto lab_0x402970;
}
// Address range: 0x402bd0 - 0x402f05
int64_t function_402bd0(int32_t status) {
    // 0x402bd0
    if (status != 0) {
        // 0x402bea
        __fprintf_chk(g38, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402c0f
        exit(status);
        // UNREACHABLE
    }
    // 0x402c16
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [USER]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "\n  -l              produce long format output for the specified USERs\n  -b              omit the user's home directory and shell in long format\n  -h              omit the user's project file in long format\n  -p              omit the user's plan file in long format\n  -s              do short format output, this is the default\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "  -f              omit the line of column headings in short format\n  -w              omit the user's full name in short format\n  -i              omit the user's full name and remote host in short format\n  -q              omit the user's full name, remote host and idle time\n                  in short format\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "\nA lightweight 'finger' program;  print user information.\nThe utmp file will be %s.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402ce5
    bool v2; // 0x402bd0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402d68
    int64_t v6 = *(int64_t *)v5; // 0x402d6c
    int64_t v7 = 6; // 0x402d72
    while (v6 != 0) {
        int64_t v8 = (int64_t)"pinky";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402d7e
        char v11 = *(char *)v9; // 0x402d7e
        char v12 = v11; // 0x402d7e
        bool v13 = false; // 0x402d7e
        while (v10 == v11) {
            // 0x402d74
            v7--;
            int64_t v14 = v9 + v3; // 0x402d7e
            int64_t v15 = v8 + v3; // 0x402d7e
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
            // break -> 0x402d8a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x402d8a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402e9c;
        } else {
            // 0x402e86
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402edb
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402dec;
            } else {
                goto lab_0x402e9c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402dec;
        } else {
            // 0x402dd2
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402edb
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402dec;
            } else {
                goto lab_0x402dec;
            }
        }
    }
  lab_0x402e9c:
    // 0x402e9c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402e2c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402c0f
    exit(status);
    // UNREACHABLE
  lab_0x402dec:
    // 0x402dec
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402e2c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402c0f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402f10 - 0x402f9e
int64_t function_402f10(int64_t node, int64_t * a2) {
    // 0x402f10
    *(int32_t *)&g46 = 2;
    struct addrinfo * addr_info = NULL; // bp-32, 0x402f2f
    int32_t v1 = getaddrinfo((char *)node, NULL, (struct addrinfo *)&g46, &addr_info); // 0x402f3d
    if (v1 != 0) {
        // 0x402f88
        if (a2 == NULL) {
            // 0x402f78
            return 0;
        }
        // 0x402f8f
        *(int32_t *)a2 = v1;
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)addr_info + 32); // 0x402f4b
    char * v3 = strdup((char *)(v2 == 0 ? node : v2)); // 0x402f57
    if (a2 != NULL && v3 == NULL) {
        // 0x402f69
        *(int32_t *)a2 = -10;
    }
    // 0x402f70
    freeaddrinfo(addr_info);
    // 0x402f78
    return (int64_t)v3;
}
// Address range: 0x402fa0 - 0x402faa
int64_t function_402fa0(int64_t * a1) {
    // 0x402fa0
    return function_402f10((int64_t)a1, (int64_t *)&g47);
}
// Address range: 0x402fb0 - 0x402fbb
int64_t function_402fb0(void) {
    // 0x402fb0
    return (int64_t)gai_strerror(g47);
}
// Address range: 0x402fc0 - 0x402fc8
int64_t function_402fc0(int64_t a1) {
    // 0x402fc0
    g49 = a1;
    int64_t result; // 0x402fc0
    return result;
}
// Address range: 0x402fd0 - 0x402fd8
int64_t function_402fd0(int64_t a1) {
    // 0x402fd0
    g48 = a1;
    int64_t result; // 0x402fd0
    return result;
}
// Address range: 0x402fe0 - 0x40307e
int64_t function_402fe0(void) {
    // 0x402fe0
    int64_t v1; // 0x402fe0
    if ((int32_t)v1 == 0) {
        // 0x40301c
        int64_t result; // 0x402fe0
        return result;
    }
    int32_t * err_num = __errno_location(); // 0x402ff6
    if (g48 != 0) {
        // 0x403007
        if (*err_num == 32) {
            int64_t result2 = (int64_t)err_num; // 0x402ff6
            if ((int32_t)result2 == 0) {
                // 0x40301c
                return result2;
            }
            // 0x40305e
            _exit(g26);
            // UNREACHABLE
        }
    }
    char * v2 = dcgettext(NULL, "write error", 5); // 0x40302f
    if (g49 == 0) {
        // 0x403069
        error(0, *err_num, "%s", v2);
    } else {
        // 0x403043
        error(0, *err_num, "%s: %s", (char *)function_404bf0((int64_t)g49), v2);
    }
    // 0x40305e
    _exit(g26);
    // UNREACHABLE
}
// Address range: 0x403080 - 0x4030de
int64_t function_403080(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x403086
    if (locale == NULL) {
        // 0x4030b3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x403086
    bool v2; // 0x403080
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g3; // 0x403080
    int64_t v5 = v1; // 0x403080
    int64_t v6 = 2; // 0x4030a5
    unsigned char v7 = *(char *)v5; // 0x4030a5
    char v8 = *(char *)v4; // 0x4030a5
    char v9 = v8; // 0x4030a5
    bool v10 = false; // 0x4030a5
    while (v7 == v8) {
        // 0x403098
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4030b1
    int64_t v13 = v1; // 0x4030b1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4030b3
        return 0;
    }
    int64_t v14 = 6; // 0x4030b1
    unsigned char v15 = *(char *)v13; // 0x4030cd
    char v16 = *(char *)v12; // 0x4030cd
    char v17 = v16; // 0x4030cd
    bool v18 = false; // 0x4030cd
    while (v15 == v16) {
        // 0x4030c0
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
// Address range: 0x4030e0 - 0x40317c
int64_t function_4030e0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x4030e0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403105
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x403136
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x403158
    int64_t v4 = v2 - 1; // 0x403168
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x403170
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x403180 - 0x403219
int64_t function_403180(int64_t str) {
    // 0x403180
    if (str == 0) {
        // 0x4031f9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g38);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40318e
    int64_t result = (int64_t)found_char_pos; // 0x40318e
    if (found_char_pos == NULL) {
        // 0x4031e9
        g50 = str;
        g37 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403198
    if (v1 - str < 7) {
        // 0x4031e9
        g50 = str;
        g37 = str;
        return result;
    }
    // 0x4031a8
    bool v2; // 0x403180
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403180
    int64_t v5 = result - 6; // 0x403180
    int64_t v6 = 7; // 0x4031b6
    unsigned char v7 = *(char *)v5; // 0x4031b6
    char v8 = *(char *)v4; // 0x4031b6
    char v9 = v8; // 0x4031b6
    bool v10 = false; // 0x4031b6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4031c0
    int64_t v13 = v1; // 0x4031c0
    int64_t v14 = 3; // 0x4031c0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4031e9
        g50 = str;
        g37 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4031d2
    char v16 = *(char *)v12; // 0x4031d2
    char v17 = v16; // 0x4031d2
    bool v18 = false; // 0x4031d2
    while (v15 == v16) {
        // 0x4031c2
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
    int64_t v20 = v1; // 0x4031dc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4031de
        v20 = result + 4;
        g35 = v20;
    }
    // 0x4031e9
    g50 = v20;
    g37 = v20;
    return result;
}
// Address range: 0x403220 - 0x403312
int64_t function_403220(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403234
    int64_t result = (int64_t)v1; // 0x403234
    if (result != a1) {
        // 0x403241
        return result;
    }
    int64_t v2 = function_4067d0(); // 0x403250
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403306
    if (v3 == 85) {
        // 0x403260
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4032f8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x40328e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x40329b
        // 0x403241
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4032f8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x4032dd
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x4032ea
    // 0x403241
    return result4;
}
// Address range: 0x403320 - 0x403377
int64_t function_403320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403320
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403368
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403377 - 0x404541
int64_t function_403377(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4033c1
    int64_t v3 = 0; // 0x4033c1
    int64_t v4; // 0x403377
    int64_t v5; // 0x403377
    int64_t v6; // 0x403377
    int64_t v7; // 0x403377
    int64_t v8; // 0x403377
    int64_t v9; // 0x403377
    int64_t v10; // 0x403377
    int64_t v11; // 0x403377
    int64_t v12; // 0x403377
    int64_t v13; // 0x403377
    int64_t v14; // 0x403377
    int64_t v15; // 0x403377
    int64_t v16; // 0x403377
    int64_t v17; // 0x403377
    int64_t v18; // 0x403377
    int64_t result; // 0x403377
    int64_t v19; // 0x403377
    int32_t wc; // bp+132, 0x403377
    int64_t ps; // bp+136, 0x403377
    char v20; // 0x403930
    int64_t v21; // 0x403930
    int64_t v22; // 0x403cd8
    int64_t v23; // 0x403377
    int64_t v24; // 0x403cf7
    int32_t v25; // 0x403377
    while (true) {
      lab_0x4033c8_2:
        // 0x4033c8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403377
        int64_t v27; // 0x4033fc
        while (true) {
          lab_0x4033c8:
            // 0x4033c8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4033d3
            if (v15 == -1) {
                // 0x4033d5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4033e3
            if (v28) {
                // break (via goto) -> 0x403b48
                goto lab_0x403b48;
            }
            // 0x4033ec
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
                    // 0x4039db
                    if (v25 % 2 == 0) {
                        goto lab_0x403521;
                    }
                    // 0x403dfd
                    v26 = v5 + 1;
                    goto lab_0x4033c8;
                }
                case 7: {
                    goto lab_0x403521;
                }
                case 8: {
                    goto lab_0x403521;
                }
                case 9: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403521;
                }
                case 12: {
                    goto lab_0x403521;
                }
                case 13: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4034ed;
                }
                case 36: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403521;
                }
                case 38: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403521;
                }
                case 44: {
                    goto lab_0x403521;
                }
                case 45: {
                    goto lab_0x403521;
                }
                case 46: {
                    goto lab_0x403521;
                }
                case 47: {
                    goto lab_0x403521;
                }
                case 48: {
                    goto lab_0x403521;
                }
                case 49: {
                    goto lab_0x403521;
                }
                case 50: {
                    goto lab_0x403521;
                }
                case 51: {
                    goto lab_0x403521;
                }
                case 52: {
                    goto lab_0x403521;
                }
                case 53: {
                    goto lab_0x403521;
                }
                case 54: {
                    goto lab_0x403521;
                }
                case 55: {
                    goto lab_0x403521;
                }
                case 56: {
                    goto lab_0x403521;
                }
                case 57: {
                    goto lab_0x403521;
                }
                case 58: {
                    goto lab_0x403521;
                }
                case 59: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403521;
                }
                case 66: {
                    goto lab_0x403521;
                }
                case 67: {
                    goto lab_0x403521;
                }
                case 68: {
                    goto lab_0x403521;
                }
                case 69: {
                    goto lab_0x403521;
                }
                case 70: {
                    goto lab_0x403521;
                }
                case 71: {
                    goto lab_0x403521;
                }
                case 72: {
                    goto lab_0x403521;
                }
                case 73: {
                    goto lab_0x403521;
                }
                case 74: {
                    goto lab_0x403521;
                }
                case 75: {
                    goto lab_0x403521;
                }
                case 76: {
                    goto lab_0x403521;
                }
                case 77: {
                    goto lab_0x403521;
                }
                case 78: {
                    goto lab_0x403521;
                }
                case 79: {
                    goto lab_0x403521;
                }
                case 80: {
                    goto lab_0x403521;
                }
                case 81: {
                    goto lab_0x403521;
                }
                case 82: {
                    goto lab_0x403521;
                }
                case 83: {
                    goto lab_0x403521;
                }
                case 84: {
                    goto lab_0x403521;
                }
                case 85: {
                    goto lab_0x403521;
                }
                case 86: {
                    goto lab_0x403521;
                }
                case 87: {
                    goto lab_0x403521;
                }
                case 88: {
                    goto lab_0x403521;
                }
                case 89: {
                    goto lab_0x403521;
                }
                case 90: {
                    goto lab_0x403521;
                }
                case 91: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403521;
                }
                case 94: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403521;
                }
                case 96: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403521;
                }
                case 98: {
                    goto lab_0x403521;
                }
                case 99: {
                    goto lab_0x403521;
                }
                case 100: {
                    goto lab_0x403521;
                }
                case 101: {
                    goto lab_0x403521;
                }
                case 102: {
                    goto lab_0x403521;
                }
                case 103: {
                    goto lab_0x403521;
                }
                case 104: {
                    goto lab_0x403521;
                }
                case 105: {
                    goto lab_0x403521;
                }
                case 106: {
                    goto lab_0x403521;
                }
                case 107: {
                    goto lab_0x403521;
                }
                case 108: {
                    goto lab_0x403521;
                }
                case 109: {
                    goto lab_0x403521;
                }
                case 110: {
                    goto lab_0x403521;
                }
                case 111: {
                    goto lab_0x403521;
                }
                case 112: {
                    goto lab_0x403521;
                }
                case 113: {
                    goto lab_0x403521;
                }
                case 114: {
                    goto lab_0x403521;
                }
                case 115: {
                    goto lab_0x403521;
                }
                case 116: {
                    goto lab_0x403521;
                }
                case 117: {
                    goto lab_0x403521;
                }
                case 118: {
                    goto lab_0x403521;
                }
                case 119: {
                    goto lab_0x403521;
                }
                case 120: {
                    goto lab_0x403521;
                }
                case 121: {
                    goto lab_0x403521;
                }
                case 122: {
                    goto lab_0x403521;
                }
                case 123: {
                    goto lab_0x4034c5;
                }
                case 124: {
                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4034c5;
                }
                case 126: {
                    goto lab_0x4034ed;
                }
                default: {
                    goto lab_0x4038c5;
                }
            }
        }
      lab_0x4038c5:
        if (v23 != 1) {
            // 0x403c30
            ps = 0;
            int64_t len = v15; // 0x403c40
            if (v15 == -1) {
                // 0x403c42
                len = strlen((char *)str);
            }
            // 0x403c6e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403ccf:
                // 0x403ccf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403cd4
                int64_t v30 = v29 + str;
                v24 = function_4064e0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40424a_2;
                    }
                    case -1: {
                        goto lab_0x40424a_2;
                    }
                    case -2: {
                        // 0x40432d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404367
                            v19 = v18;
                            int64_t v31 = v18; // 0x40436a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404377
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404370
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40424a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40424a_2;
                    }
                    case 1: {
                        goto lab_0x403ca0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403d4c
                        char v34 = *(char *)v33; // 0x403d5d
                        unsigned char v35; // 0x403377
                        if (v34 < 125) {
                            // 0x403d68
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403d7f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403320(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403d50
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403d5d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403d68
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403d7f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403320(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403d50
                            v33++;
                        }
                        goto lab_0x403ca0;
                    }
                }
            }
            goto lab_0x40424a_2;
        } else {
            // 0x403914
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403521;
        }
    }
  lab_0x403b48:
    // 0x403b48
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40444a
        if (v8 > result) {
            // 0x404453
            *(char *)(v12 + result) = 0;
        }
        // 0x403777
        return result;
    }
    return function_403320(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403521:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403530
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40373a_2;
        }
    }
    int64_t v39 = result; // 0x403631
    char v40 = v20; // 0x403631
    int64_t v41 = v38; // 0x403631
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403631
    int64_t v43 = v36; // 0x403631
    goto lab_0x4035ad;
  lab_0x40373a_2:
    // 0x403777
    return function_403320(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40424a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403521;
    } else {
        uint64_t v49 = v46 + v5; // 0x403e1e
        int64_t v50 = v5 + 1; // 0x403f01
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403f08
        char v52 = v20; // 0x403f08
        int64_t v53 = result; // 0x403f08
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403ed1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403ed5
            int64_t v56 = v54 + 1; // 0x403eda
            int64_t v57 = v51 + 1; // 0x403f01
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403ecc
                v54 = v56;
                if (v47 > v54) {
                    // 0x403ed1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403ed5
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
        goto lab_0x4035ad;
    }
  lab_0x403ca0:
    // 0x403ca0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403cbf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403cc2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40424a
        goto lab_0x40424a_2;
    }
    goto lab_0x403ccf;
  lab_0x4034ed:
    // 0x4034ed
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40373a_2;
    }
    goto lab_0x403521;
  lab_0x4034c5:;
    bool v60 = v15 == 1; // 0x4034d0
    if (v15 == -1) {
        // 0x4034d2
        v60 = *(char *)v1 == 0;
    }
    // 0x4034de
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403521;
    } else {
        goto lab_0x4034ed;
    }
  lab_0x4035ad:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4035b2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4035b6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4033c8_2;
}
// Address range: 0x404550 - 0x4046ee
int64_t function_404550(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404552
    int32_t * v3 = __errno_location(); // 0x40456c
    int64_t v4 = (int64_t)g28; // 0x404571
    int32_t v5 = *v3; // 0x40457b
    int64_t v6 = v4; // 0x404591
    if (v2 >= (int64_t)*(int32_t *)&g31) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4046e9
            function_4055b0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4045a0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4045a7
        int64_t v9; // 0x404550
        if (g28 == &g29) {
            int64_t v10 = function_4053c0(0, v8); // 0x4046ca
            int128_t v11 = __asm_movdqa(*(int128_t *)&g29); // 0x4046cf
            *(int64_t *)&g28 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4053c0(v4, v8); // 0x4045bb
            *(int64_t *)&g28 = v12;
            v9 = v12;
        }
        // 0x4045ca
        v6 = v9;
        int32_t v13 = *(int32_t *)&g31; // 0x4045ca
        int32_t v14 = v7; // 0x4045d1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g31 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404601
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40460b
    int64_t * v17 = (int64_t *)v15; // 0x40460e
    uint64_t v18 = *v17; // 0x40460e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404611
    int64_t result = *v19; // 0x404611
    int64_t v20; // 0x404550
    uint64_t v21 = function_403320(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404634
    if (v18 > v21) {
        // 0x4046ab
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404647
    *v17 = v22;
    if (result != (int64_t)&g51) {
        // 0x404657
        free((int64_t *)result);
    }
    int64_t result2 = function_405360(v22); // 0x404671
    *v19 = result2;
    int64_t v23; // 0x404550
    function_403320(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4046ab
    *v3 = v5;
    return result2;
}
// Address range: 0x4046f0 - 0x404724
int64_t function_4046f0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4046f7
    int64_t result = function_405560(a1 == 0 ? (int64_t)&g52 : a1, 56); // 0x404716
    return result;
}
// Address range: 0x404730 - 0x40473f
int64_t function_404730(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g52 : a1); // 0x40473c
    return result;
}
// Address range: 0x404740 - 0x40474f
int64_t function_404740(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g52 : a1; // 0x404748
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g52;
}
// Address range: 0x404750 - 0x404783
int64_t function_404750(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g52 + 8 : a1 + 8; // 0x404769
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40476e
    uint32_t v3 = *v2; // 0x40476e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404772
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404790 - 0x4047a3
int64_t function_404790(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g52 + 4 : a1 + 4); // 0x40479c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4047b0 - 0x4047db
int64_t function_4047b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g52 : a1; // 0x4047b8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4047d5
        abort();
        // UNREACHABLE
    }
    // 0x4047cc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g52;
}
// Address range: 0x4047e0 - 0x404852
int64_t function_4047e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g52 : a5; // 0x404802
    int32_t * v2 = __errno_location(); // 0x40480b
    uint32_t v3 = *(int32_t *)v1; // 0x40482b
    int64_t result = function_403320(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40483a
    return result;
}
// Address range: 0x404860 - 0x404941
int64_t function_404860(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g52 : a4; // 0x404882
    int32_t * v2 = __errno_location(); // 0x404888
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4048a7
    int32_t * v4 = (int32_t *)v1; // 0x4048aa
    int64_t v5 = function_403320(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4048c5
    int64_t v6 = v5 + 1; // 0x4048ca
    int64_t result = function_405360(v6); // 0x4048df
    function_403320(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404924
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40492d
    return result;
}
// Address range: 0x404950 - 0x40495a
int64_t function_404950(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404950
    return function_404860(a1, a2, 0, a3);
}
// Address range: 0x404960 - 0x4049f5
int64_t function_404960(void) {
    uint32_t v1 = *(int32_t *)&g31; // 0x404960
    int64_t v2 = v1; // 0x404960
    int64_t v3 = v2; // 0x404974
    if (v1 >= 2) {
        int64_t v4 = &g31;
        int64_t v5 = v4 + 16; // 0x404993
        free((int64_t *)*(int64_t *)v4);
        v3 = &g62;
        while (v5 != (int64_t)g28 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404990
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g62;
        }
    }
    int64_t v6 = v3; // 0x4049ad
    if (g29 != 0x60a400) {
        // 0x4049af
        free((int64_t *)g29);
        g29 = 256;
        *(int64_t *)&g30 = (int64_t)&g51;
        v6 = &g62;
    }
    int64_t result = v6; // 0x4049d1
    if (g28 != &g29) {
        // 0x4049d3
        free(g28);
        *(int64_t *)&g28 = (int64_t)&g29;
        result = &g62;
    }
    // 0x4049e6
    *(int32_t *)&g31 = 1;
    return result;
}
// Address range: 0x404a00 - 0x404a11
int64_t function_404a00(void) {
    // 0x404a00
    int64_t v1; // 0x404a00
    return function_404550(v1, v1, -1, (int64_t *)&g52);
}
// Address range: 0x404a20 - 0x404a2a
int64_t function_404a20(void) {
    // 0x404a20
    int64_t v1; // 0x404a20
    return function_404550(v1, v1, v1, (int64_t *)&g52);
}
// Address range: 0x404a30 - 0x404a46
int64_t function_404a30(int64_t a1) {
    // 0x404a30
    return function_404550(0, a1, -1, (int64_t *)&g52);
}
// Address range: 0x404a50 - 0x404a62
int64_t function_404a50(int64_t a1, int64_t a2) {
    // 0x404a50
    return function_404550(0, a1, a2, (int64_t *)&g52);
}
// Address range: 0x404a70 - 0x404ad8
int64_t function_404a70(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404a80
    return function_404550((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404ae0 - 0x404b44
int64_t function_404ae0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404af0
    return function_404550((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404b50 - 0x404b5c
int64_t function_404b50(int64_t a1, int64_t a2) {
    // 0x404b50
    return function_404a70(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404b60 - 0x404b6f
int64_t function_404b60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404b60
    return function_404ae0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404b70 - 0x404be0
int64_t function_404b70(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g52); // 0x404b7d
    int128_t v2 = __asm_movdqa(g53); // 0x404b85
    int128_t v3 = __asm_movdqa(g54); // 0x404b8d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404ba2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404bb8
    uint32_t v6 = *v5; // 0x404bb8
    uint32_t v7 = (int32_t)a3 % 32; // 0x404bbd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404550(0, a1, a2, &v4);
}
// Address range: 0x404be0 - 0x404bed
int64_t function_404be0(int64_t a1, int64_t a2) {
    // 0x404be0
    return function_404b70(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404bf0 - 0x404c01
int64_t function_404bf0(int64_t a1) {
    // 0x404bf0
    return function_404b70(a1, -1, 58);
}
// Address range: 0x404c10 - 0x404c1a
int64_t function_404c10(void) {
    // 0x404c10
    int64_t v1; // 0x404c10
    return function_404b70(v1, v1, 58);
}
// Address range: 0x404c20 - 0x404c8e
int64_t function_404c20(int32_t a1, int64_t a2, char * a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404c3a
    return function_404550((int64_t)a1, (int64_t)a3, -1, &v1);
}
// Address range: 0x404c90 - 0x404cfc
int64_t function_404c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g52); // 0x404c97
    int128_t v2 = __asm_movdqa(g53); // 0x404c9f
    int128_t v3 = __asm_movdqa(g54); // 0x404ca7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404cc9
    if (a2 == 0 || a3 == 0) {
        // 0x404cf7
        abort();
        // UNREACHABLE
    }
    // 0x404cda
    return function_404550(a1, a4, a5, &v4);
}
// Address range: 0x404d00 - 0x404d09
int64_t function_404d00(void) {
    // 0x404d00
    int64_t v1; // 0x404d00
    return function_404c90(v1, v1, v1, v1, -1);
}
// Address range: 0x404d10 - 0x404d27
int64_t function_404d10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404d10
    return function_404c90(0, a1, a2, a3, -1);
}
// Address range: 0x404d30 - 0x404d43
int64_t function_404d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404d30
    return function_404c90(0, a1, a2, a3, a4);
}
// Address range: 0x404d50 - 0x404d5a
int64_t function_404d50(void) {
    // 0x404d50
    int64_t v1; // 0x404d50
    return function_404550(v1, v1, v1, &g27);
}
// Address range: 0x404d60 - 0x404d72
int64_t function_404d60(int64_t a1, int64_t a2) {
    // 0x404d60
    return function_404550(0, a1, a2, &g27);
}
// Address range: 0x404d80 - 0x404d91
int64_t function_404d80(void) {
    // 0x404d80
    int64_t v1; // 0x404d80
    return function_404550(v1, v1, -1, &g27);
}
// Address range: 0x404da0 - 0x404db6
int64_t function_404da0(int64_t a1) {
    // 0x404da0
    return function_404550(0, a1, -1, &g27);
}
// Address range: 0x404dc0 - 0x40519d
int64_t function_404dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404e58
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404ddc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404df6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404e3b
    if (a6 < 10) {
        // 0x404e4a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404f42
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4051a0 - 0x4051c0
int64_t function_4051a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4051a0
    if (a5 == 0) {
        // 0x4051bb
        return function_404dc0(a1, a2, a3, a4, a5, 0, (int64_t)&g62);
    }
    int64_t v1 = 0; // 0x4051a7
    v1++;
    int64_t v2 = v1; // 0x4051b9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4051b0
        v1++;
        v2 = v1;
    }
    // 0x4051bb
    return function_404dc0(a1, a2, a3, a4, a5, v2, (int64_t)&g62);
}
// Address range: 0x4051c0 - 0x405220
int64_t function_4051c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4051c0
    int64_t v3 = &v2; // 0x4051c0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4051f3
    int64_t v6; // 0x4051dd
    int64_t * v7; // 0x4051fb
    int64_t v8; // 0x4051fb
    int64_t v9; // 0x405207
    if (v5 < 48) {
        // 0x4051d0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405213
            break;
        }
    } else {
        // 0x4051fb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405213
            break;
        }
    }
    int64_t v10 = 10; // 0x4051f1
    while (v4 != 9) {
        // 0x4051e9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4051d0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405213
                break;
            }
        } else {
            // 0x4051fb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405213
                break;
            }
        }
        // 0x4051e9
        v10 = 10;
    }
    // 0x405213
    return function_404dc0(a1, a2, a3, a4, v3, v10, (int64_t)&g62);
}
// Address range: 0x405220 - 0x4052dc
int64_t function_405220(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405220
    int64_t v1; // bp-168, 0x405220
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405220
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405220
    int64_t v8; // 0x405220
    int64_t v9; // bp-56, 0x405220
    int64_t v10; // 0x405285
    int64_t v11; // 0x4052a9
    if ((int32_t)v6 < 48) {
        // 0x405270
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4052c0
            break;
        }
    } else {
        // 0x4052a2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4052c0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40529a
    int64_t v13 = 10; // 0x40529a
    while (v5 != 9) {
        // 0x40529c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405270
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4052c0
                break;
            }
        } else {
            // 0x4052a2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4052c0
                break;
            }
        }
        // 0x405292
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4052c0
    int64_t v14; // bp-136, 0x405220
    int64_t result = function_404dc0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g62); // 0x4052cf
    return result;
}
// Address range: 0x4052e0 - 0x405354
int64_t function_4052e0(int64_t a1) {
    // 0x4052e0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405343
    return fputs_unlocked(v1, g36);
}
// Address range: 0x405360 - 0x40537a
int64_t function_405360(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405364
    if (size != 0 != (mem == NULL)) {
        // 0x405373
        return (int64_t)mem;
    }
    // 0x405375
    function_4055b0(size);
    // UNREACHABLE
}
// Address range: 0x405380 - 0x4053a1
int64_t function_405380(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405383
    int64_t v2 = v1; // 0x405383
    if (v2 < 0) {
        // 0x40539b
        function_4055b0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405399
        return function_405360(v2);
    }
    // 0x40539b
    function_4055b0(v2);
    // UNREACHABLE
}
// Address range: 0x4053b0 - 0x4053b2
int64_t function_4053b0(void) {
    // 0x4053b0
    int64_t v1; // 0x4053b0
    return function_405360(v1);
}
// Address range: 0x4053c0 - 0x4053f6
int64_t function_4053c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4053e8
        free(v1);
        return (int32_t)&g62 ^ (int32_t)&g62;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4053d1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4053e0
        return (int64_t)mem;
    }
    // 0x4053f1
    function_4055b0(a1);
    // UNREACHABLE
}
// Address range: 0x405400 - 0x405421
int64_t function_405400(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405403
    int64_t v2 = v1; // 0x405403
    if (v2 < 0) {
        // 0x40541b
        function_4055b0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405419
        return function_4053c0(a1, v2);
    }
    // 0x40541b
    function_4055b0(a1);
    // UNREACHABLE
}
// Address range: 0x405430 - 0x4054b6
int64_t function_405430(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40548b
            function_4055b0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4053c0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405473
    if (a2 == 0) {
        // 0x405498
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405478
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40548b
        function_4055b0(a1);
        // UNREACHABLE
    }
    // 0x40545a
    *(int64_t *)a2 = v2;
    return function_4053c0(a1, v2 * a3);
}
// Address range: 0x4054c0 - 0x405510
int64_t function_4054c0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4054c0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40550a
            function_4055b0(a1);
            // UNREACHABLE
        }
        // 0x4054e2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4053c0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4054f5
        *(int64_t *)a2 = 128;
        return function_4053c0(0, 128);
    }
    // 0x405508
    if (a2 < 0) {
        // 0x40550a
        function_4055b0(a1);
        // UNREACHABLE
    }
    // 0x4054e2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4053c0(a1, v1);
}
// Address range: 0x405510 - 0x405527
int64_t function_405510(int64_t a1, int64_t a2) {
    // 0x405510
    return (int64_t)memset((int64_t *)function_405360(a1), 0, (int32_t)a1);
}
// Address range: 0x405530 - 0x40555e
int64_t function_405530(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405537
    if ((int64_t)v1 < 0) {
        // 0x405559
        function_4055b0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405559
        function_4055b0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40554a
    if (mem != NULL) {
        // 0x405554
        return (int64_t)mem;
    }
    // 0x405559
    function_4055b0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405560 - 0x405588
int64_t function_405560(int64_t a1, int64_t a2) {
    int64_t v1 = function_405360(a2); // 0x40556f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405590 - 0x4055a3
int64_t function_405590(int64_t str) {
    // 0x405590
    return function_405560(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4055b0 - 0x4055e1
int64_t function_4055b0(int64_t a1) {
    // 0x4055b0
    error(g26, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4055f0 - 0x40566b
int64_t function_4055f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4055f7
    if (fileno(stream) < 0) {
        // 0x405657
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40560a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40563b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405657
            return fclose(stream);
        }
    }
    // 0x40560c
    if ((int32_t)function_405670(a1, v1) == 0) {
        // 0x405657
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405618
    int32_t v3 = *v2; // 0x405620
    int64_t result = fclose(stream); // 0x40562e
    if (v3 != 0) {
        // 0x405660
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405630
    return result;
}
// Address range: 0x405670 - 0x4056b0
int64_t function_405670(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40568a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40568a
        return fflush(stream);
    }
    // 0x405698
    function_4056b0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4056b0 - 0x405707
int64_t function_4056b0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4056b0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4056ba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4056eb
    int64_t result = -1; // 0x4056f4
    if (v1 != -1) {
        // 0x4056f6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405702
    return result;
}
// Address range: 0x405710 - 0x4057ef
int64_t function_405710(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40571c
    uint32_t v2 = *v1; // 0x40571c
    int64_t v3 = a2 & 0xffffffff; // 0x405721
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405724
    uint64_t v5 = (int64_t)*v4; // 0x405724
    int64_t v6; // 0x405792
    if (v3 <= v5) {
      lab_0x40578c_2:
        // 0x40578c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405712
    int64_t v8 = v2; // 0x405710
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40578c
        goto lab_0x40578c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405748
    int64_t v17; // 0x405756
    int64_t * v18; // 0x405770
    int64_t * v19; // 0x405773
    int64_t v20; // 0x40577e
    int64_t v21; // 0x405756
    while ((v16 & 0xffffffff) > v10) {
        // 0x405753
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405770
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405787
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40578c
            goto lab_0x40578c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40578c
            goto lab_0x40578c_2;
        }
        // 0x405742
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4057cb
    int64_t * v23 = (int64_t *)v22; // 0x4057d0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4057d3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4057d0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4057e7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40573d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40578c
            goto lab_0x40578c_2;
        }
        // 0x405742
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405753
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405770
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405787
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40578c
                goto lab_0x40578c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40578c
                goto lab_0x40578c_2;
            }
            // 0x405742
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4057b0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4057d0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4057e7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40578c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4057f0 - 0x405e0c
int64_t function_4057f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40580f
    int64_t v2 = *v1; // 0x40580f
    char * str2 = (char *)v2; // 0x40581c
    char c = *str2; // 0x40581c
    int64_t v3 = v2; // 0x405848
    int64_t v4 = 0; // 0x4057f0
    int32_t v5; // 0x4057f0
    int64_t v6; // 0x4057f0
    int64_t v7; // 0x4057f0
    int64_t v8; // 0x4057f0
    int64_t v9; // 0x4057f0
    int64_t v10; // 0x4057f0
    int64_t v11; // 0x4057f0
    int64_t v12; // 0x4057f0
    int64_t v13; // 0x4057f0
    int64_t str3; // 0x4057f0
    int64_t v14; // 0x4057f0
    int64_t v15; // 0x4057f0
    int64_t v16; // 0x4057f0
    int64_t v17; // 0x4057f0
    int32_t v18; // 0x4057f0
    int32_t v19; // 0x4057f0
    int32_t v20; // 0x4057f0
    int32_t v21; // 0x4057f0
    int32_t v22; // 0x4057f0
    int32_t v23; // 0x4057f0
    int32_t v24; // 0x4057f0
    int32_t v25; // 0x4057f0
    int32_t v26; // 0x4057f0
    int32_t v27; // 0x4057f0
    int32_t v28; // 0x4057f0
    int32_t v29; // 0x4057f0
    int64_t nmemb; // 0x4057f0
    int64_t v30; // 0x4057f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40584c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405848
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405858
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40585e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405828
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40588c
                int64_t v34; // 0x4057f0
                int64_t v35; // 0x4057f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405895
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405a10;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4058a6
                int64_t v37 = *(int64_t *)v36; // 0x4058aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405880
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405895
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405a10;
                        }
                    }
                    // 0x4058a6
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
                  lab_0x4058f6:
                    // 0x4058f6
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
                        goto lab_0x405950;
                    } else {
                        if (v11 == 0) {
                            // 0x405ac0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405950;
                        } else {
                            if (v39 == 0) {
                                // 0x405a70
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40591a;
                                } else {
                                    // 0x405a7c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40591a;
                                    } else {
                                        // 0x405a8a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40591a;
                                        } else {
                                            goto lab_0x405950;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40591a;
                            }
                        }
                    }
                }
              lab_0x405961:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405b36
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405ce2
                            flockfile(g38);
                            int64_t v41 = *v1; // 0x405d02
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405d4f
                            int64_t v43 = (int64_t)g38;
                            int64_t v44 = v43; // 0x405d69
                            int64_t v45; // 0x405d6b
                            if (*(char *)v42 != 0) {
                                // 0x405d6b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g38;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405d63
                            while (v17 + nmemb != v42) {
                                // 0x405d65
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405d6b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g38;
                                }
                                // 0x405d58
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405d90
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g38);
                            v40 = *v1;
                        } else {
                            // 0x405b44
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405c9f
                        free((int64_t *)v17);
                    }
                    // 0x405b99
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405bb0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405a5e
                    return 63;
                }
                // 0x405980
                v5 = v39;
                if (v13 != 0) {
                    // 0x405a04
                    v35 = v13;
                    v34 = v25;
                  lab_0x405a10:;
                    int32_t * v49 = (int32_t *)a7; // 0x405a20
                    uint32_t v50 = *v49; // 0x405a20
                    int64_t v51 = v50; // 0x405a20
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405a2a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405a33
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405c5f
                                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405c0a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405a5e
                            return 63;
                        }
                        // 0x405aa8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405dbf
                                    __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405cbd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405cd0
                                // 0x405a5e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405bce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405be2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405a4b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405a4e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405a52
                    int64_t result = v59; // 0x405a58
                    if (v58 != 0) {
                        // 0x405a5a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405a5e
                    return result;
                }
            } else {
                // 0x40585e
                v5 = v32;
            }
            // break -> 0x405985
            break;
        }
    }
    // 0x405985
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40599d
        if (*(char *)(v60 + 1) != 45) {
            // 0x4059a7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405a5e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405ae9
        __fprintf_chk(g38, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4059d6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4059e6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405950:
    // 0x405950
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405950
    int64_t v63 = *(int64_t *)v62; // 0x405954
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405961
        goto lab_0x405961;
    }
    goto lab_0x4058f6;
  lab_0x40591a:
    // 0x40591a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4057f0
    int32_t v65; // 0x4057f0
    int32_t v66; // 0x4057f0
    if (v27 != 0) {
        goto lab_0x405950;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405ad0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405950;
            } else {
                goto lab_0x405941;
            }
        } else {
            // 0x405935
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405c2c
                int64_t v67 = (int64_t)mem; // 0x405c2c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405950;
                } else {
                    // 0x405c3f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405941;
                }
            } else {
                goto lab_0x405941;
            }
        }
    }
  lab_0x405941:
    // 0x405941
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405950;
}
// Address range: 0x405e10 - 0x4063d6
int64_t function_405e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405e31
    if (v3 < 1) {
        // 0x405fee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405e2d
    int32_t v5 = *(int32_t *)a7; // 0x405e39
    uint64_t v6 = a1 & 0xffffffff; // 0x405e3b
    int64_t v7 = v2; // 0x405e40
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405e43
    *v8 = 0;
    int64_t v9; // 0x405e10
    int64_t v10; // 0x405e10
    int64_t v11; // 0x405e10
    int64_t v12; // 0x405e10
    int64_t str; // 0x405e10
    int64_t v13; // 0x405e10
    int64_t v14; // 0x405e10
    int64_t v15; // 0x405e10
    int64_t v16; // 0x405e10
    int64_t v17; // 0x405e10
    int32_t v18; // 0x405e10
    char v19; // 0x405e10
    if (v5 == 0) {
        // 0x406028
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405e5a;
    } else {
        // 0x405e53
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405ea0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405ea3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405f68;
            } else {
                int64_t v22 = v7 + 1; // 0x405eb6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405ec6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405f7c;
                } else {
                    goto lab_0x405ed8;
                }
            }
        } else {
            goto lab_0x405e5a;
        }
    }
  lab_0x405e5a:
    // 0x405e5a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405e60
    *v24 = 0;
    int64_t v25; // 0x405e10
    int64_t v26; // 0x405e10
    int64_t v27; // 0x405e10
    switch (*(char *)&v2) {
        case 45: {
            // 0x405f50
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405f5d;
        }
        case 43: {
            // 0x406260
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405f5d;
        }
        default: {
            // 0x405e7c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4061df
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4062f8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405f5d;
                } else {
                    // 0x4061ed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405e8a;
                }
            } else {
                goto lab_0x405e8a;
            }
        }
    }
  lab_0x405f68:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405f6f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405ed8;
    } else {
        goto lab_0x405f7c;
    }
  lab_0x405e8a:
    // 0x405e8a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405f5d;
  lab_0x405f5d:
    // 0x405f5d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405f68;
  lab_0x405ed8:;
    uint32_t v30 = *(int32_t *)a7; // 0x405ed8
    int64_t v31 = v30; // 0x405ed8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405eda
    if ((int64_t)*v32 > v31) {
        // 0x405edf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405ee2
    if (*v33 > v30) {
        // 0x405ee7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405eea
    int64_t v35 = v31; // 0x405eee
    int64_t v36 = v15; // 0x405eee
    int64_t v37; // 0x405e10
    int64_t v38; // 0x405e10
    int64_t v39; // 0x405e10
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406058
        int64_t v41 = v40; // 0x406058
        v2 = v41;
        int64_t v42; // 0x405e10
        if (*v33 == v40) {
            // 0x406240
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406248
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406064
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406068
                function_405710(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406078
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406081
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40608a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4060a1
            int64_t v47 = v45 & 0xffffffff; // 0x4060a5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4060ae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4060b4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4060b6;
                }
            }
            int64_t v48 = v47 + 1; // 0x406090
            int64_t v49 = v48 & 0xffffffff; // 0x406090
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4060a1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4060ae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4060b4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4060b6;
                    }
                }
                // 0x406090
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406258
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4060b6;
    } else {
        goto lab_0x405ef4;
    }
  lab_0x405f7c:
    // 0x405f7c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405f7f
    int64_t v51 = v12; // 0x405f7f
    int64_t v52 = v14; // 0x405f7f
    if (*(char *)v10 == 0) {
        goto lab_0x405ed8;
    } else {
        goto lab_0x405f85;
    }
  lab_0x405ef4:;
    int32_t v53 = v35; // 0x405ef4
    int64_t v54; // 0x405e10
    int64_t v55; // 0x405e10
    int64_t v56; // 0x405e10
    int64_t v57; // 0x405e10
    int64_t v58; // 0x405e10
    int64_t v59; // 0x405e10
    char * v60; // 0x405e10
    int64_t v61; // 0x405e10
    int64_t v62; // 0x405f09
    int64_t v63; // 0x405e10
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406043
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406046;
    } else {
        // 0x405efc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405e10
        int64_t v66 = v65 ? -1 : 1; // 0x405f10
        int64_t v67 = (int64_t)"--"; // 0x405e10
        int64_t v68 = v62; // 0x405e10
        int64_t v69 = 3; // 0x405f10
        unsigned char v70 = *(char *)v68; // 0x405f10
        char v71 = *(char *)v67; // 0x405f10
        char v72 = v71; // 0x405f10
        bool v73 = false; // 0x405f10
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
            // 0x406000
            if (*(char *)v62 == 45) {
                // 0x4060c0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4060c0
                if (c == 0) {
                    goto lab_0x40600a;
                } else {
                    // 0x4060cd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406150;
                    } else {
                        if (c == 45) {
                            // 0x406333
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4061a5;
                        } else {
                            // 0x4060de
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406150;
                            } else {
                                // 0x4060e3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406104;
                                } else {
                                    // 0x4060ea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406150;
                                    } else {
                                        goto lab_0x406104;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40600a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405f20
            v2 = v75;
            int32_t v76 = *v32; // 0x405f23
            int64_t v77 = v35 + 1; // 0x405f26
            int32_t v78 = v77; // 0x405f29
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406290
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405f37
                    function_405710(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405f45
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406046;
        }
    }
  lab_0x405f85:;
    // 0x405f85
    int64_t v79; // bp-104, 0x405e10
    int64_t v80 = &v79; // 0x405e1a
    int64_t v81 = v50 + 1; // 0x405f85
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405f8c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405f91
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405f95
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405f99
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405fa1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405fa6
    int32_t c2 = v84; // 0x405fa6
    char * found_char_pos = strchr(str2, c2); // 0x405fa6
    int64_t v87 = *v82; // 0x405fab
    v2 = v87;
    int64_t v88 = *v85; // 0x405fb5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405fc0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4062b0
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40627d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405fee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405fa6
    char v91 = *(char *)(v90 + 1); // 0x405fdb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405f95
        if (v91 != 58) {
            // 0x405fee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406204
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406308
                *v8 = 0;
            } else {
                // 0x4062ec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40622e
            *v83 = 0;
            // 0x405fee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40620e
        if (v93 != 0) {
            // 0x4062a0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40622e
            *v83 = 0;
            // 0x405fee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406221
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40622e
            *v83 = 0;
            // 0x405fee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40636a
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40631a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406321
        // 0x40622e
        *v83 = 0;
        // 0x405fee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406179
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40617b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4063a0
                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406351
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406358
            // 0x405fee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406186
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40618a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4061a5;
  lab_0x4060b6:
    // 0x4060b6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405ef4;
  lab_0x4061a5:;
    int64_t v99 = function_4057f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4061c3
    // 0x405fee
    return v99 & 0xffffffff;
  lab_0x406046:;
    int32_t v100 = v55; // 0x406046
    if (v100 != (int32_t)v59) {
        // 0x40604a
        *(int32_t *)a7 = v100;
    }
    // 0x405fee
    return 0xffffffff;
  lab_0x40600a:
    // 0x40600a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406011
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405fee
    return v99 & 0xffffffff;
  lab_0x406150:
    // 0x406150
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405f85;
  lab_0x406104:
    // 0x406104
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4057f0(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x40612a
    if ((int32_t)v101 != -1) {
        // 0x405fee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40613f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406150;
}
// Address range: 0x4063e0 - 0x406436
int64_t function_4063e0(int64_t a1) {
    // 0x4063e0
    *(int32_t *)&g55 = g34;
    *(int32_t *)&g56 = g33;
    int64_t v1; // 0x4063e0
    int64_t result = function_405e10(v1, v1, v1, v1, v1, v1, &g55, a1 & 0xffffffff); // 0x406406
    g34 = *(int32_t *)&g55;
    g60 = g58;
    *(int32_t *)&g32 = g57;
    return result;
}
// Address range: 0x406440 - 0x406458
int64_t function_406440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406440
    return function_4063e0(1);
}
// Address range: 0x406460 - 0x406473
int64_t function_406460(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x406460
    return function_4063e0(0);
}
// Address range: 0x406480 - 0x406495
int64_t function_406480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406480
    return function_405e10(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4064a0 - 0x4064b6
int64_t function_4064a0(void) {
    // 0x4064a0
    return function_4063e0(0);
}
// Address range: 0x4064c0 - 0x4064d8
int64_t function_4064c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4064c0
    return function_405e10(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4064e0 - 0x40655a
int64_t function_4064e0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4064eb
    int64_t v2 = (int64_t)&g11; // 0x4064eb
    int32_t * pwc; // 0x4064e0
    int64_t v3; // 0x4064e0
    int64_t n; // 0x4064e0
    if (a2 == 0) {
        goto lab_0x406532;
    } else {
        // 0x4064ed
        if (a3 == 0) {
            // 0x406518
            return -2;
        }
        // 0x4064f9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406532;
        } else {
            goto lab_0x406504;
        }
    }
  lab_0x406532:
    // 0x406532
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4064e0
    pwc = (int32_t *)&v4;
    goto lab_0x406504;
  lab_0x406504:;
    char * wstr = (char *)v3; // 0x40650a
    int64_t ps; // 0x4064e0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40650a
    int64_t result = v5; // 0x40650a
    if (v5 < 0xfffffffe) {
        // 0x406518
        return result;
    }
    int64_t result2 = result; // 0x406549
    if ((char)function_403080(0, v3) == 0) {
        // 0x40654b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406518
    return result2;
}
// Address range: 0x406560 - 0x4065be
int64_t function_406560(int64_t a1) {
    uint64_t result = function_405360(33); // 0x40656e
    char * str = (char *)result; // 0x406582
    strncpy(str, (char *)(a1 + 44), 32);
    *(char *)(result + 32) = 0;
    int64_t v1 = result + (int64_t)strlen(str); // 0x406593
    if (result >= v1) {
        // 0x4065a1
        return result;
    }
    int64_t v2 = v1; // 0x406599
    v2--;
    char * v3 = (char *)v2; // 0x40659b
    while (*v3 == 32) {
        // 0x4065b0
        *v3 = 0;
        if (result == v2) {
            // break -> 0x4065a1
            break;
        }
        v2--;
        v3 = (char *)v2;
    }
    // 0x4065a1
    return result;
}
// Address range: 0x4065c0 - 0x406768
int64_t function_4065c0(char * a1, int64_t * a2, int64_t * a3, uint32_t a4) {
    // 0x4065c0
    utmpxname(a1);
    setutxent();
    struct utmpx * v1 = getutxent(); // 0x4065f7
    int64_t v2 = 0; // 0x406602
    int64_t v3 = 0; // 0x406602
    int64_t v4; // 0x4065c0
    int64_t v5; // 0x4065c0
    int64_t v6; // 0x4065c0
    struct utmpx * v7; // 0x4065c0
    struct utmpx * v8; // 0x4065c0
    int64_t v9; // 0x4065c0
    int64_t v10; // 0x4065c0
    int64_t v11; // 0x4065c0
    uint64_t v12; // 0x4065c0
    int64_t v13; // 0x4065c0
    int64_t v14; // 0x4065c0
    int64_t v15; // 0x4065c0
    int64_t v16; // 0x4065c0
    int64_t v17; // 0x4065c0
    if (v1 != NULL) {
        struct utmpx * v18 = v1; // 0x4065f7
        int64_t v19 = 0; // 0x4065c0
        int64_t v20 = (int64_t)a1;
        int64_t v21 = 0; // 0x4065c0
        int64_t v22 = 0; // 0x4065c0
        while (true) {
            // 0x406604
            v11 = v22;
            v9 = v21;
            v14 = v20;
            v4 = v19;
            v7 = v18;
            while (true) {
              lab_0x406604:
                // 0x406604
                v8 = v7;
                v5 = v4;
                v15 = v14;
                v10 = v9;
                v12 = v11;
                v6 = (int64_t)v8;
                if (*(char *)(v6 + 44) == 0) {
                    goto lab_0x406616;
                } else {
                    // 0x40660b
                    if (v8->e0 == 7) {
                        // 0x4066a0
                        v16 = v15;
                        if (a4 % 2 == 0) {
                            goto lab_0x40661b;
                        } else {
                            uint32_t pid = *(int32_t *)(v6 + 4); // 0x4066a9
                            int64_t v23 = pid; // 0x4066a9
                            v16 = v23;
                            if (pid < 1) {
                                goto lab_0x40661b;
                            } else {
                                // 0x4066b5
                                v16 = v23;
                                if (kill(pid, 0) >= 0) {
                                    goto lab_0x40661b;
                                } else {
                                    int32_t v24 = *__errno_location(); // 0x4066c9
                                    v13 = v23;
                                    if (v24 == 3) {
                                        // break -> 0x4065f7
                                        break;
                                    }
                                    // 0x4066d2
                                    v17 = v23;
                                    if (v12 != v10) {
                                        goto lab_0x406624;
                                    } else {
                                        goto lab_0x4066e0;
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x406616;
                    }
                }
            }
          lab_0x4065f7:
            // 0x4065f7
            v20 = v13;
            v18 = getutxent();
            v19 = v5;
            v21 = v10;
            v22 = v12;
            v2 = v12;
            v3 = v5;
            if (v18 == NULL) {
                // break -> 0x406675
                break;
            }
        }
    }
  lab_0x406675:
    // 0x406675
    endutxent();
    *a2 = v2;
    *a3 = v3;
    return 0;
  lab_0x406616:
    // 0x406616
    v13 = v15;
    v16 = v15;
    if ((a4 & 2) != 0) {
        // break -> 0x4065f7
        goto lab_0x4065f7;
    }
    goto lab_0x40661b;
  lab_0x40661b:
    // 0x40661b
    v17 = v16;
    if (v12 == v10) {
        goto lab_0x4066e0;
    } else {
        goto lab_0x406624;
    }
  lab_0x4066e0:;
    int64_t v25 = v17;
    int64_t v26; // 0x4065c0
    int64_t v27; // 0x4065c0
    int64_t v28; // 0x4065c0
    if (v5 == 0) {
        // 0x406724
        v27 = 1;
        v26 = 1;
        v28 = 384;
        if (v12 != 0) {
            uint128_t v29 = 384 * (int128_t)v12; // 0x406731
            if ((int64_t)v29 < 0) {
                // 0x406763
                function_4055b0(v25);
                // UNREACHABLE
            }
            if (v29 % 0x1ff0000000000000001 != 0) {
                // 0x406763
                function_4055b0(v25);
                // UNREACHABLE
            }
            // 0x406744
            v27 = v12 + 1;
            v26 = v10;
            v28 = 384 * v12;
        }
    } else {
        if (v12 >= 0x38e38e38e38e38) {
            // 0x406763
            function_4055b0(v25);
            // UNREACHABLE
        }
        int64_t v30 = v12 + 1; // 0x4066f7
        int64_t v31 = v12 / 2 + v30; // 0x4066fe
        v27 = v30;
        v26 = v31;
        v28 = 384 * v31;
    }
    int64_t v32 = v27; // 0x40671f
    int64_t v33 = v26; // 0x40671f
    int64_t v34 = function_4053c0(v5, v28); // 0x40671f
    goto lab_0x406628;
  lab_0x406624:
    // 0x406624
    v32 = v12 + 1;
    v33 = v10;
    v34 = v5;
    goto lab_0x406628;
  lab_0x406628:;
    int64_t v35 = v34 + 384 * v12; // 0x406636
    *(int64_t *)v35 = *(int64_t *)v8;
    int64_t v36 = v35 + 8 & -8; // 0x406647
    *(int64_t *)(v35 + 376) = *(int64_t *)(v6 + 376);
    int64_t v37 = v35 - v36; // 0x406652
    uint64_t v38 = (v37 + 384) / 8 % 0x20000000; // 0x406663
    __asm_rep_movsq_memcpy((char *)v36, (char *)(v6 - v37), v38);
    struct utmpx * v39 = getutxent(); // 0x406668
    v11 = v32;
    v9 = v33;
    bool v40; // 0x4065c0
    v14 = v38 * (v40 ? -8 : 8) + v36;
    v4 = v34;
    v7 = v39;
    v2 = v32;
    v3 = v34;
    if (v39 == NULL) {
        // break (via goto) -> 0x406675
        goto lab_0x406675;
    }
    goto lab_0x406604;
}
// Address range: 0x406770 - 0x4067cd
int64_t function_406770(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406777
    int64_t v2; // 0x406770
    int64_t result = function_4055f0(a1, v2); // 0x406788
    if ((v2 & 32) != 0) {
        // 0x4067b0
        if ((int32_t)result == 0) {
            // 0x4067b4
            *__errno_location() = 0;
        }
        // 0x4067aa
        return 0xffffffff;
    }
    // 0x406791
    if ((int32_t)result == 0) {
        // 0x4067aa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406798
    if (v1 == 0) {
        // 0x40679a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4067aa
    return result2;
}
// Address range: 0x4067d0 - 0x406d32
int64_t function_4067d0(void) {
    char * v1 = nl_langinfo(14); // 0x4067e6
    char * v2 = g59; // 0x4067eb
    char * v3; // 0x4067d0
    int64_t v4; // 0x4067d0
    int64_t v5; // 0x4067d0
    int64_t v6; // 0x4067d0
    int64_t v7; // 0x4067d0
    int32_t size; // 0x4067d0
    int32_t size2; // 0x4067d0
    int32_t len; // 0x4068a2
    int64_t v8; // 0x4068a2
    char * env_val; // 0x40688d
    if (v2 == NULL) {
        // 0x406888
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4068f5;
        } else {
            // 0x40689a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4068f5;
            } else {
                // 0x40689f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40688d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406d25
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4068f5;
                    } else {
                        // 0x406c99
                        size2 = len + 14;
                        goto lab_0x4068bb;
                    }
                } else {
                    goto lab_0x4068bb;
                }
            }
        }
    } else {
        // 0x4067d0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40680a;
    }
  lab_0x406b3c:;
    // 0x406b3c
    struct _IO_FILE * stream; // 0x40697b
    int32_t v10 = __uflow(stream); // 0x406b3f
    int64_t v11; // 0x4067d0
    int64_t v12 = v11; // 0x406b49
    int64_t v13; // 0x4067d0
    int64_t v14 = v13; // 0x406b49
    int32_t v15 = v10; // 0x406b49
    int64_t v16; // 0x4067d0
    int64_t v17 = v16; // 0x406b49
    int64_t v18 = v11; // 0x406b49
    int64_t v19 = v13; // 0x406b49
    int64_t v20 = v16; // 0x406b49
    if (v10 == -1) {
        // break -> 0x406b4f
        goto lab_0x406b4f;
    }
    goto lab_0x4069c9;
  lab_0x4069be:;
    // 0x4069be
    int64_t v90; // 0x4067d0
    int64_t * v32; // 0x4069b0
    *v32 = v90 + 1;
    int64_t v89; // 0x4067d0
    v12 = v89;
    int64_t v91; // 0x4067d0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4067d0
    v17 = v92;
    goto lab_0x4069c9;
  lab_0x4069c9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4067d0
    int32_t v25; // bp-120, 0x4067d0
    int32_t v26; // bp-184, 0x4067d0
    int64_t v27; // 0x40697b
    int64_t v28; // 0x406998
    int64_t v29; // 0x40699d
    int64_t * v30; // 0x4069b4
    switch (c) {
        case 32: {
            goto lab_0x4069b0;
        }
        case 10: {
            goto lab_0x4069b0;
        }
        case 9: {
            goto lab_0x4069b0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406ba1
            int32_t v33; // 0x4067d0
            char v34; // 0x4067d0
            int32_t v35; // 0x406bae
            if (v31 < *v30) {
                // 0x406b80
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406bab
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406ba1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406b80
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406bab
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406b90
                v36 = v33;
            }
            // 0x406c7f
            if (v36 == -1) {
                // break -> 0x406b4f
                break;
            }
            goto lab_0x4069b0;
        }
        default: {
            // 0x4069df
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406b4f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406a08
            int64_t v39 = v37 + 4; // 0x406a0a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406a16
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406a18
            while (v41 == 0) {
                // 0x406a08
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406a36
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406a42
            int64_t v45 = v43 + 4; // 0x406a44
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406a50
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406a52
            while (v47 == 0) {
                // 0x406a42
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406a3f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406a68
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406a78
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x406a7c
            int64_t v52 = v51 + v48; // 0x406a85
            int64_t * mem; // 0x4067d0
            int64_t v53; // 0x4067d0
            int64_t v54; // 0x4067d0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406bbb
                int64_t v56 = v55 + 3; // 0x406bc7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406aa1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406ab0
            if (mem == NULL) {
                // 0x406cdc
                free((int64_t *)v21);
                function_4055f0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x406954;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406ac8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406ad2
            uint32_t v62 = (int32_t)v59; // 0x406ad5
            int64_t v63; // 0x4067d0
            if (v62 >= 8) {
                // 0x406be4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406bfe
                int64_t v66 = v61 - v65; // 0x406c02
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406c0d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406c1e
                    int64_t v70 = v69 & 0xffffffff; // 0x406c1e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406c1b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406caf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406ae7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406aeb
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
            int64_t v73 = v51 + 1; // 0x406afb
            int64_t v74 = v60 - 1; // 0x406aff
            uint32_t v75 = (int32_t)v73; // 0x406b04
            int64_t v76; // 0x4067d0
            if (v75 >= 8) {
                // 0x406c32
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406c3c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406c4c
                int64_t v80 = v74 - v79; // 0x406c50
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406c5b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406c6b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406c69
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406cc6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406cce
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406b16
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406b1a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406d13
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406b2e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4069be;
            } else {
                goto lab_0x406b3c;
            }
        }
    }
  lab_0x4069b0:;
    int64_t v93 = v23; // 0x4067d0
    int64_t v94 = v22; // 0x4067d0
    int64_t v95 = v21; // 0x4067d0
    goto lab_0x4069b0_2;
  lab_0x4068f5:;
    int64_t * mem3 = malloc(size); // 0x4068f5
    int64_t v97 = (int64_t)&g11; // 0x406900
    int64_t v98; // 0x4067d0
    int64_t path; // 0x4067d0
    if (mem3 == NULL) {
        goto lab_0x4068d2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4068f5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406916;
    }
  lab_0x40680a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x4067fd
    char v100 = *v3; // 0x40680a
    int64_t v101; // 0x4067d0
    if (v100 == 0) {
        // 0x406864
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4067d0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4067d0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406850
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406857;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406820
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40682d
        char v107 = *(char *)v106; // 0x406832
        v102 = v107;
        if (v107 == 0) {
            // 0x406864
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40683b
    v104 = v103 + 1;
  lab_0x406857:
    // 0x406864
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4068d2:;
    char * v108 = (char *)v97;
    g59 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40680a;
  lab_0x406916:;
    int64_t v109 = v98 + path; // 0x406916
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406942
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x406971
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406ca2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x406995
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4069b0_2:;
                uint64_t v96 = *v32; // 0x4069b0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406b3c;
                } else {
                    goto lab_0x4069be;
                }
            }
          lab_0x406b4f:
            // 0x406b4f
            function_4055f0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x406b6e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406954;
  lab_0x4068bb:;
    int64_t * mem4 = malloc(size2); // 0x4068bb
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x406961
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406916;
    } else {
        goto lab_0x4068d2;
    }
  lab_0x406954:
    // 0x406954
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4068d2;
}
// Address range: 0x406d40 - 0x406d9d
int64_t function_406d40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406d40
    return function_4017e8();
}
// Address range: 0x406da0 - 0x406da1
int64_t function_406da0(void) {
    // 0x406da0
    int64_t result; // 0x406da0
    return result;
}
// Address range: 0x406db0 - 0x406dc8
int64_t function_406db0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406db0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406dc8 - 0x406de8
int64_t function_406dc8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406dd2
    while (*(int64_t *)v1 != -1) {
        // 0x406dd3
        v1 -= 8;
    }
    // 0x406de4
    return result;
}
