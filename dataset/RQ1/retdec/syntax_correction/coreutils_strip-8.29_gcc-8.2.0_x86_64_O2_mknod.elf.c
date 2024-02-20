#include "decompile_retdec.h"
// Address range: 0x401770 - 0x401775
int64_t function_401770(void) {
    // 0x401770
    abort();
    // UNREACHABLE
}
// Address range: 0x401775 - 0x40177a
int64_t function_401775(void) {
    // 0x401775
    abort();
    // UNREACHABLE
}
// Address range: 0x40177a - 0x40177f
int64_t function_40177a(void) {
    // 0x40177a
    abort();
    // UNREACHABLE
}
// Address range: 0x40177f - 0x401784
int64_t function_40177f(void) {
    // 0x40177f
    abort();
    // UNREACHABLE
}
// Address range: 0x401784 - 0x401789
int64_t function_401784(void) {
    // 0x401784
    abort();
    // UNREACHABLE
}
// Address range: 0x401789 - 0x40178e
int64_t function_401789(void) {
    // 0x401789
    abort();
    // UNREACHABLE
}
// Address range: 0x401790 - 0x401d99
int64_t function_401790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x40179c
    function_402860(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_406720(0x402270, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v3; // 0x401790
    while (true) {
        // 0x4017e1
        v3 = 0;
        while (true) {
          lab_0x4017e1:;
            uint32_t v4 = (int32_t)function_405e60(v2 & 0xffffffff, a2, "m:Z", &g2, 0, a6);
            switch (v4) {
                case -1: {
                    goto lab_0x401895;
                }
                case -130: {
                    // 0x401ba0
                    function_401e80(0);
                    // UNREACHABLE
                }
                default: {
                    if (v4 <= 0xffffff7e) {
                        if (v4 == -131) {
                            // 0x40184b
                            function_404900((int64_t)g28, "mknod", "GNU coreutils", (int64_t)g17, "David MacKenzie", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401af9;
                    }
                    if (v4 != 90) {
                        // break -> 0x401880
                        break;
                    }
                    // 0x401813
                    if (g45 != 0) {
                        // 0x40181d
                        error(0, (int32_t)"warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel" ^ (int32_t)"warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", dcgettext(NULL, "warning: ignoring --context; it requires an SELinux/SMACK-enabled kernel", 5));
                    }
                    goto lab_0x4017e1;
                }
            }
        }
    }
  lab_0x401895:;
    int64_t mode = 438; // 0x401898
    if (v3 == 0) {
        goto lab_0x4018f0;
    } else {
        int64_t v5 = function_402310(v3); // 0x4018a1
        if (v5 == 0) {
            goto lab_0x401bc9;
        } else {
            uint32_t cmask = umask(0); // 0x4018b4
            umask(cmask);
            int64_t v6 = function_4026e0(438, 0, (int64_t)cmask, v5, 0); // 0x4018d3
            free((int64_t *)v5);
            mode = v6 & 0xffffffff;
            if ((v6 & 0xfffffe00) != 0) {
                // 0x401ba7
                error(1, (int32_t)"mode must specify only file permission bits" ^ (int32_t)"mode must specify only file permission bits", dcgettext(NULL, "mode must specify only file permission bits", 5));
                goto lab_0x401bc9;
            } else {
                goto lab_0x4018f0;
            }
        }
    }
  lab_0x4018f0:;
    int32_t v7 = *(int32_t *)0x60a25c; // 0x4018f0
    int64_t v8 = v7; // 0x4018f0
    int32_t v9 = v2; // 0x4018f7
    uint32_t v10 = v9 - v7; // 0x4018f9
    int64_t v11; // 0x401790
    char * format; // 0x401c3c
    if (v2 > v8) {
        if ((v8 + 1 & 0xffffffff) < v2) {
            int64_t v12 = 8 * v8; // 0x401910
            if (*(char *)*(int64_t *)(v12 + a2 + 8) == 112) {
                // 0x401b82
                if (v10 < 2) {
                    goto lab_0x401d7d;
                } else {
                    if (v10 == 2) {
                        goto lab_0x401935;
                    } else {
                        // 0x401b96
                        v11 = a2 + 16 + v12;
                        goto lab_0x401b1c;
                    }
                }
            } else {
                goto lab_0x40191e;
            }
        } else {
            goto lab_0x40191e;
        }
    } else {
        if (v10 < 2) {
            // 0x401c30
            format = dcgettext(NULL, "missing operand", 5);
            error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
            // 0x401af9
            function_401e80(1);
            // UNREACHABLE
        }
        if (v10 == 2) {
            goto lab_0x401935;
        } else {
            // 0x401b17
            v11 = a2 + 16 + 8 * v8;
            goto lab_0x401b1c;
        }
    }
  lab_0x401bc9:
    // 0x401bc9
    error(1, (int32_t)"invalid mode" ^ (int32_t)"invalid mode", dcgettext(NULL, "invalid mode", 5));
    int64_t v13 = a2; // 0x401be6
    goto lab_0x401beb;
  lab_0x40191e:;
    int64_t v44; // 0x401790
    if (v10 < 4) {
        // 0x401c70
        function_404480(*(int64_t *)(a2 - 8 + (v1 >> 29)));
        error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
        v44 = (int64_t)"Special files require major and minor device numbers.";
        if (v9 - g26 != 2) {
            // 0x401af9
            function_401e80(1);
            // UNREACHABLE
        }
        goto lab_0x401b5b;
    } else {
        if (v10 != 4) {
            // 0x401c54
            function_404480(*(int64_t *)(a2 + 32 + 8 * v8));
            // 0x401ae1
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"extra operand %s", 5));
          lab_0x401af9:
            // 0x401af9
            function_401e80(1);
            // UNREACHABLE
        }
        goto lab_0x401935;
    }
  lab_0x401935:;
    int64_t v15 = 8 * v8 + 8; // 0x401939
    int64_t v45 = *(int64_t *)(v15 + a2); // 0x401939
    char v46 = *(char *)v45; // 0x401945
    char v33; // 0x401790
    int64_t v31; // 0x401790
    int64_t v35; // 0x401790
    int64_t v39; // 0x401790
    int64_t v36; // 0x401790
    int64_t v37; // 0x401790
    int64_t v34; // 0x401790
    if (v46 == 99) {
        goto lab_0x4019af;
    } else {
        // 0x40194c
        v33 = v46;
        v34 = v15;
        v35 = a2;
        v36 = v45;
        if (v46 > 99) {
            if (v46 != 112) {
                // 0x4019a7
                v37 = v45;
                if (v46 != 117) {
                    goto lab_0x401acf;
                } else {
                    goto lab_0x4019af;
                }
            } else {
                // 0x401956
                int64_t v47; // 0x401935
                int64_t pathname = *(int64_t *)(v47 + a2); // 0x401956
                v31 = a2;
                v39 = a2;
                int64_t mode2; // 0x401790
                if (mkfifo((char *)pathname, (int32_t)mode2) != 0) {
                    goto lab_0x401d48;
                } else {
                    goto lab_0x40196b;
                }
            }
        } else {
            goto lab_0x401ac1;
        }
    }
  lab_0x401beb:
    // 0x401beb
    function_404230(4, *(int64_t *)(8 * (int64_t)g26 + v13));
    error(1, *__errno_location(), dcgettext(NULL, "cannot set permissions of %s", 5));
    // 0x401c30
    format = dcgettext(NULL, "missing operand", 5);
    error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
    // 0x401af9
    function_401e80(1);
    // UNREACHABLE
  lab_0x4019af:;
    int64_t v14 = v15; // 0x4019af
    int64_t v16 = a2; // 0x4019af
    int64_t v17 = 0x2000; // 0x4019af
    goto lab_0x4019b5;
  lab_0x401b1c:
    // 0x401b1c
    function_404480(*(int64_t *)v11);
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    v44 = (int64_t)"Fifos do not have major and minor device numbers.";
    if (v9 - g26 != 4) {
        // 0x401af9
        function_401e80(1);
        // UNREACHABLE
    }
    goto lab_0x401b5b;
  lab_0x401d7d:
    // 0x401d7d
    function_404480(*(int64_t *)(a2 - 8 + 8 * v2));
    // 0x401ae1
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing operand after %s", 5));
    // 0x401af9
    function_401e80(1);
    // UNREACHABLE
  lab_0x401b5b:
    // 0x401b5b
    __fprintf_chk(g30, 1, "%s\n", dcgettext(NULL, (char *)v44, 5));
    // 0x401af9
    function_401e80(1);
    // UNREACHABLE
  lab_0x4019b5:;
    int64_t v18 = v16 + v14;
    int64_t v19 = *(int64_t *)(v18 + 8); // 0x4019b5
    int64_t v20 = *(int64_t *)(v18 + 16); // 0x4019ba
    int32_t v21; // bp-80, 0x401790
    if ((int32_t)function_404cd0(v19, 0, 0, (int64_t *)&v21, 0, a6) != 0) {
        goto lab_0x401cf0;
    } else {
        int32_t v22 = v21; // 0x4019db
        if ((int64_t)v22 != (int64_t)v22) {
            goto lab_0x401cf0;
        } else {
            // 0x4019eb
            int32_t v23; // bp-72, 0x401790
            if ((int32_t)function_404cd0(v20, 0, 0, (int64_t *)&v23, 0, a6) != 0) {
                goto lab_0x401cc0;
            } else {
                uint64_t v24 = (int64_t)v23; // 0x401a07
                if (v24 != (int64_t)v23) {
                    goto lab_0x401cc0;
                } else {
                    int64_t v25 = 0x100000000 * (int64_t)v21; // 0x401a28
                    int64_t v26 = v21 < 0xfffff001 ? v25 : v25 + 0xfffffffffff; // 0x401a30
                    int64_t v27 = 0x1000 * v24 & 0xffffff00000 | v24 % 256 | (int64_t)(256 * v21 & 0xfff00) | v26; // 0x401a55
                    if (v27 == -1) {
                        goto lab_0x401d20;
                    } else {
                        int64_t v28 = v27; // bp-64, 0x401a70
                        int64_t v29 = *(int64_t *)(8 * (int64_t)g26 + v16); // 0x401a75
                        int32_t v30 = __xmknod(0, (char *)v29, (int32_t)(v17 | mode), (int32_t *)&v28); // 0x401a7f
                        v31 = v16;
                        if (v30 == 0) {
                            goto lab_0x40196b;
                        } else {
                            int64_t v32 = function_404300(0, 3, *(int64_t *)(8 * (int64_t)g26 + v16)); // 0x401a9e
                            error(1, *__errno_location(), "%s", (char *)v32);
                            v33 = &g50;
                            v34 = (int64_t)"%s";
                            v35 = v32;
                            v36 = 1;
                            goto lab_0x401ac1;
                        }
                    }
                }
            }
        }
    }
  lab_0x401ac1:
    // 0x401ac1
    v14 = v34;
    v16 = v35;
    v17 = 0x6000;
    v37 = v36;
    if (v33 == 98) {
        goto lab_0x4019b5;
    } else {
        goto lab_0x401acf;
    }
  lab_0x401cf0:
    // 0x401cf0
    function_404480(v19);
    error(1, (int32_t)"invalid major device number %s" ^ (int32_t)"invalid major device number %s", dcgettext(NULL, "invalid major device number %s", 5));
    goto lab_0x401d20;
  lab_0x401acf:
    // 0x401acf
    function_404480(v37);
    // 0x401ae1
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"invalid device type %s", 5));
    // 0x401af9
    function_401e80(1);
    // UNREACHABLE
  lab_0x401d20:
    // 0x401d20
    error(1, (int32_t)"invalid device %s %s" ^ (int32_t)"invalid device %s %s", dcgettext(NULL, "invalid device %s %s", 5));
    goto lab_0x401d48;
  lab_0x401d48:;
    int64_t v38 = v39;
    int32_t v40 = g26; // 0x401d48
    int64_t v41 = *(int64_t *)(8 * (int64_t)v40 + v38); // 0x401d56
    int64_t v42 = function_404300(0, 3, v41); // 0x401d5a
    int32_t * v43 = __errno_location(); // 0x401d62
    int32_t err_num = *v43; // 0x401d74
    error(1, err_num, "%s", (char *)v42);
    goto lab_0x401d7d;
  lab_0x40196b:
    if (v3 == 0) {
        // 0x40198b
        return 0;
    }
    int64_t path = *(int64_t *)(8 * (int64_t)g26 + v31); // 0x40197a
    v13 = v31;
    if (chmod((char *)path, (int32_t)mode) == 0) {
        // 0x40198b
        return 0;
    }
    goto lab_0x401beb;
  lab_0x401cc0:
    // 0x401cc0
    function_404480(v20);
    error(1, (int32_t)"invalid minor device number %s" ^ (int32_t)"invalid minor device number %s", dcgettext(NULL, "invalid minor device number %s", 5));
    goto lab_0x401cf0;
}
// Address range: 0x401da0 - 0x401dcb
// Address range: 0x401dcb - 0x401dea
int64_t function_401dcb(void) {
    // 0x401dcb
    return &g27;
}
// Address range: 0x401dea - 0x401e21
int64_t function_401dea(void) {
    // 0x401dea
    return 0;
}
// Address range: 0x401e21 - 0x401e78
int64_t function_401e21(void) {
    // 0x401e21
    if (g31 != 0) {
        // 0x401e77
        int64_t result; // 0x401e21
        return result;
    }
    int64_t v1 = g32; // 0x401e54
    int64_t result2; // 0x401e66
    if (g32 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401e66
        result2 = function_401dcb();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401e56
        v1++;
    }
    // 0x401e4a
    g32 = v1;
    // 0x401e66
    result2 = function_401dcb();
    g31 = 1;
    return result2;
}
// Address range: 0x401e78 - 0x401e7d
int64_t function_401e78(void) {
    // 0x401e78
    return function_401dea();
}
// Address range: 0x401e80 - 0x402245
int64_t function_401e80(int64_t a1) {
    int32_t status = a1; // 0x401e96
    if (status != 0) {
        // 0x401e9a
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401ebf
        exit(status);
        // UNREACHABLE
    }
    // 0x401ec6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... NAME TYPE [MAJOR MINOR]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Create the special file NAME of the given TYPE.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -Z                   set the SELinux security context to default type\n      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux\n                         or SMACK security context to CTX\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nBoth MAJOR and MINOR must be specified when TYPE is b, c, or u, and they\nmust be omitted when TYPE is p.  If MAJOR or MINOR begins with 0x or 0X,\nit is interpreted as hexadecimal; otherwise, if it begins with 0, as octal;\notherwise, as decimal.  TYPE may be:\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\n  b      create a block (buffered) special file\n  c, u   create a character (unbuffered) special file\n  p      create a FIFO\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402021
    bool v2; // 0x401e80
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4020a8
    int64_t v6 = *(int64_t *)v5; // 0x4020ac
    int64_t v7 = 6; // 0x4020b2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"mknod";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4020be
        char v11 = *(char *)v9; // 0x4020be
        char v12 = v11; // 0x4020be
        bool v13 = false; // 0x4020be
        while (v10 == v11) {
            // 0x4020b4
            v7--;
            int64_t v14 = v9 + v3; // 0x4020be
            int64_t v15 = v8 + v3; // 0x4020be
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
            // break -> 0x4020ca
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x4020ca
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4021dc;
        } else {
            // 0x4021c6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40221b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40212c;
            } else {
                goto lab_0x4021dc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40212c;
        } else {
            // 0x402112
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40221b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40212c;
            } else {
                goto lab_0x40212c;
            }
        }
    }
  lab_0x4021dc:
    // 0x4021dc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40216c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401ebf
    exit(status);
    // UNREACHABLE
  lab_0x40212c:
    // 0x40212c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40216c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401ebf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402250 - 0x402258
