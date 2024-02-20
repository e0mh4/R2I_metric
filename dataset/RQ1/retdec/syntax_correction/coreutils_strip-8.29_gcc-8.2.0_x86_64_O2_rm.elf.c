#include "decompile_retdec.h"
// Address range: 0x401e00 - 0x401e05
int64_t function_401e00(void) {
    // 0x401e00
    return abort();
}
// Address range: 0x401e05 - 0x401e0a
int64_t function_401e05(void) {
    // 0x401e05
    return abort();
}
// Address range: 0x401e0a - 0x401e0f
int64_t function_401e0a(void) {
    // 0x401e0a
    abort();
    // UNREACHABLE
}
// Address range: 0x401e0f - 0x401e14
int64_t function_401e0f(void) {
    // 0x401e0f
    abort();
    // UNREACHABLE
}
// Address range: 0x401e14 - 0x401e19
int64_t function_401e14(void) {
    // 0x401e14
    abort();
    // UNREACHABLE
}
// Address range: 0x401e19 - 0x401e1e
int64_t function_401e19(void) {
    // 0x401e19
    abort();
    // UNREACHABLE
}
// Address range: 0x401e1e - 0x401e23
int64_t function_401e1e(void) {
    // 0x401e1e
    abort();
    // UNREACHABLE
}
// Address range: 0x401e23 - 0x401e28
int64_t function_401e23(void) {
    // 0x401e23
    abort();
    // UNREACHABLE
}
// Address range: 0x401e28 - 0x401e2d
int64_t function_401e28(void) {
    // 0x401e28
    abort();
    // UNREACHABLE
}
// Address range: 0x401e2d - 0x401e32
int64_t function_401e2d(void) {
    // 0x401e2d
    abort();
    // UNREACHABLE
}
// Address range: 0x401e32 - 0x401e37
int64_t function_401e32(void) {
    // 0x401e32
    abort();
    // UNREACHABLE
}
// Address range: 0x401e37 - 0x401e3c
int64_t function_401e37(void) {
    // 0x401e37
    abort();
    // UNREACHABLE
}
// Address range: 0x401e3c - 0x401e41
int64_t function_401e3c(void) {
    // 0x401e3c
    return abort();
}
// Address range: 0x401e41 - 0x401e46
int64_t function_401e41(void) {
    // 0x401e41
    abort();
    // UNREACHABLE
}
// Address range: 0x401e50 - 0x402363
int64_t function_401e50(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401e56
    function_403d10(a2);
    setlocale(LC_ALL, (char *)&g14);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_40b1f0(0x4039d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    char v2 = 0; // bp-216, 0x401ea8
    isatty(0);
    bool v3; // 0x401e50
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = 1; // 0x401edd
    int64_t v6 = 0; // 0x401edd
    int64_t v7; // 0x401e50
    int64_t v8; // 0x401e50
    int64_t v9; // 0x401e50
    int64_t v10; // 0x401e50
    int64_t v11; // 0x401e50
    int64_t v12; // 0x401e50
    char v13; // 0x401e50
    char v14; // 0x401e50
    char v15; // 0x401e50
    while (true) {
      lab_0x401ee0_2:
        // 0x401ee0
        v7 = v6;
        int64_t v16 = v9;
        v12 = v5;
        v15 = v14;
        int32_t v17 = function_4093f0(v1, a2, "dfirvIR", &g4, 0, v16);
        v10 = v16;
        switch (v17) {
            case -1: {
                goto lab_0x40212a;
            }
            case 105: {
                goto lab_0x402040;
            }
            default: {
                if (v17 > 105) {
                    // 0x401f0c
                    v13 = v15;
                    v5 = v12;
                    v8 = v16;
                    v6 = v7;
                    if (v17 == 129) {
                        goto lab_0x401ee0;
                    } else {
                        if (v17 > 129) {
                            // 0x401f1d
                            v13 = v15;
                            v5 = 1;
                            v8 = v16;
                            v6 = v7;
                            if (v17 != 131) {
                                if (v17 < 131) {
                                    int64_t v18 = 19; // 0x401f40
                                    int64_t v19 = *(int64_t *)(a2 - 8 + 8 * (int64_t)*(int32_t *)0x6102fc);
                                    int64_t v20 = (int64_t)"--no-preserve-root";
                                    unsigned char v21 = *(char *)v19; // 0x401f40
                                    char v22 = *(char *)v20; // 0x401f40
                                    char v23 = v22; // 0x401f40
                                    bool v24 = false; // 0x401f40
                                    while (v21 == v22) {
                                        v18--;
                                        int64_t v25 = v20 + v4; // 0x401f40
                                        int64_t v26 = v19 + v4; // 0x401f40
                                        v23 = v21;
                                        v24 = true;
                                        if (v18 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v19 = v26;
                                        v20 = v25;
                                        v21 = *(char *)v19;
                                        v22 = *(char *)v20;
                                        v23 = v22;
                                        v24 = false;
                                    }
                                    unsigned char v27 = v23;
                                    v13 = v15;
                                    v5 = 0;
                                    v8 = v16;
                                    v6 = v7;
                                    if ((v21 >= v27 && !v24) != v21 < v27) {
                                        goto lab_0x40231d;
                                    }
                                } else {
                                    // 0x401f90
                                    v13 = v15;
                                    v5 = v12;
                                    v8 = v16;
                                    v6 = v7;
                                    if (v17 != 132) {
                                        goto lab_0x401fb1_3;
                                    }
                                }
                            }
                            goto lab_0x401ee0;
                        } else {
                            // 0x401fd8
                            v13 = v15;
                            v5 = v12;
                            v8 = v16;
                            v6 = v7;
                            if (v17 == 118) {
                                goto lab_0x401ee0;
                            } else {
                                if (v17 != 128) {
                                    // 0x401fa8
                                    v13 = 1;
                                    v5 = v12;
                                    v8 = v16;
                                    v6 = v7;
                                    if (v17 != 114) {
                                        goto lab_0x401fb1_3;
                                    }
                                    goto lab_0x401ee0;
                                } else {
                                    // 0x401fe8
                                    v10 = v16;
                                    if (g57 == 0) {
                                        goto lab_0x402040;
                                    } else {
                                        int64_t v28 = function_403900("--interactive", g57, g3, (int64_t *)&g2, 4, g23); // 0x402010
                                        int32_t v29 = *(int32_t *)(4 * v28 + (int64_t)&g2); // 0x402015
                                        v13 = v15;
                                        v5 = v12;
                                        v8 = g23;
                                        v6 = 0;
                                        v11 = g23;
                                        switch (v29) {
                                            case 1: {
                                                goto lab_0x4020e0;
                                            }
                                            case 0: {
                                                goto lab_0x401ee0;
                                            }
                                            default: {
                                                // 0x40202d
                                                v13 = v15;
                                                v5 = v12;
                                                v8 = g23;
                                                v6 = v7;
                                                v10 = g23;
                                                if (v29 != 2) {
                                                    goto lab_0x401ee0;
                                                } else {
                                                    goto lab_0x402040;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    // 0x401f58
                    v11 = v16;
                    if (v17 == 73) {
                        goto lab_0x4020e0;
                    } else {
                        if (v17 <= 73) {
                            if (v17 == -131) {
                                struct _IO_FILE * v30 = g34; // 0x40207b
                                char (*v31)[5] = g22; // 0x402084
                                function_405e00((int64_t)v30, "rm", "GNU coreutils", (int64_t)v31, "Paul Rubin", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v17 == -130) {
                                // 0x4020c8
                                function_402450(0);
                                // UNREACHABLE
                            }
                            goto lab_0x401fb1_3;
                        }
                        // 0x401f67
                        v13 = v15;
                        v5 = v12;
                        v8 = v16;
                        v6 = v7;
                        if (v17 != 100) {
                            if (v17 != 102) {
                                // 0x402058
                                v13 = 1;
                                v5 = v12;
                                v8 = v16;
                                v6 = v7;
                                if (v17 != 82) {
                                    goto lab_0x401fb1_3;
                                }
                            } else {
                                // 0x401f79
                                v2 = 1;
                                v13 = v15;
                                v5 = v12;
                                v8 = v16;
                                v6 = 0;
                            }
                        }
                        goto lab_0x401ee0;
                    }
                }
            }
        }
    }
  lab_0x40212a:;
    int64_t v32 = g32;
    int64_t v33; // 0x401e50
    int64_t v34; // 0x401e50
    char * v35; // 0x401e50
    char * format; // 0x40234b
    if (v1 > v32) {
        // 0x402137
        v33 = v32;
        if (v15 != 0 == (v12 != 0)) {
            // 0x4022c6
            if (function_405950(&g40) == 0) {
                // 0x4022de
                function_4056e0(4, (int64_t)"/");
                error(1, *__errno_location(), dcgettext(NULL, "failed to get attributes of %s", 5));
              lab_0x40231d:
                // 0x40231d
                error(1, (int32_t)"you may not abbreviate the --no-preserve-root option" ^ (int32_t)"you may not abbreviate the --no-preserve-root option", dcgettext(NULL, "you may not abbreviate the --no-preserve-root option", 5));
                // 0x40233f
                format = dcgettext(NULL, "missing operand", 5);
                error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
                // 0x4022bc
                function_402450(1);
                // UNREACHABLE
            }
            // 0x4022c6
            v33 = g32;
        }
        // 0x402146
        v34 = v33;
        if (v7 == 0) {
            goto lab_0x4021b4;
        } else {
            uint64_t v36 = 0x100000000 * (a1 - v33) >> 32; // 0x40215f
            if (v15 != 0) {
                // 0x402215
                v35 = dcngettext(NULL, "%s: remove %lu argument recursively? ", "%s: remove %lu arguments recursively? ", (int32_t)v36, 5);
                goto lab_0x402192;
            } else {
                // 0x402168
                if (v36 < 4) {
                    goto lab_0x4021b4;
                } else {
                    // 0x40216e
                    v35 = dcngettext(NULL, "%s: remove %lu argument? ", "%s: remove %lu arguments? ", (int32_t)v36, 5);
                    goto lab_0x402192;
                }
            }
        }
    } else {
        goto lab_0x4021e9;
    }
  lab_0x401fb1_3:;
    int64_t v37; // 0x401e50
    if (v1 > 1) {
        // 0x401fbf
        v37 = 1;
        goto lab_0x401fbf_2;
    } else {
        goto lab_0x4022bc;
    }
  lab_0x402040:
    // 0x402040
    v2 = 0;
    v13 = v15;
    v5 = v12;
    v8 = v10;
    v6 = 0;
    goto lab_0x401ee0;
  lab_0x401ee0:
    // 0x401ee0
    v14 = v13;
    v9 = v8;
    goto lab_0x401ee0_2;
  lab_0x4020e0:
    // 0x4020e0
    v2 = 0;
    v13 = v15;
    v5 = v12;
    v8 = v11;
    v6 = 1;
    goto lab_0x401ee0;
  lab_0x4021e9:
    // 0x4021e9
    if (v2 != 0) {
        // 0x4021f5
        return 0;
    }
    // 0x40233f
    format = dcgettext(NULL, "missing operand", 5);
    error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
  lab_0x4022bc:
    // 0x4022bc
    function_402450(1);
    // UNREACHABLE
  lab_0x4021b4:;
    int64_t v38 = function_402f50(8 * v33 + a2, (int64_t *)&v2, v34); // 0x4021ba
    int32_t v39 = v38; // 0x4021bf
    if (v39 < 5) {
        // 0x4021f5
        return v39 == 4;
    }
    // 0x4021d0
    __assert_fail("VALID_STATUS (status)", "src/rm.c", 355, "main");
    goto lab_0x4021e9;
  lab_0x402192:
    // 0x402192
    __fprintf_chk(g37, 1, v35);
    v34 = (int64_t)v35;
    if ((char)function_406290() == 0) {
        // 0x4021f5
        return 0;
    }
    goto lab_0x4021b4;
  lab_0x401fbf_2:;
    int64_t v40 = *(int64_t *)(8 * v37 + a2); // 0x401fbf
    char * v41 = (char *)v40; // 0x401fc4
    if (*v41 == 45) {
        // 0x40223e
        if (*(char *)(v40 + 1) == 0) {
            goto lab_0x401fcf;
        } else {
            // 0x402249
            int64_t v42; // bp-184, 0x401e50
            if (__lxstat(1, v41, (struct stat *)&v42) != 0) {
                goto lab_0x401fcf;
            } else {
                // 0x402263
                function_4056e0(4, v40);
                function_405600(1, 3, v40);
                __fprintf_chk(g37, 1, dcgettext(NULL, "Try '%s ./%s' to remove the file %s.\n", 5));
                goto lab_0x4022bc;
            }
        }
    } else {
        goto lab_0x401fcf;
    }
  lab_0x401fcf:;
    int64_t v43 = v37 + 1; // 0x401fcf
    v37 = v43;
    if (v1 > v43) {
        goto lab_0x401fbf_2;
    } else {
        goto lab_0x4022bc;
    }
}
// Address range: 0x402370 - 0x40239b
// Address range: 0x40239b - 0x4023ba
int64_t function_40239b(void) {
    // 0x40239b
    return &g33;
}
// Address range: 0x4023ba - 0x4023f1
int64_t function_4023ba(void) {
    // 0x4023ba
    return 0;
}
// Address range: 0x4023f1 - 0x402448
int64_t function_4023f1(void) {
    // 0x4023f1
    if (g38 != 0) {
        // 0x402447
        int64_t result; // 0x4023f1
        return result;
    }
    int64_t v1 = g39; // 0x402424
    int64_t result2; // 0x402436
    if (g39 >= ((int64_t)&g19 - (int64_t)&g18 >> 3) - 1) {
        // 0x402436
        result2 = function_40239b();
        g38 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g19 - (int64_t)&g18 >> 3) - 1) {
        // 0x402426
        v1++;
    }
    // 0x40241a
    g39 = v1;
    // 0x402436
    result2 = function_40239b();
    g38 = 1;
    return result2;
}
// Address range: 0x402448 - 0x40244d
int64_t function_402448(void) {
    // 0x402448
    return function_4023ba();
}
// Address range: 0x402450 - 0x40281d
int64_t function_402450(int32_t status) {
    // 0x402450
    if (status != 0) {
        // 0x40246a
        __fprintf_chk(g37, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40248f
        exit(status);
        // UNREACHABLE
    }
    // 0x402496
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Remove (unlink) the FILE(s).\n\n  -f, --force           ignore nonexistent files and arguments, never prompt\n  -i                    prompt before every removal\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "  -I                    prompt once before removing more than three files, or\n                          when removing recursively; less intrusive than -i,\n                          while still giving protection against most mistakes\n      --interactive[=WHEN]  prompt according to WHEN: never, once (-I), or\n                          always (-i); without WHEN, prompt always\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --one-file-system  when removing a hierarchy recursively, skip any\n                          directory that is on a file system different from\n                          that of the corresponding command line argument\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --no-preserve-root  do not treat '/' specially\n      --preserve-root   do not remove '/' (default)\n  -r, -R, --recursive   remove directories and their contents recursively\n  -d, --dir             remove empty directories\n  -v, --verbose         explain what is being done\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "\nBy default, rm does not remove directories.  Use the --recursive (-r or -R)\noption to remove each listed directory, too, along with all of its contents.\n", 5), g34);
    __printf_chk(1, dcgettext(NULL, "\nTo remove a file whose name starts with a '-', for example '-foo',\nuse one of these commands:\n  %s -- -foo\n\n  %s ./-foo\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nNote that if you use rm to remove a file, it might be possible to recover\nsome of its contents, given sufficient expertise and/or time.  For greater\nassurance that the contents are truly unrecoverable, consider using shred.\n", 5), g34);
    int64_t v1 = &g1; // bp-136, 0x4025f9
    bool v2; // 0x402450
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402680
    int64_t v6 = *(int64_t *)v5; // 0x402684
    int64_t v7 = 3; // 0x40268a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"rm";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402696
        char v11 = *(char *)v9; // 0x402696
        char v12 = v11; // 0x402696
        bool v13 = false; // 0x402696
        while (v10 == v11) {
            // 0x40268c
            v7--;
            int64_t v14 = v9 + v3; // 0x402696
            int64_t v15 = v8 + v3; // 0x402696
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
            // break -> 0x4026a2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x4026a2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4027b4;
        } else {
            // 0x40279e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4027f3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402704;
            } else {
                goto lab_0x4027b4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402704;
        } else {
            // 0x4026ea
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4027f3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402704;
            } else {
                goto lab_0x402704;
            }
        }
    }
  lab_0x4027b4:
    // 0x4027b4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402744
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40248f
    exit(status);
    // UNREACHABLE
  lab_0x402704:
    // 0x402704
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402744
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40248f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402820 - 0x402a29
int64_t function_402820(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * path = (int64_t *)(a2 + 48); // 0x40283d
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x402841
    int32_t fd = *v1; // 0x402841
    if (unlinkat(fd, (char *)*path, 512 * (int32_t)((char)a4 != 0)) == 0) {
        // 0x402960
        if (*(char *)(a3 + 25) == 0) {
            // 0x4028ff
            return 2;
        }
        // 0x40296d
        function_4056e0(4, *(int64_t *)(a2 + 56));
        char * v2; // 0x402820
        if ((char)a4 == 0) {
            // 0x4029f8
            v2 = dcgettext(NULL, "removed %s\n", 5);
        } else {
            // 0x402988
            v2 = dcgettext(NULL, "removed directory %s\n", 5);
        }
        // 0x402997
        __printf_chk(1, v2);
        return 2;
    }
    int32_t * err_num = __errno_location(); // 0x402857
    uint32_t v3 = *err_num; // 0x40285c
    if (v3 == 30) {
        // 0x4029c0
        int64_t v4; // bp-184, 0x402820
        if (__fxstatat(1, *v1, (char *)*path, (struct stat *)&v4, 256) != 0) {
            // 0x4029de
            if (*err_num == 2) {
                // 0x4028ff
                return 2;
            }
        }
        // 0x4029e7
        *err_num = 30;
        goto lab_0x40289a;
    } else {
        if ((char)v3 == 0) {
            goto lab_0x40288f;
        } else {
            // 0x402871
            if (v3 == 20) {
                // 0x4028ff
                return 2;
            }
            if (v3 > 20) {
                // 0x402885
                switch (v3) {
                    case 22: {
                    }
                    case 84: {
                        // 0x4028ff
                        return 2;
                    }
                }
                goto lab_0x40288f;
            } else {
                // 0x402910
                if (v3 == 2) {
                    // 0x4028ff
                    return 2;
                }
                // 0x402915
                if (v3 < 40 == *(int16_t *)(a2 + 112) == 4) {
                    goto lab_0x402929;
                } else {
                    goto lab_0x40289a;
                }
            }
        }
    }
  lab_0x40289a:
    // 0x40289a
    function_4056e0(4, *(int64_t *)(a2 + 56));
    error(0, *err_num, dcgettext(NULL, "cannot remove %s", 5));
    int64_t v5 = *(int64_t *)(a2 + 8); // 0x4028cf
    if (*(int64_t *)(v5 + 88) < 0) {
        // 0x4028ff
        return 4;
    }
    int64_t v6 = v5; // 0x4028d8
    int64_t * v7 = (int64_t *)(v6 + 32); // 0x4028f3
    while (*v7 == 0) {
        // 0x4028e0
        *v7 = 1;
        int64_t v8 = *(int64_t *)(v6 + 8); // 0x4028e8
        v6 = v8;
        if (*(int64_t *)(v8 + 88) < 0) {
            // break -> 0x4028ff
            break;
        }
        v7 = (int64_t *)(v6 + 32);
    }
    // 0x4028ff
    return 4;
  lab_0x40288f:
    // 0x40288f
    if (v3 < 40 == *(int16_t *)(a2 + 112) == 4) {
        goto lab_0x402929;
    } else {
        goto lab_0x40289a;
    }
  lab_0x402929:
    if ((1 << (int64_t)(v3 % 64) & 0x8000320000) != 0) {
        int32_t v9 = *(int32_t *)(a2 + 64); // 0x40293d
        if (v9 != 1 != v9 != 13) {
            // 0x40294e
            *err_num = v9;
        }
    }
    goto lab_0x40289a;
}
// Address range: 0x402a30 - 0x402aa0
int64_t function_402a30(int32_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 48); // 0x402a31
    int64_t v3 = *v2; // 0x402a31
    int64_t v4 = v3; // 0x402a3c
    if (v3 == -1) {
        // 0x402a50
        if (__fxstatat(1, a1, (char *)a2, (struct stat *)a3, 256) != 0) {
            // 0x402a6c
            *v2 = -2;
            int32_t * v5 = __errno_location(); // 0x402a74
            int32_t v6 = *v5; // 0x402a79
            *(int64_t *)(v1 + 8) = (int64_t)v6;
            // 0x402a83
            *v5 = v6;
            return 0xffffffff;
        }
        // 0x402a90
        v4 = *v2;
    }
    // 0x402a3e
    if (v4 >= 0) {
        // 0x402a43
        return 0;
    }
    // 0x402a83
    *__errno_location() = *(int32_t *)(v1 + 8);
    return 0xffffffff;
}
// Address range: 0x402aa0 - 0x402f42
int64_t function_402aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402aa0
    int64_t v1; // 0x402aa0
    int64_t v2 = v1;
    int32_t fd = *(int32_t *)(a1 + 44); // 0x402ab7
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x402aba
    int64_t path = *(int64_t *)(a2 + 48); // 0x402ac3
    struct dirent * v4; // 0x402aa0
    int64_t v5; // 0x402aa0
    int64_t v6; // 0x402aa0
    struct __dirstream * dirp; // 0x402b0f
    if (a6 == 0) {
        // 0x402d30
        v6 = v2 + (int64_t)((char)a3 == 0) + (v2 ^ 7) & 4;
        v5 = (char)a3 != 0 ? 0 : a3 & 0xffffffff;
    } else {
        int32_t * v7 = (int32_t *)(int64_t)a6; // 0x402ad9
        *v7 = 2;
        uint32_t fd2 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY | O_NOFOLLOW); // 0x402b00
        int32_t v8 = 3; // 0x402b07
        int64_t v9 = 0; // 0x402b07
        if (fd2 >= 0) {
            // 0x402b09
            dirp = fdopendir(fd2);
            if (dirp == NULL) {
                // 0x402ea0
                close(fd2);
                v8 = 3;
                v9 = 0;
            } else {
                int32_t * v10 = __errno_location(); // 0x402b24
                *v10 = 0;
                struct dirent * v11 = readdir(dirp); // 0x402b37
                v4 = v11;
                if (v11 == NULL) {
                  lab_0x402df8:;
                    int32_t v12 = *(int32_t *)(0x100000000 * (int64_t)v10 >> 32); // 0x402e00
                    closedir(dirp);
                    v8 = v12 != 0 ? 3 : 4;
                    v9 = v12 == 0;
                } else {
                    while (true) {
                      lab_0x402b45:;
                        int64_t v13 = (int64_t)v4;
                        if (*(char *)(v13 + 19) != 46) {
                            // break -> 0x402b4f
                            break;
                        }
                        int64_t v14 = v13 + 20; // 0x402dd2
                        char v15 = *(char *)(v14 + (int64_t)(*(char *)v14 == 46)); // 0x402dd9
                        switch (v15) {
                            case 0: {
                                goto lab_0x402b34;
                            }
                            case 47: {
                                goto lab_0x402b34;
                            }
                            default: {
                                goto lab_0x402b4f;
                            }
                        }
                    }
                  lab_0x402b4f:
                    // 0x402b4f
                    closedir(dirp);
                    v8 = 3;
                    v9 = 0;
                }
            }
        }
        // 0x402b5f
        *v7 = v8;
        v6 = 4 * (int64_t)((char)a3 != 0);
        v5 = v9;
    }
    // 0x402b63
    if (*(int64_t *)(a2 + 32) != 0) {
        // 0x402c85
        return 3;
    }
    int32_t * v16 = (int32_t *)(a4 + 4); // 0x402b6e
    int32_t v17 = *v16; // 0x402b6e
    if (v17 == 5) {
        // 0x402c85
        return 2;
    }
    int32_t v18 = v17; // 0x402b7e
    int32_t v19; // 0x402aa0
    int64_t v20; // 0x402aa0
    int64_t v21; // bp-200, 0x402aa0
    int32_t v22; // 0x402aa0
    if (*(char *)&v20 != 0) {
        goto lab_0x402cb3;
    } else {
        if (v17 != 3) {
            // 0x402b89
            if (*(char *)(a4 + 24) == 0) {
                // 0x402c85
                return 2;
            }
        }
        // 0x402b93
        if ((char)function_405f40() != 0) {
            // 0x402cb0
            v18 = *v16;
            goto lab_0x402cb3;
        } else {
            // 0x402ba0
            if ((int32_t)function_402a30(fd, path, &v21) != 0) {
                goto lab_0x402e80;
            } else {
                int32_t v23; // 0x402aa0
                if ((v23 & 0xf000) == 0xa000) {
                    // 0x402cb0
                    v18 = *v16;
                    goto lab_0x402cb3;
                } else {
                    // 0x402bd0
                    if (faccessat(fd, (char *)path, W_OK, AT_REMOVEDIR) == 0) {
                        // 0x402cb0
                        v18 = *v16;
                        goto lab_0x402cb3;
                    } else {
                        int32_t v24 = *__errno_location(); // 0x402bf3
                        v22 = 1;
                        v19 = v24;
                        if (v24 != 13) {
                            goto lab_0x402e88;
                        } else {
                            goto lab_0x402cbb;
                        }
                    }
                }
            }
        }
    }
  lab_0x402b34:;
    struct dirent * v25 = readdir(dirp); // 0x402b37
    v4 = v25;
    if (v25 == NULL) {
        goto lab_0x402df8;
    }
    goto lab_0x402b45;
  lab_0x402cb3:
    // 0x402cb3
    v22 = 0;
    if (v18 != 3) {
        // 0x402c85
        return 2;
    }
    goto lab_0x402cbb;
  lab_0x402cbb:;
    int32_t v26 = v6; // 0x402cbb
    if (v26 == 0) {
        // 0x402e30
        if ((int32_t)function_402a30(fd, path, &v21) != 0) {
            goto lab_0x402e80;
        } else {
            int32_t v27; // 0x402aa0
            switch ((int16_t)v27 & -0x1000) {
                case -0x6000: {
                    // 0x402ee8
                    if (*v16 != 3) {
                        // 0x402c85
                        return 2;
                    }
                    // 0x402e67
                    function_4056e0(4, v3);
                    goto lab_0x402c15;
                }
                case 0x4000: {
                    goto lab_0x402ccc;
                }
                default: {
                    // 0x402e67
                    function_4056e0(4, v3);
                    goto lab_0x402c15;
                }
            }
        }
    } else {
        if (v26 != 4) {
            // 0x402e67
            function_4056e0(4, v3);
            goto lab_0x402c15;
        } else {
            goto lab_0x402ccc;
        }
    }
  lab_0x402e80:
    // 0x402e80
    v19 = *__errno_location();
    goto lab_0x402e88;
  lab_0x402ccc:;
    // 0x402ccc
    int32_t err_num; // 0x402aa0
    if (*(char *)(a4 + 9) != 0) {
        // 0x402d60
        function_4056e0(4, v3);
        if ((int32_t)a5 != 2) {
            goto lab_0x402c15;
        } else {
            if ((char)v5 != 0) {
                goto lab_0x402c15;
            } else {
                char * v29; // 0x402aa0
                if (v22 != 0) {
                    // 0x402ed0
                    v29 = dcgettext(NULL, "%s: descend into write-protected directory %s? ", 5);
                } else {
                    // 0x402d9b
                    v29 = dcgettext(NULL, "%s: descend into directory %s? ", 5);
                }
                // 0x402daa
                __fprintf_chk(g37, 1, v29);
                goto lab_0x402c77;
            }
        }
    } else {
        // 0x402cd6
        if (*(char *)(a4 + 10) == 0) {
            // 0x402ce5
            function_4056e0(4, v3);
            err_num = 21;
            goto lab_0x402cfd;
        } else {
            if ((char)v5 != 0) {
                // 0x402e67
                function_4056e0(4, v3);
                goto lab_0x402c15;
            } else {
                // 0x402ce5
                function_4056e0(4, v3);
                err_num = 21;
                goto lab_0x402cfd;
            }
        }
    }
  lab_0x402e88:
    // 0x402e88
    function_4056e0(4, v3);
    err_num = v19;
    goto lab_0x402cfd;
  lab_0x402c15:
    // 0x402c15
    if ((int32_t)function_402a30(fd, path, &v21) != 0) {
        // 0x402f00
        error(0, *__errno_location(), dcgettext(NULL, "cannot remove %s", 5));
        // 0x402c85
        return 4;
    }
    // 0x402c2c
    function_403c20(&v21);
    char * v28; // 0x402aa0
    if (v22 != 0) {
        // 0x402eb8
        v28 = dcgettext(NULL, "%s: remove write-protected %s %s? ", 5);
    } else {
        // 0x402c4c
        v28 = dcgettext(NULL, "%s: remove %s %s? ", 5);
    }
    // 0x402c58
    __fprintf_chk(g37, 1, v28);
    goto lab_0x402c77;
  lab_0x402cfd:
    // 0x402cfd
    error(0, err_num, dcgettext(NULL, "cannot remove %s", 5));
    // 0x402c85
    return 4;
  lab_0x402c77:
    // 0x402c77
    if ((char)function_406290() == 0) {
        // 0x402c85
        return 3;
    }
    // 0x402c85
    return 2;
}
// Address range: 0x402f50 - 0x403626
int64_t function_402f50(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x402f50
    if (a1 == 0) {
        // 0x40304a
        return 2;
    }
    int64_t v1 = (int64_t)a2;
    char * v2 = (char *)(v1 + 8); // 0x402f68
    int64_t v3 = *v2 == 0 ? 536 : 600; // 0x402f7c
    int64_t v4 = function_406210(a1, (int32_t)v3); // 0x402f82
    int64_t v5 = fts_read(v4); // 0x402f93
    g58 = v5;
    int64_t v6 = 2; // 0x402f9e
    if (v5 == 0) {
      lab_0x403028_2:;
        int32_t * err_num = __errno_location(); // 0x403028
        if (*err_num != 0) {
            // 0x403480
            error(0, *err_num, dcgettext(NULL, "fts_read failed", 5));
            if ((int32_t)fts_close(v4) == 0) {
                // 0x40304a
                return 4;
            }
        } else {
            // 0x40303a
            if ((int32_t)fts_close(v4) == 0) {
                // 0x40304a
                return v6 & 0xffffffff;
            }
        }
        // 0x4034b5
        error(0, *err_num, dcgettext(NULL, "fts_close failed", 5));
        // 0x40304a
        return 4;
    }
    char * v7 = (char *)(v1 + 10);
    bool v8; // 0x402f50
    int64_t v9 = v8 ? -1 : 1;
    int32_t v10; // bp-60, 0x402f50
    int32_t v11 = &v10;
    int64_t v12 = v5; // 0x402f93
    int64_t v13 = 2;
    int64_t v14 = v3; // 0x402f50
    struct dirent * v15; // 0x402f50
    int64_t v16; // 0x402f50
    int64_t v17; // 0x402f50
    int64_t v18; // 0x402f50
    int64_t v19; // 0x402f50
    int64_t v20; // 0x402f50
    int64_t v21; // 0x402f50
    int64_t v22; // 0x402f50
    int64_t v23; // 0x402f50
    int32_t err_num3; // 0x402f50
    int32_t err_num2; // 0x402f50
    char * format; // 0x402f50
    int16_t v24; // 0x402fa4
    int64_t path; // 0x40313e
    struct __dirstream * dirp; // 0x40315a
    int32_t * v25; // 0x40316b
    while (true) {
      lab_0x402fa4_2:
        // 0x402fa4
        v16 = v12;
        v20 = v12;
        v22 = v14;
        v18 = v13;
        while (true) {
          lab_0x402fa4:
            // 0x402fa4
            v19 = v18;
            v21 = v20;
            switch (v16) {
                case 1: {
                    // 0x403128
                    v23 = v22;
                    if (*(char *)(v1 + 9) != 0) {
                        goto lab_0x4031c0;
                    } else {
                        // 0x403133
                        if (*v7 == 0) {
                            // 0x4032d0
                            err_num3 = 21;
                            goto lab_0x4032d6;
                        } else {
                            // 0x40313e
                            path = *(int64_t *)(v21 + 48);
                            int32_t fd = openat(*(int32_t *)(v4 + 44), (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY | O_NOFOLLOW); // 0x40314c
                            if (fd < 0) {
                                goto lab_0x403198;
                            } else {
                                // 0x403158
                                dirp = fdopendir(fd);
                                if (dirp == NULL) {
                                    // 0x40355b
                                    close(fd);
                                    goto lab_0x403198;
                                } else {
                                    // 0x40316b
                                    v25 = __errno_location();
                                    *v25 = 0;
                                    struct dirent * v26 = readdir(dirp); // 0x40317c
                                    v15 = v26;
                                    if (v26 == NULL) {
                                        goto lab_0x4031ae;
                                    } else {
                                        while (true) {
                                          lab_0x403186:;
                                            int64_t v27 = (int64_t)v15;
                                            if (*(char *)(v27 + 19) != 46) {
                                                // break -> 0x403190
                                                break;
                                            }
                                            int64_t v28 = v27 + 20; // 0x4033d2
                                            char v29 = *(char *)(v28 + (int64_t)(*(char *)v28 == 46)); // 0x4033d9
                                            switch (v29) {
                                                case 0: {
                                                    goto lab_0x403179;
                                                }
                                                case 47: {
                                                    goto lab_0x403179;
                                                }
                                                default: {
                                                    goto lab_0x403190;
                                                }
                                            }
                                        }
                                      lab_0x403190:
                                        // 0x403190
                                        closedir(dirp);
                                        goto lab_0x403198;
                                    }
                                }
                            }
                        }
                    }
                }
                case 2: {
                    // 0x4030f0
                    function_4057b0(0, 3, *(int64_t *)(v21 + 56));
                    err_num2 = (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n" ^ (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n";
                    format = dcgettext(NULL, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", 5);
                    goto lab_0x402fed;
                }
                case 3: {
                    goto lab_0x403060;
                }
                case 4: {
                    goto lab_0x403060;
                }
                case 6: {
                    goto lab_0x403060;
                }
                case 7: {
                    // 0x402fc0
                    function_4057b0(0, 3, *(int64_t *)(v21 + 56));
                    char * v30 = dcgettext(NULL, "traversal failed: %s", 5); // 0x402fdf
                    err_num2 = *(int32_t *)(v21 + 64);
                    format = v30;
                    goto lab_0x402fed;
                }
                case 8: {
                    goto lab_0x403060;
                }
                case 10: {
                    goto lab_0x403060;
                }
                case 11: {
                    goto lab_0x403060;
                }
                case 12: {
                    goto lab_0x403060;
                }
                case 13: {
                    goto lab_0x403060;
                }
                default: {
                    goto lab_0x403568;
                }
            }
        }
      lab_0x403060:
        // 0x403060
        v24 = *(int16_t *)(v21 + 112);
        if (v24 != 6) {
            goto lab_0x403088;
        } else {
            // 0x403066
            if (*v2 == 0) {
                goto lab_0x403088;
            } else {
                // 0x40306d
                if (*(int64_t *)(v21 + 88) < 1) {
                    goto lab_0x403088;
                } else {
                    // 0x403074
                    if (*(int64_t *)(v21 + 120) != *(int64_t *)(v4 + 24)) {
                        int64_t v31 = *(int64_t *)(v21 + 8); // 0x4034e0
                        int64_t v32 = v31; // 0x4034e9
                        if (*(int64_t *)(v31 + 88) >= 0) {
                            int64_t v33 = v32;
                            int64_t * v34 = (int64_t *)(v33 + 32); // 0x403503
                            while (*v34 == 0) {
                                // 0x4034f0
                                *v34 = 1;
                                int64_t v35 = *(int64_t *)(v33 + 8); // 0x4034f8
                                v32 = v35;
                                if (*(int64_t *)(v35 + 88) < 0) {
                                    // break -> 0x40350a
                                    break;
                                }
                                v33 = v32;
                                v34 = (int64_t *)(v33 + 32);
                            }
                        }
                        // 0x40350a
                        function_4056e0(4, *(int64_t *)(v21 + 56));
                        error(0, (int32_t)"skipping %s, since it's on a different device" ^ (int32_t)"skipping %s, since it's on a different device", dcgettext(NULL, "skipping %s, since it's on a different device", 5));
                        v14 = (int32_t)"skipping %s, since it's on a different device" ^ (int32_t)"skipping %s, since it's on a different device";
                        v17 = 4;
                        goto lab_0x402f90;
                    } else {
                        goto lab_0x403088;
                    }
                }
            }
        }
    }
  lab_0x403568:
    // 0x403568
    function_4057b0(0, 3, *(int64_t *)(v21 + 56));
    error(0, (int32_t)"unexpected failure: fts_info=%d: %s\nplease report to %s" ^ (int32_t)"unexpected failure: fts_info=%d: %s\nplease report to %s", dcgettext(NULL, "unexpected failure: fts_info=%d: %s\nplease report to %s", 5));
    abort();
    // UNREACHABLE
  lab_0x4031f2_4:;
    int64_t v36 = function_402aa0(v4, v21, 1, v1, 2, v11); // 0x40320b
    int64_t v37 = v36; // 0x403216
    if ((int32_t)v36 == 2) {
        // 0x403280
        v14 = v21;
        v17 = v19;
        if (v10 != 4) {
            goto lab_0x402f90;
        } else {
            int64_t v38 = function_402820(v4, v21, v1, 1); // 0x403299
            fts_set(v4, v21, 4);
            fts_read(v4);
            v14 = v21;
            v17 = v19;
            v37 = v38;
            if ((int32_t)v38 == 2) {
                goto lab_0x402f90;
            } else {
                goto lab_0x403218;
            }
        }
    } else {
        goto lab_0x403218;
    }
  lab_0x4031ae:
    // 0x4031ae
    closedir(dirp);
    v23 = path;
    if (*v25 != 0) {
        goto lab_0x403198;
    } else {
        goto lab_0x4031c0;
    }
  lab_0x403179:;
    struct dirent * v39 = readdir(dirp); // 0x40317c
    v15 = v39;
    if (v39 == NULL) {
        goto lab_0x4031ae;
    }
    goto lab_0x403186;
  lab_0x4031c0:
    // 0x4031c0
    if (*(int64_t *)(v21 + 88) != 0) {
        goto lab_0x4031f2_4;
    }
    int64_t v40 = function_403b90(*(int64_t *)(v21 + 48), v23); // 0x4031cb
    if (*(char *)v40 == 46) {
        int64_t v41 = v40 + 1; // 0x40334a
        char v42 = *(char *)(v41 + (int64_t)(*(char *)v41 == 46)); // 0x403351
        if (v42 != 0 == (v42 != 47)) {
            goto lab_0x4031d9;
        } else {
            // 0x403362
            function_405600(2, 4, *(int64_t *)(v21 + 56));
            function_405600(1, 4, (int64_t)"..");
            function_405600(0, 4, (int64_t)&g5);
            error(0, (int32_t)"refusing to remove %s or %s directory: skipping %s" ^ (int32_t)"refusing to remove %s or %s directory: skipping %s", dcgettext(NULL, "refusing to remove %s or %s directory: skipping %s", 5));
            goto lab_0x402ff6;
        }
    } else {
        goto lab_0x4031d9;
    }
  lab_0x402fed:
    // 0x402fed
    error(0, err_num2, format);
    goto lab_0x402ff6;
  lab_0x4031d9:;
    int64_t v59 = *(int64_t *)(v1 + 16); // 0x4031d9
    if (v59 == 0) {
        goto lab_0x4031f2_4;
    }
    // 0x4031e2
    if (*(int64_t *)(v21 + 128) != *(int64_t *)v59) {
        goto lab_0x4031f2_4;
    }
    // 0x4033f8
    if (*(int64_t *)(v21 + 120) != *(int64_t *)(v59 + 8)) {
        goto lab_0x4031f2_4;
    }
    int64_t * v60 = (int64_t *)(v21 + 56); // 0x403406
    int64_t v61 = *v60; // 0x403406
    int64_t v62 = 2; // 0x402f50
    int64_t v63 = v61;
    int64_t v64 = (int64_t)"/";
    unsigned char v65 = *(char *)v63; // 0x403417
    char v66 = *(char *)v64; // 0x403417
    char v67 = v66; // 0x403417
    bool v68 = false; // 0x403417
    while (v65 == v66) {
        int64_t v69 = v62 - 1; // 0x403417
        int64_t v70 = v64 + v9; // 0x403417
        int64_t v71 = v63 + v9; // 0x403417
        v62 = v69;
        v67 = v65;
        v68 = true;
        if (v69 == 0) {
            // break -> 
            break;
        }
        v63 = v71;
        v64 = v70;
        v65 = *(char *)v63;
        v66 = *(char *)v64;
        v67 = v66;
        v68 = false;
    }
    unsigned char v72 = v67;
    if ((v65 >= v72 && !v68) != v65 < v72) {
        // 0x4035ae
        function_405600(1, 4, (int64_t)"/");
        function_405600(0, 4, *v60);
        error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
    } else {
        // 0x403426
        function_4056e0(4, v61);
        error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
    }
    // 0x403458
    error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
    goto lab_0x402ff6;
  lab_0x402ff6:
    // 0x402ff6
    fts_set(v4, v21, 4);
    fts_read(v4);
    int64_t v43 = fts_read(v4); // 0x403017
    v6 = 4;
    if (v43 == 0) {
        goto lab_0x403028_2;
    }
    // 0x402fa4
    v16 = g58;
    v20 = v43;
    v22 = v21;
    v18 = 4;
    goto lab_0x402fa4;
  lab_0x4032d6:
    // 0x4032d6
    function_4056e0(4, *(int64_t *)(v21 + 56));
    error(0, err_num3, dcgettext(NULL, "cannot remove %s", 5));
    if (*(int64_t *)(*(int64_t *)(v21 + 8) + 88) >= 0) {
        int64_t v44; // 0x402f50
        int64_t v45 = v44;
        int64_t * v46 = (int64_t *)(v45 + 32); // 0x403337
        int64_t v47 = *v46; // 0x403337
        while (v47 == 0) {
            // 0x403320
            *v46 = 1;
            int64_t v48 = *(int64_t *)(v45 + 8); // 0x403328
            int64_t v49 = *(int64_t *)(v48 + 88); // 0x40332c
            v44 = v48;
            if (v49 < 0) {
                // break -> 0x402ff6
                break;
            }
            v45 = v44;
            v46 = (int64_t *)(v45 + 32);
            v47 = *v46;
        }
    }
    goto lab_0x402ff6;
  lab_0x403198:
    // 0x403198
    err_num3 = 39;
    if (*v7 == 0) {
        // 0x4032d0
        err_num3 = 21;
        goto lab_0x4032d6;
    } else {
        goto lab_0x4032d6;
    }
  lab_0x403088:;
    int64_t v50 = (v24 - 4 & -3) == 0; // 0x4030a1
    int64_t v51 = function_402aa0(v4, v21, v50, v1, 3, 0); // 0x4030ab
    int64_t v52 = v51; // 0x4030b6
    if ((int32_t)v51 == 2) {
        // 0x403260
        v52 = function_402820(v4, v21, v1, v50);
    }
    goto lab_0x4030bc;
  lab_0x4030bc:;
    int32_t v53 = v52;
    if (v53 < 5) {
        // 0x4030c9
        v14 = v21;
        v17 = 4;
        if (v53 != 4) {
            // 0x4030d3
            v14 = v21;
            v17 = v19;
            if (v53 == 3) {
                // 0x4030dd
                v14 = v21;
                v17 = (int32_t)v19 == 2 ? 3 : v19 & 0xffffffff;
            }
        }
    } else {
        // 0x403602
        __assert_fail("VALID_STATUS (s)", "src/remove.c", 574, "rm");
        v14 = (int64_t)"src/remove.c";
        v17 = 4;
    }
    goto lab_0x402f90;
  lab_0x402f90:
    // 0x402f90
    v13 = v17;
    v12 = fts_read(v4);
    g58 = v12;
    v6 = v13;
    if (v12 == 0) {
        goto lab_0x403028_2;
    }
    goto lab_0x402fa4_2;
  lab_0x403218:;
    int64_t v54 = *(int64_t *)(v21 + 8); // 0x403218
    int64_t v55 = v54; // 0x403221
    if (*(int64_t *)(v54 + 88) >= 0) {
        goto lab_0x40323b;
    } else {
        goto lab_0x403242;
    }
  lab_0x40323b:;
    int64_t v56 = v55;
    int64_t * v57 = (int64_t *)(v56 + 32); // 0x40323b
    if (*v57 == 0) {
        // 0x403228
        *v57 = 1;
        int64_t v58 = *(int64_t *)(v56 + 8); // 0x403230
        v55 = v58;
        if (*(int64_t *)(v58 + 88) < 0) {
            goto lab_0x403242;
        } else {
            goto lab_0x40323b;
        }
    } else {
        goto lab_0x403242;
    }
  lab_0x403242:
    // 0x403242
    fts_set(v4, v21, 4);
    fts_read(v4);
    v52 = v37;
    goto lab_0x4030bc;
}
// Address range: 0x403630 - 0x40363a
int64_t function_403630(void) {
    // 0x403630
    return function_402450(1);
}
// Address range: 0x403640 - 0x403756
int64_t function_403640(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x403661
    int32_t len = strlen(str); // 0x403661
    if (a2 == 0) {
        // 0x40372d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x4036c7
    int64_t v4 = a3; // 0x403640
    int64_t v5 = a2; // 0x4036ce
    int64_t str4; // 0x403640
    int64_t v6; // 0x403640
    int32_t v7; // 0x403640
    int32_t v8; // 0x403640
    int32_t v9; // 0x403640
    int64_t v10; // 0x403640
    int64_t result; // 0x403640
    int32_t v11; // 0x4036c3
    char * str2; // 0x4036e2
    while (true) {
        // 0x4036d7
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x4036eb
            result = v6;
            if (len == strlen(str2)) {
                // 0x40372d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x4036ff
                break;
            }
            // 0x403690
            v7 = 1;
            if (a3 != 0) {
                // 0x40369e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x4036c7
        v2 = v7;
        v3 = v6 + 1;
        v5 = *(int64_t *)(8 * v3 + a2);
        v4 = str4 + n;
        v10 = v1;
        v9 = v2;
        if (v5 == 0) {
            return (char)v9 == 0 ? v10 : -2;
        }
    }
    int64_t v12 = v6 + 1; // 0x403703
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x40370a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x4036d7
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x4036d7
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x4036eb
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40372d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x4036ff
                    break;
                }
                // 0x403690
                v7 = 1;
                if (a3 != 0) {
                    // 0x40369e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x4036c7
            v2 = v7;
            v3 = v6 + 1;
            v5 = *(int64_t *)(8 * v3 + a2);
            v4 = str4 + n;
            v10 = v1;
            v9 = v2;
            if (v5 == 0) {
                return (char)v9 == 0 ? v10 : -2;
            }
        }
        // 0x4036ff
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x403718:
    // 0x40372d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x403760 - 0x4037d1
int64_t function_403760(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x403760
    if (a3 == -1) {
        // 0x4037c0
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x403775
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x403784
    function_405910(1, a1);
    function_405600(0, 8, a2);
    error(0, 0, format);
    return &g60;
}
// Address range: 0x4037e0 - 0x4038f8
int64_t function_4037e0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40380d
    fputs_unlocked(v1, g37);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x403880
        int64_t v5; // 0x403887
        int64_t v6; // 0x4038a7
        while (v3 != 0) {
            // 0x40386b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x403830
                break;
            }
            // 0x40387d
            v4 = v3 + 1;
            v5 = function_405930(v2);
            __fprintf_chk(g37, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x4038b0
                goto lab_0x4038b0;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x403833
        int64_t v8 = function_405930(v2); // 0x40383d
        __fprintf_chk(g37, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40385d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40386b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x403830
                    break;
                }
                // 0x40387d
                v4 = v3 + 1;
                v5 = function_405930(v2);
                __fprintf_chk(g37, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x4038b0
                    goto lab_0x4038b0;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x403830
            v7 = v3 + 1;
            v8 = function_405930(v2);
            __fprintf_chk(g37, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x4038b0:;
    int64_t v10 = (int64_t)g37; // 0x4038b0
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x4038b7
    uint64_t result = *v11; // 0x4038b7
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x4038e0
        return __overflow(g37, 10);
    }
    // 0x4038c1
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x403900 - 0x403970
int64_t function_403900(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_403640(a2, v2, v1, a5); // 0x40392c
    int64_t result = v3; // 0x403934
    if (v3 < 0) {
        // 0x403948
        function_403760((int64_t)a1, a2, v3);
        function_4037e0(v2, v1, a5);
        result = -1;
    }
    // 0x403936
    return result;
}
// Address range: 0x403970 - 0x4039bd
int64_t function_403970(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x403970
    if (result == 0) {
        // 0x4039b1
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x4039a8
    int32_t n = a4; // 0x4039a8
    int64_t v1 = result; // 0x4039af
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x4039b1
        return result;
    }
    int64_t str3 = str2; // 0x4039af
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x403990
    int64_t result2 = 0; // 0x40399d
    while (v2 != 0) {
        // 0x40399f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x4039b1
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x4039b1
    return result2;
}
// Address range: 0x4039c0 - 0x4039c8
int64_t function_4039c0(int64_t a1) {
    // 0x4039c0
    g41 = a1;
    int64_t result; // 0x4039c0
    return result;
}
// Address range: 0x4039d0 - 0x403acd
int64_t function_4039d0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g35; // 0x4039d4
    int64_t v2; // 0x4039d0
    if (function_406340(v1) != 0) {
        int64_t v3 = function_406370(v1, 0, 1); // 0x403a8a
        int64_t v4 = (int64_t)g35; // 0x403a8f
        v2 = v4;
        if ((int32_t)v3 == 0) {
            int64_t v5 = function_406300(v4, 0); // 0x403a08
            int64_t v6 = (int64_t)g35; // 0x403a0d
            v2 = v6;
            if ((int32_t)v5 == 0) {
                goto lab_0x403a9e;
            } else {
                // 0x403a1c
                function_4094f0(v6);
                goto lab_0x403a28;
            }
        } else {
            goto lab_0x403a9e;
        }
    } else {
        // 0x4039ec
        if ((int32_t)function_4094f0(v1) == 0) {
            // 0x4039f8
            return function_403af0();
        }
        goto lab_0x403a28;
    }
  lab_0x403a9e:
    // 0x403a9e
    if ((int32_t)function_4094f0(v2) == 0) {
        // 0x403aab
        return function_403af0();
    }
    goto lab_0x403a28;
  lab_0x403a28:;
    char * v7 = dcgettext(NULL, "error closing file", 5); // 0x403a34
    int32_t * err_num = __errno_location(); // 0x403a43
    if (g41 == 0) {
        // 0x403ab8
        error(0, *err_num, "%s", v7);
    } else {
        // 0x403a50
        error(0, *err_num, "%s: %s", (char *)function_405780((int64_t)g41), v7);
    }
    // 0x403a6f
    function_403af0();
    _exit(g24);
    // UNREACHABLE
}
// Address range: 0x403ad0 - 0x403ad8
int64_t function_403ad0(int64_t a1) {
    // 0x403ad0
    g43 = a1;
    int64_t result; // 0x403ad0
    return result;
}
// Address range: 0x403ae0 - 0x403ae8
int64_t function_403ae0(int64_t a1) {
    // 0x403ae0
    g42 = a1;
    int64_t result; // 0x403ae0
    return result;
}
// Address range: 0x403af0 - 0x403b8e
int64_t function_403af0(void) {
    // 0x403af0
    int32_t * err_num; // 0x403b06
    if ((int32_t)function_4094f0((int64_t)g34) == 0) {
        goto lab_0x403b1c;
    } else {
        // 0x403b06
        err_num = __errno_location();
        if (g42 == 0) {
            goto lab_0x403b33;
        } else {
            // 0x403b17
            if (*err_num != 32) {
                goto lab_0x403b33;
            } else {
                goto lab_0x403b1c;
            }
        }
    }
  lab_0x403b1c:;
    int64_t result = function_4094f0((int64_t)g37); // 0x403b23
    if ((int32_t)result == 0) {
        // 0x403b2c
        return result;
    }
    // 0x403b6e
    _exit(g24);
    // UNREACHABLE
  lab_0x403b33:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x403b3f
    if (g43 == 0) {
        // 0x403b79
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403b53
        error(0, *err_num, "%s: %s", (char *)function_405780((int64_t)g43), v1);
    }
    // 0x403b6e
    _exit(g24);
    // UNREACHABLE
}
// Address range: 0x403b90 - 0x403beb
int64_t function_403b90(int64_t a1, int64_t a2) {
    // 0x403b90
    int64_t v1; // 0x403b90
    char v2 = v1;
    int64_t v3 = a1; // 0x403b99
    int64_t v4 = a1; // 0x403b99
    char v5 = v2; // 0x403b99
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x403ba4
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x403ba0
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x403bae
    if (v5 == 0) {
      lab_0x403bea:
        // 0x403bea
        return result;
    }
    int64_t v7 = v4; // 0x403bd8
    int64_t v8 = 0; // 0x403bd8
    int64_t v9; // 0x403b90
    int64_t v10; // 0x403bda
    char v11; // 0x403bde
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x403bd5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x403bda
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x403bd5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x403bca
    char v14 = *(char *)v13; // 0x403bce
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
            // 0x403bd5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x403bda
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x403bd5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x403bc0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x403bea
    return result2;
}
// Address range: 0x403bf0 - 0x403c1b
int64_t function_403bf0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x403bf4
    int64_t result = len; // 0x403bf4
    if (len < 2) {
        // 0x403c0a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x403c08
    while (*(char *)(v1 + str) == 47) {
        // 0x403c10
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x403c0a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x403c0a
    return result2;
}
// Address range: 0x403c20 - 0x403d04
int64_t function_403c20(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = *(int32_t *)(v1 + 24); // 0x403c20
    switch (((v2 & 0xf000) - 0x1000) / 0x1000) {
        case 7: {
            // 0x403c80
            if (*(int64_t *)(v1 + 48) != 0) {
                // 0x403c98
                return (int64_t)dcgettext(NULL, "regular file", 5);
            }
            // break -> 0x403c87
            break;
        }
        case 3: {
            // 0x403cb8
            return (int64_t)dcgettext(NULL, "directory", 5);
        }
        case 9: {
            // 0x403cd8
            return (int64_t)dcgettext(NULL, "symbolic link", 5);
        }
        case 5: {
            // 0x403ce8
            return (int64_t)dcgettext(NULL, "block special file", 5);
        }
        case 1: {
            // 0x403ca8
            return (int64_t)dcgettext(NULL, "character special file", 5);
        }
        case 0: {
            // 0x403cf8
            return (int64_t)dcgettext(NULL, "fifo", 5);
        }
        case 11: {
            // 0x403cc8
            return (int64_t)dcgettext(NULL, "socket", 5);
        }
        default: {
            // 0x403c6a
            return (int64_t)dcgettext(NULL, "weird file", 5);
        }
    }
    // 0x403c87
    return (int64_t)dcgettext(NULL, "regular empty file", 5);
}
// Address range: 0x403d10 - 0x403da9
int64_t function_403d10(int64_t str) {
    // 0x403d10
    if (str == 0) {
        // 0x403d89
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g37);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403d1e
    int64_t result = (int64_t)found_char_pos; // 0x403d1e
    if (found_char_pos == NULL) {
        // 0x403d79
        g44 = str;
        g36 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403d28
    if (v1 - str < 7) {
        // 0x403d79
        g44 = str;
        g36 = str;
        return result;
    }
    // 0x403d38
    bool v2; // 0x403d10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403d10
    int64_t v5 = result - 6; // 0x403d10
    int64_t v6 = 7; // 0x403d46
    unsigned char v7 = *(char *)v5; // 0x403d46
    char v8 = *(char *)v4; // 0x403d46
    char v9 = v8; // 0x403d46
    bool v10 = false; // 0x403d46
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
    int64_t v12 = (int64_t)"lt-"; // 0x403d50
    int64_t v13 = v1; // 0x403d50
    int64_t v14 = 3; // 0x403d50
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403d79
        g44 = str;
        g36 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403d62
    char v16 = *(char *)v12; // 0x403d62
    char v17 = v16; // 0x403d62
    bool v18 = false; // 0x403d62
    while (v15 == v16) {
        // 0x403d52
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
    int64_t v20 = v1; // 0x403d6c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403d6e
        v20 = result + 4;
        g33 = v20;
    }
    // 0x403d79
    g44 = v20;
    g36 = v20;
    return result;
}
// Address range: 0x403db0 - 0x403ea2
int64_t function_403db0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403dc4
    int64_t result = (int64_t)v1; // 0x403dc4
    if (result != a1) {
        // 0x403dd1
        return result;
    }
    int64_t v2 = function_40a9a0(); // 0x403de0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403e96
    if (v3 == 85) {
        // 0x403df0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403e88
            result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x403e1e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x403e2b
        // 0x403dd1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403e88
        result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x403e6d
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x403e7a
    // 0x403dd1
    return result4;
}
// Address range: 0x403eb0 - 0x403f07
int64_t function_403eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403eb0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403ef8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403f07 - 0x4050d1
int64_t function_403f07(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403f51
    int64_t v3 = 0; // 0x403f51
    int64_t v4; // 0x403f07
    int64_t v5; // 0x403f07
    int64_t v6; // 0x403f07
    int64_t v7; // 0x403f07
    int64_t v8; // 0x403f07
    int64_t v9; // 0x403f07
    int64_t v10; // 0x403f07
    int64_t v11; // 0x403f07
    int64_t v12; // 0x403f07
    int64_t v13; // 0x403f07
    int64_t v14; // 0x403f07
    int64_t v15; // 0x403f07
    int64_t v16; // 0x403f07
    int64_t v17; // 0x403f07
    int64_t v18; // 0x403f07
    int64_t result; // 0x403f07
    int64_t v19; // 0x403f07
    int32_t wc; // bp+132, 0x403f07
    int64_t ps; // bp+136, 0x403f07
    char v20; // 0x4044c0
    int64_t v21; // 0x4044c0
    int64_t v22; // 0x404868
    int64_t v23; // 0x403f07
    int64_t v24; // 0x404887
    int32_t v25; // 0x403f07
    while (true) {
      lab_0x403f58_2:
        // 0x403f58
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403f07
        int64_t v27; // 0x403f8c
        while (true) {
          lab_0x403f58:
            // 0x403f58
            v5 = v26;
            bool v28 = v15 == v5; // 0x403f63
            if (v15 == -1) {
                // 0x403f65
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403f73
            if (v28) {
                // break (via goto) -> 0x4046d8
                goto lab_0x4046d8;
            }
            // 0x403f7c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g59 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40456b
                    if (v25 % 2 == 0) {
                        goto lab_0x4040b1;
                    }
                    // 0x40498d
                    v26 = v5 + 1;
                    goto lab_0x403f58;
                }
                case 7: {
                    goto lab_0x4040b1;
                }
                case 8: {
                    goto lab_0x4040b1;
                }
                case 9: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4040b1;
                }
                case 12: {
                    goto lab_0x4040b1;
                }
                case 13: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40407d;
                }
                case 36: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4040b1;
                }
                case 38: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4040b1;
                }
                case 44: {
                    goto lab_0x4040b1;
                }
                case 45: {
                    goto lab_0x4040b1;
                }
                case 46: {
                    goto lab_0x4040b1;
                }
                case 47: {
                    goto lab_0x4040b1;
                }
                case 48: {
                    goto lab_0x4040b1;
                }
                case 49: {
                    goto lab_0x4040b1;
                }
                case 50: {
                    goto lab_0x4040b1;
                }
                case 51: {
                    goto lab_0x4040b1;
                }
                case 52: {
                    goto lab_0x4040b1;
                }
                case 53: {
                    goto lab_0x4040b1;
                }
                case 54: {
                    goto lab_0x4040b1;
                }
                case 55: {
                    goto lab_0x4040b1;
                }
                case 56: {
                    goto lab_0x4040b1;
                }
                case 57: {
                    goto lab_0x4040b1;
                }
                case 58: {
                    goto lab_0x4040b1;
                }
                case 59: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4040b1;
                }
                case 66: {
                    goto lab_0x4040b1;
                }
                case 67: {
                    goto lab_0x4040b1;
                }
                case 68: {
                    goto lab_0x4040b1;
                }
                case 69: {
                    goto lab_0x4040b1;
                }
                case 70: {
                    goto lab_0x4040b1;
                }
                case 71: {
                    goto lab_0x4040b1;
                }
                case 72: {
                    goto lab_0x4040b1;
                }
                case 73: {
                    goto lab_0x4040b1;
                }
                case 74: {
                    goto lab_0x4040b1;
                }
                case 75: {
                    goto lab_0x4040b1;
                }
                case 76: {
                    goto lab_0x4040b1;
                }
                case 77: {
                    goto lab_0x4040b1;
                }
                case 78: {
                    goto lab_0x4040b1;
                }
                case 79: {
                    goto lab_0x4040b1;
                }
                case 80: {
                    goto lab_0x4040b1;
                }
                case 81: {
                    goto lab_0x4040b1;
                }
                case 82: {
                    goto lab_0x4040b1;
                }
                case 83: {
                    goto lab_0x4040b1;
                }
                case 84: {
                    goto lab_0x4040b1;
                }
                case 85: {
                    goto lab_0x4040b1;
                }
                case 86: {
                    goto lab_0x4040b1;
                }
                case 87: {
                    goto lab_0x4040b1;
                }
                case 88: {
                    goto lab_0x4040b1;
                }
                case 89: {
                    goto lab_0x4040b1;
                }
                case 90: {
                    goto lab_0x4040b1;
                }
                case 91: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4040b1;
                }
                case 94: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4040b1;
                }
                case 96: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4040b1;
                }
                case 98: {
                    goto lab_0x4040b1;
                }
                case 99: {
                    goto lab_0x4040b1;
                }
                case 100: {
                    goto lab_0x4040b1;
                }
                case 101: {
                    goto lab_0x4040b1;
                }
                case 102: {
                    goto lab_0x4040b1;
                }
                case 103: {
                    goto lab_0x4040b1;
                }
                case 104: {
                    goto lab_0x4040b1;
                }
                case 105: {
                    goto lab_0x4040b1;
                }
                case 106: {
                    goto lab_0x4040b1;
                }
                case 107: {
                    goto lab_0x4040b1;
                }
                case 108: {
                    goto lab_0x4040b1;
                }
                case 109: {
                    goto lab_0x4040b1;
                }
                case 110: {
                    goto lab_0x4040b1;
                }
                case 111: {
                    goto lab_0x4040b1;
                }
                case 112: {
                    goto lab_0x4040b1;
                }
                case 113: {
                    goto lab_0x4040b1;
                }
                case 114: {
                    goto lab_0x4040b1;
                }
                case 115: {
                    goto lab_0x4040b1;
                }
                case 116: {
                    goto lab_0x4040b1;
                }
                case 117: {
                    goto lab_0x4040b1;
                }
                case 118: {
                    goto lab_0x4040b1;
                }
                case 119: {
                    goto lab_0x4040b1;
                }
                case 120: {
                    goto lab_0x4040b1;
                }
                case 121: {
                    goto lab_0x4040b1;
                }
                case 122: {
                    goto lab_0x4040b1;
                }
                case 123: {
                    goto lab_0x404055;
                }
                case 124: {
                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x404055;
                }
                case 126: {
                    goto lab_0x40407d;
                }
                default: {
                    goto lab_0x404455;
                }
            }
        }
      lab_0x404455:
        if (v23 != 1) {
            // 0x4047c0
            ps = 0;
            int64_t len = v15; // 0x4047d0
            if (v15 == -1) {
                // 0x4047d2
                len = strlen((char *)str);
            }
            // 0x4047fe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40485f:
                // 0x40485f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404864
                int64_t v30 = v29 + str;
                v24 = function_409470(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x404dda_2;
                    }
                    case -1: {
                        goto lab_0x404dda_2;
                    }
                    case -2: {
                        // 0x404ebd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404ef7
                            v19 = v18;
                            int64_t v31 = v18; // 0x404efa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404f07
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404f00
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x404dda
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x404dda_2;
                    }
                    case 1: {
                        goto lab_0x404830;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4048dc
                        char v34 = *(char *)v33; // 0x4048ed
                        unsigned char v35; // 0x403f07
                        if (v34 < 125) {
                            // 0x4048f8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40490f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4048e0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4048ed
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4048f8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40490f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4048e0
                            v33++;
                        }
                        goto lab_0x404830;
                    }
                }
            }
            goto lab_0x404dda_2;
        } else {
            // 0x4044a4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4040b1;
        }
    }
  lab_0x4046d8:
    // 0x4046d8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x404fda
        if (v8 > result) {
            // 0x404fe3
            *(char *)(v12 + result) = 0;
        }
        // 0x404307
        return result;
    }
    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4040b1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4040c0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4042ca_2;
        }
    }
    int64_t v39 = result; // 0x4041c1
    char v40 = v20; // 0x4041c1
    int64_t v41 = v38; // 0x4041c1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4041c1
    int64_t v43 = v36; // 0x4041c1
    goto lab_0x40413d;
  lab_0x4042ca_2:
    // 0x404307
    return function_403eb0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404dda_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4040b1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4049ae
        int64_t v50 = v5 + 1; // 0x404a91
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404a98
        char v52 = v20; // 0x404a98
        int64_t v53 = result; // 0x404a98
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404a61
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404a65
            int64_t v56 = v54 + 1; // 0x404a6a
            int64_t v57 = v51 + 1; // 0x404a91
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x404a5c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404a61
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404a65
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
        goto lab_0x40413d;
    }
  lab_0x404830:
    // 0x404830
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40484f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404852
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x404dda
        goto lab_0x404dda_2;
    }
    goto lab_0x40485f;
  lab_0x40407d:
    // 0x40407d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4042ca_2;
    }
    goto lab_0x4040b1;
  lab_0x404055:;
    bool v60 = v15 == 1; // 0x404060
    if (v15 == -1) {
        // 0x404062
        v60 = *(char *)v1 == 0;
    }
    // 0x40406e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4040b1;
    } else {
        goto lab_0x40407d;
    }
  lab_0x40413d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x404142
        *(char *)(v44 + v45) = v40;
    }
    // 0x404146
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403f58_2;
}
// Address range: 0x4050e0 - 0x40527e
int64_t function_4050e0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4050e2
    int32_t * v3 = __errno_location(); // 0x4050fc
    int32_t v4 = v2; // 0x405111
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g26; // 0x405101
    int32_t v6 = *v3; // 0x40510b
    int64_t v7 = v5; // 0x405121
    if (v2 >= (int64_t)*(int32_t *)&g29) {
        if (v4 == 0x7fffffff) {
            // 0x405279
            function_4061d0(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x405130
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x405137
        int64_t v10; // 0x4050e0
        if (g26 == &g27) {
            int64_t v11 = function_405fe0(0, v9); // 0x40525a
            int128_t v12 = __asm_movdqa(*(int128_t *)&g27); // 0x40525f
            *(int64_t *)&g26 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_405fe0(v5, v9); // 0x40514b
            *(int64_t *)&g26 = v13;
            v10 = v13;
        }
        // 0x40515a
        v7 = v10;
        int32_t v14 = *(int32_t *)&g29; // 0x40515a
        int32_t v15 = v8; // 0x405161
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g29 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x405191
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40519b
    int64_t * v18 = (int64_t *)v16; // 0x40519e
    uint64_t v19 = *v18; // 0x40519e
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x4051a1
    int64_t result = *v20; // 0x4051a1
    int64_t v21; // 0x4050e0
    uint64_t v22 = function_403eb0(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x4051c4
    if (v19 > v22) {
        // 0x40523b
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x4051d7
    *v18 = v23;
    if (result != (int64_t)&g45) {
        // 0x4051e7
        free((int64_t *)result);
    }
    int64_t result2 = function_405f80(v23); // 0x405201
    *v20 = result2;
    int64_t v24; // 0x4050e0
    function_403eb0(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x40523b
    *v3 = v6;
    return result2;
}
// Address range: 0x405280 - 0x4052b4
int64_t function_405280(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405287
    int64_t result = function_406180(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x4052a6
    return result;
}
// Address range: 0x4052c0 - 0x4052cf
int64_t function_4052c0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x4052cc
    return result;
}
// Address range: 0x4052d0 - 0x4052df
int64_t function_4052d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x4052d8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x4052e0 - 0x405313
int64_t function_4052e0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x4052f9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4052fe
    uint32_t v3 = *v2; // 0x4052fe
    uint32_t v4 = (int32_t)a2 % 32; // 0x405302
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405320 - 0x405333
int64_t function_405320(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x40532c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405340 - 0x40536b
int64_t function_405340(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x405348
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x405365
        abort();
        // UNREACHABLE
    }
    // 0x40535c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x405370 - 0x4053e2
int64_t function_405370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x405392
    int32_t * v2 = __errno_location(); // 0x40539b
    uint32_t v3 = *(int32_t *)v1; // 0x4053bb
    int64_t result = function_403eb0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4053ca
    return result;
}
// Address range: 0x4053f0 - 0x4054d1
int64_t function_4053f0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x405412
    int32_t * v2 = __errno_location(); // 0x405418
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405437
    int32_t * v4 = (int32_t *)v1; // 0x40543a
    int64_t v5 = function_403eb0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x405455
    int64_t v6 = v5 + 1; // 0x40545a
    int64_t result = function_405f80(v6); // 0x40546f
    function_403eb0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4054b4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4054bd
    return result;
}
// Address range: 0x4054e0 - 0x4054ea
int64_t function_4054e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4054e0
    return function_4053f0(a1, a2, 0, a3);
}
// Address range: 0x4054f0 - 0x405585
int64_t function_4054f0(void) {
    uint32_t v1 = *(int32_t *)&g29; // 0x4054f0
    int64_t v2 = v1; // 0x4054f0
    int64_t v3 = v2; // 0x405504
    if (v1 >= 2) {
        int64_t v4 = &g29;
        int64_t v5 = v4 + 16; // 0x405523
        free((int64_t *)*(int64_t *)v4);
        v3 = &g60;
        while (v5 != (int64_t)g26 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x405520
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g60;
        }
    }
    int64_t v6 = v3; // 0x40553d
    if (g27 != 0x610380) {
        // 0x40553f
        free((int64_t *)g27);
        g27 = 256;
        *(int64_t *)&g28 = (int64_t)&g45;
        v6 = &g60;
    }
    int64_t result = v6; // 0x405561
    if (g26 != &g27) {
        // 0x405563
        free(g26);
        *(int64_t *)&g26 = (int64_t)&g27;
        result = &g60;
    }
    // 0x405576
    *(int32_t *)&g29 = 1;
    return result;
}
// Address range: 0x405590 - 0x4055a1
int64_t function_405590(void) {
    // 0x405590
    int64_t v1; // 0x405590
    return function_4050e0(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x4055b0 - 0x4055ba
int64_t function_4055b0(void) {
    // 0x4055b0
    int64_t v1; // 0x4055b0
    return function_4050e0(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x4055c0 - 0x4055d6
int64_t function_4055c0(int64_t a1) {
    // 0x4055c0
    return function_4050e0(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x4055e0 - 0x4055f2
int64_t function_4055e0(int64_t a1, int64_t a2) {
    // 0x4055e0
    return function_4050e0(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x405600 - 0x405668
int64_t function_405600(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405610
    return function_4050e0(a1, a3, -1, &v1);
}
// Address range: 0x405670 - 0x4056d4
int64_t function_405670(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405680
    return function_4050e0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4056e0 - 0x4056ec
int64_t function_4056e0(int64_t a1, int64_t a2) {
    // 0x4056e0
    return function_405600(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4056f0 - 0x4056ff
int64_t function_4056f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4056f0
    return function_405670(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405700 - 0x405770
int64_t function_405700(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x40570d
    int128_t v2 = __asm_movdqa(g47); // 0x405715
    int128_t v3 = __asm_movdqa(g48); // 0x40571d
    int64_t v4 = __asm_movaps_6(v1); // bp-72, 0x405732
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405748
    uint32_t v6 = *v5; // 0x405748
    uint32_t v7 = (int32_t)a3 % 32; // 0x40574d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4050e0(0, a1, a2, &v4);
}
// Address range: 0x405770 - 0x40577d
int64_t function_405770(int64_t a1, int64_t a2) {
    // 0x405770
    return function_405700(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405780 - 0x405791
int64_t function_405780(int64_t a1) {
    // 0x405780
    return function_405700(a1, -1, 58);
}
// Address range: 0x4057a0 - 0x4057aa
int64_t function_4057a0(void) {
    // 0x4057a0
    int64_t v1; // 0x4057a0
    return function_405700(v1, v1, 58);
}
// Address range: 0x4057b0 - 0x40581e
int64_t function_4057b0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4057ca
    return function_4050e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405820 - 0x40588c
int64_t function_405820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x405827
    int128_t v2 = __asm_movdqa(g47); // 0x40582f
    int128_t v3 = __asm_movdqa(g48); // 0x405837
    __asm_movaps_6(v1);
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int64_t v4 = 10; // bp-72, 0x405859
    if (a2 == 0 || a3 == 0) {
        // 0x405887
        abort();
        // UNREACHABLE
    }
    // 0x40586a
    return function_4050e0(a1, a4, a5, &v4);
}
// Address range: 0x405890 - 0x405899
int64_t function_405890(void) {
    // 0x405890
    int64_t v1; // 0x405890
    return function_405820(v1, v1, v1, v1, -1);
}
// Address range: 0x4058a0 - 0x4058b7
int64_t function_4058a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4058a0
    return function_405820(0, a1, a2, a3, -1);
}
// Address range: 0x4058c0 - 0x4058d3
int64_t function_4058c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4058c0
    return function_405820(0, a1, a2, a3, a4);
}
// Address range: 0x4058e0 - 0x4058ea
int64_t function_4058e0(void) {
    // 0x4058e0
    int64_t v1; // 0x4058e0
    return function_4050e0(v1, v1, v1, &g25);
}
// Address range: 0x4058f0 - 0x405902
int64_t function_4058f0(int64_t a1, int64_t a2) {
    // 0x4058f0
    return function_4050e0(0, a1, a2, &g25);
}
// Address range: 0x405910 - 0x405921
int64_t function_405910(int64_t a1, int64_t a2) {
    // 0x405910
    return function_4050e0(a1, a2, -1, &g25);
}
// Address range: 0x405930 - 0x405946
int64_t function_405930(int64_t a1) {
    // 0x405930
    return function_4050e0(0, a1, -1, &g25);
}
// Address range: 0x405950 - 0x40599b
int64_t function_405950(int64_t * a1) {
    // 0x405950
    int64_t v1; // bp-152, 0x405950
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x405990
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x4059a0 - 0x405d7d
int64_t function_4059a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405a38
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4059bc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4059d6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405a1b
    if (a6 < 10) {
        // 0x405a2a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405b22
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405d80 - 0x405da0
int64_t function_405d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405d80
    if (a5 == 0) {
        // 0x405d9b
        return function_4059a0(a1, a2, a3, a4, a5, 0, (int64_t)&g60);
    }
    int64_t v1 = 0; // 0x405d87
    v1++;
    int64_t v2 = v1; // 0x405d99
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405d90
        v1++;
        v2 = v1;
    }
    // 0x405d9b
    return function_4059a0(a1, a2, a3, a4, a5, v2, (int64_t)&g60);
}
// Address range: 0x405da0 - 0x405e00
int64_t function_405da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405da0
    int64_t v3 = &v2; // 0x405da0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405dd3
    int64_t v6; // 0x405dbd
    int64_t * v7; // 0x405ddb
    int64_t v8; // 0x405ddb
    int64_t v9; // 0x405de7
    if (v5 < 48) {
        // 0x405db0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405df3
            break;
        }
    } else {
        // 0x405ddb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405df3
            break;
        }
    }
    int64_t v10 = 10; // 0x405dd1
    while (v4 != 9) {
        // 0x405dc9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405db0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405df3
                break;
            }
        } else {
            // 0x405ddb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405df3
                break;
            }
        }
        // 0x405dc9
        v10 = 10;
    }
    // 0x405df3
    return function_4059a0(a1, a2, a3, a4, v3, v10, (int64_t)&g60);
}
// Address range: 0x405e00 - 0x405ebc
int64_t function_405e00(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405e00
    int64_t v1; // bp-168, 0x405e00
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405e00
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405e00
    int64_t v8; // 0x405e00
    int64_t v9; // bp-56, 0x405e00
    int64_t v10; // 0x405e65
    int64_t v11; // 0x405e89
    if ((int32_t)v6 < 48) {
        // 0x405e50
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405ea0
            break;
        }
    } else {
        // 0x405e82
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405ea0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x405e7a
    int64_t v13 = 10; // 0x405e7a
    while (v5 != 9) {
        // 0x405e7c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405e50
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405ea0
                break;
            }
        } else {
            // 0x405e82
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405ea0
                break;
            }
        }
        // 0x405e72
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405ea0
    int64_t v14; // bp-136, 0x405e00
    int64_t result = function_4059a0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g60); // 0x405eaf
    return result;
}
// Address range: 0x405ec0 - 0x405f34
int64_t function_405ec0(int64_t a1) {
    // 0x405ec0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405f23
    return fputs_unlocked(v1, g34);
}
// Address range: 0x405f40 - 0x405f78
int64_t function_405f40(void) {
    // 0x405f40
    if (g50 != 0) {
        // 0x405f49
        return g49;
    }
    int32_t v1 = geteuid(); // 0x405f5c
    g50 = 1;
    g49 = v1 == 0;
    return (int64_t)(v1 & -256) | (int64_t)(v1 == 0);
}
// Address range: 0x405f80 - 0x405f9a
int64_t function_405f80(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405f84
    if (size != 0 != (mem == NULL)) {
        // 0x405f93
        return (int64_t)mem;
    }
    // 0x405f95
    function_4061d0(size);
    // UNREACHABLE
}
// Address range: 0x405fa0 - 0x405fc1
int64_t function_405fa0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405fa3
    int64_t v2 = v1; // 0x405fa3
    if (v2 < 0) {
        // 0x405fbb
        function_4061d0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405fb9
        return function_405f80(v2);
    }
    // 0x405fbb
    function_4061d0(v2);
    // UNREACHABLE
}
// Address range: 0x405fd0 - 0x405fd2
int64_t function_405fd0(void) {
    // 0x405fd0
    int64_t v1; // 0x405fd0
    return function_405f80(v1);
}
// Address range: 0x405fe0 - 0x406016
int64_t function_405fe0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406008
        free(v1);
        return (int32_t)&g60 ^ (int32_t)&g60;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405ff1
    if (a2 != 0 != (mem == NULL)) {
        // 0x406000
        return (int64_t)mem;
    }
    // 0x406011
    function_4061d0(a1);
    // UNREACHABLE
}
// Address range: 0x406020 - 0x406041
int64_t function_406020(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406023
    int64_t v2 = v1; // 0x406023
    if (v2 < 0) {
        // 0x40603b
        function_4061d0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406039
        return function_405fe0(a1, v2);
    }
    // 0x40603b
    function_4061d0(a1);
    // UNREACHABLE
}
// Address range: 0x406050 - 0x4060d6
int64_t function_406050(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4060ab
            function_4061d0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405fe0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406093
    if (a2 == 0) {
        // 0x4060b8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406098
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4060ab
        function_4061d0(a1);
        // UNREACHABLE
    }
    // 0x40607a
    *(int64_t *)a2 = v2;
    return function_405fe0(a1, v2 * a3);
}
// Address range: 0x4060e0 - 0x406130
int64_t function_4060e0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4060e0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40612a
            function_4061d0(a1);
            // UNREACHABLE
        }
        // 0x406102
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405fe0(a1, v1);
    }
    if (a2 == 0) {
        // 0x406115
        *(int64_t *)a2 = 128;
        return function_405fe0(0, 128);
    }
    // 0x406128
    if (a2 < 0) {
        // 0x40612a
        function_4061d0(a1);
        // UNREACHABLE
    }
    // 0x406102
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405fe0(a1, v1);
}
// Address range: 0x406130 - 0x406147
int64_t function_406130(int64_t a1, int64_t a2) {
    // 0x406130
    return (int64_t)memset((int64_t *)function_405f80(a1), 0, (int32_t)a1);
}
// Address range: 0x406150 - 0x40617e
int64_t function_406150(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406157
    if ((int64_t)v1 < 0) {
        // 0x406179
        function_4061d0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406179
        function_4061d0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40616a
    if (mem != NULL) {
        // 0x406174
        return (int64_t)mem;
    }
    // 0x406179
    function_4061d0(nmemb);
    // UNREACHABLE
}
// Address range: 0x406180 - 0x4061a8
int64_t function_406180(int64_t a1, int64_t a2) {
    int64_t v1 = function_405f80(a2); // 0x40618f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4061b0 - 0x4061c3
int64_t function_4061b0(int64_t str) {
    // 0x4061b0
    return function_406180(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4061d0 - 0x406201
int64_t function_4061d0(int64_t a1) {
    // 0x4061d0
    error(g24, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406210 - 0x406289
int64_t function_406210(int64_t a1, int32_t a2) {
    // 0x406210
    int64_t v1; // 0x406210
    int64_t result = fts_open(a1, a2 | 512, v1); // 0x40621a
    if (result != 0) {
        // 0x406224
        return result;
    }
    // 0x406230
    if (*__errno_location() != 22) {
        // 0x40623a
        function_4061d0(a1);
        // UNREACHABLE
    }
    // 0x406240
    __assert_fail("errno != EINVAL", "lib/xfts.c", 41, "xfts_open");
    // 0x406224
    return result;
}
// Address range: 0x406290 - 0x4062f9
int64_t function_406290(void) {
    char * v1 = NULL; // bp-24, 0x4062ab
    int64_t v2 = 0; // bp-16, 0x4062b3
    int32_t v3 = __getdelim(&v1, (int32_t *)&v2, 10, g35); // 0x4062bc
    if (v3 < 1) {
        // 0x4062de
        free((int64_t *)v1);
        return 0;
    }
    int64_t v4 = (int64_t)v1; // 0x4062c6
    char * v5 = (char *)((int64_t)v3 - 1 + v4); // 0x4062cf
    int64_t response = v4; // 0x4062d2
    if (*v5 == 10) {
        // 0x4062f0
        *v5 = 0;
        response = (int64_t)v1;
    }
    int32_t v6 = rpmatch((char *)response); // 0x4062d4
    // 0x4062de
    free((int64_t *)v1);
    return v6 >= 0 == (v6 != 0);
}
// Address range: 0x406300 - 0x406340
int64_t function_406300(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40631a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40631a
        return fflush(stream);
    }
    // 0x406328
    function_406370(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406340 - 0x406368
int64_t function_406340(int64_t a1) {
    // 0x406340
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x406367
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 8); // 0x406350
    int64_t result = v1; // 0x40635a
    if ((a1 & 256) != 0) {
        // 0x40635c
        result = *(int64_t *)(a1 + 88) + v1 - *(int64_t *)(a1 + 72);
    }
    // 0x406367
    return result;
}
// Address range: 0x406370 - 0x4063c7
int64_t function_406370(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406370
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40637a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4063ab
    int64_t result = -1; // 0x4063b4
    if (v1 != -1) {
        // 0x4063b6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4063c2
    return result;
}
// Address range: 0x4063d0 - 0x4063ea
int64_t function_4063d0(int64_t a1, int64_t a2) {
    // 0x4063d0
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(a2 + 8)) {
        // 0x4063e0
        return a2 & -256 | (int64_t)(a1 == a2);
    }
    // 0x4063dc
    return 0;
}
// Address range: 0x4063f0 - 0x4063fd
int64_t function_4063f0(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x4063f0
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x406400 - 0x40640c
int64_t function_406400(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x406400
    return a1 % a2;
}
// Address range: 0x406410 - 0x40641a
int64_t function_406410(int64_t a1, int64_t a2) {
    // 0x406410
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x406420 - 0x406442
int64_t function_406420(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x40642b
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x406432
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x406450 - 0x4065fa
int64_t function_406450(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2 + 120; // 0x406456
    int64_t v2 = a1 + 72; // 0x40645e
    uint64_t v3 = (int64_t)*(int32_t *)v2; // 0x40645e
    int64_t * v4 = (int64_t *)(a2 + 88); // 0x406461
    int64_t * v5 = (int64_t *)(a2 + 48); // 0x406466
    int64_t v6 = *v5; // 0x406466
    int32_t v7; // 0x406450
    if (*v4 != 0 || v3 % 2 == 0) {
        if ((v3 & 2) != 0) {
            goto lab_0x406470;
        } else {
            if ((char)a3 != 0) {
                goto lab_0x406470;
            } else {
                int32_t v8 = *(int32_t *)(a1 + 44); // 0x4064cb
                if (__fxstatat(1, v8, (char *)v6, (struct stat *)v1, 256) != 0) {
                    // 0x406520
                    v7 = *__errno_location();
                    goto lab_0x406527;
                } else {
                    goto lab_0x4064e7;
                }
            }
        }
    } else {
        goto lab_0x406470;
    }
  lab_0x406470:;
    struct stat * v9 = (struct stat *)v1; // 0x406478
    if (__xstat(1, (char *)v6, v9) == 0) {
        goto lab_0x4064e7;
    } else {
        int32_t * v10 = __errno_location(); // 0x406481
        int32_t v11 = *v10; // 0x406489
        v7 = v11;
        if (v11 == 2) {
            // 0x406494
            if (__lxstat(1, (char *)*v5, v9) == 0) {
                // 0x4064ad
                *v10 = 0;
                return 13;
            }
            // 0x4065d0
            v7 = *v10;
        }
        goto lab_0x406527;
    }
  lab_0x4064e7:;
    int32_t v12 = *(int32_t *)(a2 + 144) & 0xf000; // 0x4064ed
    int64_t v13; // 0x406450
    switch ((int16_t)v12) {
        case 0x4000: {
            uint64_t v14 = *(int64_t *)(a2 + 136); // 0x406560
            v13 = -1;
            if (v14 >= 2) {
                // 0x40656d
                v13 = -1;
                if (*v4 >= 1) {
                    // 0x406574
                    v13 = (*(char *)v2 & 32) == 0 ? v14 - 2 : v14;
                }
            }
            // break -> 0x406582
            break;
        }
        case -0x6000: {
            // 0x406513
            return 12;
        }
        default: {
            // 0x406513
            return 4 * (int64_t)(v12 == 0x8000) + (v12 == 0x8000 ? 4 : 3);
        }
    }
    int64_t v15 = a2 + 264; // 0x406582
    *(int64_t *)(a2 + 104) = v13;
    if (*(char *)v15 != 46) {
        // 0x406513
        return 1;
    }
    // 0x406598
    if (*(char *)(a2 + 265) == 0) {
        // 0x406513
        return *v4 == 0 ? 1 : 5;
    }
    // 0x4065a1
    if ((*(int32_t *)v15 & 0xffff00) != 0x2e00) {
        // 0x406513
        return 1;
    }
    // 0x406513
    return *v4 == 0 ? 1 : 5;
  lab_0x406527:
    // 0x406527
    *(int32_t *)(a2 + 64) = v7;
    int64_t v16 = a2 + 128 & -8; // 0x406530
    *(int64_t *)v1 = 0;
    *(int64_t *)(a2 + 256) = 0;
    __asm_rep_stosq_memset((char *)v16, 0, (a2 + 264 - v16) / 8 % 0x20000000);
    return 10;
}
// Address range: 0x406600 - 0x4066fd
int64_t function_406600(int64_t a1, int64_t result, uint64_t nmemb) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x406613
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x406617
    int64_t v3 = *v2; // 0x406617
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40661b
    int64_t base = v3; // 0x40661f
    if (*v4 < nmemb) {
        uint64_t v5 = nmemb + 40; // 0x40662b
        *v4 = v5;
        if (v5 >= 0x2000000000000000) {
            // 0x4066d1
            free((int64_t *)v3);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        int64_t * mem = realloc((int64_t *)v3, 8 * (int32_t)v5); // 0x406640
        if (mem == NULL) {
            // 0x4066d1
            free((int64_t *)*v2);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        // 0x406651
        base = (int64_t)mem;
        *v2 = base;
    }
    int64_t v6 = base; // 0x40665b
    int64_t v7 = result; // 0x40665b
    if (result != 0) {
        *(int64_t *)v6 = v7;
        v7 += 16;
        v6 += 8;
        while (v7 != 0) {
            // 0x406660
            *(int64_t *)v6 = v7;
            v7 += 16;
            v6 += 8;
        }
    }
    // 0x406671
    qsort((int64_t *)base, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))v1);
    int64_t v8 = *v2; // 0x406681
    int64_t result2 = *(int64_t *)v8; // 0x406688
    if (nmemb == 1) {
        // 0x4066ba
        *(int64_t *)(result2 + 16) = 0;
        return result2;
    }
    int64_t v9 = v8 + 8; // 0x4066a3
    int64_t * v10 = (int64_t *)v9; // 0x4066a3
    *(int64_t *)(result2 + 16) = *v10;
    int64_t v11 = nmemb - 2; // 0x4066af
    int64_t v12 = v11; // 0x4066b3
    int64_t v13 = v9; // 0x4066b3
    if (v11 != 0) {
        v13 += 8;
        int64_t * v14 = (int64_t *)v13; // 0x4066a3
        *(int64_t *)(*v10 + 16) = *v14;
        v12--;
        while (v12 != 0) {
            int64_t * v15 = v14;
            v13 += 8;
            v14 = (int64_t *)v13;
            *(int64_t *)(*v15 + 16) = *v14;
            v12--;
        }
    }
    // 0x4066ba
    *(int64_t *)(*(int64_t *)(8 * nmemb - 8 + v8) + 16) = 0;
    return result2;
}
// Address range: 0x406700 - 0x40678a
int64_t function_406700(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    int64_t * mem = malloc(v1 + 272 & -8); // 0x40671e
    int64_t result = (int64_t)mem; // 0x40671e
    if (mem != NULL) {
        int64_t v2 = result + 264; // 0x40672b
        memcpy((int64_t *)v2, (int64_t *)a2, v1);
        *(char *)(v2 + a3) = 0;
        *(int64_t *)(result + 96) = a3;
        *(int64_t *)(result + 80) = a1;
        *(int64_t *)(result + 56) = *(int64_t *)(a1 + 32);
        *(int32_t *)(result + 64) = 0;
        *(int64_t *)(result + 24) = 0;
        *(int32_t *)(result + 114) = 0x30000;
        *(int64_t *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
    }
    // 0x40677c
    return result;
}
// Address range: 0x406790 - 0x4067d1
int64_t function_406790(int64_t a1) {
    // 0x406790
    if (a1 == 0) {
        // 0x4067c2
        int64_t result; // 0x406790
        return result;
    }
    int64_t dirp = *(int64_t *)(a1 + 24); // 0x4067a0
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4067a4
    if (dirp != 0) {
        // 0x4067ad
        closedir((struct __dirstream *)dirp);
    }
    // 0x4067b2
    free((int64_t *)a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        dirp = *(int64_t *)(v2 + 24);
        v1 = *(int64_t *)(v2 + 16);
        if (dirp != 0) {
            // 0x4067ad
            closedir((struct __dirstream *)dirp);
        }
        // 0x4067b2
        free((int64_t *)v2);
    }
    // 0x4067c2
    return &g60;
}
// Address range: 0x4067e0 - 0x406819
int64_t function_4067e0(int64_t a1) {
    int64_t result = function_40a900(a1); // 0x4067ff
    if ((char)result != 0) {
        // 0x406808
        return result;
    }
    int32_t fd = function_40a950(a1); // 0x4067f8
    if (fd >= 0) {
        // 0x406810
        close(fd);
    }
    int64_t result2 = function_40a900(a1); // 0x4067ff
    while ((char)result2 == 0) {
        // 0x4067f0
        fd = function_40a950(a1);
        if (fd >= 0) {
            // 0x406810
            close(fd);
        }
        // 0x4067fc
        result2 = function_40a900(a1);
    }
    // 0x406808
    return result2;
}
// Address range: 0x406820 - 0x406931
int64_t function_406820(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x406828
    int64_t v2 = *v1; // 0x406828
    if ((*(char *)(v2 + 73) & 2) == 0) {
        // 0x406862
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 80); // 0x406836
    int64_t v4 = *v3; // 0x406836
    int64_t v5 = v4; // 0x406840
    int64_t result; // bp-152, 0x406820
    if (v4 == 0) {
        // 0x4068d0
        v5 = function_409f20(13, 0, 0x406400, 0x406410, 0x4019a0);
        *v3 = v5;
        if (v5 == 0) {
            // 0x4068fc
            fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result);
            // 0x406862
            return 0;
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 120); // 0x406846
    result = *v6;
    int64_t v7 = function_409cb0(v5, &result); // 0x406854
    if (v7 != 0) {
        // 0x406862
        return *(int64_t *)(v7 + 8);
    }
    // 0x406870
    if (fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result) != 0) {
        // 0x406862
        return 0;
    }
    int64_t * mem = malloc(16); // 0x40688c
    if (mem == NULL) {
        // 0x406862
        return result;
    }
    int64_t v8 = (int64_t)mem; // 0x40688c
    *(int64_t *)(v8 + 8) = result;
    *mem = *v6;
    if (function_40a6c0(v5, v8) != 0) {
        // 0x4068b8
        return result;
    }
    // 0x406920
    free(mem);
    // 0x406862
    return result;
}
// Address range: 0x406940 - 0x4069a4
int64_t function_406940(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_406820(a1, a2); // 0x406944
    if (v1 == 0x9fa0) {
        // 0x406976
        return 0;
    }
    if (v1 <= 0x9fa0) {
        // 0x406980
        if (v1 != 0) {
            // 0x406987
            return v1 != 0x6969;
        }
        // 0x406976
        return 0;
    }
    // 0x406953
    switch (v1) {
        case 0x5346414f: {
            // 0x406976
            return 0;
        }
        case 0x58465342: {
            // 0x406976
            return 2;
        }
    }
    // 0x406976
    return v1 == 0x52654973 ? 2 : 1;
}
// Address range: 0x4069b0 - 0x406a16
int64_t function_4069b0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x4069bb
    int32_t fd = *v1; // 0x4069bb
    int32_t v2 = a2; // 0x4069be
    if (fd == v2 == (fd != -100)) {
        // 0x406a11
        abort();
        // UNREACHABLE
    }
    if ((char)a3 == 0) {
        // 0x4069cb
        if (fd >= 0 != ((*(char *)(a1 + 72) & 4) == 0)) {
            // 0x4069d5
            *v1 = v2;
            int64_t result; // 0x4069b0
            return result;
        }
        int32_t result2 = close(fd); // 0x406a02
        *v1 = v2;
        return result2;
    }
    int64_t result3 = function_40a910(a1 + 96, fd); // 0x4069e4
    uint32_t fd2 = (int32_t)result3; // 0x4069e9
    if (fd2 < 0) {
        // 0x4069d5
        *v1 = v2;
        return result3;
    }
    int32_t result4 = close(fd2); // 0x4069ef
    *v1 = v2;
    return result4;
}
// Address range: 0x406a20 - 0x406a7a
int64_t function_406a20(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 72); // 0x406a29
    uint32_t v2 = v1 & 4; // 0x406a2e
    if (v2 != 0) {
        // 0x406a52
        function_4067e0(a1 + 96);
        return 0;
    }
    int64_t result; // 0x406a20
    if ((v1 & 512) == 0) {
        // 0x406a68
        result = fchdir(*(int32_t *)(a1 + 40)) != 0;
    } else {
        // 0x406a38
        function_4069b0(a1, 0xffffff9c, 1);
        result = v2;
    }
    // 0x406a52
    function_4067e0(a1 + 96);
    return result;
}
// Address range: 0x406a80 - 0x406aeb
int64_t function_406a80(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 256 + a3; // 0x406a8a
    if (v1 < a2) {
        int64_t * v2 = (int64_t *)a1; // 0x406ab8
        free(v2);
        *v2 = 0;
        *__errno_location() = 36;
        return 0;
    }
    // 0x406a97
    *(int64_t *)a2 = v1;
    int64_t * v3 = (int64_t *)a1; // 0x406a9d
    int64_t * mem = realloc(v3, (int32_t)v1); // 0x406a9d
    if (mem != NULL) {
        // 0x406aa7
        *v3 = (int64_t)mem;
        return 1;
    }
    // 0x406ad8
    free(v3);
    *v3 = 0;
    return (int32_t)&g60 ^ (int32_t)&g60;
}
// Address range: 0x406af0 - 0x406b4b
int64_t function_406af0(int32_t a1, int64_t a2) {
    if ((a1 & 258) != 0) {
        int64_t v1 = function_409f20(31, 0, 0x4063f0, 0x4063d0, 0x4019a0); // 0x406b13
        *(int64_t *)a2 = v1;
        // 0x406b21
        return v1 & -256 | (int64_t)(v1 != 0);
    }
    int64_t * mem = malloc(32); // 0x406b2d
    int64_t v2 = (int64_t)mem; // 0x406b2d
    *(int64_t *)a2 = v2;
    if (mem == NULL) {
        // 0x406b21
        return 0;
    }
    // 0x406b3f
    function_409550(v2);
    return 1;
}
// Address range: 0x406b50 - 0x406b94
int64_t function_406b50(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x2000 * a2 & 0x20000 | 128 * a2 & 0x40000 | 0x90900; // 0x406b6a
    if ((a2 & 512) == 0) {
        // 0x406b88
        return function_4095e0(a3, v1, (int32_t)v1);
    }
    // 0x406b78
    return function_40af10((int64_t)a1, a3, (int32_t)v1, a3);
}
// Address range: 0x406ba0 - 0x406d66
int64_t function_406ba0(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff; // 0x406baf
    int32_t * v3 = (int32_t *)(a1 + 72); // 0x406bbc
    uint32_t v4 = *v3; // 0x406bbc
    int64_t v5 = v4; // 0x406bbc
    int32_t v6 = v4 & 4; // 0x406bc3
    int64_t v7; // 0x406ba0
    int64_t v8; // 0x406ba0
    int64_t v9; // 0x406ba0
    int64_t v10; // 0x406ba0
    int64_t v11; // 0x406ba0
    if (a4 == 0) {
        goto lab_0x406c40;
    } else {
        // 0x406bcb
        bool v12; // 0x406ba0
        int64_t v13 = v12 ? -1 : 1; // 0x406bd8
        int64_t v14 = (int64_t)".."; // 0x406ba0
        int64_t v15 = v1; // 0x406ba0
        int64_t v16 = 3; // 0x406bd8
        unsigned char v17 = *(char *)v15; // 0x406bd8
        char v18 = *(char *)v14; // 0x406bd8
        char v19 = v18; // 0x406bd8
        bool v20 = false; // 0x406bd8
        while (v17 == v18) {
            // 0x406bcb
            v16--;
            v14 += v13;
            v15 += v13;
            v19 = v17;
            v20 = true;
            if (v16 == 0) {
                // break -> 
                break;
            }
            v17 = *(char *)v15;
            v18 = *(char *)v14;
            v19 = v18;
            v20 = false;
        }
        unsigned char v21 = v19;
        if ((v17 >= v21 && !v20) != v17 < v21) {
            goto lab_0x406c40;
        } else {
            if (v6 != 0) {
                goto lab_0x406cb0;
            } else {
                // 0x406beb
                v11 = v2;
                v7 = v2;
                v9 = 1;
                if ((int32_t)a3 >= 0) {
                    goto lab_0x406c52;
                } else {
                    // 0x406bf3
                    v8 = v5;
                    v10 = 1;
                    if ((v5 & 512) == 0) {
                        goto lab_0x406cde;
                    } else {
                        int64_t v22 = a1 + 96; // 0x406c00
                        int64_t v23 = function_40a900(v22); // 0x406c0c
                        v8 = v5;
                        v10 = v23 & 0xffffffff;
                        if ((char)v23 != 0) {
                            goto lab_0x406cde;
                        } else {
                            int64_t v24 = function_40a950(v22); // 0x406c24
                            if ((int32_t)v24 < 0) {
                                // 0x406d28
                                v8 = (int64_t)*v3;
                                v10 = 1;
                                goto lab_0x406cde;
                            } else {
                                // 0x406c34
                                v11 = v24 & 0xffffffff;
                                v7 = v24;
                                v9 = 1;
                                goto lab_0x406c52;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x406c40:
    if (v6 != 0) {
        goto lab_0x406cb0;
    } else {
        // 0x406c44
        v11 = v2;
        v7 = v2;
        v9 = 0;
        v8 = v5;
        v10 = 0;
        if ((int32_t)a3 < 0) {
            goto lab_0x406cde;
        } else {
            goto lab_0x406c52;
        }
    }
  lab_0x406cb0:
    // 0x406cb0
    if ((v5 & 512) == 0) {
        // 0x406cbf
        return 0;
    }
    int32_t fd = a3; // 0x406cb9
    if (fd >= 0) {
        // 0x406d18
        close(fd);
        // 0x406cbf
        return 0;
    }
    // 0x406cbf
    return 0;
  lab_0x406cde:;
    int64_t v25 = function_406b50(*(int32_t *)(a1 + 44), v8, v1); // 0x406ce8
    v11 = v2;
    v7 = v25;
    v9 = v10;
    if ((int32_t)v25 < 0) {
        // 0x406cbf
        return 0xffffffff;
    }
    goto lab_0x406c52;
  lab_0x406c52:;
    int32_t fd2 = v7; // 0x406c57
    int64_t v26; // bp-200, 0x406ba0
    uint32_t v27 = __fxstat(1, fd2, (struct stat *)&v26); // 0x406c5f
    int64_t v28 = 0xffffffff; // 0x406c68
    if (v27 != 0) {
        goto lab_0x406c93;
    } else {
        // 0x406c6a
        if (*(int64_t *)(a2 + 120) != v26) {
            goto lab_0x406c83;
        } else {
            // 0x406c75
            int64_t v29; // 0x406ba0
            if (*(int64_t *)(a2 + 128) == v29) {
                // 0x406d00
                if ((*(char *)(a1 + 73) & 2) != 0) {
                    // 0x406d38
                    function_4069b0(a1, v7 & 0xffffffff, v9 % 256 ^ 1);
                    // 0x406cbf
                    return (int64_t)v27 & 0xffffffff;
                }
                // 0x406d07
                v28 = fchdir(fd2);
                goto lab_0x406c93;
            } else {
                goto lab_0x406c83;
            }
        }
    }
  lab_0x406c93:
    // 0x406c93
    if ((int32_t)v11 < 0) {
        int32_t * v30 = __errno_location(); // 0x406c97
        close(fd2);
    }
    // 0x406cbf
    return v28 & 0xffffffff;
  lab_0x406c83:
    // 0x406c83
    *__errno_location() = 2;
    v28 = 0xffffffff;
    goto lab_0x406c93;
}
// Address range: 0x406d70 - 0x406e1f
int64_t function_406d70(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) == 0) {
        int64_t result = function_409560(a2, a3 + 120); // 0x406df8
        if ((char)result == 0) {
            // 0x406de1
            return 1;
        }
        // 0x406e01
        *(int64_t *)a3 = a3;
        *(int16_t *)(a3 + 112) = 2;
        return result;
    }
    int64_t * mem = malloc(24); // 0x406d87
    if (mem == NULL) {
        // 0x406de1
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x406d87
    *(int64_t *)(v1 + 16) = a3;
    *mem = *(int64_t *)(a3 + 120);
    *(int64_t *)(v1 + 8) = *(int64_t *)(a3 + 128);
    int64_t v2 = function_40a6c0(a2, v1); // 0x406db6
    if (v2 == v1) {
        // 0x406de1
        return 1;
    }
    // 0x406dc3
    free(mem);
    int64_t result2 = 0; // 0x406dce
    if (v2 != 0) {
        // 0x406dd0
        *(int16_t *)(a3 + 112) = 2;
        *(int64_t *)a3 = *(int64_t *)(v2 + 16);
        result2 = 1;
    }
    // 0x406de1
    return result2;
}
// Address range: 0x406e20 - 0x406eb6
int64_t function_406e20(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) != 0) {
        // 0x406e60
        free((int64_t *)function_40a700(a2));
        return &g60;
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x406e2f
    if (result == 0) {
        // 0x406e59
        return 0;
    }
    // 0x406e38
    if (*(int64_t *)(result + 88) < 0) {
        // 0x406e59
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x406e9c
    int64_t result2 = result; // 0x406ea0
    if (*v1 == *(int64_t *)(a3 + 120)) {
        // 0x406ea2
        result2 = *(int64_t *)(result + 128);
        *v1 = *(int64_t *)(result + 120);
        *(int64_t *)a2 = result2;
    }
    // 0x406e59
    return result2;
}
// Address range: 0x406ec0 - 0x407873
int64_t function_406ec0(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x406ed4
    int64_t * dirp2 = (int64_t *)(a1 + 24); // 0x406ed8
    int64_t dirp = *dirp2; // 0x406ed8
    int64_t v2; // 0x406ec0
    int32_t * v3; // 0x406ec0
    int64_t v4; // 0x406ec0
    int64_t v5; // 0x406ec0
    int64_t v6; // 0x406ec0
    int64_t v7; // 0x406ec0
    int64_t v8; // 0x406ec0
    int64_t v9; // 0x406ec0
    char v10; // 0x406ec0
    int64_t v11; // 0x406ec0
    int64_t v12; // 0x406ec0
    int64_t v13; // 0x4072f6
    int64_t v14; // 0x406ec0
    int64_t v15; // 0x407335
    int32_t * v16; // 0x406ec0
    int64_t v17; // 0x407342
    int32_t v18; // 0x407346
    if (dirp == 0) {
        // 0x4072b0
        v14 = a1 + 72;
        v16 = (int32_t *)v14;
        uint32_t v19 = *v16; // 0x4072b0
        uint64_t v20 = (int64_t)v19; // 0x4072b0
        v5 = 0;
        if ((v19 & 16) != 0) {
            // 0x4072bb
            v5 = 0x20000;
            if (v20 % 2 != 0) {
                // 0x407490
                v5 = 0x20000 * (int64_t)(*(int64_t *)(a1 + 88) != 0);
            }
        }
        int64_t v21 = *(int64_t *)(a1 + 48); // 0x4072cf
        int64_t v22 = 0xffffff9c; // 0x4072e8
        if ((v20 & 516) == 512) {
            // 0x4072ea
            v22 = (int64_t)*(int32_t *)(a1 + 44);
        }
        int64_t v23 = 128 * v20 & 0x40000 | v5 & 0xfff60000 | 0x90900; // 0x4072ee
        v13 = function_40af10(v22, v21, (int32_t)v23, v5);
        int32_t fd = v13; // 0x4072fd
        if (fd < 0) {
            goto lab_0x407632;
        } else {
            struct __dirstream * v24 = fdopendir(fd); // 0x407307
            if (v24 == NULL) {
                int32_t * v25 = __errno_location(); // 0x40761c
                close(fd);
                goto lab_0x407632;
            } else {
                int16_t * v26 = (int16_t *)(a1 + 112); // 0x407315
                *dirp2 = (int64_t)v24;
                if (*v26 == 11) {
                    // 0x4076cc
                    *v26 = (int16_t)function_406450(a1, a1, 0);
                    v8 = a1;
                } else {
                    int32_t v27 = *v16; // 0x407325
                    v8 = v21;
                    if ((v27 & 256) != 0) {
                        int64_t v28 = a1 + 88; // 0x407680
                        function_406e20(v27, v28, a1);
                        function_406450(a1, a1, 0);
                        int64_t v29 = function_406d70(*v16, v28, a1); // 0x4076a6
                        v8 = v28;
                        if ((char)v29 == 0) {
                            // 0x4076b3
                            *__errno_location() = 12;
                          lab_0x407472:
                            // 0x407472
                            return 0;
                        }
                    }
                }
                // 0x407335
                v15 = a1 + 64;
                v17 = *(int64_t *)v15 == 0 ? 0x186a0 : -1;
                v18 = v1;
                if (v18 == 2) {
                    goto lab_0x407670;
                } else {
                    // 0x407356
                    if ((*v16 & 56) == 24) {
                        // 0x4074a2
                    } else {
                        // 0x407366
                        goto lab_0x407375;
                    }
                }
            }
        }
    } else {
        // 0x406eea
        if (dirfd((struct __dirstream *)dirp) < 0) {
            // 0x40774d
            closedir((struct __dirstream *)*dirp2);
            *dirp2 = 0;
            if ((int32_t)v1 != 3) {
                // 0x407472
                return 0;
            }
            goto lab_0x407769;
        } else {
            int64_t v30 = a1 + 72;
            int32_t * v31 = (int32_t *)v30;
            v3 = v31;
            v2 = v30;
            v11 = -1;
            v7 = a2;
            if (*(int64_t *)(a1 + 64) == 0) {
                // 0x407658
                v4 = v30;
                v12 = 0x186a0;
                v10 = 1;
                v9 = a2;
                v6 = (int64_t)*v31;
                goto lab_0x406f14;
            } else {
                goto lab_0x406f0b;
            }
        }
    }
  lab_0x407420_2:;
    // 0x407420
    int64_t v32; // 0x407044
    free((int64_t *)v32);
    int64_t v33; // 0x406ec0
    function_406790(v33);
    closedir((struct __dirstream *)*dirp2);
    *dirp2 = 0;
    *(int16_t *)(a1 + 112) = 7;
    int32_t * v34; // 0x406ec0
    *v34 = *v34 | 0x4000;
    return 0;
  lab_0x40719c_2:;
    // 0x40719c
    int64_t v35; // 0x406ec0
    int64_t v36 = v35; // 0x4071a9
    int64_t v37; // 0x406ec0
    int64_t v38 = v37; // 0x4071a9
    int64_t v39; // 0x406ec0
    int64_t v40 = v39; // 0x4071a9
    char * v41; // 0x406ec0
    char * v42 = v41; // 0x4071a9
    int64_t v43 = v35; // 0x4071a9
    int64_t result2 = v37; // 0x4071a9
    int64_t v44 = v39; // 0x4071a9
    char v45; // 0x406ec0
    if (v45 == 0) {
        goto lab_0x4074f1;
    } else {
        goto lab_0x4071af;
    }
  lab_0x40702c:;
    // 0x40702c
    char * str; // 0x406ec0
    uint64_t len = (int64_t)strlen(str); // 0x407033
    int64_t v46; // 0x406ec0
    v32 = function_406700(a1, v46, len);
    if (v32 == 0) {
        goto lab_0x407420_2;
    }
    // 0x407055
    int64_t v47; // 0x406ec0
    int64_t v48 = v47; // 0x40705a
    char v49; // 0x406ec0
    char v50 = v49; // 0x40705a
    int64_t v51; // 0x406ec0
    int64_t v52 = v51; // 0x40705a
    int64_t v53 = a1; // 0x40705a
    int64_t v54; // 0x406ec0
    int64_t v55; // 0x406ec0
    int64_t v56; // 0x406f62
    int64_t * v57; // 0x406f62
    int64_t v58; // 0x406ec0
    int64_t * v59; // 0x406ec0
    if (v51 <= len) {
        char v60 = function_406a80(v58, v56, v55 + 2 + len);
        if (v60 == 0) {
            goto lab_0x407420_2;
        }
        int64_t v61 = *v59; // 0x407120
        char v62 = v49; // 0x407129
        int64_t v63 = v47; // 0x407129
        if (v61 != *v59) {
            // 0x40712f
            v63 = (*v41 & 4) == 0 ? v47 : v61 + v54;
            v62 = v60;
        }
        // 0x407143
        v48 = v63;
        v50 = v62;
        v52 = *v57 - v54;
        v53 = v58;
    }
    uint64_t v64 = v54 + len; // 0x407063
    int32_t * v65; // 0x406ffa
    if (v64 < len) {
        // 0x407820
        free((int64_t *)v32);
        function_406790(v33);
        closedir((struct __dirstream *)*dirp2);
        *dirp2 = 0;
        *(int16_t *)(a1 + 112) = 7;
        *v34 = *v34 | 0x4000;
        *v65 = 36;
        goto lab_0x407472;
    }
    int64_t v66 = v52;
    v45 = v50;
    v35 = v48;
    int64_t v67 = v32 + 264; // 0x407073
    int64_t * v68; // 0x406f77
    *(int64_t *)(v32 + 88) = *v68 + 1;
    *(int64_t *)(v32 + 72) = v64;
    *(int64_t *)(v32 + 8) = v53;
    struct dirent * v69; // 0x40700b
    *(int64_t *)(v32 + 128) = *(int64_t *)v69;
    int32_t v70 = *v34; // 0x407093
    int32_t v71; // 0x406ec0
    if ((v70 & 4) != 0) {
        // 0x407160
        *(int64_t *)(v32 + 48) = *(int64_t *)(v32 + 56);
        int64_t v72 = *(int64_t *)(v32 + 96); // 0x40716d
        memmove((int64_t *)v35, (int64_t *)v67, (int32_t)v72 + 1);
        v71 = *v34;
    } else {
        // 0x40709e
        *(int64_t *)(v32 + 48) = v67;
        v71 = v70;
    }
    int64_t v73 = v71;
    int64_t v74; // 0x406ec0
    int64_t v75; // 0x406ec0
    int64_t v76; // 0x406ec0
    int64_t v77; // 0x406ec0
    int64_t v78; // 0x4070bc
    int64_t v79; // 0x4070bc
    int64_t v80; // 0x406ec0
    int64_t v81; // 0x40700b
    if (*(int64_t *)v80 != 0 == (v73 & 1024) == 0) {
        // 0x407288
        *(int16_t *)(v32 + 112) = (int16_t)function_406450(a1, v32, 0);
        v76 = v32;
        goto lab_0x406fb7;
    } else {
        unsigned char v82 = *(char *)(v81 + 18); // 0x4070b2
        int64_t v83 = v82; // 0x4070ba
        v78 = v83 + 0xffffffff;
        v79 = v78 & 0xffffffff;
        v77 = v83;
        if ((v73 & 24) == 24) {
            unsigned char v84 = v82 & -5;
            v77 = 0;
            if (v84 == 0) {
                goto lab_0x4070c8;
            } else {
                int64_t v85 = v84; // 0x407250
                *(int16_t *)(v32 + 112) = 11;
                if ((int32_t)v78 < 12) {
                    int32_t v86 = *(int32_t *)(4 * v79 + (int64_t)&g11); // 0x407408
                    *(int32_t *)(v32 + 144) = v86;
                    v74 = 1;
                    v75 = v85;
                } else {
                    // 0x40726f
                    *(int32_t *)(v32 + 144) = 0;
                    v74 = 1;
                    v75 = v85;
                }
                goto lab_0x406fb0;
            }
        } else {
            goto lab_0x4070c8;
        }
    }
  lab_0x406fb7:;
    int64_t v87 = v76;
    *(int64_t *)(v32 + 16) = 0;
    int64_t v88; // 0x406ec0
    v39 = v88 + 1;
    int64_t v89; // 0x406ec0
    int64_t v90; // 0x406ec0
    int64_t v91; // 0x406ec0
    int64_t v92; // 0x406ec0
    int64_t v93; // 0x406ec0
    int64_t v94; // 0x406ec0
    char v95; // 0x406ec0
    int64_t v96; // 0x406ec0
    if (v33 == 0) {
        // 0x407188
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v32;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v32;
        if (v39 >= v12) {
            goto lab_0x40719c_2;
        }
    } else {
        // 0x406fcb
        *(int64_t *)(v94 + 16) = v32;
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v33;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v33;
        if (v39 >= v12) {
            goto lab_0x40719c_2;
        }
    }
    goto lab_0x406fe3;
  lab_0x4070c8:
    // 0x4070c8
    *(int16_t *)(v32 + 112) = 11;
    if ((int32_t)v78 < 12) {
        int32_t v166 = *(int32_t *)(4 * v79 + (int64_t)&g11); // 0x4070db
        *(int32_t *)(v32 + 144) = v166;
        v74 = 2;
        int64_t v167; // 0x406ec0
        v75 = v167;
    } else {
        // 0x406fa0
        *(int32_t *)(v32 + 144) = 0;
        v74 = 2;
        v75 = v77;
    }
    goto lab_0x406fb0;
  lab_0x406fe3:;
    int64_t v97 = *dirp2; // 0x406fed
    int64_t dirp3 = v97; // 0x406ff4
    int64_t v98 = v91; // 0x406ff4
    int64_t v99 = v90; // 0x406ff4
    int64_t v100 = v93; // 0x406ff4
    int64_t v101 = v89; // 0x406ff4
    int64_t v102 = v92; // 0x406ff4
    char v103 = v95; // 0x406ff4
    int64_t v104 = v96; // 0x406ff4
    int64_t v105 = v96; // 0x406ff4
    char v106 = v95; // 0x406ff4
    int64_t v107 = v93; // 0x406ff4
    int64_t v108 = v90; // 0x406ff4
    if (v97 == 0) {
        goto lab_0x4074e6;
    }
    goto lab_0x406ffa;
  lab_0x406fb0:
    // 0x406fb0
    *(int64_t *)(v32 + 168) = v74;
    v76 = v75;
    goto lab_0x406fb7;
  lab_0x407632:
    // 0x407632
    *dirp2 = 0;
    if ((int32_t)v1 != 3) {
        // 0x407472
        return 0;
    }
    goto lab_0x407769;
  lab_0x407769:
    // 0x407769
    *(int16_t *)(a1 + 112) = 4;
    *(int32_t *)(a1 + 64) = *__errno_location();
    // 0x407472
    return 0;
  lab_0x406f0b:
    // 0x406f0b
    v4 = v2;
    v12 = v11;
    v10 = 1;
    v9 = v7;
    v6 = (int64_t)*v3;
    goto lab_0x406f14;
  lab_0x407670:
    // 0x407670
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v8;
    v6 = (int64_t)*v16;
    goto lab_0x406f14;
  lab_0x406f14:;
    int64_t v111 = *(int64_t *)v4; // 0x406f14
    char v112 = *(char *)(v111 - 1 + *(int64_t *)(a1 + 56)); // 0x406f2a
    v55 = v111 + (int64_t)(v112 == 47);
    int64_t v113 = 0; // 0x406f4b
    if ((v6 & 4) != 0) {
        int64_t v114 = *(int64_t *)(a1 + 32) + v55; // 0x406f52
        *(char *)v114 = 47;
        v113 = v114 + 1;
    }
    // 0x406f62
    v54 = v111 + (int64_t)(v112 != 47);
    v56 = a1 + 48;
    v57 = (int64_t *)v56;
    v68 = (int64_t *)(a1 + 88);
    int64_t v115 = *dirp2; // 0x406fed
    if (v115 == 0) {
        // 0x406f62
        v42 = (char *)v4;
        v43 = v113;
        result2 = 0;
        v44 = 0;
        goto lab_0x4074f1;
    } else {
        // 0x406ffa
        v41 = (char *)v4;
        v58 = a1 + 32;
        v59 = (int64_t *)v58;
        v34 = (int32_t *)v4;
        v80 = a1 + 64;
        dirp3 = v115;
        v98 = v9;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v102 = *v57 - v54;
        v103 = 0;
        v104 = v113;
        while (true) {
          lab_0x406ffa:
            // 0x406ffa
            v47 = v104;
            v49 = v103;
            v33 = v100;
            v88 = v99;
            int64_t v109 = v98;
            v65 = __errno_location();
            *v65 = 0;
            v69 = readdir((struct __dirstream *)dirp3);
            if (v69 == NULL) {
                // break -> 0x4075d0
                break;
            }
            // 0x40701c
            v51 = v102;
            v94 = v101;
            v81 = (int64_t)v69;
            v46 = v81 + 19;
            str = (char *)v46;
            if ((*v41 & 32) != 0) {
                goto lab_0x40702c;
            } else {
                // 0x407022
                if (*str == 46) {
                    int64_t v110 = v81 + 20; // 0x407230
                    v96 = v47;
                    v95 = v49;
                    v92 = v51;
                    v93 = v33;
                    v90 = v88;
                    v91 = v109;
                    v89 = v94;
                    if (*(char *)v110 == 0) {
                        goto lab_0x406fe3;
                    } else {
                        // 0x407236
                        v96 = v47;
                        v95 = v49;
                        v92 = v51;
                        v93 = v33;
                        v90 = v88;
                        v91 = v109;
                        v89 = v94;
                        if (*(int16_t *)v110 != 46) {
                            goto lab_0x40702c;
                        } else {
                            goto lab_0x406fe3;
                        }
                    }
                } else {
                    goto lab_0x40702c;
                }
            }
        }
        int32_t v116 = *v65; // 0x4075d0
        if (v116 != 0) {
            // 0x4075e0
            *(int32_t *)v80 = v116;
            *(int16_t *)(a1 + 112) = (v88 | dirp) == 0 ? 4 : 7;
        }
        int64_t dirp4 = *dirp2; // 0x4075fd
        v105 = v47;
        v106 = v49;
        v107 = v33;
        v108 = v88;
        if (dirp4 != 0) {
            // 0x40760a
            closedir((struct __dirstream *)dirp4);
            *dirp2 = 0;
            v105 = v47;
            v106 = v49;
            v107 = v33;
            v108 = v88;
        }
      lab_0x4074e6:
        // 0x4074e6
        v36 = v105;
        v38 = v107;
        v40 = v108;
        v42 = v41;
        v43 = v105;
        result2 = v107;
        v44 = v108;
        if (v106 != 0) {
            goto lab_0x4071af;
        } else {
            goto lab_0x4074f1;
        }
    }
  lab_0x407375:;
    int64_t v117 = v13 & 0xffffffff; // 0x4072fb
    int64_t v118 = v18 == 3;
    char v119 = 1;
    int64_t v120 = v117; // 0x40737a
    int16_t * v121; // 0x406ec0
    int16_t v122; // 0x406ec0
    int64_t v123; // 0x406ec0
    int64_t v124; // 0x406ec0
    int64_t v125; // 0x406ec0
    int64_t v126; // 0x406ec0
    int64_t v127; // 0x406ec0
    if ((*(char *)(a1 + 73) & 2) != 0) {
        int64_t v128 = function_40b030(v117, 1030, 3, v5); // 0x4076f1
        int64_t v129 = v128 & 0xffffffff; // 0x4076f6
        v120 = v129;
        if ((int32_t)v128 >= 0) {
            goto lab_0x407380;
        } else {
            int16_t * v130 = (int16_t *)(a1 + 114);
            int64_t dirp5 = *dirp2; // 0x407705
            int16_t v131 = *v130 | 1;
            v121 = v130;
            v123 = v129;
            v122 = v131;
            v126 = 1030;
            v124 = dirp5;
            if (v119 != 0 == (v118 != 0)) {
                goto lab_0x4073ad;
            } else {
                // 0x40771a
                *v130 = v131;
                closedir((struct __dirstream *)dirp5);
                v127 = 1030;
                v125 = (int64_t)*v16;
                goto lab_0x4073ef;
            }
        }
    } else {
        goto lab_0x407380;
    }
  lab_0x4074f1:
    // 0x4074f1
    if ((*v42 & 4) != 0) {
        int64_t v132 = *v57; // 0x4074fd
        *(char *)(v43 + (int64_t)(v44 == 0 | v132 == v54)) = 0;
    }
    // 0x407516
    if (dirp != 0 || v10 == 0) {
        goto lab_0x407588;
    } else {
        // 0x407525
        if ((int32_t)v1 == 1 || v44 == 0) {
            // 0x407568
            int64_t v133; // 0x406ec0
            if (*v68 != 0) {
                int64_t v134 = function_406ba0(a1, *(int64_t *)(a1 + 8), 0xffffffff, (int32_t)".."); // 0x40773e
                v133 = v134;
            } else {
                // 0x407573
                v133 = function_406a20(a1);
            }
            // 0x407580
            if ((int32_t)v133 != 0) {
                // 0x407784
                *(int16_t *)(a1 + 112) = 7;
                int32_t * v135 = (int32_t *)v4; // 0x407793
                *v135 = *v135 | 0x4000;
                function_406790(result2);
                // 0x407472
                return 0;
            }
            goto lab_0x407588;
        } else {
            goto lab_0x407531;
        }
    }
  lab_0x4071af:;
    int64_t v136 = *(int64_t *)(a1 + 8); // 0x4071af
    int64_t v137 = *v59; // 0x4071b3
    if (v136 != 0) {
        int64_t * v138 = (int64_t *)(v136 + 48); // 0x4071c0
        int64_t v139 = *v138; // 0x4071c0
        int64_t * v140 = (int64_t *)(v136 + 56);
        if (v139 != v136 + 264) {
            // 0x4071d0
            *v138 = v139 + v137 - *v140;
        }
        // 0x4071db
        *v140 = v137;
        int64_t v141 = *(int64_t *)(v136 + 16); // 0x4071df
        int64_t v142 = v141; // 0x4071e6
        while (v141 != 0) {
            // 0x4071c0
            v138 = (int64_t *)(v142 + 48);
            v139 = *v138;
            v140 = (int64_t *)(v142 + 56);
            if (v139 != v142 + 264) {
                // 0x4071d0
                *v138 = v139 + v137 - *v140;
            }
            // 0x4071db
            *v140 = v137;
            v141 = *(int64_t *)(v142 + 16);
            v142 = v141;
        }
    }
    // 0x4071e8
    v42 = v41;
    v43 = v36;
    result2 = v38;
    v44 = v40;
    if (*(int64_t *)(v38 + 88) >= 0) {
        int64_t * v143 = (int64_t *)(v38 + 48); // 0x4071fe
        int64_t v144 = *v143; // 0x4071fe
        int64_t * v145 = (int64_t *)(v38 + 56);
        if (v144 != v38 + 264) {
            // 0x40720e
            *v143 = v144 + v137 - *v145;
        }
        int64_t v146 = *(int64_t *)(v38 + 16); // 0x407219
        *v145 = v137;
        int64_t v147 = v146; // 0x407224
        if (v146 == 0) {
            // 0x407226
            v147 = *(int64_t *)(v38 + 8);
        }
        // 0x4071f0
        v42 = v41;
        v43 = v36;
        result2 = v38;
        v44 = v40;
        while (*(int64_t *)(v147 + 88) >= 0) {
            int64_t v148 = v147;
            v143 = (int64_t *)(v148 + 48);
            v144 = *v143;
            v145 = (int64_t *)(v148 + 56);
            if (v144 != v148 + 264) {
                // 0x40720e
                *v143 = v144 + v137 - *v145;
            }
            // 0x407219
            v146 = *(int64_t *)(v148 + 16);
            *v145 = v137;
            v147 = v146;
            if (v146 == 0) {
                // 0x407226
                v147 = *(int64_t *)(v148 + 8);
            }
            // 0x4071f0
            v42 = v41;
            v43 = v36;
            result2 = v38;
            v44 = v40;
        }
    }
    goto lab_0x4074f1;
  lab_0x407380:;
    int64_t v149 = function_406ba0(a1, a1, v120, 0); // 0x40738a
    v3 = v16;
    v2 = v14;
    v11 = v17;
    v7 = a1;
    int16_t * v150; // 0x406ec0
    int16_t v151; // 0x406ec0
    int64_t v152; // 0x406ec0
    int64_t dirp6; // 0x406ec0
    int64_t v153; // 0x406ec0
    if ((int32_t)v149 == 0) {
        goto lab_0x406f0b;
    } else {
        int16_t * v154 = (int16_t *)(a1 + 114);
        int64_t v155 = *dirp2; // 0x40739c
        int16_t v156 = *v154 | 1;
        v121 = v154;
        v123 = v120;
        v122 = v156;
        v126 = a1;
        v124 = v155;
        v150 = v154;
        v152 = v120;
        v151 = v156;
        v153 = a1;
        dirp6 = v155;
        if (v119 == 0 || v118 == 0) {
            goto lab_0x4073c2;
        } else {
            goto lab_0x4073ad;
        }
    }
  lab_0x407588:
    // 0x407588
    if (v44 == 0) {
        if ((int32_t)v1 != 3) {
            // 0x407598
            function_406790(result2);
            // 0x407472
            return 0;
        }
        int16_t * v157 = (int16_t *)(a1 + 112); // 0x4077f8
        switch (*v157) {
            case 4: {
            }
            case 7: {
                // 0x407598
                function_406790(result2);
                // 0x407472
                return 0;
            }
        }
        // 0x407811
        *v157 = 6;
        // 0x407598
        function_406790(result2);
        // 0x407472
        return 0;
    }
    goto lab_0x407531;
  lab_0x407531:;
    int64_t * v158 = (int64_t *)(a1 + 64); // 0x407531
    int64_t v159 = *v158; // 0x407531
    int64_t v160 = v159; // 0x40753c
    if (v44 >= 0x2711) {
        if (v159 != 0) {
            // 0x407547
            uint64_t v161; // 0x406ec0
            int64_t v162; // 0x406ec0
            return function_406600(a1, v162, v161);
        }
        // 0x4077ae
        int64_t v163; // 0x406ec0
        switch (function_406820(a1, v163)) {
            case 0x1021994: {
            }
            case 0x6969: {
                // 0x4075b0
                v160 = *v158;
                // break -> 0x4075b8
                break;
            }
            default: {
                // 0x4077ce
                *v158 = 0x406420;
                int64_t result = function_406600(a1, result2, v44); // 0x4077e1
                *v158 = 0;
                // 0x407472
                return result;
            }
        }
    }
    // 0x4075b8
    if (v44 == 1 || v160 == 0) {
        // 0x407472
        return result2;
    }
    // 0x407547
    return function_406600(a1, result2, v44);
  lab_0x4073ad:
    // 0x4073ad
    *(int32_t *)v15 = *__errno_location();
    v150 = v121;
    v152 = v123;
    v151 = v122;
    v153 = v126;
    dirp6 = v124;
    goto lab_0x4073c2;
  lab_0x4073c2:
    // 0x4073c2
    *v150 = v151;
    closedir((struct __dirstream *)dirp6);
    uint32_t v164 = *v16; // 0x4073cc
    int64_t v165 = v164; // 0x4073cc
    *dirp2 = 0;
    v127 = v153;
    v125 = v165;
    if ((v164 & 512) != 0) {
        uint32_t fd2 = (int32_t)v152; // 0x4073e0
        v127 = v153;
        v125 = v165;
        if (fd2 >= 0) {
            // 0x4073e4
            close(fd2);
            v127 = v153;
            v125 = (int64_t)*v16;
        }
    }
    goto lab_0x4073ef;
  lab_0x4073ef:
    // 0x4073ef
    *dirp2 = 0;
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v127;
    v6 = v125;
    goto lab_0x406f14;
}
// Address range: 0x407880 - 0x407c19
int64_t fts_open(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    if ((v1 & 18) == 0 || a2 >= 0x2000 || (v1 & 516) == 516) {
        // 0x407b20
        *__errno_location() = 22;
        // 0x407b0d
        return 0;
    }
    int64_t * mem = calloc(128, 1); // 0x4078c8
    int64_t result = (int64_t)mem; // 0x4078c8
    if (mem == NULL) {
        // 0x407b0d
        return result;
    }
    // 0x4078d9
    *(int64_t *)(result + 64) = a3;
    if ((v1 & 2) != 0) {
        // 0x407b60
        *(int32_t *)(result + 72) = a2 & -517 | 4;
    } else {
        // 0x4078e7
        *(int32_t *)(result + 72) = a2;
    }
    int32_t * v2 = (int32_t *)(result + 44); // 0x4078ee
    *v2 = -100;
    int64_t v3 = a1; // 0x407904
    uint64_t v4 = 0;
    uint64_t len = (int64_t)strlen((char *)128); // 0x407908
    int64_t v5 = v4 < len ? len : v4; // 0x407910
    v3 += 8;
    int64_t str = *(int64_t *)v3; // 0x407918
    while (str != 0) {
        // 0x407908
        v4 = v5;
        len = (int64_t)strlen((char *)str);
        v5 = v4 < len ? len : v4;
        v3 += 8;
        str = *(int64_t *)v3;
    }
    uint64_t v6 = v5 + 1; // 0x407920
    int64_t v7 = result + 32; // 0x407939
    char v8 = function_406a80(v7, result + 48, v6 > 0x1000 ? v6 : 0x1000); // 0x407942
    if (v8 == 0) {
        // 0x407b4b
        free(mem);
        // 0x407b0d
        return 0;
    }
    int64_t v9; // 0x407880
    int64_t v10; // 0x407880
    int64_t v11; // 0x407880
    char v12; // 0x407880
    char * v13; // 0x407880
    char * v14; // 0x40796d
    if (v7 == 0) {
        // 0x407b70
        v14 = NULL;
        v10 = 0;
        v13 = NULL;
        v9 = 0;
        if (a3 != 0) {
            goto lab_0x407993;
        } else {
            goto lab_0x407abc;
        }
    } else {
        int64_t v15 = function_406700(result, (int64_t)&g14, 0); // 0x407965
        if (v15 == 0) {
            goto lab_0x407b42;
        } else {
            // 0x40797b
            v14 = (char *)v15;
            *(int64_t *)(v15 + 88) = -1;
            *(int64_t *)(v15 + 104) = -1;
            v10 = result;
            v12 = v8;
            v11 = result;
            if (a3 == 0) {
                goto lab_0x4079a0;
            } else {
                goto lab_0x407993;
            }
        }
    }
  lab_0x407a38:;
    // 0x407a38
    int64_t v16; // 0x407880
    int64_t v17; // 0x4079d9
    *(int64_t *)(v17 + 16) = v16;
    int64_t v18; // 0x407880
    int64_t v19 = v18; // 0x407a3c
    int64_t v20 = v17; // 0x407a3c
    goto lab_0x407a3f;
  lab_0x407a3f:;
    int64_t v21 = v20;
    int64_t v22; // 0x407880
    int64_t v23 = v22 + 1; // 0x407a3f
    int64_t v24 = *(int64_t *)(8 * v23 + a1); // 0x407a43
    int64_t v25 = v19; // 0x407a4b
    int64_t v26 = v23; // 0x407a4b
    int64_t v27 = v21; // 0x407a4b
    int64_t v28 = v24; // 0x407a4b
    if (v24 == 0) {
        // 0x407aa0
        v13 = v14;
        v9 = v21;
        if (a3 == 0 || v23 < 2) {
            goto lab_0x407abc;
        } else {
            // 0x407aab
            v13 = v14;
            v9 = function_406600(result, v21, v23);
            goto lab_0x407abc;
        }
    }
    goto lab_0x407a4d;
  lab_0x407bd0:
    // 0x407bd0
    *(int64_t *)(v18 + 16) = v17;
    v19 = v17;
    v20 = v16;
    goto lab_0x407a3f;
  lab_0x407993:
    // 0x407993
    v12 = (char)(*(int32_t *)(result + 72) / 1024) % 2;
    v11 = v10;
    goto lab_0x4079a0;
  lab_0x407abc:;
    int64_t v35 = function_406700(result, (int64_t)&g14, 0); // 0x407ac6
    *mem = v35;
    char * v33 = v13; // 0x407ad1
    int64_t v34 = v9; // 0x407ad1
    if (v35 != 0) {
        // 0x407ad3
        *(int64_t *)(v35 + 16) = v9;
        int32_t * v36 = (int32_t *)(result + 72); // 0x407adc
        *(int16_t *)(v35 + 112) = 9;
        v33 = v13;
        v34 = v9;
        if ((char)function_406af0(*v36, result + 88) != 0) {
            uint32_t v37 = *v36; // 0x407af0
            if ((v37 & 516) == 0) {
                int64_t v38 = function_406b50(*v2, (int64_t)v37, (int64_t)&g5); // 0x407c00
                int32_t v39 = v38; // 0x407c05
                *(int32_t *)(result + 40) = v39;
                if (v39 < 0) {
                    int32_t v40 = *v36; // 0x407c10
                    *v36 = v40 | 4;
                }
            }
            // 0x407aff
            function_40a8e0(result + 96, 0xffffffff);
            // 0x407b0d
            return result;
        }
    }
    goto lab_0x407b30;
  lab_0x407b42:
    // 0x407b42
    free((int64_t *)*(int64_t *)v7);
    // 0x407b4b
    free(mem);
    // 0x407b0d
    return 0;
  lab_0x4079a0:
    // 0x4079a0
    v13 = v14;
    v9 = 0;
    if (v11 == 0) {
        goto lab_0x407abc;
    } else {
        // 0x407a4d
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v11;
        while (true) {
          lab_0x407a4d:;
            int64_t str2 = v28;
            v16 = v27;
            v22 = v26;
            v18 = v25;
            int32_t len2 = strlen((char *)str2); // 0x407a50
            int64_t v29 = len2; // 0x407a50
            int64_t v30 = v29; // 0x407a59
            if ((v1 & 0x1000) == 0 && len2 >= 3) {
                // 0x407a6a
                v30 = v29;
                if (*(char *)(str2 - 1 + v29) == 47) {
                    int64_t v31 = v29;
                    v30 = v31;
                    while (*(char *)(str2 - 2 + v31) == 47) {
                        int64_t v32 = v31 - 1; // 0x407a8c
                        v30 = v32;
                        if (v31 == 2) {
                            // break -> 0x4079d0
                            break;
                        }
                        v31 = v32;
                        v30 = v31;
                    }
                }
            }
            // 0x4079d0
            v17 = function_406700(result, str2, v30);
            v33 = v14;
            v34 = v16;
            if (v17 == 0) {
                // break -> 0x407b30
                break;
            }
            // 0x4079ea
            *(int64_t *)(v17 + 88) = 0;
            *(int64_t *)(v17 + 8) = (int64_t)v14;
            *(int64_t *)(v17 + 48) = v17 + 264;
            if (v12 == 0 || v16 == 0) {
                // 0x407b90
                *(int16_t *)(v17 + 112) = (int16_t)function_406450(result, v17, 0);
                if (a3 != 0) {
                    goto lab_0x407a38;
                } else {
                    // 0x407bab
                    *(int64_t *)(v17 + 16) = 0;
                    v19 = v17;
                    v20 = v17;
                    if (v16 != 0) {
                        goto lab_0x407bd0;
                    } else {
                        goto lab_0x407a3f;
                    }
                }
            } else {
                // 0x407a1a
                *(int64_t *)(v17 + 168) = 2;
                *(int16_t *)(v17 + 112) = 11;
                if (a3 == 0) {
                    // 0x407bc8
                    *(int64_t *)(v17 + 16) = 0;
                    goto lab_0x407bd0;
                } else {
                    goto lab_0x407a38;
                }
            }
        }
        goto lab_0x407b30;
    }
  lab_0x407b30:
    // 0x407b30
    function_406790(v34);
    free((int64_t *)v33);
    goto lab_0x407b42;
}
// Address range: 0x407c20 - 0x407d99
int64_t fts_close(int64_t a1) {
    if (a1 != 0) {
        int64_t v1 = a1; // 0x407c34
        int64_t v2 = a1; // 0x407c34
        if (*(int64_t *)(a1 + 88) >= 0) {
            while (true) {
                int64_t v3 = v1;
                int64_t v4 = *(int64_t *)(v3 + 16); // 0x407c4f
                int64_t v5; // 0x407c20
                if (v4 != 0) {
                    // 0x407c40
                    free((int64_t *)v3);
                    v5 = v4;
                    v2 = v4;
                    if (*(int64_t *)(v4 + 88) < 0) {
                        // break -> 0x407c6b
                        break;
                    }
                } else {
                    int64_t v6 = *(int64_t *)(v3 + 8); // 0x407c58
                    free((int64_t *)v3);
                    v5 = v6;
                    v2 = v6;
                    if (*(int64_t *)(v6 + 88) < 0) {
                        // break -> 0x407c6b
                        break;
                    }
                }
                // 0x407c4f
                v1 = v5;
            }
        }
        // 0x407c6b
        free((int64_t *)v2);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x407c73
    if (v7 != 0) {
        // 0x407c7c
        function_406790(v7);
    }
    // 0x407c81
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)*(int64_t *)(a1 + 32));
    int32_t * v8 = (int32_t *)(a1 + 72); // 0x407c93
    int32_t v9 = *v8; // 0x407c93
    int32_t * v10; // 0x407c20
    int32_t v11; // 0x407c20
    if ((v9 & 512) == 0) {
        // 0x407cf0
        v11 = 0;
        if ((v9 & 4) != 0) {
            goto lab_0x407ca4;
        } else {
            int32_t * fd = (int32_t *)(a1 + 40); // 0x407cf4
            if (fchdir(*fd) != 0) {
                int32_t * v12 = __errno_location(); // 0x407d50
                int32_t v13 = *v12; // 0x407d5b
                v11 = v13;
                v10 = v12;
                if (close(*fd) == 0 || v13 != 0) {
                    goto lab_0x407ca4;
                } else {
                    goto lab_0x407d72;
                }
            } else {
                // 0x407d00
                v11 = 0;
                if (close(*fd) == 0) {
                    goto lab_0x407ca4;
                } else {
                    // 0x407d0c
                    v10 = __errno_location();
                    goto lab_0x407d72;
                }
            }
        }
    } else {
        int32_t fd2 = *(int32_t *)(a1 + 44); // 0x407c9b
        v11 = 0;
        if (fd2 >= 0) {
            // 0x407d20
            v11 = 0;
            if (close(fd2) != 0) {
                // 0x407d2d
                v11 = *__errno_location();
            }
        }
        goto lab_0x407ca4;
    }
  lab_0x407ca4:
    // 0x407ca4
    function_4067e0(a1 + 96);
    int64_t v14 = *(int64_t *)(a1 + 80); // 0x407cad
    if (v14 != 0) {
        // 0x407cb6
        function_40a160(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 88); // 0x407cbb
    if ((*v8 & 258) == 0) {
        // 0x407d40
        free((int64_t *)v15);
    } else {
        if (v15 != 0) {
            // 0x407ccd
            function_40a160(v15);
        }
    }
    // 0x407cd2
    free((int64_t *)a1);
    int64_t result = v11; // 0x407cdc
    if (v11 != 0) {
        // 0x407d88
        *__errno_location() = v11;
        result = 0xffffffff;
    }
    // 0x407ce2
    return result;
  lab_0x407d72:
    // 0x407d72
    v11 = *v10;
    goto lab_0x407ca4;
}
// Address range: 0x407da0 - 0x4084f9
int64_t fts_read(int64_t result) {
    // 0x407da0
    if (result == 0) {
        // 0x407eca
        return 0;
    }
    int32_t * v1 = (int32_t *)(result + 72); // 0x407db4
    uint32_t v2 = *v1; // 0x407db4
    if ((v2 & 0x4000) != 0) {
        // 0x407eca
        return 0;
    }
    int16_t * v3 = (int16_t *)(result + 116); // 0x407dc0
    int16_t v4 = *v3; // 0x407dc0
    *v3 = 3;
    if (v4 == 1) {
        // 0x408190
        *(int16_t *)(result + 112) = (int16_t)function_406450(result, result, 0);
        // 0x407eca
        return result;
    }
    int16_t * v5 = (int16_t *)(result + 112); // 0x407dda
    int16_t v6 = *v5; // 0x407dda
    int64_t v7; // 0x407da0
    int64_t v8; // 0x407da0
    int64_t v9; // 0x407da0
    int64_t v10; // 0x407da0
    int64_t v11; // 0x407da0
    int64_t v12; // 0x407da0
    int64_t v13; // 0x407da0
    if (v4 == 2) {
        if ((v6 || 1) == 13) {
            int16_t v14 = function_406450(result, result, 1); // 0x40813a
            *v5 = v14;
            if (v14 == 1) {
                uint32_t v15 = *v1; // 0x408420
                if ((v15 & 4) == 0) {
                    int64_t v16 = v15; // 0x408420
                    int64_t v17 = function_406b50(*(int32_t *)(result + 44), v16, (int64_t)&g5); // 0x40849d
                    int32_t v18 = v17; // 0x4084a2
                    *(int32_t *)(result + 68) = v18;
                    if (v18 < 0) {
                        int32_t v19 = *__errno_location(); // 0x4084ce
                        *v5 = 7;
                        *(int32_t *)(result + 64) = v19;
                        *(int64_t *)result = result;
                        // 0x407eca
                        return result;
                    }
                    int16_t * v20 = (int16_t *)(result + 114); // 0x4084a9
                    *v20 = *v20 | 2;
                    v7 = result;
                    v10 = &g5;
                    v12 = v16;
                    goto lab_0x4080d7;
                } else {
                    // 0x40842b
                    *(int64_t *)result = result;
                    v8 = result;
                    goto lab_0x4080ee;
                }
            } else {
                // 0x408148
                *(int64_t *)result = result;
                v11 = 1;
                v9 = result;
                v13 = result;
                if (v14 != 11) {
                    // 0x407eca
                    return result;
                }
                goto lab_0x408160;
            }
        } else {
            if (v6 != 1) {
                goto lab_0x407e20;
            } else {
                goto lab_0x407ef7;
            }
        }
    } else {
        if (v6 != 1) {
            goto lab_0x407e20;
        } else {
            if (v4 != 4) {
                goto lab_0x407ef7;
            } else {
                goto lab_0x407f92;
            }
        }
    }
  lab_0x407e20:;
    int64_t * v21 = (int64_t *)result;
    int64_t v22 = result;
    int64_t v23 = *(int64_t *)(v22 + 16); // 0x407e20
    int64_t result2; // 0x407da0
    int64_t v24; // 0x407da0
    int64_t v25; // 0x407ff0
    while (v23 != 0) {
        // 0x407df8
        *v21 = v23;
        free((int64_t *)v22);
        if (*(int64_t *)(v23 + 88) == 0) {
            // 0x407fe0
            if ((int32_t)function_406a20(result) != 0) {
                // 0x40837f
                *v1 = *v1 | 0x4000;
                result2 = 0;
                return result2;
            } else {
                // 0x407ff0
                v25 = result + 88;
                int64_t v26 = *(int64_t *)v25; // 0x407ff0
                if ((*v1 & 258) == 0) {
                    // 0x40838d
                    free((int64_t *)v26);
                    goto lab_0x40800e;
                } else {
                    if (v26 == 0) {
                        goto lab_0x40800e;
                    } else {
                        // 0x408009
                        function_40a160(v26);
                        goto lab_0x40800e;
                    }
                }
            }
        }
        int16_t * v27 = (int16_t *)(v23 + 116);
        int16_t v28 = *v27; // 0x407e0f
        if (v28 != 4) {
            // 0x408090
            v24 = v23;
            if (v28 == 2) {
                int16_t v29 = function_406450(result, v23, 1); // 0x4083b4
                int16_t * v30 = (int16_t *)(v23 + 112); // 0x4083b4
                *v30 = v29;
                if (v29 == 1) {
                    uint32_t v31 = *v1; // 0x408437
                    if ((v31 & 4) != 0) {
                        // 0x4083be
                        *v27 = 3;
                        v24 = v23;
                        goto lab_0x40809a;
                    } else {
                        int32_t v32 = *(int32_t *)(result + 44); // 0x408446
                        int64_t v33 = function_406b50(v32, (int64_t)v31, (int64_t)&g5); // 0x408450
                        int32_t v34 = v33; // 0x408455
                        *(int32_t *)(v23 + 68) = v34;
                        if (v34 < 0) {
                            int32_t v35 = *__errno_location(); // 0x4084eb
                            *v30 = 7;
                            *(int32_t *)(v23 + 64) = v35;
                            // 0x4083be
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40809a;
                        } else {
                            int16_t * v36 = (int16_t *)(v23 + 114); // 0x408460
                            *v36 = *v36 | 2;
                            // 0x4083be
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40809a;
                        }
                    }
                } else {
                    // 0x4083be
                    *v27 = 3;
                    v24 = v23;
                    goto lab_0x40809a;
                }
            } else {
                goto lab_0x40809a;
            }
        }
        v22 = v23;
        v23 = *(int64_t *)(v22 + 16);
    }
    int64_t * v37 = (int64_t *)(v22 + 8); // 0x407e29
    int64_t v38 = *v37; // 0x407e29
    int64_t result6 = v38; // 0x407e32
    if (*(int64_t *)(v38 + 24) != 0) {
        // 0x408340
        *v21 = v38;
        *(char *)(*(int64_t *)(result + 32) + *(int64_t *)(v38 + 72)) = 0;
        int64_t v39 = function_406ec0(result, 3); // 0x408359
        if (v39 != 0) {
            // 0x4083ef
            free((int64_t *)v22);
            v24 = v39;
            goto lab_0x40809a;
        } else {
            // 0x40836a
            if ((*(char *)(result + 73) & 64) != 0) {
                // 0x407eca
                return 0;
            }
            // 0x408376
            result6 = *v37;
            goto lab_0x407e38;
        }
    } else {
        goto lab_0x407e38;
    }
  lab_0x407ef7:;
    int64_t v40 = v2; // 0x407db4
    if ((v40 & 64) == 0) {
        goto lab_0x407f0b;
    } else {
        // 0x407efc
        if (*(int64_t *)(result + 120) != *(int64_t *)(result + 24)) {
            goto lab_0x407f92;
        } else {
            goto lab_0x407f0b;
        }
    }
  lab_0x407e38:
    // 0x407e38
    *v21 = result6;
    free((int64_t *)v22);
    int64_t * v41 = (int64_t *)(result6 + 88); // 0x407e44
    if (*v41 == -1) {
        // 0x40825f
        free((int64_t *)result6);
        *__errno_location() = 0;
        *v21 = 0;
        // 0x407eca
        return 0;
    }
    // 0x407e4f
    *(char *)(*(int64_t *)(result6 + 72) + *(int64_t *)(result + 32)) = 0;
    if (*v41 == 0) {
        // 0x40828f
        if ((int32_t)function_406a20(result) == 0) {
            goto lab_0x407e86;
        } else {
            goto lab_0x40829f;
        }
    } else {
        uint16_t v42 = *(int16_t *)(result6 + 114); // 0x407e72
        if ((v42 & 2) != 0) {
            int32_t v43 = *v1; // 0x408215
            int32_t * v44 = (int32_t *)(result6 + 68); // 0x40821a
            uint32_t fd = *v44; // 0x40821a
            int32_t fd2 = fd; // 0x40821f
            if ((v43 & 4) == 0) {
                if ((v43 & 512) == 0) {
                    // 0x4083fc
                    if (fchdir(fd) != 0) {
                        // 0x408405
                        *(int32_t *)(result6 + 64) = *__errno_location();
                        *v1 = *v1 | 0x4000;
                    }
                    // 0x408418
                    fd2 = *v44;
                } else {
                    // 0x40822a
                    function_4069b0(result, (int64_t)fd, 1);
                    fd2 = *v44;
                }
            }
            // 0x40823c
            close(fd2);
            goto lab_0x407e86;
        } else {
            if (v42 % 2 == 0) {
                int64_t v45 = *(int64_t *)(result6 + 8); // 0x4083cc
                if ((int32_t)function_406ba0(result, v45, 0xffffffff, (int32_t)"..") == 0) {
                    goto lab_0x407e86;
                } else {
                    goto lab_0x40829f;
                }
            } else {
                goto lab_0x407e86;
            }
        }
    }
  lab_0x407f92:
    // 0x407f92
    if ((*(char *)(result + 114) & 2) != 0) {
        // 0x408397
        close(*(int32_t *)(result + 68));
    }
    int64_t * v46 = (int64_t *)(result + 8); // 0x407f9c
    int64_t v47 = *v46; // 0x407f9c
    if (v47 != 0) {
        // 0x407fa6
        function_406790(v47);
        *v46 = 0;
    }
    // 0x407fb4
    *v5 = 6;
    function_406e20(*v1, result + 88, result);
    // 0x407eca
    return result;
  lab_0x408160:;
    int64_t result5 = v9;
    int64_t result3 = result5; // 0x40816b
    if (*(int64_t *)(result5 + 168) != 2) {
        // 0x407eca
        return result3;
    }
    int64_t v48 = *(int64_t *)(result5 + 8); // 0x4082c7
    int64_t * v49 = (int64_t *)(v48 + 104); // 0x4082cb
    int64_t v50; // 0x407da0
    int64_t v51; // 0x407da0
    if (*v49 != 0) {
        goto lab_0x4082e3;
    } else {
        // 0x4082d2
        if ((*v1 & 24) == 24) {
            // 0x408479
            if ((int32_t)function_406940(v48, v13, v11) != 2) {
                goto lab_0x4082e3;
            } else {
                // 0x40848a
                v50 = (int64_t)*(int16_t *)(result5 + 112);
                v51 = result5;
                goto lab_0x4080e1;
            }
        } else {
            goto lab_0x4082e3;
        }
    }
  lab_0x407f0b:;
    int64_t * v52 = (int64_t *)(result + 8); // 0x407f0b
    int64_t v53 = *v52; // 0x407f0b
    int64_t v54; // 0x407da0
    if (v53 == 0) {
        goto lab_0x4081b9;
    } else {
        if ((v40 & 0x2000) != 0) {
            // 0x4081a3
            *v1 = v2 & -0x2001;
            function_406790(v53);
            *v52 = 0;
            goto lab_0x4081b9;
        } else {
            int64_t v55 = *(int64_t *)(result + 48); // 0x407f22
            if ((int32_t)function_406ba0(result, result, 0xffffffff, (int32_t)v55) == 0) {
                // 0x408246
                v54 = *v52;
            } else {
                int32_t * v56 = __errno_location(); // 0x407f3e
                int64_t v57 = *v52; // 0x407f43
                int16_t * v58 = (int16_t *)(result + 114); // 0x407f4a
                *v58 = *v58 | 1;
                *(int32_t *)(result + 64) = *v56;
                v54 = 0;
                if (v57 != 0) {
                    *(int64_t *)(v57 + 48) = *(int64_t *)(*(int64_t *)(v57 + 8) + 48);
                    int64_t v59 = *(int64_t *)(v57 + 16); // 0x407f6c
                    int64_t v60 = v59; // 0x407f73
                    v54 = v57;
                    while (v59 != 0) {
                        int64_t v61 = *(int64_t *)(*(int64_t *)(v60 + 8) + 48); // 0x407f64
                        *(int64_t *)(v60 + 48) = v61;
                        v59 = *(int64_t *)(v60 + 16);
                        v60 = v59;
                        v54 = v57;
                    }
                }
            }
            goto lab_0x407f75;
        }
    }
  lab_0x4080d7:;
    uint16_t v62 = *(int16_t *)(v7 + 112);
    *(int64_t *)result = v7;
    v50 = v62;
    v51 = v7;
    v11 = v10;
    v9 = v7;
    v13 = v12;
    if (v62 == 11) {
        goto lab_0x408160;
    } else {
        goto lab_0x4080e1;
    }
  lab_0x4080ee:;
    int64_t v63 = v8; // 0x4080f3
    if (*(int64_t *)(v8 + 88) != 0) {
        goto lab_0x4080fe;
    } else {
        goto lab_0x4080f5;
    }
  lab_0x4082e3:;
    int64_t v64 = function_406450(result, result5, 0); // 0x4082eb
    int16_t v65 = v64; // 0x4082f6
    *(int16_t *)(result5 + 112) = v65;
    v50 = v64;
    v51 = result5;
    if ((*(int32_t *)(result5 + 144) & 0xf000) != 0x4000) {
        goto lab_0x4080e1;
    } else {
        // 0x40830c
        if (*(int64_t *)(result5 + 88) == 0) {
            // 0x40846a
            result3 = result5;
            if (v65 != 1) {
                int64_t v66 = result3;
                result2 = v66;
                int64_t result4 = result2;
                return result4;
            }
            goto lab_0x4080f5;
        } else {
            uint64_t v67 = *v49 - 1; // 0x40831b
            if (v67 < 0xfffffffffffffffe) {
                // 0x4084ba
                *v49 = v67;
            }
            // 0x408329
            v63 = result5;
            if (v65 != 1) {
                // 0x407eca
                return result5;
            }
            goto lab_0x4080fe;
        }
    }
  lab_0x4081b9:;
    int64_t v68 = function_406ec0(result, 3); // 0x4081c1
    *v52 = v68;
    v54 = v68;
    if (v68 == 0) {
        int32_t v69 = *v1; // 0x4081d7
        if ((v69 & 0x4000) != 0) {
            // 0x407eca
            return 0;
        }
        // 0x4081e8
        if (*(int32_t *)(result + 64) == 0) {
            // 0x408203
            function_406e20(v69, result + 88, result);
            result2 = result;
          lab_0x407eca:
            // 0x407eca
            return result2;
        }
        // 0x4081f1
        if (*v5 != 4) {
            // 0x4081f8
            *v5 = 7;
        }
        // 0x408203
        function_406e20(v69, result + 88, result);
        // 0x407eca
        return result;
    }
    goto lab_0x407f75;
  lab_0x40809a:;
    int64_t v70 = *(int64_t *)(v24 + 8); // 0x40809a
    int64_t v71 = *(int64_t *)(v70 + 72); // 0x40809e
    char v72 = *(char *)(v71 - 1 + *(int64_t *)(v70 + 56)); // 0x4080aa
    int64_t v73 = *(int64_t *)(result + 32) + v71 + (int64_t)(v72 == 47); // 0x4080b3
    *(char *)v73 = 47;
    int64_t v74 = *(int64_t *)(v24 + 96) + 1; // 0x4080c3
    int64_t v75 = v24 + 264; // 0x4080c7
    memmove((int64_t *)(v73 + 1), (int64_t *)v75, (int32_t)v74);
    v7 = v24;
    v10 = v74;
    v12 = v75;
    goto lab_0x4080d7;
  lab_0x407e86:;
    int64_t v76 = (int64_t)*v1; // 0x407e8b
    int64_t v77 = v76; // 0x407e90
    int32_t * v78; // 0x407da0
    int64_t v79; // 0x407da0
    if (*(int16_t *)(result6 + 112) == 2) {
        goto lab_0x407eb8;
    } else {
        // 0x407e86
        v78 = (int32_t *)(result6 + 64);
        v79 = v76;
        goto lab_0x407e92;
    }
  lab_0x40829f:;
    int32_t v80 = *__errno_location(); // 0x4082a4
    int32_t * v81 = (int32_t *)(result6 + 64);
    *v81 = v80;
    uint32_t v82 = *v1 | 0x4000; // 0x4082a9
    *v1 = v82;
    if (*(int16_t *)(result6 + 112) == 2) {
        // 0x407eca
        return 0;
    }
    // 0x4082bd
    v78 = v81;
    v79 = v82;
    goto lab_0x407e92;
  lab_0x4080e1:
    // 0x4080e1
    result2 = v51;
    v8 = v51;
    if ((int16_t)v50 != 1) {
        // 0x407eca
        return result2;
    }
    goto lab_0x4080ee;
  lab_0x4080fe:;
    int64_t v94 = function_406d70(*v1, result + 88, v63); // 0x40810e
    result2 = v63;
    if ((char)v94 == 0) {
        // 0x40811b
        *__errno_location() = 12;
        result2 = 0;
    }
    // 0x407eca
    return result2;
  lab_0x4080f5:
    // 0x4080f5
    *(int64_t *)(result + 24) = *(int64_t *)(v8 + 120);
    v63 = v8;
    goto lab_0x4080fe;
  lab_0x407f75:
    // 0x407f75
    *v52 = 0;
    v24 = v54;
    goto lab_0x40809a;
  lab_0x407eb8:
    // 0x407eb8
    if ((v77 & 0x4000) != 0) {
        // 0x407eca
        return 0;
    }
    // 0x407eca
    return result6;
  lab_0x407e92:
    // 0x407e92
    if (*v78 != 0) {
        // 0x408281
        int64_t v83; // 0x407da0
        *(int16_t *)(v83 + 112) = 7;
        int64_t v84; // 0x407da0
        v77 = v84;
    } else {
        // 0x407e9d
        *(int16_t *)(result6 + 112) = 6;
        function_406e20((int32_t)v79, result + 88, result6);
        v77 = (int64_t)*v1;
    }
    goto lab_0x407eb8;
  lab_0x40800e:;
    int64_t * v85 = (int64_t *)(v23 + 96); // 0x40800e
    int64_t v86 = *v85; // 0x40800e
    int64_t str = v23 + 264; // 0x408012
    int64_t * v87 = (int64_t *)(result + 32); // 0x408019
    *(int64_t *)(v23 + 72) = v86;
    int64_t v88 = v86 + 1; // 0x408025
    int64_t * v89 = (int64_t *)str; // 0x408029
    memmove((int64_t *)*v87, v89, (int32_t)v88);
    char * found_char_pos = strrchr((char *)str, 47); // 0x408036
    int64_t v90 = v88; // 0x40803e
    int64_t v91; // 0x408036
    if (found_char_pos == NULL) {
        goto lab_0x40806b;
    } else {
        // 0x408040
        v91 = (int64_t)found_char_pos;
        if (str == v91) {
            // 0x408250
            v90 = v88;
            if (*(char *)(v23 + 265) == 0) {
                goto lab_0x40806b;
            } else {
                goto lab_0x408049;
            }
        } else {
            goto lab_0x408049;
        }
    }
  lab_0x40806b:;
    int64_t v92 = *v87; // 0x40806b
    *(int64_t *)(v23 + 56) = v92;
    *(int64_t *)(v23 + 48) = v92;
    function_406af0(*v1, v25);
    v7 = v23;
    v10 = v90;
    v12 = v25;
    goto lab_0x4080d7;
  lab_0x408049:;
    int64_t str2 = v91 + 1; // 0x408049
    int64_t len = strlen((char *)str2); // 0x408050
    int64_t v93 = len + 1; // 0x40805e
    memmove(v89, (int64_t *)str2, (int32_t)v93);
    *v85 = len;
    v90 = v93;
    goto lab_0x40806b;
}
// Address range: 0x408500 - 0x408529
int64_t fts_set(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 5) {
        // 0x408505
        *(int16_t *)(a2 + 116) = (int16_t)a3;
        return 0;
    }
    // 0x408510
    *__errno_location() = 22;
    return 1;
}
// Address range: 0x408530 - 0x40869d
int64_t fts_children(int64_t a1, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x40853d
    if ((a2 & 0xffffdfff) != 0) {
        // 0x408628
        *v1 = 22;
        return 0;
    }
    // 0x408551
    *v1 = 0;
    char * v2 = (char *)(a1 + 73); // 0x40855a
    if ((*v2 & 64) != 0) {
        // 0x4085cf
        return 0;
    }
    int16_t v3 = *(int16_t *)(a1 + 112); // 0x408564
    if (v3 == 9) {
        // 0x408650
        return *(int64_t *)(a1 + 16);
    }
    // 0x408574
    if (v3 != 1) {
        // 0x4085cf
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x40857c
    int64_t v5 = *v4; // 0x40857c
    if (v5 != 0) {
        // 0x408585
        function_406790(v5);
    }
    int64_t v6 = 1; // 0x408596
    if ((int32_t)a2 == 0x2000) {
        int32_t * v7 = (int32_t *)(a1 + 72); // 0x408598
        *v7 = *v7 | 0x2000;
        v6 = 2;
    }
    // 0x4085a5
    int64_t result; // 0x4085c6
    if (*(int64_t *)(a1 + 88) != 0 || *(char *)*(int64_t *)(a1 + 48) == 47) {
        // 0x4085c0
        result = function_406ec0(a1, v6);
        *v4 = result;
        // 0x4085cf
        return result;
    }
    uint32_t v8 = *(int32_t *)(a1 + 72); // 0x4085b7
    if ((v8 & 4) != 0) {
        // 0x4085c0
        result = function_406ec0(a1, v6);
        *v4 = result;
        // 0x4085cf
        return result;
    }
    int32_t v9 = *(int32_t *)(a1 + 44); // 0x4085e0
    int64_t v10 = function_406b50(v9, (int64_t)v8, (int64_t)&g5); // 0x4085e8
    int32_t fd = v10; // 0x4085ef
    if (fd < 0) {
        // 0x408678
        *v4 = 0;
        // 0x4085cf
        return 0;
    }
    // 0x4085f7
    *v4 = function_406ec0(a1, v6);
    if ((*v2 & 2) != 0) {
        // 0x408660
        function_4069b0(a1, v10 & 0xffffffff, 1);
        // 0x4085cf
        return *v4;
    }
    // 0x40860c
    if (fchdir(fd) == 0) {
        // 0x408617
        close(fd);
        // 0x4085cf
        return *v4;
    }
    // 0x408687
    close(fd);
    // 0x4085cf
    return 0;
}
// Address range: 0x4086a0 - 0x40877f
int64_t function_4086a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4086ac
    uint32_t v2 = *v1; // 0x4086ac
    int64_t v3 = a2 & 0xffffffff; // 0x4086b1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4086b4
    uint64_t v5 = (int64_t)*v4; // 0x4086b4
    int64_t v6; // 0x408722
    if (v3 <= v5) {
      lab_0x40871c_2:
        // 0x40871c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4086a2
    int64_t v8 = v2; // 0x4086a0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40871c
        goto lab_0x40871c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4086d8
    int64_t v17; // 0x4086e6
    int64_t * v18; // 0x408700
    int64_t * v19; // 0x408703
    int64_t v20; // 0x40870e
    int64_t v21; // 0x4086e6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4086e3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x408700
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x408717
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40871c
            goto lab_0x40871c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40871c
            goto lab_0x40871c_2;
        }
        // 0x4086d2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40875b
    int64_t * v23 = (int64_t *)v22; // 0x408760
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408763
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408760
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408777
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4086cd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40871c
            goto lab_0x40871c_2;
        }
        // 0x4086d2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4086e3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x408700
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x408717
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40871c
                goto lab_0x40871c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40871c
                goto lab_0x40871c_2;
            }
            // 0x4086d2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x408740
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408760
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408777
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40871c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408780 - 0x408d9c
int64_t function_408780(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40879f
    int64_t v2 = *v1; // 0x40879f
    char * str2 = (char *)v2; // 0x4087ac
    char c = *str2; // 0x4087ac
    int64_t v3 = v2; // 0x4087d8
    int64_t v4 = 0; // 0x408780
    int32_t v5; // 0x408780
    int64_t v6; // 0x408780
    int64_t v7; // 0x408780
    int64_t v8; // 0x408780
    int64_t v9; // 0x408780
    int64_t v10; // 0x408780
    int64_t v11; // 0x408780
    int64_t v12; // 0x408780
    int64_t v13; // 0x408780
    int64_t str3; // 0x408780
    int64_t v14; // 0x408780
    int64_t v15; // 0x408780
    int64_t v16; // 0x408780
    int64_t v17; // 0x408780
    int32_t v18; // 0x408780
    int32_t v19; // 0x408780
    int32_t v20; // 0x408780
    int32_t v21; // 0x408780
    int32_t v22; // 0x408780
    int32_t v23; // 0x408780
    int32_t v24; // 0x408780
    int32_t v25; // 0x408780
    int32_t v26; // 0x408780
    int32_t v27; // 0x408780
    int32_t v28; // 0x408780
    int32_t v29; // 0x408780
    int64_t nmemb; // 0x408780
    int64_t v30; // 0x408780
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4087dc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4087d8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4087e8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4087ee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4087b8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40881c
                int64_t v34; // 0x408780
                int64_t v35; // 0x408780
                if (strncmp(str, str2, n) == 0) {
                    // 0x408825
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4089a0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408836
                int64_t v37 = *(int64_t *)v36; // 0x40883a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x408810
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408825
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4089a0;
                        }
                    }
                    // 0x408836
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
                  lab_0x408886:
                    // 0x408886
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
                        goto lab_0x4088e0;
                    } else {
                        if (v11 == 0) {
                            // 0x408a50
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4088e0;
                        } else {
                            if (v39 == 0) {
                                // 0x408a00
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4088aa;
                                } else {
                                    // 0x408a0c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4088aa;
                                    } else {
                                        // 0x408a1a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4088aa;
                                        } else {
                                            goto lab_0x4088e0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4088aa;
                            }
                        }
                    }
                }
              lab_0x4088f1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408ac6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408c72
                            flockfile(g37);
                            int64_t v41 = *v1; // 0x408c92
                            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x408cdf
                            int64_t v43 = (int64_t)g37;
                            int64_t v44 = v43; // 0x408cf9
                            int64_t v45; // 0x408cfb
                            if (*(char *)v42 != 0) {
                                // 0x408cfb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g37;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408cf3
                            while (v17 + nmemb != v42) {
                                // 0x408cf5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x408cfb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g37;
                                }
                                // 0x408ce8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x408d20
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g37);
                            v40 = *v1;
                        } else {
                            // 0x408ad4
                            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x408c2f
                        free((int64_t *)v17);
                    }
                    // 0x408b29
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408b40
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4089ee
                    return 63;
                }
                // 0x408910
                v5 = v39;
                if (v13 != 0) {
                    // 0x408994
                    v35 = v13;
                    v34 = v25;
                  lab_0x4089a0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4089b0
                    uint32_t v50 = *v49; // 0x4089b0
                    int64_t v51 = v50; // 0x4089b0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4089ba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4089c3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x408bef
                                __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x408b9a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4089ee
                            return 63;
                        }
                        // 0x408a38
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x408d4f
                                    __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x408c4d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408c60
                                // 0x4089ee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x408b5e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408b72
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4089db
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4089de
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4089e2
                    int64_t result = v59; // 0x4089e8
                    if (v58 != 0) {
                        // 0x4089ea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4089ee
                    return result;
                }
            } else {
                // 0x4087ee
                v5 = v32;
            }
            // break -> 0x408915
            break;
        }
    }
    // 0x408915
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40892d
        if (*(char *)(v60 + 1) != 45) {
            // 0x408937
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4089ee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408a79
        __fprintf_chk(g37, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408966
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408976
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4088e0:
    // 0x4088e0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4088e0
    int64_t v63 = *(int64_t *)v62; // 0x4088e4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4088f1
        goto lab_0x4088f1;
    }
    goto lab_0x408886;
  lab_0x4088aa:
    // 0x4088aa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408780
    int32_t v65; // 0x408780
    int32_t v66; // 0x408780
    if (v27 != 0) {
        goto lab_0x4088e0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408a60
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4088e0;
            } else {
                goto lab_0x4088d1;
            }
        } else {
            // 0x4088c5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x408bbc
                int64_t v67 = (int64_t)mem; // 0x408bbc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4088e0;
                } else {
                    // 0x408bcf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4088d1;
                }
            } else {
                goto lab_0x4088d1;
            }
        }
    }
  lab_0x4088d1:
    // 0x4088d1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4088e0;
}
// Address range: 0x408da0 - 0x409366
int64_t function_408da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x408dc1
    if (v3 < 1) {
        // 0x408f7e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x408dbd
    int32_t v5 = *(int32_t *)a7; // 0x408dc9
    uint64_t v6 = a1 & 0xffffffff; // 0x408dcb
    int64_t v7 = v2; // 0x408dd0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x408dd3
    *v8 = 0;
    int64_t v9; // 0x408da0
    int64_t v10; // 0x408da0
    int64_t v11; // 0x408da0
    int64_t v12; // 0x408da0
    int64_t str; // 0x408da0
    int64_t v13; // 0x408da0
    int64_t v14; // 0x408da0
    int64_t v15; // 0x408da0
    int64_t v16; // 0x408da0
    int64_t v17; // 0x408da0
    int32_t v18; // 0x408da0
    char v19; // 0x408da0
    if (v5 == 0) {
        // 0x408fb8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x408dea;
    } else {
        // 0x408de3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x408e30
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x408e33
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x408ef8;
            } else {
                int64_t v22 = v7 + 1; // 0x408e46
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x408e56
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x408f0c;
                } else {
                    goto lab_0x408e68;
                }
            }
        } else {
            goto lab_0x408dea;
        }
    }
  lab_0x408dea:
    // 0x408dea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x408df0
    *v24 = 0;
    int64_t v25; // 0x408da0
    int64_t v26; // 0x408da0
    int64_t v27; // 0x408da0
    switch (*(char *)&v2) {
        case 45: {
            // 0x408ee0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x408eed;
        }
        case 43: {
            // 0x4091f0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x408eed;
        }
        default: {
            // 0x408e0c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40916f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x409288
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x408eed;
                } else {
                    // 0x40917d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x408e1a;
                }
            } else {
                goto lab_0x408e1a;
            }
        }
    }
  lab_0x408ef8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x408eff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x408e68;
    } else {
        goto lab_0x408f0c;
    }
  lab_0x408e1a:
    // 0x408e1a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x408eed;
  lab_0x408eed:
    // 0x408eed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x408ef8;
  lab_0x408e68:;
    uint32_t v30 = *(int32_t *)a7; // 0x408e68
    int64_t v31 = v30; // 0x408e68
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x408e6a
    if ((int64_t)*v32 > v31) {
        // 0x408e6f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x408e72
    if (*v33 > v30) {
        // 0x408e77
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x408e7a
    int64_t v35 = v31; // 0x408e7e
    int64_t v36 = v15; // 0x408e7e
    int64_t v37; // 0x408da0
    int64_t v38; // 0x408da0
    int64_t v39; // 0x408da0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x408fe8
        int64_t v41 = v40; // 0x408fe8
        v2 = v41;
        int64_t v42; // 0x408da0
        if (*v33 == v40) {
            // 0x4091d0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4091d8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x408ff4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408ff8
                function_4086a0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x409008
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x409011
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40901a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x409031
            int64_t v47 = v45 & 0xffffffff; // 0x409035
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40903e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x409044
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x409046;
                }
            }
            int64_t v48 = v47 + 1; // 0x409020
            int64_t v49 = v48 & 0xffffffff; // 0x409020
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x409031
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40903e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x409044
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x409046;
                    }
                }
                // 0x409020
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4091e8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x409046;
    } else {
        goto lab_0x408e84;
    }
  lab_0x408f0c:
    // 0x408f0c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x408f0f
    int64_t v51 = v12; // 0x408f0f
    int64_t v52 = v14; // 0x408f0f
    if (*(char *)v10 == 0) {
        goto lab_0x408e68;
    } else {
        goto lab_0x408f15;
    }
  lab_0x408e84:;
    int32_t v53 = v35; // 0x408e84
    int64_t v54; // 0x408da0
    int64_t v55; // 0x408da0
    int64_t v56; // 0x408da0
    int64_t v57; // 0x408da0
    int64_t v58; // 0x408da0
    int64_t v59; // 0x408da0
    char * v60; // 0x408da0
    int64_t v61; // 0x408da0
    int64_t v62; // 0x408e99
    int64_t v63; // 0x408da0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x408fd3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x408fd6;
    } else {
        // 0x408e8c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408da0
        int64_t v66 = v65 ? -1 : 1; // 0x408ea0
        int64_t v67 = (int64_t)"--"; // 0x408da0
        int64_t v68 = v62; // 0x408da0
        int64_t v69 = 3; // 0x408ea0
        unsigned char v70 = *(char *)v68; // 0x408ea0
        char v71 = *(char *)v67; // 0x408ea0
        char v72 = v71; // 0x408ea0
        bool v73 = false; // 0x408ea0
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
            // 0x408f90
            if (*(char *)v62 == 45) {
                // 0x409050
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x409050
                if (c == 0) {
                    goto lab_0x408f9a;
                } else {
                    // 0x40905d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4090e0;
                    } else {
                        if (c == 45) {
                            // 0x4092c3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x409135;
                        } else {
                            // 0x40906e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4090e0;
                            } else {
                                // 0x409073
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409094;
                                } else {
                                    // 0x40907a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4090e0;
                                    } else {
                                        goto lab_0x409094;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x408f9a;
            }
        } else {
            uint32_t v75 = *v33; // 0x408eb0
            v2 = v75;
            int32_t v76 = *v32; // 0x408eb3
            int64_t v77 = v35 + 1; // 0x408eb6
            int32_t v78 = v77; // 0x408eb9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x409220
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x408ec7
                    function_4086a0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x408ed5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x408fd6;
        }
    }
  lab_0x408f15:;
    // 0x408f15
    int64_t v79; // bp-104, 0x408da0
    int64_t v80 = &v79; // 0x408daa
    int64_t v81 = v50 + 1; // 0x408f15
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x408f1c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x408f21
    *v83 = v81;
    char v84 = *(char *)v2; // 0x408f25
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x408f29
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x408f31
    *v86 = v84;
    char * str2 = (char *)v52; // 0x408f36
    int32_t c2 = v84; // 0x408f36
    char * found_char_pos = strchr(str2, c2); // 0x408f36
    int64_t v87 = *v82; // 0x408f3b
    v2 = v87;
    int64_t v88 = *v85; // 0x408f45
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x408f50
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x409240
            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40920d
        *(int32_t *)(v1 + 8) = c2;
        // 0x408f7e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x408f36
    char v91 = *(char *)(v90 + 1); // 0x408f6b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x408f25
        if (v91 != 58) {
            // 0x408f7e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409194
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409298
                *v8 = 0;
            } else {
                // 0x40927c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4091be
            *v83 = 0;
            // 0x408f7e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40919e
        if (v93 != 0) {
            // 0x409230
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4091be
            *v83 = 0;
            // 0x408f7e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4091b1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4091be
            *v83 = 0;
            // 0x408f7e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4092fa
            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4092aa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4092b1
        // 0x4091be
        *v83 = 0;
        // 0x408f7e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x409109
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40910b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x409330
                __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4092e1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4092e8
            // 0x408f7e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x409116
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40911a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x409135;
  lab_0x409046:
    // 0x409046
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x408e84;
  lab_0x409135:;
    int64_t v99 = function_408780(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x409153
    // 0x408f7e
    return v99 & 0xffffffff;
  lab_0x408fd6:;
    int32_t v100 = v55; // 0x408fd6
    if (v100 != (int32_t)v59) {
        // 0x408fda
        *(int32_t *)a7 = v100;
    }
    // 0x408f7e
    return 0xffffffff;
  lab_0x408f9a:
    // 0x408f9a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408fa1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x408f7e
    return v99 & 0xffffffff;
  lab_0x4090e0:
    // 0x4090e0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x408f15;
  lab_0x409094:
    // 0x409094
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408780(v6, a2, str, a4, a5, v57, v1, v11, &g13); // 0x4090ba
    if ((int32_t)v101 != -1) {
        // 0x408f7e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4090cf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4090e0;
}
// Address range: 0x409370 - 0x4093c6
int64_t function_409370(int64_t a1) {
    // 0x409370
    *(int32_t *)&g51 = g32;
    *(int32_t *)&g52 = g31;
    int64_t v1; // 0x409370
    int64_t result = function_408da0(v1, v1, v1, v1, v1, v1, &g51, a1 & 0xffffffff); // 0x409396
    g32 = *(int32_t *)&g51;
    g57 = g54;
    *(int32_t *)&g30 = g53;
    return result;
}
// Address range: 0x4093d0 - 0x4093e8
int64_t function_4093d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4093d0
    return function_409370(1);
}
// Address range: 0x4093f0 - 0x409403
int64_t function_4093f0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x4093f0
    return function_409370(0);
}
// Address range: 0x409410 - 0x409425
int64_t function_409410(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409410
    return function_408da0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x409430 - 0x409446
int64_t function_409430(void) {
    // 0x409430
    return function_409370(0);
}
// Address range: 0x409450 - 0x409468
int64_t function_409450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409450
    return function_408da0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409470 - 0x4094ea
int64_t function_409470(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40947b
    int64_t v2 = (int64_t)&g14; // 0x40947b
    int32_t * pwc; // 0x409470
    int64_t v3; // 0x409470
    int64_t n; // 0x409470
    if (a2 == 0) {
        goto lab_0x4094c2;
    } else {
        // 0x40947d
        if (a3 == 0) {
            // 0x4094a8
            return -2;
        }
        // 0x409489
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4094c2;
        } else {
            goto lab_0x409494;
        }
    }
  lab_0x4094c2:
    // 0x4094c2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409470
    pwc = (int32_t *)&v4;
    goto lab_0x409494;
  lab_0x409494:;
    char * wstr = (char *)v3; // 0x40949a
    int64_t ps; // 0x409470
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40949a
    int64_t result = v5; // 0x40949a
    if (v5 < 0xfffffffe) {
        // 0x4094a8
        return result;
    }
    int64_t result2 = result; // 0x4094d9
    if ((char)function_409630(0, v3) == 0) {
        // 0x4094db
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4094a8
    return result2;
}
// Address range: 0x4094f0 - 0x40954d
int64_t function_4094f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4094f7
    int64_t v2; // 0x4094f0
    int64_t result = function_40afb0(a1, v2); // 0x409508
    if ((v2 & 32) != 0) {
        // 0x409530
        if ((int32_t)result == 0) {
            // 0x409534
            *__errno_location() = 0;
        }
        // 0x40952a
        return 0xffffffff;
    }
    // 0x409511
    if ((int32_t)result == 0) {
        // 0x40952a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x409518
    if (v1 == 0) {
        // 0x40951a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40952a
    return result2;
}
// Address range: 0x409550 - 0x409560
int64_t function_409550(int64_t a1) {
    // 0x409550
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0x95f616;
    int64_t result; // 0x409550
    return result;
}
// Address range: 0x409560 - 0x4095e0
int64_t function_409560(int64_t a1, int64_t a2) {
    // 0x409560
    if (*(int32_t *)(a1 + 24) != 0x95f616) {
        // 0x4095c2
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 60, "cycle_check");
        return &g60;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x409569
    int64_t v2 = *v1; // 0x409569
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x40956d
    if (v2 == 0) {
        // 0x409590
        *v1 = 1;
        // 0x409598
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 8) = a2;
        return 0;
    }
    if (v3 == a1) {
        // 0x4095a8
        if (*(int64_t *)(a1 + 8) == a2) {
            // 0x409588
            return 1;
        }
    }
    int64_t v4 = v2 + 1; // 0x40957b
    *v1 = v4;
    if ((v4 & v2) != 0) {
        // 0x409588
        return 0;
    }
    // 0x4095b7
    if (v4 == 0) {
        // 0x409588
        return 1;
    }
    // 0x409598
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 8) = a2;
    return 0;
}
// Address range: 0x4095e0 - 0x40962a
int64_t function_4095e0(int64_t path, int64_t oflag, int32_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x4095f3
    return function_40af60((int64_t)fd);
}
// Address range: 0x409630 - 0x40968e
int64_t function_409630(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x409636
    if (locale == NULL) {
        // 0x409663
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x409636
    bool v2; // 0x409630
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g15; // 0x409630
    int64_t v5 = v1; // 0x409630
    int64_t v6 = 2; // 0x409655
    unsigned char v7 = *(char *)v5; // 0x409655
    char v8 = *(char *)v4; // 0x409655
    char v9 = v8; // 0x409655
    bool v10 = false; // 0x409655
    while (v7 == v8) {
        // 0x409648
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409661
    int64_t v13 = v1; // 0x409661
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409663
        return 0;
    }
    int64_t v14 = 6; // 0x409661
    unsigned char v15 = *(char *)v13; // 0x40967d
    char v16 = *(char *)v12; // 0x40967d
    char v17 = v16; // 0x40967d
    bool v18 = false; // 0x40967d
    while (v15 == v16) {
        // 0x409670
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
// Address range: 0x409690 - 0x409723
int64_t function_409690(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x4096a7
    if (v1 == -1) {
        // 0x40971f
        return -1;
    }
    int64_t v2 = v1; // 0x4096af
    int64_t v3; // 0x409690
    while (true) {
      lab_0x4096b8:
        // 0x4096b8
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x409710;
        } else {
            goto lab_0x409715;
        }
    }
  lab_0x40971f_2:;
    // 0x40971f
    int64_t result; // 0x409690
    return result;
  lab_0x409715:;
    int64_t v4 = v3 + 2; // 0x409715
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40971f
        goto lab_0x40971f_2;
    }
    goto lab_0x4096b8;
  lab_0x409710:
    // 0x409710
    result = v3;
    goto lab_0x409715;
}
// Address range: 0x409730 - 0x409740
int64_t function_409730(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x409730
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x409740 - 0x409747
int64_t function_409740(int64_t a1, int64_t a2) {
    // 0x409740
    int64_t v1; // 0x409740
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x409750 - 0x409771
int64_t function_409750(int64_t a1, int64_t a2) {
    // 0x409750
    int64_t v1; // 0x409750
    return 16 * v1 + a2;
}
// Address range: 0x409780 - 0x409899
int64_t function_409780(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_409750(a1, a2); // 0x409794
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40979c
    int64_t result2 = *v2; // 0x40979c
    if (result2 == 0) {
        // 0x40982e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x4097c4
            if (v3 == 0) {
                // 0x40982e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x4097d1
            int64_t v5 = v3; // 0x4097d7
            int64_t v6 = v1; // 0x4097d7
            int64_t result = v4; // 0x4097d7
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40980c_2:
                // 0x40980c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x409811
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x409820
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40982e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x4097e4
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x4097f1
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40980c_2;
                }
                // 0x4097f9
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40980c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40982e
            return 0;
        }
    }
    // 0x409843
    if ((char)a4 == 0) {
        // 0x40982e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x409848
    if (v12 == 0) {
        // 0x409890
        *v2 = 0;
        // 0x40982e
        return result2;
    }
    // 0x409851
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40985f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x4098a0 - 0x40991e
int64_t function_4098a0(uint64_t a1) {
    if (a1 == (int64_t)&g16) {
        // 0x40991d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x4098ab
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g16) {
        // 0x40990a
        *(int64_t *)a1 = (int64_t)&g16;
        return 0;
    }
    // 0x4098b9
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x4098d4
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x4098e1
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x4098e9
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x40991d
    return 1;
}
// Address range: 0x409920 - 0x409a6a
int64_t function_409920(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40993a
    uint64_t v2 = *v1; // 0x40993a
    if (v2 <= a2) {
        // 0x409a24
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x409920
    int64_t v8 = a2; // 0x409920
    int64_t v9; // 0x409920
    int64_t result; // 0x409920
    int64_t v10; // 0x409920
    while (true) {
      lab_0x409956_2:
        // 0x409956
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x409956
        int64_t v12 = *v11; // 0x409956
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x409948;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40995f
            int64_t v14 = *v13; // 0x40995f
            int64_t v15 = v14; // 0x409967
            int64_t v16 = v12; // 0x409967
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x409984
                    int64_t v19 = *v18; // 0x409984
                    int64_t v20 = function_409750(v3, v19); // 0x40998d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x409992
                    int64_t v22 = *v21; // 0x409992
                    int64_t * v23 = (int64_t *)v20; // 0x409996
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x409970
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x4099bf
                            break;
                        }
                    } else {
                        // 0x40999c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x4099bf
                            break;
                        }
                    }
                    // 0x409984
                    v15 = v22;
                }
                // 0x4099bf
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x4099c3
                v9 = *v1;
                goto lab_0x409948;
            } else {
                int64_t v26 = function_409750(v3, v25); // 0x4099db
                int64_t * v27 = (int64_t *)v26; // 0x4099e0
                if (*v27 == 0) {
                    // 0x409a40
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x4099e9
                    int64_t * v29; // 0x409920
                    int64_t v30; // 0x409920
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x409a4f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x409a24
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x409a4f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x4099fa
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x409a09
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x409a11
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x409a1a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x409a24
                    break;
                }
                goto lab_0x409956_2;
            }
        }
    }
    // 0x409a24
    return result;
  lab_0x409948:;
    int64_t v36 = v10 + 16; // 0x409948
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x409956_2;
    // 0x409956
    goto lab_0x409956_2;
}
// Address range: 0x409a70 - 0x409a75
int64_t function_409a70(int64_t a1) {
    // 0x409a70
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x409a80 - 0x409a85
int64_t function_409a80(int64_t a1) {
    // 0x409a80
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x409a90 - 0x409a95
int64_t function_409a90(int64_t a1) {
    // 0x409a90
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x409aa0 - 0x409aef
int64_t function_409aa0(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409aa3
    int64_t result = 0; // 0x409aac
    if (v1 <= a1) {
      lab_0x409aed:
        // 0x409aed
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x409ab0
    while (*(int64_t *)v3 == 0) {
        // 0x409ab0
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x409abf
    int64_t v6 = v5; // 0x409acb
    int64_t v7 = 1; // 0x409acb
    int64_t v8; // 0x409aa0
    int64_t v9; // 0x409ad0
    int64_t v10; // 0x409ad4
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x409ad0
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x409ae0
    int64_t v12 = v3 + 16; // 0x409ae4
    while (v12 < v1) {
        // 0x409ab9
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x409ab0
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x409abf
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
                // 0x409ad0
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x409add
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x409aed
    return result2;
}
// Address range: 0x409af0 - 0x409b57
int64_t function_409af0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409af3
    int64_t v2 = a1; // 0x409aff
    int64_t v3 = 0; // 0x409aff
    int64_t v4 = 0; // 0x409aff
    int64_t v5 = 0; // 0x409aff
    int64_t v6 = 0; // 0x409aff
    int64_t v7; // 0x409af0
    int64_t v8; // 0x409af0
    int64_t v9; // 0x409af0
    if (v1 > a1) {
        while (true) {
          lab_0x409b11_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x409b08;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x409b17
                int64_t v13 = v10 + 1; // 0x409b1b
                int64_t v14 = v11 + 1; // 0x409b1f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x409b26
                int64_t v16 = v14; // 0x409b26
                if (v12 == 0) {
                    goto lab_0x409b08;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x409b30
                    int64_t v18 = v16 + 1; // 0x409b34
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x409b30
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x409b3d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x409b46
                        break;
                    }
                    goto lab_0x409b11_2;
                }
            }
        }
    }
  lab_0x409b46:
    // 0x409b46
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x409b4f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x409b4e
    return 0;
  lab_0x409b08:;
    int64_t v20 = v8 + 16; // 0x409b08
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x409b46
        goto lab_0x409b46;
    }
    goto lab_0x409b11_2;
    // 0x409b11
    goto lab_0x409b11_2;
}
// Address range: 0x409b60 - 0x409ca8
int64_t function_409b60(uint64_t a1, int64_t a2) {
    // 0x409b60
    int128_t v1; // 0x409b60
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x409b73
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x409b77
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x409b7e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x409b90
            while (*(int64_t *)v7 == 0) {
                // 0x409b90
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x409bcd
                    goto lab_0x409bcd;
                }
            }
        }
    }
  lab_0x409bcd:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x409bdc
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x409b60
    int128_t v10; // 0x409b60
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x409c73
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x409c7c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x409c13;
        } else {
            goto lab_0x409c89;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x409c06
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x409c89;
        } else {
            goto lab_0x409c13;
        }
    }
  lab_0x409c13:
    // 0x409c13
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x409c17
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x409c17
    goto lab_0x409c1c;
  lab_0x409c89:
    // 0x409c89
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x409c9a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x409c1c;
  lab_0x409c1c:
    // 0x409c1c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x409cb0 - 0x409d03
