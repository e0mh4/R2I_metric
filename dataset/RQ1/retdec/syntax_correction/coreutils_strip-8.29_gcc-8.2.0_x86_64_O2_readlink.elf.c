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
// Address range: 0x401a10 - 0x401d12
int64_t function_401a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401a1b
    function_403d60(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_407fc0(0x4028d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2 = 0xffffffff; // 0x401a66
    int64_t v3 = 0; // 0x401a66
    int64_t v4; // 0x401a10
    while (true) {
      lab_0x401a70_4:
        // 0x401a70
        v4 = v2;
        while (true) {
            // 0x401a70
            int32_t v5; // 0x401a10
            while (true) {
              lab_0x401a70_3:
                // 0x401a70
                v5 = function_407550(v1, a2, "efmnqsvz", &g2, 0, a6);
                v2 = 2;
                switch (v5) {
                    case -1: {
                        goto lab_0x401b7a;
                    }
                    case 109: {
                        goto lab_0x401a70_4;
                    }
                    default: {
                        if (v5 <= 109) {
                            if (v5 == -130) {
                                // 0x401d0b
                                function_401e00(0);
                                // UNREACHABLE
                            }
                            if (v5 > -130) {
                                // 0x401ac5
                                v2 = 0;
                                if (v5 != 101) {
                                    // 0x401b00
                                    v2 = 1;
                                    if (v5 != 102) {
                                        goto lab_0x401d01;
                                    } else {
                                        goto lab_0x401a70_4;
                                    }
                                } else {
                                    goto lab_0x401a70_4;
                                }
                            } else {
                                if (v5 == -131) {
                                    // 0x401b23
                                    function_405f30((int64_t)g30, "readlink", "GNU coreutils", (int64_t)g18, "Dmitry V. Levin", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401d01;
                            }
                        }
                        if (v5 == 115) {
                            // 0x401b61
                            g35 = 0;
                            goto lab_0x401a70_3;
                        } else {
                            if (v5 > 115) {
                                if (v5 != 118) {
                                    // break -> 0x401ad0
                                    break;
                                }
                                // 0x401aac
                                g35 = 1;
                                goto lab_0x401a70_3;
                            } else {
                                if (v5 != 110) {
                                    if (v5 != 113) {
                                      lab_0x401d01:
                                        // 0x401d01
                                        function_401e00(1);
                                        // UNREACHABLE
                                    }
                                    // 0x401b61
                                    g35 = 0;
                                    goto lab_0x401a70_3;
                                } else {
                                    // 0x401aed
                                    g36 = 1;
                                    goto lab_0x401a70_3;
                                }
                            }
                        }
                    }
                }
            }
            // 0x401ad0
            if (v5 != 122) {
                // 0x401d01
                function_401e00(1);
                // UNREACHABLE
            }
        }
        goto lab_0x401a70_4;
    }
  lab_0x401b7a:;
    uint32_t v6 = *(int32_t *)0x60c29c; // 0x401b7a
    int64_t v7 = v6; // 0x401b7a
    if (v1 <= v7) {
        // 0x401ce2
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401d01
        function_401e00(1);
        // UNREACHABLE
    }
    int64_t v8 = v7; // 0x401b93
    if (-1 - v6 != -(int32_t)a1) {
        int64_t v9 = v7; // 0x401b9c
        if (g36 != 0) {
            // 0x401cb8
            error(0, (int32_t)"ignoring --no-newline with multiple arguments" ^ (int32_t)"ignoring --no-newline with multiple arguments", dcgettext(NULL, "ignoring --no-newline with multiple arguments", 5));
            v9 = g27;
        }
        // 0x401ba2
        g36 = 0;
        v8 = v9;
        if (v1 <= v9) {
            // 0x401c98
            return 0;
        }
    }
    int64_t v10 = v3 == 0 ? 10 : 0; // 0x401bbd
    int64_t v11 = *(int64_t *)((0x100000000 * v8 >> 29) + a2); // 0x401c2a
    int64_t v12; // 0x401a10
    if (v4 == 0xffffffff) {
        // 0x401c83
        v12 = function_402140(v11, 63);
    } else {
        // 0x401c34
        v12 = function_402230(v11, v4);
    }
    int64_t v13 = v12;
    int64_t v14; // 0x401a10
    int64_t v15; // 0x401be8
    int64_t * v16; // 0x401bef
    uint64_t v17; // 0x401bef
    if (v13 != 0) {
        // 0x401bd0
        fputs_unlocked((char *)v13, g30);
        if (g36 == 0) {
            // 0x401be8
            v15 = (int64_t)g30;
            v16 = (int64_t *)(v15 + 40);
            v17 = *v16;
            if (*(int64_t *)(v15 + 48) > v17) {
                // 0x401bfd
                *v16 = v17 + 1;
                *(char *)v17 = (char)v10;
            } else {
                // 0x401caa
                __overflow(g30, (int32_t)v10);
            }
        }
        // 0x401c0c
        free((int64_t *)v13);
        v14 = 0;
    } else {
        // 0x401c46
        v14 = 1;
        if (g35 != 0) {
            // 0x401c55
            error(0, *__errno_location(), "%s", (char *)function_405800(0, 3, v11));
            v14 = 1;
        }
    }
    // 0x401c14
    g27 = &g28;
    while (v1 > (int64_t)&g28) {
        int64_t v18 = v14;
        v11 = *(int64_t *)((0x100000000 * (int64_t)&g28 >> 29) + a2);
        if (v4 == 0xffffffff) {
            // 0x401c83
            v12 = function_402140(v11, 63);
        } else {
            // 0x401c34
            v12 = function_402230(v11, v4);
        }
        // 0x401c41
        v13 = v12;
        if (v13 != 0) {
            // 0x401bd0
            fputs_unlocked((char *)v13, g30);
            if (g36 == 0) {
                // 0x401be8
                v15 = (int64_t)g30;
                v16 = (int64_t *)(v15 + 40);
                v17 = *v16;
                if (*(int64_t *)(v15 + 48) > v17) {
                    // 0x401bfd
                    *v16 = v17 + 1;
                    *(char *)v17 = (char)v10;
                } else {
                    // 0x401caa
                    __overflow(g30, (int32_t)v10);
                }
            }
            // 0x401c0c
            free((int64_t *)v13);
            v14 = v18;
        } else {
            // 0x401c46
            v14 = 1;
            if (g35 != 0) {
                // 0x401c55
                error(0, *__errno_location(), "%s", (char *)function_405800(0, 3, v11));
                v14 = 1;
            }
        }
        // 0x401c14
        g27 = &g28;
    }
    // 0x401c98
    return v14 & 0xffffffff;
  lab_0x401a70:
    // 0x401a70
    goto lab_0x401a70_4;
}
// Address range: 0x401d20 - 0x401d4b
// Address range: 0x401d4b - 0x401d6a
int64_t function_401d4b(void) {
    // 0x401d4b
    return &g29;
}
// Address range: 0x401d6a - 0x401da1
int64_t function_401d6a(void) {
    // 0x401d6a
    return 0;
}
// Address range: 0x401da1 - 0x401df8
int64_t function_401da1(void) {
    // 0x401da1
    if (g33 != 0) {
        // 0x401df7
        int64_t result; // 0x401da1
        return result;
    }
    int64_t v1 = g34; // 0x401dd4
    int64_t result2; // 0x401de6
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401de6
        result2 = function_401d4b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401dd6
        v1++;
    }
    // 0x401dca
    g34 = v1;
    // 0x401de6
    result2 = function_401d4b();
    g33 = 1;
    return result2;
}
// Address range: 0x401df8 - 0x401dfd
int64_t function_401df8(void) {
    // 0x401df8
    return function_401d6a();
}
// Address range: 0x401e00 - 0x402135
int64_t function_401e00(int64_t a1) {
    int32_t status = a1; // 0x401e16
    if (status != 0) {
        // 0x401e1a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401e3f
        exit(status);
        // UNREACHABLE
    }
    // 0x401e46
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print value of a symbolic link or canonical file name\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -f, --canonicalize            canonicalize by following every symlink in\n                                every component of the given name recursively;\n                                all but the last component must exist\n  -e, --canonicalize-existing   canonicalize by following every symlink in\n                                every component of the given name recursively,\n                                all components must exist\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -m, --canonicalize-missing    canonicalize by following every symlink in\n                                every component of the given name recursively,\n                                without requirements on components existence\n  -n, --no-newline              do not output the trailing delimiter\n  -q, --quiet\n  -s, --silent                  suppress most error messages (on by default)\n  -v, --verbose                 report error messages\n  -z, --zero                    end each output line with NUL, not newline\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x401f13
    bool v2; // 0x401e00
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401f98
    int64_t v6 = *(int64_t *)v5; // 0x401f9c
    int64_t v7 = 9; // 0x401fa2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"readlink";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401fae
        char v11 = *(char *)v9; // 0x401fae
        char v12 = v11; // 0x401fae
        bool v13 = false; // 0x401fae
        while (v10 == v11) {
            // 0x401fa4
            v7--;
            int64_t v14 = v9 + v3; // 0x401fae
            int64_t v15 = v8 + v3; // 0x401fae
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
            // break -> 0x401fba
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 9;
    }
    // 0x401fba
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4020cc;
        } else {
            // 0x4020b6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40210b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40201c;
            } else {
                goto lab_0x4020cc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40201c;
        } else {
            // 0x402002
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40210b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40201c;
            } else {
                goto lab_0x40201c;
            }
        }
    }
  lab_0x4020cc:
    // 0x4020cc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40205c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401e3f
    exit(status);
    // UNREACHABLE
  lab_0x40201c:
    // 0x40201c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40205c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401e3f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402140 - 0x40222f
