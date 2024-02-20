// Address range: 0x401930 - 0x401935
int64_t function_401930(void) {
    // 0x401930
    abort();
    // UNREACHABLE
}
// Address range: 0x401935 - 0x40193a
int64_t function_401935(void) {
    // 0x401935
    abort();
    // UNREACHABLE
}
// Address range: 0x40193a - 0x40193f
int64_t function_40193a(void) {
    // 0x40193a
    abort();
    // UNREACHABLE
}
// Address range: 0x40193f - 0x401944
int64_t function_40193f(void) {
    // 0x40193f
    abort();
    // UNREACHABLE
}
// Address range: 0x401944 - 0x401949
int64_t function_401944(void) {
    // 0x401944
    abort();
    // UNREACHABLE
}
// Address range: 0x401949 - 0x40194e
int64_t function_401949(void) {
    // 0x401949
    abort();
    // UNREACHABLE
}
// Address range: 0x40194e - 0x401953
int64_t function_40194e(void) {
    // 0x40194e
    abort();
    // UNREACHABLE
}
// Address range: 0x401953 - 0x401958
int64_t function_401953(void) {
    // 0x401953
    abort();
    // UNREACHABLE
}
// Address range: 0x401960 - 0x40201d
int64_t function_401960(int64_t a1, int64_t a2) {
    char * exec_argv[1]; // 0x401d74
    // 0x401960
    function_4027f0(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g21 = 125;
    int64_t v1; // 0x401960
    function_409450(0x4024e0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    bool v2; // 0x401960
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4; // 0x401960
    int64_t v5; // 0x401960
    int64_t v6; // 0x4019de
    uint32_t v7; // 0x401960
    while (true) {
      lab_0x4019cb:
        // 0x4019cb
        v5 = v4;
        v6 = function_405eb0(a1 & 0xffffffff, a2, "+i:o:e:", &g4, 0, v5);
        v7 = (int32_t)v6;
        switch (v7) {
            case -1: {
                goto lab_0x401b81;
            }
            case 101: {
                goto lab_0x401a39;
            }
            default: {
                if (v7 <= 101) {
                    if (v7 == -131) {
                        // 0x4019fe
                        function_404890((int64_t)g31, "stdbuf", "GNU coreutils", (int64_t)g20, "Padraig Brady", 0);
                        exit(0);
                        // UNREACHABLE
                    }
                    if (v7 == -130) {
                        // 0x401b37
                        function_402100(0);
                        // UNREACHABLE
                    }
                    goto lab_0x401b21;
                }
                switch (v7) {
                    case 111: {
                        goto lab_0x401a39;
                    }
                    case 105: {
                        goto lab_0x401a39;
                    }
                    default: {
                        goto lab_0x401b21;
                    }
                }
            }
        }
    }
  lab_0x401b81:;
    int32_t v8 = *(int32_t *)0x60d27c; // 0x401b81
    if ((int32_t)a1 - v8 < 1) {
      lab_0x401b52:
        // 0x401b52
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing operand", 5));
        // 0x401b21
        function_402100(125);
        // UNREACHABLE
    }
    int64_t v9 = 8 * (int64_t)v8 + a2; // 0x401b90
    int64_t v10 = 0;
    int64_t v11 = &g36;
    int64_t v12 = *(int64_t *)(v11 + 16); // 0x401ba0
    int64_t v13 = 0; // 0x401ba7
    int64_t v14 = v10; // 0x401ba7
    int64_t v15; // 0x401960
    int64_t v16; // 0x401960
    char * str; // bp-248, 0x401960
    int64_t v17; // 0x401960
    int32_t v18; // 0x401ba9
    int64_t v19; // 0x401ba9
    uint32_t v20; // 0x401baf
    int64_t v21; // 0x401bbb
    int32_t v22; // 0x401de1
    int64_t v23; // 0x401df5
    int32_t v24; // 0x401be1
    int64_t v25; // 0x401bf5
    if (v12 != 0) {
        // 0x401ba9
        v18 = *(int32_t *)(v11 + 8);
        v19 = v18;
        v20 = v18 + 128;
        if (*(char *)v12 == 76) {
            // 0x401dc8
            v22 = v18;
            if (v20 < 384) {
                // 0x401dd0
                v22 = *(int32_t *)((0x100000000 * v19 >> 30) + (int64_t)*__ctype_toupper_loc());
            }
            // 0x401de4
            v23 = function_4050d0((int64_t *)&str, "%s%c=L", "_STDBUF_", v22, v10, v5);
            v15 = v10;
            v17 = v23;
        } else {
            // 0x401bbb
            v21 = *(int64_t *)v11;
            v24 = v18;
            if (v20 < 384) {
                // 0x401bc6
                v24 = *(int32_t *)((0x100000000 * v19 >> 30) + (int64_t)*__ctype_toupper_loc());
            }
            // 0x401be4
            v25 = function_4050d0((int64_t *)&str, "%s%c=%lu", "_STDBUF_", v24, v21, v5);
            v15 = v21;
            v17 = v25;
        }
        // 0x401bfa
        if ((int32_t)v17 < 0) {
            // 0x401f53
            v16 = (int64_t)&str;
            goto lab_0x401f53_2;
        }
        // 0x401c02
        v13 = 1;
        v14 = v15;
        if (putenv(str) != 0) {
            goto lab_0x401f91;
        }
    }
    int64_t v26 = v14;
    int64_t v27 = v13;
    int64_t v28 = v11 + 24; // 0x401c19
    while (v28 != (int64_t)&g39) {
        // 0x401ba0
        v11 = v28;
        v12 = *(int64_t *)(v11 + 16);
        v13 = v27;
        v14 = v26;
        if (v12 != 0) {
            // 0x401ba9
            v18 = *(int32_t *)(v11 + 8);
            v19 = v18;
            if (*(char *)v12 == 76) {
                // 0x401dc8
                v22 = v18;
                if (v20 < 384) {
                    // 0x401dd0
                    v22 = *(int32_t *)((0x100000000 * v19 >> 30) + (int64_t)*__ctype_toupper_loc());
                }
                // 0x401de4
                v23 = function_4050d0((int64_t *)&str, "%s%c=L", "_STDBUF_", v22, v10, v5);
                v15 = v10;
                v17 = v23;
            } else {
                // 0x401bbb
                v21 = *(int64_t *)v11;
                v24 = v18;
                if (v18 < 256) {
                    // 0x401bc6
                    v24 = *(int32_t *)((0x100000000 * v19 >> 30) + (int64_t)*__ctype_toupper_loc());
                }
                // 0x401be4
                v25 = function_4050d0((int64_t *)&str, "%s%c=%lu", "_STDBUF_", v24, v21, v5);
            }
            // 0x401bfa
            if ((int32_t)v25 < 0) {
                // 0x401f53
                v16 = (int64_t)&str;
                goto lab_0x401f53_2;
            }
            // 0x401c02
            v13 = 1;
            v14 = v21;
            if (putenv(str) != 0) {
                goto lab_0x401f91;
            }
        }
        // 0x401c19
        v26 = v14;
        v27 = v13;
        v28 = v11 + 24;
    }
    // 0x401c2a
    if ((char)v27 == 0) {
        // 0x401b52
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify a buffering mode option", 5));
        // 0x401b21
        function_402100(125);
        // UNREACHABLE
    }
    // 0x401c32
    int64_t v29; // 0x401960
    if (strchr(g42, 47) == NULL) {
        int64_t v30 = function_404c60(); // 0x401e1d
        int64_t v31; // 0x401960
        if (v30 == 0) {
            char * env_val = getenv("PATH"); // 0x401e7d
            v31 = (int64_t)env_val;
            if (env_val != NULL) {
                int64_t str2 = function_404c00(env_val); // 0x401e8d
                char * next_token = strtok((char *)str2, ":"); // 0x401e9d
                v31 = str2;
                if (next_token != NULL) {
                    int64_t path = function_4026f0(); // 0x401ec6
                    while (access((char *)path, X_OK) != 0) {
                        // 0x401ea4
                        free((int64_t *)path);
                        v31 = str2;
                        if (strtok(NULL, ":") == NULL) {
                            goto lab_0x401e39;
                        }
                        path = function_4026f0();
                    }
                    // 0x401ee2
                    g39 = function_402580();
                    free((int64_t *)path);
                    v31 = str2;
                }
            }
        } else {
            // 0x401e2a
            g39 = function_402580();
            v31 = v30;
        }
      lab_0x401e39:
        // 0x401e39
        free((int64_t *)v31);
        v29 = g39;
    } else {
        int64_t v32 = function_402580(); // 0x401c52
        g39 = v32;
        v29 = v32;
    }
    // 0x401c5e
    if (v29 == 0) {
        // 0x401e62
        g39 = function_404c00("/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib/coreutils");
    }
    char * env_val2 = getenv("LD_PRELOAD"); // 0x401c76
    int64_t v33 = g39; // bp-232, 0x401c9a
    char * v34; // 0x401960
    char * str3; // bp-200, 0x401960
    char * v35; // bp-240, 0x401960
    if (*(char *)g39 != 0) {
        int64_t v36 = g39; // 0x401cbe
        int64_t v37 = &v33; // 0x401cb5
        while ((int32_t)function_4050d0((int64_t *)&v35, "%s/%s", (char *)v36, (int32_t)"libstdbuf.so", v26, v5) >= 0) {
            int32_t v38 = __xstat(1, v35, (struct stat *)&str3); // 0x401d03
            v34 = v35;
            if (v38 == 0) {
                goto lab_0x401d0c;
            }
            // 0x401cb0
            v37 += 8;
            free((int64_t *)v35);
            v36 = *(int64_t *)v37;
            if (v36 == 0) {
                // 0x401f5f
                function_404410((int64_t)"libstdbuf.so");
                error(125, (int32_t)"failed to find %s" ^ (int32_t)"failed to find %s", dcgettext((char *)((int32_t)"libstdbuf.so" ^ (int32_t)"libstdbuf.so"), "failed to find %s", 5));
                goto lab_0x401f91;
            }
            // 0x401cca
            if (*(char *)v36 == 0) {
                goto lab_0x401e04;
            }
        }
        // 0x401f53
        function_404c20((int64_t)&v35);
        // UNREACHABLE
    }
  lab_0x401e04:;
    char * v39 = (char *)function_404c00("libstdbuf.so"); // 0x401e0e
    v35 = v39;
    v34 = v39;
  lab_0x401d0c:;
    int64_t v40 = (int64_t)v34; // 0x401d0c
    int64_t v41; // 0x401960
    if (env_val2 == NULL) {
        int64_t v42 = function_4050d0((int64_t *)&str3, "%s=%s", "LD_PRELOAD", (int32_t)v40, v40, v5); // 0x401e58
        v41 = v42;
    } else {
        int64_t v43 = function_4050d0((int64_t *)&str3, "%s=%s:%s", "LD_PRELOAD", (int32_t)(int64_t)env_val2, v40, v5); // 0x401d2c
        v41 = v43;
    }
    // 0x401d31
    v16 = (int64_t)&str3;
    if ((int32_t)v41 < 0) {
      lab_0x401f53_2:
        // 0x401f53
        function_404c20(v16);
        // UNREACHABLE
    }
    // 0x401d39
    free((int64_t *)v35);
    int32_t v44 = putenv(str3); // 0x401d48
    int32_t * err_num = __errno_location(); // 0x401d4f
    if (v44 == 0) {
        // 0x401d5f
        free((int64_t *)g39);
        int64_t * file = (int64_t *)v9; // 0x401d6d
        exec_argv[0] = (char *)v9;
        execvp((char *)*file, exec_argv);
        function_404410(*file);
        error(0, *err_num, dcgettext(NULL, "failed to run command %s", 5));
        return *err_num == 2 ? 127 : 126;
    }
    // 0x401fda
    function_404410((int64_t)str3);
    error(125, *err_num, dcgettext(NULL, "failed to update the environment with %s", 5));
    // 0x401b52
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify a buffering mode option", 5));
    // 0x401b21
    function_402100(125);
    // UNREACHABLE
  lab_0x401f91:
    // 0x401f91
    function_404410((int64_t)str);
    error(125, *__errno_location(), dcgettext(NULL, "failed to update the environment with %s", 5));
    goto lab_0x401b52;
  lab_0x401a39:;
    uint32_t v45 = *(int32_t *)((4 * v6 + 0x3fffffe6c & 0x3fffffffc) + (int64_t)&g3); // 0x401a3c
    if (v45 >= 3) {
        // 0x401f3a
        __assert_fail("0 <= opt_fileno && opt_fileno < ARRAY_CARDINALITY (stdbuf)", "src/stdbuf.c", 335, "main");
        v16 = (int64_t)"0 <= opt_fileno && opt_fileno < ARRAY_CARDINALITY (stdbuf)";
        goto lab_0x401f53_2;
    }
    int64_t v46 = (int64_t)g52; // 0x401a4d
    int64_t v47 = 24 * (int64_t)v45; // 0x401a58
    *(int32_t *)(v47 + (int64_t)&g37) = v7;
    unsigned char v48 = *g52; // 0x401a5f
    int64_t v49 = v46; // 0x401a66
    if (v48 < 33) {
        unsigned char v50 = v48 % 64;
        int64_t v51 = v46; // 0x401a71
        v49 = v46;
        if (v50 != 0 && (1 << (int64_t)v50 & 0x100003e00) != 0) {
            int64_t v52 = v51 + 1;
            char * v53 = (char *)v52; // 0x401a77
            g52 = v53;
            unsigned char v54 = *v53; // 0x401a7e
            v49 = v52;
            while (v54 < 33) {
                unsigned char v55 = v54 % 64;
                v51 = v52;
                v49 = v52;
                if (v55 == 0 || (1 << (int64_t)v55 & 0x100003e00) == 0) {
                    // break -> 0x401a90
                    break;
                }
                v52 = v51 + 1;
                v53 = (char *)v52;
                g52 = v53;
                v54 = *v53;
                v49 = v52;
            }
        }
    }
    int64_t v56 = v49;
    *(int64_t *)(v47 + (int64_t)&g38) = v56;
    if (v7 == 105) {
        // 0x401b3e
        if (*(char *)v56 == 76) {
            // 0x401b52
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"line buffering stdin is meaningless", 5));
            // 0x401b21
            function_402100(125);
            // UNREACHABLE
        }
    }
    int64_t v57 = 2; // 0x401960
    int64_t v58 = v56;
    int64_t v59 = (int64_t)&g2;
    unsigned char v60 = *(char *)v58; // 0x401ab2
    char v61 = *(char *)v59; // 0x401ab2
    char v62 = v61; // 0x401ab2
    bool v63 = false; // 0x401ab2
    while (v60 == v61) {
        int64_t v64 = v57 - 1; // 0x401ab2
        int64_t v65 = v59 + v3; // 0x401ab2
        int64_t v66 = v58 + v3; // 0x401ab2
        v57 = v64;
        v62 = v60;
        v63 = true;
        if (v64 == 0) {
            // break -> 
            break;
        }
        v58 = v66;
        v59 = v65;
        v60 = *(char *)v58;
        v61 = *(char *)v59;
        v62 = v61;
        v63 = false;
    }
    unsigned char v67 = v62;
    int32_t * err_num2; // 0x401ae2
    int32_t v68; // 0x401f00
    if ((v60 >= v67 && !v63) != v60 < v67) {
        int64_t v69 = function_404c90(v56, 0, 10, (int64_t *)&str3, "EGkKMPTYZ0", v56); // 0x401ad9
        err_num2 = __errno_location();
        int32_t v70 = v69;
        if (v70 != 0) {
            // 0x401efb
            v68 = 75;
            if (v70 == 1) {
                goto lab_0x401f02;
            } else {
                // 0x401f00
                v68 = *err_num2;
                goto lab_0x401f02;
            }
        }
        // 0x401af6
        *err_num2 = 0;
        *(int64_t *)(v47 + (int64_t)&g36) = (int64_t)str3;
    }
    // 0x4019cb
    v4 = v56;
    goto lab_0x4019cb;
  lab_0x401f02:
    // 0x401f02
    *err_num2 = v68;
    function_404410((int64_t)g52);
    error(125, *err_num2, dcgettext(NULL, "invalid mode %s", 5));
    // 0x401f3a
    __assert_fail("0 <= opt_fileno && opt_fileno < ARRAY_CARDINALITY (stdbuf)", "src/stdbuf.c", 335, "main");
    v16 = (int64_t)"0 <= opt_fileno && opt_fileno < ARRAY_CARDINALITY (stdbuf)";
    goto lab_0x401f53_2;
}
// Address range: 0x402020 - 0x40204b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402020
    int64_t v1; // 0x402020
    __libc_start_main(0x401960, (int32_t)a4, (char **)&v1, (void (*)())0x4093e0, (void (*)())0x409440, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40204b - 0x40206a
int64_t function_40204b(void) {
    // 0x40204b
    return &g30;
}
// Address range: 0x40206a - 0x4020a1
int64_t function_40206a(void) {
    // 0x40206a
    return 0;
}
// Address range: 0x4020a1 - 0x4020f8
int64_t function_4020a1(void) {
    // 0x4020a1
    if (g34 != 0) {
        // 0x4020f7
        int64_t result; // 0x4020a1
        return result;
    }
    int64_t v1 = g35; // 0x4020d4
    int64_t result2; // 0x4020e6
    if (g35 >= ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x4020e6
        result2 = function_40204b();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x4020d6
        v1++;
    }
    // 0x4020ca
    g35 = v1;
    // 0x4020e6
    result2 = function_40204b();
    g34 = 1;
    return result2;
}
// Address range: 0x4020f8 - 0x4020fd
int64_t function_4020f8(void) {
    // 0x4020f8
    return function_40206a();
}
// Address range: 0x402100 - 0x4024bd
int64_t function_402100(int64_t a1) {
    int32_t status = a1; // 0x402116
    if (status != 0) {
        // 0x40211a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40213f
        exit(status);
        // UNREACHABLE
    }
    // 0x402146
    __printf_chk(1, dcgettext(NULL, "Usage: %s OPTION... COMMAND\n", 5));
    fputs_unlocked(dcgettext(NULL, "Run COMMAND, with modified buffering operations for its standard streams.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -i, --input=MODE   adjust standard input stream buffering\n  -o, --output=MODE  adjust standard output stream buffering\n  -e, --error=MODE   adjust standard error stream buffering\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nIf MODE is 'L' the corresponding stream will be line buffered.\nThis option is invalid with standard input.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nIf MODE is '0' the corresponding stream will be unbuffered.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nOtherwise MODE is a number which may be followed by one of the following:\nKB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\nIn this case the corresponding stream will be fully buffered with the buffer\nsize set to MODE bytes.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nNOTE: If COMMAND adjusts the buffering of its standard streams ('tee' does\nfor example) then that will override corresponding changes by 'stdbuf'.\nAlso some filters (like 'dd' and 'cat' etc.) don't use streams for I/O,\nand are thus unaffected by 'stdbuf' settings.\n", 5), g31);
    int64_t v1 = &g1; // bp-136, 0x40229f
    bool v2; // 0x402100
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402320
    int64_t v6 = *(int64_t *)v5; // 0x402324
    int64_t v7 = 7; // 0x40232a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"stdbuf";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402336
        char v11 = *(char *)v9; // 0x402336
        char v12 = v11; // 0x402336
        bool v13 = false; // 0x402336
        while (v10 == v11) {
            // 0x40232c
            v7--;
            int64_t v14 = v9 + v3; // 0x402336
            int64_t v15 = v8 + v3; // 0x402336
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
            // break -> 0x402342
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x402342
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402454;
        } else {
            // 0x40243e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402493
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4023a4;
            } else {
                goto lab_0x402454;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4023a4;
        } else {
            // 0x40238a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402493
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4023a4;
            } else {
                goto lab_0x4023a4;
            }
        }
    }
  lab_0x402454:
    // 0x402454
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4023e4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40213f
    exit(status);
    // UNREACHABLE
  lab_0x4023a4:
    // 0x4023a4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4023e4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40213f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4024c0 - 0x4024c8
