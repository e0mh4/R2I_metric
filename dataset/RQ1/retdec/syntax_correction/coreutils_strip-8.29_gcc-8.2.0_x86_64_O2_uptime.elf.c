#include "decompile_retdec.h"
// Address range: 0x401ba0 - 0x401ba5
int64_t function_401ba0(void) {
    // 0x401ba0
    abort();
    // UNREACHABLE
}
// Address range: 0x401ba5 - 0x401baa
int64_t function_401ba5(void) {
    // 0x401ba5
    abort();
    // UNREACHABLE
}
// Address range: 0x401baa - 0x401baf
int64_t function_401baa(void) {
    // 0x401baa
    abort();
    // UNREACHABLE
}
// Address range: 0x401baf - 0x401bb4
int64_t function_401baf(void) {
    // 0x401baf
    abort();
    // UNREACHABLE
}
// Address range: 0x401bb4 - 0x401bb9
int64_t function_401bb4(void) {
    // 0x401bb4
    abort();
    // UNREACHABLE
}
// Address range: 0x401bb9 - 0x401bbe
int64_t function_401bb9(void) {
    // 0x401bb9
    abort();
    // UNREACHABLE
}
// Address range: 0x401bc0 - 0x401cc8
int64_t function_401bc0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401bc5
    function_404040(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401bc0
    function_408950(0x402490, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_403f30(v1, a2, "uptime", "GNU coreutils", (int64_t)g20, 0x402130);
    int64_t v3 = function_407200(v1, a2, (int64_t *)&g12, &g2, 0, 0x402130); // 0x401c4f
    if ((int32_t)v3 != -1) {
        // 0x401cbe
        function_402130(1);
        // UNREACHABLE
    }
    int32_t v4 = *(int32_t *)0x60c2bc; // 0x401c59
    int32_t v5 = (int32_t)a1 - v4; // 0x401c60
    if (v5 == 0) {
        // 0x401c7e
        function_401db0((int64_t)"/var/run/utmp", 1, (int64_t)&g12, (int64_t)&g2, 0);
        // 0x401c75
        return 0;
    }
    int64_t v6 = 8 * (int64_t)v4 + a2;
    if (v5 == 1) {
        int64_t v7 = *(int64_t *)v6; // 0x401c69
        function_401db0(v7, 0, (int64_t)&g12, (int64_t)&g2, 0);
        // 0x401c75
        return 0;
    }
    // 0x401c8f
    function_405c60(*(int64_t *)(v6 + 8));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x401cbe
    function_402130(1);
    // UNREACHABLE
}
// Address range: 0x401cd0 - 0x401cfb
// Address range: 0x401cfb - 0x401d1a
int64_t function_401cfb(void) {
    // 0x401cfb
    return &g30;
}
// Address range: 0x401d1a - 0x401d51
int64_t function_401d1a(void) {
    // 0x401d1a
    return 0;
}
// Address range: 0x401d51 - 0x401da8
int64_t function_401d51(void) {
    // 0x401d51
    if (g34 != 0) {
        // 0x401da7
        int64_t result; // 0x401d51
        return result;
    }
    int64_t v1 = g35; // 0x401d84
    int64_t result2; // 0x401d96
    if (g35 >= ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x401d96
        result2 = function_401cfb();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x401d86
        v1++;
    }
    // 0x401d7a
    g35 = v1;
    // 0x401d96
    result2 = function_401cfb();
    g34 = 1;
    return result2;
}
// Address range: 0x401da8 - 0x401dad
int64_t function_401da8(void) {
    // 0x401da8
    return function_401d1a();
}
// Address range: 0x401db0 - 0x402130
int64_t function_401db0(int64_t a1, uint32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    float64_t loadavg[1]; // 0x401f81
    int16_t * v1 = NULL; // bp-104, 0x401dcd
    int64_t v2; // bp-112, 0x401db0
    int64_t v3 = function_407360(a1, &v2, (int64_t *)&v1, (int64_t)a2); // 0x401dd6
    if ((int32_t)v3 != 0) {
        // 0x4020ff
        error(1, *__errno_location(), "%s", (char *)function_405ae0(0, 3, a1));
        return &g53;
    }
    // 0x401de3
    int64_t time_val; // bp-96, 0x401db0
    if (v2 == 0) {
        // 0x4020ba
        time_val = time(NULL);
    } else {
        int64_t v4 = 0;
        int64_t v5 = 0;
        int64_t v6 = (int64_t)v1;
        int64_t v7 = v2 - 1;
        int16_t v8 = *(int16_t *)v6; // 0x401e21
        int64_t v9; // 0x401db0
        int64_t v10; // 0x401db0
        int64_t v11; // 0x401e30
        while (*(char *)(v6 + 44) != 0 && v8 == 7) {
            // 0x401e2c
            v11 = v5 + 1;
            v10 = v4;
            v9 = v11;
            if (v7 == 0) {
                // break (via goto) -> 0x401e40
                goto lab_0x401e40;
            }
            v5 = v11;
            v6 += 384;
            v7--;
            v8 = *(int16_t *)v6;
        }
        int64_t v12 = v4; // 0x401e04
        if (v8 == 2) {
            // 0x401e06
            v12 = (int64_t)*(int32_t *)(v6 + 340);
        }
        int64_t v13 = v12;
        v10 = v13;
        v9 = v5;
        while (v7 != 0) {
            // 0x401e1d
            v4 = v13;
            v6 += 384;
            v7--;
            v8 = *(int16_t *)v6;
            while (*(char *)(v6 + 44) != 0 && v8 == 7) {
                // 0x401e2c
                v11 = v5 + 1;
                v10 = v4;
                v9 = v11;
                if (v7 == 0) {
                    // break (via goto) -> 0x401e40
                    goto lab_0x401e40;
                }
                v5 = v11;
                v6 += 384;
                v7--;
                v8 = *(int16_t *)v6;
            }
            // 0x401e00
            v12 = v4;
            if (v8 == 2) {
                // 0x401e06
                v12 = (int64_t)*(int32_t *)(v6 + 340);
            }
            // 0x401e0d
            v13 = v12;
            v10 = v13;
            v9 = v5;
        }
      lab_0x401e40:;
        int64_t time_val2 = time(NULL); // 0x401e42
        time_val = time_val2;
        if (v10 != 0) {
            struct tm * time_info = localtime((int32_t *)&time_val); // 0x401ed5
            if (time_info == NULL) {
                // 0x402075
                __printf_chk(1, dcgettext(NULL, " ??:????  ", 5));
            } else {
                // 0x401eeb
                function_403f10((int64_t)g31, (int64_t)dcgettext(NULL, " %H:%M:%S  ", 5), (int64_t)time_info, 0, 0);
            }
            int64_t v14 = time_val2 - v10; // 0x401e55
            if (v14 == -1) {
                // 0x402095
                __printf_chk(1, dcgettext(NULL, "up ???? days ??:??,  ", 5));
            } else {
                if (v14 > 0x1517f) {
                    // 0x401fe0
                    __printf_chk(1, dcngettext(NULL, "up %ld day %2d:%02d,  ", "up %ld days %2d:%02d,  ", 0, 5));
                } else {
                    // 0x401f25
                    __printf_chk(1, dcgettext(NULL, "up  %2d:%02d,  ", 5));
                }
            }
            // 0x401f4b
            __printf_chk(1, dcngettext(NULL, "%lu user", "%lu users", (int32_t)v9, 5));
            int64_t v15; // bp-88, 0x401db0
            loadavg[0] = (int64_t)&v15;
            int32_t result = getloadavg(loadavg, 3); // 0x401f81
            if (result != -1) {
                if (result < 1) {
                    // 0x401fd1
                    return result;
                }
                int64_t v16 = __asm_movsd_3(__asm_movsd(v15)); // 0x401fa7
                char * v17 = dcgettext(NULL, ",  load average: %.2f", 5); // 0x401fad
                __asm_movsd(v16);
                __printf_chk(1, v17);
                if (result != 1) {
                    // 0x402017
                    int64_t v18; // 0x401db0
                    __printf_chk(1, ", %.2f", (float64_t)(int64_t)__asm_movsd(v18));
                    if (result != 2) {
                        // 0x402036
                        __printf_chk(1, ", %.2f", (float64_t)(int64_t)__asm_movsd(v18));
                    }
                }
            }
            int64_t v19 = (int64_t)g31; // 0x402050
            int64_t * v20 = (int64_t *)(v19 + 40); // 0x402057
            uint64_t result2 = *v20; // 0x402057
            if (result2 >= *(int64_t *)(v19 + 48)) {
                // 0x401fd1
                return __overflow((struct _IO_FILE *)v19, 10);
            }
            // 0x402065
            *v20 = result2 + 1;
            *(char *)result2 = 10;
            // 0x401fd1
            return result2;
        }
    }
    // 0x4020c6
    error(1, *__errno_location(), dcgettext(NULL, "couldn't get boot time", 5));
    // 0x401fd1
    return __overflow((struct _IO_FILE *)1, 10);
}
// Address range: 0x402130 - 0x402465
int64_t function_402130(int64_t a1) {
    int32_t status = a1; // 0x402146
    if (status != 0) {
        // 0x40214a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40216f
        exit(status);
        // UNREACHABLE
    }
    // 0x402176
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]\n", 5));
    __printf_chk(1, dcgettext(NULL, "Print the current time, the length of time the system has been up,\nthe number of users on the system, and the average number of jobs\nin the run queue over the last 1, 5 and 15 minutes.", 5));
    __printf_chk(1, dcgettext(NULL, "  Processes in\nan uninterruptible sleep state also contribute to the load average.\n", 5));
    __printf_chk(1, dcgettext(NULL, "If FILE is not specified, use %s.  %s as FILE is common.\n\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    int64_t v1 = &g1; // bp-136, 0x402244
    bool v2; // 0x402130
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4022c8
    int64_t v6 = *(int64_t *)v5; // 0x4022cc
    int64_t v7 = 7; // 0x4022d2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"uptime";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4022de
        char v11 = *(char *)v9; // 0x4022de
        char v12 = v11; // 0x4022de
        bool v13 = false; // 0x4022de
        while (v10 == v11) {
            // 0x4022d4
            v7--;
            int64_t v14 = v9 + v3; // 0x4022de
            int64_t v15 = v8 + v3; // 0x4022de
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
            // break -> 0x4022ea
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x4022ea
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4023fc;
        } else {
            // 0x4023e6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40243b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40234c;
            } else {
                goto lab_0x4023fc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40234c;
        } else {
            // 0x402332
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40243b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40234c;
            } else {
                goto lab_0x40234c;
            }
        }
    }
  lab_0x4023fc:
    // 0x4023fc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40238c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40216f
    exit(status);
    // UNREACHABLE
  lab_0x40234c:
    // 0x40234c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40238c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40216f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402470 - 0x402478
int64_t function_402470(int64_t a1) {
    // 0x402470
    g37 = a1;
    int64_t result; // 0x402470
    return result;
}
// Address range: 0x402480 - 0x402488
int64_t function_402480(int64_t a1) {
    // 0x402480
    g36 = a1;
    int64_t result; // 0x402480
    return result;
}
// Address range: 0x402490 - 0x40252e
int64_t function_402490(void) {
    // 0x402490
    int32_t * err_num; // 0x4024a6
    if ((int32_t)function_407ab0((int64_t)g31) == 0) {
        goto lab_0x4024bc;
    } else {
        // 0x4024a6
        err_num = __errno_location();
        if (g36 == 0) {
            goto lab_0x4024d3;
        } else {
            // 0x4024b7
            if (*err_num != 32) {
                goto lab_0x4024d3;
            } else {
                goto lab_0x4024bc;
            }
        }
    }
  lab_0x4024bc:;
    int64_t result = function_407ab0((int64_t)g33); // 0x4024c3
    if ((int32_t)result == 0) {
        // 0x4024cc
        return result;
    }
    // 0x40250e
    _exit(g21);
    // UNREACHABLE
  lab_0x4024d3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4024df
    if (g37 == 0) {
        // 0x402519
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4024f3
        error(0, *err_num, "%s: %s", (char *)function_405ab0((int64_t)g37), v1);
    }
    // 0x40250e
    _exit(g21);
    // UNREACHABLE
}
// Address range: 0x402530 - 0x402581
int64_t function_402530(int64_t stream, int64_t a2, int64_t a3) {
    // 0x402530
    if (a3 == 0) {
        // 0x402580
        int64_t result; // 0x402530
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x40254b
    int64_t v2 = a2; // 0x402553
    unsigned char v3 = *(char *)v2; // 0x402558
    v2++;
    int32_t c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x402566
    int32_t fputc_rc = fputc(c, (struct _IO_FILE *)stream); // 0x402569
    while (v2 != a3 + a2) {
        // 0x402558
        v3 = *(char *)v2;
        v2++;
        c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        fputc_rc = fputc(c, (struct _IO_FILE *)stream);
    }
    // 0x402573
    return fputc_rc;
}
// Address range: 0x402590 - 0x4025e1
int64_t function_402590(int64_t stream, int64_t a2, int64_t a3) {
    // 0x402590
    if (a3 == 0) {
        // 0x4025e0
        int64_t result; // 0x402590
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x4025ab
    int64_t v2 = a2; // 0x4025b3
    unsigned char v3 = *(char *)v2; // 0x4025b8
    v2++;
    int32_t c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x4025c6
    int32_t fputc_rc = fputc(c, (struct _IO_FILE *)stream); // 0x4025c9
    while (v2 != a3 + a2) {
        // 0x4025b8
        v3 = *(char *)v2;
        v2++;
        c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        fputc_rc = fputc(c, (struct _IO_FILE *)stream);
    }
    // 0x4025d3
    return fputc_rc;
}
// Address range: 0x4025f0 - 0x403f0e
int64_t function_4025f0(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4025f0
    int64_t v1; // 0x4025f0
    char v2 = *(char *)&v1; // 0x402639
    if (v2 == 0) {
        // 0x402687
        return 0;
    }
    int64_t v3 = a1;
    int64_t v4; // bp-1240, 0x4025f0
    int64_t v5 = &v4; // 0x402605
    struct _IO_FILE * stream = (struct _IO_FILE *)v3;
    int64_t v6 = v5 | 4;
    char * v7 = (char *)v6;
    int64_t * tm = (int64_t *)(v5 + 8);
    int64_t v8 = v5 + 48;
    int32_t * v9 = (int32_t *)v8;
    int64_t * v10 = (int64_t *)(v5 + 24);
    int64_t v11 = v5 + 80;
    int32_t * v12 = (int32_t *)v11;
    int64_t str2 = v5 + 160;
    int64_t v13 = v5 + 72;
    int32_t * v14 = (int32_t *)v13;
    int64_t v15 = v5 + 151;
    char * v16 = (char *)v13;
    int32_t * v17 = (int32_t *)(v5 + 68);
    int64_t * str = (int64_t *)(v5 + 40);
    int64_t * v18 = (int64_t *)v8;
    int64_t * v19 = (int64_t *)v13;
    char * c3 = (char *)v11;
    int64_t format = v5 + 128;
    int16_t * v20 = (int16_t *)format;
    int64_t * v21 = (int64_t *)(v5 + 16);
    int32_t * v22 = (int32_t *)(v5 + 1248);
    int32_t * v23 = (int32_t *)v6;
    int64_t * v24 = (int64_t *)(v5 - 16);
    int64_t * v25 = (int64_t *)(v5 + 32);
    int64_t data2 = v5 + 161;
    char * v26 = (char *)v8;
    int64_t v27 = v5 + 88;
    int64_t * v28 = (int64_t *)v27;
    int64_t v29 = v5 + 96;
    int64_t * v30 = (int64_t *)v29;
    int64_t v31 = v5 + 104;
    int32_t * v32 = (int32_t *)v31;
    int64_t * v33 = (int64_t *)(v5 + 112);
    int64_t * v34 = (int64_t *)v31;
    int32_t * v35 = (int32_t *)v29;
    int32_t * v36 = (int32_t *)v27;
    int64_t * v37 = (int64_t *)v11;
    int64_t * v38 = (int64_t *)(v5 + 120);
    int64_t v39 = a3; // 0x4025f0
    int64_t v40 = a2; // 0x40267a
    char v41 = v2; // 0x40267a
    int64_t v42 = 0;
    char v43; // 0x4025f0
    char v44; // 0x4025f0
    char v45; // 0x4025f0
    char v46; // 0x4025f0
    char v47; // 0x4025f0
    char v48; // 0x4025f0
    char v49; // 0x4025f0
    char v50; // 0x4025f0
    char v51; // 0x4025f0
    char v52; // 0x4025f0
    int64_t v53; // 0x4025f0
    int64_t v54; // 0x4025f0
    int64_t v55; // 0x4025f0
    int64_t v56; // 0x4025f0
    int64_t v57; // 0x4025f0
    int64_t result; // 0x4025f0
    int64_t v58; // 0x4025f0
    int64_t v59; // 0x4025f0
    int64_t v60; // 0x4025f0
    int64_t v61; // 0x4025f0
    int64_t v62; // 0x4025f0
    int64_t v63; // 0x4025f0
    int64_t v64; // 0x4025f0
    int64_t v65; // 0x4025f0
    int64_t v66; // 0x4025f0
    while (true) {
      lab_0x40265a:
        // 0x40265a
        v56 = v42;
        char c = v41;
        int64_t v67 = v40;
        v66 = v39;
        char v68 = v44;
        char v69 = v43;
        if (c == 37) {
            // 0x4026d0
            *v7 = *(char *)(v5 + 67);
            v48 = v69;
            v50 = v68;
            v64 = v67;
            v61 = 0;
            v54 = 0;
            while (true) {
              lab_0x4026e0_3:
                // 0x4026e0
                v55 = v54;
                int64_t v70 = v64 + 1; // 0x4026e0
                char v71 = *(char *)v70; // 0x4026e4
                char v72 = v71; // 0x4026ed
                int64_t v73 = v70; // 0x4026ed
                int64_t v74 = v61; // 0x4026ed
                char v75 = v50; // 0x4026ed
                char v76 = v48; // 0x4026ed
                v47 = v48;
                v49 = v50;
                v63 = v70;
                v60 = v61;
                v53 = 48;
                if (v71 != 48) {
                    v62 = v74;
                    v65 = v73;
                    v58 = v72;
                    v52 = v75;
                    v51 = v76;
                    int64_t v77; // 0x4026f5
                    char v78; // 0x4026f9
                    int64_t v79; // 0x4026f9
                    while (v51 <= v52) {
                        if (v58 != 35) {
                            // 0x402718
                            v47 = v51;
                            v49 = v52;
                            v63 = v65;
                            v60 = v62;
                            v53 = v58;
                            if ((char)v58 == 45) {
                                goto lab_0x4026e0_2;
                            } else {
                                goto lab_0x40271c;
                            }
                        }
                        // 0x4026f5
                        v77 = v65 + 1;
                        v78 = *(char *)v77;
                        v79 = v78;
                        v47 = v78;
                        v49 = 48;
                        v63 = v77;
                        v60 = 1;
                        v53 = v79;
                        if (v78 == 48) {
                            goto lab_0x4026e0_2;
                        }
                        v62 = 1;
                        v65 = v77;
                        v58 = v79;
                        v52 = 48;
                        v51 = v78;
                    }
                    char v80 = v58;
                    while (v80 == 94) {
                        // 0x402754
                        *v7 = 1;
                        int64_t v81 = v65 + 1; // 0x4026e0
                        char v82 = *(char *)v81; // 0x4026e4
                        v72 = v82;
                        v73 = v81;
                        v74 = v62;
                        v75 = v52;
                        v76 = v51;
                        v47 = v51;
                        v49 = v52;
                        v63 = v81;
                        v60 = v62;
                        v53 = 48;
                        if (v82 == 48) {
                            goto lab_0x4026e0_2;
                        }
                        v62 = v74;
                        v65 = v73;
                        v58 = v72;
                        v52 = v75;
                        v51 = v76;
                        while (v51 <= v52) {
                            if (v58 != 35) {
                                // 0x402718
                                v47 = v51;
                                v49 = v52;
                                v63 = v65;
                                v60 = v62;
                                v53 = v58;
                                if ((char)v58 == 45) {
                                    goto lab_0x4026e0_2;
                                } else {
                                    goto lab_0x40271c;
                                }
                            }
                            // 0x4026f5
                            v77 = v65 + 1;
                            v78 = *(char *)v77;
                            v79 = v78;
                            v47 = v78;
                            v49 = 48;
                            v63 = v77;
                            v60 = 1;
                            v53 = v79;
                            if (v78 == 48) {
                                goto lab_0x4026e0_2;
                            }
                            v62 = 1;
                            v65 = v77;
                            v58 = v79;
                            v52 = 48;
                            v51 = v78;
                        }
                        // 0x402750
                        v80 = v58;
                    }
                    // 0x402760
                    v47 = v51;
                    v49 = v52;
                    v63 = v65;
                    v60 = v62;
                    v53 = v58;
                    if (v80 != 95) {
                        // break -> 0x40271c
                        break;
                    }
                }
                goto lab_0x4026e0_2;
            }
            goto lab_0x40271c;
        } else {
            // 0x402660
            result = 0;
            if (v56 >= 0xfffffffffffffffe) {
                // break -> 0x402687
                break;
            }
            if (a1 != 0) {
                // 0x40266b
                fputc((int32_t)c, stream);
            }
            // 0x402673
            v45 = v69;
            v46 = v68;
            v39 = v66;
            v59 = v67;
            v57 = v56 + 1;
            goto lab_0x40267a;
        }
    }
  lab_0x402687_12:
    // 0x402687
    return result;
  lab_0x4026e0_2:
    // 0x4026e0
    v48 = v47;
    v50 = v49;
    v64 = v63;
    v61 = v60;
    v54 = v53 & 0xffffffff;
    goto lab_0x4026e0_3;
  lab_0x4027c6:;
    // 0x4027c6
    int64_t v83; // 0x402783
    int64_t v84 = v83; // 0x4027c9
    int64_t v85; // 0x40278b
    int64_t v86 = v85; // 0x4027c9
    int64_t v87; // 0x40278d
    int64_t v88 = v87; // 0x4027c9
    int64_t v89; // 0x402783
    int64_t v90 = v89; // 0x4027c9
    int64_t v91 = v85; // 0x4027c9
    int64_t v92 = 0x7fffffff; // 0x4027c9
    int64_t v93; // 0x40278d
    if ((int32_t)v93 >= 10) {
        // break -> 0x40272a
        goto lab_0x40272a_2;
    }
    // 0x4027cf
    int64_t v94; // 0x4025f0
    int64_t v95 = v94 + 2; // 0x4027cf
    int64_t v96 = (int64_t)*(char *)v95; // 0x4027cf
    int64_t v97 = v96; // 0x4027e2
    int64_t v98 = v96 & 0xffffffff; // 0x4027e2
    int64_t v99 = v96 + 0xffffffd0 & 0xffffffff; // 0x4027e2
    int64_t v100 = v95; // 0x4027e2
    int64_t v101 = 0x7fffffff; // 0x4027e2
    goto lab_0x4027aa;
  lab_0x4027aa:;
    int64_t v102 = v101;
    int64_t v103 = v100;
    int64_t v104 = v99;
    int64_t v105 = v103; // 0x4027ad
    int64_t v106 = v102; // 0x4027ad
    if ((int32_t)v104 >= 10) {
        // 0x4027af
        v84 = v97;
        v86 = v98;
        v88 = v104;
        v90 = v103;
        v91 = v97 & 0xffffffff;
        v92 = v102;
        goto lab_0x40272a_2;
    }
    goto lab_0x402783;
  lab_0x40271c:;
    int64_t v111 = v58 & 0xffffffff;
    v84 = v58;
    v86 = v111;
    v88 = v66;
    v90 = v65;
    v91 = v111;
    v92 = 0xffffffff;
    v105 = v65;
    v106 = 0;
    if ((int32_t)v58 < 58) {
        while (true) {
          lab_0x402783:;
            int64_t v107 = v106;
            v94 = v105;
            v89 = v94 + 1;
            v83 = (int64_t)*(char *)v89;
            v85 = v83 & 0xffffffff;
            v93 = v83 + 0xffffffd0;
            v87 = v93 & 0xffffffff;
            int32_t v108 = v107; // 0x402790
            if (v108 > 0xccccccc) {
                goto lab_0x4027c6;
            } else {
                char v109 = *(char *)v94; // 0x402799
                int64_t v110 = v109; // 0x402799
                v1 = v110;
                if (v108 != 0xccccccc || v109 < 56) {
                    // 0x40279e
                    v97 = v83;
                    v98 = v85;
                    v99 = v87;
                    v100 = v89;
                    v101 = 10 * v107 + 0xffffffd0 + v110 & 0xffffffff;
                    goto lab_0x4027aa;
                } else {
                    goto lab_0x4027c6;
                }
            }
        }
    }
    goto lab_0x40272a_2;
  lab_0x40267a:
    // 0x40267a
    v42 = v57;
    v40 = v59 + 1;
    v41 = *(char *)v40;
    v43 = v45;
    v44 = v46;
    result = v42;
    if (v41 == 0) {
        // break -> 0x402687
        goto lab_0x402687_12;
    }
    goto lab_0x40265a;
  lab_0x40272a_2:;
    int64_t v112 = v92;
    int64_t v113 = v90;
    int64_t v114 = v88;
    int64_t v115 = v86; // 0x4025f0
    int64_t v116 = v113; // 0x4025f0
    int64_t v117 = v91; // 0x4025f0
    int64_t v118 = 0; // 0x4025f0
    int64_t v119; // 0x4025f0
    switch ((char)v119) {
        case 79: {
        }
        case 69: {
            int64_t v120 = v113 + 1; // 0x402770
            int64_t v121 = (int64_t)*(char *)v120; // 0x402770
            v115 = v121 & 0xffffffff;
            v116 = v120;
            v117 = v121;
            v118 = v84 & 0xffffffff;
            // break -> 0x402740
            break;
        }
    }
    int64_t v122 = v118;
    int64_t v123 = v116;
    int64_t v124 = v115;
    g51 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v123; // 0x402743
    int64_t v127 = v114; // 0x402743
    int64_t v128 = v123; // 0x402743
    int64_t v129 = 0; // 0x402743
    char v130 = 1; // 0x402743
    int64_t v131; // 0x4025f0
    int64_t v132; // 0x4025f0
    int64_t v133; // 0x4025f0
    int64_t v134; // 0x4025f0
    int32_t v135; // 0x4025f0
    int64_t v136; // 0x4025f0
    int64_t v137; // 0x4025f0
    int64_t v138; // 0x4025f0
    int64_t v139; // 0x4025f0
    int64_t v140; // 0x4025f0
    int64_t v141; // 0x4025f0
    int64_t v142; // 0x4025f0
    int64_t v143; // 0x4025f0
    int64_t v144; // 0x4025f0
    int64_t v145; // 0x4025f0
    int64_t v146; // 0x4025f0
    int64_t v147; // 0x4025f0
    int64_t v148; // 0x4025f0
    int64_t v149; // 0x4025f0
    int64_t v150; // 0x4025f0
    int64_t v151; // 0x4025f0
    int64_t v152; // 0x4025f0
    int64_t v153; // 0x4025f0
    int64_t v154; // 0x4025f0
    int64_t v155; // 0x4025f0
    int64_t v156; // 0x4025f0
    int64_t v157; // 0x4025f0
    int64_t v158; // 0x4025f0
    int64_t v159; // 0x4025f0
    int64_t v160; // 0x4025f0
    int64_t v161; // 0x4025f0
    int64_t v162; // 0x4025f0
    int64_t v163; // 0x4025f0
    int64_t v164; // 0x4025f0
    int64_t v165; // 0x4025f0
    int64_t v166; // 0x4025f0
    int64_t v167; // 0x4025f0
    int64_t v168; // 0x4025f0
    int64_t v169; // 0x4025f0
    int64_t v170; // 0x4025f0
    int64_t v171; // 0x4025f0
    int64_t v172; // 0x4025f0
    int64_t v173; // 0x4025f0
    int64_t v174; // 0x4025f0
    int64_t v175; // 0x4025f0
    int64_t v176; // 0x4025f0
    int32_t v177; // 0x4025f0
    switch (v125) {
        case 0: {
            // 0x402b93
            v171 = v123 - 1;
            goto lab_0x402b9b;
        }
        case 37: {
            int64_t c2 = v117;
            int32_t v178 = v112; // 0x402c51
            int64_t v179 = -1 - v56;
            int64_t v180 = v178 >= 0 ? 0x100000000 * v112 >> 32 : 0; // 0x402c6c
            int64_t v181 = v180 != 0 ? v180 : 1; // 0x402c71
            v1 = v181;
            *v18 = v181;
            if (v122 != 0) {
                goto lab_0x402bd3;
            } else {
                // 0x402c83
                if (v1 >= v179) {
                    // break -> 0x402687
                    break;
                }
                // 0x402c8c
                v176 = v179;
                if (a1 != 0) {
                    // 0x402c91
                    if (v178 >= 2) {
                        // 0x402c97
                        int64_t v182; // 0x4025f0
                        int64_t v183 = v182 - 1; // 0x402c9d
                        int64_t v184 = 0; // 0x402ca5
                        int64_t v185 = 0; // 0x402ca5
                        if (v55 == 48) {
                            int64_t v186 = v185;
                            int64_t v187 = v186 + 1; // 0x403786
                            fputc(48, stream);
                            v185 = v187;
                            while (v183 != v187) {
                                // 0x40377e
                                v186 = v185;
                                v187 = v186 + 1;
                                fputc(48, stream);
                                v185 = v187;
                            }
                        } else {
                            int64_t v188 = v184;
                            int64_t v189 = v188 + 1; // 0x402cb3
                            fputc(32, stream);
                            v184 = v189;
                            while (v183 != v189) {
                                // 0x402cab
                                v188 = v184;
                                v189 = v188 + 1;
                                fputc(32, stream);
                                v184 = v189;
                            }
                        }
                    }
                    // 0x402cc4
                    fputc((int32_t)c2, stream);
                    v176 = v179;
                }
                goto lab_0x402ccc;
            }
        }
        case 58: {
            int64_t v190 = v123 + 1; // 0x40375c
            char v191 = *(char *)v190; // 0x40375c
            char v192 = v191; // 0x40376c
            int64_t v193 = v190; // 0x40376c
            int64_t v194 = 1; // 0x40376c
            if (v191 == 58) {
                int64_t v195 = 2; // 0x403799
                int64_t v196 = v195 + v123; // 0x40379d
                char v197 = *(char *)v196; // 0x40379d
                v192 = v197;
                v193 = v196;
                v194 = v195;
                int64_t v198 = v195; // 0x4037a8
                while (v197 == 58) {
                    // 0x403799
                    v195 = v198 + 1;
                    v196 = v195 + v123;
                    v197 = *(char *)v196;
                    v192 = v197;
                    v193 = v196;
                    v194 = v195;
                    v198 = v195;
                }
            }
            // 0x40376e
            v126 = v123;
            v127 = v193;
            v128 = v193;
            v129 = v194;
            if (v192 != 122) {
                goto lab_0x403110;
            } else {
                goto lab_0x403159;
            }
        }
        case 65: {
            goto lab_0x4027e8;
        }
        case 66: {
            goto lab_0x4027e8;
        }
        case 67: {
            // 0x4029c2
            v169 = v123;
            v157 = 0;
            v141 = v112;
            v147 = v55;
            if (v122 == 69) {
                goto lab_0x40297f;
            } else {
                int32_t v199 = *(int32_t *)(*tm + 20); // 0x4029dc
                int32_t v200 = v199 / 100; // 0x4029ed
                int32_t v201 = v200 + 19; // 0x4029f1
                int32_t v202 = v199 + 1900; // 0x402a05
                int64_t v203 = v201 - (int32_t)(-100 * v200 + v199 < 0 == v201 >= 0 == (v201 != 0)); // 0x402a0f
                v1 = v203;
                v132 = v203;
                v168 = v123;
                v162 = 0;
                v172 = 0;
                v154 = v202 < 0 != ((v202 ^ v199) & (v199 ^ -0x80000000)) < 0;
                v156 = 2;
                v140 = v112;
                v146 = v55;
                goto lab_0x40296c;
            }
        }
        case 68: {
            // 0x402a1a
            v126 = v123;
            if (v122 != 0) {
                goto lab_0x403110;
            } else {
                // 0x402a23
                *v18 = (int64_t)"%m/%d/%y";
                goto lab_0x402a2c;
            }
        }
        case 70: {
            // 0x403405
            v126 = v123;
            if (v122 != 0) {
                goto lab_0x403110;
            } else {
                // 0x40340e
                *v18 = (int64_t)"%Y-%m-%d";
                goto lab_0x402a2c;
            }
        }
        case 71: {
            goto lab_0x40341c;
        }
        case 72: {
            // 0x402942
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v204 = (int64_t)*(int32_t *)(*tm + 8); // 0x402957
                v1 = v204;
                v131 = v204;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x402960;
            }
        }
        case 73: {
            // 0x4029ac
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v205 = (int64_t)*v17; // 0x4029b6
                v1 = v205;
                v131 = v205;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x402960;
            }
        }
        case 77: {
            // 0x402cd9
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v206 = (int64_t)*(int32_t *)(*tm + 4); // 0x402cee
                v1 = v206;
                v131 = v206;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x402960;
            }
        }
        case 78: {
            // 0x403718
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                uint32_t v207 = (int32_t)v112; // 0x403722
                if (v207 != -1) {
                    int64_t v208 = (int64_t)*v22;
                    v1 = v208;
                    int64_t v209 = v208; // 0x403c68
                    int64_t v210 = v112; // 0x403c68
                    int64_t v211 = v208; // 0x403c68
                    if (v207 <= 8) {
                        int64_t v212 = v209;
                        int64_t v213 = (v210 & 0xffffffff) + 1; // 0x403c85
                        int64_t v214 = ((int32_t)(0x66666667 * (0x100000000 * v212 >> 32) / 0x100000000) >> 2) - ((int32_t)v212 >> 31); // 0x403c90
                        v210 = v213;
                        while ((int32_t)v213 != 9) {
                            // 0x403c80
                            v212 = v214;
                            v213 = (v210 & 0xffffffff) + 1;
                            v214 = ((int32_t)(0x66666667 * (0x100000000 * v212 >> 32) / 0x100000000) >> 2) - ((int32_t)v212 >> 31);
                            v210 = v213;
                        }
                        // 0x403c97
                        v1 = v214;
                        v211 = v214;
                    }
                    // 0x403c97
                    v131 = v211;
                    v155 = v112 & 0xffffffff;
                    v139 = v112;
                    v145 = v55;
                } else {
                    int64_t v215 = (int64_t)*v22; // 0x40372c
                    v1 = v215;
                    v131 = v215;
                    v155 = 9;
                    v139 = 9;
                    v145 = v55;
                }
                goto lab_0x402960;
            }
        }
        case 80: {
            goto lab_0x403586;
        }
        case 82: {
            // 0x4035b0
            *v18 = (int64_t)"%H:%M";
            goto lab_0x402a2c;
        }
        case 83: {
            // 0x402cf6
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v216 = (int64_t)*(int32_t *)*tm; // 0x402d0b
                v1 = v216;
                v131 = v216;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x402960;
            }
        }
        case 84: {
            // 0x403744
            *v18 = (int64_t)"%H:%M:%S";
            goto lab_0x402a2c;
        }
        case 85: {
            // 0x402d12
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v217 = *tm; // 0x402d1c
                v177 = *(int32_t *)(v217 + 28) + 7 - *(int32_t *)(v217 + 24);
                goto lab_0x402d33;
            }
        }
        case 86: {
            goto lab_0x40341c;
        }
        case 87: {
            // 0x402d49
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v218 = *tm; // 0x402d53
                int32_t v219 = *(int32_t *)(v218 + 24); // 0x402d5d
                int32_t v220 = v219 + 6; // 0x402d61
                *v9 = v219;
                int32_t v221 = *(int32_t *)(v218 + 28); // 0x402d84
                v177 = 1 - v219 + v221 + 7 * ((v220 + (int32_t)(-0x6db6db6d * (int64_t)v220 / 0x100000000) >> 2) - (v220 >> 31));
                goto lab_0x402d33;
            }
        }
        case 88: {
            goto lab_0x402910;
        }
        case 89: {
            // 0x402d94
            v169 = v123;
            v157 = 0;
            v141 = v112;
            v147 = v55;
            v126 = v123;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x40297f;
                }
                case 79: {
                    goto lab_0x403110;
                }
                default: {
                    int32_t v222 = *(int32_t *)(*tm + 20); // 0x402db3
                    int32_t v223 = v222 + 1900; // 0x402db6
                    int64_t v224 = v223; // 0x402dc0
                    v1 = v224;
                    v133 = v224;
                    v164 = v123;
                    v160 = 0;
                    v173 = 0;
                    v152 = v223 < 0 != ((v223 ^ v222) & (v222 ^ -0x80000000)) < 0;
                    v158 = 4;
                    v142 = v112;
                    v148 = v55;
                    goto lab_0x402dd0;
                }
            }
        }
        case 90: {
            char v225 = v62;
            *v9 = (int32_t)v112;
            *v14 = (int32_t)v55;
            *v7 = v225 != 0 ? 0 : *v7;
            int32_t len = strlen((char *)*str); // 0x403016
            int64_t v226 = len; // 0x403016
            int32_t v227 = *v9; // 0x40301b
            int64_t v228 = v227; // 0x40301b
            uint64_t v229 = v227 >= 0 ? v228 : 0; // 0x403031
            int64_t v230 = v229 <= v226 ? v226 : v229; // 0x40303b
            *v18 = v230;
            if (v230 >= -1 - v56) {
                // break -> 0x402687
                break;
            }
            // 0x40304d
            v176 = v230;
            if (a1 != 0) {
                char v231 = v225; // 0x40305e
                if (v229 > v226) {
                    int64_t v232 = v228 - v226; // 0x403063
                    *v19 = v232;
                    if (*v14 == 48) {
                        // 0x403ec4
                        v231 = v225;
                        if (v232 != 0) {
                            int64_t v233 = 1; // 0x403edd
                            fputc(48, stream);
                            v231 = v225;
                            int64_t v234 = v233; // 0x403eeb
                            while (*v19 != v233) {
                                // 0x403ed5
                                v233 = v234 + 1;
                                fputc(48, stream);
                                v231 = v225;
                                v234 = v233;
                            }
                        }
                    } else {
                        // 0x403075
                        v231 = v225;
                        if (v232 != 0) {
                            // 0x40307d
                            *c3 = v225;
                            int64_t v235 = 0; // 0x40308b
                            v235++;
                            fputc(32, stream);
                            while (*v19 != v235) {
                                // 0x403090
                                v235++;
                                fputc(32, stream);
                            }
                            // 0x4030a6
                            v231 = *c3;
                        }
                    }
                }
                // 0x4030b1
                if (v231 != 0) {
                    // 0x403d8f
                    function_402530(v3, *str, v226);
                    v176 = v226;
                } else {
                    int64_t data = *str;
                    if (*v7 == 0) {
                        // 0x403d75
                        fwrite((int64_t *)data, len, 1, stream);
                        v176 = 1;
                    } else {
                        // 0x4030c5
                        function_402590(v3, data, v226);
                        v176 = v226;
                    }
                }
            }
            goto lab_0x402ccc;
        }
        case 97: {
            goto lab_0x4027e8;
        }
        case 98: {
            goto lab_0x4030f3;
        }
        case 99: {
            goto lab_0x402910;
        }
        case 100: {
            // 0x4036a2
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v236 = (int64_t)*(int32_t *)(*tm + 12); // 0x4036b7
                v1 = v236;
                v131 = v236;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x402960;
            }
        }
        case 101: {
            // 0x4036bf
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v237 = (int64_t)*(int32_t *)(*tm + 12); // 0x4036ce
                v1 = v237;
                v134 = v237;
                goto lab_0x402f90;
            }
        }
        case 103: {
            goto lab_0x40341c;
        }
        case 104: {
            goto lab_0x4030f3;
        }
        case 106: {
            // 0x4036d6
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int32_t v238 = *(int32_t *)(*tm + 28); // 0x4036eb
                int32_t v239 = v238 + 1; // 0x4036ee
                int64_t v240 = v239; // 0x4036f5
                v1 = v240;
                v132 = v240;
                v168 = v123;
                v162 = 0;
                v172 = 0;
                v154 = v239 < 0 != (v239 & (v238 ^ -0x80000000)) < 0;
                v156 = 3;
                v140 = v112;
                v146 = v55;
                goto lab_0x40296c;
            }
        }
        case 107: {
            // 0x403701
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v241 = (int64_t)*(int32_t *)(*tm + 8); // 0x403710
                v1 = v241;
                v134 = v241;
                goto lab_0x402f90;
            }
        }
        case 108: {
            // 0x402f82
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v242 = (int64_t)*v17; // 0x402f8c
                v1 = v242;
                v134 = v242;
                goto lab_0x402f90;
            }
        }
        case 109: {
            // 0x403677
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int32_t v243 = *(int32_t *)(*tm + 16); // 0x40368c
                int32_t v244 = v243 + 1; // 0x40368f
                int64_t v245 = v244; // 0x403696
                v1 = v245;
                v132 = v245;
                v168 = v123;
                v162 = 0;
                v172 = 0;
                v154 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v156 = 2;
                v140 = v112;
                v146 = v55;
                goto lab_0x40296c;
            }
        }
        case 110: {
            int32_t v246 = v112; // 0x4035be
            int64_t v247 = 0x100000000 * v112 >> 32;
            int64_t v248 = v246 >= 0 ? v247 : 0; // 0x4035cf
            int64_t v249 = v248 == 0 ? 1 : v248; // 0x4035d5
            if (v249 >= -1 - v56) {
                // break -> 0x402687
                break;
            }
            // 0x4035e8
            v175 = v114;
            v163 = v249;
            if (a1 != 0) {
                if (v246 >= 2) {
                    int64_t v250 = v247 - 1; // 0x4035fd
                    if (v55 == 48) {
                        int64_t v251 = 1; // 0x403637
                        fputc(48, stream);
                        int64_t v252 = v251; // 0x403643
                        while (v250 != v251) {
                            // 0x40362f
                            v251 = v252 + 1;
                            fputc(48, stream);
                            v252 = v251;
                        }
                    } else {
                        int64_t v253 = 1; // 0x40360f
                        fputc(32, stream);
                        int64_t v254 = v253; // 0x40361b
                        while (v250 != v253) {
                            // 0x403607
                            v253 = v254 + 1;
                            fputc(32, stream);
                            v254 = v253;
                        }
                    }
                }
                // 0x40361d
                fputc(10, stream);
                v175 = v114;
                v163 = v249;
            }
            goto lab_0x402b06;
        }
        case 112: {
            // 0x403752
            v130 = 0;
            goto lab_0x403586;
        }
        case 113: {
            // 0x403647
            v169 = v123;
            v157 = 1;
            v141 = v112;
            v147 = v55;
            if (v122 == 79) {
                goto lab_0x40297f;
            } else {
                // 0x40365f
                v1 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v165 = v123;
                v161 = 0;
                v174 = 0;
                v153 = 0;
                v159 = 1;
                v136 = v112;
                v149 = v55;
                goto lab_0x402dd7;
            }
        }
        case 114: {
            // 0x40291a
            *v16 = 0;
            v170 = v124;
            goto lab_0x40291f;
        }
        case 115: {
            int64_t v255 = *tm; // 0x40320f
            *v12 = (int32_t)v112;
            *v14 = (int32_t)v55;
            int128_t v256 = __asm_movdqu(*(int128_t *)(v255 + 32)); // 0x403233
            int128_t v257 = __asm_movdqu(*(int128_t *)v255); // 0x403238
            int128_t v258 = __asm_movdqu(*(int128_t *)(v255 + 16)); // 0x40323c
            *(int128_t *)str2 = (int128_t)__asm_movaps(v257);
            *(int128_t *)(v5 + 176) = (int128_t)__asm_movaps(v258);
            *(int128_t *)v8 = (int128_t)__asm_movaps(v256);
            *(int128_t *)(v5 + 192) = (int128_t)__asm_movaps(v256);
            *(int64_t *)(v5 + 208) = *(int64_t *)(v255 + 48);
            int64_t v259 = function_407970(*v10, str2, v114, v124); // 0x40326a
            uint32_t v260 = *v12; // 0x403274
            v1 = v259;
            int64_t v261 = v259;
            int64_t v262 = v261 >> 63; // 0x4032a0
            char v263 = (v261 >> 63 & 246) + v261; // 0x4032b8
            int64_t v264 = v15 - 1; // 0x4032c3
            *(char *)v264 = (v259 < 0 ? -v263 : v263) + 48;
            while (v262 != 0) {
                // 0x403288
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & 246) + v261;
                v264--;
                *(char *)v264 = (v1 < 0 ? -v263 : v263) + 48;
            }
            int64_t v265 = (int64_t)*v14; // 0x40326f
            int64_t v266 = v260; // 0x403274
            int32_t v267 = v260 >= 0 == (v260 != 0) ? v260 : 1; // 0x4032dd
            *v9 = v267;
            v135 = v267;
            v166 = v123;
            v137 = v266;
            v143 = v265;
            v151 = v264;
            v167 = v123;
            v138 = v266;
            v144 = v265;
            v150 = v264;
            if (v1 < 0) {
                goto lab_0x4037c0;
            } else {
                goto lab_0x4032eb;
            }
        }
        case 116: {
            int32_t v268 = v112; // 0x402b11
            int64_t v269 = 0x100000000 * v112 >> 32;
            int64_t v270 = v268 >= 0 ? v269 : 0; // 0x402b22
            int64_t v271 = v270 == 0 ? 1 : v270; // 0x402b28
            if (v271 >= -1 - v56) {
                // break -> 0x402687
                break;
            }
            // 0x402b3b
            v175 = v114;
            v163 = v271;
            if (a1 != 0) {
                if (v268 >= 2) {
                    int64_t v272 = v269 - 1; // 0x402b4c
                    if (v55 == 48) {
                        int64_t v273 = 1; // 0x402b83
                        fputc(48, stream);
                        int64_t v274 = v273; // 0x402b8f
                        while (v272 != v273) {
                            // 0x402b7b
                            v273 = v274 + 1;
                            fputc(48, stream);
                            v274 = v273;
                        }
                    } else {
                        int64_t v275 = 1; // 0x402b5e
                        fputc(32, stream);
                        int64_t v276 = v275; // 0x402b6a
                        while (v272 != v275) {
                            // 0x402b56
                            v275 = v276 + 1;
                            fputc(32, stream);
                            v276 = v275;
                        }
                    }
                }
                // 0x402b6c
                fputc(9, stream);
                v175 = v114;
                v163 = v271;
            }
            goto lab_0x402b06;
        }
        case 117: {
            int32_t v277 = *(int32_t *)(*tm + 24); // 0x402fc5
            int32_t v278 = v277 + 6; // 0x402fc8
            *v9 = v277;
            int64_t v279 = v277 + 7 + -7 * ((v278 + (int32_t)(-0x6db6db6d * (int64_t)v278 / 0x100000000) >> 2) - (v278 >> 31)); // 0x402feb
            v1 = v279;
            v131 = v279;
            v155 = 1;
            v139 = v112;
            v145 = v55;
            goto lab_0x402960;
        }
        case 119: {
            // 0x4030da
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403110;
            } else {
                int64_t v280 = (int64_t)*(int32_t *)(*tm + 24); // 0x4030eb
                v1 = v280;
                v131 = v280;
                v155 = 1;
                v139 = v112;
                v145 = v55;
                goto lab_0x402960;
            }
        }
        case 120: {
            goto lab_0x402910;
        }
        case 121: {
            // 0x4033b6
            v169 = v123;
            v157 = 0;
            v141 = v112;
            v147 = v55;
            if (v122 == 69) {
                goto lab_0x40297f;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x4033d0
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x4033e8
                v1 = v283;
                v131 = v283;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x4033f7
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x4033fd
                    int64_t v286 = v285 & 0xffffffff; // 0x4033fd
                    v1 = v286;
                    v131 = v286;
                    v155 = 2;
                    v139 = v112;
                    v145 = v55;
                }
                goto lab_0x402960;
            }
        }
        case 122: {
            goto lab_0x403159;
        }
        default: {
            goto lab_0x403110;
        }
    }
  lab_0x4027e8:
    // 0x4027e8
    v126 = v123;
    if (v122 != 0) {
        goto lab_0x403110;
    } else {
        char v287 = v62; // 0x4027f6
        *v7 = v287 != 0 ? v287 : *v7;
        goto lab_0x402800;
    }
  lab_0x40341c:
    // 0x40341c
    v126 = v123;
    if (v122 == 69) {
        goto lab_0x403110;
    } else {
        int64_t v288 = *tm; // 0x403426
        int32_t v289 = *(int32_t *)(v288 + 20); // 0x40342b
        uint32_t v290 = *(int32_t *)(v288 + 28); // 0x40342e
        v1 = v290;
        uint32_t v291 = *(int32_t *)(v288 + 24); // 0x403431
        int32_t v292 = v290 - v291; // 0x403441
        int32_t v293 = v292 + 382; // 0x403444
        int32_t v294 = v289 - 100 + (v289 >> 31 & 400); // 0x40344f
        int32_t v295 = v290 - 379 - v292 + 7 * ((v293 + (int32_t)(-0x6db6db6d * (int64_t)v293 / 0x100000000) >> 2) - (v293 >> 31)); // 0x403474
        int32_t v296; // 0x4025f0
        int32_t v297; // 0x403500
        if (v295 < 0) {
            int64_t v298 = 365; // 0x403be8
            if ((v294 + 3) % 4 == 0) {
                int32_t v299 = v294 - 1;
                v298 = 366;
                if (v299 % 100 - v299 == 1 - v294) {
                    uint32_t v300 = v299 % 400;
                    int64_t v301 = v300; // 0x403c17
                    v298 = v301 + 366 + (v301 ^ 0xffffffff) + (int64_t)(v300 == 0) & 0xffffffff;
                }
            }
            int64_t v302 = v298;
            int64_t v303; // 0x40342e
            int64_t v304 = v302 + v303; // 0x403c26
            int64_t v305; // 0x403431
            int64_t v306 = v304 - v305 + 382; // 0x403c38
            v296 = (int32_t)(v304 - v306) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v306 >> 32) / 0x100000000 + v306) >> 2) - ((int32_t)v306 >> 31));
        } else {
            int64_t v307 = 365; // 0x40348b
            if (v294 % 4 == 0) {
                // 0x40348d
                v307 = 366;
                if (v294 % 100 == 0) {
                    // 0x4034b5
                    v307 = v294 == 0 ? 366 : 365;
                }
            }
            int64_t v308 = v1 - v307; // 0x4034d2
            int64_t v309 = v308 - (int64_t)v291 + 382; // 0x4034de
            v297 = (int32_t)(v308 - v309) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v309 >> 32) / 0x100000000 + v309) >> 2) - ((int32_t)v309 >> 31));
            v296 = v297 >= 0 ? v297 : v295;
        }
        int64_t v310 = (v297 >> 31) + 1;
        if (v125 == 71) {
            int64_t v311 = (int64_t)v289 + 1900 + v310 & 0xffffffff; // 0x403cca
            v1 = v311;
            int32_t v312 = -1900 - (int32_t)v310; // 0x403cd8
            int32_t v313 = v289 - v312; // 0x403cdb
            v132 = v311;
            v168 = v123;
            v162 = 0;
            v172 = 0;
            v154 = v313 < 0 != ((v313 ^ v289) & (v312 ^ v289)) < 0;
            v156 = 4;
            v140 = v112;
            v146 = v55;
            goto lab_0x40296c;
        } else {
            if (v125 != 103) {
                int32_t v314 = v296;
                int32_t v315 = v314 < 0 ? 2 : 1; // 0x403cba
                int64_t v316 = v315 + (v314 + (int32_t)(-0x6db6db6d * (int64_t)v314 / 0x100000000) >> 2); // 0x403cbd
                v1 = v316;
                v131 = v316;
                v155 = 2;
                v139 = v112;
                v145 = v55;
            } else {
                int32_t v317 = v310; // 0x403548
                int32_t v318 = (v289 % 100 + v317) % 100;
                int64_t v319 = v318; // 0x40355e
                v1 = v319;
                v131 = v319;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                if (v318 < 0) {
                    int32_t v320 = -1900 - v317; // 0x403572
                    int32_t v321 = v289 - v320; // 0x403577
                    int64_t v322 = v321 < 0 == ((v321 ^ v289) & (v320 ^ v289)) < 0 ? v319 + 100 : -v319; // 0x403579
                    int64_t v323 = v322 & 0xffffffff; // 0x403579
                    v1 = v323;
                    v131 = v323;
                    v155 = 2;
                    v139 = v112;
                    v145 = v55;
                }
            }
            goto lab_0x402960;
        }
    }
  lab_0x403586:
    // 0x403586
    *v16 = v130;
    char v324 = v62; // 0x40358b
    *v16 = v324 != 0 ? v324 : v130;
    *v7 = v324 != 0 ? 0 : *v7;
    v170 = 112;
    goto lab_0x40291f;
  lab_0x402910:
    // 0x402910
    v126 = v123;
    if (v122 == 79) {
        goto lab_0x403110;
    } else {
        // 0x40291a
        *v16 = 0;
        v170 = v124;
        goto lab_0x40291f;
    }
  lab_0x4030f3:;
    char v541 = v62; // 0x4030f8
    *v7 = v541 != 0 ? v541 : *v7;
    v126 = v123;
    if (v122 == 0) {
        goto lab_0x402800;
    } else {
        goto lab_0x403110;
    }
  lab_0x403159:;
    int64_t v521 = v128;
    int64_t v542 = *tm; // 0x403159
    v45 = v51;
    v46 = v52;
    v39 = v127;
    v59 = v521;
    v57 = v56;
    int64_t v522; // 0x4025f0
    uint32_t v520; // 0x4031d6
    uint32_t v524; // 0x4031da
    if (*(int32_t *)(v542 + 32) < 0) {
        goto lab_0x40267a;
    } else {
        int64_t v543 = *(int64_t *)(v542 + 40); // 0x403169
        v1 = v543;
        int32_t v544 = v543;
        int64_t v545 = 1; // 0x403175
        if (v544 >= 0) {
            // 0x403177
            v545 = 0;
            if (v544 == 0) {
                // 0x40317f
                v545 = *(char *)*str == 45;
            }
        }
        // 0x40318b
        v522 = v545;
        int64_t v546 = 0x100000000 * v543 >> 32; // 0x403199
        int32_t v547 = v544 >> 31; // 0x40319b
        *v9 = ((int32_t)(-0x6e5d4c3b * v546 / 0x100000000) + v544 >> 11) - v547;
        int32_t v548 = ((int32_t)(v1 + -0x77777777 * v546 / 0x100000000) >> 5) - v547; // 0x4031b5
        v520 = -60 * ((v548 + (int32_t)(-0x77777777 * (int64_t)v548 / 0x100000000) >> 5) - (v548 >> 31)) + v548;
        v524 = -60 * v548 + (int32_t)v1;
        v1 = v524;
        v171 = v521;
        switch (v129) {
            case 1: {
                goto lab_0x403d59;
            }
            case 0: {
                int64_t v549 = (int64_t)(100 * *v9 + v520); // 0x403db6
                v1 = v549;
                v132 = v549;
                v168 = v521;
                v162 = 1;
                v172 = 0;
                v154 = v522;
                v156 = 5;
                v140 = v112;
                v146 = v55;
                goto lab_0x40296c;
            }
            case 2: {
                goto lab_0x403d35;
            }
            case 3: {
                if (v524 != 0) {
                    goto lab_0x403d35;
                } else {
                    if (v520 != 0) {
                        goto lab_0x403d59;
                    } else {
                        int64_t v550 = (int64_t)*v9; // 0x403dc9
                        v1 = v550;
                        v132 = v550;
                        v168 = v521;
                        v162 = 1;
                        v172 = v520;
                        v154 = v522;
                        v156 = 3;
                        v140 = v112;
                        v146 = v55;
                        goto lab_0x40296c;
                    }
                }
            }
            default: {
                goto lab_0x402b9b;
            }
        }
    }
  lab_0x403110:;
    int64_t v551 = v126;
    int64_t v552 = v551 - 1;
    while (*(char *)v552 != 37) {
        // 0x403117
        v551 = v552;
        v552 = v551 - 1;
    }
    int64_t v553 = 0x100000000 * (v126 + 2 - v551) >> 32; // 0x403130
    int64_t v554 = (int32_t)v112 >= 0 ? 0x100000000 * v112 >> 32 : 0; // 0x403140
    int64_t v555 = v553 >= v554 ? v553 : v554; // 0x403148
    *v18 = v555;
    int64_t v556 = v555; // 0x403151
    int64_t v557 = v554; // 0x403151
    int64_t v558 = v126; // 0x403151
    int64_t v559 = v553; // 0x403151
    int64_t v560 = v552; // 0x403151
    goto lab_0x402bd3;
  lab_0x402bd3:;
    int64_t v561 = -1 - v56;
    result = 0;
    if (v561 <= v556) {
        // break -> 0x402687
        goto lab_0x402687_12;
    }
    int64_t v562 = v558;
    int64_t v407 = v561; // 0x402be1
    int64_t v408 = v562; // 0x402be1
    int64_t size3; // 0x4025f0
    int64_t data4; // 0x4025f0
    int64_t v526; // 0x4025f0
    if (a1 == 0) {
        goto lab_0x402900;
    } else {
        // 0x402be7
        data4 = v560;
        size3 = v559;
        if (size3 >= v557) {
            goto lab_0x402c33;
        } else {
            int64_t v563 = (0x100000000 * v112 >> 32) - size3; // 0x402bf2
            if (v55 == 48) {
                // 0x403b0b
                v526 = v562;
                if (v563 == 0) {
                    goto lab_0x402c33;
                } else {
                    // 0x403b17
                    *v19 = v562;
                    int64_t v564; // 0x4025f0
                    int64_t v565 = v564 + 1; // 0x403b30
                    fputc(48, stream);
                    v564 = v565;
                    while (v563 != v565) {
                        int64_t v566 = v564;
                        v565 = v566 + 1;
                        fputc(48, stream);
                        v564 = v565;
                    }
                    // 0x402c2e
                    v526 = *v19;
                    goto lab_0x402c33;
                }
            } else {
                // 0x402bff
                v526 = v562;
                if (v563 == 0) {
                    goto lab_0x402c33;
                } else {
                    // 0x402c06
                    *v19 = v562;
                    int64_t v567 = 0; // 0x402c11
                    v567++;
                    fputc(32, stream);
                    while (v563 != v567) {
                        // 0x402c18
                        v567++;
                        fputc(32, stream);
                    }
                    // 0x402c2e
                    v526 = *v19;
                    goto lab_0x402c33;
                }
            }
        }
    }
  lab_0x402b9b:;
    int64_t v568 = v171;
    v126 = v568;
    if (*(char *)v568 != 37) {
        goto lab_0x403110;
    } else {
        int64_t v569 = (int32_t)v112 >= 0 ? 0x100000000 * v112 >> 32 : 0; // 0x402bad
        int64_t v570 = v569 != 0 ? v569 : 1; // 0x402bc4
        *v18 = v570;
        v556 = v570;
        v557 = v569;
        v558 = v568;
        v559 = 1;
        v560 = v568;
        goto lab_0x402bd3;
    }
  lab_0x40297f:
    // 0x40297f
    *v16 = 0;
    *v20 = 0x2520;
    int64_t v326 = v124; // 0x402989
    int64_t v327 = v169; // 0x402989
    int64_t v328 = v157; // 0x402989
    int64_t v329 = v141; // 0x402989
    int64_t v330 = v147; // 0x402989
    goto lab_0x402991;
  lab_0x40291f:;
    int64_t v325 = v170;
    *v20 = 0x2520;
    v326 = v325;
    v327 = v123;
    v328 = 0;
    v329 = v112;
    v330 = v55;
    int64_t v331; // 0x4025f0
    int64_t v332; // 0x4025f0
    int64_t v333; // 0x4025f0
    int64_t v334; // 0x4025f0
    int64_t v335; // 0x4025f0
    int64_t v336; // 0x4025f0
    if (v122 != 0) {
        goto lab_0x402991;
    } else {
        // 0x402935
        v334 = *v21;
        v336 = v325;
        v335 = v123;
        v331 = v112;
        v332 = v55;
        v333 = v122;
        goto lab_0x402820;
    }
  lab_0x402a2c:;
    unsigned char v337 = *v7; // 0x402a2c
    *v14 = (int32_t)v112;
    *v12 = (int32_t)v55;
    *v23 = (int32_t)v337;
    *v24 = (int64_t)*v22;
    uint64_t v338 = function_4025f0(0, *v18, *tm, (int64_t)v337, *v25, *v10); // 0x402a63
    int32_t v339 = *v14; // 0x402a6f
    int64_t v340 = v339; // 0x402a6f
    uint64_t v341 = v339 >= 0 ? v340 : 0; // 0x402a7d
    int64_t v342 = v338 >= v341 ? v338 : v341; // 0x402a87
    result = 0;
    if (v342 >= -1 - v56) {
        // break -> 0x402687
        goto lab_0x402687_12;
    }
    // 0x402a94
    v175 = v341;
    v163 = v342;
    if (a1 != 0) {
        if (v338 < v341) {
            int64_t v343 = v340 - v338; // 0x402aa6
            if (*v12 == 48) {
                // 0x403bab
                if (v343 != 0) {
                    int64_t v344 = 1; // 0x403bc8
                    fputc(48, stream);
                    int64_t v345 = v344; // 0x403bd4
                    while (v343 != v344) {
                        // 0x403bc0
                        v344 = v345 + 1;
                        fputc(48, stream);
                        v345 = v344;
                    }
                }
            } else {
                // 0x402ab3
                if (v343 != 0) {
                    int64_t v346 = 1; // 0x402ac8
                    fputc(32, stream);
                    int64_t v347 = v346; // 0x402ad4
                    while (v343 != v346) {
                        // 0x402ac0
                        v346 = v347 + 1;
                        fputc(32, stream);
                        v347 = v346;
                    }
                }
            }
        }
        // 0x402ad6
        *v24 = (int64_t)*v22;
        int64_t v348 = *tm; // 0x402af3
        function_4025f0(a1, *v18, v348, (int64_t)*v23, *v25, *v10);
        v175 = v348;
        v163 = v342;
    }
    goto lab_0x402b06;
  lab_0x402ccc:
    // 0x402ccc
    v45 = v51;
    v46 = v52;
    v39 = v176;
    v59 = v123;
    v57 = *v18 + v56;
    goto lab_0x40267a;
  lab_0x402800:
    // 0x402800
    *v16 = 0;
    *v20 = 0x2520;
    v334 = *v21;
    v336 = v124;
    v335 = v123;
    v331 = v112;
    v332 = v55;
    v333 = 0;
    goto lab_0x402820;
  lab_0x402b06:
    // 0x402b06
    v45 = v51;
    v46 = v52;
    v39 = v175;
    v59 = v123;
    v57 = v163 + v56;
    goto lab_0x40267a;
  lab_0x4037c0:;
    int64_t v349 = v150;
    int64_t v350 = v138;
    int64_t v351 = v167;
    *c3 = 45;
    int64_t v352 = v351; // 0x4037c9
    int64_t v353 = v350; // 0x4037c9
    int64_t v354 = v144; // 0x4037c9
    int64_t v355 = v349; // 0x4037c9
    int32_t v356; // 0x4025f0
    char v357; // 0x4025f0
    int64_t v358; // 0x4025f0
    int64_t v359; // 0x4025f0
    int64_t v360; // 0x4025f0
    if ((int32_t)v144 != 45) {
        goto lab_0x402e73;
    } else {
        // 0x4037cf
        *v16 = 45;
        v356 = v350;
        v357 = 45;
        v360 = v351;
        v358 = v350;
        v359 = v349;
        goto lab_0x4037d4;
    }
  lab_0x4032eb:;
    int64_t v361 = v137;
    int64_t v362 = v15 - v151; // 0x4032f6
    int32_t v363; // 0x4025f0
    int32_t v364; // 0x4025f0
    int64_t v365; // 0x4025f0
    int64_t v366; // 0x4025f0
    int64_t v367; // 0x4025f0
    int64_t v368; // 0x4025f0
    int64_t v369; // 0x4025f0
    int64_t v370; // 0x4025f0
    int64_t v371; // 0x4025f0
    int64_t v372; // 0x4025f0
    int64_t v373; // 0x4025f0
    if ((int32_t)v143 == 45) {
        goto lab_0x403315;
    } else {
        int32_t v374 = v135 - (int32_t)v362; // 0x403306
        *v14 = v374;
        if (v374 >= 0 == (v374 != 0)) {
            int64_t v375; // 0x4025f0
            int64_t v376; // 0x4025f0
            int64_t v377; // 0x4025f0
            int32_t v378; // 0x4032fc
            if (v378 == 95) {
                // 0x4039d3
                *c3 = 0;
                int32_t v379 = *v14;
                v364 = v379;
                v371 = v377;
                v373 = v376;
                v365 = v361;
                v368 = v375;
                goto lab_0x4039d8;
            } else {
                int32_t v380 = *v9; // 0x4026a6
                result = 0;
                v363 = v374;
                v372 = v376;
                int64_t v381; // 0x4025f0
                v366 = v381;
                v367 = v56;
                v369 = v375;
                v370 = v362;
                if (v377 <= (int64_t)v380) {
                    // break -> 0x402687
                    goto lab_0x402687_12;
                }
                goto lab_0x402f57;
            }
        } else {
            goto lab_0x403315;
        }
    }
  lab_0x402960:
    // 0x402960
    v132 = v131;
    v168 = v123;
    v162 = 0;
    v172 = 0;
    v154 = 0;
    v156 = v155;
    v140 = v139;
    v146 = v145;
    goto lab_0x40296c;
  lab_0x402900:
    // 0x402900
    v45 = v51;
    v46 = v52;
    v39 = v407;
    v59 = v408;
    v57 = *v18 + v56;
    goto lab_0x40267a;
  lab_0x402991:
    // 0x402991
    *(char *)(v5 + 130) = (char)v122;
    v334 = v5 + 131;
    v336 = v326;
    v335 = v327;
    v331 = v329;
    v332 = v330;
    v333 = v328 & 0xffffffff;
    goto lab_0x402820;
  lab_0x40296c:;
    int64_t v382 = v146;
    int64_t v383 = v140;
    int64_t v384 = v156;
    int64_t v385 = v154;
    int64_t v386 = v172;
    int64_t v387 = v162;
    int64_t v388 = v168;
    int64_t v389 = v132;
    v133 = v389;
    v164 = v388;
    v160 = v387;
    v173 = v386;
    v152 = v385;
    v158 = v384;
    v142 = v383;
    v148 = v382;
    int64_t v390; // 0x4025f0
    int64_t v391; // 0x4025f0
    int64_t v392; // 0x4025f0
    int64_t v393; // 0x4025f0
    int64_t v394; // 0x4025f0
    int64_t v395; // 0x4025f0
    int64_t v396; // 0x4025f0
    int64_t v397; // 0x4025f0
    if (v122 != 79) {
        goto lab_0x402dd0;
    } else {
        // 0x402976
        v169 = v388;
        v157 = v384;
        v141 = v383;
        v147 = v382;
        v390 = v389;
        v396 = v388;
        v395 = v387;
        v397 = v386;
        v393 = v385;
        v394 = v384;
        v391 = v383;
        v392 = v382;
        if ((char)v385 != 0) {
            goto lab_0x402dd5;
        } else {
            goto lab_0x40297f;
        }
    }
  lab_0x402d33:;
    int32_t v398 = v177;
    int64_t v399 = (v398 + (int32_t)(-0x6db6db6d * (int64_t)v398 / 0x100000000) >> 2) - (v398 >> 31); // 0x402d42
    v1 = v399;
    v131 = v399;
    v155 = 2;
    v139 = v112;
    v145 = v55;
    goto lab_0x402960;
  lab_0x402dd0:
    // 0x402dd0
    v390 = v133;
    v396 = v164;
    v395 = v160;
    v397 = v173;
    v393 = v152;
    v394 = v158;
    v391 = v142;
    v392 = v148;
    v165 = v164;
    v161 = v160;
    v174 = v173;
    v153 = v152;
    v159 = v158;
    v136 = v142;
    v149 = v148;
    if ((char)v152 == 0) {
        goto lab_0x402dd7;
    } else {
        goto lab_0x402dd5;
    }
  lab_0x402820:;
    int64_t v400 = v333;
    int64_t v401 = v335;
    *(char *)v334 = (char)v336;
    *(char *)(v334 + 1) = 0;
    *v9 = (int32_t)v331;
    *v12 = (int32_t)v332;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x40284a
    v45 = v51;
    v46 = v52;
    v39 = format;
    v59 = v401;
    v57 = v56;
    if (copied_chars == 0) {
        goto lab_0x40267a;
    } else {
        int32_t v402 = *v9; // 0x402858
        int64_t v403 = v402; // 0x402858
        int64_t size = (int64_t)copied_chars - 1; // 0x40285d
        int64_t v404 = -1 - v56;
        uint64_t v405 = v402 >= 0 ? v403 : 0; // 0x40286f
        uint64_t v406 = size >= v405 ? size : v405; // 0x402879
        *v18 = v406;
        result = 0;
        if (v406 >= v404) {
            // break -> 0x402687
            goto lab_0x402687_12;
        }
        // 0x40288b
        v407 = v404;
        v408 = v401;
        if (a1 != 0) {
            if ((int32_t)v400 == 0 == size < v405) {
                int64_t v409 = v403 - size; // 0x4028a2
                if (*v12 == 48) {
                    // 0x4038c5
                    if (v409 != 0) {
                        int64_t v410 = 1; // 0x4038e0
                        fputc(48, stream);
                        int64_t v411 = v410; // 0x4038ec
                        while (v409 != v410) {
                            // 0x4038d8
                            v410 = v411 + 1;
                            fputc(48, stream);
                            v411 = v410;
                        }
                    }
                } else {
                    // 0x4028af
                    if (v409 != 0) {
                        int64_t v412 = 1; // 0x4028c8
                        fputc(32, stream);
                        int64_t v413 = v412; // 0x4028d4
                        while (v409 != v412) {
                            // 0x4028c0
                            v412 = v413 + 1;
                            fputc(32, stream);
                            v413 = v412;
                        }
                    }
                }
            }
            // 0x4028d6
            if (*v16 != 0) {
                // 0x4038ad
                function_402530(v3, data2, size);
                v407 = size;
                v408 = v401;
            } else {
                // 0x4028e1
                if (*v7 == 0) {
                    // 0x403890
                    fwrite((int64_t *)data2, (int32_t)size, 1, stream);
                    v407 = 1;
                    v408 = v401;
                } else {
                    // 0x4028ec
                    function_402590(v3, data2, size);
                    v407 = size;
                    v408 = v401;
                }
            }
        }
        goto lab_0x402900;
    }
  lab_0x402f90:;
    int64_t v414 = v134;
    v131 = v414;
    v155 = 2;
    v139 = v112;
    v145 = v55;
    switch ((int32_t)v55) {
        case 48: {
            goto lab_0x402960;
        }
        case 45: {
            goto lab_0x402960;
        }
        default: {
            // 0x402faa
            v131 = v414;
            v155 = 2;
            v139 = v112;
            v145 = 95;
            goto lab_0x402960;
        }
    }
  lab_0x402dd7:;
    int64_t v415 = v149;
    int64_t v416 = v136;
    int64_t v417 = v159;
    int64_t v418 = v161;
    int64_t v419 = v165;
    *v26 = (char)v153;
    int64_t v420 = v15 - 1;
    int64_t v421 = v420; // 0x402df8
    if (v174 % 2 != 0) {
        // 0x402dfa
        *(char *)v420 = 58;
        v421 = v15 - 2;
    }
    int64_t v422 = v421;
    uint32_t v423 = (int32_t)v174 >> 1; // 0x402e0d
    int64_t v424 = 0xcccccccd * (v1 & 0xffffffff) / 0x800000000; // 0x402e0f
    *(char *)v422 = (char)v1 + 48 + -10 * (char)v424;
    while (v423 == 0 != (int32_t)v1 < 10) {
        // 0x402e32
        v1 = v424;
        int64_t v425 = v423; // 0x402e34
        int64_t v426 = v422;
        v420 = v426 - 1;
        v421 = v420;
        if (v425 % 2 != 0) {
            // 0x402dfa
            *(char *)v420 = 58;
            v421 = v426 - 2;
        }
        // 0x402e08
        v422 = v421;
        v423 = (int32_t)v425 >> 1;
        v424 = 0xcccccccd * (v1 & 0xffffffff) / 0x800000000;
        *(char *)v422 = (char)v1 + 48 + -10 * (char)v424;
    }
    int32_t v427 = v417; // 0x402e40
    int32_t v428 = v416;
    int32_t v429 = v427 - v428; // 0x402e40
    int64_t v430 = v429 < 0 == ((v429 ^ v427) & (int32_t)(v416 ^ v417)) < 0 ? v417 : v416;
    int32_t v431 = v430; // 0x402e4d
    *v9 = v431;
    v167 = v419;
    v138 = v416;
    v144 = v415;
    v150 = v422;
    if (*v26 != 0) {
        goto lab_0x4037c0;
    } else {
        // 0x402e5b
        v135 = v431;
        v166 = v419;
        v137 = v416;
        v143 = v415;
        v151 = v422;
        if ((char)v418 == 0) {
            goto lab_0x4032eb;
        } else {
            if ((int32_t)v415 == 45) {
                // 0x403b43
                *v16 = 43;
                v356 = v428;
                v357 = 43;
                v360 = v419;
                v358 = v416;
                v359 = v422;
                goto lab_0x4037d4;
            } else {
                // 0x402e6e
                *c3 = 43;
                v352 = v419;
                v353 = v416;
                v354 = v415;
                v355 = v422;
                goto lab_0x402e73;
            }
        }
    }
  lab_0x402e73:;
    int64_t v432 = v355;
    int64_t v433 = v354;
    int64_t v434 = v353;
    int64_t v435 = v352;
    int64_t v436 = v15 - v432; // 0x402e7f
    int32_t v437 = *v9 + -1 - (int32_t)v436; // 0x402e85
    *v14 = v437;
    uint64_t v438 = -1 - v56;
    int64_t v439; // 0x4025f0
    int64_t v440; // 0x4025f0
    int64_t v441; // 0x4025f0
    int64_t v442; // 0x4025f0
    int64_t v443; // 0x4025f0
    int64_t v444; // 0x4025f0
    if (v437 < 1) {
        int32_t v445 = v434; // 0x4038f3
        int64_t v446 = 0x100000000 * v434 >> 32;
        int64_t v447 = v445 >= 0 ? v446 : 0; // 0x403904
        int64_t v448 = v447 != 0 ? v447 : 1; // 0x40390a
        *v19 = v448;
        result = 0;
        if (v448 >= v438) {
            // break -> 0x402687
            goto lab_0x402687_12;
        }
        int64_t v449 = v448; // 0x40391f
        int64_t v450 = v447; // 0x40391f
        int64_t v451 = v435; // 0x40391f
        if (a1 != 0) {
            int64_t v452 = v447; // 0x40392d
            int64_t v453 = v435; // 0x40392d
            int64_t v454 = v434; // 0x40392d
            int64_t v455 = v433; // 0x40392d
            if (!((v447 < 2 | *v9 != 0))) {
                int64_t v456 = v446 - 1; // 0x403938
                *v28 = v456;
                int32_t v457 = v433; // 0x403941
                if (v457 == 48) {
                    // 0x403dee
                    v452 = v447;
                    v453 = v435;
                    v454 = v434;
                    v455 = v433;
                    if (v456 != 0) {
                        // 0x403dfa
                        *v35 = 48;
                        *v32 = v445;
                        *v33 = v435;
                        int64_t v458 = 0; // 0x403e0e
                        v458++;
                        fputc(48, stream);
                        while (*v28 != v458) {
                            // 0x403e11
                            v458++;
                            fputc(48, stream);
                        }
                        // 0x403e29
                        v452 = v447;
                        v453 = *v33;
                        v454 = (int64_t)*v32;
                        v455 = (int64_t)*v35;
                    }
                } else {
                    // 0x40394b
                    v452 = v447;
                    v453 = v435;
                    v454 = v434;
                    v455 = v433;
                    if (v456 != 0) {
                        // 0x403952
                        *v35 = v457;
                        *v32 = v445;
                        *v33 = v447;
                        *v38 = v435;
                        int64_t v459 = 0; // 0x403966
                        v459++;
                        fputc(32, stream);
                        while (*v28 != v459) {
                            // 0x40396b
                            v459++;
                            fputc(32, stream);
                        }
                        // 0x403981
                        v452 = *v33;
                        v453 = *v38;
                        v454 = (int64_t)*v32;
                        v455 = (int64_t)*v35;
                    }
                }
            }
            // 0x403995
            *v34 = v452;
            *v35 = (int32_t)v454;
            *v36 = (int32_t)v455;
            fputc((int32_t)*c3, stream);
            v450 = *v34;
            v449 = *v19;
            v451 = v453;
        }
        int64_t v460 = v449 + v56; // 0x4039c0
        v442 = -1 - v460;
        v444 = v450;
        v443 = v451;
        v439 = v460;
        v440 = v432;
        v441 = v436;
        goto lab_0x403327;
    } else {
        int32_t v461 = v433; // 0x402e9c
        v364 = v437;
        v371 = v438;
        v373 = v435;
        v365 = v434;
        v368 = v432;
        if (v461 == 95) {
            goto lab_0x4039d8;
        } else {
            int64_t v462 = (int64_t)*v9; // 0x402ea6
            v1 = v462;
            result = 0;
            if (v438 <= v462) {
                // break -> 0x402687
                goto lab_0x402687_12;
            }
            int64_t v463 = 0x100000000 * v434 >> 32;
            uint64_t v464 = (int32_t)v434 >= 0 ? v463 : 0; // 0x402ec8
            int64_t v465 = v464 != 0 ? v464 : 1; // 0x402ece
            *v28 = v465;
            result = 0;
            if (v465 >= v438) {
                // break -> 0x402687
                goto lab_0x402687_12;
            }
            int64_t v466 = v465; // 0x402ee3
            int64_t v467 = v435; // 0x402ee3
            int64_t v468 = v433; // 0x402ee3
            if (a1 != 0) {
                int64_t v469 = v435; // 0x402ee7
                int64_t v470 = v433; // 0x402ee7
                if (v464 >= 2 && (int32_t)v1 == 0) {
                    int64_t v471 = v463 - 1; // 0x402ef2
                    *v30 = v471;
                    if (v461 == 48) {
                        // 0x403e40
                        v469 = v435;
                        v470 = v433;
                        if (v471 != 0) {
                            // 0x403e4c
                            *v34 = v435;
                            int64_t v472 = 0; // 0x403e56
                            v472++;
                            fputc(48, stream);
                            while (*v30 != v472) {
                                // 0x403e59
                                v472++;
                                fputc(48, stream);
                            }
                            // 0x403e71
                            v469 = *v34;
                            v470 = v433 & 0xffffffff;
                        }
                    } else {
                        // 0x402f05
                        v469 = v435;
                        v470 = v433;
                        if (v471 != 0) {
                            // 0x402f0c
                            *v32 = v461;
                            *v33 = v435;
                            int64_t v473 = 0; // 0x402f16
                            v473++;
                            fputc(32, stream);
                            while (*v30 != v473) {
                                // 0x402f1b
                                v473++;
                                fputc(32, stream);
                            }
                            // 0x402f31
                            v469 = *v33;
                            v470 = (int64_t)*v32;
                        }
                    }
                }
                // 0x402f3b
                *v35 = (int32_t)v470;
                fputc((int32_t)*c3, stream);
                v466 = *v28;
                v467 = v469;
                v468 = (int64_t)*v35;
            }
            // 0x402f52
            v363 = *v14;
            v372 = v467;
            v366 = v468;
            v367 = v466 + v56;
            v369 = v432;
            v370 = v436;
            goto lab_0x402f57;
        }
    }
  lab_0x403315:
    // 0x403315
    v442 = -1 - v56;
    v444 = (int32_t)v361 >= 0 ? 0x100000000 * v361 >> 32 : 0;
    v443 = v166;
    v439 = v56;
    v440 = v151;
    v441 = v362;
    goto lab_0x403327;
  lab_0x403d59:;
    int64_t v519 = (int64_t)(100 * *v9 + v520); // 0x403d69
    v1 = v519;
    v132 = v519;
    v168 = v521;
    v162 = 1;
    v172 = 4;
    v154 = v522;
    v156 = 6;
    v140 = v112;
    v146 = v55;
    goto lab_0x40296c;
  lab_0x403d35:;
    int64_t v523 = (int64_t)(100 * v520 + v524 + 0x2710 * *v9); // 0x403d52
    v1 = v523;
    v132 = v523;
    v168 = v521;
    v162 = 1;
    v172 = 20;
    v154 = v522;
    v156 = 9;
    v140 = v112;
    v146 = v55;
    goto lab_0x40296c;
  lab_0x402c33:;
    int64_t v525 = v526;
    if (*v7 == 0) {
        // 0x403878
        fwrite((int64_t *)data4, (int32_t)size3, 1, stream);
        v407 = 1;
        v408 = v525;
    } else {
        // 0x402c3e
        function_402590(v3, data4, size3);
        v407 = size3;
        v408 = v525;
    }
    goto lab_0x402900;
  lab_0x402dd5:
    // 0x402dd5
    v1 = -v390 & 0xffffffff;
    v165 = v396;
    v161 = v395;
    v174 = v397;
    v153 = v393;
    v159 = v394;
    v136 = v391;
    v149 = v392;
    goto lab_0x402dd7;
  lab_0x4037d4:;
    int32_t v527 = v356;
    int64_t v528 = 0x100000000 * v358 >> 32;
    int64_t v529 = v527 >= 0 ? v528 : 0; // 0x4037ec
    uint64_t v530 = v529 != 0 ? v529 : 1; // 0x4037f2
    result = 0;
    if (v530 >= -1 - v56) {
        // break -> 0x402687
        goto lab_0x402687_12;
    }
    int64_t v531 = v360;
    int64_t v532 = v529; // 0x403802
    int64_t v533 = v531; // 0x403802
    if (a1 != 0) {
        char v534 = v357;
        int32_t v535 = v527; // 0x40380c
        char c5 = v534; // 0x40380c
        int64_t v536 = v529; // 0x40380c
        int64_t v537 = v531; // 0x40380c
        if (!((v529 < 2 | *v9 != 0))) {
            int64_t v538 = v528 - 1; // 0x403ced
            v535 = v527;
            c5 = v534;
            v536 = v529;
            v537 = v531;
            if (v538 != 0) {
                // 0x403cf7
                *v12 = v527;
                *v28 = v529;
                *v30 = v531;
                int64_t v539 = 0; // 0x403d08
                v539++;
                fputc(32, stream);
                while (v538 != v539) {
                    // 0x403d0b
                    v539++;
                    fputc(32, stream);
                }
                // 0x403d21
                v535 = *v12;
                c5 = *v16;
                v536 = *v28;
                v537 = *v30;
            }
        }
        // 0x403818
        *v28 = v536;
        *v12 = v535;
        fputc((int32_t)c5, stream);
        v532 = *v28;
        v533 = v537;
    }
    int64_t v540 = v530 + v56; // 0x403839
    v442 = -1 - v540;
    v444 = v532;
    v443 = v533;
    v439 = v540;
    v440 = v359;
    v441 = v15 - v359;
    goto lab_0x403327;
  lab_0x403327:;
    uint64_t size2 = v441;
    int64_t data3 = v440;
    int64_t v474 = v443;
    uint64_t v475 = v444;
    uint64_t v476 = size2 >= v475 ? size2 : v475; // 0x40332d
    *v19 = v476;
    result = 0;
    if (v476 >= v442) {
        // break -> 0x402687
        goto lab_0x402687_12;
    }
    int64_t v477 = v475; // 0x403342
    int64_t v478 = v474; // 0x403342
    if (a1 == 0) {
        goto lab_0x4033ac;
    } else {
        // 0x403344
        if (size2 < v475 == *v9 == 0) {
            // 0x403351
            int64_t v479; // 0x4025f0
            int64_t v480 = (0x100000000 * v479 >> 32) - size2; // 0x403354
            int64_t v481; // 0x4025f0
            if ((int32_t)v481 == 48) {
                // 0x403acd
                if (v480 == 0) {
                    goto lab_0x403393;
                } else {
                    // 0x403ad9
                    *v18 = v474;
                    int64_t v482 = 0; // 0x403ae3
                    int64_t v483 = v482;
                    int64_t v484 = v483 + 1; // 0x403af0
                    fputc(48, stream);
                    v482 = v484;
                    while (v480 != v484) {
                        // 0x403ae8
                        v483 = v482;
                        v484 = v483 + 1;
                        fputc(48, stream);
                        v482 = v484;
                    }
                    // 0x40338e
                    goto lab_0x403393;
                }
            } else {
                // 0x403361
                if (v480 == 0) {
                    goto lab_0x403393;
                } else {
                    // 0x403368
                    *v18 = v474;
                    int64_t v485 = 0; // 0x403373
                    int64_t v486 = v485;
                    int64_t v487 = v486 + 1; // 0x403380
                    fputc(32, stream);
                    v485 = v487;
                    while (v480 != v487) {
                        // 0x403378
                        v486 = v485;
                        v487 = v486 + 1;
                        fputc(32, stream);
                        v485 = v487;
                    }
                    // 0x40338e
                    goto lab_0x403393;
                }
            }
        } else {
            goto lab_0x403393;
        }
    }
  lab_0x4039d8:;
    uint64_t v488 = (int64_t)v364; // 0x4039d8
    result = 0;
    if (v371 <= v488) {
        // break -> 0x402687
        goto lab_0x402687_12;
    }
    int64_t v489 = v368;
    int64_t v490 = v365;
    int64_t v491 = v373;
    int32_t v492 = v364; // 0x4039e9
    int64_t v493 = v490; // 0x4039e9
    if (a1 != 0) {
        // 0x403b71
        *v36 = (int32_t)v490;
        int64_t v494 = 0; // 0x403b82
        v494++;
        fputc(32, stream);
        while (v494 < v488) {
            // 0x403b88
            v494++;
            fputc(32, stream);
        }
        // 0x403b9e
        v492 = *v14;
        v493 = (int64_t)*v36;
    }
    int32_t v495 = v492; // 0x4039ef
    int32_t v496 = v493; // 0x4039f3
    int64_t v497 = v56 + v488; // 0x4039f6
    int32_t v498 = v495 - v496; // 0x4039fb
    int64_t v499 = v498 < 0 == ((v498 ^ v495) & (v495 ^ v496)) < 0 ? 0 : (int64_t)(v496 - v495); // 0x403a04
    char v500 = *c3; // 0x403a0b
    int64_t v501 = -1 - v497;
    int64_t v502 = 0x100000000 * v499 >> 32;
    if (v500 == 0) {
        // 0x403b55
        v442 = v501;
        v444 = v502;
        v443 = v491;
        v439 = v497;
        v440 = v489;
        v441 = v15 - v489;
    } else {
        uint64_t v503 = v499 != 0 ? v502 : 1; // 0x403a24
        result = 0;
        if (v503 >= v501) {
            // break -> 0x402687
            goto lab_0x402687_12;
        }
        int64_t v504 = v502; // 0x403a34
        int64_t v505 = v491; // 0x403a34
        if (a1 != 0) {
            char c4 = v500; // 0x403a3e
            int64_t v506 = v491; // 0x403a3e
            int64_t v507 = v499; // 0x403a3e
            if (*v9 == 0) {
                uint32_t v508 = (int32_t)v499; // 0x403a40
                c4 = v500;
                v506 = v491;
                v507 = v499;
                if (v508 >= 2) {
                    // 0x403e7e
                    *v36 = v508;
                    *v19 = v502 - 1;
                    *v30 = v491;
                    int64_t v509 = 0; // 0x403e97
                    v509++;
                    fputc(32, stream);
                    while (*v19 != v509) {
                        // 0x403e9a
                        v509++;
                        fputc(32, stream);
                    }
                    // 0x403eb2
                    c4 = *c3;
                    v506 = *v30;
                    v507 = (int64_t)*v36;
                }
            }
            // 0x403a4a
            *v28 = v502;
            *v14 = (int32_t)v507;
            fputc((int32_t)c4, stream);
            v504 = *v28;
            v505 = v506;
        }
        int64_t v510 = v503 + v497; // 0x403a6b
        v442 = -1 - v510;
        v444 = v504;
        v443 = v505;
        v439 = v510;
        v440 = v489;
        v441 = v15 - v489;
    }
    goto lab_0x403327;
  lab_0x4033ac:
    // 0x4033ac
    v45 = v51;
    v46 = v52;
    v39 = v477;
    v59 = v478;
    v57 = *v19 + v439;
    goto lab_0x40267a;
  lab_0x402f57:;
    int64_t v511 = v366;
    int64_t v512 = v372;
    int64_t v513 = v363; // 0x402f57
    *v19 = v513;
    int64_t v514 = v513; // 0x402f67
    int64_t v515 = v512; // 0x402f67
    if (a1 != 0) {
        // 0x403a8d
        *v36 = (int32_t)v511;
        *v37 = v512;
        int64_t v516 = 0; // 0x403aa1
        v516++;
        fputc(48, stream);
        while (v516 < *v19) {
            // 0x403aa8
            v516++;
            fputc(48, stream);
        }
        // 0x403abe
        v514 = *v19;
        v515 = *v37;
    }
    int64_t v517 = v514 + v367; // 0x402f6d
    v442 = -1 - v517;
    v444 = 0;
    v443 = v515;
    v439 = v517;
    v440 = v369;
    v441 = v370;
    goto lab_0x403327;
  lab_0x403393:;
    int64_t v518 = v474;
    if (*v7 == 0) {
        // 0x403860
        fwrite((int64_t *)data3, (int32_t)size2, 1, stream);
        v477 = 1;
        v478 = v518;
    } else {
        // 0x40339e
        function_402590(v3, data3, size2);
        v477 = size2;
        v478 = v518;
    }
    goto lab_0x4033ac;
}
// Address range: 0x403f10 - 0x403f2f
int64_t function_403f10(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int32_t a5) {
    char v1 = 0; // bp-9, 0x403f19
    int64_t result = function_4025f0((int32_t)a1, a2, a3, 0, (int64_t)&v1, (int64_t)a4); // 0x403f25
    return result;
}
// Address range: 0x403f30 - 0x404032
int64_t function_403f30(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x403f30
    int64_t v1; // 0x403f30
    if ((char)v1 != 0) {
        // 0x403f43
        int128_t v2; // 0x403f30
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g28; // 0x403f7a
    g28 = 0;
    if ((int32_t)a1 != 2) {
        // 0x403f8f
        g28 = v3;
        g29 = 0;
        int64_t result; // 0x403f30
        return result;
    }
    int64_t result2 = function_407200(a1, a2, &g3, (int64_t *)&g4, 0, a6); // 0x403fc9
    int32_t v4 = result2; // 0x403fce
    switch (v4) {
        default: {
            // 0x403fd8
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x403ffa
                function_406080((int64_t)g31, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x403f8f
            g28 = v3;
            g29 = 0;
            return result2;
        }
    }
}
// Address range: 0x404040 - 0x4040d9
int64_t function_404040(int64_t str) {
    // 0x404040
    if (str == 0) {
        // 0x4040b9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40404e
    int64_t result = (int64_t)found_char_pos; // 0x40404e
    if (found_char_pos == NULL) {
        // 0x4040a9
        g38 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x404058
    if (v1 - str < 7) {
        // 0x4040a9
        g38 = str;
        g32 = str;
        return result;
    }
    // 0x404068
    bool v2; // 0x404040
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x404040
    int64_t v5 = result - 6; // 0x404040
    int64_t v6 = 7; // 0x404076
    unsigned char v7 = *(char *)v5; // 0x404076
    char v8 = *(char *)v4; // 0x404076
    char v9 = v8; // 0x404076
    bool v10 = false; // 0x404076
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
    int64_t v12 = (int64_t)"lt-"; // 0x404080
    int64_t v13 = v1; // 0x404080
    int64_t v14 = 3; // 0x404080
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4040a9
        g38 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x404092
    char v16 = *(char *)v12; // 0x404092
    char v17 = v16; // 0x404092
    bool v18 = false; // 0x404092
    while (v15 == v16) {
        // 0x404082
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
    int64_t v20 = v1; // 0x40409c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40409e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x4040a9
    g38 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x4040e0 - 0x4041d2
int64_t function_4040e0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4040f4
    int64_t result = (int64_t)v1; // 0x4040f4
    if (result != a1) {
        // 0x404101
        return result;
    }
    int64_t v2 = function_407b70(); // 0x404110
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4041c6
    if (v3 == 85) {
        // 0x404120
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4041b8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x40414e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40415b
        // 0x404101
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4041b8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40419d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x4041aa
    // 0x404101
    return result4;
}
// Address range: 0x4041e0 - 0x404237
int64_t function_4041e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4041e0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x404228
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x404237 - 0x405401
int64_t function_404237(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x404281
    int64_t v3 = 0; // 0x404281
    int64_t v4; // 0x404237
    int64_t v5; // 0x404237
    int64_t v6; // 0x404237
    int64_t v7; // 0x404237
    int64_t v8; // 0x404237
    int64_t v9; // 0x404237
    int64_t v10; // 0x404237
    int64_t v11; // 0x404237
    int64_t v12; // 0x404237
    int64_t v13; // 0x404237
    int64_t v14; // 0x404237
    int64_t v15; // 0x404237
    int64_t v16; // 0x404237
    int64_t v17; // 0x404237
    int64_t v18; // 0x404237
    int64_t result; // 0x404237
    int64_t v19; // 0x404237
    int32_t wc; // bp+132, 0x404237
    int64_t ps; // bp+136, 0x404237
    char v20; // 0x4047f0
    int64_t v21; // 0x4047f0
    int64_t v22; // 0x404b98
    int64_t v23; // 0x404237
    int64_t v24; // 0x404bb7
    int32_t v25; // 0x404237
    while (true) {
      lab_0x404288_2:
        // 0x404288
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x404237
        int64_t v27; // 0x4042bc
        while (true) {
          lab_0x404288:
            // 0x404288
            v5 = v26;
            bool v28 = v15 == v5; // 0x404293
            if (v15 == -1) {
                // 0x404295
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4042a3
            if (v28) {
                // break (via goto) -> 0x404a08
                goto lab_0x404a08;
            }
            // 0x4042ac
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g52 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40489b
                    if (v25 % 2 == 0) {
                        goto lab_0x4043e1;
                    }
                    // 0x404cbd
                    v26 = v5 + 1;
                    goto lab_0x404288;
                }
                case 7: {
                    goto lab_0x4043e1;
                }
                case 8: {
                    goto lab_0x4043e1;
                }
                case 9: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4043e1;
                }
                case 12: {
                    goto lab_0x4043e1;
                }
                case 13: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4043ad;
                }
                case 36: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4043e1;
                }
                case 38: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4043e1;
                }
                case 44: {
                    goto lab_0x4043e1;
                }
                case 45: {
                    goto lab_0x4043e1;
                }
                case 46: {
                    goto lab_0x4043e1;
                }
                case 47: {
                    goto lab_0x4043e1;
                }
                case 48: {
                    goto lab_0x4043e1;
                }
                case 49: {
                    goto lab_0x4043e1;
                }
                case 50: {
                    goto lab_0x4043e1;
                }
                case 51: {
                    goto lab_0x4043e1;
                }
                case 52: {
                    goto lab_0x4043e1;
                }
                case 53: {
                    goto lab_0x4043e1;
                }
                case 54: {
                    goto lab_0x4043e1;
                }
                case 55: {
                    goto lab_0x4043e1;
                }
                case 56: {
                    goto lab_0x4043e1;
                }
                case 57: {
                    goto lab_0x4043e1;
                }
                case 58: {
                    goto lab_0x4043e1;
                }
                case 59: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4043e1;
                }
                case 66: {
                    goto lab_0x4043e1;
                }
                case 67: {
                    goto lab_0x4043e1;
                }
                case 68: {
                    goto lab_0x4043e1;
                }
                case 69: {
                    goto lab_0x4043e1;
                }
                case 70: {
                    goto lab_0x4043e1;
                }
                case 71: {
                    goto lab_0x4043e1;
                }
                case 72: {
                    goto lab_0x4043e1;
                }
                case 73: {
                    goto lab_0x4043e1;
                }
                case 74: {
                    goto lab_0x4043e1;
                }
                case 75: {
                    goto lab_0x4043e1;
                }
                case 76: {
                    goto lab_0x4043e1;
                }
                case 77: {
                    goto lab_0x4043e1;
                }
                case 78: {
                    goto lab_0x4043e1;
                }
                case 79: {
                    goto lab_0x4043e1;
                }
                case 80: {
                    goto lab_0x4043e1;
                }
                case 81: {
                    goto lab_0x4043e1;
                }
                case 82: {
                    goto lab_0x4043e1;
                }
                case 83: {
                    goto lab_0x4043e1;
                }
                case 84: {
                    goto lab_0x4043e1;
                }
                case 85: {
                    goto lab_0x4043e1;
                }
                case 86: {
                    goto lab_0x4043e1;
                }
                case 87: {
                    goto lab_0x4043e1;
                }
                case 88: {
                    goto lab_0x4043e1;
                }
                case 89: {
                    goto lab_0x4043e1;
                }
                case 90: {
                    goto lab_0x4043e1;
                }
                case 91: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4043e1;
                }
                case 94: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4043e1;
                }
                case 96: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4043e1;
                }
                case 98: {
                    goto lab_0x4043e1;
                }
                case 99: {
                    goto lab_0x4043e1;
                }
                case 100: {
                    goto lab_0x4043e1;
                }
                case 101: {
                    goto lab_0x4043e1;
                }
                case 102: {
                    goto lab_0x4043e1;
                }
                case 103: {
                    goto lab_0x4043e1;
                }
                case 104: {
                    goto lab_0x4043e1;
                }
                case 105: {
                    goto lab_0x4043e1;
                }
                case 106: {
                    goto lab_0x4043e1;
                }
                case 107: {
                    goto lab_0x4043e1;
                }
                case 108: {
                    goto lab_0x4043e1;
                }
                case 109: {
                    goto lab_0x4043e1;
                }
                case 110: {
                    goto lab_0x4043e1;
                }
                case 111: {
                    goto lab_0x4043e1;
                }
                case 112: {
                    goto lab_0x4043e1;
                }
                case 113: {
                    goto lab_0x4043e1;
                }
                case 114: {
                    goto lab_0x4043e1;
                }
                case 115: {
                    goto lab_0x4043e1;
                }
                case 116: {
                    goto lab_0x4043e1;
                }
                case 117: {
                    goto lab_0x4043e1;
                }
                case 118: {
                    goto lab_0x4043e1;
                }
                case 119: {
                    goto lab_0x4043e1;
                }
                case 120: {
                    goto lab_0x4043e1;
                }
                case 121: {
                    goto lab_0x4043e1;
                }
                case 122: {
                    goto lab_0x4043e1;
                }
                case 123: {
                    goto lab_0x404385;
                }
                case 124: {
                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x404385;
                }
                case 126: {
                    goto lab_0x4043ad;
                }
                default: {
                    goto lab_0x404785;
                }
            }
        }
      lab_0x404785:
        if (v23 != 1) {
            // 0x404af0
            ps = 0;
            int64_t len = v15; // 0x404b00
            if (v15 == -1) {
                // 0x404b02
                len = strlen((char *)str);
            }
            // 0x404b2e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x404b8f:
                // 0x404b8f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404b94
                int64_t v30 = v29 + str;
                v24 = function_407280(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40510a_2;
                    }
                    case -1: {
                        goto lab_0x40510a_2;
                    }
                    case -2: {
                        // 0x4051ed
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x405227
                            v19 = v18;
                            int64_t v31 = v18; // 0x40522a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x405237
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x405230
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40510a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40510a_2;
                    }
                    case 1: {
                        goto lab_0x404b60;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x404c0c
                        char v34 = *(char *)v33; // 0x404c1d
                        unsigned char v35; // 0x404237
                        if (v34 < 125) {
                            // 0x404c28
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x404c3f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404c10
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x404c1d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404c28
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x404c3f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404c10
                            v33++;
                        }
                        goto lab_0x404b60;
                    }
                }
            }
            goto lab_0x40510a_2;
        } else {
            // 0x4047d4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4043e1;
        }
    }
  lab_0x404a08:
    // 0x404a08
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40530a
        if (v8 > result) {
            // 0x405313
            *(char *)(v12 + result) = 0;
        }
        // 0x404637
        return result;
    }
    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4043e1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4043f0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4045fa_2;
        }
    }
    int64_t v39 = result; // 0x4044f1
    char v40 = v20; // 0x4044f1
    int64_t v41 = v38; // 0x4044f1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4044f1
    int64_t v43 = v36; // 0x4044f1
    goto lab_0x40446d;
  lab_0x4045fa_2:
    // 0x404637
    return function_4041e0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40510a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4043e1;
    } else {
        uint64_t v49 = v46 + v5; // 0x404cde
        int64_t v50 = v5 + 1; // 0x404dc1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404dc8
        char v52 = v20; // 0x404dc8
        int64_t v53 = result; // 0x404dc8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404d91
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404d95
            int64_t v56 = v54 + 1; // 0x404d9a
            int64_t v57 = v51 + 1; // 0x404dc1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x404d8c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404d91
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404d95
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
        goto lab_0x40446d;
    }
  lab_0x404b60:
    // 0x404b60
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x404b7f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404b82
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40510a
        goto lab_0x40510a_2;
    }
    goto lab_0x404b8f;
  lab_0x4043ad:
    // 0x4043ad
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4045fa_2;
    }
    goto lab_0x4043e1;
  lab_0x404385:;
    bool v60 = v15 == 1; // 0x404390
    if (v15 == -1) {
        // 0x404392
        v60 = *(char *)v1 == 0;
    }
    // 0x40439e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4043e1;
    } else {
        goto lab_0x4043ad;
    }
  lab_0x40446d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x404472
        *(char *)(v44 + v45) = v40;
    }
    // 0x404476
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x404288_2;
}
// Address range: 0x405410 - 0x4055ae
int64_t function_405410(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405412
    int32_t * v3 = __errno_location(); // 0x40542c
    int64_t v4 = (int64_t)g23; // 0x405431
    int32_t v5 = *v3; // 0x40543b
    int64_t v6 = v4; // 0x405451
    if (v2 >= (int64_t)*(int32_t *)&g26) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4055a9
            function_406470(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405460
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405467
        int64_t v9; // 0x405410
        if (g23 == &g24) {
            int64_t v10 = function_406280(0, v8); // 0x40558a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g24); // 0x40558f
            *(int64_t *)&g23 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406280(v4, v8); // 0x40547b
            *(int64_t *)&g23 = v12;
            v9 = v12;
        }
        // 0x40548a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g26; // 0x40548a
        int32_t v14 = v7; // 0x405491
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g26 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4054c1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4054cb
    int64_t * v17 = (int64_t *)v15; // 0x4054ce
    uint64_t v18 = *v17; // 0x4054ce
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4054d1
    int64_t result = *v19; // 0x4054d1
    int64_t v20; // 0x405410
    uint64_t v21 = function_4041e0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4054f4
    if (v18 > v21) {
        // 0x40556b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x405507
    *v17 = v22;
    if (result != (int64_t)&g39) {
        // 0x405517
        free((int64_t *)result);
    }
    int64_t result2 = function_406220(v22); // 0x405531
    *v19 = result2;
    int64_t v23; // 0x405410
    function_4041e0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40556b
    *v3 = v5;
    return result2;
}
// Address range: 0x4055b0 - 0x4055e4
int64_t function_4055b0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4055b7
    int64_t result = function_406420(a1 == 0 ? (int64_t)&g40 : a1, 56); // 0x4055d6
    return result;
}
// Address range: 0x4055f0 - 0x4055ff
int64_t function_4055f0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g40 : a1); // 0x4055fc
    return result;
}
// Address range: 0x405600 - 0x40560f
int64_t function_405600(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x405608
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g40;
}
// Address range: 0x405610 - 0x405643
int64_t function_405610(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 + 8 : a1 + 8; // 0x405629
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40562e
    uint32_t v3 = *v2; // 0x40562e
    uint32_t v4 = (int32_t)a2 % 32; // 0x405632
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405650 - 0x405663
int64_t function_405650(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g40 + 4 : a1 + 4); // 0x40565c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405670 - 0x40569b
int64_t function_405670(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x405678
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x405695
        abort();
        // UNREACHABLE
    }
    // 0x40568c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g40;
}
// Address range: 0x4056a0 - 0x405712
int64_t function_4056a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g40 : a5; // 0x4056c2
    int32_t * v2 = __errno_location(); // 0x4056cb
    uint32_t v3 = *(int32_t *)v1; // 0x4056eb
    int64_t result = function_4041e0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4056fa
    return result;
}
// Address range: 0x405720 - 0x405801
int64_t function_405720(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g40 : a4; // 0x405742
    int32_t * v2 = __errno_location(); // 0x405748
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405767
    int32_t * v4 = (int32_t *)v1; // 0x40576a
    int64_t v5 = function_4041e0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x405785
    int64_t v6 = v5 + 1; // 0x40578a
    int64_t result = function_406220(v6); // 0x40579f
    function_4041e0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4057e4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4057ed
    return result;
}
// Address range: 0x405810 - 0x40581a
int64_t function_405810(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405810
    return function_405720(a1, a2, 0, a3);
}
// Address range: 0x405820 - 0x4058b5
int64_t function_405820(void) {
    uint32_t v1 = *(int32_t *)&g26; // 0x405820
    int64_t v2 = v1; // 0x405820
    int64_t v3 = v2; // 0x405834
    if (v1 >= 2) {
        int64_t v4 = &g26;
        int64_t v5 = v4 + 16; // 0x405853
        free((int64_t *)*(int64_t *)v4);
        v3 = &g53;
        while (v5 != (int64_t)g23 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x405850
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g53;
        }
    }
    int64_t v6 = v3; // 0x40586d
    if (g24 != 0x60c320) {
        // 0x40586f
        free((int64_t *)g24);
        g24 = 256;
        *(int64_t *)&g25 = (int64_t)&g39;
        v6 = &g53;
    }
    int64_t result = v6; // 0x405891
    if (g23 != &g24) {
        // 0x405893
        free(g23);
        *(int64_t *)&g23 = (int64_t)&g24;
        result = &g53;
    }
    // 0x4058a6
    *(int32_t *)&g26 = 1;
    return result;
}
// Address range: 0x4058c0 - 0x4058d1
int64_t function_4058c0(void) {
    // 0x4058c0
    int64_t v1; // 0x4058c0
    return function_405410(v1, v1, -1, (int64_t *)&g40);
}
// Address range: 0x4058e0 - 0x4058ea
int64_t function_4058e0(void) {
    // 0x4058e0
    int64_t v1; // 0x4058e0
    return function_405410(v1, v1, v1, (int64_t *)&g40);
}
// Address range: 0x4058f0 - 0x405906
int64_t function_4058f0(int64_t a1) {
    // 0x4058f0
    return function_405410(0, a1, -1, (int64_t *)&g40);
}
// Address range: 0x405910 - 0x405922
int64_t function_405910(int64_t a1, int64_t a2) {
    // 0x405910
    return function_405410(0, a1, a2, (int64_t *)&g40);
}
// Address range: 0x405930 - 0x405998
int64_t function_405930(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405940
    return function_405410((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4059a0 - 0x405a04
int64_t function_4059a0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4059b0
    return function_405410((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405a10 - 0x405a1c
int64_t function_405a10(int64_t a1, int64_t a2) {
    // 0x405a10
    return function_405930(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405a20 - 0x405a2f
int64_t function_405a20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405a20
    return function_4059a0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405a30 - 0x405aa0
int64_t function_405a30(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x405a3d
    int128_t v2 = __asm_movdqa(g41); // 0x405a45
    int128_t v3 = __asm_movdqa(g42); // 0x405a4d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x405a62
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405a78
    uint32_t v6 = *v5; // 0x405a78
    uint32_t v7 = (int32_t)a3 % 32; // 0x405a7d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405410(0, a1, a2, &v4);
}
// Address range: 0x405aa0 - 0x405aad
int64_t function_405aa0(int64_t a1, int64_t a2) {
    // 0x405aa0
    return function_405a30(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405ab0 - 0x405ac1
int64_t function_405ab0(int64_t a1) {
    // 0x405ab0
    return function_405a30(a1, -1, 58);
}
// Address range: 0x405ad0 - 0x405ada
int64_t function_405ad0(void) {
    // 0x405ad0
    int64_t v1; // 0x405ad0
    return function_405a30(v1, v1, 58);
}
// Address range: 0x405ae0 - 0x405b4e
int64_t function_405ae0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405afa
    return function_405410((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405b50 - 0x405bbc
int64_t function_405b50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x405b57
    int128_t v2 = __asm_movdqa(g41); // 0x405b5f
    int128_t v3 = __asm_movdqa(g42); // 0x405b67
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405b89
    if (a2 == 0 || a3 == 0) {
        // 0x405bb7
        abort();
        // UNREACHABLE
    }
    // 0x405b9a
    return function_405410(a1, a4, a5, &v4);
}
// Address range: 0x405bc0 - 0x405bc9
int64_t function_405bc0(void) {
    // 0x405bc0
    int64_t v1; // 0x405bc0
    return function_405b50(v1, v1, v1, v1, -1);
}
// Address range: 0x405bd0 - 0x405be7
int64_t function_405bd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405bd0
    return function_405b50(0, a1, a2, a3, -1);
}
// Address range: 0x405bf0 - 0x405c03
int64_t function_405bf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405bf0
    return function_405b50(0, a1, a2, a3, a4);
}
// Address range: 0x405c10 - 0x405c1a
int64_t function_405c10(void) {
    // 0x405c10
    int64_t v1; // 0x405c10
    return function_405410(v1, v1, v1, &g22);
}
// Address range: 0x405c20 - 0x405c32
int64_t function_405c20(int64_t a1, int64_t a2) {
    // 0x405c20
    return function_405410(0, a1, a2, &g22);
}
// Address range: 0x405c40 - 0x405c51
int64_t function_405c40(void) {
    // 0x405c40
    int64_t v1; // 0x405c40
    return function_405410(v1, v1, -1, &g22);
}
// Address range: 0x405c60 - 0x405c76
int64_t function_405c60(int64_t a1) {
    // 0x405c60
    return function_405410(0, a1, -1, &g22);
}
// Address range: 0x405c80 - 0x40605d
int64_t function_405c80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405d18
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405c9c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405cb6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405cfb
    if (a6 < 10) {
        // 0x405d0a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405e02
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x406060 - 0x406080
int64_t function_406060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406060
    if (a5 == 0) {
        // 0x40607b
        return function_405c80(a1, a2, a3, a4, a5, 0, (int64_t)&g53);
    }
    int64_t v1 = 0; // 0x406067
    v1++;
    int64_t v2 = v1; // 0x406079
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406070
        v1++;
        v2 = v1;
    }
    // 0x40607b
    return function_405c80(a1, a2, a3, a4, a5, v2, (int64_t)&g53);
}
// Address range: 0x406080 - 0x4060e0
int64_t function_406080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x406080
    int64_t v4 = &v3; // 0x406080
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x4060b3
    int64_t v7; // 0x40609d
    int64_t * v8; // 0x4060bb
    int64_t v9; // 0x4060bb
    int64_t v10; // 0x4060c7
    if (v6 < 48) {
        // 0x406090
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x4060d3
            break;
        }
    } else {
        // 0x4060bb
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x4060d3
            break;
        }
    }
    int64_t v11 = 10; // 0x4060b1
    while (v5 != 9) {
        // 0x4060a9
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x406090
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x4060d3
                break;
            }
        } else {
            // 0x4060bb
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x4060d3
                break;
            }
        }
        // 0x4060a9
        v11 = 10;
    }
    // 0x4060d3
    return function_405c80(a1, a2, a3, a4, v4, v11, (int64_t)&g53);
}
// Address range: 0x4060e0 - 0x40619c
int64_t function_4060e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4060e0
    int64_t v1; // bp-168, 0x4060e0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4060e0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4060e0
    int64_t v8; // 0x4060e0
    int64_t v9; // bp-56, 0x4060e0
    int64_t v10; // 0x406145
    int64_t v11; // 0x406169
    if ((int32_t)v6 < 48) {
        // 0x406130
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406180
            break;
        }
    } else {
        // 0x406162
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406180
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40615a
    int64_t v13 = 10; // 0x40615a
    while (v5 != 9) {
        // 0x40615c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x406130
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406180
                break;
            }
        } else {
            // 0x406162
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406180
                break;
            }
        }
        // 0x406152
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406180
    int64_t v14; // bp-136, 0x4060e0
    int64_t result = function_405c80(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g53); // 0x40618f
    return result;
}
// Address range: 0x4061a0 - 0x406214
int64_t function_4061a0(int64_t a1) {
    // 0x4061a0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406203
    return fputs_unlocked(v1, g31);
}
// Address range: 0x406220 - 0x40623a
int64_t function_406220(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406224
    if (size != 0 != (mem == NULL)) {
        // 0x406233
        return (int64_t)mem;
    }
    // 0x406235
    function_406470(size);
    // UNREACHABLE
}
// Address range: 0x406240 - 0x406261
int64_t function_406240(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x406243
    int64_t v2 = v1; // 0x406243
    if (v2 < 0) {
        // 0x40625b
        function_406470(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406259
        return function_406220(v2);
    }
    // 0x40625b
    function_406470(v2);
    // UNREACHABLE
}
// Address range: 0x406270 - 0x406272
int64_t function_406270(void) {
    // 0x406270
    int64_t v1; // 0x406270
    return function_406220(v1);
}
// Address range: 0x406280 - 0x4062b6
int64_t function_406280(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4062a8
        free(v1);
        return (int32_t)&g53 ^ (int32_t)&g53;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406291
    if (a2 != 0 != (mem == NULL)) {
        // 0x4062a0
        return (int64_t)mem;
    }
    // 0x4062b1
    function_406470(a1);
    // UNREACHABLE
}
// Address range: 0x4062c0 - 0x4062e1
int64_t function_4062c0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4062c3
    int64_t v2 = v1; // 0x4062c3
    if (v2 < 0) {
        // 0x4062db
        function_406470(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4062d9
        return function_406280(a1, v2);
    }
    // 0x4062db
    function_406470(a1);
    // UNREACHABLE
}
// Address range: 0x4062f0 - 0x406376
int64_t function_4062f0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40634b
            function_406470(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406280(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406333
    if (a2 == 0) {
        // 0x406358
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406338
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40634b
        function_406470(a1);
        // UNREACHABLE
    }
    // 0x40631a
    *(int64_t *)a2 = v2;
    return function_406280(a1, v2 * a3);
}
// Address range: 0x406380 - 0x4063d0
int64_t function_406380(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406380
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4063ca
            function_406470(a1);
            // UNREACHABLE
        }
        // 0x4063a2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406280(a1, v1);
    }
    if (a2 == 0) {
        // 0x4063b5
        *(int64_t *)a2 = 128;
        return function_406280(0, 128);
    }
    // 0x4063c8
    if (a2 < 0) {
        // 0x4063ca
        function_406470(a1);
        // UNREACHABLE
    }
    // 0x4063a2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406280(a1, v1);
}
// Address range: 0x4063d0 - 0x4063e7
int64_t function_4063d0(int64_t a1, int64_t a2) {
    // 0x4063d0
    return (int64_t)memset((int64_t *)function_406220(a1), 0, (int32_t)a1);
}
// Address range: 0x4063f0 - 0x40641e
int64_t function_4063f0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4063f7
    if ((int64_t)v1 < 0) {
        // 0x406419
        function_406470(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406419
        function_406470(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40640a
    if (mem != NULL) {
        // 0x406414
        return (int64_t)mem;
    }
    // 0x406419
    function_406470(nmemb);
    // UNREACHABLE
}
// Address range: 0x406420 - 0x406448
int64_t function_406420(int64_t a1, int64_t a2) {
    int64_t v1 = function_406220(a2); // 0x40642f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406450 - 0x406463
int64_t function_406450(int64_t str) {
    // 0x406450
    return function_406420(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406470 - 0x4064a1
int64_t function_406470(int64_t a1) {
    // 0x406470
    error(g21, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4064b0 - 0x40658f
int64_t function_4064b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4064bc
    uint32_t v2 = *v1; // 0x4064bc
    int64_t v3 = a2 & 0xffffffff; // 0x4064c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4064c4
    uint64_t v5 = (int64_t)*v4; // 0x4064c4
    int64_t v6; // 0x406532
    if (v3 <= v5) {
      lab_0x40652c_2:
        // 0x40652c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4064b2
    int64_t v8 = v2; // 0x4064b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40652c
        goto lab_0x40652c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4064e8
    int64_t v17; // 0x4064f6
    int64_t * v18; // 0x406510
    int64_t * v19; // 0x406513
    int64_t v20; // 0x40651e
    int64_t v21; // 0x4064f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4064f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x406510
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x406527
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40652c
            goto lab_0x40652c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40652c
            goto lab_0x40652c_2;
        }
        // 0x4064e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40656b
    int64_t * v23 = (int64_t *)v22; // 0x406570
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x406573
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x406570
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x406587
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4064dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40652c
            goto lab_0x40652c_2;
        }
        // 0x4064e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4064f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x406510
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x406527
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40652c
                goto lab_0x40652c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40652c
                goto lab_0x40652c_2;
            }
            // 0x4064e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x406550
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x406570
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x406587
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40652c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x406590 - 0x406bac
int64_t function_406590(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4065af
    int64_t v2 = *v1; // 0x4065af
    char * str2 = (char *)v2; // 0x4065bc
    char c = *str2; // 0x4065bc
    int64_t v3 = v2; // 0x4065e8
    int64_t v4 = 0; // 0x406590
    int32_t v5; // 0x406590
    int64_t v6; // 0x406590
    int64_t v7; // 0x406590
    int64_t v8; // 0x406590
    int64_t v9; // 0x406590
    int64_t v10; // 0x406590
    int64_t v11; // 0x406590
    int64_t v12; // 0x406590
    int64_t v13; // 0x406590
    int64_t str3; // 0x406590
    int64_t v14; // 0x406590
    int64_t v15; // 0x406590
    int64_t v16; // 0x406590
    int64_t v17; // 0x406590
    int32_t v18; // 0x406590
    int32_t v19; // 0x406590
    int32_t v20; // 0x406590
    int32_t v21; // 0x406590
    int32_t v22; // 0x406590
    int32_t v23; // 0x406590
    int32_t v24; // 0x406590
    int32_t v25; // 0x406590
    int32_t v26; // 0x406590
    int32_t v27; // 0x406590
    int32_t v28; // 0x406590
    int32_t v29; // 0x406590
    int64_t nmemb; // 0x406590
    int64_t v30; // 0x406590
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4065ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4065e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4065f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4065fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4065c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40662c
                int64_t v34; // 0x406590
                int64_t v35; // 0x406590
                if (strncmp(str, str2, n) == 0) {
                    // 0x406635
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4067b0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x406646
                int64_t v37 = *(int64_t *)v36; // 0x40664a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x406620
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x406635
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4067b0;
                        }
                    }
                    // 0x406646
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
                  lab_0x406696:
                    // 0x406696
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
                        goto lab_0x4066f0;
                    } else {
                        if (v11 == 0) {
                            // 0x406860
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4066f0;
                        } else {
                            if (v39 == 0) {
                                // 0x406810
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4066ba;
                                } else {
                                    // 0x40681c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4066ba;
                                    } else {
                                        // 0x40682a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4066ba;
                                        } else {
                                            goto lab_0x4066f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4066ba;
                            }
                        }
                    }
                }
              lab_0x406701:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4068d6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x406a82
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x406aa2
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x406aef
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x406b09
                            int64_t v45; // 0x406b0b
                            if (*(char *)v42 != 0) {
                                // 0x406b0b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406b03
                            while (v17 + nmemb != v42) {
                                // 0x406b05
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x406b0b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x406af8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406b30
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x4068e4
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x406a3f
                        free((int64_t *)v17);
                    }
                    // 0x406939
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406950
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4067fe
                    return 63;
                }
                // 0x406720
                v5 = v39;
                if (v13 != 0) {
                    // 0x4067a4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4067b0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4067c0
                    uint32_t v50 = *v49; // 0x4067c0
                    int64_t v51 = v50; // 0x4067c0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4067ca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4067d3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4069ff
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4069aa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4067fe
                            return 63;
                        }
                        // 0x406848
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x406b5f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x406a5d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x406a70
                                // 0x4067fe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40696e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406982
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4067eb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4067ee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4067f2
                    int64_t result = v59; // 0x4067f8
                    if (v58 != 0) {
                        // 0x4067fa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4067fe
                    return result;
                }
            } else {
                // 0x4065fe
                v5 = v32;
            }
            // break -> 0x406725
            break;
        }
    }
    // 0x406725
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40673d
        if (*(char *)(v60 + 1) != 45) {
            // 0x406747
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4067fe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x406889
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406776
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406786
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4066f0:
    // 0x4066f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4066f0
    int64_t v63 = *(int64_t *)v62; // 0x4066f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406701
        goto lab_0x406701;
    }
    goto lab_0x406696;
  lab_0x4066ba:
    // 0x4066ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x406590
    int32_t v65; // 0x406590
    int32_t v66; // 0x406590
    if (v27 != 0) {
        goto lab_0x4066f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x406870
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4066f0;
            } else {
                goto lab_0x4066e1;
            }
        } else {
            // 0x4066d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4069cc
                int64_t v67 = (int64_t)mem; // 0x4069cc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4066f0;
                } else {
                    // 0x4069df
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4066e1;
                }
            } else {
                goto lab_0x4066e1;
            }
        }
    }
  lab_0x4066e1:
    // 0x4066e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4066f0;
}
// Address range: 0x406bb0 - 0x407176
int64_t function_406bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406bd1
    if (v3 < 1) {
        // 0x406d8e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x406bcd
    int32_t v5 = *(int32_t *)a7; // 0x406bd9
    uint64_t v6 = a1 & 0xffffffff; // 0x406bdb
    int64_t v7 = v2; // 0x406be0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406be3
    *v8 = 0;
    int64_t v9; // 0x406bb0
    int64_t v10; // 0x406bb0
    int64_t v11; // 0x406bb0
    int64_t v12; // 0x406bb0
    int64_t str; // 0x406bb0
    int64_t v13; // 0x406bb0
    int64_t v14; // 0x406bb0
    int64_t v15; // 0x406bb0
    int64_t v16; // 0x406bb0
    int64_t v17; // 0x406bb0
    int32_t v18; // 0x406bb0
    char v19; // 0x406bb0
    if (v5 == 0) {
        // 0x406dc8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x406bfa;
    } else {
        // 0x406bf3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406c40
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406c43
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406d08;
            } else {
                int64_t v22 = v7 + 1; // 0x406c56
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406c66
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x406d1c;
                } else {
                    goto lab_0x406c78;
                }
            }
        } else {
            goto lab_0x406bfa;
        }
    }
  lab_0x406bfa:
    // 0x406bfa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406c00
    *v24 = 0;
    int64_t v25; // 0x406bb0
    int64_t v26; // 0x406bb0
    int64_t v27; // 0x406bb0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406cf0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x406cfd;
        }
        case 43: {
            // 0x407000
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x406cfd;
        }
        default: {
            // 0x406c1c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x406f7f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407098
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x406cfd;
                } else {
                    // 0x406f8d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x406c2a;
                }
            } else {
                goto lab_0x406c2a;
            }
        }
    }
  lab_0x406d08:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x406d0f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406c78;
    } else {
        goto lab_0x406d1c;
    }
  lab_0x406c2a:
    // 0x406c2a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x406cfd;
  lab_0x406cfd:
    // 0x406cfd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406d08;
  lab_0x406c78:;
    uint32_t v30 = *(int32_t *)a7; // 0x406c78
    int64_t v31 = v30; // 0x406c78
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x406c7a
    if ((int64_t)*v32 > v31) {
        // 0x406c7f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406c82
    if (*v33 > v30) {
        // 0x406c87
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x406c8a
    int64_t v35 = v31; // 0x406c8e
    int64_t v36 = v15; // 0x406c8e
    int64_t v37; // 0x406bb0
    int64_t v38; // 0x406bb0
    int64_t v39; // 0x406bb0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406df8
        int64_t v41 = v40; // 0x406df8
        v2 = v41;
        int64_t v42; // 0x406bb0
        if (*v33 == v40) {
            // 0x406fe0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406fe8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406e04
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406e18
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406e21
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x406e2a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406e41
            int64_t v47 = v45 & 0xffffffff; // 0x406e45
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x406e4e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406e54
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406e56;
                }
            }
            int64_t v48 = v47 + 1; // 0x406e30
            int64_t v49 = v48 & 0xffffffff; // 0x406e30
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406e41
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x406e4e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406e54
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406e56;
                    }
                }
                // 0x406e30
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406ff8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406e56;
    } else {
        goto lab_0x406c94;
    }
  lab_0x406d1c:
    // 0x406d1c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x406d1f
    int64_t v51 = v12; // 0x406d1f
    int64_t v52 = v14; // 0x406d1f
    if (*(char *)v10 == 0) {
        goto lab_0x406c78;
    } else {
        goto lab_0x406d25;
    }
  lab_0x406c94:;
    int32_t v53 = v35; // 0x406c94
    int64_t v54; // 0x406bb0
    int64_t v55; // 0x406bb0
    int64_t v56; // 0x406bb0
    int64_t v57; // 0x406bb0
    int64_t v58; // 0x406bb0
    int64_t v59; // 0x406bb0
    char * v60; // 0x406bb0
    int64_t v61; // 0x406bb0
    int64_t v62; // 0x406ca9
    int64_t v63; // 0x406bb0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406de3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406de6;
    } else {
        // 0x406c9c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406bb0
        int64_t v66 = v65 ? -1 : 1; // 0x406cb0
        int64_t v67 = (int64_t)"--"; // 0x406bb0
        int64_t v68 = v62; // 0x406bb0
        int64_t v69 = 3; // 0x406cb0
        unsigned char v70 = *(char *)v68; // 0x406cb0
        char v71 = *(char *)v67; // 0x406cb0
        char v72 = v71; // 0x406cb0
        bool v73 = false; // 0x406cb0
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
            // 0x406da0
            if (*(char *)v62 == 45) {
                // 0x406e60
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406e60
                if (c == 0) {
                    goto lab_0x406daa;
                } else {
                    // 0x406e6d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406ef0;
                    } else {
                        if (c == 45) {
                            // 0x4070d3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406f45;
                        } else {
                            // 0x406e7e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406ef0;
                            } else {
                                // 0x406e83
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406ea4;
                                } else {
                                    // 0x406e8a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406ef0;
                                    } else {
                                        goto lab_0x406ea4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x406daa;
            }
        } else {
            uint32_t v75 = *v33; // 0x406cc0
            v2 = v75;
            int32_t v76 = *v32; // 0x406cc3
            int64_t v77 = v35 + 1; // 0x406cc6
            int32_t v78 = v77; // 0x406cc9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x407030
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406cd7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406ce5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406de6;
        }
    }
  lab_0x406d25:;
    // 0x406d25
    int64_t v79; // bp-104, 0x406bb0
    int64_t v80 = &v79; // 0x406bba
    int64_t v81 = v50 + 1; // 0x406d25
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x406d2c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406d31
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406d35
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406d39
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406d41
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406d46
    int32_t c2 = v84; // 0x406d46
    char * found_char_pos = strchr(str2, c2); // 0x406d46
    int64_t v87 = *v82; // 0x406d4b
    v2 = v87;
    int64_t v88 = *v85; // 0x406d55
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406d60
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x407050
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40701d
        *(int32_t *)(v1 + 8) = c2;
        // 0x406d8e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406d46
    char v91 = *(char *)(v90 + 1); // 0x406d7b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406d35
        if (v91 != 58) {
            // 0x406d8e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406fa4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4070a8
                *v8 = 0;
            } else {
                // 0x40708c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x406fce
            *v83 = 0;
            // 0x406d8e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x406fae
        if (v93 != 0) {
            // 0x407040
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x406fce
            *v83 = 0;
            // 0x406d8e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406fc1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x406fce
            *v83 = 0;
            // 0x406d8e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40710a
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4070ba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4070c1
        // 0x406fce
        *v83 = 0;
        // 0x406d8e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406f19
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x406f1b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x407140
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4070f1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4070f8
            // 0x406d8e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406f26
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x406f2a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406f45;
  lab_0x406e56:
    // 0x406e56
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406c94;
  lab_0x406f45:;
    int64_t v99 = function_406590(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406f63
    // 0x406d8e
    return v99 & 0xffffffff;
  lab_0x406de6:;
    int32_t v100 = v55; // 0x406de6
    if (v100 != (int32_t)v59) {
        // 0x406dea
        *(int32_t *)a7 = v100;
    }
    // 0x406d8e
    return 0xffffffff;
  lab_0x406daa:
    // 0x406daa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406db1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x406d8e
    return v99 & 0xffffffff;
  lab_0x406ef0:
    // 0x406ef0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406d25;
  lab_0x406ea4:
    // 0x406ea4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_406590(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x406eca
    if ((int32_t)v101 != -1) {
        // 0x406d8e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x406edf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406ef0;
}
// Address range: 0x407180 - 0x4071d6
int64_t function_407180(int64_t a1) {
    // 0x407180
    *(int32_t *)&g43 = g29;
    *(int32_t *)&g44 = g28;
    int64_t v1; // 0x407180
    int64_t result = function_406bb0(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x4071a6
    g29 = *(int32_t *)&g43;
    g50 = g46;
    *(int32_t *)&g27 = g45;
    return result;
}
// Address range: 0x4071e0 - 0x4071f8
int64_t function_4071e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4071e0
    return function_407180(1);
}
// Address range: 0x407200 - 0x407213
int64_t function_407200(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x407200
    return function_407180(0);
}
// Address range: 0x407220 - 0x407235
int64_t function_407220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407220
    return function_406bb0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x407240 - 0x407256
int64_t function_407240(void) {
    // 0x407240
    return function_407180(0);
}
// Address range: 0x407260 - 0x407278
int64_t function_407260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407260
    return function_406bb0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407280 - 0x4072fa
int64_t function_407280(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40728b
    int64_t v2 = (int64_t)&g12; // 0x40728b
    int32_t * pwc; // 0x407280
    int64_t v3; // 0x407280
    int64_t n; // 0x407280
    if (a2 == 0) {
        goto lab_0x4072d2;
    } else {
        // 0x40728d
        if (a3 == 0) {
            // 0x4072b8
            return -2;
        }
        // 0x407299
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4072d2;
        } else {
            goto lab_0x4072a4;
        }
    }
  lab_0x4072d2:
    // 0x4072d2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407280
    pwc = (int32_t *)&v4;
    goto lab_0x4072a4;
  lab_0x4072a4:;
    char * wstr = (char *)v3; // 0x4072aa
    int64_t ps; // 0x407280
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4072aa
    int64_t result = v5; // 0x4072aa
    if (v5 < 0xfffffffe) {
        // 0x4072b8
        return result;
    }
    int64_t result2 = result; // 0x4072e9
    if ((char)function_407b10(0, v3) == 0) {
        // 0x4072eb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4072b8
    return result2;
}
// Address range: 0x407300 - 0x40735e
int64_t function_407300(int64_t a1) {
    uint64_t result = function_406220(33); // 0x40730e
    char * str = (char *)result; // 0x407322
    strncpy(str, (char *)(a1 + 44), 32);
    *(char *)(result + 32) = 0;
    int64_t v1 = result + (int64_t)strlen(str); // 0x407333
    if (result >= v1) {
        // 0x407341
        return result;
    }
    int64_t v2 = v1; // 0x407339
    v2--;
    char * v3 = (char *)v2; // 0x40733b
    while (*v3 == 32) {
        // 0x407350
        *v3 = 0;
        if (result == v2) {
            // break -> 0x407341
            break;
        }
        v2--;
        v3 = (char *)v2;
    }
    // 0x407341
    return result;
}
// Address range: 0x407360 - 0x407508
int64_t function_407360(int64_t a1, int64_t * a2, int64_t * a3, uint64_t a4) {
    // 0x407360
    utmpxname((char *)a1);
    setutxent();
    struct utmpx * v1 = getutxent(); // 0x407397
    int64_t v2 = 0; // 0x4073a2
    int64_t v3 = 0; // 0x4073a2
    int64_t v4; // 0x407360
    int64_t v5; // 0x407360
    int64_t v6; // 0x407360
    struct utmpx * v7; // 0x407360
    struct utmpx * v8; // 0x407360
    int64_t v9; // 0x407360
    int64_t v10; // 0x407360
    int64_t v11; // 0x407360
    uint64_t v12; // 0x407360
    int64_t v13; // 0x407360
    int64_t v14; // 0x407360
    int64_t v15; // 0x407360
    int64_t v16; // 0x407360
    int64_t v17; // 0x407360
    if (v1 != NULL) {
        struct utmpx * v18 = v1; // 0x407397
        int64_t v19 = 0; // 0x407360
        int64_t v20 = a1;
        int64_t v21 = 0; // 0x407360
        int64_t v22 = 0; // 0x407360
        while (true) {
            // 0x4073a4
            v11 = v22;
            v9 = v21;
            v14 = v20;
            v4 = v19;
            v7 = v18;
            while (true) {
              lab_0x4073a4:
                // 0x4073a4
                v8 = v7;
                v5 = v4;
                v15 = v14;
                v10 = v9;
                v12 = v11;
                v6 = (int64_t)v8;
                if (*(char *)(v6 + 44) == 0) {
                    goto lab_0x4073b6;
                } else {
                    // 0x4073ab
                    if (v8->e0 == 7) {
                        // 0x407440
                        v16 = v15;
                        if (a4 % 2 == 0) {
                            goto lab_0x4073bb;
                        } else {
                            uint32_t pid = *(int32_t *)(v6 + 4); // 0x407449
                            int64_t v23 = pid; // 0x407449
                            v16 = v23;
                            if (pid < 1) {
                                goto lab_0x4073bb;
                            } else {
                                // 0x407455
                                v16 = v23;
                                if (kill(pid, 0) >= 0) {
                                    goto lab_0x4073bb;
                                } else {
                                    int32_t v24 = *__errno_location(); // 0x407469
                                    v13 = v23;
                                    if (v24 == 3) {
                                        // break -> 0x407397
                                        break;
                                    }
                                    // 0x407472
                                    v17 = v23;
                                    if (v12 != v10) {
                                        goto lab_0x4073c4;
                                    } else {
                                        goto lab_0x407480;
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x4073b6;
                    }
                }
            }
          lab_0x407397:
            // 0x407397
            v20 = v13;
            v18 = getutxent();
            v19 = v5;
            v21 = v10;
            v22 = v12;
            v2 = v12;
            v3 = v5;
            if (v18 == NULL) {
                // break -> 0x407415
                break;
            }
        }
    }
  lab_0x407415:
    // 0x407415
    endutxent();
    *a2 = v2;
    *a3 = v3;
    return 0;
  lab_0x4073b6:
    // 0x4073b6
    v13 = v15;
    v16 = v15;
    if ((a4 & 2) != 0) {
        // break -> 0x407397
        goto lab_0x407397;
    }
    goto lab_0x4073bb;
  lab_0x4073bb:
    // 0x4073bb
    v17 = v16;
    if (v12 == v10) {
        goto lab_0x407480;
    } else {
        goto lab_0x4073c4;
    }
  lab_0x407480:;
    int64_t v25 = v17;
    int64_t v26; // 0x407360
    int64_t v27; // 0x407360
    int64_t v28; // 0x407360
    if (v5 == 0) {
        // 0x4074c4
        v27 = 1;
        v26 = 1;
        v28 = 384;
        if (v12 != 0) {
            uint128_t v29 = 384 * (int128_t)v12; // 0x4074d1
            if ((int64_t)v29 < 0) {
                // 0x407503
                function_406470(v25);
                // UNREACHABLE
            }
            if (v29 % 0x1ff0000000000000001 != 0) {
                // 0x407503
                function_406470(v25);
                // UNREACHABLE
            }
            // 0x4074e4
            v27 = v12 + 1;
            v26 = v10;
            v28 = 384 * v12;
        }
    } else {
        if (v12 >= 0x38e38e38e38e38) {
            // 0x407503
            function_406470(v25);
            // UNREACHABLE
        }
        int64_t v30 = v12 + 1; // 0x407497
        int64_t v31 = v12 / 2 + v30; // 0x40749e
        v27 = v30;
        v26 = v31;
        v28 = 384 * v31;
    }
    int64_t v32 = v27; // 0x4074bf
    int64_t v33 = v26; // 0x4074bf
    int64_t v34 = function_406280(v5, v28); // 0x4074bf
    goto lab_0x4073c8;
  lab_0x4073c4:
    // 0x4073c4
    v32 = v12 + 1;
    v33 = v10;
    v34 = v5;
    goto lab_0x4073c8;
  lab_0x4073c8:;
    int64_t v35 = v34 + 384 * v12; // 0x4073d6
    *(int64_t *)v35 = *(int64_t *)v8;
    int64_t v36 = v35 + 8 & -8; // 0x4073e7
    *(int64_t *)(v35 + 376) = *(int64_t *)(v6 + 376);
    int64_t v37 = v35 - v36; // 0x4073f2
    uint64_t v38 = (v37 + 384) / 8 % 0x20000000; // 0x407403
    __asm_rep_movsq_memcpy((char *)v36, (char *)(v6 - v37), v38);
    struct utmpx * v39 = getutxent(); // 0x407408
    v11 = v32;
    v9 = v33;
    bool v40; // 0x407360
    v14 = v38 * (v40 ? -8 : 8) + v36;
    v4 = v34;
    v7 = v39;
    v2 = v32;
    v3 = v34;
    if (v39 == NULL) {
        // break (via goto) -> 0x407415
        goto lab_0x407415;
    }
    goto lab_0x4073a4;
}
// Address range: 0x407510 - 0x407555
int64_t function_407510(int64_t a1) {
    // 0x407510
    int32_t v1; // 0x407510
    if (*(char *)(a1 + 8) != 0) {
        // 0x407540
        v1 = setenv("TZ", (char *)(a1 + 9), 1);
    } else {
        // 0x40751a
        v1 = unsetenv("TZ");
    }
    int64_t result = 0; // 0x407528
    if (v1 == 0) {
        // 0x40752a
        tzset();
        result = 1;
    }
    // 0x407534
    return result;
}
// Address range: 0x407560 - 0x407589
int64_t function_407560(int64_t a1) {
    // 0x407560
    if (a1 == 0) {
        // 0x407580
        int64_t result; // 0x407560
        return result;
    }
    int64_t * v1 = (int64_t *)a1; // 0x407570
    int64_t v2 = *v1; // 0x407570
    free(v1);
    while (v2 != 0) {
        // 0x407570
        v1 = (int64_t *)v2;
        v2 = *v1;
        free(v1);
    }
    // 0x407580
    return &g53;
}
// Address range: 0x407590 - 0x4075d1
int64_t function_407590(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40759d
    function_407560(a1);
    return (int64_t)v1 & 0xffffffff;
}
// Address range: 0x4075e0 - 0x40766f
int64_t function_4075e0(int64_t str, int64_t a2, int64_t a3) {
    int64_t result2; // 0x4075e0
    if (str == 0) {
        int64_t * mem = malloc(128); // 0x40764d
        int64_t result = (int64_t)mem; // 0x40764d
        result2 = result;
        if (mem != NULL) {
            // 0x40765a
            *mem = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int32_t len = strlen((char *)str); // 0x4075ec
        uint64_t v1 = (int64_t)len + 1; // 0x4075f6
        int64_t * mem2 = malloc(v1 >= 118 ? len + 18 & -8 : 128); // 0x40760a
        int64_t v2 = (int64_t)mem2; // 0x40760a
        result2 = v2;
        if (mem2 != NULL) {
            // 0x407617
            *mem2 = 0;
            int64_t v3 = v2 + 9; // 0x407623
            *(int16_t *)(v2 + 8) = 1;
            memcpy((int64_t *)v3, (int64_t *)str, (int32_t)v1);
            *(char *)(v3 + v1) = 0;
            result2 = v2;
        }
    }
    // 0x40763b
    return result2;
}
// Address range: 0x407670 - 0x4077e5
int64_t function_407670(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x40767e
    uint64_t v2 = *v1; // 0x40767e
    if (v2 == 0) {
        // 0x407721
        return 1;
    }
    int64_t v3; // 0x407670
    if (v2 >= a2) {
        int64_t v4 = a2 + 56; // 0x407696
        v3 = v4;
        if (v2 < v4) {
            // 0x407721
            return 1;
        }
    }
    char * str2 = (char *)v2; // 0x4076a4
    if (*str2 == 0) {
        // 0x407718
        *v1 = (int64_t)&g12;
        // 0x407721
        return 1;
    }
    int64_t str = a1 + 9; // 0x4076a9
    if (strcmp((char *)str, str2) == 0) {
        // 0x407718
        *v1 = str;
        // 0x407721
        return 1;
    }
    int64_t v5 = a1;
    int64_t v6 = str;
    char * str3 = (char *)v6; // 0x4076c7
    int64_t v7; // 0x407670
    int64_t v8; // 0x407670
    int64_t v9; // 0x407670
    int64_t v10; // 0x4076cc
    if (*str3 == 0) {
        // 0x4076cc
        v10 = v5 + 9;
        if (v6 != v10) {
            // break (via goto) -> 0x407758
            goto lab_0x407758;
        }
        // 0x4076d9
        if (*(char *)(v5 + 8) == 0) {
            // 0x407788
            v8 = 0;
            v9 = v3;
            v7 = (int64_t)strlen(str2) + 1;
            goto lab_0x407796;
        }
    }
    int64_t v11 = v6 + 1 + (int64_t)strlen(str3); // 0x4076eb
    char * str5 = (char *)v11;
    int64_t v12; // 0x407670
    int64_t v13; // 0x4076f5
    int64_t str4; // 0x4076fe
    int32_t strcmp_rc; // 0x40770b
    while (*str5 == 0) {
        // 0x4076f5
        v13 = *(int64_t *)v5;
        if (v13 == 0) {
            // break -> 0x4076b8
            break;
        }
        // 0x4076fe
        str4 = v13 + 9;
        strcmp_rc = strcmp((char *)str4, str2);
        v12 = str4;
        if (strcmp_rc == 0) {
            // 0x407718
            *v1 = v12;
            // 0x407721
            return 1;
        }
        v5 = v13;
        v6 = str4;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x4076cc
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x407758
                goto lab_0x407758;
            }
            // 0x4076d9
            if (*(char *)(v5 + 8) == 0) {
                // 0x407788
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x407796;
            }
        }
        // 0x4076e3
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
    }
    // 0x407718
    *v1 = v11;
    while (strcmp(str5, str2) != 0) {
        // 0x4076c7
        v6 = v11;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x4076cc
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x407758
                goto lab_0x407758;
            }
            // 0x4076d9
            if (*(char *)(v5 + 8) == 0) {
                // 0x407788
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x407796;
            }
        }
        // 0x4076e3
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
        while (*str5 == 0) {
            // 0x4076f5
            v13 = *(int64_t *)v5;
            if (v13 == 0) {
                // break -> 0x4076b8
                break;
            }
            // 0x4076fe
            str4 = v13 + 9;
            strcmp_rc = strcmp((char *)str4, str2);
            v12 = str4;
            if (strcmp_rc == 0) {
                // 0x407718
                *v1 = v12;
                // 0x407721
                return 1;
            }
            v5 = v13;
            v6 = str4;
            str3 = (char *)v6;
            if (*str3 == 0) {
                // 0x4076cc
                v10 = v5 + 9;
                if (v6 != v10) {
                    // break (via goto) -> 0x407758
                    goto lab_0x407758;
                }
                // 0x4076d9
                if (*(char *)(v5 + 8) == 0) {
                    // 0x407788
                    v8 = 0;
                    v9 = v3;
                    v7 = (int64_t)strlen(str2) + 1;
                    goto lab_0x407796;
                }
            }
            // 0x4076e3
            v11 = v6 + 1 + (int64_t)strlen(str3);
            str5 = (char *)v11;
        }
        // 0x407718
        *v1 = v11;
    }
    // 0x407721
    return 1;
  lab_0x407758:;
    int64_t v14 = (int64_t)strlen(str2) + 1; // 0x407760
    int64_t v15 = v6 - v10; // 0x407767
    int64_t v16 = -1 - v15;
    v8 = v15;
    v9 = v16;
    v7 = v14;
    if (v14 > v16) {
        // 0x407775
        *__errno_location() = 12;
        // 0x407721
        return 0;
    }
    goto lab_0x407796;
  lab_0x407796:
    // 0x407796
    if (v7 + v8 < 119) {
        // 0x40779f
        memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v7);
        *(char *)(v7 + v6) = 0;
        // 0x407718
        *v1 = v6;
        // 0x407721
        return 1;
    }
    int64_t v17 = function_4075e0(v2, v2, v9); // 0x4077c3
    *(int64_t *)v5 = v17;
    if (v17 == 0) {
        // 0x407721
        return 0;
    }
    // 0x4077d1
    *(char *)(v17 + 8) = 0;
    // 0x407718
    *v1 = v17 + 9;
    // 0x407721
    return 1;
}
// Address range: 0x4077f0 - 0x40789f
int64_t function_4077f0(int64_t a1) {
    char * env_val = getenv("TZ"); // 0x4077fc
    int64_t v1 = (int64_t)env_val; // 0x4077fc
    char v2 = *(char *)(a1 + 8);
    int64_t v3; // 0x4077f0
    if (env_val == NULL) {
        // 0x407860
        if (v2 == 0) {
            // 0x40782d
            return 1;
        }
    } else {
        if (v2 != 0) {
            // 0x407838
            v3 = v1;
            if (strcmp((char *)(a1 + 9), env_val) == 0) {
                // 0x40782d
                return 1;
            }
        }
    }
    // 0x407811
    int64_t v4; // 0x4077f0
    int64_t result = function_4075e0(v1, v3, v4); // 0x407814
    if (result != 0 != ((char)result == 0)) {
        // 0x40782d
        return result;
    }
    int32_t * v5 = __errno_location(); // 0x407878
    if (result != 1) {
        // 0x407889
        function_407560(result);
    }
    // 0x407891
    return 0;
}
// Address range: 0x4078a0 - 0x4078b1
int64_t function_4078a0(int64_t a1) {
    // 0x4078a0
    if (a1 == 1) {
        // 0x4078b0
        int64_t result; // 0x4078a0
        return result;
    }
    // 0x4078a6
    return function_407560(a1);
}
// Address range: 0x4078c0 - 0x407965
int64_t function_4078c0(int64_t a1, int64_t timep, int64_t time2) {
    if (a1 == 0) {
        // 0x407950
        return (int64_t)gmtime_r((int32_t *)timep, (struct tm *)time2);
    }
    int64_t v1 = function_4077f0(a1); // 0x4078d8
    if (v1 == 0) {
        // 0x40790a
        return 0;
    }
    // 0x4078e5
    if (localtime_r((int32_t *)timep, (struct tm *)time2) != NULL) {
        // 0x4078f5
        if ((char)function_407670(a1, time2) != 0) {
            // 0x407904
            if (v1 == 1 || (char)function_407590(v1) != 0) {
                // 0x40790a
                return time2;
            }
            // 0x40790a
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x407926
        function_407590(v1);
    }
    // 0x40790a
    return 0;
}
// Address range: 0x407970 - 0x407a8c
int64_t function_407970(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407970
    int32_t v1; // 0x407970
    int32_t v2 = v1;
    if (a1 == 0) {
        // 0x407a68
        return function_407a90(a2);
    }
    int64_t v3 = function_4077f0(a1); // 0x407987
    if (v3 == 0) {
        // 0x4079de
        return -1;
    }
    int64_t v4 = function_4088c0(a2); // 0x40799b
    int64_t timep = v4; // bp-96, 0x4079a0
    if (v4 == -1) {
        // 0x4079f0
        int32_t time2; // bp-88, 0x407970
        if (localtime_r((int32_t *)&timep, (struct tm *)&time2) == NULL) {
            goto lab_0x4079c3;
        } else {
            int32_t v5 = *(int32_t *)(a2 + 32); // 0x407a04
            if (v2 >= 0 == v5 > -1 == (v5 == 0 != (v2 == 0))) {
                goto lab_0x4079c3;
            } else {
                int32_t v6 = *(int32_t *)(a2 + 16); // 0x407a23
                int32_t v7 = *(int32_t *)(a2 + 20); // 0x407a26
                int32_t v8 = *(int32_t *)(a2 + 12); // 0x407a33
                int32_t v9 = *(int32_t *)(a2 + 8); // 0x407a3c
                int32_t v10 = *(int32_t *)(a2 + 4); // 0x407a45
                if ((v7 ^ v1 | v6 ^ v1 | v8 ^ v1 | v9 ^ v1 || v10 ^ v1 || time2 ^ (int32_t)(int64_t)&time2) == 0) {
                    goto lab_0x4079ab;
                } else {
                    goto lab_0x4079c3;
                }
            }
        }
    } else {
        goto lab_0x4079ab;
    }
  lab_0x4079ab:
    // 0x4079ab
    if ((char)function_407670(a1, a2) == 0) {
        // 0x4079ba
        timep = -1;
    }
    goto lab_0x4079c3;
  lab_0x4079c3:
    if (v3 != 1) {
        // 0x4079c9
        if ((char)function_407590(v3) == 0) {
            // 0x4079de
            return -1;
        }
    }
    // 0x4079de
    return timep;
}
// Address range: 0x407a90 - 0x407aa6
int64_t function_407a90(int64_t a1) {
    // 0x407a90
    *(int32_t *)(a1 + 32) = 0;
    return function_408480(a1, 0x401910, &g47);
}
// Address range: 0x407ab0 - 0x407b0d
int64_t function_407ab0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x407ab7
    int64_t v2; // 0x407ab0
    int64_t result = function_4080e0(a1, v2); // 0x407ac8
    if ((v2 & 32) != 0) {
        // 0x407af0
        if ((int32_t)result == 0) {
            // 0x407af4
            *__errno_location() = 0;
        }
        // 0x407aea
        return 0xffffffff;
    }
    // 0x407ad1
    if ((int32_t)result == 0) {
        // 0x407aea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x407ad8
    if (v1 == 0) {
        // 0x407ada
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x407aea
    return result2;
}
// Address range: 0x407b10 - 0x407b6e
int64_t function_407b10(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x407b16
    if (locale == NULL) {
        // 0x407b43
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x407b16
    bool v2; // 0x407b10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x407b10
    int64_t v5 = v1; // 0x407b10
    int64_t v6 = 2; // 0x407b35
    unsigned char v7 = *(char *)v5; // 0x407b35
    char v8 = *(char *)v4; // 0x407b35
    char v9 = v8; // 0x407b35
    bool v10 = false; // 0x407b35
    while (v7 == v8) {
        // 0x407b28
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
    int64_t v12 = (int64_t)"POSIX"; // 0x407b41
    int64_t v13 = v1; // 0x407b41
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407b43
        return 0;
    }
    int64_t v14 = 6; // 0x407b41
    unsigned char v15 = *(char *)v13; // 0x407b5d
    char v16 = *(char *)v12; // 0x407b5d
    char v17 = v16; // 0x407b5d
    bool v18 = false; // 0x407b5d
    while (v15 == v16) {
        // 0x407b50
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
// Address range: 0x407b70 - 0x4080d2
int64_t function_407b70(void) {
    char * v1 = nl_langinfo(14); // 0x407b86
    char * v2 = g48; // 0x407b8b
    char * v3; // 0x407b70
    int64_t v4; // 0x407b70
    int64_t v5; // 0x407b70
    int64_t v6; // 0x407b70
    int64_t v7; // 0x407b70
    int32_t size; // 0x407b70
    int32_t size2; // 0x407b70
    int32_t len; // 0x407c42
    int64_t v8; // 0x407c42
    char * env_val; // 0x407c2d
    if (v2 == NULL) {
        // 0x407c28
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x407c95;
        } else {
            // 0x407c3a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x407c95;
            } else {
                // 0x407c3f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x407c2d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4080c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x407c95;
                    } else {
                        // 0x408039
                        size2 = len + 14;
                        goto lab_0x407c5b;
                    }
                } else {
                    goto lab_0x407c5b;
                }
            }
        }
    } else {
        // 0x407b70
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x407baa;
    }
  lab_0x407edc:;
    // 0x407edc
    struct _IO_FILE * stream; // 0x407d1b
    int32_t v10 = __uflow(stream); // 0x407edf
    int64_t v11; // 0x407b70
    int64_t v12 = v11; // 0x407ee9
    int64_t v13; // 0x407b70
    int64_t v14 = v13; // 0x407ee9
    int32_t v15 = v10; // 0x407ee9
    int64_t v16; // 0x407b70
    int64_t v17 = v16; // 0x407ee9
    int64_t v18 = v11; // 0x407ee9
    int64_t v19 = v13; // 0x407ee9
    int64_t v20 = v16; // 0x407ee9
    if (v10 == -1) {
        // break -> 0x407eef
        goto lab_0x407eef;
    }
    goto lab_0x407d69;
  lab_0x407d5e:;
    // 0x407d5e
    int64_t v90; // 0x407b70
    int64_t * v32; // 0x407d50
    *v32 = v90 + 1;
    int64_t v89; // 0x407b70
    v12 = v89;
    int64_t v91; // 0x407b70
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x407b70
    v17 = v92;
    goto lab_0x407d69;
  lab_0x407d69:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x407b70
    int32_t v25; // bp-120, 0x407b70
    int32_t v26; // bp-184, 0x407b70
    int64_t v27; // 0x407d1b
    int64_t v28; // 0x407d38
    int64_t v29; // 0x407d3d
    int64_t * v30; // 0x407d54
    switch (c) {
        case 32: {
            goto lab_0x407d50;
        }
        case 10: {
            goto lab_0x407d50;
        }
        case 9: {
            goto lab_0x407d50;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407f41
            int32_t v33; // 0x407b70
            char v34; // 0x407b70
            int32_t v35; // 0x407f4e
            if (v31 < *v30) {
                // 0x407f20
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x407f4b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407f41
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407f20
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x407f4b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407f30
                v36 = v33;
            }
            // 0x40801f
            if (v36 == -1) {
                // break -> 0x407eef
                break;
            }
            goto lab_0x407d50;
        }
        default: {
            // 0x407d7f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x407eef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407da8
            int64_t v39 = v37 + 4; // 0x407daa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407db6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407db8
            while (v41 == 0) {
                // 0x407da8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407dd6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407de2
            int64_t v45 = v43 + 4; // 0x407de4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407df0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407df2
            while (v47 == 0) {
                // 0x407de2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x407ddf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407e08
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407e18
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x407e1c
            int64_t v52 = v51 + v48; // 0x407e25
            int64_t * mem; // 0x407b70
            int64_t v53; // 0x407b70
            int64_t v54; // 0x407b70
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x407f5b
                int64_t v56 = v55 + 3; // 0x407f67
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407e41
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407e50
            if (mem == NULL) {
                // 0x40807c
                free((int64_t *)v21);
                function_4080e0(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x407cf4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407e68
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407e72
            uint32_t v62 = (int32_t)v59; // 0x407e75
            int64_t v63; // 0x407b70
            if (v62 >= 8) {
                // 0x407f84
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x407f9e
                int64_t v66 = v61 - v65; // 0x407fa2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x407fad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x407fbe
                    int64_t v70 = v69 & 0xffffffff; // 0x407fbe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x407fbb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40804f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407e87
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x407e8b
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
            int64_t v73 = v51 + 1; // 0x407e9b
            int64_t v74 = v60 - 1; // 0x407e9f
            uint32_t v75 = (int32_t)v73; // 0x407ea4
            int64_t v76; // 0x407b70
            if (v75 >= 8) {
                // 0x407fd2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x407fdc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x407fec
                int64_t v80 = v74 - v79; // 0x407ff0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x407ffb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40800b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x408009
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x408066
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40806e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407eb6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x407eba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4080b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x407ece
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x407d5e;
            } else {
                goto lab_0x407edc;
            }
        }
    }
  lab_0x407d50:;
    int64_t v93 = v23; // 0x407b70
    int64_t v94 = v22; // 0x407b70
    int64_t v95 = v21; // 0x407b70
    goto lab_0x407d50_2;
  lab_0x407c95:;
    int64_t * mem3 = malloc(size); // 0x407c95
    int64_t v97 = (int64_t)&g12; // 0x407ca0
    int64_t v98; // 0x407b70
    int64_t path; // 0x407b70
    if (mem3 == NULL) {
        goto lab_0x407c72;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x407c95
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407cb6;
    }
  lab_0x407baa:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x407b9d
    char v100 = *v3; // 0x407baa
    int64_t v101; // 0x407b70
    if (v100 == 0) {
        // 0x407c04
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x407b70
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x407b70
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x407bf0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x407bf7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x407bc0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x407bcd
        char v107 = *(char *)v106; // 0x407bd2
        v102 = v107;
        if (v107 == 0) {
            // 0x407c04
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x407bdb
    v104 = v103 + 1;
  lab_0x407bf7:
    // 0x407c04
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x407c72:;
    char * v108 = (char *)v97;
    g48 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x407baa;
  lab_0x407cb6:;
    int64_t v109 = v98 + path; // 0x407cb6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407ce2
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x407d11
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x408042
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x407d35
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407d50_2:;
                uint64_t v96 = *v32; // 0x407d50
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x407edc;
                } else {
                    goto lab_0x407d5e;
                }
            }
          lab_0x407eef:
            // 0x407eef
            function_4080e0(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x407f0e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407cf4;
  lab_0x407c5b:;
    int64_t * mem4 = malloc(size2); // 0x407c5b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x407d01
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407cb6;
    } else {
        goto lab_0x407c72;
    }
  lab_0x407cf4:
    // 0x407cf4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x407c72;
}
// Address range: 0x4080e0 - 0x40815b
int64_t function_4080e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4080e7
    if (fileno(stream) < 0) {
        // 0x408147
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4080fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40812b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x408147
            return fclose(stream);
        }
    }
    // 0x4080fc
    if ((int32_t)function_408160(a1, v1) == 0) {
        // 0x408147
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x408108
    int32_t v3 = *v2; // 0x408110
    int64_t result = fclose(stream); // 0x40811e
    if (v3 != 0) {
        // 0x408150
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x408120
    return result;
}
// Address range: 0x408160 - 0x4081a0
int64_t function_408160(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40817a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40817a
        return fflush(stream);
    }
    // 0x408188
    function_4081a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4081a0 - 0x4081f7
int64_t function_4081a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4081a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4081aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4081db
    int64_t result = -1; // 0x4081e4
    if (v1 != -1) {
        // 0x4081e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4081f2
    return result;
}
// Address range: 0x408200 - 0x408317
int64_t function_408200(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a1 / 4 + 475 + (int64_t)(a1 % 4 == 0); // 0x40822e
    int32_t v2 = (a6 >> 2) + 475 + (int32_t)(a6 % 4 == 0); // 0x40824a
    int32_t v3 = v1; // 0x408253
    int32_t v4 = ((int32_t)(0x51eb851f * (0x100000000 * v1 >> 32) / 0x100000000) >> 3) - (v3 >> 31); // 0x408264
    int32_t v5 = v4 - (int32_t)(-25 * v4 + v3 < 0); // 0x408274
    int32_t v6 = v2 / 25; // 0x408288
    int32_t v7 = v6 - (int32_t)(-25 * v6 + v2 < 0); // 0x408299
    return (0x100000000 * a5 >> 32) - (0x100000000 * a10 >> 32) + 60 * ((0x100000000 * a4 >> 32) - (0x100000000 * a9 >> 32) + 60 * ((0x100000000 * a3 >> 32) - (0x100000000 * a8 >> 32) + 24 * (365 * (a1 - (int64_t)a6) + a2 - (0x100000000 * a7 >> 32) + (int64_t)(v3 - v2 - v5 + (v5 >> 2) + v7 - (v7 >> 2)))));
}
// Address range: 0x408320 - 0x4083b1
int64_t function_408320(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, uint64_t a6, int64_t a7) {
    if (a7 != 0) {
        uint32_t v1 = *(int32_t *)a7; // 0x40832e
        uint32_t v2 = *(int32_t *)(a7 + 4); // 0x408333
        uint32_t v3 = *(int32_t *)(a7 + 8); // 0x408339
        uint32_t v4 = *(int32_t *)(a7 + 28); // 0x40833f
        int32_t v5 = *(int32_t *)(a7 + 20); // 0x408345
        int64_t v6 = function_408200(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, v5, (int64_t)v4, (int64_t)v3, (int64_t)v2, (int64_t)v1); // 0x408349
        int64_t result = v6 + a6; // 0x408352
        if (((result ^ v6) & (result ^ a6)) >= 0) {
            // 0x408357
            return result;
        }
    }
    if (a6 >= 0) {
        int64_t v7 = a6 - 0x7ffffffffffffffd; // 0x40837d
        int64_t result2 = v7 < 0 == (0x7ffffffffffffffc - a6 & a6) < 0 == (v7 != 0) ? a6 - 1 : 0x7fffffffffffffff; // 0x408381
        return result2;
    }
    // 0x408390
    if (a6 > -0x7fffffffffffffff) {
        // 0x408357
        return -0x8000000000000000;
    }
    // 0x40839f
    return a6 + 1;
}
// Address range: 0x4083c0 - 0x40847f
int64_t function_4083c0(int64_t a1, int64_t result, uint64_t a3) {
    if (result == 0 != a3 != 0) {
        // 0x4083ed
        return result;
    }
    int64_t v1 = ((int64_t)a3 >> 1) + a3 % 2; // 0x40842b
    if (v1 != 0 == (v1 != a3)) {
        // 0x4083ed
        return result;
    }
    int64_t v2 = v1; // 0x408431
    while (v2 != 0) {
        // 0x408438
        v2 = (v2 >> 1) + v2 % 2;
    }
    // 0x4083ed
    return result;
}
// Address range: 0x408480 - 0x4088ba
int64_t function_408480(int64_t a1, int64_t a2, int64_t * a3) {
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x40849b
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x4084a3
    uint32_t v3 = *(int32_t *)(a1 + 8); // 0x4084b4
    int32_t v4 = *(int32_t *)(a1 + 16); // 0x4084b7
    int32_t v5 = v4 / 12; // 0x4084d5
    int32_t v6 = -12 * v5 + v4; // 0x4084df
    int32_t v7 = *(int32_t *)(a1 + 20); // 0x4084ea
    int64_t v8 = (int64_t)(v5 - (int32_t)(v6 < 0)) + (int64_t)v7; // 0x4084f1
    int64_t v9 = 0; // 0x4084f7
    if (v8 % 4 == 0) {
        // 0x4084f9
        v9 = 1;
        if (v8 == (v8 >> 63 & 100)) {
            // 0x408760
            v9 = v8 < 0;
        }
    }
    // 0x408535
    int64_t v10; // 0x408480
    int32_t v11 = v10;
    int64_t v12 = v9;
    uint16_t v13 = *(int16_t *)(2 * (v12 + (int64_t)((v6 >> 31 & 12) + v6) + 4 * v12) + (int64_t)&g14); // 0x408567
    int32_t v14 = v11 - 59; // 0x408580
    int64_t v15 = v14 == 0 | v14 < 0 != (58 - v11 & v11) < 0 ? v10 & 0xffffffff : 59; // 0x408583
    int64_t v16 = (int32_t)v15 >= 0 ? v15 : 0; // 0x408597
    int64_t v17 = function_408200(v8, (int64_t)v1 - 1 + (int64_t)v13, (int64_t)v3, (int64_t)v2, v16, 70, 0, 0, 0, -v12 & 0xffffffff); // 0x4085c0
    int64_t v18; // bp-280, 0x408480
    int64_t v19 = &v18; // 0x4085c5
    int64_t * v20 = (int64_t *)(v19 + 16);
    int64_t v21 = v19 + 96; // 0x408613
    int64_t v22 = v19 + 80; // 0x408618
    int64_t * v23 = (int64_t *)v22;
    int64_t * v24 = (int64_t *)(v19 - 16);
    int32_t * v25 = (int32_t *)(v19 + 28);
    int32_t * v26 = (int32_t *)(v19 + 12);
    int32_t * v27 = (int32_t *)(v19 + 24);
    int64_t * v28 = (int64_t *)(v19 + 32);
    int64_t v29 = v19 + 128;
    int32_t * v30 = (int32_t *)v29;
    int64_t v31 = v19 + 40;
    int32_t * v32 = (int32_t *)v31;
    int32_t v33 = 6; // 0x4085e3
    int64_t v34 = v17; // 0x4085e3
    int64_t v35 = v17;
    uint64_t v36 = 0;
    int64_t v37 = function_4083c0(*v20, v22, v21); // 0x40861d
    int64_t v38 = *v23; // 0x408622
    *v24 = v37;
    int64_t v39 = function_408320(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g53); // 0x408644
    while (v38 != v39) {
        // 0x408654
        if (v38 != v35 && v38 == v34) {
            int32_t v40 = *v30; // 0x40865e
            if (v40 < 0) {
                goto lab_0x408687_3;
            }
            int32_t v41 = *v32; // 0x40866b
            if (v41 < 0) {
                if (v36 <= (int64_t)(v40 != 0)) {
                    goto lab_0x408687_3;
                }
            } else {
                if (v41 != 0 != v40 != 0) {
                    goto lab_0x408687_3;
                }
            }
        }
        // 0x4085e8
        v33--;
        if (v33 == 0) {
            // 0x408747
            return -1;
        }
        // 0x4085f1
        *v23 = v39;
        v34 = v35;
        v35 = v38;
        v36 = (int64_t)(*v30 != 0);
        v37 = function_4083c0(*v20, v22, v21);
        v38 = *v23;
        *v24 = v37;
        v39 = function_408320(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g53);
    }
    int32_t v42 = *v32; // 0x408790
    int32_t v43 = *v30; // 0x408794
    int64_t v44 = *(int64_t *)(v19 + 72); // 0x40879b
    *(char *)v31 = (char)(v42 == 0);
    int64_t v45 = v38; // 0x4087b4
    int64_t v46 = v44; // 0x4087b4
    if (v43 >= 0 && v42 >= 0 && v42 == 0 != (v43 == 0)) {
        int64_t * v47 = (int64_t *)v31; // 0x4087d0
        *v47 = v8;
        int64_t v48 = v19 + 88; // 0x40880b
        int64_t * v49 = (int64_t *)v48;
        int64_t v50 = v19 + 160;
        int64_t v51 = v38; // 0x4087d5
        int64_t v52 = 0x92c70; // 0x4087d5
        while (true) {
            int64_t v53 = -v52; // 0x408802
            int64_t v54 = v53 & 0xffffffff; // 0x408802
            int64_t v55 = 0x100000000 * v53 >> 32; // 0x408805
            int64_t v56 = v55 + v51; // 0x408808
            *v49 = v56;
            int64_t v57 = v51; // 0x408810
            int32_t v58 = 2; // 0x408810
            int64_t v59 = v54; // 0x408810
            int32_t v60 = 2; // 0x408810
            int64_t v61 = v54; // 0x408810
            if (((v56 ^ v55) & (v56 ^ v51)) >= 0) {
              lab_0x40882e:
                // 0x40882e
                function_4083c0(*v20, v48, v50);
                int32_t v62 = *(int32_t *)(v19 + 192); // 0x408845
                if (v42 == 0 != (v62 == 0) != v62 >= 0) {
                    // break -> 0x40885a
                    break;
                }
                // 0x4088b0
                v59 = v61;
                v58 = v60;
                v57 = *v23;
            }
            int64_t v63 = 2 * v52; // 0x4087f7
            int64_t v64 = v57;
            int32_t v65 = v58; // 0x408480
            int64_t v66 = v59; // 0x408812
            while (v65 != 1) {
                int64_t v67 = v66 + v63; // 0x408812
                v66 = v67 & 0xffffffff;
                int64_t v68 = 0x100000000 * v67 >> 32; // 0x40881b
                int64_t v69 = v68 + v64; // 0x408824
                *v49 = v69;
                v65 = 1;
                v60 = 1;
                v61 = v66;
                if (((v69 ^ v68) & (v69 ^ v64)) >= 0) {
                    goto lab_0x40882e;
                }
            }
            int64_t v70 = v52 + 0x92c70; // 0x4087e0
            v45 = v64;
            v46 = v44;
            v51 = v64;
            v52 = v70 & 0xffffffff;
            if ((int32_t)v70 == 0x100dc400) {
                goto lab_0x408690;
            }
        }
        // 0x40885a
        *v24 = v50;
        *v23 = function_408320(*v47, *v28, *v27, *v26, *v25, *v49, (int64_t)&g53);
        function_4083c0(*v20, v22, v21);
        v45 = *v23;
        v46 = v44;
    }
    goto lab_0x408690;
  lab_0x408687_3:
    // 0x408687
    v45 = v38;
    v46 = *(int64_t *)(v19 + 72);
    goto lab_0x408690;
  lab_0x408690:;
    int64_t v71 = *(int64_t *)(v19 + 56); // 0x408698
    int32_t v72 = *(int32_t *)v21; // 0x4086a0
    int32_t v73 = *(int32_t *)(v19 + 64); // 0x4086a4
    int64_t v74 = *(int64_t *)(v19 + 48); // 0x4086ab
    *(int64_t *)v74 = v45 - (int64_t)*(int32_t *)(v19 + 68) - v71;
    int64_t result = v45; // 0x4086b5
    if (v72 != v73) {
        int32_t v75 = *v25; // 0x4086b9
        int64_t v76 = (int64_t)(v72 == 60 == v73 < 1) - (int64_t)v75 + (int64_t)v73; // 0x4086d5
        int64_t v77 = v76 + v45; // 0x4086d8
        *v23 = v77;
        if (((v77 ^ v45) & (v77 ^ v76)) < 0) {
            // 0x408747
            return -1;
        }
        // 0x4086e2
        *(int64_t *)(v19 + 160) = v77;
        if (*v20 == 0) {
            // 0x408747
            return -1;
        }
        // 0x408703
        result = *v23;
    }
    int128_t v78 = __asm_movdqa(*(int128_t *)v21); // 0x408708
    int128_t v79 = __asm_movdqa(*(int128_t *)(v19 + 112)); // 0x40870e
    int128_t v80 = __asm_movdqa(*(int128_t *)v29); // 0x408714
    __asm_movups(*(int128_t *)v46, v78);
    __asm_movups(*(int128_t *)(v46 + 16), v79);
    __asm_movups(*(int128_t *)(v46 + 32), v80);
    *(int64_t *)(v46 + 48) = *(int64_t *)(v19 + 144);
    // 0x408747
    return result;
}
// Address range: 0x4088c0 - 0x4088dc
int64_t function_4088c0(int64_t a1) {
    // 0x4088c0
    tzset();
    return function_408480(a1, 0x401810, &g49);
}
// Address range: 0x4088e0 - 0x40893d
int64_t function_4088e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4088e0
    return function_401728();
}
// Address range: 0x408940 - 0x408941
int64_t function_408940(void) {
    // 0x408940
    int64_t result; // 0x408940
    return result;
}
// Address range: 0x408950 - 0x408968
int64_t function_408950(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408950
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g19);
}
// Address range: 0x408968 - 0x408988
int64_t function_408968(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g15; // 0x408972
    while (*(int64_t *)v1 != -1) {
        // 0x408973
        v1 -= 8;
    }
    // 0x408984
    return result;
}
