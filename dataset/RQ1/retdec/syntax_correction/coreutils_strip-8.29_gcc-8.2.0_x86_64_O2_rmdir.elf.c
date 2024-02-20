#include "decompile_retdec.h"
// Address range: 0x4017e0 - 0x4017e5
int64_t function_4017e0(void) {
    // 0x4017e0
    abort();
    // UNREACHABLE
}
// Address range: 0x4017e5 - 0x4017ea
int64_t function_4017e5(void) {
    // 0x4017e5
    abort();
    // UNREACHABLE
}
// Address range: 0x4017ea - 0x4017ef
int64_t function_4017ea(void) {
    // 0x4017ea
    abort();
    // UNREACHABLE
}
// Address range: 0x4017ef - 0x4017f4
int64_t function_4017ef(void) {
    // 0x4017ef
    abort();
    // UNREACHABLE
}
// Address range: 0x4017f4 - 0x4017f9
int64_t function_4017f4(void) {
    // 0x4017f4
    abort();
    // UNREACHABLE
}
// Address range: 0x4017f9 - 0x4017fe
int64_t function_4017f9(void) {
    // 0x4017f9
    abort();
    // UNREACHABLE
}
// Address range: 0x4017fe - 0x401803
int64_t function_4017fe(void) {
    // 0x4017fe
    abort();
    // UNREACHABLE
}
// Address range: 0x401810 - 0x401b49
int64_t function_401810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401818
    function_402220(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_408850(0x402140, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    *(char *)&g36 = 0;
    int64_t v2; // 0x401810
    int64_t v3; // 0x401810
    int64_t v4; // 0x401810
    int64_t v5; // 0x401810
    int64_t v6; // 0x401810
    int64_t v7; // 0x401810
    int64_t v8; // 0x401810
    int64_t v9; // 0x401810
    int64_t v10; // 0x401810
    int64_t v11; // 0x401810
    int64_t v12; // 0x401810
    int64_t v13; // 0x401810
    uint64_t v14; // 0x40197e
    char * path; // 0x401943
    int64_t v15; // 0x40198d
    int32_t * err_num; // 0x4019bc
    unsigned char v16; // 0x40194c
    int64_t v17; // 0x4019dd
    int64_t v18; // 0x40194c
    char * v19; // 0x401810
    char * found_char_pos; // 0x401a20
    int64_t v20; // 0x401a20
    int64_t v21; // 0x401a38
    int64_t v22; // 0x401a98
    int32_t * err_num2; // 0x401a5f
    uint64_t v23; // 0x401a6c
    int64_t v24; // 0x401aea
    uint32_t v25; // 0x40191c
    int64_t v26; // 0x40191c
    while (true) {
        uint32_t v27 = (int32_t)function_4053e0(v1, a2, "pv", &g2, 0, a6);
        switch (v27) {
            case -1: {
                // 0x40191c
                v25 = *(int32_t *)0x60c25c;
                if (v25 == (int32_t)a1) {
                    // 0x401b20
                    error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
                    // 0x401b3f
                    function_401d20(1);
                    // UNREACHABLE
                }
                // 0x40192b
                v26 = v25;
                if (v1 <= v26) {
                    // 0x401ac7
                    return 0;
                }
                // 0x401975
                v8 = v26;
                v10 = (int64_t)&g2;
                v6 = 0;
                v3 = 1;
                while (true) {
                  lab_0x401975:
                    // 0x401975
                    v4 = v3;
                    v7 = v6;
                    v11 = v10;
                    v14 = *(int64_t *)((0x100000000 * v8 >> 29) + a2);
                    if (g34 != 0) {
                        // 0x401985
                        v15 = function_403bf0(4, v14);
                        function_402030((int64_t)g29, (int64_t)dcgettext(NULL, "removing directory, %s", 5), v15, v11, v7, a6);
                    }
                    // 0x401940
                    path = (char *)v14;
                    if (rmdir(path) != 0) {
                        // 0x4019bc
                        err_num = __errno_location();
                        v10 = v11;
                        v6 = v7;
                        v2 = v4;
                        if ((char)function_401c30(*err_num) == 0) {
                            // 0x4019d2
                            v17 = function_403bf0(4, v14);
                            error(0, *err_num, dcgettext(NULL, "failed to remove %s", 5));
                            v10 = v17;
                            v6 = v7;
                            v2 = 0;
                        }
                        goto lab_0x40195d;
                    } else {
                        // 0x40194c
                        v16 = *(char *)&g36;
                        v10 = v11;
                        v6 = v7;
                        v2 = v4;
                        if (v16 != 0) {
                            // 0x401a0d
                            v18 = v16;
                            function_4021e0(v14);
                            while (true) {
                              lab_0x401a18:
                                // 0x401a18
                                found_char_pos = strrchr(path, 47);
                                v12 = v11;
                                v13 = v18;
                                if (found_char_pos == NULL) {
                                    // break -> 0x401a78
                                    break;
                                }
                                // 0x401a2a
                                v20 = (int64_t)found_char_pos;
                                v9 = v20;
                                if (v14 < v20) {
                                    while (*(char *)v9 == 47) {
                                        // 0x401a38
                                        v21 = v9 - 1;
                                        v9 = v21;
                                        if (v14 == v21) {
                                            // 0x401a80
                                            *v19 = 0;
                                            if (g34 == 0) {
                                                goto lab_0x401a53;
                                            } else {
                                                goto lab_0x401a90;
                                            }
                                        }
                                    }
                                }
                                // 0x401a46
                                *(char *)(v20 + 1) = 0;
                                if (g34 != 0) {
                                    goto lab_0x401a90;
                                } else {
                                    goto lab_0x401a53;
                                }
                            }
                            goto lab_0x401a78;
                        } else {
                            goto lab_0x40195d;
                        }
                    }
                }
              lab_0x401ac7:
                // 0x401ac7
                return v5 % 256 ^ 1;
              lab_0x401a90:
                // 0x401a90
                v22 = function_403bf0(4, v14);
                function_402030((int64_t)g29, (int64_t)dcgettext(NULL, "removing directory, %s", 5), v22, v11, v7, a6);
                goto lab_0x401a53;
              lab_0x401a53:
                // 0x401a53
                if (rmdir(path) != 0) {
                    // 0x401a5f
                    err_num2 = __errno_location();
                    v23 = function_401c30(*err_num2);
                    v12 = v11;
                    v13 = v18;
                    if ((char)v23 == 0) {
                        // 0x401ade
                        v24 = function_403bf0(4, v14);
                        error(0, *err_num2, dcgettext(NULL, "failed to remove directory %s", 5));
                        v12 = v24;
                        v13 = v23 % 256;
                        goto lab_0x401a78;
                    } else {
                        goto lab_0x401a78;
                    }
                }
                goto lab_0x401a18;
              lab_0x40195d:
                // 0x40195d
                v3 = v2;
                g26 = &g27;
                v8 = &g27;
                v5 = v3;
                if (v1 <= (int64_t)&g27) {
                    // break -> 0x401ac7
                    goto lab_0x401ac7;
                }
                goto lab_0x401975;
              lab_0x401a78:
                // 0x401a78
                v10 = v12;
                v6 = v13;
                v2 = v13 & v4;
                goto lab_0x40195d;
            }
            case 112: {
                // 0x401910
                *(char *)&g36 = 1;
                // break -> 0x401865
                break;
            }
            default: {
                if (v27 <= 112) {
                    if (v27 == -131) {
                        // 0x4018a7
                        function_4042c0((int64_t)g29, "rmdir", "GNU coreutils", (int64_t)g17, "David MacKenzie", 0);
                        exit(0);
                        // UNREACHABLE
                    }
                    if (v27 == -130) {
                        // 0x401902
                        function_401d20(0);
                        // UNREACHABLE
                    }
                    goto lab_0x401b3f;
                }
                if (v27 != 118) {
                    if (v27 != 128) {
                      lab_0x401b3f:
                        // 0x401b3f
                        function_401d20(1);
                        // UNREACHABLE
                    }
                    // 0x4018eb
                    g35 = 1;
                } else {
                    // 0x401896
                    g34 = 1;
                }
                // break -> 0x401865
                break;
            }
        }
    }
    // 0x40191c
    v25 = *(int32_t *)0x60c25c;
    if (v25 == (int32_t)a1) {
        // 0x401b20
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401b3f
        function_401d20(1);
        // UNREACHABLE
    }
    // 0x40192b
    v26 = v25;
    if (v1 <= v26) {
        // 0x401ac7
        return 0;
    }
    // 0x401975
    v8 = v26;
    v10 = (int64_t)&g2;
    v6 = 0;
    v3 = 1;
    while (true) {
      lab_0x401975:
        // 0x401975
        v4 = v3;
        v7 = v6;
        v11 = v10;
        v14 = *(int64_t *)((0x100000000 * v8 >> 29) + a2);
        if (g34 != 0) {
            // 0x401985
            v15 = function_403bf0(4, v14);
            function_402030((int64_t)g29, (int64_t)dcgettext(NULL, "removing directory, %s", 5), v15, v11, v7, a6);
        }
        // 0x401940
        path = (char *)v14;
        if (rmdir(path) != 0) {
            // 0x4019bc
            err_num = __errno_location();
            v10 = v11;
            v6 = v7;
            v2 = v4;
            if ((char)function_401c30(*err_num) == 0) {
                // 0x4019d2
                v17 = function_403bf0(4, v14);
                error(0, *err_num, dcgettext(NULL, "failed to remove %s", 5));
                v10 = v17;
                v6 = v7;
                v2 = 0;
            }
            goto lab_0x40195d;
        } else {
            // 0x40194c
            v16 = *(char *)&g36;
            v10 = v11;
            v6 = v7;
            v2 = v4;
            if (v16 != 0) {
                // 0x401a0d
                v18 = v16;
                function_4021e0(v14);
                while (true) {
                  lab_0x401a18:
                    // 0x401a18
                    found_char_pos = strrchr(path, 47);
                    v12 = v11;
                    v13 = v18;
                    if (found_char_pos == NULL) {
                        // break -> 0x401a78
                        break;
                    }
                    // 0x401a2a
                    v20 = (int64_t)found_char_pos;
                    v9 = v20;
                    if (v14 < v20) {
                        while (*(char *)v9 == 47) {
                            // 0x401a38
                            v21 = v9 - 1;
                            v9 = v21;
                            if (v14 == v21) {
                                // 0x401a80
                                *v19 = 0;
                                if (g34 == 0) {
                                    goto lab_0x401a53;
                                } else {
                                    goto lab_0x401a90;
                                }
                            }
                        }
                    }
                    // 0x401a46
                    *(char *)(v20 + 1) = 0;
                    if (g34 != 0) {
                        goto lab_0x401a90;
                    } else {
                        goto lab_0x401a53;
                    }
                }
                goto lab_0x401a78;
            } else {
                goto lab_0x40195d;
            }
        }
    }
  lab_0x401ac7:
    // 0x401ac7
    return v5 % 256 ^ 1;
  lab_0x401a90:
    // 0x401a90
    v22 = function_403bf0(4, v14);
    function_402030((int64_t)g29, (int64_t)dcgettext(NULL, "removing directory, %s", 5), v22, v11, v7, a6);
    goto lab_0x401a53;
  lab_0x401a53:
    // 0x401a53
    if (rmdir(path) != 0) {
        // 0x401a5f
        err_num2 = __errno_location();
        v23 = function_401c30(*err_num2);
        v12 = v11;
        v13 = v18;
        if ((char)v23 == 0) {
            // 0x401ade
            v24 = function_403bf0(4, v14);
            error(0, *err_num2, dcgettext(NULL, "failed to remove directory %s", 5));
            v12 = v24;
            v13 = v23 % 256;
            goto lab_0x401a78;
        } else {
            goto lab_0x401a78;
        }
    }
    goto lab_0x401a18;
  lab_0x40195d:
    // 0x40195d
    v3 = v2;
    g26 = &g27;
    v8 = &g27;
    v5 = v3;
    if (v1 <= (int64_t)&g27) {
        // break -> 0x401ac7
        goto lab_0x401ac7;
    }
    goto lab_0x401975;
  lab_0x401a78:
    // 0x401a78
    v10 = v12;
    v6 = v13;
    v2 = v13 & v4;
    goto lab_0x40195d;
}
// Address range: 0x401b50 - 0x401b7b
// Address range: 0x401b7b - 0x401b9a
int64_t function_401b7b(void) {
    // 0x401b7b
    return &g28;
}
// Address range: 0x401b9a - 0x401bd1
int64_t function_401b9a(void) {
    // 0x401b9a
    return 0;
}
// Address range: 0x401bd1 - 0x401c28
int64_t function_401bd1(void) {
    // 0x401bd1
    if (g32 != 0) {
        // 0x401c27
        int64_t result; // 0x401bd1
        return result;
    }
    int64_t v1 = g33; // 0x401c04
    int64_t result2; // 0x401c16
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401c16
        result2 = function_401b7b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401c06
        v1++;
    }
    // 0x401bfa
    g33 = v1;
    // 0x401c16
    result2 = function_401b7b();
    g32 = 1;
    return result2;
}
// Address range: 0x401c28 - 0x401c2d
int64_t function_401c28(void) {
    // 0x401c28
    return function_401b9a();
}
// Address range: 0x401c30 - 0x401d11
int64_t function_401c30(uint32_t a1) {
    // 0x401c30
    if (g35 == 0) {
        // 0x401c5d
        return 0;
    }
    bool v1 = a1 == 17 | a1 == 39;
    int64_t path; // 0x401c30
    int64_t v2 = path & -256 | (int64_t)v1; // 0x401c49
    if (v1) {
        // 0x401c4d
        return v2 & 0xffffffff;
    }
    if (a1 >= 31) {
        // 0x401c5d
        return 0;
    }
    uint32_t v3 = a1 % 64;
    if (v3 == 0) {
        // 0x401c5d
        return 0;
    }
    if ((1 << (int64_t)v3 & 0x40032002) == 0) {
        // 0x401c5d
        return 0;
    }
    int32_t fd = openat(-100, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY | O_NOFOLLOW); // 0x401c8d
    if (fd < 0) {
        // 0x401c5d
        return 0;
    }
    struct __dirstream * dirp = fdopendir(fd); // 0x401c9a
    if (dirp == NULL) {
        // 0x401d05
        close(fd);
        // 0x401c4d
        return v2 & 0xffffffff;
    }
    int32_t * v4 = __errno_location(); // 0x401ca7
    *v4 = 0;
    struct dirent * v5 = readdir(dirp); // 0x401cb8
    struct dirent * v6 = v5; // 0x401cc0
    int32_t v7; // 0x401cf0
    if (v5 == NULL) {
        // 0x401cf0
        v7 = *v4;
        closedir(dirp);
        // 0x401c4d
        return ((int64_t)(v7 & -256) | (int64_t)(v7 == 0)) & 0xffffffff;
    }
    while (true) {
      lab_0x401cc2:;
        int64_t v8 = (int64_t)v6;
        if (*(char *)(v8 + 19) != 46) {
            // break -> 0x401cc8
            break;
        }
        int64_t v9 = v8 + 20; // 0x401cda
        char v10 = *(char *)(v9 + (int64_t)(*(char *)v9 == 46)); // 0x401ce1
        switch (v10) {
            case 0: {
                goto lab_0x401cb5;
            }
            case 47: {
                goto lab_0x401cb5;
            }
            default: {
                goto lab_0x401cc8;
            }
        }
    }
  lab_0x401cc8:
    // 0x401cc8
    closedir(dirp);
    // 0x401c4d
    return v2 & 0xffffffff;
  lab_0x401cb5:
    // 0x401cb5
    v6 = readdir(dirp);
    if (v6 == NULL) {
        // 0x401cf0
        v7 = *v4;
        closedir(dirp);
        // 0x401c4d
        return ((int64_t)(v7 & -256) | (int64_t)(v7 == 0)) & 0xffffffff;
    }
    goto lab_0x401cc2;
}
// Address range: 0x401d20 - 0x40202d
int64_t function_401d20(int32_t status) {
    // 0x401d20
    if (status != 0) {
        // 0x401d3a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401d5f
        exit(status);
        // UNREACHABLE
    }
    // 0x401d66
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... DIRECTORY...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Remove the DIRECTORY(ies), if they are empty.\n\n      --ignore-fail-on-non-empty\n                  ignore each failure that is solely because a directory\n                    is non-empty\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -p, --parents   remove DIRECTORY and its ancestors; e.g., 'rmdir -p a/b/c' is\n                    similar to 'rmdir a/b/c a/b a'\n  -v, --verbose   output a diagnostic for every directory processed\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x401e10
    bool v2; // 0x401d20
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401e90
    int64_t v6 = *(int64_t *)v5; // 0x401e94
    int64_t v7 = 6; // 0x401e9a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"rmdir";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401ea6
        char v11 = *(char *)v9; // 0x401ea6
        char v12 = v11; // 0x401ea6
        bool v13 = false; // 0x401ea6
        while (v10 == v11) {
            // 0x401e9c
            v7--;
            int64_t v14 = v9 + v3; // 0x401ea6
            int64_t v15 = v8 + v3; // 0x401ea6
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
            // break -> 0x401eb2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x401eb2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401fc4;
        } else {
            // 0x401fae
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402003
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401f14;
            } else {
                goto lab_0x401fc4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401f14;
        } else {
            // 0x401efa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402003
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401f14;
            } else {
                goto lab_0x401f14;
            }
        }
    }
  lab_0x401fc4:
    // 0x401fc4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401f54
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401d5f
    exit(status);
    // UNREACHABLE
  lab_0x401f14:
    // 0x401f14
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401f54
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401d5f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402030 - 0x40211f
int64_t function_402030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x402030
    int64_t v1; // 0x402030
    if ((char)v1 != 0) {
        // 0x402057
        int128_t v2; // 0x402030
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x402098
    fputs_unlocked(g39, stream);
    fwrite_unlocked((int64_t *)": ", 1, 2, stream);
    int64_t v3 = 16; // bp-224, 0x4020c7
    function_4054e0(a1, a2, &v3);
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x4020eb
    uint64_t v5 = *v4; // 0x4020eb
    int64_t result; // 0x402030
    if (v5 >= *(int64_t *)(a1 + 48)) {
        // 0x402110
        result = __overflow(stream, 10);
    } else {
        // 0x4020f5
        *v4 = v5 + 1;
        *(char *)v5 = 10;
        result = v5;
    }
    // 0x402100
    return result;
}
// Address range: 0x402120 - 0x402128
int64_t function_402120(int64_t a1) {
    // 0x402120
    g38 = a1;
    int64_t result; // 0x402120
    return result;
}
// Address range: 0x402130 - 0x402138
int64_t function_402130(int64_t a1) {
    // 0x402130
    g37 = a1;
    int64_t result; // 0x402130
    return result;
}
// Address range: 0x402140 - 0x4021de
int64_t function_402140(void) {
    // 0x402140
    int32_t * err_num; // 0x402156
    if ((int32_t)function_4055a0((int64_t)g29) == 0) {
        goto lab_0x40216c;
    } else {
        // 0x402156
        err_num = __errno_location();
        if (g37 == 0) {
            goto lab_0x402183;
        } else {
            // 0x402167
            if (*err_num != 32) {
                goto lab_0x402183;
            } else {
                goto lab_0x40216c;
            }
        }
    }
  lab_0x40216c:;
    int64_t result = function_4055a0((int64_t)g31); // 0x402173
    if ((int32_t)result == 0) {
        // 0x40217c
        return result;
    }
    // 0x4021be
    _exit(g18);
    // UNREACHABLE
  lab_0x402183:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40218f
    if (g38 == 0) {
        // 0x4021c9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4021a3
        error(0, *err_num, "%s: %s", (char *)function_403c90((int64_t)g38), v1);
    }
    // 0x4021be
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x4021e0 - 0x402213
int64_t function_4021e0(int64_t a1) {
    // 0x4021e0
    int64_t v1; // 0x4021e0
    int64_t v2 = function_405600(a1, v1); // 0x4021e9
    int64_t v3 = *(char *)v2 == 0 ? a1 : v2; // 0x4021f4
    int64_t v4 = function_405660(v3); // 0x4021fb
    char * v5 = (char *)(v3 + v4); // 0x402203
    *v5 = 0;
    return v4 & -256 | (int64_t)(*v5 != 0);
}
// Address range: 0x402220 - 0x4022b9
int64_t function_402220(int64_t str) {
    // 0x402220
    if (str == 0) {
        // 0x402299
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40222e
    int64_t result = (int64_t)found_char_pos; // 0x40222e
    if (found_char_pos == NULL) {
        // 0x402289
        g39 = (char *)str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402238
    if (v1 - str < 7) {
        // 0x402289
        g39 = (char *)str;
        g30 = str;
        return result;
    }
    // 0x402248
    bool v2; // 0x402220
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402220
    int64_t v5 = result - 6; // 0x402220
    int64_t v6 = 7; // 0x402256
    unsigned char v7 = *(char *)v5; // 0x402256
    char v8 = *(char *)v4; // 0x402256
    char v9 = v8; // 0x402256
    bool v10 = false; // 0x402256
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
    int64_t v12 = (int64_t)"lt-"; // 0x402260
    int64_t v13 = v1; // 0x402260
    int64_t v14 = 3; // 0x402260
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402289
        g39 = (char *)str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402272
    char v16 = *(char *)v12; // 0x402272
    char v17 = v16; // 0x402272
    bool v18 = false; // 0x402272
    while (v15 == v16) {
        // 0x402262
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
    int64_t v20 = v1; // 0x40227c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40227e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x402289
    g39 = (char *)v20;
    g30 = v20;
    return result;
}
// Address range: 0x4022c0 - 0x4023b2
int64_t function_4022c0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4022d4
    int64_t result = (int64_t)v1; // 0x4022d4
    if (result != a1) {
        // 0x4022e1
        return result;
    }
    int64_t v2 = function_4056f0(); // 0x4022f0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4023a6
    if (v3 == 85) {
        // 0x402300
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402398
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40232e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40233b
        // 0x4022e1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402398
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40237d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40238a
    // 0x4022e1
    return result4;
}
// Address range: 0x4023c0 - 0x402417
int64_t function_4023c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4023c0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402408
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402417 - 0x4035e1
int64_t function_402417(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402461
    int64_t v3 = 0; // 0x402461
    int64_t v4; // 0x402417
    int64_t v5; // 0x402417
    int64_t v6; // 0x402417
    int64_t v7; // 0x402417
    int64_t v8; // 0x402417
    int64_t v9; // 0x402417
    int64_t v10; // 0x402417
    int64_t v11; // 0x402417
    int64_t v12; // 0x402417
    int64_t v13; // 0x402417
    int64_t v14; // 0x402417
    int64_t v15; // 0x402417
    int64_t v16; // 0x402417
    int64_t v17; // 0x402417
    int64_t v18; // 0x402417
    int64_t result; // 0x402417
    int64_t v19; // 0x402417
    int32_t wc; // bp+132, 0x402417
    int64_t ps; // bp+136, 0x402417
    char v20; // 0x4029d0
    int64_t v21; // 0x4029d0
    int64_t v22; // 0x402d78
    int64_t v23; // 0x402417
    int64_t v24; // 0x402d97
    int32_t v25; // 0x402417
    while (true) {
      lab_0x402468_2:
        // 0x402468
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402417
        int64_t v27; // 0x40249c
        while (true) {
          lab_0x402468:
            // 0x402468
            v5 = v26;
            bool v28 = v15 == v5; // 0x402473
            if (v15 == -1) {
                // 0x402475
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402483
            if (v28) {
                // break (via goto) -> 0x402be8
                goto lab_0x402be8;
            }
            // 0x40248c
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
                    // 0x402a7b
                    if (v25 % 2 == 0) {
                        goto lab_0x4025c1;
                    }
                    // 0x402e9d
                    v26 = v5 + 1;
                    goto lab_0x402468;
                }
                case 7: {
                    goto lab_0x4025c1;
                }
                case 8: {
                    goto lab_0x4025c1;
                }
                case 9: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4025c1;
                }
                case 12: {
                    goto lab_0x4025c1;
                }
                case 13: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40258d;
                }
                case 36: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4025c1;
                }
                case 38: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4025c1;
                }
                case 44: {
                    goto lab_0x4025c1;
                }
                case 45: {
                    goto lab_0x4025c1;
                }
                case 46: {
                    goto lab_0x4025c1;
                }
                case 47: {
                    goto lab_0x4025c1;
                }
                case 48: {
                    goto lab_0x4025c1;
                }
                case 49: {
                    goto lab_0x4025c1;
                }
                case 50: {
                    goto lab_0x4025c1;
                }
                case 51: {
                    goto lab_0x4025c1;
                }
                case 52: {
                    goto lab_0x4025c1;
                }
                case 53: {
                    goto lab_0x4025c1;
                }
                case 54: {
                    goto lab_0x4025c1;
                }
                case 55: {
                    goto lab_0x4025c1;
                }
                case 56: {
                    goto lab_0x4025c1;
                }
                case 57: {
                    goto lab_0x4025c1;
                }
                case 58: {
                    goto lab_0x4025c1;
                }
                case 59: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4025c1;
                }
                case 66: {
                    goto lab_0x4025c1;
                }
                case 67: {
                    goto lab_0x4025c1;
                }
                case 68: {
                    goto lab_0x4025c1;
                }
                case 69: {
                    goto lab_0x4025c1;
                }
                case 70: {
                    goto lab_0x4025c1;
                }
                case 71: {
                    goto lab_0x4025c1;
                }
                case 72: {
                    goto lab_0x4025c1;
                }
                case 73: {
                    goto lab_0x4025c1;
                }
                case 74: {
                    goto lab_0x4025c1;
                }
                case 75: {
                    goto lab_0x4025c1;
                }
                case 76: {
                    goto lab_0x4025c1;
                }
                case 77: {
                    goto lab_0x4025c1;
                }
                case 78: {
                    goto lab_0x4025c1;
                }
                case 79: {
                    goto lab_0x4025c1;
                }
                case 80: {
                    goto lab_0x4025c1;
                }
                case 81: {
                    goto lab_0x4025c1;
                }
                case 82: {
                    goto lab_0x4025c1;
                }
                case 83: {
                    goto lab_0x4025c1;
                }
                case 84: {
                    goto lab_0x4025c1;
                }
                case 85: {
                    goto lab_0x4025c1;
                }
                case 86: {
                    goto lab_0x4025c1;
                }
                case 87: {
                    goto lab_0x4025c1;
                }
                case 88: {
                    goto lab_0x4025c1;
                }
                case 89: {
                    goto lab_0x4025c1;
                }
                case 90: {
                    goto lab_0x4025c1;
                }
                case 91: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4025c1;
                }
                case 94: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4025c1;
                }
                case 96: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4025c1;
                }
                case 98: {
                    goto lab_0x4025c1;
                }
                case 99: {
                    goto lab_0x4025c1;
                }
                case 100: {
                    goto lab_0x4025c1;
                }
                case 101: {
                    goto lab_0x4025c1;
                }
                case 102: {
                    goto lab_0x4025c1;
                }
                case 103: {
                    goto lab_0x4025c1;
                }
                case 104: {
                    goto lab_0x4025c1;
                }
                case 105: {
                    goto lab_0x4025c1;
                }
                case 106: {
                    goto lab_0x4025c1;
                }
                case 107: {
                    goto lab_0x4025c1;
                }
                case 108: {
                    goto lab_0x4025c1;
                }
                case 109: {
                    goto lab_0x4025c1;
                }
                case 110: {
                    goto lab_0x4025c1;
                }
                case 111: {
                    goto lab_0x4025c1;
                }
                case 112: {
                    goto lab_0x4025c1;
                }
                case 113: {
                    goto lab_0x4025c1;
                }
                case 114: {
                    goto lab_0x4025c1;
                }
                case 115: {
                    goto lab_0x4025c1;
                }
                case 116: {
                    goto lab_0x4025c1;
                }
                case 117: {
                    goto lab_0x4025c1;
                }
                case 118: {
                    goto lab_0x4025c1;
                }
                case 119: {
                    goto lab_0x4025c1;
                }
                case 120: {
                    goto lab_0x4025c1;
                }
                case 121: {
                    goto lab_0x4025c1;
                }
                case 122: {
                    goto lab_0x4025c1;
                }
                case 123: {
                    goto lab_0x402565;
                }
                case 124: {
                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402565;
                }
                case 126: {
                    goto lab_0x40258d;
                }
                default: {
                    goto lab_0x402965;
                }
            }
        }
      lab_0x402965:
        if (v23 != 1) {
            // 0x402cd0
            ps = 0;
            int64_t len = v15; // 0x402ce0
            if (v15 == -1) {
                // 0x402ce2
                len = strlen((char *)str);
            }
            // 0x402d0e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402d6f:
                // 0x402d6f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402d74
                int64_t v30 = v29 + str;
                v24 = function_405460(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4032ea_2;
                    }
                    case -1: {
                        goto lab_0x4032ea_2;
                    }
                    case -2: {
                        // 0x4033cd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403407
                            v19 = v18;
                            int64_t v31 = v18; // 0x40340a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403417
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403410
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4032ea
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4032ea_2;
                    }
                    case 1: {
                        goto lab_0x402d40;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402dec
                        char v34 = *(char *)v33; // 0x402dfd
                        unsigned char v35; // 0x402417
                        if (v34 < 125) {
                            // 0x402e08
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402e1f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402df0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402dfd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402e08
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402e1f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402df0
                            v33++;
                        }
                        goto lab_0x402d40;
                    }
                }
            }
            goto lab_0x4032ea_2;
        } else {
            // 0x4029b4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4025c1;
        }
    }
  lab_0x402be8:
    // 0x402be8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4034ea
        if (v8 > result) {
            // 0x4034f3
            *(char *)(v12 + result) = 0;
        }
        // 0x402817
        return result;
    }
    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4025c1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4025d0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4027da_2;
        }
    }
    int64_t v39 = result; // 0x4026d1
    char v40 = v20; // 0x4026d1
    int64_t v41 = v38; // 0x4026d1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4026d1
    int64_t v43 = v36; // 0x4026d1
    goto lab_0x40264d;
  lab_0x4027da_2:
    // 0x402817
    return function_4023c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4032ea_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4025c1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402ebe
        int64_t v50 = v5 + 1; // 0x402fa1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402fa8
        char v52 = v20; // 0x402fa8
        int64_t v53 = result; // 0x402fa8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402f71
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402f75
            int64_t v56 = v54 + 1; // 0x402f7a
            int64_t v57 = v51 + 1; // 0x402fa1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402f6c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402f71
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402f75
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
        goto lab_0x40264d;
    }
  lab_0x402d40:
    // 0x402d40
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402d5f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402d62
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4032ea
        goto lab_0x4032ea_2;
    }
    goto lab_0x402d6f;
  lab_0x40258d:
    // 0x40258d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4027da_2;
    }
    goto lab_0x4025c1;
  lab_0x402565:;
    bool v60 = v15 == 1; // 0x402570
    if (v15 == -1) {
        // 0x402572
        v60 = *(char *)v1 == 0;
    }
    // 0x40257e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4025c1;
    } else {
        goto lab_0x40258d;
    }
  lab_0x40264d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402652
        *(char *)(v44 + v45) = v40;
    }
    // 0x402656
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402468_2;
}
// Address range: 0x4035f0 - 0x40378e
int64_t function_4035f0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4035f2
    int32_t * v3 = __errno_location(); // 0x40360c
    int64_t v4 = (int64_t)g20; // 0x403611
    int32_t v5 = *v3; // 0x40361b
    int64_t v6 = v4; // 0x403631
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403789
            function_404650(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403640
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403647
        int64_t v9; // 0x4035f0
        if (g20 == &g21) {
            int64_t v10 = function_404460(0, v8); // 0x40376a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40376f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404460(v4, v8); // 0x40365b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40366a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40366a
        int32_t v14 = v7; // 0x403671
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4036a1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4036ab
    int64_t * v17 = (int64_t *)v15; // 0x4036ae
    uint64_t v18 = *v17; // 0x4036ae
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4036b1
    int64_t result = *v19; // 0x4036b1
    int64_t v20; // 0x4035f0
    uint64_t v21 = function_4023c0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4036d4
    if (v18 > v21) {
        // 0x40374b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4036e7
    *v17 = v22;
    if (result != (int64_t)&g40) {
        // 0x4036f7
        free((int64_t *)result);
    }
    int64_t result2 = function_404400(v22); // 0x403711
    *v19 = result2;
    int64_t v23; // 0x4035f0
    function_4023c0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40374b
    *v3 = v5;
    return result2;
}
// Address range: 0x403790 - 0x4037c4
int64_t function_403790(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403797
    int64_t result = function_404600(a1 == 0 ? (int64_t)&g41 : a1, 56); // 0x4037b6
    return result;
}
// Address range: 0x4037d0 - 0x4037df
int64_t function_4037d0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g41 : a1); // 0x4037dc
    return result;
}
// Address range: 0x4037e0 - 0x4037ef
int64_t function_4037e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x4037e8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g41;
}
// Address range: 0x4037f0 - 0x403823
int64_t function_4037f0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 + 8 : a1 + 8; // 0x403809
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40380e
    uint32_t v3 = *v2; // 0x40380e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403812
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403830 - 0x403843
int64_t function_403830(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g41 + 4 : a1 + 4); // 0x40383c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403850 - 0x40387b
int64_t function_403850(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x403858
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403875
        abort();
        // UNREACHABLE
    }
    // 0x40386c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g41;
}
// Address range: 0x403880 - 0x4038f2
int64_t function_403880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g41 : a5; // 0x4038a2
    int32_t * v2 = __errno_location(); // 0x4038ab
    uint32_t v3 = *(int32_t *)v1; // 0x4038cb
    int64_t result = function_4023c0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4038da
    return result;
}
// Address range: 0x403900 - 0x4039e1
int64_t function_403900(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g41 : a4; // 0x403922
    int32_t * v2 = __errno_location(); // 0x403928
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403947
    int32_t * v4 = (int32_t *)v1; // 0x40394a
    int64_t v5 = function_4023c0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403965
    int64_t v6 = v5 + 1; // 0x40396a
    int64_t result = function_404400(v6); // 0x40397f
    function_4023c0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4039c4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4039cd
    return result;
}
// Address range: 0x4039f0 - 0x4039fa
int64_t function_4039f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4039f0
    return function_403900(a1, a2, 0, a3);
}
// Address range: 0x403a00 - 0x403a95
int64_t function_403a00(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403a00
    int64_t v2 = v1; // 0x403a00
    int64_t v3 = v2; // 0x403a14
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403a33
        free((int64_t *)*(int64_t *)v4);
        v3 = &g54;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403a30
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g54;
        }
    }
    int64_t v6 = v3; // 0x403a4d
    if (g21 != 0x60c2c0) {
        // 0x403a4f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g40;
        v6 = &g54;
    }
    int64_t result = v6; // 0x403a71
    if (g20 != &g21) {
        // 0x403a73
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g54;
    }
    // 0x403a86
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403aa0 - 0x403ab1
int64_t function_403aa0(void) {
    // 0x403aa0
    int64_t v1; // 0x403aa0
    return function_4035f0(v1, v1, -1, (int64_t *)&g41);
}
// Address range: 0x403ac0 - 0x403aca
int64_t function_403ac0(void) {
    // 0x403ac0
    int64_t v1; // 0x403ac0
    return function_4035f0(v1, v1, v1, (int64_t *)&g41);
}
// Address range: 0x403ad0 - 0x403ae6
int64_t function_403ad0(int64_t a1) {
    // 0x403ad0
    return function_4035f0(0, a1, -1, (int64_t *)&g41);
}
// Address range: 0x403af0 - 0x403b02
int64_t function_403af0(int64_t a1, int64_t a2) {
    // 0x403af0
    return function_4035f0(0, a1, a2, (int64_t *)&g41);
}
// Address range: 0x403b10 - 0x403b78
int64_t function_403b10(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403b20
    return function_4035f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403b80 - 0x403be4
int64_t function_403b80(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403b90
    return function_4035f0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403bf0 - 0x403bfc
int64_t function_403bf0(int64_t a1, int64_t a2) {
    // 0x403bf0
    return function_403b10(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403c00 - 0x403c0f
int64_t function_403c00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403c00
    return function_403b80(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403c10 - 0x403c80
int64_t function_403c10(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x403c1d
    int128_t v2 = __asm_movdqa(g42); // 0x403c25
    int128_t v3 = __asm_movdqa(g43); // 0x403c2d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403c42
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403c58
    uint32_t v6 = *v5; // 0x403c58
    uint32_t v7 = (int32_t)a3 % 32; // 0x403c5d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4035f0(0, a1, a2, &v4);
}
// Address range: 0x403c80 - 0x403c8d
int64_t function_403c80(int64_t a1, int64_t a2) {
    // 0x403c80
    return function_403c10(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403c90 - 0x403ca1
int64_t function_403c90(int64_t a1) {
    // 0x403c90
    return function_403c10(a1, -1, 58);
}
// Address range: 0x403cb0 - 0x403cba
int64_t function_403cb0(void) {
    // 0x403cb0
    int64_t v1; // 0x403cb0
    return function_403c10(v1, v1, 58);
}
// Address range: 0x403cc0 - 0x403d2e
int64_t function_403cc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403cda
    return function_4035f0(a1, a3, -1, &v1);
}
// Address range: 0x403d30 - 0x403d9c
int64_t function_403d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x403d37
    int128_t v2 = __asm_movdqa(g42); // 0x403d3f
    int128_t v3 = __asm_movdqa(g43); // 0x403d47
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403d69
    if (a2 == 0 || a3 == 0) {
        // 0x403d97
        abort();
        // UNREACHABLE
    }
    // 0x403d7a
    return function_4035f0(a1, a4, a5, &v4);
}
// Address range: 0x403da0 - 0x403da9
int64_t function_403da0(void) {
    // 0x403da0
    int64_t v1; // 0x403da0
    return function_403d30(v1, v1, v1, v1, -1);
}
// Address range: 0x403db0 - 0x403dc7
int64_t function_403db0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403db0
    return function_403d30(0, a1, a2, a3, -1);
}
// Address range: 0x403dd0 - 0x403de3
int64_t function_403dd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403dd0
    return function_403d30(0, a1, a2, a3, a4);
}
// Address range: 0x403df0 - 0x403dfa
int64_t function_403df0(void) {
    // 0x403df0
    int64_t v1; // 0x403df0
    return function_4035f0(v1, v1, v1, &g19);
}
// Address range: 0x403e00 - 0x403e12
int64_t function_403e00(int64_t a1, int64_t a2) {
    // 0x403e00
    return function_4035f0(0, a1, a2, &g19);
}
// Address range: 0x403e20 - 0x403e31
int64_t function_403e20(void) {
    // 0x403e20
    int64_t v1; // 0x403e20
    return function_4035f0(v1, v1, -1, &g19);
}
// Address range: 0x403e40 - 0x403e56
int64_t function_403e40(int64_t a1) {
    // 0x403e40
    return function_4035f0(0, a1, -1, &g19);
}
// Address range: 0x403e60 - 0x40423d
int64_t function_403e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403ef8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403e7c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403e96
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403edb
    if (a6 < 10) {
        // 0x403eea
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403fe2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404240 - 0x404260
int64_t function_404240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404240
    if (a5 == 0) {
        // 0x40425b
        return function_403e60(a1, a2, a3, a4, a5, 0, (int64_t)&g54);
    }
    int64_t v1 = 0; // 0x404247
    v1++;
    int64_t v2 = v1; // 0x404259
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404250
        v1++;
        v2 = v1;
    }
    // 0x40425b
    return function_403e60(a1, a2, a3, a4, a5, v2, (int64_t)&g54);
}
// Address range: 0x404260 - 0x4042c0
int64_t function_404260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404260
    int64_t v3 = &v2; // 0x404260
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404293
    int64_t v6; // 0x40427d
    int64_t * v7; // 0x40429b
    int64_t v8; // 0x40429b
    int64_t v9; // 0x4042a7
    if (v5 < 48) {
        // 0x404270
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4042b3
            break;
        }
    } else {
        // 0x40429b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4042b3
            break;
        }
    }
    int64_t v10 = 10; // 0x404291
    while (v4 != 9) {
        // 0x404289
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404270
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4042b3
                break;
            }
        } else {
            // 0x40429b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4042b3
                break;
            }
        }
        // 0x404289
        v10 = 10;
    }
    // 0x4042b3
    return function_403e60(a1, a2, a3, a4, v3, v10, (int64_t)&g54);
}
// Address range: 0x4042c0 - 0x40437c
int64_t function_4042c0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4042c0
    int64_t v1; // bp-168, 0x4042c0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4042c0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4042c0
    int64_t v8; // 0x4042c0
    int64_t v9; // bp-56, 0x4042c0
    int64_t v10; // 0x404325
    int64_t v11; // 0x404349
    if ((int32_t)v6 < 48) {
        // 0x404310
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404360
            break;
        }
    } else {
        // 0x404342
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404360
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40433a
    int64_t v13 = 10; // 0x40433a
    while (v5 != 9) {
        // 0x40433c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404310
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404360
                break;
            }
        } else {
            // 0x404342
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404360
                break;
            }
        }
        // 0x404332
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404360
    int64_t v14; // bp-136, 0x4042c0
    int64_t result = function_403e60(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g54); // 0x40436f
    return result;
}
// Address range: 0x404380 - 0x4043f4
int64_t function_404380(int64_t a1) {
    // 0x404380
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4043e3
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404400 - 0x40441a
int64_t function_404400(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404404
    if (size != 0 != (mem == NULL)) {
        // 0x404413
        return (int64_t)mem;
    }
    // 0x404415
    function_404650(size);
    // UNREACHABLE
}
// Address range: 0x404420 - 0x404441
int64_t function_404420(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404423
    int64_t v2 = v1; // 0x404423
    if (v2 < 0) {
        // 0x40443b
        function_404650(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404439
        return function_404400(v2);
    }
    // 0x40443b
    function_404650(v2);
    // UNREACHABLE
}
// Address range: 0x404450 - 0x404452
int64_t function_404450(void) {
    // 0x404450
    int64_t v1; // 0x404450
    return function_404400(v1);
}
// Address range: 0x404460 - 0x404496
int64_t function_404460(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404488
        free(v1);
        return (int32_t)&g54 ^ (int32_t)&g54;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404471
    if (a2 != 0 != (mem == NULL)) {
        // 0x404480
        return (int64_t)mem;
    }
    // 0x404491
    function_404650(a1);
    // UNREACHABLE
}
// Address range: 0x4044a0 - 0x4044c1
int64_t function_4044a0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4044a3
    int64_t v2 = v1; // 0x4044a3
    if (v2 < 0) {
        // 0x4044bb
        function_404650(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4044b9
        return function_404460(a1, v2);
    }
    // 0x4044bb
    function_404650(a1);
    // UNREACHABLE
}
// Address range: 0x4044d0 - 0x404556
int64_t function_4044d0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40452b
            function_404650(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404460(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404513
    if (a2 == 0) {
        // 0x404538
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404518
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40452b
        function_404650(a1);
        // UNREACHABLE
    }
    // 0x4044fa
    *(int64_t *)a2 = v2;
    return function_404460(a1, v2 * a3);
}
// Address range: 0x404560 - 0x4045b0
int64_t function_404560(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404560
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4045aa
            function_404650(a1);
            // UNREACHABLE
        }
        // 0x404582
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404460(a1, v1);
    }
    if (a2 == 0) {
        // 0x404595
        *(int64_t *)a2 = 128;
        return function_404460(0, 128);
    }
    // 0x4045a8
    if (a2 < 0) {
        // 0x4045aa
        function_404650(a1);
        // UNREACHABLE
    }
    // 0x404582
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404460(a1, v1);
}
// Address range: 0x4045b0 - 0x4045c7
int64_t function_4045b0(int64_t a1, int64_t a2) {
    // 0x4045b0
    return (int64_t)memset((int64_t *)function_404400(a1), 0, (int32_t)a1);
}
// Address range: 0x4045d0 - 0x4045fe
int64_t function_4045d0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4045d7
    if ((int64_t)v1 < 0) {
        // 0x4045f9
        function_404650(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4045f9
        function_404650(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4045ea
    if (mem != NULL) {
        // 0x4045f4
        return (int64_t)mem;
    }
    // 0x4045f9
    function_404650(nmemb);
    // UNREACHABLE
}
// Address range: 0x404600 - 0x404628
int64_t function_404600(int64_t a1, int64_t a2) {
    int64_t v1 = function_404400(a2); // 0x40460f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404630 - 0x404643
int64_t function_404630(int64_t str) {
    // 0x404630
    return function_404600(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404650 - 0x404681
int64_t function_404650(int64_t a1) {
    // 0x404650
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404690 - 0x40476f
int64_t function_404690(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40469c
    uint32_t v2 = *v1; // 0x40469c
    int64_t v3 = a2 & 0xffffffff; // 0x4046a1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4046a4
    uint64_t v5 = (int64_t)*v4; // 0x4046a4
    int64_t v6; // 0x404712
    if (v3 <= v5) {
      lab_0x40470c_2:
        // 0x40470c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404692
    int64_t v8 = v2; // 0x404690
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40470c
        goto lab_0x40470c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4046c8
    int64_t v17; // 0x4046d6
    int64_t * v18; // 0x4046f0
    int64_t * v19; // 0x4046f3
    int64_t v20; // 0x4046fe
    int64_t v21; // 0x4046d6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4046d3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4046f0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404707
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40470c
            goto lab_0x40470c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40470c
            goto lab_0x40470c_2;
        }
        // 0x4046c2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40474b
    int64_t * v23 = (int64_t *)v22; // 0x404750
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404753
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404750
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404767
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4046bd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40470c
            goto lab_0x40470c_2;
        }
        // 0x4046c2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4046d3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4046f0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404707
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40470c
                goto lab_0x40470c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40470c
                goto lab_0x40470c_2;
            }
            // 0x4046c2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404730
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404750
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404767
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40470c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404770 - 0x404d8c
int64_t function_404770(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40478f
    int64_t v2 = *v1; // 0x40478f
    char * str2 = (char *)v2; // 0x40479c
    char c = *str2; // 0x40479c
    int64_t v3 = v2; // 0x4047c8
    int64_t v4 = 0; // 0x404770
    int32_t v5; // 0x404770
    int64_t v6; // 0x404770
    int64_t v7; // 0x404770
    int64_t v8; // 0x404770
    int64_t v9; // 0x404770
    int64_t v10; // 0x404770
    int64_t v11; // 0x404770
    int64_t v12; // 0x404770
    int64_t v13; // 0x404770
    int64_t str3; // 0x404770
    int64_t v14; // 0x404770
    int64_t v15; // 0x404770
    int64_t v16; // 0x404770
    int64_t v17; // 0x404770
    int32_t v18; // 0x404770
    int32_t v19; // 0x404770
    int32_t v20; // 0x404770
    int32_t v21; // 0x404770
    int32_t v22; // 0x404770
    int32_t v23; // 0x404770
    int32_t v24; // 0x404770
    int32_t v25; // 0x404770
    int32_t v26; // 0x404770
    int32_t v27; // 0x404770
    int32_t v28; // 0x404770
    int32_t v29; // 0x404770
    int64_t nmemb; // 0x404770
    int64_t v30; // 0x404770
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4047cc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4047c8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4047d8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4047de
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4047a8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40480c
                int64_t v34; // 0x404770
                int64_t v35; // 0x404770
                if (strncmp(str, str2, n) == 0) {
                    // 0x404815
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404990;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404826
                int64_t v37 = *(int64_t *)v36; // 0x40482a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404800
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404815
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404990;
                        }
                    }
                    // 0x404826
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
                  lab_0x404876:
                    // 0x404876
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
                        goto lab_0x4048d0;
                    } else {
                        if (v11 == 0) {
                            // 0x404a40
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4048d0;
                        } else {
                            if (v39 == 0) {
                                // 0x4049f0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40489a;
                                } else {
                                    // 0x4049fc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40489a;
                                    } else {
                                        // 0x404a0a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40489a;
                                        } else {
                                            goto lab_0x4048d0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40489a;
                            }
                        }
                    }
                }
              lab_0x4048e1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404ab6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404c62
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404c82
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404ccf
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404ce9
                            int64_t v45; // 0x404ceb
                            if (*(char *)v42 != 0) {
                                // 0x404ceb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404ce3
                            while (v17 + nmemb != v42) {
                                // 0x404ce5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404ceb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404cd8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404d10
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x404ac4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404c1f
                        free((int64_t *)v17);
                    }
                    // 0x404b19
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404b30
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4049de
                    return 63;
                }
                // 0x404900
                v5 = v39;
                if (v13 != 0) {
                    // 0x404984
                    v35 = v13;
                    v34 = v25;
                  lab_0x404990:;
                    int32_t * v49 = (int32_t *)a7; // 0x4049a0
                    uint32_t v50 = *v49; // 0x4049a0
                    int64_t v51 = v50; // 0x4049a0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4049aa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4049b3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404bdf
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404b8a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4049de
                            return 63;
                        }
                        // 0x404a28
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404d3f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404c3d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404c50
                                // 0x4049de
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404b4e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404b62
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4049cb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4049ce
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4049d2
                    int64_t result = v59; // 0x4049d8
                    if (v58 != 0) {
                        // 0x4049da
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4049de
                    return result;
                }
            } else {
                // 0x4047de
                v5 = v32;
            }
            // break -> 0x404905
            break;
        }
    }
    // 0x404905
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40491d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404927
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4049de
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404a69
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404956
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404966
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4048d0:
    // 0x4048d0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4048d0
    int64_t v63 = *(int64_t *)v62; // 0x4048d4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4048e1
        goto lab_0x4048e1;
    }
    goto lab_0x404876;
  lab_0x40489a:
    // 0x40489a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404770
    int32_t v65; // 0x404770
    int32_t v66; // 0x404770
    if (v27 != 0) {
        goto lab_0x4048d0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404a50
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4048d0;
            } else {
                goto lab_0x4048c1;
            }
        } else {
            // 0x4048b5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404bac
                int64_t v67 = (int64_t)mem; // 0x404bac
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4048d0;
                } else {
                    // 0x404bbf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4048c1;
                }
            } else {
                goto lab_0x4048c1;
            }
        }
    }
  lab_0x4048c1:
    // 0x4048c1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4048d0;
}
// Address range: 0x404d90 - 0x405356
int64_t function_404d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404db1
    if (v3 < 1) {
        // 0x404f6e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404dad
    int32_t v5 = *(int32_t *)a7; // 0x404db9
    uint64_t v6 = a1 & 0xffffffff; // 0x404dbb
    int64_t v7 = v2; // 0x404dc0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404dc3
    *v8 = 0;
    int64_t v9; // 0x404d90
    int64_t v10; // 0x404d90
    int64_t v11; // 0x404d90
    int64_t v12; // 0x404d90
    int64_t str; // 0x404d90
    int64_t v13; // 0x404d90
    int64_t v14; // 0x404d90
    int64_t v15; // 0x404d90
    int64_t v16; // 0x404d90
    int64_t v17; // 0x404d90
    int32_t v18; // 0x404d90
    char v19; // 0x404d90
    if (v5 == 0) {
        // 0x404fa8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404dda;
    } else {
        // 0x404dd3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404e20
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404e23
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404ee8;
            } else {
                int64_t v22 = v7 + 1; // 0x404e36
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404e46
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404efc;
                } else {
                    goto lab_0x404e58;
                }
            }
        } else {
            goto lab_0x404dda;
        }
    }
  lab_0x404dda:
    // 0x404dda
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404de0
    *v24 = 0;
    int64_t v25; // 0x404d90
    int64_t v26; // 0x404d90
    int64_t v27; // 0x404d90
    switch (*(char *)&v2) {
        case 45: {
            // 0x404ed0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404edd;
        }
        case 43: {
            // 0x4051e0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404edd;
        }
        default: {
            // 0x404dfc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40515f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405278
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404edd;
                } else {
                    // 0x40516d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404e0a;
                }
            } else {
                goto lab_0x404e0a;
            }
        }
    }
  lab_0x404ee8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404eef
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404e58;
    } else {
        goto lab_0x404efc;
    }
  lab_0x404e0a:
    // 0x404e0a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404edd;
  lab_0x404edd:
    // 0x404edd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404ee8;
  lab_0x404e58:;
    uint32_t v30 = *(int32_t *)a7; // 0x404e58
    int64_t v31 = v30; // 0x404e58
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404e5a
    if ((int64_t)*v32 > v31) {
        // 0x404e5f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404e62
    if (*v33 > v30) {
        // 0x404e67
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404e6a
    int64_t v35 = v31; // 0x404e6e
    int64_t v36 = v15; // 0x404e6e
    int64_t v37; // 0x404d90
    int64_t v38; // 0x404d90
    int64_t v39; // 0x404d90
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404fd8
        int64_t v41 = v40; // 0x404fd8
        v2 = v41;
        int64_t v42; // 0x404d90
        if (*v33 == v40) {
            // 0x4051c0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4051c8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404fe4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404ff8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405001
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40500a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405021
            int64_t v47 = v45 & 0xffffffff; // 0x405025
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40502e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405034
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405036;
                }
            }
            int64_t v48 = v47 + 1; // 0x405010
            int64_t v49 = v48 & 0xffffffff; // 0x405010
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405021
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40502e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405034
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405036;
                    }
                }
                // 0x405010
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4051d8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405036;
    } else {
        goto lab_0x404e74;
    }
  lab_0x404efc:
    // 0x404efc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404eff
    int64_t v51 = v12; // 0x404eff
    int64_t v52 = v14; // 0x404eff
    if (*(char *)v10 == 0) {
        goto lab_0x404e58;
    } else {
        goto lab_0x404f05;
    }
  lab_0x404e74:;
    int32_t v53 = v35; // 0x404e74
    int64_t v54; // 0x404d90
    int64_t v55; // 0x404d90
    int64_t v56; // 0x404d90
    int64_t v57; // 0x404d90
    int64_t v58; // 0x404d90
    int64_t v59; // 0x404d90
    char * v60; // 0x404d90
    int64_t v61; // 0x404d90
    int64_t v62; // 0x404e89
    int64_t v63; // 0x404d90
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404fc3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404fc6;
    } else {
        // 0x404e7c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404d90
        int64_t v66 = v65 ? -1 : 1; // 0x404e90
        int64_t v67 = (int64_t)"--"; // 0x404d90
        int64_t v68 = v62; // 0x404d90
        int64_t v69 = 3; // 0x404e90
        unsigned char v70 = *(char *)v68; // 0x404e90
        char v71 = *(char *)v67; // 0x404e90
        char v72 = v71; // 0x404e90
        bool v73 = false; // 0x404e90
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
            // 0x404f80
            if (*(char *)v62 == 45) {
                // 0x405040
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405040
                if (c == 0) {
                    goto lab_0x404f8a;
                } else {
                    // 0x40504d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4050d0;
                    } else {
                        if (c == 45) {
                            // 0x4052b3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405125;
                        } else {
                            // 0x40505e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4050d0;
                            } else {
                                // 0x405063
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405084;
                                } else {
                                    // 0x40506a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4050d0;
                                    } else {
                                        goto lab_0x405084;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404f8a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404ea0
            v2 = v75;
            int32_t v76 = *v32; // 0x404ea3
            int64_t v77 = v35 + 1; // 0x404ea6
            int32_t v78 = v77; // 0x404ea9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405210
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404eb7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404ec5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404fc6;
        }
    }
  lab_0x404f05:;
    // 0x404f05
    int64_t v79; // bp-104, 0x404d90
    int64_t v80 = &v79; // 0x404d9a
    int64_t v81 = v50 + 1; // 0x404f05
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404f0c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404f11
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404f15
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404f19
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404f21
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404f26
    int32_t c2 = v84; // 0x404f26
    char * found_char_pos = strchr(str2, c2); // 0x404f26
    int64_t v87 = *v82; // 0x404f2b
    v2 = v87;
    int64_t v88 = *v85; // 0x404f35
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404f40
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405230
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4051fd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404f6e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404f26
    char v91 = *(char *)(v90 + 1); // 0x404f5b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404f15
        if (v91 != 58) {
            // 0x404f6e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405184
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405288
                *v8 = 0;
            } else {
                // 0x40526c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4051ae
            *v83 = 0;
            // 0x404f6e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40518e
        if (v93 != 0) {
            // 0x405220
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4051ae
            *v83 = 0;
            // 0x404f6e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4051a1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4051ae
            *v83 = 0;
            // 0x404f6e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4052ea
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40529a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4052a1
        // 0x4051ae
        *v83 = 0;
        // 0x404f6e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4050f9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4050fb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405320
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4052d1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4052d8
            // 0x404f6e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405106
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40510a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405125;
  lab_0x405036:
    // 0x405036
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404e74;
  lab_0x405125:;
    int64_t v99 = function_404770(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405143
    // 0x404f6e
    return v99 & 0xffffffff;
  lab_0x404fc6:;
    int32_t v100 = v55; // 0x404fc6
    if (v100 != (int32_t)v59) {
        // 0x404fca
        *(int32_t *)a7 = v100;
    }
    // 0x404f6e
    return 0xffffffff;
  lab_0x404f8a:
    // 0x404f8a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404f91
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404f6e
    return v99 & 0xffffffff;
  lab_0x4050d0:
    // 0x4050d0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404f05;
  lab_0x405084:
    // 0x405084
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404770(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x4050aa
    if ((int32_t)v101 != -1) {
        // 0x404f6e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4050bf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4050d0;
}
// Address range: 0x405360 - 0x4053b6
int64_t function_405360(int64_t a1) {
    // 0x405360
    *(int32_t *)&g44 = g26;
    *(int32_t *)&g45 = g25;
    int64_t v1; // 0x405360
    int64_t result = function_404d90(v1, v1, v1, v1, v1, v1, &g44, a1 & 0xffffffff); // 0x405386
    g26 = *(int32_t *)&g44;
    g49 = g47;
    *(int32_t *)&g24 = g46;
    return result;
}
// Address range: 0x4053c0 - 0x4053d8
int64_t function_4053c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4053c0
    return function_405360(1);
}
// Address range: 0x4053e0 - 0x4053f3
int64_t function_4053e0(int64_t a1, int64_t a2, char * a3, char (**a4)[25], int32_t a5, int64_t a6) {
    // 0x4053e0
    return function_405360(0);
}
// Address range: 0x405400 - 0x405415
int64_t function_405400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405400
    return function_404d90(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405420 - 0x405436
int64_t function_405420(void) {
    // 0x405420
    return function_405360(0);
}
// Address range: 0x405440 - 0x405458
int64_t function_405440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405440
    return function_404d90(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405460 - 0x4054da
int64_t function_405460(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40546b
    int64_t v2 = (int64_t)&g10; // 0x40546b
    int32_t * pwc; // 0x405460
    int64_t v3; // 0x405460
    int64_t n; // 0x405460
    if (a2 == 0) {
        goto lab_0x4054b2;
    } else {
        // 0x40546d
        if (a3 == 0) {
            // 0x405498
            return -2;
        }
        // 0x405479
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4054b2;
        } else {
            goto lab_0x405484;
        }
    }
  lab_0x4054b2:
    // 0x4054b2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405460
    pwc = (int32_t *)&v4;
    goto lab_0x405484;
  lab_0x405484:;
    char * wstr = (char *)v3; // 0x40548a
    int64_t ps; // 0x405460
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40548a
    int64_t result = v5; // 0x40548a
    if (v5 < 0xfffffffe) {
        // 0x405498
        return result;
    }
    int64_t result2 = result; // 0x4054c9
    if ((char)function_405690(0, v3) == 0) {
        // 0x4054cb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405498
    return result2;
}
// Address range: 0x4054e0 - 0x40559d
int64_t function_4054e0(int64_t stream, int64_t a2, int64_t * a3) {
    int32_t v1 = 2000; // bp-2048, 0x405500
    int64_t v2; // bp-2040, 0x4054e0
    int64_t v3; // 0x4054e0
    int64_t v4 = function_405d90(&v2, (int64_t *)&v1, a2, (int64_t)a3, v3, v3, 2000, (int64_t)&g54); // 0x40550c
    if (v4 == 0) {
        // 0x40558e
        function_405d80(stream);
        // 0x40554c
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x405511
    int64_t * data = (int64_t *)v4; // 0x40552c
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x405560
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x40556a
            free(data);
        }
        // 0x40554c
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x40553b
        free(data);
    }
    // 0x405543
    if (nmemb > -1) {
        // 0x40554c
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x405583
    *__errno_location() = 75;
    // 0x40558e
    function_405d80(stream);
    // 0x40554c
    return 0xffffffff;
}
// Address range: 0x4055a0 - 0x4055fd
int64_t function_4055a0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4055a7
    int64_t v2; // 0x4055a0
    int64_t result = function_405c60(a1, v2); // 0x4055b8
    if ((v2 & 32) != 0) {
        // 0x4055e0
        if ((int32_t)result == 0) {
            // 0x4055e4
            *__errno_location() = 0;
        }
        // 0x4055da
        return 0xffffffff;
    }
    // 0x4055c1
    if ((int32_t)result == 0) {
        // 0x4055da
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4055c8
    if (v1 == 0) {
        // 0x4055ca
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4055da
    return result2;
}
// Address range: 0x405600 - 0x40565b
int64_t function_405600(int64_t a1, int64_t a2) {
    // 0x405600
    int64_t v1; // 0x405600
    char v2 = v1;
    int64_t v3 = a1; // 0x405609
    int64_t v4 = a1; // 0x405609
    char v5 = v2; // 0x405609
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x405614
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x405610
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40561e
    if (v5 == 0) {
      lab_0x40565a:
        // 0x40565a
        return result;
    }
    int64_t v7 = v4; // 0x405648
    int64_t v8 = 0; // 0x405648
    int64_t v9; // 0x405600
    int64_t v10; // 0x40564a
    char v11; // 0x40564e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x405645
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40564a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x405645
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40563a
    char v14 = *(char *)v13; // 0x40563e
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
            // 0x405645
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40564a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x405645
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x405630
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40565a
    return result2;
}
// Address range: 0x405660 - 0x40568b
int64_t function_405660(int64_t str) {
    int32_t len = strlen((char *)str); // 0x405664
    int64_t result = len; // 0x405664
    if (len < 2) {
        // 0x40567a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x405678
    while (*(char *)(v1 + str) == 47) {
        // 0x405680
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40567a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40567a
    return result2;
}
// Address range: 0x405690 - 0x4056ee
int64_t function_405690(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405696
    if (locale == NULL) {
        // 0x4056c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405696
    bool v2; // 0x405690
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405690
    int64_t v5 = v1; // 0x405690
    int64_t v6 = 2; // 0x4056b5
    unsigned char v7 = *(char *)v5; // 0x4056b5
    char v8 = *(char *)v4; // 0x4056b5
    char v9 = v8; // 0x4056b5
    bool v10 = false; // 0x4056b5
    while (v7 == v8) {
        // 0x4056a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4056c1
    int64_t v13 = v1; // 0x4056c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4056c3
        return 0;
    }
    int64_t v14 = 6; // 0x4056c1
    unsigned char v15 = *(char *)v13; // 0x4056dd
    char v16 = *(char *)v12; // 0x4056dd
    char v17 = v16; // 0x4056dd
    bool v18 = false; // 0x4056dd
    while (v15 == v16) {
        // 0x4056d0
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
// Address range: 0x4056f0 - 0x405c52
int64_t function_4056f0(void) {
    char * v1 = nl_langinfo(14); // 0x405706
    char * v2 = g48; // 0x40570b
    char * v3; // 0x4056f0
    int64_t v4; // 0x4056f0
    int64_t v5; // 0x4056f0
    int64_t v6; // 0x4056f0
    int64_t v7; // 0x4056f0
    int32_t size; // 0x4056f0
    int32_t size2; // 0x4056f0
    int32_t len; // 0x4057c2
    int64_t v8; // 0x4057c2
    char * env_val; // 0x4057ad
    if (v2 == NULL) {
        // 0x4057a8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405815;
        } else {
            // 0x4057ba
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405815;
            } else {
                // 0x4057bf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4057ad
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405c45
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405815;
                    } else {
                        // 0x405bb9
                        size2 = len + 14;
                        goto lab_0x4057db;
                    }
                } else {
                    goto lab_0x4057db;
                }
            }
        }
    } else {
        // 0x4056f0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40572a;
    }
  lab_0x405a5c:;
    // 0x405a5c
    struct _IO_FILE * stream; // 0x40589b
    int32_t v10 = __uflow(stream); // 0x405a5f
    int64_t v11; // 0x4056f0
    int64_t v12 = v11; // 0x405a69
    int64_t v13; // 0x4056f0
    int64_t v14 = v13; // 0x405a69
    int32_t v15 = v10; // 0x405a69
    int64_t v16; // 0x4056f0
    int64_t v17 = v16; // 0x405a69
    int64_t v18 = v11; // 0x405a69
    int64_t v19 = v13; // 0x405a69
    int64_t v20 = v16; // 0x405a69
    if (v10 == -1) {
        // break -> 0x405a6f
        goto lab_0x405a6f;
    }
    goto lab_0x4058e9;
  lab_0x4058de:;
    // 0x4058de
    int64_t v90; // 0x4056f0
    int64_t * v32; // 0x4058d0
    *v32 = v90 + 1;
    int64_t v89; // 0x4056f0
    v12 = v89;
    int64_t v91; // 0x4056f0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4056f0
    v17 = v92;
    goto lab_0x4058e9;
  lab_0x4058e9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4056f0
    int32_t v25; // bp-120, 0x4056f0
    int32_t v26; // bp-184, 0x4056f0
    int64_t v27; // 0x40589b
    int64_t v28; // 0x4058b8
    int64_t v29; // 0x4058bd
    int64_t * v30; // 0x4058d4
    switch (c) {
        case 32: {
            goto lab_0x4058d0;
        }
        case 10: {
            goto lab_0x4058d0;
        }
        case 9: {
            goto lab_0x4058d0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405ac1
            int32_t v33; // 0x4056f0
            char v34; // 0x4056f0
            int32_t v35; // 0x405ace
            if (v31 < *v30) {
                // 0x405aa0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x405acb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405ac1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405aa0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x405acb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405ab0
                v36 = v33;
            }
            // 0x405b9f
            if (v36 == -1) {
                // break -> 0x405a6f
                break;
            }
            goto lab_0x4058d0;
        }
        default: {
            // 0x4058ff
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x405a6f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405928
            int64_t v39 = v37 + 4; // 0x40592a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405936
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405938
            while (v41 == 0) {
                // 0x405928
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405956
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405962
            int64_t v45 = v43 + 4; // 0x405964
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405970
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405972
            while (v47 == 0) {
                // 0x405962
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40595f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405988
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405998
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40599c
            int64_t v52 = v51 + v48; // 0x4059a5
            int64_t * mem; // 0x4056f0
            int64_t v53; // 0x4056f0
            int64_t v54; // 0x4056f0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x405adb
                int64_t v56 = v55 + 3; // 0x405ae7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4059c1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4059d0
            if (mem == NULL) {
                // 0x405bfc
                free((int64_t *)v21);
                function_405c60(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x405874;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4059e8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4059f2
            uint32_t v62 = (int32_t)v59; // 0x4059f5
            int64_t v63; // 0x4056f0
            if (v62 >= 8) {
                // 0x405b04
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405b1e
                int64_t v66 = v61 - v65; // 0x405b22
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405b2d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405b3e
                    int64_t v70 = v69 & 0xffffffff; // 0x405b3e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405b3b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405bcf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405a07
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x405a0b
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
            int64_t v73 = v51 + 1; // 0x405a1b
            int64_t v74 = v60 - 1; // 0x405a1f
            uint32_t v75 = (int32_t)v73; // 0x405a24
            int64_t v76; // 0x4056f0
            if (v75 >= 8) {
                // 0x405b52
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405b5c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405b6c
                int64_t v80 = v74 - v79; // 0x405b70
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405b7b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405b8b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405b89
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405be6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405bee
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405a36
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x405a3a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405c33
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x405a4e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4058de;
            } else {
                goto lab_0x405a5c;
            }
        }
    }
  lab_0x4058d0:;
    int64_t v93 = v23; // 0x4056f0
    int64_t v94 = v22; // 0x4056f0
    int64_t v95 = v21; // 0x4056f0
    goto lab_0x4058d0_2;
  lab_0x405815:;
    int64_t * mem3 = malloc(size); // 0x405815
    int64_t v97 = (int64_t)&g10; // 0x405820
    int64_t v98; // 0x4056f0
    int64_t path; // 0x4056f0
    if (mem3 == NULL) {
        goto lab_0x4057f2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405815
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405836;
    }
  lab_0x40572a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40571d
    char v100 = *v3; // 0x40572a
    int64_t v101; // 0x4056f0
    if (v100 == 0) {
        // 0x405784
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4056f0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4056f0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405770
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405777;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405740
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40574d
        char v107 = *(char *)v106; // 0x405752
        v102 = v107;
        if (v107 == 0) {
            // 0x405784
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40575b
    v104 = v103 + 1;
  lab_0x405777:
    // 0x405784
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4057f2:;
    char * v108 = (char *)v97;
    g48 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40572a;
  lab_0x405836:;
    int64_t v109 = v98 + path; // 0x405836
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405862
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x405891
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405bc2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4058b5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4058d0_2:;
                uint64_t v96 = *v32; // 0x4058d0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x405a5c;
                } else {
                    goto lab_0x4058de;
                }
            }
          lab_0x405a6f:
            // 0x405a6f
            function_405c60(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x405a8e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405874;
  lab_0x4057db:;
    int64_t * mem4 = malloc(size2); // 0x4057db
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405881
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405836;
    } else {
        goto lab_0x4057f2;
    }
  lab_0x405874:
    // 0x405874
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4057f2;
}
// Address range: 0x405c60 - 0x405cdb
int64_t function_405c60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405c67
    if (fileno(stream) < 0) {
        // 0x405cc7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405c7a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405cab
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405cc7
            return fclose(stream);
        }
    }
    // 0x405c7c
    if ((int32_t)function_405ce0(a1, v1) == 0) {
        // 0x405cc7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405c88
    int32_t v3 = *v2; // 0x405c90
    int64_t result = fclose(stream); // 0x405c9e
    if (v3 != 0) {
        // 0x405cd0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405ca0
    return result;
}
// Address range: 0x405ce0 - 0x405d20
int64_t function_405ce0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405cfa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405cfa
        return fflush(stream);
    }
    // 0x405d08
    function_405d20(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405d20 - 0x405d77
int64_t function_405d20(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405d20
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405d2a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405d5b
    int64_t result = -1; // 0x405d64
    if (v1 != -1) {
        // 0x405d66
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405d72
    return result;
}
// Address range: 0x405d80 - 0x405d84
int64_t function_405d80(int64_t a1) {
    // 0x405d80
    int64_t result; // 0x405d80
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x405d90 - 0x4078a9
int64_t function_405d90(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x405d90
    int64_t v1; // bp-1416, 0x405d90
    int64_t v2; // bp-1656, 0x405d90
    if ((int32_t)function_407ad0(a3, &v1, &v2) < 0) {
        // 0x406400
        return 0;
    }
    int64_t v3 = &v2; // 0x405d9b
    int64_t v4; // bp-1384, 0x405d90
    int64_t v5; // bp-1640, 0x405d90
    int64_t v6; // 0x405d90
    if ((int32_t)function_4078b0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x406ce7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x406d03
            free((int64_t *)v6);
        }
        // 0x406d08
        *__errno_location() = 22;
        // 0x406400
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x405dfb
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x405e03
    uint64_t v9 = v8 + v6; // 0x405e07
    int64_t v10; // 0x405d90
    char * v11; // 0x405d90
    int64_t v12; // 0x405d90
    if (v9 < v8) {
        // 0x4064b0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4063b9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x4064b0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x4063b9;
        } else {
            uint64_t size = v9 + 6; // 0x405e17
            if (size < 4000) {
                // 0x405f60
                v12 = 0;
                int64_t v13; // bp-1784, 0x405d90
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x405e54;
            } else {
                if (size == -1) {
                    // 0x4064b0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x4063b9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x405e38
                    if (mem == NULL) {
                        // 0x4064b0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x4063b9;
                    } else {
                        // 0x405e4d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x405e54;
                    }
                }
            }
        }
    }
  lab_0x406380_2:;
    // 0x406380
    int64_t v14; // 0x405d90
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x406388
    int64_t v17 = v16; // 0x406396
    int64_t v18 = v16; // 0x406396
    int64_t v19 = v15; // 0x406396
    int64_t v20; // 0x405d90
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x4065a8;
    } else {
        goto lab_0x4063a1;
    }
  lab_0x4063b9:
    // 0x4063b9
    if (v6 != (int64_t)&v4) {
        // 0x4063d0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4063ec
        free((int64_t *)v6);
    }
    // 0x4063f1
    *(int32_t *)v10 = 12;
    // 0x406400
    return 0;
  lab_0x405e54:
    // 0x405e54
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x405e8d
    int64_t v23 = *v22; // 0x405e8d
    int64_t v24 = 0; // 0x405e93
    int64_t v25 = v20; // 0x405e93
    int64_t v26 = v21; // 0x405e93
    int64_t v27 = 0; // 0x405e93
    int64_t v28; // 0x405d90
    int64_t v29; // 0x405d90
    int64_t v30; // 0x405d90
    int64_t v31; // 0x405d90
    int64_t v32; // 0x405d90
    int64_t v33; // 0x405d90
    int64_t v34; // 0x405d90
    if (v23 == a3) {
        goto lab_0x4064a3;
    } else {
        int64_t v35 = v23 - a3; // 0x405e99
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x405eab;
    }
  lab_0x4064a3:;
    int64_t v36 = v24; // 0x4064a6
    float80_t v37; // 0x405d90
    float80_t v38 = v37; // 0x4064a6
    float80_t v39; // 0x405d90
    float80_t v40 = v39; // 0x4064a6
    int64_t v41 = v25; // 0x4064a6
    int64_t v42 = v26; // 0x4064a6
    int64_t v43 = v27; // 0x4064a6
    int64_t v44; // 0x405d90
    int64_t v45 = v44; // 0x4064a6
    goto lab_0x406008;
  lab_0x406008:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x405d90
    int64_t v51; // 0x405d90
    int64_t v52; // 0x405d90
    int64_t v53; // 0x405d90
    int64_t v54; // 0x405d90
    int64_t v55; // 0x405d90
    int64_t v56; // 0x405d90
    int64_t v57; // 0x405d90
    int64_t dest_mem2; // 0x405d90
    int64_t dest_mem3; // 0x405d90
    int64_t v58; // 0x405d90
    float80_t v59; // 0x405d90
    float80_t v60; // 0x405d90
    float80_t v61; // 0x405d90
    float80_t v62; // 0x405d90
    float80_t v63; // 0x405d90
    uint64_t v64; // 0x407136
    char * v65; // 0x40601c
    char v66; // 0x40601c
    int64_t v67; // 0x406044
    uint32_t v68; // 0x406048
    int64_t v69; // 0x406425
    char v70; // 0x405d90
    if (v1 == v49) {
        // 0x407130
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40789a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x407192;
            } else {
                goto lab_0x406380_2;
            }
        } else {
            // 0x407140
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x407192;
            } else {
                if (v47 != 0) {
                    // 0x40775d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406380_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x407763
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40715e;
                        } else {
                            goto lab_0x40776f;
                        }
                    }
                } else {
                    // 0x40714e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40715e;
                    } else {
                        goto lab_0x40776f;
                    }
                }
            }
        }
    } else {
        // 0x40601c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x406021
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x406abc
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x406bf0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x406380_2;
                } else {
                    goto lab_0x406482;
                }
            } else {
                // 0x406432
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x406482;
                } else {
                    if (v47 != 0) {
                        // 0x406d20
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x406380_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x406d26
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x406450;
                            } else {
                                goto lab_0x406d32;
                            }
                        }
                    } else {
                        // 0x406440
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x406450;
                        } else {
                            goto lab_0x406d32;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x406abc
                abort();
                // UNREACHABLE
            }
            // 0x406039
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g50 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x4069b0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406487;
                }
                case 19: {
                    // 0x4069a0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406487;
                }
                case 20: {
                    // 0x406988
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406487;
                }
                case 21: {
                    goto lab_0x406570;
                }
                case 22: {
                    goto lab_0x406570;
                }
                default: {
                    // 0x40605a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x406500
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40651d;
                        } else {
                            // 0x406507
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x406090;
                            } else {
                                goto lab_0x40651d;
                            }
                        }
                    } else {
                        goto lab_0x406090;
                    }
                }
            }
        }
    }
  lab_0x405eab:;
    int64_t v75 = v34;
    float80_t v76; // 0x405d90
    float80_t v77 = v76;
    float80_t v78; // 0x405d90
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x405d90
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x405eae
    int64_t v89 = v85; // 0x405eae
    int64_t v90 = v84; // 0x405eae
    float80_t v91 = v79; // 0x405eae
    float80_t v92 = v77; // 0x405eae
    int64_t v93 = v75; // 0x405eae
    int64_t v94 = v80; // 0x405eae
    int64_t v95 = v81; // 0x405eae
    int64_t v96 = v82; // 0x405eae
    int64_t v97 = v87; // 0x405eae
    int64_t v98; // 0x405d90
    int64_t v99; // 0x405d90
    int64_t v100; // 0x405d90
    int64_t v101; // 0x405d90
    int64_t v102; // 0x405d90
    if (v82 >= v87) {
        goto lab_0x405ff9;
    } else {
        if (v82 != 0) {
            // 0x405f90
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x406380_2;
            } else {
                int64_t v103 = 2 * v82; // 0x405f96
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x405fab;
                } else {
                    goto lab_0x405f9e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x405ed4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x405fbe;
                } else {
                    goto lab_0x405ee0;
                }
            } else {
                goto lab_0x405f9e;
            }
        }
    }
  lab_0x405ff9:
    // 0x405ff9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x406008;
  lab_0x407192:
    // 0x407192
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40719a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x4071ab
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x4071b7
    if (v12 != 0) {
        // 0x4071c3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x4071e2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4071fe
        free((int64_t *)v6);
    }
    // 0x407203
    *a2 = v46;
    // 0x406400
    return result;
  lab_0x406570:
    // 0x406570
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x406487;
  lab_0x405f9e:
    // 0x405f9e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x406380_2;
    } else {
        goto lab_0x405fab;
    }
  lab_0x4065a8:
    // 0x4065a8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x4063a1;
  lab_0x4063a1:
    if (v12 == 0) {
        // 0x4064b0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4063b9;
    } else {
        // 0x4063b1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x4063b9;
    }
  lab_0x406482:
    // 0x406482
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x406487;
  lab_0x406090:;
    int64_t v273 = (int64_t)v11; // 0x406090
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x406097
    int64_t v275 = v273 + 1; // 0x40609b
    *v11 = 37;
    int64_t v276 = v275; // 0x4060a4
    if (v274 % 2 != 0) {
        // 0x4060a6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x406097
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x4060b7
    if ((v277 & 2) != 0) {
        // 0x4060b9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4060c3
    if ((v277 & 4) != 0) {
        // 0x4060c5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4060cf
    if ((v277 & 8) != 0) {
        // 0x4060d1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x4060db
    if ((v277 & 16) != 0) {
        // 0x4060dd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x4060e7
    if ((v277 & 64) != 0) {
        // 0x4060e9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x4060f3
    if ((v277 & 32) != 0) {
        // 0x4060f5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x4060fd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x406101
    int64_t v293 = v290; // 0x406108
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x406117
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40613a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40613e
    int64_t v298 = v295; // 0x406145
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x406154
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40604a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x406180
    int64_t v272; // 0x405d90
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x406189
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x406588;
        } else {
            if (v301 == 12) {
                // 0x406d48
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x4061b0;
            } else {
                // 0x4061a0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x406580
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x406588;
                } else {
                    goto lab_0x4061b0;
                }
            }
        }
    } else {
        goto lab_0x4061b0;
    }
  lab_0x406487:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x406487
    int64_t v111 = v55 + 88; // 0x40648b
    int64_t v112 = *(int64_t *)v111; // 0x40648f
    int64_t v113 = v49 + 1; // 0x406492
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x405e99
        int64_t v115 = v114 + v105; // 0x405e9f
        v28 = v115;
        v29 = v114;
        v31 = v105;
        v83 = v111;
        v30 = v106;
        v32 = v110;
        v33 = v107;
        v78 = v108;
        v76 = v109;
        v34 = v113;
        if (v115 < v105) {
            // 0x4064c8
            v88 = v114;
            v89 = v105;
            v90 = v111;
            v91 = v108;
            v92 = v109;
            v93 = v113;
            v94 = v107;
            v95 = v110;
            v96 = v106;
            v97 = -1;
            v14 = v107;
            if (v106 != -1) {
                goto lab_0x406380_2;
            } else {
                goto lab_0x405ff9;
            }
        } else {
            goto lab_0x405eab;
        }
    } else {
        goto lab_0x4064a3;
    }
  lab_0x405fab:;
    int64_t v116 = v80 == v20; // 0x405fb2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x405ee0;
    } else {
        goto lab_0x405fbe;
    }
  lab_0x405fbe:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x405d90
    if (v102 != 0) {
        goto lab_0x405ee0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x405fda
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x406595;
        } else {
            // 0x405fe8
            v88 = v86;
            v89 = v85;
            v90 = v84;
            v91 = v79;
            v92 = v77;
            v93 = v75;
            v94 = (int64_t)mem3;
            v95 = 0x100000000000000 * v81 >> 56;
            v96 = v117;
            v97 = v87;
            goto lab_0x405ff9;
        }
    }
  lab_0x405ee0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x405ef7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x406380_2;
    } else {
        // 0x405f1d
        v88 = v86;
        v89 = v85;
        v90 = v84;
        v91 = v79;
        v92 = v77;
        v93 = v75;
        v94 = (int64_t)mem4;
        v95 = v81;
        v96 = size2;
        v97 = v87;
        if (v85 != 0 && (char)v101 != 0) {
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x405f45
            v88 = v86;
            v89 = v85;
            v90 = v84;
            v91 = v79;
            v92 = v77;
            v93 = v75;
            v94 = (int64_t)dest_mem;
            v95 = 0x100000000000000 * v81 >> 56;
            v96 = size2;
            v97 = v87;
        }
        goto lab_0x405ff9;
    }
  lab_0x40715e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x407724
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x406380_2;
        } else {
            // 0x407735
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40774a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x407192;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x407181
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x406595;
        } else {
            // 0x40718f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x407192;
        }
    }
  lab_0x40776f:
    // 0x40776f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x406380_2;
    } else {
        goto lab_0x40715e;
    }
  lab_0x40651d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40651d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x406521
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x406525
    int64_t v123 = 0; // 0x40652c
    int64_t v124 = v122; // 0x40652c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x406532
        int64_t v126 = v120; // 0x40653a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x4074c1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x4074d9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x4074eb
            int64_t v131 = v128; // 0x4074f4
            int64_t v132 = v130; // 0x4074f4
            int64_t v133; // 0x405d90
            int64_t v134; // 0x407506
            if (v130 < v129) {
                // 0x4074f6
                if (v121 == v128) {
                    // break -> 0x406310
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x4062fb
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x406310
                        goto lab_0x406310;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x4074b8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x4074c1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x4074f6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x406310
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x4062fb
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x406310
                            goto lab_0x406310;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x4074b8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x406544
            if (*(int32_t *)v135 != 5) {
                // 0x406abc
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x406550
            int64_t v137 = v136; // 0x406550
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40655d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x406310:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x406310
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x406314
    int64_t v142; // 0x405d90
    int64_t v143; // 0x405d90
    int64_t v144; // 0x405d90
    if (v140 == v141) {
        goto lab_0x4069c0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x406321
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x407524
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40752d
            if (v141 == v146) {
                goto lab_0x4069de;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x407553
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40755a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x407573
                int64_t v152 = v151; // 0x40757c
                int64_t v153 = v149; // 0x40757c
                int64_t v154; // 0x405d90
                int64_t v155; // 0x407587
                if (v151 < v150) {
                    // 0x40757e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x406380_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40759a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x406380_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x407540
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x407549
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40757e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x406380_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40759a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x406380_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x407540
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40634c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x406333
            if (*(int32_t *)v156 != 5) {
                // 0x406abc
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x406340
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x4069c0;
            } else {
                goto lab_0x40634c;
            }
        }
    }
  lab_0x4061b0:
    // 0x4061b0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x4061bd
    int64_t v160 = 0; // 0x4061c5
    if (v159 != -1) {
        // 0x4061cb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x406abc
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x4061ee
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x4061fc
        if (*(int32_t *)v162 != 5) {
            // 0x406abc
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40620f
        int64_t v164; // bp-8, 0x405d90
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x405d90
    uint64_t v165; // 0x406226
    if (v46 > 0xfffffffffffffffd) {
        // 0x406c58
        v14 = v48;
        if (v47 == -1) {
            // 0x406284
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x406380_2;
    } else {
        // 0x406230
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x406284
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x406960
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x406380_2;
            } else {
                int64_t v167 = 2 * v47; // 0x406966
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x406252;
                } else {
                    goto lab_0x406972;
                }
            }
        } else {
            // 0x406242
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x406252;
            } else {
                goto lab_0x406972;
            }
        }
    }
  lab_0x406450:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x406c79
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x406380_2;
        } else {
            // 0x406c91
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x406ca2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x406482;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x406471
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x406595;
        } else {
            // 0x40647f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x406482;
        }
    }
  lab_0x406d32:
    // 0x406d32
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x406380_2;
    } else {
        goto lab_0x406450;
    }
  lab_0x4069c0:
    // 0x4069c0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x4069de;
  lab_0x406588:
    // 0x406588
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x4061b0;
  lab_0x406595:
    // 0x406595
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x4065a8;
  lab_0x4069de:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x4069e4
    v14 = v48;
    int64_t v170; // 0x405d90
    int64_t v171; // 0x405d90
    int64_t * v172; // 0x405d90
    int64_t v173; // 0x405d90
    int64_t v174; // bp-760, 0x405d90
    uint64_t size5; // 0x4069e8
    if (v169 == -1) {
        goto lab_0x406380_2;
    } else {
        // 0x4069f9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x406a59;
        } else {
            // 0x406a05
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x406380_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x406a2d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x406380_2;
                } else {
                    goto lab_0x406a59;
                }
            }
        }
    }
  lab_0x40634c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x4069de;
    } else {
        // 0x406355
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x4069de;
        } else {
            goto lab_0x406380_2;
        }
    }
  lab_0x406252:
    // 0x406252
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x406c19
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x406c34
            if (v48 == v20 && v46 != 0) {
                // 0x406c42
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x406284
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x406273
        v14 = v48;
        if (mem11 != NULL) {
            // 0x406284
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x406380_2;
  lab_0x406972:
    // 0x406972
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x406380_2;
    } else {
        goto lab_0x406252;
    }
  lab_0x406a59:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x405d90
    int64_t v181; // 0x405d90
    int64_t v182; // 0x405d90
    int64_t v183; // 0x405d90
    int64_t v184; // 0x405d90
    int64_t v185; // 0x405d90
    int64_t v186; // 0x405d90
    int64_t v187; // 0x405d90
    int64_t v188; // 0x405d90
    int64_t v189; // 0x405d90
    int64_t v190; // 0x405d90
    int64_t v191; // 0x405d90
    int64_t v192; // 0x405d90
    int64_t v193; // 0x405d90
    float80_t v194; // 0x405d90
    float80_t v195; // 0x405d90
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x4075d2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x4075e0
            *v197 = 78;
            *(int16_t *)v178 = 0x414e;
            v194 = v119;
            v195 = v62;
            v190 = v179;
            v189 = v196;
            v182 = v177;
            v184 = v176;
            v188 = 0;
        } else {
            // 0x40770d
            *v197 = 110;
            *(int16_t *)v178 = 0x616e;
            v194 = v119;
            v195 = v62;
            v190 = v179;
            v189 = v196;
            v182 = v177;
            v184 = v176;
            v188 = 0;
        }
        goto lab_0x406f19;
    } else {
        // 0x406a61
        int64_t v198; // 0x405d90
        float80_t v199; // 0x405d90
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x407221
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40722e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40708a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x406a8f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x406a98
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x406abc
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x406abc
                            abort();
                            // UNREACHABLE
                        }
                        // 0x407606
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x407606
                            v181 = v187 + 3;
                            goto lab_0x407781;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x407781;
                            } else {
                                goto lab_0x407642;
                            }
                        }
                    } else {
                        // 0x407313
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x406f07;
                        } else {
                            int64_t v202 = v187 + 2; // 0x407321
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40786a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x407368
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40737b
                                int64_t v207 = v176 & 0xffffffff; // 0x40737e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40738c
                                int64_t v209 = v187 + 1; // 0x4073a9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x4073be
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x4073cb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x406f19;
                        }
                    }
                } else {
                    // 0x4070b8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x4070b8
                        v180 = v187 + 1;
                        goto lab_0x407667;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x407667;
                        } else {
                            goto lab_0x4070d8;
                        }
                    }
                }
            } else {
                // 0x406ef0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x406f07;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40743c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40744d
                    char v215 = *v213; // 0x407454
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x407490
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40749d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x407465
                        v182 = v218;
                        int64_t v219; // 0x407457
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x406f19;
                }
            }
        } else {
            float80_t v220; // 0x405d90
            if (v220 != 0.0L) {
                // 0x406abc
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40710b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40711a
                *v222 = 70;
                *(int16_t *)v187 = 0x4e49;
                v194 = 0.0L;
                v195 = 0.0L;
                v190 = v179;
                v189 = v221;
                v182 = v177;
                v184 = v176;
                v188 = 0;
            } else {
                // 0x4073f3
                *v222 = 102;
                *(int16_t *)v187 = 0x6e69;
                v194 = 0.0L;
                v195 = 0.0L;
                v190 = v179;
                v189 = v221;
                v182 = v177;
                v184 = v176;
                v188 = 0;
            }
            goto lab_0x406f19;
        }
    }
  lab_0x406f19:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x406f1c
    int64_t v229 = v228; // 0x406f22
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x406f24
        int64_t v232 = v231 + v224; // 0x406f27
        int64_t v233 = v232 - v225; // 0x406f2e
        if ((v230 & 2) != 0) {
            // 0x4073d3
            v229 = v233;
            int64_t v234 = v224; // 0x4073d6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x4073e0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x4073e0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x407245
                int64_t v238 = v224; // 0x40724b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x407259
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x407250
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x407265
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x407278
                    *(char *)v238 = 32;
                    v229 = v233;
                    while (v241 != v238 + v231) {
                        int64_t v242 = v241;
                        v241 = v242 + 1;
                        *(char *)v242 = 32;
                        v229 = v233;
                    }
                }
            } else {
                int64_t v243 = v224; // 0x406f51
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x406f71
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x406f68
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x406f7a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x406f88
                    *(char *)v243 = 48;
                    v229 = v233;
                    while (v246 != v243 + v231) {
                        int64_t v247 = v246;
                        v246 = v247 + 1;
                        *(char *)v247 = 48;
                        v229 = v233;
                    }
                }
            }
        }
    }
    int64_t v248 = v229;
    if (size5 <= v248) {
        // 0x406abc
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x406fb8
    int64_t dest_mem5 = v48; // 0x406fc5
    int64_t v250 = v248; // 0x406fc5
    int64_t v251 = v47; // 0x406fc5
    int64_t v252; // 0x405d90
    if (v47 - v46 > v248) {
        goto lab_0x407040;
    } else {
        if (v249 < v46) {
            // 0x407212
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x406380_2;
            } else {
                goto lab_0x407040;
            }
        } else {
            // 0x406fd0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x407040;
            } else {
                if (v47 != 0) {
                    // 0x4075a8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406380_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x4075ae
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x406fee;
                        } else {
                            goto lab_0x4075ba;
                        }
                    }
                } else {
                    // 0x406fde
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x406fee;
                    } else {
                        goto lab_0x4075ba;
                    }
                }
            }
        }
    }
  lab_0x407040:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x407051
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40706d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x406487;
  lab_0x406f07:
    // 0x406f07
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x406f19;
  lab_0x407667:;
    char * v257 = nl_langinfo(0x10000); // 0x40769a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x4076ab
    char v259 = *v257; // 0x4076b2
    int64_t v260 = v176 & 0xffffffff; // 0x4076b5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x4076c3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x4076f0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x4076fd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x4070d8;
  lab_0x4070d8:
    // 0x4070d8
    *(char *)(v192 + 3) = 48;
    *(char *)v192 = *v65;
    *(int16_t *)(v192 + 1) = 0x302b;
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v192 + 4;
    v182 = v183;
    v184 = v185;
    v188 = v187;
    goto lab_0x406f19;
  lab_0x406fee:
    // 0x406fee
    if (v48 == 0 || v48 == v20) {
        // 0x40728b
        int64_t size7; // 0x405d90
        int64_t * mem12 = malloc((int32_t)size7); // 0x4072a2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x406380_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x4072ae
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x4072d9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x407040;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40701d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x406380_2;
        } else {
            // 0x40702b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x407040;
        }
    }
  lab_0x4075ba:
    // 0x4075ba
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x406380_2;
    } else {
        goto lab_0x406fee;
    }
  lab_0x407781:;
    int64_t v265 = v187 + 4; // 0x407781
    char v266 = *nl_langinfo(0x10000); // 0x4077cc
    int64_t v267 = v176 & 0xffffffff; // 0x4077cf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x4077d6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x4077fd
        int64_t v270 = v265 + 1; // 0x407805
        *(char *)v265 = 48;
        v191 = v268;
        v193 = v269;
        v186 = v267;
        while (v270 != v269) {
            int64_t v271 = v270;
            v270 = v271 + 1;
            *(char *)v271 = 48;
            v191 = v268;
            v193 = v269;
            v186 = v267;
        }
    }
    goto lab_0x407642;
  lab_0x407642:
    // 0x407642
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x406f19;
}
// Address range: 0x4078b0 - 0x407ac9
int64_t function_4078b0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x407913
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x4078c8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x4078d9
    g51 = v5;
    int64_t v6; // 0x4078b0
    int64_t v7; // 0x4078b0
    int64_t v8; // 0x4078b0
    int64_t v9; // 0x4078b0
    int64_t v10; // 0x4078b0
    int64_t v11; // 0x4078b0
    int64_t v12; // 0x4078b0
    uint32_t v13; // 0x4079d0
    int64_t * v14; // 0x407a00
    int64_t v15; // 0x407a08
    uint32_t v16; // 0x407a50
    uint32_t v17; // 0x407a20
    int64_t * v18; // 0x4079b0
    int64_t v19; // 0x4079b0
    int64_t * v20; // 0x4079c0
    int64_t v21; // 0x4079c0
    int64_t * v22; // 0x407998
    int64_t v23; // 0x407998
    int64_t * v24; // 0x407980
    int64_t v25; // 0x407980
    int64_t * v26; // 0x407aa0
    uint32_t v27; // 0x407960
    int64_t v28; // 0x407aa0
    int64_t * v29; // 0x407a90
    int64_t v30; // 0x407a90
    uint32_t v31; // 0x407940
    int64_t * v32; // 0x407ab8
    int64_t v33; // 0x407ab8
    int64_t v34; // 0x407a63
    uint32_t v35; // 0x407920
    int64_t v36; // 0x407a37
    uint32_t v37; // 0x4078e8
    int32_t * v38; // 0x4079d0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x407960
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x407967
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x4079b0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x407973
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x407906
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x407940
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x407947
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x4079c0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x407953
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x407906
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x407920
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x407927
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x407998
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x407933
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x407906
            break;
        }
        case 7: {
        }
        case 8: {
        }
        case 9: {
        }
        case 10: {
        }
        case 17: {
        }
        case 18: {
        }
        case 19: {
        }
        case 20: {
        }
        case 21: {
        }
        case 22: {
            // 0x4078e8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x4078f3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x407980
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x4078ff
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x407906
            break;
        }
        case 11: {
            // 0x4079d0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x4079df
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x407aa0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x4079ec
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x407906
            break;
        }
        case 12: {
            // 0x407a00
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x407906
            break;
        }
        case 15: {
            // 0x407a50
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x407a57
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x407a90
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x407a63
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x407906
            break;
        }
        case 16: {
            // 0x407a20
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x407a2b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x407ab8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x407a37
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x407906
            break;
        }
        default: {
            // 0x407913
            return 0xffffffff;
        }
    }
    // 0x407906
    v3++;
    int64_t v39 = v4 + 32; // 0x407911
    while (v3 < v2) {
        // 0x4078d0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g51 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x407960
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x407967
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x4079b0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x407973
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x407906
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x407940
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x407947
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x4079c0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x407953
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x407906
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x407920
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x407927
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x407998
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x407933
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x407906
                break;
            }
            case 7: {
            }
            case 8: {
            }
            case 9: {
            }
            case 10: {
            }
            case 17: {
            }
            case 18: {
            }
            case 19: {
            }
            case 20: {
            }
            case 21: {
            }
            case 22: {
                // 0x4078e8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x4078f3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x407980
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x4078ff
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x407906
                break;
            }
            case 11: {
                // 0x4079d0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x4079df
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x407aa0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x4079ec
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x407906
                break;
            }
            case 12: {
                // 0x407a00
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x407906
                break;
            }
            case 15: {
                // 0x407a50
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x407a57
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x407a90
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x407a63
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x407906
                break;
            }
            case 16: {
                // 0x407a20
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x407a2b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x407ab8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x407a37
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x407906
                break;
            }
            default: {
                // 0x407913
                return 0xffffffff;
            }
        }
        // 0x407906
        v3++;
        v39 = v4 + 32;
    }
    // 0x407913
    return 0;
}
// Address range: 0x407ad0 - 0x4087d9
int64_t function_407ad0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x407ad2
    int64_t v4 = v1 + 16; // 0x407ad6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x407b09
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x407b1e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x407b4b
    int32_t v8 = 0; // 0x407b50
    int64_t v9 = 0; // 0x407b50
    int64_t v10 = v3; // 0x407b50
    int64_t v11 = a1; // 0x407b50
    int64_t v12 = 0; // 0x407b50
    char v13; // 0x407ad0
    int64_t v14; // 0x407ad0
    int64_t v15; // 0x407ad0
    int64_t v16; // 0x407ad0
    int64_t v17; // 0x407ad0
    int64_t v18; // 0x407ad0
    int64_t v19; // 0x407ad0
    int64_t v20; // 0x407ad0
    int64_t v21; // 0x407ad0
    int64_t v22; // 0x407ad0
    int64_t v23; // 0x407ad0
    int64_t v24; // 0x407ad0
    int64_t v25; // 0x407ad0
    int64_t v26; // 0x407ad0
    int64_t v27; // 0x407ad0
    int64_t v28; // 0x407ad0
    int64_t v29; // 0x407ad0
    int64_t v30; // 0x407ad0
    int32_t v31; // 0x407ad0
    int64_t v32; // 0x407ad0
    int64_t v33; // 0x407b40
    int64_t v34; // 0x407b90
    int64_t * v35; // 0x407bb3
    int64_t v36; // 0x407c16
    if (v7 != 0) {
        // 0x407b40
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x407ad0
        int64_t v38 = 7; // 0x407ad0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x407ad0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x407b40:
            // 0x407b40
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x407b83
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x407b98
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x407bd4
                int64_t v43 = v42; // 0x407bd4
                int64_t v44 = v43; // 0x407bdd
                int64_t v45 = v33; // 0x407bdd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x407f70
                    char v47 = *(char *)v46; // 0x407f74
                    int64_t v48 = v46; // 0x407f7d
                    while (v47 < 58) {
                        // 0x407f70
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x407f7f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x408615
                        char v52 = *(char *)v51; // 0x408615
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x408619
                        int64_t v54 = v33; // 0x40862d
                        int64_t v55 = v51; // 0x40862d
                        char v56 = v52; // 0x40862d
                        int64_t v57 = v53; // 0x40862d
                        bool v58 = v52 < 58; // 0x40862d
                        bool v59 = v52 < 58; // 0x40862d
                        char v60 = v52; // 0x40862d
                        int64_t v61 = v51; // 0x40862d
                        int64_t v62; // 0x408642
                        int64_t v63; // 0x408615
                        char v64; // 0x408615
                        int64_t v65; // 0x408619
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x408298_9;
                            }
                            // 0x408613
                            v62 = v60;
                            v63 = v61 + 1;
                            v64 = *(char *)v63;
                            v65 = v62 - 49;
                            v54 = v61;
                            v55 = v63;
                            v56 = v64;
                            v57 = v65;
                            v58 = v64 < 58;
                            v61 = v63;
                            while (v65 < v62 - 48) {
                                // 0x40862f
                                if (v64 >= 58) {
                                    goto lab_0x408298_9;
                                }
                                // 0x408613
                                v62 = v64;
                                v63 = v61 + 1;
                                v64 = *(char *)v63;
                                v65 = v62 - 49;
                                v54 = v61;
                                v55 = v63;
                                v56 = v64;
                                v57 = v65;
                                v58 = v64 < 58;
                                v61 = v63;
                            }
                        }
                        int64_t v66 = v57;
                        int64_t v67 = v55; // 0x4085e8
                        while (v58) {
                            // 0x4085ee
                            v49 = v66;
                            v50 = (int64_t)((0x1000000 * (int32_t)(int64_t)v56 >> 24) - 48);
                            v51 = v67 + 1;
                            v52 = *(char *)v51;
                            v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50;
                            v54 = v67;
                            v55 = v51;
                            v56 = v52;
                            v57 = v53;
                            v58 = v52 < 58;
                            v59 = v52 < 58;
                            v60 = v52;
                            v61 = v51;
                            if (v53 < v50) {
                                if (!v59) {
                                    goto lab_0x408298_9;
                                }
                                // 0x408613
                                v62 = v60;
                                v63 = v61 + 1;
                                v64 = *(char *)v63;
                                v65 = v62 - 49;
                                v54 = v61;
                                v55 = v63;
                                v56 = v64;
                                v57 = v65;
                                v58 = v64 < 58;
                                v61 = v63;
                                while (v65 < v62 - 48) {
                                    // 0x40862f
                                    if (v64 >= 58) {
                                        goto lab_0x408298_9;
                                    }
                                    // 0x408613
                                    v62 = v64;
                                    v63 = v61 + 1;
                                    v64 = *(char *)v63;
                                    v65 = v62 - 49;
                                    v54 = v61;
                                    v55 = v63;
                                    v56 = v64;
                                    v57 = v65;
                                    v58 = v64 < 58;
                                    v61 = v63;
                                }
                            }
                            // 0x4085e4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x4086ed
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x408298_9;
                        }
                        int64_t v68 = v54 + 2; // 0x4086fe
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x407ad0
                v36 = v45;
                char v70; // 0x407ad0
                while (true) {
                    // 0x407c16
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x407c30
                                *v41 = *v41 | 2;
                                // break -> 0x407c10
                                break;
                            }
                            case 43: {
                                // 0x407c40
                                *v41 = *v41 | 4;
                                // break -> 0x407c10
                                break;
                            }
                            case 32: {
                                // 0x407c50
                                *v41 = *v41 | 8;
                                // break -> 0x407c10
                                break;
                            }
                            case 35: {
                                // 0x407c60
                                *v41 = *v41 | 16;
                                // break -> 0x407c10
                                break;
                            }
                            case 48: {
                                // 0x407c70
                                *v41 = *v41 | 32;
                                // break -> 0x407c10
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x407c78
                                    break;
                                }
                                // 0x407c06
                                *v41 = *v41 | 64;
                                // break -> 0x407c10
                                break;
                            }
                        }
                    } else {
                        // 0x407c1f
                        *v41 = *v41 | 1;
                    }
                    // 0x407c10
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x407ad0
                int64_t * v72; // 0x407ba1
                int64_t * v73; // 0x407baa
                if (v70 == 42) {
                    // 0x407ced
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x407d0d
                    int64_t v75 = v74; // 0x407d0d
                    int64_t v76 = v75 + 0xffffffd0; // 0x407d11
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x407d17
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x4080ed
                        char v80 = *(char *)v79; // 0x4080f1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x4080ed
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x4080fd
                        v26 = v79;
                        int64_t v81 = v75; // 0x408101
                        int64_t v82 = v36; // 0x408101
                        int64_t v83 = 0; // 0x408101
                        if (v80 != 36) {
                            goto lab_0x407d1d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x408132
                            int64_t v89 = v85; // 0x408132
                            int64_t v90 = v87; // 0x408132
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x408137
                            int64_t v95 = v92 + 1; // 0x40813a
                            char v96 = *(char *)v95; // 0x40813a
                            int64_t v97 = v96; // 0x40813a
                            while (v94 < v91) {
                                // 0x408151
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x408298_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40810b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x408114
                                v84 = v83;
                                v85 = v82;
                                v86 = v81;
                                v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                                v88 = v86;
                                v89 = v85;
                                v90 = v87;
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                                while (v94 < v91) {
                                    // 0x408151
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x408298_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40810b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x40878b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x408298_9;
                            }
                            // 0x408799
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x407d2c;
                        }
                    } else {
                        goto lab_0x407d1d;
                    }
                } else {
                    // 0x407c7d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x407ad0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x40839b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x4083a0
                        int64_t v102 = v71; // 0x4083a9
                        char * v103 = v100; // 0x4083a9
                        int64_t v104 = v36; // 0x4083a9
                        int64_t v105 = v71; // 0x4083a9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x4083b3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x4083b3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x4083b3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x4083c2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x4083e5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x407c88;
                }
            } else {
                goto lab_0x407b48;
            }
        }
    }
  lab_0x407b52:
    // 0x407b52
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x407b74
    return 0;
  lab_0x408298_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x4082a3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x4082b5
    if (v3 != v115) {
        // 0x4082c0
        free((int64_t *)v115);
    }
    // 0x4082c5
    *__errno_location() = 22;
    // 0x407b74
    return 0xffffffff;
  lab_0x408470_5:;
    // 0x408470
    int64_t v116; // 0x407ad0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x408475
    int64_t v119; // 0x407ad0
    if (v4 == v117) {
        goto lab_0x408489_3;
    } else {
        // 0x408477
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x408489_3;
    }
  lab_0x408489_3:;
    int64_t v120 = *v5; // 0x408489
    int32_t * v121; // 0x408499
    if (v3 == v120) {
        // 0x408499
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x408494
    free((int64_t *)v120);
    // 0x408499
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x407b48:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x407b4b
    v13 = v124;
    v14 = v15;
    v25 = v33;
    v21 = v22;
    v32 = v122;
    v31 = v123;
    v8 = v123;
    v9 = v122;
    v10 = v22;
    v11 = v33;
    v12 = v15;
    if (v124 == 0) {
        // break -> 0x407b52
        goto lab_0x407b52;
    }
    goto lab_0x407b40;
  lab_0x407d1d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x407d1d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x4080c3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x408298_9;
        }
        // 0x4080db
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x407d2c;
  lab_0x407c88:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x407c8b
    int64_t v147 = v339; // 0x407c8b
    int64_t v145 = v338; // 0x407c8b
    int64_t v143 = v337; // 0x407c8b
    int64_t v186; // 0x407ad0
    int64_t v190; // 0x407ad0
    int64_t v189; // 0x407ad0
    int64_t v188; // 0x407ad0
    int64_t v187; // 0x407ad0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x407d90;
    } else {
        goto lab_0x407c91;
    }
  lab_0x407d2c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x407d2c
    int64_t v132 = v128; // 0x407d33
    int64_t v133 = v16; // 0x407d33
    int64_t v134 = v131; // 0x407d33
    int64_t v135; // 0x407ad0
    int64_t v136; // 0x407ad0
    int64_t v137; // 0x407ad0
    int64_t v138; // 0x407fdf
    if (v16 > v127) {
        goto lab_0x407d3c;
    } else {
        uint64_t v139 = 2 * v16; // 0x407fd5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x408470_5;
        }
        int64_t size = 32 * v138; // 0x407ffe
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x40855c
            if (mem == NULL) {
                goto lab_0x408489_3;
            }
            // 0x40857e
            v135 = (int64_t)mem;
            goto lab_0x408589;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40801f
            int64_t v140 = *v6; // 0x408024
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x408470_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40801f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x408589;
            } else {
                goto lab_0x40805d;
            }
        }
    }
  lab_0x407c91:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x407c98
    int64_t v151 = v146; // 0x407c98
    int64_t v152 = v144; // 0x407c98
    uint64_t v153; // 0x407ad0
    int64_t v154; // 0x407ad0
    int64_t v155; // 0x407cd7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x407cdb
        int64_t v158; // 0x407ad0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x407e40
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x407cd3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x407e48
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x407cd0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x407cd3
                    break;
                }
            }
        } else {
            // 0x407ce0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x407cd3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x407e48
    int64_t v162 = v161 % 256; // 0x407e54
    g52 = v162;
    int64_t v163 = 17; // 0x407e57
    int64_t v164 = v154; // 0x407e57
    int64_t v165 = v154; // 0x407e57
    switch ((char)v161) {
        case 0: {
            goto lab_0x407ec1;
        }
        case 28: {
            goto lab_0x408212;
        }
        case 30: {
            // 0x40823e
            v163 = 14;
            v164 = 99;
            goto lab_0x407e69;
        }
        case 32: {
            goto lab_0x408212;
        }
        case 33: {
            goto lab_0x408212;
        }
        case 34: {
            goto lab_0x408212;
        }
        case 46: {
            // 0x40822f
            v163 = 16;
            v164 = 115;
            goto lab_0x407e69;
        }
        case 51: {
            goto lab_0x40824d;
        }
        case 60: {
            goto lab_0x408212;
        }
        case 62: {
            int32_t v166 = v153; // 0x408169
            int32_t v167 = v166 - 7; // 0x408169
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40816f
            v163 = v168;
            v164 = v154;
            goto lab_0x407e69;
        }
        case 63: {
            goto lab_0x4081c0;
        }
        case 64: {
            goto lab_0x408212;
        }
        case 65: {
            goto lab_0x408212;
        }
        case 66: {
            goto lab_0x408212;
        }
        case 68: {
            goto lab_0x4081c0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40817f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x408185
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40818d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40819b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x4081af
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x407e69;
        }
        case 74: {
            goto lab_0x40824d;
        }
        case 75: {
            goto lab_0x407e69;
        }
        case 78: {
            int32_t v171 = v153; // 0x407e60
            int32_t v172 = v171 - 7; // 0x407e60
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x407e66
            v163 = v173;
            v164 = v154;
            goto lab_0x407e69;
        }
        case 80: {
            goto lab_0x40824d;
        }
        case 83: {
            goto lab_0x40824d;
        }
        default: {
            goto lab_0x408298_9;
        }
    }
  lab_0x407d3c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x407d53
        int64_t v178 = v176; // 0x407ad0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x407d48
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x407d48
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x407d61
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x407d6d
    int32_t v182 = *v181; // 0x407d6d
    if (v182 != 0) {
        // 0x4083ee
        if (v182 != 5) {
            goto lab_0x408298_9;
        }
        unsigned char v183 = *(char *)v129; // 0x4083f7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x407c88;
    } else {
        // 0x407d77
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x407d7d
        int64_t v185 = v129 + 1;
        v149 = v130;
        v147 = v184;
        v145 = v129;
        v143 = v175;
        v186 = v185;
        v187 = v130;
        v188 = v185;
        v189 = v129;
        v190 = v175;
        if (v184 != 46) {
            goto lab_0x407c91;
        } else {
            goto lab_0x407d90;
        }
    }
  lab_0x407d90:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x407d90
    char v197 = *v196; // 0x407d90
    int64_t * v198; // 0x407bb8
    *v198 = v192;
    int64_t v199; // 0x407ad0
    int64_t v200; // 0x407ad0
    int64_t v201; // 0x407ad0
    int64_t v202; // 0x407ad0
    int64_t v203; // 0x407ad0
    int64_t * v204; // 0x407bc1
    int64_t * v205; // 0x407bca
    int64_t v206; // 0x407da9
    if (v197 != 42) {
        char v207 = *v196; // 0x407f90
        int64_t v208 = v193; // 0x407f99
        char * v209; // 0x407ad0
        int64_t v210; // 0x407ad0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x407fa0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x407fa4
            v208 = v212;
            while (v214 < 58) {
                // 0x407fa0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x407fae
            v209 = v213;
            v210 = v212;
        } else {
            // 0x407f90
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x407fc1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x407c91;
    } else {
        // 0x407d9f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x407dbf
        int64_t v219 = v218; // 0x407dbf
        int64_t v220 = v219 + 0xffffffd0; // 0x407dc3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x407dc9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x408674
            char v224 = *(char *)v223; // 0x408678
            v221 = v223;
            while (v224 < 58) {
                // 0x408674
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x408684
            v201 = v223;
            int64_t v225 = v219; // 0x408688
            int64_t v226 = v206; // 0x408688
            int64_t v227 = 0; // 0x408688
            if (v224 != 36) {
                goto lab_0x407dcf;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x4086b9
                int64_t v233 = v229; // 0x4086b9
                int64_t v234 = v231; // 0x4086b9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x4086be
                int64_t v239 = v236 + 1; // 0x4086c5
                char v240 = *(char *)v239; // 0x4086c9
                int64_t v241 = v240; // 0x4086c9
                while (v238 < v235) {
                    // 0x4086d7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x408298_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x408692
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x40869b
                    v228 = v227;
                    v229 = v226;
                    v230 = v225;
                    v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                    v232 = v230;
                    v233 = v229;
                    v234 = v231;
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                    while (v238 < v235) {
                        // 0x4086d7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x408298_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x408692
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x4087a7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x408298_9;
                }
                // 0x4087b5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x407dde;
            }
        } else {
            goto lab_0x407dcf;
        }
    }
  lab_0x407ec1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x407ec6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x407ece
    *a2 = v245;
    int64_t v246; // 0x407ad0
    int64_t v247; // 0x407ad0
    int64_t dest_mem; // 0x407ad0
    int64_t v248; // 0x407ad0
    int64_t v249; // 0x4087c3
    if (v246 > v245) {
        // 0x407eda
        goto lab_0x407b48;
    } else {
        if (v246 < 0) {
            // 0x4087c3
            v249 = *v6;
            v116 = v249;
            goto lab_0x408470_5;
        }
        int64_t v250 = 2 * v246; // 0x407ef6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x4087c3
            v249 = *v6;
            v116 = v249;
            goto lab_0x408470_5;
        }
        int64_t v251 = *v5; // 0x407f07
        int64_t size2 = 176 * v246; // 0x407f19
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x408069
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x4085cc
                v118 = v252;
                if (v4 == v252) {
                    // 0x408499
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x408477
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x408489_3;
            }
            goto lab_0x408084;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x407f2b
            if (mem4 == NULL) {
                // 0x4087c3
                v249 = *v6;
                v116 = v249;
                goto lab_0x408470_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x407f2b
            int64_t v254 = *v5; // 0x407f4d
            int64_t v255 = *a2; // 0x407f51
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x408084;
            } else {
                goto lab_0x407f5f;
            }
        }
    }
  lab_0x408212:
    // 0x408212
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x408227
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x407e69;
  lab_0x40824d:;
    uint32_t v335 = (int32_t)v153; // 0x408255
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40825b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x408263
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x408271
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40827e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x407e69;
  lab_0x4081c0:;
    uint32_t v336 = (int32_t)v153; // 0x4081c8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x4081ce
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4081d6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x4081e4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4081f1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x407e69;
  lab_0x407e69:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x407ad0
    int64_t v260; // 0x407ad0
    int64_t * v261; // 0x407bcf
    if (v259 == -1) {
        // 0x408374
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x408298_9;
        }
        // 0x40838c
        v260 = v148;
    } else {
        // 0x407e73
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x407e78
    int64_t v264 = v258; // 0x407e7f
    int64_t v265 = v162; // 0x407e7f
    int64_t v266 = v263; // 0x407e7f
    int64_t v267; // 0x407ad0
    int64_t v268; // 0x407ad0
    int64_t v269; // 0x407ad0
    int64_t v270; // 0x407ad0
    int64_t v271; // 0x407ad0
    if (v142 > v262) {
        goto lab_0x407e85;
    } else {
        uint64_t v272 = 2 * v142; // 0x4082e8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x4082f2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x408470_5;
        }
        int64_t size3 = 32 * v273; // 0x408311
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x408324
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x408409
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x408489_3;
            }
            goto lab_0x408426;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x408331
            if (mem6 == NULL) {
                // 0x4087c3
                v249 = *v6;
                v116 = v249;
                goto lab_0x408470_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x408331
            int64_t v276 = v274 & 0xffffffff; // 0x408336
            int64_t v277 = *v6; // 0x408361
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x408426;
            } else {
                goto lab_0x40836b;
            }
        }
    }
  lab_0x407e85:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x407e9b
        int64_t v282 = v279; // 0x407ad0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x407e90
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x407e90
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x407ea9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x407eb5
    int32_t v286 = *v285; // 0x407eb5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x4082da
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x408298_9;
        }
    } else {
        // 0x407ebf
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x407ec1;
  lab_0x408589:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x408589
    int64_t * v290; // 0x407ad0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40805d;
  lab_0x40805d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x407d3c;
  lab_0x407dcf:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x407dcf
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x40864a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x408298_9;
        }
        // 0x408662
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x407dde;
  lab_0x407dde:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x407dde
    int64_t v300 = v296; // 0x407de5
    int64_t v301 = v191; // 0x407de5
    int64_t v302 = v299; // 0x407de5
    int64_t v303; // 0x407ad0
    int64_t v304; // 0x407ad0
    int64_t v305; // 0x407ad0
    int64_t v306; // 0x4084c2
    if (v191 > v295) {
        goto lab_0x407dee;
    } else {
        uint64_t v307 = 2 * v191; // 0x4084b8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x408470_5;
        }
        int64_t size4 = 32 * v306; // 0x4084dd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x40870e
            if (mem7 == NULL) {
                goto lab_0x408489_3;
            }
            // 0x408730
            v304 = (int64_t)mem7;
            goto lab_0x40873b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x4084fe
            int64_t v308 = *v6; // 0x408503
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x408470_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x4084fe
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x40873b;
            } else {
                goto lab_0x40853c;
            }
        }
    }
  lab_0x408084:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x407ad0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x407f5f;
  lab_0x407f5f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x407b48;
  lab_0x408426:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40843c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40836b;
  lab_0x40836b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x407e85;
  lab_0x407dee:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x407e03
        int64_t v324 = v322; // 0x407ad0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x407df8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x407df8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x407e11
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x407e1e
    int32_t v328 = *v327; // 0x407e1e
    if (v328 != 0) {
        // 0x408545
        if (v328 != 5) {
            goto lab_0x408298_9;
        }
        unsigned char v329 = *(char *)v297; // 0x40854e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x407e28
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x407e31
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x407c91;
  lab_0x40873b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x40873b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x40853c;
  lab_0x40853c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x407dee;
}
// Address range: 0x4087e0 - 0x40883d
int64_t function_4087e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4087e0
    return function_401410();
}
// Address range: 0x408840 - 0x408841
int64_t function_408840(void) {
    // 0x408840
    int64_t result; // 0x408840
    return result;
}
// Address range: 0x408850 - 0x408868
int64_t function_408850(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408850
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x408868 - 0x408888
int64_t function_408868(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x408872
    while (*(int64_t *)v1 != -1) {
        // 0x408873
        v1 -= 8;
    }
    // 0x408884
    return result;
}