int64_t function_4024c0(int64_t a1) {
    // 0x4024c0
    g41 = a1;
    int64_t result; // 0x4024c0
    return result;
}
// Address range: 0x4024d0 - 0x4024d8
int64_t function_4024d0(int64_t a1) {
    // 0x4024d0
    g40 = a1;
    int64_t result; // 0x4024d0
    return result;
}
// Address range: 0x4024e0 - 0x40257e
int64_t function_4024e0(void) {
    // 0x4024e0
    int32_t * err_num; // 0x4024f6
    if ((int32_t)function_406240((int64_t)g31) == 0) {
        goto lab_0x40250c;
    } else {
        // 0x4024f6
        err_num = __errno_location();
        if (g40 == 0) {
            goto lab_0x402523;
        } else {
            // 0x402507
            if (*err_num != 32) {
                goto lab_0x402523;
            } else {
                goto lab_0x40250c;
            }
        }
    }
  lab_0x40250c:;
    int64_t result = function_406240((int64_t)g33); // 0x402513
    if ((int32_t)result == 0) {
        // 0x40251c
        return result;
    }
    // 0x40255e
    _exit(g21);
    // UNREACHABLE
  lab_0x402523:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40252f
    if (g41 == 0) {
        // 0x402569
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402543
        error(0, *err_num, "%s: %s", (char *)function_404260((int64_t)g41), v1);
    }
    // 0x40255e
    _exit(g21);
    // UNREACHABLE
}
// Address range: 0x402580 - 0x402598
int64_t function_402580(void) {
    // 0x402580
    int64_t v1; // 0x402580
    int64_t result = function_402600(v1); // 0x402584
    if (result != 0) {
        // 0x40258e
        return result;
    }
    // 0x402593
    function_404c20(v1);
    // UNREACHABLE
}
// Address range: 0x4025a0 - 0x4025fd
int64_t function_4025a0(int64_t a1) {
    // 0x4025a0
    int64_t v1; // 0x4025a0
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x4025ae
    int64_t v3 = function_402660(a1, v1); // 0x4025b2
    int64_t result = v3 - a1; // 0x4025ba
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x4025e3
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x4025d0
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x4025e3
            break;
        }
        result2--;
    }
    // 0x4025e3
    return result2;
}
// Address range: 0x402600 - 0x40265a
int64_t function_402600(int64_t a1) {
    // 0x402600
    int64_t v1; // 0x402600
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x40261f
    if (mem == NULL) {
        // 0x402646
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x402635
    int64_t v3; // 0x402600
    if (v2 == 0) {
        // 0x402650
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x402635
    *(char *)(v3 + result) = 0;
    // 0x402646
    return result;
}
// Address range: 0x402660 - 0x4026bb
int64_t function_402660(int64_t a1, int64_t a2) {
    // 0x402660
    int64_t v1; // 0x402660
    char v2 = v1;
    int64_t v3 = a1; // 0x402669
    int64_t v4 = a1; // 0x402669
    char v5 = v2; // 0x402669
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x402674
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x402670
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40267e
    if (v5 == 0) {
      lab_0x4026ba:
        // 0x4026ba
        return result;
    }
    int64_t v7 = v4; // 0x4026a8
    int64_t v8 = 0; // 0x4026a8
    int64_t v9; // 0x402660
    int64_t v10; // 0x4026aa
    char v11; // 0x4026ae
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x4026a5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x4026aa
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x4026a5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40269a
    char v14 = *(char *)v13; // 0x40269e
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
            // 0x4026a5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x4026aa
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x4026a5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x402690
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x4026ba
    return result2;
}
// Address range: 0x4026c0 - 0x4026eb
int64_t function_4026c0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4026c4
    int64_t result = len; // 0x4026c4
    if (len < 2) {
        // 0x4026da
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x4026d8
    while (*(char *)(v1 + str) == 47) {
        // 0x4026e0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x4026da
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x4026da
    return result2;
}
// Address range: 0x4026f0 - 0x402708
int64_t function_4026f0(void) {
    // 0x4026f0
    int64_t v1; // 0x4026f0
    int64_t result = function_402710(v1, v1, v1); // 0x4026f4
    if (result != 0) {
        // 0x4026fe
        return result;
    }
    // 0x402703
    function_404c20(v1);
    // UNREACHABLE
}
// Address range: 0x402710 - 0x4027e9
int64_t function_402710(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_402660(a1, a2); // 0x402728
    int64_t v2 = function_4026c0(v1); // 0x402733
    int64_t v3 = 0; // 0x402747
    if (v2 != 0) {
        // 0x402749
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x402760
    int64_t v4 = a2; // 0x402760
    int64_t v5; // 0x402710
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x4027d8
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x402741
    int32_t len = strlen((char *)str); // 0x402765
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x402775
    if (mem == NULL) {
        // 0x4027c1
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x40278b
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x402797
    if (a3 != 0) {
        // 0x4027a0
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x4027b3
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x4027c1
    return (int64_t)mem;
}
// Address range: 0x4027f0 - 0x402889
int64_t function_4027f0(int64_t str) {
    // 0x4027f0
    if (str == 0) {
        // 0x402869
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4027fe
    int64_t result = (int64_t)found_char_pos; // 0x4027fe
    if (found_char_pos == NULL) {
        // 0x402859
        g42 = (char *)str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402808
    if (v1 - str < 7) {
        // 0x402859
        g42 = (char *)str;
        g32 = str;
        return result;
    }
    // 0x402818
    bool v2; // 0x4027f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4027f0
    int64_t v5 = result - 6; // 0x4027f0
    int64_t v6 = 7; // 0x402826
    unsigned char v7 = *(char *)v5; // 0x402826
    char v8 = *(char *)v4; // 0x402826
    char v9 = v8; // 0x402826
    bool v10 = false; // 0x402826
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
    int64_t v12 = (int64_t)"lt-"; // 0x402830
    int64_t v13 = v1; // 0x402830
    int64_t v14 = 3; // 0x402830
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402859
        g42 = (char *)str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402842
    char v16 = *(char *)v12; // 0x402842
    char v17 = v16; // 0x402842
    bool v18 = false; // 0x402842
    while (v15 == v16) {
        // 0x402832
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
    int64_t v20 = v1; // 0x40284c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40284e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x402859
    g42 = (char *)v20;
    g32 = v20;
    return result;
}
// Address range: 0x402890 - 0x402982
int64_t function_402890(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4028a4
    int64_t result = (int64_t)v1; // 0x4028a4
    if (result != a1) {
        // 0x4028b1
        return result;
    }
    int64_t v2 = function_406300(); // 0x4028c0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402976
    if (v3 == 85) {
        // 0x4028d0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402968
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4028fe
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40290b
        // 0x4028b1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402968
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40294d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40295a
    // 0x4028b1
    return result4;
}
// Address range: 0x402990 - 0x4029e7
int64_t function_402990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402990
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4029d8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4029e7 - 0x403bb1
int64_t function_4029e7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402a31
    int64_t v3 = 0; // 0x402a31
    int64_t v4; // 0x4029e7
    int64_t v5; // 0x4029e7
    int64_t v6; // 0x4029e7
    int64_t v7; // 0x4029e7
    int64_t v8; // 0x4029e7
    int64_t v9; // 0x4029e7
    int64_t v10; // 0x4029e7
    int64_t v11; // 0x4029e7
    int64_t v12; // 0x4029e7
    int64_t v13; // 0x4029e7
    int64_t v14; // 0x4029e7
    int64_t v15; // 0x4029e7
    int64_t v16; // 0x4029e7
    int64_t v17; // 0x4029e7
    int64_t v18; // 0x4029e7
    int64_t result; // 0x4029e7
    int64_t v19; // 0x4029e7
    int32_t wc; // bp+132, 0x4029e7
    int64_t ps; // bp+136, 0x4029e7
    char v20; // 0x402fa0
    int64_t v21; // 0x402fa0
    int64_t v22; // 0x403348
    int64_t v23; // 0x4029e7
    int64_t v24; // 0x403367
    int32_t v25; // 0x4029e7
    while (true) {
      lab_0x402a38_2:
        // 0x402a38
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4029e7
        int64_t v27; // 0x402a6c
        while (true) {
          lab_0x402a38:
            // 0x402a38
            v5 = v26;
            bool v28 = v15 == v5; // 0x402a43
            if (v15 == -1) {
                // 0x402a45
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402a53
            if (v28) {
                // break (via goto) -> 0x4031b8
                goto lab_0x4031b8;
            }
            // 0x402a5c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g58 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40304b
                    if (v25 % 2 == 0) {
                        goto lab_0x402b91;
                    }
                    // 0x40346d
                    v26 = v5 + 1;
                    goto lab_0x402a38;
                }
                case 7: {
                    goto lab_0x402b91;
                }
                case 8: {
                    goto lab_0x402b91;
                }
                case 9: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402b91;
                }
                case 12: {
                    goto lab_0x402b91;
                }
                case 13: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402b5d;
                }
                case 36: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402b91;
                }
                case 38: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402b91;
                }
                case 44: {
                    goto lab_0x402b91;
                }
                case 45: {
                    goto lab_0x402b91;
                }
                case 46: {
                    goto lab_0x402b91;
                }
                case 47: {
                    goto lab_0x402b91;
                }
                case 48: {
                    goto lab_0x402b91;
                }
                case 49: {
                    goto lab_0x402b91;
                }
                case 50: {
                    goto lab_0x402b91;
                }
                case 51: {
                    goto lab_0x402b91;
                }
                case 52: {
                    goto lab_0x402b91;
                }
                case 53: {
                    goto lab_0x402b91;
                }
                case 54: {
                    goto lab_0x402b91;
                }
                case 55: {
                    goto lab_0x402b91;
                }
                case 56: {
                    goto lab_0x402b91;
                }
                case 57: {
                    goto lab_0x402b91;
                }
                case 58: {
                    goto lab_0x402b91;
                }
                case 59: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402b91;
                }
                case 66: {
                    goto lab_0x402b91;
                }
                case 67: {
                    goto lab_0x402b91;
                }
                case 68: {
                    goto lab_0x402b91;
                }
                case 69: {
                    goto lab_0x402b91;
                }
                case 70: {
                    goto lab_0x402b91;
                }
                case 71: {
                    goto lab_0x402b91;
                }
                case 72: {
                    goto lab_0x402b91;
                }
                case 73: {
                    goto lab_0x402b91;
                }
                case 74: {
                    goto lab_0x402b91;
                }
                case 75: {
                    goto lab_0x402b91;
                }
                case 76: {
                    goto lab_0x402b91;
                }
                case 77: {
                    goto lab_0x402b91;
                }
                case 78: {
                    goto lab_0x402b91;
                }
                case 79: {
                    goto lab_0x402b91;
                }
                case 80: {
                    goto lab_0x402b91;
                }
                case 81: {
                    goto lab_0x402b91;
                }
                case 82: {
                    goto lab_0x402b91;
                }
                case 83: {
                    goto lab_0x402b91;
                }
                case 84: {
                    goto lab_0x402b91;
                }
                case 85: {
                    goto lab_0x402b91;
                }
                case 86: {
                    goto lab_0x402b91;
                }
                case 87: {
                    goto lab_0x402b91;
                }
                case 88: {
                    goto lab_0x402b91;
                }
                case 89: {
                    goto lab_0x402b91;
                }
                case 90: {
                    goto lab_0x402b91;
                }
                case 91: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402b91;
                }
                case 94: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402b91;
                }
                case 96: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402b91;
                }
                case 98: {
                    goto lab_0x402b91;
                }
                case 99: {
                    goto lab_0x402b91;
                }
                case 100: {
                    goto lab_0x402b91;
                }
                case 101: {
                    goto lab_0x402b91;
                }
                case 102: {
                    goto lab_0x402b91;
                }
                case 103: {
                    goto lab_0x402b91;
                }
                case 104: {
                    goto lab_0x402b91;
                }
                case 105: {
                    goto lab_0x402b91;
                }
                case 106: {
                    goto lab_0x402b91;
                }
                case 107: {
                    goto lab_0x402b91;
                }
                case 108: {
                    goto lab_0x402b91;
                }
                case 109: {
                    goto lab_0x402b91;
                }
                case 110: {
                    goto lab_0x402b91;
                }
                case 111: {
                    goto lab_0x402b91;
                }
                case 112: {
                    goto lab_0x402b91;
                }
                case 113: {
                    goto lab_0x402b91;
                }
                case 114: {
                    goto lab_0x402b91;
                }
                case 115: {
                    goto lab_0x402b91;
                }
                case 116: {
                    goto lab_0x402b91;
                }
                case 117: {
                    goto lab_0x402b91;
                }
                case 118: {
                    goto lab_0x402b91;
                }
                case 119: {
                    goto lab_0x402b91;
                }
                case 120: {
                    goto lab_0x402b91;
                }
                case 121: {
                    goto lab_0x402b91;
                }
                case 122: {
                    goto lab_0x402b91;
                }
                case 123: {
                    goto lab_0x402b35;
                }
                case 124: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402b35;
                }
                case 126: {
                    goto lab_0x402b5d;
                }
                default: {
                    goto lab_0x402f35;
                }
            }
        }
      lab_0x402f35:
        if (v23 != 1) {
            // 0x4032a0
            ps = 0;
            int64_t len = v15; // 0x4032b0
            if (v15 == -1) {
                // 0x4032b2
                len = strlen((char *)str);
            }
            // 0x4032de
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40333f:
                // 0x40333f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403344
                int64_t v30 = v29 + str;
                v24 = function_405f30(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4038ba_2;
                    }
                    case -1: {
                        goto lab_0x4038ba_2;
                    }
                    case -2: {
                        // 0x40399d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4039d7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4039da
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4039e7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4039e0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4038ba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4038ba_2;
                    }
                    case 1: {
                        goto lab_0x403310;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4033bc
                        char v34 = *(char *)v33; // 0x4033cd
                        unsigned char v35; // 0x4029e7
                        if (v34 < 125) {
                            // 0x4033d8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4033ef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402990(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4033c0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4033cd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4033d8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4033ef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4033c0
                            v33++;
                        }
                        goto lab_0x403310;
                    }
                }
            }
            goto lab_0x4038ba_2;
        } else {
            // 0x402f84
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402b91;
        }
    }
  lab_0x4031b8:
    // 0x4031b8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403aba
        if (v8 > result) {
            // 0x403ac3
            *(char *)(v12 + result) = 0;
        }
        // 0x402de7
        return result;
    }
    return function_402990(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402b91:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402ba0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402daa_2;
        }
    }
    int64_t v39 = result; // 0x402ca1
    char v40 = v20; // 0x402ca1
    int64_t v41 = v38; // 0x402ca1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402ca1
    int64_t v43 = v36; // 0x402ca1
    goto lab_0x402c1d;
  lab_0x402daa_2:
    // 0x402de7
    return function_402990(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4038ba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402b91;
    } else {
        uint64_t v49 = v46 + v5; // 0x40348e
        int64_t v50 = v5 + 1; // 0x403571
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403578
        char v52 = v20; // 0x403578
        int64_t v53 = result; // 0x403578
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403541
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403545
            int64_t v56 = v54 + 1; // 0x40354a
            int64_t v57 = v51 + 1; // 0x403571
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40353c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403541
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403545
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
        goto lab_0x402c1d;
    }
  lab_0x403310:
    // 0x403310
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40332f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403332
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4038ba
        goto lab_0x4038ba_2;
    }
    goto lab_0x40333f;
  lab_0x402b5d:
    // 0x402b5d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402daa_2;
    }
    goto lab_0x402b91;
  lab_0x402b35:;
    bool v60 = v15 == 1; // 0x402b40
    if (v15 == -1) {
        // 0x402b42
        v60 = *(char *)v1 == 0;
    }
    // 0x402b4e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402b91;
    } else {
        goto lab_0x402b5d;
    }
  lab_0x402c1d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402c22
        *(char *)(v44 + v45) = v40;
    }
    // 0x402c26
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402a38_2;
}
// Address range: 0x403bc0 - 0x403d5e
int64_t function_403bc0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403bc2
    int32_t * v3 = __errno_location(); // 0x403bdc
    int64_t v4 = (int64_t)g23; // 0x403be1
    int32_t v5 = *v3; // 0x403beb
    int64_t v6 = v4; // 0x403c01
    if (v2 >= (int64_t)*(int32_t *)&g26) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403d59
            function_404c20(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403c10
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403c17
        int64_t v9; // 0x403bc0
        if (g23 == &g24) {
            int64_t v10 = function_404a30(0, v8); // 0x403d3a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g24); // 0x403d3f
            *(int64_t *)&g23 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404a30(v4, v8); // 0x403c2b
            *(int64_t *)&g23 = v12;
            v9 = v12;
        }
        // 0x403c3a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g26; // 0x403c3a
        int32_t v14 = v7; // 0x403c41
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g26 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403c71
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403c7b
    int64_t * v17 = (int64_t *)v15; // 0x403c7e
    uint64_t v18 = *v17; // 0x403c7e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403c81
    int64_t result = *v19; // 0x403c81
    int64_t v20; // 0x403bc0
    uint64_t v21 = function_402990(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403ca4
    if (v18 > v21) {
        // 0x403d1b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403cb7
    *v17 = v22;
    if (result != (int64_t)&g43) {
        // 0x403cc7
        free((int64_t *)result);
    }
    int64_t result2 = function_4049d0(v22); // 0x403ce1
    *v19 = result2;
    int64_t v23; // 0x403bc0
    function_402990(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403d1b
    *v3 = v5;
    return result2;
}
// Address range: 0x403d60 - 0x403d94
int64_t function_403d60(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403d67
    int64_t result = function_404bd0(a1 == 0 ? (int64_t)&g44 : a1, 56); // 0x403d86
    return result;
}
// Address range: 0x403da0 - 0x403daf
int64_t function_403da0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g44 : a1); // 0x403dac
    return result;
}
// Address range: 0x403db0 - 0x403dbf
int64_t function_403db0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x403db8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g44;
}
// Address range: 0x403dc0 - 0x403df3
int64_t function_403dc0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 + 8 : a1 + 8; // 0x403dd9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403dde
    uint32_t v3 = *v2; // 0x403dde
    uint32_t v4 = (int32_t)a2 % 32; // 0x403de2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403e00 - 0x403e13