int64_t function_402140(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x402179
    int64_t * mem = malloc((int32_t)size); // 0x402183
    int64_t result = 0; // 0x40218e
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x402199
        if (v1 < 0) {
            // 0x4021f8
            if (*__errno_location() != 34) {
                // 0x402202
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x402199
        int64_t v3; // 0x402140
        if (buf_size > v2) {
            // 0x402210
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x4021ab
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x4021b8
            int64_t * mem2 = malloc((int32_t)size2); // 0x4021be
            if (mem2 == NULL) {
                // 0x4021cb
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x4021f8
                if (*__errno_location() != 34) {
                    // 0x402202
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x4021a6
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x402210
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x4021ab
            free(buf);
        }
        // 0x4021e0
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x402220
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x4021cb_2:
    // 0x4021cb
    return result;
}
// Address range: 0x402230 - 0x4028a3
int64_t function_402230(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    uint32_t v2 = (int32_t)a2;
    uint32_t v3 = v2 % 4; // 0x402249
    if (a1 == 0 || (v2 + 3 & v3) != 0) {
        // 0x4026e0
        *__errno_location() = 22;
        // 0x40252e
        return 0;
    }
    int64_t v4; // 0x402230
    int64_t v5; // 0x402230
    int64_t v6; // 0x402230
    switch ((char)a1) {
        case 0: {
            // 0x4027a1
            *__errno_location() = 2;
            // 0x40252e
            return 0;
        }
        case 47: {
            int64_t v7 = function_406070(0x1000); // 0x4023f5
            *(char *)v7 = 47;
            v6 = v7 + 1;
            v5 = v7 + 0x1000;
            v4 = v7;
            // break -> 0x4022a5
            break;
        }
        default: {
            int64_t str = function_406300(a1, a2); // 0x402277
            if (str == 0) {
                // 0x40252e
                return 0;
            }
            int32_t len = strlen((char *)str); // 0x40228b
            int64_t v8 = len; // 0x40228b
            if (len < 0x1000) {
                int64_t v9 = function_4060d0(str, 0x1000); // 0x4027bc
                v6 = v9 + v8;
                v5 = v9 + 0x1000;
                v4 = v9;
            } else {
                int64_t v10 = str + v8; // 0x40229f
                v6 = v10;
                v5 = v10;
                v4 = str;
            }
            // break -> 0x4022a5
            break;
        }
    }
    int64_t v11 = a1; // 0x4022d2
    int64_t v12 = 0; // 0x4022d2
    int64_t v13 = 0; // 0x4022d2
    int64_t v14 = 0; // 0x4022d2
    char * v15 = (char *)&v1; // 0x4022d2
    int64_t v16 = v6; // 0x4022d2
    int64_t v17 = v5; // 0x4022d2
    int64_t v18 = v4; // 0x4022d2
    int64_t v19 = a1; // 0x4022d2
    int64_t v20; // 0x402230
    int64_t v21; // 0x402230
    int64_t v22; // 0x402230
    int64_t v23; // 0x402230
    char * v24; // 0x402230
    int64_t v25; // 0x402230
    int64_t v26; // 0x402230
    int64_t v27; // 0x402230
    int64_t v28; // 0x402230
    int64_t v29; // 0x402230
    int64_t v30; // 0x402230
    int64_t v31; // 0x402230
    int64_t v32; // 0x402230
    int64_t v33; // 0x402230
    int32_t * v34; // 0x402230
    int32_t * v35; // 0x402230
    int32_t v36; // 0x402230
    int32_t v37; // 0x402230
    int32_t v38; // 0x402230
    int64_t v39; // 0x402230
    int64_t v40; // 0x402230
    int64_t v41; // 0x402230
    int64_t v42; // 0x402230
    int64_t v43; // 0x402230
    int64_t v44; // 0x402230
    int64_t v45; // 0x402230
    uint64_t v46; // 0x402230
    int64_t v47; // 0x402313
    char * str3; // 0x402230
    int64_t v48; // 0x402313
    char * v49; // 0x402230
    int64_t v50; // 0x4025a4
    char * str2; // 0x4025b8
    int32_t len2; // 0x4025b8
    int64_t v51; // 0x4025b8
    int32_t len3; // 0x4025c3
    while (true) {
      lab_0x4022d8_4:
        // 0x4022d8
        v37 = v36;
        v40 = v14;
        int64_t v52 = v13;
        int64_t v53 = v11;
        int16_t v54 = (int16_t)v37 & -0x1000;
        v42 = v12;
        v24 = v15;
        v27 = v16;
        v22 = v19;
        int32_t v55; // 0x402230
        while (true) {
          lab_0x4022d8_3:
            // 0x4022d8
            v21 = v18;
            v26 = v17;
            v43 = v42;
            v46 = v21 + 1;
            v25 = (int64_t)*v24;
            v29 = v27;
            v23 = v22;
            int64_t v56; // 0x402230
            int64_t v57; // 0x402330
            while (true) {
              lab_0x4022d8_2:
                // 0x4022d8
                v30 = v29;
                if (v25 == 0) {
                    // break (via goto) -> 0x4024e0
                    goto lab_0x4024e0_3;
                }
                int64_t v58 = v23; // 0x4022e4
                int64_t v59 = v25; // 0x4022e4
                int64_t v60 = v23; // 0x4022e4
                int64_t v61; // 0x4022f0
                unsigned char v62; // 0x4022f4
                if (v25 == 47) {
                    v61 = v58 + 1;
                    v62 = *(char *)v61;
                    v58 = v61;
                    while (v62 == 47) {
                        // 0x4022f0
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                    }
                    // 0x4022fd
                    v59 = v62;
                    v60 = v61;
                    if (v62 == 0) {
                        // break (via goto) -> 0x4024e0
                        goto lab_0x4024e0_3;
                    }
                }
                // 0x402305
                v56 = v60;
                int64_t v63 = v59;
                v47 = v56 + 1;
                str3 = (char *)v47;
                unsigned char v64 = *str3; // 0x402313
                int64_t v65 = v47; // 0x40231e
                while (v64 != 0 == (v64 != 47)) {
                    // 0x402313
                    v47 = v65 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                }
                if (v47 == v56) {
                    // break (via goto) -> 0x4024e0
                    goto lab_0x4024e0_3;
                }
                // 0x40232d
                v48 = v64;
                v57 = v47 - v56;
                while (v57 != 1) {
                    if (v57 == 2 != ((char)v63 == 46)) {
                        // break (via goto) -> 0x40234c
                        goto lab_0x40234c_2;
                    }
                    // 0x4026a0
                    if (*(char *)(v56 + 1) != 46) {
                        // break (via goto) -> 0x40234c
                        goto lab_0x40234c_2;
                    }
                    int64_t v66 = v48; // 0x4026b6
                    int64_t v67 = v47; // 0x4026b6
                    if (v30 > v46) {
                        int64_t v68 = v30 - 1; // 0x4026bc
                        v28 = v68;
                        if (v21 >= v68) {
                            goto lab_0x4022d8;
                        } else {
                            int64_t v69 = v30 - 2; // 0x4026c5
                            v28 = v68;
                            if (*(char *)v69 != 47) {
                                // 0x402803
                                v28 = v21;
                                v31 = v69;
                                if (v21 == v69) {
                                    goto lab_0x4022d8;
                                } else {
                                    goto lab_0x402810;
                                }
                            } else {
                                goto lab_0x4022d8;
                            }
                        }
                    }
                    if (v66 == 0) {
                        // break (via goto) -> 0x4024e0
                        goto lab_0x4024e0_3;
                    }
                    // 0x4022e0
                    v58 = v67;
                    v59 = v66;
                    v60 = v67;
                    if (v66 == 47) {
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                        while (v62 == 47) {
                            // 0x4022f0
                            v61 = v58 + 1;
                            v62 = *(char *)v61;
                            v58 = v61;
                        }
                        // 0x4022fd
                        v59 = v62;
                        v60 = v61;
                        if (v62 == 0) {
                            // break (via goto) -> 0x4024e0
                            goto lab_0x4024e0_3;
                        }
                    }
                    // 0x402305
                    v56 = v60;
                    v63 = v59;
                    v47 = v56 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                    while (v64 != 0 == (v64 != 47)) {
                        // 0x402313
                        v47 = v65 + 1;
                        str3 = (char *)v47;
                        v64 = *str3;
                        v65 = v47;
                    }
                    if (v47 == v56) {
                        // break (via goto) -> 0x4024e0
                        goto lab_0x4024e0_3;
                    }
                    // 0x40232d
                    v48 = v64;
                    v57 = v47 - v56;
                }
                // 0x4024c8
                v28 = v30;
                if ((char)v63 != 46) {
                    // break -> 0x40234c
                    break;
                }
                goto lab_0x4022d8;
            }
          lab_0x40234c_2:;
            int64_t v70 = v30; // 0x402350
            if (*(char *)(v30 - 1) != 47) {
                // 0x402352
                *(char *)v30 = 47;
                v70 = v30 + 1;
            }
            int64_t v71 = v70;
            int64_t v72 = v71 + v57;
            int64_t v73 = v72; // 0x402360
            int64_t v74 = v71; // 0x402360
            v17 = v26;
            int64_t v75 = v21; // 0x402360
            if (v26 <= v72) {
                int64_t v76 = v57 < 0x1000 == (4095 - v57 & v57) < 0 ? v57 + 1 : 0x1000;
                int64_t v77 = v76 + v26 - v21; // 0x402383
                v75 = function_4060d0(v21, v77);
                v74 = v75 + v71 - v21;
                v73 = v74 + v57;
                v17 = v75 + v77;
            }
            // 0x40239d
            v18 = v75;
            v20 = v73;
            memcpy((int64_t *)v74, (int64_t *)v56, (int32_t)v57);
            *(char *)v20 = 0;
            v55 = 0;
            if ((a2 & 4) != 0 && v3 == 2) {
                // break -> 0x4023d3
                break;
            }
            // 0x402410
            v1 = 1;
            v49 = (char *)v18;
            int64_t v78; // bp-200, 0x402230
            int32_t v79; // 0x402230
            if ((a2 & 4) == 0) {
                // 0x402548
                v79 = __lxstat(1, v49, (struct stat *)&v78);
            } else {
                // 0x402429
                v79 = __xstat(1, v49, (struct stat *)&v78);
            }
            // 0x402433
            if (v79 == 0) {
                // 0x4024a0
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
                        int64_t v80 = v43; // 0x402566
                        if (v43 == 0) {
                            // 0x4026f3
                            v1 = 7;
                            v80 = function_4032d0(7, 0, 0x403c90, 0x403d00, 0x403d40);
                            if (v80 == 0) {
                                // 0x40271d
                                function_4062c0(7);
                                // UNREACHABLE
                            }
                        }
                        // 0x40256c
                        v45 = v80;
                        int64_t v81 = function_402a00(v45, v53, &v78); // 0x40257b
                        if ((char)v81 != 0) {
                            // 0x402639
                            v44 = v45;
                            if (v3 != 2) {
                                // 0x402644
                                v32 = 40;
                                v34 = __errno_location();
                                goto lab_0x402651_2;
                            }
                        } else {
                            // 0x402588
                            function_402970(v45, v53, &v78);
                            int64_t v82; // 0x402230
                            v50 = function_402140(v18, v82);
                            if (v50 != 0) {
                                // 0x4025b5
                                str2 = (char *)v50;
                                len2 = strlen(str2);
                                v51 = len2;
                                len3 = strlen(str3);
                                uint64_t v83 = v51 + 1 + (int64_t)len3; // 0x4025d1
                                if (v52 == 0) {
                                    int64_t v84 = v83 >= 0x1000 ? v83 : 0x1000; // 0x402781
                                    int64_t v85 = function_406070(v84); // 0x40278d
                                    v39 = v84;
                                    v41 = v85;
                                    goto lab_0x4025e7;
                                } else {
                                    // 0x4025dc
                                    v39 = v52;
                                    v41 = v40;
                                    if (v83 > v52) {
                                        int64_t v86 = function_4060d0(v40, v83); // 0x402842
                                        v39 = v83;
                                        v41 = v86;
                                        goto lab_0x4025e7;
                                    } else {
                                        goto lab_0x4025e7;
                                    }
                                }
                            }
                            int32_t * v87 = __errno_location(); // 0x4027d3
                            uint32_t v88 = *v87; // 0x4027e0
                            v44 = v45;
                            if (v3 == 2 != v88 != 12) {
                                // 0x402651
                                v32 = v88;
                                v34 = v87;
                                goto lab_0x402651_2;
                            }
                        }
                        goto lab_0x402489;
                    }
                    case 0x4000: {
                        goto lab_0x4023e4;
                    }
                    default: {
                        goto lab_0x4023d3;
                    }
                }
            } else {
                int32_t * v89 = __errno_location(); // 0x402437
                uint32_t v90 = *v89; // 0x40243f
                if (v3 == 0) {
                    // 0x402735
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x402735_3;
                }
                // 0x40244d
                v55 = 0;
                if (v3 != 1) {
                    // break -> 0x4023d3
                    break;
                }
                char v91 = *(char *)(v47 + (int64_t)strspn(str3, "/")); // 0x402475
                v44 = v43;
                if (v90 == 2 != (v91 == 0)) {
                    // 0x402735
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x402735_3;
                }
                goto lab_0x402489;
            }
        }
      lab_0x4023d3:
        // 0x4023d3
        v15 = str3;
        v11 = v53;
        v12 = v43;
        v13 = v52;
        v14 = v40;
        v38 = v55;
        v16 = v20;
        v19 = v47;
        if (v3 != 2 == (*str3 != 0)) {
            // 0x402728
            v33 = 20;
            v35 = __errno_location();
            goto lab_0x402735_3;
        }
        goto lab_0x4023e4;
    }
  lab_0x4024e0_3:;
    char * v92; // 0x402230
    int64_t v93; // 0x402230
    int64_t v94; // 0x402230
    if (v30 > v46) {
        int64_t v95 = v30 - 1; // 0x4024ea
        char * v96 = (char *)v95;
        v92 = v96;
        v93 = v30;
        v94 = v95;
        if (*v96 == 47) {
            goto lab_0x4024f8;
        } else {
            goto lab_0x4024f4;
        }
    } else {
        goto lab_0x4024f4;
    }
  lab_0x4022d8:
    // 0x4022d8
    v25 = v48;
    v29 = v28;
    v23 = v47;
    goto lab_0x4022d8_2;
  lab_0x4023e4:
    // 0x4023e4
    v36 = v38;
    goto lab_0x4022d8_4;
  lab_0x402489:
    // 0x402489
    v42 = v44;
    v24 = str3;
    v27 = v20;
    v22 = v47;
    goto lab_0x4022d8_3;
  lab_0x4024f4:
    // 0x4024f4
    v92 = (char *)v30;
    v93 = v30 + 1;
    v94 = v30;
    goto lab_0x4024f8;
  lab_0x4024f8:
    // 0x4024f8
    *v92 = 0;
    int64_t v97 = v21; // 0x4024fe
    if (v26 != v93) {
        // 0x402500
        v97 = function_4060d0(v21, 1 - v21 + v94);
    }
    // 0x402512
    free((int64_t *)v40);
    int64_t result = v97; // 0x402524
    if (v43 != 0) {
        // 0x402526
        function_403510(v43);
        result = v97;
    }
  lab_0x40252e:
    // 0x40252e
    return result;
  lab_0x402810:;
    int64_t v98 = v31 - 1; // 0x402810
    v28 = v31;
    if (*(char *)v98 == 47) {
        goto lab_0x4022d8;
    } else {
        // 0x40281a
        v28 = v98;
        v31 = v98;
        if (v21 != v98) {
            goto lab_0x402810;
        } else {
            goto lab_0x4022d8;
        }
    }
  lab_0x402735_3:
    // 0x402735
    free((int64_t *)v40);
    free((int64_t *)v18);
    int64_t v99 = v43; // 0x40275f
    int64_t v100 = v33; // 0x40275f
    int32_t * v101 = v35; // 0x40275f
    if (v43 == 0) {
        goto lab_0x402691;
    } else {
        goto lab_0x402675;
    }
  lab_0x402691:
    // 0x402691
    *v101 = (int32_t)(v100 & 0xffffffff);
    result = 0;
    goto lab_0x40252e;
  lab_0x402675:
    // 0x402675
    function_403510(v99);
    goto lab_0x402691;
  lab_0x402651_2:
    // 0x402651
    free((int64_t *)v40);
    free((int64_t *)v18);
    v99 = v45;
    v100 = v32;
    v101 = v34;
    goto lab_0x402675;
  lab_0x4025e7:
    // 0x4025e7
    memmove((int64_t *)(v41 + v51), (int64_t *)v47, len3 + 1);
    int64_t * v102 = (int64_t *)v50; // 0x402607
    int64_t * dest_mem = memcpy((int64_t *)v41, v102, len2); // 0x402607
    int64_t v103 = v18 + 1; // 0x402610
    int64_t v104; // 0x402230
    int64_t v105; // 0x402230
    if (*str2 == 47) {
        // 0x4027f6
        *v49 = 47;
        v104 = v103;
        goto lab_0x40262c;
    } else {
        // 0x402623
        v104 = v20;
        if (v20 > v103) {
            int64_t v106 = v20 - 1; // 0x40286c
            v104 = v106;
            if (v18 >= v106) {
                goto lab_0x40262c;
            } else {
                // 0x402875
                v104 = v106;
                v105 = v106;
                if (*(char *)(v20 - 2) == 47) {
                    goto lab_0x40262c;
                } else {
                    goto lab_0x402882;
                }
            }
        } else {
            goto lab_0x40262c;
        }
    }
  lab_0x40262c:;
    int64_t v107 = (int64_t)dest_mem; // 0x402607
    free(v102);
    v15 = (char *)dest_mem;
    v11 = v107;
    v12 = v45;
    v13 = v39;
    v14 = v41;
    v38 = v37;
    v16 = v104;
    v19 = v107;
    goto lab_0x4023e4;
  lab_0x402882:;
    int64_t v108 = v105;
    int64_t v109 = v108 - 1; // 0x402882
    v104 = v18;
    if (v18 == v109) {
        goto lab_0x40262c;
    } else {
        // 0x40288f
        v104 = v109;
        v105 = v109;
        if (*(char *)(v108 - 2) == 47) {
            goto lab_0x40262c;
        } else {
            goto lab_0x402882;
        }
    }
}
// Address range: 0x4028b0 - 0x4028b8
int64_t function_4028b0(int64_t a1) {
    // 0x4028b0
    g38 = a1;
    int64_t result; // 0x4028b0
    return result;
}
// Address range: 0x4028c0 - 0x4028c8
int64_t function_4028c0(int64_t a1) {
    // 0x4028c0
    g37 = a1;
    int64_t result; // 0x4028c0
    return result;
}
// Address range: 0x4028d0 - 0x40296e
int64_t function_4028d0(void) {
    // 0x4028d0
    int32_t * err_num; // 0x4028e6
    if ((int32_t)function_407650((int64_t)g30) == 0) {
        goto lab_0x4028fc;
    } else {
        // 0x4028e6
        err_num = __errno_location();
        if (g37 == 0) {
            goto lab_0x402913;
        } else {
            // 0x4028f7
            if (*err_num != 32) {
                goto lab_0x402913;
            } else {
                goto lab_0x4028fc;
            }
        }
    }
  lab_0x4028fc:;
    int64_t result = function_407650((int64_t)g32); // 0x402903
    if ((int32_t)result == 0) {
        // 0x40290c
        return result;
    }
    // 0x40294e
    _exit(g19);
    // UNREACHABLE
  lab_0x402913:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40291f
    if (g38 == 0) {
        // 0x402959
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402933
        error(0, *err_num, "%s: %s", (char *)function_4057d0((int64_t)g38), v1);
    }
    // 0x40294e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x402970 - 0x4029f6
int64_t function_402970(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x4029e0
        int64_t result; // 0x402970
        return result;
    }
    int64_t v1 = (int64_t)a3;
    int64_t result2 = function_406070(24); // 0x40298d
    *(int64_t *)result2 = function_4062a0(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(v1 + 8);
    *(int64_t *)(result2 + 16) = v1;
    int64_t v2 = function_403a70(a1, result2); // 0x4029b6
    if (v2 == 0) {
        // 0x4029f1
        function_4062c0(a1);
        // UNREACHABLE
    }
    // 0x4029c0
    if (result2 == v2) {
        // 0x4029e0
        return result2;
    }
    // 0x4029c5
    return function_403d40(result2);
}
// Address range: 0x402a00 - 0x402a3b
int64_t function_402a00(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x402a38
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x402a0d
    int64_t v2 = function_403060(a1, &v1); // 0x402a21
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x402a40 - 0x402ad3
int64_t function_402a40(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x402a57
    if (v1 == -1) {
        // 0x402acf
        return -1;
    }
    int64_t v2 = v1; // 0x402a5f
    int64_t v3; // 0x402a40
    while (true) {
      lab_0x402a68:
        // 0x402a68
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x402ac0;
        } else {
            goto lab_0x402ac5;
        }
    }
  lab_0x402acf_2:;
    // 0x402acf
    int64_t result; // 0x402a40
    return result;
  lab_0x402ac5:;
    int64_t v4 = v3 + 2; // 0x402ac5
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x402acf
        goto lab_0x402acf_2;
    }
    goto lab_0x402a68;
  lab_0x402ac0:
    // 0x402ac0
    result = v3;
    goto lab_0x402ac5;
}
// Address range: 0x402ae0 - 0x402af0
int64_t function_402ae0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x402ae0
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x402af0 - 0x402af7
int64_t function_402af0(int64_t a1, int64_t a2) {
    // 0x402af0
    int64_t v1; // 0x402af0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x402b00 - 0x402b21
int64_t function_402b00(int64_t a1, int64_t a2) {
    // 0x402b00
    int64_t v1; // 0x402b00
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x402b18
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402b30 - 0x402c49
int64_t function_402b30(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_402b00(a1, a2); // 0x402b44
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x402b4c
    int64_t result2 = *v2; // 0x402b4c
    if (result2 == 0) {
        // 0x402bde
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x402b74
            if (v3 == 0) {
                // 0x402bde
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x402b81
            int64_t v5 = v3; // 0x402b87
            int64_t v6 = v1; // 0x402b87
            int64_t result = v4; // 0x402b87
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x402bbc_2:
                // 0x402bbc
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x402bc1
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x402bd0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x402bde
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x402b94
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x402ba1
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x402bbc_2;
                }
                // 0x402ba9
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x402bbc_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x402bde
            return 0;
        }
    }
    // 0x402bf3
    if ((char)a4 == 0) {
        // 0x402bde
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x402bf8
    if (v12 == 0) {
        // 0x402c40
        *v2 = 0;
        // 0x402bde
        return result2;
    }
    // 0x402c01
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x402c0f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x402c50 - 0x402cce
int64_t function_402c50(uint64_t a1) {
    if (a1 == (int64_t)&g3) {
        // 0x402ccd
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x402c5b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g3) {
        // 0x402cba
        *(int64_t *)a1 = (int64_t)&g3;
        return 0;
    }
    // 0x402c69
    __asm_comiss_1(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x402c84
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_2(v2, 0x3dcccccd); // 0x402c91
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x402c99
    __asm_comiss_1(v4, v3);
    __asm_comiss_1(__asm_movss(0x3f800000), v4);
    __asm_comiss_1(v1, v3);
    // 0x402ccd
    return 1;
}
// Address range: 0x402cd0 - 0x402e1a
int64_t function_402cd0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x402cea
    uint64_t v2 = *v1; // 0x402cea
    if (v2 <= a2) {
        // 0x402dd4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x402cd0
    int64_t v8 = a2; // 0x402cd0
    int64_t v9; // 0x402cd0
    int64_t result; // 0x402cd0
    int64_t v10; // 0x402cd0
    while (true) {
      lab_0x402d06_2:
        // 0x402d06
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x402d06
        int64_t v12 = *v11; // 0x402d06
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x402cf8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x402d0f
            int64_t v14 = *v13; // 0x402d0f
            int64_t v15 = v14; // 0x402d17
            int64_t v16 = v12; // 0x402d17
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x402d34
                    int64_t v19 = *v18; // 0x402d34
                    int64_t v20 = function_402b00(v3, v19); // 0x402d3d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x402d42
                    int64_t v22 = *v21; // 0x402d42
                    int64_t * v23 = (int64_t *)v20; // 0x402d46
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x402d20
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x402d6f
                            break;
                        }
                    } else {
                        // 0x402d4c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x402d6f
                            break;
                        }
                    }
                    // 0x402d34
                    v15 = v22;
                }
                // 0x402d6f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x402d73
                v9 = *v1;
                goto lab_0x402cf8;
            } else {
                int64_t v26 = function_402b00(v3, v25); // 0x402d8b
                int64_t * v27 = (int64_t *)v26; // 0x402d90
                if (*v27 == 0) {
                    // 0x402df0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x402d99
                    int64_t * v29; // 0x402cd0
                    int64_t v30; // 0x402cd0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x402dff
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x402dd4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x402dff
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x402daa
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x402db9
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x402dc1
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x402dca
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x402dd4
                    break;
                }
                goto lab_0x402d06_2;
            }
        }
    }
    // 0x402dd4
    return result;
  lab_0x402cf8:;
    int64_t v36 = v10 + 16; // 0x402cf8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x402d06_2;
    // 0x402d06
    goto lab_0x402d06_2;
}
// Address range: 0x402e20 - 0x402e25
int64_t function_402e20(int64_t a1) {
    // 0x402e20
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x402e30 - 0x402e35
int64_t function_402e30(int64_t a1) {
    // 0x402e30
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x402e40 - 0x402e45
int64_t function_402e40(int64_t a1) {
    // 0x402e40
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x402e50 - 0x402e9f
int64_t function_402e50(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x402e53
    int64_t result = 0; // 0x402e5c
    if (v1 <= a1) {
      lab_0x402e9d:
        // 0x402e9d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x402e60
    while (*(int64_t *)v3 == 0) {
        // 0x402e60
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x402e6f
    int64_t v6 = v5; // 0x402e7b
    int64_t v7 = 1; // 0x402e7b
    int64_t v8; // 0x402e50
    int64_t v9; // 0x402e80
    int64_t v10; // 0x402e84
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x402e80
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x402e90
    int64_t v12 = v3 + 16; // 0x402e94
    while (v12 < v1) {
        // 0x402e69
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x402e60
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x402e6f
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
                // 0x402e80
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x402e8d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x402e9d
    return result2;
}
// Address range: 0x402ea0 - 0x402f07
int64_t function_402ea0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x402ea3
    int64_t v2 = a1; // 0x402eaf
    int64_t v3 = 0; // 0x402eaf
    int64_t v4 = 0; // 0x402eaf
    int64_t v5 = 0; // 0x402eaf
    int64_t v6 = 0; // 0x402eaf
    int64_t v7; // 0x402ea0
    int64_t v8; // 0x402ea0
    int64_t v9; // 0x402ea0
    if (v1 > a1) {
        while (true) {
          lab_0x402ec1_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x402eb8;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x402ec7
                int64_t v13 = v10 + 1; // 0x402ecb
                int64_t v14 = v11 + 1; // 0x402ecf
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x402ed6
                int64_t v16 = v14; // 0x402ed6
                if (v12 == 0) {
                    goto lab_0x402eb8;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x402ee0
                    int64_t v18 = v16 + 1; // 0x402ee4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x402ee0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x402eed
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x402ef6
                        break;
                    }
                    goto lab_0x402ec1_2;
                }
            }
        }
    }
  lab_0x402ef6:
    // 0x402ef6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x402eff
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x402efe
    return 0;
  lab_0x402eb8:;
    int64_t v20 = v8 + 16; // 0x402eb8
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x402ef6
        goto lab_0x402ef6;
    }
    goto lab_0x402ec1_2;
    // 0x402ec1
    goto lab_0x402ec1_2;
}
// Address range: 0x402f10 - 0x403058
int64_t function_402f10(uint64_t a1, int64_t a2) {
    // 0x402f10
    int128_t v1; // 0x402f10
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x402f23
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x402f27
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x402f2e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x402f40
            while (*(int64_t *)v7 == 0) {
                // 0x402f40
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x402f7d
                    goto lab_0x402f7d;
                }
            }
        }
    }
  lab_0x402f7d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x402f8c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x402f10
    int128_t v10; // 0x402f10
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x403023
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40302c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x402fc3;
        } else {
            goto lab_0x403039;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x402fb6
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x403039;
        } else {
            goto lab_0x402fc3;
        }
    }
  lab_0x402fc3:
    // 0x402fc3
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x402fc7
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x402fc7
    goto lab_0x402fcc;
  lab_0x403039:
    // 0x403039
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40304a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x402fcc;
  lab_0x402fcc:
    // 0x402fcc
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x403060 - 0x4030b3
int64_t function_403060(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_402b00(a1, result); // 0x40306a
    int64_t v2 = *(int64_t *)v1; // 0x40306f
    if (v2 == 0) {
        // 0x40309d
        return 0;
    }
    // 0x403083
    if (v2 == result) {
        // 0x40309d
        return result;
    }
    int64_t v3 = v1; // 0x403094
    int64_t result2 = v2; // 0x403092
    while ((char)v1 == 0) {
        // 0x403094
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40309d
            break;
        }
        // 0x403080
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40309d
            break;
        }
        result2 = v2;
    }
    // 0x40309d
    return result2;
}
// Address range: 0x4030c0 - 0x403108
int64_t function_4030c0(uint64_t a1) {
    int64_t result = 0; // 0x4030c5
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x4030d7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4030ce
    if (v1 <= a1) {
        // 0x4030d7
        return result;
    }
    int64_t v2 = a1; // 0x4030d5
    int64_t v3 = *(int64_t *)v2; // 0x4030e9
    result = v3;
    while (v3 == 0) {
        // 0x4030e0
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x4030d7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x4030d7
    return result;
}
// Address range: 0x403110 - 0x40317a
int64_t function_403110(int64_t a1, int64_t a2) {
    int64_t v1 = function_402b00(a1, a2); // 0x40311c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x403138
    while (*(int64_t *)v2 != a2) {
        // 0x403130
        if (v3 == 0) {
            goto lab_0x403146;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x403170
        return *(int64_t *)v3;
    }
  lab_0x403146:;
    int64_t v4 = v1 + 16; // 0x403158
    int64_t result = 0; // 0x40315f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x403150
        result = v5;
        if (v5 != 0) {
            // break -> 0x403163
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x403163
    return result;
}
// Address range: 0x403180 - 0x4031e4
int64_t function_403180(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x403186
    int64_t result = 0; // 0x40318a
    if (*v1 <= a1) {
      lab_0x4031a1:
        // 0x4031a1
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40318f
    int64_t v4 = v2; // 0x403195
    int64_t v5; // 0x403180
    int64_t v6; // 0x403180
    int64_t v7; // 0x4031c8
    int64_t v8; // 0x4031d1
    int64_t v9; // 0x4031b1
    int64_t v10; // 0x4031b5
    if (v3 != 0) {
        // 0x4031a8
        if (v2 >= a3) {
            // break -> 0x4031a1
            break;
        }
        // 0x4031ad
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
            // 0x4031c5
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x4031c0
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x4031c5
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
    int64_t v12 = a1 + 16; // 0x403197
    result = v11;
    while (*v1 > v12) {
        // 0x40318f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x4031a8
            result = v2;
            if (v2 >= a3) {
                // break -> 0x4031a1
                break;
            }
            // 0x4031ad
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
                // 0x4031c5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x4031c0
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x4031c5
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x403197
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x4031a1
    return result;
}
// Address range: 0x4031f0 - 0x403268
int64_t function_4031f0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x403201
    int64_t result = 0; // 0x403205
    if (v1 <= a1) {
      lab_0x403224:
        // 0x403224
        return result;
    }
    int64_t v2 = a1; // 0x40321a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x403218
    int64_t v5 = v2; // 0x403218
    int64_t v6 = v3; // 0x403218
    int64_t v7; // 0x4031f0
    int64_t v8; // 0x403248
    int64_t v9; // 0x40324c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x403248
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x403258
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x403248
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
        // 0x403212
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x403248
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x403258
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x403248
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40321a
        result2 = v4;
        v2 += 16;
    }
    // 0x403224
    return result2;
}
// Address range: 0x403270 - 0x4032a1
int64_t function_403270(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x403277
    if (v1 == 0) {
        // 0x40329d
        return 0;
    }
    int64_t result = 0; // 0x403277
    v2++;
    char v3 = *(char *)v2; // 0x403293
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40329d
    return result;
}
// Address range: 0x4032b0 - 0x4032d0
int64_t function_4032b0(int64_t a1) {
    // 0x4032b0
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x4032d0 - 0x40345a
int64_t function_4032d0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4032d0
    int128_t v1; // 0x4032d0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40330a
    int64_t result = (int64_t)mem; // 0x40330a
    if (mem == NULL) {
        // 0x4033ba
        return result;
    }
    int64_t v3 = result + 40; // 0x40331b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x4032d0
    int128_t v6; // 0x4032d0
    if (a2 == 0) {
        // 0x4033d0
        *v4 = (int64_t)&g3;
        int64_t v7 = function_402c50(v3); // 0x4033d8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x4033dd
        if ((char)v7 == 0) {
            // 0x4033b0
            free(mem);
            // 0x4033ba
            return 0;
        }
        // 0x4033e9
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x403433;
        } else {
            goto lab_0x4033ee;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_402c50(v3) == 0) {
            // 0x4033b0
            free(mem);
            // 0x4033ba
            return 0;
        }
        // 0x403335
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_402a40(a1); // 0x403343
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x4033b0
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x4033b0
                free(mem);
                // 0x4033ba
                return 0;
            }
            // 0x403361
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x4033b0
                free(mem);
                // 0x4033ba
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x403372
            int64_t v10 = (int64_t)mem2; // 0x403372
            *mem = v10;
            if (mem2 == NULL) {
                // 0x4033b0
                free(mem);
                // 0x4033ba
                return 0;
            }
            // 0x40337f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x402ae0 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x402af0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x4033ba
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x403428
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x4033ee;
        } else {
            goto lab_0x403433;
        }
    }
  lab_0x403433:
    // 0x403433
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x403443
    int128_t v13 = v6; // 0x40344c
    int128_t v14 = __asm_addss(v12, v12); // 0x40344c
    goto lab_0x4033f7;
  lab_0x4033ee:
    // 0x4033ee
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x4033f7;
  lab_0x4033f7:
    // 0x4033f7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x4033b0
    free(mem);
    // 0x4033ba
    return 0;
}
// Address range: 0x403460 - 0x403508
int64_t function_403460(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40346a
    uint64_t v2 = *v1; // 0x40346a
    int64_t result; // 0x403460
    if (v2 <= a1) {
      lab_0x4034f3:
        // 0x4034f3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x403478
    while (*v6 == 0) {
        // 0x403478
        v7 = v5 + 16;
        int64_t v8; // 0x403460
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x4034f3
            goto lab_0x4034f3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x403489
    int64_t v10 = *v9; // 0x403489
    int64_t v11 = *v3; // 0x40348e
    int64_t v12 = v11; // 0x403495
    int64_t v13 = v10; // 0x403495
    int64_t result2 = v11; // 0x403495
    int64_t * v14; // 0x4034ae
    int64_t v15; // 0x4034ae
    int64_t v16; // 0x4034aa
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x4034a5
            v16 = *v3;
        }
        // 0x4034ae
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x4034a0
            v16 = 0;
            if (v12 != 0) {
                // 0x4034a5
                v16 = *v3;
            }
            // 0x4034ae
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
    // 0x4034cd
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x4034e0
    *v9 = 0;
    uint64_t v18 = *v1; // 0x4034ed
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40347c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x403478
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x4034f3
                goto lab_0x4034f3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x403489
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x4034a5
                v16 = *v3;
            }
            // 0x4034ae
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x4034a0
                v16 = 0;
                if (v12 != 0) {
                    // 0x4034a5
                    v16 = *v3;
                }
                // 0x4034ae
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
        // 0x4034cd
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x4034f3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x403510 - 0x4035e6
int64_t function_403510(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40351f
    uint64_t v2 = *v1; // 0x40351f
    int64_t v3 = a1; // 0x403523
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x403573;
    } else {
        // 0x403525
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x403573;
        } else {
            // 0x40352c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x403541
                int64_t v6; // 0x403538
                while (v5 == 0) {
                    // 0x403538
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x403573
                        goto lab_0x403573;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x403558
                int64_t v8 = v7; // 0x40355f
                int64_t v9 = v5; // 0x40355f
                int64_t v10; // 0x403510
                int64_t v11; // 0x403558
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x403550
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x403553
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x403566
                v3 = v9;
                while (v2 > v12) {
                    // 0x403541
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x403538
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x403573
                            goto lab_0x403573;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x403553
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x403550
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x403553
                        v9 = *(int64_t *)v10;
                    }
                    // 0x403561
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x403573;
            } else {
                goto lab_0x4035ac;
            }
        }
    }
  lab_0x403573:
    // 0x403573
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x403580
        int64_t v14 = v13; // 0x403587
        int64_t v15 = v2; // 0x403587
        int64_t v16; // 0x403590
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x403590
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x4035a1
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x4035a1
        int64_t v18 = v15; // 0x4035aa
        int64_t v19 = v17; // 0x4035aa
        while (v15 > v17) {
            // 0x403580
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x403590
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x4035a1
                v15 = *v1;
            }
            // 0x4035a1
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x4035ac;
  lab_0x4035ac:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x4035ac
    if (v20 == 0) {
        // 0x4035d1
        free(NULL);
        free((int64_t *)a1);
        return &g51;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x4035c0
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x4035cf
    while (v21 != 0) {
        // 0x4035c0
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x4035d1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g51;
}
// Address range: 0x4035f0 - 0x4037ea
int64_t function_4035f0(int64_t a1, uint64_t a2) {
    // 0x4035f0
    int128_t v1; // 0x4035f0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x4035fb
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x4035f0
        if (a2 < 0) {
            // 0x403770
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x403780
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x403610
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x403619
        __asm_comiss(__asm_divss_4(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x403762
        return 0;
    }
    uint64_t nmemb = function_402a40(a2); // 0x403653
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x403762
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40368b
    if (*v6 == nmemb) {
        // 0x403762
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40369d
    int64_t v7 = (int64_t)mem; // 0x40369d
    int64_t v8 = v7; // bp-104, 0x4036a2
    if (mem == NULL) {
        // 0x403762
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x4036fa
    int64_t v10 = *v9; // 0x4036fa
    int64_t v11 = function_402cd0(&v8, a1, 0); // 0x403703
    int64_t result = v11 & 0xffffffff; // 0x403708
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x4036c4
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x403726
        function_402cd0(v13, v12, 1);
        function_402cd0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x4037b0
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x403762
    return result;
}
// Address range: 0x4037f0 - 0x403a64
int64_t function_4037f0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x4037f0
    int128_t v1; // 0x4037f0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x4037f0
    int64_t v5 = function_402b30(a1, a2, &v4, 0); // 0x403811
    if (v5 != 0) {
        // 0x40381e
        if (a3 != NULL) {
            // 0x403825
            *a3 = v5;
        }
        // 0x403829
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x403838
    uint64_t v7 = *v6; // 0x403838
    int64_t v8; // 0x4037f0
    int64_t v9; // 0x4037f0
    int64_t v10; // 0x4037f0
    int128_t v11; // 0x4037f0
    int128_t v12; // 0x4037f0
    int64_t v13; // 0x4037f0
    if (v7 < 0) {
        // 0x4038c0
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x4038d0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x4038d4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x4038d9
        int128_t v17 = __asm_addss(v15, v15); // 0x4038dd
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40385b;
        } else {
            goto lab_0x4038ea;
        }
    } else {
        // 0x403841
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x403845
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x403849
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40384e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x4038ea;
        } else {
            goto lab_0x40385b;
        }
    }
  lab_0x40385b:
    // 0x40385b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x403864
    __asm_comiss_1(v11, v21);
    int128_t v22 = v21; // 0x40386c
    int128_t v23 = v11; // 0x40386c
    if (v13 == 0) {
        goto lab_0x403872;
    } else {
        goto lab_0x403911;
    }
  lab_0x4038ea:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x4038f7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x4038fa
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x403903
    __asm_comiss_1(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x403872;
    } else {
        goto lab_0x403911;
    }
  lab_0x403872:;
    int64_t * v28 = (int64_t *)v4; // 0x403877
    if (*v28 == 0) {
        // 0x403988
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x403991
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x403882
    int64_t v31 = *v30; // 0x403882
    int64_t * v32; // 0x4037f0
    int64_t v33; // 0x4037f0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x4039ad
        if (mem == NULL) {
            // 0x403829
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x4039ad
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x403897
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x4038ad
    *v37 = *v37 + 1;
    return 1;
  lab_0x403911:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x403911
    function_402c50(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40391a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40391e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x403922
    int128_t v44; // 0x4037f0
    if (v42 < 0) {
        // 0x4039e0
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x4039f0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x403930
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x403939
    int128_t v47; // 0x4037f0
    int64_t v48; // 0x4037f0
    if (v46 < 0) {
        // 0x4039c0
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x4039cd
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x4039d0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x403942
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x403946
        v48 = v46;
        v47 = v51;
    }
    // 0x40394b
    __asm_comiss_1(v47, __asm_mulss_3(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40395b
        int128_t v53 = v52; // 0x403964
        if (*(char *)(v41 + 16) == 0) {
            // 0x403a00
            v53 = __asm_mulss_3(v52, v43);
        }
        // 0x40396a
        __asm_comiss(v53, 0x5f800000);
        // 0x403829
        return 0xffffffff;
    }
    goto lab_0x403872;
}
// Address range: 0x403a70 - 0x403aab
int64_t function_403a70(int64_t a1, int64_t a2) {
    // 0x403a70
    int64_t v1; // bp-16, 0x403a70
    int64_t v2; // 0x403a70
    int32_t v3 = function_4037f0(a1, a2, &v1, v2); // 0x403a82
    if (v3 == -1) {
        // 0x403a90
        return 0;
    }
    // 0x403a87
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x403ab0 - 0x403c87
int64_t function_403ab0(int64_t a1) {
    // 0x403ab0
    int128_t v1; // 0x403ab0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x403ab0
    int64_t v5; // 0x403ab0
    int64_t result = function_402b30(a1, v5, &v4, 1); // 0x403ac5
    if (result == 0) {
        // 0x403ae2
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x403ad7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x403ae2
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x403af0
    uint64_t v8 = *v7 - 1; // 0x403af4
    *v7 = v8;
    int64_t v9; // 0x403ab0
    int64_t v10; // 0x403ab0
    int64_t v11; // 0x403ab0
    int128_t v12; // 0x403ab0
    int128_t v13; // 0x403ab0
    int64_t v14; // 0x403ab0
    if (v8 < 0) {
        // 0x403be0
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x403bf0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x403bf4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x403bf9
        int128_t v18 = __asm_addss(v16, v16); // 0x403bfd
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x403b1c;
        } else {
            goto lab_0x403c0a;
        }
    } else {
        // 0x403b02
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x403b06
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x403b0a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x403b0f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x403c0a;
        } else {
            goto lab_0x403b1c;
        }
    }
  lab_0x403b1c:
    // 0x403b1c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x403b20
    int64_t v23 = v14; // 0x403b20
    int128_t v24 = v12; // 0x403b20
    int64_t v25 = v10; // 0x403b20
    int128_t v26 = v22; // 0x403b20
    goto lab_0x403b25;
  lab_0x403c0a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x403c17
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x403c1a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x403b25;
  lab_0x403b25:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x403b25
    __asm_comiss_1(v28, v27);
    if (v23 == 0) {
        // 0x403ae2
        return result;
    }
    int64_t v29 = a1 + 40; // 0x403b2e
    function_402c50(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x403b37
    int64_t v31 = *(int64_t *)v29; // 0x403b3b
    int128_t v32; // 0x403ab0
    if (v30 < 0) {
        // 0x403c50
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x403c60
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x403b48
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x403b51
    int128_t v35; // 0x403ab0
    int64_t v36; // 0x403ab0
    if (v34 < 0) {
        // 0x403c30
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x403c3d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x403c40
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x403b5e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x403b62
        v36 = v34;
        v35 = v39;
    }
    // 0x403b67
    __asm_comiss_1(__asm_mulss_3(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x403ae2
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x403b78
    int128_t v41 = v40; // 0x403b81
    if (*(char *)(v31 + 16) == 0) {
        // 0x403b83
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x403b88
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x403c78
    if ((char)function_4035f0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x403ae2
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x403baa
    if (*v43 != 0) {
        int64_t v44; // 0x403ab0
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x403bb8
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x403bc9
    *v43 = 0;
    // 0x403ae2
    return result;
}
// Address range: 0x403c90 - 0x403cb7
int64_t function_403c90(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x403c90
    return (*(int64_t *)(a1 + 8) ^ function_407880(a1, a2, a3)) % a2;
}
// Address range: 0x403cc0 - 0x403ccd
int64_t function_403cc0(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x403cc0
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x403cd0 - 0x403cf5
int64_t function_403cd0(int64_t a1, int64_t a2) {
    // 0x403cd0
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x403cda
        return 0;
    }
    // 0x403cea
    return function_4059a0(a1, a2);
}
// Address range: 0x403d00 - 0x403d33
int64_t function_403d00(int64_t str, int64_t str2) {
    // 0x403d00
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x403d0c
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x403d24
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x403d40 - 0x403d55
int64_t function_403d40(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x403d47
    free(v1);
    free(v1);
    return &g51;
}
// Address range: 0x403d60 - 0x403df9
int64_t function_403d60(int64_t str) {
    // 0x403d60
    if (str == 0) {
        // 0x403dd9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403d6e
    int64_t result = (int64_t)found_char_pos; // 0x403d6e
    if (found_char_pos == NULL) {
        // 0x403dc9
        g39 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403d78
    if (v1 - str < 7) {
        // 0x403dc9
        g39 = str;
        g31 = str;
        return result;
    }
    // 0x403d88
    bool v2; // 0x403d60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403d60
    int64_t v5 = result - 6; // 0x403d60
    int64_t v6 = 7; // 0x403d96
    unsigned char v7 = *(char *)v5; // 0x403d96
    char v8 = *(char *)v4; // 0x403d96
    char v9 = v8; // 0x403d96
    bool v10 = false; // 0x403d96
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
    int64_t v12 = (int64_t)"lt-"; // 0x403da0
    int64_t v13 = v1; // 0x403da0
    int64_t v14 = 3; // 0x403da0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403dc9
        g39 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403db2
    char v16 = *(char *)v12; // 0x403db2
    char v17 = v16; // 0x403db2
    bool v18 = false; // 0x403db2
    while (v15 == v16) {
        // 0x403da2
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
    int64_t v20 = v1; // 0x403dbc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403dbe
        v20 = result + 4;
        g29 = v20;
    }
    // 0x403dc9
    g39 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x403e00 - 0x403ef2
int64_t function_403e00(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403e14
    int64_t result = (int64_t)v1; // 0x403e14
    if (result != a1) {
        // 0x403e21
        return result;
    }
    int64_t v2 = function_4078c0(); // 0x403e30
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403ee6
    if (v3 == 85) {
        // 0x403e40
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403ed8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x403e6e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x403e7b
        // 0x403e21
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403ed8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x403ebd
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x403eca
    // 0x403e21
    return result4;
}
// Address range: 0x403f00 - 0x403f57
int64_t function_403f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x403f00
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x403f57 - 0x405121
int64_t function_403f57(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403fa1
    int64_t v3 = 0; // 0x403fa1
    int64_t v4; // 0x403f57
    int64_t v5; // 0x403f57
    int64_t v6; // 0x403f57
    int64_t v7; // 0x403f57
    int64_t v8; // 0x403f57
    int64_t v9; // 0x403f57
    int64_t v10; // 0x403f57
    int64_t v11; // 0x403f57
    int64_t v12; // 0x403f57
    int64_t v13; // 0x403f57
    int64_t v14; // 0x403f57
    int64_t v15; // 0x403f57
    int64_t v16; // 0x403f57
    int64_t v17; // 0x403f57
    int64_t v18; // 0x403f57
    int64_t result; // 0x403f57
    int64_t v19; // 0x403f57
    int32_t wc; // bp+132, 0x403f57
    int64_t ps; // bp+136, 0x403f57
    char v20; // 0x404510
    int64_t v21; // 0x404510
    int64_t v22; // 0x4048b8
    int64_t v23; // 0x403f57
    int64_t v24; // 0x4048d7
    int32_t v25; // 0x403f57
    while (true) {
      lab_0x403fa8_2:
        // 0x403fa8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403f57
        int64_t v27; // 0x403fdc
        while (true) {
          lab_0x403fa8:
            // 0x403fa8
            v5 = v26;
            bool v28 = v15 == v5; // 0x403fb3
            if (v15 == -1) {
                // 0x403fb5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403fc3
            if (v28) {
                // break (via goto) -> 0x404728
                goto lab_0x404728;
            }
            // 0x403fcc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g50 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4045bb
                    if (v25 % 2 == 0) {
                        goto lab_0x404101;
                    }
                    // 0x4049dd
                    v26 = v5 + 1;
                    goto lab_0x403fa8;
                }
                case 7: {
                    goto lab_0x404101;
                }
                case 8: {
                    goto lab_0x404101;
                }
                case 9: {
                    goto lab_0x40431a_2;
                }
                case 10: {
                    goto lab_0x40431a_2;
                }
                case 11: {
                    goto lab_0x404101;
                }
                case 12: {
                    goto lab_0x404101;
                }
                case 13: {
                    goto lab_0x40431a_2;
                }
                case 32: {
                    goto lab_0x40431a_2;
                }
                case 33: {
                    goto lab_0x40431a_2;
                }
                case 34: {
                    goto lab_0x40431a_2;
                }
                case 35: {
                    goto lab_0x4040cd;
                }
                case 36: {
                    goto lab_0x40431a_2;
                }
                case 37: {
                    goto lab_0x404101;
                }
                case 38: {
                    goto lab_0x40431a_2;
                }
                case 39: {
                    goto lab_0x40431a_2;
                }
                case 40: {
                    goto lab_0x40431a_2;
                }
                case 41: {
                    goto lab_0x40431a_2;
                }
                case 42: {
                    goto lab_0x40431a_2;
                }
                case 43: {
                    goto lab_0x404101;
                }
                case 44: {
                    goto lab_0x404101;
                }
                case 45: {
                    goto lab_0x404101;
                }
                case 46: {
                    goto lab_0x404101;
                }
                case 47: {
                    goto lab_0x404101;
                }
                case 48: {
                    goto lab_0x404101;
                }
                case 49: {
                    goto lab_0x404101;
                }
                case 50: {
                    goto lab_0x404101;
                }
                case 51: {
                    goto lab_0x404101;
                }
                case 52: {
                    goto lab_0x404101;
                }
                case 53: {
                    goto lab_0x404101;
                }
                case 54: {
                    goto lab_0x404101;
                }
                case 55: {
                    goto lab_0x404101;
                }
                case 56: {
                    goto lab_0x404101;
                }
                case 57: {
                    goto lab_0x404101;
                }
                case 58: {
                    goto lab_0x404101;
                }
                case 59: {
                    goto lab_0x40431a_2;
                }
                case 60: {
                    goto lab_0x40431a_2;
                }
                case 61: {
                    goto lab_0x40431a_2;
                }
                case 62: {
                    goto lab_0x40431a_2;
                }
                case 63: {
                    goto lab_0x40431a_2;
                }
                case 65: {
                    goto lab_0x404101;
                }
                case 66: {
                    goto lab_0x404101;
                }
                case 67: {
                    goto lab_0x404101;
                }
                case 68: {
                    goto lab_0x404101;
                }
                case 69: {
                    goto lab_0x404101;
                }
                case 70: {
                    goto lab_0x404101;
                }
                case 71: {
                    goto lab_0x404101;
                }
                case 72: {
                    goto lab_0x404101;
                }
                case 73: {
                    goto lab_0x404101;
                }
                case 74: {
                    goto lab_0x404101;
                }
                case 75: {
                    goto lab_0x404101;
                }
                case 76: {
                    goto lab_0x404101;
                }
                case 77: {
                    goto lab_0x404101;
                }
                case 78: {
                    goto lab_0x404101;
                }
                case 79: {
                    goto lab_0x404101;
                }
                case 80: {
                    goto lab_0x404101;
                }
                case 81: {
                    goto lab_0x404101;
                }
                case 82: {
                    goto lab_0x404101;
                }
                case 83: {
                    goto lab_0x404101;
                }
                case 84: {
                    goto lab_0x404101;
                }
                case 85: {
                    goto lab_0x404101;
                }
                case 86: {
                    goto lab_0x404101;
                }
                case 87: {
                    goto lab_0x404101;
                }
                case 88: {
                    goto lab_0x404101;
                }
                case 89: {
                    goto lab_0x404101;
                }
                case 90: {
                    goto lab_0x404101;
                }
                case 91: {
                    goto lab_0x40431a_2;
                }
                case 92: {
                    goto lab_0x40431a_2;
                }
                case 93: {
                    goto lab_0x404101;
                }
                case 94: {
                    goto lab_0x40431a_2;
                }
                case 95: {
                    goto lab_0x404101;
                }
                case 96: {
                    goto lab_0x40431a_2;
                }
                case 97: {
                    goto lab_0x404101;
                }
                case 98: {
                    goto lab_0x404101;
                }
                case 99: {
                    goto lab_0x404101;
                }
                case 100: {
                    goto lab_0x404101;
                }
                case 101: {
                    goto lab_0x404101;
                }
                case 102: {
                    goto lab_0x404101;
                }
                case 103: {
                    goto lab_0x404101;
                }
                case 104: {
                    goto lab_0x404101;
                }
                case 105: {
                    goto lab_0x404101;
                }
                case 106: {
                    goto lab_0x404101;
                }
                case 107: {
                    goto lab_0x404101;
                }
                case 108: {
                    goto lab_0x404101;
                }
                case 109: {
                    goto lab_0x404101;
                }
                case 110: {
                    goto lab_0x404101;
                }
                case 111: {
                    goto lab_0x404101;
                }
                case 112: {
                    goto lab_0x404101;
                }
                case 113: {
                    goto lab_0x404101;
                }
                case 114: {
                    goto lab_0x404101;
                }
                case 115: {
                    goto lab_0x404101;
                }
                case 116: {
                    goto lab_0x404101;
                }
                case 117: {
                    goto lab_0x404101;
                }
                case 118: {
                    goto lab_0x404101;
                }
                case 119: {
                    goto lab_0x404101;
                }
                case 120: {
                    goto lab_0x404101;
                }
                case 121: {
                    goto lab_0x404101;
                }
                case 122: {
                    goto lab_0x404101;
                }
                case 123: {
                    goto lab_0x4040a5;
                }
                case 124: {
                    goto lab_0x40431a_2;
                }
                case 125: {
                    goto lab_0x4040a5;
                }
                case 126: {
                    goto lab_0x4040cd;
                }
                default: {
                    goto lab_0x4044a5;
                }
            }
        }
      lab_0x4044a5:
        if (v23 != 1) {
            // 0x404810
            ps = 0;
            int64_t len = v15; // 0x404820
            if (v15 == -1) {
                // 0x404822
                len = strlen((char *)str);
            }
            // 0x40484e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4048af:
                // 0x4048af
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4048b4
                int64_t v30 = v29 + str;
                v24 = function_4075d0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x404e2a_2;
                    }
                    case -1: {
                        goto lab_0x404e2a_2;
                    }
                    case -2: {
                        // 0x404f0d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404f47
                            v19 = v18;
                            int64_t v31 = v18; // 0x404f4a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404f57
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404f50
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x404e2a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x404e2a_2;
                    }
                    case 1: {
                        goto lab_0x404880;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40492c
                        char v34 = *(char *)v33; // 0x40493d
                        unsigned char v35; // 0x403f57
                        if (v34 < 125) {
                            // 0x404948
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40495f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40431a_2;
                            }
                        }
                        // 0x404930
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40493d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404948
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40495f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40431a_2;
                                }
                            }
                            // 0x404930
                            v33++;
                        }
                        goto lab_0x404880;
                    }
                }
            }
            goto lab_0x404e2a_2;
        } else {
            // 0x4044f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404101;
        }
    }
  lab_0x404728:
    // 0x404728
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40502a
        if (v8 > result) {
            // 0x405033
            *(char *)(v12 + result) = 0;
        }
        // 0x404357
        return result;
    }
    goto lab_0x40431a_2;
  lab_0x404101:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x404110
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40431a_2;
        }
    }
    int64_t v42 = result; // 0x404211
    char v43 = v20; // 0x404211
    int64_t v44 = v58; // 0x404211
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x404211
    int64_t v46 = v56; // 0x404211
    goto lab_0x40418d;
  lab_0x40431a_2:;
    // 0x404357
    char * v36; // 0x403f57
    return function_403f00(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x404e2a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x404101;
    } else {
        uint64_t v40 = v37 + v5; // 0x4049fe
        int64_t v41 = v5 + 1; // 0x404ae1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x404ae8
        char v48 = v20; // 0x404ae8
        int64_t v49 = result; // 0x404ae8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x404ab1
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x404ab5
            int64_t v52 = v50 + 1; // 0x404aba
            int64_t v53 = v47 + 1; // 0x404ae1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x404aac
                v50 = v52;
                if (v38 > v50) {
                    // 0x404ab1
                    *(char *)(v50 + v39) = v51;
                }
                // 0x404ab5
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
        goto lab_0x40418d;
    }
  lab_0x404880:
    // 0x404880
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40489f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4048a2
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x404e2a
        goto lab_0x404e2a_2;
    }
    goto lab_0x4048af;
  lab_0x4040cd:
    // 0x4040cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40431a_2;
    }
    goto lab_0x404101;
  lab_0x4040a5:;
    bool v61 = v15 == 1; // 0x4040b0
    if (v15 == -1) {
        // 0x4040b2
        v61 = *(char *)v1 == 0;
    }
    // 0x4040be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x404101;
    } else {
        goto lab_0x4040cd;
    }
  lab_0x40418d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x404192
        *(char *)(v59 + v60) = v43;
    }
    // 0x404196
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x403fa8_2;
}
// Address range: 0x405130 - 0x4052ce
int64_t function_405130(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405132
    int32_t * v3 = __errno_location(); // 0x40514c
    int64_t v4 = (int64_t)g21; // 0x405151
    int32_t v5 = *v3; // 0x40515b
    int64_t v6 = v4; // 0x405171
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4052c9
            function_4062c0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405180
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405187
        int64_t v9; // 0x405130
        if (g21 == &g22) {
            int64_t v10 = function_4060d0(0, v8); // 0x4052aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x4052af
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4060d0(v4, v8); // 0x40519b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x4051aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x4051aa
        int32_t v14 = v7; // 0x4051b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x4051e1
    int64_t v17 = v15 + 8; // 0x4051e4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x4051eb
    int64_t * v19 = (int64_t *)v16; // 0x4051ee
    uint64_t v20 = *v19; // 0x4051ee
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x4051f1
    int64_t result = *v21; // 0x4051f1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x4051fc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x405205
    int64_t v24; // 0x405130
    uint64_t v25 = function_403f00(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x405214
    if (v20 > v25) {
        // 0x40528b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x405227
    *v19 = v26;
    if (result != (int64_t)&g40) {
        // 0x405237
        free((int64_t *)result);
    }
    int64_t result2 = function_406070(v26); // 0x405251
    *v21 = result2;
    int64_t v27 = *v22; // 0x40526b
    int64_t v28 = *v23; // 0x40526e
    int64_t v29; // 0x405130
    function_403f00(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40528b
    *v3 = v5;
    return result2;
}
// Address range: 0x4052d0 - 0x405304
int64_t function_4052d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4052d7
    int64_t result = function_406270(a1 == 0 ? (int64_t)&g41 : a1, 56); // 0x4052f6
    return result;
}
// Address range: 0x405310 - 0x40531f
int64_t function_405310(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g41 : a1); // 0x40531c
    return result;
}
// Address range: 0x405320 - 0x40532f
int64_t function_405320(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x405328
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g41;
}
// Address range: 0x405330 - 0x405363
int64_t function_405330(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 + 8 : a1 + 8; // 0x405349
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40534e
    uint32_t v3 = *v2; // 0x40534e
    uint32_t v4 = (int32_t)a2 % 32; // 0x405352
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405370 - 0x405383
int64_t function_405370(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g41 + 4 : a1 + 4); // 0x40537c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405390 - 0x4053bb
int64_t function_405390(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x405398
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4053b5
        abort();
        // UNREACHABLE
    }
    // 0x4053ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g41;
}
// Address range: 0x4053c0 - 0x405432
int64_t function_4053c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g41 : a5; // 0x4053e2
    int32_t * v2 = __errno_location(); // 0x4053eb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x405404
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x405408
    uint32_t v5 = *(int32_t *)v1; // 0x40540b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x405411
    int64_t result = function_403f00(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40541a
    return result;
}
// Address range: 0x405440 - 0x405521
int64_t function_405440(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g41 : a4; // 0x405462
    int32_t * v2 = __errno_location(); // 0x405468
    int64_t v3 = v1 + 8; // 0x40547f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405487
    int32_t * v5 = (int32_t *)v1; // 0x40548a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x405498
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40549b
    int64_t v8 = function_403f00(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x4054a5
    int64_t v9 = v8 + 1; // 0x4054aa
    int64_t result = function_406070(v9); // 0x4054bf
    function_403f00(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x405504
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x40550d
    return result;
}
// Address range: 0x405530 - 0x40553a
int64_t function_405530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405530
    return function_405440(a1, a2, 0, a3);
}
// Address range: 0x405540 - 0x4055d5
int64_t function_405540(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x405540
    int64_t v2 = v1; // 0x405540
    int64_t v3 = v2; // 0x405554
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x405573
        free((int64_t *)*(int64_t *)v4);
        v3 = &g51;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x405570
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g51;
        }
    }
    int64_t v6 = v3; // 0x40558d
    if (g22 != 0x60c300) {
        // 0x40558f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g40;
        v6 = &g51;
    }
    int64_t result = v6; // 0x4055b1
    if (g21 != &g22) {
        // 0x4055b3
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g51;
    }
    // 0x4055c6
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x4055e0 - 0x4055f1
int64_t function_4055e0(void) {
    // 0x4055e0
    int64_t v1; // 0x4055e0
    return function_405130(v1, v1, -1, (int64_t *)&g41);
}
// Address range: 0x405600 - 0x40560a
int64_t function_405600(void) {
    // 0x405600
    int64_t v1; // 0x405600
    return function_405130(v1, v1, v1, (int64_t *)&g41);
}
// Address range: 0x405610 - 0x405626
int64_t function_405610(int64_t a1) {
    // 0x405610
    return function_405130(0, a1, -1, (int64_t *)&g41);
}
// Address range: 0x405630 - 0x405642
int64_t function_405630(int64_t a1, int64_t a2) {
    // 0x405630
    return function_405130(0, a1, a2, (int64_t *)&g41);
}
// Address range: 0x405650 - 0x4056b8
int64_t function_405650(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405660
    return function_405130((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4056c0 - 0x405724
int64_t function_4056c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4056d0
    return function_405130((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405730 - 0x40573c
int64_t function_405730(int64_t a1, int64_t a2) {
    // 0x405730
    return function_405650(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405740 - 0x40574f
int64_t function_405740(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405740
    return function_4056c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405750 - 0x4057c0
int64_t function_405750(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x40575d
    int128_t v2 = __asm_movdqa(g42); // 0x405765
    int128_t v3 = __asm_movdqa(g43); // 0x40576d
    int64_t v4 = __asm_movaps_5(v1); // bp-72, 0x405782
    __asm_movaps_5(v2);
    __asm_movaps_5(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405798
    uint32_t v6 = *v5; // 0x405798
    uint32_t v7 = (int32_t)a3 % 32; // 0x40579d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405130(0, a1, a2, &v4);
}
// Address range: 0x4057c0 - 0x4057cd
int64_t function_4057c0(int64_t a1, int64_t a2) {
    // 0x4057c0
    return function_405750(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4057d0 - 0x4057e1
int64_t function_4057d0(int64_t a1) {
    // 0x4057d0
    return function_405750(a1, -1, 58);
}
// Address range: 0x4057f0 - 0x4057fa
int64_t function_4057f0(void) {
    // 0x4057f0
    int64_t v1; // 0x4057f0
    return function_405750(v1, v1, 58);
}
// Address range: 0x405800 - 0x40586e
int64_t function_405800(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40581a
    return function_405130((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405870 - 0x4058dc
int64_t function_405870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x405877
    int128_t v2 = __asm_movdqa(g42); // 0x40587f
    int128_t v3 = __asm_movdqa(g43); // 0x405887
    __asm_movaps_5(v1);
    __asm_movaps_5(v2);
    __asm_movaps_5(v3);
    int64_t v4 = 10; // bp-72, 0x4058a9
    if (a2 == 0 || a3 == 0) {
        // 0x4058d7
        abort();
        // UNREACHABLE
    }
    // 0x4058ba
    return function_405130(a1, a4, a5, &v4);
}
// Address range: 0x4058e0 - 0x4058e9
int64_t function_4058e0(void) {
    // 0x4058e0
    int64_t v1; // 0x4058e0
    return function_405870(v1, v1, v1, v1, -1);
}
// Address range: 0x4058f0 - 0x405907
int64_t function_4058f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4058f0
    return function_405870(0, a1, a2, a3, -1);
}
// Address range: 0x405910 - 0x405923
int64_t function_405910(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405910
    return function_405870(0, a1, a2, a3, a4);
}
// Address range: 0x405930 - 0x40593a
int64_t function_405930(void) {
    // 0x405930
    int64_t v1; // 0x405930
    return function_405130(v1, v1, v1, &g20);
}
// Address range: 0x405940 - 0x405952
int64_t function_405940(int64_t a1, int64_t a2) {
    // 0x405940
    return function_405130(0, a1, a2, &g20);
}
// Address range: 0x405960 - 0x405971
int64_t function_405960(void) {
    // 0x405960
    int64_t v1; // 0x405960
    return function_405130(v1, v1, -1, &g20);
}
// Address range: 0x405980 - 0x405996
int64_t function_405980(int64_t a1) {
    // 0x405980
    return function_405130(0, a1, -1, &g20);
}
// Address range: 0x4059a0 - 0x405ad0
int64_t function_4059a0(int64_t a1, int64_t a2) {
    int64_t str = function_407790(a1, a2); // 0x4059b9
    int64_t str2 = function_407790(a2, a2); // 0x4059c4
    int64_t n = function_4077f0(str); // 0x4059cf
    if (n != function_4077f0(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x4059e4
        return 0;
    }
    int64_t v1 = function_4076b0(); // 0x405a15
    int64_t v2 = function_4076b0(); // 0x405a20
    char * v3 = (char *)v1; // 0x405a33
    int64_t v4; // bp-344, 0x4059a0
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x405ab0
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x405a4c
    int64_t v6; // bp-200, 0x4059a0
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x405a90
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x405a64
    // 0x405a66
    v7 = v4 == v6;
    // 0x405a75
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x4059e4
    return v7 & 0xffffffff;
}
// Address range: 0x405ad0 - 0x405ead
int64_t function_405ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405b68
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405aec
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405b06
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405b4b
    if (a6 < 10) {
        // 0x405b5a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405c52
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405eb0 - 0x405ed0
int64_t function_405eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405eb0
    if (a5 == 0) {
        // 0x405ecb
        return function_405ad0(a1, a2, a3, a4, a5, 0, (int64_t)&g51);
    }
    int64_t v1 = 0; // 0x405eb7
    v1++;
    int64_t v2 = v1; // 0x405ec9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405ec0
        v1++;
        v2 = v1;
    }
    // 0x405ecb
    return function_405ad0(a1, a2, a3, a4, a5, v2, (int64_t)&g51);
}
// Address range: 0x405ed0 - 0x405f30
int64_t function_405ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405ed0
    int64_t v3 = &v2; // 0x405ed0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405f03
    int64_t v6; // 0x405eed
    int64_t * v7; // 0x405f0b
    int64_t v8; // 0x405f0b
    int64_t v9; // 0x405f17
    if (v5 < 48) {
        // 0x405ee0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405f23
            break;
        }
    } else {
        // 0x405f0b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405f23
            break;
        }
    }
    int64_t v10 = 10; // 0x405f01
    while (v4 != 9) {
        // 0x405ef9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405ee0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405f23
                break;
            }
        } else {
            // 0x405f0b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405f23
                break;
            }
        }
        // 0x405ef9
        v10 = 10;
    }
    // 0x405f23
    return function_405ad0(a1, a2, a3, a4, v3, v10, (int64_t)&g51);
}
// Address range: 0x405f30 - 0x405fec
int64_t function_405f30(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x405f30
    int64_t v1; // bp-168, 0x405f30
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405f30
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405f30
    int64_t v8; // 0x405f30
    int64_t v9; // bp-56, 0x405f30
    int64_t v10; // 0x405f95
    int64_t v11; // 0x405fb9
    if ((int32_t)v6 < 48) {
        // 0x405f80
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405fd0
            break;
        }
    } else {
        // 0x405fb2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405fd0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x405faa
    int64_t v13 = 10; // 0x405faa
    while (v5 != 9) {
        // 0x405fac
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405f80
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405fd0
                break;
            }
        } else {
            // 0x405fb2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405fd0
                break;
            }
        }
        // 0x405fa2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405fd0
    int64_t v14; // bp-136, 0x405f30
    int64_t result = function_405ad0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g51); // 0x405fdf
    return result;
}
// Address range: 0x405ff0 - 0x406064
int64_t function_405ff0(int64_t a1) {
    // 0x405ff0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406053
    return fputs_unlocked(v1, g30);
}
// Address range: 0x406070 - 0x40608a
int64_t function_406070(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406074
    if (size != 0 != (mem == NULL)) {
        // 0x406083
        return (int64_t)mem;
    }
    // 0x406085
    function_4062c0(size);
    // UNREACHABLE
}
// Address range: 0x406090 - 0x4060b1
int64_t function_406090(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x406093
    int64_t v2 = v1; // 0x406093
    if (v2 < 0) {
        // 0x4060ab
        function_4062c0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4060a9
        return function_406070(v2);
    }
    // 0x4060ab
    function_4062c0(v2);
    // UNREACHABLE
}
// Address range: 0x4060c0 - 0x4060c2
int64_t function_4060c0(void) {
    // 0x4060c0
    int64_t v1; // 0x4060c0
    return function_406070(v1);
}
// Address range: 0x4060d0 - 0x406106
int64_t function_4060d0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4060f8
        free(v1);
        return (int32_t)&g51 ^ (int32_t)&g51;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4060e1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4060f0
        return (int64_t)mem;
    }
    // 0x406101
    function_4062c0(a1);
    // UNREACHABLE
}
// Address range: 0x406110 - 0x406131
int64_t function_406110(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406113
    int64_t v2 = v1; // 0x406113
    if (v2 < 0) {
        // 0x40612b
        function_4062c0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406129
        return function_4060d0(a1, v2);
    }
    // 0x40612b
    function_4062c0(a1);
    // UNREACHABLE
}
// Address range: 0x406140 - 0x4061c6
int64_t function_406140(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40619b
            function_4062c0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4060d0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406183
    if (a2 == 0) {
        // 0x4061a8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406188
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40619b
        function_4062c0(a1);
        // UNREACHABLE
    }
    // 0x40616a
    *(int64_t *)a2 = v2;
    return function_4060d0(a1, v2 * a3);
}
// Address range: 0x4061d0 - 0x406220
int64_t function_4061d0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4061d0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40621a
            function_4062c0(a1);
            // UNREACHABLE
        }
        // 0x4061f2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4060d0(a1, v1);
    }
    if (a2 == 0) {
        // 0x406205
        *(int64_t *)a2 = 128;
        return function_4060d0(0, 128);
    }
    // 0x406218
    if (a2 < 0) {
        // 0x40621a
        function_4062c0(a1);
        // UNREACHABLE
    }
    // 0x4061f2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4060d0(a1, v1);
}
// Address range: 0x406220 - 0x406237
int64_t function_406220(int64_t a1, int64_t a2) {
    // 0x406220
    return (int64_t)memset((int64_t *)function_406070(a1), 0, (int32_t)a1);
}
// Address range: 0x406240 - 0x40626e
int64_t function_406240(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406247
    if ((int64_t)v1 < 0) {
        // 0x406269
        function_4062c0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406269
        function_4062c0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40625a
    if (mem != NULL) {
        // 0x406264
        return (int64_t)mem;
    }
    // 0x406269
    function_4062c0(nmemb);
    // UNREACHABLE
}
// Address range: 0x406270 - 0x406298
int64_t function_406270(int64_t a1, int64_t a2) {
    int64_t v1 = function_406070(a2); // 0x40627f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4062a0 - 0x4062b3
int64_t function_4062a0(int64_t str) {
    // 0x4062a0
    return function_406270(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4062c0 - 0x4062f1
int64_t function_4062c0(int64_t a1) {
    // 0x4062c0
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406300 - 0x40632f
int64_t function_406300(int64_t a1, int64_t a2) {
    int64_t result = function_406330(0, 0); // 0x406305
    if (result != 0 || *__errno_location() != 12) {
        // 0x406312
        return result;
    }
    // 0x40632a
    function_4062c0(0);
    // UNREACHABLE
}
// Address range: 0x406330 - 0x4067f2
int64_t function_406330(int32_t a1, int32_t a2) {
    // 0x406330
    int32_t size; // 0x406330
    int32_t v1; // 0x406330
    int32_t v2; // 0x406330
    if (a2 != 0) {
        // 0x406390
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x406362;
        } else {
            goto lab_0x4063ac;
        }
    } else {
        // 0x406350
        size = 0x1000;
        if (a1 != 0) {
            // 0x406750
            *__errno_location() = 22;
            // 0x406376
            return 0;
        }
        goto lab_0x406362;
    }
  lab_0x4066f0:;
    // 0x4066f0
    int32_t v3; // 0x4066ea
    int64_t v4 = v3; // 0x4066f2
    int64_t v5; // 0x406330
    int64_t dirp2 = v5; // 0x4066f2
    int32_t * v6; // 0x406436
    if (v3 != 0) {
        goto lab_0x406701;
    } else {
        // 0x4066f4
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x406701;
    }
  lab_0x406502:;
    // 0x406502
    int64_t v7; // 0x406330
    int64_t v8 = v7;
    int64_t v9; // 0x406330
    int64_t v10 = v9 + 19; // 0x406502
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x406330
    int64_t v12; // 0x406330
    int32_t v13; // 0x406330
    int32_t fd; // 0x406452
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x406535
        if (v11 == v12) {
            // break -> 0x406550
            goto lab_0x406550;
        }
    }
    int64_t v14 = v8; // 0x406330
    goto lab_0x4064c0_2;
  lab_0x4067ce_2:
    // 0x4067ce
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x406701;
  lab_0x406362:;
    int64_t * mem = malloc(size); // 0x406367
    int32_t v41 = (int64_t)mem; // 0x40636c
    int32_t result = v41; // 0x406374
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x406376
        return result;
    }
    goto lab_0x4063ac;
  lab_0x4063ac:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x4063b1
    int64_t v46 = v45 - 1; // 0x4063c0
    *(char *)v46 = 0;
    int64_t v47; // 0x406330
    int64_t v48; // 0x406330
    int32_t * v49; // 0x406330
    int64_t v50; // 0x406330
    int64_t v33; // 0x406330
    int64_t v40; // 0x406330
    int64_t v51; // 0x406330
    int32_t v38; // 0x406330
    int32_t v52; // 0x406330
    int32_t v53; // 0x406330
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x406728;
    } else {
        // 0x4063d6
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x406728;
        } else {
            // 0x406401
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x406648;
            } else {
                // 0x406436
                v6 = __errno_location();
                int32_t v54 = v1; // 0x406443
                int32_t v55 = v42; // 0x406443
                int64_t v56 = v11; // 0x406443
                int64_t v57 = v46; // 0x406443
                int64_t v58 = 0; // 0x406443
                int32_t fd2 = -100; // 0x406443
                int64_t dirp3; // 0x406330
                while (true) {
                    // 0x406446
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x406777
                        break;
                    }
                    // 0x406462
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x406788
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x40676d;
                        } else {
                            // 0x406791
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x40676d;
                        }
                    }
                    // 0x40647b
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x406480
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x406769
                            v40 = (int64_t)*v6;
                            goto lab_0x40676d;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x4064a7
                    if (dirp == NULL) {
                        // 0x406769
                        v40 = (int64_t)*v6;
                        goto lab_0x40676d;
                    }
                    // 0x4064b8
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x4064c0_2:;
                        int64_t v15 = v14; // 0x406330
                        int64_t v16; // 0x406330
                        int64_t v17; // 0x406330
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x4064cb
                            int64_t v20; // 0x406330
                            int64_t v21; // 0x406330
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x4066a0
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x4066f0;
                                }
                                // 0x4066ad
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x4066b8
                                if (v23 == NULL) {
                                    // 0x4066ea
                                    v3 = *v6;
                                    goto lab_0x4066f0;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x406502;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x4064e3
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x4066d0
                            if (*(char *)v28 != 0) {
                                // 0x4066da
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x4064e3
                                    break;
                                }
                            }
                            // 0x4064c0
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x406502;
                        } else {
                            // 0x4064e8
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x4064fd
                            int64_t v32; // 0x406330
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x4064c0
                                v14 = v31;
                                goto lab_0x4064c0_2;
                            } else {
                                goto lab_0x406502;
                            }
                        }
                    }
                  lab_0x406550:;
                    int64_t v61 = v38; // 0x406558
                    uint64_t v62 = v57 - v61; // 0x406558
                    int32_t len = strlen(str); // 0x40655d
                    uint64_t v63 = (int64_t)len; // 0x40655d
                    int32_t v64 = v60; // 0x406568
                    int32_t v65 = v38; // 0x406568
                    int64_t dest_mem = v57; // 0x406568
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x4067e0
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x406701;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x406576
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x406581
                        uint64_t v68 = v67 + v66; // 0x406585
                        if (v68 < v66) {
                            goto lab_0x4067ce_2;
                        }
                        // 0x406598
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x4065a0
                        if (mem2 == NULL) {
                            goto lab_0x4067ce_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x4065a0
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x4065fd
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x40662e
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x406730;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x406648;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x406777
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x406709;
                } else {
                    goto lab_0x406701;
                }
            }
        }
    }
  lab_0x406728:
    // 0x406728
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x406730;
  lab_0x406730:;
    int64_t v77 = (int64_t)*v49; // 0x406736
    int64_t v34 = v77; // 0x40673a
    int32_t * v35 = v49; // 0x40673a
    int32_t * v36 = v49; // 0x40673a
    int32_t v37 = v53; // 0x40673a
    int64_t v39 = v77; // 0x40673a
    if (a1 != 0) {
        goto lab_0x406711;
    } else {
        goto lab_0x40673c;
    }
  lab_0x406711:
    // 0x406711
    *v35 = (int32_t)v34;
    // 0x406376
    return 0;
  lab_0x40673c:
    // 0x40673c
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x406711;
  lab_0x406648:
    // 0x406648
    if (v51 == v47 - 1 + v48) {
        // 0x4067b7
        int64_t v78; // 0x406330
        int64_t v79 = v78 - 1; // 0x4067bc
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x406672
    int32_t v81 = v50 - v51; // 0x406672
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x40667d
    if (a2 == 0) {
        // 0x4067a0
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x406376
    return result2;
  lab_0x406709:
    // 0x406709
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x40673c;
    } else {
        goto lab_0x406711;
    }
  lab_0x406701:
    // 0x406701
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x406709;
  lab_0x40676d:
    // 0x40676d
    close(fd);
    v33 = v40;
    goto lab_0x406709;
}
// Address range: 0x406800 - 0x4068df
int64_t function_406800(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40680c
    uint32_t v2 = *v1; // 0x40680c
    int64_t v3 = a2 & 0xffffffff; // 0x406811
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x406814
    uint64_t v5 = (int64_t)*v4; // 0x406814
    int64_t v6; // 0x406882
    if (v3 <= v5) {
      lab_0x40687c_2:
        // 0x40687c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x406802
    int64_t v8 = v2; // 0x406800
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40687c
        goto lab_0x40687c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x406838
    int64_t v17; // 0x406846
    int64_t * v18; // 0x406860
    int64_t * v19; // 0x406863
    int64_t v20; // 0x40686e
    int64_t v21; // 0x406846
    while ((v16 & 0xffffffff) > v10) {
        // 0x406843
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x406860
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x406877
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40687c
            goto lab_0x40687c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40687c
            goto lab_0x40687c_2;
        }
        // 0x406832
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4068bb
    int64_t * v23 = (int64_t *)v22; // 0x4068c0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4068c3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4068c0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4068d7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40682d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40687c
            goto lab_0x40687c_2;
        }
        // 0x406832
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x406843
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x406860
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x406877
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40687c
                goto lab_0x40687c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40687c
                goto lab_0x40687c_2;
            }
            // 0x406832
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4068a0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4068c0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4068d7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40687c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4068e0 - 0x406efc
int64_t function_4068e0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4068ff
    int64_t v2 = *v1; // 0x4068ff
    char * str2 = (char *)v2; // 0x40690c
    char c = *str2; // 0x40690c
    int64_t v3 = v2; // 0x406938
    int64_t v4 = 0; // 0x4068e0
    int32_t v5; // 0x4068e0
    int64_t v6; // 0x4068e0
    int64_t v7; // 0x4068e0
    int64_t v8; // 0x4068e0
    int64_t v9; // 0x4068e0
    int64_t v10; // 0x4068e0
    int64_t v11; // 0x4068e0
    int64_t v12; // 0x4068e0
    int64_t v13; // 0x4068e0
    int64_t str3; // 0x4068e0
    int64_t v14; // 0x4068e0
    int64_t v15; // 0x4068e0
    int64_t v16; // 0x4068e0
    int64_t v17; // 0x4068e0
    int32_t v18; // 0x4068e0
    int32_t v19; // 0x4068e0
    int32_t v20; // 0x4068e0
    int32_t v21; // 0x4068e0
    int32_t v22; // 0x4068e0
    int32_t v23; // 0x4068e0
    int32_t v24; // 0x4068e0
    int32_t v25; // 0x4068e0
    int32_t v26; // 0x4068e0
    int32_t v27; // 0x4068e0
    int32_t v28; // 0x4068e0
    int32_t v29; // 0x4068e0
    int64_t nmemb; // 0x4068e0
    int64_t v30; // 0x4068e0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40693c
            while (v31 != 0 == (v31 != 61)) {
                // 0x406938
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406948
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40694e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x406918
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40697c
                int64_t v34; // 0x4068e0
                int64_t v35; // 0x4068e0
                if (strncmp(str, str2, n) == 0) {
                    // 0x406985
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406b00;
                    }
                }
                int64_t v36 = a4 + 32; // 0x406996
                int64_t v37 = *(int64_t *)v36; // 0x40699a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x406970
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x406985
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406b00;
                        }
                    }
                    // 0x406996
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
                  lab_0x4069e6:
                    // 0x4069e6
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
                        goto lab_0x406a40;
                    } else {
                        if (v11 == 0) {
                            // 0x406bb0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406a40;
                        } else {
                            if (v39 == 0) {
                                // 0x406b60
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x406a0a;
                                } else {
                                    // 0x406b6c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x406a0a;
                                    } else {
                                        // 0x406b7a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x406a0a;
                                        } else {
                                            goto lab_0x406a40;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x406a0a;
                            }
                        }
                    }
                }
              lab_0x406a51:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406c26
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x406dd2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x406df2
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x406e3f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x406e59
                            int64_t v45; // 0x406e5b
                            if (*(char *)v42 != 0) {
                                // 0x406e5b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406e53
                            while (v17 + nmemb != v42) {
                                // 0x406e55
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x406e5b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x406e48
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406e80
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x406c34
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x406d8f
                        free((int64_t *)v17);
                    }
                    // 0x406c89
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406ca0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x406b4e
                    return 63;
                }
                // 0x406a70
                v5 = v39;
                if (v13 != 0) {
                    // 0x406af4
                    v35 = v13;
                    v34 = v25;
                  lab_0x406b00:;
                    int32_t * v49 = (int32_t *)a7; // 0x406b10
                    uint32_t v50 = *v49; // 0x406b10
                    int64_t v51 = v50; // 0x406b10
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x406b1a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406b23
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x406d4f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x406cfa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x406b4e
                            return 63;
                        }
                        // 0x406b98
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x406eaf
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x406dad
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x406dc0
                                // 0x406b4e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x406cbe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406cd2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x406b3b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x406b3e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406b42
                    int64_t result = v59; // 0x406b48
                    if (v58 != 0) {
                        // 0x406b4a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x406b4e
                    return result;
                }
            } else {
                // 0x40694e
                v5 = v32;
            }
            // break -> 0x406a75
            break;
        }
    }
    // 0x406a75
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x406a8d
        if (*(char *)(v60 + 1) != 45) {
            // 0x406a97
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x406b4e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x406bd9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406ac6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406ad6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406a40:
    // 0x406a40
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406a40
    int64_t v63 = *(int64_t *)v62; // 0x406a44
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406a51
        goto lab_0x406a51;
    }
    goto lab_0x4069e6;
  lab_0x406a0a:
    // 0x406a0a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4068e0
    int32_t v65; // 0x4068e0
    int32_t v66; // 0x4068e0
    if (v27 != 0) {
        goto lab_0x406a40;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x406bc0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406a40;
            } else {
                goto lab_0x406a31;
            }
        } else {
            // 0x406a25
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x406d1c
                int64_t v67 = (int64_t)mem; // 0x406d1c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406a40;
                } else {
                    // 0x406d2f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406a31;
                }
            } else {
                goto lab_0x406a31;
            }
        }
    }
  lab_0x406a31:
    // 0x406a31
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406a40;
}
// Address range: 0x406f00 - 0x4074c6
int64_t function_406f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406f21
    if (v3 < 1) {
        // 0x4070de
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x406f1d
    int32_t v5 = *(int32_t *)a7; // 0x406f29
    uint64_t v6 = a1 & 0xffffffff; // 0x406f2b
    int64_t v7 = v2; // 0x406f30
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406f33
    *v8 = 0;
    int64_t v9; // 0x406f00
    int64_t v10; // 0x406f00
    int64_t v11; // 0x406f00
    int64_t v12; // 0x406f00
    int64_t str; // 0x406f00
    int64_t v13; // 0x406f00
    int64_t v14; // 0x406f00
    int64_t v15; // 0x406f00
    int64_t v16; // 0x406f00
    int64_t v17; // 0x406f00
    int32_t v18; // 0x406f00
    char v19; // 0x406f00
    if (v5 == 0) {
        // 0x407118
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x406f4a;
    } else {
        // 0x406f43
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406f90
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406f93
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x407058;
            } else {
                int64_t v22 = v7 + 1; // 0x406fa6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406fb6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40706c;
                } else {
                    goto lab_0x406fc8;
                }
            }
        } else {
            goto lab_0x406f4a;
        }
    }
  lab_0x406f4a:
    // 0x406f4a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406f50
    *v24 = 0;
    int64_t v25; // 0x406f00
    int64_t v26; // 0x406f00
    int64_t v27; // 0x406f00
    switch (*(char *)&v2) {
        case 45: {
            // 0x407040
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40704d;
        }
        case 43: {
            // 0x407350
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40704d;
        }
        default: {
            // 0x406f6c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4072cf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4073e8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40704d;
                } else {
                    // 0x4072dd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x406f7a;
                }
            } else {
                goto lab_0x406f7a;
            }
        }
    }
  lab_0x407058:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40705f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406fc8;
    } else {
        goto lab_0x40706c;
    }
  lab_0x406f7a:
    // 0x406f7a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40704d;
  lab_0x40704d:
    // 0x40704d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x407058;
  lab_0x406fc8:;
    uint32_t v30 = *(int32_t *)a7; // 0x406fc8
    int64_t v31 = v30; // 0x406fc8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x406fca
    if ((int64_t)*v32 > v31) {
        // 0x406fcf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406fd2
    if (*v33 > v30) {
        // 0x406fd7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x406fda
    int64_t v35 = v31; // 0x406fde
    int64_t v36 = v15; // 0x406fde
    int64_t v37; // 0x406f00
    int64_t v38; // 0x406f00
    int64_t v39; // 0x406f00
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x407148
        int64_t v41 = v40; // 0x407148
        v2 = v41;
        int64_t v42; // 0x406f00
        if (*v33 == v40) {
            // 0x407330
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407338
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x407154
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407158
                function_406800(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x407168
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x407171
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40717a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407191
            int64_t v47 = v45 & 0xffffffff; // 0x407195
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40719e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4071a4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4071a6;
                }
            }
            int64_t v48 = v47 + 1; // 0x407180
            int64_t v49 = v48 & 0xffffffff; // 0x407180
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407191
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40719e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4071a4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4071a6;
                    }
                }
                // 0x407180
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x407348
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4071a6;
    } else {
        goto lab_0x406fe4;
    }
  lab_0x40706c:
    // 0x40706c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40706f
    int64_t v51 = v12; // 0x40706f
    int64_t v52 = v14; // 0x40706f
    if (*(char *)v10 == 0) {
        goto lab_0x406fc8;
    } else {
        goto lab_0x407075;
    }
  lab_0x406fe4:;
    int32_t v53 = v35; // 0x406fe4
    int64_t v54; // 0x406f00
    int64_t v55; // 0x406f00
    int64_t v56; // 0x406f00
    int64_t v57; // 0x406f00
    int64_t v58; // 0x406f00
    int64_t v59; // 0x406f00
    char * v60; // 0x406f00
    int64_t v61; // 0x406f00
    int64_t v62; // 0x406ff9
    int64_t v63; // 0x406f00
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x407133
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x407136;
    } else {
        // 0x406fec
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406f00
        int64_t v66 = v65 ? -1 : 1; // 0x407000
        int64_t v67 = (int64_t)"--"; // 0x406f00
        int64_t v68 = v62; // 0x406f00
        int64_t v69 = 3; // 0x407000
        unsigned char v70 = *(char *)v68; // 0x407000
        char v71 = *(char *)v67; // 0x407000
        char v72 = v71; // 0x407000
        bool v73 = false; // 0x407000
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
            // 0x4070f0
            if (*(char *)v62 == 45) {
                // 0x4071b0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4071b0
                if (c == 0) {
                    goto lab_0x4070fa;
                } else {
                    // 0x4071bd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x407240;
                    } else {
                        if (c == 45) {
                            // 0x407423
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x407295;
                        } else {
                            // 0x4071ce
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x407240;
                            } else {
                                // 0x4071d3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4071f4;
                                } else {
                                    // 0x4071da
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x407240;
                                    } else {
                                        goto lab_0x4071f4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4070fa;
            }
        } else {
            uint32_t v75 = *v33; // 0x407010
            v2 = v75;
            int32_t v76 = *v32; // 0x407013
            int64_t v77 = v35 + 1; // 0x407016
            int32_t v78 = v77; // 0x407019
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x407380
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407027
                    function_406800(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x407035
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x407136;
        }
    }
  lab_0x407075:;
    // 0x407075
    int64_t v79; // bp-104, 0x406f00
    int64_t v80 = &v79; // 0x406f0a
    int64_t v81 = v50 + 1; // 0x407075
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40707c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x407081
    *v83 = v81;
    char v84 = *(char *)v2; // 0x407085
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x407089
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407091
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407096
    int32_t c2 = v84; // 0x407096
    char * found_char_pos = strchr(str2, c2); // 0x407096
    int64_t v87 = *v82; // 0x40709b
    v2 = v87;
    int64_t v88 = *v85; // 0x4070a5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4070b0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4073a0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40736d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4070de
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407096
    char v91 = *(char *)(v90 + 1); // 0x4070cb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x407085
        if (v91 != 58) {
            // 0x4070de
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4072f4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4073f8
                *v8 = 0;
            } else {
                // 0x4073dc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40731e
            *v83 = 0;
            // 0x4070de
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4072fe
        if (v93 != 0) {
            // 0x407390
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40731e
            *v83 = 0;
            // 0x4070de
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407311
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40731e
            *v83 = 0;
            // 0x4070de
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40745a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40740a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407411
        // 0x40731e
        *v83 = 0;
        // 0x4070de
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x407269
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40726b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x407490
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x407441
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x407448
            // 0x4070de
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x407276
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40727a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x407295;
  lab_0x4071a6:
    // 0x4071a6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406fe4;
  lab_0x407295:;
    int64_t v99 = function_4068e0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4072b3
    // 0x4070de
    return v99 & 0xffffffff;
  lab_0x407136:;
    int32_t v100 = v55; // 0x407136
    if (v100 != (int32_t)v59) {
        // 0x40713a
        *(int32_t *)a7 = v100;
    }
    // 0x4070de
    return 0xffffffff;
  lab_0x4070fa:
    // 0x4070fa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407101
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4070de
    return v99 & 0xffffffff;
  lab_0x407240:
    // 0x407240
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x407075;
  lab_0x4071f4:
    // 0x4071f4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4068e0(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x40721a
    if ((int32_t)v101 != -1) {
        // 0x4070de
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40722f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x407240;
}
// Address range: 0x4074d0 - 0x407526
int64_t function_4074d0(int64_t a1) {
    // 0x4074d0
    *(int32_t *)&g44 = g27;
    *(int32_t *)&g45 = g26;
    int64_t v1; // 0x4074d0
    int64_t result = function_406f00(v1, v1, v1, v1, v1, v1, &g44, a1 & 0xffffffff); // 0x4074f6
    g27 = *(int32_t *)&g44;
    g49 = g47;
    *(int32_t *)&g25 = g46;
    return result;
}
// Address range: 0x407530 - 0x407548
int64_t function_407530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407530
    return function_4074d0(1);
}
// Address range: 0x407550 - 0x407563
int64_t function_407550(int64_t a1, int64_t a2, char * a3, char (**a4)[13], int32_t a5, int64_t a6) {
    // 0x407550
    return function_4074d0(0);
}
// Address range: 0x407570 - 0x407585
int64_t function_407570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407570
    return function_406f00(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x407590 - 0x4075a6
int64_t function_407590(void) {
    // 0x407590
    return function_4074d0(0);
}
// Address range: 0x4075b0 - 0x4075c8
int64_t function_4075b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4075b0
    return function_406f00(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4075d0 - 0x40764a
int64_t function_4075d0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4075db
    int64_t v2 = (int64_t)&g11; // 0x4075db
    int32_t * pwc; // 0x4075d0
    int64_t v3; // 0x4075d0
    int64_t n; // 0x4075d0
    if (a2 == 0) {
        goto lab_0x407622;
    } else {
        // 0x4075dd
        if (a3 == 0) {
            // 0x407608
            return -2;
        }
        // 0x4075e9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407622;
        } else {
            goto lab_0x4075f4;
        }
    }
  lab_0x407622:
    // 0x407622
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4075d0
    pwc = (int32_t *)&v4;
    goto lab_0x4075f4;
  lab_0x4075f4:;
    char * wstr = (char *)v3; // 0x4075fa
    int64_t ps; // 0x4075d0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4075fa
    int64_t result = v5; // 0x4075fa
    if (v5 < 0xfffffffe) {
        // 0x407608
        return result;
    }
    int64_t result2 = result; // 0x407639
    if ((char)function_407820(0, v3) == 0) {
        // 0x40763b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407608
    return result2;
}
// Address range: 0x407650 - 0x4076ad
int64_t function_407650(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x407657
    int64_t v2; // 0x407650
    int64_t result = function_407e30(a1, v2); // 0x407668
    if ((v2 & 32) != 0) {
        // 0x407690
        if ((int32_t)result == 0) {
            // 0x407694
            *__errno_location() = 0;
        }
        // 0x40768a
        return 0xffffffff;
    }
    // 0x407671
    if ((int32_t)result == 0) {
        // 0x40768a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x407678
    if (v1 == 0) {
        // 0x40767a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40768a
    return result2;
}
// Address range: 0x4076b0 - 0x4076c8
int64_t function_4076b0(void) {
    // 0x4076b0
    int64_t v1; // 0x4076b0
    int64_t result = function_407730(v1); // 0x4076b4
    if (result != 0) {
        // 0x4076be
        return result;
    }
    // 0x4076c3
    function_4062c0(v1);
    // UNREACHABLE
}
// Address range: 0x4076d0 - 0x40772d
int64_t function_4076d0(int64_t a1) {
    // 0x4076d0
    int64_t v1; // 0x4076d0
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x4076de
    int64_t v3 = function_407790(a1, v1); // 0x4076e2
    int64_t result = v3 - a1; // 0x4076ea
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x407713
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x407700
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x407713
            break;
        }
        result2--;
    }
    // 0x407713
    return result2;
}
// Address range: 0x407730 - 0x40778a
int64_t function_407730(int64_t a1) {
    // 0x407730
    int64_t v1; // 0x407730
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x40774f
    if (mem == NULL) {
        // 0x407776
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x407765
    int64_t v3; // 0x407730
    if (v2 == 0) {
        // 0x407780
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x407765
    *(char *)(v3 + result) = 0;
    // 0x407776
    return result;
}
// Address range: 0x407790 - 0x4077eb
int64_t function_407790(int64_t a1, int64_t a2) {
    // 0x407790
    int64_t v1; // 0x407790
    char v2 = v1;
    int64_t v3 = a1; // 0x407799
    int64_t v4 = a1; // 0x407799
    char v5 = v2; // 0x407799
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x4077a4
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x4077a0
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x4077ae
    if (v5 == 0) {
      lab_0x4077ea:
        // 0x4077ea
        return result;
    }
    int64_t v7 = v4; // 0x4077d8
    int64_t v8 = 0; // 0x4077d8
    int64_t v9; // 0x407790
    int64_t v10; // 0x4077da
    char v11; // 0x4077de
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x4077d5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x4077da
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x4077d5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x4077ca
    char v14 = *(char *)v13; // 0x4077ce
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
            // 0x4077d5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x4077da
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x4077d5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x4077c0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x4077ea
    return result2;
}
// Address range: 0x4077f0 - 0x40781b
int64_t function_4077f0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4077f4
    int64_t result = len; // 0x4077f4
    if (len < 2) {
        // 0x40780a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x407808
    while (*(char *)(v1 + str) == 47) {
        // 0x407810
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40780a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40780a
    return result2;
}
// Address range: 0x407820 - 0x40787e
int64_t function_407820(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x407826
    if (locale == NULL) {
        // 0x407853
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x407826
    bool v2; // 0x407820
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x407820
    int64_t v5 = v1; // 0x407820
    int64_t v6 = 2; // 0x407845
    unsigned char v7 = *(char *)v5; // 0x407845
    char v8 = *(char *)v4; // 0x407845
    char v9 = v8; // 0x407845
    bool v10 = false; // 0x407845
    while (v7 == v8) {
        // 0x407838
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
    int64_t v12 = (int64_t)"POSIX"; // 0x407851
    int64_t v13 = v1; // 0x407851
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407853
        return 0;
    }
    int64_t v14 = 6; // 0x407851
    unsigned char v15 = *(char *)v13; // 0x40786d
    char v16 = *(char *)v12; // 0x40786d
    char v17 = v16; // 0x40786d
    bool v18 = false; // 0x40786d
    while (v15 == v16) {
        // 0x407860
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
// Address range: 0x407880 - 0x4078b6
int64_t function_407880(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x407886
    if (v1 == 0) {
        // 0x4078b0
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x407898
    char v5 = *(char *)v2; // 0x40789b
    while (v5 != 0) {
        // 0x407890
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x4078a3
    return v4 % a2;
}
// Address range: 0x4078c0 - 0x407e22
int64_t function_4078c0(void) {
    char * v1 = nl_langinfo(14); // 0x4078d6
    char * v2 = g48; // 0x4078db
    char * v3; // 0x4078c0
    int64_t v4; // 0x4078c0
    int64_t v5; // 0x4078c0
    int64_t v6; // 0x4078c0
    int64_t v7; // 0x4078c0
    int32_t size; // 0x4078c0
    int32_t size2; // 0x4078c0
    int32_t len; // 0x407992
    int64_t v8; // 0x407992
    char * env_val; // 0x40797d
    if (v2 == NULL) {
        // 0x407978
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4079e5;
        } else {
            // 0x40798a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4079e5;
            } else {
                // 0x40798f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40797d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407e15
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4079e5;
                    } else {
                        // 0x407d89
                        size2 = len + 14;
                        goto lab_0x4079ab;
                    }
                } else {
                    goto lab_0x4079ab;
                }
            }
        }
    } else {
        // 0x4078c0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4078fa;
    }
  lab_0x407c2c:;
    // 0x407c2c
    struct _IO_FILE * stream; // 0x407a6b
    int32_t v10 = __uflow(stream); // 0x407c2f
    int64_t v11; // 0x4078c0
    int64_t v12 = v11; // 0x407c39
    int64_t v13; // 0x4078c0
    int64_t v14 = v13; // 0x407c39
    int32_t v15 = v10; // 0x407c39
    int64_t v16; // 0x4078c0
    int64_t v17 = v16; // 0x407c39
    int64_t v18 = v11; // 0x407c39
    int64_t v19 = v13; // 0x407c39
    int64_t v20 = v16; // 0x407c39
    if (v10 == -1) {
        // break -> 0x407c3f
        goto lab_0x407c3f;
    }
    goto lab_0x407ab9;
  lab_0x407aae:;
    // 0x407aae
    int64_t v90; // 0x4078c0
    int64_t * v32; // 0x407aa0
    *v32 = v90 + 1;
    int64_t v89; // 0x4078c0
    v12 = v89;
    int64_t v91; // 0x4078c0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4078c0
    v17 = v92;
    goto lab_0x407ab9;
  lab_0x407ab9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4078c0
    int32_t v25; // bp-120, 0x4078c0
    int32_t v26; // bp-184, 0x4078c0
    int64_t v27; // 0x407a6b
    int64_t v28; // 0x407a88
    int64_t v29; // 0x407a8d
    int64_t * v30; // 0x407aa4
    switch (c) {
        case 32: {
            goto lab_0x407aa0;
        }
        case 10: {
            goto lab_0x407aa0;
        }
        case 9: {
            goto lab_0x407aa0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407c91
            int32_t v33; // 0x4078c0
            char v34; // 0x4078c0
            int32_t v35; // 0x407c9e
            if (v31 < *v30) {
                // 0x407c70
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x407c9b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407c91
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407c70
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x407c9b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407c80
                v36 = v33;
            }
            // 0x407d6f
            if (v36 == -1) {
                // break -> 0x407c3f
                break;
            }
            goto lab_0x407aa0;
        }
        default: {
            // 0x407acf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x407c3f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407af8
            int64_t v39 = v37 + 4; // 0x407afa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407b06
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407b08
            while (v41 == 0) {
                // 0x407af8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407b26
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407b32
            int64_t v45 = v43 + 4; // 0x407b34
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407b40
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407b42
            while (v47 == 0) {
                // 0x407b32
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x407b2f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407b58
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407b68
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x407b6c
            int64_t v52 = v51 + v48; // 0x407b75
            int64_t * mem; // 0x4078c0
            int64_t v53; // 0x4078c0
            int64_t v54; // 0x4078c0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x407cab
                int64_t v56 = v55 + 3; // 0x407cb7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407b91
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407ba0
            if (mem == NULL) {
                // 0x407dcc
                free((int64_t *)v21);
                function_407e30(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x407a44;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407bb8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407bc2
            uint32_t v62 = (int32_t)v59; // 0x407bc5
            int64_t v63; // 0x4078c0
            if (v62 >= 8) {
                // 0x407cd4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x407cee
                int64_t v66 = v61 - v65; // 0x407cf2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x407cfd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x407d0e
                    int64_t v70 = v69 & 0xffffffff; // 0x407d0e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x407d0b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x407d9f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407bd7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x407bdb
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
            int64_t v73 = v51 + 1; // 0x407beb
            int64_t v74 = v60 - 1; // 0x407bef
            uint32_t v75 = (int32_t)v73; // 0x407bf4
            int64_t v76; // 0x4078c0
            if (v75 >= 8) {
                // 0x407d22
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x407d2c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x407d3c
                int64_t v80 = v74 - v79; // 0x407d40
                uint32_t v81 = (int32_t)(v80 + v73); // 0x407d4b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x407d5b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407d59
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407db6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x407dbe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407c06
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x407c0a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407e03
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x407c1e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x407aae;
            } else {
                goto lab_0x407c2c;
            }
        }
    }
  lab_0x407aa0:;
    int64_t v93 = v23; // 0x4078c0
    int64_t v94 = v22; // 0x4078c0
    int64_t v95 = v21; // 0x4078c0
    goto lab_0x407aa0_2;
  lab_0x4079e5:;
    int64_t * mem3 = malloc(size); // 0x4079e5
    int64_t v97 = (int64_t)&g11; // 0x4079f0
    int64_t v98; // 0x4078c0
    int64_t path; // 0x4078c0
    if (mem3 == NULL) {
        goto lab_0x4079c2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4079e5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407a06;
    }
  lab_0x4078fa:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x4078ed
    char v100 = *v3; // 0x4078fa
    int64_t v101; // 0x4078c0
    if (v100 == 0) {
        // 0x407954
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4078c0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4078c0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x407940
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x407947;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x407910
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40791d
        char v107 = *(char *)v106; // 0x407922
        v102 = v107;
        if (v107 == 0) {
            // 0x407954
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40792b
    v104 = v103 + 1;
  lab_0x407947:
    // 0x407954
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4079c2:;
    char * v108 = (char *)v97;
    g48 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4078fa;
  lab_0x407a06:;
    int64_t v109 = v98 + path; // 0x407a06
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407a32
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x407a61
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x407d92
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x407a85
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407aa0_2:;
                uint64_t v96 = *v32; // 0x407aa0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x407c2c;
                } else {
                    goto lab_0x407aae;
                }
            }
          lab_0x407c3f:
            // 0x407c3f
            function_407e30(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x407c5e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407a44;
  lab_0x4079ab:;
    int64_t * mem4 = malloc(size2); // 0x4079ab
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x407a51
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407a06;
    } else {
        goto lab_0x4079c2;
    }
  lab_0x407a44:
    // 0x407a44
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4079c2;
}
// Address range: 0x407e30 - 0x407eab
int64_t function_407e30(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x407e37
    if (fileno(stream) < 0) {
        // 0x407e97
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x407e4a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x407e7b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x407e97
            return fclose(stream);
        }
    }
    // 0x407e4c
    if ((int32_t)function_407eb0(a1, v1) == 0) {
        // 0x407e97
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x407e58
    int32_t v3 = *v2; // 0x407e60
    int64_t result = fclose(stream); // 0x407e6e
    if (v3 != 0) {
        // 0x407ea0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x407e70
    return result;
}
// Address range: 0x407eb0 - 0x407ef0
int64_t function_407eb0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x407eca
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x407eca
        return fflush(stream);
    }
    // 0x407ed8
    function_407ef0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407ef0 - 0x407f47
int64_t function_407ef0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407ef0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x407efa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x407f2b
    int64_t result = -1; // 0x407f34
    if (v1 != -1) {
        // 0x407f36
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407f42
    return result;
}
// Address range: 0x407f50 - 0x407fad
int64_t function_407f50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407f50
    return function_4015b0();
}
// Address range: 0x407fb0 - 0x407fb1
int64_t function_407fb0(void) {
    // 0x407fb0
    int64_t result; // 0x407fb0
    return result;
}
// Address range: 0x407fc0 - 0x407fd8
int64_t function_407fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407fc0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x407fd8 - 0x407ff8
int64_t function_407fd8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x407fe2
    while (*(int64_t *)v1 != -1) {
        // 0x407fe3
        v1 -= 8;
    }
    // 0x407ff4
    return result;
}
