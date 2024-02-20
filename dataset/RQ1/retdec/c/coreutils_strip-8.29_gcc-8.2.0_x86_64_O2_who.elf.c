// Address range: 0x401c30 - 0x401c35
int64_t function_401c30(void) {
    // 0x401c30
    abort();
    // UNREACHABLE
}
// Address range: 0x401c35 - 0x401c3a
int64_t function_401c35(void) {
    // 0x401c35
    abort();
    // UNREACHABLE
}
// Address range: 0x401c3a - 0x401c3f
int64_t function_401c3a(void) {
    // 0x401c3a
    abort();
    // UNREACHABLE
}
// Address range: 0x401c3f - 0x401c44
int64_t function_401c3f(void) {
    // 0x401c3f
    abort();
    // UNREACHABLE
}
// Address range: 0x401c44 - 0x401c49
int64_t function_401c44(void) {
    // 0x401c44
    abort();
    // UNREACHABLE
}
// Address range: 0x401c49 - 0x401c4e
int64_t function_401c49(void) {
    // 0x401c49
    abort();
    // UNREACHABLE
}
// Address range: 0x401c4e - 0x401c53
int64_t function_401c4e(void) {
    // 0x401c4e
    abort();
    // UNREACHABLE
}
// Address range: 0x401c60 - 0x401fe5
int64_t function_401c60(int64_t a1, int64_t a2) {
    // 0x401c60
    function_4036c0(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401c60
    function_409e30(0x403520, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    int64_t v2 = 1; // 0x401ca9
    int64_t v3; // 0x401c60
    while (true) {
      lab_0x401cb0_2:
        // 0x401cb0
        v3 = v2;
        int32_t v4 = function_406910(a1 & 0xffffffff, a2, "abdlmpqrstuwHT", &g3, 0, v1);
        switch (v4) {
            case -1: {
                goto lab_0x401f06;
            }
            case 109: {
                // 0x401ec0
                g45 = 1;
                // 0x401cb0
                v2 = v3;
                goto lab_0x401cb0_2;
            }
            default: {
                int64_t v5; // 0x401c60
                if (v4 > 109) {
                    if (v4 == 115) {
                        // 0x401ea0
                        g57 = 1;
                        // 0x401cb0
                        v2 = v3;
                        goto lab_0x401cb0_2;
                    } else {
                        if (v4 > 115) {
                            if (v4 == 117) {
                                // 0x401ef0
                                g46 = 1;
                                g56 = 1;
                                // 0x401cb0
                                v2 = 0;
                                goto lab_0x401cb0_2;
                            } else {
                                if (v4 < 117) {
                                    // 0x401ee0
                                    g48 = 1;
                                    // 0x401cb0
                                    v2 = 0;
                                    goto lab_0x401cb0_2;
                                } else {
                                    if (v4 == 119) {
                                        goto lab_0x401ed0;
                                    } else {
                                        if (v4 != 128) {
                                            // 0x401e3f
                                            function_403080(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401d09
                                        g59 = 1;
                                        // 0x401cb0
                                        v2 = v3;
                                        goto lab_0x401cb0_2;
                                    }
                                }
                            }
                        } else {
                            if (v4 == 113) {
                                // 0x401e50
                                g58 = 1;
                                v5 = v3;
                            } else {
                                if (v4 > 113) {
                                    // 0x401d67
                                    g47 = 1;
                                    g56 = 1;
                                    v5 = 0;
                                } else {
                                    if (v4 != 112) {
                                        // 0x401e3f
                                        function_403080(1);
                                        // UNREACHABLE
                                    }
                                    // 0x401e25
                                    g49 = 1;
                                    v5 = 0;
                                }
                            }
                            // 0x401cb0
                            v2 = v5;
                            goto lab_0x401cb0_2;
                        }
                    }
                } else {
                    if (v4 == 84) {
                        goto lab_0x401ed0;
                    } else {
                        if (v4 > 84) {
                            if (v4 == 98) {
                                // 0x401eb0
                                g52 = 1;
                                v5 = 0;
                            } else {
                                if (v4 > 98) {
                                    if (v4 != 100) {
                                        if (v4 != 108) {
                                          lab_0x401e3f:
                                            // 0x401e3f
                                            function_403080(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401d89
                                        g50 = 1;
                                        g56 = 1;
                                        v5 = 0;
                                    } else {
                                        // 0x401d37
                                        g51 = 1;
                                        g56 = 1;
                                        g53 = 1;
                                        v5 = 0;
                                    }
                                } else {
                                    if (v4 != 97) {
                                        // 0x401e3f
                                        function_403080(1);
                                        // UNREACHABLE
                                    }
                                    // 0x401da9
                                    g52 = 1;
                                    g51 = 1;
                                    g50 = 1;
                                    g49 = 1;
                                    g47 = 1;
                                    g48 = 1;
                                    g46 = 1;
                                    g54 = 1;
                                    g56 = 1;
                                    g53 = 1;
                                    v5 = 0;
                                }
                            }
                        } else {
                            if (v4 == -130) {
                                // 0x401faa
                                function_403080(0);
                                // UNREACHABLE
                            }
                            if (v4 != 72) {
                                if (v4 == -131) {
                                    // 0x401e60
                                    function_405760((int64_t)g31, "who", "GNU coreutils", (int64_t)g20, "Joseph Arceneaux", "David MacKenzie");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401e3f;
                            }
                            // 0x401e10
                            g55 = 1;
                            v5 = v3;
                        }
                        // 0x401cb0
                        v2 = v5;
                        goto lab_0x401cb0_2;
                    }
                }
            }
        }
    }
  lab_0x401f06:
    if (v3 != 0) {
        // 0x401f0b
        g46 = 1;
        g57 = 1;
    }
    // 0x401f19
    if (g53 != 0) {
        // 0x401f22
        g57 = 0;
    }
    int64_t v6 = function_4035c0(2, a2); // 0x401f2e
    g44 = (char)v6 != 0 ? "%Y-%m-%d %H:%M" : "%b %e %H:%M";
    g43 = (char)v6 != 0 ? 16 : 12;
    int32_t v7 = *(int32_t *)0x60e2fc; // 0x401f4c
    int64_t v8 = v7; // 0x401f4c
    int32_t v9 = (int32_t)a1 - v7; // 0x401f53
    if (v9 == 1) {
        // 0x401f9c
        function_402920((char *)*(int64_t *)(8 * v8 + a2), 0);
        // 0x401f70
        return 0;
    }
    if (v9 > 1) {
        if (v9 == 2) {
            // 0x401f93
            g45 = 1;
            // 0x401f61
            function_402920("/var/run/utmp", 1);
            // 0x401f70
            return 0;
        }
    } else {
        int32_t v10 = v9 + 1; // 0x401f5c
        if (v10 < 0 == (v10 & (v9 ^ -0x80000000)) < 0) {
            // 0x401f61
            function_402920("/var/run/utmp", 1);
            // 0x401f70
            return 0;
        }
    }
    // 0x401fb1
    function_4052e0(*(int64_t *)(a2 + 16 + 8 * v8));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x401e3f
    function_403080(1);
    // UNREACHABLE
  lab_0x401ed0:
    // 0x401ed0
    g54 = 1;
    // 0x401cb0
    v2 = v3;
    goto lab_0x401cb0_2;
}
// Address range: 0x401ff0 - 0x40201b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401ff0
    int64_t v1; // 0x401ff0
    __libc_start_main(0x401c60, (int32_t)a4, (char **)&v1, (void (*)())0x409dc0, (void (*)())0x409e20, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40201b - 0x40203a
int64_t function_40201b(void) {
    // 0x40201b
    return &g30;
}
// Address range: 0x40203a - 0x402071
int64_t function_40203a(void) {
    // 0x40203a
    return 0;
}
// Address range: 0x402071 - 0x4020c8
int64_t function_402071(void) {
    // 0x402071
    if (g34 != 0) {
        // 0x4020c7
        int64_t result; // 0x402071
        return result;
    }
    int64_t v1 = g35; // 0x4020a4
    int64_t result2; // 0x4020b6
    if (g35 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x4020b6
        result2 = function_40201b();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x4020a6
        v1++;
    }
    // 0x40209a
    g35 = v1;
    // 0x4020b6
    result2 = function_40201b();
    g34 = 1;
    return result2;
}
// Address range: 0x4020c8 - 0x4020cd
int64_t function_4020c8(void) {
    // 0x4020c8
    return function_40203a();
}
// Address range: 0x4020d0 - 0x402303
int64_t function_4020d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t * str, int64_t * str2, int64_t a9, int64_t * str3) {
    // 0x4020d0
    *(char *)&g19 = (char)a3;
    char v1; // bp-77, 0x4020d0
    if (g56 != 0 == g57 == 0) {
        // 0x402260
        if (strlen((char *)str) < 7) {
            // 0x40227c
            __sprintf_chk(&v1, 1, 8, " %-6s", str);
            goto lab_0x402142;
        } else {
            // 0x402138
            v1 = 0;
            goto lab_0x402142;
        }
    } else {
        // 0x402138
        v1 = 0;
        goto lab_0x402142;
    }
  lab_0x402142:;
    // 0x402142
    char v2; // bp-69, 0x4020d0
    if (g57 != 0) {
        // 0x402159
        v2 = 0;
        goto lab_0x402163;
    } else {
        // 0x402147
        if (strlen((char *)str2) < 12) {
            // 0x4022d8
            __sprintf_chk(&v2, 1, 13, " %10s", str2);
            goto lab_0x402163;
        } else {
            // 0x402159
            v2 = 0;
            goto lab_0x402163;
        }
    }
  lab_0x402163:;
    int64_t v3 = 1; // 0x40216f
    if (g53 != 0) {
        int32_t len = strlen((char *)str3); // 0x402176
        v3 = len < 12 ? 14 : (int64_t)len + 2;
    }
    int64_t v4 = function_4058a0(v3); // 0x40218c
    char * v5 = (char *)v4;
    if (g53 != 0) {
        // 0x4022b0
        __sprintf_chk(v5, 1, -1, " %-12s", str3);
    } else {
        // 0x4021a1
        *v5 = 0;
    }
    int64_t v6 = g54 == 0 ? (int64_t)&g12 : (int64_t)" x"; // 0x4021bb
    int64_t v7 = a2 == 0 ? (int64_t)"   ." : a2; // 0x4021c7
    char * str5; // bp-88, 0x4020d0
    int64_t v8 = function_405b30((int64_t *)&str5, "%-8.*s%s %-12.*s %-*s%s%s %-8s%s", a1 & 0xffffffff, v7, v6, (int32_t)a4); // 0x4021f6
    if ((int32_t)v8 == -1) {
        // 0x4022fe
        function_405af0((int64_t)&str5);
        // UNREACHABLE
    }
    char * str4 = str5; // 0x402208
    int64_t v9 = (int64_t)strlen(str4) + (int64_t)str4;
    int64_t v10 = v9 - 1; // 0x402223
    while (*(char *)v10 == 32) {
        // 0x402223
        v9 = v10;
        v10 = v9 - 1;
    }
    // 0x40222d
    *(char *)v9 = 0;
    puts(str5);
    free((int64_t *)str5);
    free((int64_t *)v4);
    return &g79;
}
// Address range: 0x402310 - 0x402372
int64_t function_402310(int64_t a1) {
    int32_t len = strlen(dcgettext(NULL, "id=", 5)); // 0x40232d
    char * str = (char *)function_4058a0((int64_t)len + 5); // 0x402355
    strcpy(str, dcgettext(NULL, "id=", 5));
    return (int64_t)strncat(str, (char *)(a1 + 40), 4);
}
// Address range: 0x402380 - 0x4023d4
int64_t function_402380(int32_t a1) {
    int32_t timep = a1; // bp-16, 0x402387
    struct tm * time_info = localtime(&timep); // 0x402391
    if (time_info == NULL) {
        // 0x4023c0
        return function_403620((int64_t)timep, (int64_t *)&g39);
    }
    // 0x40239b
    strftime((char *)&g39, 33, g44, time_info);
    return (int64_t)&g39;
}
// Address range: 0x4023e0 - 0x402920
int64_t function_4023e0(int64_t a1, int64_t a2) {
    // 0x4023e0
    int64_t v1; // bp-532, 0x4023e0
    __sprintf_chk((char *)&v1, 1, 12, "%ld", *(int32_t *)(a1 + 4));
    int64_t v2 = a1 + 8; // 0x402419
    char v3 = *(char *)v2; // 0x402419
    int64_t v4; // 0x4023e0
    int64_t v5; // 0x4023e0
    int64_t v6; // bp-520, 0x4023e0
    if (v3 != 47) {
        // 0x4026c0
        v6 = 0x7665642f;
        int64_t v7; // bp-515, 0x4023e0
        int64_t v8 = &v7; // 0x4026df
        v4 = v8;
        v5 = v8;
        if (v3 != 0) {
            goto lab_0x402447;
        } else {
            goto lab_0x402457;
        }
    } else {
        // 0x402426
        v4 = &v6;
        goto lab_0x402447;
    }
  lab_0x402447:;
    int64_t v9 = v4 + 1; // 0x402447
    int64_t v10 = v2 + 1; // 0x40244b
    *(char *)v4 = v3;
    v5 = v9;
    while (a1 + 40 > v10) {
        char v11 = *(char *)v10; // 0x402440
        int64_t v12 = v9; // 0x402445
        v5 = v9;
        if (v11 == 0) {
            // break -> 0x402457
            break;
        }
        v9 = v12 + 1;
        v10++;
        *(char *)v12 = v11;
        v5 = v9;
    }
    goto lab_0x402457;
  lab_0x402457:
    // 0x402457
    *(char *)v5 = 0;
    int64_t v13; // bp-472, 0x4023e0
    int32_t v14 = __xstat(1, (char *)&v6, (struct stat *)&v13); // 0x402467
    int64_t v15 = 63; // 0x40246e
    int64_t v16; // 0x4023e0
    int64_t v17; // 0x402490
    if (v14 != 0) {
        goto lab_0x4024a1;
    } else {
        // 0x402474
        int32_t v18; // 0x4023e0
        v17 = (v18 / 8 & 2 ^ 2) + 43;
        v15 = v17;
        if (v18 != 0) {
            // 0x402620
            if (g18 == (int32_t *)-0x8000000000000000) {
                // 0x402800
                time((int32_t *)&g18);
            }
            int64_t v19 = v18; // 0x40247b
            if (v19 > a2) {
                int64_t v20 = (int64_t)g18; // 0x40263c
                if (v20 < v19 || v20 - 0x1517f > v19) {
                    // 0x402658
                    v16 = (int64_t)dcgettext(NULL, " old ", 5);
                    goto lab_0x40266c;
                } else {
                    int64_t v21 = v20 - v19; // 0x402841
                    int32_t v22 = v21; // 0x402847
                    v16 = (int64_t)"  .  ";
                    if (v22 >= 60) {
                        if (v22 > 0x1517f) {
                            // 0x402906
                            __assert_fail("seconds_idle / (60 * 60) < 24", "src/who.c", 205, "idle_string");
                            return &g79;
                        }
                        uint32_t v23 = ((int32_t)(-0x6e5d4c3b * (0x100000000 * v21 >> 32) / 0x100000000 + v21) >> 11) - (int32_t)(v22 < 0); // 0x40287e
                        __sprintf_chk((char *)&g40, 1, 6, "%02d:%02d", (int64_t)v23, 0x88888889 * (int64_t)(-3600 * v23 + v22) / 0x2000000000);
                        v16 = (int64_t)&g40;
                    }
                    goto lab_0x40266c;
                }
            } else {
                // 0x402658
                v16 = (int64_t)dcgettext(NULL, " old ", 5);
                goto lab_0x40266c;
            }
        } else {
            goto lab_0x4024a1;
        }
    }
  lab_0x4024a1:;
    int64_t v24 = a1 + 76;
    char v25 = *(char *)v24; // 0x4024a1
    int32_t v26 = 0x3f2020; // bp-539, 0x4024a5
    int64_t v27 = v24; // 0x4024b4
    char v28 = v25; // 0x4024b4
    int64_t v29 = v15; // 0x4024b4
    int64_t v30 = v15; // 0x4024b4
    if (v25 == 0) {
        goto lab_0x4026a0;
    } else {
        goto lab_0x4024ba;
    }
  lab_0x4026a0:;
    char * v31 = g41; // 0x4026a8
    char * v32; // 0x4023e0
    int64_t v33; // 0x4023e0
    if (g42 == 0) {
        // 0x402708
        g42 = 1;
        free((int64_t *)v31);
        int64_t v34 = function_4058a0(1); // 0x402720
        char * v35 = (char *)v34;
        g41 = v35;
        v32 = v35;
        v33 = v34;
    } else {
        // 0x4026a0
        v32 = v31;
        v33 = (int64_t)v31;
    }
    // 0x4026b1
    *v32 = 0;
    int64_t v36 = v33; // 0x4026b5
    int64_t v37 = v30; // 0x4026b5
    goto lab_0x4025d8;
  lab_0x4024ba:;
    int64_t v60 = v29;
    char str; // bp-328, 0x4023e0
    int64_t v40 = &str; // 0x4024ba
    int64_t v63 = v40 + 1; // 0x4024df
    int64_t v64 = v27 + 1; // 0x4024e3
    *(char *)v40 = v28;
    while (a1 + 332 > v64) {
        char v65 = *(char *)v64; // 0x4024d8
        int64_t v66 = v64; // 0x4024dd
        int64_t v67 = v63; // 0x4024dd
        char v68 = v65; // 0x4024dd
        if (v65 == 0) {
            // break -> 0x4024ef
            break;
        }
        v63 = v67 + 1;
        v64 = v66 + 1;
        *(char *)v67 = v68;
    }
    // 0x4024ef
    *(char *)v63 = 0;
    char * found_char_pos = strchr(&str, 58); // 0x4024fa
    char * v51; // 0x4023e0
    int64_t v57; // 0x4023e0
    int64_t v52; // 0x4023e0
    int64_t v44; // 0x4023e0
    int64_t len; // 0x4023e0
    int32_t v45; // 0x4023e0
    int64_t v50; // 0x4023e0
    if (found_char_pos == NULL) {
        // 0x402738
        if (str == 0) {
            goto lab_0x40274f;
        } else {
            // 0x402742
            if (g59 != 0) {
                int64_t str2 = function_4034e0((int64_t *)&str); // 0x4028b3
                int64_t v69 = v40; // 0x4028be
                if (str2 == 0) {
                    int32_t v70 = *(int32_t *)v69; // 0x4028e9
                    int64_t v71 = v69 + 4; // 0x4028eb
                    int32_t v72 = (v70 & -0x7f7f7f80 ^ -0x7f7f7f80) & v70 - 0x1010101; // 0x4028f9
                    v44 = v71;
                    v45 = v72;
                    v69 = v71;
                    while (v72 == 0) {
                        // 0x4028e9
                        v70 = *(int32_t *)v69;
                        v71 = v69 + 4;
                        v72 = (v70 & -0x7f7f7f80 ^ -0x7f7f7f80) & v70 - 0x1010101;
                        v44 = v71;
                        v45 = v72;
                        v69 = v71;
                    }
                    goto lab_0x40276a;
                } else {
                    // 0x4028c0
                    len = strlen((char *)str2);
                    v50 = g42;
                    v51 = g41;
                    v52 = str2;
                    goto lab_0x40279d;
                }
            } else {
                goto lab_0x40274f;
            }
        }
    } else {
        // 0x402508
        *found_char_pos = 0;
        int64_t v73 = v40; // 0x40251f
        if (str != 0 && g59 != 0) {
            int64_t v74 = function_4034e0((int64_t *)&str); // 0x40252d
            v73 = v74 == 0 ? v40 : v74;
        }
        int64_t v75 = (int64_t)found_char_pos + 1; // 0x402508
        int64_t v76 = v73;
        char * str3 = (char *)v76; // 0x402543
        int64_t len2 = strlen(str3); // 0x402543
        int64_t v77 = g42; // 0x40254d
        char * v78 = g41; // 0x402559
        len = len2;
        v50 = v77;
        v51 = v78;
        v52 = v76;
        if (v75 == 0) {
            goto lab_0x40279d;
        } else {
            char * str4 = (char *)v75; // 0x40251a
            int64_t v79 = len2 + 4 + (int64_t)strlen(str4); // 0x402587
            char * v80 = v78; // 0x40258f
            if (v79 > v77) {
                // 0x4027d0
                g42 = v79;
                free((int64_t *)v78);
                v80 = (char *)function_4058a0(v79);
                g41 = v80;
            }
            // 0x402595
            __sprintf_chk(v80, 1, -1, "(%s:%s)", str3, str4);
            v57 = v76;
            goto lab_0x4025b8;
        }
    }
  lab_0x4025d8:;
    int64_t v38 = function_402380(*(int32_t *)(a1 + 340)); // 0x4025de
    int64_t result = function_4020d0(32, a1 + 44, v37 & 0xffffffff, 32, v2, v38, &v26, &v1, v36, (int64_t *)&g12); // 0x402606
    return result;
  lab_0x40274f:;
    int32_t v39 = *(int32_t *)v40; // 0x402752
    int64_t v41 = v40 + 4; // 0x402754
    int32_t v42 = (v39 & -0x7f7f7f80 ^ -0x7f7f7f80) & v39 - 0x1010101; // 0x402762
    int64_t v43 = v41; // 0x402768
    v44 = v41;
    v45 = v42;
    while (v42 == 0) {
        // 0x402752
        v39 = *(int32_t *)v43;
        v41 = v43 + 4;
        v42 = (v39 & -0x7f7f7f80 ^ -0x7f7f7f80) & v39 - 0x1010101;
        v43 = v41;
        v44 = v41;
        v45 = v42;
    }
    goto lab_0x40276a;
  lab_0x40279d:;
    char * v53 = v51;
    int64_t v54 = len + 3; // 0x40279d
    char * v55 = v53; // 0x4027a4
    if (v54 > v50) {
        // 0x40280f
        g42 = v54;
        free((int64_t *)v53);
        char * v56 = (char *)function_4058a0(v54);
        g41 = v56;
        v55 = v56;
    }
    // 0x4027a6
    __sprintf_chk(v55, 1, -1, "(%s)", (char *)v52);
    v57 = v52;
    goto lab_0x4025b8;
  lab_0x40266c:
    // 0x40266c
    __sprintf_chk((char *)&v26, 1, 7, "%.*s", 6, (char *)v16);
    int64_t v61 = a1 + 76;
    char v62 = *(char *)v61; // 0x402694
    v27 = v61;
    v28 = v62;
    v29 = v17;
    v30 = v17;
    if (v62 != 0) {
        goto lab_0x4024ba;
    } else {
        goto lab_0x4026a0;
    }
  lab_0x40276a:;
    uint32_t v46 = v45;
    int64_t v47 = v44;
    int64_t v48 = (v46 & 0x8080) == 0 ? v47 + 2 : v47; // 0x402786
    unsigned char v49 = (char)((v46 & 0x8080) == 0 ? v46 / 0x10000 : v46); // 0x40278c
    len = v48 - v40 + (-1 - v49 < v49 ? -4 : -3);
    v50 = g42;
    v51 = g41;
    v52 = v40;
    goto lab_0x40279d;
  lab_0x4025b8:
    // 0x4025b8
    if (v57 != v40) {
        // 0x4025bd
        int64_t v58; // 0x4023e0
        free((int64_t *)v58);
    }
    char * v59 = g41; // 0x4025c5
    v36 = v59 == NULL ? (int64_t)&g12 : (int64_t)v59;
    v37 = v60;
    goto lab_0x4025d8;
}
// Address range: 0x402920 - 0x403080
int64_t function_402920(char * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int16_t * v2; // bp-80, 0x402920
    int64_t v3; // bp-88, 0x402920
    int64_t v4 = function_406a70(v1, &v3, (int64_t *)&v2, a2 & 0xffffffff); // 0x40293d
    if ((int32_t)v4 != 0) {
        // 0x40304b
        error(1, *__errno_location(), "%s", (char *)function_405160(0, 3, v1));
        return &g79;
    }
    // 0x40294a
    int64_t v5; // bp-120, 0x402920
    int64_t v6 = &v5; // 0x40292f
    int64_t v7 = (int64_t)v2; // 0x402951
    if (g58 != 0) {
        // 0x402a74
        if (v3 != 0) {
            int64_t v8 = (int64_t)&g12;
            int64_t v9 = v8; // 0x402a95
            int64_t v10; // 0x402af2
            if (*(char *)(v7 + 44) != 0) {
                // 0x402a97
                v9 = v8;
                if (*(int16_t *)v7 == 7) {
                    // 0x402aeb
                    v10 = function_406a10(v7);
                    __printf_chk(1, "%s%s", (char *)v8, (char *)v10);
                    free((int64_t *)v10);
                    v9 = &g1;
                }
            }
            int64_t v11 = v3 - 1;
            int64_t v12 = v11; // 0x402aad
            int64_t v13 = v7 + 384; // 0x402aad
            while (v11 != 0) {
                int64_t v14 = v13;
                v8 = v9;
                v9 = v8;
                if (*(char *)(v14 + 44) != 0) {
                    // 0x402a97
                    v9 = v8;
                    if (*(int16_t *)v14 == 7) {
                        // 0x402aeb
                        v10 = function_406a10(v14);
                        __printf_chk(1, "%s%s", (char *)v8, (char *)v10);
                        free((int64_t *)v10);
                        v9 = &g1;
                    }
                }
                // 0x402a9e
                v11 = v12 - 1;
                v12 = v11;
                v13 = v14 + 384;
            }
        }
        // 0x402aaf
        __printf_chk(1, dcgettext(NULL, "\n# users=%lu\n", 5));
        // 0x402ad2
        free((int64_t *)*(int64_t *)(v6 + 40));
        return &g79;
    }
    // 0x402961
    if (g55 != 0) {
        char * v15 = dcgettext(NULL, "EXIT", 5); // 0x402db8
        char * v16 = dcgettext(NULL, "COMMENT", 5); // 0x402dce
        char * v17 = dcgettext(NULL, "PID", 5); // 0x402de2
        char * v18 = dcgettext(NULL, "IDLE", 5); // 0x402df6
        char * v19 = dcgettext(NULL, "TIME", 5); // 0x402e0a
        char * v20 = dcgettext(NULL, "LINE", 5); // 0x402e20
        function_4020d0(0xffffffff, (int64_t)dcgettext(NULL, "NAME", 5), 32, 0xffffffff, (int64_t)v20, (int64_t)v19, (int32_t *)v18, (int64_t *)v17, (int64_t)v16, (int64_t *)v15);
    }
    // 0x40296e
    int64_t str2; // 0x402920
    if (g45 != 0) {
        char * str = ttyname(0); // 0x402d78
        if (str == NULL) {
            // 0x402ad2
            free((int64_t *)*(int64_t *)(v6 + 40));
            return &g79;
        }
        int64_t v21 = (int64_t)str; // 0x402d78
        str2 = strncmp(str, "/dev/", 5) != 0 ? v21 : v21 + 5;
    }
    // 0x40297b
    if (v3 == 0) {
        // 0x402ad2
        free((int64_t *)*(int64_t *)(v6 + 40));
        return &g79;
    }
    // 0x402998
    bool v22; // 0x402920
    int64_t v23 = v22 ? -1 : 1;
    int64_t v24 = v3;
    int64_t v25 = v6;
    int64_t v26 = -0x8000000000000000; // 0x402920
    int64_t v27 = v7; // 0x402920
    int64_t v28; // 0x402920
    int64_t v29; // 0x402920
    int16_t v30; // 0x402920
    int64_t v31; // 0x402920
    int64_t v32; // 0x402920
    int16_t * v33; // 0x40299f
    int16_t v34; // 0x40299f
    while (true) {
      lab_0x402998:
        // 0x402998
        v29 = v27;
        v28 = v26;
        v31 = v25;
        v33 = (int16_t *)v29;
        v34 = *v33;
        if (g45 == 0) {
            goto lab_0x4029be;
        } else {
            // 0x4029a5
            v32 = v31;
            v30 = v34;
            if (strncmp((char *)str2, (char *)(v29 + 8), 32) != 0) {
                goto lab_0x402a50;
            } else {
                goto lab_0x4029be;
            }
        }
    }
  lab_0x402ad2:;
    // 0x402ad2
    int64_t v35; // 0x402920
    free((int64_t *)*(int64_t *)(v35 + 40));
    return &g79;
  lab_0x4029be:
    // 0x4029be
    if (g46 == 0) {
        goto lab_0x4029d8;
    } else {
        // 0x4029c7
        if (v34 == 7 == (*(char *)(v29 + 44) != 0)) {
            // 0x402f63
            function_4023e0(v29, v28);
            v32 = v31;
            v30 = *v33;
            goto lab_0x402a50;
        } else {
            goto lab_0x4029d8;
        }
    }
  lab_0x4029d8:;
    // 0x4029d8
    char * v36; // 0x402920
    int64_t v37; // 0x402920
    int64_t v38; // 0x402920
    int64_t v39; // 0x402920
    int64_t v40; // 0x402920
    int64_t v41; // 0x402920
    int64_t v42; // 0x402d05
    int64_t v43; // 0x402d33
    int64_t v44; // 0x402d6c
    if (v34 == 1 == (g47 != 0)) {
        uint32_t v45 = *(int32_t *)(v29 + 4); // 0x402b24
        if (g38 == NULL) {
            int64_t v46 = (int64_t)dcgettext(NULL, "run-level", 5); // 0x402fc4
            int64_t v47 = -1; // 0x402fc4
            int64_t v48 = 0; // 0x402fc4
            while (v47 != 0) {
                int64_t v49 = v46;
                v47--;
                v46 = v49 + v23;
                v48 = v47;
                if (*(char *)v49 == 0) {
                    // break -> 
                    break;
                }
                v48 = 0;
            }
            g38 = (char *)function_4058a0(1 - v48);
        }
        // 0x402b43
        __sprintf_chk(g38, 1, -1, "%s %c", dcgettext(NULL, "run-level", 5), (char)v45);
        if (g37 == NULL) {
            int64_t v50 = (int64_t)dcgettext(NULL, "last=", 5); // 0x402f91
            int64_t v51 = -1; // 0x402f91
            int64_t v52 = 0; // 0x402f91
            while (v51 != 0) {
                int64_t v53 = v50;
                v51--;
                v50 = v53 + v23;
                v52 = v51;
                if (*(char *)v53 == 0) {
                    // break -> 
                    break;
                }
                v52 = 0;
            }
            g37 = (char *)function_4058a0(-v52);
        }
        int64_t v54 = (0x100000000 * (int64_t)(v45 / 0x80000000) | (int64_t)v45) / 256; // 0x402b2e
        char v55 = v54; // 0x402b85
        __sprintf_chk(g37, 1, -1, "%s%c", dcgettext(NULL, "last=", 5), v55 != 78 ? v55 : 83);
        int64_t v56 = (int32_t)v54 % 256 < 127 ? (int64_t)g37 : (int64_t)&g12;
        int64_t v57 = function_402380(*(int32_t *)(v29 + 340)); // 0x402be3
        *(int64_t *)(v31 - 8) = (int64_t)&g12;
        *(int64_t *)(v31 - 16) = v56;
        *(int64_t *)(v31 - 24) = (int64_t)&g12;
        int64_t v58 = v31 - 32; // 0x402bfd
        *(int64_t *)v58 = (int64_t)&g12;
        v36 = g38;
        v37 = v57;
        v40 = v58;
        goto lab_0x402c02;
    } else {
        // 0x4029eb
        if (v34 == 2 == (g52 != 0)) {
            // 0x402c25
            v41 = (int64_t)"system boot";
            v39 = function_402380(*(int32_t *)(v29 + 340));
            goto lab_0x402c3e;
        } else {
            // 0x4029fe
            if (v34 == 3 == (g48 != 0)) {
                // 0x402c61
                v41 = (int64_t)"clock change";
                v39 = function_402380(*(int32_t *)(v29 + 340));
                goto lab_0x402c3e;
            } else {
                // 0x402a11
                if (v34 == 5 == (g49 != 0)) {
                    int64_t v59 = function_402310(v29); // 0x402c8b
                    int64_t v60 = v31 + 52; // 0x402c94
                    __sprintf_chk((char *)v60, 1, 12, "%ld", *(int32_t *)(v29 + 4));
                    int64_t v61 = function_402380(*(int32_t *)(v29 + 340)); // 0x402cb9
                    *(int64_t *)(v31 - 8) = (int64_t)&g12;
                    *(int64_t *)(v31 - 16) = v59;
                    *(int64_t *)(v31 - 24) = v60;
                    int64_t v62 = v31 - 32; // 0x402ce0
                    *(int64_t *)v62 = (int64_t)&g12;
                    v42 = v59;
                    v38 = (int64_t)&g12;
                    v43 = v61;
                    v44 = v62;
                    goto lab_0x402ce5;
                } else {
                    // 0x402a24
                    if (v34 == 6 == (g50 != 0)) {
                        // 0x402d02
                        v42 = function_402310(v29);
                        int64_t v63 = v31 + 52; // 0x402d0e
                        __sprintf_chk((char *)v63, 1, 12, "%ld", *(int32_t *)(v29 + 4));
                        v43 = function_402380(*(int32_t *)(v29 + 340));
                        char * v64 = dcgettext(NULL, "LOGIN", 5); // 0x402d47
                        *(int64_t *)(v31 - 8) = (int64_t)&g12;
                        *(int64_t *)(v31 - 16) = v42;
                        *(int64_t *)(v31 - 24) = v63;
                        v44 = v31 - 32;
                        *(int64_t *)v44 = (int64_t)&g12;
                        v38 = (int64_t)v64;
                        goto lab_0x402ce5;
                    } else {
                        // 0x402a37
                        v32 = v31;
                        v30 = v34;
                        if (v34 == 8 == (g51 != 0)) {
                            int64_t v65 = function_402310(v29); // 0x402e6f
                            int64_t v66 = v31 + 52; // 0x402e8a
                            __sprintf_chk((char *)v66, 1, 12, "%ld", *(int32_t *)(v29 + 4));
                            int64_t v67; // 0x402920
                            if (g36 == NULL) {
                                int64_t v68 = (int64_t)dcgettext(NULL, "term=", 5); // 0x403009
                                int64_t v69 = -1; // 0x403009
                                int64_t v70 = 0; // 0x403009
                                while (v69 != 0) {
                                    int64_t v71 = v68;
                                    v69--;
                                    v68 = v71 + v23;
                                    v70 = v69;
                                    if (*(char *)v71 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v70 = 0;
                                }
                                int64_t v72 = v31 + 8;
                                int64_t * v73 = (int64_t *)v72; // 0x403014
                                *v73 = -2 - v70;
                                int64_t v74 = (int64_t)dcgettext(NULL, "exit=", 5); // 0x40302b
                                int64_t v75 = -1; // 0x40302b
                                int64_t v76 = 0; // 0x40302b
                                while (v75 != 0) {
                                    int64_t v77 = v74;
                                    v75--;
                                    v74 = v77 + v23;
                                    v76 = v75;
                                    if (*(char *)v77 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v76 = 0;
                                }
                                g36 = (char *)function_4058a0(12 - v76 + *v73);
                                v67 = v72;
                            } else {
                                // 0x402e6c
                                v67 = v31 + 8;
                            }
                            int32_t * v78 = (int32_t *)(v31 + 16); // 0x402eb8
                            *v78 = (int32_t)*(int16_t *)(v29 + 334);
                            char * v79 = dcgettext(NULL, "exit=", 5); // 0x402ebd
                            int32_t * v80 = (int32_t *)v67; // 0x402ed9
                            *v80 = (int32_t)*(int16_t *)(v29 + 332);
                            char * v81 = dcgettext(NULL, "term=", 5); // 0x402edd
                            *(int64_t *)(v31 - 8) = (int64_t)*v78;
                            *(int64_t *)(v31 - 16) = (int64_t)v79;
                            __sprintf_chk(g36, 1, -1, "%s%d %s%d", v81, (int64_t)*v80);
                            int64_t v82 = function_402380(*(int32_t *)(v29 + 340)); // 0x402f1d
                            *(int64_t *)(v31 - 24) = (int64_t)g36;
                            *(int64_t *)(v31 - 32) = v65;
                            *(int64_t *)(v31 - 40) = v66;
                            *(int64_t *)(v31 - 48) = (int64_t)&g12;
                            function_4020d0(0xffffffff, (int64_t)&g12, 32, 32, v29 + 8, v82, &g79, (int64_t *)&g79, (int64_t)&g79, (int64_t *)&g79);
                            free((int64_t *)v65);
                            v32 = v31;
                            v30 = *v33;
                        }
                        goto lab_0x402a50;
                    }
                }
            }
        }
    }
  lab_0x402a50:
    // 0x402a50
    v25 = v32;
    v26 = v28;
    if (v30 == 2) {
        // 0x402a56
        v26 = (int64_t)*(int32_t *)(v29 + 340);
    }
    // 0x402a5d
    v24--;
    v27 = v29 + 384;
    v35 = v25;
    if (v24 == 0) {
        // break -> 0x402ad2
        goto lab_0x402ad2;
    }
    goto lab_0x402998;
  lab_0x402c02:
    // 0x402c02
    function_4020d0(0xffffffff, (int64_t)&g12, 32, 0xffffffff, (int64_t)v36, v37, &g79, (int64_t *)&g79, (int64_t)&g79, (int64_t *)&g79);
    v32 = v40 + 32;
    v30 = *v33;
    goto lab_0x402a50;
  lab_0x402c3e:;
    char * v83 = dcgettext(NULL, (char *)v41, 5); // 0x402c40
    *(int64_t *)(v31 - 8) = (int64_t)&g12;
    *(int64_t *)(v31 - 16) = (int64_t)&g12;
    *(int64_t *)(v31 - 24) = (int64_t)&g12;
    int64_t v84 = v31 - 32; // 0x402c5a
    *(int64_t *)v84 = (int64_t)&g12;
    v36 = v83;
    v37 = v39;
    v40 = v84;
    goto lab_0x402c02;
  lab_0x402ce5:
    // 0x402ce5
    function_4020d0(0xffffffff, v38, 32, 32, v29 + 8, v43, &g79, (int64_t *)&g79, (int64_t)&g79, (int64_t *)&g79);
    free((int64_t *)v42);
    v32 = v44 + 32;
    v30 = *v33;
    goto lab_0x402a50;
}
// Address range: 0x403080 - 0x40344d
int64_t function_403080(int64_t a1) {
    int32_t status = a1; // 0x403096
    if (status != 0) {
        // 0x40309a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4030bf
        exit(status);
        // UNREACHABLE
    }
    // 0x4030c6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print information about users who are currently logged in.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -l, --login       print system login processes\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -T, -w, --mesg    add user's message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    __printf_chk(1, dcgettext(NULL, "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: 'am i' or 'mom likes' are usual.\n", 5));
    int64_t v1 = &g2; // bp-136, 0x403226
    bool v2; // 0x403080
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4032b0
    int64_t v6 = *(int64_t *)v5; // 0x4032b4
    int64_t v7 = 4; // 0x4032ba
    while (v6 != 0) {
        int64_t v8 = (int64_t)"who";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4032c6
        char v11 = *(char *)v9; // 0x4032c6
        char v12 = v11; // 0x4032c6
        bool v13 = false; // 0x4032c6
        while (v10 == v11) {
            // 0x4032bc
            v7--;
            int64_t v14 = v9 + v3; // 0x4032c6
            int64_t v15 = v8 + v3; // 0x4032c6
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
            // break -> 0x4032d2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x4032d2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4033e4;
        } else {
            // 0x4033ce
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403423
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403334;
            } else {
                goto lab_0x4033e4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403334;
        } else {
            // 0x40331a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403423
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403334;
            } else {
                goto lab_0x403334;
            }
        }
    }
  lab_0x4033e4:
    // 0x4033e4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403374
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4030bf
    exit(status);
    // UNREACHABLE
  lab_0x403334:
    // 0x403334
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403374
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4030bf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403450 - 0x4034de
int64_t function_403450(int64_t node, int64_t * a2) {
    // 0x403450
    *(int32_t *)&g60 = 2;
    struct addrinfo * addr_info = NULL; // bp-32, 0x40346f
    int32_t v1 = getaddrinfo((char *)node, NULL, (struct addrinfo *)&g60, &addr_info); // 0x40347d
    if (v1 != 0) {
        // 0x4034c8
        if (a2 == NULL) {
            // 0x4034b8
            return 0;
        }
        // 0x4034cf
        *(int32_t *)a2 = v1;
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)addr_info + 32); // 0x40348b
    char * v3 = strdup((char *)(v2 == 0 ? node : v2)); // 0x403497
    if (a2 != NULL && v3 == NULL) {
        // 0x4034a9
        *(int32_t *)a2 = -10;
    }
    // 0x4034b0
    freeaddrinfo(addr_info);
    // 0x4034b8
    return (int64_t)v3;
}
// Address range: 0x4034e0 - 0x4034ea
int64_t function_4034e0(int64_t * a1) {
    // 0x4034e0
    return function_403450((int64_t)a1, (int64_t *)&g61);
}
// Address range: 0x4034f0 - 0x4034fb
int64_t function_4034f0(void) {
    // 0x4034f0
    return (int64_t)gai_strerror(g61);
}
// Address range: 0x403500 - 0x403508
int64_t function_403500(int64_t a1) {
    // 0x403500
    g63 = a1;
    int64_t result; // 0x403500
    return result;
}
// Address range: 0x403510 - 0x403518
int64_t function_403510(int64_t a1) {
    // 0x403510
    g62 = a1;
    int64_t result; // 0x403510
    return result;
}
// Address range: 0x403520 - 0x4035be
int64_t function_403520(void) {
    // 0x403520
    int32_t * err_num; // 0x403536
    if ((int32_t)function_406c80((int64_t)g31) == 0) {
        goto lab_0x40354c;
    } else {
        // 0x403536
        err_num = __errno_location();
        if (g62 == 0) {
            goto lab_0x403563;
        } else {
            // 0x403547
            if (*err_num != 32) {
                goto lab_0x403563;
            } else {
                goto lab_0x40354c;
            }
        }
    }
  lab_0x40354c:;
    int64_t result = function_406c80((int64_t)g33); // 0x403553
    if ((int32_t)result == 0) {
        // 0x40355c
        return result;
    }
    // 0x40359e
    _exit(g21);
    // UNREACHABLE
  lab_0x403563:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40356f
    if (g63 == 0) {
        // 0x4035a9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403583
        error(0, *err_num, "%s: %s", (char *)function_405130((int64_t)g63), v1);
    }
    // 0x40359e
    _exit(g21);
    // UNREACHABLE
}
// Address range: 0x4035c0 - 0x40361e
int64_t function_4035c0(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x4035c6
    if (locale == NULL) {
        // 0x4035f3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4035c6
    bool v2; // 0x4035c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g4; // 0x4035c0
    int64_t v5 = v1; // 0x4035c0
    int64_t v6 = 2; // 0x4035e5
    unsigned char v7 = *(char *)v5; // 0x4035e5
    char v8 = *(char *)v4; // 0x4035e5
    char v9 = v8; // 0x4035e5
    bool v10 = false; // 0x4035e5
    while (v7 == v8) {
        // 0x4035d8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4035f1
    int64_t v13 = v1; // 0x4035f1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4035f3
        return 0;
    }
    int64_t v14 = 6; // 0x4035f1
    unsigned char v15 = *(char *)v13; // 0x40360d
    char v16 = *(char *)v12; // 0x40360d
    char v17 = v16; // 0x40360d
    bool v18 = false; // 0x40360d
    while (v15 == v16) {
        // 0x403600
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
// Address range: 0x403620 - 0x4036bc
int64_t function_403620(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x403620
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403645
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x403676
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x403698
    int64_t v4 = v2 - 1; // 0x4036a8
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x4036b0
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x4036c0 - 0x403759
int64_t function_4036c0(int64_t str) {
    // 0x4036c0
    if (str == 0) {
        // 0x403739
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4036ce
    int64_t result = (int64_t)found_char_pos; // 0x4036ce
    if (found_char_pos == NULL) {
        // 0x403729
        g64 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4036d8
    if (v1 - str < 7) {
        // 0x403729
        g64 = str;
        g32 = str;
        return result;
    }
    // 0x4036e8
    bool v2; // 0x4036c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4036c0
    int64_t v5 = result - 6; // 0x4036c0
    int64_t v6 = 7; // 0x4036f6
    unsigned char v7 = *(char *)v5; // 0x4036f6
    char v8 = *(char *)v4; // 0x4036f6
    char v9 = v8; // 0x4036f6
    bool v10 = false; // 0x4036f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x403700
    int64_t v13 = v1; // 0x403700
    int64_t v14 = 3; // 0x403700
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403729
        g64 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403712
    char v16 = *(char *)v12; // 0x403712
    char v17 = v16; // 0x403712
    bool v18 = false; // 0x403712
    while (v15 == v16) {
        // 0x403702
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
    int64_t v20 = v1; // 0x40371c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40371e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x403729
    g64 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x403760 - 0x403852
int64_t function_403760(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403774
    int64_t result = (int64_t)v1; // 0x403774
    if (result != a1) {
        // 0x403781
        return result;
    }
    int64_t v2 = function_406ce0(); // 0x403790
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403846
    if (v3 == 85) {
        // 0x4037a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403838
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4037ce
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x4037db
        // 0x403781
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403838
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40381d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40382a
    // 0x403781
    return result4;
}
// Address range: 0x403860 - 0x4038b7
int64_t function_403860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403860
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4038a8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4038b7 - 0x404a81
int64_t function_4038b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403901
    int64_t v3 = 0; // 0x403901
    int64_t v4; // 0x4038b7
    int64_t v5; // 0x4038b7
    int64_t v6; // 0x4038b7
    int64_t v7; // 0x4038b7
    int64_t v8; // 0x4038b7
    int64_t v9; // 0x4038b7
    int64_t v10; // 0x4038b7
    int64_t v11; // 0x4038b7
    int64_t v12; // 0x4038b7
    int64_t v13; // 0x4038b7
    int64_t v14; // 0x4038b7
    int64_t v15; // 0x4038b7
    int64_t v16; // 0x4038b7
    int64_t v17; // 0x4038b7
    int64_t v18; // 0x4038b7
    int64_t result; // 0x4038b7
    int64_t v19; // 0x4038b7
    int32_t wc; // bp+132, 0x4038b7
    int64_t ps; // bp+136, 0x4038b7
    char v20; // 0x403e70
    int64_t v21; // 0x403e70
    int64_t v22; // 0x404218
    int64_t v23; // 0x4038b7
    int64_t v24; // 0x404237
    int32_t v25; // 0x4038b7
    while (true) {
      lab_0x403908_2:
        // 0x403908
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4038b7
        int64_t v27; // 0x40393c
        while (true) {
          lab_0x403908:
            // 0x403908
            v5 = v26;
            bool v28 = v15 == v5; // 0x403913
            if (v15 == -1) {
                // 0x403915
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403923
            if (v28) {
                // break (via goto) -> 0x404088
                goto lab_0x404088;
            }
            // 0x40392c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g78 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403f1b
                    if (v25 % 2 == 0) {
                        goto lab_0x403a61;
                    }
                    // 0x40433d
                    v26 = v5 + 1;
                    goto lab_0x403908;
                }
                case 7: {
                    goto lab_0x403a61;
                }
                case 8: {
                    goto lab_0x403a61;
                }
                case 9: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403a61;
                }
                case 12: {
                    goto lab_0x403a61;
                }
                case 13: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x403a2d;
                }
                case 36: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403a61;
                }
                case 38: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403a61;
                }
                case 44: {
                    goto lab_0x403a61;
                }
                case 45: {
                    goto lab_0x403a61;
                }
                case 46: {
                    goto lab_0x403a61;
                }
                case 47: {
                    goto lab_0x403a61;
                }
                case 48: {
                    goto lab_0x403a61;
                }
                case 49: {
                    goto lab_0x403a61;
                }
                case 50: {
                    goto lab_0x403a61;
                }
                case 51: {
                    goto lab_0x403a61;
                }
                case 52: {
                    goto lab_0x403a61;
                }
                case 53: {
                    goto lab_0x403a61;
                }
                case 54: {
                    goto lab_0x403a61;
                }
                case 55: {
                    goto lab_0x403a61;
                }
                case 56: {
                    goto lab_0x403a61;
                }
                case 57: {
                    goto lab_0x403a61;
                }
                case 58: {
                    goto lab_0x403a61;
                }
                case 59: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403a61;
                }
                case 66: {
                    goto lab_0x403a61;
                }
                case 67: {
                    goto lab_0x403a61;
                }
                case 68: {
                    goto lab_0x403a61;
                }
                case 69: {
                    goto lab_0x403a61;
                }
                case 70: {
                    goto lab_0x403a61;
                }
                case 71: {
                    goto lab_0x403a61;
                }
                case 72: {
                    goto lab_0x403a61;
                }
                case 73: {
                    goto lab_0x403a61;
                }
                case 74: {
                    goto lab_0x403a61;
                }
                case 75: {
                    goto lab_0x403a61;
                }
                case 76: {
                    goto lab_0x403a61;
                }
                case 77: {
                    goto lab_0x403a61;
                }
                case 78: {
                    goto lab_0x403a61;
                }
                case 79: {
                    goto lab_0x403a61;
                }
                case 80: {
                    goto lab_0x403a61;
                }
                case 81: {
                    goto lab_0x403a61;
                }
                case 82: {
                    goto lab_0x403a61;
                }
                case 83: {
                    goto lab_0x403a61;
                }
                case 84: {
                    goto lab_0x403a61;
                }
                case 85: {
                    goto lab_0x403a61;
                }
                case 86: {
                    goto lab_0x403a61;
                }
                case 87: {
                    goto lab_0x403a61;
                }
                case 88: {
                    goto lab_0x403a61;
                }
                case 89: {
                    goto lab_0x403a61;
                }
                case 90: {
                    goto lab_0x403a61;
                }
                case 91: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403a61;
                }
                case 94: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403a61;
                }
                case 96: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403a61;
                }
                case 98: {
                    goto lab_0x403a61;
                }
                case 99: {
                    goto lab_0x403a61;
                }
                case 100: {
                    goto lab_0x403a61;
                }
                case 101: {
                    goto lab_0x403a61;
                }
                case 102: {
                    goto lab_0x403a61;
                }
                case 103: {
                    goto lab_0x403a61;
                }
                case 104: {
                    goto lab_0x403a61;
                }
                case 105: {
                    goto lab_0x403a61;
                }
                case 106: {
                    goto lab_0x403a61;
                }
                case 107: {
                    goto lab_0x403a61;
                }
                case 108: {
                    goto lab_0x403a61;
                }
                case 109: {
                    goto lab_0x403a61;
                }
                case 110: {
                    goto lab_0x403a61;
                }
                case 111: {
                    goto lab_0x403a61;
                }
                case 112: {
                    goto lab_0x403a61;
                }
                case 113: {
                    goto lab_0x403a61;
                }
                case 114: {
                    goto lab_0x403a61;
                }
                case 115: {
                    goto lab_0x403a61;
                }
                case 116: {
                    goto lab_0x403a61;
                }
                case 117: {
                    goto lab_0x403a61;
                }
                case 118: {
                    goto lab_0x403a61;
                }
                case 119: {
                    goto lab_0x403a61;
                }
                case 120: {
                    goto lab_0x403a61;
                }
                case 121: {
                    goto lab_0x403a61;
                }
                case 122: {
                    goto lab_0x403a61;
                }
                case 123: {
                    goto lab_0x403a05;
                }
                case 124: {
                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403a05;
                }
                case 126: {
                    goto lab_0x403a2d;
                }
                default: {
                    goto lab_0x403e05;
                }
            }
        }
      lab_0x403e05:
        if (v23 != 1) {
            // 0x404170
            ps = 0;
            int64_t len = v15; // 0x404180
            if (v15 == -1) {
                // 0x404182
                len = strlen((char *)str);
            }
            // 0x4041ae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40420f:
                // 0x40420f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404214
                int64_t v30 = v29 + str;
                v24 = function_406990(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40478a_2;
                    }
                    case -1: {
                        goto lab_0x40478a_2;
                    }
                    case -2: {
                        // 0x40486d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4048a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4048aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4048b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4048b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40478a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40478a_2;
                    }
                    case 1: {
                        goto lab_0x4041e0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40428c
                        char v34 = *(char *)v33; // 0x40429d
                        unsigned char v35; // 0x4038b7
                        if (v34 < 125) {
                            // 0x4042a8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4042bf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403860(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404290
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40429d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4042a8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4042bf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403860(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404290
                            v33++;
                        }
                        goto lab_0x4041e0;
                    }
                }
            }
            goto lab_0x40478a_2;
        } else {
            // 0x403e54
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403a61;
        }
    }
  lab_0x404088:
    // 0x404088
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40498a
        if (v8 > result) {
            // 0x404993
            *(char *)(v12 + result) = 0;
        }
        // 0x403cb7
        return result;
    }
    return function_403860(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403a61:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403a70
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x403c7a_2;
        }
    }
    int64_t v39 = result; // 0x403b71
    char v40 = v20; // 0x403b71
    int64_t v41 = v38; // 0x403b71
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403b71
    int64_t v43 = v36; // 0x403b71
    goto lab_0x403aed;
  lab_0x403c7a_2:
    // 0x403cb7
    return function_403860(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40478a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403a61;
    } else {
        uint64_t v49 = v46 + v5; // 0x40435e
        int64_t v50 = v5 + 1; // 0x404441
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404448
        char v52 = v20; // 0x404448
        int64_t v53 = result; // 0x404448
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404411
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404415
            int64_t v56 = v54 + 1; // 0x40441a
            int64_t v57 = v51 + 1; // 0x404441
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40440c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404411
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404415
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
        goto lab_0x403aed;
    }
  lab_0x4041e0:
    // 0x4041e0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4041ff
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404202
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40478a
        goto lab_0x40478a_2;
    }
    goto lab_0x40420f;
  lab_0x403a2d:
    // 0x403a2d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x403c7a_2;
    }
    goto lab_0x403a61;
  lab_0x403a05:;
    bool v60 = v15 == 1; // 0x403a10
    if (v15 == -1) {
        // 0x403a12
        v60 = *(char *)v1 == 0;
    }
    // 0x403a1e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403a61;
    } else {
        goto lab_0x403a2d;
    }
  lab_0x403aed:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403af2
        *(char *)(v44 + v45) = v40;
    }
    // 0x403af6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403908_2;
}
// Address range: 0x404a90 - 0x404c2e
int64_t function_404a90(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404a92
    int32_t * v3 = __errno_location(); // 0x404aac
    int64_t v4 = (int64_t)g23; // 0x404ab1
    int32_t v5 = *v3; // 0x404abb
    int64_t v6 = v4; // 0x404ad1
    if (v2 >= (int64_t)*(int32_t *)&g26) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404c29
            function_405af0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404ae0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404ae7
        int64_t v9; // 0x404a90
        if (g23 == &g24) {
            int64_t v10 = function_405900(0, v8); // 0x404c0a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g24); // 0x404c0f
            *(int64_t *)&g23 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405900(v4, v8); // 0x404afb
            *(int64_t *)&g23 = v12;
            v9 = v12;
        }
        // 0x404b0a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g26; // 0x404b0a
        int32_t v14 = v7; // 0x404b11
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g26 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404b41
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x404b4b
    int64_t * v17 = (int64_t *)v15; // 0x404b4e
    uint64_t v18 = *v17; // 0x404b4e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404b51
    int64_t result = *v19; // 0x404b51
    int64_t v20; // 0x404a90
    uint64_t v21 = function_403860(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404b74
    if (v18 > v21) {
        // 0x404beb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404b87
    *v17 = v22;
    if (result != (int64_t)&g65) {
        // 0x404b97
        free((int64_t *)result);
    }
    int64_t result2 = function_4058a0(v22); // 0x404bb1
    *v19 = result2;
    int64_t v23; // 0x404a90
    function_403860(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x404beb
    *v3 = v5;
    return result2;
}
// Address range: 0x404c30 - 0x404c64
int64_t function_404c30(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404c37
    int64_t result = function_405aa0(a1 == 0 ? (int64_t)&g66 : a1, 56); // 0x404c56
    return result;
}
// Address range: 0x404c70 - 0x404c7f
int64_t function_404c70(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g66 : a1); // 0x404c7c
    return result;
}
// Address range: 0x404c80 - 0x404c8f
int64_t function_404c80(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g66 : a1; // 0x404c88
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g66;
}
// Address range: 0x404c90 - 0x404cc3
int64_t function_404c90(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g66 + 8 : a1 + 8; // 0x404ca9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x404cae
    uint32_t v3 = *v2; // 0x404cae
    uint32_t v4 = (int32_t)a2 % 32; // 0x404cb2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404cd0 - 0x404ce3
int64_t function_404cd0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g66 + 4 : a1 + 4); // 0x404cdc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404cf0 - 0x404d1b
int64_t function_404cf0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g66 : a1; // 0x404cf8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404d15
        abort();
        // UNREACHABLE
    }
    // 0x404d0c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g66;
}
// Address range: 0x404d20 - 0x404d92
int64_t function_404d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g66 : a5; // 0x404d42
    int32_t * v2 = __errno_location(); // 0x404d4b
    uint32_t v3 = *(int32_t *)v1; // 0x404d6b
    int64_t result = function_403860(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x404d7a
    return result;
}
// Address range: 0x404da0 - 0x404e81
int64_t function_404da0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g66 : a4; // 0x404dc2
    int32_t * v2 = __errno_location(); // 0x404dc8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404de7
    int32_t * v4 = (int32_t *)v1; // 0x404dea
    int64_t v5 = function_403860(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404e05
    int64_t v6 = v5 + 1; // 0x404e0a
    int64_t result = function_4058a0(v6); // 0x404e1f
    function_403860(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404e64
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x404e6d
    return result;
}
// Address range: 0x404e90 - 0x404e9a
int64_t function_404e90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404e90
    return function_404da0(a1, a2, 0, a3);
}
// Address range: 0x404ea0 - 0x404f35
int64_t function_404ea0(void) {
    uint32_t v1 = *(int32_t *)&g26; // 0x404ea0
    int64_t v2 = v1; // 0x404ea0
    int64_t v3 = v2; // 0x404eb4
    if (v1 >= 2) {
        int64_t v4 = &g26;
        int64_t v5 = v4 + 16; // 0x404ed3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g79;
        while (v5 != (int64_t)g23 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404ed0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g79;
        }
    }
    int64_t v6 = v3; // 0x404eed
    if (g24 != 0x60e420) {
        // 0x404eef
        free((int64_t *)g24);
        g24 = 256;
        *(int64_t *)&g25 = (int64_t)&g65;
        v6 = &g79;
    }
    int64_t result = v6; // 0x404f11
    if (g23 != &g24) {
        // 0x404f13
        free(g23);
        *(int64_t *)&g23 = (int64_t)&g24;
        result = &g79;
    }
    // 0x404f26
    *(int32_t *)&g26 = 1;
    return result;
}
// Address range: 0x404f40 - 0x404f51
int64_t function_404f40(void) {
    // 0x404f40
    int64_t v1; // 0x404f40
    return function_404a90(v1, v1, -1, (int64_t *)&g66);
}
// Address range: 0x404f60 - 0x404f6a
int64_t function_404f60(void) {
    // 0x404f60
    int64_t v1; // 0x404f60
    return function_404a90(v1, v1, v1, (int64_t *)&g66);
}
// Address range: 0x404f70 - 0x404f86
int64_t function_404f70(int64_t a1) {
    // 0x404f70
    return function_404a90(0, a1, -1, (int64_t *)&g66);
}
// Address range: 0x404f90 - 0x404fa2
int64_t function_404f90(int64_t a1, int64_t a2) {
    // 0x404f90
    return function_404a90(0, a1, a2, (int64_t *)&g66);
}
// Address range: 0x404fb0 - 0x405018
int64_t function_404fb0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404fc0
    return function_404a90((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405020 - 0x405084
int64_t function_405020(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405030
    return function_404a90((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405090 - 0x40509c
int64_t function_405090(int64_t a1, int64_t a2) {
    // 0x405090
    return function_404fb0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4050a0 - 0x4050af
int64_t function_4050a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4050a0
    return function_405020(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4050b0 - 0x405120
int64_t function_4050b0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g66); // 0x4050bd
    int128_t v2 = __asm_movdqa(g67); // 0x4050c5
    int128_t v3 = __asm_movdqa(g68); // 0x4050cd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4050e2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4050f8
    uint32_t v6 = *v5; // 0x4050f8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4050fd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404a90(0, a1, a2, &v4);
}
// Address range: 0x405120 - 0x40512d
int64_t function_405120(int64_t a1, int64_t a2) {
    // 0x405120
    return function_4050b0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405130 - 0x405141
int64_t function_405130(int64_t a1) {
    // 0x405130
    return function_4050b0(a1, -1, 58);
}
// Address range: 0x405150 - 0x40515a
int64_t function_405150(void) {
    // 0x405150
    int64_t v1; // 0x405150
    return function_4050b0(v1, v1, 58);
}
// Address range: 0x405160 - 0x4051ce
int64_t function_405160(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40517a
    return function_404a90((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4051d0 - 0x40523c
int64_t function_4051d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g66); // 0x4051d7
    int128_t v2 = __asm_movdqa(g67); // 0x4051df
    int128_t v3 = __asm_movdqa(g68); // 0x4051e7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405209
    if (a2 == 0 || a3 == 0) {
        // 0x405237
        abort();
        // UNREACHABLE
    }
    // 0x40521a
    return function_404a90(a1, a4, a5, &v4);
}
// Address range: 0x405240 - 0x405249
int64_t function_405240(void) {
    // 0x405240
    int64_t v1; // 0x405240
    return function_4051d0(v1, v1, v1, v1, -1);
}
// Address range: 0x405250 - 0x405267
int64_t function_405250(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405250
    return function_4051d0(0, a1, a2, a3, -1);
}
// Address range: 0x405270 - 0x405283
int64_t function_405270(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405270
    return function_4051d0(0, a1, a2, a3, a4);
}
// Address range: 0x405290 - 0x40529a
int64_t function_405290(void) {
    // 0x405290
    int64_t v1; // 0x405290
    return function_404a90(v1, v1, v1, &g22);
}
// Address range: 0x4052a0 - 0x4052b2
int64_t function_4052a0(int64_t a1, int64_t a2) {
    // 0x4052a0
    return function_404a90(0, a1, a2, &g22);
}
// Address range: 0x4052c0 - 0x4052d1
int64_t function_4052c0(void) {
    // 0x4052c0
    int64_t v1; // 0x4052c0
    return function_404a90(v1, v1, -1, &g22);
}
// Address range: 0x4052e0 - 0x4052f6
int64_t function_4052e0(int64_t a1) {
    // 0x4052e0
    return function_404a90(0, a1, -1, &g22);
}
// Address range: 0x405300 - 0x4056dd
int64_t function_405300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405398
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40531c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405336
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40537b
    if (a6 < 10) {
        // 0x40538a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405482
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4056e0 - 0x405700
int64_t function_4056e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4056e0
    if (a5 == 0) {
        // 0x4056fb
        return function_405300(a1, a2, a3, a4, a5, 0, (int64_t)&g79);
    }
    int64_t v1 = 0; // 0x4056e7
    v1++;
    int64_t v2 = v1; // 0x4056f9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4056f0
        v1++;
        v2 = v1;
    }
    // 0x4056fb
    return function_405300(a1, a2, a3, a4, a5, v2, (int64_t)&g79);
}
// Address range: 0x405700 - 0x405760
int64_t function_405700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405700
    int64_t v3 = &v2; // 0x405700
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405733
    int64_t v6; // 0x40571d
    int64_t * v7; // 0x40573b
    int64_t v8; // 0x40573b
    int64_t v9; // 0x405747
    if (v5 < 48) {
        // 0x405710
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405753
            break;
        }
    } else {
        // 0x40573b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405753
            break;
        }
    }
    int64_t v10 = 10; // 0x405731
    while (v4 != 9) {
        // 0x405729
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405710
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405753
                break;
            }
        } else {
            // 0x40573b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405753
                break;
            }
        }
        // 0x405729
        v10 = 10;
    }
    // 0x405753
    return function_405300(a1, a2, a3, a4, v3, v10, (int64_t)&g79);
}
// Address range: 0x405760 - 0x40581c
int64_t function_405760(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405760
    int64_t v1; // bp-168, 0x405760
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405760
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405760
    int64_t v8; // 0x405760
    int64_t v9; // bp-56, 0x405760
    int64_t v10; // 0x4057c5
    int64_t v11; // 0x4057e9
    if ((int32_t)v6 < 48) {
        // 0x4057b0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405800
            break;
        }
    } else {
        // 0x4057e2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405800
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4057da
    int64_t v13 = 10; // 0x4057da
    while (v5 != 9) {
        // 0x4057dc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4057b0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405800
                break;
            }
        } else {
            // 0x4057e2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405800
                break;
            }
        }
        // 0x4057d2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405800
    int64_t v14; // bp-136, 0x405760
    int64_t result = function_405300(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g79); // 0x40580f
    return result;
}
// Address range: 0x405820 - 0x405894
int64_t function_405820(int64_t a1) {
    // 0x405820
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405883
    return fputs_unlocked(v1, g31);
}
// Address range: 0x4058a0 - 0x4058ba
int64_t function_4058a0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4058a4
    if (size != 0 != (mem == NULL)) {
        // 0x4058b3
        return (int64_t)mem;
    }
    // 0x4058b5
    function_405af0(size);
    // UNREACHABLE
}
// Address range: 0x4058c0 - 0x4058e1
int64_t function_4058c0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4058c3
    int64_t v2 = v1; // 0x4058c3
    if (v2 < 0) {
        // 0x4058db
        function_405af0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4058d9
        return function_4058a0(v2);
    }
    // 0x4058db
    function_405af0(v2);
    // UNREACHABLE
}
// Address range: 0x4058f0 - 0x4058f2
int64_t function_4058f0(void) {
    // 0x4058f0
    int64_t v1; // 0x4058f0
    return function_4058a0(v1);
}
// Address range: 0x405900 - 0x405936
int64_t function_405900(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405928
        free(v1);
        return (int32_t)&g79 ^ (int32_t)&g79;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405911
    if (a2 != 0 != (mem == NULL)) {
        // 0x405920
        return (int64_t)mem;
    }
    // 0x405931
    function_405af0(a1);
    // UNREACHABLE
}
// Address range: 0x405940 - 0x405961
int64_t function_405940(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405943
    int64_t v2 = v1; // 0x405943
    if (v2 < 0) {
        // 0x40595b
        function_405af0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405959
        return function_405900(a1, v2);
    }
    // 0x40595b
    function_405af0(a1);
    // UNREACHABLE
}
// Address range: 0x405970 - 0x4059f6
int64_t function_405970(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4059cb
            function_405af0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405900(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4059b3
    if (a2 == 0) {
        // 0x4059d8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4059b8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4059cb
        function_405af0(a1);
        // UNREACHABLE
    }
    // 0x40599a
    *(int64_t *)a2 = v2;
    return function_405900(a1, v2 * a3);
}
// Address range: 0x405a00 - 0x405a50
int64_t function_405a00(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405a00
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x405a4a
            function_405af0(a1);
            // UNREACHABLE
        }
        // 0x405a22
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405900(a1, v1);
    }
    if (a2 == 0) {
        // 0x405a35
        *(int64_t *)a2 = 128;
        return function_405900(0, 128);
    }
    // 0x405a48
    if (a2 < 0) {
        // 0x405a4a
        function_405af0(a1);
        // UNREACHABLE
    }
    // 0x405a22
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405900(a1, v1);
}
// Address range: 0x405a50 - 0x405a67
int64_t function_405a50(int64_t a1, int64_t a2) {
    // 0x405a50
    return (int64_t)memset((int64_t *)function_4058a0(a1), 0, (int32_t)a1);
}
// Address range: 0x405a70 - 0x405a9e
int64_t function_405a70(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405a77
    if ((int64_t)v1 < 0) {
        // 0x405a99
        function_405af0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405a99
        function_405af0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x405a8a
    if (mem != NULL) {
        // 0x405a94
        return (int64_t)mem;
    }
    // 0x405a99
    function_405af0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405aa0 - 0x405ac8
int64_t function_405aa0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4058a0(a2); // 0x405aaf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405ad0 - 0x405ae3
int64_t function_405ad0(int64_t str) {
    // 0x405ad0
    return function_405aa0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405af0 - 0x405b21
int64_t function_405af0(int64_t a1) {
    // 0x405af0
    error(g21, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405b30 - 0x405bbf
int64_t function_405b30(int64_t * a1, char * a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x405b30
    int64_t v1; // 0x405b30
    if ((char)v1 != 0) {
        // 0x405b4f
        int128_t v2; // 0x405b30
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 16; // bp-208, 0x405b93
    return function_406c20((int64_t)a1, (int64_t)a2, &v3);
}
// Address range: 0x405bc0 - 0x405c9f
int64_t function_405bc0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x405bcc
    uint32_t v2 = *v1; // 0x405bcc
    int64_t v3 = a2 & 0xffffffff; // 0x405bd1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405bd4
    uint64_t v5 = (int64_t)*v4; // 0x405bd4
    int64_t v6; // 0x405c42
    if (v3 <= v5) {
      lab_0x405c3c_2:
        // 0x405c3c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405bc2
    int64_t v8 = v2; // 0x405bc0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x405c3c
        goto lab_0x405c3c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405bf8
    int64_t v17; // 0x405c06
    int64_t * v18; // 0x405c20
    int64_t * v19; // 0x405c23
    int64_t v20; // 0x405c2e
    int64_t v21; // 0x405c06
    while ((v16 & 0xffffffff) > v10) {
        // 0x405c03
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405c20
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405c37
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x405c3c
            goto lab_0x405c3c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x405c3c
            goto lab_0x405c3c_2;
        }
        // 0x405bf2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x405c7b
    int64_t * v23 = (int64_t *)v22; // 0x405c80
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405c83
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405c80
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405c97
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x405bed
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x405c3c
            goto lab_0x405c3c_2;
        }
        // 0x405bf2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405c03
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405c20
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405c37
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x405c3c
                goto lab_0x405c3c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x405c3c
                goto lab_0x405c3c_2;
            }
            // 0x405bf2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405c60
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405c80
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405c97
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x405c3c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405ca0 - 0x4062bc
int64_t function_405ca0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x405cbf
    int64_t v2 = *v1; // 0x405cbf
    char * str2 = (char *)v2; // 0x405ccc
    char c = *str2; // 0x405ccc
    int64_t v3 = v2; // 0x405cf8
    int64_t v4 = 0; // 0x405ca0
    int32_t v5; // 0x405ca0
    int64_t v6; // 0x405ca0
    int64_t v7; // 0x405ca0
    int64_t v8; // 0x405ca0
    int64_t v9; // 0x405ca0
    int64_t v10; // 0x405ca0
    int64_t v11; // 0x405ca0
    int64_t v12; // 0x405ca0
    int64_t v13; // 0x405ca0
    int64_t str3; // 0x405ca0
    int64_t v14; // 0x405ca0
    int64_t v15; // 0x405ca0
    int64_t v16; // 0x405ca0
    int64_t v17; // 0x405ca0
    int32_t v18; // 0x405ca0
    int32_t v19; // 0x405ca0
    int32_t v20; // 0x405ca0
    int32_t v21; // 0x405ca0
    int32_t v22; // 0x405ca0
    int32_t v23; // 0x405ca0
    int32_t v24; // 0x405ca0
    int32_t v25; // 0x405ca0
    int32_t v26; // 0x405ca0
    int32_t v27; // 0x405ca0
    int32_t v28; // 0x405ca0
    int32_t v29; // 0x405ca0
    int64_t nmemb; // 0x405ca0
    int64_t v30; // 0x405ca0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x405cfc
            while (v31 != 0 == (v31 != 61)) {
                // 0x405cf8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405d08
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x405d0e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405cd8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x405d3c
                int64_t v34; // 0x405ca0
                int64_t v35; // 0x405ca0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405d45
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405ec0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405d56
                int64_t v37 = *(int64_t *)v36; // 0x405d5a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405d30
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405d45
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405ec0;
                        }
                    }
                    // 0x405d56
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
                  lab_0x405da6:
                    // 0x405da6
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
                        goto lab_0x405e00;
                    } else {
                        if (v11 == 0) {
                            // 0x405f70
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405e00;
                        } else {
                            if (v39 == 0) {
                                // 0x405f20
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405dca;
                                } else {
                                    // 0x405f2c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405dca;
                                    } else {
                                        // 0x405f3a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405dca;
                                        } else {
                                            goto lab_0x405e00;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405dca;
                            }
                        }
                    }
                }
              lab_0x405e11:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405fe6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x406192
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x4061b2
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4061ff
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x406219
                            int64_t v45; // 0x40621b
                            if (*(char *)v42 != 0) {
                                // 0x40621b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406213
                            while (v17 + nmemb != v42) {
                                // 0x406215
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40621b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x406208
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406240
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x405ff4
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40614f
                        free((int64_t *)v17);
                    }
                    // 0x406049
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406060
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405f0e
                    return 63;
                }
                // 0x405e30
                v5 = v39;
                if (v13 != 0) {
                    // 0x405eb4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405ec0:;
                    int32_t * v49 = (int32_t *)a7; // 0x405ed0
                    uint32_t v50 = *v49; // 0x405ed0
                    int64_t v51 = v50; // 0x405ed0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405eda
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405ee3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40610f
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4060ba
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405f0e
                            return 63;
                        }
                        // 0x405f58
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40626f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40616d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x406180
                                // 0x405f0e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40607e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406092
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405efb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405efe
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405f02
                    int64_t result = v59; // 0x405f08
                    if (v58 != 0) {
                        // 0x405f0a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405f0e
                    return result;
                }
            } else {
                // 0x405d0e
                v5 = v32;
            }
            // break -> 0x405e35
            break;
        }
    }
    // 0x405e35
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405e4d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405e57
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405f0e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405f99
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405e86
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405e96
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405e00:
    // 0x405e00
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405e00
    int64_t v63 = *(int64_t *)v62; // 0x405e04
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405e11
        goto lab_0x405e11;
    }
    goto lab_0x405da6;
  lab_0x405dca:
    // 0x405dca
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405ca0
    int32_t v65; // 0x405ca0
    int32_t v66; // 0x405ca0
    if (v27 != 0) {
        goto lab_0x405e00;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405f80
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405e00;
            } else {
                goto lab_0x405df1;
            }
        } else {
            // 0x405de5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4060dc
                int64_t v67 = (int64_t)mem; // 0x4060dc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405e00;
                } else {
                    // 0x4060ef
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405df1;
                }
            } else {
                goto lab_0x405df1;
            }
        }
    }
  lab_0x405df1:
    // 0x405df1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405e00;
}
// Address range: 0x4062c0 - 0x406886
int64_t function_4062c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4062e1
    if (v3 < 1) {
        // 0x40649e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4062dd
    int32_t v5 = *(int32_t *)a7; // 0x4062e9
    uint64_t v6 = a1 & 0xffffffff; // 0x4062eb
    int64_t v7 = v2; // 0x4062f0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4062f3
    *v8 = 0;
    int64_t v9; // 0x4062c0
    int64_t v10; // 0x4062c0
    int64_t v11; // 0x4062c0
    int64_t v12; // 0x4062c0
    int64_t str; // 0x4062c0
    int64_t v13; // 0x4062c0
    int64_t v14; // 0x4062c0
    int64_t v15; // 0x4062c0
    int64_t v16; // 0x4062c0
    int64_t v17; // 0x4062c0
    int32_t v18; // 0x4062c0
    char v19; // 0x4062c0
    if (v5 == 0) {
        // 0x4064d8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40630a;
    } else {
        // 0x406303
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406350
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406353
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406418;
            } else {
                int64_t v22 = v7 + 1; // 0x406366
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406376
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40642c;
                } else {
                    goto lab_0x406388;
                }
            }
        } else {
            goto lab_0x40630a;
        }
    }
  lab_0x40630a:
    // 0x40630a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406310
    *v24 = 0;
    int64_t v25; // 0x4062c0
    int64_t v26; // 0x4062c0
    int64_t v27; // 0x4062c0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406400
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40640d;
        }
        case 43: {
            // 0x406710
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40640d;
        }
        default: {
            // 0x40632c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40668f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4067a8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40640d;
                } else {
                    // 0x40669d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40633a;
                }
            } else {
                goto lab_0x40633a;
            }
        }
    }
  lab_0x406418:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40641f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406388;
    } else {
        goto lab_0x40642c;
    }
  lab_0x40633a:
    // 0x40633a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40640d;
  lab_0x40640d:
    // 0x40640d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406418;
  lab_0x406388:;
    uint32_t v30 = *(int32_t *)a7; // 0x406388
    int64_t v31 = v30; // 0x406388
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40638a
    if ((int64_t)*v32 > v31) {
        // 0x40638f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406392
    if (*v33 > v30) {
        // 0x406397
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40639a
    int64_t v35 = v31; // 0x40639e
    int64_t v36 = v15; // 0x40639e
    int64_t v37; // 0x4062c0
    int64_t v38; // 0x4062c0
    int64_t v39; // 0x4062c0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406508
        int64_t v41 = v40; // 0x406508
        v2 = v41;
        int64_t v42; // 0x4062c0
        if (*v33 == v40) {
            // 0x4066f0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4066f8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406514
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406518
                function_405bc0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406528
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406531
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40653a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406551
            int64_t v47 = v45 & 0xffffffff; // 0x406555
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40655e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406564
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406566;
                }
            }
            int64_t v48 = v47 + 1; // 0x406540
            int64_t v49 = v48 & 0xffffffff; // 0x406540
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406551
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40655e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406564
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406566;
                    }
                }
                // 0x406540
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406708
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406566;
    } else {
        goto lab_0x4063a4;
    }
  lab_0x40642c:
    // 0x40642c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40642f
    int64_t v51 = v12; // 0x40642f
    int64_t v52 = v14; // 0x40642f
    if (*(char *)v10 == 0) {
        goto lab_0x406388;
    } else {
        goto lab_0x406435;
    }
  lab_0x4063a4:;
    int32_t v53 = v35; // 0x4063a4
    int64_t v54; // 0x4062c0
    int64_t v55; // 0x4062c0
    int64_t v56; // 0x4062c0
    int64_t v57; // 0x4062c0
    int64_t v58; // 0x4062c0
    int64_t v59; // 0x4062c0
    char * v60; // 0x4062c0
    int64_t v61; // 0x4062c0
    int64_t v62; // 0x4063b9
    int64_t v63; // 0x4062c0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4064f3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4064f6;
    } else {
        // 0x4063ac
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4062c0
        int64_t v66 = v65 ? -1 : 1; // 0x4063c0
        int64_t v67 = (int64_t)"--"; // 0x4062c0
        int64_t v68 = v62; // 0x4062c0
        int64_t v69 = 3; // 0x4063c0
        unsigned char v70 = *(char *)v68; // 0x4063c0
        char v71 = *(char *)v67; // 0x4063c0
        char v72 = v71; // 0x4063c0
        bool v73 = false; // 0x4063c0
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
            // 0x4064b0
            if (*(char *)v62 == 45) {
                // 0x406570
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406570
                if (c == 0) {
                    goto lab_0x4064ba;
                } else {
                    // 0x40657d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406600;
                    } else {
                        if (c == 45) {
                            // 0x4067e3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406655;
                        } else {
                            // 0x40658e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406600;
                            } else {
                                // 0x406593
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4065b4;
                                } else {
                                    // 0x40659a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406600;
                                    } else {
                                        goto lab_0x4065b4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4064ba;
            }
        } else {
            uint32_t v75 = *v33; // 0x4063d0
            v2 = v75;
            int32_t v76 = *v32; // 0x4063d3
            int64_t v77 = v35 + 1; // 0x4063d6
            int32_t v78 = v77; // 0x4063d9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406740
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4063e7
                    function_405bc0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4063f5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4064f6;
        }
    }
  lab_0x406435:;
    // 0x406435
    int64_t v79; // bp-104, 0x4062c0
    int64_t v80 = &v79; // 0x4062ca
    int64_t v81 = v50 + 1; // 0x406435
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40643c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406441
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406445
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406449
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406451
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406456
    int32_t c2 = v84; // 0x406456
    char * found_char_pos = strchr(str2, c2); // 0x406456
    int64_t v87 = *v82; // 0x40645b
    v2 = v87;
    int64_t v88 = *v85; // 0x406465
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406470
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406760
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40672d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40649e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406456
    char v91 = *(char *)(v90 + 1); // 0x40648b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406445
        if (v91 != 58) {
            // 0x40649e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4066b4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4067b8
                *v8 = 0;
            } else {
                // 0x40679c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4066de
            *v83 = 0;
            // 0x40649e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4066be
        if (v93 != 0) {
            // 0x406750
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4066de
            *v83 = 0;
            // 0x40649e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4066d1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4066de
            *v83 = 0;
            // 0x40649e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40681a
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4067ca
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4067d1
        // 0x4066de
        *v83 = 0;
        // 0x40649e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406629
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40662b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406850
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406801
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406808
            // 0x40649e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406636
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40663a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406655;
  lab_0x406566:
    // 0x406566
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4063a4;
  lab_0x406655:;
    int64_t v99 = function_405ca0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406673
    // 0x40649e
    return v99 & 0xffffffff;
  lab_0x4064f6:;
    int32_t v100 = v55; // 0x4064f6
    if (v100 != (int32_t)v59) {
        // 0x4064fa
        *(int32_t *)a7 = v100;
    }
    // 0x40649e
    return 0xffffffff;
  lab_0x4064ba:
    // 0x4064ba
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4064c1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40649e
    return v99 & 0xffffffff;
  lab_0x406600:
    // 0x406600
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406435;
  lab_0x4065b4:
    // 0x4065b4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405ca0(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x4065da
    if ((int32_t)v101 != -1) {
        // 0x40649e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4065ef
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406600;
}
// Address range: 0x406890 - 0x4068e6
int64_t function_406890(int64_t a1) {
    // 0x406890
    *(int32_t *)&g69 = g29;
    *(int32_t *)&g70 = g28;
    int64_t v1; // 0x406890
    int64_t result = function_4062c0(v1, v1, v1, v1, v1, v1, &g69, a1 & 0xffffffff); // 0x4068b6
    g29 = *(int32_t *)&g69;
    g74 = g72;
    *(int32_t *)&g27 = g71;
    return result;
}
// Address range: 0x4068f0 - 0x406908
int64_t function_4068f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4068f0
    return function_406890(1);
}
// Address range: 0x406910 - 0x406923
int64_t function_406910(int64_t a1, int64_t a2, char * a3, char (**a4)[4], int32_t a5, int64_t a6) {
    // 0x406910
    return function_406890(0);
}
// Address range: 0x406930 - 0x406945
int64_t function_406930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406930
    return function_4062c0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406950 - 0x406966
int64_t function_406950(void) {
    // 0x406950
    return function_406890(0);
}
// Address range: 0x406970 - 0x406988
int64_t function_406970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406970
    return function_4062c0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406990 - 0x406a0a
int64_t function_406990(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40699b
    int64_t v2 = (int64_t)&g12; // 0x40699b
    int32_t * pwc; // 0x406990
    int64_t v3; // 0x406990
    int64_t n; // 0x406990
    if (a2 == 0) {
        goto lab_0x4069e2;
    } else {
        // 0x40699d
        if (a3 == 0) {
            // 0x4069c8
            return -2;
        }
        // 0x4069a9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4069e2;
        } else {
            goto lab_0x4069b4;
        }
    }
  lab_0x4069e2:
    // 0x4069e2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406990
    pwc = (int32_t *)&v4;
    goto lab_0x4069b4;
  lab_0x4069b4:;
    char * wstr = (char *)v3; // 0x4069ba
    int64_t ps; // 0x406990
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4069ba
    int64_t result = v5; // 0x4069ba
    if (v5 < 0xfffffffe) {
        // 0x4069c8
        return result;
    }
    int64_t result2 = result; // 0x4069f9
    if ((char)function_4035c0(0, v3) == 0) {
        // 0x4069fb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4069c8
    return result2;
}
// Address range: 0x406a10 - 0x406a6e
int64_t function_406a10(int64_t a1) {
    uint64_t result = function_4058a0(33); // 0x406a1e
    char * str = (char *)result; // 0x406a32
    strncpy(str, (char *)(a1 + 44), 32);
    *(char *)(result + 32) = 0;
    int64_t v1 = result + (int64_t)strlen(str); // 0x406a43
    if (result >= v1) {
        // 0x406a51
        return result;
    }
    int64_t v2 = v1; // 0x406a49
    v2--;
    char * v3 = (char *)v2; // 0x406a4b
    while (*v3 == 32) {
        // 0x406a60
        *v3 = 0;
        if (result == v2) {
            // break -> 0x406a51
            break;
        }
        v2--;
        v3 = (char *)v2;
    }
    // 0x406a51
    return result;
}
// Address range: 0x406a70 - 0x406c18
int64_t function_406a70(int64_t a1, int64_t * a2, int64_t * a3, uint64_t a4) {
    // 0x406a70
    utmpxname((char *)a1);
    setutxent();
    struct utmpx * v1 = getutxent(); // 0x406aa7
    int64_t v2 = 0; // 0x406ab2
    int64_t v3 = 0; // 0x406ab2
    int64_t v4; // 0x406a70
    int64_t v5; // 0x406a70
    int64_t v6; // 0x406a70
    struct utmpx * v7; // 0x406a70
    struct utmpx * v8; // 0x406a70
    int64_t v9; // 0x406a70
    int64_t v10; // 0x406a70
    int64_t v11; // 0x406a70
    uint64_t v12; // 0x406a70
    int64_t v13; // 0x406a70
    int64_t v14; // 0x406a70
    int64_t v15; // 0x406a70
    int64_t v16; // 0x406a70
    int64_t v17; // 0x406a70
    if (v1 != NULL) {
        struct utmpx * v18 = v1; // 0x406aa7
        int64_t v19 = 0; // 0x406a70
        int64_t v20 = a1;
        int64_t v21 = 0; // 0x406a70
        int64_t v22 = 0; // 0x406a70
        while (true) {
            // 0x406ab4
            v11 = v22;
            v9 = v21;
            v14 = v20;
            v4 = v19;
            v7 = v18;
            while (true) {
              lab_0x406ab4:
                // 0x406ab4
                v8 = v7;
                v5 = v4;
                v15 = v14;
                v10 = v9;
                v12 = v11;
                v6 = (int64_t)v8;
                if (*(char *)(v6 + 44) == 0) {
                    goto lab_0x406ac6;
                } else {
                    // 0x406abb
                    if (v8->e0 == 7) {
                        // 0x406b50
                        v16 = v15;
                        if (a4 % 2 == 0) {
                            goto lab_0x406acb;
                        } else {
                            uint32_t pid = *(int32_t *)(v6 + 4); // 0x406b59
                            int64_t v23 = pid; // 0x406b59
                            v16 = v23;
                            if (pid < 1) {
                                goto lab_0x406acb;
                            } else {
                                // 0x406b65
                                v16 = v23;
                                if (kill(pid, 0) >= 0) {
                                    goto lab_0x406acb;
                                } else {
                                    int32_t v24 = *__errno_location(); // 0x406b79
                                    v13 = v23;
                                    if (v24 == 3) {
                                        // break -> 0x406aa7
                                        break;
                                    }
                                    // 0x406b82
                                    v17 = v23;
                                    if (v12 != v10) {
                                        goto lab_0x406ad4;
                                    } else {
                                        goto lab_0x406b90;
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x406ac6;
                    }
                }
            }
          lab_0x406aa7:
            // 0x406aa7
            v20 = v13;
            v18 = getutxent();
            v19 = v5;
            v21 = v10;
            v22 = v12;
            v2 = v12;
            v3 = v5;
            if (v18 == NULL) {
                // break -> 0x406b25
                break;
            }
        }
    }
  lab_0x406b25:
    // 0x406b25
    endutxent();
    *a2 = v2;
    *a3 = v3;
    return 0;
  lab_0x406ac6:
    // 0x406ac6
    v13 = v15;
    v16 = v15;
    if ((a4 & 2) != 0) {
        // break -> 0x406aa7
        goto lab_0x406aa7;
    }
    goto lab_0x406acb;
  lab_0x406acb:
    // 0x406acb
    v17 = v16;
    if (v12 == v10) {
        goto lab_0x406b90;
    } else {
        goto lab_0x406ad4;
    }
  lab_0x406b90:;
    int64_t v25 = v17;
    int64_t v26; // 0x406a70
    int64_t v27; // 0x406a70
    int64_t v28; // 0x406a70
    if (v5 == 0) {
        // 0x406bd4
        v27 = 1;
        v26 = 1;
        v28 = 384;
        if (v12 != 0) {
            uint128_t v29 = 384 * (int128_t)v12; // 0x406be1
            if ((int64_t)v29 < 0) {
                // 0x406c13
                function_405af0(v25);
                // UNREACHABLE
            }
            if (v29 % 0x1ff0000000000000001 != 0) {
                // 0x406c13
                function_405af0(v25);
                // UNREACHABLE
            }
            // 0x406bf4
            v27 = v12 + 1;
            v26 = v10;
            v28 = 384 * v12;
        }
    } else {
        if (v12 >= 0x38e38e38e38e38) {
            // 0x406c13
            function_405af0(v25);
            // UNREACHABLE
        }
        int64_t v30 = v12 + 1; // 0x406ba7
        int64_t v31 = v12 / 2 + v30; // 0x406bae
        v27 = v30;
        v26 = v31;
        v28 = 384 * v31;
    }
    int64_t v32 = v27; // 0x406bcf
    int64_t v33 = v26; // 0x406bcf
    int64_t v34 = function_405900(v5, v28); // 0x406bcf
    goto lab_0x406ad8;
  lab_0x406ad4:
    // 0x406ad4
    v32 = v12 + 1;
    v33 = v10;
    v34 = v5;
    goto lab_0x406ad8;
  lab_0x406ad8:;
    int64_t v35 = v34 + 384 * v12; // 0x406ae6
    *(int64_t *)v35 = *(int64_t *)v8;
    int64_t v36 = v35 + 8 & -8; // 0x406af7
    *(int64_t *)(v35 + 376) = *(int64_t *)(v6 + 376);
    int64_t v37 = v35 - v36; // 0x406b02
    uint64_t v38 = (v37 + 384) / 8 % 0x20000000; // 0x406b13
    __asm_rep_movsq_memcpy((char *)v36, (char *)(v6 - v37), v38);
    struct utmpx * v39 = getutxent(); // 0x406b18
    v11 = v32;
    v9 = v33;
    bool v40; // 0x406a70
    v14 = v38 * (v40 ? -8 : 8) + v36;
    v4 = v34;
    v7 = v39;
    v2 = v32;
    v3 = v34;
    if (v39 == NULL) {
        // break (via goto) -> 0x406b25
        goto lab_0x406b25;
    }
    goto lab_0x406ab4;
}
// Address range: 0x406c20 - 0x406c79
int64_t function_406c20(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x406c20
    int32_t v1; // bp-16, 0x406c20
    int64_t v2; // 0x406c20
    int64_t v3 = function_407370(0, (int64_t *)&v1, a2, (int64_t)a3, v2, v2, v2, (int64_t)&g79); // 0x406c35
    if (v3 == 0) {
        // 0x406c52
        return 0xffffffff;
    }
    // 0x406c3f
    int64_t result; // 0x406c20
    if (v1 > -1) {
        // 0x406c4d
        *(int64_t *)a1 = v3;
        result = v1;
    } else {
        // 0x406c58
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x406c52
    return result;
}
// Address range: 0x406c80 - 0x406cdd
int64_t function_406c80(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406c87
    int64_t v2; // 0x406c80
    int64_t result = function_407250(a1, v2); // 0x406c98
    if ((v2 & 32) != 0) {
        // 0x406cc0
        if ((int32_t)result == 0) {
            // 0x406cc4
            *__errno_location() = 0;
        }
        // 0x406cba
        return 0xffffffff;
    }
    // 0x406ca1
    if ((int32_t)result == 0) {
        // 0x406cba
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406ca8
    if (v1 == 0) {
        // 0x406caa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x406cba
    return result2;
}
// Address range: 0x406ce0 - 0x407242
int64_t function_406ce0(void) {
    char * v1 = nl_langinfo(14); // 0x406cf6
    char * v2 = g73; // 0x406cfb
    char * v3; // 0x406ce0
    int64_t v4; // 0x406ce0
    int64_t v5; // 0x406ce0
    int64_t v6; // 0x406ce0
    int64_t v7; // 0x406ce0
    int32_t size; // 0x406ce0
    int32_t size2; // 0x406ce0
    int32_t len; // 0x406db2
    int64_t v8; // 0x406db2
    char * env_val; // 0x406d9d
    if (v2 == NULL) {
        // 0x406d98
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406e05;
        } else {
            // 0x406daa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406e05;
            } else {
                // 0x406daf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x406d9d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407235
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406e05;
                    } else {
                        // 0x4071a9
                        size2 = len + 14;
                        goto lab_0x406dcb;
                    }
                } else {
                    goto lab_0x406dcb;
                }
            }
        }
    } else {
        // 0x406ce0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x406d1a;
    }
  lab_0x40704c:;
    // 0x40704c
    struct _IO_FILE * stream; // 0x406e8b
    int32_t v10 = __uflow(stream); // 0x40704f
    int64_t v11; // 0x406ce0
    int64_t v12 = v11; // 0x407059
    int64_t v13; // 0x406ce0
    int64_t v14 = v13; // 0x407059
    int32_t v15 = v10; // 0x407059
    int64_t v16; // 0x406ce0
    int64_t v17 = v16; // 0x407059
    int64_t v18 = v11; // 0x407059
    int64_t v19 = v13; // 0x407059
    int64_t v20 = v16; // 0x407059
    if (v10 == -1) {
        // break -> 0x40705f
        goto lab_0x40705f;
    }
    goto lab_0x406ed9;
  lab_0x406ece:;
    // 0x406ece
    int64_t v90; // 0x406ce0
    int64_t * v32; // 0x406ec0
    *v32 = v90 + 1;
    int64_t v89; // 0x406ce0
    v12 = v89;
    int64_t v91; // 0x406ce0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406ce0
    v17 = v92;
    goto lab_0x406ed9;
  lab_0x406ed9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406ce0
    int32_t v25; // bp-120, 0x406ce0
    int32_t v26; // bp-184, 0x406ce0
    int64_t v27; // 0x406e8b
    int64_t v28; // 0x406ea8
    int64_t v29; // 0x406ead
    int64_t * v30; // 0x406ec4
    switch (c) {
        case 32: {
            goto lab_0x406ec0;
        }
        case 10: {
            goto lab_0x406ec0;
        }
        case 9: {
            goto lab_0x406ec0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4070b1
            int32_t v33; // 0x406ce0
            char v34; // 0x406ce0
            int32_t v35; // 0x4070be
            if (v31 < *v30) {
                // 0x407090
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4070bb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4070b1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407090
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4070bb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4070a0
                v36 = v33;
            }
            // 0x40718f
            if (v36 == -1) {
                // break -> 0x40705f
                break;
            }
            goto lab_0x406ec0;
        }
        default: {
            // 0x406eef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40705f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406f18
            int64_t v39 = v37 + 4; // 0x406f1a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406f26
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406f28
            while (v41 == 0) {
                // 0x406f18
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406f46
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406f52
            int64_t v45 = v43 + 4; // 0x406f54
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406f60
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406f62
            while (v47 == 0) {
                // 0x406f52
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406f4f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406f78
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406f88
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x406f8c
            int64_t v52 = v51 + v48; // 0x406f95
            int64_t * mem; // 0x406ce0
            int64_t v53; // 0x406ce0
            int64_t v54; // 0x406ce0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4070cb
                int64_t v56 = v55 + 3; // 0x4070d7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406fb1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406fc0
            if (mem == NULL) {
                // 0x4071ec
                free((int64_t *)v21);
                function_407250(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x406e64;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406fd8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406fe2
            uint32_t v62 = (int32_t)v59; // 0x406fe5
            int64_t v63; // 0x406ce0
            if (v62 >= 8) {
                // 0x4070f4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40710e
                int64_t v66 = v61 - v65; // 0x407112
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40711d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40712e
                    int64_t v70 = v69 & 0xffffffff; // 0x40712e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40712b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4071bf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406ff7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406ffb
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
            int64_t v73 = v51 + 1; // 0x40700b
            int64_t v74 = v60 - 1; // 0x40700f
            uint32_t v75 = (int32_t)v73; // 0x407014
            int64_t v76; // 0x406ce0
            if (v75 >= 8) {
                // 0x407142
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40714c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40715c
                int64_t v80 = v74 - v79; // 0x407160
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40716b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40717b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407179
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4071d6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4071de
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407026
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40702a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407223
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40703e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x406ece;
            } else {
                goto lab_0x40704c;
            }
        }
    }
  lab_0x406ec0:;
    int64_t v93 = v23; // 0x406ce0
    int64_t v94 = v22; // 0x406ce0
    int64_t v95 = v21; // 0x406ce0
    goto lab_0x406ec0_2;
  lab_0x406e05:;
    int64_t * mem3 = malloc(size); // 0x406e05
    int64_t v97 = (int64_t)&g12; // 0x406e10
    int64_t v98; // 0x406ce0
    int64_t path; // 0x406ce0
    if (mem3 == NULL) {
        goto lab_0x406de2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406e05
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406e26;
    }
  lab_0x406d1a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x406d0d
    char v100 = *v3; // 0x406d1a
    int64_t v101; // 0x406ce0
    if (v100 == 0) {
        // 0x406d74
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406ce0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406ce0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406d60
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406d67;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406d30
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x406d3d
        char v107 = *(char *)v106; // 0x406d42
        v102 = v107;
        if (v107 == 0) {
            // 0x406d74
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x406d4b
    v104 = v103 + 1;
  lab_0x406d67:
    // 0x406d74
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406de2:;
    char * v108 = (char *)v97;
    g73 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x406d1a;
  lab_0x406e26:;
    int64_t v109 = v98 + path; // 0x406e26
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406e52
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x406e81
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4071b2
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x406ea5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406ec0_2:;
                uint64_t v96 = *v32; // 0x406ec0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40704c;
                } else {
                    goto lab_0x406ece;
                }
            }
          lab_0x40705f:
            // 0x40705f
            function_407250(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40707e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406e64;
  lab_0x406dcb:;
    int64_t * mem4 = malloc(size2); // 0x406dcb
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x406e71
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406e26;
    } else {
        goto lab_0x406de2;
    }
  lab_0x406e64:
    // 0x406e64
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406de2;
}
// Address range: 0x407250 - 0x4072cb
int64_t function_407250(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x407257
    if (fileno(stream) < 0) {
        // 0x4072b7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40726a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40729b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4072b7
            return fclose(stream);
        }
    }
    // 0x40726c
    if ((int32_t)function_4072d0(a1, v1) == 0) {
        // 0x4072b7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x407278
    int32_t v3 = *v2; // 0x407280
    int64_t result = fclose(stream); // 0x40728e
    if (v3 != 0) {
        // 0x4072c0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x407290
    return result;
}
// Address range: 0x4072d0 - 0x407310
int64_t function_4072d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4072ea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4072ea
        return fflush(stream);
    }
    // 0x4072f8
    function_407310(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407310 - 0x407367
int64_t function_407310(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407310
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40731a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40734b
    int64_t result = -1; // 0x407354
    if (v1 != -1) {
        // 0x407356
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407362
    return result;
}
// Address range: 0x407370 - 0x408e89
int64_t function_407370(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x407370
    int64_t v1; // bp-1416, 0x407370
    int64_t v2; // bp-1656, 0x407370
    if ((int32_t)function_4090b0(a3, &v1, &v2) < 0) {
        // 0x4079e0
        return 0;
    }
    int64_t v3 = &v2; // 0x40737b
    int64_t v4; // bp-1384, 0x407370
    int64_t v5; // bp-1640, 0x407370
    int64_t v6; // 0x407370
    if ((int32_t)function_408e90(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x4082c7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x4082e3
            free((int64_t *)v6);
        }
        // 0x4082e8
        *__errno_location() = 22;
        // 0x4079e0
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x4073db
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x4073e3
    uint64_t v9 = v8 + v6; // 0x4073e7
    int64_t v10; // 0x407370
    char * v11; // 0x407370
    int64_t v12; // 0x407370
    if (v9 < v8) {
        // 0x407a90
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x407999;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x407a90
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x407999;
        } else {
            uint64_t size = v9 + 6; // 0x4073f7
            if (size < 4000) {
                // 0x407540
                v12 = 0;
                int64_t v13; // bp-1784, 0x407370
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x407434;
            } else {
                if (size == -1) {
                    // 0x407a90
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x407999;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x407418
                    if (mem == NULL) {
                        // 0x407a90
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x407999;
                    } else {
                        // 0x40742d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x407434;
                    }
                }
            }
        }
    }
  lab_0x407960_2:;
    // 0x407960
    int64_t v14; // 0x407370
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x407968
    int64_t v17 = v16; // 0x407976
    int64_t v18 = v16; // 0x407976
    int64_t v19 = v15; // 0x407976
    int64_t v20; // 0x407458
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x407b88;
    } else {
        goto lab_0x407981;
    }
  lab_0x407999:
    // 0x407999
    if (v6 != (int64_t)&v4) {
        // 0x4079b0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4079cc
        free((int64_t *)v6);
    }
    // 0x4079d1
    *(int32_t *)v10 = 12;
    // 0x4079e0
    return 0;
  lab_0x407434:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x40746d
    int64_t v23 = *v22; // 0x40746d
    int64_t v24 = 0; // 0x407473
    int64_t v25 = v20; // 0x407473
    int64_t v26 = v21; // 0x407473
    int64_t v27 = 0; // 0x407473
    int64_t v28; // 0x407370
    int64_t v29; // 0x407370
    int64_t v30; // 0x407370
    int64_t v31; // 0x407370
    int64_t v32; // 0x407370
    int64_t v33; // 0x407370
    int64_t v34; // 0x407370
    if (v23 == a3) {
        goto lab_0x407a83;
    } else {
        int64_t v35 = v23 - a3; // 0x407479
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40748b;
    }
  lab_0x407a83:;
    int64_t v36 = v24; // 0x407a86
    float80_t v37; // 0x407370
    float80_t v38 = v37; // 0x407a86
    float80_t v39; // 0x407370
    float80_t v40 = v39; // 0x407a86
    int64_t v41 = v25; // 0x407a86
    int64_t v42 = v26; // 0x407a86
    int64_t v43 = v27; // 0x407a86
    int64_t v44; // 0x407370
    int64_t v45 = v44; // 0x407a86
    goto lab_0x4075e8;
  lab_0x4075e8:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x407370
    int64_t v51; // 0x407370
    int64_t v52; // 0x407370
    int64_t v53; // 0x407370
    int64_t v54; // 0x407370
    int64_t v55; // 0x407370
    int64_t v56; // 0x407370
    int64_t v57; // 0x407370
    int64_t dest_mem2; // 0x407370
    int64_t dest_mem3; // 0x407370
    int64_t v58; // 0x407370
    float80_t v59; // 0x407370
    float80_t v60; // 0x407370
    float80_t v61; // 0x407370
    float80_t v62; // 0x407370
    float80_t v63; // 0x407370
    uint64_t v64; // 0x408716
    char * v65; // 0x4075fc
    char v66; // 0x4075fc
    int64_t v67; // 0x407624
    uint32_t v68; // 0x407628
    int64_t v69; // 0x407a05
    char v70; // 0x407370
    if (v1 == v49) {
        // 0x408710
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x408e7a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x408772;
            } else {
                goto lab_0x407960_2;
            }
        } else {
            // 0x408720
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x408772;
            } else {
                if (v47 != 0) {
                    // 0x408d3d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x407960_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x408d43
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40873e;
                        } else {
                            goto lab_0x408d4f;
                        }
                    }
                } else {
                    // 0x40872e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40873e;
                    } else {
                        goto lab_0x408d4f;
                    }
                }
            }
        }
    } else {
        // 0x4075fc
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x407601
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40809c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x4081d0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x407960_2;
                } else {
                    goto lab_0x407a62;
                }
            } else {
                // 0x407a12
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x407a62;
                } else {
                    if (v47 != 0) {
                        // 0x408300
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x407960_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x408306
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x407a30;
                            } else {
                                goto lab_0x408312;
                            }
                        }
                    } else {
                        // 0x407a20
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x407a30;
                        } else {
                            goto lab_0x408312;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40809c
                abort();
                // UNREACHABLE
            }
            // 0x407619
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g75 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x407f90
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x407a67;
                }
                case 19: {
                    // 0x407f80
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x407a67;
                }
                case 20: {
                    // 0x407f68
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x407a67;
                }
                case 21: {
                    goto lab_0x407b50;
                }
                case 22: {
                    goto lab_0x407b50;
                }
                default: {
                    // 0x40763a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x407ae0
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x407afd;
                        } else {
                            // 0x407ae7
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x407670;
                            } else {
                                goto lab_0x407afd;
                            }
                        }
                    } else {
                        goto lab_0x407670;
                    }
                }
            }
        }
    }
  lab_0x40748b:;
    int64_t v75 = v34;
    float80_t v76; // 0x407370
    float80_t v77 = v76;
    float80_t v78; // 0x407370
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x407370
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40748e
    int64_t v89 = v85; // 0x40748e
    int64_t v90 = v84; // 0x40748e
    float80_t v91 = v79; // 0x40748e
    float80_t v92 = v77; // 0x40748e
    int64_t v93 = v75; // 0x40748e
    int64_t v94 = v80; // 0x40748e
    int64_t v95 = v81; // 0x40748e
    int64_t v96 = v82; // 0x40748e
    int64_t v97 = v87; // 0x40748e
    int64_t v98; // 0x407370
    int64_t v99; // 0x407370
    int64_t v100; // 0x407370
    int64_t v101; // 0x407370
    int64_t v102; // 0x407370
    if (v82 >= v87) {
        goto lab_0x4075d9;
    } else {
        if (v82 != 0) {
            // 0x407570
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x407960_2;
            } else {
                int64_t v103 = 2 * v82; // 0x407576
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40758b;
                } else {
                    goto lab_0x40757e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x4074b4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40759e;
                } else {
                    goto lab_0x4074c0;
                }
            } else {
                goto lab_0x40757e;
            }
        }
    }
  lab_0x4075d9:
    // 0x4075d9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x4075e8;
  lab_0x408772:
    // 0x408772
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40877a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40878b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x408797
    if (v12 != 0) {
        // 0x4087a3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x4087c2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4087de
        free((int64_t *)v6);
    }
    // 0x4087e3
    *a2 = v46;
    // 0x4079e0
    return result;
  lab_0x407b50:
    // 0x407b50
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x407a67;
  lab_0x40757e:
    // 0x40757e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x407960_2;
    } else {
        goto lab_0x40758b;
    }
  lab_0x407b88:
    // 0x407b88
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x407981;
  lab_0x407981:
    if (v12 == 0) {
        // 0x407a90
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x407999;
    } else {
        // 0x407991
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x407999;
    }
  lab_0x407a62:
    // 0x407a62
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x407a67;
  lab_0x407670:;
    int64_t v273 = (int64_t)v11; // 0x407670
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x407677
    int64_t v275 = v273 + 1; // 0x40767b
    *v11 = 37;
    int64_t v276 = v275; // 0x407684
    if (v274 % 2 != 0) {
        // 0x407686
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x407677
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x407697
    if ((v277 & 2) != 0) {
        // 0x407699
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4076a3
    if ((v277 & 4) != 0) {
        // 0x4076a5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4076af
    if ((v277 & 8) != 0) {
        // 0x4076b1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x4076bb
    if ((v277 & 16) != 0) {
        // 0x4076bd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x4076c7
    if ((v277 & 64) != 0) {
        // 0x4076c9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x4076d3
    if ((v277 & 32) != 0) {
        // 0x4076d5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x4076dd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x4076e1
    int64_t v293 = v290; // 0x4076e8
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x4076f7
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40771a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40771e
    int64_t v298 = v295; // 0x407725
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x407734
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40762a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x407760
    int64_t v272; // 0x407370
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x407769
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x407b68;
        } else {
            if (v301 == 12) {
                // 0x408328
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x407790;
            } else {
                // 0x407780
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x407b60
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x407b68;
                } else {
                    goto lab_0x407790;
                }
            }
        }
    } else {
        goto lab_0x407790;
    }
  lab_0x407a67:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x407a67
    int64_t v111 = v55 + 88; // 0x407a6b
    int64_t v112 = *(int64_t *)v111; // 0x407a6f
    int64_t v113 = v49 + 1; // 0x407a72
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x407479
        int64_t v115 = v114 + v105; // 0x40747f
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
            // 0x407aa8
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
                goto lab_0x407960_2;
            } else {
                goto lab_0x4075d9;
            }
        } else {
            goto lab_0x40748b;
        }
    } else {
        goto lab_0x407a83;
    }
  lab_0x40758b:;
    int64_t v116 = v80 == v20; // 0x407592
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x4074c0;
    } else {
        goto lab_0x40759e;
    }
  lab_0x40759e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x407370
    if (v102 != 0) {
        goto lab_0x4074c0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x4075ba
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x407b75;
        } else {
            // 0x4075c8
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
            goto lab_0x4075d9;
        }
    }
  lab_0x4074c0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x4074d7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x407960_2;
    } else {
        // 0x4074fd
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x407525
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
        goto lab_0x4075d9;
    }
  lab_0x40873e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x408d04
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x407960_2;
        } else {
            // 0x408d15
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x408d2a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x408772;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x408761
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x407b75;
        } else {
            // 0x40876f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x408772;
        }
    }
  lab_0x408d4f:
    // 0x408d4f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x407960_2;
    } else {
        goto lab_0x40873e;
    }
  lab_0x407afd:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x407afd
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x407b01
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x407b05
    int64_t v123 = 0; // 0x407b0c
    int64_t v124 = v122; // 0x407b0c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x407b12
        int64_t v126 = v120; // 0x407b1a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x408aa1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x408ab9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x408acb
            int64_t v131 = v128; // 0x408ad4
            int64_t v132 = v130; // 0x408ad4
            int64_t v133; // 0x407370
            int64_t v134; // 0x408ae6
            if (v130 < v129) {
                // 0x408ad6
                if (v121 == v128) {
                    // break -> 0x4078f0
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x4078db
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x4078f0
                        goto lab_0x4078f0;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x408a98
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x408aa1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x408ad6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x4078f0
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x4078db
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x4078f0
                            goto lab_0x4078f0;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x408a98
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x407b24
            if (*(int32_t *)v135 != 5) {
                // 0x40809c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x407b30
            int64_t v137 = v136; // 0x407b30
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x407b3d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x4078f0:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x4078f0
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x4078f4
    int64_t v142; // 0x407370
    int64_t v143; // 0x407370
    int64_t v144; // 0x407370
    if (v140 == v141) {
        goto lab_0x407fa0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x407901
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x408b04
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x408b0d
            if (v141 == v146) {
                goto lab_0x407fbe;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x408b33
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x408b3a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x408b53
                int64_t v152 = v151; // 0x408b5c
                int64_t v153 = v149; // 0x408b5c
                int64_t v154; // 0x407370
                int64_t v155; // 0x408b67
                if (v151 < v150) {
                    // 0x408b5e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x407960_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x408b7a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x407960_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x408b20
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x408b29
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x408b5e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x407960_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x408b7a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x407960_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x408b20
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40792c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x407913
            if (*(int32_t *)v156 != 5) {
                // 0x40809c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x407920
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x407fa0;
            } else {
                goto lab_0x40792c;
            }
        }
    }
  lab_0x407790:
    // 0x407790
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40779d
    int64_t v160 = 0; // 0x4077a5
    if (v159 != -1) {
        // 0x4077ab
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40809c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x4077ce
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x4077dc
        if (*(int32_t *)v162 != 5) {
            // 0x40809c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x4077ef
        int64_t v164; // bp-8, 0x407370
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x407370
    uint64_t v165; // 0x407806
    if (v46 > 0xfffffffffffffffd) {
        // 0x408238
        v14 = v48;
        if (v47 == -1) {
            // 0x407864
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x407960_2;
    } else {
        // 0x407810
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x407864
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x407f40
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x407960_2;
            } else {
                int64_t v167 = 2 * v47; // 0x407f46
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x407832;
                } else {
                    goto lab_0x407f52;
                }
            }
        } else {
            // 0x407822
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x407832;
            } else {
                goto lab_0x407f52;
            }
        }
    }
  lab_0x407a30:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x408259
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x407960_2;
        } else {
            // 0x408271
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x408282
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x407a62;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x407a51
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x407b75;
        } else {
            // 0x407a5f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x407a62;
        }
    }
  lab_0x408312:
    // 0x408312
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x407960_2;
    } else {
        goto lab_0x407a30;
    }
  lab_0x407fa0:
    // 0x407fa0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x407fbe;
  lab_0x407b68:
    // 0x407b68
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x407790;
  lab_0x407b75:
    // 0x407b75
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x407b88;
  lab_0x407fbe:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x407fc4
    v14 = v48;
    int64_t v170; // 0x407370
    int64_t v171; // 0x407370
    int64_t * v172; // 0x407370
    int64_t v173; // 0x407370
    int64_t v174; // bp-760, 0x407370
    uint64_t size5; // 0x407fc8
    if (v169 == -1) {
        goto lab_0x407960_2;
    } else {
        // 0x407fd9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x408039;
        } else {
            // 0x407fe5
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x407960_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40800d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x407960_2;
                } else {
                    goto lab_0x408039;
                }
            }
        }
    }
  lab_0x40792c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x407fbe;
    } else {
        // 0x407935
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x407fbe;
        } else {
            goto lab_0x407960_2;
        }
    }
  lab_0x407832:
    // 0x407832
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x4081f9
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x408214
            if (v48 == v20 && v46 != 0) {
                // 0x408222
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x407864
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x407853
        v14 = v48;
        if (mem11 != NULL) {
            // 0x407864
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x407960_2;
  lab_0x407f52:
    // 0x407f52
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x407960_2;
    } else {
        goto lab_0x407832;
    }
  lab_0x408039:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x407370
    int64_t v181; // 0x407370
    int64_t v182; // 0x407370
    int64_t v183; // 0x407370
    int64_t v184; // 0x407370
    int64_t v185; // 0x407370
    int64_t v186; // 0x407370
    int64_t v187; // 0x407370
    int64_t v188; // 0x407370
    int64_t v189; // 0x407370
    int64_t v190; // 0x407370
    int64_t v191; // 0x407370
    int64_t v192; // 0x407370
    int64_t v193; // 0x407370
    float80_t v194; // 0x407370
    float80_t v195; // 0x407370
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x408bb2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x408bc0
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
            // 0x408ced
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
        goto lab_0x4084f9;
    } else {
        // 0x408041
        int64_t v198; // 0x407370
        float80_t v199; // 0x407370
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x408801
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40880e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40866a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40806f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x408078
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40809c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40809c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x408be6
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x408be6
                            v181 = v187 + 3;
                            goto lab_0x408d61;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x408d61;
                            } else {
                                goto lab_0x408c22;
                            }
                        }
                    } else {
                        // 0x4088f3
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x4084e7;
                        } else {
                            int64_t v202 = v187 + 2; // 0x408901
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x408e4a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x408948
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40895b
                                int64_t v207 = v176 & 0xffffffff; // 0x40895e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40896c
                                int64_t v209 = v187 + 1; // 0x408989
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40899e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x4089ab
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x4084f9;
                        }
                    }
                } else {
                    // 0x408698
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x408698
                        v180 = v187 + 1;
                        goto lab_0x408c47;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x408c47;
                        } else {
                            goto lab_0x4086b8;
                        }
                    }
                }
            } else {
                // 0x4084d0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x4084e7;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x408a1c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x408a2d
                    char v215 = *v213; // 0x408a34
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x408a70
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x408a7d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x408a45
                        v182 = v218;
                        int64_t v219; // 0x408a37
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x4084f9;
                }
            }
        } else {
            float80_t v220; // 0x407370
            if (v220 != 0.0L) {
                // 0x40809c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x4086eb
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x4086fa
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
                // 0x4089d3
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
            goto lab_0x4084f9;
        }
    }
  lab_0x4084f9:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x4084fc
    int64_t v229 = v228; // 0x408502
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x408504
        int64_t v232 = v231 + v224; // 0x408507
        int64_t v233 = v232 - v225; // 0x40850e
        if ((v230 & 2) != 0) {
            // 0x4089b3
            v229 = v233;
            int64_t v234 = v224; // 0x4089b6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x4089c0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x4089c0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x408825
                int64_t v238 = v224; // 0x40882b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x408839
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x408830
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x408845
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x408858
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
                int64_t v243 = v224; // 0x408531
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x408551
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x408548
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40855a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x408568
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
        // 0x40809c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x408598
    int64_t dest_mem5 = v48; // 0x4085a5
    int64_t v250 = v248; // 0x4085a5
    int64_t v251 = v47; // 0x4085a5
    int64_t v252; // 0x407370
    if (v47 - v46 > v248) {
        goto lab_0x408620;
    } else {
        if (v249 < v46) {
            // 0x4087f2
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x407960_2;
            } else {
                goto lab_0x408620;
            }
        } else {
            // 0x4085b0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x408620;
            } else {
                if (v47 != 0) {
                    // 0x408b88
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x407960_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x408b8e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x4085ce;
                        } else {
                            goto lab_0x408b9a;
                        }
                    }
                } else {
                    // 0x4085be
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x4085ce;
                    } else {
                        goto lab_0x408b9a;
                    }
                }
            }
        }
    }
  lab_0x408620:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x408631
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40864d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x407a67;
  lab_0x4084e7:
    // 0x4084e7
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x4084f9;
  lab_0x408c47:;
    char * v257 = nl_langinfo(0x10000); // 0x408c7a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x408c8b
    char v259 = *v257; // 0x408c92
    int64_t v260 = v176 & 0xffffffff; // 0x408c95
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x408ca3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x408cd0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x408cdd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x4086b8;
  lab_0x4086b8:
    // 0x4086b8
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
    goto lab_0x4084f9;
  lab_0x4085ce:
    // 0x4085ce
    if (v48 == 0 || v48 == v20) {
        // 0x40886b
        int64_t size7; // 0x407370
        int64_t * mem12 = malloc((int32_t)size7); // 0x408882
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x407960_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40888e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x4088b9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x408620;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x4085fd
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x407960_2;
        } else {
            // 0x40860b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x408620;
        }
    }
  lab_0x408b9a:
    // 0x408b9a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x407960_2;
    } else {
        goto lab_0x4085ce;
    }
  lab_0x408d61:;
    int64_t v265 = v187 + 4; // 0x408d61
    char v266 = *nl_langinfo(0x10000); // 0x408dac
    int64_t v267 = v176 & 0xffffffff; // 0x408daf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x408db6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x408ddd
        int64_t v270 = v265 + 1; // 0x408de5
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
    goto lab_0x408c22;
  lab_0x408c22:
    // 0x408c22
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x4084f9;
}
// Address range: 0x408e90 - 0x4090a9
int64_t function_408e90(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x408ef3
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x408ea8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x408eb9
    g76 = v5;
    int64_t v6; // 0x408e90
    int64_t v7; // 0x408e90
    int64_t v8; // 0x408e90
    int64_t v9; // 0x408e90
    int64_t v10; // 0x408e90
    int64_t v11; // 0x408e90
    int64_t v12; // 0x408e90
    uint32_t v13; // 0x408fb0
    int64_t * v14; // 0x408fe0
    int64_t v15; // 0x408fe8
    uint32_t v16; // 0x409030
    uint32_t v17; // 0x409000
    int64_t * v18; // 0x408f90
    int64_t v19; // 0x408f90
    int64_t * v20; // 0x408fa0
    int64_t v21; // 0x408fa0
    int64_t * v22; // 0x408f78
    int64_t v23; // 0x408f78
    int64_t * v24; // 0x408f60
    int64_t v25; // 0x408f60
    int64_t * v26; // 0x409080
    uint32_t v27; // 0x408f40
    int64_t v28; // 0x409080
    int64_t * v29; // 0x409070
    int64_t v30; // 0x409070
    uint32_t v31; // 0x408f20
    int64_t * v32; // 0x409098
    int64_t v33; // 0x409098
    int64_t v34; // 0x409043
    uint32_t v35; // 0x408f00
    int64_t v36; // 0x409017
    uint32_t v37; // 0x408ec8
    int32_t * v38; // 0x408fb0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x408f40
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x408f47
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x408f90
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x408f53
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x408ee6
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x408f20
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x408f27
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x408fa0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x408f33
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x408ee6
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x408f00
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x408f07
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x408f78
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x408f13
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x408ee6
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
            // 0x408ec8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x408ed3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x408f60
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x408edf
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x408ee6
            break;
        }
        case 11: {
            // 0x408fb0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x408fbf
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x409080
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x408fcc
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x408ee6
            break;
        }
        case 12: {
            // 0x408fe0
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x408ee6
            break;
        }
        case 15: {
            // 0x409030
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x409037
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x409070
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x409043
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x408ee6
            break;
        }
        case 16: {
            // 0x409000
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40900b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x409098
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x409017
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x408ee6
            break;
        }
        default: {
            // 0x408ef3
            return 0xffffffff;
        }
    }
    // 0x408ee6
    v3++;
    int64_t v39 = v4 + 32; // 0x408ef1
    while (v3 < v2) {
        // 0x408eb0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g76 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x408f40
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x408f47
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x408f90
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x408f53
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x408ee6
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x408f20
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x408f27
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x408fa0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x408f33
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x408ee6
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x408f00
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x408f07
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x408f78
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x408f13
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x408ee6
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
                // 0x408ec8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x408ed3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x408f60
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x408edf
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x408ee6
                break;
            }
            case 11: {
                // 0x408fb0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x408fbf
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x409080
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x408fcc
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x408ee6
                break;
            }
            case 12: {
                // 0x408fe0
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x408ee6
                break;
            }
            case 15: {
                // 0x409030
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x409037
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x409070
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x409043
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x408ee6
                break;
            }
            case 16: {
                // 0x409000
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40900b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x409098
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x409017
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x408ee6
                break;
            }
            default: {
                // 0x408ef3
                return 0xffffffff;
            }
        }
        // 0x408ee6
        v3++;
        v39 = v4 + 32;
    }
    // 0x408ef3
    return 0;
}
// Address range: 0x4090b0 - 0x409db9
int64_t function_4090b0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x4090b2
    int64_t v4 = v1 + 16; // 0x4090b6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x4090e9
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x4090fe
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40912b
    int32_t v8 = 0; // 0x409130
    int64_t v9 = 0; // 0x409130
    int64_t v10 = v3; // 0x409130
    int64_t v11 = a1; // 0x409130
    int64_t v12 = 0; // 0x409130
    char v13; // 0x4090b0
    int64_t v14; // 0x4090b0
    int64_t v15; // 0x4090b0
    int64_t v16; // 0x4090b0
    int64_t v17; // 0x4090b0
    int64_t v18; // 0x4090b0
    int64_t v19; // 0x4090b0
    int64_t v20; // 0x4090b0
    int64_t v21; // 0x4090b0
    int64_t v22; // 0x4090b0
    int64_t v23; // 0x4090b0
    int64_t v24; // 0x4090b0
    int64_t v25; // 0x4090b0
    int64_t v26; // 0x4090b0
    int64_t v27; // 0x4090b0
    int64_t v28; // 0x4090b0
    int64_t v29; // 0x4090b0
    int64_t v30; // 0x4090b0
    int32_t v31; // 0x4090b0
    int64_t v32; // 0x4090b0
    int64_t v33; // 0x409120
    int64_t v34; // 0x409170
    int64_t * v35; // 0x409193
    int64_t v36; // 0x4091f6
    if (v7 != 0) {
        // 0x409120
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x4090b0
        int64_t v38 = 7; // 0x4090b0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x4090b0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x409120:
            // 0x409120
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x409163
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x409178
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x4091b4
                int64_t v43 = v42; // 0x4091b4
                int64_t v44 = v43; // 0x4091bd
                int64_t v45 = v33; // 0x4091bd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x409550
                    char v47 = *(char *)v46; // 0x409554
                    int64_t v48 = v46; // 0x40955d
                    while (v47 < 58) {
                        // 0x409550
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40955f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x409bf5
                        char v52 = *(char *)v51; // 0x409bf5
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x409bf9
                        int64_t v54 = v33; // 0x409c0d
                        int64_t v55 = v51; // 0x409c0d
                        char v56 = v52; // 0x409c0d
                        int64_t v57 = v53; // 0x409c0d
                        bool v58 = v52 < 58; // 0x409c0d
                        bool v59 = v52 < 58; // 0x409c0d
                        char v60 = v52; // 0x409c0d
                        int64_t v61 = v51; // 0x409c0d
                        int64_t v62; // 0x409c22
                        int64_t v63; // 0x409bf5
                        char v64; // 0x409bf5
                        int64_t v65; // 0x409bf9
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x409878_9;
                            }
                            // 0x409bf3
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
                                // 0x409c0f
                                if (v64 >= 58) {
                                    goto lab_0x409878_9;
                                }
                                // 0x409bf3
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
                        int64_t v67 = v55; // 0x409bc8
                        while (v58) {
                            // 0x409bce
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
                                    goto lab_0x409878_9;
                                }
                                // 0x409bf3
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
                                    // 0x409c0f
                                    if (v64 >= 58) {
                                        goto lab_0x409878_9;
                                    }
                                    // 0x409bf3
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
                            // 0x409bc4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x409ccd
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x409878_9;
                        }
                        int64_t v68 = v54 + 2; // 0x409cde
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x4090b0
                v36 = v45;
                char v70; // 0x4090b0
                while (true) {
                    // 0x4091f6
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x409210
                                *v41 = *v41 | 2;
                                // break -> 0x4091f0
                                break;
                            }
                            case 43: {
                                // 0x409220
                                *v41 = *v41 | 4;
                                // break -> 0x4091f0
                                break;
                            }
                            case 32: {
                                // 0x409230
                                *v41 = *v41 | 8;
                                // break -> 0x4091f0
                                break;
                            }
                            case 35: {
                                // 0x409240
                                *v41 = *v41 | 16;
                                // break -> 0x4091f0
                                break;
                            }
                            case 48: {
                                // 0x409250
                                *v41 = *v41 | 32;
                                // break -> 0x4091f0
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x409258
                                    break;
                                }
                                // 0x4091e6
                                *v41 = *v41 | 64;
                                // break -> 0x4091f0
                                break;
                            }
                        }
                    } else {
                        // 0x4091ff
                        *v41 = *v41 | 1;
                    }
                    // 0x4091f0
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x4090b0
                int64_t * v72; // 0x409181
                int64_t * v73; // 0x40918a
                if (v70 == 42) {
                    // 0x4092cd
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x4092ed
                    int64_t v75 = v74; // 0x4092ed
                    int64_t v76 = v75 + 0xffffffd0; // 0x4092f1
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x4092f7
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x4096cd
                        char v80 = *(char *)v79; // 0x4096d1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x4096cd
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x4096dd
                        v26 = v79;
                        int64_t v81 = v75; // 0x4096e1
                        int64_t v82 = v36; // 0x4096e1
                        int64_t v83 = 0; // 0x4096e1
                        if (v80 != 36) {
                            goto lab_0x4092fd;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x409712
                            int64_t v89 = v85; // 0x409712
                            int64_t v90 = v87; // 0x409712
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x409717
                            int64_t v95 = v92 + 1; // 0x40971a
                            char v96 = *(char *)v95; // 0x40971a
                            int64_t v97 = v96; // 0x40971a
                            while (v94 < v91) {
                                // 0x409731
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x409878_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x4096eb
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x4096f4
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
                                    // 0x409731
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x409878_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x4096eb
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x409d6b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x409878_9;
                            }
                            // 0x409d79
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40930c;
                        }
                    } else {
                        goto lab_0x4092fd;
                    }
                } else {
                    // 0x40925d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x4090b0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x40997b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x409980
                        int64_t v102 = v71; // 0x409989
                        char * v103 = v100; // 0x409989
                        int64_t v104 = v36; // 0x409989
                        int64_t v105 = v71; // 0x409989
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x409993
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x409993
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x409993
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x4099a2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x4099c5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x409268;
                }
            } else {
                goto lab_0x409128;
            }
        }
    }
  lab_0x409132:
    // 0x409132
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x409154
    return 0;
  lab_0x409878_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x409883
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x409895
    if (v3 != v115) {
        // 0x4098a0
        free((int64_t *)v115);
    }
    // 0x4098a5
    *__errno_location() = 22;
    // 0x409154
    return 0xffffffff;
  lab_0x409a50_5:;
    // 0x409a50
    int64_t v116; // 0x4090b0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x409a55
    int64_t v119; // 0x4090b0
    if (v4 == v117) {
        goto lab_0x409a69_3;
    } else {
        // 0x409a57
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x409a69_3;
    }
  lab_0x409a69_3:;
    int64_t v120 = *v5; // 0x409a69
    int32_t * v121; // 0x409a79
    if (v3 == v120) {
        // 0x409a79
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x409a74
    free((int64_t *)v120);
    // 0x409a79
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x409128:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40912b
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
        // break -> 0x409132
        goto lab_0x409132;
    }
    goto lab_0x409120;
  lab_0x4092fd:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x4092fd
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x4096a3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x409878_9;
        }
        // 0x4096bb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40930c;
  lab_0x409268:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40926b
    int64_t v147 = v339; // 0x40926b
    int64_t v145 = v338; // 0x40926b
    int64_t v143 = v337; // 0x40926b
    int64_t v186; // 0x4090b0
    int64_t v190; // 0x4090b0
    int64_t v189; // 0x4090b0
    int64_t v188; // 0x4090b0
    int64_t v187; // 0x4090b0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x409370;
    } else {
        goto lab_0x409271;
    }
  lab_0x40930c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40930c
    int64_t v132 = v128; // 0x409313
    int64_t v133 = v16; // 0x409313
    int64_t v134 = v131; // 0x409313
    int64_t v135; // 0x4090b0
    int64_t v136; // 0x4090b0
    int64_t v137; // 0x4090b0
    int64_t v138; // 0x4095bf
    if (v16 > v127) {
        goto lab_0x40931c;
    } else {
        uint64_t v139 = 2 * v16; // 0x4095b5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x409a50_5;
        }
        int64_t size = 32 * v138; // 0x4095de
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x409b3c
            if (mem == NULL) {
                goto lab_0x409a69_3;
            }
            // 0x409b5e
            v135 = (int64_t)mem;
            goto lab_0x409b69;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x4095ff
            int64_t v140 = *v6; // 0x409604
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x409a50_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x4095ff
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x409b69;
            } else {
                goto lab_0x40963d;
            }
        }
    }
  lab_0x409271:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x409278
    int64_t v151 = v146; // 0x409278
    int64_t v152 = v144; // 0x409278
    uint64_t v153; // 0x4090b0
    int64_t v154; // 0x4090b0
    int64_t v155; // 0x4092b7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x4092bb
        int64_t v158; // 0x4090b0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x409420
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x4092b3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x409428
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x4092b0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x4092b3
                    break;
                }
            }
        } else {
            // 0x4092c0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x4092b3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x409428
    int64_t v162 = v161 % 256; // 0x409434
    g77 = v162;
    int64_t v163 = 17; // 0x409437
    int64_t v164 = v154; // 0x409437
    int64_t v165 = v154; // 0x409437
    switch ((char)v161) {
        case 0: {
            goto lab_0x4094a1;
        }
        case 28: {
            goto lab_0x4097f2;
        }
        case 30: {
            // 0x40981e
            v163 = 14;
            v164 = 99;
            goto lab_0x409449;
        }
        case 32: {
            goto lab_0x4097f2;
        }
        case 33: {
            goto lab_0x4097f2;
        }
        case 34: {
            goto lab_0x4097f2;
        }
        case 46: {
            // 0x40980f
            v163 = 16;
            v164 = 115;
            goto lab_0x409449;
        }
        case 51: {
            goto lab_0x40982d;
        }
        case 60: {
            goto lab_0x4097f2;
        }
        case 62: {
            int32_t v166 = v153; // 0x409749
            int32_t v167 = v166 - 7; // 0x409749
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40974f
            v163 = v168;
            v164 = v154;
            goto lab_0x409449;
        }
        case 63: {
            goto lab_0x4097a0;
        }
        case 64: {
            goto lab_0x4097f2;
        }
        case 65: {
            goto lab_0x4097f2;
        }
        case 66: {
            goto lab_0x4097f2;
        }
        case 68: {
            goto lab_0x4097a0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40975f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x409765
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40976d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40977b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40978f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x409449;
        }
        case 74: {
            goto lab_0x40982d;
        }
        case 75: {
            goto lab_0x409449;
        }
        case 78: {
            int32_t v171 = v153; // 0x409440
            int32_t v172 = v171 - 7; // 0x409440
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x409446
            v163 = v173;
            v164 = v154;
            goto lab_0x409449;
        }
        case 80: {
            goto lab_0x40982d;
        }
        case 83: {
            goto lab_0x40982d;
        }
        default: {
            goto lab_0x409878_9;
        }
    }
  lab_0x40931c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x409333
        int64_t v178 = v176; // 0x4090b0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x409328
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x409328
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x409341
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40934d
    int32_t v182 = *v181; // 0x40934d
    if (v182 != 0) {
        // 0x4099ce
        if (v182 != 5) {
            goto lab_0x409878_9;
        }
        unsigned char v183 = *(char *)v129; // 0x4099d7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x409268;
    } else {
        // 0x409357
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40935d
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
            goto lab_0x409271;
        } else {
            goto lab_0x409370;
        }
    }
  lab_0x409370:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x409370
    char v197 = *v196; // 0x409370
    int64_t * v198; // 0x409198
    *v198 = v192;
    int64_t v199; // 0x4090b0
    int64_t v200; // 0x4090b0
    int64_t v201; // 0x4090b0
    int64_t v202; // 0x4090b0
    int64_t v203; // 0x4090b0
    int64_t * v204; // 0x4091a1
    int64_t * v205; // 0x4091aa
    int64_t v206; // 0x409389
    if (v197 != 42) {
        char v207 = *v196; // 0x409570
        int64_t v208 = v193; // 0x409579
        char * v209; // 0x4090b0
        int64_t v210; // 0x4090b0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x409580
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x409584
            v208 = v212;
            while (v214 < 58) {
                // 0x409580
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40958e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x409570
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x4095a1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x409271;
    } else {
        // 0x40937f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40939f
        int64_t v219 = v218; // 0x40939f
        int64_t v220 = v219 + 0xffffffd0; // 0x4093a3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x4093a9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x409c54
            char v224 = *(char *)v223; // 0x409c58
            v221 = v223;
            while (v224 < 58) {
                // 0x409c54
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x409c64
            v201 = v223;
            int64_t v225 = v219; // 0x409c68
            int64_t v226 = v206; // 0x409c68
            int64_t v227 = 0; // 0x409c68
            if (v224 != 36) {
                goto lab_0x4093af;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x409c99
                int64_t v233 = v229; // 0x409c99
                int64_t v234 = v231; // 0x409c99
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x409c9e
                int64_t v239 = v236 + 1; // 0x409ca5
                char v240 = *(char *)v239; // 0x409ca9
                int64_t v241 = v240; // 0x409ca9
                while (v238 < v235) {
                    // 0x409cb7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x409878_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x409c72
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x409c7b
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
                        // 0x409cb7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x409878_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x409c72
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x409d87
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x409878_9;
                }
                // 0x409d95
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x4093be;
            }
        } else {
            goto lab_0x4093af;
        }
    }
  lab_0x4094a1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x4094a6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x4094ae
    *a2 = v245;
    int64_t v246; // 0x4090b0
    int64_t v247; // 0x4090b0
    int64_t dest_mem; // 0x4090b0
    int64_t v248; // 0x4090b0
    int64_t v249; // 0x409da3
    if (v246 > v245) {
        // 0x4094ba
        goto lab_0x409128;
    } else {
        if (v246 < 0) {
            // 0x409da3
            v249 = *v6;
            v116 = v249;
            goto lab_0x409a50_5;
        }
        int64_t v250 = 2 * v246; // 0x4094d6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x409da3
            v249 = *v6;
            v116 = v249;
            goto lab_0x409a50_5;
        }
        int64_t v251 = *v5; // 0x4094e7
        int64_t size2 = 176 * v246; // 0x4094f9
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x409649
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x409bac
                v118 = v252;
                if (v4 == v252) {
                    // 0x409a79
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x409a57
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x409a69_3;
            }
            goto lab_0x409664;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x40950b
            if (mem4 == NULL) {
                // 0x409da3
                v249 = *v6;
                v116 = v249;
                goto lab_0x409a50_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x40950b
            int64_t v254 = *v5; // 0x40952d
            int64_t v255 = *a2; // 0x409531
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x409664;
            } else {
                goto lab_0x40953f;
            }
        }
    }
  lab_0x4097f2:
    // 0x4097f2
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x409807
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x409449;
  lab_0x40982d:;
    uint32_t v335 = (int32_t)v153; // 0x409835
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40983b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x409843
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x409851
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40985e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x409449;
  lab_0x4097a0:;
    uint32_t v336 = (int32_t)v153; // 0x4097a8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x4097ae
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4097b6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x4097c4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4097d1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x409449;
  lab_0x409449:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x4090b0
    int64_t v260; // 0x4090b0
    int64_t * v261; // 0x4091af
    if (v259 == -1) {
        // 0x409954
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x409878_9;
        }
        // 0x40996c
        v260 = v148;
    } else {
        // 0x409453
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x409458
    int64_t v264 = v258; // 0x40945f
    int64_t v265 = v162; // 0x40945f
    int64_t v266 = v263; // 0x40945f
    int64_t v267; // 0x4090b0
    int64_t v268; // 0x4090b0
    int64_t v269; // 0x4090b0
    int64_t v270; // 0x4090b0
    int64_t v271; // 0x4090b0
    if (v142 > v262) {
        goto lab_0x409465;
    } else {
        uint64_t v272 = 2 * v142; // 0x4098c8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x4098d2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x409a50_5;
        }
        int64_t size3 = 32 * v273; // 0x4098f1
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x409904
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x4099e9
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x409a69_3;
            }
            goto lab_0x409a06;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x409911
            if (mem6 == NULL) {
                // 0x409da3
                v249 = *v6;
                v116 = v249;
                goto lab_0x409a50_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x409911
            int64_t v276 = v274 & 0xffffffff; // 0x409916
            int64_t v277 = *v6; // 0x409941
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x409a06;
            } else {
                goto lab_0x40994b;
            }
        }
    }
  lab_0x409465:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40947b
        int64_t v282 = v279; // 0x4090b0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x409470
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x409470
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x409489
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x409495
    int32_t v286 = *v285; // 0x409495
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x4098ba
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x409878_9;
        }
    } else {
        // 0x40949f
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x4094a1;
  lab_0x409b69:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x409b69
    int64_t * v290; // 0x4090b0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40963d;
  lab_0x40963d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40931c;
  lab_0x4093af:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x4093af
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x409c2a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x409878_9;
        }
        // 0x409c42
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x4093be;
  lab_0x4093be:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x4093be
    int64_t v300 = v296; // 0x4093c5
    int64_t v301 = v191; // 0x4093c5
    int64_t v302 = v299; // 0x4093c5
    int64_t v303; // 0x4090b0
    int64_t v304; // 0x4090b0
    int64_t v305; // 0x4090b0
    int64_t v306; // 0x409aa2
    if (v191 > v295) {
        goto lab_0x4093ce;
    } else {
        uint64_t v307 = 2 * v191; // 0x409a98
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x409a50_5;
        }
        int64_t size4 = 32 * v306; // 0x409abd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x409cee
            if (mem7 == NULL) {
                goto lab_0x409a69_3;
            }
            // 0x409d10
            v304 = (int64_t)mem7;
            goto lab_0x409d1b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x409ade
            int64_t v308 = *v6; // 0x409ae3
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x409a50_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x409ade
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x409d1b;
            } else {
                goto lab_0x409b1c;
            }
        }
    }
  lab_0x409664:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x4090b0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40953f;
  lab_0x40953f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x409128;
  lab_0x409a06:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x409a1c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40994b;
  lab_0x40994b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x409465;
  lab_0x4093ce:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x4093e3
        int64_t v324 = v322; // 0x4090b0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x4093d8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x4093d8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x4093f1
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x4093fe
    int32_t v328 = *v327; // 0x4093fe
    if (v328 != 0) {
        // 0x409b25
        if (v328 != 5) {
            goto lab_0x409878_9;
        }
        unsigned char v329 = *(char *)v297; // 0x409b2e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x409408
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x409411
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x409271;
  lab_0x409d1b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x409d1b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x409b1c;
  lab_0x409b1c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x4093ce;
}
// Address range: 0x409dc0 - 0x409e1d
int64_t function_409dc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409dc0
    return function_401790();
}
// Address range: 0x409e20 - 0x409e21
int64_t function_409e20(void) {
    // 0x409e20
    int64_t result; // 0x409e20
    return result;
}
// Address range: 0x409e30 - 0x409e48
int64_t function_409e30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409e30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x409e48 - 0x409e68
int64_t function_409e48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x409e52
    while (*(int64_t *)v1 != -1) {
        // 0x409e53
        v1 -= 8;
    }
    // 0x409e64
    return result;
}
