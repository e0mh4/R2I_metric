// Address range: 0x401750 - 0x401755
int64_t function_401750(void) {
    // 0x401750
    abort();
    // UNREACHABLE
}
// Address range: 0x401755 - 0x40175a
int64_t function_401755(void) {
    // 0x401755
    abort();
    // UNREACHABLE
}
// Address range: 0x40175a - 0x40175f
int64_t function_40175a(void) {
    // 0x40175a
    abort();
    // UNREACHABLE
}
// Address range: 0x40175f - 0x401764
int64_t function_40175f(void) {
    // 0x40175f
    abort();
    // UNREACHABLE
}
// Address range: 0x401764 - 0x401769
int64_t function_401764(void) {
    // 0x401764
    abort();
    // UNREACHABLE
}
// Address range: 0x401769 - 0x40176e
int64_t function_401769(void) {
    // 0x401769
    abort();
    // UNREACHABLE
}
// Address range: 0x401770 - 0x401901
int64_t function_401770(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x40177e
    function_402050(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401770
    function_406010(0x401d20, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    int64_t v3; // 0x401770
    uint64_t v4; // 0x401770
    while (true) {
        // 0x4017c2
        v4 = 0;
        int64_t v5 = 2; // 0x401770
        while (true) {
          lab_0x4017c2:
            // 0x4017c2
            v3 = v5;
            int64_t v6; // 0x401770
            int64_t v7 = function_405750(v1, a2, (int64_t *)&g10, &g2, 0, v6); // 0x4017d4
            uint32_t v8 = (int32_t)v7;
            switch (v8) {
                case -1: {
                    goto lab_0x401884;
                }
                case -130: {
                    // 0x4018fa
                    function_4019f0(0);
                    // UNREACHABLE
                }
                default: {
                    if (v8 <= 0xffffff7e) {
                        if (v8 == -131) {
                            // 0x40180b
                            function_4040f0((int64_t)g28, "nproc", "GNU coreutils", (int64_t)g17, "Giuseppe Scrivano", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x4018f0;
                    }
                    // 0x4017ef
                    v5 = 0;
                    if (v8 != 128) {
                        // break -> 0x401840
                        break;
                    }
                    goto lab_0x4017c2;
                }
            }
        }
    }
  lab_0x401884:;
    int32_t v9 = *(int32_t *)0x60925c; // 0x401884
    if (v9 == (int32_t)a1) {
        uint64_t v10 = function_401f00(v3); // 0x401892
        __printf_chk(1, "%lu\n", v10 <= v4 ? 1 : (int32_t)(v10 - v4));
        return 0;
    }
    // 0x4018c2
    function_403c70(*(int64_t *)(8 * (int64_t)v9 + a2));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
  lab_0x4018f0:
    // 0x4018f0
    function_4019f0(1);
    // UNREACHABLE
}
// Address range: 0x401910 - 0x40193b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401910
    int64_t v1; // 0x401910
    __libc_start_main(0x401770, (int32_t)a4, (char **)&v1, (void (*)())0x405fa0, (void (*)())0x406000, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40193b - 0x40195a
int64_t function_40193b(void) {
    // 0x40193b
    return &g27;
}
// Address range: 0x40195a - 0x401991
int64_t function_40195a(void) {
    // 0x40195a
    return 0;
}
// Address range: 0x401991 - 0x4019e8
int64_t function_401991(void) {
    // 0x401991
    if (g31 != 0) {
        // 0x4019e7
        int64_t result; // 0x401991
        return result;
    }
    int64_t v1 = g32; // 0x4019c4
    int64_t result2; // 0x4019d6
    if (g32 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4019d6
        result2 = function_40193b();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4019c6
        v1++;
    }
    // 0x4019ba
    g32 = v1;
    // 0x4019d6
    result2 = function_40193b();
    g31 = 1;
    return result2;
}
// Address range: 0x4019e8 - 0x4019ed
int64_t function_4019e8(void) {
    // 0x4019e8
    return function_40195a();
}
// Address range: 0x4019f0 - 0x401cfd
int64_t function_4019f0(int64_t a1) {
    int32_t status = a1; // 0x401a06
    if (status != 0) {
        // 0x401a0a
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401a2f
        exit(status);
        // UNREACHABLE
    }
    // 0x401a36
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the number of processing units available to the current process,\nwhich may be less than the number of online processors\n\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --all      print the number of installed processors\n      --ignore=N  if possible, exclude N processing units\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    int64_t v1 = &g1; // bp-136, 0x401ae0
    bool v2; // 0x4019f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401b60
    int64_t v6 = *(int64_t *)v5; // 0x401b64
    int64_t v7 = 6; // 0x401b6a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"nproc";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401b76
        char v11 = *(char *)v9; // 0x401b76
        char v12 = v11; // 0x401b76
        bool v13 = false; // 0x401b76
        while (v10 == v11) {
            // 0x401b6c
            v7--;
            int64_t v14 = v9 + v3; // 0x401b76
            int64_t v15 = v8 + v3; // 0x401b76
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
            // break -> 0x401b82
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x401b82
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401c94;
        } else {
            // 0x401c7e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401cd3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401be4;
            } else {
                goto lab_0x401c94;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401be4;
        } else {
            // 0x401bca
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401cd3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401be4;
            } else {
                goto lab_0x401be4;
            }
        }
    }
  lab_0x401c94:
    // 0x401c94
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401c24
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401a2f
    exit(status);
    // UNREACHABLE
  lab_0x401be4:
    // 0x401be4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401c24
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401a2f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401d00 - 0x401d08
int64_t function_401d00(int64_t a1) {
    // 0x401d00
    g34 = a1;
    int64_t result; // 0x401d00
    return result;
}
// Address range: 0x401d10 - 0x401d18
int64_t function_401d10(int64_t a1) {
    // 0x401d10
    g33 = a1;
    int64_t result; // 0x401d10
    return result;
}
// Address range: 0x401d20 - 0x401dbe
int64_t function_401d20(void) {
    // 0x401d20
    int32_t * err_num; // 0x401d36
    if ((int32_t)function_405850((int64_t)g28) == 0) {
        goto lab_0x401d4c;
    } else {
        // 0x401d36
        err_num = __errno_location();
        if (g33 == 0) {
            goto lab_0x401d63;
        } else {
            // 0x401d47
            if (*err_num != 32) {
                goto lab_0x401d63;
            } else {
                goto lab_0x401d4c;
            }
        }
    }
  lab_0x401d4c:;
    int64_t result = function_405850((int64_t)g30); // 0x401d53
    if ((int32_t)result == 0) {
        // 0x401d5c
        return result;
    }
    // 0x401d9e
    _exit(g18);
    // UNREACHABLE
  lab_0x401d63:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401d6f
    if (g34 == 0) {
        // 0x401da9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401d83
        error(0, *err_num, "%s: %s", (char *)function_403ac0((int64_t)g34), v1);
    }
    // 0x401d9e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401dc0 - 0x401e04
int64_t function_401dc0(int64_t a1) {
    // 0x401dc0
    int64_t v1; // bp-136, 0x401dc0
    if (sched_getaffinity(0, 128, (struct _TYPEDEF_cpu_set_t *)&v1) != 0) {
        // 0x401dda
        return 0;
    }
    int32_t result = __sched_cpucount(128, (struct _TYPEDEF_cpu_set_t *)&v1); // 0x401df0
    if (result == 0) {
        // 0x401dda
        return 0;
    }
    // 0x401dfc
    return result;
}
// Address range: 0x401e10 - 0x401efb
int64_t function_401e10(void) {
    // 0x401e10
    int64_t v1; // 0x401e10
    uint64_t v2 = v1;
    unsigned char v3 = (char)v2;
    if (v3 == 0) {
        // 0x401ee7
        return 0;
    }
    int64_t v4 = 0x100000000000000 * v2 / 0x100000000000000; // 0x401e1b
    int64_t v5 = v4; // 0x401e21
    int64_t str; // 0x401e10
    if (v3 < 33) {
        // 0x401e23
        v5 = v4;
        if ((1 << v2 % 64 & 0x100003e00) != 0) {
            int64_t v6; // 0x401e10
            int64_t v7 = v6 + 1; // 0x401e38
            unsigned char v8 = *(char *)v7; // 0x401e3c
            while (v8 != 0) {
                if (v8 >= 33) {
                    // 0x401e60
                    str = v7;
                    v5 = v8;
                    goto lab_0x401e60_3;
                }
                unsigned char v9 = v8 % 64;
                if (v9 == 0 || (1 << (int64_t)v9 & 0x100003e00) == 0) {
                    // 0x401e60
                    str = v7;
                    v5 = v8;
                    goto lab_0x401e60_3;
                }
                v7++;
                v8 = *(char *)v7;
            }
            // 0x401ee7
            return 0;
        }
    }
    goto lab_0x401e60_3;
  lab_0x401e60_3:
    // 0x401e60
    if ((int32_t)v5 >= 58) {
        // 0x401ee7
        return 0;
    }
    char * endptr = NULL; // bp-16, 0x401e77
    int32_t str_as_ul = strtoul((char *)str, &endptr, 10); // 0x401e85
    if (endptr == NULL) {
        // 0x401ee7
        return 0;
    }
    int64_t result = str_as_ul; // 0x401e85
    unsigned char v10 = *endptr; // 0x401e94
    if (v10 == 0) {
        // 0x401ee7
        return result;
    }
    char v11 = v10; // 0x401ea1
    if (v10 >= 33) {
      lab_0x401ee0:
        // 0x401ee0
        if (v11 == 44) {
            // 0x401ee7
            return result;
        }
        // 0x401ee7
        return 0;
    }
    // 0x401ea3
    if ((1 << (int64_t)(v10 % 64) & 0x100003e00) == 0) {
        // 0x401ee7
        return 0;
    }
    int64_t v12 = (int64_t)endptr + 1;
    char * v13 = (char *)v12; // 0x401ebd
    endptr = v13;
    unsigned char v14 = *v13; // 0x401ec2
    while (v14 != 0) {
        // 0x401ec9
        v11 = v14;
        if (v14 >= 33) {
            goto lab_0x401ee0;
        }
        unsigned char v15 = v14 % 64;
        if (v15 == 0 || (1 << (int64_t)v15 & 0x100003e00) == 0) {
            // 0x401ee7
            return 0;
        }
        v12++;
        v13 = (char *)v12;
        endptr = v13;
        v14 = *v13;
    }
    // 0x401ee7
    return result;
}
// Address range: 0x401f00 - 0x402047
int64_t function_401f00(int64_t a1) {
    int64_t v1 = a1; // 0x401f00
    int64_t v2; // 0x401f00
    int64_t v3; // 0x401f00
    switch ((int32_t)a1) {
        case 2: {
            // 0x401f40
            if (getenv("OMP_NUM_THREADS") == NULL) {
                char * env_val = getenv("OMP_THREAD_LIMIT"); // 0x40201d
                v1 = (int64_t)"OMP_THREAD_LIMIT";
                if (env_val == NULL) {
                    goto lab_0x40203b;
                } else {
                    int64_t v4 = (int64_t)env_val; // 0x40201d
                    int64_t v5 = function_401e10(); // 0x40202a
                    v2 = v5;
                    v3 = v4;
                    v1 = v4;
                    if (v5 != 0) {
                        goto lab_0x401f92;
                    } else {
                        goto lab_0x40203b;
                    }
                }
            } else {
                uint64_t v6 = function_401e10(); // 0x401f5d
                char * env_val2 = getenv("OMP_THREAD_LIMIT"); // 0x401f6a
                int64_t v7 = -1; // 0x401f72
                int64_t v8 = (int64_t)"OMP_THREAD_LIMIT"; // 0x401f72
                if (env_val2 != NULL) {
                    int64_t v9 = function_401e10(); // 0x401f77
                    v7 = v9 == 0 ? -1 : v9;
                    v8 = (int64_t)env_val2;
                }
                int64_t v10 = v7;
                v2 = v10;
                v3 = v8;
                if (v6 != 0) {
                    // 0x402000
                    return v10 > v6 ? v6 : v10;
                }
                goto lab_0x401f92;
            }
        }
        case 1: {
            goto lab_0x40203b;
        }
        default: {
            int32_t v11 = sysconf(_SC_THREAD_PROCESS_SHARED); // 0x401f19
            int64_t v12 = v11; // 0x401f22
            if (v11 == 1) {
                // 0x401fe0
                v12 = function_401dc0(83);
                if (v12 == 0) {
                    // 0x401f34
                    return 1;
                }
            }
            int64_t v13 = v12;
            // 0x401f34
            return v13 > 1 ? v13 : 1;
        }
    }
  lab_0x40203b:
    // 0x40203b
    v2 = -1;
    v3 = v1;
    goto lab_0x401f92;
  lab_0x401f92:;
    uint64_t v14 = v2;
    uint64_t v15 = function_401dc0(v3); // 0x401f92
    if (v15 != 0) {
        // 0x401f9c
        return v15 > v14 ? v14 : v15;
    }
    int32_t v16 = sysconf(_SC_NPROCESSORS_CONF); // 0x401fb5
    int64_t result = 1; // 0x401fc5
    if (v16 >= 1) {
        uint64_t v17 = (int64_t)v16; // 0x401fb5
        result = v14 < v17 ? v14 : v17;
    }
    // 0x401f34
    return result;
}
// Address range: 0x402050 - 0x4020e9
int64_t function_402050(int64_t str) {
    // 0x402050
    if (str == 0) {
        // 0x4020c9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40205e
    int64_t result = (int64_t)found_char_pos; // 0x40205e
    if (found_char_pos == NULL) {
        // 0x4020b9
        g35 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402068
    if (v1 - str < 7) {
        // 0x4020b9
        g35 = str;
        g29 = str;
        return result;
    }
    // 0x402078
    bool v2; // 0x402050
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402050
    int64_t v5 = result - 6; // 0x402050
    int64_t v6 = 7; // 0x402086
    unsigned char v7 = *(char *)v5; // 0x402086
    char v8 = *(char *)v4; // 0x402086
    char v9 = v8; // 0x402086
    bool v10 = false; // 0x402086
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
    int64_t v12 = (int64_t)"lt-"; // 0x402090
    int64_t v13 = v1; // 0x402090
    int64_t v14 = 3; // 0x402090
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4020b9
        g35 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4020a2
    char v16 = *(char *)v12; // 0x4020a2
    char v17 = v16; // 0x4020a2
    bool v18 = false; // 0x4020a2
    while (v15 == v16) {
        // 0x402092
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
    int64_t v20 = v1; // 0x4020ac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4020ae
        v20 = result + 4;
        g27 = v20;
    }
    // 0x4020b9
    g35 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x4020f0 - 0x4021e2
int64_t function_4020f0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402104
    int64_t result = (int64_t)v1; // 0x402104
    if (result != a1) {
        // 0x402111
        return result;
    }
    int64_t v2 = function_405910(); // 0x402120
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4021d6
    if (v3 == 85) {
        // 0x402130
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4021c8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40215e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40216b
        // 0x402111
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4021c8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4021ad
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4021ba
    // 0x402111
    return result4;
}
// Address range: 0x4021f0 - 0x402247
int64_t function_4021f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4021f0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402238
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402247 - 0x403411
int64_t function_402247(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402291
    int64_t v3 = 0; // 0x402291
    int64_t v4; // 0x402247
    int64_t v5; // 0x402247
    int64_t v6; // 0x402247
    int64_t v7; // 0x402247
    int64_t v8; // 0x402247
    int64_t v9; // 0x402247
    int64_t v10; // 0x402247
    int64_t v11; // 0x402247
    int64_t v12; // 0x402247
    int64_t v13; // 0x402247
    int64_t v14; // 0x402247
    int64_t v15; // 0x402247
    int64_t v16; // 0x402247
    int64_t v17; // 0x402247
    int64_t v18; // 0x402247
    int64_t result; // 0x402247
    int64_t v19; // 0x402247
    int32_t wc; // bp+132, 0x402247
    int64_t ps; // bp+136, 0x402247
    char v20; // 0x402800
    int64_t v21; // 0x402800
    int64_t v22; // 0x402ba8
    int64_t v23; // 0x402247
    int64_t v24; // 0x402bc7
    int32_t v25; // 0x402247
    while (true) {
      lab_0x402298_2:
        // 0x402298
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402247
        int64_t v27; // 0x4022cc
        while (true) {
          lab_0x402298:
            // 0x402298
            v5 = v26;
            bool v28 = v15 == v5; // 0x4022a3
            if (v15 == -1) {
                // 0x4022a5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4022b3
            if (v28) {
                // break (via goto) -> 0x402a18
                goto lab_0x402a18;
            }
            // 0x4022bc
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
                    // 0x4028ab
                    if (v25 % 2 == 0) {
                        goto lab_0x4023f1;
                    }
                    // 0x402ccd
                    v26 = v5 + 1;
                    goto lab_0x402298;
                }
                case 7: {
                    goto lab_0x4023f1;
                }
                case 8: {
                    goto lab_0x4023f1;
                }
                case 9: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4023f1;
                }
                case 12: {
                    goto lab_0x4023f1;
                }
                case 13: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4023bd;
                }
                case 36: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4023f1;
                }
                case 38: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4023f1;
                }
                case 44: {
                    goto lab_0x4023f1;
                }
                case 45: {
                    goto lab_0x4023f1;
                }
                case 46: {
                    goto lab_0x4023f1;
                }
                case 47: {
                    goto lab_0x4023f1;
                }
                case 48: {
                    goto lab_0x4023f1;
                }
                case 49: {
                    goto lab_0x4023f1;
                }
                case 50: {
                    goto lab_0x4023f1;
                }
                case 51: {
                    goto lab_0x4023f1;
                }
                case 52: {
                    goto lab_0x4023f1;
                }
                case 53: {
                    goto lab_0x4023f1;
                }
                case 54: {
                    goto lab_0x4023f1;
                }
                case 55: {
                    goto lab_0x4023f1;
                }
                case 56: {
                    goto lab_0x4023f1;
                }
                case 57: {
                    goto lab_0x4023f1;
                }
                case 58: {
                    goto lab_0x4023f1;
                }
                case 59: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4023f1;
                }
                case 66: {
                    goto lab_0x4023f1;
                }
                case 67: {
                    goto lab_0x4023f1;
                }
                case 68: {
                    goto lab_0x4023f1;
                }
                case 69: {
                    goto lab_0x4023f1;
                }
                case 70: {
                    goto lab_0x4023f1;
                }
                case 71: {
                    goto lab_0x4023f1;
                }
                case 72: {
                    goto lab_0x4023f1;
                }
                case 73: {
                    goto lab_0x4023f1;
                }
                case 74: {
                    goto lab_0x4023f1;
                }
                case 75: {
                    goto lab_0x4023f1;
                }
                case 76: {
                    goto lab_0x4023f1;
                }
                case 77: {
                    goto lab_0x4023f1;
                }
                case 78: {
                    goto lab_0x4023f1;
                }
                case 79: {
                    goto lab_0x4023f1;
                }
                case 80: {
                    goto lab_0x4023f1;
                }
                case 81: {
                    goto lab_0x4023f1;
                }
                case 82: {
                    goto lab_0x4023f1;
                }
                case 83: {
                    goto lab_0x4023f1;
                }
                case 84: {
                    goto lab_0x4023f1;
                }
                case 85: {
                    goto lab_0x4023f1;
                }
                case 86: {
                    goto lab_0x4023f1;
                }
                case 87: {
                    goto lab_0x4023f1;
                }
                case 88: {
                    goto lab_0x4023f1;
                }
                case 89: {
                    goto lab_0x4023f1;
                }
                case 90: {
                    goto lab_0x4023f1;
                }
                case 91: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4023f1;
                }
                case 94: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4023f1;
                }
                case 96: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4023f1;
                }
                case 98: {
                    goto lab_0x4023f1;
                }
                case 99: {
                    goto lab_0x4023f1;
                }
                case 100: {
                    goto lab_0x4023f1;
                }
                case 101: {
                    goto lab_0x4023f1;
                }
                case 102: {
                    goto lab_0x4023f1;
                }
                case 103: {
                    goto lab_0x4023f1;
                }
                case 104: {
                    goto lab_0x4023f1;
                }
                case 105: {
                    goto lab_0x4023f1;
                }
                case 106: {
                    goto lab_0x4023f1;
                }
                case 107: {
                    goto lab_0x4023f1;
                }
                case 108: {
                    goto lab_0x4023f1;
                }
                case 109: {
                    goto lab_0x4023f1;
                }
                case 110: {
                    goto lab_0x4023f1;
                }
                case 111: {
                    goto lab_0x4023f1;
                }
                case 112: {
                    goto lab_0x4023f1;
                }
                case 113: {
                    goto lab_0x4023f1;
                }
                case 114: {
                    goto lab_0x4023f1;
                }
                case 115: {
                    goto lab_0x4023f1;
                }
                case 116: {
                    goto lab_0x4023f1;
                }
                case 117: {
                    goto lab_0x4023f1;
                }
                case 118: {
                    goto lab_0x4023f1;
                }
                case 119: {
                    goto lab_0x4023f1;
                }
                case 120: {
                    goto lab_0x4023f1;
                }
                case 121: {
                    goto lab_0x4023f1;
                }
                case 122: {
                    goto lab_0x4023f1;
                }
                case 123: {
                    goto lab_0x402395;
                }
                case 124: {
                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402395;
                }
                case 126: {
                    goto lab_0x4023bd;
                }
                default: {
                    goto lab_0x402795;
                }
            }
        }
      lab_0x402795:
        if (v23 != 1) {
            // 0x402b00
            ps = 0;
            int64_t len = v15; // 0x402b10
            if (v15 == -1) {
                // 0x402b12
                len = strlen((char *)str);
            }
            // 0x402b3e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402b9f:
                // 0x402b9f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402ba4
                int64_t v30 = v29 + str;
                v24 = function_4057d0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40311a_2;
                    }
                    case -1: {
                        goto lab_0x40311a_2;
                    }
                    case -2: {
                        // 0x4031fd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403237
                            v19 = v18;
                            int64_t v31 = v18; // 0x40323a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403247
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403240
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40311a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40311a_2;
                    }
                    case 1: {
                        goto lab_0x402b70;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402c1c
                        char v34 = *(char *)v33; // 0x402c2d
                        unsigned char v35; // 0x402247
                        if (v34 < 125) {
                            // 0x402c38
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402c4f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402c20
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402c2d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402c38
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402c4f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402c20
                            v33++;
                        }
                        goto lab_0x402b70;
                    }
                }
            }
            goto lab_0x40311a_2;
        } else {
            // 0x4027e4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4023f1;
        }
    }
  lab_0x402a18:
    // 0x402a18
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40331a
        if (v8 > result) {
            // 0x403323
            *(char *)(v12 + result) = 0;
        }
        // 0x402647
        return result;
    }
    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4023f1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402400
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40260a_2;
        }
    }
    int64_t v39 = result; // 0x402501
    char v40 = v20; // 0x402501
    int64_t v41 = v38; // 0x402501
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402501
    int64_t v43 = v36; // 0x402501
    goto lab_0x40247d;
  lab_0x40260a_2:
    // 0x402647
    return function_4021f0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40311a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4023f1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402cee
        int64_t v50 = v5 + 1; // 0x402dd1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402dd8
        char v52 = v20; // 0x402dd8
        int64_t v53 = result; // 0x402dd8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402da1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402da5
            int64_t v56 = v54 + 1; // 0x402daa
            int64_t v57 = v51 + 1; // 0x402dd1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402d9c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402da1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402da5
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
        goto lab_0x40247d;
    }
  lab_0x402b70:
    // 0x402b70
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402b8f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402b92
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40311a
        goto lab_0x40311a_2;
    }
    goto lab_0x402b9f;
  lab_0x4023bd:
    // 0x4023bd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40260a_2;
    }
    goto lab_0x4023f1;
  lab_0x402395:;
    bool v60 = v15 == 1; // 0x4023a0
    if (v15 == -1) {
        // 0x4023a2
        v60 = *(char *)v1 == 0;
    }
    // 0x4023ae
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4023f1;
    } else {
        goto lab_0x4023bd;
    }
  lab_0x40247d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402482
        *(char *)(v44 + v45) = v40;
    }
    // 0x402486
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402298_2;
}
// Address range: 0x403420 - 0x4035be
int64_t function_403420(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403422
    int32_t * v3 = __errno_location(); // 0x40343c
    int64_t v4 = (int64_t)g20; // 0x403441
    int32_t v5 = *v3; // 0x40344b
    int64_t v6 = v4; // 0x403461
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4035b9
            function_404480(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403470
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403477
        int64_t v9; // 0x403420
        if (g20 == &g21) {
            int64_t v10 = function_404290(0, v8); // 0x40359a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40359f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404290(v4, v8); // 0x40348b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40349a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40349a
        int32_t v14 = v7; // 0x4034a1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4034d1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4034db
    int64_t * v17 = (int64_t *)v15; // 0x4034de
    uint64_t v18 = *v17; // 0x4034de
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4034e1
    int64_t result = *v19; // 0x4034e1
    int64_t v20; // 0x403420
    uint64_t v21 = function_4021f0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403504
    if (v18 > v21) {
        // 0x40357b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403517
    *v17 = v22;
    if (result != (int64_t)&g36) {
        // 0x403527
        free((int64_t *)result);
    }
    int64_t result2 = function_404230(v22); // 0x403541
    *v19 = result2;
    int64_t v23; // 0x403420
    function_4021f0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40357b
    *v3 = v5;
    return result2;
}
// Address range: 0x4035c0 - 0x4035f4
int64_t function_4035c0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4035c7
    int64_t result = function_404430(a1 == 0 ? (int64_t)&g37 : a1, 56); // 0x4035e6
    return result;
}
// Address range: 0x403600 - 0x40360f
int64_t function_403600(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g37 : a1); // 0x40360c
    return result;
}
// Address range: 0x403610 - 0x40361f
int64_t function_403610(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403618
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g37;
}
// Address range: 0x403620 - 0x403653
int64_t function_403620(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 + 8 : a1 + 8; // 0x403639
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40363e
    uint32_t v3 = *v2; // 0x40363e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403642
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403660 - 0x403673
int64_t function_403660(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g37 + 4 : a1 + 4); // 0x40366c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403680 - 0x4036ab
int64_t function_403680(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403688
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4036a5
        abort();
        // UNREACHABLE
    }
    // 0x40369c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g37;
}
// Address range: 0x4036b0 - 0x403722
int64_t function_4036b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g37 : a5; // 0x4036d2
    int32_t * v2 = __errno_location(); // 0x4036db
    uint32_t v3 = *(int32_t *)v1; // 0x4036fb
    int64_t result = function_4021f0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40370a
    return result;
}
// Address range: 0x403730 - 0x403811
int64_t function_403730(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g37 : a4; // 0x403752
    int32_t * v2 = __errno_location(); // 0x403758
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403777
    int32_t * v4 = (int32_t *)v1; // 0x40377a
    int64_t v5 = function_4021f0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403795
    int64_t v6 = v5 + 1; // 0x40379a
    int64_t result = function_404230(v6); // 0x4037af
    function_4021f0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4037f4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4037fd
    return result;
}
// Address range: 0x403820 - 0x40382a
int64_t function_403820(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403820
    return function_403730(a1, a2, 0, a3);
}
// Address range: 0x403830 - 0x4038c5
int64_t function_403830(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403830
    int64_t v2 = v1; // 0x403830
    int64_t v3 = v2; // 0x403844
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403863
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403860
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40387d
    if (g21 != 0x6092c0) {
        // 0x40387f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g36;
        v6 = &g49;
    }
    int64_t result = v6; // 0x4038a1
    if (g20 != &g21) {
        // 0x4038a3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g49;
    }
    // 0x4038b6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4038d0 - 0x4038e1
int64_t function_4038d0(void) {
    // 0x4038d0
    int64_t v1; // 0x4038d0
    return function_403420(v1, v1, -1, (int64_t *)&g37);
}
// Address range: 0x4038f0 - 0x4038fa
int64_t function_4038f0(void) {
    // 0x4038f0
    int64_t v1; // 0x4038f0
    return function_403420(v1, v1, v1, (int64_t *)&g37);
}
// Address range: 0x403900 - 0x403916
int64_t function_403900(int64_t a1) {
    // 0x403900
    return function_403420(0, a1, -1, (int64_t *)&g37);
}
// Address range: 0x403920 - 0x403932
int64_t function_403920(int64_t a1, int64_t a2) {
    // 0x403920
    return function_403420(0, a1, a2, (int64_t *)&g37);
}
// Address range: 0x403940 - 0x4039a8
int64_t function_403940(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403950
    return function_403420((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4039b0 - 0x403a14
int64_t function_4039b0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4039c0
    return function_403420((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403a20 - 0x403a2c
int64_t function_403a20(int64_t a1, int64_t a2) {
    // 0x403a20
    return function_403940(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403a30 - 0x403a3f
int64_t function_403a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a30
    return function_4039b0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403a40 - 0x403ab0
int64_t function_403a40(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x403a4d
    int128_t v2 = __asm_movdqa(g38); // 0x403a55
    int128_t v3 = __asm_movdqa(g39); // 0x403a5d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403a72
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403a88
    uint32_t v6 = *v5; // 0x403a88
    uint32_t v7 = (int32_t)a3 % 32; // 0x403a8d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403420(0, a1, a2, &v4);
}
// Address range: 0x403ab0 - 0x403abd
int64_t function_403ab0(int64_t a1, int64_t a2) {
    // 0x403ab0
    return function_403a40(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403ac0 - 0x403ad1
int64_t function_403ac0(int64_t a1) {
    // 0x403ac0
    return function_403a40(a1, -1, 58);
}
// Address range: 0x403ae0 - 0x403aea
int64_t function_403ae0(void) {
    // 0x403ae0
    int64_t v1; // 0x403ae0
    return function_403a40(v1, v1, 58);
}
// Address range: 0x403af0 - 0x403b5e
int64_t function_403af0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403b0a
    return function_403420(a1, a3, -1, &v1);
}
// Address range: 0x403b60 - 0x403bcc
int64_t function_403b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x403b67
    int128_t v2 = __asm_movdqa(g38); // 0x403b6f
    int128_t v3 = __asm_movdqa(g39); // 0x403b77
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403b99
    if (a2 == 0 || a3 == 0) {
        // 0x403bc7
        abort();
        // UNREACHABLE
    }
    // 0x403baa
    return function_403420(a1, a4, a5, &v4);
}
// Address range: 0x403bd0 - 0x403bd9
int64_t function_403bd0(void) {
    // 0x403bd0
    int64_t v1; // 0x403bd0
    return function_403b60(v1, v1, v1, v1, -1);
}
// Address range: 0x403be0 - 0x403bf7
int64_t function_403be0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403be0
    return function_403b60(0, a1, a2, a3, -1);
}
// Address range: 0x403c00 - 0x403c13
int64_t function_403c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403c00
    return function_403b60(0, a1, a2, a3, a4);
}
// Address range: 0x403c20 - 0x403c2a
int64_t function_403c20(void) {
    // 0x403c20
    int64_t v1; // 0x403c20
    return function_403420(v1, v1, v1, &g19);
}
// Address range: 0x403c30 - 0x403c42
int64_t function_403c30(int64_t a1, int64_t a2) {
    // 0x403c30
    return function_403420(0, a1, a2, &g19);
}
// Address range: 0x403c50 - 0x403c61
int64_t function_403c50(void) {
    // 0x403c50
    int64_t v1; // 0x403c50
    return function_403420(v1, v1, -1, &g19);
}
// Address range: 0x403c70 - 0x403c86
int64_t function_403c70(int64_t a1) {
    // 0x403c70
    return function_403420(0, a1, -1, &g19);
}
// Address range: 0x403c90 - 0x40406d
int64_t function_403c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403d28
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403cac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403cc6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403d0b
    if (a6 < 10) {
        // 0x403d1a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403e12
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404070 - 0x404090
int64_t function_404070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404070
    if (a5 == 0) {
        // 0x40408b
        return function_403c90(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x404077
    v1++;
    int64_t v2 = v1; // 0x404089
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404080
        v1++;
        v2 = v1;
    }
    // 0x40408b
    return function_403c90(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x404090 - 0x4040f0
int64_t function_404090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404090
    int64_t v3 = &v2; // 0x404090
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4040c3
    int64_t v6; // 0x4040ad
    int64_t * v7; // 0x4040cb
    int64_t v8; // 0x4040cb
    int64_t v9; // 0x4040d7
    if (v5 < 48) {
        // 0x4040a0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4040e3
            break;
        }
    } else {
        // 0x4040cb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4040e3
            break;
        }
    }
    int64_t v10 = 10; // 0x4040c1
    while (v4 != 9) {
        // 0x4040b9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4040a0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4040e3
                break;
            }
        } else {
            // 0x4040cb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4040e3
                break;
            }
        }
        // 0x4040b9
        v10 = 10;
    }
    // 0x4040e3
    return function_403c90(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x4040f0 - 0x4041ac
int64_t function_4040f0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4040f0
    int64_t v1; // bp-168, 0x4040f0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4040f0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4040f0
    int64_t v8; // 0x4040f0
    int64_t v9; // bp-56, 0x4040f0
    int64_t v10; // 0x404155
    int64_t v11; // 0x404179
    if ((int32_t)v6 < 48) {
        // 0x404140
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404190
            break;
        }
    } else {
        // 0x404172
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404190
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40416a
    int64_t v13 = 10; // 0x40416a
    while (v5 != 9) {
        // 0x40416c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404140
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404190
                break;
            }
        } else {
            // 0x404172
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404190
                break;
            }
        }
        // 0x404162
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404190
    int64_t v14; // bp-136, 0x4040f0
    int64_t result = function_403c90(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x40419f
    return result;
}
// Address range: 0x4041b0 - 0x404224
int64_t function_4041b0(int64_t a1) {
    // 0x4041b0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404213
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404230 - 0x40424a
int64_t function_404230(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404234
    if (size != 0 != (mem == NULL)) {
        // 0x404243
        return (int64_t)mem;
    }
    // 0x404245
    function_404480(size);
    // UNREACHABLE
}
// Address range: 0x404250 - 0x404271
int64_t function_404250(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404253
    int64_t v2 = v1; // 0x404253
    if (v2 < 0) {
        // 0x40426b
        function_404480(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404269
        return function_404230(v2);
    }
    // 0x40426b
    function_404480(v2);
    // UNREACHABLE
}
// Address range: 0x404280 - 0x404282
int64_t function_404280(void) {
    // 0x404280
    int64_t v1; // 0x404280
    return function_404230(v1);
}
// Address range: 0x404290 - 0x4042c6
int64_t function_404290(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4042b8
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4042a1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4042b0
        return (int64_t)mem;
    }
    // 0x4042c1
    function_404480(a1);
    // UNREACHABLE
}
// Address range: 0x4042d0 - 0x4042f1
int64_t function_4042d0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4042d3
    int64_t v2 = v1; // 0x4042d3
    if (v2 < 0) {
        // 0x4042eb
        function_404480(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4042e9
        return function_404290(a1, v2);
    }
    // 0x4042eb
    function_404480(a1);
    // UNREACHABLE
}
// Address range: 0x404300 - 0x404386
int64_t function_404300(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40435b
            function_404480(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404290(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404343
    if (a2 == 0) {
        // 0x404368
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404348
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40435b
        function_404480(a1);
        // UNREACHABLE
    }
    // 0x40432a
    *(int64_t *)a2 = v2;
    return function_404290(a1, v2 * a3);
}
// Address range: 0x404390 - 0x4043e0
int64_t function_404390(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404390
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4043da
            function_404480(a1);
            // UNREACHABLE
        }
        // 0x4043b2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404290(a1, v1);
    }
    if (a2 == 0) {
        // 0x4043c5
        *(int64_t *)a2 = 128;
        return function_404290(0, 128);
    }
    // 0x4043d8
    if (a2 < 0) {
        // 0x4043da
        function_404480(a1);
        // UNREACHABLE
    }
    // 0x4043b2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404290(a1, v1);
}
// Address range: 0x4043e0 - 0x4043f7
int64_t function_4043e0(int64_t a1, int64_t a2) {
    // 0x4043e0
    return (int64_t)memset((int64_t *)function_404230(a1), 0, (int32_t)a1);
}
// Address range: 0x404400 - 0x40442e
int64_t function_404400(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404407
    if ((int64_t)v1 < 0) {
        // 0x404429
        function_404480(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404429
        function_404480(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40441a
    if (mem != NULL) {
        // 0x404424
        return (int64_t)mem;
    }
    // 0x404429
    function_404480(nmemb);
    // UNREACHABLE
}
// Address range: 0x404430 - 0x404458
int64_t function_404430(int64_t a1, int64_t a2) {
    int64_t v1 = function_404230(a2); // 0x40443f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404460 - 0x404473
int64_t function_404460(int64_t str) {
    // 0x404460
    return function_404430(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404480 - 0x4044b1
int64_t function_404480(int64_t a1) {
    // 0x404480
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4044c0 - 0x404590
int64_t function_4044c0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x4044c0
    int64_t result2; // bp-64, 0x4044c0
    int32_t v1 = function_4045c0(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x4044ec
    int32_t * v2; // 0x4044c0
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x40456a
        if (v1 == 1) {
            // 0x404588
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x404577
            v2 = v3;
            if (v1 == 3) {
                // 0x40457c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x4044f0
        if (result >= a3 && result <= a4) {
            // 0x404552
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x4044ff
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_403c70(a1); // 0x40451c
    int32_t v6 = *v2; // 0x404521
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x404537
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x404552
    return result2;
}
// Address range: 0x404590 - 0x4045b1
int64_t function_404590(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x404590
    int64_t result; // 0x404590
    return result;
}
// Address range: 0x4045c0 - 0x404adf
int64_t function_4045c0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x4045ce
    if (v1 >= 37) {
        // 0x404a7c
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x4045f2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x404622
    int64_t v4 = a1; // 0x404627
    char v5 = c; // 0x404627
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x40461c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x404618
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x404629
    if (v5 == 45) {
        // 0x404665
        return 4;
    }
    // 0x40462e
    int64_t v7; // bp-64, 0x4045c0
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x4045ee
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x404636
    int64_t * v10 = (int64_t *)v8; // 0x40463b
    int64_t v11 = *v10; // 0x40463b
    char v12; // 0x4045c0
    int64_t v13; // 0x4045c0
    int64_t v14; // 0x4045c0
    int64_t v15; // 0x4045c0
    int64_t v16; // 0x4045c0
    int64_t v17; // 0x4045c0
    int64_t v18; // 0x4045c0
    if (v11 == a1) {
        // 0x404698
        if (c == 0 || str == 0) {
            // 0x404665
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x4046b9
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x404665
            return 4;
        }
        goto lab_0x4046c7;
    } else {
        int32_t v19 = *v2; // 0x404646
        int64_t v20 = 0; // 0x40464c
        if (v19 != 0) {
            // 0x404680
            v20 = 1;
            if (v19 != 34) {
                // 0x404665
                return 4;
            }
        }
        int64_t v21 = v9; // 0x404636
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x404662;
        } else {
            char c2 = *(char *)v11; // 0x404655
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x4047c3
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4046c7;
                } else {
                    goto lab_0x4047d5;
                }
            } else {
                goto lab_0x404662;
            }
        }
    }
  lab_0x4046c7:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x4046cf
    int64_t v24 = 1; // 0x4046cf
    int64_t v25; // 0x4045c0
    int64_t v26; // 0x4045c0
    int64_t v27; // 0x4045c0
    int64_t v28; // 0x4045c0
    int64_t v29; // 0x4045c0
    int64_t v30; // 0x4045c0
    int64_t v31; // 0x4045c0
    int64_t v32; // 0x4045c0
    int64_t v33; // 0x4045c0
    int64_t v34; // 0x4045c0
    int64_t v35; // 0x4045c0
    int64_t v36; // 0x4045c0
    int64_t v37; // 0x4045c0
    int64_t v38; // 0x4045c0
    int64_t v39; // 0x4045c0
    int64_t v40; // 0x4045c0
    int64_t v41; // 0x4045c0
    int64_t v42; // 0x4045c0
    int64_t v43; // 0x4045c0
    int64_t v44; // 0x4045c0
    if (v22 < 48) {
        // 0x4046d1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40473a;
        } else {
            // 0x4046e4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x40473a;
            } else {
                // 0x404700
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x40473a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x404969
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x40473a;
                    }
                    default: {
                        // 0x404715
                        g46 = v22;
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
                                goto lab_0x4048db;
                            }
                            case 70: {
                                goto lab_0x4047d5;
                            }
                            case 71: {
                                goto lab_0x404913;
                            }
                            case 72: {
                                goto lab_0x4047d5;
                            }
                            case 73: {
                                goto lab_0x4047d5;
                            }
                            case 74: {
                                goto lab_0x4047d5;
                            }
                            case 75: {
                                goto lab_0x40479c;
                            }
                            case 76: {
                                goto lab_0x4047d5;
                            }
                            case 77: {
                                goto lab_0x40475e;
                            }
                            case 78: {
                                goto lab_0x4047d5;
                            }
                            case 79: {
                                goto lab_0x4047d5;
                            }
                            case 80: {
                                goto lab_0x4048a8;
                            }
                            case 81: {
                                goto lab_0x4047d5;
                            }
                            case 82: {
                                goto lab_0x4047d5;
                            }
                            case 83: {
                                goto lab_0x4047d5;
                            }
                            case 84: {
                                goto lab_0x404878;
                            }
                            case 85: {
                                goto lab_0x4047d5;
                            }
                            case 86: {
                                goto lab_0x4047d5;
                            }
                            case 87: {
                                goto lab_0x4047d5;
                            }
                            case 88: {
                                goto lab_0x4047d5;
                            }
                            case 89: {
                                goto lab_0x404846;
                            }
                            case 90: {
                                goto lab_0x40480b;
                            }
                            case 91: {
                                goto lab_0x4047d5;
                            }
                            case 92: {
                                goto lab_0x4047d5;
                            }
                            case 93: {
                                goto lab_0x4047d5;
                            }
                            case 94: {
                                goto lab_0x4047d5;
                            }
                            case 95: {
                                goto lab_0x4047d5;
                            }
                            case 96: {
                                goto lab_0x4047d5;
                            }
                            case 97: {
                                goto lab_0x4047d5;
                            }
                            case 98: {
                                goto lab_0x4047ef;
                            }
                            case 99: {
                                goto lab_0x404778;
                            }
                            case 100: {
                                goto lab_0x4047d5;
                            }
                            case 101: {
                                goto lab_0x4047d5;
                            }
                            case 102: {
                                goto lab_0x4047d5;
                            }
                            case 103: {
                                goto lab_0x404913;
                            }
                            case 104: {
                                goto lab_0x4047d5;
                            }
                            case 105: {
                                goto lab_0x4047d5;
                            }
                            case 106: {
                                goto lab_0x4047d5;
                            }
                            case 107: {
                                goto lab_0x40479c;
                            }
                            case 108: {
                                goto lab_0x4047d5;
                            }
                            case 109: {
                                goto lab_0x40475e;
                            }
                            case 110: {
                                goto lab_0x4047d5;
                            }
                            case 111: {
                                goto lab_0x4047d5;
                            }
                            case 112: {
                                goto lab_0x4047d5;
                            }
                            case 113: {
                                goto lab_0x4047d5;
                            }
                            case 114: {
                                goto lab_0x4047d5;
                            }
                            case 115: {
                                goto lab_0x4047d5;
                            }
                            case 116: {
                                goto lab_0x404878;
                            }
                            default: {
                                goto lab_0x40473a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40473a;
    }
  lab_0x404662:
    // 0x404662
    *a4 = v16;
    // 0x404665
    return v13 & 0xffffffff;
  lab_0x40473a:
    // 0x40473a
    g47 = v12 - 66;
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
    int64_t v46; // 0x4045c0
    switch (v12) {
        case 66: {
            // 0x404934
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x4047a7;
            } else {
                // 0x404941
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x404778;
            }
        }
        case 69: {
            goto lab_0x4048db;
        }
        case 71: {
            goto lab_0x404913;
        }
        case 75: {
            goto lab_0x40479c;
        }
        case 77: {
            goto lab_0x40475e;
        }
        case 80: {
            goto lab_0x4048a8;
        }
        case 84: {
            goto lab_0x404878;
        }
        case 89: {
            goto lab_0x404846;
        }
        case 90: {
            goto lab_0x40480b;
        }
        case 98: {
            goto lab_0x4047ef;
        }
        case 99: {
            goto lab_0x404778;
        }
        case 103: {
            goto lab_0x404913;
        }
        case 107: {
            goto lab_0x40479c;
        }
        case 109: {
            goto lab_0x40475e;
        }
        case 116: {
            goto lab_0x404878;
        }
        case 119: {
            // 0x4047e0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x4047a7;
            } else {
                // 0x4047e5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x404778;
            }
        }
        default: {
            goto lab_0x4047d5;
        }
    }
  lab_0x4048db:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x4048f3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x4048ff
    int64_t v51 = v48; // 0x404902
    int64_t v52 = v37; // 0x404902
    int64_t v53 = v49; // 0x404902
    int32_t v54 = v50; // 0x404902
    int64_t v55 = v49; // 0x404902
    while (v50 != 0) {
        // 0x4048f0
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
    goto lab_0x404834;
  lab_0x404913:
    // 0x404913
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x40491e
        int128_t v56; // 0x404919
        uint128_t v57; // 0x404919
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x40491e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x4045c0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x404923
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x404928
                v26 = v60;
                int64_t v61; // 0x4045c0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x404778;
  lab_0x40479c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40479f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x404778;
    } else {
        goto lab_0x4047a7;
    }
  lab_0x40475e:;
    int128_t v65 = v27; // 0x404764
    uint128_t v66 = v65 * (int128_t)v17; // 0x404764
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x4047a7;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x404769
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x4047a7;
        } else {
            // 0x40476e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x404778;
        }
    }
  lab_0x4048a8:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x4048bb
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x4048c7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x4048ca
    int64_t v73 = v70; // 0x4048ca
    while (v71 != 0) {
        // 0x4048b8
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
    goto lab_0x404834;
  lab_0x404878:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40488b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x404897
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40489a
    int64_t v79 = v76; // 0x40489a
    while (v77 != 0) {
        // 0x404888
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
    goto lab_0x404834;
  lab_0x404846:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x40485b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x404867
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x40486a
    int64_t v85 = v82; // 0x40486a
    while (v83 != 0) {
        // 0x404858
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
    goto lab_0x404834;
  lab_0x40480b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x404823
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x40482f
    int32_t v90 = v89; // 0x404832
    int64_t v91 = v88; // 0x404832
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x404820
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
    goto lab_0x404834;
  lab_0x4047ef:
    // 0x4047ef
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x4047a7;
    } else {
        // 0x4047f8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x404778;
    }
  lab_0x404778:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40477d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x404662;
  lab_0x4047d5:
    // 0x4047d5
    *a4 = v18;
    // 0x404665
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4047a7:
    // 0x4047a7
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x404778;
  lab_0x404834:
    // 0x404834
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x404778;
}
// Address range: 0x404ae0 - 0x4050fc
int64_t function_404ae0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404aff
    int64_t v2 = *v1; // 0x404aff
    char * str2 = (char *)v2; // 0x404b0c
    char c = *str2; // 0x404b0c
    int64_t v3 = v2; // 0x404b38
    int64_t v4 = 0; // 0x404ae0
    int32_t v5; // 0x404ae0
    int64_t v6; // 0x404ae0
    int64_t v7; // 0x404ae0
    int64_t v8; // 0x404ae0
    int64_t v9; // 0x404ae0
    int64_t v10; // 0x404ae0
    int64_t v11; // 0x404ae0
    int64_t v12; // 0x404ae0
    int64_t v13; // 0x404ae0
    int64_t str3; // 0x404ae0
    int64_t v14; // 0x404ae0
    int64_t v15; // 0x404ae0
    int64_t v16; // 0x404ae0
    int64_t v17; // 0x404ae0
    int32_t v18; // 0x404ae0
    int32_t v19; // 0x404ae0
    int32_t v20; // 0x404ae0
    int32_t v21; // 0x404ae0
    int32_t v22; // 0x404ae0
    int32_t v23; // 0x404ae0
    int32_t v24; // 0x404ae0
    int32_t v25; // 0x404ae0
    int32_t v26; // 0x404ae0
    int32_t v27; // 0x404ae0
    int32_t v28; // 0x404ae0
    int32_t v29; // 0x404ae0
    int64_t nmemb; // 0x404ae0
    int64_t v30; // 0x404ae0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404b3c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404b38
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404b48
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404b4e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404b18
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x404b7c
                int64_t v34; // 0x404ae0
                int64_t v35; // 0x404ae0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404b85
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404d00;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404b96
                int64_t v37 = *(int64_t *)v36; // 0x404b9a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404b70
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404b85
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404d00;
                        }
                    }
                    // 0x404b96
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
                  lab_0x404be6:
                    // 0x404be6
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
                        goto lab_0x404c40;
                    } else {
                        if (v11 == 0) {
                            // 0x404db0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404c40;
                        } else {
                            if (v39 == 0) {
                                // 0x404d60
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x404c0a;
                                } else {
                                    // 0x404d6c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x404c0a;
                                    } else {
                                        // 0x404d7a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x404c0a;
                                        } else {
                                            goto lab_0x404c40;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x404c0a;
                            }
                        }
                    }
                }
              lab_0x404c51:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404e26
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404fd2
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x404ff2
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40503f
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x405059
                            int64_t v45; // 0x40505b
                            if (*(char *)v42 != 0) {
                                // 0x40505b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405053
                            while (v17 + nmemb != v42) {
                                // 0x405055
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40505b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x405048
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405080
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x404e34
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404f8f
                        free((int64_t *)v17);
                    }
                    // 0x404e89
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404ea0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x404d4e
                    return 63;
                }
                // 0x404c70
                v5 = v39;
                if (v13 != 0) {
                    // 0x404cf4
                    v35 = v13;
                    v34 = v25;
                  lab_0x404d00:;
                    int32_t * v49 = (int32_t *)a7; // 0x404d10
                    uint32_t v50 = *v49; // 0x404d10
                    int64_t v51 = v50; // 0x404d10
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x404d1a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404d23
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404f4f
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404efa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x404d4e
                            return 63;
                        }
                        // 0x404d98
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4050af
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404fad
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404fc0
                                // 0x404d4e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404ebe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404ed2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x404d3b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x404d3e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404d42
                    int64_t result = v59; // 0x404d48
                    if (v58 != 0) {
                        // 0x404d4a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x404d4e
                    return result;
                }
            } else {
                // 0x404b4e
                v5 = v32;
            }
            // break -> 0x404c75
            break;
        }
    }
    // 0x404c75
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x404c8d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404c97
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x404d4e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404dd9
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404cc6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404cd6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404c40:
    // 0x404c40
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404c40
    int64_t v63 = *(int64_t *)v62; // 0x404c44
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404c51
        goto lab_0x404c51;
    }
    goto lab_0x404be6;
  lab_0x404c0a:
    // 0x404c0a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404ae0
    int32_t v65; // 0x404ae0
    int32_t v66; // 0x404ae0
    if (v27 != 0) {
        goto lab_0x404c40;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404dc0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404c40;
            } else {
                goto lab_0x404c31;
            }
        } else {
            // 0x404c25
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404f1c
                int64_t v67 = (int64_t)mem; // 0x404f1c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404c40;
                } else {
                    // 0x404f2f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404c31;
                }
            } else {
                goto lab_0x404c31;
            }
        }
    }
  lab_0x404c31:
    // 0x404c31
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404c40;
}
// Address range: 0x405100 - 0x4056c6
int64_t function_405100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405121
    if (v3 < 1) {
        // 0x4052de
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40511d
    int32_t v5 = *(int32_t *)a7; // 0x405129
    uint64_t v6 = a1 & 0xffffffff; // 0x40512b
    int64_t v7 = v2; // 0x405130
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405133
    *v8 = 0;
    int64_t v9; // 0x405100
    int64_t v10; // 0x405100
    int64_t v11; // 0x405100
    int64_t v12; // 0x405100
    int64_t str; // 0x405100
    int64_t v13; // 0x405100
    int64_t v14; // 0x405100
    int64_t v15; // 0x405100
    int64_t v16; // 0x405100
    int64_t v17; // 0x405100
    int32_t v18; // 0x405100
    char v19; // 0x405100
    if (v5 == 0) {
        // 0x405318
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40514a;
    } else {
        // 0x405143
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405190
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405193
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405258;
            } else {
                int64_t v22 = v7 + 1; // 0x4051a6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4051b6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40526c;
                } else {
                    goto lab_0x4051c8;
                }
            }
        } else {
            goto lab_0x40514a;
        }
    }
  lab_0x40514a:
    // 0x40514a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405150
    *v24 = 0;
    int64_t v25; // 0x405100
    int64_t v26; // 0x405100
    int64_t v27; // 0x405100
    switch (*(char *)&v2) {
        case 45: {
            // 0x405240
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40524d;
        }
        case 43: {
            // 0x405550
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40524d;
        }
        default: {
            // 0x40516c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4054cf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4055e8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40524d;
                } else {
                    // 0x4054dd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40517a;
                }
            } else {
                goto lab_0x40517a;
            }
        }
    }
  lab_0x405258:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40525f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4051c8;
    } else {
        goto lab_0x40526c;
    }
  lab_0x40517a:
    // 0x40517a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40524d;
  lab_0x40524d:
    // 0x40524d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405258;
  lab_0x4051c8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4051c8
    int64_t v31 = v30; // 0x4051c8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4051ca
    if ((int64_t)*v32 > v31) {
        // 0x4051cf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4051d2
    if (*v33 > v30) {
        // 0x4051d7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4051da
    int64_t v35 = v31; // 0x4051de
    int64_t v36 = v15; // 0x4051de
    int64_t v37; // 0x405100
    int64_t v38; // 0x405100
    int64_t v39; // 0x405100
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405348
        int64_t v41 = v40; // 0x405348
        v2 = v41;
        int64_t v42; // 0x405100
        if (*v33 == v40) {
            // 0x405530
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405538
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405354
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405368
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405371
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40537a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405391
            int64_t v47 = v45 & 0xffffffff; // 0x405395
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40539e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4053a4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4053a6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405380
            int64_t v49 = v48 & 0xffffffff; // 0x405380
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405391
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40539e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4053a4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4053a6;
                    }
                }
                // 0x405380
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405548
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4053a6;
    } else {
        goto lab_0x4051e4;
    }
  lab_0x40526c:
    // 0x40526c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40526f
    int64_t v51 = v12; // 0x40526f
    int64_t v52 = v14; // 0x40526f
    if (*(char *)v10 == 0) {
        goto lab_0x4051c8;
    } else {
        goto lab_0x405275;
    }
  lab_0x4051e4:;
    int32_t v53 = v35; // 0x4051e4
    int64_t v54; // 0x405100
    int64_t v55; // 0x405100
    int64_t v56; // 0x405100
    int64_t v57; // 0x405100
    int64_t v58; // 0x405100
    int64_t v59; // 0x405100
    char * v60; // 0x405100
    int64_t v61; // 0x405100
    int64_t v62; // 0x4051f9
    int64_t v63; // 0x405100
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405333
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405336;
    } else {
        // 0x4051ec
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405100
        int64_t v66 = v65 ? -1 : 1; // 0x405200
        int64_t v67 = (int64_t)"--"; // 0x405100
        int64_t v68 = v62; // 0x405100
        int64_t v69 = 3; // 0x405200
        unsigned char v70 = *(char *)v68; // 0x405200
        char v71 = *(char *)v67; // 0x405200
        char v72 = v71; // 0x405200
        bool v73 = false; // 0x405200
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
            // 0x4052f0
            if (*(char *)v62 == 45) {
                // 0x4053b0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4053b0
                if (c == 0) {
                    goto lab_0x4052fa;
                } else {
                    // 0x4053bd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405440;
                    } else {
                        if (c == 45) {
                            // 0x405623
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405495;
                        } else {
                            // 0x4053ce
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405440;
                            } else {
                                // 0x4053d3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4053f4;
                                } else {
                                    // 0x4053da
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405440;
                                    } else {
                                        goto lab_0x4053f4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4052fa;
            }
        } else {
            uint32_t v75 = *v33; // 0x405210
            v2 = v75;
            int32_t v76 = *v32; // 0x405213
            int64_t v77 = v35 + 1; // 0x405216
            int32_t v78 = v77; // 0x405219
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405580
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405227
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405235
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405336;
        }
    }
  lab_0x405275:;
    // 0x405275
    int64_t v79; // bp-104, 0x405100
    int64_t v80 = &v79; // 0x40510a
    int64_t v81 = v50 + 1; // 0x405275
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40527c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405281
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405285
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405289
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405291
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405296
    int32_t c2 = v84; // 0x405296
    char * found_char_pos = strchr(str2, c2); // 0x405296
    int64_t v87 = *v82; // 0x40529b
    v2 = v87;
    int64_t v88 = *v85; // 0x4052a5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4052b0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4055a0
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40556d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4052de
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405296
    char v91 = *(char *)(v90 + 1); // 0x4052cb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405285
        if (v91 != 58) {
            // 0x4052de
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4054f4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4055f8
                *v8 = 0;
            } else {
                // 0x4055dc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40551e
            *v83 = 0;
            // 0x4052de
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4054fe
        if (v93 != 0) {
            // 0x405590
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40551e
            *v83 = 0;
            // 0x4052de
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405511
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40551e
            *v83 = 0;
            // 0x4052de
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40565a
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40560a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405611
        // 0x40551e
        *v83 = 0;
        // 0x4052de
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405469
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40546b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405690
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405641
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405648
            // 0x4052de
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405476
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40547a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405495;
  lab_0x4053a6:
    // 0x4053a6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4051e4;
  lab_0x405495:;
    int64_t v99 = function_404ae0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4054b3
    // 0x4052de
    return v99 & 0xffffffff;
  lab_0x405336:;
    int32_t v100 = v55; // 0x405336
    if (v100 != (int32_t)v59) {
        // 0x40533a
        *(int32_t *)a7 = v100;
    }
    // 0x4052de
    return 0xffffffff;
  lab_0x4052fa:
    // 0x4052fa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405301
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4052de
    return v99 & 0xffffffff;
  lab_0x405440:
    // 0x405440
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405275;
  lab_0x4053f4:
    // 0x4053f4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404ae0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x40541a
    if ((int32_t)v101 != -1) {
        // 0x4052de
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40542f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405440;
}
// Address range: 0x4056d0 - 0x405726
int64_t function_4056d0(int64_t a1) {
    // 0x4056d0
    *(int32_t *)&g40 = g26;
    *(int32_t *)&g41 = g25;
    int64_t v1; // 0x4056d0
    int64_t result = function_405100(v1, v1, v1, v1, v1, v1, &g40, a1 & 0xffffffff); // 0x4056f6
    g26 = *(int32_t *)&g40;
    g45 = g43;
    *(int32_t *)&g24 = g42;
    return result;
}
// Address range: 0x405730 - 0x405748
int64_t function_405730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405730
    return function_4056d0(1);
}
// Address range: 0x405750 - 0x405763
int64_t function_405750(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[4], int32_t a5, int64_t a6) {
    // 0x405750
    return function_4056d0(0);
}
// Address range: 0x405770 - 0x405785
int64_t function_405770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405770
    return function_405100(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405790 - 0x4057a6
int64_t function_405790(void) {
    // 0x405790
    return function_4056d0(0);
}
// Address range: 0x4057b0 - 0x4057c8
int64_t function_4057b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4057b0
    return function_405100(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4057d0 - 0x40584a
int64_t function_4057d0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4057db
    int64_t v2 = (int64_t)&g10; // 0x4057db
    int32_t * pwc; // 0x4057d0
    int64_t v3; // 0x4057d0
    int64_t n; // 0x4057d0
    if (a2 == 0) {
        goto lab_0x405822;
    } else {
        // 0x4057dd
        if (a3 == 0) {
            // 0x405808
            return -2;
        }
        // 0x4057e9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405822;
        } else {
            goto lab_0x4057f4;
        }
    }
  lab_0x405822:
    // 0x405822
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4057d0
    pwc = (int32_t *)&v4;
    goto lab_0x4057f4;
  lab_0x4057f4:;
    char * wstr = (char *)v3; // 0x4057fa
    int64_t ps; // 0x4057d0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4057fa
    int64_t result = v5; // 0x4057fa
    if (v5 < 0xfffffffe) {
        // 0x405808
        return result;
    }
    int64_t result2 = result; // 0x405839
    if ((char)function_4058b0(0, v3) == 0) {
        // 0x40583b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405808
    return result2;
}
// Address range: 0x405850 - 0x4058ad
int64_t function_405850(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405857
    int64_t v2; // 0x405850
    int64_t result = function_405e80(a1, v2); // 0x405868
    if ((v2 & 32) != 0) {
        // 0x405890
        if ((int32_t)result == 0) {
            // 0x405894
            *__errno_location() = 0;
        }
        // 0x40588a
        return 0xffffffff;
    }
    // 0x405871
    if ((int32_t)result == 0) {
        // 0x40588a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405878
    if (v1 == 0) {
        // 0x40587a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40588a
    return result2;
}
// Address range: 0x4058b0 - 0x40590e
int64_t function_4058b0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4058b6
    if (locale == NULL) {
        // 0x4058e3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4058b6
    bool v2; // 0x4058b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x4058b0
    int64_t v5 = v1; // 0x4058b0
    int64_t v6 = 2; // 0x4058d5
    unsigned char v7 = *(char *)v5; // 0x4058d5
    char v8 = *(char *)v4; // 0x4058d5
    char v9 = v8; // 0x4058d5
    bool v10 = false; // 0x4058d5
    while (v7 == v8) {
        // 0x4058c8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4058e1
    int64_t v13 = v1; // 0x4058e1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4058e3
        return 0;
    }
    int64_t v14 = 6; // 0x4058e1
    unsigned char v15 = *(char *)v13; // 0x4058fd
    char v16 = *(char *)v12; // 0x4058fd
    char v17 = v16; // 0x4058fd
    bool v18 = false; // 0x4058fd
    while (v15 == v16) {
        // 0x4058f0
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
// Address range: 0x405910 - 0x405e72
int64_t function_405910(void) {
    char * v1 = nl_langinfo(14); // 0x405926
    char * v2 = g44; // 0x40592b
    char * v3; // 0x405910
    int64_t v4; // 0x405910
    int64_t v5; // 0x405910
    int64_t v6; // 0x405910
    int64_t v7; // 0x405910
    int32_t size; // 0x405910
    int32_t size2; // 0x405910
    int32_t len; // 0x4059e2
    int64_t v8; // 0x4059e2
    char * env_val; // 0x4059cd
    if (v2 == NULL) {
        // 0x4059c8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405a35;
        } else {
            // 0x4059da
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405a35;
            } else {
                // 0x4059df
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4059cd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405e65
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405a35;
                    } else {
                        // 0x405dd9
                        size2 = len + 14;
                        goto lab_0x4059fb;
                    }
                } else {
                    goto lab_0x4059fb;
                }
            }
        }
    } else {
        // 0x405910
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40594a;
    }
  lab_0x405c7c:;
    // 0x405c7c
    struct _IO_FILE * stream; // 0x405abb
    int32_t v10 = __uflow(stream); // 0x405c7f
    int64_t v11; // 0x405910
    int64_t v12 = v11; // 0x405c89
    int64_t v13; // 0x405910
    int64_t v14 = v13; // 0x405c89
    int32_t v15 = v10; // 0x405c89
    int64_t v16; // 0x405910
    int64_t v17 = v16; // 0x405c89
    int64_t v18 = v11; // 0x405c89
    int64_t v19 = v13; // 0x405c89
    int64_t v20 = v16; // 0x405c89
    if (v10 == -1) {
        // break -> 0x405c8f
        goto lab_0x405c8f;
    }
    goto lab_0x405b09;
  lab_0x405afe:;
    // 0x405afe
    int64_t v90; // 0x405910
    int64_t * v32; // 0x405af0
    *v32 = v90 + 1;
    int64_t v89; // 0x405910
    v12 = v89;
    int64_t v91; // 0x405910
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405910
    v17 = v92;
    goto lab_0x405b09;
  lab_0x405b09:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405910
    int32_t v25; // bp-120, 0x405910
    int32_t v26; // bp-184, 0x405910
    int64_t v27; // 0x405abb
    int64_t v28; // 0x405ad8
    int64_t v29; // 0x405add
    int64_t * v30; // 0x405af4
    switch (c) {
        case 32: {
            goto lab_0x405af0;
        }
        case 10: {
            goto lab_0x405af0;
        }
        case 9: {
            goto lab_0x405af0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405ce1
            int32_t v33; // 0x405910
            char v34; // 0x405910
            int32_t v35; // 0x405cee
            if (v31 < *v30) {
                // 0x405cc0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x405ceb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405ce1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405cc0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x405ceb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405cd0
                v36 = v33;
            }
            // 0x405dbf
            if (v36 == -1) {
                // break -> 0x405c8f
                break;
            }
            goto lab_0x405af0;
        }
        default: {
            // 0x405b1f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x405c8f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405b48
            int64_t v39 = v37 + 4; // 0x405b4a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405b56
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405b58
            while (v41 == 0) {
                // 0x405b48
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405b76
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405b82
            int64_t v45 = v43 + 4; // 0x405b84
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405b90
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405b92
            while (v47 == 0) {
                // 0x405b82
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405b7f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405ba8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405bb8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x405bbc
            int64_t v52 = v51 + v48; // 0x405bc5
            int64_t * mem; // 0x405910
            int64_t v53; // 0x405910
            int64_t v54; // 0x405910
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x405cfb
                int64_t v56 = v55 + 3; // 0x405d07
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405be1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405bf0
            if (mem == NULL) {
                // 0x405e1c
                free((int64_t *)v21);
                function_405e80(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x405a94;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405c08
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405c12
            uint32_t v62 = (int32_t)v59; // 0x405c15
            int64_t v63; // 0x405910
            if (v62 >= 8) {
                // 0x405d24
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405d3e
                int64_t v66 = v61 - v65; // 0x405d42
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405d4d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405d5e
                    int64_t v70 = v69 & 0xffffffff; // 0x405d5e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405d5b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405def
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405c27
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x405c2b
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
            int64_t v73 = v51 + 1; // 0x405c3b
            int64_t v74 = v60 - 1; // 0x405c3f
            uint32_t v75 = (int32_t)v73; // 0x405c44
            int64_t v76; // 0x405910
            if (v75 >= 8) {
                // 0x405d72
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405d7c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405d8c
                int64_t v80 = v74 - v79; // 0x405d90
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405d9b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405dab
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405da9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405e06
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405e0e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405c56
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x405c5a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405e53
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x405c6e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405afe;
            } else {
                goto lab_0x405c7c;
            }
        }
    }
  lab_0x405af0:;
    int64_t v93 = v23; // 0x405910
    int64_t v94 = v22; // 0x405910
    int64_t v95 = v21; // 0x405910
    goto lab_0x405af0_2;
  lab_0x405a35:;
    int64_t * mem3 = malloc(size); // 0x405a35
    int64_t v97 = (int64_t)&g10; // 0x405a40
    int64_t v98; // 0x405910
    int64_t path; // 0x405910
    if (mem3 == NULL) {
        goto lab_0x405a12;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405a35
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405a56;
    }
  lab_0x40594a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40593d
    char v100 = *v3; // 0x40594a
    int64_t v101; // 0x405910
    if (v100 == 0) {
        // 0x4059a4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405910
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405910
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405990
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405997;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405960
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40596d
        char v107 = *(char *)v106; // 0x405972
        v102 = v107;
        if (v107 == 0) {
            // 0x4059a4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40597b
    v104 = v103 + 1;
  lab_0x405997:
    // 0x4059a4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405a12:;
    char * v108 = (char *)v97;
    g44 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40594a;
  lab_0x405a56:;
    int64_t v109 = v98 + path; // 0x405a56
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405a82
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x405ab1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405de2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x405ad5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405af0_2:;
                uint64_t v96 = *v32; // 0x405af0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x405c7c;
                } else {
                    goto lab_0x405afe;
                }
            }
          lab_0x405c8f:
            // 0x405c8f
            function_405e80(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x405cae
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405a94;
  lab_0x4059fb:;
    int64_t * mem4 = malloc(size2); // 0x4059fb
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405aa1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405a56;
    } else {
        goto lab_0x405a12;
    }
  lab_0x405a94:
    // 0x405a94
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405a12;
}
// Address range: 0x405e80 - 0x405efb
int64_t function_405e80(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405e87
    if (fileno(stream) < 0) {
        // 0x405ee7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405e9a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405ecb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405ee7
            return fclose(stream);
        }
    }
    // 0x405e9c
    if ((int32_t)function_405f00(a1, v1) == 0) {
        // 0x405ee7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405ea8
    int32_t v3 = *v2; // 0x405eb0
    int64_t result = fclose(stream); // 0x405ebe
    if (v3 != 0) {
        // 0x405ef0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405ec0
    return result;
}
// Address range: 0x405f00 - 0x405f40
int64_t function_405f00(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405f1a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405f1a
        return fflush(stream);
    }
    // 0x405f28
    function_405f40(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405f40 - 0x405f97
int64_t function_405f40(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405f40
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405f4a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405f7b
    int64_t result = -1; // 0x405f84
    if (v1 != -1) {
        // 0x405f86
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405f92
    return result;
}
// Address range: 0x405fa0 - 0x405ffd
int64_t function_405fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405fa0
    return function_4013a8();
}
// Address range: 0x406000 - 0x406001
int64_t function_406000(void) {
    // 0x406000
    int64_t result; // 0x406000
    return result;
}
// Address range: 0x406010 - 0x406028
int64_t function_406010(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406010
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406028 - 0x406048
int64_t function_406028(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406032
    while (*(int64_t *)v1 != -1) {
        // 0x406033
        v1 -= 8;
    }
    // 0x406044
    return result;
}
