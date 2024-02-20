#include "decompile_retdec.h"
// Address range: 0x4018c0 - 0x4018c5
int64_t function_4018c0(void) {
    // 0x4018c0
    abort();
    // UNREACHABLE
}
// Address range: 0x4018c5 - 0x4018ca
int64_t function_4018c5(void) {
    // 0x4018c5
    abort();
    // UNREACHABLE
}
// Address range: 0x4018ca - 0x4018cf
int64_t function_4018ca(void) {
    // 0x4018ca
    abort();
    // UNREACHABLE
}
// Address range: 0x4018cf - 0x4018d4
int64_t function_4018cf(void) {
    // 0x4018cf
    abort();
    // UNREACHABLE
}
// Address range: 0x4018d4 - 0x4018d9
int64_t function_4018d4(void) {
    // 0x4018d4
    abort();
    // UNREACHABLE
}
// Address range: 0x4018d9 - 0x4018de
int64_t function_4018d9(void) {
    // 0x4018d9
    abort();
    // UNREACHABLE
}
// Address range: 0x4018e0 - 0x401ad0
int64_t function_4018e0(int64_t a1, int64_t a2) {
    // 0x4018e0
    function_4027c0(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x4018e0
    function_406390(0x402640, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    g39 = 0;
    g38 = 0;
    while (true) {
        // 0x401933
        while (true) {
          lab_0x401933_2:;
            // 0x401933
            int64_t v2; // 0x4018e0
            uint32_t v3 = (int32_t)function_405bf0(a1 & 0xffffffff, a2, "aip", &g4, 0, v2);
            switch (v3) {
                case -1: {
                    goto lab_0x401a33;
                }
                case 97: {
                    // 0x401a18
                    g39 = 1;
                    goto lab_0x401933_2;
                }
                default: {
                    if (v3 <= 97) {
                        if (v3 == -131) {
                            // 0x40197b
                            function_404870((int64_t)g30, "tee", "GNU coreutils", (int64_t)g19, "Mike Parker", "Richard M. Stallman");
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v3 == -130) {
                            // 0x401a0b
                            function_401f50(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401a92;
                    }
                    if (v3 != 105) {
                        if (v3 != 112) {
                          lab_0x401a92:
                            // 0x401a92
                            function_401f50(1);
                            // UNREACHABLE
                        }
                        // 0x4019c1
                        if (g53 != 0) {
                            // break -> 0x4019cd
                            break;
                        }
                        // 0x401a24
                        g37 = 2;
                    } else {
                        // 0x401963
                        g38 = 1;
                    }
                    goto lab_0x401933_2;
                }
            }
        }
    }
  lab_0x401a33:
    // 0x401a33
    if (g38 != 0) {
        // 0x401a70
        signal(SIGINT, SIG_IGN);
    }
    // 0x401a3c
    if (g37 != 0) {
        // 0x401a81
        signal(SIGPIPE, SIG_IGN);
    }
    int32_t v4 = *(int32_t *)0x60a29c; // 0x401a45
    uint64_t v5 = function_401bb0((int32_t)a1 - v4, 8 * (int64_t)v4 + a2, v4, (int64_t)&g4); // 0x401a54
    if (close(0) == 0) {
        // 0x401a66
        return v5 % 256 ^ 1;
    }
    // 0x401a9c
    error(1, *__errno_location(), "%s", dcgettext(NULL, "standard input", 5));
    return &g55;
}
// Address range: 0x401ad0 - 0x401afb
// Address range: 0x401afb - 0x401b1a
int64_t function_401afb(void) {
    // 0x401afb
    return &g29;
}
// Address range: 0x401b1a - 0x401b51
int64_t function_401b1a(void) {
    // 0x401b1a
    return 0;
}
// Address range: 0x401b51 - 0x401ba8
int64_t function_401b51(void) {
    // 0x401b51
    if (g34 != 0) {
        // 0x401ba7
        int64_t result; // 0x401b51
        return result;
    }
    int64_t v1 = g35; // 0x401b84
    int64_t result2; // 0x401b96
    if (g35 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401b96
        result2 = function_401afb();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401b86
        v1++;
    }
    // 0x401b7a
    g35 = v1;
    // 0x401b96
    result2 = function_401afb();
    g34 = 1;
    return result2;
}
// Address range: 0x401ba8 - 0x401bad
int64_t function_401ba8(void) {
    // 0x401ba8
    return function_401b1a();
}
// Address range: 0x401bb0 - 0x401f49
int64_t function_401bb0(int32_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x401bb0
    function_4026f0(g31, 2, &g1);
    int32_t v1 = a1 + 1; // 0x401bf5
    int64_t v2 = 8 * (int64_t)v1; // 0x401c05
    if (v1 < 0) {
        // 0x401f44
        function_404c00(v2);
        // UNREACHABLE
    }
    int64_t v3 = function_4049b0(v2); // 0x401c1b
    int64_t v4 = a2 - 8; // 0x401c39
    int64_t * v5 = (int64_t *)v3; // 0x401c49
    *v5 = (int64_t)g30;
    *(int64_t *)v4 = (int64_t)dcgettext(NULL, "standard output", 5);
    setvbuf(g30, (char *)((int32_t)"standard output" ^ (int32_t)"standard output"), 2, 0);
    int64_t v6 = 8 * (int64_t)a1;
    int32_t v7 = 1; // 0x401c70
    int64_t v8 = 1; // 0x401c70
    int64_t v9; // 0x401bb0
    int64_t v10; // 0x401bb0
    int32_t v11; // 0x401bb0
    if (a1 < 1) {
        goto lab_0x401d20;
    } else {
        int64_t v12 = g39 != 0 ? (int64_t)&g1 : (int64_t)&g2; // 0x401bd4
        int64_t v13 = a2 + 8 + (v6 + 0x7fffffff8 & 0x7fffffff8); // 0x401c84
        int32_t v14 = 1; // 0x401c91
        int64_t v15 = 1; // 0x401c91
        int64_t v16 = a2; // 0x401c91
        int64_t v17 = v3; // 0x401c91
        while (true) {
            int32_t v18 = v14;
            int64_t v19 = v16;
            int64_t v20 = v15;
            int64_t v21 = v17 + 8;
            int64_t * v22 = (int64_t *)v19;
            int64_t stream = function_402720(*v22, v12); // 0x401cc1
            *(int64_t *)v21 = stream;
            while (stream != 0) {
                int64_t v23 = v19 + 8; // 0x401ca4
                int64_t v24 = v20 + 1; // 0x401ca8
                setvbuf((struct _IO_FILE *)stream, NULL, 2, 0);
                v11 = v18;
                v9 = v24;
                v10 = 0;
                if (v13 == v23) {
                    // break (via goto) -> 0x401d1b
                    goto lab_0x401d1b;
                }
                v19 = v23;
                v20 = v24;
                v21 += 8;
                v22 = (int64_t *)v19;
                stream = function_402720(*v22, v12);
                *(int64_t *)v21 = stream;
            }
            int64_t v25 = function_404260(0, 3, *v22); // 0x401cda
            uint32_t err_num = *__errno_location(); // 0x401cef
            v16 = v19 + 8;
            error((int32_t)((int32_t)&g36 < 1 | (int32_t)&g36 == 1), err_num, "%s", (char *)v25);
            v14 = 0;
            v15 = v20;
            v17 = v21;
            if (v13 == v16) {
                // 0x401d1b
                v11 = 0;
                v9 = v20;
                v10 = err_num;
                goto lab_0x401d1b;
            }
        }
    }
  lab_0x401d5b_2:;
    // 0x401d5b
    int32_t v26; // 0x401bb0
    int32_t v27 = v26; // 0x401d5f
    int64_t v28; // 0x401bb0
    int64_t v29 = v28; // 0x401d5f
    int32_t size; // 0x401d3c
    if (size == -1) {
        char * format = dcgettext(NULL, "read error", 5); // 0x401f08
        uint32_t err_num2 = *__errno_location(); // 0x401f1a
        error(0, err_num2, format);
        v27 = 0;
        v29 = err_num2;
        goto lab_0x401d65;
    } else {
        goto lab_0x401d65;
    }
  lab_0x401e8f:;
    // 0x401e8f
    int64_t v30; // 0x401bb0
    int64_t v31 = v30 + 8; // 0x401e8f
    int32_t v32; // 0x401bb0
    int32_t v33 = v32; // 0x401e9a
    int64_t v34; // 0x401bb0
    int64_t v35 = v34; // 0x401e9a
    int64_t v36; // 0x401bb0
    int64_t v37 = v36; // 0x401e9a
    int32_t v38 = v32; // 0x401e9a
    int64_t v39 = v34; // 0x401e9a
    int64_t v40 = v36; // 0x401e9a
    int64_t v41; // 0x401bb0
    int64_t v42 = v41 + 8; // 0x401e9a
    int64_t v43 = v31; // 0x401e9a
    if (v31 == v6 + a2) {
        // break -> 0x401e00
        goto lab_0x401e00;
    }
    goto lab_0x401ea0;
  lab_0x401e30:;
    int64_t v47; // 0x401ea0
    struct _IO_FILE * stream2; // 0x401eb8
    int64_t v50; // 0x401ecb
    if (v47 == v50) {
        // 0x401e35
        clearerr_unlocked(stream2);
    }
    int64_t v53 = function_404260(0, 3, *(int64_t *)v30); // 0x401e53
    uint32_t err_num3; // 0x401ec8
    error((int32_t)((int32_t)&g36 < 1 | (int32_t)&g36 == 1), err_num3, "%s", (char *)v53);
    int32_t v51 = 0; // 0x401e87
    int64_t v52 = err_num3; // 0x401e87
    goto lab_0x401e8b;
  lab_0x401e8b:;
    // 0x401e8b
    int64_t * v46; // 0x401ea0
    *v46 = 0;
    v32 = v51;
    int64_t v44; // 0x401bb0
    v34 = v44 - 1;
    v36 = v52;
    goto lab_0x401e8f;
  lab_0x401d1b:
    // 0x401d1b
    v8 = v9;
    v7 = v11;
    int32_t v54 = v7; // 0x401d1e
    int64_t v55 = v10; // 0x401d1e
    if (v8 == 0) {
        goto lab_0x401d6d;
    } else {
        goto lab_0x401d20;
    }
  lab_0x401d20:;
    // 0x401d20
    int64_t data; // bp-8248, 0x401bb0
    int64_t v56 = &data;
    int32_t v57 = v7; // 0x401d2d
    int64_t v58 = v8; // 0x401d2d
    while (true) {
        int64_t v59 = v58;
        int32_t v60 = v57;
        size = read(0, &data, 0x2000);
        if (size >= 0) {
            // 0x401e10
            v27 = v60;
            v29 = v56;
            if (size == 0) {
                // break -> 0x401d65
                break;
            }
            int64_t v49 = size; // 0x401d3c
            v33 = v60;
            v35 = v59;
            v37 = v56;
            v38 = v60;
            v39 = v59;
            v40 = v56;
            v42 = v3;
            v43 = v4;
            if (a1 >= 0) {
                while (true) {
                  lab_0x401ea0:
                    // 0x401ea0
                    v30 = v43;
                    v41 = v42;
                    v44 = v39;
                    int32_t v45 = v38;
                    v46 = (int64_t *)v41;
                    v47 = *v46;
                    v32 = v45;
                    v34 = v44;
                    v36 = v40;
                    if (v47 == 0) {
                        goto lab_0x401e8f;
                    } else {
                        // 0x401ea8
                        stream2 = (struct _IO_FILE *)v47;
                        int32_t v48 = fwrite_unlocked(&data, size, 1, stream2); // 0x401eb8
                        v32 = v45;
                        v34 = v44;
                        v36 = v49;
                        if (v48 == 1) {
                            goto lab_0x401e8f;
                        } else {
                            // 0x401ec3
                            err_num3 = *__errno_location();
                            v50 = (int64_t)g30;
                            if (err_num3 != 32) {
                                goto lab_0x401e30;
                            } else {
                                // 0x401edc
                                if ((g37 & -3) == 1) {
                                    goto lab_0x401e30;
                                } else {
                                    // 0x401eee
                                    v51 = v45;
                                    v52 = v49;
                                    if (v47 == v50) {
                                        // 0x401f3a
                                        clearerr_unlocked(stream2);
                                        v51 = v45;
                                        v52 = v49;
                                    }
                                    goto lab_0x401e8b;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            int32_t v61 = *__errno_location(); // 0x401d52
            v26 = v60;
            v28 = v56;
            v33 = v60;
            v35 = v59;
            v37 = v56;
            if (v61 != 4) {
                goto lab_0x401d5b_2;
            }
        }
      lab_0x401e00:
        // 0x401e00
        v57 = v33;
        v58 = v35;
        v26 = v33;
        v28 = v37;
        if (v35 == 0) {
            goto lab_0x401d5b_2;
        }
    }
    goto lab_0x401d65;
  lab_0x401d65:
    // 0x401d65
    v54 = v27;
    v55 = v29;
    int32_t v62 = v27; // 0x401d6b
    if (a1 < 1) {
      lab_0x401dd8:
        // 0x401dd8
        free(v5);
        return v62 % 256;
    }
    goto lab_0x401d6d;
  lab_0x401d6d:;
    int64_t v63 = a1;
    int64_t v64 = 1; // 0x401d78
    int64_t v65; // 0x401bb0
    int64_t v66; // 0x401d87
    int64_t v67; // 0x401d87
    while (true) {
        // 0x401d82
        v65 = v64;
        v66 = 8 * v65;
        v67 = *(int64_t *)(v66 + v3);
        if (v67 != 0) {
            // 0x401d90
            if ((int32_t)function_404c40(v67, v55) != 0) {
                // break -> 0x401d99
                break;
            }
        }
        // 0x401d78
        v64 = v65 + 1;
        v62 = v54;
        if (v64 > v63) {
            // break (via goto) -> 0x401dd8
            goto lab_0x401dd8;
        }
    }
    int64_t v68 = v65 + 1; // 0x401daa
    int64_t v69 = function_404260(0, 3, *(int64_t *)(v66 + v4)); // 0x401dae
    uint32_t err_num4 = *__errno_location(); // 0x401dc5
    error(0, err_num4, "%s", (char *)v69);
    int64_t v70 = err_num4; // 0x401dd6
    while (v68 <= v63) {
        // 0x401d82
        v64 = v68;
        while (true) {
            // 0x401d82
            v65 = v64;
            v66 = 8 * v65;
            v67 = *(int64_t *)(v66 + v3);
            if (v67 != 0) {
                // 0x401d90
                if ((int32_t)function_404c40(v67, v70) != 0) {
                    // break -> 0x401d99
                    break;
                }
            }
            // 0x401d78
            v64 = v65 + 1;
            v62 = 0;
            if (v64 > v63) {
                // break (via goto) -> 0x401dd8
                goto lab_0x401dd8;
            }
        }
        // 0x401d99
        v68 = v65 + 1;
        v69 = function_404260(0, 3, *(int64_t *)(v66 + v4));
        err_num4 = *__errno_location();
        error(0, err_num4, "%s", (char *)v69);
        v70 = err_num4;
    }
    // 0x401dd8
    free(v5);
    return 0;
}
// Address range: 0x401f50 - 0x402285
int64_t function_401f50(int32_t status) {
    // 0x401f50
    if (status != 0) {
        // 0x401f6a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401f8f
        exit(status);
        // UNREACHABLE
    }
    // 0x401f96
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Copy standard input to each FILE, and also to standard output.\n\n  -a, --append              append to the given FILEs, do not overwrite\n  -i, --ignore-interrupts   ignore interrupt signals\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -p                        diagnose errors writing to non pipes\n      --output-error[=MODE]   set behavior on write error.  See MODE below\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nMODE determines behavior with write errors on the outputs:\n  'warn'         diagnose errors writing to any output\n  'warn-nopipe'  diagnose errors writing to any output not a pipe\n  'exit'         exit on error writing to any output\n  'exit-nopipe'  exit on error writing to any output not a pipe\nThe default MODE for the -p option is 'warn-nopipe'.\nThe default operation when --output-error is not specified, is to\nexit immediately on error writing to a pipe, and diagnose errors\nwriting to non pipe outputs.\n", 5), g30);
    int64_t v1 = &g3; // bp-136, 0x402063
    bool v2; // 0x401f50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4020e8
    int64_t v6 = *(int64_t *)v5; // 0x4020ec
    int64_t v7 = 4; // 0x4020f2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"tee";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4020fe
        char v11 = *(char *)v9; // 0x4020fe
        char v12 = v11; // 0x4020fe
        bool v13 = false; // 0x4020fe
        while (v10 == v11) {
            // 0x4020f4
            v7--;
            int64_t v14 = v9 + v3; // 0x4020fe
            int64_t v15 = v8 + v3; // 0x4020fe
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
            // break -> 0x40210a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x40210a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x40221c;
        } else {
            // 0x402206
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40225b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40216c;
            } else {
                goto lab_0x40221c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40216c;
        } else {
            // 0x402152
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40225b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40216c;
            } else {
                goto lab_0x40216c;
            }
        }
    }
  lab_0x40221c:
    // 0x40221c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4021ac
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401f8f
    exit(status);
    // UNREACHABLE
  lab_0x40216c:
    // 0x40216c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4021ac
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401f8f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402290 - 0x40229a
int64_t function_402290(void) {
    // 0x402290
    return function_401f50(1);
}
// Address range: 0x4022a0 - 0x4023b6
int64_t function_4022a0(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x4022c1
    int32_t len = strlen(str); // 0x4022c1
    if (a2 == 0) {
        // 0x40238d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x402327
    int64_t v4 = a3; // 0x4022a0
    int64_t v5 = a2; // 0x40232e
    int64_t str4; // 0x4022a0
    int64_t v6; // 0x4022a0
    int32_t v7; // 0x4022a0
    int32_t v8; // 0x4022a0
    int32_t v9; // 0x4022a0
    int64_t v10; // 0x4022a0
    int64_t result; // 0x4022a0
    int32_t v11; // 0x402323
    char * str2; // 0x402342
    while (true) {
        // 0x402337
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x40234b
            result = v6;
            if (len == strlen(str2)) {
                // 0x40238d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x40235f
                break;
            }
            // 0x4022f0
            v7 = 1;
            if (a3 != 0) {
                // 0x4022fe
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x402327
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
    int64_t v12 = v6 + 1; // 0x402363
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x40236a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x402337
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x402337
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x40234b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40238d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x40235f
                    break;
                }
                // 0x4022f0
                v7 = 1;
                if (a3 != 0) {
                    // 0x4022fe
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x402327
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
        // 0x40235f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x402378:
    // 0x40238d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x4023c0 - 0x402431
int64_t function_4023c0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x4023c0
    if (a3 == -1) {
        // 0x402420
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x4023d5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x4023e4
    function_4043c0(1, a1);
    function_4040b0(0, 8, a2);
    error(0, 0, format);
    return &g55;
}
// Address range: 0x402440 - 0x402558
int64_t function_402440(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40246d
    fputs_unlocked(v1, g33);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x4024e0
        int64_t v5; // 0x4024e7
        int64_t v6; // 0x402507
        while (v3 != 0) {
            // 0x4024cb
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x402490
                break;
            }
            // 0x4024dd
            v4 = v3 + 1;
            v5 = function_4043e0(v2);
            __fprintf_chk(g33, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x402510
                goto lab_0x402510;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x402493
        int64_t v8 = function_4043e0(v2); // 0x40249d
        __fprintf_chk(g33, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x4024bd
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x4024cb
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x402490
                    break;
                }
                // 0x4024dd
                v4 = v3 + 1;
                v5 = function_4043e0(v2);
                __fprintf_chk(g33, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x402510
                    goto lab_0x402510;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x402490
            v7 = v3 + 1;
            v8 = function_4043e0(v2);
            __fprintf_chk(g33, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x402510:;
    int64_t v10 = (int64_t)g33; // 0x402510
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x402517
    uint64_t result = *v11; // 0x402517
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x402540
        return __overflow(g33, 10);
    }
    // 0x402521
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x402560 - 0x4025d0
int64_t function_402560(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_4022a0(a2, v2, v1, a5); // 0x40258c
    int64_t result = v3; // 0x402594
    if (v3 < 0) {
        // 0x4025a8
        function_4023c0((int64_t)a1, a2, v3);
        function_402440(v2, v1, a5);
        result = -1;
    }
    // 0x402596
    return result;
}
// Address range: 0x4025d0 - 0x40261d
int64_t function_4025d0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x4025d0
    if (result == 0) {
        // 0x402611
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x402608
    int32_t n = a4; // 0x402608
    int64_t v1 = result; // 0x40260f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x402611
        return result;
    }
    int64_t str3 = str2; // 0x40260f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x4025f0
    int64_t result2 = 0; // 0x4025fd
    while (v2 != 0) {
        // 0x4025ff
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x402611
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x402611
    return result2;
}
// Address range: 0x402620 - 0x402628
int64_t function_402620(int64_t a1) {
    // 0x402620
    g41 = a1;
    int64_t result; // 0x402620
    return result;
}
// Address range: 0x402630 - 0x402638
int64_t function_402630(int64_t a1) {
    // 0x402630
    g40 = a1;
    int64_t result; // 0x402630
    return result;
}
// Address range: 0x402640 - 0x4026de
int64_t function_402640(void) {
    // 0x402640
    int32_t * err_num; // 0x402656
    if ((int32_t)function_405cf0((int64_t)g30) == 0) {
        goto lab_0x40266c;
    } else {
        // 0x402656
        err_num = __errno_location();
        if (g40 == 0) {
            goto lab_0x402683;
        } else {
            // 0x402667
            if (*err_num != 32) {
                goto lab_0x402683;
            } else {
                goto lab_0x40266c;
            }
        }
    }
  lab_0x40266c:;
    int64_t result = function_405cf0((int64_t)g33); // 0x402673
    if ((int32_t)result == 0) {
        // 0x40267c
        return result;
    }
    // 0x4026be
    _exit(g20);
    // UNREACHABLE
  lab_0x402683:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40268f
    if (g41 == 0) {
        // 0x4026c9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4026a3
        error(0, *err_num, "%s: %s", (char *)function_404230((int64_t)g41), v1);
    }
    // 0x4026be
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x4026e0 - 0x4026e5
int64_t function_4026e0(void) {
    // 0x4026e0
    int64_t fd; // 0x4026e0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x4026f0 - 0x402711
int64_t function_4026f0(int64_t stream, int64_t advice, int64_t * a3) {
    // 0x4026f0
    if (stream == 0) {
        // 0x402710
        int64_t result; // 0x4026f0
        return result;
    }
    // 0x4026f5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402720 - 0x4027b3
int64_t function_402720(int64_t file_path, int64_t a2) {
    char * mode = (char *)a2; // 0x402727
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x402727
    int64_t result = (int64_t)file; // 0x402727
    if (file == NULL) {
        // 0x402741
        return result;
    }
    uint32_t v1 = fileno(file); // 0x402737
    if (v1 >= 3) {
        // 0x402741
        return result;
    }
    int32_t fd = function_404400((int64_t)v1, a2); // 0x40275a
    if (fd < 0) {
        int32_t * v2 = __errno_location(); // 0x402798
        function_404c40(result, a2);
        // 0x402741
        return 0;
    }
    // 0x40275e
    if ((int32_t)function_404c40(result, a2) == 0) {
        struct _IO_FILE * v3 = fdopen(fd, mode); // 0x402770
        if (v3 != NULL) {
            // 0x402741
            return (int64_t)v3;
        }
    }
    int32_t * v4 = __errno_location(); // 0x40277d
    close(fd);
    // 0x402741
    return 0;
}
// Address range: 0x4027c0 - 0x402859
int64_t function_4027c0(int64_t str) {
    // 0x4027c0
    if (str == 0) {
        // 0x402839
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4027ce
    int64_t result = (int64_t)found_char_pos; // 0x4027ce
    if (found_char_pos == NULL) {
        // 0x402829
        g42 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4027d8
    if (v1 - str < 7) {
        // 0x402829
        g42 = str;
        g32 = str;
        return result;
    }
    // 0x4027e8
    bool v2; // 0x4027c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4027c0
    int64_t v5 = result - 6; // 0x4027c0
    int64_t v6 = 7; // 0x4027f6
    unsigned char v7 = *(char *)v5; // 0x4027f6
    char v8 = *(char *)v4; // 0x4027f6
    char v9 = v8; // 0x4027f6
    bool v10 = false; // 0x4027f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x402800
    int64_t v13 = v1; // 0x402800
    int64_t v14 = 3; // 0x402800
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402829
        g42 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402812
    char v16 = *(char *)v12; // 0x402812
    char v17 = v16; // 0x402812
    bool v18 = false; // 0x402812
    while (v15 == v16) {
        // 0x402802
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
    int64_t v20 = v1; // 0x40281c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40281e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x402829
    g42 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x402860 - 0x402952
int64_t function_402860(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402874
    int64_t result = (int64_t)v1; // 0x402874
    if (result != a1) {
        // 0x402881
        return result;
    }
    int64_t v2 = function_405db0(); // 0x402890
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402946
    if (v3 == 85) {
        // 0x4028a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402938
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4028ce
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x4028db
        // 0x402881
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402938
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40291d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40292a
    // 0x402881
    return result4;
}
// Address range: 0x402960 - 0x4029b7
int64_t function_402960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402960
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4029a8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4029b7 - 0x403b81
int64_t function_4029b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402a01
    int64_t v3 = 0; // 0x402a01
    int64_t v4; // 0x4029b7
    int64_t v5; // 0x4029b7
    int64_t v6; // 0x4029b7
    int64_t v7; // 0x4029b7
    int64_t v8; // 0x4029b7
    int64_t v9; // 0x4029b7
    int64_t v10; // 0x4029b7
    int64_t v11; // 0x4029b7
    int64_t v12; // 0x4029b7
    int64_t v13; // 0x4029b7
    int64_t v14; // 0x4029b7
    int64_t v15; // 0x4029b7
    int64_t v16; // 0x4029b7
    int64_t v17; // 0x4029b7
    int64_t v18; // 0x4029b7
    int64_t result; // 0x4029b7
    int64_t v19; // 0x4029b7
    int32_t wc; // bp+132, 0x4029b7
    int64_t ps; // bp+136, 0x4029b7
    char v20; // 0x402f70
    int64_t v21; // 0x402f70
    int64_t v22; // 0x403318
    int64_t v23; // 0x4029b7
    int64_t v24; // 0x403337
    int32_t v25; // 0x4029b7
    while (true) {
      lab_0x402a08_2:
        // 0x402a08
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4029b7
        int64_t v27; // 0x402a3c
        while (true) {
          lab_0x402a08:
            // 0x402a08
            v5 = v26;
            bool v28 = v15 == v5; // 0x402a13
            if (v15 == -1) {
                // 0x402a15
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402a23
            if (v28) {
                // break (via goto) -> 0x403188
                goto lab_0x403188;
            }
            // 0x402a2c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g54 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40301b
                    if (v25 % 2 == 0) {
                        goto lab_0x402b61;
                    }
                    // 0x40343d
                    v26 = v5 + 1;
                    goto lab_0x402a08;
                }
                case 7: {
                    goto lab_0x402b61;
                }
                case 8: {
                    goto lab_0x402b61;
                }
                case 9: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402b61;
                }
                case 12: {
                    goto lab_0x402b61;
                }
                case 13: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402b2d;
                }
                case 36: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402b61;
                }
                case 38: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402b61;
                }
                case 44: {
                    goto lab_0x402b61;
                }
                case 45: {
                    goto lab_0x402b61;
                }
                case 46: {
                    goto lab_0x402b61;
                }
                case 47: {
                    goto lab_0x402b61;
                }
                case 48: {
                    goto lab_0x402b61;
                }
                case 49: {
                    goto lab_0x402b61;
                }
                case 50: {
                    goto lab_0x402b61;
                }
                case 51: {
                    goto lab_0x402b61;
                }
                case 52: {
                    goto lab_0x402b61;
                }
                case 53: {
                    goto lab_0x402b61;
                }
                case 54: {
                    goto lab_0x402b61;
                }
                case 55: {
                    goto lab_0x402b61;
                }
                case 56: {
                    goto lab_0x402b61;
                }
                case 57: {
                    goto lab_0x402b61;
                }
                case 58: {
                    goto lab_0x402b61;
                }
                case 59: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402b61;
                }
                case 66: {
                    goto lab_0x402b61;
                }
                case 67: {
                    goto lab_0x402b61;
                }
                case 68: {
                    goto lab_0x402b61;
                }
                case 69: {
                    goto lab_0x402b61;
                }
                case 70: {
                    goto lab_0x402b61;
                }
                case 71: {
                    goto lab_0x402b61;
                }
                case 72: {
                    goto lab_0x402b61;
                }
                case 73: {
                    goto lab_0x402b61;
                }
                case 74: {
                    goto lab_0x402b61;
                }
                case 75: {
                    goto lab_0x402b61;
                }
                case 76: {
                    goto lab_0x402b61;
                }
                case 77: {
                    goto lab_0x402b61;
                }
                case 78: {
                    goto lab_0x402b61;
                }
                case 79: {
                    goto lab_0x402b61;
                }
                case 80: {
                    goto lab_0x402b61;
                }
                case 81: {
                    goto lab_0x402b61;
                }
                case 82: {
                    goto lab_0x402b61;
                }
                case 83: {
                    goto lab_0x402b61;
                }
                case 84: {
                    goto lab_0x402b61;
                }
                case 85: {
                    goto lab_0x402b61;
                }
                case 86: {
                    goto lab_0x402b61;
                }
                case 87: {
                    goto lab_0x402b61;
                }
                case 88: {
                    goto lab_0x402b61;
                }
                case 89: {
                    goto lab_0x402b61;
                }
                case 90: {
                    goto lab_0x402b61;
                }
                case 91: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402b61;
                }
                case 94: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402b61;
                }
                case 96: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402b61;
                }
                case 98: {
                    goto lab_0x402b61;
                }
                case 99: {
                    goto lab_0x402b61;
                }
                case 100: {
                    goto lab_0x402b61;
                }
                case 101: {
                    goto lab_0x402b61;
                }
                case 102: {
                    goto lab_0x402b61;
                }
                case 103: {
                    goto lab_0x402b61;
                }
                case 104: {
                    goto lab_0x402b61;
                }
                case 105: {
                    goto lab_0x402b61;
                }
                case 106: {
                    goto lab_0x402b61;
                }
                case 107: {
                    goto lab_0x402b61;
                }
                case 108: {
                    goto lab_0x402b61;
                }
                case 109: {
                    goto lab_0x402b61;
                }
                case 110: {
                    goto lab_0x402b61;
                }
                case 111: {
                    goto lab_0x402b61;
                }
                case 112: {
                    goto lab_0x402b61;
                }
                case 113: {
                    goto lab_0x402b61;
                }
                case 114: {
                    goto lab_0x402b61;
                }
                case 115: {
                    goto lab_0x402b61;
                }
                case 116: {
                    goto lab_0x402b61;
                }
                case 117: {
                    goto lab_0x402b61;
                }
                case 118: {
                    goto lab_0x402b61;
                }
                case 119: {
                    goto lab_0x402b61;
                }
                case 120: {
                    goto lab_0x402b61;
                }
                case 121: {
                    goto lab_0x402b61;
                }
                case 122: {
                    goto lab_0x402b61;
                }
                case 123: {
                    goto lab_0x402b05;
                }
                case 124: {
                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402b05;
                }
                case 126: {
                    goto lab_0x402b2d;
                }
                default: {
                    goto lab_0x402f05;
                }
            }
        }
      lab_0x402f05:
        if (v23 != 1) {
            // 0x403270
            ps = 0;
            int64_t len = v15; // 0x403280
            if (v15 == -1) {
                // 0x403282
                len = strlen((char *)str);
            }
            // 0x4032ae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40330f:
                // 0x40330f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403314
                int64_t v30 = v29 + str;
                v24 = function_405c70(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40388a_2;
                    }
                    case -1: {
                        goto lab_0x40388a_2;
                    }
                    case -2: {
                        // 0x40396d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4039a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4039aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4039b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4039b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40388a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40388a_2;
                    }
                    case 1: {
                        goto lab_0x4032e0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40338c
                        char v34 = *(char *)v33; // 0x40339d
                        unsigned char v35; // 0x4029b7
                        if (v34 < 125) {
                            // 0x4033a8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4033bf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402960(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403390
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40339d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4033a8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4033bf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402960(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403390
                            v33++;
                        }
                        goto lab_0x4032e0;
                    }
                }
            }
            goto lab_0x40388a_2;
        } else {
            // 0x402f54
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402b61;
        }
    }
  lab_0x403188:
    // 0x403188
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403a8a
        if (v8 > result) {
            // 0x403a93
            *(char *)(v12 + result) = 0;
        }
        // 0x402db7
        return result;
    }
    return function_402960(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402b61:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402b70
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402d7a_2;
        }
    }
    int64_t v39 = result; // 0x402c71
    char v40 = v20; // 0x402c71
    int64_t v41 = v38; // 0x402c71
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402c71
    int64_t v43 = v36; // 0x402c71
    goto lab_0x402bed;
  lab_0x402d7a_2:
    // 0x402db7
    return function_402960(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40388a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402b61;
    } else {
        uint64_t v49 = v46 + v5; // 0x40345e
        int64_t v50 = v5 + 1; // 0x403541
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403548
        char v52 = v20; // 0x403548
        int64_t v53 = result; // 0x403548
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403511
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403515
            int64_t v56 = v54 + 1; // 0x40351a
            int64_t v57 = v51 + 1; // 0x403541
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40350c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403511
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403515
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
        goto lab_0x402bed;
    }
  lab_0x4032e0:
    // 0x4032e0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4032ff
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403302
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40388a
        goto lab_0x40388a_2;
    }
    goto lab_0x40330f;
  lab_0x402b2d:
    // 0x402b2d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402d7a_2;
    }
    goto lab_0x402b61;
  lab_0x402b05:;
    bool v60 = v15 == 1; // 0x402b10
    if (v15 == -1) {
        // 0x402b12
        v60 = *(char *)v1 == 0;
    }
    // 0x402b1e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402b61;
    } else {
        goto lab_0x402b2d;
    }
  lab_0x402bed:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402bf2
        *(char *)(v44 + v45) = v40;
    }
    // 0x402bf6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402a08_2;
}
// Address range: 0x403b90 - 0x403d2e
int64_t function_403b90(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403b92
    int32_t * v3 = __errno_location(); // 0x403bac
    int64_t v4 = (int64_t)g22; // 0x403bb1
    int32_t v5 = *v3; // 0x403bbb
    int64_t v6 = v4; // 0x403bd1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403d29
            function_404c00(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403be0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403be7
        int64_t v9; // 0x403b90
        if (g22 == &g23) {
            int64_t v10 = function_404a10(0, v8); // 0x403d0a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x403d0f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404a10(v4, v8); // 0x403bfb
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x403c0a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x403c0a
        int32_t v14 = v7; // 0x403c11
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403c41
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403c4b
    int64_t * v17 = (int64_t *)v15; // 0x403c4e
    uint64_t v18 = *v17; // 0x403c4e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403c51
    int64_t result = *v19; // 0x403c51
    int64_t v20; // 0x403b90
    uint64_t v21 = function_402960(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403c74
    if (v18 > v21) {
        // 0x403ceb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403c87
    *v17 = v22;
    if (result != (int64_t)&g43) {
        // 0x403c97
        free((int64_t *)result);
    }
    int64_t result2 = function_4049b0(v22); // 0x403cb1
    *v19 = result2;
    int64_t v23; // 0x403b90
    function_402960(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403ceb
    *v3 = v5;
    return result2;
}
// Address range: 0x403d30 - 0x403d64
int64_t function_403d30(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403d37
    int64_t result = function_404bb0(a1 == 0 ? (int64_t)&g44 : a1, 56); // 0x403d56
    return result;
}
// Address range: 0x403d70 - 0x403d7f
int64_t function_403d70(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g44 : a1); // 0x403d7c
    return result;
}
// Address range: 0x403d80 - 0x403d8f
int64_t function_403d80(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x403d88
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g44;
}
// Address range: 0x403d90 - 0x403dc3
int64_t function_403d90(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 + 8 : a1 + 8; // 0x403da9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403dae
    uint32_t v3 = *v2; // 0x403dae
    uint32_t v4 = (int32_t)a2 % 32; // 0x403db2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403dd0 - 0x403de3
int64_t function_403dd0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g44 + 4 : a1 + 4); // 0x403ddc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403df0 - 0x403e1b
int64_t function_403df0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x403df8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403e15
        abort();
        // UNREACHABLE
    }
    // 0x403e0c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g44;
}
// Address range: 0x403e20 - 0x403e92
int64_t function_403e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g44 : a5; // 0x403e42
    int32_t * v2 = __errno_location(); // 0x403e4b
    uint32_t v3 = *(int32_t *)v1; // 0x403e6b
    int64_t result = function_402960(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403e7a
    return result;
}
// Address range: 0x403ea0 - 0x403f81
int64_t function_403ea0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g44 : a4; // 0x403ec2
    int32_t * v2 = __errno_location(); // 0x403ec8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403ee7
    int32_t * v4 = (int32_t *)v1; // 0x403eea
    int64_t v5 = function_402960(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403f05
    int64_t v6 = v5 + 1; // 0x403f0a
    int64_t result = function_4049b0(v6); // 0x403f1f
    function_402960(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403f64
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403f6d
    return result;
}
// Address range: 0x403f90 - 0x403f9a
int64_t function_403f90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403f90
    return function_403ea0(a1, a2, 0, a3);
}
// Address range: 0x403fa0 - 0x404035
int64_t function_403fa0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403fa0
    int64_t v2 = v1; // 0x403fa0
    int64_t v3 = v2; // 0x403fb4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403fd3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g55;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403fd0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g55;
        }
    }
    int64_t v6 = v3; // 0x403fed
    if (g23 != 0x60a300) {
        // 0x403fef
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g43;
        v6 = &g55;
    }
    int64_t result = v6; // 0x404011
    if (g22 != &g23) {
        // 0x404013
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g55;
    }
    // 0x404026
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x404040 - 0x404051
int64_t function_404040(void) {
    // 0x404040
    int64_t v1; // 0x404040
    return function_403b90(v1, v1, -1, (int64_t *)&g44);
}
// Address range: 0x404060 - 0x40406a
int64_t function_404060(void) {
    // 0x404060
    int64_t v1; // 0x404060
    return function_403b90(v1, v1, v1, (int64_t *)&g44);
}
// Address range: 0x404070 - 0x404086
int64_t function_404070(int64_t a1) {
    // 0x404070
    return function_403b90(0, a1, -1, (int64_t *)&g44);
}
// Address range: 0x404090 - 0x4040a2
int64_t function_404090(int64_t a1, int64_t a2) {
    // 0x404090
    return function_403b90(0, a1, a2, (int64_t *)&g44);
}
// Address range: 0x4040b0 - 0x404118
int64_t function_4040b0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4040c0
    return function_403b90((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404120 - 0x404184
int64_t function_404120(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404130
    return function_403b90((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404190 - 0x40419c
int64_t function_404190(int64_t a1, int64_t a2) {
    // 0x404190
    return function_4040b0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4041a0 - 0x4041af
int64_t function_4041a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4041a0
    return function_404120(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4041b0 - 0x404220
int64_t function_4041b0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x4041bd
    int128_t v2 = __asm_movdqa(g45); // 0x4041c5
    int128_t v3 = __asm_movdqa(g46); // 0x4041cd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4041e2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4041f8
    uint32_t v6 = *v5; // 0x4041f8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4041fd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403b90(0, a1, a2, &v4);
}
// Address range: 0x404220 - 0x40422d
int64_t function_404220(int64_t a1, int64_t a2) {
    // 0x404220
    return function_4041b0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404230 - 0x404241
int64_t function_404230(int64_t a1) {
    // 0x404230
    return function_4041b0(a1, -1, 58);
}
// Address range: 0x404250 - 0x40425a
int64_t function_404250(void) {
    // 0x404250
    int64_t v1; // 0x404250
    return function_4041b0(v1, v1, 58);
}
// Address range: 0x404260 - 0x4042ce
int64_t function_404260(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40427a
    return function_403b90((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4042d0 - 0x40433c
int64_t function_4042d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x4042d7
    int128_t v2 = __asm_movdqa(g45); // 0x4042df
    int128_t v3 = __asm_movdqa(g46); // 0x4042e7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404309
    if (a2 == 0 || a3 == 0) {
        // 0x404337
        abort();
        // UNREACHABLE
    }
    // 0x40431a
    return function_403b90(a1, a4, a5, &v4);
}
// Address range: 0x404340 - 0x404349
int64_t function_404340(void) {
    // 0x404340
    int64_t v1; // 0x404340
    return function_4042d0(v1, v1, v1, v1, -1);
}
// Address range: 0x404350 - 0x404367
int64_t function_404350(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404350
    return function_4042d0(0, a1, a2, a3, -1);
}
// Address range: 0x404370 - 0x404383
int64_t function_404370(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404370
    return function_4042d0(0, a1, a2, a3, a4);
}
// Address range: 0x404390 - 0x40439a
int64_t function_404390(void) {
    // 0x404390
    int64_t v1; // 0x404390
    return function_403b90(v1, v1, v1, &g21);
}
// Address range: 0x4043a0 - 0x4043b2
int64_t function_4043a0(int64_t a1, int64_t a2) {
    // 0x4043a0
    return function_403b90(0, a1, a2, &g21);
}
// Address range: 0x4043c0 - 0x4043d1
int64_t function_4043c0(int64_t a1, int64_t a2) {
    // 0x4043c0
    return function_403b90(a1, a2, -1, &g21);
}
// Address range: 0x4043e0 - 0x4043f6
int64_t function_4043e0(int64_t a1) {
    // 0x4043e0
    return function_403b90(0, a1, -1, &g21);
}
// Address range: 0x404400 - 0x40440e
int64_t function_404400(int64_t a1, int64_t a2) {
    // 0x404400
    int64_t v1; // 0x404400
    return function_404cc0(a1, 0, 3, v1);
}
// Address range: 0x404410 - 0x4047ed
int64_t function_404410(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4044a8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40442c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404446
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40448b
    if (a6 < 10) {
        // 0x40449a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404592
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4047f0 - 0x404810
int64_t function_4047f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4047f0
    if (a5 == 0) {
        // 0x40480b
        return function_404410(a1, a2, a3, a4, a5, 0, (int64_t)&g55);
    }
    int64_t v1 = 0; // 0x4047f7
    v1++;
    int64_t v2 = v1; // 0x404809
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404800
        v1++;
        v2 = v1;
    }
    // 0x40480b
    return function_404410(a1, a2, a3, a4, a5, v2, (int64_t)&g55);
}
// Address range: 0x404810 - 0x404870
int64_t function_404810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404810
    int64_t v3 = &v2; // 0x404810
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404843
    int64_t v6; // 0x40482d
    int64_t * v7; // 0x40484b
    int64_t v8; // 0x40484b
    int64_t v9; // 0x404857
    if (v5 < 48) {
        // 0x404820
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404863
            break;
        }
    } else {
        // 0x40484b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404863
            break;
        }
    }
    int64_t v10 = 10; // 0x404841
    while (v4 != 9) {
        // 0x404839
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404820
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404863
                break;
            }
        } else {
            // 0x40484b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404863
                break;
            }
        }
        // 0x404839
        v10 = 10;
    }
    // 0x404863
    return function_404410(a1, a2, a3, a4, v3, v10, (int64_t)&g55);
}
// Address range: 0x404870 - 0x40492c
int64_t function_404870(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404870
    int64_t v1; // bp-168, 0x404870
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404870
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404870
    int64_t v8; // 0x404870
    int64_t v9; // bp-56, 0x404870
    int64_t v10; // 0x4048d5
    int64_t v11; // 0x4048f9
    if ((int32_t)v6 < 48) {
        // 0x4048c0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404910
            break;
        }
    } else {
        // 0x4048f2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404910
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4048ea
    int64_t v13 = 10; // 0x4048ea
    while (v5 != 9) {
        // 0x4048ec
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4048c0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404910
                break;
            }
        } else {
            // 0x4048f2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404910
                break;
            }
        }
        // 0x4048e2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404910
    int64_t v14; // bp-136, 0x404870
    int64_t result = function_404410(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g55); // 0x40491f
    return result;
}
// Address range: 0x404930 - 0x4049a4
int64_t function_404930(int64_t a1) {
    // 0x404930
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404993
    return fputs_unlocked(v1, g30);
}
// Address range: 0x4049b0 - 0x4049ca
int64_t function_4049b0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4049b4
    if (size != 0 != (mem == NULL)) {
        // 0x4049c3
        return (int64_t)mem;
    }
    // 0x4049c5
    function_404c00(size);
    // UNREACHABLE
}
// Address range: 0x4049d0 - 0x4049f1
int64_t function_4049d0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4049d3
    int64_t v2 = v1; // 0x4049d3
    if (v2 < 0) {
        // 0x4049eb
        function_404c00(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4049e9
        return function_4049b0(v2);
    }
    // 0x4049eb
    function_404c00(v2);
    // UNREACHABLE
}
// Address range: 0x404a00 - 0x404a02
int64_t function_404a00(void) {
    // 0x404a00
    int64_t v1; // 0x404a00
    return function_4049b0(v1);
}
// Address range: 0x404a10 - 0x404a46
int64_t function_404a10(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404a38
        free(v1);
        return (int32_t)&g55 ^ (int32_t)&g55;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404a21
    if (a2 != 0 != (mem == NULL)) {
        // 0x404a30
        return (int64_t)mem;
    }
    // 0x404a41
    function_404c00(a1);
    // UNREACHABLE
}
// Address range: 0x404a50 - 0x404a71
int64_t function_404a50(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404a53
    int64_t v2 = v1; // 0x404a53
    if (v2 < 0) {
        // 0x404a6b
        function_404c00(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404a69
        return function_404a10(a1, v2);
    }
    // 0x404a6b
    function_404c00(a1);
    // UNREACHABLE
}
// Address range: 0x404a80 - 0x404b06
int64_t function_404a80(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404adb
            function_404c00(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404a10(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404ac3
    if (a2 == 0) {
        // 0x404ae8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404ac8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404adb
        function_404c00(a1);
        // UNREACHABLE
    }
    // 0x404aaa
    *(int64_t *)a2 = v2;
    return function_404a10(a1, v2 * a3);
}
// Address range: 0x404b10 - 0x404b60
int64_t function_404b10(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404b10
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404b5a
            function_404c00(a1);
            // UNREACHABLE
        }
        // 0x404b32
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404a10(a1, v1);
    }
    if (a2 == 0) {
        // 0x404b45
        *(int64_t *)a2 = 128;
        return function_404a10(0, 128);
    }
    // 0x404b58
    if (a2 < 0) {
        // 0x404b5a
        function_404c00(a1);
        // UNREACHABLE
    }
    // 0x404b32
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404a10(a1, v1);
}
// Address range: 0x404b60 - 0x404b77
int64_t function_404b60(int64_t a1, int64_t a2) {
    // 0x404b60
    return (int64_t)memset((int64_t *)function_4049b0(a1), 0, (int32_t)a1);
}
// Address range: 0x404b80 - 0x404bae
int64_t function_404b80(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404b87
    if ((int64_t)v1 < 0) {
        // 0x404ba9
        function_404c00(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404ba9
        function_404c00(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404b9a
    if (mem != NULL) {
        // 0x404ba4
        return (int64_t)mem;
    }
    // 0x404ba9
    function_404c00(nmemb);
    // UNREACHABLE
}
// Address range: 0x404bb0 - 0x404bd8
int64_t function_404bb0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4049b0(a2); // 0x404bbf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404be0 - 0x404bf3
int64_t function_404be0(int64_t str) {
    // 0x404be0
    return function_404bb0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404c00 - 0x404c31
int64_t function_404c00(int64_t a1) {
    // 0x404c00
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404c40 - 0x404cbb
int64_t function_404c40(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404c47
    if (fileno(stream) < 0) {
        // 0x404ca7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x404c5a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x404c8b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x404ca7
            return fclose(stream);
        }
    }
    // 0x404c5c
    if ((int32_t)function_404e00(a1, v1) == 0) {
        // 0x404ca7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x404c68
    int32_t v3 = *v2; // 0x404c70
    int64_t result = fclose(stream); // 0x404c7e
    if (v3 != 0) {
        // 0x404cb0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x404c80
    return result;
}
// Address range: 0x404cc0 - 0x404df5
int64_t function_404cc0(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x404da0
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x404cfc
    int64_t v2; // 0x404cc0
    if (g47 < 0) {
        int64_t v3 = function_404cc0(fd, 0, v1, a4); // 0x404d44
        int64_t v4 = v3 & 0xffffffff; // 0x404d49
        if ((int32_t)v3 < 0) {
            // 0x404d30
            return v4 & 0xffffffff;
        }
        // 0x404d4f
        v2 = v4;
        if (g47 != -1) {
            // 0x404d30
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x404d17
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x404d26
            g47 = 1;
            // 0x404d30
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_404cc0(fd & 0xffffffff, 0, v1, a4); // 0x404dd7
        int64_t v7 = v6 & 0xffffffff; // 0x404ddc
        if ((int32_t)v6 < 0) {
            // 0x404d30
            return v7 & 0xffffffff;
        }
        // 0x404de6
        g47 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x404d5f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x404d6a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x404d30
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x404d82
    close(fd2);
    // 0x404d30
    return 0xffffffff;
}
// Address range: 0x404e00 - 0x404e40
int64_t function_404e00(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x404e1a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x404e1a
        return fflush(stream);
    }
    // 0x404e28
    function_404e40(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404e40 - 0x404e97
int64_t function_404e40(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404e40
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x404e4a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x404e7b
    int64_t result = -1; // 0x404e84
    if (v1 != -1) {
        // 0x404e86
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404e92
    return result;
}
// Address range: 0x404ea0 - 0x404f7f
int64_t function_404ea0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x404eac
    uint32_t v2 = *v1; // 0x404eac
    int64_t v3 = a2 & 0xffffffff; // 0x404eb1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404eb4
    uint64_t v5 = (int64_t)*v4; // 0x404eb4
    int64_t v6; // 0x404f22
    if (v3 <= v5) {
      lab_0x404f1c_2:
        // 0x404f1c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404ea2
    int64_t v8 = v2; // 0x404ea0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x404f1c
        goto lab_0x404f1c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404ed8
    int64_t v17; // 0x404ee6
    int64_t * v18; // 0x404f00
    int64_t * v19; // 0x404f03
    int64_t v20; // 0x404f0e
    int64_t v21; // 0x404ee6
    while ((v16 & 0xffffffff) > v10) {
        // 0x404ee3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404f00
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404f17
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x404f1c
            goto lab_0x404f1c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x404f1c
            goto lab_0x404f1c_2;
        }
        // 0x404ed2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x404f5b
    int64_t * v23 = (int64_t *)v22; // 0x404f60
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404f63
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404f60
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404f77
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x404ecd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x404f1c
            goto lab_0x404f1c_2;
        }
        // 0x404ed2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404ee3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404f00
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404f17
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x404f1c
                goto lab_0x404f1c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x404f1c
                goto lab_0x404f1c_2;
            }
            // 0x404ed2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404f40
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404f60
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404f77
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x404f1c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404f80 - 0x40559c
int64_t function_404f80(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404f9f
    int64_t v2 = *v1; // 0x404f9f
    char * str2 = (char *)v2; // 0x404fac
    char c = *str2; // 0x404fac
    int64_t v3 = v2; // 0x404fd8
    int64_t v4 = 0; // 0x404f80
    int32_t v5; // 0x404f80
    int64_t v6; // 0x404f80
    int64_t v7; // 0x404f80
    int64_t v8; // 0x404f80
    int64_t v9; // 0x404f80
    int64_t v10; // 0x404f80
    int64_t v11; // 0x404f80
    int64_t v12; // 0x404f80
    int64_t v13; // 0x404f80
    int64_t str3; // 0x404f80
    int64_t v14; // 0x404f80
    int64_t v15; // 0x404f80
    int64_t v16; // 0x404f80
    int64_t v17; // 0x404f80
    int32_t v18; // 0x404f80
    int32_t v19; // 0x404f80
    int32_t v20; // 0x404f80
    int32_t v21; // 0x404f80
    int32_t v22; // 0x404f80
    int32_t v23; // 0x404f80
    int32_t v24; // 0x404f80
    int32_t v25; // 0x404f80
    int32_t v26; // 0x404f80
    int32_t v27; // 0x404f80
    int32_t v28; // 0x404f80
    int32_t v29; // 0x404f80
    int64_t nmemb; // 0x404f80
    int64_t v30; // 0x404f80
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404fdc
            while (v31 != 0 == (v31 != 61)) {
                // 0x404fd8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404fe8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404fee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404fb8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40501c
                int64_t v34; // 0x404f80
                int64_t v35; // 0x404f80
                if (strncmp(str, str2, n) == 0) {
                    // 0x405025
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4051a0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405036
                int64_t v37 = *(int64_t *)v36; // 0x40503a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405010
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405025
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4051a0;
                        }
                    }
                    // 0x405036
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
                  lab_0x405086:
                    // 0x405086
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
                        goto lab_0x4050e0;
                    } else {
                        if (v11 == 0) {
                            // 0x405250
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4050e0;
                        } else {
                            if (v39 == 0) {
                                // 0x405200
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4050aa;
                                } else {
                                    // 0x40520c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4050aa;
                                    } else {
                                        // 0x40521a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4050aa;
                                        } else {
                                            goto lab_0x4050e0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4050aa;
                            }
                        }
                    }
                }
              lab_0x4050f1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4052c6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405472
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x405492
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4054df
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x4054f9
                            int64_t v45; // 0x4054fb
                            if (*(char *)v42 != 0) {
                                // 0x4054fb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4054f3
                            while (v17 + nmemb != v42) {
                                // 0x4054f5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4054fb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x4054e8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405520
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x4052d4
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40542f
                        free((int64_t *)v17);
                    }
                    // 0x405329
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405340
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4051ee
                    return 63;
                }
                // 0x405110
                v5 = v39;
                if (v13 != 0) {
                    // 0x405194
                    v35 = v13;
                    v34 = v25;
                  lab_0x4051a0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4051b0
                    uint32_t v50 = *v49; // 0x4051b0
                    int64_t v51 = v50; // 0x4051b0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4051ba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4051c3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4053ef
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40539a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4051ee
                            return 63;
                        }
                        // 0x405238
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40554f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40544d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405460
                                // 0x4051ee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40535e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405372
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4051db
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4051de
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4051e2
                    int64_t result = v59; // 0x4051e8
                    if (v58 != 0) {
                        // 0x4051ea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4051ee
                    return result;
                }
            } else {
                // 0x404fee
                v5 = v32;
            }
            // break -> 0x405115
            break;
        }
    }
    // 0x405115
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40512d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405137
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4051ee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405279
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405166
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405176
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4050e0:
    // 0x4050e0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4050e0
    int64_t v63 = *(int64_t *)v62; // 0x4050e4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4050f1
        goto lab_0x4050f1;
    }
    goto lab_0x405086;
  lab_0x4050aa:
    // 0x4050aa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404f80
    int32_t v65; // 0x404f80
    int32_t v66; // 0x404f80
    if (v27 != 0) {
        goto lab_0x4050e0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405260
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4050e0;
            } else {
                goto lab_0x4050d1;
            }
        } else {
            // 0x4050c5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4053bc
                int64_t v67 = (int64_t)mem; // 0x4053bc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4050e0;
                } else {
                    // 0x4053cf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4050d1;
                }
            } else {
                goto lab_0x4050d1;
            }
        }
    }
  lab_0x4050d1:
    // 0x4050d1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4050e0;
}
// Address range: 0x4055a0 - 0x405b66
int64_t function_4055a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4055c1
    if (v3 < 1) {
        // 0x40577e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4055bd
    int32_t v5 = *(int32_t *)a7; // 0x4055c9
    uint64_t v6 = a1 & 0xffffffff; // 0x4055cb
    int64_t v7 = v2; // 0x4055d0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4055d3
    *v8 = 0;
    int64_t v9; // 0x4055a0
    int64_t v10; // 0x4055a0
    int64_t v11; // 0x4055a0
    int64_t v12; // 0x4055a0
    int64_t str; // 0x4055a0
    int64_t v13; // 0x4055a0
    int64_t v14; // 0x4055a0
    int64_t v15; // 0x4055a0
    int64_t v16; // 0x4055a0
    int64_t v17; // 0x4055a0
    int32_t v18; // 0x4055a0
    char v19; // 0x4055a0
    if (v5 == 0) {
        // 0x4057b8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4055ea;
    } else {
        // 0x4055e3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405630
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405633
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4056f8;
            } else {
                int64_t v22 = v7 + 1; // 0x405646
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405656
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40570c;
                } else {
                    goto lab_0x405668;
                }
            }
        } else {
            goto lab_0x4055ea;
        }
    }
  lab_0x4055ea:
    // 0x4055ea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4055f0
    *v24 = 0;
    int64_t v25; // 0x4055a0
    int64_t v26; // 0x4055a0
    int64_t v27; // 0x4055a0
    switch (*(char *)&v2) {
        case 45: {
            // 0x4056e0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4056ed;
        }
        case 43: {
            // 0x4059f0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4056ed;
        }
        default: {
            // 0x40560c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40596f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405a88
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4056ed;
                } else {
                    // 0x40597d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40561a;
                }
            } else {
                goto lab_0x40561a;
            }
        }
    }
  lab_0x4056f8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4056ff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405668;
    } else {
        goto lab_0x40570c;
    }
  lab_0x40561a:
    // 0x40561a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4056ed;
  lab_0x4056ed:
    // 0x4056ed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4056f8;
  lab_0x405668:;
    uint32_t v30 = *(int32_t *)a7; // 0x405668
    int64_t v31 = v30; // 0x405668
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40566a
    if ((int64_t)*v32 > v31) {
        // 0x40566f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405672
    if (*v33 > v30) {
        // 0x405677
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40567a
    int64_t v35 = v31; // 0x40567e
    int64_t v36 = v15; // 0x40567e
    int64_t v37; // 0x4055a0
    int64_t v38; // 0x4055a0
    int64_t v39; // 0x4055a0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4057e8
        int64_t v41 = v40; // 0x4057e8
        v2 = v41;
        int64_t v42; // 0x4055a0
        if (*v33 == v40) {
            // 0x4059d0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4059d8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4057f4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4057f8
                function_404ea0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405808
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405811
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40581a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405831
            int64_t v47 = v45 & 0xffffffff; // 0x405835
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40583e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405844
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405846;
                }
            }
            int64_t v48 = v47 + 1; // 0x405820
            int64_t v49 = v48 & 0xffffffff; // 0x405820
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405831
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40583e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405844
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405846;
                    }
                }
                // 0x405820
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4059e8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405846;
    } else {
        goto lab_0x405684;
    }
  lab_0x40570c:
    // 0x40570c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40570f
    int64_t v51 = v12; // 0x40570f
    int64_t v52 = v14; // 0x40570f
    if (*(char *)v10 == 0) {
        goto lab_0x405668;
    } else {
        goto lab_0x405715;
    }
  lab_0x405684:;
    int32_t v53 = v35; // 0x405684
    int64_t v54; // 0x4055a0
    int64_t v55; // 0x4055a0
    int64_t v56; // 0x4055a0
    int64_t v57; // 0x4055a0
    int64_t v58; // 0x4055a0
    int64_t v59; // 0x4055a0
    char * v60; // 0x4055a0
    int64_t v61; // 0x4055a0
    int64_t v62; // 0x405699
    int64_t v63; // 0x4055a0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4057d3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4057d6;
    } else {
        // 0x40568c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4055a0
        int64_t v66 = v65 ? -1 : 1; // 0x4056a0
        int64_t v67 = (int64_t)"--"; // 0x4055a0
        int64_t v68 = v62; // 0x4055a0
        int64_t v69 = 3; // 0x4056a0
        unsigned char v70 = *(char *)v68; // 0x4056a0
        char v71 = *(char *)v67; // 0x4056a0
        char v72 = v71; // 0x4056a0
        bool v73 = false; // 0x4056a0
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
            // 0x405790
            if (*(char *)v62 == 45) {
                // 0x405850
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405850
                if (c == 0) {
                    goto lab_0x40579a;
                } else {
                    // 0x40585d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4058e0;
                    } else {
                        if (c == 45) {
                            // 0x405ac3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405935;
                        } else {
                            // 0x40586e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4058e0;
                            } else {
                                // 0x405873
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405894;
                                } else {
                                    // 0x40587a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4058e0;
                                    } else {
                                        goto lab_0x405894;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40579a;
            }
        } else {
            uint32_t v75 = *v33; // 0x4056b0
            v2 = v75;
            int32_t v76 = *v32; // 0x4056b3
            int64_t v77 = v35 + 1; // 0x4056b6
            int32_t v78 = v77; // 0x4056b9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405a20
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4056c7
                    function_404ea0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4056d5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4057d6;
        }
    }
  lab_0x405715:;
    // 0x405715
    int64_t v79; // bp-104, 0x4055a0
    int64_t v80 = &v79; // 0x4055aa
    int64_t v81 = v50 + 1; // 0x405715
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40571c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405721
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405725
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405729
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405731
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405736
    int32_t c2 = v84; // 0x405736
    char * found_char_pos = strchr(str2, c2); // 0x405736
    int64_t v87 = *v82; // 0x40573b
    v2 = v87;
    int64_t v88 = *v85; // 0x405745
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405750
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405a40
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405a0d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40577e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405736
    char v91 = *(char *)(v90 + 1); // 0x40576b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405725
        if (v91 != 58) {
            // 0x40577e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405994
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405a98
                *v8 = 0;
            } else {
                // 0x405a7c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4059be
            *v83 = 0;
            // 0x40577e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40599e
        if (v93 != 0) {
            // 0x405a30
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4059be
            *v83 = 0;
            // 0x40577e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4059b1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4059be
            *v83 = 0;
            // 0x40577e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405afa
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405aaa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405ab1
        // 0x4059be
        *v83 = 0;
        // 0x40577e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405909
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40590b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405b30
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405ae1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405ae8
            // 0x40577e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405916
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40591a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405935;
  lab_0x405846:
    // 0x405846
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405684;
  lab_0x405935:;
    int64_t v99 = function_404f80(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405953
    // 0x40577e
    return v99 & 0xffffffff;
  lab_0x4057d6:;
    int32_t v100 = v55; // 0x4057d6
    if (v100 != (int32_t)v59) {
        // 0x4057da
        *(int32_t *)a7 = v100;
    }
    // 0x40577e
    return 0xffffffff;
  lab_0x40579a:
    // 0x40579a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4057a1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40577e
    return v99 & 0xffffffff;
  lab_0x4058e0:
    // 0x4058e0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405715;
  lab_0x405894:
    // 0x405894
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404f80(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x4058ba
    if ((int32_t)v101 != -1) {
        // 0x40577e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4058cf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4058e0;
}
// Address range: 0x405b70 - 0x405bc6
int64_t function_405b70(int64_t a1) {
    // 0x405b70
    *(int32_t *)&g48 = g28;
    *(int32_t *)&g49 = g27;
    int64_t v1; // 0x405b70
    int64_t result = function_4055a0(v1, v1, v1, v1, v1, v1, &g48, a1 & 0xffffffff); // 0x405b96
    g28 = *(int32_t *)&g48;
    g53 = g51;
    *(int32_t *)&g26 = g50;
    return result;
}
// Address range: 0x405bd0 - 0x405be8
int64_t function_405bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405bd0
    return function_405b70(1);
}
// Address range: 0x405bf0 - 0x405c03
int64_t function_405bf0(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x405bf0
    return function_405b70(0);
}
// Address range: 0x405c10 - 0x405c25
int64_t function_405c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405c10
    return function_4055a0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405c30 - 0x405c46
int64_t function_405c30(void) {
    // 0x405c30
    return function_405b70(0);
}
// Address range: 0x405c50 - 0x405c68
int64_t function_405c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405c50
    return function_4055a0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405c70 - 0x405cea
int64_t function_405c70(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405c7b
    int64_t v2 = (int64_t)&g12; // 0x405c7b
    int32_t * pwc; // 0x405c70
    int64_t v3; // 0x405c70
    int64_t n; // 0x405c70
    if (a2 == 0) {
        goto lab_0x405cc2;
    } else {
        // 0x405c7d
        if (a3 == 0) {
            // 0x405ca8
            return -2;
        }
        // 0x405c89
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405cc2;
        } else {
            goto lab_0x405c94;
        }
    }
  lab_0x405cc2:
    // 0x405cc2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405c70
    pwc = (int32_t *)&v4;
    goto lab_0x405c94;
  lab_0x405c94:;
    char * wstr = (char *)v3; // 0x405c9a
    int64_t ps; // 0x405c70
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405c9a
    int64_t result = v5; // 0x405c9a
    if (v5 < 0xfffffffe) {
        // 0x405ca8
        return result;
    }
    int64_t result2 = result; // 0x405cd9
    if ((char)function_405d50(0, v3) == 0) {
        // 0x405cdb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405ca8
    return result2;
}
// Address range: 0x405cf0 - 0x405d4d
int64_t function_405cf0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405cf7
    int64_t v2; // 0x405cf0
    int64_t result = function_404c40(a1, v2); // 0x405d08
    if ((v2 & 32) != 0) {
        // 0x405d30
        if ((int32_t)result == 0) {
            // 0x405d34
            *__errno_location() = 0;
        }
        // 0x405d2a
        return 0xffffffff;
    }
    // 0x405d11
    if ((int32_t)result == 0) {
        // 0x405d2a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405d18
    if (v1 == 0) {
        // 0x405d1a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405d2a
    return result2;
}
// Address range: 0x405d50 - 0x405dae
int64_t function_405d50(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405d56
    if (locale == NULL) {
        // 0x405d83
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405d56
    bool v2; // 0x405d50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x405d50
    int64_t v5 = v1; // 0x405d50
    int64_t v6 = 2; // 0x405d75
    unsigned char v7 = *(char *)v5; // 0x405d75
    char v8 = *(char *)v4; // 0x405d75
    char v9 = v8; // 0x405d75
    bool v10 = false; // 0x405d75
    while (v7 == v8) {
        // 0x405d68
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405d81
    int64_t v13 = v1; // 0x405d81
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405d83
        return 0;
    }
    int64_t v14 = 6; // 0x405d81
    unsigned char v15 = *(char *)v13; // 0x405d9d
    char v16 = *(char *)v12; // 0x405d9d
    char v17 = v16; // 0x405d9d
    bool v18 = false; // 0x405d9d
    while (v15 == v16) {
        // 0x405d90
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
// Address range: 0x405db0 - 0x406312
int64_t function_405db0(void) {
    char * v1 = nl_langinfo(14); // 0x405dc6
    char * v2 = g52; // 0x405dcb
    char * v3; // 0x405db0
    int64_t v4; // 0x405db0
    int64_t v5; // 0x405db0
    int64_t v6; // 0x405db0
    int64_t v7; // 0x405db0
    int32_t size; // 0x405db0
    int32_t size2; // 0x405db0
    int32_t len; // 0x405e82
    int64_t v8; // 0x405e82
    char * env_val; // 0x405e6d
    if (v2 == NULL) {
        // 0x405e68
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405ed5;
        } else {
            // 0x405e7a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405ed5;
            } else {
                // 0x405e7f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405e6d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406305
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405ed5;
                    } else {
                        // 0x406279
                        size2 = len + 14;
                        goto lab_0x405e9b;
                    }
                } else {
                    goto lab_0x405e9b;
                }
            }
        }
    } else {
        // 0x405db0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405dea;
    }
  lab_0x40611c:;
    // 0x40611c
    struct _IO_FILE * stream; // 0x405f5b
    int32_t v10 = __uflow(stream); // 0x40611f
    int64_t v11; // 0x405db0
    int64_t v12 = v11; // 0x406129
    int64_t v13; // 0x405db0
    int64_t v14 = v13; // 0x406129
    int32_t v15 = v10; // 0x406129
    int64_t v16; // 0x405db0
    int64_t v17 = v16; // 0x406129
    int64_t v18 = v11; // 0x406129
    int64_t v19 = v13; // 0x406129
    int64_t v20 = v16; // 0x406129
    if (v10 == -1) {
        // break -> 0x40612f
        goto lab_0x40612f;
    }
    goto lab_0x405fa9;
  lab_0x405f9e:;
    // 0x405f9e
    int64_t v90; // 0x405db0
    int64_t * v32; // 0x405f90
    *v32 = v90 + 1;
    int64_t v89; // 0x405db0
    v12 = v89;
    int64_t v91; // 0x405db0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405db0
    v17 = v92;
    goto lab_0x405fa9;
  lab_0x405fa9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405db0
    int32_t v25; // bp-120, 0x405db0
    int32_t v26; // bp-184, 0x405db0
    int64_t v27; // 0x405f5b
    int64_t v28; // 0x405f78
    int64_t v29; // 0x405f7d
    int64_t * v30; // 0x405f94
    switch (c) {
        case 32: {
            goto lab_0x405f90;
        }
        case 10: {
            goto lab_0x405f90;
        }
        case 9: {
            goto lab_0x405f90;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406181
            int32_t v33; // 0x405db0
            char v34; // 0x405db0
            int32_t v35; // 0x40618e
            if (v31 < *v30) {
                // 0x406160
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40618b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406181
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406160
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40618b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406170
                v36 = v33;
            }
            // 0x40625f
            if (v36 == -1) {
                // break -> 0x40612f
                break;
            }
            goto lab_0x405f90;
        }
        default: {
            // 0x405fbf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40612f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405fe8
            int64_t v39 = v37 + 4; // 0x405fea
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405ff6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405ff8
            while (v41 == 0) {
                // 0x405fe8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406016
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406022
            int64_t v45 = v43 + 4; // 0x406024
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406030
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406032
            while (v47 == 0) {
                // 0x406022
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40601f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406048
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406058
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40605c
            int64_t v52 = v51 + v48; // 0x406065
            int64_t * mem; // 0x405db0
            int64_t v53; // 0x405db0
            int64_t v54; // 0x405db0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40619b
                int64_t v56 = v55 + 3; // 0x4061a7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406081
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406090
            if (mem == NULL) {
                // 0x4062bc
                free((int64_t *)v21);
                function_404c40(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405f34;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4060a8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4060b2
            uint32_t v62 = (int32_t)v59; // 0x4060b5
            int64_t v63; // 0x405db0
            if (v62 >= 8) {
                // 0x4061c4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4061de
                int64_t v66 = v61 - v65; // 0x4061e2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4061ed
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4061fe
                    int64_t v70 = v69 & 0xffffffff; // 0x4061fe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4061fb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40628f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4060c7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4060cb
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
            int64_t v73 = v51 + 1; // 0x4060db
            int64_t v74 = v60 - 1; // 0x4060df
            uint32_t v75 = (int32_t)v73; // 0x4060e4
            int64_t v76; // 0x405db0
            if (v75 >= 8) {
                // 0x406212
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40621c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40622c
                int64_t v80 = v74 - v79; // 0x406230
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40623b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40624b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406249
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4062a6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4062ae
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4060f6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4060fa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4062f3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40610e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405f9e;
            } else {
                goto lab_0x40611c;
            }
        }
    }
  lab_0x405f90:;
    int64_t v93 = v23; // 0x405db0
    int64_t v94 = v22; // 0x405db0
    int64_t v95 = v21; // 0x405db0
    goto lab_0x405f90_2;
  lab_0x405ed5:;
    int64_t * mem3 = malloc(size); // 0x405ed5
    int64_t v97 = (int64_t)&g12; // 0x405ee0
    int64_t v98; // 0x405db0
    int64_t path; // 0x405db0
    if (mem3 == NULL) {
        goto lab_0x405eb2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405ed5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405ef6;
    }
  lab_0x405dea:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x405ddd
    char v100 = *v3; // 0x405dea
    int64_t v101; // 0x405db0
    if (v100 == 0) {
        // 0x405e44
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405db0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405db0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405e30
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405e37;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405e00
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405e0d
        char v107 = *(char *)v106; // 0x405e12
        v102 = v107;
        if (v107 == 0) {
            // 0x405e44
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405e1b
    v104 = v103 + 1;
  lab_0x405e37:
    // 0x405e44
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405eb2:;
    char * v108 = (char *)v97;
    g52 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405dea;
  lab_0x405ef6:;
    int64_t v109 = v98 + path; // 0x405ef6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405f22
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405f51
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406282
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405f75
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405f90_2:;
                uint64_t v96 = *v32; // 0x405f90
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40611c;
                } else {
                    goto lab_0x405f9e;
                }
            }
          lab_0x40612f:
            // 0x40612f
            function_404c40(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40614e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405f34;
  lab_0x405e9b:;
    int64_t * mem4 = malloc(size2); // 0x405e9b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405f41
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405ef6;
    } else {
        goto lab_0x405eb2;
    }
  lab_0x405f34:
    // 0x405f34
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405eb2;
}
// Address range: 0x406320 - 0x40637d
int64_t function_406320(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406320
    return function_4014e8();
}
// Address range: 0x406380 - 0x406381
int64_t function_406380(void) {
    // 0x406380
    int64_t result; // 0x406380
    return result;
}
// Address range: 0x406390 - 0x4063a8
int64_t function_406390(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406390
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x4063a8 - 0x4063c8
int64_t function_4063a8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x4063b2
    while (*(int64_t *)v1 != -1) {
        // 0x4063b3
        v1 -= 8;
    }
    // 0x4063c4
    return result;
}
