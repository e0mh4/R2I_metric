// Address range: 0x401be0 - 0x401be5
int64_t function_401be0(void) {
    // 0x401be0
    abort();
    // UNREACHABLE
}
// Address range: 0x401be5 - 0x401bea
int64_t function_401be5(void) {
    // 0x401be5
    abort();
    // UNREACHABLE
}
// Address range: 0x401bea - 0x401bef
int64_t function_401bea(void) {
    // 0x401bea
    abort();
    // UNREACHABLE
}
// Address range: 0x401bef - 0x401bf4
int64_t function_401bef(void) {
    // 0x401bef
    abort();
    // UNREACHABLE
}
// Address range: 0x401bf4 - 0x401bf9
int64_t function_401bf4(void) {
    // 0x401bf4
    abort();
    // UNREACHABLE
}
// Address range: 0x401bf9 - 0x401bfe
int64_t function_401bf9(void) {
    // 0x401bf9
    abort();
    // UNREACHABLE
}
// Address range: 0x401bfe - 0x401c03
int64_t function_401bfe(void) {
    // 0x401bfe
    abort();
    // UNREACHABLE
}
// Address range: 0x401c10 - 0x401e90
int64_t function_401c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-72, 0x401c27
    function_402e70(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_409f00(0x402570, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2; // 0x401c10
    while (true) {
        // 0x401c7d
        v2 = 0;
        while (true) {
          lab_0x401c7d_2:;
            uint32_t v3 = (int32_t)function_4065a0(a1 & 0xffffffff, a2, "pm:vZ", &g2, 0, a6);
            switch (v3) {
                case -1: {
                    goto lab_0x401d84;
                }
                case 90: {
                    // 0x401d30
                    if (g47 != 0) {
                        // 0x401d3e
                        error(0, (int32_t)"warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel" ^ (int32_t)"warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", dcgettext(NULL, "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", 5));
                    }
                    goto lab_0x401c7d_2;
                }
                default: {
                    if (v3 <= 90) {
                        if (v3 == -131) {
                            // 0x401cd7
                            function_405480((int64_t)g29, "mkdir", "GNU coreutils", (int64_t)g18, "David MacKenzie", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v3 == -130) {
                            // 0x401d27
                            function_402100(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401d15;
                    }
                    if (v3 == 112) {
                        // 0x401d68
                        v1 = 0x402060;
                    } else {
                        if (v3 != 118) {
                            // break -> 0x401d10
                            break;
                        }
                        // 0x401cb6
                        dcgettext(NULL, "created directory %s", 5);
                    }
                    goto lab_0x401c7d_2;
                }
            }
        }
    }
  lab_0x401d84:;
    int32_t v4 = a1; // 0x401d84
    if (*(int32_t *)0x60e2bc == v4) {
        // 0x401e3c
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
      lab_0x401d15:
        // 0x401d15
        function_402100(1);
        // UNREACHABLE
    }
    // 0x401d90
    int32_t v5; // 0x401c10
    int32_t v6; // 0x401e13
    if (v1 == 0) {
        if (v2 == 0) {
            // 0x401e13
            v6 = g27;
            return function_404ed0(v4 - v6, 8 * (int64_t)v6 + a2, 0x401f70, &v1);
        }
        int32_t cmask = umask(0); // 0x401dc6
        umask(cmask);
        v5 = cmask;
    } else {
        int32_t cmask2 = umask(0); // 0x401d99
        umask(cmask2);
        v5 = cmask2;
        if (v2 == 0) {
            // 0x401e13
            v6 = g27;
            return function_404ed0(v4 - v6, 8 * (int64_t)v6 + a2, 0x401f70, &v1);
        }
    }
    int64_t v7 = function_402920(v2); // 0x401ddd
    if (v7 == 0) {
        // 0x401e60
        function_404a90(v2);
        error(1, (int32_t)"invalid mode %s" ^ (int32_t)"invalid mode %s", dcgettext(NULL, "invalid mode %s", 5));
        return &g48;
    }
    // 0x401dea
    int64_t v8; // bp-56, 0x401c10
    function_402cf0(511, 1, (int64_t)v5, v7, &v8);
    free((int64_t *)v7);
    // 0x401e13
    v6 = g27;
    return function_404ed0(v4 - v6, 8 * (int64_t)v6 + a2, 0x401f70, &v1);
}
// Address range: 0x401e90 - 0x401ebb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401e90
    int64_t v1; // 0x401e90
    __libc_start_main(0x401c10, (int32_t)a4, (char **)&v1, (void (*)())0x409e90, (void (*)())0x409ef0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401ebb - 0x401eda
int64_t function_401ebb(void) {
    // 0x401ebb
    return &g28;
}
// Address range: 0x401eda - 0x401f11
int64_t function_401eda(void) {
    // 0x401eda
    return 0;
}
// Address range: 0x401f11 - 0x401f68
int64_t function_401f11(void) {
    // 0x401f11
    if (g32 != 0) {
        // 0x401f67
        int64_t result; // 0x401f11
        return result;
    }
    int64_t v1 = g33; // 0x401f44
    int64_t result2; // 0x401f56
    if (g33 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401f56
        result2 = function_401ebb();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401f46
        v1++;
    }
    // 0x401f3a
    g33 = v1;
    // 0x401f56
    result2 = function_401ebb();
    g32 = 1;
    return result2;
}
// Address range: 0x401f68 - 0x401f6d
int64_t function_401f68(void) {
    // 0x401f68
    return function_401eda();
}
// Address range: 0x401f70 - 0x402003
int64_t function_401f70(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 20); // 0x401f79
    if (a3 == 0 == (*v1 != 0)) {
        // 0x401fd8
        *__errno_location() = 95;
    }
    uint32_t v2 = *(int32_t *)(a3 + 16); // 0x401f87
    int32_t v3 = *(int32_t *)(a3 + 12); // 0x401f97
    uint64_t v4 = function_402610(a1, a2, a3, a3, v3, 0x402040, (int64_t)v2, -1, -1, 1) & 0xffffffff ^ 1; // 0x401fa7
    if ((char)v4 != 0) {
        // 0x401fc8
        return v4 % 256;
    }
    // 0x401fb1
    if (!((a3 == 0 | *v1 == 0))) {
        // 0x401fbd
        *__errno_location() = 95;
    }
    // 0x401fc8
    return v4 % 256;
}
// Address range: 0x402010 - 0x402037
int64_t function_402010(int64_t a1, int64_t a2) {
    int64_t v1 = function_404840(4, a1); // 0x40201c
    int64_t v2; // 0x402010
    return function_402460((int64_t)g29, *(int64_t *)(a2 + 24), v1, v2, v2, v2);
}
// Address range: 0x402040 - 0x402051
int64_t function_402040(int64_t a1, int64_t a2) {
    // 0x402040
    if (*(int64_t *)(a2 + 24) == 0) {
        // 0x402050
        int64_t result; // 0x402040
        return result;
    }
    // 0x402047
    return function_402010(a1, a2);
}
// Address range: 0x402060 - 0x4020f9
int64_t function_402060(int64_t a1, int64_t path, int64_t a3) {
    // 0x402060
    if (*(char *)(a3 + 20) != 0) {
        // 0x402077
        *__errno_location() = 95;
    }
    int32_t * cmask = (int32_t *)(a3 + 8); // 0x402082
    int32_t v1 = *cmask; // 0x402082
    int32_t result; // 0x402060
    if ((v1 & 192) != 0) {
        // 0x4020c8
        umask(v1 & -193);
        int32_t v2 = mkdir((char *)path, 511); // 0x4020d9
        int32_t * v3 = __errno_location(); // 0x4020e0
        umask(*cmask);
        result = v2;
    } else {
        // 0x40208b
        result = mkdir((char *)path, 511);
    }
    // 0x40209a
    if (result != 0) {
        // 0x4020b9
        return result;
    }
    // 0x40209e
    if (*(int64_t *)(a3 + 24) != 0) {
        // 0x4020ae
        function_402010(a1, a3);
    }
    // 0x4020b9
    return (int64_t)(*cmask / 256 % 2);
}
// Address range: 0x402100 - 0x40245d
int64_t function_402100(int64_t a1) {
    int32_t status = a1; // 0x402116
    if (status != 0) {
        // 0x40211a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40213f
        exit(status);
        // UNREACHABLE
    }
    // 0x402146
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... DIRECTORY...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Create the DIRECTORY(ies), if they do not already exist.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask\n  -p, --parents     no error if existing, make parent directories as needed\n  -v, --verbose     print a message for each created directory\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -Z                   set SELinux security context of each created directory\n                         to the default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x402236
    bool v2; // 0x402100
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4022c0
    int64_t v6 = *(int64_t *)v5; // 0x4022c4
    int64_t v7 = 6; // 0x4022ca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"mkdir";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4022d6
        char v11 = *(char *)v9; // 0x4022d6
        char v12 = v11; // 0x4022d6
        bool v13 = false; // 0x4022d6
        while (v10 == v11) {
            // 0x4022cc
            v7--;
            int64_t v14 = v9 + v3; // 0x4022d6
            int64_t v15 = v8 + v3; // 0x4022d6
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
            // break -> 0x4022e2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x4022e2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4023f4;
        } else {
            // 0x4023de
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402433
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402344;
            } else {
                goto lab_0x4023f4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402344;
        } else {
            // 0x40232a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402433
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402344;
            } else {
                goto lab_0x402344;
            }
        }
    }
  lab_0x4023f4:
    // 0x4023f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402384
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40213f
    exit(status);
    // UNREACHABLE
  lab_0x402344:
    // 0x402344
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402384
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40213f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402460 - 0x40254f
int64_t function_402460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x402460
    int64_t v1; // 0x402460
    if ((char)v1 != 0) {
        // 0x402487
        int128_t v2; // 0x402460
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4024c8
    fputs_unlocked(g36, stream);
    fwrite_unlocked((int64_t *)": ", 1, 2, stream);
    int64_t v3 = 16; // bp-224, 0x4024f7
    function_4066a0(a1, a2, &v3);
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x40251b
    uint64_t v5 = *v4; // 0x40251b
    int64_t result; // 0x402460
    if (v5 >= *(int64_t *)(a1 + 48)) {
        // 0x402540
        result = __overflow(stream, 10);
    } else {
        // 0x402525
        *v4 = v5 + 1;
        *(char *)v5 = 10;
        result = v5;
    }
    // 0x402530
    return result;
}
// Address range: 0x402550 - 0x402558
int64_t function_402550(int64_t a1) {
    // 0x402550
    g35 = a1;
    int64_t result; // 0x402550
    return result;
}
// Address range: 0x402560 - 0x402568
int64_t function_402560(int64_t a1) {
    // 0x402560
    g34 = a1;
    int64_t result; // 0x402560
    return result;
}
// Address range: 0x402570 - 0x40260e
int64_t function_402570(void) {
    // 0x402570
    int32_t * err_num; // 0x402586
    if ((int32_t)function_406760((int64_t)g29) == 0) {
        goto lab_0x40259c;
    } else {
        // 0x402586
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x4025b3;
        } else {
            // 0x402597
            if (*err_num != 32) {
                goto lab_0x4025b3;
            } else {
                goto lab_0x40259c;
            }
        }
    }
  lab_0x40259c:;
    int64_t result = function_406760((int64_t)g31); // 0x4025a3
    if ((int32_t)result == 0) {
        // 0x4025ac
        return result;
    }
    // 0x4025ee
    _exit(g19);
    // UNREACHABLE
  lab_0x4025b3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4025bf
    if (g35 == 0) {
        // 0x4025f9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4025d3
        error(0, *err_num, "%s: %s", (char *)function_4048e0((int64_t)g35), v1);
    }
    // 0x4025ee
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x402610 - 0x402918
int64_t function_402610(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t mode, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x402610
    int64_t err_num; // 0x402610
    int64_t path; // 0x402610
    int64_t v1; // 0x402610
    if ((int32_t)a2 == 4 == ((char)v1 != 47)) {
        uint32_t v2 = *(int32_t *)(a2 + 4); // 0x402760
        err_num = v2;
        if (v2 != 0) {
            goto lab_0x402710;
        } else {
            // 0x402769
            path = a1;
            if (a3 != 0) {
                goto lab_0x402658;
            } else {
                goto lab_0x402679;
            }
        }
    } else {
        // 0x40264f
        path = a1;
        if (a3 == 0) {
            goto lab_0x402679;
        } else {
            goto lab_0x402658;
        }
    }
  lab_0x402710:
    // 0x402710
    function_404a90(a1);
    error(0, (int32_t)err_num, dcgettext(NULL, "cannot create directory %s", 5));
    // 0x402740
    return (int32_t)&g48 ^ (int32_t)&g48;
  lab_0x402679:;
    int64_t v3 = 0x100000000 * a9 >> 32;
    int64_t v4 = 0x100000000 * a8 >> 32;
    int64_t v5 = 0x100000000 * a7 >> 32;
    uint64_t v6 = (int64_t)mode; // 0x40261e
    int64_t v7; // 0x402610
    int64_t v8; // 0x402610
    int32_t v9; // 0x402610
    int32_t mode2; // 0x402610
    if ((int32_t)(v3 & v4) == -1) {
        if ((v5 & 3072 || v6 & 512) != 0) {
            // 0x4027c0
            mode2 = mode & -19;
            goto lab_0x4026b5;
        } else {
            uint32_t v10 = mkdir((char *)path, mode); // 0x402782
            if (v10 != 0) {
                goto lab_0x4026cc;
            } else {
                // 0x402792
                v9 = mode;
                v8 = 3;
                v7 = v10;
                if ((v6 % 512 & v5) == 0) {
                    // 0x402740
                    return 1;
                }
                goto lab_0x4027fd;
            }
        }
    } else {
        // 0x4026ab
        mode2 = mode & -64;
        goto lab_0x4026b5;
    }
  lab_0x402658:;
    int64_t v11 = function_406de0(a1, a2, a3, a4); // 0x402665
    if (v11 < 0) {
        // 0x4027d0
        if (v11 != -1) {
            // 0x402740
            return 1;
        }
        // 0x4027df
        err_num = (int64_t)*__errno_location();
        goto lab_0x402710;
    } else {
        // 0x402676
        path = v11 + a1;
        goto lab_0x402679;
    }
  lab_0x4026b5:;
    int32_t v12 = mkdir((char *)path, mode2); // 0x4026bc
    v9 = mode2;
    v8 = 3;
    v7 = 0;
    if (v12 == 0) {
        goto lab_0x4027fd;
    } else {
        goto lab_0x4026cc;
    }
  lab_0x4026cc:;
    uint32_t v13 = *__errno_location(); // 0x4026d6
    int64_t v14 = v13; // 0x4026d6
    v9 = -1;
    v8 = 2;
    v7 = v14;
    int32_t v15; // bp-200, 0x402610
    if ((char)a10 == 0) {
        goto lab_0x4027fd;
    } else {
        // 0x4026df
        if (v13 == 0) {
            // 0x402740
            return 1;
        }
        // 0x4026e8
        err_num = v14;
        if (a3 != 0 && v13 != 2) {
            int32_t v16 = __xstat(1, (char *)path, (struct stat *)&v15); // 0x402700
            err_num = v14;
            if (v16 == 0) {
                // 0x4028f0
                err_num = v14;
                int32_t v17; // 0x402610
                if ((v17 & 0xf000) == 0x4000) {
                    // 0x402740
                    return 1;
                }
            }
        }
        goto lab_0x402710;
    }
  lab_0x4027fd:;
    int64_t v18 = function_404ae0(a2, path, v8, (int64_t *)&v15); // 0x402808
    int32_t v19 = v18; // 0x402810
    if (v19 < -1) {
        // 0x402740
        return 1;
    }
    int64_t v20 = v19 == 0 ? (int64_t)&g3 : path; // 0x40281c
    if ((int32_t)function_406f70((int64_t)v15, v20, v9, (int32_t)v4, (int32_t)v3, v6, v5 & 0xffffffff) == 0) {
        // 0x402740
        return 1;
    }
    int32_t v21 = v7; // 0x402855
    if (v21 == 0) {
        goto lab_0x40287b;
    } else {
        // 0x40285a
        err_num = v7;
        if (a3 == 0 || v21 == 2) {
            goto lab_0x402710;
        } else {
            int32_t v22 = *__errno_location(); // 0x402872
            err_num = v7;
            if (v22 == 20) {
                goto lab_0x402710;
            } else {
                goto lab_0x40287b;
            }
        }
    }
  lab_0x40287b:;
    int32_t * err_num2 = __errno_location(); // 0x40287b
    function_404a90(a1);
    char * v23 = (int32_t)(v3 & v4) != -1 ? "cannot change owner and permissions of %s" : "cannot change permissions of %s"; // 0x4028a8
    error(0, *err_num2, dcgettext(NULL, v23, 5));
    // 0x402740
    return (int32_t)&g48 ^ (int32_t)&g48;
}
// Address range: 0x402920 - 0x402c81
int64_t function_402920(int64_t a1) {
    // 0x402920
    int64_t v1; // 0x402920
    char v2 = v1;
    int64_t v3 = 0x100000000000000 * v1 >> 56; // 0x40292c
    int64_t v4 = a1; // 0x402934
    if ((v2 & -8) == 48) {
        int64_t v5 = 0xffffffd0 + v3; // 0x4029f6
        uint32_t v6 = (int32_t)v5;
        while (v6 < 0x1000) {
            // 0x4029e8
            v4++;
            char v7 = *(char *)v4; // 0x4029e8
            if ((v7 & -8) != 48) {
                // 0x402bf0
                if (v7 == 0) {
                    int64_t v8 = v4 - a1; // 0x402bfa
                    int32_t v9 = v8 < 5 == (4 - v8 & v8) < 0 ? 4095 : v6 & 3072 | 1023; // 0x402c19
                    int64_t result = function_4055c0(32); // 0x402c1c
                    *(int16_t *)result = 317;
                    *(int32_t *)(result + 4) = 4095;
                    *(int32_t *)(result + 8) = v6;
                    *(int32_t *)(result + 12) = v9;
                    *(char *)(result + 17) = 0;
                    return result;
                }
                return 0;
            }
            v5 = (int64_t)v7 + 0xffffffd0 + 8 * (v5 & 0xffffffff);
            v6 = (int32_t)v5;
        }
      lab_0x4029d5:
        // 0x4029d5
        return 0;
    }
    int64_t v10 = 1; // 0x402941
    int64_t v11 = a1; // 0x402941
    int64_t v12; // 0x402920
    if (v2 == 0) {
        // 0x402c48
        v12 = 16;
    } else {
        int64_t v13 = v3;
        v11++;
        unsigned char v14 = *(char *)v11; // 0x402966
        v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        while (v14 != 0) {
            // 0x402950
            v13 = v14;
            v11++;
            v14 = *(char *)v11;
            v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        }
        int64_t v15 = 16 * v10; // 0x40297d
        if (v15 < 0) {
            // 0x402c7c
            function_405810(v15);
            // UNREACHABLE
        }
        // 0x40298a
        v12 = v15;
        if (v10 >= 0x1000000000000000) {
            // 0x402c7c
            function_405810(v15);
            // UNREACHABLE
        }
    }
    int64_t v16 = function_4055c0(v12); // 0x402993
    int64_t v17; // 0x402920
    int64_t v18; // 0x402920
    int64_t v19; // 0x402920
    int64_t v20; // 0x402920
    int64_t v21; // 0x402920
    int64_t v22; // 0x402920
    int64_t v23; // 0x402920
    int64_t v24; // 0x402920
    int64_t v25; // 0x402920
    int64_t v26; // 0x402920
    int64_t v27; // 0x402920
    int64_t v28; // 0x402920
    int64_t v29; // 0x402920
    int64_t v30; // 0x402920
    int64_t v31; // 0x402920
    int64_t v32; // 0x402920
    int64_t v33; // 0x402a83
    int64_t v34; // 0x402a83
    char v35; // 0x402920
    while (true) {
        int64_t v36 = 0;
        v32 = 0;
        v18 = 0;
        v26 = a1;
        unsigned char v37; // 0x40299d
        while (true) {
          lab_0x40299d:
            // 0x40299d
            v27 = v26;
            v37 = *(char *)v27;
            if (v37 == 97) {
                // 0x402bb0
                v32 = 4095;
                v19 = 4095;
                goto lab_0x402bb5;
            } else {
                if (v37 <= 97) {
                    // break -> 0x402a10
                    break;
                }
                int64_t v38 = v18; // 0x402be0
                switch (v37) {
                    case 111: {
                        int64_t v39 = v38 & 0xfffffdf8 | 519; // 0x402be0
                        v32 = v39;
                        v19 = v39;
                        goto lab_0x402bb5;
                    }
                    case 117: {
                        int64_t v40 = v38 & 0xfffff63f | 2496; // 0x402bd0
                        v32 = v40;
                        v19 = v40;
                        goto lab_0x402bb5;
                    }
                    case 103: {
                        int64_t v41 = v38 & 0xfffffbc7 | 1080; // 0x402bc0
                        v32 = v41;
                        v19 = v41;
                        goto lab_0x402bb5;
                    }
                    default: {
                        goto lab_0x4029cb_3;
                    }
                }
            }
        }
        switch (v37) {
            default: {
                if (v37 != 43) {
                    // break -> 0x4029cb
                    break;
                }
            }
            case 45: {
            }
            case 61: {
                // 0x402a22
                v29 = v27;
                v24 = v37;
                v20 = 16 * v36 + v16;
                v22 = v36;
                // break -> 0x402a83
                break;
            }
        }
        while (true) {
          lab_0x402a83:
            // 0x402a83
            v21 = v20;
            v25 = v24;
            int64_t v42 = v29;
            v33 = v42 + 1;
            char v43 = *(char *)v33; // 0x402a83
            if (v43 == 103) {
                // 0x402ba0
                v17 = v42 + 2;
                v30 = 56;
                goto lab_0x402a3e;
            } else {
                // 0x402a94
                v34 = v43;
                if (v43 > 103) {
                    int64_t v44 = v42 + 2;
                    v17 = v44;
                    v30 = 7;
                    if (v43 != 111) {
                        // 0x402a30
                        v17 = v44;
                        v30 = 448;
                        if (v43 != 117) {
                            goto lab_0x402b20;
                        } else {
                            goto lab_0x402a3e;
                        }
                    } else {
                        goto lab_0x402a3e;
                    }
                } else {
                    int64_t v45 = v34; // 0x402ab6
                    int64_t v46 = v33; // 0x402ab6
                    if ((v43 & -8) == 48) {
                        int64_t v47 = 0xffffffd0 + v45; // 0x402aba
                        uint32_t v48 = (int32_t)v47;
                        if (v48 >= 0x1000) {
                            // break (via goto) -> 0x4029cb
                            goto lab_0x4029cb_3;
                        }
                        int64_t v49 = v46 + 1; // 0x402abe
                        char v50 = *(char *)v49; // 0x402ace
                        int64_t v51 = v50; // 0x402ace
                        int64_t v52 = v47 & 0xffffffff; // 0x402ad9
                        v46 = v49;
                        while ((v50 & -8) == 48) {
                            // 0x402aba
                            v47 = v51 + 0xffffffd0 + 8 * v52;
                            v48 = (int32_t)v47;
                            if (v48 >= 0x1000) {
                                // break (via goto) -> 0x4029cb
                                goto lab_0x4029cb_3;
                            }
                            // 0x402ace
                            v49 = v46 + 1;
                            v50 = *(char *)v49;
                            v51 = v50;
                            v52 = v47 & 0xffffffff;
                            v46 = v49;
                        }
                        // 0x402adb
                        if ((int32_t)v32 != 0) {
                            // break (via goto) -> 0x4029cb
                            goto lab_0x4029cb_3;
                        }
                        if (v50 != 0 == (v50 != 44)) {
                            // break (via goto) -> 0x4029cb
                            goto lab_0x4029cb_3;
                        }
                        // 0x402af0
                        *(char *)v21 = (char)v25;
                        v32 = 4095;
                        *(int32_t *)(v21 + 8) = v48;
                        *(char *)(v21 + 1) = 1;
                        *(int32_t *)(v21 + 4) = 4095;
                        v31 = 4095;
                        v28 = v49;
                        v23 = v51 & 0xffffffff;
                        goto lab_0x402a5f;
                    } else {
                        goto lab_0x402b20;
                    }
                }
            }
        }
      lab_0x402c52:
        // 0x402c52
        if (v35 != 44) {
            if (v35 != 0) {
                goto lab_0x4029cb_3;
            } else {
                // 0x402c6d
                int64_t v53; // 0x402920
                *(char *)(v16 + 1 + 16 * v53) = 0;
                return 0;
            }
        }
    }
  lab_0x4029cb_3:
    // 0x4029cb
    free((int64_t *)v16);
    // 0x4029d5
    return (int32_t)&g48 ^ (int32_t)&g48;
  lab_0x402b48:;
    // 0x402b48
    int64_t v54; // 0x402920
    int64_t v55 = v54 + 1; // 0x402b48
    int64_t v56 = (int64_t)*(char *)v55; // 0x402b4c
    int64_t v57 = v56 + 0xffffffa8; // 0x402b50
    int64_t v58; // 0x402920
    int64_t v59 = v58; // 0x402b57
    int64_t v60 = v56; // 0x402b57
    int64_t v61; // 0x402920
    int64_t v62 = v61; // 0x402b57
    int64_t v63 = v57; // 0x402b57
    int64_t v64 = v55; // 0x402b57
    if ((char)v57 >= 33) {
        // break -> 0x402b59
        goto lab_0x402b59_2;
    }
    goto lab_0x402b30;
  lab_0x402a3e:
    // 0x402a3e
    *(char *)(v21 + 1) = 3;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v30;
    *(char *)v21 = (char)v25;
    int64_t v72 = v30; // 0x402a53
    int64_t v73 = v17; // 0x402a53
    int64_t v74 = (int64_t)*(char *)v17; // 0x402a53
    goto lab_0x402a56;
  lab_0x402a56:;
    int64_t v75 = v32;
    v31 = v72 & 0xffffffff & ((int32_t)v75 != 0 ? v75 : 0xffffffff);
    v28 = v73;
    v23 = v74;
    goto lab_0x402a5f;
  lab_0x402b20:
    // 0x402b20
    v59 = 0;
    v60 = v34;
    v62 = 1;
    v63 = v34 + 0xffffffa8;
    v64 = v33;
    int64_t v70; // 0x402920
    int64_t v69; // 0x402920
    int64_t v67; // 0x402920
    int64_t v68; // 0x402920
    while (true) {
      lab_0x402b30:
        // 0x402b30
        v54 = v64;
        int64_t v65 = v62;
        int64_t v66 = v59;
        g49 = v63 % 256;
        v58 = v66;
        v61 = 2;
        v67 = v66;
        v68 = v60;
        v69 = v65;
        v70 = v54;
        uint64_t v71; // 0x402920
        switch ((char)v71) {
            case 0: {
                goto lab_0x402b48;
            }
            case 26: {
                // 0x402b98
                v58 = v66 & 0xfffffedb | 292;
                v61 = v65;
                goto lab_0x402b48;
            }
            case 27: {
                // 0x402b90
                v58 = v66 | 3072;
                v61 = v65;
                goto lab_0x402b48;
            }
            case 28: {
                // 0x402b88
                v58 = v66 | 512;
                v61 = v65;
                goto lab_0x402b48;
            }
            case 31: {
                // 0x402b80
                v58 = v66 | 146;
                v61 = v65;
                goto lab_0x402b48;
            }
            case 32: {
                // 0x402b78
                v58 = v66 & 0xffffffb6 | 73;
                v61 = v65;
                goto lab_0x402b48;
            }
            default: {
                goto lab_0x402b59_2;
            }
        }
    }
  lab_0x402b59_2:
    // 0x402b59
    *(char *)v21 = (char)v25;
    *(char *)(v21 + 1) = (char)v69;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v67;
    v72 = v67;
    v73 = v70;
    v74 = v68 & 0xffffffff;
    goto lab_0x402a56;
  lab_0x402a5f:
    // 0x402a5f
    *(int32_t *)(v21 + 12) = (int32_t)v31;
    if ((v23 & 239) != 45) {
        // 0x402a76
        int64_t v76; // 0x402920
        v35 = v76;
        if (v35 != 43) {
            // break -> 0x402c52
            goto lab_0x402c52;
        }
    }
    // 0x402a80
    v29 = v28;
    v24 = v23;
    v20 = v21 + 16;
    v22++;
    goto lab_0x402a83;
  lab_0x402bb5:
    // 0x402bb5
    v18 = v19;
    v26 = v27 + 1;
    goto lab_0x40299d;
}
// Address range: 0x402c90 - 0x402ce4
int64_t function_402c90(int64_t a1) {
    // 0x402c90
    int64_t v1; // bp-152, 0x402c90
    int32_t v2 = __xstat(1, (char *)a1, (struct stat *)&v1); // 0x402ca3
    int64_t result = 0; // 0x402cae
    if (v2 == 0) {
        // 0x402cb0
        result = function_4055c0(32);
        *(int16_t *)result = 317;
        *(int32_t *)(result + 4) = 4095;
        *(int32_t *)(result + 12) = 4095;
        *(char *)(result + 17) = 0;
    }
    // 0x402cdb
    return result;
}
// Address range: 0x402cf0 - 0x402e6d
int64_t function_402cf0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5) {
    char v1 = *(char *)(a4 + 1); // 0x402cf0
    int64_t v2 = a1 % 0x1000; // 0x402cf9
    int64_t result = v2; // 0x402d07
    int64_t v3 = 0; // 0x402d07
    int64_t v4; // 0x402cf0
    int64_t v5; // 0x402cf0
    int64_t v6; // 0x402cf0
    char v7; // 0x402cf0
    char v8; // 0x402cf0
    int64_t v9; // 0x402cf0
    int64_t v10; // 0x402cf0
    int64_t v11; // 0x402cf0
    int64_t v12; // 0x402cf0
    int64_t v13; // 0x402cf0
    int64_t v14; // 0x402cf0
    int64_t v15; // 0x402cf0
    int64_t v16; // 0x402cf0
    int64_t v17; // 0x402cf0
    int64_t v18; // 0x402cf0
    uint32_t v19; // 0x402dab
    int64_t v20; // 0x402daf
    if (v1 != 0) {
        // 0x402d0d
        v10 = v2;
        v14 = a4;
        v12 = 0;
        v7 = v1;
        while (true) {
          lab_0x402dab_2:
            // 0x402dab
            v8 = v7;
            v13 = v12;
            v15 = v14;
            v11 = v10;
            v19 = *(int32_t *)(v15 + 4);
            v20 = (int64_t)*(int32_t *)(v15 + 8);
            if ((char)a2 == 0) {
                // 0x402d20
                v16 = 0;
                v4 = 0xffffffff;
                if (v8 == 2) {
                    // 0x402e60
                    v17 = 0;
                    v9 = v20;
                    v5 = 0xffffffff;
                    v18 = 0;
                    v6 = 0xffffffff;
                    if ((v11 & 73) == 0) {
                        goto lab_0x402d74;
                    } else {
                        goto lab_0x402ddc;
                    }
                } else {
                    goto lab_0x402d2f;
                }
            } else {
                int32_t v21 = *(int32_t *)(v15 + 12); // 0x402dbc
                int64_t v22 = v21 | -3073; // 0x402dc3
                int64_t v23 = v21 & 3072 ^ 3072; // 0x402dcc
                v16 = v23;
                v4 = v22;
                v18 = v23;
                v6 = v22;
                if (v8 != 2) {
                    goto lab_0x402d2f;
                } else {
                    goto lab_0x402ddc;
                }
            }
        }
    }
  lab_0x402e28_2:
    // 0x402e28
    if (a5 != NULL) {
        // 0x402e2d
        *(int32_t *)a5 = (int32_t)v3;
    }
    // 0x402e30
    return result;
  lab_0x402d2f:;
    int64_t v24 = v4;
    int64_t v25 = v16;
    v17 = v25;
    v9 = v20;
    v5 = v24;
    if (v8 == 3) {
        int64_t v26 = v11 & v20;
        int64_t v27 = v26 & 292; // 0x402d3b
        int64_t v28 = (v27 | (int64_t)(v27 == 0)) + (v27 ^ 511) & 292;
        int64_t v29 = (v26 & 146) != 0 ? v28 | 146 : v28; // 0x402d5e
        v17 = v25;
        v9 = ((v26 & 73) != 0 ? v29 | 73 : v29) | v26;
        v5 = v24;
    }
    goto lab_0x402d74;
  lab_0x402ddc:;
    int64_t v60 = (int64_t)*(char *)v15; // 0x402de0
    int64_t v61 = v6 & (v20 | 73); // 0x402de4
    int64_t v32 = v18; // 0x402dea
    int64_t v33 = v61; // 0x402dea
    int64_t v34 = v6; // 0x402dea
    int64_t v35 = v60; // 0x402dea
    int64_t v36 = v18; // 0x402dea
    int64_t v37 = v61; // 0x402dea
    int64_t v38 = v60; // 0x402dea
    if (v19 == 0) {
        goto lab_0x402d80;
    } else {
        goto lab_0x402df0;
    }
  lab_0x402d74:;
    int64_t v30 = (int64_t)*(char *)v15; // 0x402d74
    int64_t v31 = v9 & 0xffffffff & v5; // 0x402d78
    v32 = v17;
    v33 = v31;
    v34 = v5;
    v35 = v30;
    v36 = v17;
    v37 = v31;
    v38 = v30;
    if (v19 != 0) {
        goto lab_0x402df0;
    } else {
        goto lab_0x402d80;
    }
  lab_0x402d80:;
    int64_t v39 = v33 & (a3 & 0xffffffff ^ 0xffffffff);
    int64_t v40 = v39; // 0x402cf0
    int64_t v41 = v35; // 0x402cf0
    int64_t v42 = v32; // 0x402cf0
    int64_t v43 = v39; // 0x402cf0
    int64_t v44 = v34; // 0x402cf0
    int64_t v45 = v39; // 0x402cf0
    int64_t v46; // 0x402cf0
    switch ((char)v46) {
        case 45: {
            goto lab_0x402e40;
        }
        case 61: {
            goto lab_0x402e0b;
        }
        default: {
            goto lab_0x402d93;
        }
    }
  lab_0x402df0:;
    int64_t v47 = v19; // 0x402dab
    int64_t v48 = v37 & v47;
    char v49 = v38; // 0x402df3
    v45 = v48;
    if (v49 == 45) {
        goto lab_0x402e40;
    } else {
        // 0x402df9
        if (v49 != 61) {
            goto lab_0x402d93;
        } else {
            int64_t v50 = v36 & 0xffffffff | v47 ^ 0xffffffff; // 0x402e02
            v42 = v50;
            v43 = v48;
            v44 = v50 ^ 0xffffffff;
            goto lab_0x402e0b;
        }
    }
  lab_0x402e40:;
    int64_t v51 = v11 & 0xffffffff & (v45 ^ 0xffffffff); // 0x402e49
    int64_t v52 = (v45 | v13) & 0xffffffff; // 0x402e49
    goto lab_0x402d9d;
  lab_0x402e0b:;
    char v57 = *(char *)(v15 + 17); // 0x402e0f
    int64_t v58 = v44 % 0x1000 | v13 & 0xffffffff; // 0x402e1d
    int64_t v59 = (v42 & v11 | v43) & 0xffffffff; // 0x402e20
    int64_t v54 = v59; // 0x402e26
    int64_t v55 = v58; // 0x402e26
    char v56 = v57; // 0x402e26
    result = v59;
    v3 = v58;
    if (v57 == 0) {
        // break -> 0x402e28
        goto lab_0x402e28_2;
    }
    goto lab_0x402dab;
  lab_0x402d93:
    // 0x402d93
    v51 = v11;
    v52 = v13;
    if ((char)v41 == 43) {
        // 0x402e50
        v51 = (v40 | v11) & 0xffffffff;
        v52 = (v40 | v13) & 0xffffffff;
    }
    goto lab_0x402d9d;
  lab_0x402d9d:;
    char v53 = *(char *)(v15 + 17); // 0x402da1
    v54 = v51;
    v55 = v52;
    v56 = v53;
    result = v51;
    v3 = v52;
    if (v53 == 0) {
        // break -> 0x402e28
        goto lab_0x402e28_2;
    }
    goto lab_0x402dab;
  lab_0x402dab:
    // 0x402dab
    v10 = v54;
    v14 = v15 + 16;
    v12 = v55;
    v7 = v56;
    goto lab_0x402dab_2;
}
// Address range: 0x402e70 - 0x402f09
int64_t function_402e70(int64_t str) {
    // 0x402e70
    if (str == 0) {
        // 0x402ee9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402e7e
    int64_t result = (int64_t)found_char_pos; // 0x402e7e
    if (found_char_pos == NULL) {
        // 0x402ed9
        g36 = (char *)str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402e88
    if (v1 - str < 7) {
        // 0x402ed9
        g36 = (char *)str;
        g30 = str;
        return result;
    }
    // 0x402e98
    bool v2; // 0x402e70
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402e70
    int64_t v5 = result - 6; // 0x402e70
    int64_t v6 = 7; // 0x402ea6
    unsigned char v7 = *(char *)v5; // 0x402ea6
    char v8 = *(char *)v4; // 0x402ea6
    char v9 = v8; // 0x402ea6
    bool v10 = false; // 0x402ea6
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
    int64_t v12 = (int64_t)"lt-"; // 0x402eb0
    int64_t v13 = v1; // 0x402eb0
    int64_t v14 = 3; // 0x402eb0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402ed9
        g36 = (char *)str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402ec2
    char v16 = *(char *)v12; // 0x402ec2
    char v17 = v16; // 0x402ec2
    bool v18 = false; // 0x402ec2
    while (v15 == v16) {
        // 0x402eb2
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
    int64_t v20 = v1; // 0x402ecc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402ece
        v20 = result + 4;
        g28 = v20;
    }
    // 0x402ed9
    g36 = (char *)v20;
    g30 = v20;
    return result;
}
// Address range: 0x402f10 - 0x403002
int64_t function_402f10(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402f24
    int64_t result = (int64_t)v1; // 0x402f24
    if (result != a1) {
        // 0x402f31
        return result;
    }
    int64_t v2 = function_406870(); // 0x402f40
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402ff6
    if (v3 == 85) {
        // 0x402f50
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402fe8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x402f7e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x402f8b
        // 0x402f31
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402fe8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x402fcd
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x402fda
    // 0x402f31
    return result4;
}
// Address range: 0x403010 - 0x403067
int64_t function_403010(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403010
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403058
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403067 - 0x404231
int64_t function_403067(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4030b1
    int64_t v3 = 0; // 0x4030b1
    int64_t v4; // 0x403067
    int64_t v5; // 0x403067
    int64_t v6; // 0x403067
    int64_t v7; // 0x403067
    int64_t v8; // 0x403067
    int64_t v9; // 0x403067
    int64_t v10; // 0x403067
    int64_t v11; // 0x403067
    int64_t v12; // 0x403067
    int64_t v13; // 0x403067
    int64_t v14; // 0x403067
    int64_t v15; // 0x403067
    int64_t v16; // 0x403067
    int64_t v17; // 0x403067
    int64_t v18; // 0x403067
    int64_t result; // 0x403067
    int64_t v19; // 0x403067
    int32_t wc; // bp+132, 0x403067
    int64_t ps; // bp+136, 0x403067
    char v20; // 0x403620
    int64_t v21; // 0x403620
    int64_t v22; // 0x4039c8
    int64_t v23; // 0x403067
    int64_t v24; // 0x4039e7
    int32_t v25; // 0x403067
    while (true) {
      lab_0x4030b8_2:
        // 0x4030b8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403067
        int64_t v27; // 0x4030ec
        while (true) {
          lab_0x4030b8:
            // 0x4030b8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4030c3
            if (v15 == -1) {
                // 0x4030c5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4030d3
            if (v28) {
                // break (via goto) -> 0x403838
                goto lab_0x403838;
            }
            // 0x4030dc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g56 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4036cb
                    if (v25 % 2 == 0) {
                        goto lab_0x403211;
                    }
                    // 0x403aed
                    v26 = v5 + 1;
                    goto lab_0x4030b8;
                }
                case 7: {
                    goto lab_0x403211;
                }
                case 8: {
                    goto lab_0x403211;
                }
                case 9: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403211;
                }
                case 12: {
                    goto lab_0x403211;
                }
                case 13: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4031dd;
                }
                case 36: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403211;
                }
                case 38: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403211;
                }
                case 44: {
                    goto lab_0x403211;
                }
                case 45: {
                    goto lab_0x403211;
                }
                case 46: {
                    goto lab_0x403211;
                }
                case 47: {
                    goto lab_0x403211;
                }
                case 48: {
                    goto lab_0x403211;
                }
                case 49: {
                    goto lab_0x403211;
                }
                case 50: {
                    goto lab_0x403211;
                }
                case 51: {
                    goto lab_0x403211;
                }
                case 52: {
                    goto lab_0x403211;
                }
                case 53: {
                    goto lab_0x403211;
                }
                case 54: {
                    goto lab_0x403211;
                }
                case 55: {
                    goto lab_0x403211;
                }
                case 56: {
                    goto lab_0x403211;
                }
                case 57: {
                    goto lab_0x403211;
                }
                case 58: {
                    goto lab_0x403211;
                }
                case 59: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403211;
                }
                case 66: {
                    goto lab_0x403211;
                }
                case 67: {
                    goto lab_0x403211;
                }
                case 68: {
                    goto lab_0x403211;
                }
                case 69: {
                    goto lab_0x403211;
                }
                case 70: {
                    goto lab_0x403211;
                }
                case 71: {
                    goto lab_0x403211;
                }
                case 72: {
                    goto lab_0x403211;
                }
                case 73: {
                    goto lab_0x403211;
                }
                case 74: {
                    goto lab_0x403211;
                }
                case 75: {
                    goto lab_0x403211;
                }
                case 76: {
                    goto lab_0x403211;
                }
                case 77: {
                    goto lab_0x403211;
                }
                case 78: {
                    goto lab_0x403211;
                }
                case 79: {
                    goto lab_0x403211;
                }
                case 80: {
                    goto lab_0x403211;
                }
                case 81: {
                    goto lab_0x403211;
                }
                case 82: {
                    goto lab_0x403211;
                }
                case 83: {
                    goto lab_0x403211;
                }
                case 84: {
                    goto lab_0x403211;
                }
                case 85: {
                    goto lab_0x403211;
                }
                case 86: {
                    goto lab_0x403211;
                }
                case 87: {
                    goto lab_0x403211;
                }
                case 88: {
                    goto lab_0x403211;
                }
                case 89: {
                    goto lab_0x403211;
                }
                case 90: {
                    goto lab_0x403211;
                }
                case 91: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403211;
                }
                case 94: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403211;
                }
                case 96: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403211;
                }
                case 98: {
                    goto lab_0x403211;
                }
                case 99: {
                    goto lab_0x403211;
                }
                case 100: {
                    goto lab_0x403211;
                }
                case 101: {
                    goto lab_0x403211;
                }
                case 102: {
                    goto lab_0x403211;
                }
                case 103: {
                    goto lab_0x403211;
                }
                case 104: {
                    goto lab_0x403211;
                }
                case 105: {
                    goto lab_0x403211;
                }
                case 106: {
                    goto lab_0x403211;
                }
                case 107: {
                    goto lab_0x403211;
                }
                case 108: {
                    goto lab_0x403211;
                }
                case 109: {
                    goto lab_0x403211;
                }
                case 110: {
                    goto lab_0x403211;
                }
                case 111: {
                    goto lab_0x403211;
                }
                case 112: {
                    goto lab_0x403211;
                }
                case 113: {
                    goto lab_0x403211;
                }
                case 114: {
                    goto lab_0x403211;
                }
                case 115: {
                    goto lab_0x403211;
                }
                case 116: {
                    goto lab_0x403211;
                }
                case 117: {
                    goto lab_0x403211;
                }
                case 118: {
                    goto lab_0x403211;
                }
                case 119: {
                    goto lab_0x403211;
                }
                case 120: {
                    goto lab_0x403211;
                }
                case 121: {
                    goto lab_0x403211;
                }
                case 122: {
                    goto lab_0x403211;
                }
                case 123: {
                    goto lab_0x4031b5;
                }
                case 124: {
                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4031b5;
                }
                case 126: {
                    goto lab_0x4031dd;
                }
                default: {
                    goto lab_0x4035b5;
                }
            }
        }
      lab_0x4035b5:
        if (v23 != 1) {
            // 0x403920
            ps = 0;
            int64_t len = v15; // 0x403930
            if (v15 == -1) {
                // 0x403932
                len = strlen((char *)str);
            }
            // 0x40395e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4039bf:
                // 0x4039bf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4039c4
                int64_t v30 = v29 + str;
                v24 = function_406620(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403f3a_2;
                    }
                    case -1: {
                        goto lab_0x403f3a_2;
                    }
                    case -2: {
                        // 0x40401d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404057
                            v19 = v18;
                            int64_t v31 = v18; // 0x40405a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404067
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404060
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403f3a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403f3a_2;
                    }
                    case 1: {
                        goto lab_0x403990;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403a3c
                        char v34 = *(char *)v33; // 0x403a4d
                        unsigned char v35; // 0x403067
                        if (v34 < 125) {
                            // 0x403a58
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403a6f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403010(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403a40
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403a4d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403a58
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403a6f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403010(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403a40
                            v33++;
                        }
                        goto lab_0x403990;
                    }
                }
            }
            goto lab_0x403f3a_2;
        } else {
            // 0x403604
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403211;
        }
    }
  lab_0x403838:
    // 0x403838
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40413a
        if (v8 > result) {
            // 0x404143
            *(char *)(v12 + result) = 0;
        }
        // 0x403467
        return result;
    }
    return function_403010(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403211:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403220
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40342a_2;
        }
    }
    int64_t v39 = result; // 0x403321
    char v40 = v20; // 0x403321
    int64_t v41 = v38; // 0x403321
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403321
    int64_t v43 = v36; // 0x403321
    goto lab_0x40329d;
  lab_0x40342a_2:
    // 0x403467
    return function_403010(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403f3a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403211;
    } else {
        uint64_t v49 = v46 + v5; // 0x403b0e
        int64_t v50 = v5 + 1; // 0x403bf1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403bf8
        char v52 = v20; // 0x403bf8
        int64_t v53 = result; // 0x403bf8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403bc1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403bc5
            int64_t v56 = v54 + 1; // 0x403bca
            int64_t v57 = v51 + 1; // 0x403bf1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403bbc
                v54 = v56;
                if (v47 > v54) {
                    // 0x403bc1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403bc5
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
        goto lab_0x40329d;
    }
  lab_0x403990:
    // 0x403990
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4039af
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4039b2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403f3a
        goto lab_0x403f3a_2;
    }
    goto lab_0x4039bf;
  lab_0x4031dd:
    // 0x4031dd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40342a_2;
    }
    goto lab_0x403211;
  lab_0x4031b5:;
    bool v60 = v15 == 1; // 0x4031c0
    if (v15 == -1) {
        // 0x4031c2
        v60 = *(char *)v1 == 0;
    }
    // 0x4031ce
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403211;
    } else {
        goto lab_0x4031dd;
    }
  lab_0x40329d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4032a2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4032a6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4030b8_2;
}
// Address range: 0x404240 - 0x4043de
int64_t function_404240(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404242
    int32_t * v3 = __errno_location(); // 0x40425c
    int64_t v4 = (int64_t)g21; // 0x404261
    int32_t v5 = *v3; // 0x40426b
    int64_t v6 = v4; // 0x404281
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4043d9
            function_405810(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404290
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404297
        int64_t v9; // 0x404240
        if (g21 == &g22) {
            int64_t v10 = function_405620(0, v8); // 0x4043ba
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x4043bf
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405620(v4, v8); // 0x4042ab
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x4042ba
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x4042ba
        int32_t v14 = v7; // 0x4042c1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4042f1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4042fb
    int64_t * v17 = (int64_t *)v15; // 0x4042fe
    uint64_t v18 = *v17; // 0x4042fe
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404301
    int64_t result = *v19; // 0x404301
    int64_t v20; // 0x404240
    uint64_t v21 = function_403010(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404324
    if (v18 > v21) {
        // 0x40439b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404337
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x404347
        free((int64_t *)result);
    }
    int64_t result2 = function_4055c0(v22); // 0x404361
    *v19 = result2;
    int64_t v23; // 0x404240
    function_403010(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40439b
    *v3 = v5;
    return result2;
}
// Address range: 0x4043e0 - 0x404414
int64_t function_4043e0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4043e7
    int64_t result = function_4057c0(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x404406
    return result;
}
// Address range: 0x404420 - 0x40442f
int64_t function_404420(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x40442c
    return result;
}
// Address range: 0x404430 - 0x40443f
int64_t function_404430(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x404438
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x404440 - 0x404473
int64_t function_404440(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x404459
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40445e
    uint32_t v3 = *v2; // 0x40445e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404462
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404480 - 0x404493
int64_t function_404480(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x40448c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4044a0 - 0x4044cb
int64_t function_4044a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x4044a8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4044c5
        abort();
        // UNREACHABLE
    }
    // 0x4044bc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x4044d0 - 0x404542
int64_t function_4044d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x4044f2
    int32_t * v2 = __errno_location(); // 0x4044fb
    uint32_t v3 = *(int32_t *)v1; // 0x40451b
    int64_t result = function_403010(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40452a
    return result;
}
// Address range: 0x404550 - 0x404631
int64_t function_404550(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x404572
    int32_t * v2 = __errno_location(); // 0x404578
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404597
    int32_t * v4 = (int32_t *)v1; // 0x40459a
    int64_t v5 = function_403010(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4045b5
    int64_t v6 = v5 + 1; // 0x4045ba
    int64_t result = function_4055c0(v6); // 0x4045cf
    function_403010(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404614
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40461d
    return result;
}
// Address range: 0x404640 - 0x40464a
int64_t function_404640(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404640
    return function_404550(a1, a2, 0, a3);
}
// Address range: 0x404650 - 0x4046e5
int64_t function_404650(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x404650
    int64_t v2 = v1; // 0x404650
    int64_t v3 = v2; // 0x404664
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x404683
        free((int64_t *)*(int64_t *)v4);
        v3 = &g48;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404680
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g48;
        }
    }
    int64_t v6 = v3; // 0x40469d
    if (g22 != 0x60e320) {
        // 0x40469f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g37;
        v6 = &g48;
    }
    int64_t result = v6; // 0x4046c1
    if (g21 != &g22) {
        // 0x4046c3
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g48;
    }
    // 0x4046d6
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x4046f0 - 0x404701
int64_t function_4046f0(void) {
    // 0x4046f0
    int64_t v1; // 0x4046f0
    return function_404240(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x404710 - 0x40471a
int64_t function_404710(void) {
    // 0x404710
    int64_t v1; // 0x404710
    return function_404240(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x404720 - 0x404736
int64_t function_404720(int64_t a1) {
    // 0x404720
    return function_404240(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x404740 - 0x404752
int64_t function_404740(int64_t a1, int64_t a2) {
    // 0x404740
    return function_404240(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x404760 - 0x4047c8
int64_t function_404760(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404770
    return function_404240((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4047d0 - 0x404834
int64_t function_4047d0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4047e0
    return function_404240((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404840 - 0x40484c
int64_t function_404840(int64_t a1, int64_t a2) {
    // 0x404840
    return function_404760(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404850 - 0x40485f
int64_t function_404850(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404850
    return function_4047d0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404860 - 0x4048d0
int64_t function_404860(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x40486d
    int128_t v2 = __asm_movdqa(g39); // 0x404875
    int128_t v3 = __asm_movdqa(g40); // 0x40487d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404892
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4048a8
    uint32_t v6 = *v5; // 0x4048a8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4048ad
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404240(0, a1, a2, &v4);
}
// Address range: 0x4048d0 - 0x4048dd
int64_t function_4048d0(int64_t a1, int64_t a2) {
    // 0x4048d0
    return function_404860(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4048e0 - 0x4048f1
int64_t function_4048e0(int64_t a1) {
    // 0x4048e0
    return function_404860(a1, -1, 58);
}
// Address range: 0x404900 - 0x40490a
int64_t function_404900(void) {
    // 0x404900
    int64_t v1; // 0x404900
    return function_404860(v1, v1, 58);
}
// Address range: 0x404910 - 0x40497e
int64_t function_404910(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40492a
    return function_404240(a1, a3, -1, &v1);
}
// Address range: 0x404980 - 0x4049ec
int64_t function_404980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x404987
    int128_t v2 = __asm_movdqa(g39); // 0x40498f
    int128_t v3 = __asm_movdqa(g40); // 0x404997
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4049b9
    if (a2 == 0 || a3 == 0) {
        // 0x4049e7
        abort();
        // UNREACHABLE
    }
    // 0x4049ca
    return function_404240(a1, a4, a5, &v4);
}
// Address range: 0x4049f0 - 0x4049f9
int64_t function_4049f0(void) {
    // 0x4049f0
    int64_t v1; // 0x4049f0
    return function_404980(v1, v1, v1, v1, -1);
}
// Address range: 0x404a00 - 0x404a17
int64_t function_404a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404a00
    return function_404980(0, a1, a2, a3, -1);
}
// Address range: 0x404a20 - 0x404a33
int64_t function_404a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404a20
    return function_404980(0, a1, a2, a3, a4);
}
// Address range: 0x404a40 - 0x404a4a
int64_t function_404a40(void) {
    // 0x404a40
    int64_t v1; // 0x404a40
    return function_404240(v1, v1, v1, &g20);
}
// Address range: 0x404a50 - 0x404a62
int64_t function_404a50(int64_t a1, int64_t a2) {
    // 0x404a50
    return function_404240(0, a1, a2, &g20);
}
// Address range: 0x404a70 - 0x404a81
int64_t function_404a70(void) {
    // 0x404a70
    int64_t v1; // 0x404a70
    return function_404240(v1, v1, -1, &g20);
}
// Address range: 0x404a90 - 0x404aa6
int64_t function_404a90(int64_t a1) {
    // 0x404a90
    return function_404240(0, a1, -1, &g20);
}
// Address range: 0x404ab0 - 0x404ab7
int64_t function_404ab0(int64_t a1) {
    // 0x404ab0
    *(int32_t *)a1 = 0;
    int64_t result; // 0x404ab0
    return result;
}
// Address range: 0x404ac0 - 0x404ad4
int64_t function_404ac0(int64_t a1) {
    if ((int32_t)a1 == 4) {
        // 0x404ad0
        return (int64_t)*(int32_t *)(a1 + 4);
    }
    // 0x404ac7
    return 0;
}
// Address range: 0x404ae0 - 0x404d30
int64_t function_404ae0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0xffffffff; // 0x404af4
    if (a4 != NULL) {
        int32_t v2 = __open_2((char *)a2, 0x20000 * (int32_t)a3 & 0x20000 | 0x10900); // 0x404b11
        *(int32_t *)a4 = v2;
        int64_t v3 = v2; // 0x404b18
        int32_t v4 = *__errno_location(); // 0x404b20
        *(int32_t *)((int64_t)a4 + 4) = v4;
        if (v2 < 0) {
            // 0x404bb0
            v1 = v3;
            if (v4 != 13) {
                // 0x404ba3
                return 0xffffffff;
            }
        } else {
            // 0x404b2e
            v1 = v3;
            if ((a3 & 2) != 0) {
                // 0x404ba3
                return 0;
            }
        }
    }
    // 0x404b34
    int64_t v5; // 0x404ae0
    uint32_t v6 = *(int32_t *)&v5; // 0x404b34
    if (v6 >= 6) {
        // 0x404d10
        __assert_fail("0", "lib/savewd.c", 99, "savewd_save");
        return &g48;
    }
    uint32_t v7 = v6 % 64;
    int64_t v8 = v7 == 0 ? 1 : 1 << (int64_t)v7;
    int64_t path = a2; // 0x404b4a
    int32_t * v9; // 0x404ae0
    int64_t v10; // 0x404ae0
    int64_t v11; // 0x404ae0
    if ((v8 & 54) != 0) {
        goto lab_0x404b80;
    } else {
        if ((v8 & 8) != 0) {
            int32_t * v12 = (int32_t *)(a1 + 4);
            path = a2;
            v9 = v12;
            v10 = a2;
            if (*v12 >= 0) {
                goto lab_0x404b80;
            } else {
                goto lab_0x404c4b;
            }
        } else {
            if (v6 != 0) {
                // 0x404d10
                __assert_fail("0", "lib/savewd.c", 99, "savewd_save");
                return &g48;
            }
            int32_t v13 = function_4067c0(&g3, 0, a3); // 0x404b6a
            v11 = a2;
            if (v13 < 0) {
                goto lab_0x404ca8;
            } else {
                // 0x404b72
                *(int32_t *)a1 = 1;
                *(int32_t *)(a1 + 4) = v13;
                path = a2;
                goto lab_0x404b80;
            }
        }
    }
  lab_0x404b80:;
    int32_t fd = v1;
    int32_t fd2; // 0x404ae0
    int64_t v14; // 0x404ae0
    int64_t result; // 0x404ae0
    bool v15; // 0x404ae0
    if (fd < 0) {
        uint32_t v16 = chdir((char *)path); // 0x404bcb
        int64_t v17 = v16; // 0x404bd0
        int64_t v18 = v17; // 0x404bd5
        v14 = v17;
        if (v16 != 0) {
            // 0x404ba3
            return v18 & 0xffffffff;
        }
        goto lab_0x404be1;
    } else {
        uint32_t v19 = fchdir(fd); // 0x404b88
        v14 = 0;
        if (v19 == 0) {
            goto lab_0x404be1;
        } else {
            // 0x404b94
            fd2 = fd;
            v15 = a4 == NULL;
            result = v19;
            goto lab_0x404c00;
        }
    }
  lab_0x404be1:;
    uint32_t v20 = *(int32_t *)&v5; // 0x404be1
    g52 = v20;
    fd2 = fd;
    v15 = a4 == NULL;
    result = 0;
    switch (v20) {
        case 1: {
            // 0x404bf0
            *(int32_t *)a1 = 2;
            fd2 = fd;
            v15 = a4 == NULL;
            result = 0;
            goto lab_0x404c00;
        }
        case 2: {
            goto lab_0x404c00;
        }
        case 3: {
            // 0x404c80
            fd2 = fd;
            v15 = a4 == NULL;
            result = 0;
            if (*(int32_t *)(a1 + 4) == 0) {
                goto lab_0x404c00;
            } else {
                // 0x404c8b
                __assert_fail("wd->val.child == 0", "lib/savewd.c", 155, "savewd_chdir");
                v11 = v14;
                goto lab_0x404ca8;
            }
        }
        case 4: {
            goto lab_0x404c00;
        }
        case 5: {
            goto lab_0x404c00;
        }
        default: {
            // 0x404ce3
            __assert_fail("0", "lib/savewd.c", 159, "savewd_chdir");
            fd2 = fd;
            v15 = true;
            result = 0xfffffffe;
            goto lab_0x404c00;
        }
    }
  lab_0x404c4b:;
    int64_t v21 = v10;
    int32_t * v22 = v9;
    int32_t v23 = fork(); // 0x404c4b
    *v22 = v23;
    path = v21;
    if (v23 == 0) {
        goto lab_0x404b80;
    } else {
        if (v23 >= 0) {
            // 0x404c5b
            fd2 = v1;
            v15 = true;
            result = 0xfffffffe;
            goto lab_0x404c00;
        } else {
            // 0x404c61
            *(int32_t *)a1 = 4;
            *v22 = *__errno_location();
            path = v21;
            goto lab_0x404b80;
        }
    }
  lab_0x404ca8:;
    int64_t v24 = v11;
    int32_t v25 = *__errno_location(); // 0x404cad
    switch (v25) {
        case 13: {
            goto lab_0x404cd0;
        }
        case 116: {
            goto lab_0x404cd0;
        }
        default: {
            // 0x404cb9
            *(int32_t *)a1 = 4;
            *(int32_t *)(a1 + 4) = v25;
            path = v24;
            goto lab_0x404b80;
        }
    }
  lab_0x404c00:
    // 0x404c00
    if (fd2 < 0 || !v15) {
        // 0x404ba3
        return result & 0xffffffff;
    }
    int32_t * v26 = __errno_location(); // 0x404c09
    close(fd2);
    return result;
  lab_0x404cd0:
    // 0x404cd0
    *(int64_t *)a1 = -0xfffffffd;
    v9 = (int32_t *)(a1 + 4);
    v10 = v24;
    goto lab_0x404c4b;
}
// Address range: 0x404d30 - 0x404e56
int64_t function_404d30(int32_t * a1) {
    int64_t v1 = (int64_t)a1;
    g50 = v1 & 0xffffffff;
    switch ((int32_t)v1) {
        case 0: {
        }
        case 1: {
            // 0x404d5d
            return 0;
        }
        case 2: {
            int32_t * fd = (int32_t *)(v1 + 4);
            int32_t result = fchdir(*fd); // 0x404dd3
            if (result == 0) {
                // 0x404ddc
                *a1 = 1;
                return result;
            }
            int32_t * v2 = __errno_location(); // 0x404dfb
            int32_t v3 = *v2; // 0x404e03
            close(*fd);
            *a1 = 4;
            *fd = v3;
            // 0x404d7c
            *v2 = v3;
            return 0xffffffff;
        }
        case 3: {
            int32_t * v4 = (int32_t *)(v1 + 4);
            int32_t pid = *v4; // 0x404d50
            if (pid == 0) {
                // 0x404e4f
                int64_t status; // 0x404d30
                _exit((int32_t)status);
                // UNREACHABLE
            }
            if (pid < 0) {
                // 0x404d5d
                return 0;
            }
            int32_t stat_loc; // bp-28, 0x404d30
            while (waitpid(pid, &stat_loc, 0) < 0) {
                // 0x404d90
                if (*__errno_location() != 4) {
                    // 0x404e1d
                    __assert_fail("(*__errno_location ()) == 4", "lib/savewd.c", 216, "savewd_restore");
                    goto lab_0x404e36;
                }
            }
            // 0x404db0
            *v4 = -1;
            uint32_t sig_num = stat_loc % 128; // 0x404dbd
            if (sig_num != 0) {
                // 0x404df0
                raise(sig_num);
            }
            // 0x404dc2
            return stat_loc / 256 % 256;
        }
        case 4: {
            // 0x404d7c
            *__errno_location() = *(int32_t *)(v1 + 4);
            return 0xffffffff;
        }
    }
  lab_0x404e36:
    // 0x404e36
    __assert_fail("0", "lib/savewd.c", 226, "savewd_restore");
    // 0x404e4f
    _exit((int32_t)(int64_t)"lib/savewd.c");
    // UNREACHABLE
}
// Address range: 0x404e60 - 0x404ed0
int64_t function_404e60(int32_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1 & 0xffffffff; // 0x404e66
    g51 = result;
    switch ((int32_t)v1) {
        case 0: {
        }
        case 4: {
            // 0x404e80
            *a1 = 5;
            return result;
        }
        case 1: {
        }
        case 2: {
            int64_t result2 = close(*(int32_t *)(v1 + 4));
            *a1 = 5;
            return result2;
        }
        case 3: {
            uint32_t result3 = *(int32_t *)(v1 + 4); // 0x404e90
            if (result3 < 0) {
                // 0x404e80
                *a1 = 5;
                return result3;
            }
            // break -> 0x404e97
            break;
        }
        default: {
            // 0x404eb0
            __assert_fail("0", "lib/savewd.c", 251, "savewd_finish");
            return &g48;
        }
    }
    // 0x404e97
    __assert_fail("wd->val.child < 0", "lib/savewd.c", 247, "savewd_finish");
    // 0x404eb0
    __assert_fail("0", "lib/savewd.c", 251, "savewd_finish");
    return &g48;
}
// Address range: 0x404ed0 - 0x405018
int64_t function_404ed0(uint32_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x404ed0
    int32_t v1; // 0x404ed0
    int32_t v2 = v1;
    uint32_t v3 = a1 - 1; // 0x404ed2
    int32_t v4 = 0; // bp-64, 0x404ef0
    int64_t v5 = 0; // 0x404efe
    int64_t v6 = 0; // 0x404efe
    if (v3 >= 0) {
        int64_t v7 = v3; // 0x404ed2
        int64_t v8 = v7; // 0x404f0f
        if (*(char *)*(int64_t *)((0x100000000 * v7 >> 29) + a2) == 47) {
            int64_t v9 = 0x100000000 * (int64_t)a1 - 0x200000000 >> 32;
            while ((int32_t)v9 >= 0) {
                // 0x404f20
                if (*(char *)*(int64_t *)(8 * v9 + a2) != 47) {
                    // break -> 0x404f33
                    break;
                }
                v9--;
            }
            // 0x404f33
            v8 = v9 & 0xffffffff;
        }
        // 0x404f33
        v5 = 0;
        v6 = 0;
        if ((int32_t)v8 >= 1) {
            int64_t v10 = a2; // 0x404f51
            int64_t v11 = 0;
            int64_t v12 = 0;
            int64_t v13 = v12; // 0x404f9a
            int64_t v14; // 0x404ed0
            int64_t v15; // 0x404ed0
            int32_t v16; // 0x404f66
            int32_t v17; // 0x404f66
            if (v2 >= 0 != v2 != 0 || v11 != 3) {
                // 0x404f58
                v15 = v11 != 3 ? v11 : (int64_t)v2;
                v16 = v12;
                v17 = v16 - (int32_t)v15;
                v14 = v17 < 0 == ((v17 ^ v16) & (int32_t)(v15 ^ v12)) < 0 ? v12 : v15;
                v13 = v14 & 0xffffffff;
            }
            int64_t v18 = v13;
            v10 += 8;
            int64_t v19 = v18; // 0x404f74
            int64_t v20; // 0x404ed0
            int64_t v21; // 0x404f7c
            int32_t v22; // 0x404f81
            int32_t v23; // 0x404f81
            if (*(char *)*(int64_t *)v10 != 47) {
                // 0x404f76
                v21 = function_404d30(&v4);
                v22 = v18;
                v23 = v22 - (int32_t)v21;
                v20 = v23 < 0 == ((v23 ^ v22) & (int32_t)(v21 ^ v18)) < 0 ? v18 : v21;
                v19 = v20 & 0xffffffff;
            }
            int64_t v24 = v19;
            v5 = v8;
            v6 = v24;
            while (v10 != a2 + 8 + (8 * v8 + 0x7fffffff8 & 0x7fffffff8)) {
                // 0x404f93
                v11 = v4;
                v12 = v24;
                v13 = v12;
                if (v2 >= 0 != v2 != 0 || v11 != 3) {
                    // 0x404f58
                    v15 = v11 != 3 ? v11 : (int64_t)v2;
                    v16 = v12;
                    v17 = v16 - (int32_t)v15;
                    v14 = v17 < 0 == ((v17 ^ v16) & (int32_t)(v15 ^ v12)) < 0 ? v12 : v15;
                    v13 = v14 & 0xffffffff;
                }
                // 0x404f6d
                v18 = v13;
                v10 += 8;
                v19 = v18;
                if (*(char *)*(int64_t *)v10 != 47) {
                    // 0x404f76
                    v21 = function_404d30(&v4);
                    v22 = v18;
                    v23 = v22 - (int32_t)v21;
                    v20 = v23 < 0 == ((v23 ^ v22) & (int32_t)(v21 ^ v18)) < 0 ? v18 : v21;
                    v19 = v20 & 0xffffffff;
                }
                // 0x404f88
                v24 = v19;
                v5 = v8;
                v6 = v24;
            }
        }
    }
    // 0x404fc0
    function_404e60(&v4);
    if (v5 >= (int64_t)a1) {
        // 0x405006
        return v6 & 0xffffffff;
    }
    int64_t v25 = 0x100000000 * v5;
    int64_t v26 = (v25 >> 32) + (int64_t)(v3 - (int32_t)v5); // 0x404fdb
    int64_t v27 = (v25 >> 29) + a2; // 0x404fe3
    int64_t v28 = v6;
    int32_t v29 = v28; // 0x404ff6
    int32_t v30 = v29 - (int32_t)v26; // 0x404ff6
    int64_t v31 = v30 < 0 == ((v30 ^ v29) & (int32_t)(v28 ^ v26)) < 0 ? v28 : v26;
    int64_t v32 = v31 & 0xffffffff; // 0x404ff9
    v27 += 8;
    while (v27 != a2 + 8 + 8 * v26) {
        // 0x404fe8
        v28 = v32;
        v29 = v28;
        v30 = v29 - (int32_t)v26;
        v31 = v30 < 0 == ((v30 ^ v29) & (int32_t)(v28 ^ v26)) < 0 ? v28 : v26;
        v32 = v31 & 0xffffffff;
        v27 += 8;
    }
    // 0x405006
    return v32 & 0xffffffff;
}
// Address range: 0x405020 - 0x4053fd
int64_t function_405020(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4050b8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40503c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405056
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40509b
    if (a6 < 10) {
        // 0x4050aa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4051a2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405400 - 0x405420
int64_t function_405400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405400
    if (a5 == 0) {
        // 0x40541b
        return function_405020(a1, a2, a3, a4, a5, 0, (int64_t)&g48);
    }
    int64_t v1 = 0; // 0x405407
    v1++;
    int64_t v2 = v1; // 0x405419
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405410
        v1++;
        v2 = v1;
    }
    // 0x40541b
    return function_405020(a1, a2, a3, a4, a5, v2, (int64_t)&g48);
}
// Address range: 0x405420 - 0x405480
int64_t function_405420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405420
    int64_t v3 = &v2; // 0x405420
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405453
    int64_t v6; // 0x40543d
    int64_t * v7; // 0x40545b
    int64_t v8; // 0x40545b
    int64_t v9; // 0x405467
    if (v5 < 48) {
        // 0x405430
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405473
            break;
        }
    } else {
        // 0x40545b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405473
            break;
        }
    }
    int64_t v10 = 10; // 0x405451
    while (v4 != 9) {
        // 0x405449
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405430
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405473
                break;
            }
        } else {
            // 0x40545b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405473
                break;
            }
        }
        // 0x405449
        v10 = 10;
    }
    // 0x405473
    return function_405020(a1, a2, a3, a4, v3, v10, (int64_t)&g48);
}
// Address range: 0x405480 - 0x40553c
int64_t function_405480(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x405480
    int64_t v1; // bp-168, 0x405480
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405480
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405480
    int64_t v8; // 0x405480
    int64_t v9; // bp-56, 0x405480
    int64_t v10; // 0x4054e5
    int64_t v11; // 0x405509
    if ((int32_t)v6 < 48) {
        // 0x4054d0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405520
            break;
        }
    } else {
        // 0x405502
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405520
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4054fa
    int64_t v13 = 10; // 0x4054fa
    while (v5 != 9) {
        // 0x4054fc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4054d0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405520
                break;
            }
        } else {
            // 0x405502
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405520
                break;
            }
        }
        // 0x4054f2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405520
    int64_t v14; // bp-136, 0x405480
    int64_t result = function_405020(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g48); // 0x40552f
    return result;
}
// Address range: 0x405540 - 0x4055b4
int64_t function_405540(int64_t a1) {
    // 0x405540
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4055a3
    return fputs_unlocked(v1, g29);
}
// Address range: 0x4055c0 - 0x4055da
int64_t function_4055c0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4055c4
    if (size != 0 != (mem == NULL)) {
        // 0x4055d3
        return (int64_t)mem;
    }
    // 0x4055d5
    function_405810(size);
    // UNREACHABLE
}
// Address range: 0x4055e0 - 0x405601
int64_t function_4055e0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4055e3
    int64_t v2 = v1; // 0x4055e3
    if (v2 < 0) {
        // 0x4055fb
        function_405810(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4055f9
        return function_4055c0(v2);
    }
    // 0x4055fb
    function_405810(v2);
    // UNREACHABLE
}
// Address range: 0x405610 - 0x405612
int64_t function_405610(void) {
    // 0x405610
    int64_t v1; // 0x405610
    return function_4055c0(v1);
}
// Address range: 0x405620 - 0x405656
int64_t function_405620(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405648
        free(v1);
        return (int32_t)&g48 ^ (int32_t)&g48;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405631
    if (a2 != 0 != (mem == NULL)) {
        // 0x405640
        return (int64_t)mem;
    }
    // 0x405651
    function_405810(a1);
    // UNREACHABLE
}
// Address range: 0x405660 - 0x405681
int64_t function_405660(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405663
    int64_t v2 = v1; // 0x405663
    if (v2 < 0) {
        // 0x40567b
        function_405810(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405679
        return function_405620(a1, v2);
    }
    // 0x40567b
    function_405810(a1);
    // UNREACHABLE
}
// Address range: 0x405690 - 0x405716
int64_t function_405690(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4056eb
            function_405810(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405620(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4056d3
    if (a2 == 0) {
        // 0x4056f8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4056d8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4056eb
        function_405810(a1);
        // UNREACHABLE
    }
    // 0x4056ba
    *(int64_t *)a2 = v2;
    return function_405620(a1, v2 * a3);
}
// Address range: 0x405720 - 0x405770
int64_t function_405720(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405720
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40576a
            function_405810(a1);
            // UNREACHABLE
        }
        // 0x405742
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405620(a1, v1);
    }
    if (a2 == 0) {
        // 0x405755
        *(int64_t *)a2 = 128;
        return function_405620(0, 128);
    }
    // 0x405768
    if (a2 < 0) {
        // 0x40576a
        function_405810(a1);
        // UNREACHABLE
    }
    // 0x405742
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405620(a1, v1);
}
// Address range: 0x405770 - 0x405787
int64_t function_405770(int64_t a1, int64_t a2) {
    // 0x405770
    return (int64_t)memset((int64_t *)function_4055c0(a1), 0, (int32_t)a1);
}
// Address range: 0x405790 - 0x4057be
int64_t function_405790(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405797
    if ((int64_t)v1 < 0) {
        // 0x4057b9
        function_405810(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4057b9
        function_405810(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4057aa
    if (mem != NULL) {
        // 0x4057b4
        return (int64_t)mem;
    }
    // 0x4057b9
    function_405810(nmemb);
    // UNREACHABLE
}
// Address range: 0x4057c0 - 0x4057e8
int64_t function_4057c0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4055c0(a2); // 0x4057cf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4057f0 - 0x405803
int64_t function_4057f0(int64_t str) {
    // 0x4057f0
    return function_4057c0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405810 - 0x405841
int64_t function_405810(int64_t a1) {
    // 0x405810
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405850 - 0x40592f
int64_t function_405850(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40585c
    uint32_t v2 = *v1; // 0x40585c
    int64_t v3 = a2 & 0xffffffff; // 0x405861
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405864
    uint64_t v5 = (int64_t)*v4; // 0x405864
    int64_t v6; // 0x4058d2
    if (v3 <= v5) {
      lab_0x4058cc_2:
        // 0x4058cc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405852
    int64_t v8 = v2; // 0x405850
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4058cc
        goto lab_0x4058cc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405888
    int64_t v17; // 0x405896
    int64_t * v18; // 0x4058b0
    int64_t * v19; // 0x4058b3
    int64_t v20; // 0x4058be
    int64_t v21; // 0x405896
    while ((v16 & 0xffffffff) > v10) {
        // 0x405893
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4058b0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4058c7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4058cc
            goto lab_0x4058cc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4058cc
            goto lab_0x4058cc_2;
        }
        // 0x405882
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40590b
    int64_t * v23 = (int64_t *)v22; // 0x405910
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405913
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405910
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405927
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40587d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4058cc
            goto lab_0x4058cc_2;
        }
        // 0x405882
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405893
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4058b0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4058c7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4058cc
                goto lab_0x4058cc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4058cc
                goto lab_0x4058cc_2;
            }
            // 0x405882
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4058f0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405910
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405927
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4058cc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405930 - 0x405f4c
int64_t function_405930(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40594f
    int64_t v2 = *v1; // 0x40594f
    char * str2 = (char *)v2; // 0x40595c
    char c = *str2; // 0x40595c
    int64_t v3 = v2; // 0x405988
    int64_t v4 = 0; // 0x405930
    int32_t v5; // 0x405930
    int64_t v6; // 0x405930
    int64_t v7; // 0x405930
    int64_t v8; // 0x405930
    int64_t v9; // 0x405930
    int64_t v10; // 0x405930
    int64_t v11; // 0x405930
    int64_t v12; // 0x405930
    int64_t v13; // 0x405930
    int64_t str3; // 0x405930
    int64_t v14; // 0x405930
    int64_t v15; // 0x405930
    int64_t v16; // 0x405930
    int64_t v17; // 0x405930
    int32_t v18; // 0x405930
    int32_t v19; // 0x405930
    int32_t v20; // 0x405930
    int32_t v21; // 0x405930
    int32_t v22; // 0x405930
    int32_t v23; // 0x405930
    int32_t v24; // 0x405930
    int32_t v25; // 0x405930
    int32_t v26; // 0x405930
    int32_t v27; // 0x405930
    int32_t v28; // 0x405930
    int32_t v29; // 0x405930
    int64_t nmemb; // 0x405930
    int64_t v30; // 0x405930
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40598c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405988
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405998
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40599e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405968
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4059cc
                int64_t v34; // 0x405930
                int64_t v35; // 0x405930
                if (strncmp(str, str2, n) == 0) {
                    // 0x4059d5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405b50;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4059e6
                int64_t v37 = *(int64_t *)v36; // 0x4059ea
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4059c0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4059d5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405b50;
                        }
                    }
                    // 0x4059e6
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
                  lab_0x405a36:
                    // 0x405a36
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
                        goto lab_0x405a90;
                    } else {
                        if (v11 == 0) {
                            // 0x405c00
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405a90;
                        } else {
                            if (v39 == 0) {
                                // 0x405bb0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405a5a;
                                } else {
                                    // 0x405bbc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405a5a;
                                    } else {
                                        // 0x405bca
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405a5a;
                                        } else {
                                            goto lab_0x405a90;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405a5a;
                            }
                        }
                    }
                }
              lab_0x405aa1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405c76
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405e22
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x405e42
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405e8f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405ea9
                            int64_t v45; // 0x405eab
                            if (*(char *)v42 != 0) {
                                // 0x405eab
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405ea3
                            while (v17 + nmemb != v42) {
                                // 0x405ea5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405eab
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405e98
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405ed0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405c84
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405ddf
                        free((int64_t *)v17);
                    }
                    // 0x405cd9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405cf0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405b9e
                    return 63;
                }
                // 0x405ac0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405b44
                    v35 = v13;
                    v34 = v25;
                  lab_0x405b50:;
                    int32_t * v49 = (int32_t *)a7; // 0x405b60
                    uint32_t v50 = *v49; // 0x405b60
                    int64_t v51 = v50; // 0x405b60
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405b6a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405b73
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405d9f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405d4a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405b9e
                            return 63;
                        }
                        // 0x405be8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405eff
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405dfd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405e10
                                // 0x405b9e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405d0e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405d22
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405b8b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405b8e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405b92
                    int64_t result = v59; // 0x405b98
                    if (v58 != 0) {
                        // 0x405b9a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405b9e
                    return result;
                }
            } else {
                // 0x40599e
                v5 = v32;
            }
            // break -> 0x405ac5
            break;
        }
    }
    // 0x405ac5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405add
        if (*(char *)(v60 + 1) != 45) {
            // 0x405ae7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405b9e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405c29
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405b16
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405b26
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405a90:
    // 0x405a90
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405a90
    int64_t v63 = *(int64_t *)v62; // 0x405a94
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405aa1
        goto lab_0x405aa1;
    }
    goto lab_0x405a36;
  lab_0x405a5a:
    // 0x405a5a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405930
    int32_t v65; // 0x405930
    int32_t v66; // 0x405930
    if (v27 != 0) {
        goto lab_0x405a90;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405c10
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405a90;
            } else {
                goto lab_0x405a81;
            }
        } else {
            // 0x405a75
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405d6c
                int64_t v67 = (int64_t)mem; // 0x405d6c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405a90;
                } else {
                    // 0x405d7f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405a81;
                }
            } else {
                goto lab_0x405a81;
            }
        }
    }
  lab_0x405a81:
    // 0x405a81
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405a90;
}
// Address range: 0x405f50 - 0x406516
int64_t function_405f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405f71
    if (v3 < 1) {
        // 0x40612e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405f6d
    int32_t v5 = *(int32_t *)a7; // 0x405f79
    uint64_t v6 = a1 & 0xffffffff; // 0x405f7b
    int64_t v7 = v2; // 0x405f80
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405f83
    *v8 = 0;
    int64_t v9; // 0x405f50
    int64_t v10; // 0x405f50
    int64_t v11; // 0x405f50
    int64_t v12; // 0x405f50
    int64_t str; // 0x405f50
    int64_t v13; // 0x405f50
    int64_t v14; // 0x405f50
    int64_t v15; // 0x405f50
    int64_t v16; // 0x405f50
    int64_t v17; // 0x405f50
    int32_t v18; // 0x405f50
    char v19; // 0x405f50
    if (v5 == 0) {
        // 0x406168
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405f9a;
    } else {
        // 0x405f93
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405fe0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405fe3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4060a8;
            } else {
                int64_t v22 = v7 + 1; // 0x405ff6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406006
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4060bc;
                } else {
                    goto lab_0x406018;
                }
            }
        } else {
            goto lab_0x405f9a;
        }
    }
  lab_0x405f9a:
    // 0x405f9a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405fa0
    *v24 = 0;
    int64_t v25; // 0x405f50
    int64_t v26; // 0x405f50
    int64_t v27; // 0x405f50
    switch (*(char *)&v2) {
        case 45: {
            // 0x406090
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40609d;
        }
        case 43: {
            // 0x4063a0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40609d;
        }
        default: {
            // 0x405fbc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40631f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406438
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40609d;
                } else {
                    // 0x40632d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405fca;
                }
            } else {
                goto lab_0x405fca;
            }
        }
    }
  lab_0x4060a8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4060af
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406018;
    } else {
        goto lab_0x4060bc;
    }
  lab_0x405fca:
    // 0x405fca
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40609d;
  lab_0x40609d:
    // 0x40609d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4060a8;
  lab_0x406018:;
    uint32_t v30 = *(int32_t *)a7; // 0x406018
    int64_t v31 = v30; // 0x406018
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40601a
    if ((int64_t)*v32 > v31) {
        // 0x40601f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406022
    if (*v33 > v30) {
        // 0x406027
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40602a
    int64_t v35 = v31; // 0x40602e
    int64_t v36 = v15; // 0x40602e
    int64_t v37; // 0x405f50
    int64_t v38; // 0x405f50
    int64_t v39; // 0x405f50
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406198
        int64_t v41 = v40; // 0x406198
        v2 = v41;
        int64_t v42; // 0x405f50
        if (*v33 == v40) {
            // 0x406380
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406388
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4061a4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4061b8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4061c1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4061ca
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4061e1
            int64_t v47 = v45 & 0xffffffff; // 0x4061e5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4061ee
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4061f4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4061f6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4061d0
            int64_t v49 = v48 & 0xffffffff; // 0x4061d0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4061e1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4061ee
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4061f4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4061f6;
                    }
                }
                // 0x4061d0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406398
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4061f6;
    } else {
        goto lab_0x406034;
    }
  lab_0x4060bc:
    // 0x4060bc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4060bf
    int64_t v51 = v12; // 0x4060bf
    int64_t v52 = v14; // 0x4060bf
    if (*(char *)v10 == 0) {
        goto lab_0x406018;
    } else {
        goto lab_0x4060c5;
    }
  lab_0x406034:;
    int32_t v53 = v35; // 0x406034
    int64_t v54; // 0x405f50
    int64_t v55; // 0x405f50
    int64_t v56; // 0x405f50
    int64_t v57; // 0x405f50
    int64_t v58; // 0x405f50
    int64_t v59; // 0x405f50
    char * v60; // 0x405f50
    int64_t v61; // 0x405f50
    int64_t v62; // 0x406049
    int64_t v63; // 0x405f50
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406183
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406186;
    } else {
        // 0x40603c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405f50
        int64_t v66 = v65 ? -1 : 1; // 0x406050
        int64_t v67 = (int64_t)"--"; // 0x405f50
        int64_t v68 = v62; // 0x405f50
        int64_t v69 = 3; // 0x406050
        unsigned char v70 = *(char *)v68; // 0x406050
        char v71 = *(char *)v67; // 0x406050
        char v72 = v71; // 0x406050
        bool v73 = false; // 0x406050
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
            // 0x406140
            if (*(char *)v62 == 45) {
                // 0x406200
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406200
                if (c == 0) {
                    goto lab_0x40614a;
                } else {
                    // 0x40620d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406290;
                    } else {
                        if (c == 45) {
                            // 0x406473
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4062e5;
                        } else {
                            // 0x40621e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406290;
                            } else {
                                // 0x406223
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406244;
                                } else {
                                    // 0x40622a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406290;
                                    } else {
                                        goto lab_0x406244;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40614a;
            }
        } else {
            uint32_t v75 = *v33; // 0x406060
            v2 = v75;
            int32_t v76 = *v32; // 0x406063
            int64_t v77 = v35 + 1; // 0x406066
            int32_t v78 = v77; // 0x406069
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4063d0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406077
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406085
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406186;
        }
    }
  lab_0x4060c5:;
    // 0x4060c5
    int64_t v79; // bp-104, 0x405f50
    int64_t v80 = &v79; // 0x405f5a
    int64_t v81 = v50 + 1; // 0x4060c5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4060cc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4060d1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4060d5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4060d9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4060e1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4060e6
    int32_t c2 = v84; // 0x4060e6
    char * found_char_pos = strchr(str2, c2); // 0x4060e6
    int64_t v87 = *v82; // 0x4060eb
    v2 = v87;
    int64_t v88 = *v85; // 0x4060f5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406100
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4063f0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4063bd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40612e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4060e6
    char v91 = *(char *)(v90 + 1); // 0x40611b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4060d5
        if (v91 != 58) {
            // 0x40612e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406344
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406448
                *v8 = 0;
            } else {
                // 0x40642c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40636e
            *v83 = 0;
            // 0x40612e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40634e
        if (v93 != 0) {
            // 0x4063e0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40636e
            *v83 = 0;
            // 0x40612e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406361
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40636e
            *v83 = 0;
            // 0x40612e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4064aa
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40645a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406461
        // 0x40636e
        *v83 = 0;
        // 0x40612e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4062b9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4062bb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4064e0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406491
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406498
            // 0x40612e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4062c6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4062ca
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4062e5;
  lab_0x4061f6:
    // 0x4061f6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406034;
  lab_0x4062e5:;
    int64_t v99 = function_405930(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406303
    // 0x40612e
    return v99 & 0xffffffff;
  lab_0x406186:;
    int32_t v100 = v55; // 0x406186
    if (v100 != (int32_t)v59) {
        // 0x40618a
        *(int32_t *)a7 = v100;
    }
    // 0x40612e
    return 0xffffffff;
  lab_0x40614a:
    // 0x40614a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406151
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40612e
    return v99 & 0xffffffff;
  lab_0x406290:
    // 0x406290
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4060c5;
  lab_0x406244:
    // 0x406244
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405930(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x40626a
    if ((int32_t)v101 != -1) {
        // 0x40612e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40627f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406290;
}
// Address range: 0x406520 - 0x406576
int64_t function_406520(int64_t a1) {
    // 0x406520
    *(int32_t *)&g41 = g27;
    *(int32_t *)&g42 = g26;
    int64_t v1; // 0x406520
    int64_t result = function_405f50(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x406546
    g27 = *(int32_t *)&g41;
    g47 = g44;
    *(int32_t *)&g25 = g43;
    return result;
}
// Address range: 0x406580 - 0x406598
int64_t function_406580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406580
    return function_406520(1);
}
// Address range: 0x4065a0 - 0x4065b3
int64_t function_4065a0(int64_t a1, int64_t a2, char * a3, char (**a4)[8], int32_t a5, int64_t a6) {
    // 0x4065a0
    return function_406520(0);
}
// Address range: 0x4065c0 - 0x4065d5
int64_t function_4065c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4065c0
    return function_405f50(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4065e0 - 0x4065f6
int64_t function_4065e0(void) {
    // 0x4065e0
    return function_406520(0);
}
// Address range: 0x406600 - 0x406618
int64_t function_406600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406600
    return function_405f50(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406620 - 0x40669a
int64_t function_406620(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40662b
    int64_t v2 = (int64_t)&g11; // 0x40662b
    int32_t * pwc; // 0x406620
    int64_t v3; // 0x406620
    int64_t n; // 0x406620
    if (a2 == 0) {
        goto lab_0x406672;
    } else {
        // 0x40662d
        if (a3 == 0) {
            // 0x406658
            return -2;
        }
        // 0x406639
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406672;
        } else {
            goto lab_0x406644;
        }
    }
  lab_0x406672:
    // 0x406672
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406620
    pwc = (int32_t *)&v4;
    goto lab_0x406644;
  lab_0x406644:;
    char * wstr = (char *)v3; // 0x40664a
    int64_t ps; // 0x406620
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40664a
    int64_t result = v5; // 0x40664a
    if (v5 < 0xfffffffe) {
        // 0x406658
        return result;
    }
    int64_t result2 = result; // 0x406689
    if ((char)function_406810(0, v3) == 0) {
        // 0x40668b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406658
    return result2;
}
// Address range: 0x4066a0 - 0x40675d
int64_t function_4066a0(int64_t stream, int64_t a2, int64_t * a3) {
    int32_t v1 = 2000; // bp-2048, 0x4066c0
    int64_t v2; // bp-2040, 0x4066a0
    int64_t v3; // 0x4066a0
    int64_t v4 = function_4072f0(&v2, (int64_t *)&v1, a2, (int64_t)a3, v3, v3, 2000, (int64_t)&g48); // 0x4066cc
    if (v4 == 0) {
        // 0x40674e
        function_4072e0(stream);
        // 0x40670c
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x4066d1
    int64_t * data = (int64_t *)v4; // 0x4066ec
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x406720
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x40672a
            free(data);
        }
        // 0x40670c
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x4066fb
        free(data);
    }
    // 0x406703
    if (nmemb > -1) {
        // 0x40670c
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x406743
    *__errno_location() = 75;
    // 0x40674e
    function_4072e0(stream);
    // 0x40670c
    return 0xffffffff;
}
// Address range: 0x406760 - 0x4067bd
int64_t function_406760(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406767
    int64_t v2; // 0x406760
    int64_t result = function_4071c0(a1, v2); // 0x406778
    if ((v2 & 32) != 0) {
        // 0x4067a0
        if ((int32_t)result == 0) {
            // 0x4067a4
            *__errno_location() = 0;
        }
        // 0x40679a
        return 0xffffffff;
    }
    // 0x406781
    if ((int32_t)result == 0) {
        // 0x40679a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406788
    if (v1 == 0) {
        // 0x40678a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40679a
    return result2;
}
// Address range: 0x4067c0 - 0x40680a
int64_t function_4067c0(int64_t * path, int32_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, oflag); // 0x4067d3
    return function_407170((int64_t)fd);
}
// Address range: 0x406810 - 0x40686e
int64_t function_406810(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406816
    if (locale == NULL) {
        // 0x406843
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406816
    bool v2; // 0x406810
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x406810
    int64_t v5 = v1; // 0x406810
    int64_t v6 = 2; // 0x406835
    unsigned char v7 = *(char *)v5; // 0x406835
    char v8 = *(char *)v4; // 0x406835
    char v9 = v8; // 0x406835
    bool v10 = false; // 0x406835
    while (v7 == v8) {
        // 0x406828
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406841
    int64_t v13 = v1; // 0x406841
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406843
        return 0;
    }
    int64_t v14 = 6; // 0x406841
    unsigned char v15 = *(char *)v13; // 0x40685d
    char v16 = *(char *)v12; // 0x40685d
    char v17 = v16; // 0x40685d
    bool v18 = false; // 0x40685d
    while (v15 == v16) {
        // 0x406850
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
// Address range: 0x406870 - 0x406dd2
int64_t function_406870(void) {
    char * v1 = nl_langinfo(14); // 0x406886
    char * v2 = g45; // 0x40688b
    char * v3; // 0x406870
    int64_t v4; // 0x406870
    int64_t v5; // 0x406870
    int64_t v6; // 0x406870
    int64_t v7; // 0x406870
    int32_t size; // 0x406870
    int32_t size2; // 0x406870
    int32_t len; // 0x406942
    int64_t v8; // 0x406942
    char * env_val; // 0x40692d
    if (v2 == NULL) {
        // 0x406928
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406995;
        } else {
            // 0x40693a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406995;
            } else {
                // 0x40693f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40692d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406dc5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406995;
                    } else {
                        // 0x406d39
                        size2 = len + 14;
                        goto lab_0x40695b;
                    }
                } else {
                    goto lab_0x40695b;
                }
            }
        }
    } else {
        // 0x406870
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4068aa;
    }
  lab_0x406bdc:;
    // 0x406bdc
    struct _IO_FILE * stream; // 0x406a1b
    int32_t v10 = __uflow(stream); // 0x406bdf
    int64_t v11; // 0x406870
    int64_t v12 = v11; // 0x406be9
    int64_t v13; // 0x406870
    int64_t v14 = v13; // 0x406be9
    int32_t v15 = v10; // 0x406be9
    int64_t v16; // 0x406870
    int64_t v17 = v16; // 0x406be9
    int64_t v18 = v11; // 0x406be9
    int64_t v19 = v13; // 0x406be9
    int64_t v20 = v16; // 0x406be9
    if (v10 == -1) {
        // break -> 0x406bef
        goto lab_0x406bef;
    }
    goto lab_0x406a69;
  lab_0x406a5e:;
    // 0x406a5e
    int64_t v90; // 0x406870
    int64_t * v32; // 0x406a50
    *v32 = v90 + 1;
    int64_t v89; // 0x406870
    v12 = v89;
    int64_t v91; // 0x406870
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406870
    v17 = v92;
    goto lab_0x406a69;
  lab_0x406a69:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406870
    int32_t v25; // bp-120, 0x406870
    int32_t v26; // bp-184, 0x406870
    int64_t v27; // 0x406a1b
    int64_t v28; // 0x406a38
    int64_t v29; // 0x406a3d
    int64_t * v30; // 0x406a54
    switch (c) {
        case 32: {
            goto lab_0x406a50;
        }
        case 10: {
            goto lab_0x406a50;
        }
        case 9: {
            goto lab_0x406a50;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406c41
            int32_t v33; // 0x406870
            char v34; // 0x406870
            int32_t v35; // 0x406c4e
            if (v31 < *v30) {
                // 0x406c20
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406c4b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406c41
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406c20
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406c4b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406c30
                v36 = v33;
            }
            // 0x406d1f
            if (v36 == -1) {
                // break -> 0x406bef
                break;
            }
            goto lab_0x406a50;
        }
        default: {
            // 0x406a7f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406bef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406aa8
            int64_t v39 = v37 + 4; // 0x406aaa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406ab6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406ab8
            while (v41 == 0) {
                // 0x406aa8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406ad6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406ae2
            int64_t v45 = v43 + 4; // 0x406ae4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406af0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406af2
            while (v47 == 0) {
                // 0x406ae2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406adf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406b08
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406b18
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x406b1c
            int64_t v52 = v51 + v48; // 0x406b25
            int64_t * mem; // 0x406870
            int64_t v53; // 0x406870
            int64_t v54; // 0x406870
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406c5b
                int64_t v56 = v55 + 3; // 0x406c67
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406b41
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406b50
            if (mem == NULL) {
                // 0x406d7c
                free((int64_t *)v21);
                function_4071c0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x4069f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406b68
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406b72
            uint32_t v62 = (int32_t)v59; // 0x406b75
            int64_t v63; // 0x406870
            if (v62 >= 8) {
                // 0x406c84
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406c9e
                int64_t v66 = v61 - v65; // 0x406ca2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406cad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406cbe
                    int64_t v70 = v69 & 0xffffffff; // 0x406cbe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406cbb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406d4f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406b87
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406b8b
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
            int64_t v73 = v51 + 1; // 0x406b9b
            int64_t v74 = v60 - 1; // 0x406b9f
            uint32_t v75 = (int32_t)v73; // 0x406ba4
            int64_t v76; // 0x406870
            if (v75 >= 8) {
                // 0x406cd2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406cdc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406cec
                int64_t v80 = v74 - v79; // 0x406cf0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406cfb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406d0b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406d09
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406d66
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406d6e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406bb6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406bba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406db3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406bce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x406a5e;
            } else {
                goto lab_0x406bdc;
            }
        }
    }
  lab_0x406a50:;
    int64_t v93 = v23; // 0x406870
    int64_t v94 = v22; // 0x406870
    int64_t v95 = v21; // 0x406870
    goto lab_0x406a50_2;
  lab_0x406995:;
    int64_t * mem3 = malloc(size); // 0x406995
    int64_t v97 = (int64_t)&g11; // 0x4069a0
    int64_t v98; // 0x406870
    int64_t path; // 0x406870
    if (mem3 == NULL) {
        goto lab_0x406972;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406995
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4069b6;
    }
  lab_0x4068aa:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40689d
    char v100 = *v3; // 0x4068aa
    int64_t v101; // 0x406870
    if (v100 == 0) {
        // 0x406904
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406870
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406870
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4068f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4068f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4068c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4068cd
        char v107 = *(char *)v106; // 0x4068d2
        v102 = v107;
        if (v107 == 0) {
            // 0x406904
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4068db
    v104 = v103 + 1;
  lab_0x4068f7:
    // 0x406904
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406972:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4068aa;
  lab_0x4069b6:;
    int64_t v109 = v98 + path; // 0x4069b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4069e2
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x406a11
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406d42
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x406a35
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406a50_2:;
                uint64_t v96 = *v32; // 0x406a50
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406bdc;
                } else {
                    goto lab_0x406a5e;
                }
            }
          lab_0x406bef:
            // 0x406bef
            function_4071c0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x406c0e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4069f4;
  lab_0x40695b:;
    int64_t * mem4 = malloc(size2); // 0x40695b
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x406a01
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4069b6;
    } else {
        goto lab_0x406972;
    }
  lab_0x4069f4:
    // 0x4069f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406972;
}
// Address range: 0x406de0 - 0x406f68
int64_t function_406de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)a1; // 0x406e14
    char v2 = v1; // 0x406e1c
    int64_t v3 = a1; // 0x406e1c
    int64_t v4 = a1; // 0x406e1c
    int64_t v5 = 0; // 0x406e1c
    int32_t v6 = 0; // 0x406e1c
    int64_t v7 = a1; // 0x406e1c
    char v8; // 0x406de0
    int64_t v9; // 0x406de0
    int64_t v10; // 0x406de0
    int64_t v11; // 0x406de0
    char v12; // 0x406de0
    int64_t v13; // 0x406de0
    int32_t v14; // 0x406de0
    int32_t v15; // 0x406de0
    int32_t v16; // 0x406de0
    char * v17; // 0x406de0
    char * v18; // 0x406de0
    int64_t v19; // 0x406e48
    if (v1 != 0) {
        while (true) {
            int64_t v20 = v5;
            v17 = (char *)v20;
            char v21 = v2; // 0x406de0
            char v22; // 0x406de0
            while (true) {
                // 0x406e22
                v14 = v6;
                v12 = v21;
                v9 = v4;
                v10 = v3;
                char v23; // 0x406e22
                while (true) {
                  lab_0x406e22:
                    // 0x406e22
                    v3 = v10;
                    v22 = v12;
                    v6 = v14;
                    v4 = v9 + 1;
                    v18 = (char *)v4;
                    v23 = *v18;
                    if (v23 == 47) {
                        // break (via goto) -> 0x406ee0
                        goto lab_0x406ee0;
                    }
                    if (v20 == 0 || v22 == 47 != v23 != 0) {
                        // break -> 0x406e10
                        break;
                    }
                    // 0x406e45
                    v19 = v20 - v3;
                    if (v19 == 1) {
                        // 0x406f30
                        v8 = v23;
                        v16 = v6;
                        if (*(char *)v3 == 46) {
                            goto lab_0x406ead;
                        } else {
                            // 0x406f3b
                            *v17 = 0;
                            goto lab_0x406e63;
                        }
                    } else {
                        // 0x406e55
                        *v17 = 0;
                        if (v19 == 2) {
                            // 0x406ef0
                            if (*(char *)v3 != 46) {
                                goto lab_0x406e63;
                            } else {
                                // 0x406efb
                                v15 = 0;
                                v13 = 0;
                                v11 = 0;
                                if (*(char *)(v3 + 1) != 46) {
                                    goto lab_0x406e63;
                                } else {
                                    goto lab_0x406e86;
                                }
                            }
                        } else {
                            goto lab_0x406e63;
                        }
                    }
                }
                // 0x406e10
                v21 = v23;
                v7 = v3;
                if (v23 == 0) {
                    // break (via goto) -> 0x406ec8
                    goto lab_0x406ec8_2;
                }
            }
          lab_0x406ee0:
            // 0x406ee0
            v5 = v22 != 47 ? v4 : v20;
            v2 = 47;
        }
    }
  lab_0x406ec8_2:;
    int64_t result = v7 - a1; // 0x406ecb
  lab_0x406ece:
    // 0x406ece
    return result;
  lab_0x406f48_2:;
    int64_t v24; // 0x406de0
    int64_t v25; // 0x406e90
    if (v24 == 0) {
        // 0x406f60
        result = 0x100000000 * v25 >> 32;
        return result;
    } else {
        int32_t * v26 = __errno_location(); // 0x406f4d
        if (*v26 != 2) {
            // 0x406f60
            result = 0x100000000 * v25 >> 32;
            return result;
        } else {
            // 0x406f57
            *v26 = (int32_t)v24;
            // 0x406f60
            result = 0x100000000 * v25 >> 32;
            return result;
        }
    }
  lab_0x406ead:
    // 0x406ead
    v14 = v16;
    v12 = v8;
    v9 = v4;
    v10 = v4;
    v7 = v4;
    if (v8 == 0) {
        // break (via goto) -> 0x406ec8
        goto lab_0x406ec8_2;
    }
    goto lab_0x406e22;
  lab_0x406e63:
    // 0x406e63
    v15 = 1;
    v13 = 1;
    v11 = 0;
    if ((int32_t)v19 < 0) {
        uint32_t v27 = *__errno_location(); // 0x406f21
        v15 = v6;
        v13 = v6 % 2;
        v11 = v27;
    }
    goto lab_0x406e86;
  lab_0x406e86:
    // 0x406e86
    v24 = v11;
    v25 = function_404ae0(a2, v3, v13, NULL);
    int32_t v28 = v25; // 0x406e98
    if (v28 == -1) {
        goto lab_0x406f48_2;
    }
    // 0x406ea1
    *v17 = 47;
    if (v28 != 0) {
        goto lab_0x406f48_2;
    }
    // 0x406ea1
    v8 = *v18;
    v16 = v15;
    goto lab_0x406ead;
}
// Address range: 0x406f70 - 0x407169
int64_t function_406f70(int64_t a1, int64_t path, int32_t a3, int32_t owner, int32_t group, int64_t a6, int64_t a7) {
    int32_t fd = a1; // 0x406f99
    int32_t v1; // 0x406f70
    int32_t * v2; // 0x406f70
    int64_t v3; // 0x406f70
    int32_t v4; // 0x406f70
    int64_t v5; // bp-200, 0x406f70
    int32_t v6; // 0x406f70
    if (fd < 0) {
        uint32_t v7 = __xstat(1, (char *)path, (struct stat *)&v5); // 0x40702d
        if (v7 != 0) {
            // 0x40703c
            return (int64_t)v7 & 0xffffffff;
        }
        if ((v6 & 0xf000) != 0x4000) {
            // 0x407156
            *__errno_location() = 20;
            // 0x40703c
            return 0xffffffff;
        }
        goto lab_0x406fcd;
    } else {
        int32_t v8 = __fxstat(1, fd, (struct stat *)&v5); // 0x406fa8
        v4 = v8;
        if (v8 != 0) {
            goto lab_0x4070f0;
        } else {
            if ((v6 & 0xf000) != 0x4000) {
                int32_t * v9 = __errno_location(); // 0x407050
                *v9 = 20;
                v3 = 0xffffffff;
                v2 = v9;
                v1 = 20;
                goto lab_0x407069;
            } else {
                goto lab_0x406fcd;
            }
        }
    }
  lab_0x406fcd:;
    int64_t v10 = v6;
    int64_t v11; // 0x406f70
    if (owner == -1 || v6 == owner) {
        // 0x407080
        v11 = 0;
        if (group != -1 == (v6 != group)) {
            goto lab_0x406fe2;
        } else {
            goto lab_0x407093;
        }
    } else {
        goto lab_0x406fe2;
    }
  lab_0x4070f0:;
    int32_t * v12 = __errno_location(); // 0x4070f0
    v3 = v4;
    v2 = v12;
    v1 = *v12;
    goto lab_0x407069;
  lab_0x406fe2:
    if (fd >= 0) {
        int32_t v15 = fchown(fd, owner, group); // 0x4070dd
        v4 = v15;
        if (v15 == 0) {
            // 0x407012
            v11 = (v10 & 73) == 0 ? 0 : v10 & 3072;
            goto lab_0x407093;
        } else {
            goto lab_0x4070f0;
        }
    } else {
        char * path2 = (char *)path;
        int32_t v16; // 0x406f70
        if (a3 == -1) {
            // 0x407120
            v16 = chown(path2, owner, group);
        } else {
            // 0x407003
            v16 = lchown(path2, owner, group);
        }
        // 0x40700e
        if (v16 != 0) {
            // 0x40703c
            return (int64_t)v16 & 0xffffffff;
        }
        // 0x407012
        v11 = (v10 & 73) == 0 ? 0 : v10 & 3072;
        goto lab_0x407093;
    }
  lab_0x407069:
    // 0x407069
    close(fd);
    *v2 = v1;
    // 0x40703c
    return v3 & 0xffffffff;
  lab_0x407093:;
    uint64_t v13 = 0x100000000 * a7 >> 32;
    if ((int32_t)((v11 | v10 ^ a6) & v13) == 0) {
        // 0x407100
        if (fd < 0) {
            // 0x40703c
            return 0;
        }
        // 0x40703c
        return (int64_t)close(fd) & 0xffffffff;
    }
    int64_t mode = (v13 % 0x1000 ^ 4095) & v10 | a6 & 0xffffffff; // 0x4070b4
    if (fd < 0) {
        // 0x40703c
        return (int64_t)chmod((char *)path, (int32_t)mode) & 0xffffffff;
    }
    int32_t v14 = fchmod(fd, (int32_t)mode); // 0x407133
    v4 = v14;
    if (v14 == 0) {
        // 0x40703c
        return (int64_t)close(fd) & 0xffffffff;
    }
    goto lab_0x4070f0;
}
// Address range: 0x407170 - 0x4071be
int64_t function_407170(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40717c
    if (fd >= 3) {
        // 0x407181
        return a1 & 0xffffffff;
    }
    // 0x407190
    int64_t v1; // 0x407170
    int64_t v2 = function_408e10(a1, v1); // 0x407190
    int32_t * v3 = __errno_location(); // 0x407198
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x4071c0 - 0x40723b
int64_t function_4071c0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4071c7
    if (fileno(stream) < 0) {
        // 0x407227
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4071da
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40720b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x407227
            return fclose(stream);
        }
    }
    // 0x4071dc
    if ((int32_t)function_407240(a1, v1) == 0) {
        // 0x407227
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4071e8
    int32_t v3 = *v2; // 0x4071f0
    int64_t result = fclose(stream); // 0x4071fe
    if (v3 != 0) {
        // 0x407230
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x407200
    return result;
}
// Address range: 0x407240 - 0x407280
int64_t function_407240(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40725a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40725a
        return fflush(stream);
    }
    // 0x407268
    function_407280(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407280 - 0x4072d7
int64_t function_407280(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407280
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40728a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4072bb
    int64_t result = -1; // 0x4072c4
    if (v1 != -1) {
        // 0x4072c6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4072d2
    return result;
}
// Address range: 0x4072e0 - 0x4072e4
int64_t function_4072e0(int64_t a1) {
    // 0x4072e0
    int64_t result; // 0x4072e0
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x4072f0 - 0x408e09
int64_t function_4072f0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4072f0
    int64_t v1; // bp-1416, 0x4072f0
    int64_t v2; // bp-1656, 0x4072f0
    if ((int32_t)function_409180(a3, &v1, &v2) < 0) {
        // 0x407960
        return 0;
    }
    int64_t v3 = &v2; // 0x4072fb
    int64_t v4; // bp-1384, 0x4072f0
    int64_t v5; // bp-1640, 0x4072f0
    int64_t v6; // 0x4072f0
    if ((int32_t)function_408f60(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x408247
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x408263
            free((int64_t *)v6);
        }
        // 0x408268
        *__errno_location() = 22;
        // 0x407960
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40735b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x407363
    uint64_t v9 = v8 + v6; // 0x407367
    int64_t v10; // 0x4072f0
    char * v11; // 0x4072f0
    int64_t v12; // 0x4072f0
    if (v9 < v8) {
        // 0x407a10
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x407919;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x407a10
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x407919;
        } else {
            uint64_t size = v9 + 6; // 0x407377
            if (size < 4000) {
                // 0x4074c0
                v12 = 0;
                int64_t v13; // bp-1784, 0x4072f0
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x4073b4;
            } else {
                if (size == -1) {
                    // 0x407a10
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x407919;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x407398
                    if (mem == NULL) {
                        // 0x407a10
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x407919;
                    } else {
                        // 0x4073ad
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x4073b4;
                    }
                }
            }
        }
    }
  lab_0x4078e0_2:;
    // 0x4078e0
    int64_t v14; // 0x4072f0
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x4078e8
    int64_t v17 = v16; // 0x4078f6
    int64_t v18 = v16; // 0x4078f6
    int64_t v19 = v15; // 0x4078f6
    int64_t v20; // 0x4072f0
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x407b08;
    } else {
        goto lab_0x407901;
    }
  lab_0x407919:
    // 0x407919
    if (v6 != (int64_t)&v4) {
        // 0x407930
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40794c
        free((int64_t *)v6);
    }
    // 0x407951
    *(int32_t *)v10 = 12;
    // 0x407960
    return 0;
  lab_0x4073b4:
    // 0x4073b4
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x4073ed
    int64_t v23 = *v22; // 0x4073ed
    int64_t v24 = 0; // 0x4073f3
    int64_t v25 = v20; // 0x4073f3
    int64_t v26 = v21; // 0x4073f3
    int64_t v27 = 0; // 0x4073f3
    int64_t v28; // 0x4072f0
    int64_t v29; // 0x4072f0
    int64_t v30; // 0x4072f0
    int64_t v31; // 0x4072f0
    int64_t v32; // 0x4072f0
    int64_t v33; // 0x4072f0
    int64_t v34; // 0x4072f0
    if (v23 == a3) {
        goto lab_0x407a03;
    } else {
        int64_t v35 = v23 - a3; // 0x4073f9
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40740b;
    }
  lab_0x407a03:;
    int64_t v36 = v24; // 0x407a06
    float80_t v37; // 0x4072f0
    float80_t v38 = v37; // 0x407a06
    float80_t v39; // 0x4072f0
    float80_t v40 = v39; // 0x407a06
    int64_t v41 = v25; // 0x407a06
    int64_t v42 = v26; // 0x407a06
    int64_t v43 = v27; // 0x407a06
    int64_t v44; // 0x4072f0
    int64_t v45 = v44; // 0x407a06
    goto lab_0x407568;
  lab_0x407568:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x4072f0
    int64_t v51; // 0x4072f0
    int64_t v52; // 0x4072f0
    int64_t v53; // 0x4072f0
    int64_t v54; // 0x4072f0
    int64_t v55; // 0x4072f0
    int64_t v56; // 0x4072f0
    int64_t v57; // 0x4072f0
    int64_t dest_mem2; // 0x4072f0
    int64_t dest_mem3; // 0x4072f0
    int64_t v58; // 0x4072f0
    float80_t v59; // 0x4072f0
    float80_t v60; // 0x4072f0
    float80_t v61; // 0x4072f0
    float80_t v62; // 0x4072f0
    float80_t v63; // 0x4072f0
    uint64_t v64; // 0x408696
    char * v65; // 0x40757c
    char v66; // 0x40757c
    int64_t v67; // 0x4075a4
    uint32_t v68; // 0x4075a8
    int64_t v69; // 0x407985
    char v70; // 0x4072f0
    if (v1 == v49) {
        // 0x408690
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x408dfa
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x4086f2;
            } else {
                goto lab_0x4078e0_2;
            }
        } else {
            // 0x4086a0
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x4086f2;
            } else {
                if (v47 != 0) {
                    // 0x408cbd
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x4078e0_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x408cc3
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x4086be;
                        } else {
                            goto lab_0x408ccf;
                        }
                    }
                } else {
                    // 0x4086ae
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x4086be;
                    } else {
                        goto lab_0x408ccf;
                    }
                }
            }
        }
    } else {
        // 0x40757c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x407581
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40801c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x408150
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x4078e0_2;
                } else {
                    goto lab_0x4079e2;
                }
            } else {
                // 0x407992
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x4079e2;
                } else {
                    if (v47 != 0) {
                        // 0x408280
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x4078e0_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x408286
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x4079b0;
                            } else {
                                goto lab_0x408292;
                            }
                        }
                    } else {
                        // 0x4079a0
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x4079b0;
                        } else {
                            goto lab_0x408292;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40801c
                abort();
                // UNREACHABLE
            }
            // 0x407599
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g53 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x407f10
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x4079e7;
                }
                case 19: {
                    // 0x407f00
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x4079e7;
                }
                case 20: {
                    // 0x407ee8
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x4079e7;
                }
                case 21: {
                    goto lab_0x407ad0;
                }
                case 22: {
                    goto lab_0x407ad0;
                }
                default: {
                    // 0x4075ba
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x407a60
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x407a7d;
                        } else {
                            // 0x407a67
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x4075f0;
                            } else {
                                goto lab_0x407a7d;
                            }
                        }
                    } else {
                        goto lab_0x4075f0;
                    }
                }
            }
        }
    }
  lab_0x40740b:;
    int64_t v75 = v34;
    float80_t v76; // 0x4072f0
    float80_t v77 = v76;
    float80_t v78; // 0x4072f0
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x4072f0
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40740e
    int64_t v89 = v85; // 0x40740e
    int64_t v90 = v84; // 0x40740e
    float80_t v91 = v79; // 0x40740e
    float80_t v92 = v77; // 0x40740e
    int64_t v93 = v75; // 0x40740e
    int64_t v94 = v80; // 0x40740e
    int64_t v95 = v81; // 0x40740e
    int64_t v96 = v82; // 0x40740e
    int64_t v97 = v87; // 0x40740e
    int64_t v98; // 0x4072f0
    int64_t v99; // 0x4072f0
    int64_t v100; // 0x4072f0
    int64_t v101; // 0x4072f0
    int64_t v102; // 0x4072f0
    if (v82 >= v87) {
        goto lab_0x407559;
    } else {
        if (v82 != 0) {
            // 0x4074f0
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x4078e0_2;
            } else {
                int64_t v103 = 2 * v82; // 0x4074f6
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40750b;
                } else {
                    goto lab_0x4074fe;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x407434
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40751e;
                } else {
                    goto lab_0x407440;
                }
            } else {
                goto lab_0x4074fe;
            }
        }
    }
  lab_0x407559:
    // 0x407559
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x407568;
  lab_0x4086f2:
    // 0x4086f2
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x4086fa
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40870b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x408717
    if (v12 != 0) {
        // 0x408723
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x408742
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40875e
        free((int64_t *)v6);
    }
    // 0x408763
    *a2 = v46;
    // 0x407960
    return result;
  lab_0x407ad0:
    // 0x407ad0
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x4079e7;
  lab_0x4074fe:
    // 0x4074fe
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x4078e0_2;
    } else {
        goto lab_0x40750b;
    }
  lab_0x407b08:
    // 0x407b08
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x407901;
  lab_0x407901:
    if (v12 == 0) {
        // 0x407a10
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x407919;
    } else {
        // 0x407911
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x407919;
    }
  lab_0x4079e2:
    // 0x4079e2
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x4079e7;
  lab_0x4075f0:;
    int64_t v273 = (int64_t)v11; // 0x4075f0
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x4075f7
    int64_t v275 = v273 + 1; // 0x4075fb
    *v11 = 37;
    int64_t v276 = v275; // 0x407604
    if (v274 % 2 != 0) {
        // 0x407606
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x4075f7
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x407617
    if ((v277 & 2) != 0) {
        // 0x407619
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x407623
    if ((v277 & 4) != 0) {
        // 0x407625
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x40762f
    if ((v277 & 8) != 0) {
        // 0x407631
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40763b
    if ((v277 & 16) != 0) {
        // 0x40763d
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x407647
    if ((v277 & 64) != 0) {
        // 0x407649
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x407653
    if ((v277 & 32) != 0) {
        // 0x407655
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40765d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x407661
    int64_t v293 = v290; // 0x407668
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x407677
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40769a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40769e
    int64_t v298 = v295; // 0x4076a5
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x4076b4
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x4075aa
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x4076e0
    int64_t v272; // 0x4072f0
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x4076e9
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x407ae8;
        } else {
            if (v301 == 12) {
                // 0x4082a8
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x407710;
            } else {
                // 0x407700
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x407ae0
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x407ae8;
                } else {
                    goto lab_0x407710;
                }
            }
        }
    } else {
        goto lab_0x407710;
    }
  lab_0x4079e7:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x4079e7
    int64_t v111 = v55 + 88; // 0x4079eb
    int64_t v112 = *(int64_t *)v111; // 0x4079ef
    int64_t v113 = v49 + 1; // 0x4079f2
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x4073f9
        int64_t v115 = v114 + v105; // 0x4073ff
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
            // 0x407a28
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
                goto lab_0x4078e0_2;
            } else {
                goto lab_0x407559;
            }
        } else {
            goto lab_0x40740b;
        }
    } else {
        goto lab_0x407a03;
    }
  lab_0x40750b:;
    int64_t v116 = v80 == v20; // 0x407512
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x407440;
    } else {
        goto lab_0x40751e;
    }
  lab_0x40751e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x4072f0
    if (v102 != 0) {
        goto lab_0x407440;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40753a
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x407af5;
        } else {
            // 0x407548
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
            goto lab_0x407559;
        }
    }
  lab_0x407440:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x407457
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x4078e0_2;
    } else {
        // 0x40747d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x4074a5
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
        goto lab_0x407559;
    }
  lab_0x4086be:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x408c84
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x4078e0_2;
        } else {
            // 0x408c95
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x408caa
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x4086f2;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x4086e1
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x407af5;
        } else {
            // 0x4086ef
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x4086f2;
        }
    }
  lab_0x408ccf:
    // 0x408ccf
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x4078e0_2;
    } else {
        goto lab_0x4086be;
    }
  lab_0x407a7d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x407a7d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x407a81
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x407a85
    int64_t v123 = 0; // 0x407a8c
    int64_t v124 = v122; // 0x407a8c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x407a92
        int64_t v126 = v120; // 0x407a9a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x408a21
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x408a39
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x408a4b
            int64_t v131 = v128; // 0x408a54
            int64_t v132 = v130; // 0x408a54
            int64_t v133; // 0x4072f0
            int64_t v134; // 0x408a66
            if (v130 < v129) {
                // 0x408a56
                if (v121 == v128) {
                    // break -> 0x407870
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40785b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x407870
                        goto lab_0x407870;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x408a18
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x408a21
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x408a56
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x407870
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40785b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x407870
                            goto lab_0x407870;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x408a18
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x407aa4
            if (*(int32_t *)v135 != 5) {
                // 0x40801c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x407ab0
            int64_t v137 = v136; // 0x407ab0
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x407abd
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x407870:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x407870
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x407874
    int64_t v142; // 0x4072f0
    int64_t v143; // 0x4072f0
    int64_t v144; // 0x4072f0
    if (v140 == v141) {
        goto lab_0x407f20;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x407881
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x408a84
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x408a8d
            if (v141 == v146) {
                goto lab_0x407f3e;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x408ab3
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x408aba
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x408ad3
                int64_t v152 = v151; // 0x408adc
                int64_t v153 = v149; // 0x408adc
                int64_t v154; // 0x4072f0
                int64_t v155; // 0x408ae7
                if (v151 < v150) {
                    // 0x408ade
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x4078e0_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x408afa
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x4078e0_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x408aa0
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x408aa9
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x408ade
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x4078e0_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x408afa
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x4078e0_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x408aa0
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x4078ac;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x407893
            if (*(int32_t *)v156 != 5) {
                // 0x40801c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x4078a0
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x407f20;
            } else {
                goto lab_0x4078ac;
            }
        }
    }
  lab_0x407710:
    // 0x407710
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40771d
    int64_t v160 = 0; // 0x407725
    if (v159 != -1) {
        // 0x40772b
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40801c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40774e
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40775c
        if (*(int32_t *)v162 != 5) {
            // 0x40801c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40776f
        int64_t v164; // bp-8, 0x4072f0
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x4072f0
    uint64_t v165; // 0x407786
    if (v46 > 0xfffffffffffffffd) {
        // 0x4081b8
        v14 = v48;
        if (v47 == -1) {
            // 0x4077e4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x4078e0_2;
    } else {
        // 0x407790
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x4077e4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x407ec0
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x4078e0_2;
            } else {
                int64_t v167 = 2 * v47; // 0x407ec6
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x4077b2;
                } else {
                    goto lab_0x407ed2;
                }
            }
        } else {
            // 0x4077a2
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x4077b2;
            } else {
                goto lab_0x407ed2;
            }
        }
    }
  lab_0x4079b0:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x4081d9
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x4078e0_2;
        } else {
            // 0x4081f1
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x408202
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x4079e2;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x4079d1
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x407af5;
        } else {
            // 0x4079df
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x4079e2;
        }
    }
  lab_0x408292:
    // 0x408292
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x4078e0_2;
    } else {
        goto lab_0x4079b0;
    }
  lab_0x407f20:
    // 0x407f20
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x407f3e;
  lab_0x407ae8:
    // 0x407ae8
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x407710;
  lab_0x407af5:
    // 0x407af5
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x407b08;
  lab_0x407f3e:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x407f44
    v14 = v48;
    int64_t v170; // 0x4072f0
    int64_t v171; // 0x4072f0
    int64_t * v172; // 0x4072f0
    int64_t v173; // 0x4072f0
    int64_t v174; // bp-760, 0x4072f0
    uint64_t size5; // 0x407f48
    if (v169 == -1) {
        goto lab_0x4078e0_2;
    } else {
        // 0x407f59
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x407fb9;
        } else {
            // 0x407f65
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x4078e0_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x407f8d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x4078e0_2;
                } else {
                    goto lab_0x407fb9;
                }
            }
        }
    }
  lab_0x4078ac:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x407f3e;
    } else {
        // 0x4078b5
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x407f3e;
        } else {
            goto lab_0x4078e0_2;
        }
    }
  lab_0x4077b2:
    // 0x4077b2
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x408179
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x408194
            if (v48 == v20 && v46 != 0) {
                // 0x4081a2
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x4077e4
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x4077d3
        v14 = v48;
        if (mem11 != NULL) {
            // 0x4077e4
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x4078e0_2;
  lab_0x407ed2:
    // 0x407ed2
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x4078e0_2;
    } else {
        goto lab_0x4077b2;
    }
  lab_0x407fb9:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x4072f0
    int64_t v181; // 0x4072f0
    int64_t v182; // 0x4072f0
    int64_t v183; // 0x4072f0
    int64_t v184; // 0x4072f0
    int64_t v185; // 0x4072f0
    int64_t v186; // 0x4072f0
    int64_t v187; // 0x4072f0
    int64_t v188; // 0x4072f0
    int64_t v189; // 0x4072f0
    int64_t v190; // 0x4072f0
    int64_t v191; // 0x4072f0
    int64_t v192; // 0x4072f0
    int64_t v193; // 0x4072f0
    float80_t v194; // 0x4072f0
    float80_t v195; // 0x4072f0
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x408b32
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x408b40
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
            // 0x408c6d
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
        goto lab_0x408479;
    } else {
        // 0x407fc1
        int64_t v198; // 0x4072f0
        float80_t v199; // 0x4072f0
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x408781
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40878e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x4085ea
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x407fef
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x407ff8
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40801c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40801c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x408b66
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x408b66
                            v181 = v187 + 3;
                            goto lab_0x408ce1;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x408ce1;
                            } else {
                                goto lab_0x408ba2;
                            }
                        }
                    } else {
                        // 0x408873
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x408467;
                        } else {
                            int64_t v202 = v187 + 2; // 0x408881
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x408dca
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x4088c8
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x4088db
                                int64_t v207 = v176 & 0xffffffff; // 0x4088de
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x4088ec
                                int64_t v209 = v187 + 1; // 0x408909
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40891e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40892b
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x408479;
                        }
                    }
                } else {
                    // 0x408618
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x408618
                        v180 = v187 + 1;
                        goto lab_0x408bc7;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x408bc7;
                        } else {
                            goto lab_0x408638;
                        }
                    }
                }
            } else {
                // 0x408450
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x408467;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40899c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x4089ad
                    char v215 = *v213; // 0x4089b4
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x4089f0
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x4089fd
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x4089c5
                        v182 = v218;
                        int64_t v219; // 0x4089b7
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x408479;
                }
            }
        } else {
            float80_t v220; // 0x4072f0
            if (v220 != 0.0L) {
                // 0x40801c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40866b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40867a
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
                // 0x408953
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
            goto lab_0x408479;
        }
    }
  lab_0x408479:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40847c
    int64_t v229 = v228; // 0x408482
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x408484
        int64_t v232 = v231 + v224; // 0x408487
        int64_t v233 = v232 - v225; // 0x40848e
        if ((v230 & 2) != 0) {
            // 0x408933
            v229 = v233;
            int64_t v234 = v224; // 0x408936
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x408940
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x408940
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x4087a5
                int64_t v238 = v224; // 0x4087ab
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x4087b9
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x4087b0
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x4087c5
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x4087d8
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
                int64_t v243 = v224; // 0x4084b1
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x4084d1
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x4084c8
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x4084da
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x4084e8
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
        // 0x40801c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x408518
    int64_t dest_mem5 = v48; // 0x408525
    int64_t v250 = v248; // 0x408525
    int64_t v251 = v47; // 0x408525
    int64_t v252; // 0x4072f0
    if (v47 - v46 > v248) {
        goto lab_0x4085a0;
    } else {
        if (v249 < v46) {
            // 0x408772
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x4078e0_2;
            } else {
                goto lab_0x4085a0;
            }
        } else {
            // 0x408530
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x4085a0;
            } else {
                if (v47 != 0) {
                    // 0x408b08
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x4078e0_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x408b0e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40854e;
                        } else {
                            goto lab_0x408b1a;
                        }
                    }
                } else {
                    // 0x40853e
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40854e;
                    } else {
                        goto lab_0x408b1a;
                    }
                }
            }
        }
    }
  lab_0x4085a0:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x4085b1
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x4085cd
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x4079e7;
  lab_0x408467:
    // 0x408467
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x408479;
  lab_0x408bc7:;
    char * v257 = nl_langinfo(0x10000); // 0x408bfa
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x408c0b
    char v259 = *v257; // 0x408c12
    int64_t v260 = v176 & 0xffffffff; // 0x408c15
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x408c23
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x408c50
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x408c5d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x408638;
  lab_0x408638:
    // 0x408638
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
    goto lab_0x408479;
  lab_0x40854e:
    // 0x40854e
    if (v48 == 0 || v48 == v20) {
        // 0x4087eb
        int64_t size7; // 0x4072f0
        int64_t * mem12 = malloc((int32_t)size7); // 0x408802
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x4078e0_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40880e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x408839
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x4085a0;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40857d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x4078e0_2;
        } else {
            // 0x40858b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x4085a0;
        }
    }
  lab_0x408b1a:
    // 0x408b1a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x4078e0_2;
    } else {
        goto lab_0x40854e;
    }
  lab_0x408ce1:;
    int64_t v265 = v187 + 4; // 0x408ce1
    char v266 = *nl_langinfo(0x10000); // 0x408d2c
    int64_t v267 = v176 & 0xffffffff; // 0x408d2f
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x408d36
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x408d5d
        int64_t v270 = v265 + 1; // 0x408d65
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
    goto lab_0x408ba2;
  lab_0x408ba2:
    // 0x408ba2
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x408479;
}
// Address range: 0x408e10 - 0x408e1e
int64_t function_408e10(int64_t a1, int64_t a2) {
    // 0x408e10
    int64_t v1; // 0x408e10
    return function_408e20(a1, 0, 3, v1);
}
// Address range: 0x408e20 - 0x408f55
int64_t function_408e20(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x408f00
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x408e5c
    int64_t v2; // 0x408e20
    if (g46 < 0) {
        int64_t v3 = function_408e20(fd, 0, v1, a4); // 0x408ea4
        int64_t v4 = v3 & 0xffffffff; // 0x408ea9
        if ((int32_t)v3 < 0) {
            // 0x408e90
            return v4 & 0xffffffff;
        }
        // 0x408eaf
        v2 = v4;
        if (g46 != -1) {
            // 0x408e90
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x408e77
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x408e86
            g46 = 1;
            // 0x408e90
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_408e20(fd & 0xffffffff, 0, v1, a4); // 0x408f37
        int64_t v7 = v6 & 0xffffffff; // 0x408f3c
        if ((int32_t)v6 < 0) {
            // 0x408e90
            return v7 & 0xffffffff;
        }
        // 0x408f46
        g46 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x408ebf
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x408eca
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x408e90
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x408ee2
    close(fd2);
    // 0x408e90
    return 0xffffffff;
}
// Address range: 0x408f60 - 0x409179
int64_t function_408f60(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x408fc3
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x408f78
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x408f89
    g54 = v5;
    int64_t v6; // 0x408f60
    int64_t v7; // 0x408f60
    int64_t v8; // 0x408f60
    int64_t v9; // 0x408f60
    int64_t v10; // 0x408f60
    int64_t v11; // 0x408f60
    int64_t v12; // 0x408f60
    uint32_t v13; // 0x409080
    int64_t * v14; // 0x4090b0
    int64_t v15; // 0x4090b8
    uint32_t v16; // 0x409100
    uint32_t v17; // 0x4090d0
    int64_t * v18; // 0x409060
    int64_t v19; // 0x409060
    int64_t * v20; // 0x409070
    int64_t v21; // 0x409070
    int64_t * v22; // 0x409048
    int64_t v23; // 0x409048
    int64_t * v24; // 0x409030
    int64_t v25; // 0x409030
    int64_t * v26; // 0x409150
    uint32_t v27; // 0x409010
    int64_t v28; // 0x409150
    int64_t * v29; // 0x409140
    int64_t v30; // 0x409140
    uint32_t v31; // 0x408ff0
    int64_t * v32; // 0x409168
    int64_t v33; // 0x409168
    int64_t v34; // 0x409113
    uint32_t v35; // 0x408fd0
    int64_t v36; // 0x4090e7
    uint32_t v37; // 0x408f98
    int32_t * v38; // 0x409080
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x409010
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x409017
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x409060
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x409023
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x408fb6
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x408ff0
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x408ff7
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x409070
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x409003
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x408fb6
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x408fd0
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x408fd7
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x409048
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x408fe3
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x408fb6
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
            // 0x408f98
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x408fa3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x409030
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x408faf
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x408fb6
            break;
        }
        case 11: {
            // 0x409080
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x40908f
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x409150
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x40909c
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x408fb6
            break;
        }
        case 12: {
            // 0x4090b0
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x408fb6
            break;
        }
        case 15: {
            // 0x409100
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x409107
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x409140
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x409113
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x408fb6
            break;
        }
        case 16: {
            // 0x4090d0
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x4090db
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x409168
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x4090e7
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x408fb6
            break;
        }
        default: {
            // 0x408fc3
            return 0xffffffff;
        }
    }
    // 0x408fb6
    v3++;
    int64_t v39 = v4 + 32; // 0x408fc1
    while (v3 < v2) {
        // 0x408f80
        v4 = v39;
        v5 = *(int32_t *)v4;
        g54 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x409010
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x409017
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x409060
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x409023
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x408fb6
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x408ff0
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x408ff7
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x409070
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x409003
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x408fb6
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x408fd0
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x408fd7
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x409048
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x408fe3
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x408fb6
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
                // 0x408f98
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x408fa3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x409030
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x408faf
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x408fb6
                break;
            }
            case 11: {
                // 0x409080
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x40908f
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x409150
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x40909c
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x408fb6
                break;
            }
            case 12: {
                // 0x4090b0
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x408fb6
                break;
            }
            case 15: {
                // 0x409100
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x409107
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x409140
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x409113
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x408fb6
                break;
            }
            case 16: {
                // 0x4090d0
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x4090db
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x409168
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x4090e7
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x408fb6
                break;
            }
            default: {
                // 0x408fc3
                return 0xffffffff;
            }
        }
        // 0x408fb6
        v3++;
        v39 = v4 + 32;
    }
    // 0x408fc3
    return 0;
}
// Address range: 0x409180 - 0x409e89
int64_t function_409180(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x409182
    int64_t v4 = v1 + 16; // 0x409186
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x4091b9
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x4091ce
    *v6 = v4;
    char v7 = *(char *)a1; // 0x4091fb
    int32_t v8 = 0; // 0x409200
    int64_t v9 = 0; // 0x409200
    int64_t v10 = v3; // 0x409200
    int64_t v11 = a1; // 0x409200
    int64_t v12 = 0; // 0x409200
    char v13; // 0x409180
    int64_t v14; // 0x409180
    int64_t v15; // 0x409180
    int64_t v16; // 0x409180
    int64_t v17; // 0x409180
    int64_t v18; // 0x409180
    int64_t v19; // 0x409180
    int64_t v20; // 0x409180
    int64_t v21; // 0x409180
    int64_t v22; // 0x409180
    int64_t v23; // 0x409180
    int64_t v24; // 0x409180
    int64_t v25; // 0x409180
    int64_t v26; // 0x409180
    int64_t v27; // 0x409180
    int64_t v28; // 0x409180
    int64_t v29; // 0x409180
    int64_t v30; // 0x409180
    int32_t v31; // 0x409180
    int64_t v32; // 0x409180
    int64_t v33; // 0x4091f0
    int64_t v34; // 0x409240
    int64_t * v35; // 0x409263
    int64_t v36; // 0x4092c6
    if (v7 != 0) {
        // 0x4091f0
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x409180
        int64_t v38 = 7; // 0x409180
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x409180
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x4091f0:
            // 0x4091f0
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x409233
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x409248
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x409284
                int64_t v43 = v42; // 0x409284
                int64_t v44 = v43; // 0x40928d
                int64_t v45 = v33; // 0x40928d
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x409620
                    char v47 = *(char *)v46; // 0x409624
                    int64_t v48 = v46; // 0x40962d
                    while (v47 < 58) {
                        // 0x409620
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40962f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x409cc5
                        char v52 = *(char *)v51; // 0x409cc5
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x409cc9
                        int64_t v54 = v33; // 0x409cdd
                        int64_t v55 = v51; // 0x409cdd
                        char v56 = v52; // 0x409cdd
                        int64_t v57 = v53; // 0x409cdd
                        bool v58 = v52 < 58; // 0x409cdd
                        bool v59 = v52 < 58; // 0x409cdd
                        char v60 = v52; // 0x409cdd
                        int64_t v61 = v51; // 0x409cdd
                        int64_t v62; // 0x409cf2
                        int64_t v63; // 0x409cc5
                        char v64; // 0x409cc5
                        int64_t v65; // 0x409cc9
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x409948_9;
                            }
                            // 0x409cc3
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
                                // 0x409cdf
                                if (v64 >= 58) {
                                    goto lab_0x409948_9;
                                }
                                // 0x409cc3
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
                        int64_t v67 = v55; // 0x409c98
                        while (v58) {
                            // 0x409c9e
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
                                    goto lab_0x409948_9;
                                }
                                // 0x409cc3
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
                                    // 0x409cdf
                                    if (v64 >= 58) {
                                        goto lab_0x409948_9;
                                    }
                                    // 0x409cc3
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
                            // 0x409c94
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x409d9d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x409948_9;
                        }
                        int64_t v68 = v54 + 2; // 0x409dae
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x409180
                v36 = v45;
                char v70; // 0x409180
                while (true) {
                    // 0x4092c6
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x4092e0
                                *v41 = *v41 | 2;
                                // break -> 0x4092c0
                                break;
                            }
                            case 43: {
                                // 0x4092f0
                                *v41 = *v41 | 4;
                                // break -> 0x4092c0
                                break;
                            }
                            case 32: {
                                // 0x409300
                                *v41 = *v41 | 8;
                                // break -> 0x4092c0
                                break;
                            }
                            case 35: {
                                // 0x409310
                                *v41 = *v41 | 16;
                                // break -> 0x4092c0
                                break;
                            }
                            case 48: {
                                // 0x409320
                                *v41 = *v41 | 32;
                                // break -> 0x4092c0
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x409328
                                    break;
                                }
                                // 0x4092b6
                                *v41 = *v41 | 64;
                                // break -> 0x4092c0
                                break;
                            }
                        }
                    } else {
                        // 0x4092cf
                        *v41 = *v41 | 1;
                    }
                    // 0x4092c0
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x409180
                int64_t * v72; // 0x409251
                int64_t * v73; // 0x40925a
                if (v70 == 42) {
                    // 0x40939d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x4093bd
                    int64_t v75 = v74; // 0x4093bd
                    int64_t v76 = v75 + 0xffffffd0; // 0x4093c1
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x4093c7
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40979d
                        char v80 = *(char *)v79; // 0x4097a1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40979d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x4097ad
                        v26 = v79;
                        int64_t v81 = v75; // 0x4097b1
                        int64_t v82 = v36; // 0x4097b1
                        int64_t v83 = 0; // 0x4097b1
                        if (v80 != 36) {
                            goto lab_0x4093cd;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x4097e2
                            int64_t v89 = v85; // 0x4097e2
                            int64_t v90 = v87; // 0x4097e2
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x4097e7
                            int64_t v95 = v92 + 1; // 0x4097ea
                            char v96 = *(char *)v95; // 0x4097ea
                            int64_t v97 = v96; // 0x4097ea
                            while (v94 < v91) {
                                // 0x409801
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x409948_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x4097bb
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x4097c4
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
                                    // 0x409801
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x409948_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x4097bb
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x409e3b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x409948_9;
                            }
                            // 0x409e49
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x4093dc;
                        }
                    } else {
                        goto lab_0x4093cd;
                    }
                } else {
                    // 0x40932d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x409180
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x409a4b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x409a50
                        int64_t v102 = v71; // 0x409a59
                        char * v103 = v100; // 0x409a59
                        int64_t v104 = v36; // 0x409a59
                        int64_t v105 = v71; // 0x409a59
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x409a63
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x409a63
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x409a63
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x409a72
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x409a95
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x409338;
                }
            } else {
                goto lab_0x4091f8;
            }
        }
    }
  lab_0x409202:
    // 0x409202
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x409224
    return 0;
  lab_0x409948_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x409953
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x409965
    if (v3 != v115) {
        // 0x409970
        free((int64_t *)v115);
    }
    // 0x409975
    *__errno_location() = 22;
    // 0x409224
    return 0xffffffff;
  lab_0x409b20_5:;
    // 0x409b20
    int64_t v116; // 0x409180
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x409b25
    int64_t v119; // 0x409180
    if (v4 == v117) {
        goto lab_0x409b39_3;
    } else {
        // 0x409b27
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x409b39_3;
    }
  lab_0x409b39_3:;
    int64_t v120 = *v5; // 0x409b39
    int32_t * v121; // 0x409b49
    if (v3 == v120) {
        // 0x409b49
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x409b44
    free((int64_t *)v120);
    // 0x409b49
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x4091f8:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x4091fb
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
        // break -> 0x409202
        goto lab_0x409202;
    }
    goto lab_0x4091f0;
  lab_0x4093cd:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x4093cd
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x409773
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x409948_9;
        }
        // 0x40978b
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x4093dc;
  lab_0x409338:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40933b
    int64_t v147 = v339; // 0x40933b
    int64_t v145 = v338; // 0x40933b
    int64_t v143 = v337; // 0x40933b
    int64_t v186; // 0x409180
    int64_t v190; // 0x409180
    int64_t v189; // 0x409180
    int64_t v188; // 0x409180
    int64_t v187; // 0x409180
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x409440;
    } else {
        goto lab_0x409341;
    }
  lab_0x4093dc:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x4093dc
    int64_t v132 = v128; // 0x4093e3
    int64_t v133 = v16; // 0x4093e3
    int64_t v134 = v131; // 0x4093e3
    int64_t v135; // 0x409180
    int64_t v136; // 0x409180
    int64_t v137; // 0x409180
    int64_t v138; // 0x40968f
    if (v16 > v127) {
        goto lab_0x4093ec;
    } else {
        uint64_t v139 = 2 * v16; // 0x409685
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x409b20_5;
        }
        int64_t size = 32 * v138; // 0x4096ae
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x409c0c
            if (mem == NULL) {
                goto lab_0x409b39_3;
            }
            // 0x409c2e
            v135 = (int64_t)mem;
            goto lab_0x409c39;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x4096cf
            int64_t v140 = *v6; // 0x4096d4
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x409b20_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x4096cf
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x409c39;
            } else {
                goto lab_0x40970d;
            }
        }
    }
  lab_0x409341:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x409348
    int64_t v151 = v146; // 0x409348
    int64_t v152 = v144; // 0x409348
    uint64_t v153; // 0x409180
    int64_t v154; // 0x409180
    int64_t v155; // 0x409387
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x40938b
        int64_t v158; // 0x409180
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x4094f0
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x409383
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x4094f8
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x409380
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x409383
                    break;
                }
            }
        } else {
            // 0x409390
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x409383
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x4094f8
    int64_t v162 = v161 % 256; // 0x409504
    g55 = v162;
    int64_t v163 = 17; // 0x409507
    int64_t v164 = v154; // 0x409507
    int64_t v165 = v154; // 0x409507
    switch ((char)v161) {
        case 0: {
            goto lab_0x409571;
        }
        case 28: {
            goto lab_0x4098c2;
        }
        case 30: {
            // 0x4098ee
            v163 = 14;
            v164 = 99;
            goto lab_0x409519;
        }
        case 32: {
            goto lab_0x4098c2;
        }
        case 33: {
            goto lab_0x4098c2;
        }
        case 34: {
            goto lab_0x4098c2;
        }
        case 46: {
            // 0x4098df
            v163 = 16;
            v164 = 115;
            goto lab_0x409519;
        }
        case 51: {
            goto lab_0x4098fd;
        }
        case 60: {
            goto lab_0x4098c2;
        }
        case 62: {
            int32_t v166 = v153; // 0x409819
            int32_t v167 = v166 - 7; // 0x409819
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40981f
            v163 = v168;
            v164 = v154;
            goto lab_0x409519;
        }
        case 63: {
            goto lab_0x409870;
        }
        case 64: {
            goto lab_0x4098c2;
        }
        case 65: {
            goto lab_0x4098c2;
        }
        case 66: {
            goto lab_0x4098c2;
        }
        case 68: {
            goto lab_0x409870;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40982f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x409835
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40983d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40984b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40985f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x409519;
        }
        case 74: {
            goto lab_0x4098fd;
        }
        case 75: {
            goto lab_0x409519;
        }
        case 78: {
            int32_t v171 = v153; // 0x409510
            int32_t v172 = v171 - 7; // 0x409510
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x409516
            v163 = v173;
            v164 = v154;
            goto lab_0x409519;
        }
        case 80: {
            goto lab_0x4098fd;
        }
        case 83: {
            goto lab_0x4098fd;
        }
        default: {
            goto lab_0x409948_9;
        }
    }
  lab_0x4093ec:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x409403
        int64_t v178 = v176; // 0x409180
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x4093f8
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x4093f8
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x409411
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40941d
    int32_t v182 = *v181; // 0x40941d
    if (v182 != 0) {
        // 0x409a9e
        if (v182 != 5) {
            goto lab_0x409948_9;
        }
        unsigned char v183 = *(char *)v129; // 0x409aa7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x409338;
    } else {
        // 0x409427
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40942d
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
            goto lab_0x409341;
        } else {
            goto lab_0x409440;
        }
    }
  lab_0x409440:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x409440
    char v197 = *v196; // 0x409440
    int64_t * v198; // 0x409268
    *v198 = v192;
    int64_t v199; // 0x409180
    int64_t v200; // 0x409180
    int64_t v201; // 0x409180
    int64_t v202; // 0x409180
    int64_t v203; // 0x409180
    int64_t * v204; // 0x409271
    int64_t * v205; // 0x40927a
    int64_t v206; // 0x409459
    if (v197 != 42) {
        char v207 = *v196; // 0x409640
        int64_t v208 = v193; // 0x409649
        char * v209; // 0x409180
        int64_t v210; // 0x409180
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x409650
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x409654
            v208 = v212;
            while (v214 < 58) {
                // 0x409650
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40965e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x409640
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x409671
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x409341;
    } else {
        // 0x40944f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40946f
        int64_t v219 = v218; // 0x40946f
        int64_t v220 = v219 + 0xffffffd0; // 0x409473
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x409479
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x409d24
            char v224 = *(char *)v223; // 0x409d28
            v221 = v223;
            while (v224 < 58) {
                // 0x409d24
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x409d34
            v201 = v223;
            int64_t v225 = v219; // 0x409d38
            int64_t v226 = v206; // 0x409d38
            int64_t v227 = 0; // 0x409d38
            if (v224 != 36) {
                goto lab_0x40947f;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x409d69
                int64_t v233 = v229; // 0x409d69
                int64_t v234 = v231; // 0x409d69
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x409d6e
                int64_t v239 = v236 + 1; // 0x409d75
                char v240 = *(char *)v239; // 0x409d79
                int64_t v241 = v240; // 0x409d79
                while (v238 < v235) {
                    // 0x409d87
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x409948_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x409d42
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x409d4b
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
                        // 0x409d87
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x409948_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x409d42
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x409e57
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x409948_9;
                }
                // 0x409e65
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x40948e;
            }
        } else {
            goto lab_0x40947f;
        }
    }
  lab_0x409571:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x409576
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x40957e
    *a2 = v245;
    int64_t v246; // 0x409180
    int64_t v247; // 0x409180
    int64_t dest_mem; // 0x409180
    int64_t v248; // 0x409180
    int64_t v249; // 0x409e73
    if (v246 > v245) {
        // 0x40958a
        goto lab_0x4091f8;
    } else {
        if (v246 < 0) {
            // 0x409e73
            v249 = *v6;
            v116 = v249;
            goto lab_0x409b20_5;
        }
        int64_t v250 = 2 * v246; // 0x4095a6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x409e73
            v249 = *v6;
            v116 = v249;
            goto lab_0x409b20_5;
        }
        int64_t v251 = *v5; // 0x4095b7
        int64_t size2 = 176 * v246; // 0x4095c9
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x409719
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x409c7c
                v118 = v252;
                if (v4 == v252) {
                    // 0x409b49
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x409b27
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x409b39_3;
            }
            goto lab_0x409734;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x4095db
            if (mem4 == NULL) {
                // 0x409e73
                v249 = *v6;
                v116 = v249;
                goto lab_0x409b20_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x4095db
            int64_t v254 = *v5; // 0x4095fd
            int64_t v255 = *a2; // 0x409601
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x409734;
            } else {
                goto lab_0x40960f;
            }
        }
    }
  lab_0x4098c2:
    // 0x4098c2
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x4098d7
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x409519;
  lab_0x4098fd:;
    uint32_t v335 = (int32_t)v153; // 0x409905
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40990b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x409913
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x409921
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40992e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x409519;
  lab_0x409870:;
    uint32_t v336 = (int32_t)v153; // 0x409878
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x40987e
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x409886
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x409894
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4098a1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x409519;
  lab_0x409519:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x409180
    int64_t v260; // 0x409180
    int64_t * v261; // 0x40927f
    if (v259 == -1) {
        // 0x409a24
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x409948_9;
        }
        // 0x409a3c
        v260 = v148;
    } else {
        // 0x409523
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x409528
    int64_t v264 = v258; // 0x40952f
    int64_t v265 = v162; // 0x40952f
    int64_t v266 = v263; // 0x40952f
    int64_t v267; // 0x409180
    int64_t v268; // 0x409180
    int64_t v269; // 0x409180
    int64_t v270; // 0x409180
    int64_t v271; // 0x409180
    if (v142 > v262) {
        goto lab_0x409535;
    } else {
        uint64_t v272 = 2 * v142; // 0x409998
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x4099a2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x409b20_5;
        }
        int64_t size3 = 32 * v273; // 0x4099c1
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x4099d4
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x409ab9
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x409b39_3;
            }
            goto lab_0x409ad6;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x4099e1
            if (mem6 == NULL) {
                // 0x409e73
                v249 = *v6;
                v116 = v249;
                goto lab_0x409b20_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x4099e1
            int64_t v276 = v274 & 0xffffffff; // 0x4099e6
            int64_t v277 = *v6; // 0x409a11
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x409ad6;
            } else {
                goto lab_0x409a1b;
            }
        }
    }
  lab_0x409535:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40954b
        int64_t v282 = v279; // 0x409180
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x409540
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x409540
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x409559
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x409565
    int32_t v286 = *v285; // 0x409565
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40998a
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x409948_9;
        }
    } else {
        // 0x40956f
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x409571;
  lab_0x409c39:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x409c39
    int64_t * v290; // 0x409180
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40970d;
  lab_0x40970d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x4093ec;
  lab_0x40947f:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x40947f
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x409cfa
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x409948_9;
        }
        // 0x409d12
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x40948e;
  lab_0x40948e:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x40948e
    int64_t v300 = v296; // 0x409495
    int64_t v301 = v191; // 0x409495
    int64_t v302 = v299; // 0x409495
    int64_t v303; // 0x409180
    int64_t v304; // 0x409180
    int64_t v305; // 0x409180
    int64_t v306; // 0x409b72
    if (v191 > v295) {
        goto lab_0x40949e;
    } else {
        uint64_t v307 = 2 * v191; // 0x409b68
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x409b20_5;
        }
        int64_t size4 = 32 * v306; // 0x409b8d
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x409dbe
            if (mem7 == NULL) {
                goto lab_0x409b39_3;
            }
            // 0x409de0
            v304 = (int64_t)mem7;
            goto lab_0x409deb;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x409bae
            int64_t v308 = *v6; // 0x409bb3
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x409b20_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x409bae
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x409deb;
            } else {
                goto lab_0x409bec;
            }
        }
    }
  lab_0x409734:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x409180
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40960f;
  lab_0x40960f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x4091f8;
  lab_0x409ad6:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x409aec
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x409a1b;
  lab_0x409a1b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x409535;
  lab_0x40949e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x4094b3
        int64_t v324 = v322; // 0x409180
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x4094a8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x4094a8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x4094c1
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x4094ce
    int32_t v328 = *v327; // 0x4094ce
    if (v328 != 0) {
        // 0x409bf5
        if (v328 != 5) {
            goto lab_0x409948_9;
        }
        unsigned char v329 = *(char *)v297; // 0x409bfe
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x4094d8
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x4094e1
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x409341;
  lab_0x409deb:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x409deb
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x409bec;
  lab_0x409bec:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x40949e;
}
// Address range: 0x409e90 - 0x409eed
int64_t function_409e90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409e90
    return function_401750();
}
// Address range: 0x409ef0 - 0x409ef1
int64_t function_409ef0(void) {
    // 0x409ef0
    int64_t result; // 0x409ef0
    return result;
}
// Address range: 0x409f00 - 0x409f18
int64_t function_409f00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409f00
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x409f18 - 0x409f38
int64_t function_409f18(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x409f22
    while (*(int64_t *)v1 != -1) {
        // 0x409f23
        v1 -= 8;
    }
    // 0x409f34
    return result;
}