int64_t function_409cb0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_409750(a1, result); // 0x409cba
    int64_t v2 = *(int64_t *)v1; // 0x409cbf
    if (v2 == 0) {
        // 0x409ced
        return 0;
    }
    // 0x409cd3
    if (v2 == result) {
        // 0x409ced
        return result;
    }
    int64_t v3 = v1; // 0x409ce4
    int64_t result2 = v2; // 0x409ce2
    while ((char)v1 == 0) {
        // 0x409ce4
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x409ced
            break;
        }
        // 0x409cd0
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x409ced
            break;
        }
        result2 = v2;
    }
    // 0x409ced
    return result2;
}
// Address range: 0x409d10 - 0x409d58
int64_t function_409d10(uint64_t a1) {
    int64_t result = 0; // 0x409d15
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x409d27
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409d1e
    if (v1 <= a1) {
        // 0x409d27
        return result;
    }
    int64_t v2 = a1; // 0x409d25
    int64_t v3 = *(int64_t *)v2; // 0x409d39
    result = v3;
    while (v3 == 0) {
        // 0x409d30
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x409d27
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x409d27
    return result;
}
// Address range: 0x409d60 - 0x409dca
int64_t function_409d60(int64_t a1, int64_t a2) {
    int64_t v1 = function_409750(a1, a2); // 0x409d6c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x409d88
    while (*(int64_t *)v2 != a2) {
        // 0x409d80
        if (v3 == 0) {
            goto lab_0x409d96;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x409dc0
        return *(int64_t *)v3;
    }
  lab_0x409d96:;
    int64_t v4 = v1 + 16; // 0x409da8
    int64_t result = 0; // 0x409daf
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x409da0
        result = v5;
        if (v5 != 0) {
            // break -> 0x409db3
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x409db3
    return result;
}
// Address range: 0x409dd0 - 0x409e34
int64_t function_409dd0(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x409dd6
    int64_t result = 0; // 0x409dda
    if (*v1 <= a1) {
      lab_0x409df1:
        // 0x409df1
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x409ddf
    int64_t v4 = v2; // 0x409de5
    int64_t v5; // 0x409dd0
    int64_t v6; // 0x409dd0
    int64_t v7; // 0x409e18
    int64_t v8; // 0x409e21
    int64_t v9; // 0x409e01
    int64_t v10; // 0x409e05
    if (v3 != 0) {
        // 0x409df8
        if (v2 >= a3) {
            // break -> 0x409df1
            break;
        }
        // 0x409dfd
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
            // 0x409e15
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x409e10
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x409e15
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
    int64_t v12 = a1 + 16; // 0x409de7
    result = v11;
    while (*v1 > v12) {
        // 0x409ddf
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x409df8
            result = v2;
            if (v2 >= a3) {
                // break -> 0x409df1
                break;
            }
            // 0x409dfd
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
                // 0x409e15
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x409e10
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x409e15
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x409de7
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x409df1
    return result;
}
// Address range: 0x409e40 - 0x409eb8
int64_t function_409e40(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409e51
    int64_t result = 0; // 0x409e55
    if (v1 <= a1) {
      lab_0x409e74:
        // 0x409e74
        return result;
    }
    int64_t v2 = a1; // 0x409e6a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x409e68
    int64_t v5 = v2; // 0x409e68
    int64_t v6 = v3; // 0x409e68
    int64_t v7; // 0x409e40
    int64_t v8; // 0x409e98
    int64_t v9; // 0x409e9c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x409e98
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x409ea8
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x409e98
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
        // 0x409e62
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x409e98
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x409ea8
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x409e98
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x409e6a
        result2 = v4;
        v2 += 16;
    }
    // 0x409e74
    return result2;
}
// Address range: 0x409ec0 - 0x409ef1
int64_t function_409ec0(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x409ec7
    if (v1 == 0) {
        // 0x409eed
        return 0;
    }
    int64_t result = 0; // 0x409ec7
    v2++;
    char v3 = *(char *)v2; // 0x409ee3
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x409eed
    return result;
}
// Address range: 0x409f00 - 0x409f20
int64_t function_409f00(int64_t a1) {
    // 0x409f00
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x409f20 - 0x40a0aa
int64_t function_409f20(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x409f20
    int128_t v1; // 0x409f20
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x409f5a
    int64_t result = (int64_t)mem; // 0x409f5a
    if (mem == NULL) {
        // 0x40a00a
        return result;
    }
    int64_t v3 = result + 40; // 0x409f6b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x409f20
    int128_t v6; // 0x409f20
    if (a2 == 0) {
        // 0x40a020
        *v4 = (int64_t)&g16;
        int64_t v7 = function_4098a0(v3); // 0x40a028
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40a02d
        if ((char)v7 == 0) {
            // 0x40a000
            free(mem);
            // 0x40a00a
            return 0;
        }
        // 0x40a039
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40a083;
        } else {
            goto lab_0x40a03e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_4098a0(v3) == 0) {
            // 0x40a000
            free(mem);
            // 0x40a00a
            return 0;
        }
        // 0x409f85
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_409690(a1); // 0x409f93
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40a000
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40a000
                free(mem);
                // 0x40a00a
                return 0;
            }
            // 0x409fb1
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40a000
                free(mem);
                // 0x40a00a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x409fc2
            int64_t v10 = (int64_t)mem2; // 0x409fc2
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40a000
                free(mem);
                // 0x40a00a
                return 0;
            }
            // 0x409fcf
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x409730 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x409740 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40a00a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40a078
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40a03e;
        } else {
            goto lab_0x40a083;
        }
    }
  lab_0x40a083:
    // 0x40a083
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40a093
    int128_t v13 = v6; // 0x40a09c
    int128_t v14 = __asm_addss(v12, v12); // 0x40a09c
    goto lab_0x40a047;
  lab_0x40a03e:
    // 0x40a03e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40a047;
  lab_0x40a047:
    // 0x40a047
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40a000
    free(mem);
    // 0x40a00a
    return 0;
}
// Address range: 0x40a0b0 - 0x40a158
int64_t function_40a0b0(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40a0ba
    uint64_t v2 = *v1; // 0x40a0ba
    int64_t result; // 0x40a0b0
    if (v2 <= a1) {
      lab_0x40a143:
        // 0x40a143
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40a0c8
    while (*v6 == 0) {
        // 0x40a0c8
        v7 = v5 + 16;
        int64_t v8; // 0x40a0b0
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40a143
            goto lab_0x40a143;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40a0d9
    int64_t v10 = *v9; // 0x40a0d9
    int64_t v11 = *v3; // 0x40a0de
    int64_t v12 = v11; // 0x40a0e5
    int64_t v13 = v10; // 0x40a0e5
    int64_t result2 = v11; // 0x40a0e5
    int64_t * v14; // 0x40a0fe
    int64_t v15; // 0x40a0fe
    int64_t v16; // 0x40a0fa
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40a0f5
            v16 = *v3;
        }
        // 0x40a0fe
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40a0f0
            v16 = 0;
            if (v12 != 0) {
                // 0x40a0f5
                v16 = *v3;
            }
            // 0x40a0fe
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
    // 0x40a11d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40a130
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40a13d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40a0cc
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40a0c8
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40a143
                goto lab_0x40a143;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40a0d9
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40a0f5
                v16 = *v3;
            }
            // 0x40a0fe
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40a0f0
                v16 = 0;
                if (v12 != 0) {
                    // 0x40a0f5
                    v16 = *v3;
                }
                // 0x40a0fe
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
        // 0x40a11d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40a143
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40a160 - 0x40a236
int64_t function_40a160(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40a16f
    uint64_t v2 = *v1; // 0x40a16f
    int64_t v3 = a1; // 0x40a173
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40a1c3;
    } else {
        // 0x40a175
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40a1c3;
        } else {
            // 0x40a17c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40a191
                int64_t v6; // 0x40a188
                while (v5 == 0) {
                    // 0x40a188
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40a1c3
                        goto lab_0x40a1c3;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40a1a8
                int64_t v8 = v7; // 0x40a1af
                int64_t v9 = v5; // 0x40a1af
                int64_t v10; // 0x40a160
                int64_t v11; // 0x40a1a8
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40a1a0
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40a1a3
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40a1b6
                v3 = v9;
                while (v2 > v12) {
                    // 0x40a191
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40a188
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40a1c3
                            goto lab_0x40a1c3;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40a1a3
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40a1a0
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40a1a3
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40a1b1
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40a1c3;
            } else {
                goto lab_0x40a1fc;
            }
        }
    }
  lab_0x40a1c3:
    // 0x40a1c3
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40a1d0
        int64_t v14 = v13; // 0x40a1d7
        int64_t v15 = v2; // 0x40a1d7
        int64_t v16; // 0x40a1e0
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40a1e0
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40a1f1
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40a1f1
        int64_t v18 = v15; // 0x40a1fa
        int64_t v19 = v17; // 0x40a1fa
        while (v15 > v17) {
            // 0x40a1d0
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40a1e0
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40a1f1
                v15 = *v1;
            }
            // 0x40a1f1
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40a1fc;
  lab_0x40a1fc:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40a1fc
    if (v20 == 0) {
        // 0x40a221
        free(NULL);
        free((int64_t *)a1);
        return &g60;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40a210
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40a21f
    while (v21 != 0) {
        // 0x40a210
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40a221
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g60;
}
// Address range: 0x40a240 - 0x40a43a
int64_t function_40a240(int64_t a1, uint64_t a2) {
    // 0x40a240
    int128_t v1; // 0x40a240
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40a24b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40a240
        if (a2 < 0) {
            // 0x40a3c0
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40a3d0
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40a260
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40a269
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40a3b2
        return 0;
    }
    uint64_t nmemb = function_409690(a2); // 0x40a2a3
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40a3b2
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40a2db
    if (*v6 == nmemb) {
        // 0x40a3b2
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40a2ed
    int64_t v7 = (int64_t)mem; // 0x40a2ed
    int64_t v8 = v7; // bp-104, 0x40a2f2
    if (mem == NULL) {
        // 0x40a3b2
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40a34a
    int64_t v10 = *v9; // 0x40a34a
    int64_t v11 = function_409920(&v8, a1, 0); // 0x40a353
    int64_t result = v11 & 0xffffffff; // 0x40a358
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40a314
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40a376
        function_409920(v13, v12, 1);
        function_409920(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40a400
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40a3b2
    return result;
}
// Address range: 0x40a440 - 0x40a6b4
int64_t function_40a440(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40a440
    int128_t v1; // 0x40a440
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40a440
    int64_t v5 = function_409780(a1, a2, &v4, 0); // 0x40a461
    if (v5 != 0) {
        // 0x40a46e
        if (a3 != NULL) {
            // 0x40a475
            *a3 = v5;
        }
        // 0x40a479
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40a488
    uint64_t v7 = *v6; // 0x40a488
    int64_t v8; // 0x40a440
    int64_t v9; // 0x40a440
    int64_t v10; // 0x40a440
    int128_t v11; // 0x40a440
    int128_t v12; // 0x40a440
    int64_t v13; // 0x40a440
    if (v7 < 0) {
        // 0x40a510
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40a520
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40a524
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40a529
        int128_t v17 = __asm_addss(v15, v15); // 0x40a52d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40a4ab;
        } else {
            goto lab_0x40a53a;
        }
    } else {
        // 0x40a491
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40a495
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40a499
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40a49e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40a53a;
        } else {
            goto lab_0x40a4ab;
        }
    }
  lab_0x40a4ab:
    // 0x40a4ab
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40a4b4
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x40a4bc
    int128_t v23 = v11; // 0x40a4bc
    if (v13 == 0) {
        goto lab_0x40a4c2;
    } else {
        goto lab_0x40a561;
    }
  lab_0x40a53a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40a547
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40a54a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40a553
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40a4c2;
    } else {
        goto lab_0x40a561;
    }
  lab_0x40a4c2:;
    int64_t * v28 = (int64_t *)v4; // 0x40a4c7
    if (*v28 == 0) {
        // 0x40a5d8
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40a5e1
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40a4d2
    int64_t v31 = *v30; // 0x40a4d2
    int64_t * v32; // 0x40a440
    int64_t v33; // 0x40a440
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40a5fd
        if (mem == NULL) {
            // 0x40a479
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40a5fd
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40a4e7
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40a4fd
    *v37 = *v37 + 1;
    return 1;
  lab_0x40a561:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40a561
    function_4098a0(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40a56a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40a56e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40a572
    int128_t v44; // 0x40a440
    if (v42 < 0) {
        // 0x40a630
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40a640
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40a580
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40a589
    int128_t v47; // 0x40a440
    int64_t v48; // 0x40a440
    if (v46 < 0) {
        // 0x40a610
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40a61d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40a620
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40a592
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40a596
        v48 = v46;
        v47 = v51;
    }
    // 0x40a59b
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40a5ab
        int128_t v53 = v52; // 0x40a5b4
        if (*(char *)(v41 + 16) == 0) {
            // 0x40a650
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x40a5ba
        __asm_comiss(v53, 0x5f800000);
        // 0x40a479
        return 0xffffffff;
    }
    goto lab_0x40a4c2;
}
// Address range: 0x40a6c0 - 0x40a6fb
int64_t function_40a6c0(int64_t a1, int64_t a2) {
    // 0x40a6c0
    int64_t v1; // bp-16, 0x40a6c0
    int64_t v2; // 0x40a6c0
    int32_t v3 = function_40a440(a1, a2, &v1, v2); // 0x40a6d2
    if (v3 == -1) {
        // 0x40a6e0
        return 0;
    }
    // 0x40a6d7
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40a700 - 0x40a8d7
int64_t function_40a700(int64_t a1) {
    // 0x40a700
    int128_t v1; // 0x40a700
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40a700
    int64_t v5; // 0x40a700
    int64_t result = function_409780(a1, v5, &v4, 1); // 0x40a715
    if (result == 0) {
        // 0x40a732
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40a727
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40a732
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40a740
    uint64_t v8 = *v7 - 1; // 0x40a744
    *v7 = v8;
    int64_t v9; // 0x40a700
    int64_t v10; // 0x40a700
    int64_t v11; // 0x40a700
    int128_t v12; // 0x40a700
    int128_t v13; // 0x40a700
    int64_t v14; // 0x40a700
    if (v8 < 0) {
        // 0x40a830
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40a840
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40a844
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40a849
        int128_t v18 = __asm_addss(v16, v16); // 0x40a84d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40a76c;
        } else {
            goto lab_0x40a85a;
        }
    } else {
        // 0x40a752
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40a756
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40a75a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40a75f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40a85a;
        } else {
            goto lab_0x40a76c;
        }
    }
  lab_0x40a76c:
    // 0x40a76c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40a770
    int64_t v23 = v14; // 0x40a770
    int128_t v24 = v12; // 0x40a770
    int64_t v25 = v10; // 0x40a770
    int128_t v26 = v22; // 0x40a770
    goto lab_0x40a775;
  lab_0x40a85a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40a867
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40a86a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40a775;
  lab_0x40a775:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40a775
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x40a732
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40a77e
    function_4098a0(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40a787
    int64_t v31 = *(int64_t *)v29; // 0x40a78b
    int128_t v32; // 0x40a700
    if (v30 < 0) {
        // 0x40a8a0
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40a8b0
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40a798
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40a7a1
    int128_t v35; // 0x40a700
    int64_t v36; // 0x40a700
    if (v34 < 0) {
        // 0x40a880
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40a88d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40a890
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40a7ae
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40a7b2
        v36 = v34;
        v35 = v39;
    }
    // 0x40a7b7
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40a732
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40a7c8
    int128_t v41 = v40; // 0x40a7d1
    if (*(char *)(v31 + 16) == 0) {
        // 0x40a7d3
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40a7d8
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40a8c8
    if ((char)function_40a240(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40a732
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40a7fa
    if (*v43 != 0) {
        int64_t v44; // 0x40a700
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40a808
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40a819
    *v43 = 0;
    // 0x40a732
    return result;
}
// Address range: 0x40a8e0 - 0x40a8fb
int64_t function_40a8e0(int64_t a1, int64_t a2) {
    // 0x40a8e0
    *(int64_t *)(a1 + 20) = 0;
    *(char *)(a1 + 28) = 1;
    int32_t v1 = a2; // 0x40a8ec
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v1;
    *(int32_t *)(a1 + 8) = v1;
    *(int32_t *)(a1 + 12) = v1;
    *(int32_t *)(a1 + 16) = v1;
    int64_t result; // 0x40a8e0
    return result;
}
// Address range: 0x40a900 - 0x40a905
int64_t function_40a900(int64_t a1) {
    // 0x40a900
    return (int64_t)*(char *)(a1 + 28);
}
// Address range: 0x40a910 - 0x40a945
int64_t function_40a910(int64_t a1, int32_t a2) {
    char * v1 = (char *)(a1 + 28); // 0x40a910
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40a914
    int32_t v3 = (int32_t)(*v1 ^ 1); // 0x40a91d
    uint32_t v4 = (*v2 + v3) % 4; // 0x40a91f
    int32_t * v5 = (int32_t *)((int64_t)(4 * v4) + a1); // 0x40a928
    *v5 = a2;
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x40a92e
    int32_t v7 = *v6; // 0x40a92e
    *v2 = v4;
    if (v7 == v4) {
        // 0x40a938
        *v6 = (v7 + v3) % 4;
    }
    // 0x40a940
    *v1 = 0;
    return (int64_t)*v5;
}
// Address range: 0x40a950 - 0x40a991
int64_t function_40a950(int64_t a1) {
    char * v1 = (char *)(a1 + 28); // 0x40a954
    if (*v1 != 0) {
        abort();
        // UNREACHABLE
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40a95e
    uint32_t v3 = *v2; // 0x40a95e
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + a1); // 0x40a96b
    int64_t result = (int64_t)*v4; // 0x40a96b
    *v4 = *(int32_t *)(a1 + 16);
    if (v3 == *(int32_t *)(a1 + 24)) {
        // 0x40a988
        *v1 = 1;
        return result;
    }
    // 0x40a974
    *v2 = (v3 + 3) % 4;
    return result;
}
// Address range: 0x40a9a0 - 0x40af02
int64_t function_40a9a0(void) {
    char * v1 = nl_langinfo(14); // 0x40a9b6
    char * v2 = g55; // 0x40a9bb
    char * v3; // 0x40a9a0
    int64_t v4; // 0x40a9a0
    int64_t v5; // 0x40a9a0
    int64_t v6; // 0x40a9a0
    int64_t v7; // 0x40a9a0
    int32_t size; // 0x40a9a0
    int32_t size2; // 0x40a9a0
    int32_t len; // 0x40aa72
    int64_t v8; // 0x40aa72
    char * env_val; // 0x40aa5d
    if (v2 == NULL) {
        // 0x40aa58
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40aac5;
        } else {
            // 0x40aa6a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40aac5;
            } else {
                // 0x40aa6f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40aa5d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40aef5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40aac5;
                    } else {
                        // 0x40ae69
                        size2 = len + 14;
                        goto lab_0x40aa8b;
                    }
                } else {
                    goto lab_0x40aa8b;
                }
            }
        }
    } else {
        // 0x40a9a0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40a9da;
    }
  lab_0x40ad0c:;
    // 0x40ad0c
    struct _IO_FILE * stream; // 0x40ab4b
    int32_t v10 = __uflow(stream); // 0x40ad0f
    int64_t v11; // 0x40a9a0
    int64_t v12 = v11; // 0x40ad19
    int64_t v13; // 0x40a9a0
    int64_t v14 = v13; // 0x40ad19
    int32_t v15 = v10; // 0x40ad19
    int64_t v16; // 0x40a9a0
    int64_t v17 = v16; // 0x40ad19
    int64_t v18 = v11; // 0x40ad19
    int64_t v19 = v13; // 0x40ad19
    int64_t v20 = v16; // 0x40ad19
    if (v10 == -1) {
        // break -> 0x40ad1f
        goto lab_0x40ad1f;
    }
    goto lab_0x40ab99;
  lab_0x40ab8e:;
    // 0x40ab8e
    int64_t v90; // 0x40a9a0
    int64_t * v32; // 0x40ab80
    *v32 = v90 + 1;
    int64_t v89; // 0x40a9a0
    v12 = v89;
    int64_t v91; // 0x40a9a0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40a9a0
    v17 = v92;
    goto lab_0x40ab99;
  lab_0x40ab99:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40a9a0
    int32_t v25; // bp-120, 0x40a9a0
    int32_t v26; // bp-184, 0x40a9a0
    int64_t v27; // 0x40ab4b
    int64_t v28; // 0x40ab68
    int64_t v29; // 0x40ab6d
    int64_t * v30; // 0x40ab84
    switch (c) {
        case 32: {
            goto lab_0x40ab80;
        }
        case 10: {
            goto lab_0x40ab80;
        }
        case 9: {
            goto lab_0x40ab80;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40ad71
            int32_t v33; // 0x40a9a0
            char v34; // 0x40a9a0
            int32_t v35; // 0x40ad7e
            if (v31 < *v30) {
                // 0x40ad50
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40ad7b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40ad71
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40ad50
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40ad7b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40ad60
                v36 = v33;
            }
            // 0x40ae4f
            if (v36 == -1) {
                // break -> 0x40ad1f
                break;
            }
            goto lab_0x40ab80;
        }
        default: {
            // 0x40abaf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40ad1f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40abd8
            int64_t v39 = v37 + 4; // 0x40abda
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40abe6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40abe8
            while (v41 == 0) {
                // 0x40abd8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40ac06
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40ac12
            int64_t v45 = v43 + 4; // 0x40ac14
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40ac20
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40ac22
            while (v47 == 0) {
                // 0x40ac12
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40ac0f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40ac38
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40ac48
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40ac4c
            int64_t v52 = v51 + v48; // 0x40ac55
            int64_t * mem; // 0x40a9a0
            int64_t v53; // 0x40a9a0
            int64_t v54; // 0x40a9a0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40ad8b
                int64_t v56 = v55 + 3; // 0x40ad97
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40ac71
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40ac80
            if (mem == NULL) {
                // 0x40aeac
                free((int64_t *)v21);
                function_40afb0(v27, v53);
                v24 = (int64_t)&g14;
                goto lab_0x40ab24;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40ac98
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40aca2
            uint32_t v62 = (int32_t)v59; // 0x40aca5
            int64_t v63; // 0x40a9a0
            if (v62 >= 8) {
                // 0x40adb4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40adce
                int64_t v66 = v61 - v65; // 0x40add2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40addd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40adee
                    int64_t v70 = v69 & 0xffffffff; // 0x40adee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40adeb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40ae7f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40acb7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40acbb
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
            int64_t v73 = v51 + 1; // 0x40accb
            int64_t v74 = v60 - 1; // 0x40accf
            uint32_t v75 = (int32_t)v73; // 0x40acd4
            int64_t v76; // 0x40a9a0
            if (v75 >= 8) {
                // 0x40ae02
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40ae0c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40ae1c
                int64_t v80 = v74 - v79; // 0x40ae20
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40ae2b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40ae3b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40ae39
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40ae96
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40ae9e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40ace6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40acea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40aee3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40acfe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40ab8e;
            } else {
                goto lab_0x40ad0c;
            }
        }
    }
  lab_0x40ab80:;
    int64_t v93 = v23; // 0x40a9a0
    int64_t v94 = v22; // 0x40a9a0
    int64_t v95 = v21; // 0x40a9a0
    goto lab_0x40ab80_2;
  lab_0x40aac5:;
    int64_t * mem3 = malloc(size); // 0x40aac5
    int64_t v97 = (int64_t)&g14; // 0x40aad0
    int64_t v98; // 0x40a9a0
    int64_t path; // 0x40a9a0
    if (mem3 == NULL) {
        goto lab_0x40aaa2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40aac5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40aae6;
    }
  lab_0x40a9da:;
    int64_t str = v1 == NULL ? (int64_t)&g14 : (int64_t)v1; // 0x40a9cd
    char v100 = *v3; // 0x40a9da
    int64_t v101; // 0x40a9a0
    if (v100 == 0) {
        // 0x40aa34
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40a9a0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40a9a0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40aa20
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40aa27;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40a9f0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40a9fd
        char v107 = *(char *)v106; // 0x40aa02
        v102 = v107;
        if (v107 == 0) {
            // 0x40aa34
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40aa0b
    v104 = v103 + 1;
  lab_0x40aa27:
    // 0x40aa34
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40aaa2:;
    char * v108 = (char *)v97;
    g55 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40a9da;
  lab_0x40aae6:;
    int64_t v109 = v98 + path; // 0x40aae6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40ab12
    v24 = (int64_t)&g14;
    if (fd >= 0) {
        // 0x40ab41
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40ae72
            close(fd);
            v24 = (int64_t)&g14;
        } else {
            // 0x40ab65
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40ab80_2:;
                uint64_t v96 = *v32; // 0x40ab80
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40ad0c;
                } else {
                    goto lab_0x40ab8e;
                }
            }
          lab_0x40ad1f:
            // 0x40ad1f
            function_40afb0(v27, v19);
            v24 = (int64_t)&g14;
            if (v18 != 0) {
                // 0x40ad3e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40ab24;
  lab_0x40aa8b:;
    int64_t * mem4 = malloc(size2); // 0x40aa8b
    v97 = (int64_t)&g14;
    if (mem4 != NULL) {
        // 0x40ab31
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40aae6;
    } else {
        goto lab_0x40aaa2;
    }
  lab_0x40ab24:
    // 0x40ab24
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40aaa2;
}
// Address range: 0x40af10 - 0x40af5a
int64_t function_40af10(int64_t fd, int64_t path, int32_t oflag, int64_t a4) {
    uint32_t v1 = openat((int32_t)fd, (char *)path, oflag); // 0x40af22
    return function_40af60((int64_t)v1);
}
// Address range: 0x40af60 - 0x40afae
int64_t function_40af60(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40af6c
    if (fd >= 3) {
        // 0x40af71
        return a1 & 0xffffffff;
    }
    // 0x40af80
    int64_t v1; // 0x40af60
    int64_t v2 = function_40b170(a1, v1); // 0x40af80
    int32_t * v3 = __errno_location(); // 0x40af88
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40afb0 - 0x40b02b
int64_t function_40afb0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40afb7
    if (fileno(stream) < 0) {
        // 0x40b017
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40afca
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40affb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40b017
            return fclose(stream);
        }
    }
    // 0x40afcc
    if ((int32_t)function_406300(a1, v1) == 0) {
        // 0x40b017
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40afd8
    int32_t v3 = *v2; // 0x40afe0
    int64_t result = fclose(stream); // 0x40afee
    if (v3 != 0) {
        // 0x40b020
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40aff0
    return result;
}
// Address range: 0x40b030 - 0x40b165
int64_t function_40b030(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x40b060
    if (cmd != 1030) {
        // 0x40b110
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40b06c
    int64_t v2; // 0x40b030
    if (g56 < 0) {
        int64_t v3 = function_40b030(fd, 0, v1, a4); // 0x40b0b4
        int64_t v4 = v3 & 0xffffffff; // 0x40b0b9
        if ((int32_t)v3 < 0) {
            // 0x40b0a0
            return v4 & 0xffffffff;
        }
        // 0x40b0bf
        v2 = v4;
        if (g56 != -1) {
            // 0x40b0a0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40b087
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40b096
            g56 = 1;
            // 0x40b0a0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40b030(fd & 0xffffffff, 0, v1, a4); // 0x40b147
        int64_t v7 = v6 & 0xffffffff; // 0x40b14c
        if ((int32_t)v6 < 0) {
            // 0x40b0a0
            return v7 & 0xffffffff;
        }
        // 0x40b156
        g56 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40b0cf
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40b0da
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40b0a0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40b0f2
    close(fd2);
    // 0x40b0a0
    return 0xffffffff;
}
// Address range: 0x40b170 - 0x40b17e
int64_t function_40b170(int64_t a1, int64_t a2) {
    // 0x40b170
    int64_t v1; // 0x40b170
    return function_40b030(a1, 0, 3, v1);
}
// Address range: 0x40b180 - 0x40b1dd
int64_t function_40b180(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b180
    return function_401948();
}
// Address range: 0x40b1e0 - 0x40b1e1
int64_t function_40b1e0(void) {
    // 0x40b1e0
    int64_t result; // 0x40b1e0
    return result;
}
// Address range: 0x40b1f0 - 0x40b208
int64_t function_40b1f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b1f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g21);
}
// Address range: 0x40b208 - 0x40b228
int64_t function_40b208(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g17; // 0x40b212
    while (*(int64_t *)v1 != -1) {
        // 0x40b213
        v1 -= 8;
    }
    // 0x40b224
    return result;
}
