// Address range: 0x401670 - 0x401675
int64_t function_401670(void) {
    // 0x401670
    abort();
    // UNREACHABLE
}
// Address range: 0x401675 - 0x40167a
int64_t function_401675(void) {
    // 0x401675
    abort();
    // UNREACHABLE
}
// Address range: 0x40167a - 0x40167f
int64_t function_40167a(void) {
    // 0x40167a
    abort();
    // UNREACHABLE
}
// Address range: 0x40167f - 0x401684
int64_t function_40167f(void) {
    // 0x40167f
    abort();
    // UNREACHABLE
}
// Address range: 0x401684 - 0x401689
int64_t function_401684(void) {
    // 0x401684
    abort();
    // UNREACHABLE
}
// Address range: 0x401689 - 0x40168e
int64_t function_401689(void) {
    // 0x401689
    abort();
    // UNREACHABLE
}
// Address range: 0x401690 - 0x401950
int64_t function_401690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x40169c
    function_4023a0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_405e20(0x401db0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2; // 0x401690
    while (true) {
        // 0x4016e0
        v2 = 0;
        while (true) {
          lab_0x4016e0:;
            uint32_t v3 = (int32_t)function_405560(v1, a2, "m:Z", &g2, 0, a6);
            switch (v3) {
                case -1: {
                    goto lab_0x401795;
                }
                case -130: {
                    // 0x4018db
                    function_401a30(0);
                    // UNREACHABLE
                }
                default: {
                    if (v3 <= 0xffffff7e) {
                        if (v3 == -131) {
                            // 0x40174b
                            function_404440((int64_t)g29, "mkfifo", "GNU coreutils", (int64_t)g17, "David MacKenzie", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401901;
                    }
                    if (v3 != 90) {
                        // break -> 0x401780
                        break;
                    }
                    // 0x401712
                    if (g46 != 0) {
                        // 0x40171c
                        error(0, (int32_t)"warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel" ^ (int32_t)"warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", dcgettext(NULL, "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", 5));
                    }
                    goto lab_0x4016e0;
                }
            }
        }
    }
  lab_0x401795:
    // 0x401795
    if (*(int32_t *)0x60923c == (int32_t)a1) {
        // 0x4018e2
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
      lab_0x401901:
        // 0x401901
        function_401a30(1);
        // UNREACHABLE
    }
    int64_t v4 = 438; // 0x4017a4
    if (v2 != 0) {
        int64_t v5 = function_401e50(v2); // 0x4017ad
        char * format; // 0x401939
        if (v5 == 0) {
            // 0x40192d
            format = dcgettext(NULL, "invalid mode", 5);
            error(1, (int32_t)"invalid mode" ^ (int32_t)"invalid mode", format);
            return &g49;
        }
        uint32_t cmask = umask(0); // 0x4017c0
        umask(cmask);
        int64_t v6 = function_402220(438, 0, (int64_t)cmask, v5, 0); // 0x4017df
        free((int64_t *)v5);
        v4 = v6 & 0xffffffff;
        if ((v6 & 0xfffffe00) != 0) {
            // 0x40190b
            error(1, (int32_t)"mode must specify only file permission bits" ^ (int32_t)"mode must specify only file permission bits", dcgettext(NULL, "mode must specify only file permission bits", 5));
            // 0x40192d
            format = dcgettext(NULL, "invalid mode", 5);
            error(1, (int32_t)"invalid mode" ^ (int32_t)"invalid mode", format);
            return &g49;
        }
    }
    int64_t v7 = g26; // 0x4017fc
    if (v1 <= v7) {
        // 0x4018a8
        return 0;
    }
    int32_t mode = v4; // 0x401843
    int64_t v8 = v7; // 0x401690
    int64_t v9 = 0; // 0x401690
    int64_t v10; // 0x401690
    int64_t v11; // 0x401690
    while (true) {
      lab_0x401841:;
        int64_t pathname = *(int64_t *)((0x100000000 * v8 >> 29) + a2); // 0x401846
        if (mkfifo((char *)pathname, mode) == 0) {
            int64_t v12 = v9;
            v10 = v12;
            if (v2 == 0) {
                goto lab_0x40182e;
            } else {
                int64_t path = *(int64_t *)(8 * (int64_t)g26 + a2); // 0x40181d
                v10 = v12;
                if (chmod((char *)path, mode) != 0) {
                    int32_t v13 = g26; // 0x4018b7
                    int64_t v14 = *(int64_t *)(8 * (int64_t)v13 + a2); // 0x4018c3
                    function_403d70(4, v14);
                    v11 = (int64_t)"cannot set permissions of %s";
                    goto lab_0x401875;
                } else {
                    goto lab_0x40182e;
                }
            }
        } else {
            // 0x401853
            function_403d70(4, *(int64_t *)(8 * (int64_t)g26 + a2));
            v11 = (int64_t)"cannot create fifo %s";
            goto lab_0x401875;
        }
    }
  lab_0x4018a8:;
    // 0x4018a8
    int64_t v15; // 0x401690
    return v15 & 0xffffffff;
  lab_0x40182e:
    // 0x40182e
    g26 = &g27;
    v8 = &g27;
    v9 = v10;
    v15 = v10;
    if (v1 <= (int64_t)&g27) {
        // break -> 0x4018a8
        goto lab_0x4018a8;
    }
    goto lab_0x401841;
  lab_0x401875:
    // 0x401875
    error(0, *__errno_location(), dcgettext(NULL, (char *)v11, 5));
    v10 = 1;
    goto lab_0x40182e;
}
// Address range: 0x401950 - 0x40197b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401950
    int64_t v1; // 0x401950
    __libc_start_main(0x401690, (int32_t)a4, (char **)&v1, (void (*)())0x405db0, (void (*)())0x405e10, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40197b - 0x40199a
int64_t function_40197b(void) {
    // 0x40197b
    return &g28;
}
// Address range: 0x40199a - 0x4019d1
int64_t function_40199a(void) {
    // 0x40199a
    return 0;
}
// Address range: 0x4019d1 - 0x401a28
int64_t function_4019d1(void) {
    // 0x4019d1
    if (g32 != 0) {
        // 0x401a27
        int64_t result; // 0x4019d1
        return result;
    }
    int64_t v1 = g33; // 0x401a04
    int64_t result2; // 0x401a16
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401a16
        result2 = function_40197b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401a06
        v1++;
    }
    // 0x4019fa
    g33 = v1;
    // 0x401a16
    result2 = function_40197b();
    g32 = 1;
    return result2;
}
// Address range: 0x401a28 - 0x401a2d
int64_t function_401a28(void) {
    // 0x401a28
    return function_40199a();
}
// Address range: 0x401a30 - 0x401d8d
int64_t function_401a30(int32_t status) {
    // 0x401a30
    if (status != 0) {
        // 0x401a4a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401a6f
        exit(status);
        // UNREACHABLE
    }
    // 0x401a76
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... NAME...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Create named pipes (FIFOs) with the given NAMEs.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -Z                   set the SELinux security context to default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x401b66
    bool v2; // 0x401a30
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401bf0
    int64_t v6 = *(int64_t *)v5; // 0x401bf4
    int64_t v7 = 7; // 0x401bfa
    while (v6 != 0) {
        int64_t v8 = (int64_t)"mkfifo";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401c06
        char v11 = *(char *)v9; // 0x401c06
        char v12 = v11; // 0x401c06
        bool v13 = false; // 0x401c06
        while (v10 == v11) {
            // 0x401bfc
            v7--;
            int64_t v14 = v9 + v3; // 0x401c06
            int64_t v15 = v8 + v3; // 0x401c06
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
            // break -> 0x401c12
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x401c12
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401d24;
        } else {
            // 0x401d0e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401d63
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401c74;
            } else {
                goto lab_0x401d24;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401c74;
        } else {
            // 0x401c5a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401d63
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401c74;
            } else {
                goto lab_0x401c74;
            }
        }
    }
  lab_0x401d24:
    // 0x401d24
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401cb4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401a6f
    exit(status);
    // UNREACHABLE
  lab_0x401c74:
    // 0x401c74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401cb4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401a6f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401d90 - 0x401d98
int64_t function_401d90(int64_t a1) {
    // 0x401d90
    g35 = a1;
    int64_t result; // 0x401d90
    return result;
}
// Address range: 0x401da0 - 0x401da8
int64_t function_401da0(int64_t a1) {
    // 0x401da0
    g34 = a1;
    int64_t result; // 0x401da0
    return result;
}
// Address range: 0x401db0 - 0x401e4e
int64_t function_401db0(void) {
    // 0x401db0
    int32_t * err_num; // 0x401dc6
    if ((int32_t)function_405660((int64_t)g29) == 0) {
        goto lab_0x401ddc;
    } else {
        // 0x401dc6
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x401df3;
        } else {
            // 0x401dd7
            if (*err_num != 32) {
                goto lab_0x401df3;
            } else {
                goto lab_0x401ddc;
            }
        }
    }
  lab_0x401ddc:;
    int64_t result = function_405660((int64_t)g31); // 0x401de3
    if ((int32_t)result == 0) {
        // 0x401dec
        return result;
    }
    // 0x401e2e
    _exit(g18);
    // UNREACHABLE
  lab_0x401df3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401dff
    if (g35 == 0) {
        // 0x401e39
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401e13
        error(0, *err_num, "%s: %s", (char *)function_403e10((int64_t)g35), v1);
    }
    // 0x401e2e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401e50 - 0x4021b1
int64_t function_401e50(int64_t a1) {
    // 0x401e50
    int64_t v1; // 0x401e50
    char v2 = v1;
    int64_t v3 = 0x100000000000000 * v1 >> 56; // 0x401e5c
    int64_t v4 = a1; // 0x401e64
    if ((v2 & -8) == 48) {
        int64_t v5 = 0xffffffd0 + v3; // 0x401f26
        uint32_t v6 = (int32_t)v5;
        while (v6 < 0x1000) {
            // 0x401f18
            v4++;
            char v7 = *(char *)v4; // 0x401f18
            if ((v7 & -8) != 48) {
                // 0x402120
                if (v7 == 0) {
                    int64_t v8 = v4 - a1; // 0x40212a
                    int32_t v9 = v8 < 5 == (4 - v8 & v8) < 0 ? 4095 : v6 & 3072 | 1023; // 0x402149
                    int64_t result = function_404580(32); // 0x40214c
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
      lab_0x401f05:
        // 0x401f05
        return 0;
    }
    int64_t v10 = 1; // 0x401e71
    int64_t v11 = a1; // 0x401e71
    int64_t v12; // 0x401e50
    if (v2 == 0) {
        // 0x402178
        v12 = 16;
    } else {
        int64_t v13 = v3;
        v11++;
        unsigned char v14 = *(char *)v11; // 0x401e96
        v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        while (v14 != 0) {
            // 0x401e80
            v13 = v14;
            v11++;
            v14 = *(char *)v11;
            v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        }
        int64_t v15 = 16 * v10; // 0x401ead
        if (v15 < 0) {
            // 0x4021ac
            function_4047d0(v15);
            // UNREACHABLE
        }
        // 0x401eba
        v12 = v15;
        if (v10 >= 0x1000000000000000) {
            // 0x4021ac
            function_4047d0(v15);
            // UNREACHABLE
        }
    }
    int64_t v16 = function_404580(v12); // 0x401ec3
    int64_t v17; // 0x401e50
    int64_t v18; // 0x401e50
    int64_t v19; // 0x401e50
    int64_t v20; // 0x401e50
    int64_t v21; // 0x401e50
    int64_t v22; // 0x401e50
    int64_t v23; // 0x401e50
    int64_t v24; // 0x401e50
    int64_t v25; // 0x401e50
    int64_t v26; // 0x401e50
    int64_t v27; // 0x401e50
    int64_t v28; // 0x401e50
    int64_t v29; // 0x401e50
    int64_t v30; // 0x401e50
    int64_t v31; // 0x401e50
    int64_t v32; // 0x401e50
    int64_t v33; // 0x401fb3
    int64_t v34; // 0x401fb3
    char v35; // 0x401e50
    while (true) {
        int64_t v36 = 0;
        v32 = 0;
        v18 = 0;
        v26 = a1;
        unsigned char v37; // 0x401ecd
        while (true) {
          lab_0x401ecd:
            // 0x401ecd
            v27 = v26;
            v37 = *(char *)v27;
            if (v37 == 97) {
                // 0x4020e0
                v32 = 4095;
                v19 = 4095;
                goto lab_0x4020e5;
            } else {
                if (v37 <= 97) {
                    // break -> 0x401f40
                    break;
                }
                int64_t v38 = v18; // 0x402110
                switch (v37) {
                    case 111: {
                        int64_t v39 = v38 & 0xfffffdf8 | 519; // 0x402110
                        v32 = v39;
                        v19 = v39;
                        goto lab_0x4020e5;
                    }
                    case 117: {
                        int64_t v40 = v38 & 0xfffff63f | 2496; // 0x402100
                        v32 = v40;
                        v19 = v40;
                        goto lab_0x4020e5;
                    }
                    case 103: {
                        int64_t v41 = v38 & 0xfffffbc7 | 1080; // 0x4020f0
                        v32 = v41;
                        v19 = v41;
                        goto lab_0x4020e5;
                    }
                    default: {
                        goto lab_0x401efb_3;
                    }
                }
            }
        }
        switch (v37) {
            default: {
                if (v37 != 43) {
                    // break -> 0x401efb
                    break;
                }
            }
            case 45: {
            }
            case 61: {
                // 0x401f52
                v29 = v27;
                v24 = v37;
                v20 = 16 * v36 + v16;
                v22 = v36;
                // break -> 0x401fb3
                break;
            }
        }
        while (true) {
          lab_0x401fb3:
            // 0x401fb3
            v21 = v20;
            v25 = v24;
            int64_t v42 = v29;
            v33 = v42 + 1;
            char v43 = *(char *)v33; // 0x401fb3
            if (v43 == 103) {
                // 0x4020d0
                v17 = v42 + 2;
                v30 = 56;
                goto lab_0x401f6e;
            } else {
                // 0x401fc4
                v34 = v43;
                if (v43 > 103) {
                    int64_t v44 = v42 + 2;
                    v17 = v44;
                    v30 = 7;
                    if (v43 != 111) {
                        // 0x401f60
                        v17 = v44;
                        v30 = 448;
                        if (v43 != 117) {
                            goto lab_0x402050;
                        } else {
                            goto lab_0x401f6e;
                        }
                    } else {
                        goto lab_0x401f6e;
                    }
                } else {
                    int64_t v45 = v34; // 0x401fe6
                    int64_t v46 = v33; // 0x401fe6
                    if ((v43 & -8) == 48) {
                        int64_t v47 = 0xffffffd0 + v45; // 0x401fea
                        uint32_t v48 = (int32_t)v47;
                        if (v48 >= 0x1000) {
                            // break (via goto) -> 0x401efb
                            goto lab_0x401efb_3;
                        }
                        int64_t v49 = v46 + 1; // 0x401fee
                        char v50 = *(char *)v49; // 0x401ffe
                        int64_t v51 = v50; // 0x401ffe
                        int64_t v52 = v47 & 0xffffffff; // 0x402009
                        v46 = v49;
                        while ((v50 & -8) == 48) {
                            // 0x401fea
                            v47 = v51 + 0xffffffd0 + 8 * v52;
                            v48 = (int32_t)v47;
                            if (v48 >= 0x1000) {
                                // break (via goto) -> 0x401efb
                                goto lab_0x401efb_3;
                            }
                            // 0x401ffe
                            v49 = v46 + 1;
                            v50 = *(char *)v49;
                            v51 = v50;
                            v52 = v47 & 0xffffffff;
                            v46 = v49;
                        }
                        // 0x40200b
                        if ((int32_t)v32 != 0) {
                            // break (via goto) -> 0x401efb
                            goto lab_0x401efb_3;
                        }
                        if (v50 != 0 == (v50 != 44)) {
                            // break (via goto) -> 0x401efb
                            goto lab_0x401efb_3;
                        }
                        // 0x402020
                        *(char *)v21 = (char)v25;
                        v32 = 4095;
                        *(int32_t *)(v21 + 8) = v48;
                        *(char *)(v21 + 1) = 1;
                        *(int32_t *)(v21 + 4) = 4095;
                        v31 = 4095;
                        v28 = v49;
                        v23 = v51 & 0xffffffff;
                        goto lab_0x401f8f;
                    } else {
                        goto lab_0x402050;
                    }
                }
            }
        }
      lab_0x402182:
        // 0x402182
        if (v35 != 44) {
            if (v35 != 0) {
                goto lab_0x401efb_3;
            } else {
                // 0x40219d
                int64_t v53; // 0x401e50
                *(char *)(v16 + 1 + 16 * v53) = 0;
                return 0;
            }
        }
    }
  lab_0x401efb_3:
    // 0x401efb
    free((int64_t *)v16);
    // 0x401f05
    return (int32_t)&g49 ^ (int32_t)&g49;
  lab_0x402078:;
    // 0x402078
    int64_t v54; // 0x401e50
    int64_t v55 = v54 + 1; // 0x402078
    int64_t v56 = (int64_t)*(char *)v55; // 0x40207c
    int64_t v57 = v56 + 0xffffffa8; // 0x402080
    int64_t v58; // 0x401e50
    int64_t v59 = v58; // 0x402087
    int64_t v60 = v56; // 0x402087
    int64_t v61; // 0x401e50
    int64_t v62 = v61; // 0x402087
    int64_t v63 = v57; // 0x402087
    int64_t v64 = v55; // 0x402087
    if ((char)v57 >= 33) {
        // break -> 0x402089
        goto lab_0x402089_2;
    }
    goto lab_0x402060;
  lab_0x401f6e:
    // 0x401f6e
    *(char *)(v21 + 1) = 3;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v30;
    *(char *)v21 = (char)v25;
    int64_t v72 = v30; // 0x401f83
    int64_t v73 = v17; // 0x401f83
    int64_t v74 = (int64_t)*(char *)v17; // 0x401f83
    goto lab_0x401f86;
  lab_0x401f86:;
    int64_t v75 = v32;
    v31 = v72 & 0xffffffff & ((int32_t)v75 != 0 ? v75 : 0xffffffff);
    v28 = v73;
    v23 = v74;
    goto lab_0x401f8f;
  lab_0x402050:
    // 0x402050
    v59 = 0;
    v60 = v34;
    v62 = 1;
    v63 = v34 + 0xffffffa8;
    v64 = v33;
    int64_t v70; // 0x401e50
    int64_t v69; // 0x401e50
    int64_t v67; // 0x401e50
    int64_t v68; // 0x401e50
    while (true) {
      lab_0x402060:
        // 0x402060
        v54 = v64;
        int64_t v65 = v62;
        int64_t v66 = v59;
        g47 = v63 % 256;
        v58 = v66;
        v61 = 2;
        v67 = v66;
        v68 = v60;
        v69 = v65;
        v70 = v54;
        uint64_t v71; // 0x401e50
        switch ((char)v71) {
            case 0: {
                goto lab_0x402078;
            }
            case 26: {
                // 0x4020c8
                v58 = v66 & 0xfffffedb | 292;
                v61 = v65;
                goto lab_0x402078;
            }
            case 27: {
                // 0x4020c0
                v58 = v66 | 3072;
                v61 = v65;
                goto lab_0x402078;
            }
            case 28: {
                // 0x4020b8
                v58 = v66 | 512;
                v61 = v65;
                goto lab_0x402078;
            }
            case 31: {
                // 0x4020b0
                v58 = v66 | 146;
                v61 = v65;
                goto lab_0x402078;
            }
            case 32: {
                // 0x4020a8
                v58 = v66 & 0xffffffb6 | 73;
                v61 = v65;
                goto lab_0x402078;
            }
            default: {
                goto lab_0x402089_2;
            }
        }
    }
  lab_0x402089_2:
    // 0x402089
    *(char *)v21 = (char)v25;
    *(char *)(v21 + 1) = (char)v69;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v67;
    v72 = v67;
    v73 = v70;
    v74 = v68 & 0xffffffff;
    goto lab_0x401f86;
  lab_0x401f8f:
    // 0x401f8f
    *(int32_t *)(v21 + 12) = (int32_t)v31;
    if ((v23 & 239) != 45) {
        // 0x401fa6
        int64_t v76; // 0x401e50
        v35 = v76;
        if (v35 != 43) {
            // break -> 0x402182
            goto lab_0x402182;
        }
    }
    // 0x401fb0
    v29 = v28;
    v24 = v23;
    v20 = v21 + 16;
    v22++;
    goto lab_0x401fb3;
  lab_0x4020e5:
    // 0x4020e5
    v18 = v19;
    v26 = v27 + 1;
    goto lab_0x401ecd;
}
// Address range: 0x4021c0 - 0x402214
int64_t function_4021c0(int64_t a1) {
    // 0x4021c0
    int64_t v1; // bp-152, 0x4021c0
    int32_t v2 = __xstat(1, (char *)a1, (struct stat *)&v1); // 0x4021d3
    int64_t result = 0; // 0x4021de
    if (v2 == 0) {
        // 0x4021e0
        result = function_404580(32);
        *(int16_t *)result = 317;
        *(int32_t *)(result + 4) = 4095;
        *(int32_t *)(result + 12) = 4095;
        *(char *)(result + 17) = 0;
    }
    // 0x40220b
    return result;
}
// Address range: 0x402220 - 0x40239d
int64_t function_402220(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char v1 = *(char *)(a4 + 1); // 0x402220
    int64_t v2 = a1 % 0x1000; // 0x402229
    int64_t result = v2; // 0x402237
    int64_t v3 = 0; // 0x402237
    int64_t v4; // 0x402220
    int64_t v5; // 0x402220
    int64_t v6; // 0x402220
    char v7; // 0x402220
    char v8; // 0x402220
    int64_t v9; // 0x402220
    int64_t v10; // 0x402220
    int64_t v11; // 0x402220
    int64_t v12; // 0x402220
    int64_t v13; // 0x402220
    int64_t v14; // 0x402220
    int64_t v15; // 0x402220
    int64_t v16; // 0x402220
    int64_t v17; // 0x402220
    int64_t v18; // 0x402220
    uint32_t v19; // 0x4022db
    int64_t v20; // 0x4022df
    if (v1 != 0) {
        // 0x40223d
        v10 = v2;
        v14 = a4;
        v12 = 0;
        v7 = v1;
        while (true) {
          lab_0x4022db_2:
            // 0x4022db
            v8 = v7;
            v13 = v12;
            v15 = v14;
            v11 = v10;
            v19 = *(int32_t *)(v15 + 4);
            v20 = (int64_t)*(int32_t *)(v15 + 8);
            if ((char)a2 == 0) {
                // 0x402250
                v16 = 0;
                v4 = 0xffffffff;
                if (v8 == 2) {
                    // 0x402390
                    v17 = 0;
                    v9 = v20;
                    v5 = 0xffffffff;
                    v18 = 0;
                    v6 = 0xffffffff;
                    if ((v11 & 73) == 0) {
                        goto lab_0x4022a4;
                    } else {
                        goto lab_0x40230c;
                    }
                } else {
                    goto lab_0x40225f;
                }
            } else {
                int32_t v21 = *(int32_t *)(v15 + 12); // 0x4022ec
                int64_t v22 = v21 | -3073; // 0x4022f3
                int64_t v23 = v21 & 3072 ^ 3072; // 0x4022fc
                v16 = v23;
                v4 = v22;
                v18 = v23;
                v6 = v22;
                if (v8 != 2) {
                    goto lab_0x40225f;
                } else {
                    goto lab_0x40230c;
                }
            }
        }
    }
  lab_0x402358_2:
    // 0x402358
    if (a5 != 0) {
        // 0x40235d
        *(int32_t *)(int64_t)a5 = (int32_t)v3;
    }
    // 0x402360
    return result;
  lab_0x40225f:;
    int64_t v24 = v4;
    int64_t v25 = v16;
    v17 = v25;
    v9 = v20;
    v5 = v24;
    if (v8 == 3) {
        int64_t v26 = v11 & v20;
        int64_t v27 = v26 & 292; // 0x40226b
        int64_t v28 = (v27 | (int64_t)(v27 == 0)) + (v27 ^ 511) & 292;
        int64_t v29 = (v26 & 146) != 0 ? v28 | 146 : v28; // 0x40228e
        v17 = v25;
        v9 = ((v26 & 73) != 0 ? v29 | 73 : v29) | v26;
        v5 = v24;
    }
    goto lab_0x4022a4;
  lab_0x40230c:;
    int64_t v60 = (int64_t)*(char *)v15; // 0x402310
    int64_t v61 = v6 & (v20 | 73); // 0x402314
    int64_t v32 = v18; // 0x40231a
    int64_t v33 = v61; // 0x40231a
    int64_t v34 = v6; // 0x40231a
    int64_t v35 = v60; // 0x40231a
    int64_t v36 = v18; // 0x40231a
    int64_t v37 = v61; // 0x40231a
    int64_t v38 = v60; // 0x40231a
    if (v19 == 0) {
        goto lab_0x4022b0;
    } else {
        goto lab_0x402320;
    }
  lab_0x4022a4:;
    int64_t v30 = (int64_t)*(char *)v15; // 0x4022a4
    int64_t v31 = v9 & 0xffffffff & v5; // 0x4022a8
    v32 = v17;
    v33 = v31;
    v34 = v5;
    v35 = v30;
    v36 = v17;
    v37 = v31;
    v38 = v30;
    if (v19 != 0) {
        goto lab_0x402320;
    } else {
        goto lab_0x4022b0;
    }
  lab_0x4022b0:;
    int64_t v39 = v33 & (a3 & 0xffffffff ^ 0xffffffff);
    int64_t v40 = v39; // 0x402220
    int64_t v41 = v35; // 0x402220
    int64_t v42 = v32; // 0x402220
    int64_t v43 = v39; // 0x402220
    int64_t v44 = v34; // 0x402220
    int64_t v45 = v39; // 0x402220
    int64_t v46; // 0x402220
    switch ((char)v46) {
        case 45: {
            goto lab_0x402370;
        }
        case 61: {
            goto lab_0x40233b;
        }
        default: {
            goto lab_0x4022c3;
        }
    }
  lab_0x402320:;
    int64_t v47 = v19; // 0x4022db
    int64_t v48 = v37 & v47;
    char v49 = v38; // 0x402323
    v45 = v48;
    if (v49 == 45) {
        goto lab_0x402370;
    } else {
        // 0x402329
        if (v49 != 61) {
            goto lab_0x4022c3;
        } else {
            int64_t v50 = v36 & 0xffffffff | v47 ^ 0xffffffff; // 0x402332
            v42 = v50;
            v43 = v48;
            v44 = v50 ^ 0xffffffff;
            goto lab_0x40233b;
        }
    }
  lab_0x402370:;
    int64_t v51 = v11 & 0xffffffff & (v45 ^ 0xffffffff); // 0x402379
    int64_t v52 = (v45 | v13) & 0xffffffff; // 0x402379
    goto lab_0x4022cd;
  lab_0x40233b:;
    char v57 = *(char *)(v15 + 17); // 0x40233f
    int64_t v58 = v44 % 0x1000 | v13 & 0xffffffff; // 0x40234d
    int64_t v59 = (v42 & v11 | v43) & 0xffffffff; // 0x402350
    int64_t v54 = v59; // 0x402356
    int64_t v55 = v58; // 0x402356
    char v56 = v57; // 0x402356
    result = v59;
    v3 = v58;
    if (v57 == 0) {
        // break -> 0x402358
        goto lab_0x402358_2;
    }
    goto lab_0x4022db;
  lab_0x4022c3:
    // 0x4022c3
    v51 = v11;
    v52 = v13;
    if ((char)v41 == 43) {
        // 0x402380
        v51 = (v40 | v11) & 0xffffffff;
        v52 = (v40 | v13) & 0xffffffff;
    }
    goto lab_0x4022cd;
  lab_0x4022cd:;
    char v53 = *(char *)(v15 + 17); // 0x4022d1
    v54 = v51;
    v55 = v52;
    v56 = v53;
    result = v51;
    v3 = v52;
    if (v53 == 0) {
        // break -> 0x402358
        goto lab_0x402358_2;
    }
    goto lab_0x4022db;
  lab_0x4022db:
    // 0x4022db
    v10 = v54;
    v14 = v15 + 16;
    v12 = v55;
    v7 = v56;
    goto lab_0x4022db_2;
}
// Address range: 0x4023a0 - 0x402439
int64_t function_4023a0(int64_t str) {
    // 0x4023a0
    if (str == 0) {
        // 0x402419
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4023ae
    int64_t result = (int64_t)found_char_pos; // 0x4023ae
    if (found_char_pos == NULL) {
        // 0x402409
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4023b8
    if (v1 - str < 7) {
        // 0x402409
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x4023c8
    bool v2; // 0x4023a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4023a0
    int64_t v5 = result - 6; // 0x4023a0
    int64_t v6 = 7; // 0x4023d6
    unsigned char v7 = *(char *)v5; // 0x4023d6
    char v8 = *(char *)v4; // 0x4023d6
    char v9 = v8; // 0x4023d6
    bool v10 = false; // 0x4023d6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4023e0
    int64_t v13 = v1; // 0x4023e0
    int64_t v14 = 3; // 0x4023e0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402409
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4023f2
    char v16 = *(char *)v12; // 0x4023f2
    char v17 = v16; // 0x4023f2
    bool v18 = false; // 0x4023f2
    while (v15 == v16) {
        // 0x4023e2
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
    int64_t v20 = v1; // 0x4023fc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4023fe
        v20 = result + 4;
        g28 = v20;
    }
    // 0x402409
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402440 - 0x402532
int64_t function_402440(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402454
    int64_t result = (int64_t)v1; // 0x402454
    if (result != a1) {
        // 0x402461
        return result;
    }
    int64_t v2 = function_405720(); // 0x402470
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402526
    if (v3 == 85) {
        // 0x402480
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402518
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x4024ae
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x4024bb
        // 0x402461
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402518
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4024fd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40250a
    // 0x402461
    return result4;
}
// Address range: 0x402540 - 0x402597
int64_t function_402540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402540
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402588
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402597 - 0x403761
int64_t function_402597(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4025e1
    int64_t v3 = 0; // 0x4025e1
    int64_t v4; // 0x402597
    int64_t v5; // 0x402597
    int64_t v6; // 0x402597
    int64_t v7; // 0x402597
    int64_t v8; // 0x402597
    int64_t v9; // 0x402597
    int64_t v10; // 0x402597
    int64_t v11; // 0x402597
    int64_t v12; // 0x402597
    int64_t v13; // 0x402597
    int64_t v14; // 0x402597
    int64_t v15; // 0x402597
    int64_t v16; // 0x402597
    int64_t v17; // 0x402597
    int64_t v18; // 0x402597
    int64_t result; // 0x402597
    int64_t v19; // 0x402597
    int32_t wc; // bp+132, 0x402597
    int64_t ps; // bp+136, 0x402597
    char v20; // 0x402b50
    int64_t v21; // 0x402b50
    int64_t v22; // 0x402ef8
    int64_t v23; // 0x402597
    int64_t v24; // 0x402f17
    int32_t v25; // 0x402597
    while (true) {
      lab_0x4025e8_2:
        // 0x4025e8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402597
        int64_t v27; // 0x40261c
        while (true) {
          lab_0x4025e8:
            // 0x4025e8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4025f3
            if (v15 == -1) {
                // 0x4025f5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402603
            if (v28) {
                // break (via goto) -> 0x402d68
                goto lab_0x402d68;
            }
            // 0x40260c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g48 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x402bfb
                    if (v25 % 2 == 0) {
                        goto lab_0x402741;
                    }
                    // 0x40301d
                    v26 = v5 + 1;
                    goto lab_0x4025e8;
                }
                case 7: {
                    goto lab_0x402741;
                }
                case 8: {
                    goto lab_0x402741;
                }
                case 9: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402741;
                }
                case 12: {
                    goto lab_0x402741;
                }
                case 13: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40270d;
                }
                case 36: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402741;
                }
                case 38: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402741;
                }
                case 44: {
                    goto lab_0x402741;
                }
                case 45: {
                    goto lab_0x402741;
                }
                case 46: {
                    goto lab_0x402741;
                }
                case 47: {
                    goto lab_0x402741;
                }
                case 48: {
                    goto lab_0x402741;
                }
                case 49: {
                    goto lab_0x402741;
                }
                case 50: {
                    goto lab_0x402741;
                }
                case 51: {
                    goto lab_0x402741;
                }
                case 52: {
                    goto lab_0x402741;
                }
                case 53: {
                    goto lab_0x402741;
                }
                case 54: {
                    goto lab_0x402741;
                }
                case 55: {
                    goto lab_0x402741;
                }
                case 56: {
                    goto lab_0x402741;
                }
                case 57: {
                    goto lab_0x402741;
                }
                case 58: {
                    goto lab_0x402741;
                }
                case 59: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402741;
                }
                case 66: {
                    goto lab_0x402741;
                }
                case 67: {
                    goto lab_0x402741;
                }
                case 68: {
                    goto lab_0x402741;
                }
                case 69: {
                    goto lab_0x402741;
                }
                case 70: {
                    goto lab_0x402741;
                }
                case 71: {
                    goto lab_0x402741;
                }
                case 72: {
                    goto lab_0x402741;
                }
                case 73: {
                    goto lab_0x402741;
                }
                case 74: {
                    goto lab_0x402741;
                }
                case 75: {
                    goto lab_0x402741;
                }
                case 76: {
                    goto lab_0x402741;
                }
                case 77: {
                    goto lab_0x402741;
                }
                case 78: {
                    goto lab_0x402741;
                }
                case 79: {
                    goto lab_0x402741;
                }
                case 80: {
                    goto lab_0x402741;
                }
                case 81: {
                    goto lab_0x402741;
                }
                case 82: {
                    goto lab_0x402741;
                }
                case 83: {
                    goto lab_0x402741;
                }
                case 84: {
                    goto lab_0x402741;
                }
                case 85: {
                    goto lab_0x402741;
                }
                case 86: {
                    goto lab_0x402741;
                }
                case 87: {
                    goto lab_0x402741;
                }
                case 88: {
                    goto lab_0x402741;
                }
                case 89: {
                    goto lab_0x402741;
                }
                case 90: {
                    goto lab_0x402741;
                }
                case 91: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402741;
                }
                case 94: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402741;
                }
                case 96: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402741;
                }
                case 98: {
                    goto lab_0x402741;
                }
                case 99: {
                    goto lab_0x402741;
                }
                case 100: {
                    goto lab_0x402741;
                }
                case 101: {
                    goto lab_0x402741;
                }
                case 102: {
                    goto lab_0x402741;
                }
                case 103: {
                    goto lab_0x402741;
                }
                case 104: {
                    goto lab_0x402741;
                }
                case 105: {
                    goto lab_0x402741;
                }
                case 106: {
                    goto lab_0x402741;
                }
                case 107: {
                    goto lab_0x402741;
                }
                case 108: {
                    goto lab_0x402741;
                }
                case 109: {
                    goto lab_0x402741;
                }
                case 110: {
                    goto lab_0x402741;
                }
                case 111: {
                    goto lab_0x402741;
                }
                case 112: {
                    goto lab_0x402741;
                }
                case 113: {
                    goto lab_0x402741;
                }
                case 114: {
                    goto lab_0x402741;
                }
                case 115: {
                    goto lab_0x402741;
                }
                case 116: {
                    goto lab_0x402741;
                }
                case 117: {
                    goto lab_0x402741;
                }
                case 118: {
                    goto lab_0x402741;
                }
                case 119: {
                    goto lab_0x402741;
                }
                case 120: {
                    goto lab_0x402741;
                }
                case 121: {
                    goto lab_0x402741;
                }
                case 122: {
                    goto lab_0x402741;
                }
                case 123: {
                    goto lab_0x4026e5;
                }
                case 124: {
                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4026e5;
                }
                case 126: {
                    goto lab_0x40270d;
                }
                default: {
                    goto lab_0x402ae5;
                }
            }
        }
      lab_0x402ae5:
        if (v23 != 1) {
            // 0x402e50
            ps = 0;
            int64_t len = v15; // 0x402e60
            if (v15 == -1) {
                // 0x402e62
                len = strlen((char *)str);
            }
            // 0x402e8e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402eef:
                // 0x402eef
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402ef4
                int64_t v30 = v29 + str;
                v24 = function_4055e0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40346a_2;
                    }
                    case -1: {
                        goto lab_0x40346a_2;
                    }
                    case -2: {
                        // 0x40354d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403587
                            v19 = v18;
                            int64_t v31 = v18; // 0x40358a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403597
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403590
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40346a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40346a_2;
                    }
                    case 1: {
                        goto lab_0x402ec0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402f6c
                        char v34 = *(char *)v33; // 0x402f7d
                        unsigned char v35; // 0x402597
                        if (v34 < 125) {
                            // 0x402f88
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402f9f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402540(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402f70
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402f7d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402f88
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402f9f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402540(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402f70
                            v33++;
                        }
                        goto lab_0x402ec0;
                    }
                }
            }
            goto lab_0x40346a_2;
        } else {
            // 0x402b34
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402741;
        }
    }
  lab_0x402d68:
    // 0x402d68
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40366a
        if (v8 > result) {
            // 0x403673
            *(char *)(v12 + result) = 0;
        }
        // 0x402997
        return result;
    }
    return function_402540(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402741:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402750
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40295a_2;
        }
    }
    int64_t v39 = result; // 0x402851
    char v40 = v20; // 0x402851
    int64_t v41 = v38; // 0x402851
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402851
    int64_t v43 = v36; // 0x402851
    goto lab_0x4027cd;
  lab_0x40295a_2:
    // 0x402997
    return function_402540(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40346a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402741;
    } else {
        uint64_t v49 = v46 + v5; // 0x40303e
        int64_t v50 = v5 + 1; // 0x403121
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403128
        char v52 = v20; // 0x403128
        int64_t v53 = result; // 0x403128
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4030f1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4030f5
            int64_t v56 = v54 + 1; // 0x4030fa
            int64_t v57 = v51 + 1; // 0x403121
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4030ec
                v54 = v56;
                if (v47 > v54) {
                    // 0x4030f1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4030f5
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
        goto lab_0x4027cd;
    }
  lab_0x402ec0:
    // 0x402ec0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402edf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402ee2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40346a
        goto lab_0x40346a_2;
    }
    goto lab_0x402eef;
  lab_0x40270d:
    // 0x40270d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40295a_2;
    }
    goto lab_0x402741;
  lab_0x4026e5:;
    bool v60 = v15 == 1; // 0x4026f0
    if (v15 == -1) {
        // 0x4026f2
        v60 = *(char *)v1 == 0;
    }
    // 0x4026fe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402741;
    } else {
        goto lab_0x40270d;
    }
  lab_0x4027cd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4027d2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4027d6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4025e8_2;
}
// Address range: 0x403770 - 0x40390e
int64_t function_403770(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403772
    int32_t * v3 = __errno_location(); // 0x40378c
    int64_t v4 = (int64_t)g20; // 0x403791
    int32_t v5 = *v3; // 0x40379b
    int64_t v6 = v4; // 0x4037b1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403909
            function_4047d0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4037c0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4037c7
        int64_t v9; // 0x403770
        if (g20 == &g21) {
            int64_t v10 = function_4045e0(0, v8); // 0x4038ea
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x4038ef
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4045e0(v4, v8); // 0x4037db
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x4037ea
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x4037ea
        int32_t v14 = v7; // 0x4037f1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403821
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40382b
    int64_t * v17 = (int64_t *)v15; // 0x40382e
    uint64_t v18 = *v17; // 0x40382e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403831
    int64_t result = *v19; // 0x403831
    int64_t v20; // 0x403770
    uint64_t v21 = function_402540(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403854
    if (v18 > v21) {
        // 0x4038cb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403867
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x403877
        free((int64_t *)result);
    }
    int64_t result2 = function_404580(v22); // 0x403891
    *v19 = result2;
    int64_t v23; // 0x403770
    function_402540(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4038cb
    *v3 = v5;
    return result2;
}
// Address range: 0x403910 - 0x403944
int64_t function_403910(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403917
    int64_t result = function_404780(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x403936
    return result;
}
// Address range: 0x403950 - 0x40395f
int64_t function_403950(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x40395c
    return result;
}
// Address range: 0x403960 - 0x40396f
int64_t function_403960(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x403968
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x403970 - 0x4039a3
int64_t function_403970(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x403989
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40398e
    uint32_t v3 = *v2; // 0x40398e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403992
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4039b0 - 0x4039c3
int64_t function_4039b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x4039bc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4039d0 - 0x4039fb
int64_t function_4039d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x4039d8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4039f5
        abort();
        // UNREACHABLE
    }
    // 0x4039ec
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x403a00 - 0x403a72
int64_t function_403a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x403a22
    int32_t * v2 = __errno_location(); // 0x403a2b
    uint32_t v3 = *(int32_t *)v1; // 0x403a4b
    int64_t result = function_402540(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403a5a
    return result;
}
// Address range: 0x403a80 - 0x403b61
int64_t function_403a80(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x403aa2
    int32_t * v2 = __errno_location(); // 0x403aa8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403ac7
    int32_t * v4 = (int32_t *)v1; // 0x403aca
    int64_t v5 = function_402540(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403ae5
    int64_t v6 = v5 + 1; // 0x403aea
    int64_t result = function_404580(v6); // 0x403aff
    function_402540(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403b44
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403b4d
    return result;
}
// Address range: 0x403b70 - 0x403b7a
int64_t function_403b70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403b70
    return function_403a80(a1, a2, 0, a3);
}
// Address range: 0x403b80 - 0x403c15
int64_t function_403b80(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403b80
    int64_t v2 = v1; // 0x403b80
    int64_t v3 = v2; // 0x403b94
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403bb3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403bb0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x403bcd
    if (g21 != 0x6092a0) {
        // 0x403bcf
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g37;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403bf1
    if (g20 != &g21) {
        // 0x403bf3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g49;
    }
    // 0x403c06
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403c20 - 0x403c31
int64_t function_403c20(void) {
    // 0x403c20
    int64_t v1; // 0x403c20
    return function_403770(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x403c40 - 0x403c4a
int64_t function_403c40(void) {
    // 0x403c40
    int64_t v1; // 0x403c40
    return function_403770(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x403c50 - 0x403c66
int64_t function_403c50(int64_t a1) {
    // 0x403c50
    return function_403770(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x403c70 - 0x403c82
int64_t function_403c70(int64_t a1, int64_t a2) {
    // 0x403c70
    return function_403770(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x403c90 - 0x403cf8
int64_t function_403c90(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403ca0
    return function_403770((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403d00 - 0x403d64
int64_t function_403d00(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403d10
    return function_403770((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403d70 - 0x403d7c
int64_t function_403d70(int64_t a1, int64_t a2) {
    // 0x403d70
    return function_403c90(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403d80 - 0x403d8f
int64_t function_403d80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403d80
    return function_403d00(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403d90 - 0x403e00
int64_t function_403d90(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x403d9d
    int128_t v2 = __asm_movdqa(g39); // 0x403da5
    int128_t v3 = __asm_movdqa(g40); // 0x403dad
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403dc2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403dd8
    uint32_t v6 = *v5; // 0x403dd8
    uint32_t v7 = (int32_t)a3 % 32; // 0x403ddd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403770(0, a1, a2, &v4);
}
// Address range: 0x403e00 - 0x403e0d
int64_t function_403e00(int64_t a1, int64_t a2) {
    // 0x403e00
    return function_403d90(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403e10 - 0x403e21
int64_t function_403e10(int64_t a1) {
    // 0x403e10
    return function_403d90(a1, -1, 58);
}
// Address range: 0x403e30 - 0x403e3a
int64_t function_403e30(void) {
    // 0x403e30
    int64_t v1; // 0x403e30
    return function_403d90(v1, v1, 58);
}
// Address range: 0x403e40 - 0x403eae
int64_t function_403e40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403e5a
    return function_403770(a1, a3, -1, &v1);
}
// Address range: 0x403eb0 - 0x403f1c
int64_t function_403eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x403eb7
    int128_t v2 = __asm_movdqa(g39); // 0x403ebf
    int128_t v3 = __asm_movdqa(g40); // 0x403ec7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403ee9
    if (a2 == 0 || a3 == 0) {
        // 0x403f17
        abort();
        // UNREACHABLE
    }
    // 0x403efa
    return function_403770(a1, a4, a5, &v4);
}
// Address range: 0x403f20 - 0x403f29
int64_t function_403f20(void) {
    // 0x403f20
    int64_t v1; // 0x403f20
    return function_403eb0(v1, v1, v1, v1, -1);
}
// Address range: 0x403f30 - 0x403f47
int64_t function_403f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403f30
    return function_403eb0(0, a1, a2, a3, -1);
}
// Address range: 0x403f50 - 0x403f63
int64_t function_403f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403f50
    return function_403eb0(0, a1, a2, a3, a4);
}
// Address range: 0x403f70 - 0x403f7a
int64_t function_403f70(void) {
    // 0x403f70
    int64_t v1; // 0x403f70
    return function_403770(v1, v1, v1, &g19);
}
// Address range: 0x403f80 - 0x403f92
int64_t function_403f80(int64_t a1, int64_t a2) {
    // 0x403f80
    return function_403770(0, a1, a2, &g19);
}
// Address range: 0x403fa0 - 0x403fb1
int64_t function_403fa0(void) {
    // 0x403fa0
    int64_t v1; // 0x403fa0
    return function_403770(v1, v1, -1, &g19);
}
// Address range: 0x403fc0 - 0x403fd6
int64_t function_403fc0(int64_t a1) {
    // 0x403fc0
    return function_403770(0, a1, -1, &g19);
}
// Address range: 0x403fe0 - 0x4043bd
int64_t function_403fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404078
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403ffc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404016
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40405b
    if (a6 < 10) {
        // 0x40406a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404162
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4043c0 - 0x4043e0
int64_t function_4043c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4043c0
    if (a5 == 0) {
        // 0x4043db
        return function_403fe0(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x4043c7
    v1++;
    int64_t v2 = v1; // 0x4043d9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4043d0
        v1++;
        v2 = v1;
    }
    // 0x4043db
    return function_403fe0(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x4043e0 - 0x404440
int64_t function_4043e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4043e0
    int64_t v3 = &v2; // 0x4043e0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404413
    int64_t v6; // 0x4043fd
    int64_t * v7; // 0x40441b
    int64_t v8; // 0x40441b
    int64_t v9; // 0x404427
    if (v5 < 48) {
        // 0x4043f0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404433
            break;
        }
    } else {
        // 0x40441b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404433
            break;
        }
    }
    int64_t v10 = 10; // 0x404411
    while (v4 != 9) {
        // 0x404409
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4043f0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404433
                break;
            }
        } else {
            // 0x40441b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404433
                break;
            }
        }
        // 0x404409
        v10 = 10;
    }
    // 0x404433
    return function_403fe0(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x404440 - 0x4044fc
int64_t function_404440(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404440
    int64_t v1; // bp-168, 0x404440
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404440
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404440
    int64_t v8; // 0x404440
    int64_t v9; // bp-56, 0x404440
    int64_t v10; // 0x4044a5
    int64_t v11; // 0x4044c9
    if ((int32_t)v6 < 48) {
        // 0x404490
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4044e0
            break;
        }
    } else {
        // 0x4044c2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4044e0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4044ba
    int64_t v13 = 10; // 0x4044ba
    while (v5 != 9) {
        // 0x4044bc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404490
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4044e0
                break;
            }
        } else {
            // 0x4044c2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4044e0
                break;
            }
        }
        // 0x4044b2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4044e0
    int64_t v14; // bp-136, 0x404440
    int64_t result = function_403fe0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x4044ef
    return result;
}
// Address range: 0x404500 - 0x404574
int64_t function_404500(int64_t a1) {
    // 0x404500
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404563
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404580 - 0x40459a
int64_t function_404580(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404584
    if (size != 0 != (mem == NULL)) {
        // 0x404593
        return (int64_t)mem;
    }
    // 0x404595
    function_4047d0(size);
    // UNREACHABLE
}
// Address range: 0x4045a0 - 0x4045c1
int64_t function_4045a0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4045a3
    int64_t v2 = v1; // 0x4045a3
    if (v2 < 0) {
        // 0x4045bb
        function_4047d0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4045b9
        return function_404580(v2);
    }
    // 0x4045bb
    function_4047d0(v2);
    // UNREACHABLE
}
// Address range: 0x4045d0 - 0x4045d2
int64_t function_4045d0(void) {
    // 0x4045d0
    int64_t v1; // 0x4045d0
    return function_404580(v1);
}
// Address range: 0x4045e0 - 0x404616
int64_t function_4045e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404608
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4045f1
    if (a2 != 0 != (mem == NULL)) {
        // 0x404600
        return (int64_t)mem;
    }
    // 0x404611
    function_4047d0(a1);
    // UNREACHABLE
}
// Address range: 0x404620 - 0x404641
int64_t function_404620(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404623
    int64_t v2 = v1; // 0x404623
    if (v2 < 0) {
        // 0x40463b
        function_4047d0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404639
        return function_4045e0(a1, v2);
    }
    // 0x40463b
    function_4047d0(a1);
    // UNREACHABLE
}
// Address range: 0x404650 - 0x4046d6
int64_t function_404650(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4046ab
            function_4047d0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4045e0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404693
    if (a2 == 0) {
        // 0x4046b8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404698
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4046ab
        function_4047d0(a1);
        // UNREACHABLE
    }
    // 0x40467a
    *(int64_t *)a2 = v2;
    return function_4045e0(a1, v2 * a3);
}
// Address range: 0x4046e0 - 0x404730
int64_t function_4046e0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4046e0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40472a
            function_4047d0(a1);
            // UNREACHABLE
        }
        // 0x404702
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4045e0(a1, v1);
    }
    if (a2 == 0) {
        // 0x404715
        *(int64_t *)a2 = 128;
        return function_4045e0(0, 128);
    }
    // 0x404728
    if (a2 < 0) {
        // 0x40472a
        function_4047d0(a1);
        // UNREACHABLE
    }
    // 0x404702
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4045e0(a1, v1);
}
// Address range: 0x404730 - 0x404747
int64_t function_404730(int64_t a1, int64_t a2) {
    // 0x404730
    return (int64_t)memset((int64_t *)function_404580(a1), 0, (int32_t)a1);
}
// Address range: 0x404750 - 0x40477e
int64_t function_404750(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404757
    if ((int64_t)v1 < 0) {
        // 0x404779
        function_4047d0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404779
        function_4047d0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40476a
    if (mem != NULL) {
        // 0x404774
        return (int64_t)mem;
    }
    // 0x404779
    function_4047d0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404780 - 0x4047a8
int64_t function_404780(int64_t a1, int64_t a2) {
    int64_t v1 = function_404580(a2); // 0x40478f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4047b0 - 0x4047c3
int64_t function_4047b0(int64_t str) {
    // 0x4047b0
    return function_404780(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4047d0 - 0x404801
int64_t function_4047d0(int64_t a1) {
    // 0x4047d0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404810 - 0x4048ef
int64_t function_404810(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40481c
    uint32_t v2 = *v1; // 0x40481c
    int64_t v3 = a2 & 0xffffffff; // 0x404821
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404824
    uint64_t v5 = (int64_t)*v4; // 0x404824
    int64_t v6; // 0x404892
    if (v3 <= v5) {
      lab_0x40488c_2:
        // 0x40488c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404812
    int64_t v8 = v2; // 0x404810
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40488c
        goto lab_0x40488c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404848
    int64_t v17; // 0x404856
    int64_t * v18; // 0x404870
    int64_t * v19; // 0x404873
    int64_t v20; // 0x40487e
    int64_t v21; // 0x404856
    while ((v16 & 0xffffffff) > v10) {
        // 0x404853
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404870
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404887
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40488c
            goto lab_0x40488c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40488c
            goto lab_0x40488c_2;
        }
        // 0x404842
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4048cb
    int64_t * v23 = (int64_t *)v22; // 0x4048d0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4048d3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4048d0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4048e7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40483d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40488c
            goto lab_0x40488c_2;
        }
        // 0x404842
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404853
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404870
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404887
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40488c
                goto lab_0x40488c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40488c
                goto lab_0x40488c_2;
            }
            // 0x404842
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4048b0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4048d0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4048e7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40488c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4048f0 - 0x404f0c
int64_t function_4048f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40490f
    int64_t v2 = *v1; // 0x40490f
    char * str2 = (char *)v2; // 0x40491c
    char c = *str2; // 0x40491c
    int64_t v3 = v2; // 0x404948
    int64_t v4 = 0; // 0x4048f0
    int32_t v5; // 0x4048f0
    int64_t v6; // 0x4048f0
    int64_t v7; // 0x4048f0
    int64_t v8; // 0x4048f0
    int64_t v9; // 0x4048f0
    int64_t v10; // 0x4048f0
    int64_t v11; // 0x4048f0
    int64_t v12; // 0x4048f0
    int64_t v13; // 0x4048f0
    int64_t str3; // 0x4048f0
    int64_t v14; // 0x4048f0
    int64_t v15; // 0x4048f0
    int64_t v16; // 0x4048f0
    int64_t v17; // 0x4048f0
    int32_t v18; // 0x4048f0
    int32_t v19; // 0x4048f0
    int32_t v20; // 0x4048f0
    int32_t v21; // 0x4048f0
    int32_t v22; // 0x4048f0
    int32_t v23; // 0x4048f0
    int32_t v24; // 0x4048f0
    int32_t v25; // 0x4048f0
    int32_t v26; // 0x4048f0
    int32_t v27; // 0x4048f0
    int32_t v28; // 0x4048f0
    int32_t v29; // 0x4048f0
    int64_t nmemb; // 0x4048f0
    int64_t v30; // 0x4048f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40494c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404948
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404958
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40495e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404928
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40498c
                int64_t v34; // 0x4048f0
                int64_t v35; // 0x4048f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404995
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404b10;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4049a6
                int64_t v37 = *(int64_t *)v36; // 0x4049aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404980
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404995
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404b10;
                        }
                    }
                    // 0x4049a6
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
                  lab_0x4049f6:
                    // 0x4049f6
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
                        goto lab_0x404a50;
                    } else {
                        if (v11 == 0) {
                            // 0x404bc0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404a50;
                        } else {
                            if (v39 == 0) {
                                // 0x404b70
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x404a1a;
                                } else {
                                    // 0x404b7c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x404a1a;
                                    } else {
                                        // 0x404b8a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x404a1a;
                                        } else {
                                            goto lab_0x404a50;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x404a1a;
                            }
                        }
                    }
                }
              lab_0x404a61:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404c36
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404de2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404e02
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404e4f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404e69
                            int64_t v45; // 0x404e6b
                            if (*(char *)v42 != 0) {
                                // 0x404e6b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404e63
                            while (v17 + nmemb != v42) {
                                // 0x404e65
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404e6b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404e58
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404e90
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x404c44
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404d9f
                        free((int64_t *)v17);
                    }
                    // 0x404c99
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404cb0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x404b5e
                    return 63;
                }
                // 0x404a80
                v5 = v39;
                if (v13 != 0) {
                    // 0x404b04
                    v35 = v13;
                    v34 = v25;
                  lab_0x404b10:;
                    int32_t * v49 = (int32_t *)a7; // 0x404b20
                    uint32_t v50 = *v49; // 0x404b20
                    int64_t v51 = v50; // 0x404b20
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x404b2a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404b33
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404d5f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404d0a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x404b5e
                            return 63;
                        }
                        // 0x404ba8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404ebf
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404dbd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404dd0
                                // 0x404b5e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404cce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404ce2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x404b4b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x404b4e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404b52
                    int64_t result = v59; // 0x404b58
                    if (v58 != 0) {
                        // 0x404b5a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x404b5e
                    return result;
                }
            } else {
                // 0x40495e
                v5 = v32;
            }
            // break -> 0x404a85
            break;
        }
    }
    // 0x404a85
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x404a9d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404aa7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x404b5e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404be9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404ad6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404ae6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404a50:
    // 0x404a50
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404a50
    int64_t v63 = *(int64_t *)v62; // 0x404a54
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404a61
        goto lab_0x404a61;
    }
    goto lab_0x4049f6;
  lab_0x404a1a:
    // 0x404a1a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4048f0
    int32_t v65; // 0x4048f0
    int32_t v66; // 0x4048f0
    if (v27 != 0) {
        goto lab_0x404a50;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404bd0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404a50;
            } else {
                goto lab_0x404a41;
            }
        } else {
            // 0x404a35
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404d2c
                int64_t v67 = (int64_t)mem; // 0x404d2c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404a50;
                } else {
                    // 0x404d3f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404a41;
                }
            } else {
                goto lab_0x404a41;
            }
        }
    }
  lab_0x404a41:
    // 0x404a41
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404a50;
}
// Address range: 0x404f10 - 0x4054d6
int64_t function_404f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404f31
    if (v3 < 1) {
        // 0x4050ee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404f2d
    int32_t v5 = *(int32_t *)a7; // 0x404f39
    uint64_t v6 = a1 & 0xffffffff; // 0x404f3b
    int64_t v7 = v2; // 0x404f40
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404f43
    *v8 = 0;
    int64_t v9; // 0x404f10
    int64_t v10; // 0x404f10
    int64_t v11; // 0x404f10
    int64_t v12; // 0x404f10
    int64_t str; // 0x404f10
    int64_t v13; // 0x404f10
    int64_t v14; // 0x404f10
    int64_t v15; // 0x404f10
    int64_t v16; // 0x404f10
    int64_t v17; // 0x404f10
    int32_t v18; // 0x404f10
    char v19; // 0x404f10
    if (v5 == 0) {
        // 0x405128
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404f5a;
    } else {
        // 0x404f53
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404fa0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404fa3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405068;
            } else {
                int64_t v22 = v7 + 1; // 0x404fb6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404fc6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40507c;
                } else {
                    goto lab_0x404fd8;
                }
            }
        } else {
            goto lab_0x404f5a;
        }
    }
  lab_0x404f5a:
    // 0x404f5a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404f60
    *v24 = 0;
    int64_t v25; // 0x404f10
    int64_t v26; // 0x404f10
    int64_t v27; // 0x404f10
    switch (*(char *)&v2) {
        case 45: {
            // 0x405050
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40505d;
        }
        case 43: {
            // 0x405360
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40505d;
        }
        default: {
            // 0x404f7c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4052df
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4053f8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40505d;
                } else {
                    // 0x4052ed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404f8a;
                }
            } else {
                goto lab_0x404f8a;
            }
        }
    }
  lab_0x405068:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40506f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404fd8;
    } else {
        goto lab_0x40507c;
    }
  lab_0x404f8a:
    // 0x404f8a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40505d;
  lab_0x40505d:
    // 0x40505d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405068;
  lab_0x404fd8:;
    uint32_t v30 = *(int32_t *)a7; // 0x404fd8
    int64_t v31 = v30; // 0x404fd8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404fda
    if ((int64_t)*v32 > v31) {
        // 0x404fdf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404fe2
    if (*v33 > v30) {
        // 0x404fe7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404fea
    int64_t v35 = v31; // 0x404fee
    int64_t v36 = v15; // 0x404fee
    int64_t v37; // 0x404f10
    int64_t v38; // 0x404f10
    int64_t v39; // 0x404f10
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405158
        int64_t v41 = v40; // 0x405158
        v2 = v41;
        int64_t v42; // 0x404f10
        if (*v33 == v40) {
            // 0x405340
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405348
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405164
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405178
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405181
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40518a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4051a1
            int64_t v47 = v45 & 0xffffffff; // 0x4051a5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4051ae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4051b4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4051b6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405190
            int64_t v49 = v48 & 0xffffffff; // 0x405190
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4051a1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4051ae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4051b4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4051b6;
                    }
                }
                // 0x405190
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405358
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4051b6;
    } else {
        goto lab_0x404ff4;
    }
  lab_0x40507c:
    // 0x40507c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40507f
    int64_t v51 = v12; // 0x40507f
    int64_t v52 = v14; // 0x40507f
    if (*(char *)v10 == 0) {
        goto lab_0x404fd8;
    } else {
        goto lab_0x405085;
    }
  lab_0x404ff4:;
    int32_t v53 = v35; // 0x404ff4
    int64_t v54; // 0x404f10
    int64_t v55; // 0x404f10
    int64_t v56; // 0x404f10
    int64_t v57; // 0x404f10
    int64_t v58; // 0x404f10
    int64_t v59; // 0x404f10
    char * v60; // 0x404f10
    int64_t v61; // 0x404f10
    int64_t v62; // 0x405009
    int64_t v63; // 0x404f10
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405143
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405146;
    } else {
        // 0x404ffc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404f10
        int64_t v66 = v65 ? -1 : 1; // 0x405010
        int64_t v67 = (int64_t)"--"; // 0x404f10
        int64_t v68 = v62; // 0x404f10
        int64_t v69 = 3; // 0x405010
        unsigned char v70 = *(char *)v68; // 0x405010
        char v71 = *(char *)v67; // 0x405010
        char v72 = v71; // 0x405010
        bool v73 = false; // 0x405010
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
            // 0x405100
            if (*(char *)v62 == 45) {
                // 0x4051c0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4051c0
                if (c == 0) {
                    goto lab_0x40510a;
                } else {
                    // 0x4051cd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405250;
                    } else {
                        if (c == 45) {
                            // 0x405433
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4052a5;
                        } else {
                            // 0x4051de
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405250;
                            } else {
                                // 0x4051e3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405204;
                                } else {
                                    // 0x4051ea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405250;
                                    } else {
                                        goto lab_0x405204;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40510a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405020
            v2 = v75;
            int32_t v76 = *v32; // 0x405023
            int64_t v77 = v35 + 1; // 0x405026
            int32_t v78 = v77; // 0x405029
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405390
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405037
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405045
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405146;
        }
    }
  lab_0x405085:;
    // 0x405085
    int64_t v79; // bp-104, 0x404f10
    int64_t v80 = &v79; // 0x404f1a
    int64_t v81 = v50 + 1; // 0x405085
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40508c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405091
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405095
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405099
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4050a1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4050a6
    int32_t c2 = v84; // 0x4050a6
    char * found_char_pos = strchr(str2, c2); // 0x4050a6
    int64_t v87 = *v82; // 0x4050ab
    v2 = v87;
    int64_t v88 = *v85; // 0x4050b5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4050c0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4053b0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40537d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4050ee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4050a6
    char v91 = *(char *)(v90 + 1); // 0x4050db
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405095
        if (v91 != 58) {
            // 0x4050ee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405304
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405408
                *v8 = 0;
            } else {
                // 0x4053ec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40532e
            *v83 = 0;
            // 0x4050ee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40530e
        if (v93 != 0) {
            // 0x4053a0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40532e
            *v83 = 0;
            // 0x4050ee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405321
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40532e
            *v83 = 0;
            // 0x4050ee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40546a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40541a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405421
        // 0x40532e
        *v83 = 0;
        // 0x4050ee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405279
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40527b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4054a0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405451
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405458
            // 0x4050ee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405286
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40528a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4052a5;
  lab_0x4051b6:
    // 0x4051b6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404ff4;
  lab_0x4052a5:;
    int64_t v99 = function_4048f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4052c3
    // 0x4050ee
    return v99 & 0xffffffff;
  lab_0x405146:;
    int32_t v100 = v55; // 0x405146
    if (v100 != (int32_t)v59) {
        // 0x40514a
        *(int32_t *)a7 = v100;
    }
    // 0x4050ee
    return 0xffffffff;
  lab_0x40510a:
    // 0x40510a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405111
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4050ee
    return v99 & 0xffffffff;
  lab_0x405250:
    // 0x405250
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405085;
  lab_0x405204:
    // 0x405204
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4048f0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x40522a
    if ((int32_t)v101 != -1) {
        // 0x4050ee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40523f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405250;
}
// Address range: 0x4054e0 - 0x405536
int64_t function_4054e0(int64_t a1) {
    // 0x4054e0
    *(int32_t *)&g41 = g26;
    *(int32_t *)&g42 = g25;
    int64_t v1; // 0x4054e0
    int64_t result = function_404f10(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x405506
    g26 = *(int32_t *)&g41;
    g46 = g44;
    *(int32_t *)&g24 = g43;
    return result;
}
// Address range: 0x405540 - 0x405558
int64_t function_405540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405540
    return function_4054e0(1);
}
// Address range: 0x405560 - 0x405573
int64_t function_405560(int64_t a1, int64_t a2, char * a3, char (**a4)[8], int32_t a5, int64_t a6) {
    // 0x405560
    return function_4054e0(0);
}
// Address range: 0x405580 - 0x405595
int64_t function_405580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405580
    return function_404f10(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4055a0 - 0x4055b6
int64_t function_4055a0(void) {
    // 0x4055a0
    return function_4054e0(0);
}
// Address range: 0x4055c0 - 0x4055d8
int64_t function_4055c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4055c0
    return function_404f10(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4055e0 - 0x40565a
int64_t function_4055e0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4055eb
    int64_t v2 = (int64_t)&g10; // 0x4055eb
    int32_t * pwc; // 0x4055e0
    int64_t v3; // 0x4055e0
    int64_t n; // 0x4055e0
    if (a2 == 0) {
        goto lab_0x405632;
    } else {
        // 0x4055ed
        if (a3 == 0) {
            // 0x405618
            return -2;
        }
        // 0x4055f9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405632;
        } else {
            goto lab_0x405604;
        }
    }
  lab_0x405632:
    // 0x405632
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4055e0
    pwc = (int32_t *)&v4;
    goto lab_0x405604;
  lab_0x405604:;
    char * wstr = (char *)v3; // 0x40560a
    int64_t ps; // 0x4055e0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40560a
    int64_t result = v5; // 0x40560a
    if (v5 < 0xfffffffe) {
        // 0x405618
        return result;
    }
    int64_t result2 = result; // 0x405649
    if ((char)function_4056c0(0, v3) == 0) {
        // 0x40564b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405618
    return result2;
}
// Address range: 0x405660 - 0x4056bd
int64_t function_405660(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405667
    int64_t v2; // 0x405660
    int64_t result = function_405c90(a1, v2); // 0x405678
    if ((v2 & 32) != 0) {
        // 0x4056a0
        if ((int32_t)result == 0) {
            // 0x4056a4
            *__errno_location() = 0;
        }
        // 0x40569a
        return 0xffffffff;
    }
    // 0x405681
    if ((int32_t)result == 0) {
        // 0x40569a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405688
    if (v1 == 0) {
        // 0x40568a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40569a
    return result2;
}
// Address range: 0x4056c0 - 0x40571e
int64_t function_4056c0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4056c6
    if (locale == NULL) {
        // 0x4056f3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4056c6
    bool v2; // 0x4056c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x4056c0
    int64_t v5 = v1; // 0x4056c0
    int64_t v6 = 2; // 0x4056e5
    unsigned char v7 = *(char *)v5; // 0x4056e5
    char v8 = *(char *)v4; // 0x4056e5
    char v9 = v8; // 0x4056e5
    bool v10 = false; // 0x4056e5
    while (v7 == v8) {
        // 0x4056d8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4056f1
    int64_t v13 = v1; // 0x4056f1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4056f3
        return 0;
    }
    int64_t v14 = 6; // 0x4056f1
    unsigned char v15 = *(char *)v13; // 0x40570d
    char v16 = *(char *)v12; // 0x40570d
    char v17 = v16; // 0x40570d
    bool v18 = false; // 0x40570d
    while (v15 == v16) {
        // 0x405700
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
// Address range: 0x405720 - 0x405c82
int64_t function_405720(void) {
    char * v1 = nl_langinfo(14); // 0x405736
    char * v2 = g45; // 0x40573b
    char * v3; // 0x405720
    int64_t v4; // 0x405720
    int64_t v5; // 0x405720
    int64_t v6; // 0x405720
    int64_t v7; // 0x405720
    int32_t size; // 0x405720
    int32_t size2; // 0x405720
    int32_t len; // 0x4057f2
    int64_t v8; // 0x4057f2
    char * env_val; // 0x4057dd
    if (v2 == NULL) {
        // 0x4057d8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405845;
        } else {
            // 0x4057ea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405845;
            } else {
                // 0x4057ef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4057dd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405c75
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405845;
                    } else {
                        // 0x405be9
                        size2 = len + 14;
                        goto lab_0x40580b;
                    }
                } else {
                    goto lab_0x40580b;
                }
            }
        }
    } else {
        // 0x405720
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40575a;
    }
  lab_0x405a8c:;
    // 0x405a8c
    struct _IO_FILE * stream; // 0x4058cb
    int32_t v10 = __uflow(stream); // 0x405a8f
    int64_t v11; // 0x405720
    int64_t v12 = v11; // 0x405a99
    int64_t v13; // 0x405720
    int64_t v14 = v13; // 0x405a99
    int32_t v15 = v10; // 0x405a99
    int64_t v16; // 0x405720
    int64_t v17 = v16; // 0x405a99
    int64_t v18 = v11; // 0x405a99
    int64_t v19 = v13; // 0x405a99
    int64_t v20 = v16; // 0x405a99
    if (v10 == -1) {
        // break -> 0x405a9f
        goto lab_0x405a9f;
    }
    goto lab_0x405919;
  lab_0x40590e:;
    // 0x40590e
    int64_t v90; // 0x405720
    int64_t * v32; // 0x405900
    *v32 = v90 + 1;
    int64_t v89; // 0x405720
    v12 = v89;
    int64_t v91; // 0x405720
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405720
    v17 = v92;
    goto lab_0x405919;
  lab_0x405919:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405720
    int32_t v25; // bp-120, 0x405720
    int32_t v26; // bp-184, 0x405720
    int64_t v27; // 0x4058cb
    int64_t v28; // 0x4058e8
    int64_t v29; // 0x4058ed
    int64_t * v30; // 0x405904
    switch (c) {
        case 32: {
            goto lab_0x405900;
        }
        case 10: {
            goto lab_0x405900;
        }
        case 9: {
            goto lab_0x405900;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405af1
            int32_t v33; // 0x405720
            char v34; // 0x405720
            int32_t v35; // 0x405afe
            if (v31 < *v30) {
                // 0x405ad0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x405afb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405af1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405ad0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x405afb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405ae0
                v36 = v33;
            }
            // 0x405bcf
            if (v36 == -1) {
                // break -> 0x405a9f
                break;
            }
            goto lab_0x405900;
        }
        default: {
            // 0x40592f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x405a9f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405958
            int64_t v39 = v37 + 4; // 0x40595a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405966
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405968
            while (v41 == 0) {
                // 0x405958
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405986
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405992
            int64_t v45 = v43 + 4; // 0x405994
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4059a0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4059a2
            while (v47 == 0) {
                // 0x405992
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40598f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4059b8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4059c8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4059cc
            int64_t v52 = v51 + v48; // 0x4059d5
            int64_t * mem; // 0x405720
            int64_t v53; // 0x405720
            int64_t v54; // 0x405720
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x405b0b
                int64_t v56 = v55 + 3; // 0x405b17
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4059f1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405a00
            if (mem == NULL) {
                // 0x405c2c
                free((int64_t *)v21);
                function_405c90(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x4058a4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405a18
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405a22
            uint32_t v62 = (int32_t)v59; // 0x405a25
            int64_t v63; // 0x405720
            if (v62 >= 8) {
                // 0x405b34
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405b4e
                int64_t v66 = v61 - v65; // 0x405b52
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405b5d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405b6e
                    int64_t v70 = v69 & 0xffffffff; // 0x405b6e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405b6b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405bff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405a37
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x405a3b
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
            int64_t v73 = v51 + 1; // 0x405a4b
            int64_t v74 = v60 - 1; // 0x405a4f
            uint32_t v75 = (int32_t)v73; // 0x405a54
            int64_t v76; // 0x405720
            if (v75 >= 8) {
                // 0x405b82
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405b8c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405b9c
                int64_t v80 = v74 - v79; // 0x405ba0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405bab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405bbb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405bb9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405c16
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405c1e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405a66
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x405a6a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405c63
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x405a7e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40590e;
            } else {
                goto lab_0x405a8c;
            }
        }
    }
  lab_0x405900:;
    int64_t v93 = v23; // 0x405720
    int64_t v94 = v22; // 0x405720
    int64_t v95 = v21; // 0x405720
    goto lab_0x405900_2;
  lab_0x405845:;
    int64_t * mem3 = malloc(size); // 0x405845
    int64_t v97 = (int64_t)&g10; // 0x405850
    int64_t v98; // 0x405720
    int64_t path; // 0x405720
    if (mem3 == NULL) {
        goto lab_0x405822;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405845
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405866;
    }
  lab_0x40575a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40574d
    char v100 = *v3; // 0x40575a
    int64_t v101; // 0x405720
    if (v100 == 0) {
        // 0x4057b4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405720
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405720
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4057a0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4057a7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405770
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40577d
        char v107 = *(char *)v106; // 0x405782
        v102 = v107;
        if (v107 == 0) {
            // 0x4057b4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40578b
    v104 = v103 + 1;
  lab_0x4057a7:
    // 0x4057b4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405822:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40575a;
  lab_0x405866:;
    int64_t v109 = v98 + path; // 0x405866
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405892
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x4058c1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405bf2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4058e5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405900_2:;
                uint64_t v96 = *v32; // 0x405900
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x405a8c;
                } else {
                    goto lab_0x40590e;
                }
            }
          lab_0x405a9f:
            // 0x405a9f
            function_405c90(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x405abe
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4058a4;
  lab_0x40580b:;
    int64_t * mem4 = malloc(size2); // 0x40580b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x4058b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405866;
    } else {
        goto lab_0x405822;
    }
  lab_0x4058a4:
    // 0x4058a4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405822;
}
// Address range: 0x405c90 - 0x405d0b
int64_t function_405c90(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405c97
    if (fileno(stream) < 0) {
        // 0x405cf7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405caa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405cdb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405cf7
            return fclose(stream);
        }
    }
    // 0x405cac
    if ((int32_t)function_405d10(a1, v1) == 0) {
        // 0x405cf7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405cb8
    int32_t v3 = *v2; // 0x405cc0
    int64_t result = fclose(stream); // 0x405cce
    if (v3 != 0) {
        // 0x405d00
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405cd0
    return result;
}
// Address range: 0x405d10 - 0x405d50
int64_t function_405d10(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405d2a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405d2a
        return fflush(stream);
    }
    // 0x405d38
    function_405d50(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405d50 - 0x405da7
int64_t function_405d50(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405d50
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405d5a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405d8b
    int64_t result = -1; // 0x405d94
    if (v1 != -1) {
        // 0x405d96
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405da2
    return result;
}
// Address range: 0x405db0 - 0x405e0d
int64_t function_405db0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405db0
    return function_4012e8();
}
// Address range: 0x405e10 - 0x405e11
int64_t function_405e10(void) {
    // 0x405e10
    int64_t result; // 0x405e10
    return result;
}
// Address range: 0x405e20 - 0x405e38
int64_t function_405e20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405e20
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x405e38 - 0x405e58
int64_t function_405e38(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x405e42
    while (*(int64_t *)v1 != -1) {
        // 0x405e43
        v1 -= 8;
    }
    // 0x405e54
    return result;
}
