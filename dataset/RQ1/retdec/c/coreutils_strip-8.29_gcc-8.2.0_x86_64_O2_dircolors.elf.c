// Address range: 0x401d40 - 0x401d45
int64_t function_401d40(void) {
    // 0x401d40
    return abort();
}
// Address range: 0x401d45 - 0x401d4a
int64_t function_401d45(void) {
    // 0x401d45
    abort();
    // UNREACHABLE
}
// Address range: 0x401d4a - 0x401d4f
int64_t function_401d4a(void) {
    // 0x401d4a
    abort();
    // UNREACHABLE
}
// Address range: 0x401d4f - 0x401d54
int64_t function_401d4f(void) {
    // 0x401d4f
    return abort();
}
// Address range: 0x401d54 - 0x401d59
int64_t function_401d54(void) {
    // 0x401d54
    abort();
    // UNREACHABLE
}
// Address range: 0x401d59 - 0x401d5e
int64_t function_401d59(void) {
    // 0x401d59
    return abort();
}
// Address range: 0x401d5e - 0x401d63
int64_t function_401d5e(void) {
    // 0x401d5e
    abort();
    // UNREACHABLE
}
// Address range: 0x401d70 - 0x4021a2
int64_t function_401d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x401d70
    function_403110(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_409580(0x402de0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v1; // 0x401d70
    int64_t v2; // 0x401d70
    while (true) {
        // 0x401dc0
        v2 = 0;
        int64_t v3 = 2; // 0x401d70
        while (true) {
          lab_0x401dc0_2:
            // 0x401dc0
            v1 = v3;
            uint32_t v4 = (int32_t)function_4089a0(a1 & 0xffffffff, a2, "bcp", &g4, 0, a6);
            switch (v4) {
                case -1: {
                    goto lab_0x401e60;
                }
                case 98: {
                    // 0x401dc0
                    v3 = 0;
                    goto lab_0x401dc0_2;
                }
                default: {
                    if (v4 <= 98) {
                        if (v4 == -131) {
                            // 0x401dff
                            function_4051b0((int64_t)g29, "dircolors", "GNU coreutils", (int64_t)g18, "H. Peter Anvin", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v4 == -130) {
                            // 0x401e4b
                            function_402a50(0);
                            // UNREACHABLE
                        }
                        goto lab_0x402125;
                    }
                    // 0x401de8
                    if (v4 != 99) {
                        // break -> 0x401e30
                        break;
                    }
                    // 0x401dc0
                    v3 = 1;
                    goto lab_0x401dc0_2;
                }
            }
        }
    }
  lab_0x401e60:
    if (v2 != 0 == (v1 != 2)) {
        // 0x40212f
        error(0, (int32_t)"the options to output dircolors' internal database and\nto select a shell syntax are mutually exclusive" ^ (int32_t)"the options to output dircolors' internal database and\nto select a shell syntax are mutually exclusive", dcgettext(NULL, "the options to output dircolors' internal database and\nto select a shell syntax are mutually exclusive", 5));
        // 0x402125
        function_402a50(1);
        // UNREACHABLE
    }
    uint32_t v5 = (int32_t)a1 - g27; // 0x401e67
    int64_t v6 = 8 * (int64_t)g27 + a2; // 0x401e6a
    int64_t v7; // 0x401d70
    if ((v2 ^ 1) < (int64_t)v5) {
        if (v2 != 0) {
            // 0x4020cc
            function_404d30(*(int64_t *)v6);
            error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
            __fprintf_chk(g32, 1, "%s\n", dcgettext(NULL, "file operands cannot be combined with --print-database (-p)", 5));
          lab_0x402125:
            // 0x402125
            function_402a50(1);
            // UNREACHABLE
        }
        goto lab_0x402172;
    } else {
        if (v2 != 0) {
            int64_t v8; // 0x401d70
            for (int64_t i = (int64_t)"# Configuration file for dircolors, a utility to help you set the"; i < 0x104d + (int64_t)"# Configuration file for dircolors, a utility to help you set the"; i += -1 - v8) {
                // 0x401e9c
                puts((char *)i);
                int64_t v9 = i; // 0x401eac
                int64_t v10 = -1; // 0x401eac
                v8 = 0;
                while (v10 != 0) {
                    int64_t v11 = v9;
                    v10--;
                    bool v12; // 0x401d70
                    v9 = v11 + (v12 ? -1 : 1);
                    v8 = v10;
                    if (*(char *)v11 == 0) {
                        // break -> 
                        break;
                    }
                    v8 = 0;
                }
            }
            // 0x401ec8
            return v2 % 256 ^ 1;
        }
        // 0x401ed8
        v7 = v1;
        if (v1 == 2) {
            char * env_val = getenv("SHELL"); // 0x40202f
            char * format; // 0x40215c
            if (env_val == NULL) {
                // 0x402150
                format = dcgettext(NULL, "no SHELL environment variable, and no shell type option given", 5);
                error(1, (int32_t)"no SHELL environment variable, and no shell type option given" ^ (int32_t)"no SHELL environment variable, and no shell type option given", format);
                goto lab_0x402172;
            } else {
                // 0x40203d
                if (*env_val == 0) {
                    // 0x402150
                    format = dcgettext(NULL, "no SHELL environment variable, and no shell type option given", 5);
                    error(1, (int32_t)"no SHELL environment variable, and no shell type option given" ^ (int32_t)"no SHELL environment variable, and no shell type option given", format);
                    goto lab_0x402172;
                } else {
                    char * str = (char *)function_402e80((int64_t)env_val, a2); // 0x402059
                    v7 = 1;
                    if (strcmp(str, "csh") != 0) {
                        // 0x402062
                        v7 = strcmp(str, "tcsh") == 0;
                    }
                    goto lab_0x401ee2;
                }
            }
        } else {
            goto lab_0x401ee2;
        }
    }
  lab_0x402172:
    // 0x402172
    function_404d30(*(int64_t *)(v6 + 8));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x402125
    function_402a50(1);
    // UNREACHABLE
  lab_0x401ee2:
    // 0x401ee2
    _obstack_begin(&g35, 0, 0, 0x401b90, 0x401930);
    int64_t v13; // 0x401d70
    int64_t str2; // 0x401f04
    if (v5 == 0) {
        // 0x40201a
        v13 = function_402480(0, 0);
        goto lab_0x401f5e;
    } else {
        // 0x401f04
        str2 = *(int64_t *)v6;
        if (strcmp((char *)str2, "-") == 0) {
            goto lab_0x401f35;
        } else {
            // 0x401f18
            if (function_402f60(str2, (int64_t *)"r", (int64_t)g30) == 0) {
                goto lab_0x402089;
            } else {
                goto lab_0x401f35;
            }
        }
    }
  lab_0x401f5e:;
    int64_t v14 = v13 & 0xffffffff;
    if ((char)v13 == 0) {
        // 0x401ec8
        return v14 % 256 ^ 1;
    }
    int64_t v15 = (int64_t)g38; // 0x401f67
    int64_t data = g37; // 0x401f6e
    if (data == v15) {
        // 0x40207d
        g41 |= 2;
    }
    int64_t v16 = g40; // 0x401f84
    int64_t v17 = g36; // 0x401f8b
    int64_t v18 = v16 + v15 & -1 - v16; // 0x401f9e
    int64_t v19 = g39; // 0x401fa1
    int64_t v20 = v18 - v17 > v19 - v17 ? v19 : v18; // 0x401fc3
    g38 = (char *)v20;
    g37 = v20;
    char * v21 = (int32_t)v7 != 0 ? "setenv LS_COLORS '" : "LS_COLORS='"; // 0x401fea
    fputs_unlocked(v21, g29);
    fwrite_unlocked((int64_t *)data, 1, (int32_t)(v15 - data), g29);
    fputs_unlocked((int32_t)v7 != 0 ? "'\n" : "';\nexport LS_COLORS\n", g29);
    // 0x401ec8
    return v14 % 256 ^ 1;
  lab_0x401f35:;
    int64_t v22 = function_402480((int64_t)g30, str2); // 0x401f3f
    if ((int32_t)function_4055a0((int64_t)g30, str2) != 0) {
        goto lab_0x402089;
    } else {
        // 0x401f5b
        v13 = v22 & 0xffffffff;
        goto lab_0x401f5e;
    }
  lab_0x402089:
    // 0x402089
    error(0, *__errno_location(), "%s", (char *)function_404bb0(0, 3, str2));
    // 0x401ec8
    return 1;
}
// Address range: 0x4021b0 - 0x4021db
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4021b0
    int64_t v1; // 0x4021b0
    __libc_start_main(0x401d70, (int32_t)a4, (char **)&v1, (void (*)())0x409510, (void (*)())0x409570, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4021db - 0x4021fa
int64_t function_4021db(void) {
    // 0x4021db
    return 0x60f2c8;
}
// Address range: 0x4021fa - 0x402231
int64_t function_4021fa(void) {
    // 0x4021fa
    return 0;
}
// Address range: 0x402231 - 0x402288
int64_t function_402231(void) {
    // 0x402231
    if (g33 != 0) {
        // 0x402287
        int64_t result; // 0x402231
        return result;
    }
    int64_t v1 = g34; // 0x402264
    int64_t result2; // 0x402276
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402276
        result2 = function_4021db();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402266
        v1++;
    }
    // 0x40225a
    g34 = v1;
    // 0x402276
    result2 = function_4021db();
    g33 = 1;
    return result2;
}
// Address range: 0x402288 - 0x40228d
int64_t function_402288(void) {
    // 0x402288
    return function_4021fa();
}
// Address range: 0x402290 - 0x402471
int64_t function_402290(int64_t a1) {
    char v1 = a1;
    char v2 = v1; // 0x402295
    int64_t v3 = a1; // 0x402295
    if (v1 == 0) {
        // 0x4023e0
        return 0;
    }
    int64_t v4 = 1; // 0x402295
    int64_t v5; // 0x402290
    int64_t v6; // 0x402290
    int64_t v7; // 0x402290
    int64_t v8; // 0x402290
    int64_t v9; // 0x402290
    int64_t v10; // 0x402345
    int64_t v11; // 0x40234c
    while (true) {
      lab_0x402345:
        // 0x402345
        v6 = v4;
        v7 = v3;
        char v12 = v2;
        v10 = g39;
        v11 = (int64_t)g38;
        if (v12 == 61) {
            goto lab_0x402365;
        } else {
            if (v12 > 61) {
                // 0x4023c8
                v8 = v10;
                v9 = v11;
                v5 = 1;
                if (v12 != 92 != v12 != 94) {
                    // 0x4023d0
                    v8 = v10;
                    v9 = v11;
                    v5 = v6 & 0xffffffff ^ 1;
                }
                goto lab_0x402320;
            } else {
                if (v12 == 39) {
                    int64_t v13 = v11; // 0x4022b3
                    if (v10 == v11) {
                        // 0x4023f0
                        _obstack_newchunk(&g35, 1, v10, v10);
                        v13 = (int64_t)g38;
                    }
                    int64_t v14 = v13;
                    g38 = (char *)(v14 + 1);
                    *(char *)v14 = 39;
                    int64_t v15 = (int64_t)g38; // 0x4022c7
                    int64_t v16 = v15; // 0x4022d5
                    if (g39 == v15) {
                        // 0x402430
                        _obstack_newchunk(&g35, 1, v14, v10);
                        v16 = (int64_t)g38;
                    }
                    int64_t v17 = v16 + 1; // 0x4022db
                    g38 = (char *)v17;
                    *(char *)v16 = 92;
                    int64_t v18 = (int64_t)g38; // 0x4022e9
                    int64_t v19 = v18; // 0x4022f7
                    if (g39 == v18) {
                        // 0x402410
                        _obstack_newchunk(&g35, 1, v17, v10);
                        v19 = (int64_t)g38;
                    }
                    // 0x4022fd
                    g38 = (char *)(v19 + 1);
                    *(char *)v19 = 39;
                    v8 = g39;
                    v9 = (int64_t)g38;
                    v5 = 1;
                    goto lab_0x402320;
                } else {
                    // 0x402361
                    v8 = v10;
                    v9 = v11;
                    v5 = 1;
                    if (v12 != 58) {
                        goto lab_0x402320;
                    } else {
                        goto lab_0x402365;
                    }
                }
            }
        }
    }
  lab_0x4023e0:
    // 0x4023e0
    return 0;
  lab_0x402365:
    // 0x402365
    v8 = v10;
    v9 = v11;
    v5 = 1;
    int64_t v20; // 0x402290
    int64_t v21; // 0x402290
    int64_t v22; // 0x402290
    int64_t v23; // 0x402290
    if ((char)v6 == 0) {
        goto lab_0x402320;
    } else {
        int64_t v24 = v11; // 0x40236d
        if (v10 == v11) {
            // 0x402450
            _obstack_newchunk(&g35, 1, v10, v10);
            v24 = (int64_t)g38;
        }
        // 0x402373
        g38 = (char *)(v24 + 1);
        *(char *)v24 = 92;
        int64_t v25 = (int64_t)g38; // 0x402388
        v22 = v25;
        v4 = v6;
        v21 = g39;
        v23 = v25;
        v20 = v6;
        if (g39 != v25) {
            goto lab_0x402325;
        } else {
            goto lab_0x402398;
        }
    }
  lab_0x402320:
    // 0x402320
    v22 = v9;
    v4 = v5;
    v21 = v8;
    v23 = v8;
    v20 = v5;
    if (v8 == v9) {
        goto lab_0x402398;
    } else {
        goto lab_0x402325;
    }
  lab_0x402398:
    // 0x402398
    _obstack_newchunk(&g35, 1, v23, v21);
    v22 = (int64_t)g38;
    v4 = v20;
    goto lab_0x402325;
  lab_0x402325:
    // 0x402325
    v3 = v7 + 1;
    g38 = (char *)(v22 + 1);
    *(char *)v22 = *(char *)v7;
    v2 = *(char *)v3;
    if (v2 == 0) {
        // break -> 0x4023e0
        goto lab_0x4023e0;
    }
    goto lab_0x402345;
}
// Address range: 0x402480 - 0x402a41
int64_t function_402480(int64_t a1, int64_t a2) {
    int64_t v1 = 0; // bp-72, 0x40249b
    int64_t v2 = 0; // bp-64, 0x4024a4
    char * env_val = getenv("TERM"); // 0x4024ad
    char * v3 = "none"; // 0x4024b5
    if (env_val != NULL) {
        // 0x4024bb
        v3 = *env_val != 0 ? env_val : "none";
    }
    char v4 = 1; // 0x4024e2
    int64_t v5 = (int64_t)"# Configuration file for dircolors, a utility to help you set the"; // 0x4024e2
    int64_t v6 = 3; // 0x4024e2
    int64_t v7; // 0x402480
    int64_t str; // 0x402480
    int64_t v8; // 0x402480
    int64_t v9; // 0x402480
    char v10; // 0x402480
    char v11; // 0x402480
    while (true) {
      lab_0x4024e8_2:
        // 0x4024e8
        v10 = v4;
        v7 = v5;
        v8 = v6;
        v11 = v4;
        str = v5;
        v9 = v6;
        if (a1 == 0) {
            goto lab_0x40269d;
        } else {
            goto lab_0x4024f5;
        }
    }
  lab_0x402815_2:;
    // 0x402815
    char result; // 0x402480
    return result;
  lab_0x40269d:
    // 0x40269d
    if (str == (int64_t)"8.29") {
        return result2;
    }
    int32_t len = strlen((char *)str); // 0x4026b0
    char v12 = v11; // 0x4026ba
    int64_t v13 = str; // 0x4026ba
    int64_t v14 = str + 1 + (int64_t)len; // 0x4026ba
    int64_t v15 = v9; // 0x4026ba
    goto lab_0x40251a;
  lab_0x4024f5:
    // 0x4024f5
    result = v10;
    int32_t v88 = __getdelim((char **)&v1, (int32_t *)&v2, 10, (struct _IO_FILE *)a1); // 0x402507
    v12 = result;
    v13 = v1;
    v14 = v7;
    v15 = v8;
    if (v88 < 1) {
        // 0x40280b
        free((int64_t *)v1);
        goto lab_0x402815_2;
    }
    goto lab_0x40251a;
  lab_0x40251a:
    // 0x40251a
    v6 = v15;
    v5 = v14;
    char v16 = v12;
    int16_t ** v17 = __ctype_b_loc(); // 0x40251a
    int64_t v18 = (int64_t)*v17; // 0x40251f
    int64_t v19 = v13;
    unsigned char v20 = *(char *)v19; // 0x402525
    int64_t v21 = v19 + 1; // 0x40252d
    while ((*(char *)(v18 + 1 + 2 * (int64_t)v20) & 32) != 0) {
        // 0x402525
        v19 = v21;
        v20 = *(char *)v19;
        v21 = v19 + 1;
    }
    int64_t v22 = v19; // 0x402480
    v4 = v16;
    int64_t v23; // 0x402480
    int64_t v24; // 0x402480
    int64_t v25; // 0x402480
    char v26; // 0x402480
    int64_t v27; // 0x402480
    char v28; // 0x402480
    int64_t v29; // 0x40256d
    int64_t v30; // 0x4025cd
    int64_t v31; // 0x4025ef
    switch (v20) {
        case 0: {
            goto lab_0x4024e8;
        }
        case 35: {
            goto lab_0x4024e8;
        }
        default: {
            int64_t v32 = v22 + 1; // 0x402540
            char * v33 = (char *)v32;
            unsigned char v34 = *v33; // 0x402544
            uint16_t v35 = *(int16_t *)(2 * (int64_t)v34 + v18); // 0x40254c
            v22 = v32;
            while ((((char)(v35 / 0x2000) ^ 1) & (char)(v34 != 0)) != 0) {
                // 0x402540
                v32 = v22 + 1;
                v33 = (char *)v32;
                v34 = *v33;
                v35 = *(int16_t *)(2 * (int64_t)v34 + v18);
                v22 = v32;
            }
            // 0x402560
            v29 = function_405580();
            if (*v33 == 0) {
                goto lab_0x4026d0;
            } else {
                int64_t v36 = (int64_t)*v17 + 1; // 0x40259c
                int64_t v37 = v32 + 1; // 0x402590
                unsigned char v38 = *(char *)v37; // 0x402594
                int64_t v39 = v37; // 0x4025a1
                while ((*(char *)(2 * (int64_t)v38 + v36) & 32) != 0) {
                    // 0x402590
                    v37 = v39 + 1;
                    v38 = *(char *)v37;
                    v39 = v37;
                }
                int64_t v40 = v37; // 0x4025a5
                if (v38 != 0 == (v38 != 35)) {
                    int64_t v41 = v40;
                    int64_t v42 = v41 + 1; // 0x4025c3
                    char v43 = *(char *)v42; // 0x4025c3
                    v30 = v43 != 0;
                    int64_t v44 = v30; // 0x4025d8
                    while (v43 != 0 && v43 != 35) {
                        // 0x4025c3
                        v41 = v42;
                        v42 = v41 + 1;
                        v43 = *(char *)v42;
                        v30 = v44 & -256 | (int64_t)(v43 != 0);
                        v44 = v30;
                    }
                    int64_t v45 = (int64_t)*(char *)v41; // 0x4025da
                    int64_t v46 = v45; // 0x4025e3
                    int64_t v47 = v41; // 0x4025e3
                    if ((*(char *)(2 * v45 + v36) & 32) != 0) {
                        int64_t v48 = v47 - 1; // 0x4027f3
                        v46 = v48;
                        v47 = v48;
                        while ((*(char *)(2 * (int64_t)*(char *)v48 + v36) & 32) != 0) {
                            // 0x4027f3
                            v48 = v47 - 1;
                            v46 = v48;
                            v47 = v48;
                        }
                    }
                    // 0x4025e9
                    v31 = function_405580();
                    v4 = v16;
                    if (v29 == 0) {
                        goto lab_0x4024e8;
                    } else {
                        if (v31 == 0) {
                            goto lab_0x4026d9;
                        } else {
                            // 0x402609
                            v27 = v46;
                            if ((int32_t)function_402d60(v29, "TERM", v27) == 0) {
                                // 0x402728
                                if ((int32_t)function_407910(v31, (int64_t)v3, 0) == 0) {
                                    // 0x40274b
                                    v28 = v16;
                                    v24 = 2;
                                    goto lab_0x402680;
                                } else {
                                    // 0x40273b
                                    v28 = v16;
                                    v24 = 0;
                                    if ((int32_t)v6 != 2) {
                                        goto lab_0x402680;
                                    } else {
                                        // 0x40274b
                                        v28 = v16;
                                        v24 = 2;
                                        goto lab_0x402680;
                                    }
                                }
                            } else {
                                // 0x40261e
                                v28 = v16;
                                v24 = v6;
                                switch ((int32_t)v6) {
                                    case 2: {
                                        char v49 = *(char *)v29; // 0x402760
                                        v26 = v49;
                                        v23 = 1;
                                        v25 = 1;
                                        if (v49 != 46) {
                                            goto lab_0x402638;
                                        } else {
                                            goto lab_0x402771;
                                        }
                                    }
                                    case 0: {
                                        goto lab_0x402680;
                                    }
                                    default: {
                                        char v50 = *(char *)v29; // 0x40262d
                                        v26 = v50;
                                        v23 = v6;
                                        v25 = v6;
                                        if (v50 == 46) {
                                            goto lab_0x402771;
                                        } else {
                                            goto lab_0x402638;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x4026d0;
                }
            }
        }
    }
  lab_0x4024e8:
    // 0x4024e8
    goto lab_0x4024e8_2;
  lab_0x4026d0:
    // 0x4026d0
    v4 = v16;
    if (v29 == 0) {
        goto lab_0x4024e8;
    } else {
        goto lab_0x4026d9;
    }
  lab_0x4026d9:
    // 0x4026d9
    function_404bb0(0, 3, a2);
    error(0, (int32_t)"%s:%lu: invalid line;  missing second token" ^ (int32_t)"%s:%lu: invalid line;  missing second token", dcgettext(NULL, "%s:%lu: invalid line;  missing second token", 5));
    free((int64_t *)v29);
    v4 = 0;
    goto lab_0x4024e8;
  lab_0x402680:
    // 0x402680
    free((int64_t *)v29);
    free((int64_t *)v31);
    v10 = v28;
    v7 = v5;
    v8 = v24;
    v11 = v28;
    str = v5;
    v9 = v24;
    if (a1 != 0) {
        goto lab_0x4024f5;
    } else {
        goto lab_0x40269d;
    }
  lab_0x402771:;
    int64_t v51 = (int64_t)g38; // 0x402771
    int64_t v52 = v51; // 0x40277f
    if (g39 == v51) {
        // 0x402896
        _obstack_newchunk(&g35, 1, v27, v30);
        v52 = (int64_t)g38;
    }
    int64_t v53 = v52 + 1; // 0x402785
    g38 = (char *)v53;
    *(char *)v52 = 42;
    function_402290(v29);
    int64_t v54 = (int64_t)g38; // 0x40279b
    int64_t v55 = v54; // 0x4027a9
    if (g39 == v54) {
        // 0x4028b1
        _obstack_newchunk(&g35, 1, v53, v30);
        v55 = (int64_t)g38;
    }
    int64_t v56 = v55 + 1; // 0x4027af
    g38 = (char *)v56;
    *(char *)v55 = 61;
    function_402290(v31);
    int64_t v57 = (int64_t)g38; // 0x4027c5
    int64_t v58 = v57; // 0x4027d3
    int64_t v59 = v25; // 0x4027d3
    int64_t v60 = v30; // 0x4027d3
    int64_t v61 = v56; // 0x4027d3
    int64_t v62 = v25; // 0x4027d3
    if (g39 == v57) {
        goto lab_0x402885;
    } else {
        goto lab_0x4027d9;
    }
  lab_0x402638:;
    int64_t v63 = v23;
    int64_t v64; // 0x402480
    char * v65; // 0x402480
    int64_t v66; // 0x402480
    int64_t v67; // 0x402480
    int64_t v68; // 0x402480
    if (v26 == 42) {
        // 0x402830
        function_402290(v29);
        int64_t v69 = (int64_t)g38;
        v64 = v69;
        v65 = g38;
        v66 = v30;
        v67 = v30;
        v68 = v27;
        if (g39 == v69) {
            goto lab_0x40298d;
        } else {
            goto lab_0x40284c;
        }
    } else {
        // 0x402640
        v28 = v16;
        v24 = v63;
        if ((int32_t)function_402d60(v29, "OPTIONS", v27) == 0) {
            goto lab_0x402680;
        } else {
            // 0x402651
            v28 = v16;
            v24 = v63;
            if ((int32_t)function_402d60(v29, "COLOR", v27) == 0) {
                goto lab_0x402680;
            } else {
                // 0x402662
                v28 = v16;
                v24 = v63;
                int64_t v70 = (int64_t)"NORMAL"; // 0x402671
                if ((int32_t)function_402d60(v29, "EIGHTBIT", v27) != 0) {
                    int64_t v71 = 0;
                    while ((int32_t)function_402d60(v29, (char *)v70, v71) != 0) {
                        int64_t v72 = v71 + 1; // 0x4028ec
                        int64_t v73 = *(int64_t *)(8 * v72 + (int64_t)&g6); // 0x4028f0
                        int64_t v74 = v72; // 0x4028fb
                        v70 = v73;
                        if (v73 == 0) {
                            // 0x4029a1
                            v28 = v16;
                            v24 = v63;
                            if ((int32_t)v63 == 3) {
                                goto lab_0x402680;
                            } else {
                                if (a2 == 0) {
                                    // 0x4029fb
                                    dcgettext(NULL, "<internal>", 5);
                                    goto lab_0x4029c4;
                                } else {
                                    // 0x4029b5
                                    function_404bb0(0, 3, a2);
                                    goto lab_0x4029c4;
                                }
                            }
                        }
                        v71 = v74;
                    }
                    int64_t v75 = (int64_t)g38;
                    int64_t v76 = v75; // 0x402923
                    char * v77 = g38; // 0x402923
                    if (g39 == v75) {
                        // 0x402a11
                        _obstack_newchunk(&g35, 1, v71, v30);
                        v77 = g38;
                        v76 = (int64_t)v77;
                    }
                    int64_t v78 = *(int64_t *)((0x100000000 * v71 >> 29) + (int64_t)&g5); // 0x40292e
                    g38 = (char *)(v76 + 1);
                    unsigned char v79 = *(char *)v78; // 0x402948
                    *v77 = v79;
                    int64_t v80 = (int64_t)g38;
                    int64_t v81 = v80; // 0x40295b
                    char * v82 = g38; // 0x40295b
                    if (g39 == v80) {
                        // 0x402a25
                        _obstack_newchunk(&g35, 1, v78, (int64_t)v79);
                        v82 = g38;
                        v81 = (int64_t)v82;
                    }
                    int64_t v83 = v81 + 1; // 0x402968
                    g38 = (char *)v83;
                    unsigned char v84 = *(char *)(v78 + 1); // 0x402973
                    *v82 = v84;
                    int64_t v85 = (int64_t)g38;
                    v64 = v85;
                    v65 = g38;
                    v66 = v83;
                    v67 = v83;
                    v68 = v84;
                    if (g39 != v85) {
                        goto lab_0x40284c;
                    } else {
                        goto lab_0x40298d;
                    }
                } else {
                    goto lab_0x402680;
                }
            }
        }
    }
  lab_0x402885:
    // 0x402885
    _obstack_newchunk(&g35, 1, v61, v60);
    v58 = (int64_t)g38;
    v59 = v62;
    goto lab_0x4027d9;
  lab_0x4027d9:
    // 0x4027d9
    g38 = (char *)(v58 + 1);
    *(char *)v58 = 58;
    v28 = v16;
    v24 = v59;
    goto lab_0x402680;
  lab_0x40298d:
    // 0x40298d
    _obstack_newchunk(&g35, 1, v68, v67);
    v64 = (int64_t)g38;
    v65 = g38;
    v66 = v67;
    goto lab_0x40284c;
  lab_0x40284c:;
    int64_t v86 = v64 + 1; // 0x402856
    g38 = (char *)v86;
    *v65 = 61;
    function_402290(v31);
    int64_t v87 = (int64_t)g38;
    v58 = v87;
    v59 = v63;
    v60 = v66;
    v61 = v86;
    v62 = v63;
    if (g39 == v87) {
        goto lab_0x402885;
    } else {
        goto lab_0x4027d9;
    }
  lab_0x4029c4:
    // 0x4029c4
    error(0, (int32_t)"%s:%lu: unrecognized keyword %s" ^ (int32_t)"%s:%lu: unrecognized keyword %s", dcgettext(NULL, "%s:%lu: unrecognized keyword %s", 5));
    v28 = 0;
    v24 = v63;
    goto lab_0x402680;
}
// Address range: 0x402a50 - 0x402d5d
int64_t function_402a50(int32_t status) {
    // 0x402a50
    if (status != 0) {
        // 0x402a6a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402a8f
        exit(status);
        // UNREACHABLE
    }
    // 0x402a96
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Output commands to set the LS_COLORS environment variable.\n\nDetermine format of output:\n  -b, --sh, --bourne-shell    output Bourne shell code to set LS_COLORS\n  -c, --csh, --c-shell        output C shell code to set LS_COLORS\n  -p, --print-database        output defaults\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nIf FILE is specified, read it to determine which colors to use for which\nfile types and extensions.  Otherwise, a precompiled database is used.\nFor details on the format of these files, run 'dircolors --print-database'.\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x402b40
    bool v2; // 0x402a50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402bc0
    int64_t v6 = *(int64_t *)v5; // 0x402bc4
    int64_t v7 = 10; // 0x402bca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"dircolors";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402bd6
        char v11 = *(char *)v9; // 0x402bd6
        char v12 = v11; // 0x402bd6
        bool v13 = false; // 0x402bd6
        while (v10 == v11) {
            // 0x402bcc
            v7--;
            int64_t v14 = v9 + v3; // 0x402bd6
            int64_t v15 = v8 + v3; // 0x402bd6
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
            // break -> 0x402be2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 10;
    }
    // 0x402be2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402cf4;
        } else {
            // 0x402cde
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402c44;
            } else {
                goto lab_0x402cf4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402c44;
        } else {
            // 0x402c2a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402c44;
            } else {
                goto lab_0x402c44;
            }
        }
    }
  lab_0x402cf4:
    // 0x402cf4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402a8f
    exit(status);
    // UNREACHABLE
  lab_0x402c44:
    // 0x402c44
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402a8f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402d60 - 0x402db9
int64_t function_402d60(int64_t a1, char * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (v1 == a1) {
        // 0x402db8
        return 0;
    }
    int64_t v2 = 0; // 0x402d65
    unsigned char v3 = *(char *)(v2 + a1); // 0x402d78
    int64_t v4 = v3; // 0x402d78
    uint64_t v5 = v3 == 90 | (int32_t)v3 < 90 ? v4 + 32 : v4;
    unsigned char v6 = *(char *)(v2 + v1); // 0x402d90
    bool v7 = v6 == 90 | (int32_t)v6 < 90; // 0x402da0
    char v8 = v5; // 0x402da9
    while (v8 != 0) {
        // 0x402d70
        v2++;
        if ((v7 ? v6 + 32 : v6) != v8) {
            // break -> 0x402dad
            break;
        }
        v3 = *(char *)(v2 + a1);
        v4 = v3;
        v5 = v3 == 90 | (int32_t)v3 < 90 ? v4 + 32 : v4;
        v6 = *(char *)(v2 + v1);
        v7 = v6 == 90 | (int32_t)v6 < 90;
        v8 = v5;
    }
    int64_t v9 = v6; // 0x402d90
    // 0x402db8
    return v5 % 256 - (v7 ? v9 + 32 : v9) % 256 & 0xffffffff;
}
// Address range: 0x402dc0 - 0x402dc8
int64_t function_402dc0(int64_t a1) {
    // 0x402dc0
    g43 = a1;
    int64_t result; // 0x402dc0
    return result;
}
// Address range: 0x402dd0 - 0x402dd8
int64_t function_402dd0(int64_t a1) {
    // 0x402dd0
    g42 = a1;
    int64_t result; // 0x402dd0
    return result;
}
// Address range: 0x402de0 - 0x402e7e
int64_t function_402de0(void) {
    // 0x402de0
    int32_t * err_num; // 0x402df6
    if ((int32_t)function_408ee0((int64_t)g29) == 0) {
        goto lab_0x402e0c;
    } else {
        // 0x402df6
        err_num = __errno_location();
        if (g42 == 0) {
            goto lab_0x402e23;
        } else {
            // 0x402e07
            if (*err_num != 32) {
                goto lab_0x402e23;
            } else {
                goto lab_0x402e0c;
            }
        }
    }
  lab_0x402e0c:;
    int64_t result = function_408ee0((int64_t)g32); // 0x402e13
    if ((int32_t)result == 0) {
        // 0x402e1c
        return result;
    }
    // 0x402e5e
    _exit(g19);
    // UNREACHABLE
  lab_0x402e23:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402e2f
    if (g43 == 0) {
        // 0x402e69
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402e43
        error(0, *err_num, "%s: %s", (char *)function_404b80((int64_t)g43), v1);
    }
    // 0x402e5e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x402e80 - 0x402edb
int64_t function_402e80(int64_t a1, int64_t a2) {
    // 0x402e80
    int64_t v1; // 0x402e80
    char v2 = v1;
    int64_t v3 = a1; // 0x402e89
    int64_t v4 = a1; // 0x402e89
    char v5 = v2; // 0x402e89
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x402e94
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x402e90
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x402e9e
    if (v5 == 0) {
      lab_0x402eda:
        // 0x402eda
        return result;
    }
    int64_t v7 = v4; // 0x402ec8
    int64_t v8 = 0; // 0x402ec8
    int64_t v9; // 0x402e80
    int64_t v10; // 0x402eca
    char v11; // 0x402ece
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x402ec5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x402eca
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x402ec5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x402eba
    char v14 = *(char *)v13; // 0x402ebe
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
            // 0x402ec5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x402eca
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x402ec5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x402eb0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x402eda
    return result2;
}
// Address range: 0x402ee0 - 0x402f0b
int64_t function_402ee0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x402ee4
    int64_t result = len; // 0x402ee4
    if (len < 2) {
        // 0x402efa
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x402ef8
    while (*(char *)(v1 + str) == 47) {
        // 0x402f00
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x402efa
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x402efa
    return result2;
}
// Address range: 0x402f10 - 0x402f5b
int64_t function_402f10(int32_t a1, int64_t a2) {
    int32_t fd = open("/dev/null", O_RDONLY); // 0x402f26
    if (fd == a1) {
        // 0x402f35
        return 1;
    }
    // 0x402f2f
    if (fd < 0) {
        // 0x402f35
        return 0;
    }
    // 0x402f40
    close(fd);
    *__errno_location() = 9;
    return 0;
}
// Address range: 0x402f60 - 0x40310f
int64_t function_402f60(int64_t a1, int64_t * a2, int64_t stream) {
    int32_t v1 = fileno((struct _IO_FILE *)stream); // 0x402f7c
    int32_t * v2 = __errno_location(); // 0x402f83
    int64_t v3 = 0; // 0x402f60
    int64_t v4 = 0; // 0x402f60
    int64_t v5 = 0; // 0x402f60
    int64_t v6 = 0; // 0x402f60
    int64_t v7 = 0; // 0x402f60
    switch (v1) {
        case 1: {
            goto lab_0x402fd0;
        }
        case 2: {
            goto lab_0x402fba;
        }
        case 0: {
            goto lab_0x40300c;
        }
        default: {
            // 0x402fa5
            v3 = dup2(2, 2) != 2;
            goto lab_0x402fba;
        }
    }
  lab_0x402fd0:;
    // 0x402fd0
    int64_t v8; // 0x402f60
    int64_t v9; // 0x402f60
    int64_t v10; // 0x402f60
    int64_t v11; // 0x402f60
    int64_t v12; // 0x402f60
    int64_t v13; // 0x402f60
    int64_t v14; // 0x402fe4
    if (dup2(0, 0) == 0) {
        // 0x403050
        v10 = 0;
        v8 = 0;
        v14 = 0;
        if (v4 == 0) {
            goto lab_0x402ff4;
        } else {
            goto lab_0x403058;
        }
    } else {
        int64_t v15 = function_402f10(0, 0); // 0x402fdf
        v12 = v3;
        v11 = v4;
        v9 = 1;
        v13 = 0;
        if ((char)v15 == 0) {
            goto lab_0x40301f;
        } else {
            // 0x402fef
            v14 = v15 & 0xffffffff;
            v10 = v4;
            v8 = v14;
            if (v4 != 0) {
                goto lab_0x403058;
            } else {
                goto lab_0x402ff4;
            }
        }
    }
  lab_0x402fba:
    // 0x402fba
    v4 = dup2(1, 1) != 1;
    goto lab_0x402fd0;
  lab_0x40300c:
    // 0x40300c
    v12 = v5;
    v11 = v6;
    v9 = v7;
    v13 = function_407b50(a1, (int64_t)a2);
    goto lab_0x40301f;
  lab_0x40301f:;
    int64_t v16 = (int64_t)*v2; // 0x40301f
    int64_t v17 = v11; // 0x403024
    int64_t v18 = v13; // 0x403024
    int64_t v19 = v9; // 0x403024
    int64_t v20 = v16; // 0x403024
    int64_t v21 = v11; // 0x403024
    int64_t v22 = v13; // 0x403024
    int64_t v23 = v9; // 0x403024
    int64_t v24 = v16; // 0x403024
    if ((char)v12 != 0) {
        goto lab_0x4030c6;
    } else {
        goto lab_0x40302a;
    }
  lab_0x402ff4:
    // 0x402ff4
    v5 = v3;
    v6 = v10;
    v7 = v8;
    if ((char)v3 == 0) {
        goto lab_0x40300c;
    } else {
        int64_t v25 = function_402f10(2, 0); // 0x402ffd
        v5 = v25 & 0xffffffff;
        v6 = v10;
        v7 = v8;
        if ((char)v25 == 0) {
            // 0x4030c0
            v21 = v10;
            v22 = 0;
            v23 = v8;
            v24 = (int64_t)*v2;
            goto lab_0x4030c6;
        } else {
            goto lab_0x40300c;
        }
    }
  lab_0x403058:;
    int64_t v26 = function_402f10(1, 0); // 0x40305d
    v10 = v26 & 0xffffffff;
    v8 = v14;
    int64_t v27; // 0x402f60
    int64_t v28; // 0x402f60
    int64_t v29; // 0x402f60
    if ((char)v26 != 0) {
        goto lab_0x402ff4;
    } else {
        int64_t v30 = (int64_t)*v2; // 0x403068
        v27 = 0;
        v28 = v14;
        v29 = v30;
        if ((char)v3 != 0) {
            // 0x403100
            close(2);
            v27 = 0;
            v28 = v14;
            v29 = v30;
        }
        goto lab_0x403080;
    }
  lab_0x4030c6:
    // 0x4030c6
    close(2);
    v17 = v21;
    v18 = v22;
    v19 = v23;
    v20 = v24;
    goto lab_0x40302a;
  lab_0x40302a:
    // 0x40302a
    v27 = v18;
    v28 = v19;
    v29 = v20;
    int64_t result; // 0x402f60
    int64_t v31; // 0x402f60
    int64_t v32; // 0x402f60
    int64_t v33; // 0x402f60
    if ((char)v17 != 0) {
        goto lab_0x403080;
    } else {
        // 0x40302f
        result = v18;
        v32 = v20;
        v31 = v18;
        v33 = v20;
        if ((char)v19 != 0) {
            goto lab_0x40308f;
        } else {
            goto lab_0x403034;
        }
    }
  lab_0x403080:
    // 0x403080
    close(1);
    result = v27;
    v32 = v29;
    v31 = v27;
    v33 = v29;
    if ((char)v28 == 0) {
        goto lab_0x403034;
    } else {
        goto lab_0x40308f;
    }
  lab_0x403034:;
    int64_t result2 = 0; // 0x403037
    int64_t v34 = v32; // 0x403037
    if (result != 0) {
        // 0x403039
        return result;
    }
    goto lab_0x40309b;
  lab_0x40308f:
    // 0x40308f
    close(0);
    result2 = v31;
    v34 = v33;
    if (v31 != 0) {
        // 0x403039
        int64_t v35; // 0x402f60
        int64_t result3 = v35;
        return result3;
    }
    goto lab_0x40309b;
  lab_0x40309b:
    // 0x40309b
    *v2 = (int32_t)v34;
    // 0x403039
    return result2;
}
// Address range: 0x403110 - 0x4031a9
int64_t function_403110(int64_t str) {
    // 0x403110
    if (str == 0) {
        // 0x403189
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40311e
    int64_t result = (int64_t)found_char_pos; // 0x40311e
    if (found_char_pos == NULL) {
        // 0x403179
        g44 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403128
    if (v1 - str < 7) {
        // 0x403179
        g44 = str;
        g31 = str;
        return result;
    }
    // 0x403138
    bool v2; // 0x403110
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403110
    int64_t v5 = result - 6; // 0x403110
    int64_t v6 = 7; // 0x403146
    unsigned char v7 = *(char *)v5; // 0x403146
    char v8 = *(char *)v4; // 0x403146
    char v9 = v8; // 0x403146
    bool v10 = false; // 0x403146
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
    int64_t v12 = (int64_t)"lt-"; // 0x403150
    int64_t v13 = v1; // 0x403150
    int64_t v14 = 3; // 0x403150
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403179
        g44 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403162
    char v16 = *(char *)v12; // 0x403162
    char v17 = v16; // 0x403162
    bool v18 = false; // 0x403162
    while (v15 == v16) {
        // 0x403152
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
    int64_t v20 = v1; // 0x40316c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40316e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x403179
    g44 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x4031b0 - 0x4032a2
int64_t function_4031b0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4031c4
    int64_t result = (int64_t)v1; // 0x4031c4
    if (result != a1) {
        // 0x4031d1
        return result;
    }
    int64_t v2 = function_408fa0(); // 0x4031e0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403296
    if (v3 == 85) {
        // 0x4031f0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403288
            result2 = (int32_t)a2 != 9 ? (int64_t)&g2 : (int64_t)&g7;
            return result2;
        }
        char v4 = *v1; // 0x40321e
        int64_t result3 = v4 != 96 ? (int64_t)&g8 : (int64_t)&g11; // 0x40322b
        // 0x4031d1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403288
        result2 = (int32_t)a2 != 9 ? (int64_t)&g2 : (int64_t)&g7;
        return result2;
    }
    char v5 = *v1; // 0x40326d
    int64_t result4 = v5 != 96 ? (int64_t)&g9 : (int64_t)&g10; // 0x40327a
    // 0x4031d1
    return result4;
}
// Address range: 0x4032b0 - 0x403307
int64_t function_4032b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4032b0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4032f8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403307 - 0x4044d1
int64_t function_403307(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403351
    int64_t v3 = 0; // 0x403351
    int64_t v4; // 0x403307
    int64_t v5; // 0x403307
    int64_t v6; // 0x403307
    int64_t v7; // 0x403307
    int64_t v8; // 0x403307
    int64_t v9; // 0x403307
    int64_t v10; // 0x403307
    int64_t v11; // 0x403307
    int64_t v12; // 0x403307
    int64_t v13; // 0x403307
    int64_t v14; // 0x403307
    int64_t v15; // 0x403307
    int64_t v16; // 0x403307
    int64_t v17; // 0x403307
    int64_t v18; // 0x403307
    int64_t result; // 0x403307
    int64_t v19; // 0x403307
    int32_t wc; // bp+132, 0x403307
    int64_t ps; // bp+136, 0x403307
    char v20; // 0x4038c0
    int64_t v21; // 0x4038c0
    int64_t v22; // 0x403c68
    int64_t v23; // 0x403307
    int64_t v24; // 0x403c87
    int32_t v25; // 0x403307
    while (true) {
      lab_0x403358_2:
        // 0x403358
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403307
        int64_t v27; // 0x40338c
        while (true) {
          lab_0x403358:
            // 0x403358
            v5 = v26;
            bool v28 = v15 == v5; // 0x403363
            if (v15 == -1) {
                // 0x403365
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403373
            if (v28) {
                // break (via goto) -> 0x403ad8
                goto lab_0x403ad8;
            }
            // 0x40337c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g60 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40396b
                    if (v25 % 2 == 0) {
                        goto lab_0x4034b1;
                    }
                    // 0x403d8d
                    v26 = v5 + 1;
                    goto lab_0x403358;
                }
                case 7: {
                    goto lab_0x4034b1;
                }
                case 8: {
                    goto lab_0x4034b1;
                }
                case 9: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4034b1;
                }
                case 12: {
                    goto lab_0x4034b1;
                }
                case 13: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40347d;
                }
                case 36: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4034b1;
                }
                case 38: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4034b1;
                }
                case 44: {
                    goto lab_0x4034b1;
                }
                case 45: {
                    goto lab_0x4034b1;
                }
                case 46: {
                    goto lab_0x4034b1;
                }
                case 47: {
                    goto lab_0x4034b1;
                }
                case 48: {
                    goto lab_0x4034b1;
                }
                case 49: {
                    goto lab_0x4034b1;
                }
                case 50: {
                    goto lab_0x4034b1;
                }
                case 51: {
                    goto lab_0x4034b1;
                }
                case 52: {
                    goto lab_0x4034b1;
                }
                case 53: {
                    goto lab_0x4034b1;
                }
                case 54: {
                    goto lab_0x4034b1;
                }
                case 55: {
                    goto lab_0x4034b1;
                }
                case 56: {
                    goto lab_0x4034b1;
                }
                case 57: {
                    goto lab_0x4034b1;
                }
                case 58: {
                    goto lab_0x4034b1;
                }
                case 59: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4034b1;
                }
                case 66: {
                    goto lab_0x4034b1;
                }
                case 67: {
                    goto lab_0x4034b1;
                }
                case 68: {
                    goto lab_0x4034b1;
                }
                case 69: {
                    goto lab_0x4034b1;
                }
                case 70: {
                    goto lab_0x4034b1;
                }
                case 71: {
                    goto lab_0x4034b1;
                }
                case 72: {
                    goto lab_0x4034b1;
                }
                case 73: {
                    goto lab_0x4034b1;
                }
                case 74: {
                    goto lab_0x4034b1;
                }
                case 75: {
                    goto lab_0x4034b1;
                }
                case 76: {
                    goto lab_0x4034b1;
                }
                case 77: {
                    goto lab_0x4034b1;
                }
                case 78: {
                    goto lab_0x4034b1;
                }
                case 79: {
                    goto lab_0x4034b1;
                }
                case 80: {
                    goto lab_0x4034b1;
                }
                case 81: {
                    goto lab_0x4034b1;
                }
                case 82: {
                    goto lab_0x4034b1;
                }
                case 83: {
                    goto lab_0x4034b1;
                }
                case 84: {
                    goto lab_0x4034b1;
                }
                case 85: {
                    goto lab_0x4034b1;
                }
                case 86: {
                    goto lab_0x4034b1;
                }
                case 87: {
                    goto lab_0x4034b1;
                }
                case 88: {
                    goto lab_0x4034b1;
                }
                case 89: {
                    goto lab_0x4034b1;
                }
                case 90: {
                    goto lab_0x4034b1;
                }
                case 91: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4034b1;
                }
                case 94: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4034b1;
                }
                case 96: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4034b1;
                }
                case 98: {
                    goto lab_0x4034b1;
                }
                case 99: {
                    goto lab_0x4034b1;
                }
                case 100: {
                    goto lab_0x4034b1;
                }
                case 101: {
                    goto lab_0x4034b1;
                }
                case 102: {
                    goto lab_0x4034b1;
                }
                case 103: {
                    goto lab_0x4034b1;
                }
                case 104: {
                    goto lab_0x4034b1;
                }
                case 105: {
                    goto lab_0x4034b1;
                }
                case 106: {
                    goto lab_0x4034b1;
                }
                case 107: {
                    goto lab_0x4034b1;
                }
                case 108: {
                    goto lab_0x4034b1;
                }
                case 109: {
                    goto lab_0x4034b1;
                }
                case 110: {
                    goto lab_0x4034b1;
                }
                case 111: {
                    goto lab_0x4034b1;
                }
                case 112: {
                    goto lab_0x4034b1;
                }
                case 113: {
                    goto lab_0x4034b1;
                }
                case 114: {
                    goto lab_0x4034b1;
                }
                case 115: {
                    goto lab_0x4034b1;
                }
                case 116: {
                    goto lab_0x4034b1;
                }
                case 117: {
                    goto lab_0x4034b1;
                }
                case 118: {
                    goto lab_0x4034b1;
                }
                case 119: {
                    goto lab_0x4034b1;
                }
                case 120: {
                    goto lab_0x4034b1;
                }
                case 121: {
                    goto lab_0x4034b1;
                }
                case 122: {
                    goto lab_0x4034b1;
                }
                case 123: {
                    goto lab_0x403455;
                }
                case 124: {
                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403455;
                }
                case 126: {
                    goto lab_0x40347d;
                }
                default: {
                    goto lab_0x403855;
                }
            }
        }
      lab_0x403855:
        if (v23 != 1) {
            // 0x403bc0
            ps = 0;
            int64_t len = v15; // 0x403bd0
            if (v15 == -1) {
                // 0x403bd2
                len = strlen((char *)str);
            }
            // 0x403bfe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403c5f:
                // 0x403c5f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403c64
                int64_t v30 = v29 + str;
                v24 = function_408a20(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4041da_2;
                    }
                    case -1: {
                        goto lab_0x4041da_2;
                    }
                    case -2: {
                        // 0x4042bd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4042f7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4042fa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404307
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404300
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4041da
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4041da_2;
                    }
                    case 1: {
                        goto lab_0x403c30;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403cdc
                        char v34 = *(char *)v33; // 0x403ced
                        unsigned char v35; // 0x403307
                        if (v34 < 125) {
                            // 0x403cf8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403d0f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403ce0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403ced
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403cf8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403d0f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403ce0
                            v33++;
                        }
                        goto lab_0x403c30;
                    }
                }
            }
            goto lab_0x4041da_2;
        } else {
            // 0x4038a4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4034b1;
        }
    }
  lab_0x403ad8:
    // 0x403ad8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4043da
        if (v8 > result) {
            // 0x4043e3
            *(char *)(v12 + result) = 0;
        }
        // 0x403707
        return result;
    }
    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4034b1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4034c0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4036ca_2;
        }
    }
    int64_t v39 = result; // 0x4035c1
    char v40 = v20; // 0x4035c1
    int64_t v41 = v38; // 0x4035c1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4035c1
    int64_t v43 = v36; // 0x4035c1
    goto lab_0x40353d;
  lab_0x4036ca_2:
    // 0x403707
    return function_4032b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4041da_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4034b1;
    } else {
        uint64_t v49 = v46 + v5; // 0x403dae
        int64_t v50 = v5 + 1; // 0x403e91
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403e98
        char v52 = v20; // 0x403e98
        int64_t v53 = result; // 0x403e98
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403e61
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403e65
            int64_t v56 = v54 + 1; // 0x403e6a
            int64_t v57 = v51 + 1; // 0x403e91
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403e5c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403e61
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403e65
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
        goto lab_0x40353d;
    }
  lab_0x403c30:
    // 0x403c30
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403c4f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403c52
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4041da
        goto lab_0x4041da_2;
    }
    goto lab_0x403c5f;
  lab_0x40347d:
    // 0x40347d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4036ca_2;
    }
    goto lab_0x4034b1;
  lab_0x403455:;
    bool v60 = v15 == 1; // 0x403460
    if (v15 == -1) {
        // 0x403462
        v60 = *(char *)v1 == 0;
    }
    // 0x40346e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4034b1;
    } else {
        goto lab_0x40347d;
    }
  lab_0x40353d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403542
        *(char *)(v44 + v45) = v40;
    }
    // 0x403546
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403358_2;
}
// Address range: 0x4044e0 - 0x40467e
int64_t function_4044e0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4044e2
    int32_t * v3 = __errno_location(); // 0x4044fc
    int32_t v4 = v2; // 0x404511
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g21; // 0x404501
    int32_t v6 = *v3; // 0x40450b
    int64_t v7 = v5; // 0x404521
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if (v4 == 0x7fffffff) {
            // 0x404679
            function_405540(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x404530
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x404537
        int64_t v10; // 0x4044e0
        if (g21 == &g22) {
            int64_t v11 = function_405350(0, v9); // 0x40465a
            int128_t v12 = __asm_movdqa(*(int128_t *)&g22); // 0x40465f
            *(int64_t *)&g21 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_405350(v5, v9); // 0x40454b
            *(int64_t *)&g21 = v13;
            v10 = v13;
        }
        // 0x40455a
        v7 = v10;
        int32_t v14 = *(int32_t *)&g24; // 0x40455a
        int32_t v15 = v8; // 0x404561
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g24 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x404591
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40459b
    int64_t * v18 = (int64_t *)v16; // 0x40459e
    uint64_t v19 = *v18; // 0x40459e
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x4045a1
    int64_t result = *v20; // 0x4045a1
    int64_t v21; // 0x4044e0
    uint64_t v22 = function_4032b0(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x4045c4
    if (v19 > v22) {
        // 0x40463b
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x4045d7
    *v18 = v23;
    if (result != (int64_t)&g45) {
        // 0x4045e7
        free((int64_t *)result);
    }
    int64_t result2 = function_4052f0(v23); // 0x404601
    *v20 = result2;
    int64_t v24; // 0x4044e0
    function_4032b0(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x40463b
    *v3 = v6;
    return result2;
}
// Address range: 0x404680 - 0x4046b4
int64_t function_404680(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404687
    int64_t result = function_4054f0(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x4046a6
    return result;
}
// Address range: 0x4046c0 - 0x4046cf
int64_t function_4046c0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x4046cc
    return result;
}
// Address range: 0x4046d0 - 0x4046df
int64_t function_4046d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x4046d8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x4046e0 - 0x404713
int64_t function_4046e0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x4046f9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4046fe
    uint32_t v3 = *v2; // 0x4046fe
    uint32_t v4 = (int32_t)a2 % 32; // 0x404702
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404720 - 0x404733
int64_t function_404720(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x40472c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404740 - 0x40476b
int64_t function_404740(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x404748
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404765
        abort();
        // UNREACHABLE
    }
    // 0x40475c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x404770 - 0x4047e2
int64_t function_404770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x404792
    int32_t * v2 = __errno_location(); // 0x40479b
    uint32_t v3 = *(int32_t *)v1; // 0x4047bb
    int64_t result = function_4032b0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4047ca
    return result;
}
// Address range: 0x4047f0 - 0x4048d1
int64_t function_4047f0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x404812
    int32_t * v2 = __errno_location(); // 0x404818
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404837
    int32_t * v4 = (int32_t *)v1; // 0x40483a
    int64_t v5 = function_4032b0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404855
    int64_t v6 = v5 + 1; // 0x40485a
    int64_t result = function_4052f0(v6); // 0x40486f
    function_4032b0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4048b4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4048bd
    return result;
}
// Address range: 0x4048e0 - 0x4048ea
int64_t function_4048e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4048e0
    return function_4047f0(a1, a2, 0, a3);
}
// Address range: 0x4048f0 - 0x404985
int64_t function_4048f0(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x4048f0
    int64_t v2 = v1; // 0x4048f0
    int64_t v3 = v2; // 0x404904
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x404923
        free((int64_t *)*(int64_t *)v4);
        v3 = &g61;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404920
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g61;
        }
    }
    int64_t v6 = v3; // 0x40493d
    if (g22 != 0x60f3a0) {
        // 0x40493f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g45;
        v6 = &g61;
    }
    int64_t result = v6; // 0x404961
    if (g21 != &g22) {
        // 0x404963
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g61;
    }
    // 0x404976
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x404990 - 0x4049a1
int64_t function_404990(void) {
    // 0x404990
    int64_t v1; // 0x404990
    return function_4044e0(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x4049b0 - 0x4049ba
int64_t function_4049b0(void) {
    // 0x4049b0
    int64_t v1; // 0x4049b0
    return function_4044e0(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x4049c0 - 0x4049d6
int64_t function_4049c0(int64_t a1) {
    // 0x4049c0
    return function_4044e0(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x4049e0 - 0x4049f2
int64_t function_4049e0(int64_t a1, int64_t a2) {
    // 0x4049e0
    return function_4044e0(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x404a00 - 0x404a68
int64_t function_404a00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404a10
    return function_4044e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404a70 - 0x404ad4
int64_t function_404a70(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404a80
    return function_4044e0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404ae0 - 0x404aec
int64_t function_404ae0(int64_t a1, int64_t a2) {
    // 0x404ae0
    return function_404a00(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404af0 - 0x404aff
int64_t function_404af0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404af0
    return function_404a70(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404b00 - 0x404b70
int64_t function_404b00(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x404b0d
    int128_t v2 = __asm_movdqa(g47); // 0x404b15
    int128_t v3 = __asm_movdqa(g48); // 0x404b1d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404b32
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404b48
    uint32_t v6 = *v5; // 0x404b48
    uint32_t v7 = (int32_t)a3 % 32; // 0x404b4d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4044e0(0, a1, a2, &v4);
}
// Address range: 0x404b70 - 0x404b7d
int64_t function_404b70(int64_t a1, int64_t a2) {
    // 0x404b70
    return function_404b00(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404b80 - 0x404b91
int64_t function_404b80(int64_t a1) {
    // 0x404b80
    return function_404b00(a1, -1, 58);
}
// Address range: 0x404ba0 - 0x404baa
int64_t function_404ba0(void) {
    // 0x404ba0
    int64_t v1; // 0x404ba0
    return function_404b00(v1, v1, 58);
}
// Address range: 0x404bb0 - 0x404c1e
int64_t function_404bb0(int32_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404bca
    return function_4044e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404c20 - 0x404c8c
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x404c27
    int128_t v2 = __asm_movdqa(g47); // 0x404c2f
    int128_t v3 = __asm_movdqa(g48); // 0x404c37
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404c59
    if (a2 == 0 || a3 == 0) {
        // 0x404c87
        abort();
        // UNREACHABLE
    }
    // 0x404c6a
    return function_4044e0(a1, a4, a5, &v4);
}
// Address range: 0x404c90 - 0x404c99
int64_t function_404c90(void) {
    // 0x404c90
    int64_t v1; // 0x404c90
    return function_404c20(v1, v1, v1, v1, -1);
}
// Address range: 0x404ca0 - 0x404cb7
int64_t function_404ca0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ca0
    return function_404c20(0, a1, a2, a3, -1);
}
// Address range: 0x404cc0 - 0x404cd3
int64_t function_404cc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404cc0
    return function_404c20(0, a1, a2, a3, a4);
}
// Address range: 0x404ce0 - 0x404cea
int64_t function_404ce0(void) {
    // 0x404ce0
    int64_t v1; // 0x404ce0
    return function_4044e0(v1, v1, v1, &g20);
}
// Address range: 0x404cf0 - 0x404d02
int64_t function_404cf0(int64_t a1, int64_t a2) {
    // 0x404cf0
    return function_4044e0(0, a1, a2, &g20);
}
// Address range: 0x404d10 - 0x404d21
int64_t function_404d10(void) {
    // 0x404d10
    int64_t v1; // 0x404d10
    return function_4044e0(v1, v1, -1, &g20);
}
// Address range: 0x404d30 - 0x404d46
int64_t function_404d30(int64_t a1) {
    // 0x404d30
    return function_4044e0(0, a1, -1, &g20);
}
// Address range: 0x404d50 - 0x40512d
int64_t function_404d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404de8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404d6c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404d86
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404dcb
    if (a6 < 10) {
        // 0x404dda
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404ed2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405130 - 0x405150
int64_t function_405130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405130
    if (a5 == 0) {
        // 0x40514b
        return function_404d50(a1, a2, a3, a4, a5, 0, (int64_t)&g61);
    }
    int64_t v1 = 0; // 0x405137
    v1++;
    int64_t v2 = v1; // 0x405149
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405140
        v1++;
        v2 = v1;
    }
    // 0x40514b
    return function_404d50(a1, a2, a3, a4, a5, v2, (int64_t)&g61);
}
// Address range: 0x405150 - 0x4051b0
int64_t function_405150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405150
    int64_t v3 = &v2; // 0x405150
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405183
    int64_t v6; // 0x40516d
    int64_t * v7; // 0x40518b
    int64_t v8; // 0x40518b
    int64_t v9; // 0x405197
    if (v5 < 48) {
        // 0x405160
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4051a3
            break;
        }
    } else {
        // 0x40518b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4051a3
            break;
        }
    }
    int64_t v10 = 10; // 0x405181
    while (v4 != 9) {
        // 0x405179
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405160
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4051a3
                break;
            }
        } else {
            // 0x40518b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4051a3
                break;
            }
        }
        // 0x405179
        v10 = 10;
    }
    // 0x4051a3
    return function_404d50(a1, a2, a3, a4, v3, v10, (int64_t)&g61);
}
// Address range: 0x4051b0 - 0x40526c
int64_t function_4051b0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4051b0
    int64_t v1; // bp-168, 0x4051b0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4051b0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4051b0
    int64_t v8; // 0x4051b0
    int64_t v9; // bp-56, 0x4051b0
    int64_t v10; // 0x405215
    int64_t v11; // 0x405239
    if ((int32_t)v6 < 48) {
        // 0x405200
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405250
            break;
        }
    } else {
        // 0x405232
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405250
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40522a
    int64_t v13 = 10; // 0x40522a
    while (v5 != 9) {
        // 0x40522c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405200
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405250
                break;
            }
        } else {
            // 0x405232
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405250
                break;
            }
        }
        // 0x405222
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405250
    int64_t v14; // bp-136, 0x4051b0
    int64_t result = function_404d50(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g61); // 0x40525f
    return result;
}
// Address range: 0x405270 - 0x4052e4
int64_t function_405270(int64_t a1) {
    // 0x405270
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4052d3
    return fputs_unlocked(v1, g29);
}
// Address range: 0x4052f0 - 0x40530a
int64_t function_4052f0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4052f4
    if (size != 0 != (mem == NULL)) {
        // 0x405303
        return (int64_t)mem;
    }
    // 0x405305
    function_405540(size);
    // UNREACHABLE
}
// Address range: 0x405310 - 0x405331
int64_t function_405310(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405313
    int64_t v2 = v1; // 0x405313
    if (v2 < 0) {
        // 0x40532b
        function_405540(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405329
        return function_4052f0(v2);
    }
    // 0x40532b
    function_405540(v2);
    // UNREACHABLE
}
// Address range: 0x405340 - 0x405342
int64_t function_405340(void) {
    // 0x405340
    int64_t v1; // 0x405340
    return function_4052f0(v1);
}
// Address range: 0x405350 - 0x405386
int64_t function_405350(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405378
        free(v1);
        return (int32_t)&g61 ^ (int32_t)&g61;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405361
    if (a2 != 0 != (mem == NULL)) {
        // 0x405370
        return (int64_t)mem;
    }
    // 0x405381
    function_405540(a1);
    // UNREACHABLE
}
// Address range: 0x405390 - 0x4053b1
int64_t function_405390(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405393
    int64_t v2 = v1; // 0x405393
    if (v2 < 0) {
        // 0x4053ab
        function_405540(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4053a9
        return function_405350(a1, v2);
    }
    // 0x4053ab
    function_405540(a1);
    // UNREACHABLE
}
// Address range: 0x4053c0 - 0x405446
int64_t function_4053c0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40541b
            function_405540(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405350(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405403
    if (a2 == 0) {
        // 0x405428
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405408
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40541b
        function_405540(a1);
        // UNREACHABLE
    }
    // 0x4053ea
    *(int64_t *)a2 = v2;
    return function_405350(a1, v2 * a3);
}
// Address range: 0x405450 - 0x4054a0
int64_t function_405450(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405450
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40549a
            function_405540(a1);
            // UNREACHABLE
        }
        // 0x405472
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405350(a1, v1);
    }
    if (a2 == 0) {
        // 0x405485
        *(int64_t *)a2 = 128;
        return function_405350(0, 128);
    }
    // 0x405498
    if (a2 < 0) {
        // 0x40549a
        function_405540(a1);
        // UNREACHABLE
    }
    // 0x405472
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405350(a1, v1);
}
// Address range: 0x4054a0 - 0x4054b7
int64_t function_4054a0(int64_t a1, int64_t a2) {
    // 0x4054a0
    return (int64_t)memset((int64_t *)function_4052f0(a1), 0, (int32_t)a1);
}
// Address range: 0x4054c0 - 0x4054ee
int64_t function_4054c0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4054c7
    if ((int64_t)v1 < 0) {
        // 0x4054e9
        function_405540(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4054e9
        function_405540(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4054da
    if (mem != NULL) {
        // 0x4054e4
        return (int64_t)mem;
    }
    // 0x4054e9
    function_405540(nmemb);
    // UNREACHABLE
}
// Address range: 0x4054f0 - 0x405518
int64_t function_4054f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4052f0(a2); // 0x4054ff
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405520 - 0x405533
int64_t function_405520(int64_t str) {
    // 0x405520
    return function_4054f0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405540 - 0x405571
int64_t function_405540(int64_t a1) {
    // 0x405540
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405580 - 0x405598
int64_t function_405580(void) {
    // 0x405580
    int64_t str; // 0x405580
    char * v1 = strndup((char *)str, (int32_t)str); // 0x405584
    if (v1 != NULL) {
        // 0x40558e
        return (int64_t)v1;
    }
    // 0x405593
    function_405540(str);
    // UNREACHABLE
}
// Address range: 0x4055a0 - 0x40561b
int64_t function_4055a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4055a7
    if (fileno(stream) < 0) {
        // 0x405607
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4055ba
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4055eb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405607
            return fclose(stream);
        }
    }
    // 0x4055bc
    if ((int32_t)function_405620(a1, v1) == 0) {
        // 0x405607
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4055c8
    int32_t v3 = *v2; // 0x4055d0
    int64_t result = fclose(stream); // 0x4055de
    if (v3 != 0) {
        // 0x405610
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4055e0
    return result;
}
// Address range: 0x405620 - 0x405660
int64_t function_405620(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40563a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40563a
        return fflush(stream);
    }
    // 0x405648
    function_407bf0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405660 - 0x405759
int64_t function_405660(int64_t result) {
    int32_t v1 = *(int32_t *)(result + 4); // 0x405670
    int32_t v2 = v1; // 0x405675
    if (v1 == 0) {
      lab_0x4056a4_3:
        // 0x4056a4
        return result;
    }
    int64_t v3 = result; // 0x405675
    int64_t v4; // 0x405660
    int64_t v5; // 0x405660
    int32_t v6; // 0x405660
    int64_t v7; // 0x405660
    while (true) {
      lab_0x405677:
        // 0x405677
        v5 = v3;
        int32_t v8 = v2;
        while (v8 != 91) {
            if (v8 < 65) {
                if ((1 << (int64_t)((v8 + 31) % 64) & 0xc0000601) != 0) {
                    int64_t v9 = v5 + 8; // 0x40568a
                    if (*(int32_t *)v9 == 40) {
                        // 0x405700
                        v4 = function_405660(v9);
                        goto lab_0x405670;
                    }
                }
                if (v8 == 41) {
                    // 0x405750
                    return v5 + 8;
                }
            }
            int32_t v10 = *(int32_t *)(v5 + 8); // 0x40569d
            if (v10 == 0) {
                return result;
            }
            v5 += 4;
            v8 = v10;
        }
        int32_t v11 = g49; // 0x4056b8
        if (g49 == 0) {
            int32_t v12 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x405738
            g49 = v12;
            v11 = v12;
        }
        int64_t v13 = v5 + 8; // 0x4056ba
        int32_t v14 = *(int32_t *)v13; // 0x4056ba
        if (v14 == 33) {
            goto lab_0x405718;
        } else {
            // 0x4056c2
            v6 = v14;
            v7 = v13;
            if (v11 < 0 == v14 == 94) {
                goto lab_0x405718;
            } else {
                goto lab_0x4056d5;
            }
        }
    }
  lab_0x4056a4_3:
    // 0x4056a4
    return result;
  lab_0x405718:;
    int64_t v15 = v5 + 12; // 0x405718
    v6 = *(int32_t *)v15;
    v7 = v15;
    goto lab_0x4056d5;
  lab_0x4056d5:;
    int64_t v16 = v7;
    int32_t v17 = v6; // 0x4056d8
    int64_t v18 = v16; // 0x4056d8
    if (v6 == 93) {
        int64_t v19 = v16 + 4; // 0x4056da
        v17 = *(int32_t *)v19;
        v18 = v19;
    }
    int64_t v20 = v18; // 0x4056f4
    int32_t v21 = v17; // 0x4056f4
    v4 = v18;
    if (v17 != 93) {
        if (v21 == 0) {
            // break (via goto) -> 0x4056a4
            goto lab_0x4056a4_3;
        }
        int64_t v22 = v20 + 4;
        int32_t v23 = *(int32_t *)v22; // 0x4056e8
        v20 = v22;
        v4 = v22;
        while (v23 != 93) {
            // 0x4056fa
            if (v23 == 0) {
                // break (via goto) -> 0x4056a4
                goto lab_0x4056a4_3;
            }
            // 0x4056e8
            v22 = v20 + 4;
            v23 = *(int32_t *)v22;
            v20 = v22;
            v4 = v22;
        }
    }
    goto lab_0x405670;
  lab_0x405670:
    // 0x405670
    v3 = v4;
    v2 = *(int32_t *)(v3 + 4);
    if (v2 == 0) {
        // break -> 0x4056a4
        goto lab_0x4056a4_3;
    }
    goto lab_0x405677;
}
// Address range: 0x405760 - 0x405859
int64_t function_405760(int64_t result) {
    char v1 = *(char *)(result + 1); // 0x405770
    char v2 = v1; // 0x405776
    if (v1 == 0) {
      lab_0x4057a6_3:
        // 0x4057a6
        return result;
    }
    int64_t v3 = result; // 0x405776
    int64_t v4; // 0x405760
    int64_t v5; // 0x405760
    char v6; // 0x405760
    int64_t v7; // 0x405760
    while (true) {
      lab_0x405778:
        // 0x405778
        v5 = v3;
        char v8 = v2;
        while (v8 != 91) {
            if (v8 < 65) {
                if ((1 << (int64_t)((v8 + 31) % 64) & 0xc0000601) != 0) {
                    int64_t v9 = v5 + 2; // 0x40578b
                    if (*(char *)v9 == 40) {
                        // 0x405808
                        v4 = function_405760(v9);
                        goto lab_0x405770;
                    }
                }
                if (v8 == 41) {
                    // 0x405850
                    return v5 + 2;
                }
            }
            char v10 = *(char *)(v5 + 2); // 0x40579e
            if (v10 == 0) {
                return result;
            }
            v5++;
            v8 = v10;
        }
        int32_t v11 = g49; // 0x4057b8
        if (g49 == 0) {
            int32_t v12 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x405840
            g49 = v12;
            v11 = v12;
        }
        int64_t v13 = v5 + 2; // 0x4057ba
        char v14 = *(char *)v13; // 0x4057ba
        if (v14 == 33) {
            goto lab_0x405820;
        } else {
            // 0x4057c3
            v6 = v14;
            v7 = v13;
            if (v11 < 0 == v14 == 94) {
                goto lab_0x405820;
            } else {
                goto lab_0x4057d6;
            }
        }
    }
  lab_0x4057a6_3:
    // 0x4057a6
    return result;
  lab_0x405820:;
    int64_t v15 = v5 + 3; // 0x405820
    v6 = *(char *)v15;
    v7 = v15;
    goto lab_0x4057d6;
  lab_0x4057d6:;
    int64_t v16 = v7;
    char v17 = v6; // 0x4057d9
    int64_t v18 = v16; // 0x4057d9
    if (v6 == 93) {
        int64_t v19 = v16 + 1; // 0x4057db
        v17 = *(char *)v19;
        v18 = v19;
    }
    int64_t v20 = v18; // 0x4057f5
    char v21 = v17; // 0x4057f5
    v4 = v18;
    if (v17 != 93) {
        if (v21 == 0) {
            // break (via goto) -> 0x4057a6
            goto lab_0x4057a6_3;
        }
        int64_t v22 = v20 + 1;
        char v23 = *(char *)v22; // 0x4057e8
        v20 = v22;
        v4 = v22;
        while (v23 != 93) {
            // 0x4057fb
            if (v23 == 0) {
                // break (via goto) -> 0x4057a6
                goto lab_0x4057a6_3;
            }
            // 0x4057e8
            v22 = v20 + 1;
            v23 = *(char *)v22;
            v20 = v22;
            v4 = v22;
        }
    }
    goto lab_0x405770;
  lab_0x405770:
    // 0x405770
    v3 = v4;
    v2 = *(char *)(v3 + 1);
    if (v2 == 0) {
        // break -> 0x4057a6
        goto lab_0x4057a6_3;
    }
    goto lab_0x405778;
}
// Address range: 0x405860 - 0x405df0
int64_t function_405860(int64_t a1, int64_t wstr, uint64_t a3, uint64_t a4, uint64_t a5, uint32_t a6) {
    int64_t v1 = 0; // bp-64, 0x40588d
    int32_t v2 = wcslen((int32_t *)wstr); // 0x405895
    int64_t v3 = wstr + 4; // 0x40589e
    int32_t v4 = *(int32_t *)v3; // 0x40589e
    if (v4 == 0) {
        // 0x405925
        return 0xffffffff;
    }
    int64_t v5 = 0x100000000 * a1 >> 32; // 0x405877
    int64_t v6 = a5 % 256;
    int64_t v7 = v2; // 0x405895
    int32_t v8 = v4; // 0x4058c3
    int64_t v9 = &v1; // 0x4058c3
    int64_t v10; // bp-136, 0x405860
    int64_t v11 = &v10; // 0x4058c3
    int64_t v12 = v3; // 0x4058c3
    int64_t v13 = 0; // 0x4058c3
    int64_t v14 = v3; // 0x4058c3
    int64_t v15; // 0x405860
    int64_t v16; // 0x405860
    int64_t wstr2; // 0x405860
    int64_t v17; // 0x405860
    int32_t v18; // 0x405860
    int64_t v19; // 0x405860
    int64_t v20; // 0x405860
    int64_t v21; // 0x405860
    int64_t v22; // 0x405860
    int64_t v23; // 0x405860
    while (true) {
      lab_0x4058e2:
        // 0x4058e2
        v22 = v12;
        v23 = v11;
        v19 = v9;
        wstr2 = v14;
        v15 = v13;
        int32_t v24 = v8;
        while (v24 != 91) {
            if (v24 >= 65) {
                // 0x4058c8
                v16 = v15;
                v17 = wstr2;
                if (v24 == 124 == v15 == 0) {
                    // 0x4059c0
                    v21 = v7;
                    if ((int32_t)v5 < 65) {
                        goto lab_0x4059dd;
                    } else {
                        // 0x4059cf
                        v21 = (wstr2 - v22 >> 2) + 1;
                        goto lab_0x4059dd;
                    }
                } else {
                    goto lab_0x4058d6;
                }
            }
            if ((1 << (int64_t)((v24 + 31) % 64) & 0xc0000601) != 0) {
                int64_t v25 = wstr2 + 4; // 0x4058f5
                if (*(int32_t *)v25 == 40) {
                    // 0x4058fc
                    v16 = v15 + 1;
                    v17 = v25;
                    goto lab_0x4058d6;
                }
            }
            // 0x4058fc
            v16 = v15;
            v17 = wstr2;
            if (v24 != 41) {
                goto lab_0x4058d6;
            }
            if (v15 == 0) {
                // break (via goto) -> 0x405a86
                goto lab_0x405a86;
            }
            int64_t v26 = wstr2 + 4; // 0x40590e
            int32_t v27 = *(int32_t *)v26; // 0x40590e
            if (v27 == 0) {
                // 0x405925
                return 0xffffffff;
            }
            wstr2 = v26;
            v15--;
            v24 = v27;
        }
        int32_t v28 = g49; // 0x405958
        if (g49 == 0) {
            int32_t v29 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x405a78
            g49 = v29;
            v28 = v29;
        }
        int64_t v30 = wstr2 + 4; // 0x40595e
        int32_t v31 = *(int32_t *)v30; // 0x40595e
        if (v31 == 33) {
            goto lab_0x4059b0;
        } else {
            // 0x405967
            v18 = v31;
            v20 = v30;
            if (v28 < 0 == v31 == 94) {
                goto lab_0x4059b0;
            } else {
                goto lab_0x40597a;
            }
        }
    }
  lab_0x405a86:;
    int64_t v32 = v7; // 0x405a96
    if ((int32_t)v5 >= 65) {
        // 0x405a98
        v32 = (wstr2 - v22 >> 2) + 1;
    }
    int64_t v33 = 4 * v32 + 15 & -8; // 0x405ab6
    if (v32 < 0x4000000000000000 != v33 < 0x1f3f) {
        // 0x405925
        return 0xffffffff;
    }
    int64_t v34 = v23 + 15 - (v33 + 23 & -16) & -16; // 0x405af8
    int32_t * v35 = wmempcpy((int32_t *)(v34 | 8), (int32_t *)v22, (int32_t)((wstr2 - v22) / 4)); // 0x405b03
    *v35 = 0;
    *(int64_t *)v19 = v34;
    int64_t v36 = v1; // 0x405b12
    *(int64_t *)v34 = 0;
    if (v36 == 0) {
        // 0x405dca
        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_wmatch");
        return &g61;
    }
    // 0x405b26
    if (*(int32_t *)(wstr2 - 4) != 41) {
        // 0x405db1
        __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_wmatch");
        // 0x405dca
        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_wmatch");
        return &g61;
    }
    int64_t v37 = v5 + 0xffffffdf; // 0x405b35
    g57 = v37 & 0xffffffff;
    int64_t v38; // 0x405860
    int64_t v39; // 0x405860
    int64_t result2; // 0x405860
    int64_t v40; // 0x405860
    int32_t v41; // 0x405c85
    switch ((int32_t)v37) {
        case 0: {
            // 0x405c5a
            if (a3 > a4) {
                // 0x405925
                return 1;
            }
            // 0x405c68
            v41 = a6 % 2 != 0 ? a6 : a6 & -5;
            v38 = a3;
            while (true) {
              lab_0x405c88:;
                int64_t v42 = v36; // 0x405c8c
                while ((int32_t)function_405df0(v42 + 8, a3, v38, v6, v41) != 0) {
                    // 0x405ca9
                    v42 = *(int64_t *)v42;
                    if (v42 == 0) {
                        // 0x405cb2
                        v40 = v6;
                        if (v39 == a3) {
                            goto lab_0x405cd2;
                        } else {
                            // 0x405cbb
                            v40 = (a6 & 5) == 5 == *(int32_t *)(v39 - 4) == 47;
                            goto lab_0x405cd2;
                        }
                    }
                }
                goto lab_0x405ced;
            }
            int64_t result = result2;
            return result;
        }
        case 9: {
            // 0x405b4b
            if ((int32_t)function_405df0(wstr2, a3, a4, v6, a6) == 0) {
                // 0x405925
                return 0;
            }
        }
        case 10: {
            int64_t v43 = v36; // 0x405b94
            int64_t v44; // 0x405860
            int64_t v45; // 0x405860
            int64_t v46; // 0x405860
            int64_t v47; // 0x405860
            int32_t v48; // 0x405b84
            int64_t v49; // 0x405b88
            int64_t v50; // 0x405c28
            int64_t v51; // 0x405c0b
            int32_t * v52; // 0x405baf
            int32_t v53; // 0x405baf
            int32_t v54; // 0x405bdc
            if (a3 <= a4) {
                if ((int32_t)function_405df0(v45 + 8, a3, v46, v6, v48) == 0) {
                    if (v47 != a3) {
                        // 0x405bad
                        v52 = (int32_t *)(v47 - 4);
                        v53 = *v52;
                        result2 = 0;
                        if ((int32_t)function_405df0(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                            return result2;
                        }
                        // 0x405bda
                        v54 = *v52;
                        result2 = 0;
                        if ((int32_t)function_405df0(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                            return result2;
                        }
                    } else {
                        // 0x405c3a
                        result2 = 0;
                        if ((int32_t)function_405df0(wstr2, a3, a4, v6, v48) == 0) {
                            return result2;
                        }
                    }
                    int64_t v55 = v1; // 0x405c07
                    v44 = v55;
                }
                // 0x405c0b
                v51 = v46 + 4;
                v46 = v51;
                while (v51 <= a4) {
                    // 0x405c18
                    v47 = v46;
                    v50 = function_405df0(v45 + 8, a3, v47, v6, v48);
                    v44 = v45;
                    if ((int32_t)v50 == 0) {
                        if (v47 != a3) {
                            // 0x405bad
                            v52 = (int32_t *)(v47 - 4);
                            v53 = *v52;
                            result2 = 0;
                            if ((int32_t)function_405df0(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                                return result2;
                            }
                            // 0x405bda
                            v54 = *v52;
                            result2 = 0;
                            if ((int32_t)function_405df0(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                                return result2;
                            }
                        } else {
                            // 0x405c3a
                            result2 = 0;
                            if ((int32_t)function_405df0(wstr2, a3, a4, v6, v48) == 0) {
                                return result2;
                            }
                        }
                        // 0x405c07
                        v44 = v1;
                    }
                    // 0x405c0b
                    v51 = v47 + 4;
                    v45 = v44;
                    v46 = v51;
                }
            }
            // 0x405d77
            v43 = *(int64_t *)v43;
            v1 = v43;
            while (v43 != 0) {
                // 0x405b98
                if (a3 <= a4) {
                    v47 = v46;
                    v50 = function_405df0(v45 + 8, a3, v47, v6, v48);
                    v44 = v45;
                    if ((int32_t)v50 == 0) {
                        if (v47 != a3) {
                            // 0x405bad
                            v52 = (int32_t *)(v47 - 4);
                            v53 = *v52;
                            result2 = 0;
                            if ((int32_t)function_405df0(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                                return result2;
                            }
                            // 0x405bda
                            v54 = *v52;
                            result2 = 0;
                            if ((int32_t)function_405df0(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                                return result2;
                            }
                        } else {
                            // 0x405c3a
                            result2 = 0;
                            if ((int32_t)function_405df0(wstr2, a3, a4, v6, v48) == 0) {
                                return result2;
                            }
                        }
                        // 0x405c07
                        v44 = v1;
                    }
                    // 0x405c0b
                    v51 = v47 + 4;
                    v45 = v44;
                    v46 = v51;
                    while (v51 <= a4) {
                        // 0x405c18
                        v47 = v46;
                        v50 = function_405df0(v45 + 8, a3, v47, v6, v48);
                        v44 = v45;
                        if ((int32_t)v50 == 0) {
                            if (v47 != a3) {
                                // 0x405bad
                                v52 = (int32_t *)(v47 - 4);
                                v53 = *v52;
                                result2 = 0;
                                if ((int32_t)function_405df0(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                                    return result2;
                                }
                                // 0x405bda
                                v54 = *v52;
                                result2 = 0;
                                if ((int32_t)function_405df0(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                                    return result2;
                                }
                            } else {
                                // 0x405c3a
                                result2 = 0;
                                if ((int32_t)function_405df0(wstr2, a3, a4, v6, v48) == 0) {
                                    return result2;
                                }
                            }
                            // 0x405c07
                            v44 = v1;
                        }
                        // 0x405c0b
                        v51 = v47 + 4;
                        v45 = v44;
                        v46 = v51;
                    }
                }
                // 0x405d77
                v43 = *(int64_t *)v43;
                v1 = v43;
            }
            // 0x405925
            return 1;
        }
        case 30: {
            // 0x405d51
            if ((int32_t)function_405df0(wstr2, a3, a4, v6, a6) == 0) {
                // 0x405925
                return 0;
            }
        }
        case 31: {
            int32_t v56 = a6 % 2 != 0 ? a6 : a6 & -5; // 0x405d13
            int64_t v57 = v36; // 0x405d16
            int32_t * v58 = wcscat((int32_t *)(v57 + 8), (int32_t *)wstr2); // 0x405d2c
            result2 = 0;
            while ((int32_t)function_405df0((int64_t)v58, a3, a4, v6, v56) != 0) {
                // 0x405d18
                v57 = *(int64_t *)v57;
                v1 = v57;
                result2 = 1;
                if (v57 == 0) {
                    // break -> 0x405925
                    break;
                }
                v58 = wcscat((int32_t *)(v57 + 8), (int32_t *)wstr2);
                result2 = 0;
            }
          lab_0x405925_4:
            // 0x405925
            return result2;
        }
        default: {
            // 0x405d98
            __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 1197, "ext_wmatch");
            // 0x405db1
            __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_wmatch");
            // 0x405dca
            __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_wmatch");
            return &g61;
        }
    }
  lab_0x4058d6:;
    int64_t v59 = v17 + 4; // 0x4058d6
    int32_t v60 = *(int32_t *)v59; // 0x4058da
    v9 = v19;
    v11 = v23;
    v12 = v22;
    v13 = v16;
    v14 = v59;
    goto lab_0x4058de;
  lab_0x405ced:;
    int64_t v67 = v38 + 4; // 0x405ced
    v38 = v67;
    if (v67 > a4) {
        // break -> 0x405925
        goto lab_0x405925_4;
    }
    goto lab_0x405c88;
  lab_0x4059b0:;
    int64_t v68 = wstr2 + 8; // 0x4059b0
    v18 = *(int32_t *)v68;
    v20 = v68;
    goto lab_0x40597a;
  lab_0x40597a:;
    int64_t v69 = v20;
    int32_t v70 = v18; // 0x40597d
    int64_t v71 = v69; // 0x40597d
    if (v18 == 93) {
        int64_t v72 = v69 + 4; // 0x40597f
        v70 = *(int32_t *)v72;
        v71 = v72;
    }
    int64_t v73 = v71 + 4; // 0x40599a
    int64_t v74 = v73; // 0x4059a1
    int32_t v75 = v70; // 0x4059a1
    if (v70 != 93) {
        while (v75 != 0) {
            int32_t v76 = *(int32_t *)v74; // 0x405994
            v74 += 4;
            v75 = v76;
            if (v76 == 93) {
                // break -> 0x4059a3
                break;
            }
        }
        // 0x405925
        return 0xffffffff;
    }
    // 0x4059a3
    v60 = *(int32_t *)v73;
    v9 = v19;
    v11 = v23;
    v12 = v22;
    v13 = v15;
    v14 = v73;
    goto lab_0x4058de;
  lab_0x4058de:
    // 0x4058de
    v8 = v60;
    if (v8 == 0) {
        // 0x405925
        return 0xffffffff;
    }
    goto lab_0x4058e2;
  lab_0x4059dd:;
    int64_t v61 = 4 * v21 + 15 & -8; // 0x4059e5
    result2 = 0xffffffff;
    if (v21 < 0x4000000000000000 == v61 < 0x1f3f) {
        int64_t v62 = v23 - (v61 + 23 & -16); // 0x405a1b
        int64_t v63 = v62 + 15 & -16; // 0x405a27
        int32_t * v64 = wmempcpy((int32_t *)(v63 | 8), (int32_t *)v22, (int32_t)((wstr2 - v22) / 4)); // 0x405a2f
        int64_t v65 = wstr2 + 4; // 0x405a34
        *v64 = 0;
        *(int64_t *)v63 = 0;
        *(int64_t *)v19 = v63;
        v60 = *(int32_t *)v65;
        v9 = v63;
        v11 = v62;
        v12 = v65;
        v13 = 0;
        v14 = v65;
        goto lab_0x4058de;
    } else {
        goto lab_0x405925_4;
    }
  lab_0x405cd2:
    // 0x405cd2
    result2 = 0;
    int64_t v66; // 0x405860
    if ((int32_t)function_405df0(v66, v39, a4, v40, v41) == 0) {
        goto lab_0x405925_4;
    } else {
        goto lab_0x405ced;
    }
}
// Address range: 0x405df0 - 0x4068cc
int64_t function_405df0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint32_t a5) {
    int32_t v1 = a1;
    int64_t v2 = a2; // 0x405e1b
    int64_t result; // 0x405df0
    if (v1 == 0) {
      lab_0x40608c:
        // 0x40608c
        if (v2 == a3) {
            // 0x4060a5
            return 0;
        }
        // 0x406095
        result = 1;
        if ((a5 & 8) != 0) {
            // 0x4067c9
            result = *(int32_t *)v2 != 47;
        }
      lab_0x4060a5_3:
        // 0x4060a5
        return result;
    }
    int64_t v3 = a5;
    uint32_t v4 = a5 % 2;
    int64_t v5 = a1; // 0x405e42
    int64_t v6 = a2; // 0x405e42
    int64_t v7 = a4 & 0xffffffff; // 0x405e42
    int32_t v8 = v1; // 0x405e42
    int64_t v9; // 0x405df0
    int64_t v10; // 0x405df0
    int32_t v11; // 0x405df0
    int32_t v12; // 0x405df0
    int32_t v13; // 0x405df0
    int64_t v14; // 0x405df0
    int64_t wc7; // 0x405df0
    int32_t v15; // 0x405df0
    int64_t v16; // 0x405df0
    int64_t v17; // 0x405df0
    int64_t v18; // 0x405df0
    int64_t v19; // 0x405df0
    int32_t * wc4; // 0x405df0
    int32_t wc6; // 0x405eeb
    while (true) {
      lab_0x405e45:;
        int32_t wc = v8;
        int64_t v20 = v7;
        wc7 = v6;
        v17 = v5;
        int64_t v21 = v20; // 0x405e48
        int32_t v22 = wc; // 0x405e48
        if ((v3 & 16) != 0) {
            // 0x405e4a
            v21 = v20 % 256;
            v22 = towlower(wc);
        }
        // 0x405e60
        v16 = v17 + 4;
        v11 = v22;
        v9 = v21;
        g56 = v11 - 33;
        switch (v11) {
            case 33: {
                goto lab_0x4060c0;
            }
            case 42: {
                goto lab_0x406100;
            }
            case 43: {
                goto lab_0x4060c0;
            }
            case 47: {
                if ((a5 & 5) == 5) {
                    // 0x406428
                    if (wc7 == a3) {
                        // 0x4060a5
                        return 1;
                    }
                    // 0x406433
                    v14 = v16;
                    v7 = 1;
                    if (*(int32_t *)wc7 != 47) {
                        // 0x4060a5
                        return 1;
                    }
                    goto lab_0x40606d;
                } else {
                    goto lab_0x40604b;
                }
            }
            case 63: {
                int64_t v23 = v9; // 0x406015
                if ((a5 & 32) != 0) {
                    // 0x406566
                    v23 = v9;
                    if (*(int32_t *)v16 == 40) {
                        int64_t v24 = v9 % 256; // 0x40657a
                        int64_t v25 = function_405860(63, v16, wc7, a3, v24, a5); // 0x406590
                        v23 = v24;
                        result = v25;
                        if ((int32_t)v25 != -1) {
                            // 0x4060a5
                            return result;
                        }
                    }
                }
                // 0x40601b
                if (wc7 == a3) {
                    // 0x4060a5
                    return 1;
                }
                int32_t v26 = *(int32_t *)wc7; // 0x406022
                if (v26 == 47) {
                    // 0x406450
                    v14 = v16;
                    v7 = 0;
                    if (v4 != 0) {
                        // 0x4060a5
                        return 1;
                    }
                } else {
                    unsigned char v27 = (char)(v26 == 46) & (char)v23; // 0x406033
                    if (v27 != 0) {
                        // 0x4060a5
                        return 1;
                    }
                    // 0x406038
                    v14 = v16;
                    v7 = v27;
                }
                goto lab_0x40606d;
            }
            case 64: {
                goto lab_0x4060c0;
            }
            case 91: {
                int32_t v28 = g49; // 0x405eda
                int64_t v29 = v9; // 0x405eda
                if (g49 == 0) {
                    // 0x406470
                    v28 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1;
                    g49 = v28;
                    v29 = v9 % 256;
                }
                // 0x405ee0
                if (wc7 == a3) {
                    // 0x4060a5
                    return 1;
                }
                int32_t v30 = v28; // 0x405f15
                wc4 = (int32_t *)wc7;
                wc6 = *wc4;
                if (wc6 == 46) {
                    // 0x406460
                    if ((char)v29 != 0) {
                        // 0x4060a5
                        return 1;
                    }
                } else {
                    // 0x405ef8
                    if (wc6 == 47 == (v4 != 0)) {
                        // 0x4060a5
                        return 1;
                    }
                }
                int32_t v31 = *(int32_t *)v16; // 0x405f09
                if (v31 == 33) {
                    // 0x406400
                    v15 = 1;
                    v10 = v17 + 8;
                    goto lab_0x405f35;
                } else {
                    // 0x405f15
                    v15 = 0;
                    v10 = v16;
                    if (v30 < 0 == v31 == 94) {
                        // 0x406400
                        v15 = 1;
                        v10 = v17 + 8;
                        goto lab_0x405f35;
                    } else {
                        goto lab_0x405f35;
                    }
                }
            }
            case 92: {
                if ((v3 & 2) != 0) {
                    // 0x4062a0
                    if (wc7 == a3) {
                        // 0x4060a5
                        return 1;
                    }
                    // 0x4062ab
                    v18 = v16;
                    v12 = v11;
                    v19 = v16;
                    v13 = v11;
                    if ((v3 & 16) != 0) {
                        goto lab_0x405eb6;
                    } else {
                        goto lab_0x4062b4;
                    }
                } else {
                    int32_t wc2 = *(int32_t *)v16; // 0x405e81
                    if (wc2 == 0) {
                        // 0x4060a5
                        return 1;
                    }
                    int64_t v32 = v17 + 8; // 0x405e85
                    if ((v3 & 16) == 0) {
                        // 0x4064a0
                        v19 = v32;
                        v13 = wc2;
                        if (wc7 == a3) {
                            // 0x4060a5
                            return 1;
                        }
                        goto lab_0x4062b4;
                    } else {
                        // 0x405ea0
                        v18 = v32;
                        v12 = towlower(wc2);
                        if (wc7 == a3) {
                            // 0x4060a5
                            return 1;
                        }
                        goto lab_0x405eb6;
                    }
                }
            }
            default: {
                goto lab_0x40604b;
            }
        }
    }
  lab_0x406100:;
    int64_t v33 = v9; // 0x406119
    int64_t result2; // 0x405df0
    if ((a5 & 32) != 0) {
        // 0x406524
        v33 = v9;
        if (*(int32_t *)v16 == 40) {
            int64_t v34 = v9 % 256; // 0x40653f
            int64_t v35 = function_405860(42, v16, wc7, a3, v34, a5); // 0x40654d
            v33 = v34;
            if ((int32_t)v35 != -1) {
                // 0x4060a5
                result2 = result;
                return result2;
            }
        }
    }
    // 0x40611f
    if (wc7 != a3) {
        // 0x406124
        if (*(int32_t *)wc7 == 46) {
            // 0x406129
            if ((char)v33 != 0) {
                // 0x4060a5
                return 1;
            }
        }
    }
    uint32_t v36 = *(int32_t *)v16; // 0x406132
    int64_t v37 = v36; // 0x406132
    int64_t v38 = v17 + 8; // 0x406136
    int64_t v39 = wc7; // 0x40613e
    int64_t v40 = v33; // 0x40613e
    int64_t v41 = v37; // 0x40613e
    int64_t v42 = v38; // 0x40613e
    int32_t * v43; // 0x405df0
    int64_t v44; // 0x405df0
    int64_t v45; // 0x405df0
    int64_t v46; // 0x405df0
    int64_t v47; // 0x405df0
    int64_t v48; // 0x405df0
    int64_t v49; // 0x405df0
    int64_t v50; // 0x405df0
    int64_t v51; // 0x405df0
    int64_t v52; // 0x405df0
    int64_t v53; // 0x405df0
    int64_t v54; // 0x405df0
    int64_t v55; // 0x405df0
    int64_t v56; // 0x405df0
    int64_t v57; // 0x405df0
    int32_t * v58; // 0x405df0
    if (v36 != 42 != v36 != 63) {
        // 0x406146
        v55 = (a5 & 32) != 0;
        v52 = wc7;
        v44 = v33;
        v47 = v37;
        v49 = v38;
        while (true) {
          lab_0x406160_2:
            // 0x406160
            v50 = v49;
            int64_t v59 = v47;
            int64_t v60 = v44;
            v53 = v52;
            int64_t v61 = v55;
            v58 = (int32_t *)v50;
            v56 = v61;
            v45 = v60;
            v48 = v59;
            if (*v58 != 40) {
                goto lab_0x40616e;
            } else {
                // 0x406166
                v56 = v61;
                v45 = v60;
                v48 = v59;
                if ((char)v61 != 0) {
                    int64_t v62 = function_405660(v50); // 0x4063c1
                    int64_t v63 = v61 % 256; // 0x4063c6
                    int64_t v64 = v60 % 256; // 0x4063cb
                    if (v62 != v50) {
                        // 0x4063b0
                        v43 = (int32_t *)v62;
                        v51 = v62;
                        v57 = v63;
                        v54 = v53;
                        v46 = v64;
                        goto lab_0x40617b;
                    } else {
                        // 0x4063da
                        v56 = v63;
                        v45 = v64;
                        v48 = 0x1000000 * (int32_t)v59 >> 24;
                        goto lab_0x40616e;
                    }
                } else {
                    goto lab_0x40616e;
                }
            }
        }
        // 0x4060a5
        result2 = result;
        return result2;
    }
  lab_0x40618e:;
    int64_t wstr = v39;
    int32_t v65 = v41; // 0x406195
    if (v65 == 0) {
        // 0x4066b8
        if (v4 == 0 || (a5 & 8) != 0) {
            // 0x4060a5
            return 0;
        }
        // 0x4066cb
        result = wmemchr((int32_t *)wstr, 47, (int32_t)((a3 - wstr) / 4)) != NULL;
        // 0x4060a5
        return result;
    }
    int64_t v66 = v42;
    int32_t * v67 = wmemchr((int32_t *)wstr, -v4 & 47, (int32_t)((a3 - wstr) / 4)); // 0x4061c0
    int64_t v68 = v40 % 256; // 0x4061d4
    uint64_t v69 = v67 == NULL ? a3 : (int64_t)v67; // 0x4061da
    if (v65 == 91) {
        goto lab_0x4064d6;
    } else {
        if ((a5 & 32) != 0) {
            uint64_t v70 = v41 + 0xffffffdf; // 0x4064b0
            if ((int32_t)v70 < 32) {
                if ((1 << v70 % 64 & 0x80000401) == 0) {
                    goto lab_0x4061f6;
                } else {
                    // 0x4064cc
                    if (*(int32_t *)v66 != 40) {
                        goto lab_0x4061f6;
                    } else {
                        goto lab_0x4064d6;
                    }
                }
            } else {
                goto lab_0x4061f6;
            }
        } else {
            goto lab_0x4061f6;
        }
    }
  lab_0x40616e:;
    int64_t v71 = v45;
    int64_t v72 = v56;
    v43 = v58;
    v51 = v50;
    v57 = v72;
    v54 = v53;
    v46 = v71;
    if ((int32_t)v48 == 63) {
        // 0x4062d0
        if (v53 == a3) {
            return 1;
        }
        // 0x4062d9
        if (!((v4 == 0 | *(int32_t *)v53 != 47))) {
            return 1;
        }
        // 0x4062e2
        v43 = v58;
        v51 = v50;
        v57 = v72;
        v54 = v53 + 4;
        v46 = v71;
    }
    goto lab_0x40617b;
  lab_0x40617b:;
    uint32_t v73 = *v43; // 0x40617b
    int64_t v74 = v73; // 0x40617b
    int64_t v75 = v51 + 4; // 0x40617e
    v39 = v54;
    v40 = v46;
    v41 = v74;
    v42 = v75;
    switch (v73) {
        case 63: {
            goto lab_0x406160;
        }
        case 42: {
            goto lab_0x406160;
        }
        default: {
            goto lab_0x40618e;
        }
    }
  lab_0x406160:
    // 0x406160
    v55 = v57;
    v52 = v54;
    v44 = v46;
    v47 = v74;
    v49 = v75;
    goto lab_0x406160_2;
  lab_0x406343:;
    // 0x406343
    int64_t v76; // 0x405df0
    int64_t v77 = v76 + 4; // 0x406343
    int64_t v78 = 58; // 0x40634a
    int64_t v79 = v77; // 0x40634a
    int32_t * v80; // 0x405df0
    int32_t * v81 = v80; // 0x40634a
    int64_t v82 = v76; // 0x40634a
    int64_t v83 = v77; // 0x40634a
    uint32_t v84; // 0x405df0
    if (v84 == 91) {
        goto lab_0x4065b0;
    }
    goto lab_0x405f77;
  lab_0x4065b0:;
    int64_t v118 = v82; // 0x4065b7
    int64_t v119 = v83; // 0x4065b7
    int64_t v120 = (int64_t)*v81; // 0x4065b7
    goto lab_0x4065d3_2;
  lab_0x4065d3_2:;
    int32_t v183 = v120; // 0x4065d9
    result = 1;
    int32_t v145 = v183; // 0x4065dc
    int64_t v158 = v120; // 0x4065dc
    int64_t v157 = v119; // 0x4065dc
    int64_t v143 = v118; // 0x4065dc
    if (v183 == 0) {
        goto lab_0x4060a5_3;
    } else {
        goto lab_0x4065e2;
    }
  lab_0x405fa6:;
    // 0x405fa6
    int64_t v93; // 0x405df0
    int64_t v172 = v93;
    int64_t v92; // 0x405df0
    int64_t v173 = v92;
    int64_t v91; // 0x405df0
    int64_t v174 = v91;
    int64_t v175 = v173 + 4; // 0x405fa6
    int64_t v121; // 0x405df0
    int64_t v122; // 0x405df0
    int32_t v176; // 0x405fb0
    if (v172 != 45) {
        // 0x405f60
        v121 = v172;
        v122 = v175;
        if (v84 == (int32_t)v174) {
            // 0x405f60
            v81 = (int32_t *)v173;
            v82 = v173;
            v83 = v175;
            goto lab_0x4065b0;
        }
        goto lab_0x405f6e;
    } else {
        // 0x405fb0
        v176 = *(int32_t *)v175;
        switch (v176) {
            case 93: {
                goto lab_0x406360;
            }
            case 0: {
                goto lab_0x406360;
            }
            default: {
                goto lab_0x405fc4;
            }
        }
    }
  lab_0x406052:;
    // 0x406052
    int32_t * v94; // 0x405df0
    int32_t wc5 = *v94; // 0x406052
    int32_t v124 = wc5; // 0x406057
    if ((v3 & 16) != 0) {
        // 0x406059
        v124 = towlower(wc5);
    }
    // 0x406060
    v14 = v16;
    v7 = 0;
    if (v124 != v11) {
        // 0x4060a5
        return 1;
    }
    goto lab_0x40606d;
  lab_0x405f9a:;
    // 0x405f9a
    int64_t v97; // 0x405df0
    int64_t v170 = v97;
    int64_t v96; // 0x405df0
    int64_t wc10 = v96;
    int32_t v98; // 0x405df0
    int64_t v171 = v98;
    v91 = wc10;
    v92 = v170;
    v93 = v171;
    if ((v3 & 16) != 0) {
        // 0x405f9f
        v91 = towlower((int32_t)wc10);
        v92 = v170;
        v93 = v171;
    }
    goto lab_0x405fa6;
  lab_0x405f6e:;
    int64_t v177 = v122;
    v78 = v121;
    v79 = v177;
    int32_t v125; // 0x405df0
    if (v121 == 93) {
        // 0x406690
        v14 = v177;
        v7 = 0;
        result = 1;
        if (v125 != 0) {
            goto lab_0x40606d;
        } else {
            goto lab_0x4060a5_3;
        }
    }
    goto lab_0x405f77;
  lab_0x406360:
    // 0x406360
    v118 = v173;
    v119 = v175;
    v120 = v172;
    if (v84 == (int32_t)v174) {
        goto lab_0x4065d3_2;
    }
    // 0x406368
    v96 = 45;
    v97 = v175;
    v98 = 93;
    if (v176 != 93) {
        goto lab_0x405fc4;
    } else {
        goto lab_0x405f9a;
    }
  lab_0x405fc4:;
    int64_t v178 = v173 + 8; // 0x405fc4
    int32_t v179 = v176; // 0x405fcb
    int64_t v180 = v178; // 0x405fcb
    if ((v3 & 2) == 0 == v176 == 92) {
        // 0x406418
        v179 = *(int32_t *)v178;
        v180 = v173 + 12;
    }
    // 0x405fd6
    if (v179 == 0) {
        // 0x4060a5
        return 1;
    }
    int64_t v181 = (int64_t)*(int32_t *)v180; // 0x405fe0
    int64_t v182 = v180 + 4; // 0x405fe3
    v121 = v181;
    v122 = v182;
    v118 = v180;
    v119 = v182;
    v120 = v181;
    if (v84 >= (int32_t)v174 == v179 >= v84) {
        goto lab_0x4065d3_2;
    }
    goto lab_0x405f6e;
  lab_0x405f77:;
    int64_t v85 = v78; // 0x405df0
    int64_t v86 = v79; // 0x405df0
    goto lab_0x405f77_2;
  lab_0x4060c0:
    if ((a5 & 32) != 0) {
        // 0x4060c7
        if (*(int32_t *)v16 == 40) {
            int64_t v123 = function_405860((int64_t)v11, v16, wc7, a3, v9 % 256, a5); // 0x4060ea
            result = v123;
            if ((int32_t)v123 != -1) {
                // 0x4060a5
                return result;
            }
        }
    }
    goto lab_0x40604b;
  lab_0x40604b:
    // 0x40604b
    if (wc7 == a3) {
        // 0x4060a5
        return 1;
    }
    // 0x40604b
    v94 = (int32_t *)wc7;
    goto lab_0x406052;
  lab_0x40606d:
    // 0x40606d
    v5 = v14;
    v8 = *(int32_t *)v5;
    v6 = wc7 + 4;
    v2 = v6;
    if (v8 == 0) {
        goto lab_0x40608c;
    }
    goto lab_0x405e45;
  lab_0x405f35:
    // 0x405f35
    v125 = v15;
    int32_t v126 = wc6; // 0x405f38
    if ((v3 & 16) != 0) {
        // 0x405f3a
        v126 = towlower(wc6);
    }
    // 0x405f45
    v84 = v126;
    v85 = (int64_t)*(int32_t *)v10;
    v86 = v10 + 4;
    while (true) {
      lab_0x405f77_2:
        // 0x405f77
        v76 = v86;
        int64_t v87 = v85;
        int32_t v88 = v87; // 0x405f7c
        if ((v3 & 2) == 0 == v88 == 92) {
            uint32_t wc3 = *(int32_t *)v76; // 0x406388
            if (wc3 == 0) {
                // 0x4060a5
                return 1;
            }
            int64_t v89 = wc3; // 0x406396
            if ((v3 & 16) != 0) {
                // 0x406398
                v89 = towlower(wc3);
            }
            int64_t v90 = v76 + 4; // 0x40639f
            v91 = v89;
            v92 = v90;
            v93 = (int64_t)*(int32_t *)v90;
            goto lab_0x405fa6;
        } else {
            // 0x405f85
            v94 = wc4;
            switch (v88) {
                case 91: {
                    // 0x4062f0
                    v80 = (int32_t *)v76;
                    int32_t v95 = *v80; // 0x4062f0
                    v96 = v87;
                    v97 = v76;
                    v98 = v95;
                    int64_t v99 = v76; // 0x4062f8
                    if (v95 != 58) {
                        goto lab_0x405f9a;
                    } else {
                        int64_t v100 = 0;
                        int64_t v101 = v99 + 4; // 0x40632b
                        int32_t v102 = *(int32_t *)v101; // 0x40632b
                        while (v102 != 58) {
                            if (v102 >= 122) {
                                goto lab_0x406343;
                            }
                            int64_t v103 = v100 + 1; // 0x406310
                            int64_t v104; // bp-1416, 0x405df0
                            *(int32_t *)((int64_t)&v104 + 316 + 4 * v103) = v102;
                            if (v100 == 255) {
                                // 0x4060a5
                                return 1;
                            }
                            v100 = v103;
                            v101 += 4;
                            v102 = *(int32_t *)v101;
                        }
                        // 0x406338
                        int64_t v105; // 0x405df0
                        if (*(int32_t *)(v105 + 8) == 93) {
                            // 0x406742
                            int64_t v106; // 0x405df0
                            *(int32_t *)(v106 + 4 * v100) = 0;
                            int32_t v107; // bp-1096, 0x405df0
                            int32_t v108 = v107;
                            int64_t v109; // 0x405df0
                            int64_t v110; // 0x405df0
                            if (v108 < 64) {
                                // 0x406770
                                if (v109 == v110 || v108 < 37 == ((v108 & -4) != 32)) {
                                    // 0x4060a5
                                    return 1;
                                }
                            } else {
                                // 0x4067a4
                                if (v108 == 64) {
                                    // 0x4060a5
                                    return 1;
                                }
                                if (v108 < 96) {
                                    // 0x406781
                                    if (v109 == v110) {
                                        // 0x4060a5
                                        return 1;
                                    }
                                } else {
                                    // 0x4067b2
                                    if (v108 > 126 || v109 == v110) {
                                        // 0x4060a5
                                        return 1;
                                    }
                                }
                            }
                            int64_t v111 = v109 + 4; // 0x40678a
                            int64_t v112; // 0x405df0
                            int64_t v113 = v112 + 1; // 0x40678e
                            *(char *)v112 = (char)v108;
                            int32_t v114 = *(int32_t *)v111; // 0x406795
                            while (v114 != 0) {
                                int64_t v115 = v113;
                                int64_t v116 = v111;
                                v108 = v114;
                                if (v108 < 64) {
                                    // 0x406770
                                    if (v116 == v110 || v108 < 37 == ((v108 & -4) != 32)) {
                                        // 0x4060a5
                                        return 1;
                                    }
                                } else {
                                    // 0x4067a4
                                    if (v108 == 64) {
                                        // 0x4060a5
                                        return 1;
                                    }
                                    if (v108 < 96) {
                                        // 0x406781
                                        if (v116 == v110) {
                                            // 0x4060a5
                                            return 1;
                                        }
                                    } else {
                                        // 0x4067b2
                                        if (v108 > 126 || v116 == v110) {
                                            // 0x4060a5
                                            return 1;
                                        }
                                    }
                                }
                                // 0x40678a
                                v111 = v116 + 4;
                                v113 = v115 + 1;
                                *(char *)v115 = (char)v108;
                                v114 = *(int32_t *)v111;
                            }
                            // 0x406861
                            *(char *)v113 = 0;
                            int64_t name; // bp-1368, 0x405df0
                            int32_t desc = wctype((char *)&name); // 0x40686e
                            if (desc == 0) {
                                // 0x4060a5
                                return 1;
                            }
                            // 0x406884
                            if (iswctype(*wc4, desc) != 0) {
                                int64_t v117 = v105 + 12; // 0x4068aa
                                v118 = v117;
                                v119 = v105 + 16;
                                v120 = (int64_t)*(int32_t *)v117;
                                goto lab_0x4065d3_2;
                            }
                            // 0x40689a
                            v121 = (int64_t)*(int32_t *)(v105 + 12);
                            v122 = v105 + 16;
                            goto lab_0x405f6e;
                        } else {
                            goto lab_0x406343;
                        }
                    }
                }
                case 0: {
                    goto lab_0x406052;
                }
                default: {
                    // 0x405f96
                    v96 = v87;
                    v97 = v76;
                    v98 = *(int32_t *)v76;
                    goto lab_0x405f9a;
                }
            }
        }
    }
    goto lab_0x406052;
  lab_0x405eb6:;
    int32_t v127 = towlower(*(int32_t *)wc7); // 0x405ec2
    int32_t v128 = v12; // 0x405ec2
    int64_t v129 = v18; // 0x405ec2
    goto lab_0x4062bb;
  lab_0x4062b4:
    // 0x4062b4
    v127 = *(int32_t *)wc7;
    v128 = v13;
    v129 = v19;
    goto lab_0x4062bb;
  lab_0x4062bb:
    // 0x4062bb
    v14 = v129;
    v7 = 0;
    if (v127 != v128) {
        // 0x4060a5
        return 1;
    }
    goto lab_0x40606d;
  lab_0x4064d6:;
    int32_t v130 = v4 != 0 ? a5 : a5 & -5; // 0x4064e1
    int64_t v131 = wstr; // 0x4064ed
    if (v69 <= wstr) {
        // 0x4060a5
        return 1;
    }
    int64_t v132 = v68; // 0x4064ed
    result = 0;
    while ((int32_t)function_405df0(v66 - 4, v131, a3, v132, v130) != 0) {
        int64_t v133 = v131 + 4; // 0x406513
        result = 1;
        v131 = v133;
        v132 = 0;
        if (v69 <= v133) {
            // break -> 0x4060a5
            break;
        }
        result = 0;
    }
    // 0x4060a5
    return result;
  lab_0x4061f6:;
    int32_t v134; // 0x405df0
    if (v41 == 47) {
        if (v4 != 0) {
            // 0x4067ee
            if (wstr >= a3) {
                // 0x4060a5
                return 1;
            }
            int64_t v135 = wstr; // 0x4067f1
            int64_t v136 = v135 + 4;
            while (*(int32_t *)v135 != 47) {
                // 0x406800
                v135 = v136;
                if (v136 >= a3) {
                    // 0x4060a5
                    return 1;
                }
                v136 = v135 + 4;
            }
            // 0x406812
            result = (int32_t)function_405df0(v66, v136, a3, (int64_t)(a5 / 4 % 2), a5) != 0;
            // 0x4060a5
            return result;
        }
        // 0x4067bf
        v134 = a5 & -5;
        goto lab_0x406208;
    } else {
        // 0x406200
        v134 = a5;
        if (v4 == 0) {
            // 0x4067bf
            v134 = a5 & -5;
            goto lab_0x406208;
        } else {
            goto lab_0x406208;
        }
    }
  lab_0x406208:;
    int64_t wc8 = v41; // 0x406210
    if ((v3 & 2) == 0 && v41 == 92) {
        // 0x406845
        wc8 = (int64_t)*(int32_t *)v66;
    }
    int64_t v137 = wc8; // 0x406218
    if ((v3 & 16) != 0) {
        // 0x40621a
        v137 = towlower((int32_t)wc8);
    }
    // 0x40622f
    if (v69 <= wstr) {
        // 0x4060a5
        return 1;
    }
    int64_t v138 = v66 - 4; // 0x40622f
    int32_t wc9 = *(int32_t *)wstr; // 0x406260
    int32_t v139 = wc9; // 0x406266
    if ((v3 & 16) != 0) {
        // 0x406268
        v139 = towlower(wc9);
    }
    // 0x40626f
    if (v139 == (int32_t)v137) {
        // 0x406274
        if ((int32_t)function_405df0(v138, wstr, a3, v68, v134) == 0) {
            // break -> 0x4060a5
            break;
        }
    }
    int64_t v140 = wstr + 4; // 0x406250
    result = 1;
    while (v69 > v140) {
        int64_t v141 = v140;
        wc9 = *(int32_t *)v141;
        v139 = wc9;
        if ((v3 & 16) != 0) {
            // 0x406268
            v139 = towlower(wc9);
        }
        // 0x40626f
        if (v139 == (int32_t)v137) {
            // 0x406274
            result = 0;
            if ((int32_t)function_405df0(v138, v141, a3, 0, v134) == 0) {
                // break -> 0x4060a5
                break;
            }
        }
        // 0x406250
        v140 = v141 + 4;
        result = 1;
    }
    // 0x4060a5
    return result;
  lab_0x4065e2:;
    int64_t v142 = v143;
    int32_t v144 = v145;
    int32_t v146; // 0x405df0
    int64_t v147; // 0x405df0
    int32_t v148; // 0x405df0
    int64_t v149; // 0x405df0
    int64_t v150; // 0x405df0
    int64_t v151; // 0x405df0
    int64_t v152; // 0x405df0
    int64_t v153; // 0x405df0
    int64_t v154; // 0x405df0
    int64_t v155; // 0x405df0
    if ((v3 & 2) == 0 == v144 == 92) {
        // 0x406648
        result = 1;
        if (*(int32_t *)(v142 + 4) == 0) {
            goto lab_0x4060a5_3;
        } else {
            int64_t v156 = v142 + 8; // 0x406653
            v152 = v156;
            v148 = *(int32_t *)v156;
            goto lab_0x4065cf;
        }
    } else {
        // 0x4065f5
        v154 = v157;
        v153 = v158;
        v149 = v154;
        if (v144 != 91) {
            goto lab_0x4065c0;
        } else {
            int32_t v159 = *(int32_t *)(v142 + 4); // 0x4065fb
            int64_t v160 = v142 + 8;
            v152 = v154;
            v148 = v159;
            switch (v159) {
                case 58: {
                    // 0x406726
                    v155 = v142 + 1024;
                    v150 = v160;
                    goto lab_0x406726_2;
                }
                case 61: {
                    // 0x406660
                    result = 1;
                    if (*(int32_t *)v160 == 0) {
                        goto lab_0x4060a5_3;
                    } else {
                        // 0x40666b
                        result = 1;
                        if (*(int32_t *)(v142 + 12) != 61) {
                            goto lab_0x4060a5_3;
                        } else {
                            // 0x406675
                            result = 1;
                            if (*(int32_t *)(v142 + 16) != 93) {
                                goto lab_0x4060a5_3;
                            } else {
                                // 0x40667f
                                v153 = (int64_t)*(int32_t *)(v142 + 20);
                                v149 = v142 + 24;
                                goto lab_0x4065c0;
                            }
                        }
                    }
                }
                case 46: {
                    int64_t v161 = v142 + 12; // 0x40662d
                    int32_t v162 = *(int32_t *)v161; // 0x40662d
                    result = 1;
                    v146 = v162;
                    v147 = v161;
                    v151 = v160;
                    if (v162 == 0) {
                        goto lab_0x4060a5_3;
                    } else {
                        goto lab_0x40663c;
                    }
                }
                default: {
                    goto lab_0x4065cf;
                }
            }
        }
    }
  lab_0x4065c0:;
    int64_t v163 = v149;
    if (v153 == 93) {
        // 0x40684d
        v14 = v163;
        v7 = (v3 & 2) == 0 == v144 == 92;
        result = 1;
        if (v125 != 0) {
            goto lab_0x4060a5_3;
        } else {
            goto lab_0x40606d;
        }
    } else {
        // 0x4065c9
        v152 = v163;
        v148 = *(int32_t *)v163;
        goto lab_0x4065cf;
    }
  lab_0x4065cf:
    // 0x4065cf
    result = 1;
    v145 = v148;
    v158 = v148;
    v157 = v152 + 4;
    v143 = v152;
    if (v148 == 0) {
        goto lab_0x4060a5_3;
    } else {
        goto lab_0x4065e2;
    }
  lab_0x406726_2:;
    int64_t v164 = v150;
    int32_t v165 = *(int32_t *)v164;
    if (v165 != 58) {
        // 0x406708
        v152 = v154;
        v148 = 58;
        if (v165 < 122) {
            // 0x406716
            result = 1;
            v150 = v164 + 4;
            if (v155 == v164) {
                goto lab_0x4060a5_3;
            } else {
                goto lab_0x406726_2;
            }
        } else {
            goto lab_0x4065cf;
        }
    } else {
        // 0x40672c
        v152 = v154;
        v148 = v165;
        if (*(int32_t *)(v164 + 4) != 93) {
            goto lab_0x4065cf;
        } else {
            // 0x406736
            v153 = (int64_t)*(int32_t *)(v164 + 8);
            v149 = v164 + 12;
            goto lab_0x4065c0;
        }
    }
  lab_0x40663c:;
    int64_t v166 = v147;
    if (v146 != 46) {
        goto lab_0x40662a;
    } else {
        int64_t v167 = v151;
        if (*(int32_t *)(v167 + 8) == 93) {
            // 0x4067d6
            v153 = (int64_t)*(int32_t *)(v167 + 12);
            v149 = v167 + 16;
            goto lab_0x4065c0;
        } else {
            goto lab_0x40662a;
        }
    }
  lab_0x40662a:;
    int64_t v168 = v166 + 4; // 0x40662d
    int32_t v169 = *(int32_t *)v168; // 0x40662d
    result = 1;
    v146 = v169;
    v147 = v168;
    v151 = v166;
    if (v169 == 0) {
        goto lab_0x4060a5_3;
    } else {
        goto lab_0x40663c;
    }
}
// Address range: 0x4068d0 - 0x406e20
int64_t function_4068d0(int64_t a1, int64_t str, uint64_t a3, uint64_t a4, uint64_t a5, uint32_t a6) {
    int64_t v1 = 0; // bp-64, 0x4068fd
    int32_t len = strlen((char *)str); // 0x406905
    int64_t v2 = str + 1; // 0x40690e
    char v3 = *(char *)v2; // 0x40690e
    if (v3 == 0) {
        // 0x4069a5
        return 0xffffffff;
    }
    int64_t v4 = 0x100000000 * a1 >> 32; // 0x4068e7
    int64_t v5 = len; // 0x406905
    char v6 = v3; // 0x406940
    int64_t v7 = &v1; // 0x406940
    int64_t v8; // bp-136, 0x4068d0
    int64_t v9 = &v8; // 0x406940
    int64_t v10 = v2; // 0x406940
    int64_t v11 = v2; // 0x406940
    int64_t v12 = 0; // 0x406940
    int64_t v13; // 0x4068d0
    int64_t v14; // 0x4068d0
    int64_t v15; // 0x4068d0
    int64_t v16; // 0x4068d0
    int64_t v17; // 0x4068d0
    int64_t v18; // 0x4068d0
    int64_t v19; // 0x4068d0
    char v20; // 0x4068d0
    char v21; // 0x4068d0
    int64_t v22; // 0x4068d0
    int64_t v23; // 0x4068d0
    int64_t v24; // 0x4068d0
    int64_t v25; // 0x4068d0
    int64_t v26; // 0x4068d0
    int64_t v27; // 0x406b34
    int32_t v28; // 0x406cac
    int64_t v29; // 0x4068d0
    int64_t v30; // 0x4068d0
    while (true) {
      lab_0x406962:
        // 0x406962
        v24 = v10;
        v26 = v9;
        v22 = v7;
        v18 = v12;
        v15 = v11;
        char v31 = v6;
        while (v31 != 91) {
            if (v31 >= 65) {
                // 0x406948
                v16 = v15;
                v19 = v18;
                if (v31 == 124 == v18 == 0) {
                    int64_t v32 = v15 - v24; // 0x406a43
                    int64_t v33 = ((int32_t)v4 < 65 ? v5 : v32 + 1) + 15 & -8; // 0x406a57
                    if (v33 < 0x1f3f) {
                        int64_t v34 = v26 - (v33 + 23 & -16); // 0x406a74
                        int64_t v35 = v34 + 15 & -16; // 0x406a7c
                        int64_t * v36 = mempcpy((int64_t *)(v35 | 8), (int64_t *)v24, (int32_t)v32); // 0x406a84
                        int64_t v37 = v15 + 1; // 0x406a89
                        *(char *)v36 = 0;
                        *(int64_t *)v35 = 0;
                        *(int64_t *)v22 = v35;
                        v20 = *(char *)v37;
                        v7 = v35;
                        v9 = v34;
                        v10 = v37;
                        v11 = v37;
                        v12 = 0;
                        goto lab_0x40695e;
                    } else {
                        return 0xffffffff;
                    }
                } else {
                    goto lab_0x406955;
                }
            }
            if ((1 << (int64_t)((v31 + 31) % 64) & 0xc0000601) != 0) {
                int64_t v38 = v15 + 1; // 0x406974
                if (*(char *)v38 == 40) {
                    // 0x40697b
                    v16 = v38;
                    v19 = v18 + 1;
                    goto lab_0x406955;
                }
            }
            // 0x40697b
            v16 = v15;
            v19 = v18;
            if (v31 != 41) {
                goto lab_0x406955;
            }
            if (v18 == 0) {
                // 0x406ad6
                if ((((int32_t)v4 < 65 ? v5 : v15 - v24 + 1) + 15 & -8) < 0x1f3f) {
                    // 0x406b0e
                    int64_t v39; // 0x406af9
                    int64_t v40 = v26 + 15 - (v39 + 23 & -16) & -16; // 0x406b1e
                    int64_t v41; // 0x406ae3
                    int64_t * v42 = mempcpy((int64_t *)(v40 | 8), (int64_t *)v24, (int32_t)v41); // 0x406b29
                    *(int64_t *)v22 = v40;
                    *(char *)v42 = 0;
                    v27 = v1;
                    *(int64_t *)v40 = 0;
                    if (v27 == 0) {
                        // 0x406dfa
                        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_match");
                        return &g61;
                    }
                    char v43 = *(char *)(v15 - 1); // 0x406b4d
                    if (v43 != 41) {
                        // 0x406de1
                        __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_match");
                        // 0x406dfa
                        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_match");
                        return &g61;
                    }
                    int64_t v44 = v4 + 0xffffffdf; // 0x406b5c
                    g59 = v44 & 0xffffffff;
                    switch ((int32_t)v44) {
                        case 0: {
                            // 0x406c85
                            if (a3 > a4) {
                                return 0xffffffff;
                            } else {
                                // 0x406c93
                                v28 = a6 % 2 != 0 ? a6 : a6 & -5;
                                v30 = 0x100000000 * v15 >> 32;
                                v13 = a3;
                                // 0x406caf
                                v14 = v13;
                                v17 = v27;
                                goto lab_0x406cb8;
                            }
                        }
                        case 9: {
                            // 0x406b72
                            if ((int32_t)function_406e20(v15, a3, a4, v29, a6) == 0) {
                                return 0xffffffff;
                            } else {
                                goto lab_0x406b92;
                            }
                        }
                        case 10: {
                            goto lab_0x406b92;
                        }
                        case 30: {
                            // 0x406d7c
                            if ((int32_t)function_406e20(v15, a3, a4, v29, a6) != 0) {
                                goto lab_0x406d2c;
                            } else {
                                return 0xffffffff;
                            }
                        }
                        case 31: {
                            goto lab_0x406d2c;
                        }
                        default: {
                            // 0x406dc8
                            __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 1197, "ext_match");
                            // 0x406de1
                            __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_match");
                            // 0x406dfa
                            __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_match");
                            return &g61;
                        }
                    }
                } else {
                    return 0xffffffff;
                }
            }
            int64_t v45 = v15 + 1; // 0x40698c
            char v46 = *(char *)v45; // 0x40698c
            if (v46 == 0) {
                return 0xffffffff;
            }
            v18--;
            v15 = v45;
            v31 = v46;
        }
        int32_t v47 = g49; // 0x4069d8
        v8 = v24;
        if (g49 == 0) {
            // 0x406ab0
            v8 = v24;
            int32_t v48 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x406ac8
            g49 = v48;
            v47 = v48;
        }
        // 0x4069de
        v25 = v8;
        int64_t v49 = v15 + 1; // 0x4069de
        char v50 = *(char *)v49; // 0x4069de
        if (v50 == 33) {
            goto lab_0x406a30;
        } else {
            // 0x4069e7
            v21 = v50;
            v23 = v49;
            if (v47 < 0 == v50 == 94) {
                goto lab_0x406a30;
            } else {
                goto lab_0x4069f9;
            }
        }
    }
  lab_0x4069a5_3:
    // 0x4069a5
    return 0xffffffff;
  lab_0x406955:;
    int64_t v51 = v16 + 1; // 0x406955
    v20 = *(char *)v51;
    v7 = v22;
    v9 = v26;
    v10 = v24;
    v11 = v51;
    v12 = v19;
    goto lab_0x40695e;
  lab_0x406a30:;
    int64_t v82 = v15 + 2; // 0x406a30
    v21 = *(char *)v82;
    v23 = v82;
    goto lab_0x4069f9;
  lab_0x4069f9:;
    int64_t v83 = v23;
    char v84 = v21; // 0x4069fb
    int64_t v85 = v83; // 0x4069fb
    int64_t v86; // 0x4068d0
    int64_t v87; // 0x4068d0
    char v88; // 0x4068d0
    if (v21 != 93) {
        goto lab_0x406a1b;
    } else {
        char v89 = *(char *)(v83 + 1); // 0x4069fd
        int64_t v90 = v83 + 2; // 0x406a05
        v88 = v89;
        v87 = v90;
        v86 = v90;
        if (v89 == 93) {
            goto lab_0x406a23;
        } else {
            goto lab_0x406a10;
        }
    }
  lab_0x406a1b:;
    int64_t v91 = v85 + 1;
    v88 = v84;
    v87 = v91;
    v86 = v91;
    if (v84 != 93) {
        goto lab_0x406a10;
    } else {
        goto lab_0x406a23;
    }
  lab_0x406a10:
    // 0x406a10
    if (v88 == 0) {
        // break -> 0x4069a5
        goto lab_0x4069a5_3;
    }
    // 0x406a14
    v84 = *(char *)v87;
    v85 = v87;
    goto lab_0x406a1b;
  lab_0x406a23:
    // 0x406a23
    v20 = *(char *)v86;
    v7 = v22;
    v9 = v26;
    v10 = v25;
    v11 = v86;
    v12 = v18;
    goto lab_0x40695e;
  lab_0x40695e:
    // 0x40695e
    v6 = v20;
    if (v6 == 0) {
        // break -> 0x4069a5
        goto lab_0x4069a5_3;
    }
    goto lab_0x406962;
  lab_0x406b92:;
    int32_t v52 = a6 % 2 != 0 ? a6 : a6 & -5; // 0x406baf
    int64_t v53 = str - 1; // 0x406bb3
    int64_t v54 = 0x100000000 * v15 >> 32;
    int64_t v55 = v27; // 0x406bbf
    goto lab_0x406bc3;
  lab_0x406d2c:;
    int32_t v62 = a6 % 2 != 0 ? a6 : a6 & -5; // 0x406d3e
    char * str2 = (char *)v15; // 0x406d57
    int64_t v61 = v27; // 0x406d41
    goto lab_0x406d50;
  lab_0x406bc3:;
    int64_t v56 = v55;
    int64_t v57 = a3; // 0x406bc6
    int64_t v58 = v56; // 0x406bc6
    int64_t v59 = v56; // 0x406bc6
    if (a3 > a4) {
        goto lab_0x406da2;
    } else {
        goto lab_0x406c43;
    }
  lab_0x406d50:;
    int64_t v60 = v61;
    char * dest_str = strcat((char *)(v60 + 8), str2); // 0x406d57
    if ((int32_t)function_406e20((int64_t)dest_str, a3, a4, v29, v62) != 0) {
        int64_t v63 = *(int64_t *)v60; // 0x406d43
        v1 = v63;
        v61 = v63;
        if (v63 == 0) {
            goto lab_0x4069a5_3;
        } else {
            goto lab_0x406d50;
        }
    } else {
        goto lab_0x4069a5_3;
    }
  lab_0x406da2:;
    int64_t v64 = v59;
    int64_t v65 = *(int64_t *)v64; // 0x406da2
    v1 = v65;
    v55 = v65;
    if (v65 != 0) {
        goto lab_0x406bc3;
    } else {
        goto lab_0x4069a5_3;
    }
  lab_0x406c43:;
    int64_t v66 = v58;
    int64_t v67 = v57;
    int64_t v68 = function_406e20(v66 + 8, a3, v67, v29, v52); // 0x406c53
    int64_t v69 = v66; // 0x406c5a
    if ((int32_t)v68 != 0) {
        goto lab_0x406c36;
    } else {
        int64_t v70; // 0x406c32
        if (v67 != a3) {
            char * v71 = (char *)(v67 - 1); // 0x406bda
            char v72 = *v71; // 0x406bda
            if ((int32_t)function_406e20(v54, v67, a4, (int64_t)((a6 & 5) == 5 == v72 == 47), v52) == 0) {
                goto lab_0x4069a5_3;
            } else {
                char v73 = *v71; // 0x406c07
                if ((int32_t)function_406e20(v53, v67, a4, (int64_t)((a6 & 5) == 5 == v73 == 47), v52) == 0) {
                    goto lab_0x4069a5_3;
                } else {
                    // 0x406c32
                    v70 = v1;
                    v69 = v70;
                    goto lab_0x406c36;
                }
            }
        } else {
            // 0x406c65
            if ((int32_t)function_406e20(v54, a3, a4, v29, v52) != 0) {
                // 0x406c32
                v70 = v1;
                v69 = v70;
                goto lab_0x406c36;
            } else {
                goto lab_0x4069a5_3;
            }
        }
    }
  lab_0x406cb8:;
    int64_t v74 = v17;
    int64_t v75; // 0x4068d0
    if ((int32_t)function_406e20(v74 + 8, a3, v14, v29, v28) == 0) {
        goto lab_0x406d14;
    } else {
        int64_t v76 = *(int64_t *)v74; // 0x406cd1
        v17 = v76;
        if (v76 != 0) {
            goto lab_0x406cb8;
        } else {
            // 0x406cd9
            v75 = v29;
            if (v14 == a3) {
                goto lab_0x406cf9;
            } else {
                char v77 = *(char *)(v14 - 1); // 0x406ce4
                v75 = (a6 & 5) == 5 == v77 == 47;
                goto lab_0x406cf9;
            }
        }
    }
  lab_0x406c36:;
    int64_t v78 = v69;
    int64_t v79 = v67 + 1; // 0x406c36
    v57 = v79;
    v58 = v78;
    v59 = v78;
    if (v79 > a4) {
        goto lab_0x406da2;
    } else {
        goto lab_0x406c43;
    }
  lab_0x406d14:;
    int64_t v80 = v14 + 1; // 0x406d14
    v13 = v80;
    if (v80 <= a4) {
        // 0x406caf
        v14 = v13;
        v17 = v27;
        goto lab_0x406cb8;
    } else {
        goto lab_0x4069a5_3;
    }
  lab_0x406cf9:;
    int64_t v81 = v75;
    if ((int32_t)function_406e20(v30, v14, a4, v81, v28) == 0) {
        goto lab_0x4069a5_3;
    } else {
        goto lab_0x406d14;
    }
}
// Address range: 0x406e20 - 0x407903
int64_t function_406e20(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint32_t a5) {
    char v1 = a1;
    int64_t v2 = a2; // 0x406e4e
    int64_t result; // 0x406e20
    if (v1 == 0) {
      lab_0x407119:
        // 0x407119
        if (v2 == a3) {
            // 0x407135
            return 0;
        }
        // 0x407124
        result = 1;
        if ((a5 & 8) != 0) {
            // 0x40784c
            result = *(char *)v2 != 47;
        }
      lab_0x407135_3:
        // 0x407135
        return result;
    }
    int64_t v3 = a5;
    uint32_t v4 = a5 % 2;
    int64_t v5 = a1; // 0x406e6c
    char v6 = v1; // 0x406e6c
    int64_t v7 = a2; // 0x406e6c
    int64_t v8 = a4 & 0xffffffff; // 0x406e6c
    int64_t v9; // 0x406e20
    int64_t v10; // 0x406e20
    int64_t v11; // 0x406e20
    int64_t v12; // 0x406e20
    uint64_t v13; // 0x406e20
    int64_t v14; // 0x406e20
    int64_t result2; // 0x406e20
    int64_t v15; // 0x406e20
    int64_t v16; // 0x406e20
    int32_t v17; // 0x406e20
    int64_t v18; // 0x406e20
    int64_t v19; // 0x406e20
    int64_t v20; // 0x406e20
    int64_t v21; // 0x406e20
    char * wc; // 0x406e20
    unsigned char v22; // 0x406f09
    while (true) {
      lab_0x406e6f:
        // 0x406e6f
        v13 = v8;
        v12 = v7;
        v19 = v5;
        int64_t v23 = v6;
        int64_t v24 = v23; // 0x406e71
        if ((v3 & 16) != 0) {
            int32_t ** v25 = __ctype_tolower_loc(); // 0x406e73
            v24 = (int64_t)*(char *)(4 * v23 + (int64_t)*v25);
        }
        // 0x406e80
        v18 = v19 + 1;
        v9 = v24;
        uint64_t v26 = v9 + 0xffffffdf; // 0x406e80
        g58 = v26 % 256;
        switch ((char)v26) {
            case 0: {
                goto lab_0x407150;
            }
            case 9: {
                goto lab_0x407190;
            }
            case 10: {
                goto lab_0x407150;
            }
            case 14: {
                if ((a5 & 5) == 5) {
                    // 0x407568
                    if (v12 == a3) {
                        // 0x407135
                        return 1;
                    }
                    // 0x407573
                    v11 = v18;
                    v8 = 1;
                    if (*(char *)v12 != 47) {
                        // 0x407135
                        return 1;
                    }
                    goto lab_0x4070fe;
                } else {
                    goto lab_0x4070d3;
                }
            }
            case 30: {
                if ((a5 & 32) != 0) {
                    // 0x40767b
                    if (*(char *)v18 == 40) {
                        int64_t v27 = function_4068d0(63, v18, v12, a3, v13 % 256, a5); // 0x4076a1
                        result = v27;
                        if ((int32_t)v27 != -1) {
                            // 0x407135
                            return result;
                        }
                    }
                }
                // 0x40709b
                if (v12 == a3) {
                    // 0x407135
                    return 1;
                }
                char v28 = *(char *)v12; // 0x4070a6
                if (v28 == 47) {
                    // 0x4075a0
                    v11 = v18;
                    v8 = 0;
                    if (v4 != 0) {
                        // 0x407135
                        return 1;
                    }
                } else {
                    unsigned char v29 = (char)(v28 == 46) & (char)v13; // 0x4070b7
                    if (v29 != 0) {
                        // 0x407135
                        return 1;
                    }
                    // 0x4070bc
                    v11 = v18;
                    v8 = v29;
                }
                goto lab_0x4070fe;
            }
            case 31: {
                goto lab_0x407150;
            }
            case 58: {
                int32_t v30 = g49; // 0x406ef8
                if (g49 == 0) {
                    // 0x4075b0
                    v30 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1;
                    g49 = v30;
                }
                // 0x406efe
                if (v12 == a3) {
                    // 0x407135
                    return 1;
                }
                int32_t v31 = v30; // 0x406f35
                wc = (char *)v12;
                v22 = *wc;
                if (v22 == 46) {
                    // 0x407590
                    if ((char)v13 != 0) {
                        // 0x407135
                        return 1;
                    }
                } else {
                    // 0x406f17
                    if (v22 == 47 == (v4 != 0)) {
                        // 0x407135
                        return 1;
                    }
                }
                char v32 = *(char *)v18; // 0x406f28
                if (v32 == 33) {
                    // 0x407550
                    v17 = 1;
                    v14 = v19 + 2;
                    goto lab_0x406f54;
                } else {
                    // 0x406f35
                    v17 = 0;
                    v14 = v18;
                    if (v31 < 0 == v32 == 94) {
                        // 0x407550
                        v17 = 1;
                        v14 = v19 + 2;
                        goto lab_0x406f54;
                    } else {
                        goto lab_0x406f54;
                    }
                }
            }
            case 59: {
                if ((v3 & 2) != 0) {
                    // 0x407340
                    if (v12 == a3) {
                        // 0x407135
                        return 1;
                    }
                    // 0x40734b
                    v20 = v18;
                    v21 = 92;
                    if ((v3 & 16) == 0) {
                        goto lab_0x406ed6;
                    } else {
                        int32_t * v33 = *__ctype_tolower_loc(); // 0x40735d
                        v15 = 92;
                        v16 = (int64_t)v33;
                        v10 = v18;
                        goto lab_0x407365;
                    }
                } else {
                    unsigned char v34 = *(char *)v18; // 0x406ea8
                    if (v34 == 0) {
                        // 0x407135
                        return 1;
                    }
                    int64_t v35 = v34; // 0x406ea8
                    int64_t v36 = v19 + 2; // 0x406ead
                    if ((v3 & 16) != 0) {
                        int32_t * v37 = *__ctype_tolower_loc(); // 0x4075e5
                        if (v12 == a3) {
                            // 0x407135
                            result2 = result;
                            return result2;
                        }
                        int64_t v38 = (int64_t)v37; // 0x4075e5
                        v15 = (int64_t)(*(int32_t *)(4 * v35 + v38) % 256);
                        v16 = v38;
                        v10 = v36;
                        goto lab_0x407365;
                    } else {
                        // 0x406ec7
                        v20 = v36;
                        v21 = v35;
                        if (v12 == a3) {
                            // 0x407135
                            return 1;
                        }
                        goto lab_0x406ed6;
                    }
                }
            }
            default: {
                goto lab_0x4070d3;
            }
        }
    }
  lab_0x407190:
    if ((a5 & 32) != 0) {
        // 0x4076b8
        if (*(char *)v18 == 40) {
            // 0x4076c3
            if ((int32_t)function_4068d0(42, v18, v12, a3, v13 % 256, a5) != -1) {
                // 0x407135
                result2 = result;
                return result2;
            }
        }
    }
    if (v12 != a3) {
        // 0x4071a8
        if (*(char *)v12 == 46) {
            // 0x4071ae
            if ((char)v13 != 0) {
                // 0x407135
                return 1;
            }
        }
    }
    char v39 = *(char *)v18; // 0x4071b7
    int64_t v40 = v19 + 2; // 0x4071bc
    char v41 = v39; // 0x4071c4
    int64_t v42 = v40; // 0x4071c4
    int64_t v43 = v12; // 0x4071c4
    char * v44; // 0x406e20
    int64_t v45; // 0x406e20
    int64_t v46; // 0x406e20
    int64_t v47; // 0x406e20
    char v48; // 0x406e20
    char v49; // 0x406e20
    int64_t v50; // 0x406e20
    int64_t v51; // 0x406e20
    int64_t v52; // 0x406e20
    char * v53; // 0x406e20
    if (v39 != 42 != v39 != 63) {
        // 0x4071cc
        v48 = v39;
        v50 = v40;
        v45 = v12;
        while (true) {
          lab_0x4071e8_2:
            // 0x4071e8
            v46 = v45;
            v51 = v50;
            v49 = v48;
            v53 = (char *)v51;
            if ((a5 & 32) != 0 == *v53 == 40) {
                int64_t v54 = function_405760(v51); // 0x407485
                if (v54 != v51) {
                    // 0x407478
                    v44 = (char *)v54;
                    v52 = v54;
                    v47 = v46;
                    goto lab_0x407204;
                } else {
                    goto lab_0x4071f7;
                }
            } else {
                goto lab_0x4071f7;
            }
        }
        // 0x407135
        result2 = result;
        return result2;
    }
  lab_0x407218:;
    int64_t v55 = v43;
    if (v41 == 0) {
        // 0x407758
        if (v4 == 0) {
            // 0x407135
            return 0;
        }
        // 0x407760
        if ((a5 & 8) == 0) {
            // 0x407135
            return function_408aa0(v55, 47, a3 - v55) != 0;
        }
        // 0x407135
        return 0;
    }
    int64_t v56 = function_408aa0(v55, -v4 & 47, a3 - v55); // 0x40724b
    int64_t v57 = 0x100000000000000 * v42 >> 56; // 0x407260
    uint64_t v58 = v56 == 0 ? a3 : v56; // 0x407265
    if (v41 == 91) {
        goto lab_0x40762a;
    } else {
        if ((a5 & 32) != 0 == v41 < 65) {
            if ((1 << (int64_t)((v41 + 31) % 64) & 0x80000401) == 0) {
                goto lab_0x40727f;
            } else {
                // 0x407620
                if (*(char *)v57 != 40) {
                    goto lab_0x40727f;
                } else {
                    goto lab_0x40762a;
                }
            }
        } else {
            goto lab_0x40727f;
        }
    }
  lab_0x4071f7:
    // 0x4071f7
    v44 = v53;
    v52 = v51;
    v47 = v46;
    if (v49 == 63) {
        // 0x407378
        if (v46 == a3) {
            return 1;
        }
        // 0x407383
        if (!((v4 == 0 | *(char *)v46 != 47))) {
            return 1;
        }
        // 0x40738d
        v44 = v53;
        v52 = v51;
        v47 = v46 + 1;
    }
    goto lab_0x407204;
  lab_0x407204:;
    char v59 = *v44; // 0x407204
    int64_t v60 = v52 + 1; // 0x407208
    v41 = v59;
    v42 = v60;
    v43 = v47;
    switch (v59) {
        case 63: {
            goto lab_0x4071e8;
        }
        case 42: {
            goto lab_0x4071e8;
        }
        default: {
            goto lab_0x407218;
        }
    }
  lab_0x4071e8:
    // 0x4071e8
    v48 = v59;
    v50 = v60;
    v45 = v47;
    goto lab_0x4071e8_2;
  lab_0x4073f8:;
    // 0x4073f8
    int64_t v61; // 0x406e20
    int64_t v62 = v61 + 1; // 0x4073f8
    int64_t v63 = v62; // 0x407400
    int64_t v64 = 58; // 0x407400
    char * v65; // 0x406e20
    char * v66 = v65; // 0x407400
    int64_t v67 = v62; // 0x407400
    int64_t v68 = v61; // 0x407400
    int64_t v69; // 0x406e20
    if (v69 == 91) {
        goto lab_0x407790;
    }
    goto lab_0x406f9a;
  lab_0x407790:;
    int64_t v97 = v67; // 0x407795
    int64_t v98 = (int64_t)*v66; // 0x407795
    int64_t v99 = v68; // 0x407795
    goto lab_0x407047;
  lab_0x407047:;
    char v160 = v98; // 0x40704c
    char v137 = v160; // 0x40704f
    int64_t v151 = v98; // 0x40704f
    int64_t v135 = v99; // 0x40704f
    int64_t v150 = v97; // 0x40704f
    result = 1;
    if (v160 == 0) {
        goto lab_0x407135_3;
    } else {
        goto lab_0x407055;
    }
  lab_0x407043:;
    // 0x407043
    int64_t v149; // 0x406e20
    v97 = v149 + 1;
    int64_t v148; // 0x406e20
    v98 = v148;
    v99 = v149;
    goto lab_0x407047;
  lab_0x406fdb:;
    // 0x406fdb
    int64_t v81; // 0x406e20
    int64_t v161 = v81;
    int64_t v80; // 0x406e20
    int64_t v162 = v80;
    int64_t v79; // 0x406e20
    int64_t v163 = v79;
    int64_t v164 = v162 + 1; // 0x406fdb
    int64_t v100; // 0x406e20
    int64_t v101; // 0x406e20
    char v165; // 0x406fe5
    unsigned char v111; // 0x406e20
    if (v163 != 45) {
        // 0x406f80
        v100 = v164;
        v101 = v163;
        if (v111 == (char)v161) {
            // 0x406f80
            v66 = (char *)v162;
            v67 = v164;
            v68 = v162;
            goto lab_0x407790;
        }
        goto lab_0x406f90;
    } else {
        // 0x406fe5
        v165 = *(char *)v164;
        switch (v165) {
            case 93: {
                goto lab_0x407418;
            }
            case 0: {
                goto lab_0x407418;
            }
            default: {
                goto lab_0x406fff;
            }
        }
    }
  lab_0x4070da:;
    // 0x4070da
    char * v82; // 0x406e20
    int64_t v103 = (int64_t)*v82; // 0x4070da
    int64_t v104 = v103; // 0x4070e3
    if ((v3 & 16) != 0) {
        int32_t * v105 = *__ctype_tolower_loc(); // 0x4070ea
        v104 = (int64_t)*(int32_t *)(4 * v103 + (int64_t)v105);
    }
    // 0x4070f1
    v11 = v18;
    v8 = 0;
    int64_t v83; // 0x406e20
    if ((int32_t)v104 != (int32_t)v83) {
        // 0x407135
        return 1;
    }
    goto lab_0x4070fe;
  lab_0x406fc0:;
    // 0x406fc0
    int64_t v87; // 0x406e20
    int64_t v170 = v87;
    int64_t v86; // 0x406e20
    int64_t v171 = v86;
    char v85; // 0x406e20
    int64_t v172 = v85;
    v79 = v172;
    v80 = v171;
    v81 = v170;
    if ((v3 & 16) != 0) {
        int32_t * v173 = *__ctype_tolower_loc(); // 0x406fd3
        v79 = v172;
        v80 = v171;
        v81 = (int64_t)*(char *)(4 * v170 + (int64_t)v173);
    }
    goto lab_0x406fdb;
  lab_0x406f90:;
    int64_t v174 = v100;
    v63 = v174;
    v64 = v101;
    int32_t v107; // 0x406e20
    if (v101 == 93) {
        // 0x407730
        v11 = v174;
        v8 = 0;
        result = 1;
        if (v107 != 0) {
            goto lab_0x4070fe;
        } else {
            goto lab_0x407135_3;
        }
    }
    goto lab_0x406f9a;
  lab_0x407418:
    // 0x407418
    v97 = v164;
    v98 = v163;
    v99 = v162;
    if (v111 == (char)v161) {
        goto lab_0x407047;
    }
    // 0x407421
    v85 = 93;
    v86 = v164;
    v87 = 45;
    if (v165 != 93) {
        goto lab_0x406fff;
    } else {
        goto lab_0x406fc0;
    }
  lab_0x406fff:;
    int64_t v175 = v162 + 2; // 0x406fff
    int64_t v176 = v175; // 0x407005
    char v177 = v165; // 0x407005
    if ((v3 & 2) == 0 == v165 == 92) {
        // 0x407538
        v176 = v162 + 3;
        v177 = *(char *)v175;
    }
    // 0x407010
    if (v177 == 0) {
        // 0x407135
        return 1;
    }
    int64_t v178 = (int64_t)*(char *)v176; // 0x407018
    v100 = v176 + 1;
    v101 = v178;
    v148 = v178;
    v149 = v176;
    int32_t v110; // 0x406f65
    if (v110 >= (int32_t)(0x100000000000000 * v161 >> 56) && v177 >= v111) {
        goto lab_0x407043;
    }
    goto lab_0x406f90;
  lab_0x406f9a:;
    int64_t v70 = v63; // 0x406e20
    int64_t v71 = v64; // 0x406e20
    goto lab_0x406f9a_2;
  lab_0x407150:
    if ((a5 & 32) != 0) {
        // 0x40715b
        if (*(char *)v18 == 40) {
            int64_t v102 = function_4068d0(v9, v18, v12, a3, v13 % 256, a5); // 0x407180
            result = v102;
            if ((int32_t)v102 != -1) {
                // 0x407135
                return result;
            }
        }
    }
    goto lab_0x4070d3;
  lab_0x4070d3:
    // 0x4070d3
    if (v12 == a3) {
        // 0x407135
        return 1;
    }
    // 0x4070d3
    v82 = (char *)v12;
    v83 = v9;
    goto lab_0x4070da;
  lab_0x4070fe:
    // 0x4070fe
    v5 = v11;
    v6 = *(char *)v5;
    v7 = v12 + 1;
    v2 = v7;
    if (v6 == 0) {
        goto lab_0x407119;
    }
    goto lab_0x406e6f;
  lab_0x406f54:;
    int64_t v106 = v22; // 0x406f09
    v107 = v17;
    int64_t v108 = v106; // 0x406f56
    if ((v3 & 16) != 0) {
        int32_t * v109 = *__ctype_tolower_loc(); // 0x406f5d
        v108 = (int64_t)*(char *)(4 * v106 + (int64_t)v109);
    }
    // 0x406f65
    v69 = v108;
    v110 = v69;
    v111 = (char)v69;
    v70 = v14 + 1;
    v71 = (int64_t)*(char *)v14;
    while (true) {
      lab_0x406f9a_2:;
        int64_t v72 = v71;
        v61 = v70;
        char v73 = v72; // 0x406f9e
        if ((v3 & 2) == 0 == v73 == 92) {
            unsigned char v74 = *(char *)v61; // 0x407448
            if (v74 == 0) {
                // 0x407135
                return 1;
            }
            int64_t v75 = v74; // 0x407448
            int64_t v76 = v75; // 0x407458
            if ((v3 & 16) != 0) {
                int32_t * v77 = *__ctype_tolower_loc(); // 0x40745f
                v76 = (int64_t)*(char *)(4 * v75 + (int64_t)v77);
            }
            int64_t v78 = v61 + 1; // 0x407467
            v79 = (int64_t)*(char *)v78;
            v80 = v78;
            v81 = v76;
            goto lab_0x406fdb;
        } else {
            // 0x406fa8
            v82 = wc;
            v83 = 91;
            switch (v73) {
                case 91: {
                    // 0x4073a0
                    v65 = (char *)v61;
                    char v84 = *v65; // 0x4073a0
                    v85 = v84;
                    v86 = v61;
                    v87 = v72;
                    int64_t v88 = v61; // 0x4073a9
                    if (v84 != 58) {
                        goto lab_0x406fc0;
                    } else {
                        int64_t v89 = 0;
                        int64_t v90 = v88 + 1; // 0x4073e1
                        char v91 = *(char *)v90; // 0x4073e1
                        while (v91 != 58) {
                            if (v91 >= 122) {
                                goto lab_0x4073f8;
                            }
                            int64_t v92 = v89 + 1; // 0x4073c9
                            int64_t v93; // bp-376, 0x406e20
                            *(char *)((int64_t)&v93 + 47 + v92) = v91;
                            if (v89 == 255) {
                                // 0x407135
                                return 1;
                            }
                            v89 = v92;
                            v90++;
                            v91 = *(char *)v90;
                        }
                        // 0x4073ee
                        int64_t v94; // 0x406e20
                        if (*(char *)(v94 + 2) == 93) {
                            // 0x4077ea
                            int64_t v95; // 0x406e20
                            *(char *)(v95 + v89) = 0;
                            int64_t name; // bp-328, 0x406e20
                            int32_t desc = wctype((char *)&name); // 0x4077f9
                            if (desc == 0) {
                                // 0x407135
                                return 1;
                            }
                            // 0x40780f
                            if (iswctype(btowc((int32_t)*wc), desc) != 0) {
                                int64_t v96 = v94 + 3; // 0x4078e4
                                v97 = v94 + 4;
                                v98 = (int64_t)*(char *)v96;
                                v99 = v96;
                                goto lab_0x407047;
                            }
                            // 0x407834
                            v100 = v94 + 4;
                            v101 = (int64_t)*(char *)((0x100000000000000 * v90 >> 56) + 2);
                            goto lab_0x406f90;
                        } else {
                            goto lab_0x4073f8;
                        }
                    }
                }
                case 0: {
                    goto lab_0x4070da;
                }
                default: {
                    // 0x406fbb
                    v85 = *(char *)v61;
                    v86 = v61;
                    v87 = v72;
                    goto lab_0x406fc0;
                }
            }
        }
    }
    goto lab_0x4070da;
  lab_0x406ed6:;
    int64_t v112 = v21; // 0x406eda
    int32_t v113 = (int32_t)*(char *)v12; // 0x406eda
    int64_t v114 = v20; // 0x406eda
    goto lab_0x406edf;
  lab_0x406edf:
    // 0x406edf
    v11 = v114;
    v8 = 0;
    if (v113 != (int32_t)v112) {
        // 0x407135
        return 1;
    }
    goto lab_0x4070fe;
  lab_0x407365:;
    int32_t v115 = *(int32_t *)(4 * (int64_t)*(char *)v12 + v16); // 0x407369
    v112 = v15;
    v113 = v115;
    v114 = v10;
    goto lab_0x406edf;
  lab_0x40762a:;
    int32_t v116 = v4 != 0 ? a5 : a5 & -5; // 0x407639
    int64_t v117 = v55; // 0x407642
    if (v58 <= v55) {
        // 0x407135
        return 1;
    }
    int64_t v118 = v13; // 0x407642
    result = 0;
    while ((int32_t)function_406e20(v57 - 1, v117, a3, v118 % 256, v116) != 0) {
        int64_t v119 = v117 + 1; // 0x40766a
        result = 1;
        v117 = v119;
        v118 = 0;
        if (v58 == v119) {
            // break -> 0x407135
            break;
        }
        result = 0;
    }
    // 0x407135
    return result;
  lab_0x40727f:;
    int32_t v120; // 0x406e20
    if (v41 == 47) {
        if (v4 != 0) {
            int64_t v121 = v55; // 0x407874
            if (v55 >= a3) {
                // 0x407135
                result2 = result;
                return result2;
            }
            int64_t v122 = v121 + 1;
            while (*(char *)v121 != 47) {
                // 0x407880
                v121 = v122;
                if (v122 == a3) {
                    // 0x407135
                    return 1;
                }
                v122 = v121 + 1;
            }
            // 0x407893
            result = (int32_t)function_406e20(v57, v122, a3, (int64_t)(a5 / 4 % 2), a5) != 0;
            // 0x407135
            return result;
        }
        // 0x407842
        v120 = a5 & -5;
        goto lab_0x407291;
    } else {
        // 0x407289
        v120 = a5;
        if (v4 == 0) {
            // 0x407842
            v120 = a5 & -5;
            goto lab_0x407291;
        } else {
            goto lab_0x407291;
        }
    }
  lab_0x407291:;
    char v123 = v41; // 0x407299
    if ((v3 & 2) == 0 && v41 == 92) {
        // 0x4078c7
        v123 = *(char *)v57;
    }
    int64_t v124 = v123;
    int64_t v125 = v124; // 0x4072a1
    if ((v3 & 16) != 0) {
        int32_t * v126 = *__ctype_tolower_loc(); // 0x4072bd
        v125 = (int64_t)*(char *)(4 * v124 + (int64_t)v126);
    }
    // 0x4072c5
    if (v58 <= v55) {
        // 0x407135
        return 1;
    }
    int64_t v127 = v57 - 1; // 0x4072c5
    int64_t v128 = v13 % 256;
    int64_t v129 = (int64_t)*(char *)v55; // 0x4072f0
    int64_t v130 = v129; // 0x4072f9
    int32_t * v131; // 0x407304
    if ((v3 & 16) != 0) {
        // 0x4072fb
        v131 = *__ctype_tolower_loc();
        v130 = (int64_t)*(int32_t *)(4 * v129 + (int64_t)v131);
    }
    // 0x40730a
    if ((int32_t)v125 == (int32_t)v130) {
        // 0x40730e
        if ((int32_t)function_406e20(v127, v55, a3, v128, v120) == 0) {
            // break -> 0x407135
            break;
        }
    }
    int64_t v132 = v55 + 1; // 0x4072e0
    result = 1;
    while (v58 != v132) {
        int64_t v133 = v132;
        v129 = (int64_t)*(char *)v133;
        v130 = v129;
        if ((v3 & 16) != 0) {
            // 0x4072fb
            v131 = *__ctype_tolower_loc();
            v130 = (int64_t)*(int32_t *)(4 * v129 + (int64_t)v131);
        }
        // 0x40730a
        if ((int32_t)v125 == (int32_t)v130) {
            // 0x40730e
            result = 0;
            if ((int32_t)function_406e20(v127, v133, a3, 0, v120) == 0) {
                // break -> 0x407135
                break;
            }
        }
        // 0x4072e0
        v132 = v133 + 1;
        result = 1;
    }
    // 0x407135
    return result;
  lab_0x407055:;
    int64_t v134 = v135;
    char v136 = v137;
    char v138; // 0x406e20
    int64_t v139; // 0x406e20
    int64_t v140; // 0x406e20
    int64_t v141; // 0x406e20
    int64_t v142; // 0x406e20
    int64_t v143; // 0x406e20
    int64_t v144; // 0x406e20
    char v145; // 0x406e20
    int64_t v146; // 0x406e20
    if ((v3 & 2) == 0 == v136 == 92) {
        // 0x407518
        result = 1;
        if (*(char *)(v134 + 1) == 0) {
            goto lab_0x407135_3;
        } else {
            int64_t v147 = v134 + 2; // 0x407523
            v148 = (int64_t)*(char *)v147;
            v149 = v147;
            goto lab_0x407043;
        }
    } else {
        // 0x40706b
        v142 = v150;
        v143 = v151;
        v141 = v142;
        if (v136 == 91) {
            char v152 = *(char *)(v134 + 1); // 0x4074c0
            if (v152 == 58) {
                // 0x40779a
                v146 = v134 + 256;
                v144 = v134 + 2;
                goto lab_0x4077cd;
            } else {
                int64_t v153 = v134 + 2;
                if (v152 == 61) {
                    // 0x4076f8
                    result = 1;
                    if (*(char *)v153 == 0) {
                        goto lab_0x407135_3;
                    } else {
                        // 0x407703
                        result = 1;
                        if (*(char *)(v134 + 3) != 61) {
                            goto lab_0x407135_3;
                        } else {
                            // 0x40770e
                            result = 1;
                            if (*(char *)(v134 + 4) != 93) {
                                goto lab_0x407135_3;
                            } else {
                                // 0x407719
                                v143 = (int64_t)*(char *)(v134 + 5);
                                v141 = v134 + 6;
                                goto lab_0x407075;
                            }
                        }
                    }
                } else {
                    // 0x4074d9
                    v145 = v152;
                    if (v152 != 46) {
                        goto lab_0x407043_2;
                    } else {
                        int64_t v154 = v134 + 3; // 0x4074fd
                        char v155 = *(char *)v154; // 0x4074fd
                        result = 1;
                        v138 = v155;
                        v139 = v154;
                        v140 = v153;
                        if (v155 == 0) {
                            goto lab_0x407135_3;
                        } else {
                            goto lab_0x40750e;
                        }
                    }
                }
            }
        } else {
            goto lab_0x407075;
        }
    }
  lab_0x407075:;
    int64_t v156 = v141;
    if ((char)v143 == 93) {
        // 0x4078d0
        v11 = v156;
        v8 = (v3 & 2) == 0 == v136 == 92;
        result = 1;
        if (v107 != 0) {
            goto lab_0x407135_3;
        } else {
            goto lab_0x4070fe;
        }
    } else {
        unsigned char v157 = *(char *)v156; // 0x407081
        v137 = v157;
        v151 = v157;
        v135 = v156;
        v150 = v156 + 1;
        result = 1;
        if (v157 == 0) {
            goto lab_0x407135_3;
        } else {
            goto lab_0x407055;
        }
    }
  lab_0x4077cd:;
    int64_t v158 = v144;
    char v159 = *(char *)v158;
    if (v159 != 58) {
        // 0x4077b0
        v148 = 58;
        v149 = v142;
        if (v159 < 122) {
            // 0x4077bd
            result = 1;
            v144 = v158 + 1;
            if (v146 == v158) {
                goto lab_0x407135_3;
            } else {
                goto lab_0x4077cd;
            }
        } else {
            goto lab_0x407043;
        }
    } else {
        // 0x4077d3
        v145 = v159;
        if (*(char *)(v158 + 1) != 93) {
            goto lab_0x407043_2;
        } else {
            // 0x4077dd
            v143 = (int64_t)*(char *)(v158 + 2);
            v141 = v158 + 3;
            goto lab_0x407075;
        }
    }
  lab_0x407043_2:
    // 0x407043
    v148 = v145;
    v149 = v142;
    goto lab_0x407043;
  lab_0x40750e:;
    int64_t v166 = v139;
    if (v138 != 46) {
        goto lab_0x4074fa;
    } else {
        int64_t v167 = v140;
        if (*(char *)(v167 + 2) == 93) {
            // 0x40785a
            v143 = (int64_t)*(char *)(v167 + 3);
            v141 = v167 + 4;
            goto lab_0x407075;
        } else {
            goto lab_0x4074fa;
        }
    }
  lab_0x4074fa:;
    int64_t v168 = v166 + 1; // 0x4074fd
    char v169 = *(char *)v168; // 0x4074fd
    result = 1;
    v138 = v169;
    v139 = v168;
    v140 = v166;
    if (v169 == 0) {
        goto lab_0x407135_3;
    } else {
        goto lab_0x40750e;
    }
}
// Address range: 0x407910 - 0x407b50
int64_t function_407910(int64_t a1, int64_t a2, uint32_t a3) {
    uint64_t v1 = (int64_t)a3; // 0x40791c
    int64_t wstr = a1; // bp-80, 0x407924
    int64_t wstr2 = a2; // bp-88, 0x407928
    int64_t v2 = a2; // 0x407935
    if (__ctype_get_mb_cur_max() != 1) {
        int64_t ps = 0; // bp-64, 0x407978
        int32_t v3 = mbsrtowcs(NULL, (char **)&wstr, 0, (struct _TYPEDEF___mbstate_t *)&ps); // 0x407984
        uint64_t len = (int64_t)v3 + 1; // 0x407989
        v2 = a2;
        if (len != 0) {
            // 0x407992
            if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                // 0x407b2f
                __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                return &g61;
            }
            int32_t v4 = mbsrtowcs(NULL, (char **)&wstr2, 0, (struct _TYPEDEF___mbstate_t *)&ps); // 0x4079af
            int64_t len2 = (int64_t)v4 + 1; // 0x4079b4
            if (len2 != 0) {
                // 0x4079c1
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                    // 0x407b16
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 301, "gnu_fnmatch");
                    // 0x407b2f
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                    return &g61;
                }
                uint64_t v5 = len2 + len; // 0x4079d5
                if (v5 >= len != v5 < 0x4000000000000000) {
                    // 0x407a75
                    *__errno_location() = 12;
                    // 0x40795f
                    return 0xffffffff;
                }
                int64_t size = 4 * v5; // 0x4079f1
                if (v5 < 2000) {
                    // 0x407a05
                    int64_t v6; // bp-104, 0x407910
                    int64_t wstr3 = (int64_t)&v6 + 15 - (size + 23 & -16) & -16; // 0x407a20
                    mbsrtowcs((int32_t *)wstr3, (char **)&wstr, (int32_t)len, (struct _TYPEDEF___mbstate_t *)&ps);
                    if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) != 0) {
                        int64_t wstr4 = wstr3 + 4 * len; // 0x407a27
                        mbsrtowcs((int32_t *)wstr4, (char **)&wstr2, (int32_t)len2, (struct _TYPEDEF___mbstate_t *)&ps);
                        // 0x40795f
                        return function_405df0(wstr3, wstr4, 4 * len2 - 4 + wstr4, v1 / 4 % 2, a3);
                    }
                    // 0x407afd
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 327, "gnu_fnmatch");
                    // 0x407b16
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 301, "gnu_fnmatch");
                    // 0x407b2f
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                    return &g61;
                }
                int64_t * mem = malloc((int32_t)size); // 0x407a8a
                if (mem == NULL) {
                    // 0x407a75
                    *__errno_location() = 12;
                    // 0x40795f
                    return 0xffffffff;
                }
                // 0x407a97
                mbsrtowcs((int32_t *)mem, (char **)&wstr, (int32_t)len, (struct _TYPEDEF___mbstate_t *)&ps);
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                    // 0x407afd
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 327, "gnu_fnmatch");
                    // 0x407b16
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 301, "gnu_fnmatch");
                    // 0x407b2f
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                    return &g61;
                }
                int64_t v7 = (int64_t)mem; // 0x407a8a
                int64_t wstr5 = 4 * len + v7; // 0x407aa5
                mbsrtowcs((int32_t *)wstr5, (char **)&wstr2, (int32_t)len2, (struct _TYPEDEF___mbstate_t *)&ps);
                int64_t v8 = function_405df0(v7, wstr5, 4 * len2 - 4 + wstr5, v1 / 4 % 2, a3); // 0x407ae5
                free(mem);
                // 0x40795f
                return v8 & 0xffffffff;
            }
            // 0x4079a3
            v2 = wstr2;
        }
    }
    int64_t str = v2; // 0x407937
    // 0x40795f
    return function_406e20(wstr, str, str + (int64_t)strlen((char *)str), v1 / 4 % 2, a3);
}
// Address range: 0x407b50 - 0x407bee
int64_t function_407b50(int64_t a1, int64_t a2) {
    char * file_path = (char *)a1; // 0x407b5e
    char * mode = (char *)a2; // 0x407b5e
    int64_t stream; // 0x407b50
    struct _IO_FILE * file = freopen(file_path, mode, (struct _IO_FILE *)stream); // 0x407b5e
    if (a1 == 0 || file == NULL) {
        // 0x407b88
        return (int64_t)file;
    }
    int32_t fd2 = fileno(file); // 0x407b73
    if (dup2(fd2, fd2) >= 0 || *__errno_location() != 9) {
        // 0x407b88
        return (int64_t)file;
    }
    int32_t fd = open("/dev/null", O_CLOEXEC); // 0x407bae
    if (fd == fd2) {
        // 0x407bd1
        return (int64_t)freopen(file_path, mode, file);
    }
    int32_t v1 = dup2(fd, fd2); // 0x407bc0
    close(fd);
    if (v1 < 0) {
        // 0x407b88
        return (int64_t)file;
    }
    // 0x407bd1
    return (int64_t)freopen(file_path, mode, file);
}
// Address range: 0x407bf0 - 0x407c47
int64_t function_407bf0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407bf0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x407bfa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x407c2b
    int64_t result = -1; // 0x407c34
    if (v1 != -1) {
        // 0x407c36
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407c42
    return result;
}
// Address range: 0x407c50 - 0x407d2f
int64_t function_407c50(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x407c5c
    uint32_t v2 = *v1; // 0x407c5c
    int64_t v3 = a2 & 0xffffffff; // 0x407c61
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x407c64
    uint64_t v5 = (int64_t)*v4; // 0x407c64
    int64_t v6; // 0x407cd2
    if (v3 <= v5) {
      lab_0x407ccc_2:
        // 0x407ccc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x407c52
    int64_t v8 = v2; // 0x407c50
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x407ccc
        goto lab_0x407ccc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x407c88
    int64_t v17; // 0x407c96
    int64_t * v18; // 0x407cb0
    int64_t * v19; // 0x407cb3
    int64_t v20; // 0x407cbe
    int64_t v21; // 0x407c96
    while ((v16 & 0xffffffff) > v10) {
        // 0x407c93
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407cb0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407cc7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x407ccc
            goto lab_0x407ccc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x407ccc
            goto lab_0x407ccc_2;
        }
        // 0x407c82
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x407d0b
    int64_t * v23 = (int64_t *)v22; // 0x407d10
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x407d13
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x407d10
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x407d27
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x407c7d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x407ccc
            goto lab_0x407ccc_2;
        }
        // 0x407c82
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407c93
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407cb0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407cc7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x407ccc
                goto lab_0x407ccc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x407ccc
                goto lab_0x407ccc_2;
            }
            // 0x407c82
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x407cf0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x407d10
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x407d27
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x407ccc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x407d30 - 0x40834c
int64_t function_407d30(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x407d4f
    int64_t v2 = *v1; // 0x407d4f
    char * str2 = (char *)v2; // 0x407d5c
    char c = *str2; // 0x407d5c
    int64_t v3 = v2; // 0x407d88
    int64_t v4 = 0; // 0x407d30
    int32_t v5; // 0x407d30
    int64_t v6; // 0x407d30
    int64_t v7; // 0x407d30
    int64_t v8; // 0x407d30
    int64_t v9; // 0x407d30
    int64_t v10; // 0x407d30
    int64_t v11; // 0x407d30
    int64_t v12; // 0x407d30
    int64_t v13; // 0x407d30
    int64_t str3; // 0x407d30
    int64_t v14; // 0x407d30
    int64_t v15; // 0x407d30
    int64_t v16; // 0x407d30
    int64_t v17; // 0x407d30
    int32_t v18; // 0x407d30
    int32_t v19; // 0x407d30
    int32_t v20; // 0x407d30
    int32_t v21; // 0x407d30
    int32_t v22; // 0x407d30
    int32_t v23; // 0x407d30
    int32_t v24; // 0x407d30
    int32_t v25; // 0x407d30
    int32_t v26; // 0x407d30
    int32_t v27; // 0x407d30
    int32_t v28; // 0x407d30
    int32_t v29; // 0x407d30
    int64_t nmemb; // 0x407d30
    int64_t v30; // 0x407d30
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x407d8c
            while (v31 != 0 == (v31 != 61)) {
                // 0x407d88
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407d98
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x407d9e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x407d68
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x407dcc
                int64_t v34; // 0x407d30
                int64_t v35; // 0x407d30
                if (strncmp(str, str2, n) == 0) {
                    // 0x407dd5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x407f50;
                    }
                }
                int64_t v36 = a4 + 32; // 0x407de6
                int64_t v37 = *(int64_t *)v36; // 0x407dea
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407dc0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407dd5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x407f50;
                        }
                    }
                    // 0x407de6
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
                  lab_0x407e36:
                    // 0x407e36
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
                        goto lab_0x407e90;
                    } else {
                        if (v11 == 0) {
                            // 0x408000
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407e90;
                        } else {
                            if (v39 == 0) {
                                // 0x407fb0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x407e5a;
                                } else {
                                    // 0x407fbc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x407e5a;
                                    } else {
                                        // 0x407fca
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x407e5a;
                                        } else {
                                            goto lab_0x407e90;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x407e5a;
                            }
                        }
                    }
                }
              lab_0x407ea1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408076
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408222
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x408242
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40828f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x4082a9
                            int64_t v45; // 0x4082ab
                            if (*(char *)v42 != 0) {
                                // 0x4082ab
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4082a3
                            while (v17 + nmemb != v42) {
                                // 0x4082a5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4082ab
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x408298
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4082d0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x408084
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4081df
                        free((int64_t *)v17);
                    }
                    // 0x4080d9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4080f0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x407f9e
                    return 63;
                }
                // 0x407ec0
                v5 = v39;
                if (v13 != 0) {
                    // 0x407f44
                    v35 = v13;
                    v34 = v25;
                  lab_0x407f50:;
                    int32_t * v49 = (int32_t *)a7; // 0x407f60
                    uint32_t v50 = *v49; // 0x407f60
                    int64_t v51 = v50; // 0x407f60
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x407f6a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x407f73
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40819f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40814a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x407f9e
                            return 63;
                        }
                        // 0x407fe8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4082ff
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4081fd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408210
                                // 0x407f9e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40810e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408122
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x407f8b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x407f8e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x407f92
                    int64_t result = v59; // 0x407f98
                    if (v58 != 0) {
                        // 0x407f9a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x407f9e
                    return result;
                }
            } else {
                // 0x407d9e
                v5 = v32;
            }
            // break -> 0x407ec5
            break;
        }
    }
    // 0x407ec5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x407edd
        if (*(char *)(v60 + 1) != 45) {
            // 0x407ee7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x407f9e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408029
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x407f16
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x407f26
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407e90:
    // 0x407e90
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407e90
    int64_t v63 = *(int64_t *)v62; // 0x407e94
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407ea1
        goto lab_0x407ea1;
    }
    goto lab_0x407e36;
  lab_0x407e5a:
    // 0x407e5a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x407d30
    int32_t v65; // 0x407d30
    int32_t v66; // 0x407d30
    if (v27 != 0) {
        goto lab_0x407e90;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408010
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407e90;
            } else {
                goto lab_0x407e81;
            }
        } else {
            // 0x407e75
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40816c
                int64_t v67 = (int64_t)mem; // 0x40816c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407e90;
                } else {
                    // 0x40817f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x407e81;
                }
            } else {
                goto lab_0x407e81;
            }
        }
    }
  lab_0x407e81:
    // 0x407e81
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407e90;
}
// Address range: 0x408350 - 0x408916
int64_t function_408350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x408371
    if (v3 < 1) {
        // 0x40852e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40836d
    int32_t v5 = *(int32_t *)a7; // 0x408379
    uint64_t v6 = a1 & 0xffffffff; // 0x40837b
    int64_t v7 = v2; // 0x408380
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x408383
    *v8 = 0;
    int64_t v9; // 0x408350
    int64_t v10; // 0x408350
    int64_t v11; // 0x408350
    int64_t v12; // 0x408350
    int64_t str; // 0x408350
    int64_t v13; // 0x408350
    int64_t v14; // 0x408350
    int64_t v15; // 0x408350
    int64_t v16; // 0x408350
    int64_t v17; // 0x408350
    int32_t v18; // 0x408350
    char v19; // 0x408350
    if (v5 == 0) {
        // 0x408568
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40839a;
    } else {
        // 0x408393
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4083e0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4083e3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4084a8;
            } else {
                int64_t v22 = v7 + 1; // 0x4083f6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x408406
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4084bc;
                } else {
                    goto lab_0x408418;
                }
            }
        } else {
            goto lab_0x40839a;
        }
    }
  lab_0x40839a:
    // 0x40839a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4083a0
    *v24 = 0;
    int64_t v25; // 0x408350
    int64_t v26; // 0x408350
    int64_t v27; // 0x408350
    switch (*(char *)&v2) {
        case 45: {
            // 0x408490
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40849d;
        }
        case 43: {
            // 0x4087a0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40849d;
        }
        default: {
            // 0x4083bc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40871f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408838
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40849d;
                } else {
                    // 0x40872d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4083ca;
                }
            } else {
                goto lab_0x4083ca;
            }
        }
    }
  lab_0x4084a8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4084af
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x408418;
    } else {
        goto lab_0x4084bc;
    }
  lab_0x4083ca:
    // 0x4083ca
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40849d;
  lab_0x40849d:
    // 0x40849d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4084a8;
  lab_0x408418:;
    uint32_t v30 = *(int32_t *)a7; // 0x408418
    int64_t v31 = v30; // 0x408418
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40841a
    if ((int64_t)*v32 > v31) {
        // 0x40841f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x408422
    if (*v33 > v30) {
        // 0x408427
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40842a
    int64_t v35 = v31; // 0x40842e
    int64_t v36 = v15; // 0x40842e
    int64_t v37; // 0x408350
    int64_t v38; // 0x408350
    int64_t v39; // 0x408350
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x408598
        int64_t v41 = v40; // 0x408598
        v2 = v41;
        int64_t v42; // 0x408350
        if (*v33 == v40) {
            // 0x408780
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408788
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4085a4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4085a8
                function_407c50(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4085b8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4085c1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4085ca
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4085e1
            int64_t v47 = v45 & 0xffffffff; // 0x4085e5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4085ee
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4085f4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4085f6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4085d0
            int64_t v49 = v48 & 0xffffffff; // 0x4085d0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4085e1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4085ee
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4085f4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4085f6;
                    }
                }
                // 0x4085d0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408798
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4085f6;
    } else {
        goto lab_0x408434;
    }
  lab_0x4084bc:
    // 0x4084bc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4084bf
    int64_t v51 = v12; // 0x4084bf
    int64_t v52 = v14; // 0x4084bf
    if (*(char *)v10 == 0) {
        goto lab_0x408418;
    } else {
        goto lab_0x4084c5;
    }
  lab_0x408434:;
    int32_t v53 = v35; // 0x408434
    int64_t v54; // 0x408350
    int64_t v55; // 0x408350
    int64_t v56; // 0x408350
    int64_t v57; // 0x408350
    int64_t v58; // 0x408350
    int64_t v59; // 0x408350
    char * v60; // 0x408350
    int64_t v61; // 0x408350
    int64_t v62; // 0x408449
    int64_t v63; // 0x408350
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x408583
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x408586;
    } else {
        // 0x40843c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408350
        int64_t v66 = v65 ? -1 : 1; // 0x408450
        int64_t v67 = (int64_t)"--"; // 0x408350
        int64_t v68 = v62; // 0x408350
        int64_t v69 = 3; // 0x408450
        unsigned char v70 = *(char *)v68; // 0x408450
        char v71 = *(char *)v67; // 0x408450
        char v72 = v71; // 0x408450
        bool v73 = false; // 0x408450
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
            // 0x408540
            if (*(char *)v62 == 45) {
                // 0x408600
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x408600
                if (c == 0) {
                    goto lab_0x40854a;
                } else {
                    // 0x40860d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x408690;
                    } else {
                        if (c == 45) {
                            // 0x408873
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4086e5;
                        } else {
                            // 0x40861e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x408690;
                            } else {
                                // 0x408623
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408644;
                                } else {
                                    // 0x40862a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x408690;
                                    } else {
                                        goto lab_0x408644;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40854a;
            }
        } else {
            uint32_t v75 = *v33; // 0x408460
            v2 = v75;
            int32_t v76 = *v32; // 0x408463
            int64_t v77 = v35 + 1; // 0x408466
            int32_t v78 = v77; // 0x408469
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4087d0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x408477
                    function_407c50(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x408485
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x408586;
        }
    }
  lab_0x4084c5:;
    // 0x4084c5
    int64_t v79; // bp-104, 0x408350
    int64_t v80 = &v79; // 0x40835a
    int64_t v81 = v50 + 1; // 0x4084c5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4084cc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4084d1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4084d5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4084d9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4084e1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4084e6
    int32_t c2 = v84; // 0x4084e6
    char * found_char_pos = strchr(str2, c2); // 0x4084e6
    int64_t v87 = *v82; // 0x4084eb
    v2 = v87;
    int64_t v88 = *v85; // 0x4084f5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x408500
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4087f0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4087bd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40852e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4084e6
    char v91 = *(char *)(v90 + 1); // 0x40851b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4084d5
        if (v91 != 58) {
            // 0x40852e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408744
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408848
                *v8 = 0;
            } else {
                // 0x40882c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40876e
            *v83 = 0;
            // 0x40852e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40874e
        if (v93 != 0) {
            // 0x4087e0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40876e
            *v83 = 0;
            // 0x40852e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408761
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40876e
            *v83 = 0;
            // 0x40852e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4088aa
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40885a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408861
        // 0x40876e
        *v83 = 0;
        // 0x40852e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4086b9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4086bb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4088e0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408891
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408898
            // 0x40852e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4086c6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4086ca
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4086e5;
  lab_0x4085f6:
    // 0x4085f6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x408434;
  lab_0x4086e5:;
    int64_t v99 = function_407d30(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408703
    // 0x40852e
    return v99 & 0xffffffff;
  lab_0x408586:;
    int32_t v100 = v55; // 0x408586
    if (v100 != (int32_t)v59) {
        // 0x40858a
        *(int32_t *)a7 = v100;
    }
    // 0x40852e
    return 0xffffffff;
  lab_0x40854a:
    // 0x40854a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408551
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40852e
    return v99 & 0xffffffff;
  lab_0x408690:
    // 0x408690
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4084c5;
  lab_0x408644:
    // 0x408644
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_407d30(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40866a
    if ((int32_t)v101 != -1) {
        // 0x40852e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40867f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x408690;
}
// Address range: 0x408920 - 0x408976
int64_t function_408920(int64_t a1) {
    // 0x408920
    *(int32_t *)&g50 = g27;
    *(int32_t *)&g51 = g26;
    int64_t v1; // 0x408920
    int64_t result = function_408350(v1, v1, v1, v1, v1, v1, &g50, a1 & 0xffffffff); // 0x408946
    g27 = *(int32_t *)&g50;
    g55 = g53;
    *(int32_t *)&g25 = g52;
    return result;
}
// Address range: 0x408980 - 0x408998
int64_t function_408980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408980
    return function_408920(1);
}
// Address range: 0x4089a0 - 0x4089b3
int64_t function_4089a0(int64_t a1, int64_t a2, char * a3, char (**a4)[13], int32_t a5, int64_t a6) {
    // 0x4089a0
    return function_408920(0);
}
// Address range: 0x4089c0 - 0x4089d5
int64_t function_4089c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4089c0
    return function_408350(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4089e0 - 0x4089f6
int64_t function_4089e0(void) {
    // 0x4089e0
    return function_408920(0);
}
// Address range: 0x408a00 - 0x408a18
int64_t function_408a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408a00
    return function_408350(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408a20 - 0x408a9a
int64_t function_408a20(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x408a2b
    int64_t v2 = (int64_t)&g12; // 0x408a2b
    int32_t * pwc; // 0x408a20
    int64_t v3; // 0x408a20
    int64_t n; // 0x408a20
    if (a2 == 0) {
        goto lab_0x408a72;
    } else {
        // 0x408a2d
        if (a3 == 0) {
            // 0x408a58
            return -2;
        }
        // 0x408a39
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x408a72;
        } else {
            goto lab_0x408a44;
        }
    }
  lab_0x408a72:
    // 0x408a72
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408a20
    pwc = (int32_t *)&v4;
    goto lab_0x408a44;
  lab_0x408a44:;
    char * wstr = (char *)v3; // 0x408a4a
    int64_t ps; // 0x408a20
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x408a4a
    int64_t result = v5; // 0x408a4a
    if (v5 < 0xfffffffe) {
        // 0x408a58
        return result;
    }
    int64_t result2 = result; // 0x408a89
    if ((char)function_408f40(0, v3) == 0) {
        // 0x408a8b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408a58
    return result2;
}
// Address range: 0x408aa0 - 0x408ba4
int64_t function_408aa0(int64_t result, int32_t a2, int64_t a3) {
    // 0x408aa0
    if (a3 == 0) {
        // 0x408ad9
        return 0;
    }
    int64_t v1 = result; // 0x408aac
    int64_t v2 = a3; // 0x408aac
    int64_t result2; // 0x408aa0
    if (result % 8 != 0) {
        char v3 = a2; // 0x408aae
        int64_t v4 = result; // 0x408ab1
        if ((char)result == v3) {
            // 0x408ad9
            return result;
        }
        int64_t v5 = a3; // 0x408ab1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x408ac0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x408ae0;
            }
            // 0x408ac6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x408ad9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x408ad9
        return result2;
    }
  lab_0x408ae0:;
    int64_t result3 = v1; // 0x408b0d
    int64_t v6 = v2; // 0x408b0d
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x408aef
        int64_t v9 = 0x10000 * v8 | v8; // 0x408afc
        int64_t v10 = 0x100000000 * v9 | v9; // 0x408b06
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x408b26
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x408b55
            int64_t v13 = v1 + 8; // 0x408b59
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x408b43
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x408b6c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x408b63
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x408ad9
                return 0;
            }
        }
    }
  lab_0x408b6c:;
    char v15 = a2; // 0x408b6c
    if (*(char *)result3 == v15) {
        // 0x408ad9
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x408b80
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x408ad9
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x408ad9
    return result2;
}
// Address range: 0x408bb0 - 0x408beb
int64_t function_408bb0(int64_t a1) {
    // 0x408bb0
    __fprintf_chk(g32, 1, "%s\n", dcgettext(NULL, "memory exhausted", 5));
    exit(g19);
    // UNREACHABLE
}
// Address range: 0x408bf0 - 0x408c05
int64_t function_408bf0(int64_t a1, int64_t a2) {
    // 0x408bf0
    return *(int64_t *)(a1 + 56);
}
// Address range: 0x408c10 - 0x408c25
int64_t function_408c10(int64_t a1, int64_t a2) {
    // 0x408c10
    return *(int64_t *)(a1 + 64);
}
// Address range: 0x408c30 - 0x408cb3
int64_t function_408c30(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 == 0 ? 15 : a3 - 1;
    *(int64_t *)(a1 + 48) = v1;
    int64_t v2 = a2 == 0 ? 4064 : a2; // 0x408c52
    *(int64_t *)a1 = v2;
    int64_t v3 = function_408bf0(a1, v2); // 0x408c59
    *(int64_t *)(a1 + 8) = v3;
    if (v3 == 0) {
        // 0x408cad
        function_408bb0(a1);
        // UNREACHABLE
    }
    int64_t v4 = v1 + 16 + v3 & (a3 == 0 ? -16 : -a3); // 0x408c6f
    *(int64_t *)(a1 + 16) = v4;
    int64_t v5 = v3 + a1; // 0x408c79
    *(int64_t *)(a1 + 24) = v4;
    *(int64_t *)v3 = v5;
    *(int64_t *)(a1 + 32) = v5;
    *(int64_t *)(v3 + 8) = 0;
    char * v6 = (char *)(a1 + 80); // 0x408c94
    *v6 = *v6 & -7;
    return 1;
}
// Address range: 0x408cc0 - 0x408cd1
int64_t _obstack_begin(int64_t * a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    char * v2 = (char *)(v1 + 80); // 0x408cc0
    *v2 = *v2 & -2;
    *(int64_t *)(v1 + 56) = a4;
    *(int64_t *)(v1 + 64) = a5;
    return function_408c30(v1, (int64_t)a2, (int64_t)a3);
}
// Address range: 0x408ce0 - 0x408cf5
int64_t _obstack_begin_1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a1 + 80); // 0x408ce0
    *v1 = *v1 | 1;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    *(int64_t *)(a1 + 72) = a6;
    return function_408c30(a1, a2, a3);
}
// Address range: 0x408d00 - 0x408dfb
int64_t _obstack_newchunk(int64_t * a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 24); // 0x408d0a
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x408d0e
    uint64_t v4 = *v2 - *v3; // 0x408d0e
    uint64_t v5 = v4 + a2; // 0x408d16
    if (v5 < a2) {
        // 0x408df5
        function_408bb0(v1);
        // UNREACHABLE
    }
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x408d1f
    uint64_t v7 = v5 + *v6; // 0x408d1f
    if (v7 < v5) {
        // 0x408df5
        function_408bb0(v1);
        // UNREACHABLE
    }
    int64_t * v8 = (int64_t *)(v1 + 8); // 0x408d12
    int64_t v9 = *v8; // 0x408d12
    uint64_t v10 = v4 / 8 + 100 + v7; // 0x408d2d
    uint64_t v11 = v7 <= v1 ? v1 : v7; // 0x408d32
    int64_t v12 = v11 >= v10 ? v11 : v10; // 0x408d39
    int64_t v13 = function_408bf0(v1, v12); // 0x408d58
    if (v13 == 0) {
        // 0x408df5
        function_408bb0(v1);
        // UNREACHABLE
    }
    int64_t v14 = v13 + v12; // 0x408d69
    *v8 = v13;
    int64_t * v15 = (int64_t *)(v13 + 8); // 0x408d75
    *v15 = v9;
    *(int64_t *)(v1 + 32) = v14;
    *(int64_t *)v13 = v14;
    int64_t v16 = *v6; // 0x408d81
    int64_t v17 = v13 + 16 + v16 & -1 - v16; // 0x408d93
    int64_t * dest_mem = memcpy((int64_t *)v17, (int64_t *)*v3, (int32_t)v4); // 0x408d99
    char * v18 = (char *)(v1 + 80); // 0x408d9e
    int64_t result = (int64_t)dest_mem; // 0x408da4
    if ((*v18 & 2) == 0) {
        int64_t v19 = *v6; // 0x408da6
        int64_t v20 = v9 + 16 + v19 & -1 - v19; // 0x408db3
        result = v20;
        if (*v3 == v20) {
            // 0x408de0
            *v15 = *(int64_t *)(v9 + 8);
            result = function_408c10(v1, v9);
        }
    }
    // 0x408dbd
    *v3 = v17;
    *v2 = v17 + v4;
    *v18 = *v18 & -3;
    return result;
}
// Address range: 0x408e00 - 0x408e37
int64_t _obstack_allocated_p(int64_t a1, uint64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x408e00
    if (v1 == 0) {
        // 0x408e23
        return 0;
    }
    if (v1 < a2) {
        // 0x408e15
        if (*(int64_t *)v1 >= a2) {
            // break -> 0x408e23
            break;
        }
    }
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x408e1a
    int64_t result = 0; // 0x408e21
    while (v2 != 0) {
        uint64_t v3 = v2;
        if (v3 < a2) {
            // 0x408e15
            result = 1;
            if (*(int64_t *)v3 >= a2) {
                // break -> 0x408e23
                break;
            }
        }
        // 0x408e1a
        v2 = *(int64_t *)(v3 + 8);
        result = 0;
    }
    // 0x408e23
    return result;
}
// Address range: 0x408e40 - 0x408ea5
int64_t _obstack_free(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x408e47
    int64_t v2 = *v1; // 0x408e47
    int64_t result2; // 0x408e40
    if (v2 != 0) {
        char * v3 = (char *)(a1 + 80);
        uint64_t result; // 0x408e5d
        if (v2 < a2) {
            // 0x408e5d
            result = *(int64_t *)v2;
            if (result >= a2) {
                // 0x408e90
                *(int64_t *)(a1 + 24) = a2;
                *(int64_t *)(a1 + 16) = a2;
                *(int64_t *)(a1 + 32) = result;
                *v1 = v2;
                return result;
            }
        }
        int64_t v4 = *(int64_t *)(v2 + 8); // 0x408e65
        int64_t v5 = function_408c10(a1, v2); // 0x408e6c
        *v3 = *v3 | 2;
        result2 = v5;
        while (v4 != 0) {
            uint64_t v6 = v4;
            if (v6 < a2) {
                // 0x408e5d
                result = *(int64_t *)v6;
                if (result >= a2) {
                    // 0x408e90
                    *(int64_t *)(a1 + 24) = a2;
                    *(int64_t *)(a1 + 16) = a2;
                    *(int64_t *)(a1 + 32) = result;
                    *v1 = v6;
                    return result;
                }
            }
            // 0x408e65
            v4 = *(int64_t *)(v6 + 8);
            v5 = function_408c10(a1, v6);
            *v3 = *v3 | 2;
            result2 = v5;
        }
    }
    if (a2 == 0) {
        // 0x408e86
        return result2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x408eb0 - 0x408ed9
int64_t _obstack_memory_used(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x408eb0
    int64_t result = 0; // 0x408eb9
    if (v1 == 0) {
        // 0x408ed2
        return 0;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x408ec6
    result += *(int64_t *)v2 - v2;
    while (v3 != 0) {
        // 0x408ec0
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
        result += *(int64_t *)v2 - v2;
    }
    // 0x408ed2
    return result;
}
// Address range: 0x408ee0 - 0x408f3d
int64_t function_408ee0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x408ee7
    int64_t v2; // 0x408ee0
    int64_t result = function_4055a0(a1, v2); // 0x408ef8
    if ((v2 & 32) != 0) {
        // 0x408f20
        if ((int32_t)result == 0) {
            // 0x408f24
            *__errno_location() = 0;
        }
        // 0x408f1a
        return 0xffffffff;
    }
    // 0x408f01
    if ((int32_t)result == 0) {
        // 0x408f1a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x408f08
    if (v1 == 0) {
        // 0x408f0a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x408f1a
    return result2;
}
// Address range: 0x408f40 - 0x408f9e
int64_t function_408f40(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x408f46
    if (locale == NULL) {
        // 0x408f73
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x408f46
    bool v2; // 0x408f40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g3; // 0x408f40
    int64_t v5 = v1; // 0x408f40
    int64_t v6 = 2; // 0x408f65
    unsigned char v7 = *(char *)v5; // 0x408f65
    char v8 = *(char *)v4; // 0x408f65
    char v9 = v8; // 0x408f65
    bool v10 = false; // 0x408f65
    while (v7 == v8) {
        // 0x408f58
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
    int64_t v12 = (int64_t)"POSIX"; // 0x408f71
    int64_t v13 = v1; // 0x408f71
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x408f73
        return 0;
    }
    int64_t v14 = 6; // 0x408f71
    unsigned char v15 = *(char *)v13; // 0x408f8d
    char v16 = *(char *)v12; // 0x408f8d
    char v17 = v16; // 0x408f8d
    bool v18 = false; // 0x408f8d
    while (v15 == v16) {
        // 0x408f80
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
// Address range: 0x408fa0 - 0x409502
int64_t function_408fa0(void) {
    char * v1 = nl_langinfo(14); // 0x408fb6
    char * v2 = g54; // 0x408fbb
    char * v3; // 0x408fa0
    int64_t v4; // 0x408fa0
    int64_t v5; // 0x408fa0
    int64_t v6; // 0x408fa0
    int64_t v7; // 0x408fa0
    int32_t size; // 0x408fa0
    int32_t size2; // 0x408fa0
    int32_t len; // 0x409072
    int64_t v8; // 0x409072
    char * env_val; // 0x40905d
    if (v2 == NULL) {
        // 0x409058
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4090c5;
        } else {
            // 0x40906a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4090c5;
            } else {
                // 0x40906f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40905d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4094f5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4090c5;
                    } else {
                        // 0x409469
                        size2 = len + 14;
                        goto lab_0x40908b;
                    }
                } else {
                    goto lab_0x40908b;
                }
            }
        }
    } else {
        // 0x408fa0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x408fda;
    }
  lab_0x40930c:;
    // 0x40930c
    struct _IO_FILE * stream; // 0x40914b
    int32_t v10 = __uflow(stream); // 0x40930f
    int64_t v11; // 0x408fa0
    int64_t v12 = v11; // 0x409319
    int64_t v13; // 0x408fa0
    int64_t v14 = v13; // 0x409319
    int32_t v15 = v10; // 0x409319
    int64_t v16; // 0x408fa0
    int64_t v17 = v16; // 0x409319
    int64_t v18 = v11; // 0x409319
    int64_t v19 = v13; // 0x409319
    int64_t v20 = v16; // 0x409319
    if (v10 == -1) {
        // break -> 0x40931f
        goto lab_0x40931f;
    }
    goto lab_0x409199;
  lab_0x40918e:;
    // 0x40918e
    int64_t v90; // 0x408fa0
    int64_t * v32; // 0x409180
    *v32 = v90 + 1;
    int64_t v89; // 0x408fa0
    v12 = v89;
    int64_t v91; // 0x408fa0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x408fa0
    v17 = v92;
    goto lab_0x409199;
  lab_0x409199:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x408fa0
    int32_t v25; // bp-120, 0x408fa0
    int32_t v26; // bp-184, 0x408fa0
    int64_t v27; // 0x40914b
    int64_t v28; // 0x409168
    int64_t v29; // 0x40916d
    int64_t * v30; // 0x409184
    switch (c) {
        case 32: {
            goto lab_0x409180;
        }
        case 10: {
            goto lab_0x409180;
        }
        case 9: {
            goto lab_0x409180;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409371
            int32_t v33; // 0x408fa0
            char v34; // 0x408fa0
            int32_t v35; // 0x40937e
            if (v31 < *v30) {
                // 0x409350
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40937b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409371
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409350
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40937b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409360
                v36 = v33;
            }
            // 0x40944f
            if (v36 == -1) {
                // break -> 0x40931f
                break;
            }
            goto lab_0x409180;
        }
        default: {
            // 0x4091af
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40931f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4091d8
            int64_t v39 = v37 + 4; // 0x4091da
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4091e6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4091e8
            while (v41 == 0) {
                // 0x4091d8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409206
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x409212
            int64_t v45 = v43 + 4; // 0x409214
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x409220
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x409222
            while (v47 == 0) {
                // 0x409212
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40920f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409238
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409248
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40924c
            int64_t v52 = v51 + v48; // 0x409255
            int64_t * mem; // 0x408fa0
            int64_t v53; // 0x408fa0
            int64_t v54; // 0x408fa0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40938b
                int64_t v56 = v55 + 3; // 0x409397
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409271
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409280
            if (mem == NULL) {
                // 0x4094ac
                free((int64_t *)v21);
                function_4055a0(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x409124;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409298
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4092a2
            uint32_t v62 = (int32_t)v59; // 0x4092a5
            int64_t v63; // 0x408fa0
            if (v62 >= 8) {
                // 0x4093b4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4093ce
                int64_t v66 = v61 - v65; // 0x4093d2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4093dd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4093ee
                    int64_t v70 = v69 & 0xffffffff; // 0x4093ee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4093eb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40947f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4092b7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4092bb
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
            int64_t v73 = v51 + 1; // 0x4092cb
            int64_t v74 = v60 - 1; // 0x4092cf
            uint32_t v75 = (int32_t)v73; // 0x4092d4
            int64_t v76; // 0x408fa0
            if (v75 >= 8) {
                // 0x409402
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40940c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40941c
                int64_t v80 = v74 - v79; // 0x409420
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40942b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40943b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409439
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409496
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40949e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4092e6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4092ea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4094e3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4092fe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40918e;
            } else {
                goto lab_0x40930c;
            }
        }
    }
  lab_0x409180:;
    int64_t v93 = v23; // 0x408fa0
    int64_t v94 = v22; // 0x408fa0
    int64_t v95 = v21; // 0x408fa0
    goto lab_0x409180_2;
  lab_0x4090c5:;
    int64_t * mem3 = malloc(size); // 0x4090c5
    int64_t v97 = (int64_t)&g12; // 0x4090d0
    int64_t v98; // 0x408fa0
    int64_t path; // 0x408fa0
    if (mem3 == NULL) {
        goto lab_0x4090a2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4090c5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4090e6;
    }
  lab_0x408fda:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x408fcd
    char v100 = *v3; // 0x408fda
    int64_t v101; // 0x408fa0
    if (v100 == 0) {
        // 0x409034
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x408fa0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x408fa0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x409020
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x409027;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x408ff0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x408ffd
        char v107 = *(char *)v106; // 0x409002
        v102 = v107;
        if (v107 == 0) {
            // 0x409034
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40900b
    v104 = v103 + 1;
  lab_0x409027:
    // 0x409034
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4090a2:;
    char * v108 = (char *)v97;
    g54 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x408fda;
  lab_0x4090e6:;
    int64_t v109 = v98 + path; // 0x4090e6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x409112
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x409141
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409472
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x409165
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409180_2:;
                uint64_t v96 = *v32; // 0x409180
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40930c;
                } else {
                    goto lab_0x40918e;
                }
            }
          lab_0x40931f:
            // 0x40931f
            function_4055a0(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40933e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x409124;
  lab_0x40908b:;
    int64_t * mem4 = malloc(size2); // 0x40908b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x409131
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4090e6;
    } else {
        goto lab_0x4090a2;
    }
  lab_0x409124:
    // 0x409124
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4090a2;
}
// Address range: 0x409510 - 0x40956d
int64_t function_409510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409510
    return function_4018c8();
}
// Address range: 0x409570 - 0x409571
int64_t function_409570(void) {
    // 0x409570
    int64_t result; // 0x409570
    return result;
}
// Address range: 0x409580 - 0x409598
int64_t function_409580(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409580
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x409598 - 0x4095b8
int64_t function_409598(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x4095a2
    while (*(int64_t *)v1 != -1) {
        // 0x4095a3
        v1 -= 8;
    }
    // 0x4095b4
    return result;
}