int64_t function_402250(int64_t a1) {
    // 0x402250
    g34 = a1;
    int64_t result; // 0x402250
    return result;
}
// Address range: 0x402260 - 0x402268
int64_t function_402260(int64_t a1) {
    // 0x402260
    g33 = a1;
    int64_t result; // 0x402260
    return result;
}
// Address range: 0x402270 - 0x40230e
int64_t function_402270(void) {
    // 0x402270
    int32_t * err_num; // 0x402286
    if ((int32_t)function_405f60((int64_t)g28) == 0) {
        goto lab_0x40229c;
    } else {
        // 0x402286
        err_num = __errno_location();
        if (g33 == 0) {
            goto lab_0x4022b3;
        } else {
            // 0x402297
            if (*err_num != 32) {
                goto lab_0x4022b3;
            } else {
                goto lab_0x40229c;
            }
        }
    }
  lab_0x40229c:;
    int64_t result = function_405f60((int64_t)g30); // 0x4022a3
    if ((int32_t)result == 0) {
        // 0x4022ac
        return result;
    }
    // 0x4022ee
    _exit(g18);
    // UNREACHABLE
  lab_0x4022b3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4022bf
    if (g34 == 0) {
        // 0x4022f9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4022d3
        error(0, *err_num, "%s: %s", (char *)function_4042d0((int64_t)g34), v1);
    }
    // 0x4022ee
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x402310 - 0x402671
int64_t function_402310(int64_t a1) {
    // 0x402310
    int64_t v1; // 0x402310
    char v2 = v1;
    int64_t v3 = 0x100000000000000 * v1 >> 56; // 0x40231c
    int64_t v4 = a1; // 0x402324
    if ((v2 & -8) == 48) {
        int64_t v5 = 0xffffffd0 + v3; // 0x4023e6
        uint32_t v6 = (int32_t)v5;
        while (v6 < 0x1000) {
            // 0x4023d8
            v4++;
            char v7 = *(char *)v4; // 0x4023d8
            if ((v7 & -8) != 48) {
                // 0x4025e0
                if (v7 == 0) {
                    int64_t v8 = v4 - a1; // 0x4025ea
                    int32_t v9 = v8 < 5 == (4 - v8 & v8) < 0 ? 4095 : v6 & 3072 | 1023; // 0x402609
                    int64_t result = function_404a40(32); // 0x40260c
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
      lab_0x4023c5:
        // 0x4023c5
        return 0;
    }
    int64_t v10 = 1; // 0x402331
    int64_t v11 = a1; // 0x402331
    int64_t v12; // 0x402310
    if (v2 == 0) {
        // 0x402638
        v12 = 16;
    } else {
        int64_t v13 = v3;
        v11++;
        unsigned char v14 = *(char *)v11; // 0x402356
        v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        while (v14 != 0) {
            // 0x402340
            v13 = v14;
            v11++;
            v14 = *(char *)v11;
            v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        }
        int64_t v15 = 16 * v10; // 0x40236d
        if (v15 < 0) {
            // 0x40266c
            function_404c90(v15);
            // UNREACHABLE
        }
        // 0x40237a
        v12 = v15;
        if (v10 >= 0x1000000000000000) {
            // 0x40266c
            function_404c90(v15);
            // UNREACHABLE
        }
    }
    int64_t v16 = function_404a40(v12); // 0x402383
    int64_t v17; // 0x402310
    int64_t v18; // 0x402310
    int64_t v19; // 0x402310
    int64_t v20; // 0x402310
    int64_t v21; // 0x402310
    int64_t v22; // 0x402310
    int64_t v23; // 0x402310
    int64_t v24; // 0x402310
    int64_t v25; // 0x402310
    int64_t v26; // 0x402310
    int64_t v27; // 0x402310
    int64_t v28; // 0x402310
    int64_t v29; // 0x402310
    int64_t v30; // 0x402310
    int64_t v31; // 0x402310
    int64_t v32; // 0x402310
    int64_t v33; // 0x402473
    int64_t v34; // 0x402473
    char v35; // 0x402310
    while (true) {
        int64_t v36 = 0;
        v32 = 0;
        v18 = 0;
        v26 = a1;
        unsigned char v37; // 0x40238d
        while (true) {
          lab_0x40238d:
            // 0x40238d
            v27 = v26;
            v37 = *(char *)v27;
            if (v37 == 97) {
                // 0x4025a0
                v32 = 4095;
                v19 = 4095;
                goto lab_0x4025a5;
            } else {
                if (v37 <= 97) {
                    // break -> 0x402400
                    break;
                }
                int64_t v38 = v18; // 0x4025d0
                switch (v37) {
                    case 111: {
                        int64_t v39 = v38 & 0xfffffdf8 | 519; // 0x4025d0
                        v32 = v39;
                        v19 = v39;
                        goto lab_0x4025a5;
                    }
                    case 117: {
                        int64_t v40 = v38 & 0xfffff63f | 2496; // 0x4025c0
                        v32 = v40;
                        v19 = v40;
                        goto lab_0x4025a5;
                    }
                    case 103: {
                        int64_t v41 = v38 & 0xfffffbc7 | 1080; // 0x4025b0
                        v32 = v41;
                        v19 = v41;
                        goto lab_0x4025a5;
                    }
                    default: {
                        goto lab_0x4023bb_3;
                    }
                }
            }
        }
        switch (v37) {
            default: {
                if (v37 != 43) {
                    // break -> 0x4023bb
                    break;
                }
            }
            case 45: {
            }
            case 61: {
                // 0x402412
                v29 = v27;
                v24 = v37;
                v20 = 16 * v36 + v16;
                v22 = v36;
                // break -> 0x402473
                break;
            }
        }
        while (true) {
          lab_0x402473:
            // 0x402473
            v21 = v20;
            v25 = v24;
            int64_t v42 = v29;
            v33 = v42 + 1;
            char v43 = *(char *)v33; // 0x402473
            if (v43 == 103) {
                // 0x402590
                v17 = v42 + 2;
                v30 = 56;
                goto lab_0x40242e;
            } else {
                // 0x402484
                v34 = v43;
                if (v43 > 103) {
                    int64_t v44 = v42 + 2;
                    v17 = v44;
                    v30 = 7;
                    if (v43 != 111) {
                        // 0x402420
                        v17 = v44;
                        v30 = 448;
                        if (v43 != 117) {
                            goto lab_0x402510;
                        } else {
                            goto lab_0x40242e;
                        }
                    } else {
                        goto lab_0x40242e;
                    }
                } else {
                    int64_t v45 = v34; // 0x4024a6
                    int64_t v46 = v33; // 0x4024a6
                    if ((v43 & -8) == 48) {
                        int64_t v47 = 0xffffffd0 + v45; // 0x4024aa
                        uint32_t v48 = (int32_t)v47;
                        if (v48 >= 0x1000) {
                            // break (via goto) -> 0x4023bb
                            goto lab_0x4023bb_3;
                        }
                        int64_t v49 = v46 + 1; // 0x4024ae
                        char v50 = *(char *)v49; // 0x4024be
                        int64_t v51 = v50; // 0x4024be
                        int64_t v52 = v47 & 0xffffffff; // 0x4024c9
                        v46 = v49;
                        while ((v50 & -8) == 48) {
                            // 0x4024aa
                            v47 = v51 + 0xffffffd0 + 8 * v52;
                            v48 = (int32_t)v47;
                            if (v48 >= 0x1000) {
                                // break (via goto) -> 0x4023bb
                                goto lab_0x4023bb_3;
                            }
                            // 0x4024be
                            v49 = v46 + 1;
                            v50 = *(char *)v49;
                            v51 = v50;
                            v52 = v47 & 0xffffffff;
                            v46 = v49;
                        }
                        // 0x4024cb
                        if ((int32_t)v32 != 0) {
                            // break (via goto) -> 0x4023bb
                            goto lab_0x4023bb_3;
                        }
                        if (v50 != 0 == (v50 != 44)) {
                            // break (via goto) -> 0x4023bb
                            goto lab_0x4023bb_3;
                        }
                        // 0x4024e0
                        *(char *)v21 = (char)v25;
                        v32 = 4095;
                        *(int32_t *)(v21 + 8) = v48;
                        *(char *)(v21 + 1) = 1;
                        *(int32_t *)(v21 + 4) = 4095;
                        v31 = 4095;
                        v28 = v49;
                        v23 = v51 & 0xffffffff;
                        goto lab_0x40244f;
                    } else {
                        goto lab_0x402510;
                    }
                }
            }
        }
      lab_0x402642:
        // 0x402642
        if (v35 != 44) {
            if (v35 != 0) {
                goto lab_0x4023bb_3;
            } else {
                // 0x40265d
                int64_t v53; // 0x402310
                *(char *)(v16 + 1 + 16 * v53) = 0;
                return 0;
            }
        }
    }
  lab_0x4023bb_3:
    // 0x4023bb
    free((int64_t *)v16);
    // 0x4023c5
    return (int32_t)&g50 ^ (int32_t)&g50;
  lab_0x402538:;
    // 0x402538
    int64_t v54; // 0x402310
    int64_t v55 = v54 + 1; // 0x402538
    int64_t v56 = (int64_t)*(char *)v55; // 0x40253c
    int64_t v57 = v56 + 0xffffffa8; // 0x402540
    int64_t v58; // 0x402310
    int64_t v59 = v58; // 0x402547
    int64_t v60 = v56; // 0x402547
    int64_t v61; // 0x402310
    int64_t v62 = v61; // 0x402547
    int64_t v63 = v57; // 0x402547
    int64_t v64 = v55; // 0x402547
    if ((char)v57 >= 33) {
        // break -> 0x402549
        goto lab_0x402549_2;
    }
    goto lab_0x402520;
  lab_0x40242e:
    // 0x40242e
    *(char *)(v21 + 1) = 3;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v30;
    *(char *)v21 = (char)v25;
    int64_t v72 = v30; // 0x402443
    int64_t v73 = v17; // 0x402443
    int64_t v74 = (int64_t)*(char *)v17; // 0x402443
    goto lab_0x402446;
  lab_0x402446:;
    int64_t v75 = v32;
    v31 = v72 & 0xffffffff & ((int32_t)v75 != 0 ? v75 : 0xffffffff);
    v28 = v73;
    v23 = v74;
    goto lab_0x40244f;
  lab_0x402510:
    // 0x402510
    v59 = 0;
    v60 = v34;
    v62 = 1;
    v63 = v34 + 0xffffffa8;
    v64 = v33;
    int64_t v70; // 0x402310
    int64_t v69; // 0x402310
    int64_t v67; // 0x402310
    int64_t v68; // 0x402310
    while (true) {
      lab_0x402520:
        // 0x402520
        v54 = v64;
        int64_t v65 = v62;
        int64_t v66 = v59;
        g46 = v63 % 256;
        v58 = v66;
        v61 = 2;
        v67 = v66;
        v68 = v60;
        v69 = v65;
        v70 = v54;
        uint64_t v71; // 0x402310
        switch ((char)v71) {
            case 0: {
                goto lab_0x402538;
            }
            case 26: {
                // 0x402588
                v58 = v66 & 0xfffffedb | 292;
                v61 = v65;
                goto lab_0x402538;
            }
            case 27: {
                // 0x402580
                v58 = v66 | 3072;
                v61 = v65;
                goto lab_0x402538;
            }
            case 28: {
                // 0x402578
                v58 = v66 | 512;
                v61 = v65;
                goto lab_0x402538;
            }
            case 31: {
                // 0x402570
                v58 = v66 | 146;
                v61 = v65;
                goto lab_0x402538;
            }
            case 32: {
                // 0x402568
                v58 = v66 & 0xffffffb6 | 73;
                v61 = v65;
                goto lab_0x402538;
            }
            default: {
                goto lab_0x402549_2;
            }
        }
    }
  lab_0x402549_2:
    // 0x402549
    *(char *)v21 = (char)v25;
    *(char *)(v21 + 1) = (char)v69;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v67;
    v72 = v67;
    v73 = v70;
    v74 = v68 & 0xffffffff;
    goto lab_0x402446;
  lab_0x40244f:
    // 0x40244f
    *(int32_t *)(v21 + 12) = (int32_t)v31;
    if ((v23 & 239) != 45) {
        // 0x402466
        int64_t v76; // 0x402310
        v35 = v76;
        if (v35 != 43) {
            // break -> 0x402642
            goto lab_0x402642;
        }
    }
    // 0x402470
    v29 = v28;
    v24 = v23;
    v20 = v21 + 16;
    v22++;
    goto lab_0x402473;
  lab_0x4025a5:
    // 0x4025a5
    v18 = v19;
    v26 = v27 + 1;
    goto lab_0x40238d;
}
// Address range: 0x402680 - 0x4026d4
int64_t function_402680(int64_t a1) {
    // 0x402680
    int64_t v1; // bp-152, 0x402680
    int32_t v2 = __xstat(1, (char *)a1, (struct stat *)&v1); // 0x402693
    int64_t result = 0; // 0x40269e
    if (v2 == 0) {
        // 0x4026a0
        result = function_404a40(32);
        *(int16_t *)result = 317;
        *(int32_t *)(result + 4) = 4095;
        *(int32_t *)(result + 12) = 4095;
        *(char *)(result + 17) = 0;
    }
    // 0x4026cb
    return result;
}
// Address range: 0x4026e0 - 0x40285d
int64_t function_4026e0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int32_t a5) {
    char v1 = *(char *)(a4 + 1); // 0x4026e0
    int64_t v2 = a1 % 0x1000; // 0x4026e9
    int64_t result = v2; // 0x4026f7
    int64_t v3 = 0; // 0x4026f7
    int64_t v4; // 0x4026e0
    int64_t v5; // 0x4026e0
    int64_t v6; // 0x4026e0
    char v7; // 0x4026e0
    char v8; // 0x4026e0
    int64_t v9; // 0x4026e0
    int64_t v10; // 0x4026e0
    int64_t v11; // 0x4026e0
    int64_t v12; // 0x4026e0
    int64_t v13; // 0x4026e0
    int64_t v14; // 0x4026e0
    int64_t v15; // 0x4026e0
    int64_t v16; // 0x4026e0
    int64_t v17; // 0x4026e0
    int64_t v18; // 0x4026e0
    uint32_t v19; // 0x40279b
    int64_t v20; // 0x40279f
    if (v1 != 0) {
        // 0x4026fd
        v10 = v2;
        v14 = a4;
        v12 = 0;
        v7 = v1;
        while (true) {
          lab_0x40279b_2:
            // 0x40279b
            v8 = v7;
            v13 = v12;
            v15 = v14;
            v11 = v10;
            v19 = *(int32_t *)(v15 + 4);
            v20 = (int64_t)*(int32_t *)(v15 + 8);
            if ((char)a2 == 0) {
                // 0x402710
                v16 = 0;
                v4 = 0xffffffff;
                if (v8 == 2) {
                    // 0x402850
                    v17 = 0;
                    v9 = v20;
                    v5 = 0xffffffff;
                    v18 = 0;
                    v6 = 0xffffffff;
                    if ((v11 & 73) == 0) {
                        goto lab_0x402764;
                    } else {
                        goto lab_0x4027cc;
                    }
                } else {
                    goto lab_0x40271f;
                }
            } else {
                int32_t v21 = *(int32_t *)(v15 + 12); // 0x4027ac
                int64_t v22 = v21 | -3073; // 0x4027b3
                int64_t v23 = v21 & 3072 ^ 3072; // 0x4027bc
                v16 = v23;
                v4 = v22;
                v18 = v23;
                v6 = v22;
                if (v8 != 2) {
                    goto lab_0x40271f;
                } else {
                    goto lab_0x4027cc;
                }
            }
        }
    }
  lab_0x402818_2:
    // 0x402818
    if (a5 != 0) {
        // 0x40281d
        *(int32_t *)(int64_t)a5 = (int32_t)v3;
    }
    // 0x402820
    return result;
  lab_0x40271f:;
    int64_t v24 = v4;
    int64_t v25 = v16;
    v17 = v25;
    v9 = v20;
    v5 = v24;
    if (v8 == 3) {
        int64_t v26 = v11 & v20;
        int64_t v27 = v26 & 292; // 0x40272b
        int64_t v28 = (v27 | (int64_t)(v27 == 0)) + (v27 ^ 511) & 292;
        int64_t v29 = (v26 & 146) != 0 ? v28 | 146 : v28; // 0x40274e
        v17 = v25;
        v9 = ((v26 & 73) != 0 ? v29 | 73 : v29) | v26;
        v5 = v24;
    }
    goto lab_0x402764;
  lab_0x4027cc:;
    int64_t v60 = (int64_t)*(char *)v15; // 0x4027d0
    int64_t v61 = v6 & (v20 | 73); // 0x4027d4
    int64_t v32 = v18; // 0x4027da
    int64_t v33 = v61; // 0x4027da
    int64_t v34 = v6; // 0x4027da
    int64_t v35 = v60; // 0x4027da
    int64_t v36 = v18; // 0x4027da
    int64_t v37 = v61; // 0x4027da
    int64_t v38 = v60; // 0x4027da
    if (v19 == 0) {
        goto lab_0x402770;
    } else {
        goto lab_0x4027e0;
    }
  lab_0x402764:;
    int64_t v30 = (int64_t)*(char *)v15; // 0x402764
    int64_t v31 = v9 & 0xffffffff & v5; // 0x402768
    v32 = v17;
    v33 = v31;
    v34 = v5;
    v35 = v30;
    v36 = v17;
    v37 = v31;
    v38 = v30;
    if (v19 != 0) {
        goto lab_0x4027e0;
    } else {
        goto lab_0x402770;
    }
  lab_0x402770:;
    int64_t v39 = v33 & (a3 & 0xffffffff ^ 0xffffffff);
    int64_t v40 = v39; // 0x4026e0
    int64_t v41 = v35; // 0x4026e0
    int64_t v42 = v32; // 0x4026e0
    int64_t v43 = v39; // 0x4026e0
    int64_t v44 = v34; // 0x4026e0
    int64_t v45 = v39; // 0x4026e0
    int64_t v46; // 0x4026e0
    switch ((char)v46) {
        case 45: {
            goto lab_0x402830;
        }
        case 61: {
            goto lab_0x4027fb;
        }
        default: {
            goto lab_0x402783;
        }
    }
  lab_0x4027e0:;
    int64_t v47 = v19; // 0x40279b
    int64_t v48 = v37 & v47;
    char v49 = v38; // 0x4027e3
    v45 = v48;
    if (v49 == 45) {
        goto lab_0x402830;
    } else {
        // 0x4027e9
        if (v49 != 61) {
            goto lab_0x402783;
        } else {
            int64_t v50 = v36 & 0xffffffff | v47 ^ 0xffffffff; // 0x4027f2
            v42 = v50;
            v43 = v48;
            v44 = v50 ^ 0xffffffff;
            goto lab_0x4027fb;
        }
    }
  lab_0x402830:;
    int64_t v51 = v11 & 0xffffffff & (v45 ^ 0xffffffff); // 0x402839
    int64_t v52 = (v45 | v13) & 0xffffffff; // 0x402839
    goto lab_0x40278d;
  lab_0x4027fb:;
    char v57 = *(char *)(v15 + 17); // 0x4027ff
    int64_t v58 = v44 % 0x1000 | v13 & 0xffffffff; // 0x40280d
    int64_t v59 = (v42 & v11 | v43) & 0xffffffff; // 0x402810
    int64_t v54 = v59; // 0x402816
    int64_t v55 = v58; // 0x402816
    char v56 = v57; // 0x402816
    result = v59;
    v3 = v58;
    if (v57 == 0) {
        // break -> 0x402818
        goto lab_0x402818_2;
    }
    goto lab_0x40279b;
  lab_0x402783:
    // 0x402783
    v51 = v11;
    v52 = v13;
    if ((char)v41 == 43) {
        // 0x402840
        v51 = (v40 | v11) & 0xffffffff;
        v52 = (v40 | v13) & 0xffffffff;
    }
    goto lab_0x40278d;
  lab_0x40278d:;
    char v53 = *(char *)(v15 + 17); // 0x402791
    v54 = v51;
    v55 = v52;
    v56 = v53;
    result = v51;
    v3 = v52;
    if (v53 == 0) {
        // break -> 0x402818
        goto lab_0x402818_2;
    }
    goto lab_0x40279b;
  lab_0x40279b:
    // 0x40279b
    v10 = v54;
    v14 = v15 + 16;
    v12 = v55;
    v7 = v56;
    goto lab_0x40279b_2;
}
// Address range: 0x402860 - 0x4028f9
int64_t function_402860(int64_t str) {
    // 0x402860
    if (str == 0) {
        // 0x4028d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40286e
    int64_t result = (int64_t)found_char_pos; // 0x40286e
    if (found_char_pos == NULL) {
        // 0x4028c9
        g35 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402878
    if (v1 - str < 7) {
        // 0x4028c9
        g35 = str;
        g29 = str;
        return result;
    }
    // 0x402888
    bool v2; // 0x402860
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402860
    int64_t v5 = result - 6; // 0x402860
    int64_t v6 = 7; // 0x402896
    unsigned char v7 = *(char *)v5; // 0x402896
    char v8 = *(char *)v4; // 0x402896
    char v9 = v8; // 0x402896
    bool v10 = false; // 0x402896
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
    int64_t v12 = (int64_t)"lt-"; // 0x4028a0
    int64_t v13 = v1; // 0x4028a0
    int64_t v14 = 3; // 0x4028a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4028c9
        g35 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4028b2
    char v16 = *(char *)v12; // 0x4028b2
    char v17 = v16; // 0x4028b2
    bool v18 = false; // 0x4028b2
    while (v15 == v16) {
        // 0x4028a2
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
    int64_t v20 = v1; // 0x4028bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4028be
        v20 = result + 4;
        g27 = v20;
    }
    // 0x4028c9
    g35 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x402900 - 0x4029f2
int64_t function_402900(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402914
    int64_t result = (int64_t)v1; // 0x402914
    if (result != a1) {
        // 0x402921
        return result;
    }
    int64_t v2 = function_406020(); // 0x402930
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4029e6
    if (v3 == 85) {
        // 0x402940
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4029d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40296e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40297b
        // 0x402921
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4029d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4029bd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4029ca
    // 0x402921
    return result4;
}
// Address range: 0x402a00 - 0x402a57
int64_t function_402a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402a00
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402a48
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402a57 - 0x403c21
int64_t function_402a57(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402aa1
    int64_t v3 = 0; // 0x402aa1
    int64_t v4; // 0x402a57
    int64_t v5; // 0x402a57
    int64_t v6; // 0x402a57
    int64_t v7; // 0x402a57
    int64_t v8; // 0x402a57
    int64_t v9; // 0x402a57
    int64_t v10; // 0x402a57
    int64_t v11; // 0x402a57
    int64_t v12; // 0x402a57
    int64_t v13; // 0x402a57
    int64_t v14; // 0x402a57
    int64_t v15; // 0x402a57
    int64_t v16; // 0x402a57
    int64_t v17; // 0x402a57
    int64_t v18; // 0x402a57
    int64_t result; // 0x402a57
    int64_t v19; // 0x402a57
    int32_t wc; // bp+132, 0x402a57
    int64_t ps; // bp+136, 0x402a57
    char v20; // 0x403010
    int64_t v21; // 0x403010
    int64_t v22; // 0x4033b8
    int64_t v23; // 0x402a57
    int64_t v24; // 0x4033d7
    int32_t v25; // 0x402a57
    while (true) {
      lab_0x402aa8_2:
        // 0x402aa8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402a57
        int64_t v27; // 0x402adc
        while (true) {
          lab_0x402aa8:
            // 0x402aa8
            v5 = v26;
            bool v28 = v15 == v5; // 0x402ab3
            if (v15 == -1) {
                // 0x402ab5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402ac3
            if (v28) {
                // break (via goto) -> 0x403228
                goto lab_0x403228;
            }
            // 0x402acc
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
                    // 0x4030bb
                    if (v25 % 2 == 0) {
                        goto lab_0x402c01;
                    }
                    // 0x4034dd
                    v26 = v5 + 1;
                    goto lab_0x402aa8;
                }
                case 7: {
                    goto lab_0x402c01;
                }
                case 8: {
                    goto lab_0x402c01;
                }
                case 9: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402c01;
                }
                case 12: {
                    goto lab_0x402c01;
                }
                case 13: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402bcd;
                }
                case 36: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402c01;
                }
                case 38: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402c01;
                }
                case 44: {
                    goto lab_0x402c01;
                }
                case 45: {
                    goto lab_0x402c01;
                }
                case 46: {
                    goto lab_0x402c01;
                }
                case 47: {
                    goto lab_0x402c01;
                }
                case 48: {
                    goto lab_0x402c01;
                }
                case 49: {
                    goto lab_0x402c01;
                }
                case 50: {
                    goto lab_0x402c01;
                }
                case 51: {
                    goto lab_0x402c01;
                }
                case 52: {
                    goto lab_0x402c01;
                }
                case 53: {
                    goto lab_0x402c01;
                }
                case 54: {
                    goto lab_0x402c01;
                }
                case 55: {
                    goto lab_0x402c01;
                }
                case 56: {
                    goto lab_0x402c01;
                }
                case 57: {
                    goto lab_0x402c01;
                }
                case 58: {
                    goto lab_0x402c01;
                }
                case 59: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402c01;
                }
                case 66: {
                    goto lab_0x402c01;
                }
                case 67: {
                    goto lab_0x402c01;
                }
                case 68: {
                    goto lab_0x402c01;
                }
                case 69: {
                    goto lab_0x402c01;
                }
                case 70: {
                    goto lab_0x402c01;
                }
                case 71: {
                    goto lab_0x402c01;
                }
                case 72: {
                    goto lab_0x402c01;
                }
                case 73: {
                    goto lab_0x402c01;
                }
                case 74: {
                    goto lab_0x402c01;
                }
                case 75: {
                    goto lab_0x402c01;
                }
                case 76: {
                    goto lab_0x402c01;
                }
                case 77: {
                    goto lab_0x402c01;
                }
                case 78: {
                    goto lab_0x402c01;
                }
                case 79: {
                    goto lab_0x402c01;
                }
                case 80: {
                    goto lab_0x402c01;
                }
                case 81: {
                    goto lab_0x402c01;
                }
                case 82: {
                    goto lab_0x402c01;
                }
                case 83: {
                    goto lab_0x402c01;
                }
                case 84: {
                    goto lab_0x402c01;
                }
                case 85: {
                    goto lab_0x402c01;
                }
                case 86: {
                    goto lab_0x402c01;
                }
                case 87: {
                    goto lab_0x402c01;
                }
                case 88: {
                    goto lab_0x402c01;
                }
                case 89: {
                    goto lab_0x402c01;
                }
                case 90: {
                    goto lab_0x402c01;
                }
                case 91: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402c01;
                }
                case 94: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402c01;
                }
                case 96: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402c01;
                }
                case 98: {
                    goto lab_0x402c01;
                }
                case 99: {
                    goto lab_0x402c01;
                }
                case 100: {
                    goto lab_0x402c01;
                }
                case 101: {
                    goto lab_0x402c01;
                }
                case 102: {
                    goto lab_0x402c01;
                }
                case 103: {
                    goto lab_0x402c01;
                }
                case 104: {
                    goto lab_0x402c01;
                }
                case 105: {
                    goto lab_0x402c01;
                }
                case 106: {
                    goto lab_0x402c01;
                }
                case 107: {
                    goto lab_0x402c01;
                }
                case 108: {
                    goto lab_0x402c01;
                }
                case 109: {
                    goto lab_0x402c01;
                }
                case 110: {
                    goto lab_0x402c01;
                }
                case 111: {
                    goto lab_0x402c01;
                }
                case 112: {
                    goto lab_0x402c01;
                }
                case 113: {
                    goto lab_0x402c01;
                }
                case 114: {
                    goto lab_0x402c01;
                }
                case 115: {
                    goto lab_0x402c01;
                }
                case 116: {
                    goto lab_0x402c01;
                }
                case 117: {
                    goto lab_0x402c01;
                }
                case 118: {
                    goto lab_0x402c01;
                }
                case 119: {
                    goto lab_0x402c01;
                }
                case 120: {
                    goto lab_0x402c01;
                }
                case 121: {
                    goto lab_0x402c01;
                }
                case 122: {
                    goto lab_0x402c01;
                }
                case 123: {
                    goto lab_0x402ba5;
                }
                case 124: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402ba5;
                }
                case 126: {
                    goto lab_0x402bcd;
                }
                default: {
                    goto lab_0x402fa5;
                }
            }
        }
      lab_0x402fa5:
        if (v23 != 1) {
            // 0x403310
            ps = 0;
            int64_t len = v15; // 0x403320
            if (v15 == -1) {
                // 0x403322
                len = strlen((char *)str);
            }
            // 0x40334e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4033af:
                // 0x4033af
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4033b4
                int64_t v30 = v29 + str;
                v24 = function_405ee0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40392a_2;
                    }
                    case -1: {
                        goto lab_0x40392a_2;
                    }
                    case -2: {
                        // 0x403a0d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403a47
                            v19 = v18;
                            int64_t v31 = v18; // 0x403a4a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403a57
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403a50
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40392a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40392a_2;
                    }
                    case 1: {
                        goto lab_0x403380;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40342c
                        char v34 = *(char *)v33; // 0x40343d
                        unsigned char v35; // 0x402a57
                        if (v34 < 125) {
                            // 0x403448
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40345f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403430
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40343d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403448
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40345f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403430
                            v33++;
                        }
                        goto lab_0x403380;
                    }
                }
            }
            goto lab_0x40392a_2;
        } else {
            // 0x402ff4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402c01;
        }
    }
  lab_0x403228:
    // 0x403228
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403b2a
        if (v8 > result) {
            // 0x403b33
            *(char *)(v12 + result) = 0;
        }
        // 0x402e57
        return result;
    }
    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402c01:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402c10
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402e1a_2;
        }
    }
    int64_t v39 = result; // 0x402d11
    char v40 = v20; // 0x402d11
    int64_t v41 = v38; // 0x402d11
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402d11
    int64_t v43 = v36; // 0x402d11
    goto lab_0x402c8d;
  lab_0x402e1a_2:
    // 0x402e57
    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40392a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402c01;
    } else {
        uint64_t v49 = v46 + v5; // 0x4034fe
        int64_t v50 = v5 + 1; // 0x4035e1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4035e8
        char v52 = v20; // 0x4035e8
        int64_t v53 = result; // 0x4035e8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4035b1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4035b5
            int64_t v56 = v54 + 1; // 0x4035ba
            int64_t v57 = v51 + 1; // 0x4035e1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4035ac
                v54 = v56;
                if (v47 > v54) {
                    // 0x4035b1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4035b5
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
        goto lab_0x402c8d;
    }
  lab_0x403380:
    // 0x403380
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40339f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4033a2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40392a
        goto lab_0x40392a_2;
    }
    goto lab_0x4033af;
  lab_0x402bcd:
    // 0x402bcd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402e1a_2;
    }
    goto lab_0x402c01;
  lab_0x402ba5:;
    bool v60 = v15 == 1; // 0x402bb0
    if (v15 == -1) {
        // 0x402bb2
        v60 = *(char *)v1 == 0;
    }
    // 0x402bbe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402c01;
    } else {
        goto lab_0x402bcd;
    }
  lab_0x402c8d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402c92
        *(char *)(v44 + v45) = v40;
    }
    // 0x402c96
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402aa8_2;
}
// Address range: 0x403c30 - 0x403dce
int64_t function_403c30(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403c32
    int32_t * v3 = __errno_location(); // 0x403c4c
    int64_t v4 = (int64_t)g20; // 0x403c51
    int32_t v5 = *v3; // 0x403c5b
    int64_t v6 = v4; // 0x403c71
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403dc9
            function_404c90(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403c80
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403c87
        int64_t v9; // 0x403c30
        if (g20 == &g21) {
            int64_t v10 = function_404aa0(0, v8); // 0x403daa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x403daf
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404aa0(v4, v8); // 0x403c9b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x403caa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x403caa
        int32_t v14 = v7; // 0x403cb1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403ce1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403ceb
    int64_t * v17 = (int64_t *)v15; // 0x403cee
    uint64_t v18 = *v17; // 0x403cee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403cf1
    int64_t result = *v19; // 0x403cf1
    int64_t v20; // 0x403c30
    uint64_t v21 = function_402a00(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403d14
    if (v18 > v21) {
        // 0x403d8b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403d27
    *v17 = v22;
    if (result != (int64_t)&g36) {
        // 0x403d37
        free((int64_t *)result);
    }
    int64_t result2 = function_404a40(v22); // 0x403d51
    *v19 = result2;
    int64_t v23; // 0x403c30
    function_402a00(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403d8b
    *v3 = v5;
    return result2;
}
// Address range: 0x403dd0 - 0x403e04
int64_t function_403dd0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403dd7
    int64_t result = function_404c40(a1 == 0 ? (int64_t)&g37 : a1, 56); // 0x403df6
    return result;
}
// Address range: 0x403e10 - 0x403e1f
int64_t function_403e10(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g37 : a1); // 0x403e1c
    return result;
}
// Address range: 0x403e20 - 0x403e2f
int64_t function_403e20(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403e28
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g37;
}
// Address range: 0x403e30 - 0x403e63
int64_t function_403e30(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 + 8 : a1 + 8; // 0x403e49
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403e4e
    uint32_t v3 = *v2; // 0x403e4e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403e52
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403e70 - 0x403e83
int64_t function_403e70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g37 + 4 : a1 + 4); // 0x403e7c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403e90 - 0x403ebb
int64_t function_403e90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403e98
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403eb5
        abort();
        // UNREACHABLE
    }
    // 0x403eac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g37;
}
// Address range: 0x403ec0 - 0x403f32
int64_t function_403ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g37 : a5; // 0x403ee2
    int32_t * v2 = __errno_location(); // 0x403eeb
    uint32_t v3 = *(int32_t *)v1; // 0x403f0b
    int64_t result = function_402a00(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403f1a
    return result;
}
// Address range: 0x403f40 - 0x404021
int64_t function_403f40(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g37 : a4; // 0x403f62
    int32_t * v2 = __errno_location(); // 0x403f68
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403f87
    int32_t * v4 = (int32_t *)v1; // 0x403f8a
    int64_t v5 = function_402a00(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403fa5
    int64_t v6 = v5 + 1; // 0x403faa
    int64_t result = function_404a40(v6); // 0x403fbf
    function_402a00(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404004
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40400d
    return result;
}
// Address range: 0x404030 - 0x40403a
int64_t function_404030(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404030
    return function_403f40(a1, a2, 0, a3);
}
// Address range: 0x404040 - 0x4040d5
int64_t function_404040(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x404040
    int64_t v2 = v1; // 0x404040
    int64_t v3 = v2; // 0x404054
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404073
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404070
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x40408d
    if (g21 != 0x60a2c0) {
        // 0x40408f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g36;
        v6 = &g50;
    }
    int64_t result = v6; // 0x4040b1
    if (g20 != &g21) {
        // 0x4040b3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g50;
    }
    // 0x4040c6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4040e0 - 0x4040f1
int64_t function_4040e0(void) {
    // 0x4040e0
    int64_t v1; // 0x4040e0
    return function_403c30(v1, v1, -1, (int64_t *)&g37);
}
// Address range: 0x404100 - 0x40410a
int64_t function_404100(void) {
    // 0x404100
    int64_t v1; // 0x404100
    return function_403c30(v1, v1, v1, (int64_t *)&g37);
}
// Address range: 0x404110 - 0x404126
int64_t function_404110(int64_t a1) {
    // 0x404110
    return function_403c30(0, a1, -1, (int64_t *)&g37);
}
// Address range: 0x404130 - 0x404142
int64_t function_404130(int64_t a1, int64_t a2) {
    // 0x404130
    return function_403c30(0, a1, a2, (int64_t *)&g37);
}
// Address range: 0x404150 - 0x4041b8
int64_t function_404150(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404160
    return function_403c30((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4041c0 - 0x404224
int64_t function_4041c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4041d0
    return function_403c30((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404230 - 0x40423c
int64_t function_404230(int64_t a1, int64_t a2) {
    // 0x404230
    return function_404150(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404240 - 0x40424f
int64_t function_404240(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404240
    return function_4041c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404250 - 0x4042c0
int64_t function_404250(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x40425d
    int128_t v2 = __asm_movdqa(g38); // 0x404265
    int128_t v3 = __asm_movdqa(g39); // 0x40426d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404282
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404298
    uint32_t v6 = *v5; // 0x404298
    uint32_t v7 = (int32_t)a3 % 32; // 0x40429d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403c30(0, a1, a2, &v4);
}
// Address range: 0x4042c0 - 0x4042cd
int64_t function_4042c0(int64_t a1, int64_t a2) {
    // 0x4042c0
    return function_404250(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4042d0 - 0x4042e1
int64_t function_4042d0(int64_t a1) {
    // 0x4042d0
    return function_404250(a1, -1, 58);
}
// Address range: 0x4042f0 - 0x4042fa
int64_t function_4042f0(void) {
    // 0x4042f0
    int64_t v1; // 0x4042f0
    return function_404250(v1, v1, 58);
}
// Address range: 0x404300 - 0x40436e
int64_t function_404300(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40431a
    return function_403c30((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404370 - 0x4043dc
int64_t function_404370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x404377
    int128_t v2 = __asm_movdqa(g38); // 0x40437f
    int128_t v3 = __asm_movdqa(g39); // 0x404387
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4043a9
    if (a2 == 0 || a3 == 0) {
        // 0x4043d7
        abort();
        // UNREACHABLE
    }
    // 0x4043ba
    return function_403c30(a1, a4, a5, &v4);
}
// Address range: 0x4043e0 - 0x4043e9
int64_t function_4043e0(void) {
    // 0x4043e0
    int64_t v1; // 0x4043e0
    return function_404370(v1, v1, v1, v1, -1);
}
// Address range: 0x4043f0 - 0x404407
int64_t function_4043f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4043f0
    return function_404370(0, a1, a2, a3, -1);
}
// Address range: 0x404410 - 0x404423
int64_t function_404410(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404410
    return function_404370(0, a1, a2, a3, a4);
}
// Address range: 0x404430 - 0x40443a
int64_t function_404430(void) {
    // 0x404430
    int64_t v1; // 0x404430
    return function_403c30(v1, v1, v1, &g19);
}
// Address range: 0x404440 - 0x404452
int64_t function_404440(int64_t a1, int64_t a2) {
    // 0x404440
    return function_403c30(0, a1, a2, &g19);
}
// Address range: 0x404460 - 0x404471
int64_t function_404460(void) {
    // 0x404460
    int64_t v1; // 0x404460
    return function_403c30(v1, v1, -1, &g19);
}
// Address range: 0x404480 - 0x404496
int64_t function_404480(int64_t a1) {
    // 0x404480
    return function_403c30(0, a1, -1, &g19);
}
// Address range: 0x4044a0 - 0x40487d
int64_t function_4044a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404538
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4044bc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4044d6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40451b
    if (a6 < 10) {
        // 0x40452a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404622
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404880 - 0x4048a0
int64_t function_404880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404880
    if (a5 == 0) {
        // 0x40489b
        return function_4044a0(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x404887
    v1++;
    int64_t v2 = v1; // 0x404899
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404890
        v1++;
        v2 = v1;
    }
    // 0x40489b
    return function_4044a0(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x4048a0 - 0x404900
int64_t function_4048a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4048a0
    int64_t v3 = &v2; // 0x4048a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4048d3
    int64_t v6; // 0x4048bd
    int64_t * v7; // 0x4048db
    int64_t v8; // 0x4048db
    int64_t v9; // 0x4048e7
    if (v5 < 48) {
        // 0x4048b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4048f3
            break;
        }
    } else {
        // 0x4048db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4048f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4048d1
    while (v4 != 9) {
        // 0x4048c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4048b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4048f3
                break;
            }
        } else {
            // 0x4048db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4048f3
                break;
            }
        }
        // 0x4048c9
        v10 = 10;
    }
    // 0x4048f3
    return function_4044a0(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x404900 - 0x4049bc
int64_t function_404900(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404900
    int64_t v1; // bp-168, 0x404900
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404900
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404900
    int64_t v8; // 0x404900
    int64_t v9; // bp-56, 0x404900
    int64_t v10; // 0x404965
    int64_t v11; // 0x404989
    if ((int32_t)v6 < 48) {
        // 0x404950
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4049a0
            break;
        }
    } else {
        // 0x404982
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4049a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40497a
    int64_t v13 = 10; // 0x40497a
    while (v5 != 9) {
        // 0x40497c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404950
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4049a0
                break;
            }
        } else {
            // 0x404982
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4049a0
                break;
            }
        }
        // 0x404972
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4049a0
    int64_t v14; // bp-136, 0x404900
    int64_t result = function_4044a0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x4049af
    return result;
}
// Address range: 0x4049c0 - 0x404a34
int64_t function_4049c0(int64_t a1) {
    // 0x4049c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404a23
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404a40 - 0x404a5a
int64_t function_404a40(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404a44
    if (size != 0 != (mem == NULL)) {
        // 0x404a53
        return (int64_t)mem;
    }
    // 0x404a55
    function_404c90(size);
    // UNREACHABLE
}
// Address range: 0x404a60 - 0x404a81
int64_t function_404a60(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404a63
    int64_t v2 = v1; // 0x404a63
    if (v2 < 0) {
        // 0x404a7b
        function_404c90(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404a79
        return function_404a40(v2);
    }
    // 0x404a7b
    function_404c90(v2);
    // UNREACHABLE
}
// Address range: 0x404a90 - 0x404a92
int64_t function_404a90(void) {
    // 0x404a90
    int64_t v1; // 0x404a90
    return function_404a40(v1);
}
// Address range: 0x404aa0 - 0x404ad6
int64_t function_404aa0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404ac8
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404ab1
    if (a2 != 0 != (mem == NULL)) {
        // 0x404ac0
        return (int64_t)mem;
    }
    // 0x404ad1
    function_404c90(a1);
    // UNREACHABLE
}
// Address range: 0x404ae0 - 0x404b01
int64_t function_404ae0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404ae3
    int64_t v2 = v1; // 0x404ae3
    if (v2 < 0) {
        // 0x404afb
        function_404c90(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404af9
        return function_404aa0(a1, v2);
    }
    // 0x404afb
    function_404c90(a1);
    // UNREACHABLE
}
// Address range: 0x404b10 - 0x404b96
int64_t function_404b10(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404b6b
            function_404c90(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404aa0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404b53
    if (a2 == 0) {
        // 0x404b78
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404b58
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404b6b
        function_404c90(a1);
        // UNREACHABLE
    }
    // 0x404b3a
    *(int64_t *)a2 = v2;
    return function_404aa0(a1, v2 * a3);
}
// Address range: 0x404ba0 - 0x404bf0
int64_t function_404ba0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404ba0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404bea
            function_404c90(a1);
            // UNREACHABLE
        }
        // 0x404bc2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404aa0(a1, v1);
    }
    if (a2 == 0) {
        // 0x404bd5
        *(int64_t *)a2 = 128;
        return function_404aa0(0, 128);
    }
    // 0x404be8
    if (a2 < 0) {
        // 0x404bea
        function_404c90(a1);
        // UNREACHABLE
    }
    // 0x404bc2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404aa0(a1, v1);
}
// Address range: 0x404bf0 - 0x404c07
int64_t function_404bf0(int64_t a1, int64_t a2) {
    // 0x404bf0
    return (int64_t)memset((int64_t *)function_404a40(a1), 0, (int32_t)a1);
}
// Address range: 0x404c10 - 0x404c3e
int64_t function_404c10(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404c17
    if ((int64_t)v1 < 0) {
        // 0x404c39
        function_404c90(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404c39
        function_404c90(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404c2a
    if (mem != NULL) {
        // 0x404c34
        return (int64_t)mem;
    }
    // 0x404c39
    function_404c90(nmemb);
    // UNREACHABLE
}
// Address range: 0x404c40 - 0x404c68
int64_t function_404c40(int64_t a1, int64_t a2) {
    int64_t v1 = function_404a40(a2); // 0x404c4f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404c70 - 0x404c83
int64_t function_404c70(int64_t str) {
    // 0x404c70
    return function_404c40(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404c90 - 0x404cc1
int64_t function_404c90(int64_t a1) {
    // 0x404c90
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404cd0 - 0x4051ef
int64_t function_404cd0(int64_t a1, int32_t a2, uint32_t a3, int64_t * a4, int32_t a5, int64_t a6) {
    if (a3 >= 37) {
        // 0x40518c
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    char c = a1;
    int32_t * v1 = __errno_location(); // 0x404d02
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x404d32
    int64_t v3 = a1; // 0x404d37
    char v4 = c; // 0x404d37
    if ((*(char *)(v2 + (2 * a1 & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x404d2c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x404d28
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x404d39
    if (v4 == 45) {
        // 0x404d75
        return 4;
    }
    int64_t str = a5;
    int64_t v6; // bp-64, 0x404cd0
    int64_t v7 = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x404cfe
    int32_t v8 = __strtoul_internal((char *)a1, (char **)v7, a3, 0); // 0x404d46
    int64_t * v9 = (int64_t *)v7; // 0x404d4b
    int64_t v10 = *v9; // 0x404d4b
    char v11; // 0x404cd0
    int64_t v12; // 0x404cd0
    int64_t v13; // 0x404cd0
    int64_t v14; // 0x404cd0
    int64_t v15; // 0x404cd0
    int64_t v16; // 0x404cd0
    int64_t v17; // 0x404cd0
    if (v10 == a1) {
        // 0x404da8
        if (c == 0 || a5 == 0) {
            // 0x404d75
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x404dc9
        v16 = 1;
        v13 = 0;
        v11 = c;
        if (found_char_pos == NULL) {
            // 0x404d75
            return 4;
        }
        goto lab_0x404dd7;
    } else {
        int32_t v18 = *v1; // 0x404d56
        int64_t v19 = 0; // 0x404d5c
        if (v18 != 0) {
            // 0x404d90
            v19 = 1;
            if (v18 != 34) {
                // 0x404d75
                return 4;
            }
        }
        int64_t v20 = v8; // 0x404d46
        v15 = v20;
        v12 = v19;
        if (a5 == 0) {
            goto lab_0x404d72;
        } else {
            char c2 = *(char *)v10; // 0x404d65
            v15 = v20;
            v12 = v19;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x404ed3
                v16 = v20;
                v13 = v19;
                v11 = c2;
                v17 = v20;
                v14 = v19;
                if (found_char_pos2 != NULL) {
                    goto lab_0x404dd7;
                } else {
                    goto lab_0x404ee5;
                }
            } else {
                goto lab_0x404d72;
            }
        }
    }
  lab_0x404dd7:;
    int64_t v21 = 0x100000000 * v10 >> 32;
    unsigned char v22 = v11 - 69;
    int64_t v23 = 1024; // 0x404ddf
    int64_t v24 = 1; // 0x404ddf
    int64_t v25; // 0x404cd0
    int64_t v26; // 0x404cd0
    int64_t v27; // 0x404cd0
    int64_t v28; // 0x404cd0
    int64_t v29; // 0x404cd0
    int64_t v30; // 0x404cd0
    int64_t v31; // 0x404cd0
    int64_t v32; // 0x404cd0
    int64_t v33; // 0x404cd0
    int64_t v34; // 0x404cd0
    int64_t v35; // 0x404cd0
    int64_t v36; // 0x404cd0
    int64_t v37; // 0x404cd0
    int64_t v38; // 0x404cd0
    int64_t v39; // 0x404cd0
    int64_t v40; // 0x404cd0
    int64_t v41; // 0x404cd0
    int64_t v42; // 0x404cd0
    int64_t v43; // 0x404cd0
    int64_t v44; // 0x404cd0
    if (v22 < 48) {
        // 0x404de1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v11 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x404e4a;
        } else {
            // 0x404df4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x404e4a;
            } else {
                // 0x404e10
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v21 + 1)) {
                    case 68: {
                        goto lab_0x404e4a;
                    }
                    case 105: {
                        char v45 = *(char *)(v21 + 2); // 0x405079
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x404e4a;
                    }
                    default: {
                        // 0x404e25
                        g47 = v22;
                        v23 = 1000;
                        v24 = 2;
                        v27 = 1024;
                        v39 = 1;
                        v26 = v16;
                        v25 = v13;
                        v40 = 1;
                        v28 = 1024;
                        v41 = 1;
                        v17 = v16;
                        v14 = v13;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v44 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        v34 = 1024;
                        v38 = 1;
                        switch (v11) {
                            case 69: {
                                goto lab_0x404feb;
                            }
                            case 70: {
                                goto lab_0x404ee5;
                            }
                            case 71: {
                                goto lab_0x405023;
                            }
                            case 72: {
                                goto lab_0x404ee5;
                            }
                            case 73: {
                                goto lab_0x404ee5;
                            }
                            case 74: {
                                goto lab_0x404ee5;
                            }
                            case 75: {
                                goto lab_0x404eac;
                            }
                            case 76: {
                                goto lab_0x404ee5;
                            }
                            case 77: {
                                goto lab_0x404e6e;
                            }
                            case 78: {
                                goto lab_0x404ee5;
                            }
                            case 79: {
                                goto lab_0x404ee5;
                            }
                            case 80: {
                                goto lab_0x404fb8;
                            }
                            case 81: {
                                goto lab_0x404ee5;
                            }
                            case 82: {
                                goto lab_0x404ee5;
                            }
                            case 83: {
                                goto lab_0x404ee5;
                            }
                            case 84: {
                                goto lab_0x404f88;
                            }
                            case 85: {
                                goto lab_0x404ee5;
                            }
                            case 86: {
                                goto lab_0x404ee5;
                            }
                            case 87: {
                                goto lab_0x404ee5;
                            }
                            case 88: {
                                goto lab_0x404ee5;
                            }
                            case 89: {
                                goto lab_0x404f56;
                            }
                            case 90: {
                                goto lab_0x404f1b;
                            }
                            case 91: {
                                goto lab_0x404ee5;
                            }
                            case 92: {
                                goto lab_0x404ee5;
                            }
                            case 93: {
                                goto lab_0x404ee5;
                            }
                            case 94: {
                                goto lab_0x404ee5;
                            }
                            case 95: {
                                goto lab_0x404ee5;
                            }
                            case 96: {
                                goto lab_0x404ee5;
                            }
                            case 97: {
                                goto lab_0x404ee5;
                            }
                            case 98: {
                                goto lab_0x404eff;
                            }
                            case 99: {
                                goto lab_0x404e88;
                            }
                            case 100: {
                                goto lab_0x404ee5;
                            }
                            case 101: {
                                goto lab_0x404ee5;
                            }
                            case 102: {
                                goto lab_0x404ee5;
                            }
                            case 103: {
                                goto lab_0x405023;
                            }
                            case 104: {
                                goto lab_0x404ee5;
                            }
                            case 105: {
                                goto lab_0x404ee5;
                            }
                            case 106: {
                                goto lab_0x404ee5;
                            }
                            case 107: {
                                goto lab_0x404eac;
                            }
                            case 108: {
                                goto lab_0x404ee5;
                            }
                            case 109: {
                                goto lab_0x404e6e;
                            }
                            case 110: {
                                goto lab_0x404ee5;
                            }
                            case 111: {
                                goto lab_0x404ee5;
                            }
                            case 112: {
                                goto lab_0x404ee5;
                            }
                            case 113: {
                                goto lab_0x404ee5;
                            }
                            case 114: {
                                goto lab_0x404ee5;
                            }
                            case 115: {
                                goto lab_0x404ee5;
                            }
                            case 116: {
                                goto lab_0x404f88;
                            }
                            default: {
                                goto lab_0x404e4a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x404e4a;
    }
  lab_0x404d72:
    // 0x404d72
    *a4 = v15;
    // 0x404d75
    return v12 & 0xffffffff;
  lab_0x404e4a:
    // 0x404e4a
    g48 = v11 - 66;
    v27 = v23;
    v39 = v24;
    v26 = v16;
    v25 = v13;
    v40 = v24;
    v28 = v23;
    v41 = v24;
    v17 = v16;
    v14 = v13;
    v42 = v24;
    v29 = v23;
    v43 = v24;
    v30 = v23;
    v44 = v24;
    v31 = v23;
    v35 = v24;
    v32 = v23;
    v36 = v24;
    v33 = v23;
    v37 = v24;
    v34 = v23;
    v38 = v24;
    int64_t v46; // 0x404cd0
    switch (v11) {
        case 66: {
            // 0x405044
            v46 = v24;
            if (v16 >= 0x40000000000000) {
                goto lab_0x404eb7;
            } else {
                // 0x405051
                v26 = 1024 * v16;
                v25 = v13;
                v40 = v24;
                goto lab_0x404e88;
            }
        }
        case 69: {
            goto lab_0x404feb;
        }
        case 71: {
            goto lab_0x405023;
        }
        case 75: {
            goto lab_0x404eac;
        }
        case 77: {
            goto lab_0x404e6e;
        }
        case 80: {
            goto lab_0x404fb8;
        }
        case 84: {
            goto lab_0x404f88;
        }
        case 89: {
            goto lab_0x404f56;
        }
        case 90: {
            goto lab_0x404f1b;
        }
        case 98: {
            goto lab_0x404eff;
        }
        case 99: {
            goto lab_0x404e88;
        }
        case 103: {
            goto lab_0x405023;
        }
        case 107: {
            goto lab_0x404eac;
        }
        case 109: {
            goto lab_0x404e6e;
        }
        case 116: {
            goto lab_0x404f88;
        }
        case 119: {
            // 0x404ef0
            v46 = v24;
            if (v16 < 0) {
                goto lab_0x404eb7;
            } else {
                // 0x404ef5
                v26 = 2 * v16;
                v25 = v13;
                v40 = v24;
                goto lab_0x404e88;
            }
        }
        default: {
            goto lab_0x404ee5;
        }
    }
  lab_0x404feb:;
    uint128_t v47 = (int128_t)v16 * (int128_t)v33; // 0x405003
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x40500f
    int64_t v51 = v48; // 0x405012
    int64_t v52 = v37; // 0x405012
    int64_t v53 = v49; // 0x405012
    int32_t v54 = v50; // 0x405012
    int64_t v55 = v49; // 0x405012
    while (v50 != 0) {
        // 0x405000
        v47 = (int128_t)v48 * (int128_t)v33;
        v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
        v49 = v47 > 0xffffffffffffffff ? 1 : v55;
        v50 = v54 - 1;
        v51 = v48;
        v52 = v37;
        v53 = v49;
        v54 = v50;
        v55 = v49;
    }
    goto lab_0x404f44;
  lab_0x405023:
    // 0x405023
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v16 <= 0xffffffffffffffff) {
        // 0x40502e
        int128_t v56; // 0x405029
        uint128_t v57; // 0x405029
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x40502e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x404cd0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x405033
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x405038
                v26 = v60;
                int64_t v61; // 0x404cd0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x404e88;
  lab_0x404eac:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v16; // 0x404eaf
    v26 = v64;
    v25 = v13;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x404e88;
    } else {
        goto lab_0x404eb7;
    }
  lab_0x404e6e:;
    int128_t v65 = v27; // 0x404e74
    uint128_t v66 = v65 * (int128_t)v16; // 0x404e74
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x404eb7;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x404e79
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x404eb7;
        } else {
            // 0x404e7e
            v26 = v67;
            v25 = v13;
            v40 = v39;
            goto lab_0x404e88;
        }
    }
  lab_0x404fb8:;
    uint128_t v68 = (int128_t)v16 * (int128_t)v32; // 0x404fcb
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x404fd7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x404fda
    int64_t v73 = v70; // 0x404fda
    while (v71 != 0) {
        // 0x404fc8
        v68 = (int128_t)v69 * (int128_t)v32;
        v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
        v70 = v68 > 0xffffffffffffffff ? 1 : v73;
        v71 = v72 - 1;
        v51 = v69;
        v52 = v36;
        v53 = v70;
        v72 = v71;
        v73 = v70;
    }
    goto lab_0x404f44;
  lab_0x404f88:;
    uint128_t v74 = (int128_t)v16 * (int128_t)v31; // 0x404f9b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x404fa7
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x404faa
    int64_t v79 = v76; // 0x404faa
    while (v77 != 0) {
        // 0x404f98
        v74 = (int128_t)v75 * (int128_t)v31;
        v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
        v76 = v74 > 0xffffffffffffffff ? 1 : v79;
        v77 = v78 - 1;
        v51 = v75;
        v52 = v35;
        v53 = v76;
        v78 = v77;
        v79 = v76;
    }
    goto lab_0x404f44;
  lab_0x404f56:;
    uint128_t v80 = (int128_t)v16 * (int128_t)v30; // 0x404f6b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x404f77
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x404f7a
    int64_t v85 = v82; // 0x404f7a
    while (v83 != 0) {
        // 0x404f68
        v80 = (int128_t)v81 * (int128_t)v30;
        v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
        v82 = v80 > 0xffffffffffffffff ? 1 : v85;
        v83 = v84 - 1;
        v51 = v81;
        v52 = v44;
        v53 = v82;
        v84 = v83;
        v85 = v82;
    }
    goto lab_0x404f44;
  lab_0x404f1b:;
    uint128_t v86 = (int128_t)v16 * (int128_t)v29; // 0x404f33
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x404f3f
    int32_t v90 = v89; // 0x404f42
    int64_t v91 = v88; // 0x404f42
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x404f30
        v86 = (int128_t)v87 * (int128_t)v29;
        v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
        v88 = v86 > 0xffffffffffffffff ? 1 : v91;
        v89 = v90 - 1;
        v90 = v89;
        v91 = v88;
        v51 = v87;
        v52 = v43;
        v53 = v88;
    }
    goto lab_0x404f44;
  lab_0x404eff:
    // 0x404eff
    v46 = v42;
    if (v16 >= 0x80000000000000) {
        goto lab_0x404eb7;
    } else {
        // 0x404f08
        v26 = 512 * v16;
        v25 = v13;
        v40 = v42;
        goto lab_0x404e88;
    }
  lab_0x404e88:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v21; // 0x404e8d
    *v9 = v63;
    v15 = v26;
    v12 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x404d72;
  lab_0x404ee5:
    // 0x404ee5
    *a4 = v17;
    // 0x404d75
    return (v14 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x404eb7:
    // 0x404eb7
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x404e88;
  lab_0x404f44:
    // 0x404f44
    v26 = v51;
    v25 = (v53 | v13) & 0xffffffff;
    v40 = v52;
    goto lab_0x404e88;
}
// Address range: 0x4051f0 - 0x40580c
int64_t function_4051f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40520f
    int64_t v2 = *v1; // 0x40520f
    char * str2 = (char *)v2; // 0x40521c
    char c = *str2; // 0x40521c
    int64_t v3 = v2; // 0x405248
    int64_t v4 = 0; // 0x4051f0
    int32_t v5; // 0x4051f0
    int64_t v6; // 0x4051f0
    int64_t v7; // 0x4051f0
    int64_t v8; // 0x4051f0
    int64_t v9; // 0x4051f0
    int64_t v10; // 0x4051f0
    int64_t v11; // 0x4051f0
    int64_t v12; // 0x4051f0
    int64_t v13; // 0x4051f0
    int64_t str3; // 0x4051f0
    int64_t v14; // 0x4051f0
    int64_t v15; // 0x4051f0
    int64_t v16; // 0x4051f0
    int64_t v17; // 0x4051f0
    int32_t v18; // 0x4051f0
    int32_t v19; // 0x4051f0
    int32_t v20; // 0x4051f0
    int32_t v21; // 0x4051f0
    int32_t v22; // 0x4051f0
    int32_t v23; // 0x4051f0
    int32_t v24; // 0x4051f0
    int32_t v25; // 0x4051f0
    int32_t v26; // 0x4051f0
    int32_t v27; // 0x4051f0
    int32_t v28; // 0x4051f0
    int32_t v29; // 0x4051f0
    int64_t nmemb; // 0x4051f0
    int64_t v30; // 0x4051f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40524c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405248
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405258
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40525e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405228
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40528c
                int64_t v34; // 0x4051f0
                int64_t v35; // 0x4051f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405295
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405410;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4052a6
                int64_t v37 = *(int64_t *)v36; // 0x4052aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405280
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405295
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405410;
                        }
                    }
                    // 0x4052a6
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
                  lab_0x4052f6:
                    // 0x4052f6
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
                        goto lab_0x405350;
                    } else {
                        if (v11 == 0) {
                            // 0x4054c0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405350;
                        } else {
                            if (v39 == 0) {
                                // 0x405470
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40531a;
                                } else {
                                    // 0x40547c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40531a;
                                    } else {
                                        // 0x40548a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40531a;
                                        } else {
                                            goto lab_0x405350;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40531a;
                            }
                        }
                    }
                }
              lab_0x405361:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405536
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4056e2
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x405702
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40574f
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x405769
                            int64_t v45; // 0x40576b
                            if (*(char *)v42 != 0) {
                                // 0x40576b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405763
                            while (v17 + nmemb != v42) {
                                // 0x405765
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40576b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x405758
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405790
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x405544
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40569f
                        free((int64_t *)v17);
                    }
                    // 0x405599
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4055b0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40545e
                    return 63;
                }
                // 0x405380
                v5 = v39;
                if (v13 != 0) {
                    // 0x405404
                    v35 = v13;
                    v34 = v25;
                  lab_0x405410:;
                    int32_t * v49 = (int32_t *)a7; // 0x405420
                    uint32_t v50 = *v49; // 0x405420
                    int64_t v51 = v50; // 0x405420
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40542a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405433
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40565f
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40560a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40545e
                            return 63;
                        }
                        // 0x4054a8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4057bf
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4056bd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4056d0
                                // 0x40545e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4055ce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4055e2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40544b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40544e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405452
                    int64_t result = v59; // 0x405458
                    if (v58 != 0) {
                        // 0x40545a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40545e
                    return result;
                }
            } else {
                // 0x40525e
                v5 = v32;
            }
            // break -> 0x405385
            break;
        }
    }
    // 0x405385
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40539d
        if (*(char *)(v60 + 1) != 45) {
            // 0x4053a7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40545e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4054e9
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4053d6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4053e6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405350:
    // 0x405350
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405350
    int64_t v63 = *(int64_t *)v62; // 0x405354
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405361
        goto lab_0x405361;
    }
    goto lab_0x4052f6;
  lab_0x40531a:
    // 0x40531a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4051f0
    int32_t v65; // 0x4051f0
    int32_t v66; // 0x4051f0
    if (v27 != 0) {
        goto lab_0x405350;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4054d0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405350;
            } else {
                goto lab_0x405341;
            }
        } else {
            // 0x405335
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40562c
                int64_t v67 = (int64_t)mem; // 0x40562c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405350;
                } else {
                    // 0x40563f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405341;
                }
            } else {
                goto lab_0x405341;
            }
        }
    }
  lab_0x405341:
    // 0x405341
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405350;
}
// Address range: 0x405810 - 0x405dd6
int64_t function_405810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405831
    if (v3 < 1) {
        // 0x4059ee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40582d
    int32_t v5 = *(int32_t *)a7; // 0x405839
    uint64_t v6 = a1 & 0xffffffff; // 0x40583b
    int64_t v7 = v2; // 0x405840
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405843
    *v8 = 0;
    int64_t v9; // 0x405810
    int64_t v10; // 0x405810
    int64_t v11; // 0x405810
    int64_t v12; // 0x405810
    int64_t str; // 0x405810
    int64_t v13; // 0x405810
    int64_t v14; // 0x405810
    int64_t v15; // 0x405810
    int64_t v16; // 0x405810
    int64_t v17; // 0x405810
    int32_t v18; // 0x405810
    char v19; // 0x405810
    if (v5 == 0) {
        // 0x405a28
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40585a;
    } else {
        // 0x405853
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4058a0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4058a3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405968;
            } else {
                int64_t v22 = v7 + 1; // 0x4058b6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4058c6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40597c;
                } else {
                    goto lab_0x4058d8;
                }
            }
        } else {
            goto lab_0x40585a;
        }
    }
  lab_0x40585a:
    // 0x40585a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405860
    *v24 = 0;
    int64_t v25; // 0x405810
    int64_t v26; // 0x405810
    int64_t v27; // 0x405810
    switch (*(char *)&v2) {
        case 45: {
            // 0x405950
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40595d;
        }
        case 43: {
            // 0x405c60
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40595d;
        }
        default: {
            // 0x40587c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405bdf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405cf8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40595d;
                } else {
                    // 0x405bed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40588a;
                }
            } else {
                goto lab_0x40588a;
            }
        }
    }
  lab_0x405968:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40596f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4058d8;
    } else {
        goto lab_0x40597c;
    }
  lab_0x40588a:
    // 0x40588a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40595d;
  lab_0x40595d:
    // 0x40595d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405968;
  lab_0x4058d8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4058d8
    int64_t v31 = v30; // 0x4058d8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4058da
    if ((int64_t)*v32 > v31) {
        // 0x4058df
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4058e2
    if (*v33 > v30) {
        // 0x4058e7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4058ea
    int64_t v35 = v31; // 0x4058ee
    int64_t v36 = v15; // 0x4058ee
    int64_t v37; // 0x405810
    int64_t v38; // 0x405810
    int64_t v39; // 0x405810
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405a58
        int64_t v41 = v40; // 0x405a58
        v2 = v41;
        int64_t v42; // 0x405810
        if (*v33 == v40) {
            // 0x405c40
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405c48
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405a64
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405a78
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405a81
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405a8a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405aa1
            int64_t v47 = v45 & 0xffffffff; // 0x405aa5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405aae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405ab4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405ab6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405a90
            int64_t v49 = v48 & 0xffffffff; // 0x405a90
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405aa1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405aae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405ab4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405ab6;
                    }
                }
                // 0x405a90
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405c58
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405ab6;
    } else {
        goto lab_0x4058f4;
    }
  lab_0x40597c:
    // 0x40597c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40597f
    int64_t v51 = v12; // 0x40597f
    int64_t v52 = v14; // 0x40597f
    if (*(char *)v10 == 0) {
        goto lab_0x4058d8;
    } else {
        goto lab_0x405985;
    }
  lab_0x4058f4:;
    int32_t v53 = v35; // 0x4058f4
    int64_t v54; // 0x405810
    int64_t v55; // 0x405810
    int64_t v56; // 0x405810
    int64_t v57; // 0x405810
    int64_t v58; // 0x405810
    int64_t v59; // 0x405810
    char * v60; // 0x405810
    int64_t v61; // 0x405810
    int64_t v62; // 0x405909
    int64_t v63; // 0x405810
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405a43
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405a46;
    } else {
        // 0x4058fc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405810
        int64_t v66 = v65 ? -1 : 1; // 0x405910
        int64_t v67 = (int64_t)"--"; // 0x405810
        int64_t v68 = v62; // 0x405810
        int64_t v69 = 3; // 0x405910
        unsigned char v70 = *(char *)v68; // 0x405910
        char v71 = *(char *)v67; // 0x405910
        char v72 = v71; // 0x405910
        bool v73 = false; // 0x405910
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
            // 0x405a00
            if (*(char *)v62 == 45) {
                // 0x405ac0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405ac0
                if (c == 0) {
                    goto lab_0x405a0a;
                } else {
                    // 0x405acd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405b50;
                    } else {
                        if (c == 45) {
                            // 0x405d33
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405ba5;
                        } else {
                            // 0x405ade
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405b50;
                            } else {
                                // 0x405ae3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405b04;
                                } else {
                                    // 0x405aea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405b50;
                                    } else {
                                        goto lab_0x405b04;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405a0a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405920
            v2 = v75;
            int32_t v76 = *v32; // 0x405923
            int64_t v77 = v35 + 1; // 0x405926
            int32_t v78 = v77; // 0x405929
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405c90
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405937
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405945
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405a46;
        }
    }
  lab_0x405985:;
    // 0x405985
    int64_t v79; // bp-104, 0x405810
    int64_t v80 = &v79; // 0x40581a
    int64_t v81 = v50 + 1; // 0x405985
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40598c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405991
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405995
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405999
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4059a1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4059a6
    int32_t c2 = v84; // 0x4059a6
    char * found_char_pos = strchr(str2, c2); // 0x4059a6
    int64_t v87 = *v82; // 0x4059ab
    v2 = v87;
    int64_t v88 = *v85; // 0x4059b5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4059c0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405cb0
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405c7d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4059ee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4059a6
    char v91 = *(char *)(v90 + 1); // 0x4059db
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405995
        if (v91 != 58) {
            // 0x4059ee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405c04
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405d08
                *v8 = 0;
            } else {
                // 0x405cec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405c2e
            *v83 = 0;
            // 0x4059ee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405c0e
        if (v93 != 0) {
            // 0x405ca0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405c2e
            *v83 = 0;
            // 0x4059ee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405c21
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405c2e
            *v83 = 0;
            // 0x4059ee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405d6a
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405d1a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405d21
        // 0x405c2e
        *v83 = 0;
        // 0x4059ee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405b79
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405b7b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405da0
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405d51
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405d58
            // 0x4059ee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405b86
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405b8a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405ba5;
  lab_0x405ab6:
    // 0x405ab6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4058f4;
  lab_0x405ba5:;
    int64_t v99 = function_4051f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405bc3
    // 0x4059ee
    return v99 & 0xffffffff;
  lab_0x405a46:;
    int32_t v100 = v55; // 0x405a46
    if (v100 != (int32_t)v59) {
        // 0x405a4a
        *(int32_t *)a7 = v100;
    }
    // 0x4059ee
    return 0xffffffff;
  lab_0x405a0a:
    // 0x405a0a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405a11
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4059ee
    return v99 & 0xffffffff;
  lab_0x405b50:
    // 0x405b50
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405985;
  lab_0x405b04:
    // 0x405b04
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4051f0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x405b2a
    if ((int32_t)v101 != -1) {
        // 0x4059ee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405b3f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405b50;
}
// Address range: 0x405de0 - 0x405e36
int64_t function_405de0(int64_t a1) {
    // 0x405de0
    *(int32_t *)&g40 = g26;
    *(int32_t *)&g41 = g25;
    int64_t v1; // 0x405de0
    int64_t result = function_405810(v1, v1, v1, v1, v1, v1, &g40, a1 & 0xffffffff); // 0x405e06
    g26 = *(int32_t *)&g40;
    g45 = g43;
    *(int32_t *)&g24 = g42;
    return result;
}
// Address range: 0x405e40 - 0x405e58
int64_t function_405e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405e40
    return function_405de0(1);
}
// Address range: 0x405e60 - 0x405e73
int64_t function_405e60(int64_t a1, int64_t a2, char * a3, char (**a4)[8], int32_t a5, int64_t a6) {
    // 0x405e60
    return function_405de0(0);
}
// Address range: 0x405e80 - 0x405e95
int64_t function_405e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405e80
    return function_405810(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405ea0 - 0x405eb6
int64_t function_405ea0(void) {
    // 0x405ea0
    return function_405de0(0);
}
// Address range: 0x405ec0 - 0x405ed8
int64_t function_405ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405ec0
    return function_405810(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405ee0 - 0x405f5a
int64_t function_405ee0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405eeb
    int64_t v2 = (int64_t)&g10; // 0x405eeb
    int32_t * pwc; // 0x405ee0
    int64_t v3; // 0x405ee0
    int64_t n; // 0x405ee0
    if (a2 == 0) {
        goto lab_0x405f32;
    } else {
        // 0x405eed
        if (a3 == 0) {
            // 0x405f18
            return -2;
        }
        // 0x405ef9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405f32;
        } else {
            goto lab_0x405f04;
        }
    }
  lab_0x405f32:
    // 0x405f32
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405ee0
    pwc = (int32_t *)&v4;
    goto lab_0x405f04;
  lab_0x405f04:;
    char * wstr = (char *)v3; // 0x405f0a
    int64_t ps; // 0x405ee0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405f0a
    int64_t result = v5; // 0x405f0a
    if (v5 < 0xfffffffe) {
        // 0x405f18
        return result;
    }
    int64_t result2 = result; // 0x405f49
    if ((char)function_405fc0(0, v3) == 0) {
        // 0x405f4b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405f18
    return result2;
}
// Address range: 0x405f60 - 0x405fbd
int64_t function_405f60(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405f67
    int64_t v2; // 0x405f60
    int64_t result = function_406590(a1, v2); // 0x405f78
    if ((v2 & 32) != 0) {
        // 0x405fa0
        if ((int32_t)result == 0) {
            // 0x405fa4
            *__errno_location() = 0;
        }
        // 0x405f9a
        return 0xffffffff;
    }
    // 0x405f81
    if ((int32_t)result == 0) {
        // 0x405f9a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405f88
    if (v1 == 0) {
        // 0x405f8a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405f9a
    return result2;
}
// Address range: 0x405fc0 - 0x40601e
int64_t function_405fc0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405fc6
    if (locale == NULL) {
        // 0x405ff3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405fc6
    bool v2; // 0x405fc0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405fc0
    int64_t v5 = v1; // 0x405fc0
    int64_t v6 = 2; // 0x405fe5
    unsigned char v7 = *(char *)v5; // 0x405fe5
    char v8 = *(char *)v4; // 0x405fe5
    char v9 = v8; // 0x405fe5
    bool v10 = false; // 0x405fe5
    while (v7 == v8) {
        // 0x405fd8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405ff1
    int64_t v13 = v1; // 0x405ff1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405ff3
        return 0;
    }
    int64_t v14 = 6; // 0x405ff1
    unsigned char v15 = *(char *)v13; // 0x40600d
    char v16 = *(char *)v12; // 0x40600d
    char v17 = v16; // 0x40600d
    bool v18 = false; // 0x40600d
    while (v15 == v16) {
        // 0x406000
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
// Address range: 0x406020 - 0x406582
int64_t function_406020(void) {
    char * v1 = nl_langinfo(14); // 0x406036
    char * v2 = g44; // 0x40603b
    char * v3; // 0x406020
    int64_t v4; // 0x406020
    int64_t v5; // 0x406020
    int64_t v6; // 0x406020
    int64_t v7; // 0x406020
    int32_t size; // 0x406020
    int32_t size2; // 0x406020
    int32_t len; // 0x4060f2
    int64_t v8; // 0x4060f2
    char * env_val; // 0x4060dd
    if (v2 == NULL) {
        // 0x4060d8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406145;
        } else {
            // 0x4060ea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406145;
            } else {
                // 0x4060ef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4060dd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406575
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406145;
                    } else {
                        // 0x4064e9
                        size2 = len + 14;
                        goto lab_0x40610b;
                    }
                } else {
                    goto lab_0x40610b;
                }
            }
        }
    } else {
        // 0x406020
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40605a;
    }
  lab_0x40638c:;
    // 0x40638c
    struct _IO_FILE * stream; // 0x4061cb
    int32_t v10 = __uflow(stream); // 0x40638f
    int64_t v11; // 0x406020
    int64_t v12 = v11; // 0x406399
    int64_t v13; // 0x406020
    int64_t v14 = v13; // 0x406399
    int32_t v15 = v10; // 0x406399
    int64_t v16; // 0x406020
    int64_t v17 = v16; // 0x406399
    int64_t v18 = v11; // 0x406399
    int64_t v19 = v13; // 0x406399
    int64_t v20 = v16; // 0x406399
    if (v10 == -1) {
        // break -> 0x40639f
        goto lab_0x40639f;
    }
    goto lab_0x406219;
  lab_0x40620e:;
    // 0x40620e
    int64_t v90; // 0x406020
    int64_t * v32; // 0x406200
    *v32 = v90 + 1;
    int64_t v89; // 0x406020
    v12 = v89;
    int64_t v91; // 0x406020
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406020
    v17 = v92;
    goto lab_0x406219;
  lab_0x406219:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406020
    int32_t v25; // bp-120, 0x406020
    int32_t v26; // bp-184, 0x406020
    int64_t v27; // 0x4061cb
    int64_t v28; // 0x4061e8
    int64_t v29; // 0x4061ed
    int64_t * v30; // 0x406204
    switch (c) {
        case 32: {
            goto lab_0x406200;
        }
        case 10: {
            goto lab_0x406200;
        }
        case 9: {
            goto lab_0x406200;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4063f1
            int32_t v33; // 0x406020
            char v34; // 0x406020
            int32_t v35; // 0x4063fe
            if (v31 < *v30) {
                // 0x4063d0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4063fb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4063f1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4063d0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4063fb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4063e0
                v36 = v33;
            }
            // 0x4064cf
            if (v36 == -1) {
                // break -> 0x40639f
                break;
            }
            goto lab_0x406200;
        }
        default: {
            // 0x40622f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40639f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406258
            int64_t v39 = v37 + 4; // 0x40625a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406266
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406268
            while (v41 == 0) {
                // 0x406258
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406286
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406292
            int64_t v45 = v43 + 4; // 0x406294
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4062a0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4062a2
            while (v47 == 0) {
                // 0x406292
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40628f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4062b8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4062c8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4062cc
            int64_t v52 = v51 + v48; // 0x4062d5
            int64_t * mem; // 0x406020
            int64_t v53; // 0x406020
            int64_t v54; // 0x406020
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40640b
                int64_t v56 = v55 + 3; // 0x406417
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4062f1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406300
            if (mem == NULL) {
                // 0x40652c
                free((int64_t *)v21);
                function_406590(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x4061a4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406318
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406322
            uint32_t v62 = (int32_t)v59; // 0x406325
            int64_t v63; // 0x406020
            if (v62 >= 8) {
                // 0x406434
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40644e
                int64_t v66 = v61 - v65; // 0x406452
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40645d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40646e
                    int64_t v70 = v69 & 0xffffffff; // 0x40646e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40646b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4064ff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406337
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40633b
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
            int64_t v73 = v51 + 1; // 0x40634b
            int64_t v74 = v60 - 1; // 0x40634f
            uint32_t v75 = (int32_t)v73; // 0x406354
            int64_t v76; // 0x406020
            if (v75 >= 8) {
                // 0x406482
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40648c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40649c
                int64_t v80 = v74 - v79; // 0x4064a0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4064ab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4064bb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4064b9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406516
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40651e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406366
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40636a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406563
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40637e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40620e;
            } else {
                goto lab_0x40638c;
            }
        }
    }
  lab_0x406200:;
    int64_t v93 = v23; // 0x406020
    int64_t v94 = v22; // 0x406020
    int64_t v95 = v21; // 0x406020
    goto lab_0x406200_2;
  lab_0x406145:;
    int64_t * mem3 = malloc(size); // 0x406145
    int64_t v97 = (int64_t)&g10; // 0x406150
    int64_t v98; // 0x406020
    int64_t path; // 0x406020
    if (mem3 == NULL) {
        goto lab_0x406122;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406145
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406166;
    }
  lab_0x40605a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40604d
    char v100 = *v3; // 0x40605a
    int64_t v101; // 0x406020
    if (v100 == 0) {
        // 0x4060b4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406020
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406020
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4060a0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4060a7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406070
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40607d
        char v107 = *(char *)v106; // 0x406082
        v102 = v107;
        if (v107 == 0) {
            // 0x4060b4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40608b
    v104 = v103 + 1;
  lab_0x4060a7:
    // 0x4060b4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406122:;
    char * v108 = (char *)v97;
    g44 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40605a;
  lab_0x406166:;
    int64_t v109 = v98 + path; // 0x406166
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406192
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x4061c1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4064f2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4061e5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406200_2:;
                uint64_t v96 = *v32; // 0x406200
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40638c;
                } else {
                    goto lab_0x40620e;
                }
            }
          lab_0x40639f:
            // 0x40639f
            function_406590(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x4063be
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4061a4;
  lab_0x40610b:;
    int64_t * mem4 = malloc(size2); // 0x40610b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x4061b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406166;
    } else {
        goto lab_0x406122;
    }
  lab_0x4061a4:
    // 0x4061a4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406122;
}
// Address range: 0x406590 - 0x40660b
int64_t function_406590(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406597
    if (fileno(stream) < 0) {
        // 0x4065f7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4065aa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4065db
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4065f7
            return fclose(stream);
        }
    }
    // 0x4065ac
    if ((int32_t)function_406610(a1, v1) == 0) {
        // 0x4065f7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4065b8
    int32_t v3 = *v2; // 0x4065c0
    int64_t result = fclose(stream); // 0x4065ce
    if (v3 != 0) {
        // 0x406600
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4065d0
    return result;
}
// Address range: 0x406610 - 0x406650
int64_t function_406610(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40662a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40662a
        return fflush(stream);
    }
    // 0x406638
    function_406650(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406650 - 0x4066a7
int64_t function_406650(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406650
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40665a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40668b
    int64_t result = -1; // 0x406694
    if (v1 != -1) {
        // 0x406696
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4066a2
    return result;
}
// Address range: 0x4066b0 - 0x40670d
int64_t function_4066b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4066b0
    return function_4013b0();
}
// Address range: 0x406710 - 0x406711
int64_t function_406710(void) {
    // 0x406710
    int64_t result; // 0x406710
    return result;
}
// Address range: 0x406720 - 0x406738
int64_t function_406720(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406720
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406738 - 0x406758
int64_t function_406738(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406742
    while (*(int64_t *)v1 != -1) {
        // 0x406743
        v1 -= 8;
    }
    // 0x406754
    return result;
}