int64_t function_403e00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g44 + 4 : a1 + 4); // 0x403e0c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403e20 - 0x403e4b
int64_t function_403e20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x403e28
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403e45
        abort();
        // UNREACHABLE
    }
    // 0x403e3c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g44;
}
// Address range: 0x403e50 - 0x403ec2
int64_t function_403e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g44 : a5; // 0x403e72
    int32_t * v2 = __errno_location(); // 0x403e7b
    uint32_t v3 = *(int32_t *)v1; // 0x403e9b
    int64_t result = function_402990(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403eaa
    return result;
}
// Address range: 0x403ed0 - 0x403fb1
int64_t function_403ed0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g44 : a4; // 0x403ef2
    int32_t * v2 = __errno_location(); // 0x403ef8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403f17
    int32_t * v4 = (int32_t *)v1; // 0x403f1a
    int64_t v5 = function_402990(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403f35
    int64_t v6 = v5 + 1; // 0x403f3a
    int64_t result = function_4049d0(v6); // 0x403f4f
    function_402990(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403f94
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403f9d
    return result;
}
// Address range: 0x403fc0 - 0x403fca
int64_t function_403fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403fc0
    return function_403ed0(a1, a2, 0, a3);
}
// Address range: 0x403fd0 - 0x404065
int64_t function_403fd0(void) {
    uint32_t v1 = *(int32_t *)&g26; // 0x403fd0
    int64_t v2 = v1; // 0x403fd0
    int64_t v3 = v2; // 0x403fe4
    if (v1 >= 2) {
        int64_t v4 = &g26;
        int64_t v5 = v4 + 16; // 0x404003
        free((int64_t *)*(int64_t *)v4);
        v3 = &g59;
        while (v5 != (int64_t)g23 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404000
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g59;
        }
    }
    int64_t v6 = v3; // 0x40401d
    if (g24 != 0x60d340) {
        // 0x40401f
        free((int64_t *)g24);
        g24 = 256;
        *(int64_t *)&g25 = (int64_t)&g43;
        v6 = &g59;
    }
    int64_t result = v6; // 0x404041
    if (g23 != &g24) {
        // 0x404043
        free(g23);
        *(int64_t *)&g23 = (int64_t)&g24;
        result = &g59;
    }
    // 0x404056
    *(int32_t *)&g26 = 1;
    return result;
}
// Address range: 0x404070 - 0x404081
int64_t function_404070(void) {
    // 0x404070
    int64_t v1; // 0x404070
    return function_403bc0(v1, v1, -1, (int64_t *)&g44);
}
// Address range: 0x404090 - 0x40409a
int64_t function_404090(void) {
    // 0x404090
    int64_t v1; // 0x404090
    return function_403bc0(v1, v1, v1, (int64_t *)&g44);
}
// Address range: 0x4040a0 - 0x4040b6
int64_t function_4040a0(int64_t a1) {
    // 0x4040a0
    return function_403bc0(0, a1, -1, (int64_t *)&g44);
}
// Address range: 0x4040c0 - 0x4040d2
int64_t function_4040c0(int64_t a1, int64_t a2) {
    // 0x4040c0
    return function_403bc0(0, a1, a2, (int64_t *)&g44);
}
// Address range: 0x4040e0 - 0x404148
int64_t function_4040e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4040f0
    return function_403bc0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404150 - 0x4041b4
