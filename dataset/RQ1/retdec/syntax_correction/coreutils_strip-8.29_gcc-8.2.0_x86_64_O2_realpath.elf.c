#include "decompile_retdec.h"
// Address range: 0x4019d0 - 0x4019d5
int64_t function_4019d0(void) {
    // 0x4019d0
    abort();
    // UNREACHABLE
}
// Address range: 0x4019d5 - 0x4019da
int64_t function_4019d5(void) {
    // 0x4019d5
    abort();
    // UNREACHABLE
}
// Address range: 0x4019da - 0x4019df
int64_t function_4019da(void) {
    // 0x4019da
    abort();
    // UNREACHABLE
}
// Address range: 0x4019df - 0x4019e4
int64_t function_4019df(void) {
    // 0x4019df
    abort();
    // UNREACHABLE
}
// Address range: 0x4019e4 - 0x4019e9
int64_t function_4019e4(void) {
    // 0x4019e4
    abort();
    // UNREACHABLE
}
// Address range: 0x4019e9 - 0x4019ee
int64_t function_4019e9(void) {
    // 0x4019e9
    abort();
    // UNREACHABLE
}
// Address range: 0x4019ee - 0x4019f3
int64_t function_4019ee(void) {
    // 0x4019ee
    abort();
    // UNREACHABLE
}
// Address range: 0x4019f3 - 0x4019f8
int64_t function_4019f3(void) {
    // 0x4019f3
    abort();
    // UNREACHABLE
}
// Address range: 0x4019f8 - 0x4019fd
int64_t function_4019f8(void) {
    // 0x4019f8
    abort();
    // UNREACHABLE
}
// Address range: 0x4019fd - 0x401a02
int64_t function_4019fd(void) {
    // 0x4019fd
    abort();
    // UNREACHABLE
}
// Address range: 0x401a10 - 0x401eb0
int64_t function_401a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401a1e
    function_4041c0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_408510(0x402d30, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2 = 1; // 0x401a69
    int64_t v3 = 0; // 0x401a69
    int64_t v4 = 0; // 0x401a69
    int64_t v5; // 0x401a10
    while (true) {
      lab_0x401a70_2:
        // 0x401a70
        v5 = v2;
        int32_t v6 = function_4079b0(v1, a2, "eLmPqsz", &g2, 0, a6);
        switch (v6) {
            case -1: {
                goto lab_0x401bbf;
            }
            case 109: {
                // 0x401b90
                v2 = v5 & 0xfffffffc | 2;
                goto lab_0x401a70_2;
            }
            default: {
                if (v6 > 109) {
                    if (v6 == 122) {
                        // 0x401ba0
                        g38 = 1;
                        v2 = v5;
                    } else {
                        if (v6 > 122) {
                            if (v6 != 128) {
                                if (v6 != 129) {
                                    // 0x401e4c
                                    function_402100(1);
                                    // UNREACHABLE
                                }
                                // 0x401b6b
                                v2 = v5;
                            } else {
                                // 0x401af7
                                v2 = v5;
                            }
                        } else {
                            if (v6 != 113) {
                                if (v6 != 115) {
                                    // 0x401e4c
                                    function_402100(1);
                                    // UNREACHABLE
                                }
                                // 0x401ae1
                                g39 = 0;
                                v2 = v5 & 0xfffffffb | 4;
                            } else {
                                // 0x401aac
                                *(char *)&g18 = 0;
                                v2 = v5;
                            }
                        }
                    }
                } else {
                    if (v6 == 76) {
                        // 0x401bb0
                        g39 = 1;
                        v2 = v5 & 0xfffffffb | 4;
                    } else {
                        if (v6 <= 76) {
                            if (v6 == -131) {
                                // 0x401b27
                                function_406390((int64_t)g31, "realpath", "GNU coreutils", (int64_t)g19, "Padraig Brady", 0);
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v6 == -130) {
                                // 0x401b82
                                function_402100(0);
                                // UNREACHABLE
                            }
                            goto lab_0x401e4c;
                        }
                        if (v6 != 80) {
                            if (v6 != 101) {
                              lab_0x401e4c:
                                // 0x401e4c
                                function_402100(1);
                                // UNREACHABLE
                            }
                            // 0x401b11
                            v2 = v5 & 0xfffffffc;
                        } else {
                            // 0x401ac8
                            g39 = 0;
                            v2 = v5 & 0xfffffffb;
                        }
                    }
                }
                goto lab_0x401a70_2;
            }
        }
    }
  lab_0x401bbf:;
    // 0x401bbf
    char * format; // 0x401e39
    if (v1 <= (int64_t)*(int32_t *)0x60c2bc) {
        // 0x401e2d
        format = dcgettext(NULL, "missing operand", 5);
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
        // 0x401e4c
        function_402100(1);
        // UNREACHABLE
    }
    uint64_t v7 = v5 % 4; // 0x401bcf
    bool v8 = v3 == 0 | v4 != 0;
    int64_t v9 = 0; // 0x401bd6
    int64_t v10; // 0x401a10
    int64_t v11; // 0x401a10
    int64_t v12; // 0x401a10
    if (v4 == 0 == v8) {
        goto lab_0x401c0b;
    } else {
        int64_t v13 = v8 ? v4 : v3;
        int64_t v14 = function_402020(v13, v5 & 0xffffffff); // 0x401bed
        g37 = v14;
        v12 = v13;
        if (v14 == 0) {
            goto lab_0x401e83;
        } else {
            // 0x401c02
            v9 = v13;
            if (v7 == 0) {
                // 0x401d9e
                v9 = v13;
                if ((char)function_402080(v14) != 0) {
                    goto lab_0x401c0b;
                } else {
                    // 0x401dae
                    error(1, ENOTDIR, "%s", (char *)function_405c60(0, 3, v13));
                    v10 = v3;
                    v11 = v13;
                    goto lab_0x401dd6;
                }
            } else {
                goto lab_0x401c0b;
            }
        }
    }
  lab_0x401cf2:
    // 0x401cf2
    g28 = &g29;
    int64_t v15 = &g29; // 0x401d04
    int64_t v16; // 0x401a10
    int64_t v17 = v16; // 0x401d04
    int64_t v18 = v16; // 0x401d04
    if (v1 <= (int64_t)&g29) {
        return v18 % 256 ^ 1;
    }
    goto lab_0x401d06;
  lab_0x401cbe:;
    int64_t v21 = (int64_t)g31; // 0x401cc5
    int64_t v22 = g38 == 0 ? 10 : 0; // 0x401cce
    int64_t * v23 = (int64_t *)(v21 + 40); // 0x401cd1
    uint64_t v24 = *v23; // 0x401cd1
    if (v24 >= *(int64_t *)(v21 + 48)) {
        // 0x401d81
        __overflow(g31, (int32_t)v22);
    } else {
        // 0x401cdf
        *v23 = v24 + 1;
        *(char *)v24 = (char)v22;
    }
    // 0x401cea
    int64_t v20; // 0x401d12
    free((int64_t *)v20);
    v16 = v17;
    goto lab_0x401cf2;
  lab_0x401c9c:
    // 0x401c9c
    if ((char)function_402490(v20, g37, 0, 0) != 0) {
        goto lab_0x401cbe;
    } else {
        // 0x401caf
        fputs_unlocked((char *)v20, g31);
        goto lab_0x401cbe;
    }
    // 0x401a70
    goto lab_0x401a70_2;
  lab_0x401c0b:
    // 0x401c0b
    if (v3 == v9) {
        // 0x401d8b
        g36 = g37;
        goto lab_0x401c59;
    } else {
        if (v3 == 0) {
            goto lab_0x401c59;
        } else {
            int64_t v25 = function_402020(v3, v5 & 0xffffffff); // 0x401c1e
            if (v25 == 0) {
                // 0x401e56
                error(1, *__errno_location(), "%s", (char *)function_405c60(0, 3, v3));
                v12 = 0;
                goto lab_0x401e83;
            } else {
                if (v7 == 0) {
                    // 0x401df5
                    if ((char)function_402080(v25) == 0) {
                        // 0x401e05
                        error(1, ENOTDIR, "%s", (char *)function_405c60(0, 3, v3));
                        // 0x401e2d
                        format = dcgettext(NULL, "missing operand", 5);
                        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
                        // 0x401e4c
                        function_402100(1);
                        // UNREACHABLE
                    }
                }
                int64_t v26 = function_401f90(v25, g37); // 0x401c45
                v10 = g37;
                v11 = v25;
                if ((char)v26 == 0) {
                    goto lab_0x401dd6;
                } else {
                    // 0x401c52
                    g36 = v25;
                    goto lab_0x401c59;
                }
            }
        }
    }
  lab_0x401e83:
    // 0x401e83
    error(1, *__errno_location(), "%s", (char *)function_405c60(0, 3, v12));
    return &g54;
  lab_0x401c59:;
    int64_t v27 = g28; // 0x401c59
    if (v1 <= v27) {
        // 0x401d6d
        return 0;
    }
    // 0x401d06
    v15 = v27;
    v17 = 1;
    while (true) {
      lab_0x401d06:;
        int64_t v19 = *(int64_t *)((0x100000000 * v15 >> 29) + a2); // 0x401d0a
        v20 = function_402020(v19, v5 & 0xffffffff);
        if (v20 != 0) {
            // 0x401c78
            if (g37 == 0) {
                // 0x401caf
                fputs_unlocked((char *)v20, g31);
                goto lab_0x401cbe;
            } else {
                // 0x401c84
                if (g36 == 0) {
                    goto lab_0x401c9c;
                } else {
                    // 0x401c90
                    if ((char)function_401f90(g36, v20) == 0) {
                        // 0x401caf
                        fputs_unlocked((char *)v20, g31);
                        goto lab_0x401cbe;
                    } else {
                        goto lab_0x401c9c;
                    }
                }
            }
        } else {
            // 0x401d23
            v16 = 0;
            if (*(char *)&g18 != 0) {
                // 0x401d30
                error(0, *__errno_location(), "%s", (char *)function_405c60(0, 3, v19));
                v16 = 0;
            }
            goto lab_0x401cf2;
        }
    }
    // 0x401d6d
    return v18 % 256 ^ 1;
  lab_0x401dd6:
    // 0x401dd6
    free((int64_t *)v11);
    g36 = v10;
    g37 = 0;
    goto lab_0x401c59;
}
// Address range: 0x401eb0 - 0x401edb
// Address range: 0x401edb - 0x401efa
int64_t function_401edb(void) {
    // 0x401edb
    return &g30;
}
// Address range: 0x401efa - 0x401f31
int64_t function_401efa(void) {
    // 0x401efa
    return 0;
}
// Address range: 0x401f31 - 0x401f88
int64_t function_401f31(void) {
    // 0x401f31
    if (g34 != 0) {
        // 0x401f87
        int64_t result; // 0x401f31
        return result;
    }
    int64_t v1 = g35; // 0x401f64
    int64_t result2; // 0x401f76
    if (g35 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401f76
        result2 = function_401edb();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401f66
        v1++;
    }
    // 0x401f5a
    g35 = v1;
    // 0x401f76
    result2 = function_401edb();
    g34 = 1;
    return result2;
}
// Address range: 0x401f88 - 0x401f8d
int64_t function_401f88(void) {
    // 0x401f88
    return function_401efa();
}
// Address range: 0x401f90 - 0x402014
int64_t function_401f90(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 1; // 0x401f90
    char v2 = *(char *)v1; // 0x401f90
    switch (v2) {
        case 0: {
            // 0x402000
            return *(char *)(a2 + 1) != 47;
        }
        case 47: {
            // 0x401ff0
            if (*(char *)(a1 + 2) == 0) {
                // 0x401ff6
                return *(char *)(a2 + 1) == 47;
            }
            // break -> 0x401f9c
            break;
        }
    }
    int64_t v3 = a2 + 1; // 0x401f9c
    char v4 = *(char *)v3; // 0x401f9c
    bool result = v4 == 0 | v4 != v2;
    int64_t v5 = v3; // 0x401fac
    if (result) {
        // 0x401fea
        return false;
    }
    int64_t v6 = v1; // 0x401fac
    v6++;
    char v7 = *(char *)v6; // 0x401fcf
    v5++;
    char v8 = *(char *)v5;
    while (v7 != 0) {
        // 0x401fc0
        if (v8 == 0 || v7 != v8) {
            // 0x401fea
            return result;
        }
        v6++;
        v7 = *(char *)v6;
        v5++;
        v8 = *(char *)v5;
    }
    // 0x401fea
    return v8 == 47 | v8 == 0;
}
// Address range: 0x402020 - 0x402075
int64_t function_402020(int64_t a1, int64_t a2) {
    int64_t result = function_402690(a1, a2); // 0x402028
    if (g39 != 0 != result != 0) {
        // 0x40203e
        return result;
    }
    int64_t result2 = function_402690(result, a2 & 0xfffffffb); // 0x402058
    free((int64_t *)result);
    return result2;
}
// Address range: 0x402080 - 0x402100
int64_t function_402080(int64_t a1) {
    // 0x402080
    int64_t v1; // bp-168, 0x402080
    if (__xstat(1, (char *)a1, (struct stat *)&v1) == 0) {
        // 0x4020a0
        int32_t v2; // 0x402080
        uint32_t v3 = v2 & 0xf000; // 0x4020a4
        return (int64_t)(v3 == 0x4000) | (int64_t)v3;
    }
    // 0x4020bb
    function_405b90(4, a1);
    error(1, *__errno_location(), dcgettext(NULL, "cannot stat %s", 5));
    return &g54;
}
// Address range: 0x402100 - 0x40240d
int64_t function_402100(int32_t status) {
    // 0x402100
    if (status != 0) {
        // 0x40211a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40213f
        exit(status);
        // UNREACHABLE
    }
    // 0x402146
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the resolved absolute file name;\nall but the last component must exist\n\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -e, --canonicalize-existing  all components of the path must exist\n  -m, --canonicalize-missing   no path components need exist or be a directory\n  -L, --logical                resolve '..' components before symlinks\n  -P, --physical               resolve symlinks as encountered (default)\n  -q, --quiet                  suppress most error messages\n      --relative-to=DIR        print the resolved path relative to DIR\n      --relative-base=DIR      print absolute paths unless paths below DIR\n  -s, --strip, --no-symlinks   don't expand symlinks\n  -z, --zero                   end each output line with NUL, not newline\n\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    int64_t v1 = &g1; // bp-136, 0x4021f0
    bool v2; // 0x402100
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402270
    int64_t v6 = *(int64_t *)v5; // 0x402274
    int64_t v7 = 9; // 0x40227a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"realpath";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402286
        char v11 = *(char *)v9; // 0x402286
        char v12 = v11; // 0x402286
        bool v13 = false; // 0x402286
        while (v10 == v11) {
            // 0x40227c
            v7--;
            int64_t v14 = v9 + v3; // 0x402286
            int64_t v15 = v8 + v3; // 0x402286
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
            // break -> 0x402292
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 9;
    }
    // 0x402292
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4023a4;
        } else {
            // 0x40238e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4023e3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4022f4;
            } else {
                goto lab_0x4023a4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4022f4;
        } else {
            // 0x4022da
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4023e3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4022f4;
            } else {
                goto lab_0x4022f4;
            }
        }
    }
  lab_0x4023a4:
    // 0x4023a4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402334
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40213f
    exit(status);
    // UNREACHABLE
  lab_0x4022f4:
    // 0x4022f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402334
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40213f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402410 - 0x402487
int64_t function_402410(int64_t str, int64_t * a2, int64_t * a3) {
    if (a2 == NULL) {
        // 0x402470
        fputs_unlocked((char *)str, g31);
        return 0;
    }
    int32_t len = strlen((char *)str); // 0x402429
    uint64_t v1 = (int64_t)len; // 0x402429
    if ((int64_t)a3 <= v1) {
        // 0x40243c
        return 1;
    }
    // 0x402448
    memcpy(a2, (int64_t *)str, len + 1);
    *a2 = v1 + str;
    *a3 = 1;
    return 0;
}
// Address range: 0x402490 - 0x402687
int64_t function_402490(int64_t a1, int64_t a2, int32_t a3, int32_t a4) {
    char v1 = *(char *)(a2 + 1); // 0x402498
    char v2 = *(char *)(a1 + 1); // 0x40249d
    int32_t v3 = a4; // bp-40, 0x4024a2
    int32_t v4 = a3; // bp-32, 0x4024aa
    char v5 = a2;
    if (v5 == 0 || v1 == 47 != (v2 == 47)) {
        // 0x40259d
        return 0;
    }
    char v6 = a1;
    bool result = v6 == 0 | v5 != v6;
    if (result) {
        // 0x40259d
        return 0;
    }
    int64_t v7 = v5 == 47 ? 0x100000001 : 0;
    int64_t v8 = v7 % 2; // 0x40251e
    char v9 = v2; // 0x40252c
    int64_t v10 = 1; // 0x40252c
    int64_t v11 = v7; // 0x40252c
    int64_t v12 = v8; // 0x40252c
    bool v13 = v2 == 0; // 0x40252c
    int64_t v14; // 0x402490
    int64_t v15; // 0x402490
    bool v16; // 0x402490
    int64_t v17; // 0x402490
    char v18; // 0x402490
    if (v1 != 0) {
        int64_t v19 = 2; // 0x4024f3
        v16 = v2 == 0;
        v15 = v8;
        v17 = v7;
        v14 = 1;
        v18 = v1;
        if (v2 != 0 == v1 == v2) {
            char v20 = *(char *)(v19 + a2); // 0x402502
            char v21 = *(char *)(v19 + a1); // 0x402507
            int64_t v22 = v19 + 0x100000000; // 0x40251a
            int64_t v23 = v22 & 0xffffffff; // 0x40251a
            int64_t v24 = v1 == 47 ? v22 : v8;
            int64_t v25 = v24 & 0xffffffff; // 0x40251e
            v9 = v21;
            v10 = v23;
            v11 = v24;
            v12 = v25;
            v13 = v21 == 0;
            while (v20 != 0) {
                // 0x4024f0
                v19++;
                char v26 = v20; // 0x4024f3
                v16 = v21 == 0;
                v15 = v25;
                v17 = v24;
                v14 = v23;
                v18 = v20;
                if (v21 != 0 != (v20 == v21)) {
                    goto lab_0x4025b0;
                }
                v20 = *(char *)(v19 + a2);
                v21 = *(char *)(v19 + a1);
                v22 = v19 + 0x100000000;
                v23 = v22 & 0xffffffff;
                v24 = v26 == 47 ? v22 : v25;
                v25 = v24 & 0xffffffff;
                v9 = v21;
                v10 = v23;
                v11 = v24;
                v12 = v25;
                v13 = v21 == 0;
            }
            goto lab_0x40252e;
        } else {
            goto lab_0x4025b0;
        }
    } else {
        goto lab_0x40252e;
    }
  lab_0x4025b0:;
    int64_t v27 = v17; // 0x4025b4
    int64_t v28 = v15; // 0x4025b4
    int64_t v29 = v14; // 0x4025b4
    if (v16 == v18 == 47) {
        goto lab_0x402545;
    } else {
        goto lab_0x402541;
    }
  lab_0x40252e:
    // 0x40252e
    v27 = v11;
    v28 = v12;
    v29 = v10;
    if (v9 == 47 || v13) {
        goto lab_0x402545;
    } else {
        goto lab_0x402541;
    }
  lab_0x402545:;
    int64_t v30 = 0x100000000 * v29 >> 32; // 0x402545
    int64_t v31 = v30 + a2; // 0x402548
    char v32 = *(char *)v31; // 0x402550
    char v33 = v32; // 0x402556
    int64_t v34 = v31; // 0x402556
    if (v32 == 47) {
        int64_t v35 = v31 + 1; // 0x402558
        v33 = *(char *)v35;
        v34 = v35;
    }
    int64_t v36 = v30 + a1; // 0x40254c
    int64_t v37 = v36 + (int64_t)(*(char *)v36 == 47); // 0x402568
    int64_t v38; // 0x402490
    if (v33 != 0) {
        int64_t v39 = function_402410((int64_t)"..", (int64_t *)&v4, (int64_t *)&v3); // 0x4025cd
        int64_t v40 = v39 & 0xffffffff; // 0x4025d2
        char v41 = *(char *)v34; // 0x4025d5
        int64_t v42 = v40; // 0x4025db
        if (v41 != 0) {
            int64_t v43 = v40; // 0x40263b
            int64_t v44; // 0x402625
            if (v41 == 47) {
                // 0x40263d
                v44 = function_402410((int64_t)"/..", (int64_t *)&v4, (int64_t *)&v3);
                v43 = (v44 | v40) & 0xffffffff;
            }
            int64_t v45 = v34 + 1; // 0x40262d
            char v46 = *(char *)v45; // 0x402631
            v42 = v43;
            int64_t v47 = v45; // 0x402637
            while (v46 != 0) {
                int64_t v48 = v43;
                v43 = v48;
                if (v46 == 47) {
                    // 0x40263d
                    v44 = function_402410((int64_t)"/..", (int64_t *)&v4, (int64_t *)&v3);
                    v43 = (v44 | v48) & 0xffffffff;
                }
                // 0x40262d
                v45 = v47 + 1;
                v46 = *(char *)v45;
                v42 = v43;
                v47 = v45;
            }
        }
        // 0x4025e0
        v38 = v42;
        if (*(char *)v37 != 0) {
            int64_t v49 = function_402410((int64_t)"/", (int64_t *)&v4, (int64_t *)&v3); // 0x4025f2
            int64_t v50 = function_402410(v37, (int64_t *)&v4, (int64_t *)&v3); // 0x402604
            v38 = (v49 | v42 | v50) & 0xffffffff;
        }
    } else {
        int64_t v51 = *(char *)v37 == 0 ? (int64_t)"." : v37; // 0x40257f
        int64_t v52 = function_402410(v51, (int64_t *)&v4, (int64_t *)&v3); // 0x402586
        v38 = v52 & 0xffffffff;
    }
    // 0x40258e
    if ((char)v38 != 0) {
        // 0x402640
        error(0, ENAMETOOLONG, "%s", dcgettext(NULL, "generating relative path", 5));
    }
    // 0x40259d
    return v38 & 0xffffffff ^ 1;
  lab_0x402541:
    // 0x402541
    v29 = v28;
    if ((int32_t)v27 == 0) {
        // 0x40259d
        return result;
    }
    goto lab_0x402545;
}
// Address range: 0x402690 - 0x402d03
int64_t function_402690(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    uint32_t v2 = (int32_t)a2;
    uint32_t v3 = v2 % 4; // 0x4026a9
    if (a1 == 0 || (v2 + 3 & v3) != 0) {
        // 0x402b40
        *__errno_location() = 22;
        // 0x40298e
        return 0;
    }
    int64_t v4; // 0x402690
    int64_t v5; // 0x402690
    int64_t v6; // 0x402690
    switch ((char)a1) {
        case 0: {
            // 0x402c01
            *__errno_location() = 2;
            // 0x40298e
            return 0;
        }
        case 47: {
            int64_t v7 = function_4064d0(0x1000); // 0x402855
            *(char *)v7 = 47;
            v6 = v7 + 1;
            v5 = v7 + 0x1000;
            v4 = v7;
            // break -> 0x402705
            break;
        }
        default: {
            int64_t str = function_406760(a1, a2); // 0x4026d7
            if (str == 0) {
                // 0x40298e
                return 0;
            }
            int32_t len = strlen((char *)str); // 0x4026eb
            int64_t v8 = len; // 0x4026eb
            if (len < 0x1000) {
                int64_t v9 = function_406530(str, 0x1000); // 0x402c1c
                v6 = v9 + v8;
                v5 = v9 + 0x1000;
                v4 = v9;
            } else {
                int64_t v10 = str + v8; // 0x4026ff
                v6 = v10;
                v5 = v10;
                v4 = str;
            }
            // break -> 0x402705
            break;
        }
    }
    int64_t v11 = a1; // 0x402732
    int64_t v12 = 0; // 0x402732
    int64_t v13 = 0; // 0x402732
    int64_t v14 = 0; // 0x402732
    char * v15 = (char *)&v1; // 0x402732
    int64_t v16 = v6; // 0x402732
    int64_t v17 = v5; // 0x402732
    int64_t v18 = v4; // 0x402732
    int64_t v19 = a1; // 0x402732
    int64_t v20; // 0x402690
    int64_t v21; // 0x402690
    int64_t v22; // 0x402690
    int64_t v23; // 0x402690
    char * v24; // 0x402690
    int64_t v25; // 0x402690
    int64_t v26; // 0x402690
    int64_t v27; // 0x402690
    int64_t v28; // 0x402690
    int64_t v29; // 0x402690
    int64_t v30; // 0x402690
    int64_t v31; // 0x402690
    int64_t v32; // 0x402690
    int64_t v33; // 0x402690
    int32_t * v34; // 0x402690
    int32_t * v35; // 0x402690
    int32_t v36; // 0x402690
    int32_t v37; // 0x402690
    int32_t v38; // 0x402690
    int64_t v39; // 0x402690
    int64_t v40; // 0x402690
    int64_t v41; // 0x402690
    int64_t v42; // 0x402690
    int64_t v43; // 0x402690
    int64_t v44; // 0x402690
    int64_t v45; // 0x402690
    uint64_t v46; // 0x402690
    int64_t v47; // 0x402773
    char * str3; // 0x402690
    int64_t v48; // 0x402773
    char * v49; // 0x402690
    int64_t v50; // 0x402a04
    char * str2; // 0x402a18
    int32_t len2; // 0x402a18
    int64_t v51; // 0x402a18
    int32_t len3; // 0x402a23
    while (true) {
      lab_0x402738_4:
        // 0x402738
        v37 = v36;
        v40 = v14;
        int64_t v52 = v13;
        int64_t v53 = v11;
        int16_t v54 = (int16_t)v37 & -0x1000;
        v42 = v12;
        v24 = v15;
        v27 = v16;
        v22 = v19;
        int32_t v55; // 0x402690
        while (true) {
          lab_0x402738_3:
            // 0x402738
            v21 = v18;
            v26 = v17;
            v43 = v42;
            v46 = v21 + 1;
            v25 = (int64_t)*v24;
            v29 = v27;
            v23 = v22;
            int64_t v56; // 0x402690
            int64_t v57; // 0x402790
            while (true) {
              lab_0x402738_2:
                // 0x402738
                v30 = v29;
                if (v25 == 0) {
                    // break (via goto) -> 0x402940
                    goto lab_0x402940_3;
                }
                int64_t v58 = v23; // 0x402744
                int64_t v59 = v25; // 0x402744
                int64_t v60 = v23; // 0x402744
                int64_t v61; // 0x402750
                unsigned char v62; // 0x402754
                if (v25 == 47) {
                    v61 = v58 + 1;
                    v62 = *(char *)v61;
                    v58 = v61;
                    while (v62 == 47) {
                        // 0x402750
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                    }
                    // 0x40275d
                    v59 = v62;
                    v60 = v61;
                    if (v62 == 0) {
                        // break (via goto) -> 0x402940
                        goto lab_0x402940_3;
                    }
                }
                // 0x402765
                v56 = v60;
                int64_t v63 = v59;
                v47 = v56 + 1;
                str3 = (char *)v47;
                unsigned char v64 = *str3; // 0x402773
                int64_t v65 = v47; // 0x40277e
                while (v64 != 0 == (v64 != 47)) {
                    // 0x402773
                    v47 = v65 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                }
                if (v47 == v56) {
                    // break (via goto) -> 0x402940
                    goto lab_0x402940_3;
                }
                // 0x40278d
                v48 = v64;
                v57 = v47 - v56;
                while (v57 != 1) {
                    if (v57 == 2 != ((char)v63 == 46)) {
                        // break (via goto) -> 0x4027ac
                        goto lab_0x4027ac_2;
                    }
                    // 0x402b00
                    if (*(char *)(v56 + 1) != 46) {
                        // break (via goto) -> 0x4027ac
                        goto lab_0x4027ac_2;
                    }
                    int64_t v66 = v48; // 0x402b16
                    int64_t v67 = v47; // 0x402b16
                    if (v30 > v46) {
                        int64_t v68 = v30 - 1; // 0x402b1c
                        v28 = v68;
                        if (v21 >= v68) {
                            goto lab_0x402738;
                        } else {
                            int64_t v69 = v30 - 2; // 0x402b25
                            v28 = v68;
                            if (*(char *)v69 != 47) {
                                // 0x402c63
                                v28 = v21;
                                v31 = v69;
                                if (v21 == v69) {
                                    goto lab_0x402738;
                                } else {
                                    goto lab_0x402c70;
                                }
                            } else {
                                goto lab_0x402738;
                            }
                        }
                    }
                    if (v66 == 0) {
                        // break (via goto) -> 0x402940
                        goto lab_0x402940_3;
                    }
                    // 0x402740
                    v58 = v67;
                    v59 = v66;
                    v60 = v67;
                    if (v66 == 47) {
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                        while (v62 == 47) {
                            // 0x402750
                            v61 = v58 + 1;
                            v62 = *(char *)v61;
                            v58 = v61;
                        }
                        // 0x40275d
                        v59 = v62;
                        v60 = v61;
                        if (v62 == 0) {
                            // break (via goto) -> 0x402940
                            goto lab_0x402940_3;
                        }
                    }
                    // 0x402765
                    v56 = v60;
                    v63 = v59;
                    v47 = v56 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                    while (v64 != 0 == (v64 != 47)) {
                        // 0x402773
                        v47 = v65 + 1;
                        str3 = (char *)v47;
                        v64 = *str3;
                        v65 = v47;
                    }
                    if (v47 == v56) {
                        // break (via goto) -> 0x402940
                        goto lab_0x402940_3;
                    }
                    // 0x40278d
                    v48 = v64;
                    v57 = v47 - v56;
                }
                // 0x402928
                v28 = v30;
                if ((char)v63 != 46) {
                    // break -> 0x4027ac
                    break;
                }
                goto lab_0x402738;
            }
          lab_0x4027ac_2:;
            int64_t v70 = v30; // 0x4027b0
            if (*(char *)(v30 - 1) != 47) {
                // 0x4027b2
                *(char *)v30 = 47;
                v70 = v30 + 1;
            }
            int64_t v71 = v70;
            int64_t v72 = v71 + v57;
            int64_t v73 = v72; // 0x4027c0
            int64_t v74 = v71; // 0x4027c0
            v17 = v26;
            int64_t v75 = v21; // 0x4027c0
            if (v26 <= v72) {
                int64_t v76 = v57 < 0x1000 == (4095 - v57 & v57) < 0 ? v57 + 1 : 0x1000;
                int64_t v77 = v76 + v26 - v21; // 0x4027e3
                v75 = function_406530(v21, v77);
                v74 = v75 + v71 - v21;
                v73 = v74 + v57;
                v17 = v75 + v77;
            }
            // 0x4027fd
            v18 = v75;
            v20 = v73;
            memcpy((int64_t *)v74, (int64_t *)v56, (int32_t)v57);
            *(char *)v20 = 0;
            v55 = 0;
            if ((a2 & 4) != 0 && v3 == 2) {
                // break -> 0x402833
                break;
            }
            // 0x402870
            v1 = 1;
            v49 = (char *)v18;
            int64_t v78; // bp-200, 0x402690
            int32_t v79; // 0x402690
            if ((a2 & 4) == 0) {
                // 0x4029a8
                v79 = __lxstat(1, v49, (struct stat *)&v78);
            } else {
                // 0x402889
                v79 = __xstat(1, v49, (struct stat *)&v78);
            }
            // 0x402893
            if (v79 == 0) {
                // 0x402900
                v55 = v37;
                v15 = str3;
                v11 = v53;
                v12 = v43;
                v13 = v52;
                v14 = v40;
                v38 = v37;
                v16 = v20;
                v19 = v47;
                switch (v54) {
                    case -0x6000: {
                        int64_t v80 = v43; // 0x4029c6
                        if (v43 == 0) {
                            // 0x402b53
                            v1 = 7;
                            v80 = function_403730(7, 0, 0x4040f0, 0x404160, 0x4041a0);
                            if (v80 == 0) {
                                // 0x402b7d
                                function_406720(7);
                                // UNREACHABLE
                            }
                        }
                        // 0x4029cc
                        v45 = v80;
                        int64_t v81 = function_402e60(v45, v53, &v78); // 0x4029db
                        if ((char)v81 != 0) {
                            // 0x402a99
                            v44 = v45;
                            if (v3 != 2) {
                                // 0x402aa4
                                v32 = 40;
                                v34 = __errno_location();
                                goto lab_0x402ab1_2;
                            }
                        } else {
                            // 0x4029e8
                            function_402dd0(v45, v53, &v78);
                            int64_t v82; // 0x402690
                            v50 = function_407ab0(v18, v82);
                            if (v50 != 0) {
                                // 0x402a15
                                str2 = (char *)v50;
                                len2 = strlen(str2);
                                v51 = len2;
                                len3 = strlen(str3);
                                uint64_t v83 = v51 + 1 + (int64_t)len3; // 0x402a31
                                if (v52 == 0) {
                                    int64_t v84 = v83 >= 0x1000 ? v83 : 0x1000; // 0x402be1
                                    int64_t v85 = function_4064d0(v84); // 0x402bed
                                    v39 = v84;
                                    v41 = v85;
                                    goto lab_0x402a47;
                                } else {
                                    // 0x402a3c
                                    v39 = v52;
                                    v41 = v40;
                                    if (v83 > v52) {
                                        int64_t v86 = function_406530(v40, v83); // 0x402ca2
                                        v39 = v83;
                                        v41 = v86;
                                        goto lab_0x402a47;
                                    } else {
                                        goto lab_0x402a47;
                                    }
                                }
                            }
                            int32_t * v87 = __errno_location(); // 0x402c33
                            uint32_t v88 = *v87; // 0x402c40
                            v44 = v45;
                            if (v3 == 2 != v88 != 12) {
                                // 0x402ab1
                                v32 = v88;
                                v34 = v87;
                                goto lab_0x402ab1_2;
                            }
                        }
                        goto lab_0x4028e9;
                    }
                    case 0x4000: {
                        goto lab_0x402844;
                    }
                    default: {
                        goto lab_0x402833;
                    }
                }
            } else {
                int32_t * v89 = __errno_location(); // 0x402897
                uint32_t v90 = *v89; // 0x40289f
                if (v3 == 0) {
                    // 0x402b95
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x402b95_3;
                }
                // 0x4028ad
                v55 = 0;
                if (v3 != 1) {
                    // break -> 0x402833
                    break;
                }
                char v91 = *(char *)(v47 + (int64_t)strspn(str3, "/")); // 0x4028d5
                v44 = v43;
                if (v90 == 2 != (v91 == 0)) {
                    // 0x402b95
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x402b95_3;
                }
                goto lab_0x4028e9;
            }
        }
      lab_0x402833:
        // 0x402833
        v15 = str3;
        v11 = v53;
        v12 = v43;
        v13 = v52;
        v14 = v40;
        v38 = v55;
        v16 = v20;
        v19 = v47;
        if (v3 != 2 == (*str3 != 0)) {
            // 0x402b88
            v33 = 20;
            v35 = __errno_location();
            goto lab_0x402b95_3;
        }
        goto lab_0x402844;
    }
  lab_0x402940_3:;
    char * v92; // 0x402690
    int64_t v93; // 0x402690
    int64_t v94; // 0x402690
    if (v30 > v46) {
        int64_t v95 = v30 - 1; // 0x40294a
        char * v96 = (char *)v95;
        v92 = v96;
        v93 = v30;
        v94 = v95;
        if (*v96 == 47) {
            goto lab_0x402958;
        } else {
            goto lab_0x402954;
        }
    } else {
        goto lab_0x402954;
    }
  lab_0x402738:
    // 0x402738
    v25 = v48;
    v29 = v28;
    v23 = v47;
    goto lab_0x402738_2;
  lab_0x402844:
    // 0x402844
    v36 = v38;
    goto lab_0x402738_4;
  lab_0x4028e9:
    // 0x4028e9
    v42 = v44;
    v24 = str3;
    v27 = v20;
    v22 = v47;
    goto lab_0x402738_3;
  lab_0x402954:
    // 0x402954
    v92 = (char *)v30;
    v93 = v30 + 1;
    v94 = v30;
    goto lab_0x402958;
  lab_0x402958:
    // 0x402958
    *v92 = 0;
    int64_t v97 = v21; // 0x40295e
    if (v26 != v93) {
        // 0x402960
        v97 = function_406530(v21, 1 - v21 + v94);
    }
    // 0x402972
    free((int64_t *)v40);
    int64_t result = v97; // 0x402984
    if (v43 != 0) {
        // 0x402986
        function_403970(v43);
        result = v97;
    }
  lab_0x40298e:
    // 0x40298e
    return result;
  lab_0x402c70:;
    int64_t v98 = v31 - 1; // 0x402c70
    v28 = v31;
    if (*(char *)v98 == 47) {
        goto lab_0x402738;
    } else {
        // 0x402c7a
        v28 = v98;
        v31 = v98;
        if (v21 != v98) {
            goto lab_0x402c70;
        } else {
            goto lab_0x402738;
        }
    }
  lab_0x402b95_3:
    // 0x402b95
    free((int64_t *)v40);
    free((int64_t *)v18);
    int64_t v99 = v43; // 0x402bbf
    int64_t v100 = v33; // 0x402bbf
    int32_t * v101 = v35; // 0x402bbf
    if (v43 == 0) {
        goto lab_0x402af1;
    } else {
        goto lab_0x402ad5;
    }
  lab_0x402af1:
    // 0x402af1
    *v101 = (int32_t)(v100 & 0xffffffff);
    result = 0;
    goto lab_0x40298e;
  lab_0x402ad5:
    // 0x402ad5
    function_403970(v99);
    goto lab_0x402af1;
  lab_0x402ab1_2:
    // 0x402ab1
    free((int64_t *)v40);
    free((int64_t *)v18);
    v99 = v45;
    v100 = v32;
    v101 = v34;
    goto lab_0x402ad5;
  lab_0x402a47:
    // 0x402a47
    memmove((int64_t *)(v41 + v51), (int64_t *)v47, len3 + 1);
    int64_t * v102 = (int64_t *)v50; // 0x402a67
    int64_t * dest_mem = memcpy((int64_t *)v41, v102, len2); // 0x402a67
    int64_t v103 = v18 + 1; // 0x402a70
    int64_t v104; // 0x402690
    int64_t v105; // 0x402690
    if (*str2 == 47) {
        // 0x402c56
        *v49 = 47;
        v104 = v103;
        goto lab_0x402a8c;
    } else {
        // 0x402a83
        v104 = v20;
        if (v20 > v103) {
            int64_t v106 = v20 - 1; // 0x402ccc
            v104 = v106;
            if (v18 >= v106) {
                goto lab_0x402a8c;
            } else {
                // 0x402cd5
                v104 = v106;
                v105 = v106;
                if (*(char *)(v20 - 2) == 47) {
                    goto lab_0x402a8c;
                } else {
                    goto lab_0x402ce2;
                }
            }
        } else {
            goto lab_0x402a8c;
        }
    }
  lab_0x402a8c:;
    int64_t v107 = (int64_t)dest_mem; // 0x402a67
    free(v102);
    v15 = (char *)dest_mem;
    v11 = v107;
    v12 = v45;
    v13 = v39;
    v14 = v41;
    v38 = v37;
    v16 = v104;
    v19 = v107;
    goto lab_0x402844;
  lab_0x402ce2:;
    int64_t v108 = v105;
    int64_t v109 = v108 - 1; // 0x402ce2
    v104 = v18;
    if (v18 == v109) {
        goto lab_0x402a8c;
    } else {
        // 0x402cef
        v104 = v109;
        v105 = v109;
        if (*(char *)(v108 - 2) == 47) {
            goto lab_0x402a8c;
        } else {
            goto lab_0x402ce2;
        }
    }
}
// Address range: 0x402d10 - 0x402d18
int64_t function_402d10(int64_t a1) {
    // 0x402d10
    g41 = a1;
    int64_t result; // 0x402d10
    return result;
}
// Address range: 0x402d20 - 0x402d28
int64_t function_402d20(int64_t a1) {
    // 0x402d20
    g40 = a1;
    int64_t result; // 0x402d20
    return result;
}
// Address range: 0x402d30 - 0x402dce
int64_t function_402d30(void) {
    // 0x402d30
    int32_t * err_num; // 0x402d46
    if ((int32_t)function_407ba0((int64_t)g31) == 0) {
        goto lab_0x402d5c;
    } else {
        // 0x402d46
        err_num = __errno_location();
        if (g40 == 0) {
            goto lab_0x402d73;
        } else {
            // 0x402d57
            if (*err_num != 32) {
                goto lab_0x402d73;
            } else {
                goto lab_0x402d5c;
            }
        }
    }
  lab_0x402d5c:;
    int64_t result = function_407ba0((int64_t)g33); // 0x402d63
    if ((int32_t)result == 0) {
        // 0x402d6c
        return result;
    }
    // 0x402dae
    _exit(g20);
    // UNREACHABLE
  lab_0x402d73:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402d7f
    if (g41 == 0) {
        // 0x402db9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402d93
        error(0, *err_num, "%s: %s", (char *)function_405c30((int64_t)g41), v1);
    }
    // 0x402dae
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x402dd0 - 0x402e56
int64_t function_402dd0(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x402e40
        int64_t result; // 0x402dd0
        return result;
    }
    int64_t v1 = (int64_t)a3;
    int64_t result2 = function_4064d0(24); // 0x402ded
    *(int64_t *)result2 = function_406700(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(v1 + 8);
    *(int64_t *)(result2 + 16) = v1;
    int64_t v2 = function_403ed0(a1, result2); // 0x402e16
    if (v2 == 0) {
        // 0x402e51
        function_406720(a1);
        // UNREACHABLE
    }
    // 0x402e20
    if (result2 == v2) {
        // 0x402e40
        return result2;
    }
    // 0x402e25
    return function_4041a0(result2);
}
// Address range: 0x402e60 - 0x402e9b
int64_t function_402e60(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x402e98
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x402e6d
    int64_t v2 = function_4034c0(a1, &v1); // 0x402e81
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x402ea0 - 0x402f33
int64_t function_402ea0(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x402eb7
    if (v1 == -1) {
        // 0x402f2f
        return -1;
    }
    int64_t v2 = v1; // 0x402ebf
    int64_t v3; // 0x402ea0
    while (true) {
      lab_0x402ec8:
        // 0x402ec8
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x402f20;
        } else {
            goto lab_0x402f25;
        }
    }
  lab_0x402f2f_2:;
    // 0x402f2f
    int64_t result; // 0x402ea0
    return result;
  lab_0x402f25:;
    int64_t v4 = v3 + 2; // 0x402f25
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x402f2f
        goto lab_0x402f2f_2;
    }
    goto lab_0x402ec8;
  lab_0x402f20:
    // 0x402f20
    result = v3;
    goto lab_0x402f25;
}
// Address range: 0x402f40 - 0x402f50
int64_t function_402f40(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x402f40
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x402f50 - 0x402f57
int64_t function_402f50(int64_t a1, int64_t a2) {
    // 0x402f50
    int64_t v1; // 0x402f50
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x402f60 - 0x402f81
int64_t function_402f60(int64_t a1, int64_t a2) {
    // 0x402f60
    int64_t v1; // 0x402f60
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x402f78
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402f90 - 0x4030a9
int64_t function_402f90(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_402f60(a1, a2); // 0x402fa4
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x402fac
    int64_t result2 = *v2; // 0x402fac
    if (result2 == 0) {
        // 0x40303e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x402fd4
            if (v3 == 0) {
                // 0x40303e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x402fe1
            int64_t v5 = v3; // 0x402fe7
            int64_t v6 = v1; // 0x402fe7
            int64_t result = v4; // 0x402fe7
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40301c_2:
                // 0x40301c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x403021
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x403030
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40303e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x402ff4
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x403001
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40301c_2;
                }
                // 0x403009
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40301c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40303e
            return 0;
        }
    }
    // 0x403053
    if ((char)a4 == 0) {
        // 0x40303e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x403058
    if (v12 == 0) {
        // 0x4030a0
        *v2 = 0;
        // 0x40303e
        return result2;
    }
    // 0x403061
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40306f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x4030b0 - 0x40312e
int64_t function_4030b0(uint64_t a1) {
    if (a1 == (int64_t)&g3) {
        // 0x40312d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x4030bb
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g3) {
        // 0x40311a
        *(int64_t *)a1 = (int64_t)&g3;
        return 0;
    }
    // 0x4030c9
    __asm_comiss_1(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x4030e4
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_2(v2, 0x3dcccccd); // 0x4030f1
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x4030f9
    __asm_comiss_1(v4, v3);
    __asm_comiss_1(__asm_movss(0x3f800000), v4);
    __asm_comiss_1(v1, v3);
    // 0x40312d
    return 1;
}
// Address range: 0x403130 - 0x40327a
int64_t function_403130(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40314a
    uint64_t v2 = *v1; // 0x40314a
    if (v2 <= a2) {
        // 0x403234
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x403130
    int64_t v8 = a2; // 0x403130
    int64_t v9; // 0x403130
    int64_t result; // 0x403130
    int64_t v10; // 0x403130
    while (true) {
      lab_0x403166_2:
        // 0x403166
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x403166
        int64_t v12 = *v11; // 0x403166
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x403158;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40316f
            int64_t v14 = *v13; // 0x40316f
            int64_t v15 = v14; // 0x403177
            int64_t v16 = v12; // 0x403177
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x403194
                    int64_t v19 = *v18; // 0x403194
                    int64_t v20 = function_402f60(v3, v19); // 0x40319d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x4031a2
                    int64_t v22 = *v21; // 0x4031a2
                    int64_t * v23 = (int64_t *)v20; // 0x4031a6
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x403180
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x4031cf
                            break;
                        }
                    } else {
                        // 0x4031ac
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x4031cf
                            break;
                        }
                    }
                    // 0x403194
                    v15 = v22;
                }
                // 0x4031cf
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x4031d3
                v9 = *v1;
                goto lab_0x403158;
            } else {
                int64_t v26 = function_402f60(v3, v25); // 0x4031eb
                int64_t * v27 = (int64_t *)v26; // 0x4031f0
                if (*v27 == 0) {
                    // 0x403250
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x4031f9
                    int64_t * v29; // 0x403130
                    int64_t v30; // 0x403130
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x40325f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x403234
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x40325f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40320a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x403219
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x403221
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40322a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x403234
                    break;
                }
                goto lab_0x403166_2;
            }
        }
    }
    // 0x403234
    return result;
  lab_0x403158:;
    int64_t v36 = v10 + 16; // 0x403158
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x403166_2;
    // 0x403166
    goto lab_0x403166_2;
}
// Address range: 0x403280 - 0x403285
int64_t function_403280(int64_t a1) {
    // 0x403280
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x403290 - 0x403295
int64_t function_403290(int64_t a1) {
    // 0x403290
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x4032a0 - 0x4032a5
int64_t function_4032a0(int64_t a1) {
    // 0x4032a0
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x4032b0 - 0x4032ff
int64_t function_4032b0(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4032b3
    int64_t result = 0; // 0x4032bc
    if (v1 <= a1) {
      lab_0x4032fd:
        // 0x4032fd
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x4032c0
    while (*(int64_t *)v3 == 0) {
        // 0x4032c0
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x4032cf
    int64_t v6 = v5; // 0x4032db
    int64_t v7 = 1; // 0x4032db
    int64_t v8; // 0x4032b0
    int64_t v9; // 0x4032e0
    int64_t v10; // 0x4032e4
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x4032e0
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x4032f0
    int64_t v12 = v3 + 16; // 0x4032f4
    while (v12 < v1) {
        // 0x4032c9
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x4032c0
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x4032cf
        v5 = *(int64_t *)(v3 + 8);
        v6 = v5;
        v7 = 1;
        if (v5 != 0) {
            v9 = *(int64_t *)(v6 + 8);
            v10 = 2;
            v8 = v10;
            v6 = v9;
            v7 = v10;
            while (v9 != 0) {
                // 0x4032e0
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x4032ed
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x4032fd
    return result2;
}
// Address range: 0x403300 - 0x403367
int64_t function_403300(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x403303
    int64_t v2 = a1; // 0x40330f
    int64_t v3 = 0; // 0x40330f
    int64_t v4 = 0; // 0x40330f
    int64_t v5 = 0; // 0x40330f
    int64_t v6 = 0; // 0x40330f
    int64_t v7; // 0x403300
    int64_t v8; // 0x403300
    int64_t v9; // 0x403300
    if (v1 > a1) {
        while (true) {
          lab_0x403321_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x403318;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x403327
                int64_t v13 = v10 + 1; // 0x40332b
                int64_t v14 = v11 + 1; // 0x40332f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x403336
                int64_t v16 = v14; // 0x403336
                if (v12 == 0) {
                    goto lab_0x403318;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x403340
                    int64_t v18 = v16 + 1; // 0x403344
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x403340
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40334d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x403356
                        break;
                    }
                    goto lab_0x403321_2;
                }
            }
        }
    }
  lab_0x403356:
    // 0x403356
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40335f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40335e
    return 0;
  lab_0x403318:;
    int64_t v20 = v8 + 16; // 0x403318
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x403356
        goto lab_0x403356;
    }
    goto lab_0x403321_2;
    // 0x403321
    goto lab_0x403321_2;
}
// Address range: 0x403370 - 0x4034b8
int64_t function_403370(uint64_t a1, int64_t a2) {
    // 0x403370
    int128_t v1; // 0x403370
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x403383
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x403387
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40338e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x4033a0
            while (*(int64_t *)v7 == 0) {
                // 0x4033a0
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x4033dd
                    goto lab_0x4033dd;
                }
            }
        }
    }
  lab_0x4033dd:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x4033ec
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x403370
    int128_t v10; // 0x403370
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x403483
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40348c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x403423;
        } else {
            goto lab_0x403499;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x403416
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x403499;
        } else {
            goto lab_0x403423;
        }
    }
  lab_0x403423:
    // 0x403423
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x403427
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x403427
    goto lab_0x40342c;
  lab_0x403499:
    // 0x403499
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x4034aa
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40342c;
  lab_0x40342c:
    // 0x40342c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x4034c0 - 0x403513
int64_t function_4034c0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_402f60(a1, result); // 0x4034ca
    int64_t v2 = *(int64_t *)v1; // 0x4034cf
    if (v2 == 0) {
        // 0x4034fd
        return 0;
    }
    // 0x4034e3
    if (v2 == result) {
        // 0x4034fd
        return result;
    }
    int64_t v3 = v1; // 0x4034f4
    int64_t result2 = v2; // 0x4034f2
    while ((char)v1 == 0) {
        // 0x4034f4
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x4034fd
            break;
        }
        // 0x4034e0
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x4034fd
            break;
        }
        result2 = v2;
    }
    // 0x4034fd
    return result2;
}
// Address range: 0x403520 - 0x403568
int64_t function_403520(uint64_t a1) {
    int64_t result = 0; // 0x403525
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x403537
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40352e
    if (v1 <= a1) {
        // 0x403537
        return result;
    }
    int64_t v2 = a1; // 0x403535
    int64_t v3 = *(int64_t *)v2; // 0x403549
    result = v3;
    while (v3 == 0) {
        // 0x403540
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x403537
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x403537
    return result;
}
// Address range: 0x403570 - 0x4035da
int64_t function_403570(int64_t a1, int64_t a2) {
    int64_t v1 = function_402f60(a1, a2); // 0x40357c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x403598
    while (*(int64_t *)v2 != a2) {
        // 0x403590
        if (v3 == 0) {
            goto lab_0x4035a6;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x4035d0
        return *(int64_t *)v3;
    }
  lab_0x4035a6:;
    int64_t v4 = v1 + 16; // 0x4035b8
    int64_t result = 0; // 0x4035bf
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x4035b0
        result = v5;
        if (v5 != 0) {
            // break -> 0x4035c3
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x4035c3
    return result;
}
// Address range: 0x4035e0 - 0x403644
int64_t function_4035e0(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4035e6
    int64_t result = 0; // 0x4035ea
    if (*v1 <= a1) {
      lab_0x403601:
        // 0x403601
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x4035ef
    int64_t v4 = v2; // 0x4035f5
    int64_t v5; // 0x4035e0
    int64_t v6; // 0x4035e0
    int64_t v7; // 0x403628
    int64_t v8; // 0x403631
    int64_t v9; // 0x403611
    int64_t v10; // 0x403615
    if (v3 != 0) {
        // 0x403608
        if (v2 >= a3) {
            // break -> 0x403601
            break;
        }
        // 0x40360d
        *(int64_t *)(8 * v2 + a2) = v3;
        v9 = *(int64_t *)(a1 + 8);
        v10 = v2 + 1;
        v4 = v10;
        v6 = v10;
        v5 = v9;
        if (v9 != 0) {
            result = a3;
            if (v6 == a3) {
                return result;
            }
            // 0x403625
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x403620
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x403625
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
            }
        }
    }
    int64_t v11 = v4;
    int64_t v12 = a1 + 16; // 0x4035f7
    result = v11;
    while (*v1 > v12) {
        // 0x4035ef
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x403608
            result = v2;
            if (v2 >= a3) {
                // break -> 0x403601
                break;
            }
            // 0x40360d
            *(int64_t *)(8 * v2 + a2) = v3;
            v9 = *(int64_t *)(v13 + 8);
            v10 = v2 + 1;
            v4 = v10;
            v6 = v10;
            v5 = v9;
            if (v9 != 0) {
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x403625
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x403620
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x403625
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x4035f7
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x403601
    return result;
}
// Address range: 0x403650 - 0x4036c8
int64_t function_403650(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x403661
    int64_t result = 0; // 0x403665
    if (v1 <= a1) {
      lab_0x403684:
        // 0x403684
        return result;
    }
    int64_t v2 = a1; // 0x40367a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x403678
    int64_t v5 = v2; // 0x403678
    int64_t v6 = v3; // 0x403678
    int64_t v7; // 0x403650
    int64_t v8; // 0x4036a8
    int64_t v9; // 0x4036ac
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x4036a8
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x4036b8
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x4036a8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
        }
    }
    int64_t result2 = v4;
    v2 += 16;
    while (v1 > v2) {
        // 0x403672
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x4036a8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x4036b8
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x4036a8
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40367a
        result2 = v4;
        v2 += 16;
    }
    // 0x403684
    return result2;
}
// Address range: 0x4036d0 - 0x403701
int64_t function_4036d0(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x4036d7
    if (v1 == 0) {
        // 0x4036fd
        return 0;
    }
    int64_t result = 0; // 0x4036d7
    v2++;
    char v3 = *(char *)v2; // 0x4036f3
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x4036fd
    return result;
}
// Address range: 0x403710 - 0x403730
int64_t function_403710(int64_t a1) {
    // 0x403710
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x403730 - 0x4038ba
int64_t function_403730(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x403730
    int128_t v1; // 0x403730
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40376a
    int64_t result = (int64_t)mem; // 0x40376a
    if (mem == NULL) {
        // 0x40381a
        return result;
    }
    int64_t v3 = result + 40; // 0x40377b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x403730
    int128_t v6; // 0x403730
    if (a2 == 0) {
        // 0x403830
        *v4 = (int64_t)&g3;
        int64_t v7 = function_4030b0(v3); // 0x403838
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40383d
        if ((char)v7 == 0) {
            // 0x403810
            free(mem);
            // 0x40381a
            return 0;
        }
        // 0x403849
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x403893;
        } else {
            goto lab_0x40384e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_4030b0(v3) == 0) {
            // 0x403810
            free(mem);
            // 0x40381a
            return 0;
        }
        // 0x403795
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_402ea0(a1); // 0x4037a3
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x403810
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x403810
                free(mem);
                // 0x40381a
                return 0;
            }
            // 0x4037c1
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x403810
                free(mem);
                // 0x40381a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x4037d2
            int64_t v10 = (int64_t)mem2; // 0x4037d2
            *mem = v10;
            if (mem2 == NULL) {
                // 0x403810
                free(mem);
                // 0x40381a
                return 0;
            }
            // 0x4037df
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x402f40 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x402f50 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40381a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x403888
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40384e;
        } else {
            goto lab_0x403893;
        }
    }
  lab_0x403893:
    // 0x403893
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x4038a3
    int128_t v13 = v6; // 0x4038ac
    int128_t v14 = __asm_addss(v12, v12); // 0x4038ac
    goto lab_0x403857;
  lab_0x40384e:
    // 0x40384e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x403857;
  lab_0x403857:
    // 0x403857
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x403810
    free(mem);
    // 0x40381a
    return 0;
}
// Address range: 0x4038c0 - 0x403968
int64_t function_4038c0(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4038ca
    uint64_t v2 = *v1; // 0x4038ca
    int64_t result; // 0x4038c0
    if (v2 <= a1) {
      lab_0x403953:
        // 0x403953
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x4038d8
    while (*v6 == 0) {
        // 0x4038d8
        v7 = v5 + 16;
        int64_t v8; // 0x4038c0
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x403953
            goto lab_0x403953;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x4038e9
    int64_t v10 = *v9; // 0x4038e9
    int64_t v11 = *v3; // 0x4038ee
    int64_t v12 = v11; // 0x4038f5
    int64_t v13 = v10; // 0x4038f5
    int64_t result2 = v11; // 0x4038f5
    int64_t * v14; // 0x40390e
    int64_t v15; // 0x40390e
    int64_t v16; // 0x40390a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x403905
            v16 = *v3;
        }
        // 0x40390e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x403900
            v16 = 0;
            if (v12 != 0) {
                // 0x403905
                v16 = *v3;
            }
            // 0x40390e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
        }
    }
    // 0x40392d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x403940
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40394d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x4038dc
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x4038d8
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x403953
                goto lab_0x403953;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x4038e9
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x403905
                v16 = *v3;
            }
            // 0x40390e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x403900
                v16 = 0;
                if (v12 != 0) {
                    // 0x403905
                    v16 = *v3;
                }
                // 0x40390e
                v14 = (int64_t *)(v13 + 8);
                v15 = *v14;
                *(int64_t *)v13 = 0;
                *v14 = *v4;
                *v4 = v13;
                v12 = v16;
                v13 = v15;
                result2 = v16;
            }
        }
        // 0x40392d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x403953
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x403970 - 0x403a46
int64_t function_403970(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40397f
    uint64_t v2 = *v1; // 0x40397f
    int64_t v3 = a1; // 0x403983
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x4039d3;
    } else {
        // 0x403985
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x4039d3;
        } else {
            // 0x40398c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x4039a1
                int64_t v6; // 0x403998
                while (v5 == 0) {
                    // 0x403998
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x4039d3
                        goto lab_0x4039d3;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x4039b8
                int64_t v8 = v7; // 0x4039bf
                int64_t v9 = v5; // 0x4039bf
                int64_t v10; // 0x403970
                int64_t v11; // 0x4039b8
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x4039b0
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x4039b3
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x4039c6
                v3 = v9;
                while (v2 > v12) {
                    // 0x4039a1
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x403998
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x4039d3
                            goto lab_0x4039d3;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x4039b3
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x4039b0
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x4039b3
                        v9 = *(int64_t *)v10;
                    }
                    // 0x4039c1
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x4039d3;
            } else {
                goto lab_0x403a0c;
            }
        }
    }
  lab_0x4039d3:
    // 0x4039d3
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x4039e0
        int64_t v14 = v13; // 0x4039e7
        int64_t v15 = v2; // 0x4039e7
        int64_t v16; // 0x4039f0
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x4039f0
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x403a01
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x403a01
        int64_t v18 = v15; // 0x403a0a
        int64_t v19 = v17; // 0x403a0a
        while (v15 > v17) {
            // 0x4039e0
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x4039f0
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x403a01
                v15 = *v1;
            }
            // 0x403a01
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x403a0c;
  lab_0x403a0c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x403a0c
    if (v20 == 0) {
        // 0x403a31
        free(NULL);
        free((int64_t *)a1);
        return &g54;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x403a20
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x403a2f
    while (v21 != 0) {
        // 0x403a20
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x403a31
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g54;
}
// Address range: 0x403a50 - 0x403c4a
int64_t function_403a50(int64_t a1, uint64_t a2) {
    // 0x403a50
    int128_t v1; // 0x403a50
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x403a5b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x403a50
        if (a2 < 0) {
            // 0x403bd0
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x403be0
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x403a70
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x403a79
        __asm_comiss(__asm_divss_4(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x403bc2
        return 0;
    }
    uint64_t nmemb = function_402ea0(a2); // 0x403ab3
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x403bc2
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x403aeb
    if (*v6 == nmemb) {
        // 0x403bc2
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x403afd
    int64_t v7 = (int64_t)mem; // 0x403afd
    int64_t v8 = v7; // bp-104, 0x403b02
    if (mem == NULL) {
        // 0x403bc2
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x403b5a
    int64_t v10 = *v9; // 0x403b5a
    int64_t v11 = function_403130(&v8, a1, 0); // 0x403b63
    int64_t result = v11 & 0xffffffff; // 0x403b68
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x403b24
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x403b86
        function_403130(v13, v12, 1);
        function_403130(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x403c10
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x403bc2
    return result;
}
// Address range: 0x403c50 - 0x403ec4
int64_t function_403c50(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x403c50
    int128_t v1; // 0x403c50
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x403c50
    int64_t v5 = function_402f90(a1, a2, &v4, 0); // 0x403c71
    if (v5 != 0) {
        // 0x403c7e
        if (a3 != NULL) {
            // 0x403c85
            *a3 = v5;
        }
        // 0x403c89
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x403c98
    uint64_t v7 = *v6; // 0x403c98
    int64_t v8; // 0x403c50
    int64_t v9; // 0x403c50
    int64_t v10; // 0x403c50
    int128_t v11; // 0x403c50
    int128_t v12; // 0x403c50
    int64_t v13; // 0x403c50
    if (v7 < 0) {
        // 0x403d20
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x403d30
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x403d34
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x403d39
        int128_t v17 = __asm_addss(v15, v15); // 0x403d3d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x403cbb;
        } else {
            goto lab_0x403d4a;
        }
    } else {
        // 0x403ca1
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x403ca5
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x403ca9
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x403cae
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x403d4a;
        } else {
            goto lab_0x403cbb;
        }
    }
  lab_0x403cbb:
    // 0x403cbb
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x403cc4
    __asm_comiss_1(v11, v21);
    int128_t v22 = v21; // 0x403ccc
    int128_t v23 = v11; // 0x403ccc
    if (v13 == 0) {
        goto lab_0x403cd2;
    } else {
        goto lab_0x403d71;
    }
  lab_0x403d4a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x403d57
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x403d5a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x403d63
    __asm_comiss_1(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x403cd2;
    } else {
        goto lab_0x403d71;
    }
  lab_0x403cd2:;
    int64_t * v28 = (int64_t *)v4; // 0x403cd7
    if (*v28 == 0) {
        // 0x403de8
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x403df1
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x403ce2
    int64_t v31 = *v30; // 0x403ce2
    int64_t * v32; // 0x403c50
    int64_t v33; // 0x403c50
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x403e0d
        if (mem == NULL) {
            // 0x403c89
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x403e0d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x403cf7
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x403d0d
    *v37 = *v37 + 1;
    return 1;
  lab_0x403d71:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x403d71
    function_4030b0(v40);
    int64_t v41 = *(int64_t *)v40; // 0x403d7a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x403d7e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x403d82
    int128_t v44; // 0x403c50
    if (v42 < 0) {
        // 0x403e40
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x403e50
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x403d90
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x403d99
    int128_t v47; // 0x403c50
    int64_t v48; // 0x403c50
    if (v46 < 0) {
        // 0x403e20
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x403e2d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x403e30
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x403da2
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x403da6
        v48 = v46;
        v47 = v51;
    }
    // 0x403dab
    __asm_comiss_1(v47, __asm_mulss_3(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x403dbb
        int128_t v53 = v52; // 0x403dc4
        if (*(char *)(v41 + 16) == 0) {
            // 0x403e60
            v53 = __asm_mulss_3(v52, v43);
        }
        // 0x403dca
        __asm_comiss(v53, 0x5f800000);
        // 0x403c89
        return 0xffffffff;
    }
    goto lab_0x403cd2;
}
// Address range: 0x403ed0 - 0x403f0b
int64_t function_403ed0(int64_t a1, int64_t a2) {
    // 0x403ed0
    int64_t v1; // bp-16, 0x403ed0
    int64_t v2; // 0x403ed0
    int32_t v3 = function_403c50(a1, a2, &v1, v2); // 0x403ee2
    if (v3 == -1) {
        // 0x403ef0
        return 0;
    }
    // 0x403ee7
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x403f10 - 0x4040e7
int64_t function_403f10(int64_t a1) {
    // 0x403f10
    int128_t v1; // 0x403f10
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x403f10
    int64_t v5; // 0x403f10
    int64_t result = function_402f90(a1, v5, &v4, 1); // 0x403f25
    if (result == 0) {
        // 0x403f42
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x403f37
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x403f42
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x403f50
    uint64_t v8 = *v7 - 1; // 0x403f54
    *v7 = v8;
    int64_t v9; // 0x403f10
    int64_t v10; // 0x403f10
    int64_t v11; // 0x403f10
    int128_t v12; // 0x403f10
    int128_t v13; // 0x403f10
    int64_t v14; // 0x403f10
    if (v8 < 0) {
        // 0x404040
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x404050
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x404054
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x404059
        int128_t v18 = __asm_addss(v16, v16); // 0x40405d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x403f7c;
        } else {
            goto lab_0x40406a;
        }
    } else {
        // 0x403f62
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x403f66
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x403f6a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x403f6f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40406a;
        } else {
            goto lab_0x403f7c;
        }
    }
  lab_0x403f7c:
    // 0x403f7c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x403f80
    int64_t v23 = v14; // 0x403f80
    int128_t v24 = v12; // 0x403f80
    int64_t v25 = v10; // 0x403f80
    int128_t v26 = v22; // 0x403f80
    goto lab_0x403f85;
  lab_0x40406a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x404077
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40407a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x403f85;
  lab_0x403f85:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x403f85
    __asm_comiss_1(v28, v27);
    if (v23 == 0) {
        // 0x403f42
        return result;
    }
    int64_t v29 = a1 + 40; // 0x403f8e
    function_4030b0(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x403f97
    int64_t v31 = *(int64_t *)v29; // 0x403f9b
    int128_t v32; // 0x403f10
    if (v30 < 0) {
        // 0x4040b0
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x4040c0
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x403fa8
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x403fb1
    int128_t v35; // 0x403f10
    int64_t v36; // 0x403f10
    if (v34 < 0) {
        // 0x404090
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40409d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x4040a0
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x403fbe
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x403fc2
        v36 = v34;
        v35 = v39;
    }
    // 0x403fc7
    __asm_comiss_1(__asm_mulss_3(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x403f42
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x403fd8
    int128_t v41 = v40; // 0x403fe1
    if (*(char *)(v31 + 16) == 0) {
        // 0x403fe3
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x403fe8
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x4040d8
    if ((char)function_403a50(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x403f42
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40400a
    if (*v43 != 0) {
        int64_t v44; // 0x403f10
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x404018
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x404029
    *v43 = 0;
    // 0x403f42
    return result;
}
// Address range: 0x4040f0 - 0x404117
int64_t function_4040f0(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x4040f0
    return (*(int64_t *)(a1 + 8) ^ function_407dd0(a1, a2, a3)) % a2;
}
// Address range: 0x404120 - 0x40412d
int64_t function_404120(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x404120
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x404130 - 0x404155
int64_t function_404130(int64_t a1, int64_t a2) {
    // 0x404130
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x40413a
        return 0;
    }
    // 0x40414a
    return function_405e00(a1, a2);
}
// Address range: 0x404160 - 0x404193
int64_t function_404160(int64_t str, int64_t str2) {
    // 0x404160
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x40416c
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x404184
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x4041a0 - 0x4041b5
int64_t function_4041a0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x4041a7
    free(v1);
    free(v1);
    return &g54;
}
// Address range: 0x4041c0 - 0x404259
int64_t function_4041c0(int64_t str) {
    // 0x4041c0
    if (str == 0) {
        // 0x404239
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4041ce
    int64_t result = (int64_t)found_char_pos; // 0x4041ce
    if (found_char_pos == NULL) {
        // 0x404229
        g42 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4041d8
    if (v1 - str < 7) {
        // 0x404229
        g42 = str;
        g32 = str;
        return result;
    }
    // 0x4041e8
    bool v2; // 0x4041c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4041c0
    int64_t v5 = result - 6; // 0x4041c0
    int64_t v6 = 7; // 0x4041f6
    unsigned char v7 = *(char *)v5; // 0x4041f6
    char v8 = *(char *)v4; // 0x4041f6
    char v9 = v8; // 0x4041f6
    bool v10 = false; // 0x4041f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x404200
    int64_t v13 = v1; // 0x404200
    int64_t v14 = 3; // 0x404200
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x404229
        g42 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x404212
    char v16 = *(char *)v12; // 0x404212
    char v17 = v16; // 0x404212
    bool v18 = false; // 0x404212
    while (v15 == v16) {
        // 0x404202
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
    int64_t v20 = v1; // 0x40421c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40421e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x404229
    g42 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x404260 - 0x404352
int64_t function_404260(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x404274
    int64_t result = (int64_t)v1; // 0x404274
    if (result != a1) {
        // 0x404281
        return result;
    }
    int64_t v2 = function_407e10(); // 0x404290
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x404346
    if (v3 == 85) {
        // 0x4042a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x404338
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x4042ce
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x4042db
        // 0x404281
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x404338
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40431d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40432a
    // 0x404281
    return result4;
}
// Address range: 0x404360 - 0x4043b7
int64_t function_404360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x404360
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x4043b7 - 0x405581
int64_t function_4043b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x404401
    int64_t v3 = 0; // 0x404401
    int64_t v4; // 0x4043b7
    int64_t v5; // 0x4043b7
    int64_t v6; // 0x4043b7
    int64_t v7; // 0x4043b7
    int64_t v8; // 0x4043b7
    int64_t v9; // 0x4043b7
    int64_t v10; // 0x4043b7
    int64_t v11; // 0x4043b7
    int64_t v12; // 0x4043b7
    int64_t v13; // 0x4043b7
    int64_t v14; // 0x4043b7
    int64_t v15; // 0x4043b7
    int64_t v16; // 0x4043b7
    int64_t v17; // 0x4043b7
    int64_t v18; // 0x4043b7
    int64_t result; // 0x4043b7
    int64_t v19; // 0x4043b7
    int32_t wc; // bp+132, 0x4043b7
    int64_t ps; // bp+136, 0x4043b7
    char v20; // 0x404970
    int64_t v21; // 0x404970
    int64_t v22; // 0x404d18
    int64_t v23; // 0x4043b7
    int64_t v24; // 0x404d37
    int32_t v25; // 0x4043b7
    while (true) {
      lab_0x404408_2:
        // 0x404408
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4043b7
        int64_t v27; // 0x40443c
        while (true) {
          lab_0x404408:
            // 0x404408
            v5 = v26;
            bool v28 = v15 == v5; // 0x404413
            if (v15 == -1) {
                // 0x404415
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x404423
            if (v28) {
                // break (via goto) -> 0x404b88
                goto lab_0x404b88;
            }
            // 0x40442c
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
                    // 0x404a1b
                    if (v25 % 2 == 0) {
                        goto lab_0x404561;
                    }
                    // 0x404e3d
                    v26 = v5 + 1;
                    goto lab_0x404408;
                }
                case 7: {
                    goto lab_0x404561;
                }
                case 8: {
                    goto lab_0x404561;
                }
                case 9: {
                    goto lab_0x40477a_2;
                }
                case 10: {
                    goto lab_0x40477a_2;
                }
                case 11: {
                    goto lab_0x404561;
                }
                case 12: {
                    goto lab_0x404561;
                }
                case 13: {
                    goto lab_0x40477a_2;
                }
                case 32: {
                    goto lab_0x40477a_2;
                }
                case 33: {
                    goto lab_0x40477a_2;
                }
                case 34: {
                    goto lab_0x40477a_2;
                }
                case 35: {
                    goto lab_0x40452d;
                }
                case 36: {
                    goto lab_0x40477a_2;
                }
                case 37: {
                    goto lab_0x404561;
                }
                case 38: {
                    goto lab_0x40477a_2;
                }
                case 39: {
                    goto lab_0x40477a_2;
                }
                case 40: {
                    goto lab_0x40477a_2;
                }
                case 41: {
                    goto lab_0x40477a_2;
                }
                case 42: {
                    goto lab_0x40477a_2;
                }
                case 43: {
                    goto lab_0x404561;
                }
                case 44: {
                    goto lab_0x404561;
                }
                case 45: {
                    goto lab_0x404561;
                }
                case 46: {
                    goto lab_0x404561;
                }
                case 47: {
                    goto lab_0x404561;
                }
                case 48: {
                    goto lab_0x404561;
                }
                case 49: {
                    goto lab_0x404561;
                }
                case 50: {
                    goto lab_0x404561;
                }
                case 51: {
                    goto lab_0x404561;
                }
                case 52: {
                    goto lab_0x404561;
                }
                case 53: {
                    goto lab_0x404561;
                }
                case 54: {
                    goto lab_0x404561;
                }
                case 55: {
                    goto lab_0x404561;
                }
                case 56: {
                    goto lab_0x404561;
                }
                case 57: {
                    goto lab_0x404561;
                }
                case 58: {
                    goto lab_0x404561;
                }
                case 59: {
                    goto lab_0x40477a_2;
                }
                case 60: {
                    goto lab_0x40477a_2;
                }
                case 61: {
                    goto lab_0x40477a_2;
                }
                case 62: {
                    goto lab_0x40477a_2;
                }
                case 63: {
                    goto lab_0x40477a_2;
                }
                case 65: {
                    goto lab_0x404561;
                }
                case 66: {
                    goto lab_0x404561;
                }
                case 67: {
                    goto lab_0x404561;
                }
                case 68: {
                    goto lab_0x404561;
                }
                case 69: {
                    goto lab_0x404561;
                }
                case 70: {
                    goto lab_0x404561;
                }
                case 71: {
                    goto lab_0x404561;
                }
                case 72: {
                    goto lab_0x404561;
                }
                case 73: {
                    goto lab_0x404561;
                }
                case 74: {
                    goto lab_0x404561;
                }
                case 75: {
                    goto lab_0x404561;
                }
                case 76: {
                    goto lab_0x404561;
                }
                case 77: {
                    goto lab_0x404561;
                }
                case 78: {
                    goto lab_0x404561;
                }
                case 79: {
                    goto lab_0x404561;
                }
                case 80: {
                    goto lab_0x404561;
                }
                case 81: {
                    goto lab_0x404561;
                }
                case 82: {
                    goto lab_0x404561;
                }
                case 83: {
                    goto lab_0x404561;
                }
                case 84: {
                    goto lab_0x404561;
                }
                case 85: {
                    goto lab_0x404561;
                }
                case 86: {
                    goto lab_0x404561;
                }
                case 87: {
                    goto lab_0x404561;
                }
                case 88: {
                    goto lab_0x404561;
                }
                case 89: {
                    goto lab_0x404561;
                }
                case 90: {
                    goto lab_0x404561;
                }
                case 91: {
                    goto lab_0x40477a_2;
                }
                case 92: {
                    goto lab_0x40477a_2;
                }
                case 93: {
                    goto lab_0x404561;
                }
                case 94: {
                    goto lab_0x40477a_2;
                }
                case 95: {
                    goto lab_0x404561;
                }
                case 96: {
                    goto lab_0x40477a_2;
                }
                case 97: {
                    goto lab_0x404561;
                }
                case 98: {
                    goto lab_0x404561;
                }
                case 99: {
                    goto lab_0x404561;
                }
                case 100: {
                    goto lab_0x404561;
                }
                case 101: {
                    goto lab_0x404561;
                }
                case 102: {
                    goto lab_0x404561;
                }
                case 103: {
                    goto lab_0x404561;
                }
                case 104: {
                    goto lab_0x404561;
                }
                case 105: {
                    goto lab_0x404561;
                }
                case 106: {
                    goto lab_0x404561;
                }
                case 107: {
                    goto lab_0x404561;
                }
                case 108: {
                    goto lab_0x404561;
                }
                case 109: {
                    goto lab_0x404561;
                }
                case 110: {
                    goto lab_0x404561;
                }
                case 111: {
                    goto lab_0x404561;
                }
                case 112: {
                    goto lab_0x404561;
                }
                case 113: {
                    goto lab_0x404561;
                }
                case 114: {
                    goto lab_0x404561;
                }
                case 115: {
                    goto lab_0x404561;
                }
                case 116: {
                    goto lab_0x404561;
                }
                case 117: {
                    goto lab_0x404561;
                }
                case 118: {
                    goto lab_0x404561;
                }
                case 119: {
                    goto lab_0x404561;
                }
                case 120: {
                    goto lab_0x404561;
                }
                case 121: {
                    goto lab_0x404561;
                }
                case 122: {
                    goto lab_0x404561;
                }
                case 123: {
                    goto lab_0x404505;
                }
                case 124: {
                    goto lab_0x40477a_2;
                }
                case 125: {
                    goto lab_0x404505;
                }
                case 126: {
                    goto lab_0x40452d;
                }
                default: {
                    goto lab_0x404905;
                }
            }
        }
      lab_0x404905:
        if (v23 != 1) {
            // 0x404c70
            ps = 0;
            int64_t len = v15; // 0x404c80
            if (v15 == -1) {
                // 0x404c82
                len = strlen((char *)str);
            }
            // 0x404cae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x404d0f:
                // 0x404d0f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404d14
                int64_t v30 = v29 + str;
                v24 = function_407a30(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40528a_2;
                    }
                    case -1: {
                        goto lab_0x40528a_2;
                    }
                    case -2: {
                        // 0x40536d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4053a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4053aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4053b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4053b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40528a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40528a_2;
                    }
                    case 1: {
                        goto lab_0x404ce0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x404d8c
                        char v34 = *(char *)v33; // 0x404d9d
                        unsigned char v35; // 0x4043b7
                        if (v34 < 125) {
                            // 0x404da8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x404dbf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40477a_2;
                            }
                        }
                        // 0x404d90
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x404d9d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404da8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x404dbf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40477a_2;
                                }
                            }
                            // 0x404d90
                            v33++;
                        }
                        goto lab_0x404ce0;
                    }
                }
            }
            goto lab_0x40528a_2;
        } else {
            // 0x404954
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404561;
        }
    }
  lab_0x404b88:
    // 0x404b88
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40548a
        if (v8 > result) {
            // 0x405493
            *(char *)(v12 + result) = 0;
        }
        // 0x4047b7
        return result;
    }
    goto lab_0x40477a_2;
  lab_0x404561:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x404570
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40477a_2;
        }
    }
    int64_t v42 = result; // 0x404671
    char v43 = v20; // 0x404671
    int64_t v44 = v58; // 0x404671
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x404671
    int64_t v46 = v56; // 0x404671
    goto lab_0x4045ed;
  lab_0x40477a_2:;
    // 0x4047b7
    char * v36; // 0x4043b7
    return function_404360(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x40528a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x404561;
    } else {
        uint64_t v40 = v37 + v5; // 0x404e5e
        int64_t v41 = v5 + 1; // 0x404f41
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x404f48
        char v48 = v20; // 0x404f48
        int64_t v49 = result; // 0x404f48
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x404f11
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x404f15
            int64_t v52 = v50 + 1; // 0x404f1a
            int64_t v53 = v47 + 1; // 0x404f41
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x404f0c
                v50 = v52;
                if (v38 > v50) {
                    // 0x404f11
                    *(char *)(v50 + v39) = v51;
                }
                // 0x404f15
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
        goto lab_0x4045ed;
    }
  lab_0x404ce0:
    // 0x404ce0
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x404cff
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404d02
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x40528a
        goto lab_0x40528a_2;
    }
    goto lab_0x404d0f;
  lab_0x40452d:
    // 0x40452d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40477a_2;
    }
    goto lab_0x404561;
  lab_0x404505:;
    bool v61 = v15 == 1; // 0x404510
    if (v15 == -1) {
        // 0x404512
        v61 = *(char *)v1 == 0;
    }
    // 0x40451e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x404561;
    } else {
        goto lab_0x40452d;
    }
  lab_0x4045ed:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x4045f2
        *(char *)(v59 + v60) = v43;
    }
    // 0x4045f6
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x404408_2;
}
// Address range: 0x405590 - 0x40572e
int64_t function_405590(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405592
    int32_t * v3 = __errno_location(); // 0x4055ac
    int64_t v4 = (int64_t)g22; // 0x4055b1
    int32_t v5 = *v3; // 0x4055bb
    int64_t v6 = v4; // 0x4055d1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x405729
            function_406720(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4055e0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4055e7
        int64_t v9; // 0x405590
        if (g22 == &g23) {
            int64_t v10 = function_406530(0, v8); // 0x40570a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x40570f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406530(v4, v8); // 0x4055fb
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40560a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40560a
        int32_t v14 = v7; // 0x405611
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x405641
    int64_t v17 = v15 + 8; // 0x405644
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x40564b
    int64_t * v19 = (int64_t *)v16; // 0x40564e
    uint64_t v20 = *v19; // 0x40564e
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x405651
    int64_t result = *v21; // 0x405651
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x40565c
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x405665
    int64_t v24; // 0x405590
    uint64_t v25 = function_404360(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x405674
    if (v20 > v25) {
        // 0x4056eb
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x405687
    *v19 = v26;
    if (result != (int64_t)&g43) {
        // 0x405697
        free((int64_t *)result);
    }
    int64_t result2 = function_4064d0(v26); // 0x4056b1
    *v21 = result2;
    int64_t v27 = *v22; // 0x4056cb
    int64_t v28 = *v23; // 0x4056ce
    int64_t v29; // 0x405590
    function_404360(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x4056eb
    *v3 = v5;
    return result2;
}
// Address range: 0x405730 - 0x405764
int64_t function_405730(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405737
    int64_t result = function_4066d0(a1 == 0 ? (int64_t)&g44 : a1, 56); // 0x405756
    return result;
}
// Address range: 0x405770 - 0x40577f
int64_t function_405770(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g44 : a1); // 0x40577c
    return result;
}
// Address range: 0x405780 - 0x40578f
int64_t function_405780(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x405788
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g44;
}
// Address range: 0x405790 - 0x4057c3
int64_t function_405790(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 + 8 : a1 + 8; // 0x4057a9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4057ae
    uint32_t v3 = *v2; // 0x4057ae
    uint32_t v4 = (int32_t)a2 % 32; // 0x4057b2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4057d0 - 0x4057e3
int64_t function_4057d0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g44 + 4 : a1 + 4); // 0x4057dc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4057f0 - 0x40581b
int64_t function_4057f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x4057f8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x405815
        abort();
        // UNREACHABLE
    }
    // 0x40580c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g44;
}
// Address range: 0x405820 - 0x405892
int64_t function_405820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g44 : a5; // 0x405842
    int32_t * v2 = __errno_location(); // 0x40584b
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x405864
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x405868
    uint32_t v5 = *(int32_t *)v1; // 0x40586b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x405871
    int64_t result = function_404360(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40587a
    return result;
}
// Address range: 0x4058a0 - 0x405981
int64_t function_4058a0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g44 : a4; // 0x4058c2
    int32_t * v2 = __errno_location(); // 0x4058c8
    int64_t v3 = v1 + 8; // 0x4058df
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4058e7
    int32_t * v5 = (int32_t *)v1; // 0x4058ea
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x4058f8
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x4058fb
    int64_t v8 = function_404360(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x405905
    int64_t v9 = v8 + 1; // 0x40590a
    int64_t result = function_4064d0(v9); // 0x40591f
    function_404360(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x405964
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x40596d
    return result;
}
// Address range: 0x405990 - 0x40599a
int64_t function_405990(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405990
    return function_4058a0(a1, a2, 0, a3);
}
// Address range: 0x4059a0 - 0x405a35
int64_t function_4059a0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x4059a0
    int64_t v2 = v1; // 0x4059a0
    int64_t v3 = v2; // 0x4059b4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x4059d3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g54;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4059d0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g54;
        }
    }
    int64_t v6 = v3; // 0x4059ed
    if (g23 != 0x60c340) {
        // 0x4059ef
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g43;
        v6 = &g54;
    }
    int64_t result = v6; // 0x405a11
    if (g22 != &g23) {
        // 0x405a13
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g54;
    }
    // 0x405a26
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x405a40 - 0x405a51
int64_t function_405a40(void) {
    // 0x405a40
    int64_t v1; // 0x405a40
    return function_405590(v1, v1, -1, (int64_t *)&g44);
}
// Address range: 0x405a60 - 0x405a6a
int64_t function_405a60(void) {
    // 0x405a60
    int64_t v1; // 0x405a60
    return function_405590(v1, v1, v1, (int64_t *)&g44);
}
// Address range: 0x405a70 - 0x405a86
int64_t function_405a70(int64_t a1) {
    // 0x405a70
    return function_405590(0, a1, -1, (int64_t *)&g44);
}
// Address range: 0x405a90 - 0x405aa2
int64_t function_405a90(int64_t a1, int64_t a2) {
    // 0x405a90
    return function_405590(0, a1, a2, (int64_t *)&g44);
}
// Address range: 0x405ab0 - 0x405b18
int64_t function_405ab0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405ac0
    return function_405590((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405b20 - 0x405b84
int64_t function_405b20(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405b30
    return function_405590((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405b90 - 0x405b9c
int64_t function_405b90(int64_t a1, int64_t a2) {
    // 0x405b90
    return function_405ab0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405ba0 - 0x405baf
int64_t function_405ba0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405ba0
    return function_405b20(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405bb0 - 0x405c20
int64_t function_405bb0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x405bbd
    int128_t v2 = __asm_movdqa(g45); // 0x405bc5
    int128_t v3 = __asm_movdqa(g46); // 0x405bcd
    int64_t v4 = __asm_movaps_5(v1); // bp-72, 0x405be2
    __asm_movaps_5(v2);
    __asm_movaps_5(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405bf8
    uint32_t v6 = *v5; // 0x405bf8
    uint32_t v7 = (int32_t)a3 % 32; // 0x405bfd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405590(0, a1, a2, &v4);
}
// Address range: 0x405c20 - 0x405c2d
int64_t function_405c20(int64_t a1, int64_t a2) {
    // 0x405c20
    return function_405bb0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405c30 - 0x405c41
int64_t function_405c30(int64_t a1) {
    // 0x405c30
    return function_405bb0(a1, -1, 58);
}
// Address range: 0x405c50 - 0x405c5a
int64_t function_405c50(void) {
    // 0x405c50
    int64_t v1; // 0x405c50
    return function_405bb0(v1, v1, 58);
}
// Address range: 0x405c60 - 0x405cce
int64_t function_405c60(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405c7a
    return function_405590((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405cd0 - 0x405d3c
int64_t function_405cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x405cd7
    int128_t v2 = __asm_movdqa(g45); // 0x405cdf
    int128_t v3 = __asm_movdqa(g46); // 0x405ce7
    __asm_movaps_5(v1);
    __asm_movaps_5(v2);
    __asm_movaps_5(v3);
    int64_t v4 = 10; // bp-72, 0x405d09
    if (a2 == 0 || a3 == 0) {
        // 0x405d37
        abort();
        // UNREACHABLE
    }
    // 0x405d1a
    return function_405590(a1, a4, a5, &v4);
}
// Address range: 0x405d40 - 0x405d49
int64_t function_405d40(void) {
    // 0x405d40
    int64_t v1; // 0x405d40
    return function_405cd0(v1, v1, v1, v1, -1);
}
// Address range: 0x405d50 - 0x405d67
int64_t function_405d50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405d50
    return function_405cd0(0, a1, a2, a3, -1);
}
// Address range: 0x405d70 - 0x405d83
int64_t function_405d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405d70
    return function_405cd0(0, a1, a2, a3, a4);
}
// Address range: 0x405d90 - 0x405d9a
int64_t function_405d90(void) {
    // 0x405d90
    int64_t v1; // 0x405d90
    return function_405590(v1, v1, v1, &g21);
}
// Address range: 0x405da0 - 0x405db2
int64_t function_405da0(int64_t a1, int64_t a2) {
    // 0x405da0
    return function_405590(0, a1, a2, &g21);
}
// Address range: 0x405dc0 - 0x405dd1
int64_t function_405dc0(void) {
    // 0x405dc0
    int64_t v1; // 0x405dc0
    return function_405590(v1, v1, -1, &g21);
}
// Address range: 0x405de0 - 0x405df6
int64_t function_405de0(int64_t a1) {
    // 0x405de0
    return function_405590(0, a1, -1, &g21);
}
// Address range: 0x405e00 - 0x405f30
int64_t function_405e00(int64_t a1, int64_t a2) {
    int64_t str = function_407ce0(a1, a2); // 0x405e19
    int64_t str2 = function_407ce0(a2, a2); // 0x405e24
    int64_t n = function_407d40(str); // 0x405e2f
    if (n != function_407d40(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x405e44
        return 0;
    }
    int64_t v1 = function_407c00(); // 0x405e75
    int64_t v2 = function_407c00(); // 0x405e80
    char * v3 = (char *)v1; // 0x405e93
    int64_t v4; // bp-344, 0x405e00
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x405f10
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x405eac
    int64_t v6; // bp-200, 0x405e00
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x405ef0
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x405ec4
    // 0x405ec6
    v7 = v4 == v6;
    // 0x405ed5
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x405e44
    return v7 & 0xffffffff;
}
// Address range: 0x405f30 - 0x40630d
int64_t function_405f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405fc8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405f4c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405f66
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405fab
    if (a6 < 10) {
        // 0x405fba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4060b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x406310 - 0x406330
int64_t function_406310(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406310
    if (a5 == 0) {
        // 0x40632b
        return function_405f30(a1, a2, a3, a4, a5, 0, (int64_t)&g54);
    }
    int64_t v1 = 0; // 0x406317
    v1++;
    int64_t v2 = v1; // 0x406329
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406320
        v1++;
        v2 = v1;
    }
    // 0x40632b
    return function_405f30(a1, a2, a3, a4, a5, v2, (int64_t)&g54);
}
// Address range: 0x406330 - 0x406390
int64_t function_406330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x406330
    int64_t v3 = &v2; // 0x406330
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406363
    int64_t v6; // 0x40634d
    int64_t * v7; // 0x40636b
    int64_t v8; // 0x40636b
    int64_t v9; // 0x406377
    if (v5 < 48) {
        // 0x406340
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406383
            break;
        }
    } else {
        // 0x40636b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406383
            break;
        }
    }
    int64_t v10 = 10; // 0x406361
    while (v4 != 9) {
        // 0x406359
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406340
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406383
                break;
            }
        } else {
            // 0x40636b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406383
                break;
            }
        }
        // 0x406359
        v10 = 10;
    }
    // 0x406383
    return function_405f30(a1, a2, a3, a4, v3, v10, (int64_t)&g54);
}
// Address range: 0x406390 - 0x40644c
int64_t function_406390(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x406390
    int64_t v1; // bp-168, 0x406390
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406390
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406390
    int64_t v8; // 0x406390
    int64_t v9; // bp-56, 0x406390
    int64_t v10; // 0x4063f5
    int64_t v11; // 0x406419
    if ((int32_t)v6 < 48) {
        // 0x4063e0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406430
            break;
        }
    } else {
        // 0x406412
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406430
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40640a
    int64_t v13 = 10; // 0x40640a
    while (v5 != 9) {
        // 0x40640c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4063e0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406430
                break;
            }
        } else {
            // 0x406412
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406430
                break;
            }
        }
        // 0x406402
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406430
    int64_t v14; // bp-136, 0x406390
    int64_t result = function_405f30(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g54); // 0x40643f
    return result;
}
// Address range: 0x406450 - 0x4064c4
int64_t function_406450(int64_t a1) {
    // 0x406450
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4064b3
    return fputs_unlocked(v1, g31);
}
// Address range: 0x4064d0 - 0x4064ea
int64_t function_4064d0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4064d4
    if (size != 0 != (mem == NULL)) {
        // 0x4064e3
        return (int64_t)mem;
    }
    // 0x4064e5
    function_406720(size);
    // UNREACHABLE
}
// Address range: 0x4064f0 - 0x406511
int64_t function_4064f0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4064f3
    int64_t v2 = v1; // 0x4064f3
    if (v2 < 0) {
        // 0x40650b
        function_406720(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406509
        return function_4064d0(v2);
    }
    // 0x40650b
    function_406720(v2);
    // UNREACHABLE
}
// Address range: 0x406520 - 0x406522
int64_t function_406520(void) {
    // 0x406520
    int64_t v1; // 0x406520
    return function_4064d0(v1);
}
// Address range: 0x406530 - 0x406566
int64_t function_406530(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406558
        free(v1);
        return (int32_t)&g54 ^ (int32_t)&g54;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406541
    if (a2 != 0 != (mem == NULL)) {
        // 0x406550
        return (int64_t)mem;
    }
    // 0x406561
    function_406720(a1);
    // UNREACHABLE
}
// Address range: 0x406570 - 0x406591
int64_t function_406570(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406573
    int64_t v2 = v1; // 0x406573
    if (v2 < 0) {
        // 0x40658b
        function_406720(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406589
        return function_406530(a1, v2);
    }
    // 0x40658b
    function_406720(a1);
    // UNREACHABLE
}
// Address range: 0x4065a0 - 0x406626
int64_t function_4065a0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4065fb
            function_406720(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406530(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4065e3
    if (a2 == 0) {
        // 0x406608
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4065e8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4065fb
        function_406720(a1);
        // UNREACHABLE
    }
    // 0x4065ca
    *(int64_t *)a2 = v2;
    return function_406530(a1, v2 * a3);
}
// Address range: 0x406630 - 0x406680
int64_t function_406630(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406630
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40667a
            function_406720(a1);
            // UNREACHABLE
        }
        // 0x406652
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406530(a1, v1);
    }
    if (a2 == 0) {
        // 0x406665
        *(int64_t *)a2 = 128;
        return function_406530(0, 128);
    }
    // 0x406678
    if (a2 < 0) {
        // 0x40667a
        function_406720(a1);
        // UNREACHABLE
    }
    // 0x406652
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406530(a1, v1);
}
// Address range: 0x406680 - 0x406697
int64_t function_406680(int64_t a1, int64_t a2) {
    // 0x406680
    return (int64_t)memset((int64_t *)function_4064d0(a1), 0, (int32_t)a1);
}
// Address range: 0x4066a0 - 0x4066ce
int64_t function_4066a0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4066a7
    if ((int64_t)v1 < 0) {
        // 0x4066c9
        function_406720(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4066c9
        function_406720(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4066ba
    if (mem != NULL) {
        // 0x4066c4
        return (int64_t)mem;
    }
    // 0x4066c9
    function_406720(nmemb);
    // UNREACHABLE
}
// Address range: 0x4066d0 - 0x4066f8
int64_t function_4066d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4064d0(a2); // 0x4066df
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406700 - 0x406713
int64_t function_406700(int64_t str) {
    // 0x406700
    return function_4066d0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406720 - 0x406751
int64_t function_406720(int64_t a1) {
    // 0x406720
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406760 - 0x40678f
int64_t function_406760(int64_t a1, int64_t a2) {
    int64_t result = function_406790(0, 0); // 0x406765
    if (result != 0 || *__errno_location() != 12) {
        // 0x406772
        return result;
    }
    // 0x40678a
    function_406720(0);
    // UNREACHABLE
}
// Address range: 0x406790 - 0x406c52
int64_t function_406790(int32_t a1, int32_t a2) {
    // 0x406790
    int32_t size; // 0x406790
    int32_t v1; // 0x406790
    int32_t v2; // 0x406790
    if (a2 != 0) {
        // 0x4067f0
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x4067c2;
        } else {
            goto lab_0x40680c;
        }
    } else {
        // 0x4067b0
        size = 0x1000;
        if (a1 != 0) {
            // 0x406bb0
            *__errno_location() = 22;
            // 0x4067d6
            return 0;
        }
        goto lab_0x4067c2;
    }
  lab_0x406b50:;
    // 0x406b50
    int32_t v3; // 0x406b4a
    int64_t v4 = v3; // 0x406b52
    int64_t v5; // 0x406790
    int64_t dirp2 = v5; // 0x406b52
    int32_t * v6; // 0x406896
    if (v3 != 0) {
        goto lab_0x406b61;
    } else {
        // 0x406b54
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x406b61;
    }
  lab_0x406962:;
    // 0x406962
    int64_t v7; // 0x406790
    int64_t v8 = v7;
    int64_t v9; // 0x406790
    int64_t v10 = v9 + 19; // 0x406962
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x406790
    int64_t v12; // 0x406790
    int32_t v13; // 0x406790
    int32_t fd; // 0x4068b2
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x406995
        if (v11 == v12) {
            // break -> 0x4069b0
            goto lab_0x4069b0;
        }
    }
    int64_t v14 = v8; // 0x406790
    goto lab_0x406920_2;
  lab_0x406c2e_2:
    // 0x406c2e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x406b61;
  lab_0x4067c2:;
    int64_t * mem = malloc(size); // 0x4067c7
    int32_t v41 = (int64_t)mem; // 0x4067cc
    int32_t result = v41; // 0x4067d4
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x4067d6
        return result;
    }
    goto lab_0x40680c;
  lab_0x40680c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x406811
    int64_t v46 = v45 - 1; // 0x406820
    *(char *)v46 = 0;
    int64_t v47; // 0x406790
    int64_t v48; // 0x406790
    int32_t * v49; // 0x406790
    int64_t v50; // 0x406790
    int64_t v33; // 0x406790
    int64_t v40; // 0x406790
    int64_t v51; // 0x406790
    int32_t v38; // 0x406790
    int32_t v52; // 0x406790
    int32_t v53; // 0x406790
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x406b88;
    } else {
        // 0x406836
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x406b88;
        } else {
            // 0x406861
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x406aa8;
            } else {
                // 0x406896
                v6 = __errno_location();
                int32_t v54 = v1; // 0x4068a3
                int32_t v55 = v42; // 0x4068a3
                int64_t v56 = v11; // 0x4068a3
                int64_t v57 = v46; // 0x4068a3
                int64_t v58 = 0; // 0x4068a3
                int32_t fd2 = -100; // 0x4068a3
                int64_t dirp3; // 0x406790
                while (true) {
                    // 0x4068a6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x406bd7
                        break;
                    }
                    // 0x4068c2
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x406be8
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x406bcd;
                        } else {
                            // 0x406bf1
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x406bcd;
                        }
                    }
                    // 0x4068db
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x4068e0
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x406bc9
                            v40 = (int64_t)*v6;
                            goto lab_0x406bcd;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x406907
                    if (dirp == NULL) {
                        // 0x406bc9
                        v40 = (int64_t)*v6;
                        goto lab_0x406bcd;
                    }
                    // 0x406918
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x406920_2:;
                        int64_t v15 = v14; // 0x406790
                        int64_t v16; // 0x406790
                        int64_t v17; // 0x406790
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x40692b
                            int64_t v20; // 0x406790
                            int64_t v21; // 0x406790
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x406b00
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x406b50;
                                }
                                // 0x406b0d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x406b18
                                if (v23 == NULL) {
                                    // 0x406b4a
                                    v3 = *v6;
                                    goto lab_0x406b50;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x406962;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x406943
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x406b30
                            if (*(char *)v28 != 0) {
                                // 0x406b3a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x406943
                                    break;
                                }
                            }
                            // 0x406920
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x406962;
                        } else {
                            // 0x406948
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x40695d
                            int64_t v32; // 0x406790
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x406920
                                v14 = v31;
                                goto lab_0x406920_2;
                            } else {
                                goto lab_0x406962;
                            }
                        }
                    }
                  lab_0x4069b0:;
                    int64_t v61 = v38; // 0x4069b8
                    uint64_t v62 = v57 - v61; // 0x4069b8
                    int32_t len = strlen(str); // 0x4069bd
                    uint64_t v63 = (int64_t)len; // 0x4069bd
                    int32_t v64 = v60; // 0x4069c8
                    int32_t v65 = v38; // 0x4069c8
                    int64_t dest_mem = v57; // 0x4069c8
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x406c40
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x406b61;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x4069d6
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x4069e1
                        uint64_t v68 = v67 + v66; // 0x4069e5
                        if (v68 < v66) {
                            goto lab_0x406c2e_2;
                        }
                        // 0x4069f8
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x406a00
                        if (mem2 == NULL) {
                            goto lab_0x406c2e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x406a00
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x406a5d
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x406a8e
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x406b90;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x406aa8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x406bd7
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x406b69;
                } else {
                    goto lab_0x406b61;
                }
            }
        }
    }
  lab_0x406b88:
    // 0x406b88
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x406b90;
  lab_0x406b90:;
    int64_t v77 = (int64_t)*v49; // 0x406b96
    int64_t v34 = v77; // 0x406b9a
    int32_t * v35 = v49; // 0x406b9a
    int32_t * v36 = v49; // 0x406b9a
    int32_t v37 = v53; // 0x406b9a
    int64_t v39 = v77; // 0x406b9a
    if (a1 != 0) {
        goto lab_0x406b71;
    } else {
        goto lab_0x406b9c;
    }
  lab_0x406b71:
    // 0x406b71
    *v35 = (int32_t)v34;
    // 0x4067d6
    return 0;
  lab_0x406b9c:
    // 0x406b9c
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x406b71;
  lab_0x406aa8:
    // 0x406aa8
    if (v51 == v47 - 1 + v48) {
        // 0x406c17
        int64_t v78; // 0x406790
        int64_t v79 = v78 - 1; // 0x406c1c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x406ad2
    int32_t v81 = v50 - v51; // 0x406ad2
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x406add
    if (a2 == 0) {
        // 0x406c00
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x4067d6
    return result2;
  lab_0x406b69:
    // 0x406b69
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x406b9c;
    } else {
        goto lab_0x406b71;
    }
  lab_0x406b61:
    // 0x406b61
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x406b69;
  lab_0x406bcd:
    // 0x406bcd
    close(fd);
    v33 = v40;
    goto lab_0x406b69;
}
// Address range: 0x406c60 - 0x406d3f
int64_t function_406c60(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x406c6c
    uint32_t v2 = *v1; // 0x406c6c
    int64_t v3 = a2 & 0xffffffff; // 0x406c71
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x406c74
    uint64_t v5 = (int64_t)*v4; // 0x406c74
    int64_t v6; // 0x406ce2
    if (v3 <= v5) {
      lab_0x406cdc_2:
        // 0x406cdc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x406c62
    int64_t v8 = v2; // 0x406c60
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x406cdc
        goto lab_0x406cdc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x406c98
    int64_t v17; // 0x406ca6
    int64_t * v18; // 0x406cc0
    int64_t * v19; // 0x406cc3
    int64_t v20; // 0x406cce
    int64_t v21; // 0x406ca6
    while ((v16 & 0xffffffff) > v10) {
        // 0x406ca3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x406cc0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x406cd7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x406cdc
            goto lab_0x406cdc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x406cdc
            goto lab_0x406cdc_2;
        }
        // 0x406c92
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x406d1b
    int64_t * v23 = (int64_t *)v22; // 0x406d20
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x406d23
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x406d20
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x406d37
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x406c8d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x406cdc
            goto lab_0x406cdc_2;
        }
        // 0x406c92
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x406ca3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x406cc0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x406cd7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x406cdc
                goto lab_0x406cdc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x406cdc
                goto lab_0x406cdc_2;
            }
            // 0x406c92
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x406d00
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x406d20
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x406d37
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x406cdc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x406d40 - 0x40735c
int64_t function_406d40(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x406d5f
    int64_t v2 = *v1; // 0x406d5f
    char * str2 = (char *)v2; // 0x406d6c
    char c = *str2; // 0x406d6c
    int64_t v3 = v2; // 0x406d98
    int64_t v4 = 0; // 0x406d40
    int32_t v5; // 0x406d40
    int64_t v6; // 0x406d40
    int64_t v7; // 0x406d40
    int64_t v8; // 0x406d40
    int64_t v9; // 0x406d40
    int64_t v10; // 0x406d40
    int64_t v11; // 0x406d40
    int64_t v12; // 0x406d40
    int64_t v13; // 0x406d40
    int64_t str3; // 0x406d40
    int64_t v14; // 0x406d40
    int64_t v15; // 0x406d40
    int64_t v16; // 0x406d40
    int64_t v17; // 0x406d40
    int32_t v18; // 0x406d40
    int32_t v19; // 0x406d40
    int32_t v20; // 0x406d40
    int32_t v21; // 0x406d40
    int32_t v22; // 0x406d40
    int32_t v23; // 0x406d40
    int32_t v24; // 0x406d40
    int32_t v25; // 0x406d40
    int32_t v26; // 0x406d40
    int32_t v27; // 0x406d40
    int32_t v28; // 0x406d40
    int32_t v29; // 0x406d40
    int64_t nmemb; // 0x406d40
    int64_t v30; // 0x406d40
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x406d9c
            while (v31 != 0 == (v31 != 61)) {
                // 0x406d98
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406da8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x406dae
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x406d78
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x406ddc
                int64_t v34; // 0x406d40
                int64_t v35; // 0x406d40
                if (strncmp(str, str2, n) == 0) {
                    // 0x406de5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406f60;
                    }
                }
                int64_t v36 = a4 + 32; // 0x406df6
                int64_t v37 = *(int64_t *)v36; // 0x406dfa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x406dd0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x406de5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406f60;
                        }
                    }
                    // 0x406df6
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
                  lab_0x406e46:
                    // 0x406e46
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
                        goto lab_0x406ea0;
                    } else {
                        if (v11 == 0) {
                            // 0x407010
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406ea0;
                        } else {
                            if (v39 == 0) {
                                // 0x406fc0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x406e6a;
                                } else {
                                    // 0x406fcc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x406e6a;
                                    } else {
                                        // 0x406fda
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x406e6a;
                                        } else {
                                            goto lab_0x406ea0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x406e6a;
                            }
                        }
                    }
                }
              lab_0x406eb1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x407086
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x407232
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x407252
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40729f
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x4072b9
                            int64_t v45; // 0x4072bb
                            if (*(char *)v42 != 0) {
                                // 0x4072bb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4072b3
                            while (v17 + nmemb != v42) {
                                // 0x4072b5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4072bb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x4072a8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4072e0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x407094
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4071ef
                        free((int64_t *)v17);
                    }
                    // 0x4070e9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x407100
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x406fae
                    return 63;
                }
                // 0x406ed0
                v5 = v39;
                if (v13 != 0) {
                    // 0x406f54
                    v35 = v13;
                    v34 = v25;
                  lab_0x406f60:;
                    int32_t * v49 = (int32_t *)a7; // 0x406f70
                    uint32_t v50 = *v49; // 0x406f70
                    int64_t v51 = v50; // 0x406f70
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x406f7a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406f83
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4071af
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40715a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x406fae
                            return 63;
                        }
                        // 0x406ff8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40730f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40720d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x407220
                                // 0x406fae
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40711e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x407132
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x406f9b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x406f9e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406fa2
                    int64_t result = v59; // 0x406fa8
                    if (v58 != 0) {
                        // 0x406faa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x406fae
                    return result;
                }
            } else {
                // 0x406dae
                v5 = v32;
            }
            // break -> 0x406ed5
            break;
        }
    }
    // 0x406ed5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x406eed
        if (*(char *)(v60 + 1) != 45) {
            // 0x406ef7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x406fae
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x407039
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406f26
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406f36
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406ea0:
    // 0x406ea0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406ea0
    int64_t v63 = *(int64_t *)v62; // 0x406ea4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406eb1
        goto lab_0x406eb1;
    }
    goto lab_0x406e46;
  lab_0x406e6a:
    // 0x406e6a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x406d40
    int32_t v65; // 0x406d40
    int32_t v66; // 0x406d40
    if (v27 != 0) {
        goto lab_0x406ea0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x407020
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406ea0;
            } else {
                goto lab_0x406e91;
            }
        } else {
            // 0x406e85
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40717c
                int64_t v67 = (int64_t)mem; // 0x40717c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406ea0;
                } else {
                    // 0x40718f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406e91;
                }
            } else {
                goto lab_0x406e91;
            }
        }
    }
  lab_0x406e91:
    // 0x406e91
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406ea0;
}
// Address range: 0x407360 - 0x407926
int64_t function_407360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x407381
    if (v3 < 1) {
        // 0x40753e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40737d
    int32_t v5 = *(int32_t *)a7; // 0x407389
    uint64_t v6 = a1 & 0xffffffff; // 0x40738b
    int64_t v7 = v2; // 0x407390
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x407393
    *v8 = 0;
    int64_t v9; // 0x407360
    int64_t v10; // 0x407360
    int64_t v11; // 0x407360
    int64_t v12; // 0x407360
    int64_t str; // 0x407360
    int64_t v13; // 0x407360
    int64_t v14; // 0x407360
    int64_t v15; // 0x407360
    int64_t v16; // 0x407360
    int64_t v17; // 0x407360
    int32_t v18; // 0x407360
    char v19; // 0x407360
    if (v5 == 0) {
        // 0x407578
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4073aa;
    } else {
        // 0x4073a3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4073f0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4073f3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4074b8;
            } else {
                int64_t v22 = v7 + 1; // 0x407406
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x407416
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4074cc;
                } else {
                    goto lab_0x407428;
                }
            }
        } else {
            goto lab_0x4073aa;
        }
    }
  lab_0x4073aa:
    // 0x4073aa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4073b0
    *v24 = 0;
    int64_t v25; // 0x407360
    int64_t v26; // 0x407360
    int64_t v27; // 0x407360
    switch (*(char *)&v2) {
        case 45: {
            // 0x4074a0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4074ad;
        }
        case 43: {
            // 0x4077b0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4074ad;
        }
        default: {
            // 0x4073cc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40772f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407848
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4074ad;
                } else {
                    // 0x40773d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4073da;
                }
            } else {
                goto lab_0x4073da;
            }
        }
    }
  lab_0x4074b8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4074bf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x407428;
    } else {
        goto lab_0x4074cc;
    }
  lab_0x4073da:
    // 0x4073da
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4074ad;
  lab_0x4074ad:
    // 0x4074ad
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4074b8;
  lab_0x407428:;
    uint32_t v30 = *(int32_t *)a7; // 0x407428
    int64_t v31 = v30; // 0x407428
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40742a
    if ((int64_t)*v32 > v31) {
        // 0x40742f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x407432
    if (*v33 > v30) {
        // 0x407437
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40743a
    int64_t v35 = v31; // 0x40743e
    int64_t v36 = v15; // 0x40743e
    int64_t v37; // 0x407360
    int64_t v38; // 0x407360
    int64_t v39; // 0x407360
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4075a8
        int64_t v41 = v40; // 0x4075a8
        v2 = v41;
        int64_t v42; // 0x407360
        if (*v33 == v40) {
            // 0x407790
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407798
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4075b4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4075b8
                function_406c60(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4075c8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4075d1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4075da
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4075f1
            int64_t v47 = v45 & 0xffffffff; // 0x4075f5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4075fe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x407604
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x407606;
                }
            }
            int64_t v48 = v47 + 1; // 0x4075e0
            int64_t v49 = v48 & 0xffffffff; // 0x4075e0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4075f1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4075fe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x407604
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x407606;
                    }
                }
                // 0x4075e0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4077a8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x407606;
    } else {
        goto lab_0x407444;
    }
  lab_0x4074cc:
    // 0x4074cc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4074cf
    int64_t v51 = v12; // 0x4074cf
    int64_t v52 = v14; // 0x4074cf
    if (*(char *)v10 == 0) {
        goto lab_0x407428;
    } else {
        goto lab_0x4074d5;
    }
  lab_0x407444:;
    int32_t v53 = v35; // 0x407444
    int64_t v54; // 0x407360
    int64_t v55; // 0x407360
    int64_t v56; // 0x407360
    int64_t v57; // 0x407360
    int64_t v58; // 0x407360
    int64_t v59; // 0x407360
    char * v60; // 0x407360
    int64_t v61; // 0x407360
    int64_t v62; // 0x407459
    int64_t v63; // 0x407360
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x407593
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x407596;
    } else {
        // 0x40744c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x407360
        int64_t v66 = v65 ? -1 : 1; // 0x407460
        int64_t v67 = (int64_t)"--"; // 0x407360
        int64_t v68 = v62; // 0x407360
        int64_t v69 = 3; // 0x407460
        unsigned char v70 = *(char *)v68; // 0x407460
        char v71 = *(char *)v67; // 0x407460
        char v72 = v71; // 0x407460
        bool v73 = false; // 0x407460
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
            // 0x407550
            if (*(char *)v62 == 45) {
                // 0x407610
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x407610
                if (c == 0) {
                    goto lab_0x40755a;
                } else {
                    // 0x40761d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4076a0;
                    } else {
                        if (c == 45) {
                            // 0x407883
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4076f5;
                        } else {
                            // 0x40762e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4076a0;
                            } else {
                                // 0x407633
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x407654;
                                } else {
                                    // 0x40763a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4076a0;
                                    } else {
                                        goto lab_0x407654;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40755a;
            }
        } else {
            uint32_t v75 = *v33; // 0x407470
            v2 = v75;
            int32_t v76 = *v32; // 0x407473
            int64_t v77 = v35 + 1; // 0x407476
            int32_t v78 = v77; // 0x407479
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4077e0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407487
                    function_406c60(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x407495
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x407596;
        }
    }
  lab_0x4074d5:;
    // 0x4074d5
    int64_t v79; // bp-104, 0x407360
    int64_t v80 = &v79; // 0x40736a
    int64_t v81 = v50 + 1; // 0x4074d5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4074dc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4074e1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4074e5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4074e9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4074f1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4074f6
    int32_t c2 = v84; // 0x4074f6
    char * found_char_pos = strchr(str2, c2); // 0x4074f6
    int64_t v87 = *v82; // 0x4074fb
    v2 = v87;
    int64_t v88 = *v85; // 0x407505
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x407510
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x407800
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4077cd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40753e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4074f6
    char v91 = *(char *)(v90 + 1); // 0x40752b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4074e5
        if (v91 != 58) {
            // 0x40753e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x407754
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x407858
                *v8 = 0;
            } else {
                // 0x40783c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40777e
            *v83 = 0;
            // 0x40753e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40775e
        if (v93 != 0) {
            // 0x4077f0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40777e
            *v83 = 0;
            // 0x40753e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407771
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40777e
            *v83 = 0;
            // 0x40753e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4078ba
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40786a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407871
        // 0x40777e
        *v83 = 0;
        // 0x40753e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4076c9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4076cb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4078f0
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4078a1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4078a8
            // 0x40753e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4076d6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4076da
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4076f5;
  lab_0x407606:
    // 0x407606
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x407444;
  lab_0x4076f5:;
    int64_t v99 = function_406d40(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x407713
    // 0x40753e
    return v99 & 0xffffffff;
  lab_0x407596:;
    int32_t v100 = v55; // 0x407596
    if (v100 != (int32_t)v59) {
        // 0x40759a
        *(int32_t *)a7 = v100;
    }
    // 0x40753e
    return 0xffffffff;
  lab_0x40755a:
    // 0x40755a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407561
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40753e
    return v99 & 0xffffffff;
  lab_0x4076a0:
    // 0x4076a0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4074d5;
  lab_0x407654:
    // 0x407654
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_406d40(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x40767a
    if ((int32_t)v101 != -1) {
        // 0x40753e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40768f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4076a0;
}
// Address range: 0x407930 - 0x407986
int64_t function_407930(int64_t a1) {
    // 0x407930
    *(int32_t *)&g47 = g28;
    *(int32_t *)&g48 = g27;
    int64_t v1; // 0x407930
    int64_t result = function_407360(v1, v1, v1, v1, v1, v1, &g47, a1 & 0xffffffff); // 0x407956
    g28 = *(int32_t *)&g47;
    g52 = g50;
    *(int32_t *)&g26 = g49;
    return result;
}
// Address range: 0x407990 - 0x4079a8
int64_t function_407990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407990
    return function_407930(1);
}
// Address range: 0x4079b0 - 0x4079c3
int64_t function_4079b0(int64_t a1, int64_t a2, char * a3, char (**a4)[22], int32_t a5, int64_t a6) {
    // 0x4079b0
    return function_407930(0);
}
// Address range: 0x4079d0 - 0x4079e5
int64_t function_4079d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4079d0
    return function_407360(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4079f0 - 0x407a06
int64_t function_4079f0(void) {
    // 0x4079f0
    return function_407930(0);
}
// Address range: 0x407a10 - 0x407a28
int64_t function_407a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407a10
    return function_407360(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407a30 - 0x407aaa
int64_t function_407a30(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x407a3b
    int64_t v2 = (int64_t)&g11; // 0x407a3b
    int32_t * pwc; // 0x407a30
    int64_t v3; // 0x407a30
    int64_t n; // 0x407a30
    if (a2 == 0) {
        goto lab_0x407a82;
    } else {
        // 0x407a3d
        if (a3 == 0) {
            // 0x407a68
            return -2;
        }
        // 0x407a49
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407a82;
        } else {
            goto lab_0x407a54;
        }
    }
  lab_0x407a82:
    // 0x407a82
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407a30
    pwc = (int32_t *)&v4;
    goto lab_0x407a54;
  lab_0x407a54:;
    char * wstr = (char *)v3; // 0x407a5a
    int64_t ps; // 0x407a30
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x407a5a
    int64_t result = v5; // 0x407a5a
    if (v5 < 0xfffffffe) {
        // 0x407a68
        return result;
    }
    int64_t result2 = result; // 0x407a99
    if ((char)function_407d70(0, v3) == 0) {
        // 0x407a9b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407a68
    return result2;
}
// Address range: 0x407ab0 - 0x407b9f
int64_t function_407ab0(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x407ae9
    int64_t * mem = malloc((int32_t)size); // 0x407af3
    int64_t result = 0; // 0x407afe
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x407b09
        if (v1 < 0) {
            // 0x407b68
            if (*__errno_location() != 34) {
                // 0x407b72
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x407b09
        int64_t v3; // 0x407ab0
        if (buf_size > v2) {
            // 0x407b80
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x407b1b
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x407b28
            int64_t * mem2 = malloc((int32_t)size2); // 0x407b2e
            if (mem2 == NULL) {
                // 0x407b3b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x407b68
                if (*__errno_location() != 34) {
                    // 0x407b72
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x407b16
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x407b80
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x407b1b
            free(buf);
        }
        // 0x407b50
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x407b90
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x407b3b_2:
    // 0x407b3b
    return result;
}
// Address range: 0x407ba0 - 0x407bfd
int64_t function_407ba0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x407ba7
    int64_t v2; // 0x407ba0
    int64_t result = function_408380(a1, v2); // 0x407bb8
    if ((v2 & 32) != 0) {
        // 0x407be0
        if ((int32_t)result == 0) {
            // 0x407be4
            *__errno_location() = 0;
        }
        // 0x407bda
        return 0xffffffff;
    }
    // 0x407bc1
    if ((int32_t)result == 0) {
        // 0x407bda
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x407bc8
    if (v1 == 0) {
        // 0x407bca
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x407bda
    return result2;
}
// Address range: 0x407c00 - 0x407c18
int64_t function_407c00(void) {
    // 0x407c00
    int64_t v1; // 0x407c00
    int64_t result = function_407c80(v1); // 0x407c04
    if (result != 0) {
        // 0x407c0e
        return result;
    }
    // 0x407c13
    function_406720(v1);
    // UNREACHABLE
}
// Address range: 0x407c20 - 0x407c7d
int64_t function_407c20(int64_t a1) {
    // 0x407c20
    int64_t v1; // 0x407c20
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x407c2e
    int64_t v3 = function_407ce0(a1, v1); // 0x407c32
    int64_t result = v3 - a1; // 0x407c3a
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x407c63
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x407c50
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x407c63
            break;
        }
        result2--;
    }
    // 0x407c63
    return result2;
}
// Address range: 0x407c80 - 0x407cda
int64_t function_407c80(int64_t a1) {
    // 0x407c80
    int64_t v1; // 0x407c80
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x407c9f
    if (mem == NULL) {
        // 0x407cc6
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x407cb5
    int64_t v3; // 0x407c80
    if (v2 == 0) {
        // 0x407cd0
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x407cb5
    *(char *)(v3 + result) = 0;
    // 0x407cc6
    return result;
}
// Address range: 0x407ce0 - 0x407d3b
int64_t function_407ce0(int64_t a1, int64_t a2) {
    // 0x407ce0
    int64_t v1; // 0x407ce0
    char v2 = v1;
    int64_t v3 = a1; // 0x407ce9
    int64_t v4 = a1; // 0x407ce9
    char v5 = v2; // 0x407ce9
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x407cf4
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x407cf0
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x407cfe
    if (v5 == 0) {
      lab_0x407d3a:
        // 0x407d3a
        return result;
    }
    int64_t v7 = v4; // 0x407d28
    int64_t v8 = 0; // 0x407d28
    int64_t v9; // 0x407ce0
    int64_t v10; // 0x407d2a
    char v11; // 0x407d2e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x407d25
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x407d2a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x407d25
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x407d1a
    char v14 = *(char *)v13; // 0x407d1e
    while (v14 != 0) {
        int64_t v15 = result2;
        v7 = v13;
        v8 = (char)v12 == 0 ? v12 : 0;
        v9 = v13;
        if (v14 == 47) {
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v15;
            if (v11 == 0) {
                return result;
            }
            // 0x407d25
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x407d2a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x407d25
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x407d10
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x407d3a
    return result2;
}
// Address range: 0x407d40 - 0x407d6b
int64_t function_407d40(int64_t str) {
    int32_t len = strlen((char *)str); // 0x407d44
    int64_t result = len; // 0x407d44
    if (len < 2) {
        // 0x407d5a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x407d58
    while (*(char *)(v1 + str) == 47) {
        // 0x407d60
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x407d5a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x407d5a
    return result2;
}
// Address range: 0x407d70 - 0x407dce
int64_t function_407d70(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x407d76
    if (locale == NULL) {
        // 0x407da3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x407d76
    bool v2; // 0x407d70
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x407d70
    int64_t v5 = v1; // 0x407d70
    int64_t v6 = 2; // 0x407d95
    unsigned char v7 = *(char *)v5; // 0x407d95
    char v8 = *(char *)v4; // 0x407d95
    char v9 = v8; // 0x407d95
    bool v10 = false; // 0x407d95
    while (v7 == v8) {
        // 0x407d88
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
    int64_t v12 = (int64_t)"POSIX"; // 0x407da1
    int64_t v13 = v1; // 0x407da1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407da3
        return 0;
    }
    int64_t v14 = 6; // 0x407da1
    unsigned char v15 = *(char *)v13; // 0x407dbd
    char v16 = *(char *)v12; // 0x407dbd
    char v17 = v16; // 0x407dbd
    bool v18 = false; // 0x407dbd
    while (v15 == v16) {
        // 0x407db0
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
// Address range: 0x407dd0 - 0x407e06
int64_t function_407dd0(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x407dd6
    if (v1 == 0) {
        // 0x407e00
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x407de8
    char v5 = *(char *)v2; // 0x407deb
    while (v5 != 0) {
        // 0x407de0
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x407df3
    return v4 % a2;
}
// Address range: 0x407e10 - 0x408372
int64_t function_407e10(void) {
    char * v1 = nl_langinfo(14); // 0x407e26
    char * v2 = g51; // 0x407e2b
    char * v3; // 0x407e10
    int64_t v4; // 0x407e10
    int64_t v5; // 0x407e10
    int64_t v6; // 0x407e10
    int64_t v7; // 0x407e10
    int32_t size; // 0x407e10
    int32_t size2; // 0x407e10
    int32_t len; // 0x407ee2
    int64_t v8; // 0x407ee2
    char * env_val; // 0x407ecd
    if (v2 == NULL) {
        // 0x407ec8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x407f35;
        } else {
            // 0x407eda
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x407f35;
            } else {
                // 0x407edf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x407ecd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x408365
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x407f35;
                    } else {
                        // 0x4082d9
                        size2 = len + 14;
                        goto lab_0x407efb;
                    }
                } else {
                    goto lab_0x407efb;
                }
            }
        }
    } else {
        // 0x407e10
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x407e4a;
    }
  lab_0x40817c:;
    // 0x40817c
    struct _IO_FILE * stream; // 0x407fbb
    int32_t v10 = __uflow(stream); // 0x40817f
    int64_t v11; // 0x407e10
    int64_t v12 = v11; // 0x408189
    int64_t v13; // 0x407e10
    int64_t v14 = v13; // 0x408189
    int32_t v15 = v10; // 0x408189
    int64_t v16; // 0x407e10
    int64_t v17 = v16; // 0x408189
    int64_t v18 = v11; // 0x408189
    int64_t v19 = v13; // 0x408189
    int64_t v20 = v16; // 0x408189
    if (v10 == -1) {
        // break -> 0x40818f
        goto lab_0x40818f;
    }
    goto lab_0x408009;
  lab_0x407ffe:;
    // 0x407ffe
    int64_t v90; // 0x407e10
    int64_t * v32; // 0x407ff0
    *v32 = v90 + 1;
    int64_t v89; // 0x407e10
    v12 = v89;
    int64_t v91; // 0x407e10
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x407e10
    v17 = v92;
    goto lab_0x408009;
  lab_0x408009:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x407e10
    int32_t v25; // bp-120, 0x407e10
    int32_t v26; // bp-184, 0x407e10
    int64_t v27; // 0x407fbb
    int64_t v28; // 0x407fd8
    int64_t v29; // 0x407fdd
    int64_t * v30; // 0x407ff4
    switch (c) {
        case 32: {
            goto lab_0x407ff0;
        }
        case 10: {
            goto lab_0x407ff0;
        }
        case 9: {
            goto lab_0x407ff0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4081e1
            int32_t v33; // 0x407e10
            char v34; // 0x407e10
            int32_t v35; // 0x4081ee
            if (v31 < *v30) {
                // 0x4081c0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4081eb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4081e1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4081c0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4081eb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4081d0
                v36 = v33;
            }
            // 0x4082bf
            if (v36 == -1) {
                // break -> 0x40818f
                break;
            }
            goto lab_0x407ff0;
        }
        default: {
            // 0x40801f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40818f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x408048
            int64_t v39 = v37 + 4; // 0x40804a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x408056
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x408058
            while (v41 == 0) {
                // 0x408048
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x408076
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x408082
            int64_t v45 = v43 + 4; // 0x408084
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x408090
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x408092
            while (v47 == 0) {
                // 0x408082
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40807f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4080a8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4080b8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4080bc
            int64_t v52 = v51 + v48; // 0x4080c5
            int64_t * mem; // 0x407e10
            int64_t v53; // 0x407e10
            int64_t v54; // 0x407e10
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4081fb
                int64_t v56 = v55 + 3; // 0x408207
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4080e1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4080f0
            if (mem == NULL) {
                // 0x40831c
                free((int64_t *)v21);
                function_408380(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x407f94;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x408108
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x408112
            uint32_t v62 = (int32_t)v59; // 0x408115
            int64_t v63; // 0x407e10
            if (v62 >= 8) {
                // 0x408224
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40823e
                int64_t v66 = v61 - v65; // 0x408242
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40824d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40825e
                    int64_t v70 = v69 & 0xffffffff; // 0x40825e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40825b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4082ef
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x408127
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40812b
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
            int64_t v73 = v51 + 1; // 0x40813b
            int64_t v74 = v60 - 1; // 0x40813f
            uint32_t v75 = (int32_t)v73; // 0x408144
            int64_t v76; // 0x407e10
            if (v75 >= 8) {
                // 0x408272
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40827c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40828c
                int64_t v80 = v74 - v79; // 0x408290
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40829b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4082ab
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4082a9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x408306
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40830e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x408156
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40815a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x408353
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40816e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x407ffe;
            } else {
                goto lab_0x40817c;
            }
        }
    }
  lab_0x407ff0:;
    int64_t v93 = v23; // 0x407e10
    int64_t v94 = v22; // 0x407e10
    int64_t v95 = v21; // 0x407e10
    goto lab_0x407ff0_2;
  lab_0x407f35:;
    int64_t * mem3 = malloc(size); // 0x407f35
    int64_t v97 = (int64_t)&g11; // 0x407f40
    int64_t v98; // 0x407e10
    int64_t path; // 0x407e10
    if (mem3 == NULL) {
        goto lab_0x407f12;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x407f35
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407f56;
    }
  lab_0x407e4a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x407e3d
    char v100 = *v3; // 0x407e4a
    int64_t v101; // 0x407e10
    if (v100 == 0) {
        // 0x407ea4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x407e10
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x407e10
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x407e90
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x407e97;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x407e60
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x407e6d
        char v107 = *(char *)v106; // 0x407e72
        v102 = v107;
        if (v107 == 0) {
            // 0x407ea4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x407e7b
    v104 = v103 + 1;
  lab_0x407e97:
    // 0x407ea4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x407f12:;
    char * v108 = (char *)v97;
    g51 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x407e4a;
  lab_0x407f56:;
    int64_t v109 = v98 + path; // 0x407f56
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407f82
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x407fb1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4082e2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x407fd5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407ff0_2:;
                uint64_t v96 = *v32; // 0x407ff0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40817c;
                } else {
                    goto lab_0x407ffe;
                }
            }
          lab_0x40818f:
            // 0x40818f
            function_408380(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x4081ae
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407f94;
  lab_0x407efb:;
    int64_t * mem4 = malloc(size2); // 0x407efb
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x407fa1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407f56;
    } else {
        goto lab_0x407f12;
    }
  lab_0x407f94:
    // 0x407f94
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x407f12;
}
// Address range: 0x408380 - 0x4083fb
int64_t function_408380(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x408387
    if (fileno(stream) < 0) {
        // 0x4083e7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40839a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4083cb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4083e7
            return fclose(stream);
        }
    }
    // 0x40839c
    if ((int32_t)function_408400(a1, v1) == 0) {
        // 0x4083e7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4083a8
    int32_t v3 = *v2; // 0x4083b0
    int64_t result = fclose(stream); // 0x4083be
    if (v3 != 0) {
        // 0x4083f0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4083c0
    return result;
}
// Address range: 0x408400 - 0x408440
int64_t function_408400(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40841a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40841a
        return fflush(stream);
    }
    // 0x408428
    function_408440(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x408440 - 0x408497
int64_t function_408440(int64_t stream, int32_t offset, int64_t whence) {
    // 0x408440
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40844a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40847b
    int64_t result = -1; // 0x408484
    if (v1 != -1) {
        // 0x408486
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x408492
    return result;
}
// Address range: 0x4084a0 - 0x4084fd
int64_t function_4084a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4084a0
    return function_4015b0();
}
// Address range: 0x408500 - 0x408501
int64_t function_408500(void) {
    // 0x408500
    int64_t result; // 0x408500
    return result;
}
// Address range: 0x408510 - 0x408528
int64_t function_408510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408510
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x408528 - 0x408548
int64_t function_408528(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x408532
    while (*(int64_t *)v1 != -1) {
        // 0x408533
        v1 -= 8;
    }
    // 0x408544
    return result;
}