int64_t function_404150(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404160
    return function_403bc0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4041c0 - 0x4041cc
int64_t function_4041c0(int64_t a1, int64_t a2) {
    // 0x4041c0
    return function_4040e0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4041d0 - 0x4041df
int64_t function_4041d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4041d0
    return function_404150(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4041e0 - 0x404250
int64_t function_4041e0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x4041ed
    int128_t v2 = __asm_movdqa(g45); // 0x4041f5
    int128_t v3 = __asm_movdqa(g46); // 0x4041fd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404212
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404228
    uint32_t v6 = *v5; // 0x404228
    uint32_t v7 = (int32_t)a3 % 32; // 0x40422d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403bc0(0, a1, a2, &v4);
}
// Address range: 0x404250 - 0x40425d
int64_t function_404250(int64_t a1, int64_t a2) {
    // 0x404250
    return function_4041e0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404260 - 0x404271
int64_t function_404260(int64_t a1) {
    // 0x404260
    return function_4041e0(a1, -1, 58);
}
// Address range: 0x404280 - 0x40428a
int64_t function_404280(void) {
    // 0x404280
    int64_t v1; // 0x404280
    return function_4041e0(v1, v1, 58);
}
// Address range: 0x404290 - 0x4042fe
int64_t function_404290(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4042aa
    return function_403bc0(a1, a3, -1, &v1);
}
// Address range: 0x404300 - 0x40436c
int64_t function_404300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x404307
    int128_t v2 = __asm_movdqa(g45); // 0x40430f
    int128_t v3 = __asm_movdqa(g46); // 0x404317
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404339
    if (a2 == 0 || a3 == 0) {
        // 0x404367
        abort();
        // UNREACHABLE
    }
    // 0x40434a
    return function_403bc0(a1, a4, a5, &v4);
}
// Address range: 0x404370 - 0x404379
int64_t function_404370(void) {
    // 0x404370
    int64_t v1; // 0x404370
    return function_404300(v1, v1, v1, v1, -1);
}
// Address range: 0x404380 - 0x404397
int64_t function_404380(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404380
    return function_404300(0, a1, a2, a3, -1);
}
// Address range: 0x4043a0 - 0x4043b3
int64_t function_4043a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4043a0
    return function_404300(0, a1, a2, a3, a4);
}
// Address range: 0x4043c0 - 0x4043ca
int64_t function_4043c0(void) {
    // 0x4043c0
    int64_t v1; // 0x4043c0
    return function_403bc0(v1, v1, v1, &g22);
}
// Address range: 0x4043d0 - 0x4043e2
int64_t function_4043d0(int64_t a1, int64_t a2) {
    // 0x4043d0
    return function_403bc0(0, a1, a2, &g22);
}
// Address range: 0x4043f0 - 0x404401
int64_t function_4043f0(void) {
    // 0x4043f0
    int64_t v1; // 0x4043f0
    return function_403bc0(v1, v1, -1, &g22);
}
// Address range: 0x404410 - 0x404426
int64_t function_404410(int64_t a1) {
    // 0x404410
    return function_403bc0(0, a1, -1, &g22);
}
// Address range: 0x404430 - 0x40480d
int64_t function_404430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4044c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40444c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404466
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4044ab
    if (a6 < 10) {
        // 0x4044ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4045b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404810 - 0x404830
int64_t function_404810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404810
    if (a5 == 0) {
        // 0x40482b
        return function_404430(a1, a2, a3, a4, a5, 0, (int64_t)&g59);
    }
    int64_t v1 = 0; // 0x404817
    v1++;
    int64_t v2 = v1; // 0x404829
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404820
        v1++;
        v2 = v1;
    }
    // 0x40482b
    return function_404430(a1, a2, a3, a4, a5, v2, (int64_t)&g59);
}
// Address range: 0x404830 - 0x404890
int64_t function_404830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404830
    int64_t v3 = &v2; // 0x404830
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404863
    int64_t v6; // 0x40484d
    int64_t * v7; // 0x40486b
    int64_t v8; // 0x40486b
    int64_t v9; // 0x404877
    if (v5 < 48) {
        // 0x404840
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404883
            break;
        }
    } else {
        // 0x40486b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404883
            break;
        }
    }
    int64_t v10 = 10; // 0x404861
    while (v4 != 9) {
        // 0x404859
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404840
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404883
                break;
            }
        } else {
            // 0x40486b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404883
                break;
            }
        }
        // 0x404859
        v10 = 10;
    }
    // 0x404883
    return function_404430(a1, a2, a3, a4, v3, v10, (int64_t)&g59);
}
// Address range: 0x404890 - 0x40494c
int64_t function_404890(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404890
    int64_t v1; // bp-168, 0x404890
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404890
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404890
    int64_t v8; // 0x404890
    int64_t v9; // bp-56, 0x404890
    int64_t v10; // 0x4048f5
    int64_t v11; // 0x404919
    if ((int32_t)v6 < 48) {
        // 0x4048e0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404930
            break;
        }
    } else {
        // 0x404912
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404930
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40490a
    int64_t v13 = 10; // 0x40490a
    while (v5 != 9) {
        // 0x40490c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4048e0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404930
                break;
            }
        } else {
            // 0x404912
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404930
                break;
            }
        }
        // 0x404902
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404930
    int64_t v14; // bp-136, 0x404890
    int64_t result = function_404430(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g59); // 0x40493f
    return result;
}
// Address range: 0x404950 - 0x4049c4
int64_t function_404950(int64_t a1) {
    // 0x404950
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4049b3
    return fputs_unlocked(v1, g31);
}
// Address range: 0x4049d0 - 0x4049ea
int64_t function_4049d0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4049d4
    if (size != 0 != (mem == NULL)) {
        // 0x4049e3
        return (int64_t)mem;
    }
    // 0x4049e5
    function_404c20(size);
    // UNREACHABLE
}
// Address range: 0x4049f0 - 0x404a11
int64_t function_4049f0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4049f3
    int64_t v2 = v1; // 0x4049f3
    if (v2 < 0) {
        // 0x404a0b
        function_404c20(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404a09
        return function_4049d0(v2);
    }
    // 0x404a0b
    function_404c20(v2);
    // UNREACHABLE
}
// Address range: 0x404a20 - 0x404a22
int64_t function_404a20(void) {
    // 0x404a20
    int64_t v1; // 0x404a20
    return function_4049d0(v1);
}
// Address range: 0x404a30 - 0x404a66
int64_t function_404a30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404a58
        free(v1);
        return (int32_t)&g59 ^ (int32_t)&g59;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404a41
    if (a2 != 0 != (mem == NULL)) {
        // 0x404a50
        return (int64_t)mem;
    }
    // 0x404a61
    function_404c20(a1);
    // UNREACHABLE
}
// Address range: 0x404a70 - 0x404a91
int64_t function_404a70(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404a73
    int64_t v2 = v1; // 0x404a73
    if (v2 < 0) {
        // 0x404a8b
        function_404c20(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404a89
        return function_404a30(a1, v2);
    }
    // 0x404a8b
    function_404c20(a1);
    // UNREACHABLE
}
// Address range: 0x404aa0 - 0x404b26
int64_t function_404aa0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404afb
            function_404c20(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404a30(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404ae3
    if (a2 == 0) {
        // 0x404b08
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404ae8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404afb
        function_404c20(a1);
        // UNREACHABLE
    }
    // 0x404aca
    *(int64_t *)a2 = v2;
    return function_404a30(a1, v2 * a3);
}
// Address range: 0x404b30 - 0x404b80
int64_t function_404b30(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404b30
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404b7a
            function_404c20(a1);
            // UNREACHABLE
        }
        // 0x404b52
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404a30(a1, v1);
    }
    if (a2 == 0) {
        // 0x404b65
        *(int64_t *)a2 = 128;
        return function_404a30(0, 128);
    }
    // 0x404b78
    if (a2 < 0) {
        // 0x404b7a
        function_404c20(a1);
        // UNREACHABLE
    }
    // 0x404b52
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404a30(a1, v1);
}
// Address range: 0x404b80 - 0x404b97
int64_t function_404b80(int64_t a1, int64_t a2) {
    // 0x404b80
    return (int64_t)memset((int64_t *)function_4049d0(a1), 0, (int32_t)a1);
}
// Address range: 0x404ba0 - 0x404bce
int64_t function_404ba0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404ba7
    if ((int64_t)v1 < 0) {
        // 0x404bc9
        function_404c20(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404bc9
        function_404c20(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404bba
    if (mem != NULL) {
        // 0x404bc4
        return (int64_t)mem;
    }
    // 0x404bc9
    function_404c20(nmemb);
    // UNREACHABLE
}
// Address range: 0x404bd0 - 0x404bf8
int64_t function_404bd0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4049d0(a2); // 0x404bdf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404c00 - 0x404c13
int64_t function_404c00(char * str) {
    // 0x404c00
    return function_404bd0((int64_t)str, (int64_t)strlen(str) + 1);
}
// Address range: 0x404c20 - 0x404c51
int64_t function_404c20(int64_t a1) {
    // 0x404c20
    error(g21, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404c60 - 0x404c87
int64_t function_404c60(void) {
    // 0x404c60
    int64_t v1; // 0x404c60
    int64_t result = function_406040(v1, v1, v1, v1, v1); // 0x404c61
    if (result != 0 || *__errno_location() != 12) {
        // 0x404c6e
        return result;
    }
    // 0x404c82
    function_404c20(v1);
    // UNREACHABLE
}
// Address range: 0x404c90 - 0x4050d0
int64_t function_404c90(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, char * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x404c9e
    if (v1 >= 37) {
        // 0x4050ab
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g59;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x404cc2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x404cf2
    int64_t v4 = a1; // 0x404cf7
    char v5 = c; // 0x404cf7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x404cec
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x404ce8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x404cf9
    if (v5 == 45) {
        // 0x404d35
        return 4;
    }
    // 0x404cfe
    int64_t v7; // bp-64, 0x404c90
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x404cbe
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x404d06
    int64_t * v10 = (int64_t *)v8; // 0x404d0b
    int64_t v11 = *v10; // 0x404d0b
    char v12; // 0x404c90
    int64_t v13; // 0x404c90
    int64_t v14; // 0x404c90
    int64_t v15; // 0x404c90
    int64_t v16; // 0x404c90
    int64_t v17; // 0x404c90
    int64_t v18; // 0x404c90
    if (v11 == a1) {
        // 0x404d68
        if (c == 0 || str == NULL) {
            // 0x404d35
            return 4;
        }
        char * found_char_pos = strchr(str, (int32_t)c); // 0x404d89
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x404d35
            return 4;
        }
        goto lab_0x404d97;
    } else {
        int32_t v19 = *v2; // 0x404d16
        int64_t v20 = 0; // 0x404d1c
        if (v19 != 0) {
            // 0x404d50
            v20 = 1;
            if (v19 != 34) {
                // 0x404d35
                return 4;
            }
        }
        int64_t v21 = v9; // 0x404d06
        v16 = v21;
        v13 = v20;
        if (str == NULL) {
            goto lab_0x404d32;
        } else {
            char c2 = *(char *)v11; // 0x404d25
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr(str, (int32_t)c2); // 0x404e93
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x404d97;
                } else {
                    goto lab_0x404ea5;
                }
            } else {
                goto lab_0x404d32;
            }
        }
    }
  lab_0x404d97:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x404d9f
    int64_t v24 = 1; // 0x404d9f
    int64_t v25; // 0x404c90
    int64_t v26; // 0x404c90
    int64_t v27; // 0x404c90
    int64_t v28; // 0x404c90
    int64_t v29; // 0x404c90
    int64_t v30; // 0x404c90
    int64_t v31; // 0x404c90
    int64_t v32; // 0x404c90
    int64_t v33; // 0x404c90
    int64_t v34; // 0x404c90
    int64_t v35; // 0x404c90
    int64_t v36; // 0x404c90
    int64_t v37; // 0x404c90
    int64_t v38; // 0x404c90
    int64_t v39; // 0x404c90
    int64_t v40; // 0x404c90
    int64_t v41; // 0x404c90
    int64_t v42; // 0x404c90
    int64_t v43; // 0x404c90
    int64_t v44; // 0x404c90
    if (v22 < 48) {
        // 0x404da1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x404e0a;
        } else {
            // 0x404db4
            v23 = 1024;
            v24 = 1;
            if (strchr(str, 48) == NULL) {
                goto lab_0x404e0a;
            } else {
                // 0x404dd0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x404e0a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x405039
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x404e0a;
                    }
                    default: {
                        // 0x404de5
                        g53 = v22;
                        v23 = 1000;
                        v24 = 2;
                        v27 = 1024;
                        v39 = 1;
                        v26 = v17;
                        v25 = v14;
                        v40 = 1;
                        v28 = 1024;
                        v41 = 1;
                        v18 = v17;
                        v15 = v14;
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
                        switch (v12) {
                            case 69: {
                                goto lab_0x404fab;
                            }
                            case 70: {
                                goto lab_0x404ea5;
                            }
                            case 71: {
                                goto lab_0x404fe3;
                            }
                            case 72: {
                                goto lab_0x404ea5;
                            }
                            case 73: {
                                goto lab_0x404ea5;
                            }
                            case 74: {
                                goto lab_0x404ea5;
                            }
                            case 75: {
                                goto lab_0x404e6c;
                            }
                            case 76: {
                                goto lab_0x404ea5;
                            }
                            case 77: {
                                goto lab_0x404e2e;
                            }
                            case 78: {
                                goto lab_0x404ea5;
                            }
                            case 79: {
                                goto lab_0x404ea5;
                            }
                            case 80: {
                                goto lab_0x404f78;
                            }
                            case 81: {
                                goto lab_0x404ea5;
                            }
                            case 82: {
                                goto lab_0x404ea5;
                            }
                            case 83: {
                                goto lab_0x404ea5;
                            }
                            case 84: {
                                goto lab_0x404f48;
                            }
                            case 85: {
                                goto lab_0x404ea5;
                            }
                            case 86: {
                                goto lab_0x404ea5;
                            }
                            case 87: {
                                goto lab_0x404ea5;
                            }
                            case 88: {
                                goto lab_0x404ea5;
                            }
                            case 89: {
                                goto lab_0x404f16;
                            }
                            case 90: {
                                goto lab_0x404edb;
                            }
                            case 91: {
                                goto lab_0x404ea5;
                            }
                            case 92: {
                                goto lab_0x404ea5;
                            }
                            case 93: {
                                goto lab_0x404ea5;
                            }
                            case 94: {
                                goto lab_0x404ea5;
                            }
                            case 95: {
                                goto lab_0x404ea5;
                            }
                            case 96: {
                                goto lab_0x404ea5;
                            }
                            case 97: {
                                goto lab_0x404ea5;
                            }
                            case 98: {
                                goto lab_0x404ebf;
                            }
                            case 99: {
                                goto lab_0x404e48;
                            }
                            case 100: {
                                goto lab_0x404ea5;
                            }
                            case 101: {
                                goto lab_0x404ea5;
                            }
                            case 102: {
                                goto lab_0x404ea5;
                            }
                            case 103: {
                                goto lab_0x404fe3;
                            }
                            case 104: {
                                goto lab_0x404ea5;
                            }
                            case 105: {
                                goto lab_0x404ea5;
                            }
                            case 106: {
                                goto lab_0x404ea5;
                            }
                            case 107: {
                                goto lab_0x404e6c;
                            }
                            case 108: {
                                goto lab_0x404ea5;
                            }
                            case 109: {
                                goto lab_0x404e2e;
                            }
                            case 110: {
                                goto lab_0x404ea5;
                            }
                            case 111: {
                                goto lab_0x404ea5;
                            }
                            case 112: {
                                goto lab_0x404ea5;
                            }
                            case 113: {
                                goto lab_0x404ea5;
                            }
                            case 114: {
                                goto lab_0x404ea5;
                            }
                            case 115: {
                                goto lab_0x404ea5;
                            }
                            case 116: {
                                goto lab_0x404f48;
                            }
                            default: {
                                goto lab_0x404e0a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x404e0a;
    }
  lab_0x404d32:
    // 0x404d32
    *a4 = v16;
    // 0x404d35
    return v13 & 0xffffffff;
  lab_0x404e0a:
    // 0x404e0a
    g54 = v12 - 66;
    v27 = v23;
    v39 = v24;
    v26 = v17;
    v25 = v14;
    v40 = v24;
    v28 = v23;
    v41 = v24;
    v18 = v17;
    v15 = v14;
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
    int64_t v46; // 0x404c90
    switch (v12) {
        case 66: {
            // 0x405004
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x404e77;
            } else {
                // 0x405011
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x404e48;
            }
        }
        case 69: {
            goto lab_0x404fab;
        }
        case 71: {
            goto lab_0x404fe3;
        }
        case 75: {
            goto lab_0x404e6c;
        }
        case 77: {
            goto lab_0x404e2e;
        }
        case 80: {
            goto lab_0x404f78;
        }
        case 84: {
            goto lab_0x404f48;
        }
        case 89: {
            goto lab_0x404f16;
        }
        case 90: {
            goto lab_0x404edb;
        }
        case 98: {
            goto lab_0x404ebf;
        }
        case 99: {
            goto lab_0x404e48;
        }
        case 103: {
            goto lab_0x404fe3;
        }
        case 107: {
            goto lab_0x404e6c;
        }
        case 109: {
            goto lab_0x404e2e;
        }
        case 116: {
            goto lab_0x404f48;
        }
        case 119: {
            // 0x404eb0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x404e77;
            } else {
                // 0x404eb5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x404e48;
            }
        }
        default: {
            goto lab_0x404ea5;
        }
    }
  lab_0x404fab:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x404fc3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x404fcf
    int64_t v51 = v48; // 0x404fd2
    int64_t v52 = v37; // 0x404fd2
    int64_t v53 = v49; // 0x404fd2
    int32_t v54 = v50; // 0x404fd2
    int64_t v55 = v49; // 0x404fd2
    while (v50 != 0) {
        // 0x404fc0
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
    goto lab_0x404f04;
  lab_0x404fe3:
    // 0x404fe3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x404fee
        int128_t v56; // 0x404fe9
        uint128_t v57; // 0x404fe9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x404fee
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x404c90
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x404ff3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x404ff8
                v26 = v60;
                int64_t v61; // 0x404c90
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x404e48;
  lab_0x404e6c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x404e6f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x404e48;
    } else {
        goto lab_0x404e77;
    }
  lab_0x404e2e:;
    int128_t v65 = v27; // 0x404e34
    uint128_t v66 = v65 * (int128_t)v17; // 0x404e34
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x404e77;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x404e39
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x404e77;
        } else {
            // 0x404e3e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x404e48;
        }
    }
  lab_0x404f78:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x404f8b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x404f97
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x404f9a
    int64_t v73 = v70; // 0x404f9a
    while (v71 != 0) {
        // 0x404f88
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
    goto lab_0x404f04;
  lab_0x404f48:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x404f5b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x404f67
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x404f6a
    int64_t v79 = v76; // 0x404f6a
    while (v77 != 0) {
        // 0x404f58
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
    goto lab_0x404f04;
  lab_0x404f16:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x404f2b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x404f37
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x404f3a
    int64_t v85 = v82; // 0x404f3a
    while (v83 != 0) {
        // 0x404f28
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
    goto lab_0x404f04;
  lab_0x404edb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x404ef3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x404eff
    int32_t v90 = v89; // 0x404f02
    int64_t v91 = v88; // 0x404f02
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x404ef0
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
    goto lab_0x404f04;
  lab_0x404ebf:
    // 0x404ebf
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x404e77;
    } else {
        // 0x404ec8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x404e48;
    }
  lab_0x404e48:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x404e4d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x404d32;
  lab_0x404ea5:
    // 0x404ea5
    *a4 = v18;
    // 0x404d35
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x404e77:
    // 0x404e77
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x404e48;
  lab_0x404f04:
    // 0x404f04
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x404e48;
}
// Address range: 0x4050d0 - 0x40515f
int64_t function_4050d0(int64_t * a1, char * a2, char * a3, int32_t a4, int64_t a5, int64_t a6) {
    // 0x4050d0
    int64_t v1; // 0x4050d0
    if ((char)v1 != 0) {
        // 0x4050ef
        int128_t v2; // 0x4050d0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 16; // bp-208, 0x405133
    return function_405fb0((int64_t)a1, (int64_t)a2, &v3);
}
// Address range: 0x405160 - 0x40523f
int64_t function_405160(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40516c
    uint32_t v2 = *v1; // 0x40516c
    int64_t v3 = a2 & 0xffffffff; // 0x405171
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405174
    uint64_t v5 = (int64_t)*v4; // 0x405174
    int64_t v6; // 0x4051e2
    if (v3 <= v5) {
      lab_0x4051dc_2:
        // 0x4051dc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405162
    int64_t v8 = v2; // 0x405160
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4051dc
        goto lab_0x4051dc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405198
    int64_t v17; // 0x4051a6
    int64_t * v18; // 0x4051c0
    int64_t * v19; // 0x4051c3
    int64_t v20; // 0x4051ce
    int64_t v21; // 0x4051a6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4051a3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4051c0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4051d7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4051dc
            goto lab_0x4051dc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4051dc
            goto lab_0x4051dc_2;
        }
        // 0x405192
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40521b
    int64_t * v23 = (int64_t *)v22; // 0x405220
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405223
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405220
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405237
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40518d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4051dc
            goto lab_0x4051dc_2;
        }
        // 0x405192
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4051a3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4051c0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4051d7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4051dc
                goto lab_0x4051dc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4051dc
                goto lab_0x4051dc_2;
            }
            // 0x405192
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405200
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405220
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405237
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4051dc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405240 - 0x40585c
int64_t function_405240(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40525f
    int64_t v2 = *v1; // 0x40525f
    char * str2 = (char *)v2; // 0x40526c
    char c = *str2; // 0x40526c
    int64_t v3 = v2; // 0x405298
    int64_t v4 = 0; // 0x405240
    int32_t v5; // 0x405240
    int64_t v6; // 0x405240
    int64_t v7; // 0x405240
    int64_t v8; // 0x405240
    int64_t v9; // 0x405240
    int64_t v10; // 0x405240
    int64_t v11; // 0x405240
    int64_t v12; // 0x405240
    int64_t v13; // 0x405240
    int64_t str3; // 0x405240
    int64_t v14; // 0x405240
    int64_t v15; // 0x405240
    int64_t v16; // 0x405240
    int64_t v17; // 0x405240
    int32_t v18; // 0x405240
    int32_t v19; // 0x405240
    int32_t v20; // 0x405240
    int32_t v21; // 0x405240
    int32_t v22; // 0x405240
    int32_t v23; // 0x405240
    int32_t v24; // 0x405240
    int32_t v25; // 0x405240
    int32_t v26; // 0x405240
    int32_t v27; // 0x405240
    int32_t v28; // 0x405240
    int32_t v29; // 0x405240
    int64_t nmemb; // 0x405240
    int64_t v30; // 0x405240
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40529c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405298
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4052a8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4052ae
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405278
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4052dc
                int64_t v34; // 0x405240
                int64_t v35; // 0x405240
                if (strncmp(str, str2, n) == 0) {
                    // 0x4052e5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405460;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4052f6
                int64_t v37 = *(int64_t *)v36; // 0x4052fa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4052d0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4052e5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405460;
                        }
                    }
                    // 0x4052f6
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
                  lab_0x405346:
                    // 0x405346
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
                        goto lab_0x4053a0;
                    } else {
                        if (v11 == 0) {
                            // 0x405510
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4053a0;
                        } else {
                            if (v39 == 0) {
                                // 0x4054c0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40536a;
                                } else {
                                    // 0x4054cc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40536a;
                                    } else {
                                        // 0x4054da
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40536a;
                                        } else {
                                            goto lab_0x4053a0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40536a;
                            }
                        }
                    }
                }
              lab_0x4053b1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405586
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405732
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x405752
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40579f
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x4057b9
                            int64_t v45; // 0x4057bb
                            if (*(char *)v42 != 0) {
                                // 0x4057bb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4057b3
                            while (v17 + nmemb != v42) {
                                // 0x4057b5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4057bb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x4057a8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4057e0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x405594
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4056ef
                        free((int64_t *)v17);
                    }
                    // 0x4055e9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405600
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4054ae
                    return 63;
                }
                // 0x4053d0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405454
                    v35 = v13;
                    v34 = v25;
                  lab_0x405460:;
                    int32_t * v49 = (int32_t *)a7; // 0x405470
                    uint32_t v50 = *v49; // 0x405470
                    int64_t v51 = v50; // 0x405470
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40547a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405483
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4056af
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40565a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4054ae
                            return 63;
                        }
                        // 0x4054f8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40580f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40570d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405720
                                // 0x4054ae
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40561e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405632
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40549b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40549e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4054a2
                    int64_t result = v59; // 0x4054a8
                    if (v58 != 0) {
                        // 0x4054aa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4054ae
                    return result;
                }
            } else {
                // 0x4052ae
                v5 = v32;
            }
            // break -> 0x4053d5
            break;
        }
    }
    // 0x4053d5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4053ed
        if (*(char *)(v60 + 1) != 45) {
            // 0x4053f7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4054ae
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405539
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405426
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405436
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4053a0:
    // 0x4053a0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4053a0
    int64_t v63 = *(int64_t *)v62; // 0x4053a4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4053b1
        goto lab_0x4053b1;
    }
    goto lab_0x405346;
  lab_0x40536a:
    // 0x40536a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405240
    int32_t v65; // 0x405240
    int32_t v66; // 0x405240
    if (v27 != 0) {
        goto lab_0x4053a0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405520
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4053a0;
            } else {
                goto lab_0x405391;
            }
        } else {
            // 0x405385
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40567c
                int64_t v67 = (int64_t)mem; // 0x40567c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4053a0;
                } else {
                    // 0x40568f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405391;
                }
            } else {
                goto lab_0x405391;
            }
        }
    }
  lab_0x405391:
    // 0x405391
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4053a0;
}
// Address range: 0x405860 - 0x405e26
int64_t function_405860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405881
    if (v3 < 1) {
        // 0x405a3e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40587d
    int32_t v5 = *(int32_t *)a7; // 0x405889
    uint64_t v6 = a1 & 0xffffffff; // 0x40588b
    int64_t v7 = v2; // 0x405890
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405893
    *v8 = 0;
    int64_t v9; // 0x405860
    int64_t v10; // 0x405860
    int64_t v11; // 0x405860
    int64_t v12; // 0x405860
    int64_t str; // 0x405860
    int64_t v13; // 0x405860
    int64_t v14; // 0x405860
    int64_t v15; // 0x405860
    int64_t v16; // 0x405860
    int64_t v17; // 0x405860
    int32_t v18; // 0x405860
    char v19; // 0x405860
    if (v5 == 0) {
        // 0x405a78
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4058aa;
    } else {
        // 0x4058a3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4058f0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4058f3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4059b8;
            } else {
                int64_t v22 = v7 + 1; // 0x405906
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405916
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4059cc;
                } else {
                    goto lab_0x405928;
                }
            }
        } else {
            goto lab_0x4058aa;
        }
    }
  lab_0x4058aa:
    // 0x4058aa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4058b0
    *v24 = 0;
    int64_t v25; // 0x405860
    int64_t v26; // 0x405860
    int64_t v27; // 0x405860
    switch (*(char *)&v2) {
        case 45: {
            // 0x4059a0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4059ad;
        }
        case 43: {
            // 0x405cb0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4059ad;
        }
        default: {
            // 0x4058cc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405c2f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405d48
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4059ad;
                } else {
                    // 0x405c3d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4058da;
                }
            } else {
                goto lab_0x4058da;
            }
        }
    }
  lab_0x4059b8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4059bf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405928;
    } else {
        goto lab_0x4059cc;
    }
  lab_0x4058da:
    // 0x4058da
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4059ad;
  lab_0x4059ad:
    // 0x4059ad
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4059b8;
  lab_0x405928:;
    uint32_t v30 = *(int32_t *)a7; // 0x405928
    int64_t v31 = v30; // 0x405928
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40592a
    if ((int64_t)*v32 > v31) {
        // 0x40592f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405932
    if (*v33 > v30) {
        // 0x405937
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40593a
    int64_t v35 = v31; // 0x40593e
    int64_t v36 = v15; // 0x40593e
    int64_t v37; // 0x405860
    int64_t v38; // 0x405860
    int64_t v39; // 0x405860
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405aa8
        int64_t v41 = v40; // 0x405aa8
        v2 = v41;
        int64_t v42; // 0x405860
        if (*v33 == v40) {
            // 0x405c90
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405c98
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405ab4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405ab8
                function_405160(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405ac8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405ad1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405ada
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405af1
            int64_t v47 = v45 & 0xffffffff; // 0x405af5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405afe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405b04
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405b06;
                }
            }
            int64_t v48 = v47 + 1; // 0x405ae0
            int64_t v49 = v48 & 0xffffffff; // 0x405ae0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405af1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405afe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405b04
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405b06;
                    }
                }
                // 0x405ae0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405ca8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405b06;
    } else {
        goto lab_0x405944;
    }
  lab_0x4059cc:
    // 0x4059cc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4059cf
    int64_t v51 = v12; // 0x4059cf
    int64_t v52 = v14; // 0x4059cf
    if (*(char *)v10 == 0) {
        goto lab_0x405928;
    } else {
        goto lab_0x4059d5;
    }
  lab_0x405944:;
    int32_t v53 = v35; // 0x405944
    int64_t v54; // 0x405860
    int64_t v55; // 0x405860
    int64_t v56; // 0x405860
    int64_t v57; // 0x405860
    int64_t v58; // 0x405860
    int64_t v59; // 0x405860
    char * v60; // 0x405860
    int64_t v61; // 0x405860
    int64_t v62; // 0x405959
    int64_t v63; // 0x405860
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405a93
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405a96;
    } else {
        // 0x40594c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405860
        int64_t v66 = v65 ? -1 : 1; // 0x405960
        int64_t v67 = (int64_t)"--"; // 0x405860
        int64_t v68 = v62; // 0x405860
        int64_t v69 = 3; // 0x405960
        unsigned char v70 = *(char *)v68; // 0x405960
        char v71 = *(char *)v67; // 0x405960
        char v72 = v71; // 0x405960
        bool v73 = false; // 0x405960
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
            // 0x405a50
            if (*(char *)v62 == 45) {
                // 0x405b10
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405b10
                if (c == 0) {
                    goto lab_0x405a5a;
                } else {
                    // 0x405b1d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405ba0;
                    } else {
                        if (c == 45) {
                            // 0x405d83
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405bf5;
                        } else {
                            // 0x405b2e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405ba0;
                            } else {
                                // 0x405b33
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405b54;
                                } else {
                                    // 0x405b3a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405ba0;
                                    } else {
                                        goto lab_0x405b54;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405a5a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405970
            v2 = v75;
            int32_t v76 = *v32; // 0x405973
            int64_t v77 = v35 + 1; // 0x405976
            int32_t v78 = v77; // 0x405979
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405ce0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405987
                    function_405160(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405995
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405a96;
        }
    }
  lab_0x4059d5:;
    // 0x4059d5
    int64_t v79; // bp-104, 0x405860
    int64_t v80 = &v79; // 0x40586a
    int64_t v81 = v50 + 1; // 0x4059d5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4059dc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4059e1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4059e5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4059e9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4059f1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4059f6
    int32_t c2 = v84; // 0x4059f6
    char * found_char_pos = strchr(str2, c2); // 0x4059f6
    int64_t v87 = *v82; // 0x4059fb
    v2 = v87;
    int64_t v88 = *v85; // 0x405a05
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405a10
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405d00
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405ccd
        *(int32_t *)(v1 + 8) = c2;
        // 0x405a3e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4059f6
    char v91 = *(char *)(v90 + 1); // 0x405a2b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4059e5
        if (v91 != 58) {
            // 0x405a3e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405c54
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405d58
                *v8 = 0;
            } else {
                // 0x405d3c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405c7e
            *v83 = 0;
            // 0x405a3e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405c5e
        if (v93 != 0) {
            // 0x405cf0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405c7e
            *v83 = 0;
            // 0x405a3e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405c71
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405c7e
            *v83 = 0;
            // 0x405a3e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405dba
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405d6a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405d71
        // 0x405c7e
        *v83 = 0;
        // 0x405a3e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405bc9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405bcb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405df0
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405da1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405da8
            // 0x405a3e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405bd6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405bda
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405bf5;
  lab_0x405b06:
    // 0x405b06
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405944;
  lab_0x405bf5:;
    int64_t v99 = function_405240(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405c13
    // 0x405a3e
    return v99 & 0xffffffff;
  lab_0x405a96:;
    int32_t v100 = v55; // 0x405a96
    if (v100 != (int32_t)v59) {
        // 0x405a9a
        *(int32_t *)a7 = v100;
    }
    // 0x405a3e
    return 0xffffffff;
  lab_0x405a5a:
    // 0x405a5a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405a61
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405a3e
    return v99 & 0xffffffff;
  lab_0x405ba0:
    // 0x405ba0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4059d5;
  lab_0x405b54:
    // 0x405b54
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405240(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x405b7a
    if ((int32_t)v101 != -1) {
        // 0x405a3e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405b8f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405ba0;
}
// Address range: 0x405e30 - 0x405e86
int64_t function_405e30(int64_t a1) {
    // 0x405e30
    *(int32_t *)&g47 = g29;
    *(int32_t *)&g48 = g28;
    int64_t v1; // 0x405e30
    int64_t result = function_405860(v1, v1, v1, v1, v1, v1, &g47, a1 & 0xffffffff); // 0x405e56
    g29 = *(int32_t *)&g47;
    g52 = (char *)g50;
    *(int32_t *)&g27 = g49;
    return result;
}
// Address range: 0x405e90 - 0x405ea8
int64_t function_405e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405e90
    return function_405e30(1);
}
// Address range: 0x405eb0 - 0x405ec3
int64_t function_405eb0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x405eb0
    return function_405e30(0);
}
// Address range: 0x405ed0 - 0x405ee5
int64_t function_405ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405ed0
    return function_405860(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405ef0 - 0x405f06
int64_t function_405ef0(void) {
    // 0x405ef0
    return function_405e30(0);
}
// Address range: 0x405f10 - 0x405f28
int64_t function_405f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f10
    return function_405860(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405f30 - 0x405faa
int64_t function_405f30(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405f3b
    int64_t v2 = (int64_t)&g12; // 0x405f3b
    int32_t * pwc; // 0x405f30
    int64_t v3; // 0x405f30
    int64_t n; // 0x405f30
    if (a2 == 0) {
        goto lab_0x405f82;
    } else {
        // 0x405f3d
        if (a3 == 0) {
            // 0x405f68
            return -2;
        }
        // 0x405f49
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405f82;
        } else {
            goto lab_0x405f54;
        }
    }
  lab_0x405f82:
    // 0x405f82
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405f30
    pwc = (int32_t *)&v4;
    goto lab_0x405f54;
  lab_0x405f54:;
    char * wstr = (char *)v3; // 0x405f5a
    int64_t ps; // 0x405f30
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405f5a
    int64_t result = v5; // 0x405f5a
    if (v5 < 0xfffffffe) {
        // 0x405f68
        return result;
    }
    int64_t result2 = result; // 0x405f99
    if ((char)function_4062a0(0, v3) == 0) {
        // 0x405f9b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405f68
    return result2;
}
// Address range: 0x405fb0 - 0x406009
int64_t function_405fb0(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x405fb0
    int32_t v1; // bp-16, 0x405fb0
    int64_t v2; // 0x405fb0
    int64_t v3 = function_406990(0, (int64_t *)&v1, a2, (int64_t)a3, v2, v2, v2, (int64_t)&g59); // 0x405fc5
    if (v3 == 0) {
        // 0x405fe2
        return 0xffffffff;
    }
    // 0x405fcf
    int64_t result; // 0x405fb0
    if (v1 > -1) {
        // 0x405fdd
        *(int64_t *)a1 = v3;
        result = v1;
    } else {
        // 0x405fe8
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x405fe2
    return result;
}
// Address range: 0x406010 - 0x406032
int64_t function_406010(int64_t a1, int64_t path, int64_t buf, int64_t buf_size) {
    // 0x406010
    return readlink((char *)path, (char *)buf, (int32_t)buf_size);
}
// Address range: 0x406040 - 0x40623b
int64_t function_406040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x406040
    int64_t v1; // bp-1080, 0x406040
    int64_t v2 = &v1; // 0x406098
    int64_t v3 = 1024; // 0x4060a0
    int64_t v4 = v2; // 0x4060a0
    int64_t result; // 0x406040
    while (true) {
        int64_t v5 = v4;
        uint64_t v6 = v3;
        int64_t v7 = function_406010(0xffffff9c, a1, v5, v6); // 0x4060c6
        int64_t v8 = v7; // 0x4060cf
        if (v7 < 0) {
            int32_t * v9 = __errno_location(); // 0x406155
            v8 = (int64_t)v9;
            result = 0;
            if (*v9 != 34) {
                // break -> 0x406131
                break;
            }
        }
        if (v6 > v7) {
            uint64_t v10 = v7 + 1; // 0x4061a5
            *(char *)(v7 + v5) = 0;
            if (v5 == v2) {
                if (v8 == 0) {
                    // 0x40622b
                    *__errno_location() = 12;
                    result = 0;
                    return result;
                } else {
                    // 0x4061fe
                    memcpy((int64_t *)v8, &v1, (int32_t)v10);
                    result = v8;
                    return result;
                }
            } else {
                // 0x4061b3
                result = v5;
                if (v6 > v10) {
                    int64_t v11 = *(int64_t *)((int64_t)&g14 + 8); // 0x4061c5
                    return v11 == 0 ? v5 : v11;
                }
                return result;
            }
        }
        if (v6 < 0x4000000000000001) {
            // 0x4060a8
            v3 = 2 * v6;
        } else {
            // 0x4060f4
            v3 = -0x8000000000000000;
            if (v6 < 0) {
                // 0x406218
                *__errno_location() = 36;
                result = 0;
                return result;
            }
        }
        // 0x4060b9
        v4 = 0x4000000000000000;
    }
  lab_0x406131:
    // 0x406131
    return result;
}
// Address range: 0x406240 - 0x40629d
int64_t function_406240(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406247
    int64_t v2; // 0x406240
    int64_t result = function_406870(a1, v2); // 0x406258
    if ((v2 & 32) != 0) {
        // 0x406280
        if ((int32_t)result == 0) {
            // 0x406284
            *__errno_location() = 0;
        }
        // 0x40627a
        return 0xffffffff;
    }
    // 0x406261
    if ((int32_t)result == 0) {
        // 0x40627a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406268
    if (v1 == 0) {
        // 0x40626a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40627a
    return result2;
}
// Address range: 0x4062a0 - 0x4062fe
int64_t function_4062a0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4062a6
    if (locale == NULL) {
        // 0x4062d3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4062a6
    bool v2; // 0x4062a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x4062a0
    int64_t v5 = v1; // 0x4062a0
    int64_t v6 = 2; // 0x4062c5
    unsigned char v7 = *(char *)v5; // 0x4062c5
    char v8 = *(char *)v4; // 0x4062c5
    char v9 = v8; // 0x4062c5
    bool v10 = false; // 0x4062c5
    while (v7 == v8) {
        // 0x4062b8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4062d1
    int64_t v13 = v1; // 0x4062d1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4062d3
        return 0;
    }
    int64_t v14 = 6; // 0x4062d1
    unsigned char v15 = *(char *)v13; // 0x4062ed
    char v16 = *(char *)v12; // 0x4062ed
    char v17 = v16; // 0x4062ed
    bool v18 = false; // 0x4062ed
    while (v15 == v16) {
        // 0x4062e0
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
// Address range: 0x406300 - 0x406862
int64_t function_406300(void) {
    char * v1 = nl_langinfo(14); // 0x406316
    char * v2 = g51; // 0x40631b
    char * v3; // 0x406300
    int64_t v4; // 0x406300
    int64_t v5; // 0x406300
    int64_t v6; // 0x406300
    int64_t v7; // 0x406300
    int32_t size; // 0x406300
    int32_t size2; // 0x406300
    int32_t len; // 0x4063d2
    int64_t v8; // 0x4063d2
    char * env_val; // 0x4063bd
    if (v2 == NULL) {
        // 0x4063b8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406425;
        } else {
            // 0x4063ca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406425;
            } else {
                // 0x4063cf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4063bd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406855
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406425;
                    } else {
                        // 0x4067c9
                        size2 = len + 14;
                        goto lab_0x4063eb;
                    }
                } else {
                    goto lab_0x4063eb;
                }
            }
        }
    } else {
        // 0x406300
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40633a;
    }
  lab_0x40666c:;
    // 0x40666c
    struct _IO_FILE * stream; // 0x4064ab
    int32_t v10 = __uflow(stream); // 0x40666f
    int64_t v11; // 0x406300
    int64_t v12 = v11; // 0x406679
    int64_t v13; // 0x406300
    int64_t v14 = v13; // 0x406679
    int32_t v15 = v10; // 0x406679
    int64_t v16; // 0x406300
    int64_t v17 = v16; // 0x406679
    int64_t v18 = v11; // 0x406679
    int64_t v19 = v13; // 0x406679
    int64_t v20 = v16; // 0x406679
    if (v10 == -1) {
        // break -> 0x40667f
        goto lab_0x40667f;
    }
    goto lab_0x4064f9;
  lab_0x4064ee:;
    // 0x4064ee
    int64_t v90; // 0x406300
    int64_t * v32; // 0x4064e0
    *v32 = v90 + 1;
    int64_t v89; // 0x406300
    v12 = v89;
    int64_t v91; // 0x406300
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406300
    v17 = v92;
    goto lab_0x4064f9;
  lab_0x4064f9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406300
    int32_t v25; // bp-120, 0x406300
    int32_t v26; // bp-184, 0x406300
    int64_t v27; // 0x4064ab
    int64_t v28; // 0x4064c8
    int64_t v29; // 0x4064cd
    int64_t * v30; // 0x4064e4
    switch (c) {
        case 32: {
            goto lab_0x4064e0;
        }
        case 10: {
            goto lab_0x4064e0;
        }
        case 9: {
            goto lab_0x4064e0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4066d1
            int32_t v33; // 0x406300
            char v34; // 0x406300
            int32_t v35; // 0x4066de
            if (v31 < *v30) {
                // 0x4066b0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4066db
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4066d1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4066b0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4066db
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4066c0
                v36 = v33;
            }
            // 0x4067af
            if (v36 == -1) {
                // break -> 0x40667f
                break;
            }
            goto lab_0x4064e0;
        }
        default: {
            // 0x40650f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40667f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406538
            int64_t v39 = v37 + 4; // 0x40653a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406546
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406548
            while (v41 == 0) {
                // 0x406538
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406566
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406572
            int64_t v45 = v43 + 4; // 0x406574
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406580
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406582
            while (v47 == 0) {
                // 0x406572
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40656f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406598
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4065a8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4065ac
            int64_t v52 = v51 + v48; // 0x4065b5
            int64_t * mem; // 0x406300
            int64_t v53; // 0x406300
            int64_t v54; // 0x406300
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4066eb
                int64_t v56 = v55 + 3; // 0x4066f7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4065d1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4065e0
            if (mem == NULL) {
                // 0x40680c
                free((int64_t *)v21);
                function_406870(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x406484;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4065f8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406602
            uint32_t v62 = (int32_t)v59; // 0x406605
            int64_t v63; // 0x406300
            if (v62 >= 8) {
                // 0x406714
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40672e
                int64_t v66 = v61 - v65; // 0x406732
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40673d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40674e
                    int64_t v70 = v69 & 0xffffffff; // 0x40674e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40674b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4067df
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406617
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40661b
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
            int64_t v73 = v51 + 1; // 0x40662b
            int64_t v74 = v60 - 1; // 0x40662f
            uint32_t v75 = (int32_t)v73; // 0x406634
            int64_t v76; // 0x406300
            if (v75 >= 8) {
                // 0x406762
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40676c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40677c
                int64_t v80 = v74 - v79; // 0x406780
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40678b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40679b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406799
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4067f6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4067fe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406646
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40664a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406843
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40665e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4064ee;
            } else {
                goto lab_0x40666c;
            }
        }
    }
  lab_0x4064e0:;
    int64_t v93 = v23; // 0x406300
    int64_t v94 = v22; // 0x406300
    int64_t v95 = v21; // 0x406300
    goto lab_0x4064e0_2;
  lab_0x406425:;
    int64_t * mem3 = malloc(size); // 0x406425
    int64_t v97 = (int64_t)&g12; // 0x406430
    int64_t v98; // 0x406300
    int64_t path; // 0x406300
    if (mem3 == NULL) {
        goto lab_0x406402;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406425
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406446;
    }
  lab_0x40633a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x40632d
    char v100 = *v3; // 0x40633a
    int64_t v101; // 0x406300
    if (v100 == 0) {
        // 0x406394
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406300
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406300
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406380
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406387;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406350
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40635d
        char v107 = *(char *)v106; // 0x406362
        v102 = v107;
        if (v107 == 0) {
            // 0x406394
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40636b
    v104 = v103 + 1;
  lab_0x406387:
    // 0x406394
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406402:;
    char * v108 = (char *)v97;
    g51 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40633a;
  lab_0x406446:;
    int64_t v109 = v98 + path; // 0x406446
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406472
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x4064a1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4067d2
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x4064c5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4064e0_2:;
                uint64_t v96 = *v32; // 0x4064e0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40666c;
                } else {
                    goto lab_0x4064ee;
                }
            }
          lab_0x40667f:
            // 0x40667f
            function_406870(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40669e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406484;
  lab_0x4063eb:;
    int64_t * mem4 = malloc(size2); // 0x4063eb
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x406491
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406446;
    } else {
        goto lab_0x406402;
    }
  lab_0x406484:
    // 0x406484
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406402;
}
// Address range: 0x406870 - 0x4068eb
int64_t function_406870(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406877
    if (fileno(stream) < 0) {
        // 0x4068d7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40688a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4068bb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4068d7
            return fclose(stream);
        }
    }
    // 0x40688c
    if ((int32_t)function_4068f0(a1, v1) == 0) {
        // 0x4068d7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406898
    int32_t v3 = *v2; // 0x4068a0
    int64_t result = fclose(stream); // 0x4068ae
    if (v3 != 0) {
        // 0x4068e0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4068b0
    return result;
}
// Address range: 0x4068f0 - 0x406930
int64_t function_4068f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40690a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40690a
        return fflush(stream);
    }
    // 0x406918
    function_406930(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406930 - 0x406987
int64_t function_406930(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406930
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40693a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40696b
    int64_t result = -1; // 0x406974
    if (v1 != -1) {
        // 0x406976
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406982
    return result;
}
// Address range: 0x406990 - 0x4084a9
int64_t function_406990(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x406990
    int64_t v1; // bp-1416, 0x406990
    int64_t v2; // bp-1656, 0x406990
    if ((int32_t)function_4086d0(a3, &v1, &v2) < 0) {
        // 0x407000
        return 0;
    }
    int64_t v3 = &v2; // 0x40699b
    int64_t v4; // bp-1384, 0x406990
    int64_t v5; // bp-1640, 0x406990
    int64_t v6; // 0x406990
    if ((int32_t)function_4084b0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x4078e7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x407903
            free((int64_t *)v6);
        }
        // 0x407908
        *__errno_location() = 22;
        // 0x407000
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x4069fb
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x406a03
    uint64_t v9 = v8 + v6; // 0x406a07
    int64_t v10; // 0x406990
    char * v11; // 0x406990
    int64_t v12; // 0x406990
    if (v9 < v8) {
        // 0x4070b0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x406fb9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x4070b0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x406fb9;
        } else {
            uint64_t size = v9 + 6; // 0x406a17
            if (size < 4000) {
                // 0x406b60
                v12 = 0;
                int64_t v13; // bp-1784, 0x406990
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x406a54;
            } else {
                if (size == -1) {
                    // 0x4070b0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x406fb9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x406a38
                    if (mem == NULL) {
                        // 0x4070b0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x406fb9;
                    } else {
                        // 0x406a4d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x406a54;
                    }
                }
            }
        }
    }
  lab_0x406f80_2:;
    // 0x406f80
    int64_t v14; // 0x406990
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x406f88
    int64_t v17 = v16; // 0x406f96
    int64_t v18 = v16; // 0x406f96
    int64_t v19 = v15; // 0x406f96
    int64_t v20; // 0x406a78
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x4071a8;
    } else {
        goto lab_0x406fa1;
    }
  lab_0x406fb9:
    // 0x406fb9
    if (v6 != (int64_t)&v4) {
        // 0x406fd0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x406fec
        free((int64_t *)v6);
    }
    // 0x406ff1
    *(int32_t *)v10 = 12;
    // 0x407000
    return 0;
  lab_0x406a54:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x406a8d
    int64_t v23 = *v22; // 0x406a8d
    int64_t v24 = 0; // 0x406a93
    int64_t v25 = v20; // 0x406a93
    int64_t v26 = v21; // 0x406a93
    int64_t v27 = 0; // 0x406a93
    int64_t v28; // 0x406990
    int64_t v29; // 0x406990
    int64_t v30; // 0x406990
    int64_t v31; // 0x406990
    int64_t v32; // 0x406990
    int64_t v33; // 0x406990
    int64_t v34; // 0x406990
    if (v23 == a3) {
        goto lab_0x4070a3;
    } else {
        int64_t v35 = v23 - a3; // 0x406a99
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x406aab;
    }
  lab_0x4070a3:;
    int64_t v36 = v24; // 0x4070a6
    float80_t v37; // 0x406990
    float80_t v38 = v37; // 0x4070a6
    float80_t v39; // 0x406990
    float80_t v40 = v39; // 0x4070a6
    int64_t v41 = v25; // 0x4070a6
    int64_t v42 = v26; // 0x4070a6
    int64_t v43 = v27; // 0x4070a6
    int64_t v44; // 0x406990
    int64_t v45 = v44; // 0x4070a6
    goto lab_0x406c08;
  lab_0x406c08:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x406990
    int64_t v51; // 0x406990
    int64_t v52; // 0x406990
    int64_t v53; // 0x406990
    int64_t v54; // 0x406990
    int64_t v55; // 0x406990
    int64_t v56; // 0x406990
    int64_t v57; // 0x406990
    int64_t dest_mem2; // 0x406990
    int64_t dest_mem3; // 0x406990
    int64_t v58; // 0x406990
    float80_t v59; // 0x406990
    float80_t v60; // 0x406990
    float80_t v61; // 0x406990
    float80_t v62; // 0x406990
    float80_t v63; // 0x406990
    uint64_t v64; // 0x407d36
    char * v65; // 0x406c1c
    char v66; // 0x406c1c
    int64_t v67; // 0x406c44
    uint32_t v68; // 0x406c48
    int64_t v69; // 0x407025
    char v70; // 0x406990
    if (v1 == v49) {
        // 0x407d30
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40849a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x407d92;
            } else {
                goto lab_0x406f80_2;
            }
        } else {
            // 0x407d40
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x407d92;
            } else {
                if (v47 != 0) {
                    // 0x40835d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406f80_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x408363
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x407d5e;
                        } else {
                            goto lab_0x40836f;
                        }
                    }
                } else {
                    // 0x407d4e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x407d5e;
                    } else {
                        goto lab_0x40836f;
                    }
                }
            }
        }
    } else {
        // 0x406c1c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x406c21
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x4076bc
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x4077f0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x406f80_2;
                } else {
                    goto lab_0x407082;
                }
            } else {
                // 0x407032
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x407082;
                } else {
                    if (v47 != 0) {
                        // 0x407920
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x406f80_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x407926
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x407050;
                            } else {
                                goto lab_0x407932;
                            }
                        }
                    } else {
                        // 0x407040
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x407050;
                        } else {
                            goto lab_0x407932;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x4076bc
                abort();
                // UNREACHABLE
            }
            // 0x406c39
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g55 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x4075b0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x407087;
                }
                case 19: {
                    // 0x4075a0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x407087;
                }
                case 20: {
                    // 0x407588
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x407087;
                }
                case 21: {
                    goto lab_0x407170;
                }
                case 22: {
                    goto lab_0x407170;
                }
                default: {
                    // 0x406c5a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x407100
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40711d;
                        } else {
                            // 0x407107
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x406c90;
                            } else {
                                goto lab_0x40711d;
                            }
                        }
                    } else {
                        goto lab_0x406c90;
                    }
                }
            }
        }
    }
  lab_0x406aab:;
    int64_t v75 = v34;
    float80_t v76; // 0x406990
    float80_t v77 = v76;
    float80_t v78; // 0x406990
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x406990
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x406aae
    int64_t v89 = v85; // 0x406aae
    int64_t v90 = v84; // 0x406aae
    float80_t v91 = v79; // 0x406aae
    float80_t v92 = v77; // 0x406aae
    int64_t v93 = v75; // 0x406aae
    int64_t v94 = v80; // 0x406aae
    int64_t v95 = v81; // 0x406aae
    int64_t v96 = v82; // 0x406aae
    int64_t v97 = v87; // 0x406aae
    int64_t v98; // 0x406990
    int64_t v99; // 0x406990
    int64_t v100; // 0x406990
    int64_t v101; // 0x406990
    int64_t v102; // 0x406990
    if (v82 >= v87) {
        goto lab_0x406bf9;
    } else {
        if (v82 != 0) {
            // 0x406b90
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x406f80_2;
            } else {
                int64_t v103 = 2 * v82; // 0x406b96
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x406bab;
                } else {
                    goto lab_0x406b9e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x406ad4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x406bbe;
                } else {
                    goto lab_0x406ae0;
                }
            } else {
                goto lab_0x406b9e;
            }
        }
    }
  lab_0x406bf9:
    // 0x406bf9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x406c08;
  lab_0x407d92:
    // 0x407d92
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x407d9a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x407dab
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x407db7
    if (v12 != 0) {
        // 0x407dc3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x407de2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x407dfe
        free((int64_t *)v6);
    }
    // 0x407e03
    *a2 = v46;
    // 0x407000
    return result;
  lab_0x407170:
    // 0x407170
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x407087;
  lab_0x406b9e:
    // 0x406b9e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x406f80_2;
    } else {
        goto lab_0x406bab;
    }
  lab_0x4071a8:
    // 0x4071a8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x406fa1;
  lab_0x406fa1:
    if (v12 == 0) {
        // 0x4070b0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x406fb9;
    } else {
        // 0x406fb1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x406fb9;
    }
  lab_0x407082:
    // 0x407082
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x407087;
  lab_0x406c90:;
    int64_t v273 = (int64_t)v11; // 0x406c90
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x406c97
    int64_t v275 = v273 + 1; // 0x406c9b
    *v11 = 37;
    int64_t v276 = v275; // 0x406ca4
    if (v274 % 2 != 0) {
        // 0x406ca6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x406c97
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x406cb7
    if ((v277 & 2) != 0) {
        // 0x406cb9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x406cc3
    if ((v277 & 4) != 0) {
        // 0x406cc5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x406ccf
    if ((v277 & 8) != 0) {
        // 0x406cd1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x406cdb
    if ((v277 & 16) != 0) {
        // 0x406cdd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x406ce7
    if ((v277 & 64) != 0) {
        // 0x406ce9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x406cf3
    if ((v277 & 32) != 0) {
        // 0x406cf5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x406cfd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x406d01
    int64_t v293 = v290; // 0x406d08
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x406d17
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x406d3a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x406d3e
    int64_t v298 = v295; // 0x406d45
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x406d54
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x406c4a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x406d80
    int64_t v272; // 0x406990
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x406d89
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x407188;
        } else {
            if (v301 == 12) {
                // 0x407948
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x406db0;
            } else {
                // 0x406da0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x407180
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x407188;
                } else {
                    goto lab_0x406db0;
                }
            }
        }
    } else {
        goto lab_0x406db0;
    }
  lab_0x407087:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x407087
    int64_t v111 = v55 + 88; // 0x40708b
    int64_t v112 = *(int64_t *)v111; // 0x40708f
    int64_t v113 = v49 + 1; // 0x407092
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x406a99
        int64_t v115 = v114 + v105; // 0x406a9f
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
            // 0x4070c8
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
                goto lab_0x406f80_2;
            } else {
                goto lab_0x406bf9;
            }
        } else {
            goto lab_0x406aab;
        }
    } else {
        goto lab_0x4070a3;
    }
  lab_0x406bab:;
    int64_t v116 = v80 == v20; // 0x406bb2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x406ae0;
    } else {
        goto lab_0x406bbe;
    }
  lab_0x406bbe:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x406990
    if (v102 != 0) {
        goto lab_0x406ae0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x406bda
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x407195;
        } else {
            // 0x406be8
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
            goto lab_0x406bf9;
        }
    }
  lab_0x406ae0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x406af7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x406f80_2;
    } else {
        // 0x406b1d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x406b45
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
        goto lab_0x406bf9;
    }
  lab_0x407d5e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x408324
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x406f80_2;
        } else {
            // 0x408335
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40834a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x407d92;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x407d81
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x407195;
        } else {
            // 0x407d8f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x407d92;
        }
    }
  lab_0x40836f:
    // 0x40836f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x406f80_2;
    } else {
        goto lab_0x407d5e;
    }
  lab_0x40711d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40711d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x407121
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x407125
    int64_t v123 = 0; // 0x40712c
    int64_t v124 = v122; // 0x40712c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x407132
        int64_t v126 = v120; // 0x40713a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x4080c1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x4080d9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x4080eb
            int64_t v131 = v128; // 0x4080f4
            int64_t v132 = v130; // 0x4080f4
            int64_t v133; // 0x406990
            int64_t v134; // 0x408106
            if (v130 < v129) {
                // 0x4080f6
                if (v121 == v128) {
                    // break -> 0x406f10
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x406efb
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x406f10
                        goto lab_0x406f10;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x4080b8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x4080c1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x4080f6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x406f10
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x406efb
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x406f10
                            goto lab_0x406f10;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x4080b8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x407144
            if (*(int32_t *)v135 != 5) {
                // 0x4076bc
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x407150
            int64_t v137 = v136; // 0x407150
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40715d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x406f10:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x406f10
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x406f14
    int64_t v142; // 0x406990
    int64_t v143; // 0x406990
    int64_t v144; // 0x406990
    if (v140 == v141) {
        goto lab_0x4075c0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x406f21
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x408124
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40812d
            if (v141 == v146) {
                goto lab_0x4075de;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x408153
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40815a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x408173
                int64_t v152 = v151; // 0x40817c
                int64_t v153 = v149; // 0x40817c
                int64_t v154; // 0x406990
                int64_t v155; // 0x408187
                if (v151 < v150) {
                    // 0x40817e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x406f80_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40819a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x406f80_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x408140
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x408149
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40817e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x406f80_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40819a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x406f80_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x408140
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x406f4c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x406f33
            if (*(int32_t *)v156 != 5) {
                // 0x4076bc
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x406f40
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x4075c0;
            } else {
                goto lab_0x406f4c;
            }
        }
    }
  lab_0x406db0:
    // 0x406db0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x406dbd
    int64_t v160 = 0; // 0x406dc5
    if (v159 != -1) {
        // 0x406dcb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x4076bc
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x406dee
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x406dfc
        if (*(int32_t *)v162 != 5) {
            // 0x4076bc
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x406e0f
        int64_t v164; // bp-8, 0x406990
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x406990
    uint64_t v165; // 0x406e26
    if (v46 > 0xfffffffffffffffd) {
        // 0x407858
        v14 = v48;
        if (v47 == -1) {
            // 0x406e84
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x406f80_2;
    } else {
        // 0x406e30
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x406e84
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x407560
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x406f80_2;
            } else {
                int64_t v167 = 2 * v47; // 0x407566
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x406e52;
                } else {
                    goto lab_0x407572;
                }
            }
        } else {
            // 0x406e42
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x406e52;
            } else {
                goto lab_0x407572;
            }
        }
    }
  lab_0x407050:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x407879
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x406f80_2;
        } else {
            // 0x407891
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x4078a2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x407082;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x407071
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x407195;
        } else {
            // 0x40707f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x407082;
        }
    }
  lab_0x407932:
    // 0x407932
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x406f80_2;
    } else {
        goto lab_0x407050;
    }
  lab_0x4075c0:
    // 0x4075c0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x4075de;
  lab_0x407188:
    // 0x407188
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x406db0;
  lab_0x407195:
    // 0x407195
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x4071a8;
  lab_0x4075de:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x4075e4
    v14 = v48;
    int64_t v170; // 0x406990
    int64_t v171; // 0x406990
    int64_t * v172; // 0x406990
    int64_t v173; // 0x406990
    int64_t v174; // bp-760, 0x406990
    uint64_t size5; // 0x4075e8
    if (v169 == -1) {
        goto lab_0x406f80_2;
    } else {
        // 0x4075f9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x407659;
        } else {
            // 0x407605
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x406f80_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40762d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x406f80_2;
                } else {
                    goto lab_0x407659;
                }
            }
        }
    }
  lab_0x406f4c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x4075de;
    } else {
        // 0x406f55
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x4075de;
        } else {
            goto lab_0x406f80_2;
        }
    }
  lab_0x406e52:
    // 0x406e52
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x407819
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x407834
            if (v48 == v20 && v46 != 0) {
                // 0x407842
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x406e84
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x406e73
        v14 = v48;
        if (mem11 != NULL) {
            // 0x406e84
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x406f80_2;
  lab_0x407572:
    // 0x407572
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x406f80_2;
    } else {
        goto lab_0x406e52;
    }
  lab_0x407659:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x406990
    int64_t v181; // 0x406990
    int64_t v182; // 0x406990
    int64_t v183; // 0x406990
    int64_t v184; // 0x406990
    int64_t v185; // 0x406990
    int64_t v186; // 0x406990
    int64_t v187; // 0x406990
    int64_t v188; // 0x406990
    int64_t v189; // 0x406990
    int64_t v190; // 0x406990
    int64_t v191; // 0x406990
    int64_t v192; // 0x406990
    int64_t v193; // 0x406990
    float80_t v194; // 0x406990
    float80_t v195; // 0x406990
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x4081d2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x4081e0
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
            // 0x40830d
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
        goto lab_0x407b19;
    } else {
        // 0x407661
        int64_t v198; // 0x406990
        float80_t v199; // 0x406990
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x407e21
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x407e2e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x407c8a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40768f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x407698
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x4076bc
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x4076bc
                            abort();
                            // UNREACHABLE
                        }
                        // 0x408206
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x408206
                            v181 = v187 + 3;
                            goto lab_0x408381;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x408381;
                            } else {
                                goto lab_0x408242;
                            }
                        }
                    } else {
                        // 0x407f13
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x407b07;
                        } else {
                            int64_t v202 = v187 + 2; // 0x407f21
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40846a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x407f68
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x407f7b
                                int64_t v207 = v176 & 0xffffffff; // 0x407f7e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x407f8c
                                int64_t v209 = v187 + 1; // 0x407fa9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x407fbe
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x407fcb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x407b19;
                        }
                    }
                } else {
                    // 0x407cb8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x407cb8
                        v180 = v187 + 1;
                        goto lab_0x408267;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x408267;
                        } else {
                            goto lab_0x407cd8;
                        }
                    }
                }
            } else {
                // 0x407af0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x407b07;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40803c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40804d
                    char v215 = *v213; // 0x408054
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x408090
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40809d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x408065
                        v182 = v218;
                        int64_t v219; // 0x408057
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x407b19;
                }
            }
        } else {
            float80_t v220; // 0x406990
            if (v220 != 0.0L) {
                // 0x4076bc
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x407d0b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x407d1a
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
                // 0x407ff3
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
            goto lab_0x407b19;
        }
    }
  lab_0x407b19:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x407b1c
    int64_t v229 = v228; // 0x407b22
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x407b24
        int64_t v232 = v231 + v224; // 0x407b27
        int64_t v233 = v232 - v225; // 0x407b2e
        if ((v230 & 2) != 0) {
            // 0x407fd3
            v229 = v233;
            int64_t v234 = v224; // 0x407fd6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x407fe0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x407fe0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x407e45
                int64_t v238 = v224; // 0x407e4b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x407e59
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x407e50
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x407e65
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x407e78
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
                int64_t v243 = v224; // 0x407b51
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x407b71
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x407b68
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x407b7a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x407b88
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
        // 0x4076bc
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x407bb8
    int64_t dest_mem5 = v48; // 0x407bc5
    int64_t v250 = v248; // 0x407bc5
    int64_t v251 = v47; // 0x407bc5
    int64_t v252; // 0x406990
    if (v47 - v46 > v248) {
        goto lab_0x407c40;
    } else {
        if (v249 < v46) {
            // 0x407e12
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x406f80_2;
            } else {
                goto lab_0x407c40;
            }
        } else {
            // 0x407bd0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x407c40;
            } else {
                if (v47 != 0) {
                    // 0x4081a8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406f80_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x4081ae
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x407bee;
                        } else {
                            goto lab_0x4081ba;
                        }
                    }
                } else {
                    // 0x407bde
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x407bee;
                    } else {
                        goto lab_0x4081ba;
                    }
                }
            }
        }
    }
  lab_0x407c40:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x407c51
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x407c6d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x407087;
  lab_0x407b07:
    // 0x407b07
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x407b19;
  lab_0x408267:;
    char * v257 = nl_langinfo(0x10000); // 0x40829a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x4082ab
    char v259 = *v257; // 0x4082b2
    int64_t v260 = v176 & 0xffffffff; // 0x4082b5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x4082c3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x4082f0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x4082fd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x407cd8;
  lab_0x407cd8:
    // 0x407cd8
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
    goto lab_0x407b19;
  lab_0x407bee:
    // 0x407bee
    if (v48 == 0 || v48 == v20) {
        // 0x407e8b
        int64_t size7; // 0x406990
        int64_t * mem12 = malloc((int32_t)size7); // 0x407ea2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x406f80_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x407eae
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x407ed9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x407c40;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x407c1d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x406f80_2;
        } else {
            // 0x407c2b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x407c40;
        }
    }
  lab_0x4081ba:
    // 0x4081ba
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x406f80_2;
    } else {
        goto lab_0x407bee;
    }
  lab_0x408381:;
    int64_t v265 = v187 + 4; // 0x408381
    char v266 = *nl_langinfo(0x10000); // 0x4083cc
    int64_t v267 = v176 & 0xffffffff; // 0x4083cf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x4083d6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x4083fd
        int64_t v270 = v265 + 1; // 0x408405
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
    goto lab_0x408242;
  lab_0x408242:
    // 0x408242
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x407b19;
}
// Address range: 0x4084b0 - 0x4086c9
int64_t function_4084b0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x408513
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x4084c8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x4084d9
    g56 = v5;
    int64_t v6; // 0x4084b0
    int64_t v7; // 0x4084b0
    int64_t v8; // 0x4084b0
    int64_t v9; // 0x4084b0
    int64_t v10; // 0x4084b0
    int64_t v11; // 0x4084b0
    int64_t v12; // 0x4084b0
    uint32_t v13; // 0x4085d0
    int64_t * v14; // 0x408600
    int64_t v15; // 0x408608
    uint32_t v16; // 0x408650
    uint32_t v17; // 0x408620
    int64_t * v18; // 0x4085b0
    int64_t v19; // 0x4085b0
    int64_t * v20; // 0x4085c0
    int64_t v21; // 0x4085c0
    int64_t * v22; // 0x408598
    int64_t v23; // 0x408598
    int64_t * v24; // 0x408580
    int64_t v25; // 0x408580
    int64_t * v26; // 0x4086a0
    uint32_t v27; // 0x408560
    int64_t v28; // 0x4086a0
    int64_t * v29; // 0x408690
    int64_t v30; // 0x408690
    uint32_t v31; // 0x408540
    int64_t * v32; // 0x4086b8
    int64_t v33; // 0x4086b8
    int64_t v34; // 0x408663
    uint32_t v35; // 0x408520
    int64_t v36; // 0x408637
    uint32_t v37; // 0x4084e8
    int32_t * v38; // 0x4085d0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x408560
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x408567
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x4085b0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x408573
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x408506
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x408540
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x408547
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x4085c0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x408553
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x408506
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x408520
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x408527
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x408598
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x408533
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x408506
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
            // 0x4084e8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x4084f3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x408580
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x4084ff
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x408506
            break;
        }
        case 11: {
            // 0x4085d0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x4085df
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x4086a0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x4085ec
            *(int64_t *)(v4 + 16) = __asm_movsd_4(__asm_movsd(*(int64_t *)v10));
            // break -> 0x408506
            break;
        }
        case 12: {
            // 0x408600
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x408506
            break;
        }
        case 15: {
            // 0x408650
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x408657
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x408690
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x408663
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x408506
            break;
        }
        case 16: {
            // 0x408620
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40862b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x4086b8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x408637
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x408506
            break;
        }
        default: {
            // 0x408513
            return 0xffffffff;
        }
    }
    // 0x408506
    v3++;
    int64_t v39 = v4 + 32; // 0x408511
    while (v3 < v2) {
        // 0x4084d0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g56 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x408560
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x408567
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x4085b0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x408573
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x408506
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x408540
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x408547
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x4085c0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x408553
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x408506
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x408520
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x408527
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x408598
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x408533
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x408506
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
                // 0x4084e8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x4084f3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x408580
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x4084ff
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x408506
                break;
            }
            case 11: {
                // 0x4085d0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x4085df
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x4086a0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x4085ec
                *(int64_t *)(v4 + 16) = __asm_movsd_4(__asm_movsd(*(int64_t *)v10));
                // break -> 0x408506
                break;
            }
            case 12: {
                // 0x408600
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x408506
                break;
            }
            case 15: {
                // 0x408650
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x408657
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x408690
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x408663
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x408506
                break;
            }
            case 16: {
                // 0x408620
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40862b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x4086b8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x408637
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x408506
                break;
            }
            default: {
                // 0x408513
                return 0xffffffff;
            }
        }
        // 0x408506
        v3++;
        v39 = v4 + 32;
    }
    // 0x408513
    return 0;
}
// Address range: 0x4086d0 - 0x4093d9
int64_t function_4086d0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x4086d2
    int64_t v4 = v1 + 16; // 0x4086d6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x408709
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x40871e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40874b
    int32_t v8 = 0; // 0x408750
    int64_t v9 = 0; // 0x408750
    int64_t v10 = v3; // 0x408750
    int64_t v11 = a1; // 0x408750
    int64_t v12 = 0; // 0x408750
    char v13; // 0x4086d0
    int64_t v14; // 0x4086d0
    int64_t v15; // 0x4086d0
    int64_t v16; // 0x4086d0
    int64_t v17; // 0x4086d0
    int64_t v18; // 0x4086d0
    int64_t v19; // 0x4086d0
    int64_t v20; // 0x4086d0
    int64_t v21; // 0x4086d0
    int64_t v22; // 0x4086d0
    int64_t v23; // 0x4086d0
    int64_t v24; // 0x4086d0
    int64_t v25; // 0x4086d0
    int64_t v26; // 0x4086d0
    int64_t v27; // 0x4086d0
    int64_t v28; // 0x4086d0
    int64_t v29; // 0x4086d0
    int64_t v30; // 0x4086d0
    int32_t v31; // 0x4086d0
    int64_t v32; // 0x4086d0
    int64_t v33; // 0x408740
    int64_t v34; // 0x408790
    int64_t * v35; // 0x4087b3
    int64_t v36; // 0x408816
    if (v7 != 0) {
        // 0x408740
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x4086d0
        int64_t v38 = 7; // 0x4086d0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x4086d0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x408740:
            // 0x408740
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x408783
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x408798
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x4087d4
                int64_t v43 = v42; // 0x4087d4
                int64_t v44 = v43; // 0x4087dd
                int64_t v45 = v33; // 0x4087dd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x408b70
                    char v47 = *(char *)v46; // 0x408b74
                    int64_t v48 = v46; // 0x408b7d
                    while (v47 < 58) {
                        // 0x408b70
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x408b7f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x409215
                        char v52 = *(char *)v51; // 0x409215
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x409219
                        int64_t v54 = v33; // 0x40922d
                        int64_t v55 = v51; // 0x40922d
                        char v56 = v52; // 0x40922d
                        int64_t v57 = v53; // 0x40922d
                        bool v58 = v52 < 58; // 0x40922d
                        bool v59 = v52 < 58; // 0x40922d
                        char v60 = v52; // 0x40922d
                        int64_t v61 = v51; // 0x40922d
                        int64_t v62; // 0x409242
                        int64_t v63; // 0x409215
                        char v64; // 0x409215
                        int64_t v65; // 0x409219
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x408e98_9;
                            }
                            // 0x409213
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
                                // 0x40922f
                                if (v64 >= 58) {
                                    goto lab_0x408e98_9;
                                }
                                // 0x409213
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
                        int64_t v67 = v55; // 0x4091e8
                        while (v58) {
                            // 0x4091ee
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
                                    goto lab_0x408e98_9;
                                }
                                // 0x409213
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
                                    // 0x40922f
                                    if (v64 >= 58) {
                                        goto lab_0x408e98_9;
                                    }
                                    // 0x409213
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
                            // 0x4091e4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x4092ed
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x408e98_9;
                        }
                        int64_t v68 = v54 + 2; // 0x4092fe
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x4086d0
                v36 = v45;
                char v70; // 0x4086d0
                while (true) {
                    // 0x408816
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x408830
                                *v41 = *v41 | 2;
                                // break -> 0x408810
                                break;
                            }
                            case 43: {
                                // 0x408840
                                *v41 = *v41 | 4;
                                // break -> 0x408810
                                break;
                            }
                            case 32: {
                                // 0x408850
                                *v41 = *v41 | 8;
                                // break -> 0x408810
                                break;
                            }
                            case 35: {
                                // 0x408860
                                *v41 = *v41 | 16;
                                // break -> 0x408810
                                break;
                            }
                            case 48: {
                                // 0x408870
                                *v41 = *v41 | 32;
                                // break -> 0x408810
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x408878
                                    break;
                                }
                                // 0x408806
                                *v41 = *v41 | 64;
                                // break -> 0x408810
                                break;
                            }
                        }
                    } else {
                        // 0x40881f
                        *v41 = *v41 | 1;
                    }
                    // 0x408810
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x4086d0
                int64_t * v72; // 0x4087a1
                int64_t * v73; // 0x4087aa
                if (v70 == 42) {
                    // 0x4088ed
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x40890d
                    int64_t v75 = v74; // 0x40890d
                    int64_t v76 = v75 + 0xffffffd0; // 0x408911
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x408917
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x408ced
                        char v80 = *(char *)v79; // 0x408cf1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x408ced
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x408cfd
                        v26 = v79;
                        int64_t v81 = v75; // 0x408d01
                        int64_t v82 = v36; // 0x408d01
                        int64_t v83 = 0; // 0x408d01
                        if (v80 != 36) {
                            goto lab_0x40891d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x408d32
                            int64_t v89 = v85; // 0x408d32
                            int64_t v90 = v87; // 0x408d32
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x408d37
                            int64_t v95 = v92 + 1; // 0x408d3a
                            char v96 = *(char *)v95; // 0x408d3a
                            int64_t v97 = v96; // 0x408d3a
                            while (v94 < v91) {
                                // 0x408d51
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x408e98_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x408d0b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x408d14
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
                                    // 0x408d51
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x408e98_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x408d0b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x40938b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x408e98_9;
                            }
                            // 0x409399
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40892c;
                        }
                    } else {
                        goto lab_0x40891d;
                    }
                } else {
                    // 0x40887d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x4086d0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x408f9b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x408fa0
                        int64_t v102 = v71; // 0x408fa9
                        char * v103 = v100; // 0x408fa9
                        int64_t v104 = v36; // 0x408fa9
                        int64_t v105 = v71; // 0x408fa9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x408fb3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x408fb3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x408fb3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x408fc2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x408fe5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x408888;
                }
            } else {
                goto lab_0x408748;
            }
        }
    }
  lab_0x408752:
    // 0x408752
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x408774
    return 0;
  lab_0x408e98_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x408ea3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x408eb5
    if (v3 != v115) {
        // 0x408ec0
        free((int64_t *)v115);
    }
    // 0x408ec5
    *__errno_location() = 22;
    // 0x408774
    return 0xffffffff;
  lab_0x409070_5:;
    // 0x409070
    int64_t v116; // 0x4086d0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x409075
    int64_t v119; // 0x4086d0
    if (v4 == v117) {
        goto lab_0x409089_3;
    } else {
        // 0x409077
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x409089_3;
    }
  lab_0x409089_3:;
    int64_t v120 = *v5; // 0x409089
    int32_t * v121; // 0x409099
    if (v3 == v120) {
        // 0x409099
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x409094
    free((int64_t *)v120);
    // 0x409099
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x408748:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40874b
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
        // break -> 0x408752
        goto lab_0x408752;
    }
    goto lab_0x408740;
  lab_0x40891d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x40891d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x408cc3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x408e98_9;
        }
        // 0x408cdb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40892c;
  lab_0x408888:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40888b
    int64_t v147 = v339; // 0x40888b
    int64_t v145 = v338; // 0x40888b
    int64_t v143 = v337; // 0x40888b
    int64_t v186; // 0x4086d0
    int64_t v190; // 0x4086d0
    int64_t v189; // 0x4086d0
    int64_t v188; // 0x4086d0
    int64_t v187; // 0x4086d0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x408990;
    } else {
        goto lab_0x408891;
    }
  lab_0x40892c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40892c
    int64_t v132 = v128; // 0x408933
    int64_t v133 = v16; // 0x408933
    int64_t v134 = v131; // 0x408933
    int64_t v135; // 0x4086d0
    int64_t v136; // 0x4086d0
    int64_t v137; // 0x4086d0
    int64_t v138; // 0x408bdf
    if (v16 > v127) {
        goto lab_0x40893c;
    } else {
        uint64_t v139 = 2 * v16; // 0x408bd5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x409070_5;
        }
        int64_t size = 32 * v138; // 0x408bfe
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x40915c
            if (mem == NULL) {
                goto lab_0x409089_3;
            }
            // 0x40917e
            v135 = (int64_t)mem;
            goto lab_0x409189;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x408c1f
            int64_t v140 = *v6; // 0x408c24
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x409070_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x408c1f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x409189;
            } else {
                goto lab_0x408c5d;
            }
        }
    }
  lab_0x408891:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x408898
    int64_t v151 = v146; // 0x408898
    int64_t v152 = v144; // 0x408898
    uint64_t v153; // 0x4086d0
    int64_t v154; // 0x4086d0
    int64_t v155; // 0x4088d7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x4088db
        int64_t v158; // 0x4086d0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x408a40
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x4088d3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x408a48
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x4088d0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x4088d3
                    break;
                }
            }
        } else {
            // 0x4088e0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x4088d3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x408a48
    int64_t v162 = v161 % 256; // 0x408a54
    g57 = v162;
    int64_t v163 = 17; // 0x408a57
    int64_t v164 = v154; // 0x408a57
    int64_t v165 = v154; // 0x408a57
    switch ((char)v161) {
        case 0: {
            goto lab_0x408ac1;
        }
        case 28: {
            goto lab_0x408e12;
        }
        case 30: {
            // 0x408e3e
            v163 = 14;
            v164 = 99;
            goto lab_0x408a69;
        }
        case 32: {
            goto lab_0x408e12;
        }
        case 33: {
            goto lab_0x408e12;
        }
        case 34: {
            goto lab_0x408e12;
        }
        case 46: {
            // 0x408e2f
            v163 = 16;
            v164 = 115;
            goto lab_0x408a69;
        }
        case 51: {
            goto lab_0x408e4d;
        }
        case 60: {
            goto lab_0x408e12;
        }
        case 62: {
            int32_t v166 = v153; // 0x408d69
            int32_t v167 = v166 - 7; // 0x408d69
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x408d6f
            v163 = v168;
            v164 = v154;
            goto lab_0x408a69;
        }
        case 63: {
            goto lab_0x408dc0;
        }
        case 64: {
            goto lab_0x408e12;
        }
        case 65: {
            goto lab_0x408e12;
        }
        case 66: {
            goto lab_0x408e12;
        }
        case 68: {
            goto lab_0x408dc0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x408d7f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x408d85
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x408d8d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x408d9b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x408daf
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x408a69;
        }
        case 74: {
            goto lab_0x408e4d;
        }
        case 75: {
            goto lab_0x408a69;
        }
        case 78: {
            int32_t v171 = v153; // 0x408a60
            int32_t v172 = v171 - 7; // 0x408a60
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x408a66
            v163 = v173;
            v164 = v154;
            goto lab_0x408a69;
        }
        case 80: {
            goto lab_0x408e4d;
        }
        case 83: {
            goto lab_0x408e4d;
        }
        default: {
            goto lab_0x408e98_9;
        }
    }
  lab_0x40893c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x408953
        int64_t v178 = v176; // 0x4086d0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x408948
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x408948
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x408961
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40896d
    int32_t v182 = *v181; // 0x40896d
    if (v182 != 0) {
        // 0x408fee
        if (v182 != 5) {
            goto lab_0x408e98_9;
        }
        unsigned char v183 = *(char *)v129; // 0x408ff7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x408888;
    } else {
        // 0x408977
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40897d
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
            goto lab_0x408891;
        } else {
            goto lab_0x408990;
        }
    }
  lab_0x408990:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x408990
    char v197 = *v196; // 0x408990
    int64_t * v198; // 0x4087b8
    *v198 = v192;
    int64_t v199; // 0x4086d0
    int64_t v200; // 0x4086d0
    int64_t v201; // 0x4086d0
    int64_t v202; // 0x4086d0
    int64_t v203; // 0x4086d0
    int64_t * v204; // 0x4087c1
    int64_t * v205; // 0x4087ca
    int64_t v206; // 0x4089a9
    if (v197 != 42) {
        char v207 = *v196; // 0x408b90
        int64_t v208 = v193; // 0x408b99
        char * v209; // 0x4086d0
        int64_t v210; // 0x4086d0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x408ba0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x408ba4
            v208 = v212;
            while (v214 < 58) {
                // 0x408ba0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x408bae
            v209 = v213;
            v210 = v212;
        } else {
            // 0x408b90
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x408bc1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x408891;
    } else {
        // 0x40899f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x4089bf
        int64_t v219 = v218; // 0x4089bf
        int64_t v220 = v219 + 0xffffffd0; // 0x4089c3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x4089c9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x409274
            char v224 = *(char *)v223; // 0x409278
            v221 = v223;
            while (v224 < 58) {
                // 0x409274
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x409284
            v201 = v223;
            int64_t v225 = v219; // 0x409288
            int64_t v226 = v206; // 0x409288
            int64_t v227 = 0; // 0x409288
            if (v224 != 36) {
                goto lab_0x4089cf;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x4092b9
                int64_t v233 = v229; // 0x4092b9
                int64_t v234 = v231; // 0x4092b9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x4092be
                int64_t v239 = v236 + 1; // 0x4092c5
                char v240 = *(char *)v239; // 0x4092c9
                int64_t v241 = v240; // 0x4092c9
                while (v238 < v235) {
                    // 0x4092d7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x408e98_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x409292
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x40929b
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
                        // 0x4092d7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x408e98_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x409292
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x4093a7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x408e98_9;
                }
                // 0x4093b5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x4089de;
            }
        } else {
            goto lab_0x4089cf;
        }
    }
  lab_0x408ac1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x408ac6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x408ace
    *a2 = v245;
    int64_t v246; // 0x4086d0
    int64_t v247; // 0x4086d0
    int64_t dest_mem; // 0x4086d0
    int64_t v248; // 0x4086d0
    int64_t v249; // 0x4093c3
    if (v246 > v245) {
        // 0x408ada
        goto lab_0x408748;
    } else {
        if (v246 < 0) {
            // 0x4093c3
            v249 = *v6;
            v116 = v249;
            goto lab_0x409070_5;
        }
        int64_t v250 = 2 * v246; // 0x408af6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x4093c3
            v249 = *v6;
            v116 = v249;
            goto lab_0x409070_5;
        }
        int64_t v251 = *v5; // 0x408b07
        int64_t size2 = 176 * v246; // 0x408b19
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x408c69
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x4091cc
                v118 = v252;
                if (v4 == v252) {
                    // 0x409099
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x409077
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x409089_3;
            }
            goto lab_0x408c84;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x408b2b
            if (mem4 == NULL) {
                // 0x4093c3
                v249 = *v6;
                v116 = v249;
                goto lab_0x409070_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x408b2b
            int64_t v254 = *v5; // 0x408b4d
            int64_t v255 = *a2; // 0x408b51
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x408c84;
            } else {
                goto lab_0x408b5f;
            }
        }
    }
  lab_0x408e12:
    // 0x408e12
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x408e27
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x408a69;
  lab_0x408e4d:;
    uint32_t v335 = (int32_t)v153; // 0x408e55
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x408e5b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x408e63
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x408e71
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x408e7e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x408a69;
  lab_0x408dc0:;
    uint32_t v336 = (int32_t)v153; // 0x408dc8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x408dce
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x408dd6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x408de4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x408df1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x408a69;
  lab_0x408a69:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x4086d0
    int64_t v260; // 0x4086d0
    int64_t * v261; // 0x4087cf
    if (v259 == -1) {
        // 0x408f74
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x408e98_9;
        }
        // 0x408f8c
        v260 = v148;
    } else {
        // 0x408a73
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x408a78
    int64_t v264 = v258; // 0x408a7f
    int64_t v265 = v162; // 0x408a7f
    int64_t v266 = v263; // 0x408a7f
    int64_t v267; // 0x4086d0
    int64_t v268; // 0x4086d0
    int64_t v269; // 0x4086d0
    int64_t v270; // 0x4086d0
    int64_t v271; // 0x4086d0
    if (v142 > v262) {
        goto lab_0x408a85;
    } else {
        uint64_t v272 = 2 * v142; // 0x408ee8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x408ef2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x409070_5;
        }
        int64_t size3 = 32 * v273; // 0x408f11
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x408f24
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x409009
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x409089_3;
            }
            goto lab_0x409026;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x408f31
            if (mem6 == NULL) {
                // 0x4093c3
                v249 = *v6;
                v116 = v249;
                goto lab_0x409070_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x408f31
            int64_t v276 = v274 & 0xffffffff; // 0x408f36
            int64_t v277 = *v6; // 0x408f61
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x409026;
            } else {
                goto lab_0x408f6b;
            }
        }
    }
  lab_0x408a85:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x408a9b
        int64_t v282 = v279; // 0x4086d0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x408a90
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x408a90
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x408aa9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x408ab5
    int32_t v286 = *v285; // 0x408ab5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x408eda
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x408e98_9;
        }
    } else {
        // 0x408abf
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x408ac1;
  lab_0x409189:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x409189
    int64_t * v290; // 0x4086d0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x408c5d;
  lab_0x408c5d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40893c;
  lab_0x4089cf:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x4089cf
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x40924a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x408e98_9;
        }
        // 0x409262
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x4089de;
  lab_0x4089de:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x4089de
    int64_t v300 = v296; // 0x4089e5
    int64_t v301 = v191; // 0x4089e5
    int64_t v302 = v299; // 0x4089e5
    int64_t v303; // 0x4086d0
    int64_t v304; // 0x4086d0
    int64_t v305; // 0x4086d0
    int64_t v306; // 0x4090c2
    if (v191 > v295) {
        goto lab_0x4089ee;
    } else {
        uint64_t v307 = 2 * v191; // 0x4090b8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x409070_5;
        }
        int64_t size4 = 32 * v306; // 0x4090dd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x40930e
            if (mem7 == NULL) {
                goto lab_0x409089_3;
            }
            // 0x409330
            v304 = (int64_t)mem7;
            goto lab_0x40933b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x4090fe
            int64_t v308 = *v6; // 0x409103
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x409070_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x4090fe
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x40933b;
            } else {
                goto lab_0x40913c;
            }
        }
    }
  lab_0x408c84:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x4086d0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x408b5f;
  lab_0x408b5f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x408748;
  lab_0x409026:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40903c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x408f6b;
  lab_0x408f6b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x408a85;
  lab_0x4089ee:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x408a03
        int64_t v324 = v322; // 0x4086d0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x4089f8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x4089f8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x408a11
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x408a1e
    int32_t v328 = *v327; // 0x408a1e
    if (v328 != 0) {
        // 0x409145
        if (v328 != 5) {
            goto lab_0x408e98_9;
        }
        unsigned char v329 = *(char *)v297; // 0x40914e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x408a28
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x408a31
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x408891;
  lab_0x40933b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x40933b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x40913c;
  lab_0x40913c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x4089ee;
}
// Address range: 0x4093e0 - 0x40943d
int64_t function_4093e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4093e0
    return function_401538();
}
// Address range: 0x409440 - 0x409441
int64_t function_409440(void) {
    // 0x409440
    int64_t result; // 0x409440
    return result;
}
// Address range: 0x409450 - 0x409468
int64_t function_409450(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409450
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g19);
}
// Address range: 0x409468 - 0x409488
int64_t function_409468(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g15; // 0x409472
    while (*(int64_t *)v1 != -1) {
        // 0x409473
        v1 -= 8;
    }
    // 0x409484
    return result;
}
