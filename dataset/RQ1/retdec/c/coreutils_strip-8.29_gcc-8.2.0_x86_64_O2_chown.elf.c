// Address range: 0x402130 - 0x402135
int64_t function_402130(void) {
    // 0x402130
    return abort();
}
// Address range: 0x402135 - 0x40213a
int64_t function_402135(void) {
    // 0x402135
    return abort();
}
// Address range: 0x40213a - 0x40213f
int64_t function_40213a(void) {
    // 0x40213a
    abort();
    // UNREACHABLE
}
// Address range: 0x40213f - 0x402144
int64_t function_40213f(void) {
    // 0x40213f
    abort();
    // UNREACHABLE
}
// Address range: 0x402144 - 0x402149
int64_t function_402144(void) {
    // 0x402144
    abort();
    // UNREACHABLE
}
// Address range: 0x402149 - 0x40214e
int64_t function_402149(void) {
    // 0x402149
    abort();
    // UNREACHABLE
}
// Address range: 0x40214e - 0x402153
int64_t function_40214e(void) {
    // 0x40214e
    abort();
    // UNREACHABLE
}
// Address range: 0x402153 - 0x402158
int64_t function_402153(void) {
    // 0x402153
    abort();
    // UNREACHABLE
}
// Address range: 0x402158 - 0x40215d
int64_t function_402158(void) {
    // 0x402158
    abort();
    // UNREACHABLE
}
// Address range: 0x40215d - 0x402162
int64_t function_40215d(void) {
    // 0x40215d
    abort();
    // UNREACHABLE
}
// Address range: 0x402162 - 0x402167
int64_t function_402162(void) {
    // 0x402162
    abort();
    // UNREACHABLE
}
// Address range: 0x402167 - 0x40216c
int64_t function_402167(void) {
    // 0x402167
    abort();
    // UNREACHABLE
}
// Address range: 0x40216c - 0x402171
int64_t function_40216c(void) {
    // 0x40216c
    return abort();
}
// Address range: 0x402171 - 0x402176
int64_t function_402171(void) {
    // 0x402171
    abort();
    // UNREACHABLE
}
// Address range: 0x402180 - 0x402690
int64_t function_402180(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x402197
    int32_t v3 = -1; // bp-264, 0x4021ae
    int32_t v4 = -1; // bp-260, 0x4021b6
    int32_t v5 = -1; // bp-256, 0x4021be
    int32_t v6 = -1; // bp-252, 0x4021c6
    function_403cb0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v7; // 0x402180
    function_40c620(0x403bc0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v7);
    int64_t v8; // bp-248, 0x402180
    function_402c50(&v8);
    int64_t v9 = 16; // 0x40220f
    int64_t v10 = 0xffffffff; // 0x40220f
    int64_t v11 = 0; // 0x40220f
    int64_t v12; // 0x402180
    int64_t v13; // 0x402180
    int64_t v14; // 0x402180
    char v15; // 0x402180
    char v16; // 0x402180
    char v17; // 0x402180
    while (true) {
      lab_0x402210_2:
        // 0x402210
        v13 = v11;
        v12 = v10;
        v14 = v9;
        v17 = v16;
        int32_t v18 = function_409c90(v2 & 0xffffffff, a2, "HLPRcfhv", &g2, 0, v7);
        v15 = v17;
        v9 = v14;
        v10 = v12;
        v11 = v13;
        switch (v18) {
            case -1: {
                goto lab_0x4023fd;
            }
            case 102: {
                goto lab_0x402210;
            }
            default: {
                if (v18 > 102) {
                    if (v18 == 129) {
                        int64_t v19 = function_405c50((int64_t)g52, &v5, &v6, 0, 0); // 0x402396
                        v15 = v17;
                        v9 = v14;
                        v10 = v12;
                        v11 = v13;
                        if (v19 != 0) {
                            // 0x4023a4
                            error(1, 0, "%s: %s", (char *)v19, (char *)function_4058d0((int64_t)g52));
                            v15 = 1;
                            v9 = v14;
                            v10 = v12;
                            v11 = v13;
                        }
                    } else {
                        if (v18 > 129) {
                            // 0x4022a8
                            v15 = v17;
                            v9 = v14;
                            v10 = v12;
                            v11 = 1;
                            if (v18 != 131) {
                                // 0x4022b3
                                v15 = v17;
                                v9 = v14;
                                v10 = v12;
                                v11 = 0;
                                if (v18 >= 131) {
                                    if (v18 != 132) {
                                        // 0x402299
                                        function_402770(1);
                                        // UNREACHABLE
                                    }
                                    // 0x4022f7
                                    *(int64_t *)&g37 = (int64_t)g52;
                                    v15 = v17;
                                    v9 = v14;
                                    v10 = v12;
                                    v11 = v13;
                                }
                            }
                        } else {
                            if (v18 == 118) {
                                // 0x4023f0
                                v8 = 0;
                                v15 = v17;
                                v9 = v14;
                                v10 = v12;
                                v11 = v13;
                            } else {
                                // 0x402252
                                v15 = v17;
                                v9 = v14;
                                v10 = 1;
                                v11 = v13;
                                if (v18 != 128) {
                                    // 0x402290
                                    v15 = v17;
                                    v9 = v14;
                                    v10 = 0;
                                    v11 = v13;
                                    if (v18 != 104) {
                                        // 0x402299
                                        function_402770(1);
                                        // UNREACHABLE
                                    }
                                }
                            }
                        }
                    }
                } else {
                    // 0x402268
                    v15 = v17;
                    v9 = 2;
                    v10 = v12;
                    v11 = v13;
                    if (v18 != 76) {
                        if (v18 > 76) {
                            // 0x402273
                            v15 = 1;
                            v9 = v14;
                            v10 = v12;
                            v11 = v13;
                            if (v18 != 82) {
                                if (v18 != 99) {
                                    // 0x4022c0
                                    v15 = v17;
                                    v9 = 16;
                                    v10 = v12;
                                    v11 = v13;
                                    if (v18 != 80) {
                                        // 0x402299
                                        function_402770(1);
                                        // UNREACHABLE
                                    }
                                } else {
                                    // 0x402281
                                    v8 = 1;
                                    v15 = v17;
                                    v9 = v14;
                                    v10 = v12;
                                    v11 = v13;
                                }
                            }
                        } else {
                            if (v18 == -130) {
                                // 0x40259f
                                function_402770(0);
                                // UNREACHABLE
                            }
                            // 0x4022db
                            v15 = v17;
                            v9 = 17;
                            v10 = v12;
                            v11 = v13;
                            if (v18 != 72) {
                                if (v18 == -131) {
                                    // 0x40231b
                                    function_406180((int64_t)g31, "chown", "GNU coreutils", (int64_t)g19, "David MacKenzie", "Jim Meyering");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x402299;
                            }
                        }
                    }
                }
                goto lab_0x402210;
            }
        }
    }
  lab_0x4023fd:;
    int64_t v20 = 16; // 0x402402
    char * format; // 0x402676
    if (v17 != 0) {
        // 0x4024d3
        v20 = v14;
        if (v14 == 16 == v12 == 1) {
            // 0x40266a
            format = dcgettext(NULL, "-R --dereference requires either -H or -L", 5);
            error(1, (int32_t)"-R --dereference requires either -H or -L" ^ (int32_t)"-R --dereference requires either -H or -L", format);
            return &g57;
        }
    }
    int32_t v21 = *(int32_t *)0x61233c; // 0x402410
    int64_t v22 = v21; // 0x402410
    int32_t v23 = (int32_t)v2 - v21; // 0x402426
    int64_t v24; // 0x402180
    int64_t v25; // 0x402180
    int64_t v26; // 0x402180
    int64_t v27; // 0x402180
    int64_t v28; // bp-216, 0x402180
    char * v29; // bp-224, 0x402180
    if (g37 == NULL) {
        if (v23 < 2) {
            goto lab_0x4025a6;
        } else {
            int64_t v30 = *(int64_t *)(8 * v22 + a2); // 0x4024f7
            int64_t v31 = function_405c50(v30, &v3, &v4, (int32_t)(int64_t)&v29, (int32_t)(int64_t)&v28); // 0x402510
            v26 = a2;
            v24 = v31;
            if (v31 != 0) {
                goto lab_0x402640;
            } else {
                // 0x402521
                if (v29 == NULL) {
                    goto lab_0x40258c;
                } else {
                    goto lab_0x402529;
                }
            }
        }
    } else {
        if (v23 < 1) {
            goto lab_0x4025a6;
        } else {
            // 0x402439
            int64_t v32; // bp-200, 0x402180
            if (__xstat(1, g37, (struct stat *)&v32) != 0) {
                int64_t v33 = function_405680(4, (int64_t *)g37); // 0x40260b
                error(1, *__errno_location(), dcgettext(NULL, "failed to get attributes of %s", 5));
                v26 = v33;
                v24 = v2;
                goto lab_0x402640;
            } else {
                // 0x402453
                int32_t v34; // 0x402180
                v29 = (char *)function_402cd0(v34);
                v28 = function_402c90((int64_t)v34);
                v27 = v20;
                v25 = a2;
                goto lab_0x40247c;
            }
        }
    }
  lab_0x402210:
    // 0x402210
    v16 = v15;
    goto lab_0x402210_2;
  lab_0x4025a6:
    if (v2 > v22) {
        // 0x4025cf
        function_4058d0(*(int64_t *)(a2 - 8 + (v1 >> 29)));
        error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
    } else {
        // 0x4025ab
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
    }
  lab_0x402299:
    // 0x402299
    function_402770(1);
    // UNREACHABLE
  lab_0x402640:;
    int64_t v35 = *(int64_t *)(8 * (int64_t)g28 + v26); // 0x402647
    error(1, 0, "%s: %s", (char *)v24, (char *)function_4058d0(v35));
    // 0x40266a
    format = dcgettext(NULL, "-R --dereference requires either -H or -L", 5);
    error(1, (int32_t)"-R --dereference requires either -H or -L" ^ (int32_t)"-R --dereference requires either -H or -L", format);
    return &g57;
  lab_0x40258c:
    // 0x40258c
    if (v28 != 0) {
        // 0x402594
        v29 = (char *)&g10;
    }
    goto lab_0x402529;
  lab_0x402529:
    // 0x402529
    g28 = &g29;
    v27 = v20;
    v25 = a2;
    goto lab_0x40247c;
  lab_0x40247c:
    // 0x40247c
    if (v17 != 0 == (v13 != 0)) {
        int64_t v36 = function_4058f0(&g36); // 0x40253a
        if (v36 != 0) {
            goto lab_0x40248c;
        } else {
            int64_t v37 = function_405680(4, (int64_t *)"/"); // 0x402557
            char * format2 = dcgettext(NULL, "failed to get attributes of %s", 5); // 0x40256b
            int32_t * v38 = __errno_location(); // 0x402573
            int32_t err_num = *v38; // 0x402583
            error(1, err_num, format2);
            goto lab_0x40258c;
        }
    } else {
        goto lab_0x40248c;
    }
  lab_0x40248c:;
    uint64_t v39 = function_403a80(8 * (int64_t)g28 + v25, v27 & 0xfffffbff | 1024, v3, v4, v5, v6, &v8); // 0x4024b6
    return v39 % 256 ^ 1;
}
// Address range: 0x402690 - 0x4026bb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402690
    int64_t v1; // 0x402690
    __libc_start_main(0x402180, (int32_t)a4, (char **)&v1, (void (*)())0x40c5b0, (void (*)())0x40c610, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4026bb - 0x4026da
int64_t function_4026bb(void) {
    // 0x4026bb
    return &g30;
}
// Address range: 0x4026da - 0x402711
int64_t function_4026da(void) {
    // 0x4026da
    return 0;
}
// Address range: 0x402711 - 0x402768
int64_t function_402711(void) {
    // 0x402711
    if (g34 != 0) {
        // 0x402767
        int64_t result; // 0x402711
        return result;
    }
    int64_t v1 = g35; // 0x402744
    int64_t result2; // 0x402756
    if (g35 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x402756
        result2 = function_4026bb();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x402746
        v1++;
    }
    // 0x40273a
    g35 = v1;
    // 0x402756
    result2 = function_4026bb();
    g34 = 1;
    return result2;
}
// Address range: 0x402768 - 0x40276d
int64_t function_402768(void) {
    // 0x402768
    return function_4026da();
}
// Address range: 0x402770 - 0x402bcd
int64_t function_402770(int64_t a1) {
    int32_t status = a1; // 0x402786
    if (status != 0) {
        // 0x40278a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4027af
        exit(status);
        // UNREACHABLE
    }
    // 0x4027b6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [OWNER][:[GROUP]] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Change the owner and/or group of each FILE to OWNER and/or GROUP.\nWith --reference, change the owner and group of each FILE to those of RFILE.\n\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "                         (useful only on systems that can change the\n                         ownership of a symlink)\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --from=CURRENT_OWNER:CURRENT_GROUP\n                         change the owner and/or group of each file only if\n                         its current owner and/or group match those specified\n                         here.  Either may be omitted, in which case a match\n                         is not required for the omitted attribute\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --no-preserve-root  do not treat '/' specially (the default)\n      --preserve-root    fail to operate recursively on '/'\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --reference=RFILE  use RFILE's owner and group rather than\n                         specifying OWNER:GROUP values\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -R, --recursive        operate on files and directories recursively\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nOwner is unchanged if missing.  Group is unchanged if missing, but changed\nto login group if implied by a ':' following a symbolic OWNER.\nOWNER and GROUP may be numeric as well as symbolic.\n", 5), g31);
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  %s root /u        Change the owner of /u to \"root\".\n  %s root:staff /u  Likewise, but also change its group to \"staff\".\n  %s -hR root /u    Change the owner of /u and subfiles to \"root\".\n", 5));
    int64_t v1 = &g1; // bp-136, 0x4029ab
    bool v2; // 0x402770
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402a30
    int64_t v6 = *(int64_t *)v5; // 0x402a34
    int64_t v7 = 6; // 0x402a3a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"chown";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402a46
        char v11 = *(char *)v9; // 0x402a46
        char v12 = v11; // 0x402a46
        bool v13 = false; // 0x402a46
        while (v10 == v11) {
            // 0x402a3c
            v7--;
            int64_t v14 = v9 + v3; // 0x402a46
            int64_t v15 = v8 + v3; // 0x402a46
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
            // break -> 0x402a52
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x402a52
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402b64;
        } else {
            // 0x402b4e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ba3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ab4;
            } else {
                goto lab_0x402b64;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402ab4;
        } else {
            // 0x402a9a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ba3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ab4;
            } else {
                goto lab_0x402ab4;
            }
        }
    }
  lab_0x402b64:
    // 0x402b64
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402af4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4027af
    exit(status);
    // UNREACHABLE
  lab_0x402ab4:
    // 0x402ab4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402af4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4027af
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402bd0 - 0x402c45
int64_t function_402bd0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x402c28
        if (a2 == 0) {
            // 0x402c1b
            return 0;
        }
        // 0x402c30
        return function_4064f0(a2);
    }
    // 0x402bd9
    if (a2 == 0) {
        // 0x402c30
        return function_4064f0(a1);
    }
    char * str = (char *)a1; // 0x402be4
    int32_t len = strlen(str); // 0x402be4
    char * str2 = (char *)a2; // 0x402bef
    int64_t str3 = function_4062c0((int64_t)len + 2 + (int64_t)strlen(str2)); // 0x402bf9
    char * v1 = stpcpy((char *)str3, str); // 0x402c07
    *v1 = 58;
    strcpy((char *)((int64_t)v1 + 1), str2);
    // 0x402c1b
    return str3;
}
// Address range: 0x402c50 - 0x402c7c
int64_t function_402c50(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    *(int32_t *)a1 = 2;
    *(char *)(v1 + 4) = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(int16_t *)(v1 + 16) = 1;
    *(int64_t *)(v1 + 24) = 0;
    *(int64_t *)(v1 + 32) = 0;
    return 1;
}
// Address range: 0x402c80 - 0x402c81
int64_t function_402c80(void) {
    // 0x402c80
    int64_t result; // 0x402c80
    return result;
}
// Address range: 0x402c90 - 0x402cc8
int64_t function_402c90(int64_t gid) {
    struct group * v1 = getgrgid((int32_t)gid); // 0x402c97
    if (v1 != NULL) {
        // 0x402ca1
        return function_4064f0(*(int64_t *)v1);
    }
    // 0x402cb0
    int64_t v2; // bp-40, 0x402c90
    int64_t v3 = function_403c60(gid & 0xffffffff, &v2); // 0x402cb5
    return function_4064f0(v3);
}
// Address range: 0x402cd0 - 0x402d08
int64_t function_402cd0(uint32_t uid) {
    struct passwd * v1 = getpwuid(uid); // 0x402cd7
    if (v1 != NULL) {
        // 0x402ce1
        return function_4064f0(*(int64_t *)v1);
    }
    // 0x402cf0
    int64_t v2; // bp-40, 0x402cd0
    int64_t v3 = function_403c60((int64_t)uid, &v2); // 0x402cf5
    return function_4064f0(v3);
}
// Address range: 0x402d10 - 0x403a7d
int64_t function_402d10(int64_t a1, int64_t a2, uint32_t owner, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)(a2 + 56); // 0x402d2d
    int16_t * v2 = (int16_t *)(a2 + 112); // 0x402d31
    uint16_t v3 = *v2; // 0x402d31
    int64_t v4 = v3; // 0x402d31
    g53 = v4;
    int64_t v5 = a6; // 0x402d4e
    int64_t v6; // 0x402d10
    char v7; // 0x402d10
    char v8; // 0x402d10
    int64_t v9; // 0x402d10
    int64_t format; // 0x402d10
    bool v10; // 0x402d10
    switch (v3) {
        case 1: {
            unsigned char v11 = *(char *)(a7 + 4); // 0x402fc8
            v6 = 0;
            v5 = a6;
            if (v11 != 0) {
                int64_t v12 = *(int64_t *)(a7 + 8); // 0x402fd5
                if (v12 == 0 || *(int64_t *)(a2 + 128) != *(int64_t *)v12 || *(int64_t *)(a2 + 120) != *(int64_t *)(v12 + 8)) {
                    // 0x402fad
                    return (int64_t)v11 & 0xffffffff;
                }
                int64_t v13 = v10 ? -1 : 1; // 0x403002
                int64_t v14 = (int64_t)"/"; // 0x402d10
                int64_t v15 = v1; // 0x402d10
                int64_t v16 = 2; // 0x403002
                unsigned char v17 = *(char *)v15; // 0x403002
                char v18 = *(char *)v14; // 0x403002
                char v19 = v18; // 0x403002
                bool v20 = false; // 0x403002
                while (v17 == v18) {
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
                    // 0x4039e3
                    function_4055a0(1, 4, (int64_t *)"/");
                    function_4055a0(0, 4, (int64_t *)v1);
                    error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
                } else {
                    // 0x403011
                    function_405680(4, (int64_t *)v1);
                    error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
                }
                // 0x403044
                error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
                fts_set(a1, a2, 4);
                fts_read(a1);
                // 0x402fad
                return 0;
            }
            goto lab_0x402d81;
        }
        case 2: {
            // 0x402d58
            v5 = a6 & 0xffffffff;
            if ((char)function_4065a0(a1, a2) != 0) {
                // 0x4035f0
                function_405750(0, 3, v1);
                error(0, (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n" ^ (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", dcgettext(NULL, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", 5));
                // 0x402fad
                return 0;
            }
            goto lab_0x402d81;
        }
        case 4: {
            char v22 = *(char *)(a7 + 17); // 0x403110
            if (v22 != 0) {
                goto lab_0x403095;
            } else {
                // 0x40311d
                function_405680(4, (int64_t *)v1);
                v7 = v22;
                v9 = (int64_t)"cannot read directory %s";
                goto lab_0x403138;
            }
        }
        case 6: {
            // 0x403168
            v5 = a6;
            if (*(char *)(a7 + 4) == 0) {
                // 0x402fad
                return 1;
            }
            goto lab_0x402d81;
        }
        case 7: {
            // 0x403088
            if (*(char *)(a7 + 17) == 0) {
                // 0x4036d8
                function_405750(0, 3, v1);
                v8 = 0;
                format = (int64_t)"%s";
                goto lab_0x40314a;
            } else {
                goto lab_0x403095;
            }
        }
        case 10: {
            // 0x4030d8
            if (*(int64_t *)(a2 + 88) == 0) {
                int64_t * v23 = (int64_t *)(a2 + 32); // 0x4030df
                if (*v23 == 0) {
                    // 0x403910
                    *v23 = 1;
                    fts_set(a1, a2, 1);
                    // 0x402fad
                    return 1;
                }
            }
            char v24 = *(char *)(a7 + 17); // 0x4030ea
            if (v24 != 0) {
                goto lab_0x403095;
            } else {
                // 0x4030f3
                function_405680(4, (int64_t *)v1);
                v7 = v24;
                v9 = (int64_t)"cannot access %s";
                goto lab_0x403138;
            }
        }
        default: {
            goto lab_0x402d81;
        }
    }
  lab_0x402d81:;
    int64_t v25 = owner; // 0x402d12
    int64_t group = 0x100000000 * a4 >> 32; // 0x402d35
    int64_t v26 = *(int64_t *)(a2 + 48); // 0x402d81
    int64_t v27 = a2 + 120; // 0x402d89
    int64_t v28 = v5 & 0xffffffff;
    char * v29 = (char *)(v26 & 0xffffffff); // 0x402d91
    char * v30 = (char *)(a7 + 16); // 0x402d96
    char v31 = *v30; // 0x402d96
    int64_t v32; // 0x402d10
    int64_t v33; // 0x402d10
    int64_t v34; // 0x402d10
    char v35; // 0x402d10
    int64_t v36; // 0x402d10
    if ((v28 & a5) == 0xffffffff) {
        // 0x4032f0
        if (*(int32_t *)a7 != 2) {
            goto lab_0x402da4;
        } else {
            // 0x4032f9
            if (*(int64_t *)(a7 + 8) != 0) {
                goto lab_0x402da4;
            } else {
                if (v31 != 0) {
                    goto lab_0x402da8;
                } else {
                    // 0x40330c
                    v35 = v31;
                    v34 = v5;
                    v32 = v27;
                    if (v3 < 3 || (v3 - 4 & -3) == 0) {
                        // 0x403324
                        v36 = (int64_t)*(int32_t *)(a1 + 44);
                        v33 = v27;
                        goto lab_0x402e61;
                    } else {
                        goto lab_0x402e55;
                    }
                }
            }
        }
    } else {
        goto lab_0x402da4;
    }
  lab_0x402da4:;
    int64_t v37 = v4; // 0x402da6
    int64_t v38 = v5; // 0x402da6
    int64_t v39 = v27; // 0x402da6
    if (v31 == 0) {
        goto lab_0x402dc0;
    } else {
        goto lab_0x402da8;
    }
  lab_0x403095:;
    int32_t v40 = *(int32_t *)a7; // 0x403095
    int64_t v41 = 0; // 0x40309c
    int32_t v42 = v40; // 0x40309c
    int64_t v43 = 0; // 0x40309c
    if (v40 == 2) {
        goto lab_0x402fa3;
    } else {
        goto lab_0x4030a2;
    }
  lab_0x402dc0:;
    int64_t v44 = v37;
    int64_t v45 = v44 & 0xff00 | v6 & 0xffffff00 | (int64_t)((v44 & 0xfffd) == 4) | (int64_t)((int16_t)v44 < 3);
    int32_t v46 = a5; // 0x402dd9
    int64_t v47; // 0x402d10
    int64_t v48; // 0x402d10
    int64_t v49; // 0x402d10
    if (v46 == -1) {
        goto lab_0x402e28;
    } else {
        // 0x402ddf
        if (*(int32_t *)(v39 + 28) == v46) {
            goto lab_0x402e28;
        } else {
            if ((char)v45 == 0) {
                int32_t v50 = *(int32_t *)a7; // 0x4034c8
                v41 = 1;
                v49 = 4;
                v48 = 1;
                v47 = v39;
                if (v50 == 2 || v50 != 0) {
                    goto lab_0x402fa3;
                } else {
                    goto lab_0x403458;
                }
            } else {
                int64_t v51 = *(int64_t *)(a7 + 8); // 0x402dee
                if (v51 == 0) {
                    goto lab_0x402e04;
                } else {
                    // 0x402df7
                    if (*(int64_t *)v51 == *(int64_t *)(v39 + 8)) {
                        // 0x403720
                        if (*(int64_t *)v39 == *(int64_t *)(v51 + 8)) {
                            goto lab_0x4031b0;
                        } else {
                            goto lab_0x40372d;
                        }
                    } else {
                        goto lab_0x402e04;
                    }
                }
            }
        }
    }
  lab_0x402da8:
    // 0x402da8
    v37 = v4;
    v38 = v5;
    v39 = v27;
    int32_t v52; // 0x402d10
    int64_t v53; // bp-344, 0x402d10
    if ((*(int32_t *)(a2 + 144) & 0xf000) == 0xa000) {
        // 0x403558
        if (__fxstatat(1, *(int32_t *)(a1 + 44), v29, (struct stat *)&v53, 0) != 0) {
            // 0x4037f0
            if (*(char *)(a7 + 17) == 0) {
                // 0x403998
                function_405680(4, (int64_t *)v1);
                error(0, *__errno_location(), dcgettext(NULL, "cannot dereference %s", 5));
                int32_t v54 = *(int32_t *)a7; // 0x4039d3
                v41 = 0;
                v52 = v54;
                if (v54 != 2) {
                    goto lab_0x40380a;
                } else {
                    goto lab_0x402fa3;
                }
            } else {
                int32_t v55 = *(int32_t *)a7; // 0x4037fd
                v41 = 0;
                v52 = v55;
                if (v55 == 2) {
                    goto lab_0x402fa3;
                } else {
                    goto lab_0x40380a;
                }
            }
        } else {
            // 0x40358a
            v37 = (int64_t)*v2;
            v38 = v28;
            v39 = &v53;
            goto lab_0x402dc0;
        }
    } else {
        goto lab_0x402dc0;
    }
  lab_0x402fa3:
    // 0x402fa3
    if (*(char *)(a7 + 4) == 0) {
        // 0x403230
        fts_set(a1, a2, 4);
    }
    // 0x402fad
    return v41 & 0xffffffff;
  lab_0x4030a2:;
    int64_t v56 = 3; // 0x4030a4
    char * v57 = NULL; // 0x4030a4
    int64_t v58 = 0; // 0x4030a4
    int64_t v59 = 0; // 0x4030a4
    v41 = v43;
    if (v42 != 0) {
        goto lab_0x402fa3;
    } else {
        goto lab_0x402eeb;
    }
  lab_0x403138:
    // 0x403138
    v8 = v7;
    format = (int64_t)dcgettext(NULL, (char *)v9, 5);
    goto lab_0x40314a;
  lab_0x40314a:;
    int64_t v60 = v8;
    error(0, *(int32_t *)(a2 + 64), (char *)format);
    int32_t v61 = *(int32_t *)a7; // 0x403153
    v41 = v60;
    v42 = v61;
    v43 = v60;
    if (v61 != 2) {
        goto lab_0x4030a2;
    } else {
        goto lab_0x402fa3;
    }
  lab_0x402e28:;
    int32_t v62 = v38; // 0x402e28
    if (v62 == -1) {
        if ((char)v45 == 0) {
            goto lab_0x402e51;
        } else {
            int64_t v63 = *(int64_t *)(a7 + 8); // 0x403189
            if (v63 == 0) {
                goto lab_0x402e51;
            } else {
                // 0x403196
                if (*(int64_t *)(v39 + 8) != *(int64_t *)v63) {
                    goto lab_0x402e51;
                } else {
                    // 0x4031a3
                    if (*(int64_t *)v39 != *(int64_t *)(v63 + 8)) {
                        goto lab_0x402e51;
                    } else {
                        goto lab_0x4031b0;
                    }
                }
            }
        }
    } else {
        // 0x402e32
        if ((char)v45 == 0) {
            goto lab_0x402e48;
        } else {
            // 0x402e3b
            if (*(int64_t *)(a7 + 8) != 0) {
                // 0x403700
                int64_t v64; // 0x402e3b
                int64_t v65 = *(int64_t *)v64; // 0x403700
                int64_t v66; // 0x402d10
                int64_t v67 = *(int64_t *)(v66 + 8); // 0x403703
                if (v67 != v65) {
                    goto lab_0x402e48;
                } else {
                    int64_t v68 = *(int64_t *)(v64 + 8); // 0x40370d
                    int64_t v69 = *(int64_t *)v66; // 0x403711
                    if (v69 != v68) {
                        goto lab_0x402e48;
                    } else {
                        goto lab_0x4031b0;
                    }
                }
            } else {
                goto lab_0x402e48;
            }
        }
    }
  lab_0x402eeb:;
    int64_t v70 = v59;
    int64_t v71 = v58;
    char * v72 = v57;
    int64_t v73 = v56;
    int64_t v74 = *(int64_t *)(a7 + 32);
    int64_t v75 = *(int64_t *)(a7 + 24);
    int64_t v76 = function_402bd0(v75, v74); // 0x402ef1
    int64_t v77 = v74 != 0 ? v71 : 0; // 0x402efe
    int64_t v78 = 0x100000000 * v76 >> 32; // 0x402f04
    char * v79; // 0x402d10
    int64_t v80; // 0x402d10
    int64_t v81; // 0x402d10
    int64_t v82; // 0x402d10
    if (v75 == 0) {
        int64_t v83 = 0x100000000 * function_402bd0(0, v77) >> 32; // 0x403367
        int32_t v84 = v73; // 0x403370
        v81 = v83;
        if (v84 == 3) {
            goto lab_0x403330;
        } else {
            if (v84 != 4) {
                if (v74 == 0) {
                    // 0x4038d8
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "no change to ownership of %s\n", 5);
                } else {
                    // 0x4036be
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "changed group of %s from %s to %s\n", 5);
                }
            } else {
                if (v74 == 0) {
                    // 0x403698
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "ownership of %s retained\n", 5);
                } else {
                    // 0x40338c
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "group of %s retained as %s\n", 5);
                }
            }
            goto lab_0x402f50;
        }
    } else {
        int64_t v85 = 0x100000000 * function_402bd0(0x100000000 * (int64_t)v72 >> 32, v77) >> 32; // 0x402f1c
        v81 = v85;
        switch ((int32_t)v73) {
            case 3: {
                goto lab_0x403330;
            }
            case 4: {
                // 0x4034f0
                v82 = v78;
                v80 = v85;
                v79 = dcgettext(NULL, "ownership of %s retained as %s\n", 5);
                goto lab_0x402f50;
            }
            default: {
                // 0x402f37
                v82 = v78;
                v80 = v85;
                v79 = dcgettext(NULL, "changed ownership of %s from %s to %s\n", 5);
                goto lab_0x402f50;
            }
        }
    }
  lab_0x402e55:;
    int32_t * v86 = (int32_t *)(a1 + 44); // 0x402e55
    uint32_t v87 = *v86; // 0x402e55
    int64_t v88 = v87; // 0x402e55
    v36 = v88;
    v33 = v32;
    int64_t v89; // 0x402d10
    int32_t v90; // 0x402d10
    int32_t * v91; // 0x403252
    if (v35 != 0) {
        // 0x403248
        v89 = v88;
        if ((v28 & a5) == 0xffffffff) {
            goto lab_0x402e90;
        } else {
            // 0x403252
            v91 = (int32_t *)(v32 + 24);
            int32_t v92 = *v91 & 0xf000; // 0x403256
            v90 = 2304;
            if (v92 == 0x8000) {
                goto lab_0x403279;
            } else {
                // 0x403266
                v89 = v88;
                v90 = 0x10900;
                if (v92 != 0x4000) {
                    goto lab_0x402e90;
                } else {
                    goto lab_0x403279;
                }
            }
        }
    } else {
        goto lab_0x402e61;
    }
  lab_0x402e51:
    // 0x402e51
    v35 = *v30;
    v34 = v38;
    v32 = v39;
    goto lab_0x402e55;
  lab_0x402e48:
    if (*(int32_t *)(v39 + 32) != v62) {
        goto lab_0x40372d;
    } else {
        goto lab_0x402e51;
    }
  lab_0x403330:;
    int64_t v93 = v81;
    if ((v93 & 0xffffffff) == 0) {
        int64_t v94 = v74 != 0 ? (int64_t)"failed to change group of %s to %s\n" : (int64_t)"failed to change ownership of %s\n";
        int64_t v95 = v75 == 0 ? v94 : (int64_t)"failed to change ownership of %s to %s\n";
        v82 = 0;
        v80 = v78;
        v79 = dcgettext(NULL, (char *)v95, 5);
    } else {
        if (v75 == 0) {
            if (v74 == 0) {
                // 0x403930
                v82 = v78;
                v80 = v93;
                v79 = dcgettext(NULL, "failed to change ownership of %s\n", 5);
            } else {
                // 0x4035b9
                v82 = v78;
                v80 = v93;
                v79 = dcgettext(NULL, "failed to change group of %s from %s to %s\n", 5);
            }
        } else {
            // 0x40334a
            v82 = v78;
            v80 = v93;
            v79 = dcgettext(NULL, "failed to change ownership of %s from %s to %s\n", 5);
        }
    }
    goto lab_0x402f50;
  lab_0x402e61:;
    int64_t v128 = v33; // 0x402e80
    int64_t v104; // 0x402d10
    int64_t v98; // 0x402d10
    char * v96; // 0x402d10
    int64_t v97; // 0x402d10
    if ((int32_t)function_406a00(v36, (int32_t)v26, v25, (int32_t)group, 256) == 0) {
        goto lab_0x402e99;
    } else {
        int32_t v137 = *__errno_location(); // 0x402e87
        v104 = v33;
        if (v137 == 95) {
            int32_t v138 = *(int32_t *)a7; // 0x403748
            v41 = 1;
            if (v138 == 2 || v138 != 0) {
                goto lab_0x402fa3;
            } else {
                int64_t v139 = function_402cd0(*(int32_t *)(v33 + 28)); // 0x403764
                int64_t v140 = function_402c90((int64_t)*(int32_t *)(v33 + 32)); // 0x403772
                function_405680(4, (int64_t *)v1);
                __printf_chk(1, dcgettext(NULL, "neither symbolic link %s nor referent has been changed\n", 5));
                v96 = (char *)(v139 & 0xffffffff);
                v97 = 0x100000000 * v140 >> 32;
                v98 = 1;
                goto lab_0x402f8f;
            }
        } else {
            goto lab_0x4032c0;
        }
    }
  lab_0x40372d:;
    int32_t v141 = *(int32_t *)a7; // 0x40372d
    int32_t v136 = v141; // 0x403737
    int64_t v135 = 1; // 0x403737
    v41 = 1;
    if (v141 != 2) {
        goto lab_0x402e0f;
    } else {
        goto lab_0x402fa3;
    }
  lab_0x403458:;
    int64_t v119 = v49; // 0x403460
    int64_t v120 = v48; // 0x403460
    int32_t v121 = *(int32_t *)(v47 + 28); // 0x403460
    int32_t v122 = *(int32_t *)(v47 + 32); // 0x403460
    goto lab_0x402ecc;
  lab_0x402e04:;
    int32_t v142 = *(int32_t *)a7; // 0x402e04
    v136 = v142;
    v135 = v45;
    v41 = v45;
    if (v142 == 2) {
        goto lab_0x402fa3;
    } else {
        goto lab_0x402e0f;
    }
  lab_0x40380a:
    // 0x40380a
    v41 = 0;
    if (v52 != 0) {
        goto lab_0x402fa3;
    } else {
        // 0x403812
        v49 = 3;
        v48 = 0;
        v47 = &v53;
        goto lab_0x403458;
    }
  lab_0x402f50:
    // 0x402f50
    function_405680(4, (int64_t *)v1);
    __printf_chk(1, v79);
    free((int64_t *)(0x100000000 * v80 >> 32));
    free((int64_t *)(0x100000000 * v82 >> 32));
    v96 = v72;
    v97 = v71;
    v98 = v70;
    goto lab_0x402f8f;
  lab_0x402e99:;
    int32_t v129 = *(int32_t *)a7; // 0x402e99
    v41 = 1;
    int64_t v118; // 0x402d10
    if (v129 == 2) {
        goto lab_0x402fa3;
    } else {
        // 0x402ea4
        v118 = v128;
        if (owner == -1) {
            goto lab_0x4033a0;
        } else {
            int32_t v134 = *(int32_t *)(v118 + 28); // 0x402eae
            if (v134 == owner) {
                goto lab_0x4033a0;
            } else {
                // 0x402ebb
                v119 = 2;
                v120 = 1;
                v121 = v134;
                v122 = *(int32_t *)(v118 + 32);
                goto lab_0x402ecc;
            }
        }
    }
  lab_0x402e90:
    // 0x402e90
    v128 = v32;
    v104 = v32;
    if ((int32_t)function_406a00(v89, (int32_t)v26, v25, (int32_t)group, 0) != 0) {
        goto lab_0x4032c0;
    } else {
        goto lab_0x402e99;
    }
  lab_0x402e0f:
    // 0x402e0f
    v41 = v135;
    v49 = 4;
    v48 = v135;
    v47 = v39;
    if (v136 != 0) {
        goto lab_0x402fa3;
    } else {
        goto lab_0x403458;
    }
  lab_0x402ecc:
    // 0x402ecc
    v56 = v119;
    v57 = (char *)(function_402cd0(v121) & 0xffffffff);
    v58 = 0x100000000 * function_402c90((int64_t)v122) >> 32;
    v59 = v120;
    goto lab_0x402eeb;
  lab_0x402f8f:
    // 0x402f8f
    free((int64_t *)v96);
    free((int64_t *)v97);
    v41 = v98;
    goto lab_0x402fa3;
  lab_0x4032c0:;
    // 0x4032c0
    int32_t v99; // 0x402d10
    if (*(char *)(a7 + 17) == 0) {
        // 0x403468
        function_405680(4, (int64_t *)v1);
        char * format2; // 0x402d10
        if (owner == -1) {
            // 0x403660
            format2 = dcgettext(NULL, "changing group of %s", 5);
        } else {
            // 0x40348a
            format2 = dcgettext(NULL, "changing ownership of %s", 5);
        }
        // 0x403499
        error(0, *__errno_location(), format2);
        int32_t v100 = *(int32_t *)a7; // 0x4034b1
        v41 = 0;
        v99 = v100;
        if (v100 != 2) {
            goto lab_0x4032da;
        } else {
            goto lab_0x402fa3;
        }
    } else {
        int32_t v101 = *(int32_t *)a7; // 0x4032cd
        v41 = 0;
        v99 = v101;
        if (v101 == 2) {
            goto lab_0x402fa3;
        } else {
            goto lab_0x4032da;
        }
    }
  lab_0x403279:;
    int32_t v102 = __openat_2(v87, v29, v90); // 0x40328e
    int32_t fd = v102; // 0x4032a1
    if (v102 >= 0) {
        goto lab_0x4033d0;
    } else {
        int32_t * v103 = __errno_location(); // 0x4032a7
        v104 = v32;
        if (*v103 == 13) {
            // 0x403510
            if ((*v91 & 0xf000) == 0x8000) {
                int32_t v105 = __openat_2(v87, v29, v90 | 1); // 0x403845
                fd = v105;
                if (v105 >= 0) {
                    goto lab_0x4033d0;
                } else {
                    // 0x403863
                    v104 = v32;
                    if (*(int32_t *)(0x100000000 * (int64_t)v103 >> 32) != 13) {
                        goto lab_0x4032c0;
                    } else {
                        // 0x40352e
                        v89 = (int64_t)*v86;
                        goto lab_0x402e90;
                    }
                }
            } else {
                // 0x40352e
                v89 = (int64_t)*v86;
                goto lab_0x402e90;
            }
        } else {
            goto lab_0x4032c0;
        }
    }
  lab_0x4031b0:;
    int64_t v106 = v10 ? -1 : 1; // 0x4031be
    int64_t v107 = (int64_t)"/"; // 0x402d10
    int64_t v108 = v1; // 0x402d10
    int64_t v109 = 2; // 0x402d10
    unsigned char v110 = *(char *)v108; // 0x4031be
    char v111 = *(char *)v107; // 0x4031be
    char v112 = v111; // 0x4031be
    bool v113 = false; // 0x4031be
    while (v110 == v111) {
        int64_t v114 = v109 - 1; // 0x4031be
        v107 += v106;
        v108 += v106;
        v109 = v114;
        v112 = v110;
        v113 = true;
        if (v114 == 0) {
            // break -> 
            break;
        }
        v110 = *(char *)v108;
        v111 = *(char *)v107;
        v112 = v111;
        v113 = false;
    }
    unsigned char v115 = v112;
    if ((v110 >= v115 && !v113) != v110 < v115) {
        // 0x403944
        function_4055a0(1, 4, (int64_t *)"/");
        function_4055a0(0, 4, (int64_t *)v1);
        error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
    } else {
        // 0x4031cd
        function_405680(4, (int64_t *)v1);
        error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
    }
    // 0x403200
    error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
    // 0x402fad
    return 0;
  lab_0x4033a0:;
    int32_t v116 = group; // 0x4033a4
    if (v116 == -1) {
        goto lab_0x403678;
    } else {
        int32_t v117 = *(int32_t *)(v118 + 32); // 0x4033ad
        if (v117 == v116) {
            goto lab_0x403678;
        } else {
            // 0x4033ba
            v119 = 2;
            v120 = 1;
            v121 = *(int32_t *)(v118 + 28);
            v122 = v117;
            goto lab_0x402ecc;
        }
    }
  lab_0x4033d0:;
    // 0x4033d0
    int64_t v123; // bp-200, 0x402d10
    if (__fxstat(1, fd, (struct stat *)&v123) != 0) {
        goto lab_0x403630;
    } else {
        // 0x4033fe
        int64_t v124; // 0x402d10
        if (*(int64_t *)(v32 + 8) == v124) {
            // 0x403880
            if (*(int64_t *)v32 != v123) {
                goto lab_0x40341a;
            } else {
                int32_t v125 = a5; // 0x403891
                int32_t v126; // 0x402d10
                if (v125 == -1 || v126 == v125) {
                    int32_t v127 = v34; // 0x403a37
                    if (v127 != -1 == (v126 != v127)) {
                        goto lab_0x4038a9;
                    } else {
                        // 0x403a4b
                        if (fchown(fd, owner, (int32_t)group) != 0) {
                            goto lab_0x403630;
                        } else {
                            // 0x403a69
                            v128 = v32;
                            v104 = v32;
                            if (close(fd) != 0) {
                                goto lab_0x4032c0;
                            } else {
                                goto lab_0x402e99;
                            }
                        }
                    }
                } else {
                    goto lab_0x4038a9;
                }
            }
        } else {
            goto lab_0x40341a;
        }
    }
  lab_0x403678:
    // 0x403678
    v41 = 1;
    v49 = 4;
    v48 = 1;
    v47 = v118;
    if (v129 != 0) {
        goto lab_0x402fa3;
    } else {
        goto lab_0x403458;
    }
  lab_0x4032da:
    // 0x4032da
    v41 = 0;
    v49 = 3;
    v48 = 0;
    v47 = v104;
    if (v99 == 0) {
        goto lab_0x403458;
    } else {
        goto lab_0x402fa3;
    }
  lab_0x403630:;
    int32_t * v130 = __errno_location(); // 0x403634
    close(fd);
    v104 = v32;
    goto lab_0x4032c0;
  lab_0x40341a:;
    int32_t * v131 = __errno_location(); // 0x40341e
    close(fd);
    int32_t v132 = *(int32_t *)a7; // 0x403434
    v41 = 0;
    v49 = 3;
    v48 = 0;
    v47 = v32;
    if (v132 == 2 || v132 != 0) {
        goto lab_0x402fa3;
    } else {
        goto lab_0x403458;
    }
  lab_0x4038a9:;
    int32_t * v133 = __errno_location(); // 0x4038ad
    close(fd);
    v128 = v32;
    goto lab_0x402e99;
}
// Address range: 0x403a80 - 0x403b9e
int64_t function_403a80(int64_t a1, int64_t a2, int32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, int64_t * a7) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a2; // 0x403aa9
    if ((a6 & a5) == -1) {
        // 0x403b30
        v2 = a2;
        if (*(char *)(v1 + 16) == 0) {
            // 0x403b3c
            v2 = (*(int32_t *)a7 == 2 ? a2 | 8 : a2) & 0xffffffff;
        }
    }
    int64_t v3 = function_406550(a1, v2); // 0x403ab6
    int64_t v4 = fts_read(v3); // 0x403ae5
    int64_t v5 = 1; // 0x403aed
    if (v4 != 0) {
        // 0x403ac0
        int64_t v6; // bp-72, 0x403a80
        int64_t v7 = &v6; // 0x403a99
        int64_t v8 = 1;
        *(int64_t *)(v7 - 16) = v1;
        int32_t v9 = *(int32_t *)(v7 + 12); // 0x403acf
        v8 &= function_402d10(v3, v4, v9, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)&g57);
        int64_t v10 = fts_read(v3); // 0x403ae5
        v5 = v8;
        while (v10 != 0) {
            // 0x403ac0
            *(int64_t *)(v7 - 16) = v1;
            v9 = *(int32_t *)(v7 + 12);
            v8 &= function_402d10(v3, v10, v9, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)&g57);
            v10 = fts_read(v3);
            v5 = v8;
        }
    }
    int32_t * err_num = __errno_location(); // 0x403aef
    int64_t v11 = v5; // 0x403afb
    if (*err_num != 0) {
        // 0x403afd
        v11 = 0;
        if (*(char *)(v1 + 17) == 0) {
            // 0x403b78
            error(0, *err_num, dcgettext(NULL, "fts_read failed", 5));
            v11 = 0;
        }
    }
    int64_t v12 = v11; // 0x403b13
    if ((int32_t)fts_close(v3) != 0) {
        // 0x403b50
        error(0, *err_num, dcgettext(NULL, "fts_close failed", 5));
        v12 = 0;
    }
    // 0x403b15
    return v12 & 0xffffffff;
}
// Address range: 0x403ba0 - 0x403ba8
int64_t function_403ba0(int64_t a1) {
    // 0x403ba0
    g39 = a1;
    int64_t result; // 0x403ba0
    return result;
}
// Address range: 0x403bb0 - 0x403bb8
int64_t function_403bb0(int64_t a1) {
    // 0x403bb0
    g38 = a1;
    int64_t result; // 0x403bb0
    return result;
}
// Address range: 0x403bc0 - 0x403c5e
int64_t function_403bc0(void) {
    // 0x403bc0
    int32_t * err_num; // 0x403bd6
    if ((int32_t)function_409ec0((int64_t)g31) == 0) {
        goto lab_0x403bec;
    } else {
        // 0x403bd6
        err_num = __errno_location();
        if (g38 == 0) {
            goto lab_0x403c03;
        } else {
            // 0x403be7
            if (*err_num != 32) {
                goto lab_0x403c03;
            } else {
                goto lab_0x403bec;
            }
        }
    }
  lab_0x403bec:;
    int64_t result = function_409ec0((int64_t)g33); // 0x403bf3
    if ((int32_t)result == 0) {
        // 0x403bfc
        return result;
    }
    // 0x403c3e
    _exit(g20);
    // UNREACHABLE
  lab_0x403c03:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x403c0f
    if (g39 == 0) {
        // 0x403c49
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403c23
        error(0, *err_num, "%s: %s", (char *)function_405720((int64_t)g39), v1);
    }
    // 0x403c3e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x403c60 - 0x403ca8
int64_t function_403c60(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x403c60
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403c72
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x403c7b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x403ca4
    return result;
}
// Address range: 0x403cb0 - 0x403d49
int64_t function_403cb0(int64_t str) {
    // 0x403cb0
    if (str == 0) {
        // 0x403d29
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403cbe
    int64_t result = (int64_t)found_char_pos; // 0x403cbe
    if (found_char_pos == NULL) {
        // 0x403d19
        g40 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403cc8
    if (v1 - str < 7) {
        // 0x403d19
        g40 = str;
        g32 = str;
        return result;
    }
    // 0x403cd8
    bool v2; // 0x403cb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403cb0
    int64_t v5 = result - 6; // 0x403cb0
    int64_t v6 = 7; // 0x403ce6
    unsigned char v7 = *(char *)v5; // 0x403ce6
    char v8 = *(char *)v4; // 0x403ce6
    char v9 = v8; // 0x403ce6
    bool v10 = false; // 0x403ce6
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
    int64_t v12 = (int64_t)"lt-"; // 0x403cf0
    int64_t v13 = v1; // 0x403cf0
    int64_t v14 = 3; // 0x403cf0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403d19
        g40 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403d02
    char v16 = *(char *)v12; // 0x403d02
    char v17 = v16; // 0x403d02
    bool v18 = false; // 0x403d02
    while (v15 == v16) {
        // 0x403cf2
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
    int64_t v20 = v1; // 0x403d0c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403d0e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x403d19
    g40 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x403d50 - 0x403e42
int64_t function_403d50(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403d64
    int64_t result = (int64_t)v1; // 0x403d64
    if (result != a1) {
        // 0x403d71
        return result;
    }
    int64_t v2 = function_40b370(); // 0x403d80
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403e36
    if (v3 == 85) {
        // 0x403d90
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403e28
            result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x403dbe
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x403dcb
        // 0x403d71
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403e28
        result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x403e0d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x403e1a
    // 0x403d71
    return result4;
}
// Address range: 0x403e50 - 0x403ea7
int64_t function_403e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403e50
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403e98
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403ea7 - 0x405071
int64_t function_403ea7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403ef1
    int64_t v3 = 0; // 0x403ef1
    int64_t v4; // 0x403ea7
    int64_t v5; // 0x403ea7
    int64_t v6; // 0x403ea7
    int64_t v7; // 0x403ea7
    int64_t v8; // 0x403ea7
    int64_t v9; // 0x403ea7
    int64_t v10; // 0x403ea7
    int64_t v11; // 0x403ea7
    int64_t v12; // 0x403ea7
    int64_t v13; // 0x403ea7
    int64_t v14; // 0x403ea7
    int64_t v15; // 0x403ea7
    int64_t v16; // 0x403ea7
    int64_t v17; // 0x403ea7
    int64_t v18; // 0x403ea7
    int64_t result; // 0x403ea7
    int64_t v19; // 0x403ea7
    int32_t wc; // bp+132, 0x403ea7
    int64_t ps; // bp+136, 0x403ea7
    char v20; // 0x404460
    int64_t v21; // 0x404460
    int64_t v22; // 0x404808
    int64_t v23; // 0x403ea7
    int64_t v24; // 0x404827
    int32_t v25; // 0x403ea7
    while (true) {
      lab_0x403ef8_2:
        // 0x403ef8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403ea7
        int64_t v27; // 0x403f2c
        while (true) {
          lab_0x403ef8:
            // 0x403ef8
            v5 = v26;
            bool v28 = v15 == v5; // 0x403f03
            if (v15 == -1) {
                // 0x403f05
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403f13
            if (v28) {
                // break (via goto) -> 0x404678
                goto lab_0x404678;
            }
            // 0x403f1c
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
                    // 0x40450b
                    if (v25 % 2 == 0) {
                        goto lab_0x404051;
                    }
                    // 0x40492d
                    v26 = v5 + 1;
                    goto lab_0x403ef8;
                }
                case 7: {
                    goto lab_0x404051;
                }
                case 8: {
                    goto lab_0x404051;
                }
                case 9: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x404051;
                }
                case 12: {
                    goto lab_0x404051;
                }
                case 13: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40401d;
                }
                case 36: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x404051;
                }
                case 38: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x404051;
                }
                case 44: {
                    goto lab_0x404051;
                }
                case 45: {
                    goto lab_0x404051;
                }
                case 46: {
                    goto lab_0x404051;
                }
                case 47: {
                    goto lab_0x404051;
                }
                case 48: {
                    goto lab_0x404051;
                }
                case 49: {
                    goto lab_0x404051;
                }
                case 50: {
                    goto lab_0x404051;
                }
                case 51: {
                    goto lab_0x404051;
                }
                case 52: {
                    goto lab_0x404051;
                }
                case 53: {
                    goto lab_0x404051;
                }
                case 54: {
                    goto lab_0x404051;
                }
                case 55: {
                    goto lab_0x404051;
                }
                case 56: {
                    goto lab_0x404051;
                }
                case 57: {
                    goto lab_0x404051;
                }
                case 58: {
                    goto lab_0x404051;
                }
                case 59: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x404051;
                }
                case 66: {
                    goto lab_0x404051;
                }
                case 67: {
                    goto lab_0x404051;
                }
                case 68: {
                    goto lab_0x404051;
                }
                case 69: {
                    goto lab_0x404051;
                }
                case 70: {
                    goto lab_0x404051;
                }
                case 71: {
                    goto lab_0x404051;
                }
                case 72: {
                    goto lab_0x404051;
                }
                case 73: {
                    goto lab_0x404051;
                }
                case 74: {
                    goto lab_0x404051;
                }
                case 75: {
                    goto lab_0x404051;
                }
                case 76: {
                    goto lab_0x404051;
                }
                case 77: {
                    goto lab_0x404051;
                }
                case 78: {
                    goto lab_0x404051;
                }
                case 79: {
                    goto lab_0x404051;
                }
                case 80: {
                    goto lab_0x404051;
                }
                case 81: {
                    goto lab_0x404051;
                }
                case 82: {
                    goto lab_0x404051;
                }
                case 83: {
                    goto lab_0x404051;
                }
                case 84: {
                    goto lab_0x404051;
                }
                case 85: {
                    goto lab_0x404051;
                }
                case 86: {
                    goto lab_0x404051;
                }
                case 87: {
                    goto lab_0x404051;
                }
                case 88: {
                    goto lab_0x404051;
                }
                case 89: {
                    goto lab_0x404051;
                }
                case 90: {
                    goto lab_0x404051;
                }
                case 91: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x404051;
                }
                case 94: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x404051;
                }
                case 96: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x404051;
                }
                case 98: {
                    goto lab_0x404051;
                }
                case 99: {
                    goto lab_0x404051;
                }
                case 100: {
                    goto lab_0x404051;
                }
                case 101: {
                    goto lab_0x404051;
                }
                case 102: {
                    goto lab_0x404051;
                }
                case 103: {
                    goto lab_0x404051;
                }
                case 104: {
                    goto lab_0x404051;
                }
                case 105: {
                    goto lab_0x404051;
                }
                case 106: {
                    goto lab_0x404051;
                }
                case 107: {
                    goto lab_0x404051;
                }
                case 108: {
                    goto lab_0x404051;
                }
                case 109: {
                    goto lab_0x404051;
                }
                case 110: {
                    goto lab_0x404051;
                }
                case 111: {
                    goto lab_0x404051;
                }
                case 112: {
                    goto lab_0x404051;
                }
                case 113: {
                    goto lab_0x404051;
                }
                case 114: {
                    goto lab_0x404051;
                }
                case 115: {
                    goto lab_0x404051;
                }
                case 116: {
                    goto lab_0x404051;
                }
                case 117: {
                    goto lab_0x404051;
                }
                case 118: {
                    goto lab_0x404051;
                }
                case 119: {
                    goto lab_0x404051;
                }
                case 120: {
                    goto lab_0x404051;
                }
                case 121: {
                    goto lab_0x404051;
                }
                case 122: {
                    goto lab_0x404051;
                }
                case 123: {
                    goto lab_0x403ff5;
                }
                case 124: {
                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403ff5;
                }
                case 126: {
                    goto lab_0x40401d;
                }
                default: {
                    goto lab_0x4043f5;
                }
            }
        }
      lab_0x4043f5:
        if (v23 != 1) {
            // 0x404760
            ps = 0;
            int64_t len = v15; // 0x404770
            if (v15 == -1) {
                // 0x404772
                len = strlen((char *)str);
            }
            // 0x40479e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4047ff:
                // 0x4047ff
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404804
                int64_t v30 = v29 + str;
                v24 = function_409d10(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x404d7a_2;
                    }
                    case -1: {
                        goto lab_0x404d7a_2;
                    }
                    case -2: {
                        // 0x404e5d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404e97
                            v19 = v18;
                            int64_t v31 = v18; // 0x404e9a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404ea7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404ea0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x404d7a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x404d7a_2;
                    }
                    case 1: {
                        goto lab_0x4047d0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40487c
                        char v34 = *(char *)v33; // 0x40488d
                        unsigned char v35; // 0x403ea7
                        if (v34 < 125) {
                            // 0x404898
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4048af
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404880
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40488d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404898
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4048af
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404880
                            v33++;
                        }
                        goto lab_0x4047d0;
                    }
                }
            }
            goto lab_0x404d7a_2;
        } else {
            // 0x404444
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404051;
        }
    }
  lab_0x404678:
    // 0x404678
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x404f7a
        if (v8 > result) {
            // 0x404f83
            *(char *)(v12 + result) = 0;
        }
        // 0x4042a7
        return result;
    }
    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404051:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x404060
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40426a_2;
        }
    }
    int64_t v39 = result; // 0x404161
    char v40 = v20; // 0x404161
    int64_t v41 = v38; // 0x404161
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404161
    int64_t v43 = v36; // 0x404161
    goto lab_0x4040dd;
  lab_0x40426a_2:
    // 0x4042a7
    return function_403e50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404d7a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x404051;
    } else {
        uint64_t v49 = v46 + v5; // 0x40494e
        int64_t v50 = v5 + 1; // 0x404a31
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404a38
        char v52 = v20; // 0x404a38
        int64_t v53 = result; // 0x404a38
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404a01
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404a05
            int64_t v56 = v54 + 1; // 0x404a0a
            int64_t v57 = v51 + 1; // 0x404a31
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4049fc
                v54 = v56;
                if (v47 > v54) {
                    // 0x404a01
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404a05
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
        goto lab_0x4040dd;
    }
  lab_0x4047d0:
    // 0x4047d0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4047ef
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4047f2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x404d7a
        goto lab_0x404d7a_2;
    }
    goto lab_0x4047ff;
  lab_0x40401d:
    // 0x40401d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40426a_2;
    }
    goto lab_0x404051;
  lab_0x403ff5:;
    bool v60 = v15 == 1; // 0x404000
    if (v15 == -1) {
        // 0x404002
        v60 = *(char *)v1 == 0;
    }
    // 0x40400e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x404051;
    } else {
        goto lab_0x40401d;
    }
  lab_0x4040dd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4040e2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4040e6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403ef8_2;
}
// Address range: 0x405080 - 0x40521e
int64_t function_405080(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405082
    int32_t * v3 = __errno_location(); // 0x40509c
    int32_t v4 = v2; // 0x4050b1
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g22; // 0x4050a1
    int32_t v6 = *v3; // 0x4050ab
    int64_t v7 = v5; // 0x4050c1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if (v4 == 0x7fffffff) {
            // 0x405219
            function_406510(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x4050d0
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x4050d7
        int64_t v10; // 0x405080
        if (g22 == &g23) {
            int64_t v11 = function_406320(0, v9); // 0x4051fa
            int128_t v12 = __asm_movdqa(*(int128_t *)&g23); // 0x4051ff
            *(int64_t *)&g22 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_406320(v5, v9); // 0x4050eb
            *(int64_t *)&g22 = v13;
            v10 = v13;
        }
        // 0x4050fa
        v7 = v10;
        int32_t v14 = *(int32_t *)&g25; // 0x4050fa
        int32_t v15 = v8; // 0x405101
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g25 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x405131
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40513b
    int64_t * v18 = (int64_t *)v16; // 0x40513e
    uint64_t v19 = *v18; // 0x40513e
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x405141
    int64_t result = *v20; // 0x405141
    int64_t v21; // 0x405080
    uint64_t v22 = function_403e50(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x405164
    if (v19 > v22) {
        // 0x4051db
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x405177
    *v18 = v23;
    if (result != (int64_t)&g41) {
        // 0x405187
        free((int64_t *)result);
    }
    int64_t result2 = function_4062c0(v23); // 0x4051a1
    *v20 = result2;
    int64_t v24; // 0x405080
    function_403e50(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x4051db
    *v3 = v6;
    return result2;
}
// Address range: 0x405220 - 0x405254
int64_t function_405220(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405227
    int64_t result = function_4064c0(a1 == 0 ? (int64_t)&g42 : a1, 56); // 0x405246
    return result;
}
// Address range: 0x405260 - 0x40526f
int64_t function_405260(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g42 : a1); // 0x40526c
    return result;
}
// Address range: 0x405270 - 0x40527f
int64_t function_405270(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 : a1; // 0x405278
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g42;
}
// Address range: 0x405280 - 0x4052b3
int64_t function_405280(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 + 8 : a1 + 8; // 0x405299
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40529e
    uint32_t v3 = *v2; // 0x40529e
    uint32_t v4 = (int32_t)a2 % 32; // 0x4052a2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4052c0 - 0x4052d3
int64_t function_4052c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g42 + 4 : a1 + 4); // 0x4052cc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4052e0 - 0x40530b
int64_t function_4052e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 : a1; // 0x4052e8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x405305
        abort();
        // UNREACHABLE
    }
    // 0x4052fc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g42;
}
// Address range: 0x405310 - 0x405382
int64_t function_405310(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g42 : a5; // 0x405332
    int32_t * v2 = __errno_location(); // 0x40533b
    uint32_t v3 = *(int32_t *)v1; // 0x40535b
    int64_t result = function_403e50(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40536a
    return result;
}
// Address range: 0x405390 - 0x405471
int64_t function_405390(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g42 : a4; // 0x4053b2
    int32_t * v2 = __errno_location(); // 0x4053b8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4053d7
    int32_t * v4 = (int32_t *)v1; // 0x4053da
    int64_t v5 = function_403e50(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4053f5
    int64_t v6 = v5 + 1; // 0x4053fa
    int64_t result = function_4062c0(v6); // 0x40540f
    function_403e50(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405454
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40545d
    return result;
}
// Address range: 0x405480 - 0x40548a
int64_t function_405480(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405480
    return function_405390(a1, a2, 0, a3);
}
// Address range: 0x405490 - 0x405525
int64_t function_405490(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x405490
    int64_t v2 = v1; // 0x405490
    int64_t v3 = v2; // 0x4054a4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x4054c3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g57;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4054c0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g57;
        }
    }
    int64_t v6 = v3; // 0x4054dd
    if (g23 != 0x6123c0) {
        // 0x4054df
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g41;
        v6 = &g57;
    }
    int64_t result = v6; // 0x405501
    if (g22 != &g23) {
        // 0x405503
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g57;
    }
    // 0x405516
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x405530 - 0x405541
int64_t function_405530(void) {
    // 0x405530
    int64_t v1; // 0x405530
    return function_405080(v1, v1, -1, (int64_t *)&g42);
}
// Address range: 0x405550 - 0x40555a
int64_t function_405550(void) {
    // 0x405550
    int64_t v1; // 0x405550
    return function_405080(v1, v1, v1, (int64_t *)&g42);
}
// Address range: 0x405560 - 0x405576
int64_t function_405560(int64_t a1) {
    // 0x405560
    return function_405080(0, a1, -1, (int64_t *)&g42);
}
// Address range: 0x405580 - 0x405592
int64_t function_405580(int64_t a1, int64_t a2) {
    // 0x405580
    return function_405080(0, a1, a2, (int64_t *)&g42);
}
// Address range: 0x4055a0 - 0x405608
int64_t function_4055a0(int64_t a1, int64_t a2, int64_t * a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4055b0
    return function_405080(a1, (int64_t)a3, -1, &v1);
}
// Address range: 0x405610 - 0x405674
int64_t function_405610(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405620
    return function_405080((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405680 - 0x40568c
int64_t function_405680(int64_t a1, int64_t * a2) {
    // 0x405680
    return function_4055a0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405690 - 0x40569f
int64_t function_405690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405690
    return function_405610(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4056a0 - 0x405710
int64_t function_4056a0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g42); // 0x4056ad
    int128_t v2 = __asm_movdqa(g43); // 0x4056b5
    int128_t v3 = __asm_movdqa(g44); // 0x4056bd
    int64_t v4 = __asm_movaps_6(v1); // bp-72, 0x4056d2
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4056e8
    uint32_t v6 = *v5; // 0x4056e8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4056ed
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405080(0, a1, a2, &v4);
}
// Address range: 0x405710 - 0x40571d
int64_t function_405710(int64_t a1, int64_t a2) {
    // 0x405710
    return function_4056a0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405720 - 0x405731
int64_t function_405720(int64_t a1) {
    // 0x405720
    return function_4056a0(a1, -1, 58);
}
// Address range: 0x405740 - 0x40574a
int64_t function_405740(void) {
    // 0x405740
    int64_t v1; // 0x405740
    return function_4056a0(v1, v1, 58);
}
// Address range: 0x405750 - 0x4057be
int64_t function_405750(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40576a
    return function_405080((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4057c0 - 0x40582c
int64_t function_4057c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g42); // 0x4057c7
    int128_t v2 = __asm_movdqa(g43); // 0x4057cf
    int128_t v3 = __asm_movdqa(g44); // 0x4057d7
    __asm_movaps_6(v1);
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int64_t v4 = 10; // bp-72, 0x4057f9
    if (a2 == 0 || a3 == 0) {
        // 0x405827
        abort();
        // UNREACHABLE
    }
    // 0x40580a
    return function_405080(a1, a4, a5, &v4);
}
// Address range: 0x405830 - 0x405839
int64_t function_405830(void) {
    // 0x405830
    int64_t v1; // 0x405830
    return function_4057c0(v1, v1, v1, v1, -1);
}
// Address range: 0x405840 - 0x405857
int64_t function_405840(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405840
    return function_4057c0(0, a1, a2, a3, -1);
}
// Address range: 0x405860 - 0x405873
int64_t function_405860(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405860
    return function_4057c0(0, a1, a2, a3, a4);
}
// Address range: 0x405880 - 0x40588a
int64_t function_405880(void) {
    // 0x405880
    int64_t v1; // 0x405880
    return function_405080(v1, v1, v1, &g21);
}
// Address range: 0x405890 - 0x4058a2
int64_t function_405890(int64_t a1, int64_t a2) {
    // 0x405890
    return function_405080(0, a1, a2, &g21);
}
// Address range: 0x4058b0 - 0x4058c1
int64_t function_4058b0(void) {
    // 0x4058b0
    int64_t v1; // 0x4058b0
    return function_405080(v1, v1, -1, &g21);
}
// Address range: 0x4058d0 - 0x4058e6
int64_t function_4058d0(int64_t a1) {
    // 0x4058d0
    return function_405080(0, a1, -1, &g21);
}
// Address range: 0x4058f0 - 0x40593b
int64_t function_4058f0(int64_t * a1) {
    // 0x4058f0
    int64_t v1; // bp-152, 0x4058f0
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x405930
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x405940 - 0x405c4d
int64_t function_405940(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    if (a5 != 0) {
        // 0x405978
        *(int64_t *)a5 = 0;
    }
    if (a6 != 0) {
        // 0x405985
        *(int64_t *)a6 = 0;
    }
    int32_t v2 = a3;
    int64_t v3; // 0x405940
    int64_t v4 = a4 == 0 ? 0xffffffff : v3 & 0xffffffff;
    char * name; // 0x405940
    int64_t v5; // 0x405940
    int64_t v6; // 0x405940
    int64_t v7; // 0x405940
    int64_t v8; // 0x405940
    int64_t v9; // 0x405940
    int64_t v10; // 0x405940
    int64_t v11; // 0x405940
    int64_t v12; // 0x405940
    int64_t v13; // 0x405940
    int64_t v14; // 0x405940
    int32_t v15; // 0x405940
    if (a2 == 0) {
        // 0x405b18
        v15 = v2;
        v11 = 0;
        v8 = 0;
        v10 = v4;
        if (*(char *)&v1 == 0) {
            goto lab_0x4059ef;
        } else {
            // 0x405b26
            v13 = function_4064f0(v1);
            goto lab_0x405b38;
        }
    } else {
        int64_t v16 = a2 - v1; // 0x405999
        if (v16 != 0) {
            int64_t v17 = function_4064c0(v1, v16 + 1); // 0x405a49
            *(char *)(v17 + v16) = 0;
            int64_t v18 = a2 + 1; // 0x405a5b
            v13 = v17;
            if (*(char *)v18 == 0) {
                goto lab_0x405b38;
            } else {
                // 0x405a66
                v7 = v18;
                if (v17 == 0) {
                    goto lab_0x4059b1;
                } else {
                    int64_t v19 = v18 == 0; // 0x405a76
                    char * v20 = (char *)v17;
                    name = v20;
                    v5 = v19;
                    v12 = v17;
                    v9 = v18;
                    v6 = v19;
                    v14 = v17;
                    if (*v20 == 43) {
                        goto lab_0x405b56;
                    } else {
                        goto lab_0x405a8a;
                    }
                }
            }
        } else {
            int64_t v21 = a2 + 1; // 0x4059a2
            v7 = v21;
            v15 = v2;
            v11 = 0;
            v8 = 0;
            v10 = v4;
            if (*(char *)v21 == 0) {
                goto lab_0x4059ef;
            } else {
                goto lab_0x4059b1;
            }
        }
    }
  lab_0x4059ef:
    // 0x4059ef
    *(int32_t *)a3 = v15;
    if (a4 != 0) {
        // 0x4059ff
        *(int32_t *)a4 = (int32_t)v10;
    }
    int64_t v22 = v11; // 0x405a06
    if (a5 != 0) {
        // 0x405a08
        *(int64_t *)a5 = v11;
        v22 = 0;
    }
    int64_t v23 = v8; // 0x405a11
    if (a6 != 0) {
        // 0x405a13
        *(int64_t *)a6 = v8;
        v23 = 0;
    }
    // 0x405a1a
    free((int64_t *)v22);
    free((int64_t *)v23);
    return (int32_t)&g57 ^ (int32_t)&g57;
  lab_0x405b38:
    // 0x405b38
    v15 = v2;
    v11 = 0;
    v8 = 0;
    v10 = v4;
    if (v13 == 0) {
        goto lab_0x4059ef;
    } else {
        int64_t v24 = a2 != 0; // 0x405b4b
        char * v25 = (char *)v13;
        name = v25;
        v5 = v24;
        v12 = v13;
        v9 = 0;
        v6 = v24;
        v14 = v13;
        if (*v25 != 43) {
            goto lab_0x405a8a;
        } else {
            goto lab_0x405b56;
        }
    }
  lab_0x4059b1:
    // 0x4059b1
    v15 = v2;
    v11 = 0;
    v8 = 0;
    v10 = v4;
    if (v7 == 0) {
        goto lab_0x4059ef;
    } else {
        goto lab_0x4059c0;
    }
  lab_0x4059c0:;
    int64_t v26 = 0;
    char * v27 = (char *)v7;
    char * name2 = v27; // 0x4059c4
    int32_t v28 = v2; // 0x4059c4
    int64_t v29 = v26; // 0x4059c4
    int64_t v30 = v7; // 0x4059c4
    int32_t v31 = v2; // 0x4059c4
    int64_t v32 = v26; // 0x4059c4
    int64_t v33 = v7; // 0x4059c4
    if (*v27 == 43) {
        goto lab_0x405acb;
    } else {
        goto lab_0x4059ca;
    }
  lab_0x405a8a:;
    struct passwd * v34 = getpwnam(name); // 0x405a91
    v6 = v5;
    v14 = v12;
    int32_t v35; // bp-88, 0x405940
    if (v34 == NULL) {
        goto lab_0x405b56;
    } else {
        int64_t v36 = (int64_t)v34; // 0x405a91
        int32_t v37 = *(int32_t *)(v36 + 16); // 0x405aa4
        if (v5 != 0) {
            uint32_t gid = *(int32_t *)(v36 + 20); // 0x405ba8
            int64_t v38 = gid; // 0x405ba8
            struct group * v39 = getgrgid(gid); // 0x405baf
            int64_t v40; // 0x405940
            if (v39 == NULL) {
                // 0x405c38
                v40 = function_403c60(v38, (int64_t *)&v35);
            } else {
                // 0x405bb9
                v40 = *(int64_t *)v39;
            }
            // 0x405bbc
            v1 = v40;
            int64_t v41 = function_4064f0(v40); // 0x405bbc
            endgrent();
            endpwent();
            v15 = v37;
            v11 = v12;
            v8 = v41;
            v10 = v38;
            goto lab_0x4059ef;
        } else {
            // 0x405ab3
            endpwent();
            v15 = v37;
            v11 = v12;
            v8 = 0;
            v10 = v4;
            if (v9 == 0) {
                goto lab_0x4059ef;
            } else {
                char * v42 = (char *)v9;
                name2 = v42;
                v28 = v37;
                v29 = v12;
                v30 = v9;
                v31 = v37;
                v32 = v12;
                v33 = v9;
                if (*v42 != 43) {
                    goto lab_0x4059ca;
                } else {
                    goto lab_0x405acb;
                }
            }
        }
    }
  lab_0x405b56:;
    // 0x405b56
    int64_t v43; // 0x405940
    int64_t * v44; // 0x405940
    int64_t v45; // 0x405940
    if ((char)v6 == 0) {
        int64_t v46 = function_4065d0(v14, 0, 10, (int64_t *)&v35, (int64_t *)&g10, a6); // 0x405bed
        if ((int32_t)v46 != 0) {
            goto lab_0x405c20;
        } else {
            // 0x405bf6
            if (v35 > -1) {
                // 0x405c09
                int64_t v47; // 0x405940
                int64_t v48 = v47;
                endpwent();
                int32_t v49; // 0x405bf6
                v15 = v49;
                int64_t v50; // 0x405940
                v11 = v50;
                v8 = 0;
                v10 = v4;
                if (v48 == 0) {
                    goto lab_0x4059ef;
                } else {
                    goto lab_0x4059c0;
                }
            } else {
                goto lab_0x405c20;
            }
        }
    } else {
        // 0x405b5a
        endpwent();
        v45 = v14;
        v44 = NULL;
        v43 = (int64_t)"invalid spec";
        goto lab_0x405b67;
    }
  lab_0x405acb:;
    int64_t v51 = function_4065d0(v33, 0, 10, (int64_t *)&v35, (int64_t *)&g10, a6); // 0x405ae0
    int64_t v52; // 0x405940
    int64_t v53; // 0x405940
    int64_t v54; // 0x405940
    int32_t v55; // 0x405940
    if ((int32_t)v51 != 0) {
        goto lab_0x405afc;
    } else {
        // 0x405ae9
        v55 = v31;
        v54 = v32;
        v52 = v33;
        v53 = v35;
        if (v35 > -1) {
            goto lab_0x4059df;
        } else {
            goto lab_0x405afc;
        }
    }
  lab_0x4059ca:;
    struct group * v56 = getgrnam(name2); // 0x4059cd
    v31 = v28;
    v32 = v29;
    v33 = v30;
    if (v56 == NULL) {
        goto lab_0x405acb;
    } else {
        // 0x4059db
        v55 = v28;
        v54 = v29;
        v52 = v30;
        v53 = (int64_t)*(int32_t *)((int64_t)v56 + 16);
        goto lab_0x4059df;
    }
  lab_0x405afc:
    // 0x405afc
    endgrent();
    v45 = v32;
    v44 = (int64_t *)function_4064f0(v33);
    v43 = (int64_t)"invalid group";
    goto lab_0x405b67;
  lab_0x405c20:
    // 0x405c20
    endpwent();
    v45 = v14;
    v44 = NULL;
    v43 = (int64_t)"invalid user";
    goto lab_0x405b67;
  lab_0x405b67:
    // 0x405b67
    free((int64_t *)v45);
    free(v44);
    return (int64_t)dcgettext(NULL, (char *)v43, 5);
  lab_0x4059df:
    // 0x4059df
    endgrent();
    v15 = v55;
    v11 = v54;
    v8 = function_4064f0(v52);
    v10 = v53;
    goto lab_0x4059ef;
}
// Address range: 0x405c50 - 0x405d1d
int64_t function_405c50(int64_t a1, int32_t * a2, int32_t * a3, int32_t a4, int32_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a4;
    int64_t v3 = (int64_t)a2;
    if (a3 == NULL) {
        // 0x405d00
        return function_405940(a1, 0, v3, 0, v2, v1);
    }
    int64_t v4 = (int64_t)a3;
    char * str = (char *)a1; // 0x405c7b
    char * found_char_pos = strchr(str, 58); // 0x405c7b
    int64_t result = function_405940(a1, (int64_t)found_char_pos, v3, v4, v2, v1); // 0x405c95
    if (found_char_pos != NULL) {
        // 0x405ce4
        return result;
    }
    if (result == 0) {
        // 0x405ce4
        return 0;
    }
    char * found_char_pos2 = strchr(str, 46); // 0x405cb4
    if (found_char_pos2 == NULL || function_405940(a1, (int64_t)found_char_pos2, v3, v4, v2, v1) != 0) {
        // 0x405ce4
        return 0x100000000 * result >> 32;
    }
    // 0x405ce4
    return 0;
}
// Address range: 0x405d20 - 0x4060fd
int64_t function_405d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405db8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405d3c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405d56
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405d9b
    if (a6 < 10) {
        // 0x405daa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405ea2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x406100 - 0x406120
int64_t function_406100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406100
    if (a5 == 0) {
        // 0x40611b
        return function_405d20(a1, a2, a3, a4, a5, 0, (int64_t)&g57);
    }
    int64_t v1 = 0; // 0x406107
    v1++;
    int64_t v2 = v1; // 0x406119
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406110
        v1++;
        v2 = v1;
    }
    // 0x40611b
    return function_405d20(a1, a2, a3, a4, a5, v2, (int64_t)&g57);
}
// Address range: 0x406120 - 0x406180
int64_t function_406120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x406120
    int64_t v3 = &v2; // 0x406120
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406153
    int64_t v6; // 0x40613d
    int64_t * v7; // 0x40615b
    int64_t v8; // 0x40615b
    int64_t v9; // 0x406167
    if (v5 < 48) {
        // 0x406130
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406173
            break;
        }
    } else {
        // 0x40615b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406173
            break;
        }
    }
    int64_t v10 = 10; // 0x406151
    while (v4 != 9) {
        // 0x406149
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406130
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406173
                break;
            }
        } else {
            // 0x40615b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406173
                break;
            }
        }
        // 0x406149
        v10 = 10;
    }
    // 0x406173
    return function_405d20(a1, a2, a3, a4, v3, v10, (int64_t)&g57);
}
// Address range: 0x406180 - 0x40623c
int64_t function_406180(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x406180
    int64_t v1; // bp-168, 0x406180
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406180
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406180
    int64_t v8; // 0x406180
    int64_t v9; // bp-56, 0x406180
    int64_t v10; // 0x4061e5
    int64_t v11; // 0x406209
    if ((int32_t)v6 < 48) {
        // 0x4061d0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406220
            break;
        }
    } else {
        // 0x406202
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406220
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4061fa
    int64_t v13 = 10; // 0x4061fa
    while (v5 != 9) {
        // 0x4061fc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4061d0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406220
                break;
            }
        } else {
            // 0x406202
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406220
                break;
            }
        }
        // 0x4061f2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406220
    int64_t v14; // bp-136, 0x406180
    int64_t result = function_405d20(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g57); // 0x40622f
    return result;
}
// Address range: 0x406240 - 0x4062b4
int64_t function_406240(int64_t a1) {
    // 0x406240
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4062a3
    return fputs_unlocked(v1, g31);
}
// Address range: 0x4062c0 - 0x4062da
int64_t function_4062c0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4062c4
    if (size != 0 != (mem == NULL)) {
        // 0x4062d3
        return (int64_t)mem;
    }
    // 0x4062d5
    function_406510(size);
    // UNREACHABLE
}
// Address range: 0x4062e0 - 0x406301
int64_t function_4062e0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4062e3
    int64_t v2 = v1; // 0x4062e3
    if (v2 < 0) {
        // 0x4062fb
        function_406510(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4062f9
        return function_4062c0(v2);
    }
    // 0x4062fb
    function_406510(v2);
    // UNREACHABLE
}
// Address range: 0x406310 - 0x406312
int64_t function_406310(void) {
    // 0x406310
    int64_t v1; // 0x406310
    return function_4062c0(v1);
}
// Address range: 0x406320 - 0x406356
int64_t function_406320(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406348
        free(v1);
        return (int32_t)&g57 ^ (int32_t)&g57;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406331
    if (a2 != 0 != (mem == NULL)) {
        // 0x406340
        return (int64_t)mem;
    }
    // 0x406351
    function_406510(a1);
    // UNREACHABLE
}
// Address range: 0x406360 - 0x406381
int64_t function_406360(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406363
    int64_t v2 = v1; // 0x406363
    if (v2 < 0) {
        // 0x40637b
        function_406510(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406379
        return function_406320(a1, v2);
    }
    // 0x40637b
    function_406510(a1);
    // UNREACHABLE
}
// Address range: 0x406390 - 0x406416
int64_t function_406390(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4063eb
            function_406510(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406320(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4063d3
    if (a2 == 0) {
        // 0x4063f8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4063d8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4063eb
        function_406510(a1);
        // UNREACHABLE
    }
    // 0x4063ba
    *(int64_t *)a2 = v2;
    return function_406320(a1, v2 * a3);
}
// Address range: 0x406420 - 0x406470
int64_t function_406420(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406420
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40646a
            function_406510(a1);
            // UNREACHABLE
        }
        // 0x406442
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406320(a1, v1);
    }
    if (a2 == 0) {
        // 0x406455
        *(int64_t *)a2 = 128;
        return function_406320(0, 128);
    }
    // 0x406468
    if (a2 < 0) {
        // 0x40646a
        function_406510(a1);
        // UNREACHABLE
    }
    // 0x406442
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406320(a1, v1);
}
// Address range: 0x406470 - 0x406487
int64_t function_406470(int64_t a1, int64_t a2) {
    // 0x406470
    return (int64_t)memset((int64_t *)function_4062c0(a1), 0, (int32_t)a1);
}
// Address range: 0x406490 - 0x4064be
int64_t function_406490(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406497
    if ((int64_t)v1 < 0) {
        // 0x4064b9
        function_406510(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4064b9
        function_406510(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4064aa
    if (mem != NULL) {
        // 0x4064b4
        return (int64_t)mem;
    }
    // 0x4064b9
    function_406510(nmemb);
    // UNREACHABLE
}
// Address range: 0x4064c0 - 0x4064e8
int64_t function_4064c0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4062c0(a2); // 0x4064cf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4064f0 - 0x406503
int64_t function_4064f0(int64_t str) {
    // 0x4064f0
    return function_4064c0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406510 - 0x406541
int64_t function_406510(int64_t a1) {
    // 0x406510
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406550 - 0x4065a0
int64_t function_406550(int64_t a1, int64_t a2) {
    // 0x406550
    int64_t v1; // 0x406550
    int64_t result = fts_open(a1, (int32_t)a2 | 512, v1); // 0x40655a
    if (result != 0) {
        // 0x406564
        return result;
    }
    // 0x406570
    if (*__errno_location() == 22) {
        // 0x406580
        __assert_fail("errno != EINVAL", "lib/xfts.c", 41, "xfts_open");
        return &g57;
    }
    // 0x40657a
    function_406510(a1);
    // UNREACHABLE
}
// Address range: 0x4065a0 - 0x4065c9
int64_t function_4065a0(int64_t a1, int64_t a2) {
    int64_t result = 1; // 0x4065a0
    int32_t v1; // 0x4065a0
    switch (v1 & 17) {
        case 17: {
            // 0x4065c0
            return *(int64_t *)(a2 + 88) != 0;
        }
        default: {
            // 0x4065b7
            result = 0;
        }
        case 16: {
            // 0x4065b7
            return result;
        }
    }
}
// Address range: 0x4065d0 - 0x406a00
int64_t function_4065d0(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x4065de
    if (base >= 37) {
        // 0x4069db
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g57;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x406602
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x406632
    int64_t v3 = str; // 0x406637
    char v4 = c; // 0x406637
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x40662c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x406628
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x406639
    if (v4 == 45) {
        // 0x406673
        return 4;
    }
    // 0x40663e
    int64_t v6; // bp-64, 0x4065d0
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x4065fe
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x406644
    int64_t * v7 = (int64_t *)endptr; // 0x406649
    int64_t v8 = *v7; // 0x406649
    char v9; // 0x4065d0
    int64_t v10; // 0x4065d0
    int64_t v11; // 0x4065d0
    int64_t v12; // 0x4065d0
    int64_t v13; // 0x4065d0
    int64_t v14; // 0x4065d0
    int64_t v15; // 0x4065d0
    if (v8 == str) {
        // 0x4066a0
        if (c == 0 || str2 == NULL) {
            // 0x406673
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x4066c1
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x406673
            return 4;
        }
        goto lab_0x4066cf;
    } else {
        int32_t v16 = *v1; // 0x406654
        int64_t v17 = 0; // 0x40665a
        if (v16 != 0) {
            // 0x406688
            v17 = 1;
            if (v16 != 34) {
                // 0x406673
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x406644
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x406670;
        } else {
            char c2 = *(char *)v8; // 0x406663
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x4067c3
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4066cf;
                } else {
                    goto lab_0x4067d5;
                }
            } else {
                goto lab_0x406670;
            }
        }
    }
  lab_0x4066cf:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x4066d7
    int64_t v21 = 1; // 0x4066d7
    int64_t v22; // 0x4065d0
    int64_t v23; // 0x4065d0
    int64_t v24; // 0x4065d0
    int64_t v25; // 0x4065d0
    int64_t v26; // 0x4065d0
    int64_t v27; // 0x4065d0
    int64_t v28; // 0x4065d0
    int64_t v29; // 0x4065d0
    int64_t v30; // 0x4065d0
    int64_t v31; // 0x4065d0
    int64_t v32; // 0x4065d0
    int64_t v33; // 0x4065d0
    int64_t v34; // 0x4065d0
    int64_t v35; // 0x4065d0
    int64_t v36; // 0x4065d0
    int64_t v37; // 0x4065d0
    int64_t v38; // 0x4065d0
    int64_t v39; // 0x4065d0
    int64_t v40; // 0x4065d0
    int64_t v41; // 0x4065d0
    if (v19 < 48) {
        // 0x4066d9
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40673a;
        } else {
            // 0x4066ec
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x40673a;
            } else {
                // 0x406708
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x40673a;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x406969
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x40673a;
                    }
                    default: {
                        // 0x40671d
                        g54 = v19;
                        v20 = 1000;
                        v21 = 2;
                        v24 = 1024;
                        v36 = 1;
                        v23 = v14;
                        v22 = v11;
                        v37 = 1;
                        v25 = 1024;
                        v38 = 1;
                        v15 = v14;
                        v12 = v11;
                        v39 = 1;
                        v26 = 1024;
                        v40 = 1;
                        v27 = 1024;
                        v41 = 1;
                        v28 = 1024;
                        v32 = 1;
                        v29 = 1024;
                        v33 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        switch (v9) {
                            case 69: {
                                goto lab_0x4068db;
                            }
                            case 70: {
                                goto lab_0x4067d5;
                            }
                            case 71: {
                                goto lab_0x406913;
                            }
                            case 72: {
                                goto lab_0x4067d5;
                            }
                            case 73: {
                                goto lab_0x4067d5;
                            }
                            case 74: {
                                goto lab_0x4067d5;
                            }
                            case 75: {
                                goto lab_0x40679c;
                            }
                            case 76: {
                                goto lab_0x4067d5;
                            }
                            case 77: {
                                goto lab_0x40675e;
                            }
                            case 78: {
                                goto lab_0x4067d5;
                            }
                            case 79: {
                                goto lab_0x4067d5;
                            }
                            case 80: {
                                goto lab_0x4068a8;
                            }
                            case 81: {
                                goto lab_0x4067d5;
                            }
                            case 82: {
                                goto lab_0x4067d5;
                            }
                            case 83: {
                                goto lab_0x4067d5;
                            }
                            case 84: {
                                goto lab_0x406878;
                            }
                            case 85: {
                                goto lab_0x4067d5;
                            }
                            case 86: {
                                goto lab_0x4067d5;
                            }
                            case 87: {
                                goto lab_0x4067d5;
                            }
                            case 88: {
                                goto lab_0x4067d5;
                            }
                            case 89: {
                                goto lab_0x406846;
                            }
                            case 90: {
                                goto lab_0x40680b;
                            }
                            case 91: {
                                goto lab_0x4067d5;
                            }
                            case 92: {
                                goto lab_0x4067d5;
                            }
                            case 93: {
                                goto lab_0x4067d5;
                            }
                            case 94: {
                                goto lab_0x4067d5;
                            }
                            case 95: {
                                goto lab_0x4067d5;
                            }
                            case 96: {
                                goto lab_0x4067d5;
                            }
                            case 97: {
                                goto lab_0x4067d5;
                            }
                            case 98: {
                                goto lab_0x4067ef;
                            }
                            case 99: {
                                goto lab_0x406778;
                            }
                            case 100: {
                                goto lab_0x4067d5;
                            }
                            case 101: {
                                goto lab_0x4067d5;
                            }
                            case 102: {
                                goto lab_0x4067d5;
                            }
                            case 103: {
                                goto lab_0x406913;
                            }
                            case 104: {
                                goto lab_0x4067d5;
                            }
                            case 105: {
                                goto lab_0x4067d5;
                            }
                            case 106: {
                                goto lab_0x4067d5;
                            }
                            case 107: {
                                goto lab_0x40679c;
                            }
                            case 108: {
                                goto lab_0x4067d5;
                            }
                            case 109: {
                                goto lab_0x40675e;
                            }
                            case 110: {
                                goto lab_0x4067d5;
                            }
                            case 111: {
                                goto lab_0x4067d5;
                            }
                            case 112: {
                                goto lab_0x4067d5;
                            }
                            case 113: {
                                goto lab_0x4067d5;
                            }
                            case 114: {
                                goto lab_0x4067d5;
                            }
                            case 115: {
                                goto lab_0x4067d5;
                            }
                            case 116: {
                                goto lab_0x406878;
                            }
                            default: {
                                goto lab_0x40673a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40673a;
    }
  lab_0x406670:
    // 0x406670
    *a4 = v13;
    // 0x406673
    return v10 & 0xffffffff;
  lab_0x40673a:
    // 0x40673a
    g55 = v9 - 66;
    v24 = v20;
    v36 = v21;
    v23 = v14;
    v22 = v11;
    v37 = v21;
    v25 = v20;
    v38 = v21;
    v15 = v14;
    v12 = v11;
    v39 = v21;
    v26 = v20;
    v40 = v21;
    v27 = v20;
    v41 = v21;
    v28 = v20;
    v32 = v21;
    v29 = v20;
    v33 = v21;
    v30 = v20;
    v34 = v21;
    v31 = v20;
    v35 = v21;
    int64_t v43; // 0x4065d0
    switch (v9) {
        case 66: {
            // 0x406934
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x4067a7;
            } else {
                // 0x406941
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406778;
            }
        }
        case 69: {
            goto lab_0x4068db;
        }
        case 71: {
            goto lab_0x406913;
        }
        case 75: {
            goto lab_0x40679c;
        }
        case 77: {
            goto lab_0x40675e;
        }
        case 80: {
            goto lab_0x4068a8;
        }
        case 84: {
            goto lab_0x406878;
        }
        case 89: {
            goto lab_0x406846;
        }
        case 90: {
            goto lab_0x40680b;
        }
        case 98: {
            goto lab_0x4067ef;
        }
        case 99: {
            goto lab_0x406778;
        }
        case 103: {
            goto lab_0x406913;
        }
        case 107: {
            goto lab_0x40679c;
        }
        case 109: {
            goto lab_0x40675e;
        }
        case 116: {
            goto lab_0x406878;
        }
        case 119: {
            // 0x4067e0
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x4067a7;
            } else {
                // 0x4067e5
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406778;
            }
        }
        default: {
            goto lab_0x4067d5;
        }
    }
  lab_0x4068db:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x4068f3
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x4068ff
    int64_t v48 = v45; // 0x406902
    int64_t v49 = v34; // 0x406902
    int64_t v50 = v46; // 0x406902
    int32_t v51 = v47; // 0x406902
    int64_t v52 = v46; // 0x406902
    while (v47 != 0) {
        // 0x4068f0
        v44 = (int128_t)v45 * (int128_t)v30;
        v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
        v46 = v44 > 0xffffffffffffffff ? 1 : v52;
        v47 = v51 - 1;
        v48 = v45;
        v49 = v34;
        v50 = v46;
        v51 = v47;
        v52 = v46;
    }
    goto lab_0x406834;
  lab_0x406913:
    // 0x406913
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x40691e
        int128_t v53; // 0x406919
        uint128_t v54; // 0x406919
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x40691e
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x4065d0
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x406923
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x406928
                v23 = v57;
                int64_t v58; // 0x4065d0
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x406778;
  lab_0x40679c:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x40679f
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x406778;
    } else {
        goto lab_0x4067a7;
    }
  lab_0x40675e:;
    int128_t v62 = v24; // 0x406764
    uint128_t v63 = v62 * (int128_t)v14; // 0x406764
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x4067a7;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x406769
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x4067a7;
        } else {
            // 0x40676e
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x406778;
        }
    }
  lab_0x4068a8:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x4068bb
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x4068c7
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x4068ca
    int64_t v70 = v67; // 0x4068ca
    while (v68 != 0) {
        // 0x4068b8
        v65 = (int128_t)v66 * (int128_t)v29;
        v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
        v67 = v65 > 0xffffffffffffffff ? 1 : v70;
        v68 = v69 - 1;
        v48 = v66;
        v49 = v33;
        v50 = v67;
        v69 = v68;
        v70 = v67;
    }
    goto lab_0x406834;
  lab_0x406878:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x40688b
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x406897
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x40689a
    int64_t v76 = v73; // 0x40689a
    while (v74 != 0) {
        // 0x406888
        v71 = (int128_t)v72 * (int128_t)v28;
        v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
        v73 = v71 > 0xffffffffffffffff ? 1 : v76;
        v74 = v75 - 1;
        v48 = v72;
        v49 = v32;
        v50 = v73;
        v75 = v74;
        v76 = v73;
    }
    goto lab_0x406834;
  lab_0x406846:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x40685b
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x406867
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x40686a
    int64_t v82 = v79; // 0x40686a
    while (v80 != 0) {
        // 0x406858
        v77 = (int128_t)v78 * (int128_t)v27;
        v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
        v79 = v77 > 0xffffffffffffffff ? 1 : v82;
        v80 = v81 - 1;
        v48 = v78;
        v49 = v41;
        v50 = v79;
        v81 = v80;
        v82 = v79;
    }
    goto lab_0x406834;
  lab_0x40680b:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x406823
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x40682f
    int32_t v87 = v86; // 0x406832
    int64_t v88 = v85; // 0x406832
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x406820
        v83 = (int128_t)v84 * (int128_t)v26;
        v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
        v85 = v83 > 0xffffffffffffffff ? 1 : v88;
        v86 = v87 - 1;
        v87 = v86;
        v88 = v85;
        v48 = v84;
        v49 = v40;
        v50 = v85;
    }
    goto lab_0x406834;
  lab_0x4067ef:
    // 0x4067ef
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x4067a7;
    } else {
        // 0x4067f8
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x406778;
    }
  lab_0x406778:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x40677d
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x406670;
  lab_0x4067d5:
    // 0x4067d5
    *a4 = v15;
    // 0x406673
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4067a7:
    // 0x4067a7
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x406778;
  lab_0x406834:
    // 0x406834
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x406778;
}
// Address range: 0x406a00 - 0x406c6e
int64_t function_406a00(int64_t a1, int32_t a2, int64_t a3, int32_t group, int64_t a5) {
    if ((a5 & 0xfffffeff) != 0) {
        // 0x406c40
        *__errno_location() = 22;
        // 0x406b3e
        return 0xffffffff;
    }
    int64_t v1 = a2;
    int32_t fd = a1; // 0x406a2c
    if (fd == -100 || (char)a2 == 47) {
        char * path = (char *)v1;
        int32_t owner = a3;
        int64_t result; // 0x406a00
        if ((int32_t)a5 == 256) {
            // 0x406b98
            result = lchown(path, owner, group);
        } else {
            // 0x406b69
            result = chown(path, owner, group);
        }
        // 0x406b3e
        return result;
    }
    // 0x406a3e
    int32_t v2; // bp-4088, 0x406a00
    int64_t v3 = function_409d90((int64_t *)&v2, a1 & 0xffffffff, v1); // 0x406a48
    if (v3 != 0) {
        char * path2 = (char *)v3;
        int32_t owner2 = a3;
        int32_t v4; // 0x406a00
        if ((int32_t)a5 == 256) {
            // 0x406ba8
            v4 = lchown(path2, owner2, group);
        } else {
            // 0x406a6b
            v4 = chown(path2, owner2, group);
        }
        int32_t * v5 = __errno_location(); // 0x406a7b
        uint32_t v6 = *v5; // 0x406a89
        if (v3 != (int64_t)&v2) {
            // 0x406a90
            free((int64_t *)v3);
        }
        int64_t result2 = v4;
        if (v4 != -1) {
            // 0x406b3e
            return result2;
        }
        if (v6 < 39) {
            if ((1 << (int64_t)(v6 % 64) & 0x4000102006) == 0) {
                // 0x406b81
                *v5 = v6;
                // 0x406b3e
                return result2;
            }
        } else {
            if (v6 != 95) {
                // 0x406b81
                *v5 = v6;
                // 0x406b3e
                return result2;
            }
        }
    }
    // 0x406ad0
    if ((int32_t)function_40b990((int64_t *)&v2) != 0) {
        int32_t v7 = *__errno_location(); // 0x406c67
        function_40b8e0(v7);
        // UNREACHABLE
    }
    // 0x406ae2
    if (fd > -1 == v2 == fd) {
        // 0x406c20
        function_40ba00((int64_t *)&v2);
        *__errno_location() = 9;
        // 0x406b3e
        return 0xffffffff;
    }
    // 0x406af0
    if (fchdir(fd) != 0) {
        int32_t * v8 = __errno_location(); // 0x406bf8
        function_40ba00((int64_t *)&v2);
        // 0x406b3e
        return 0xffffffff;
    }
    char * path3 = (char *)v1;
    int32_t owner3 = a3;
    int32_t result3; // 0x406a00
    if ((int32_t)a5 == 256) {
        // 0x406b88
        result3 = lchown(path3, owner3, group);
    } else {
        // 0x406b10
        result3 = chown(path3, owner3, group);
    }
    // 0x406b18
    int32_t v9; // 0x406c5b
    if (result3 != -1) {
        // 0x406b22
        if ((int32_t)function_40b9e0((int64_t *)&v2) == 0) {
            // 0x406b34
            function_40ba00((int64_t *)&v2);
            // 0x406b3e
            return result3;
        }
        // 0x406c56
        v9 = *__errno_location();
        function_40b910(v9);
        // UNREACHABLE
    }
    int32_t * v10 = __errno_location(); // 0x406bc0
    int32_t v11 = *v10; // 0x406bcd
    if ((int32_t)function_40b9e0((int64_t *)&v2) != 0) {
        // 0x406c56
        v9 = *__errno_location();
        function_40b910(v9);
        // UNREACHABLE
    }
    // 0x406bd8
    function_40ba00((int64_t *)&v2);
    if (v11 != 0) {
        // 0x406bea
        *v10 = v11;
    }
    // 0x406b3e
    return 0xffffffff;
}
// Address range: 0x406c70 - 0x406c8a
int64_t function_406c70(int64_t a1, int64_t a2) {
    // 0x406c70
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(a2 + 8)) {
        // 0x406c80
        return a2 & -256 | (int64_t)(a1 == a2);
    }
    // 0x406c7c
    return 0;
}
// Address range: 0x406c90 - 0x406c9d
int64_t function_406c90(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x406c90
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x406ca0 - 0x406cac
int64_t function_406ca0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x406ca0
    return a1 % a2;
}
// Address range: 0x406cb0 - 0x406cba
int64_t function_406cb0(int64_t a1, int64_t a2) {
    // 0x406cb0
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x406cc0 - 0x406ce2
int64_t function_406cc0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x406ccb
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x406cd2
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x406cf0 - 0x406e9a
int64_t function_406cf0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2 + 120; // 0x406cf6
    int64_t v2 = a1 + 72; // 0x406cfe
    uint64_t v3 = (int64_t)*(int32_t *)v2; // 0x406cfe
    int64_t * v4 = (int64_t *)(a2 + 88); // 0x406d01
    int64_t * v5 = (int64_t *)(a2 + 48); // 0x406d06
    int64_t v6 = *v5; // 0x406d06
    int32_t v7; // 0x406cf0
    if (*v4 != 0 || v3 % 2 == 0) {
        if ((v3 & 2) != 0) {
            goto lab_0x406d10;
        } else {
            if ((char)a3 != 0) {
                goto lab_0x406d10;
            } else {
                int32_t v8 = *(int32_t *)(a1 + 44); // 0x406d6b
                if (__fxstatat(1, v8, (char *)v6, (struct stat *)v1, 256) != 0) {
                    // 0x406dc0
                    v7 = *__errno_location();
                    goto lab_0x406dc7;
                } else {
                    goto lab_0x406d87;
                }
            }
        }
    } else {
        goto lab_0x406d10;
    }
  lab_0x406d10:;
    struct stat * v9 = (struct stat *)v1; // 0x406d18
    if (__xstat(1, (char *)v6, v9) == 0) {
        goto lab_0x406d87;
    } else {
        int32_t * v10 = __errno_location(); // 0x406d21
        int32_t v11 = *v10; // 0x406d29
        v7 = v11;
        if (v11 == 2) {
            // 0x406d34
            if (__lxstat(1, (char *)*v5, v9) == 0) {
                // 0x406d4d
                *v10 = 0;
                return 13;
            }
            // 0x406e70
            v7 = *v10;
        }
        goto lab_0x406dc7;
    }
  lab_0x406d87:;
    int32_t v12 = *(int32_t *)(a2 + 144) & 0xf000; // 0x406d8d
    int64_t v13; // 0x406cf0
    switch ((int16_t)v12) {
        case 0x4000: {
            uint64_t v14 = *(int64_t *)(a2 + 136); // 0x406e00
            v13 = -1;
            if (v14 >= 2) {
                // 0x406e0d
                v13 = -1;
                if (*v4 >= 1) {
                    // 0x406e14
                    v13 = (*(char *)v2 & 32) == 0 ? v14 - 2 : v14;
                }
            }
            // break -> 0x406e22
            break;
        }
        case -0x6000: {
            // 0x406db3
            return 12;
        }
        default: {
            // 0x406db3
            return 4 * (int64_t)(v12 == 0x8000) + (v12 == 0x8000 ? 4 : 3);
        }
    }
    int64_t v15 = a2 + 264; // 0x406e22
    *(int64_t *)(a2 + 104) = v13;
    if (*(char *)v15 != 46) {
        // 0x406db3
        return 1;
    }
    // 0x406e38
    if (*(char *)(a2 + 265) == 0) {
        // 0x406db3
        return *v4 == 0 ? 1 : 5;
    }
    // 0x406e41
    if ((*(int32_t *)v15 & 0xffff00) != 0x2e00) {
        // 0x406db3
        return 1;
    }
    // 0x406db3
    return *v4 == 0 ? 1 : 5;
  lab_0x406dc7:
    // 0x406dc7
    *(int32_t *)(a2 + 64) = v7;
    int64_t v16 = a2 + 128 & -8; // 0x406dd0
    *(int64_t *)v1 = 0;
    *(int64_t *)(a2 + 256) = 0;
    __asm_rep_stosq_memset((char *)v16, 0, (a2 + 264 - v16) / 8 % 0x20000000);
    return 10;
}
// Address range: 0x406ea0 - 0x406f9d
int64_t function_406ea0(int64_t a1, int64_t result, uint64_t nmemb) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x406eb3
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x406eb7
    int64_t v3 = *v2; // 0x406eb7
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x406ebb
    int64_t base = v3; // 0x406ebf
    if (*v4 < nmemb) {
        uint64_t v5 = nmemb + 40; // 0x406ecb
        *v4 = v5;
        if (v5 >= 0x2000000000000000) {
            // 0x406f71
            free((int64_t *)v3);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        int64_t * mem = realloc((int64_t *)v3, 8 * (int32_t)v5); // 0x406ee0
        if (mem == NULL) {
            // 0x406f71
            free((int64_t *)*v2);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        // 0x406ef1
        base = (int64_t)mem;
        *v2 = base;
    }
    int64_t v6 = base; // 0x406efb
    int64_t v7 = result; // 0x406efb
    if (result != 0) {
        *(int64_t *)v6 = v7;
        v7 += 16;
        v6 += 8;
        while (v7 != 0) {
            // 0x406f00
            *(int64_t *)v6 = v7;
            v7 += 16;
            v6 += 8;
        }
    }
    // 0x406f11
    qsort((int64_t *)base, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))v1);
    int64_t v8 = *v2; // 0x406f21
    int64_t result2 = *(int64_t *)v8; // 0x406f28
    if (nmemb == 1) {
        // 0x406f5a
        *(int64_t *)(result2 + 16) = 0;
        return result2;
    }
    int64_t v9 = v8 + 8; // 0x406f43
    int64_t * v10 = (int64_t *)v9; // 0x406f43
    *(int64_t *)(result2 + 16) = *v10;
    int64_t v11 = nmemb - 2; // 0x406f4f
    int64_t v12 = v11; // 0x406f53
    int64_t v13 = v9; // 0x406f53
    if (v11 != 0) {
        v13 += 8;
        int64_t * v14 = (int64_t *)v13; // 0x406f43
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
    // 0x406f5a
    *(int64_t *)(*(int64_t *)(8 * nmemb - 8 + v8) + 16) = 0;
    return result2;
}
// Address range: 0x406fa0 - 0x40702a
int64_t function_406fa0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    int64_t * mem = malloc(v1 + 272 & -8); // 0x406fbe
    int64_t result = (int64_t)mem; // 0x406fbe
    if (mem != NULL) {
        int64_t v2 = result + 264; // 0x406fcb
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
    // 0x40701c
    return result;
}
// Address range: 0x407030 - 0x407071
int64_t function_407030(int64_t a1) {
    // 0x407030
    if (a1 == 0) {
        // 0x407062
        int64_t result; // 0x407030
        return result;
    }
    int64_t dirp = *(int64_t *)(a1 + 24); // 0x407040
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x407044
    if (dirp != 0) {
        // 0x40704d
        closedir((struct __dirstream *)dirp);
    }
    // 0x407052
    free((int64_t *)a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        dirp = *(int64_t *)(v2 + 24);
        v1 = *(int64_t *)(v2 + 16);
        if (dirp != 0) {
            // 0x40704d
            closedir((struct __dirstream *)dirp);
        }
        // 0x407052
        free((int64_t *)v2);
    }
    // 0x407062
    return &g57;
}
// Address range: 0x407080 - 0x4070b9
int64_t function_407080(int64_t a1) {
    int64_t result = function_40b2d0(a1); // 0x40709f
    if ((char)result != 0) {
        // 0x4070a8
        return result;
    }
    int32_t fd = function_40b320(a1); // 0x407098
    if (fd >= 0) {
        // 0x4070b0
        close(fd);
    }
    int64_t result2 = function_40b2d0(a1); // 0x40709f
    while ((char)result2 == 0) {
        // 0x407090
        fd = function_40b320(a1);
        if (fd >= 0) {
            // 0x4070b0
            close(fd);
        }
        // 0x40709c
        result2 = function_40b2d0(a1);
    }
    // 0x4070a8
    return result2;
}
// Address range: 0x4070c0 - 0x4071d1
int64_t function_4070c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x4070c8
    int64_t v2 = *v1; // 0x4070c8
    if ((*(char *)(v2 + 73) & 2) == 0) {
        // 0x407102
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 80); // 0x4070d6
    int64_t v4 = *v3; // 0x4070d6
    int64_t v5 = v4; // 0x4070e0
    int64_t result; // bp-152, 0x4070c0
    if (v4 == 0) {
        // 0x407170
        v5 = function_40a8f0(13, 0, 0x406ca0, 0x406cb0, 0x401c30);
        *v3 = v5;
        if (v5 == 0) {
            // 0x40719c
            fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result);
            // 0x407102
            return 0;
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 120); // 0x4070e6
    result = *v6;
    int64_t v7 = function_40a680(v5, &result); // 0x4070f4
    if (v7 != 0) {
        // 0x407102
        return *(int64_t *)(v7 + 8);
    }
    // 0x407110
    if (fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result) != 0) {
        // 0x407102
        return 0;
    }
    int64_t * mem = malloc(16); // 0x40712c
    if (mem == NULL) {
        // 0x407102
        return result;
    }
    int64_t v8 = (int64_t)mem; // 0x40712c
    *(int64_t *)(v8 + 8) = result;
    *mem = *v6;
    if (function_40b090(v5, v8) != 0) {
        // 0x407158
        return result;
    }
    // 0x4071c0
    free(mem);
    // 0x407102
    return result;
}
// Address range: 0x4071e0 - 0x407244
int64_t function_4071e0(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_4070c0(a1, a2); // 0x4071e4
    if (v1 == 0x9fa0) {
        // 0x407216
        return 0;
    }
    if (v1 <= 0x9fa0) {
        // 0x407220
        if (v1 != 0) {
            // 0x407227
            return v1 != 0x6969;
        }
        // 0x407216
        return 0;
    }
    // 0x4071f3
    switch (v1) {
        case 0x5346414f: {
            // 0x407216
            return 0;
        }
        case 0x58465342: {
            // 0x407216
            return 2;
        }
    }
    // 0x407216
    return v1 == 0x52654973 ? 2 : 1;
}
// Address range: 0x407250 - 0x4072b6
int64_t function_407250(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x40725b
    int32_t fd = *v1; // 0x40725b
    int32_t v2 = a2; // 0x40725e
    if (fd == v2 == (fd != -100)) {
        // 0x4072b1
        abort();
        // UNREACHABLE
    }
    if ((char)a3 == 0) {
        // 0x40726b
        if (fd >= 0 != ((*(char *)(a1 + 72) & 4) == 0)) {
            // 0x407275
            *v1 = v2;
            int64_t result; // 0x407250
            return result;
        }
        int32_t result2 = close(fd); // 0x4072a2
        *v1 = v2;
        return result2;
    }
    int64_t result3 = function_40b2e0(a1 + 96, fd); // 0x407284
    uint32_t fd2 = (int32_t)result3; // 0x407289
    if (fd2 < 0) {
        // 0x407275
        *v1 = v2;
        return result3;
    }
    int32_t result4 = close(fd2); // 0x40728f
    *v1 = v2;
    return result4;
}
// Address range: 0x4072c0 - 0x40731a
int64_t function_4072c0(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 72); // 0x4072c9
    uint32_t v2 = v1 & 4; // 0x4072ce
    if (v2 != 0) {
        // 0x4072f2
        function_407080(a1 + 96);
        return 0;
    }
    int64_t result; // 0x4072c0
    if ((v1 & 512) == 0) {
        // 0x407308
        result = fchdir(*(int32_t *)(a1 + 40)) != 0;
    } else {
        // 0x4072d8
        function_407250(a1, 0xffffff9c, 1);
        result = v2;
    }
    // 0x4072f2
    function_407080(a1 + 96);
    return result;
}
// Address range: 0x407320 - 0x40738b
int64_t function_407320(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 256 + a3; // 0x40732a
    if (v1 < a2) {
        int64_t * v2 = (int64_t *)a1; // 0x407358
        free(v2);
        *v2 = 0;
        *__errno_location() = 36;
        return 0;
    }
    // 0x407337
    *(int64_t *)a2 = v1;
    int64_t * v3 = (int64_t *)a1; // 0x40733d
    int64_t * mem = realloc(v3, (int32_t)v1); // 0x40733d
    if (mem != NULL) {
        // 0x407347
        *v3 = (int64_t)mem;
        return 1;
    }
    // 0x407378
    free(v3);
    *v3 = 0;
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x407390 - 0x4073eb
int64_t function_407390(int32_t a1, int64_t a2) {
    if ((a1 & 258) != 0) {
        int64_t v1 = function_40a8f0(31, 0, 0x406c90, 0x406c70, 0x401c30); // 0x4073b3
        *(int64_t *)a2 = v1;
        // 0x4073c1
        return v1 & -256 | (int64_t)(v1 != 0);
    }
    int64_t * mem = malloc(32); // 0x4073cd
    int64_t v2 = (int64_t)mem; // 0x4073cd
    *(int64_t *)a2 = v2;
    if (mem == NULL) {
        // 0x4073c1
        return 0;
    }
    // 0x4073df
    function_409f20(v2);
    return 1;
}
// Address range: 0x4073f0 - 0x407434
int64_t function_4073f0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x2000 * a2 & 0x20000 | 128 * a2 & 0x40000 | 0x90900; // 0x40740a
    if ((a2 & 512) == 0) {
        // 0x407428
        return function_409fb0(a3, v1, (int32_t)v1);
    }
    // 0x407418
    return function_40b940((int64_t)a1, a3, (int32_t)v1, a3);
}
// Address range: 0x407440 - 0x407606
int64_t function_407440(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff; // 0x40744f
    int32_t * v3 = (int32_t *)(a1 + 72); // 0x40745c
    uint32_t v4 = *v3; // 0x40745c
    int64_t v5 = v4; // 0x40745c
    int32_t v6 = v4 & 4; // 0x407463
    int64_t v7; // 0x407440
    int64_t v8; // 0x407440
    int64_t v9; // 0x407440
    int64_t v10; // 0x407440
    int64_t v11; // 0x407440
    if (a4 == 0) {
        goto lab_0x4074e0;
    } else {
        // 0x40746b
        bool v12; // 0x407440
        int64_t v13 = v12 ? -1 : 1; // 0x407478
        int64_t v14 = (int64_t)".."; // 0x407440
        int64_t v15 = v1; // 0x407440
        int64_t v16 = 3; // 0x407478
        unsigned char v17 = *(char *)v15; // 0x407478
        char v18 = *(char *)v14; // 0x407478
        char v19 = v18; // 0x407478
        bool v20 = false; // 0x407478
        while (v17 == v18) {
            // 0x40746b
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
            goto lab_0x4074e0;
        } else {
            if (v6 != 0) {
                goto lab_0x407550;
            } else {
                // 0x40748b
                v11 = v2;
                v7 = v2;
                v9 = 1;
                if ((int32_t)a3 >= 0) {
                    goto lab_0x4074f2;
                } else {
                    // 0x407493
                    v8 = v5;
                    v10 = 1;
                    if ((v5 & 512) == 0) {
                        goto lab_0x40757e;
                    } else {
                        int64_t v22 = a1 + 96; // 0x4074a0
                        int64_t v23 = function_40b2d0(v22); // 0x4074ac
                        v8 = v5;
                        v10 = v23 & 0xffffffff;
                        if ((char)v23 != 0) {
                            goto lab_0x40757e;
                        } else {
                            int64_t v24 = function_40b320(v22); // 0x4074c4
                            if ((int32_t)v24 < 0) {
                                // 0x4075c8
                                v8 = (int64_t)*v3;
                                v10 = 1;
                                goto lab_0x40757e;
                            } else {
                                // 0x4074d4
                                v11 = v24 & 0xffffffff;
                                v7 = v24;
                                v9 = 1;
                                goto lab_0x4074f2;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4074e0:
    if (v6 != 0) {
        goto lab_0x407550;
    } else {
        // 0x4074e4
        v11 = v2;
        v7 = v2;
        v9 = 0;
        v8 = v5;
        v10 = 0;
        if ((int32_t)a3 < 0) {
            goto lab_0x40757e;
        } else {
            goto lab_0x4074f2;
        }
    }
  lab_0x407550:
    // 0x407550
    if ((v5 & 512) == 0) {
        // 0x40755f
        return 0;
    }
    int32_t fd = a3; // 0x407559
    if (fd >= 0) {
        // 0x4075b8
        close(fd);
        // 0x40755f
        return 0;
    }
    // 0x40755f
    return 0;
  lab_0x40757e:;
    int64_t v25 = function_4073f0(*(int32_t *)(a1 + 44), v8, v1); // 0x407588
    v11 = v2;
    v7 = v25;
    v9 = v10;
    if ((int32_t)v25 < 0) {
        // 0x40755f
        return 0xffffffff;
    }
    goto lab_0x4074f2;
  lab_0x4074f2:;
    int32_t fd2 = v7; // 0x4074f7
    int64_t v26; // bp-200, 0x407440
    uint32_t v27 = __fxstat(1, fd2, (struct stat *)&v26); // 0x4074ff
    int64_t v28 = 0xffffffff; // 0x407508
    if (v27 != 0) {
        goto lab_0x407533;
    } else {
        // 0x40750a
        if (*(int64_t *)(a2 + 120) != v26) {
            goto lab_0x407523;
        } else {
            // 0x407515
            int64_t v29; // 0x407440
            if (*(int64_t *)(a2 + 128) == v29) {
                // 0x4075a0
                if ((*(char *)(a1 + 73) & 2) != 0) {
                    // 0x4075d8
                    function_407250(a1, v7 & 0xffffffff, v9 % 256 ^ 1);
                    // 0x40755f
                    return (int64_t)v27 & 0xffffffff;
                }
                // 0x4075a7
                v28 = fchdir(fd2);
                goto lab_0x407533;
            } else {
                goto lab_0x407523;
            }
        }
    }
  lab_0x407533:
    // 0x407533
    if ((int32_t)v11 < 0) {
        int32_t * v30 = __errno_location(); // 0x407537
        close(fd2);
    }
    // 0x40755f
    return v28 & 0xffffffff;
  lab_0x407523:
    // 0x407523
    *__errno_location() = 2;
    v28 = 0xffffffff;
    goto lab_0x407533;
}
// Address range: 0x407610 - 0x4076bf
int64_t function_407610(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) == 0) {
        int64_t result = function_409f30(a2, a3 + 120); // 0x407698
        if ((char)result == 0) {
            // 0x407681
            return 1;
        }
        // 0x4076a1
        *(int64_t *)a3 = a3;
        *(int16_t *)(a3 + 112) = 2;
        return result;
    }
    int64_t * mem = malloc(24); // 0x407627
    if (mem == NULL) {
        // 0x407681
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x407627
    *(int64_t *)(v1 + 16) = a3;
    *mem = *(int64_t *)(a3 + 120);
    *(int64_t *)(v1 + 8) = *(int64_t *)(a3 + 128);
    int64_t v2 = function_40b090(a2, v1); // 0x407656
    if (v2 == v1) {
        // 0x407681
        return 1;
    }
    // 0x407663
    free(mem);
    int64_t result2 = 0; // 0x40766e
    if (v2 != 0) {
        // 0x407670
        *(int16_t *)(a3 + 112) = 2;
        *(int64_t *)a3 = *(int64_t *)(v2 + 16);
        result2 = 1;
    }
    // 0x407681
    return result2;
}
// Address range: 0x4076c0 - 0x407756
int64_t function_4076c0(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) != 0) {
        // 0x407700
        free((int64_t *)function_40b0d0(a2));
        return &g57;
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x4076cf
    if (result == 0) {
        // 0x4076f9
        return 0;
    }
    // 0x4076d8
    if (*(int64_t *)(result + 88) < 0) {
        // 0x4076f9
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40773c
    int64_t result2 = result; // 0x407740
    if (*v1 == *(int64_t *)(a3 + 120)) {
        // 0x407742
        result2 = *(int64_t *)(result + 128);
        *v1 = *(int64_t *)(result + 120);
        *(int64_t *)a2 = result2;
    }
    // 0x4076f9
    return result2;
}
// Address range: 0x407760 - 0x408113
int64_t function_407760(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x407774
    int64_t * dirp2 = (int64_t *)(a1 + 24); // 0x407778
    int64_t dirp = *dirp2; // 0x407778
    int64_t v2; // 0x407760
    int32_t * v3; // 0x407760
    int64_t v4; // 0x407760
    int64_t v5; // 0x407760
    int64_t v6; // 0x407760
    int64_t v7; // 0x407760
    int64_t v8; // 0x407760
    int64_t v9; // 0x407760
    char v10; // 0x407760
    int64_t v11; // 0x407760
    int64_t v12; // 0x407760
    int64_t v13; // 0x407b96
    int64_t v14; // 0x407760
    int64_t v15; // 0x407bd5
    int32_t * v16; // 0x407760
    int64_t v17; // 0x407be2
    int32_t v18; // 0x407be6
    if (dirp == 0) {
        // 0x407b50
        v14 = a1 + 72;
        v16 = (int32_t *)v14;
        uint32_t v19 = *v16; // 0x407b50
        uint64_t v20 = (int64_t)v19; // 0x407b50
        v5 = 0;
        if ((v19 & 16) != 0) {
            // 0x407b5b
            v5 = 0x20000;
            if (v20 % 2 != 0) {
                // 0x407d30
                v5 = 0x20000 * (int64_t)(*(int64_t *)(a1 + 88) != 0);
            }
        }
        int64_t v21 = *(int64_t *)(a1 + 48); // 0x407b6f
        int64_t v22 = 0xffffff9c; // 0x407b88
        if ((v20 & 516) == 512) {
            // 0x407b8a
            v22 = (int64_t)*(int32_t *)(a1 + 44);
        }
        int64_t v23 = 128 * v20 & 0x40000 | v5 & 0xfff60000 | 0x90900; // 0x407b8e
        v13 = function_40b940(v22, v21, (int32_t)v23, v5);
        int32_t fd = v13; // 0x407b9d
        if (fd < 0) {
            goto lab_0x407ed2;
        } else {
            struct __dirstream * v24 = fdopendir(fd); // 0x407ba7
            if (v24 == NULL) {
                int32_t * v25 = __errno_location(); // 0x407ebc
                close(fd);
                goto lab_0x407ed2;
            } else {
                int16_t * v26 = (int16_t *)(a1 + 112); // 0x407bb5
                *dirp2 = (int64_t)v24;
                if (*v26 == 11) {
                    // 0x407f6c
                    *v26 = (int16_t)function_406cf0(a1, a1, 0);
                    v8 = a1;
                } else {
                    int32_t v27 = *v16; // 0x407bc5
                    v8 = v21;
                    if ((v27 & 256) != 0) {
                        int64_t v28 = a1 + 88; // 0x407f20
                        function_4076c0(v27, v28, a1);
                        function_406cf0(a1, a1, 0);
                        int64_t v29 = function_407610(*v16, v28, a1); // 0x407f46
                        v8 = v28;
                        if ((char)v29 == 0) {
                            // 0x407f53
                            *__errno_location() = 12;
                          lab_0x407d12:
                            // 0x407d12
                            return 0;
                        }
                    }
                }
                // 0x407bd5
                v15 = a1 + 64;
                v17 = *(int64_t *)v15 == 0 ? 0x186a0 : -1;
                v18 = v1;
                if (v18 == 2) {
                    goto lab_0x407f10;
                } else {
                    // 0x407bf6
                    if ((*v16 & 56) == 24) {
                        // 0x407d42
                    } else {
                        // 0x407c06
                        goto lab_0x407c15;
                    }
                }
            }
        }
    } else {
        // 0x40778a
        if (dirfd((struct __dirstream *)dirp) < 0) {
            // 0x407fed
            closedir((struct __dirstream *)*dirp2);
            *dirp2 = 0;
            if ((int32_t)v1 != 3) {
                // 0x407d12
                return 0;
            }
            goto lab_0x408009;
        } else {
            int64_t v30 = a1 + 72;
            int32_t * v31 = (int32_t *)v30;
            v3 = v31;
            v2 = v30;
            v11 = -1;
            v7 = a2;
            if (*(int64_t *)(a1 + 64) == 0) {
                // 0x407ef8
                v4 = v30;
                v12 = 0x186a0;
                v10 = 1;
                v9 = a2;
                v6 = (int64_t)*v31;
                goto lab_0x4077b4;
            } else {
                goto lab_0x4077ab;
            }
        }
    }
  lab_0x407cc0_2:;
    // 0x407cc0
    int64_t v32; // 0x4078e4
    free((int64_t *)v32);
    int64_t v33; // 0x407760
    function_407030(v33);
    closedir((struct __dirstream *)*dirp2);
    *dirp2 = 0;
    *(int16_t *)(a1 + 112) = 7;
    int32_t * v34; // 0x407760
    *v34 = *v34 | 0x4000;
    return 0;
  lab_0x407a3c_2:;
    // 0x407a3c
    int64_t v35; // 0x407760
    int64_t v36 = v35; // 0x407a49
    int64_t v37; // 0x407760
    int64_t v38 = v37; // 0x407a49
    int64_t v39; // 0x407760
    int64_t v40 = v39; // 0x407a49
    char * v41; // 0x407760
    char * v42 = v41; // 0x407a49
    int64_t v43 = v35; // 0x407a49
    int64_t result2 = v37; // 0x407a49
    int64_t v44 = v39; // 0x407a49
    char v45; // 0x407760
    if (v45 == 0) {
        goto lab_0x407d91;
    } else {
        goto lab_0x407a4f;
    }
  lab_0x4078cc:;
    // 0x4078cc
    char * str; // 0x407760
    uint64_t len = (int64_t)strlen(str); // 0x4078d3
    int64_t v46; // 0x407760
    v32 = function_406fa0(a1, v46, len);
    if (v32 == 0) {
        goto lab_0x407cc0_2;
    }
    // 0x4078f5
    int64_t v47; // 0x407760
    int64_t v48 = v47; // 0x4078fa
    char v49; // 0x407760
    char v50 = v49; // 0x4078fa
    int64_t v51; // 0x407760
    int64_t v52 = v51; // 0x4078fa
    int64_t v53 = a1; // 0x4078fa
    int64_t v54; // 0x407760
    int64_t v55; // 0x407760
    int64_t v56; // 0x407802
    int64_t * v57; // 0x407802
    int64_t v58; // 0x407760
    int64_t * v59; // 0x407760
    if (v51 <= len) {
        char v60 = function_407320(v58, v56, v55 + 2 + len);
        if (v60 == 0) {
            goto lab_0x407cc0_2;
        }
        int64_t v61 = *v59; // 0x4079c0
        char v62 = v49; // 0x4079c9
        int64_t v63 = v47; // 0x4079c9
        if (v61 != *v59) {
            // 0x4079cf
            v63 = (*v41 & 4) == 0 ? v47 : v61 + v54;
            v62 = v60;
        }
        // 0x4079e3
        v48 = v63;
        v50 = v62;
        v52 = *v57 - v54;
        v53 = v58;
    }
    uint64_t v64 = v54 + len; // 0x407903
    int32_t * v65; // 0x40789a
    if (v64 < len) {
        // 0x4080c0
        free((int64_t *)v32);
        function_407030(v33);
        closedir((struct __dirstream *)*dirp2);
        *dirp2 = 0;
        *(int16_t *)(a1 + 112) = 7;
        *v34 = *v34 | 0x4000;
        *v65 = 36;
        goto lab_0x407d12;
    }
    int64_t v66 = v52;
    v45 = v50;
    v35 = v48;
    int64_t v67 = v32 + 264; // 0x407913
    int64_t * v68; // 0x407817
    *(int64_t *)(v32 + 88) = *v68 + 1;
    *(int64_t *)(v32 + 72) = v64;
    *(int64_t *)(v32 + 8) = v53;
    struct dirent * v69; // 0x4078ab
    *(int64_t *)(v32 + 128) = *(int64_t *)v69;
    int32_t v70 = *v34; // 0x407933
    int32_t v71; // 0x407760
    if ((v70 & 4) != 0) {
        // 0x407a00
        *(int64_t *)(v32 + 48) = *(int64_t *)(v32 + 56);
        int64_t v72 = *(int64_t *)(v32 + 96); // 0x407a0d
        memmove((int64_t *)v35, (int64_t *)v67, (int32_t)v72 + 1);
        v71 = *v34;
    } else {
        // 0x40793e
        *(int64_t *)(v32 + 48) = v67;
        v71 = v70;
    }
    int64_t v73 = v71;
    int64_t v74; // 0x407760
    int64_t v75; // 0x407760
    int64_t v76; // 0x407760
    int64_t v77; // 0x407760
    int64_t v78; // 0x40795c
    int64_t v79; // 0x40795c
    int64_t v80; // 0x407760
    int64_t v81; // 0x4078ab
    if (*(int64_t *)v80 != 0 == (v73 & 1024) == 0) {
        // 0x407b28
        *(int16_t *)(v32 + 112) = (int16_t)function_406cf0(a1, v32, 0);
        v76 = v32;
        goto lab_0x407857;
    } else {
        unsigned char v82 = *(char *)(v81 + 18); // 0x407952
        int64_t v83 = v82; // 0x40795a
        v78 = v83 + 0xffffffff;
        v79 = v78 & 0xffffffff;
        v77 = v83;
        if ((v73 & 24) == 24) {
            unsigned char v84 = v82 & -5;
            v77 = 0;
            if (v84 == 0) {
                goto lab_0x407968;
            } else {
                int64_t v85 = v84; // 0x407af0
                *(int16_t *)(v32 + 112) = 11;
                if ((int32_t)v78 < 12) {
                    int32_t v86 = *(int32_t *)(4 * v79 + (int64_t)&g8); // 0x407ca8
                    *(int32_t *)(v32 + 144) = v86;
                    v74 = 1;
                    v75 = v85;
                } else {
                    // 0x407b0f
                    *(int32_t *)(v32 + 144) = 0;
                    v74 = 1;
                    v75 = v85;
                }
                goto lab_0x407850;
            }
        } else {
            goto lab_0x407968;
        }
    }
  lab_0x407857:;
    int64_t v87 = v76;
    *(int64_t *)(v32 + 16) = 0;
    int64_t v88; // 0x407760
    v39 = v88 + 1;
    int64_t v89; // 0x407760
    int64_t v90; // 0x407760
    int64_t v91; // 0x407760
    int64_t v92; // 0x407760
    int64_t v93; // 0x407760
    int64_t v94; // 0x407760
    char v95; // 0x407760
    int64_t v96; // 0x407760
    if (v33 == 0) {
        // 0x407a28
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v32;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v32;
        if (v39 >= v12) {
            goto lab_0x407a3c_2;
        }
    } else {
        // 0x40786b
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
            goto lab_0x407a3c_2;
        }
    }
    goto lab_0x407883;
  lab_0x407968:
    // 0x407968
    *(int16_t *)(v32 + 112) = 11;
    if ((int32_t)v78 < 12) {
        int32_t v166 = *(int32_t *)(4 * v79 + (int64_t)&g8); // 0x40797b
        *(int32_t *)(v32 + 144) = v166;
        v74 = 2;
        int64_t v167; // 0x407760
        v75 = v167;
    } else {
        // 0x407840
        *(int32_t *)(v32 + 144) = 0;
        v74 = 2;
        v75 = v77;
    }
    goto lab_0x407850;
  lab_0x407883:;
    int64_t v97 = *dirp2; // 0x40788d
    int64_t dirp3 = v97; // 0x407894
    int64_t v98 = v91; // 0x407894
    int64_t v99 = v90; // 0x407894
    int64_t v100 = v93; // 0x407894
    int64_t v101 = v89; // 0x407894
    int64_t v102 = v92; // 0x407894
    char v103 = v95; // 0x407894
    int64_t v104 = v96; // 0x407894
    int64_t v105 = v96; // 0x407894
    char v106 = v95; // 0x407894
    int64_t v107 = v93; // 0x407894
    int64_t v108 = v90; // 0x407894
    if (v97 == 0) {
        goto lab_0x407d86;
    }
    goto lab_0x40789a;
  lab_0x407850:
    // 0x407850
    *(int64_t *)(v32 + 168) = v74;
    v76 = v75;
    goto lab_0x407857;
  lab_0x407ed2:
    // 0x407ed2
    *dirp2 = 0;
    if ((int32_t)v1 != 3) {
        // 0x407d12
        return 0;
    }
    goto lab_0x408009;
  lab_0x408009:
    // 0x408009
    *(int16_t *)(a1 + 112) = 4;
    *(int32_t *)(a1 + 64) = *__errno_location();
    // 0x407d12
    return 0;
  lab_0x4077ab:
    // 0x4077ab
    v4 = v2;
    v12 = v11;
    v10 = 1;
    v9 = v7;
    v6 = (int64_t)*v3;
    goto lab_0x4077b4;
  lab_0x407f10:
    // 0x407f10
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v8;
    v6 = (int64_t)*v16;
    goto lab_0x4077b4;
  lab_0x4077b4:;
    int64_t v111 = *(int64_t *)v4; // 0x4077b4
    char v112 = *(char *)(v111 - 1 + *(int64_t *)(a1 + 56)); // 0x4077ca
    v55 = v111 + (int64_t)(v112 == 47);
    int64_t v113 = 0; // 0x4077eb
    if ((v6 & 4) != 0) {
        int64_t v114 = *(int64_t *)(a1 + 32) + v55; // 0x4077f2
        *(char *)v114 = 47;
        v113 = v114 + 1;
    }
    // 0x407802
    v54 = v111 + (int64_t)(v112 != 47);
    v56 = a1 + 48;
    v57 = (int64_t *)v56;
    v68 = (int64_t *)(a1 + 88);
    int64_t v115 = *dirp2; // 0x40788d
    if (v115 == 0) {
        // 0x407802
        v42 = (char *)v4;
        v43 = v113;
        result2 = 0;
        v44 = 0;
        goto lab_0x407d91;
    } else {
        // 0x40789a
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
          lab_0x40789a:
            // 0x40789a
            v47 = v104;
            v49 = v103;
            v33 = v100;
            v88 = v99;
            int64_t v109 = v98;
            v65 = __errno_location();
            *v65 = 0;
            v69 = readdir((struct __dirstream *)dirp3);
            if (v69 == NULL) {
                // break -> 0x407e70
                break;
            }
            // 0x4078bc
            v51 = v102;
            v94 = v101;
            v81 = (int64_t)v69;
            v46 = v81 + 19;
            str = (char *)v46;
            if ((*v41 & 32) != 0) {
                goto lab_0x4078cc;
            } else {
                // 0x4078c2
                if (*str == 46) {
                    int64_t v110 = v81 + 20; // 0x407ad0
                    v96 = v47;
                    v95 = v49;
                    v92 = v51;
                    v93 = v33;
                    v90 = v88;
                    v91 = v109;
                    v89 = v94;
                    if (*(char *)v110 == 0) {
                        goto lab_0x407883;
                    } else {
                        // 0x407ad6
                        v96 = v47;
                        v95 = v49;
                        v92 = v51;
                        v93 = v33;
                        v90 = v88;
                        v91 = v109;
                        v89 = v94;
                        if (*(int16_t *)v110 != 46) {
                            goto lab_0x4078cc;
                        } else {
                            goto lab_0x407883;
                        }
                    }
                } else {
                    goto lab_0x4078cc;
                }
            }
        }
        int32_t v116 = *v65; // 0x407e70
        if (v116 != 0) {
            // 0x407e80
            *(int32_t *)v80 = v116;
            *(int16_t *)(a1 + 112) = (v88 | dirp) == 0 ? 4 : 7;
        }
        int64_t dirp4 = *dirp2; // 0x407e9d
        v105 = v47;
        v106 = v49;
        v107 = v33;
        v108 = v88;
        if (dirp4 != 0) {
            // 0x407eaa
            closedir((struct __dirstream *)dirp4);
            *dirp2 = 0;
            v105 = v47;
            v106 = v49;
            v107 = v33;
            v108 = v88;
        }
      lab_0x407d86:
        // 0x407d86
        v36 = v105;
        v38 = v107;
        v40 = v108;
        v42 = v41;
        v43 = v105;
        result2 = v107;
        v44 = v108;
        if (v106 != 0) {
            goto lab_0x407a4f;
        } else {
            goto lab_0x407d91;
        }
    }
  lab_0x407c15:;
    int64_t v117 = v13 & 0xffffffff; // 0x407b9b
    int64_t v118 = v18 == 3;
    char v119 = 1;
    int64_t v120 = v117; // 0x407c1a
    int16_t * v121; // 0x407760
    int16_t v122; // 0x407760
    int64_t v123; // 0x407760
    int64_t v124; // 0x407760
    int64_t v125; // 0x407760
    int64_t v126; // 0x407760
    int64_t v127; // 0x407760
    if ((*(char *)(a1 + 73) & 2) != 0) {
        int64_t v128 = function_40bde0(v117, 1030, 3, v5); // 0x407f91
        int64_t v129 = v128 & 0xffffffff; // 0x407f96
        v120 = v129;
        if ((int32_t)v128 >= 0) {
            goto lab_0x407c20;
        } else {
            int16_t * v130 = (int16_t *)(a1 + 114);
            int64_t dirp5 = *dirp2; // 0x407fa5
            int16_t v131 = *v130 | 1;
            v121 = v130;
            v123 = v129;
            v122 = v131;
            v126 = 1030;
            v124 = dirp5;
            if (v119 != 0 == (v118 != 0)) {
                goto lab_0x407c4d;
            } else {
                // 0x407fba
                *v130 = v131;
                closedir((struct __dirstream *)dirp5);
                v127 = 1030;
                v125 = (int64_t)*v16;
                goto lab_0x407c8f;
            }
        }
    } else {
        goto lab_0x407c20;
    }
  lab_0x407d91:
    // 0x407d91
    if ((*v42 & 4) != 0) {
        int64_t v132 = *v57; // 0x407d9d
        *(char *)(v43 + (int64_t)(v44 == 0 | v132 == v54)) = 0;
    }
    // 0x407db6
    if (dirp != 0 || v10 == 0) {
        goto lab_0x407e28;
    } else {
        // 0x407dc5
        if ((int32_t)v1 == 1 || v44 == 0) {
            // 0x407e08
            int64_t v133; // 0x407760
            if (*v68 != 0) {
                int64_t v134 = function_407440(a1, *(int64_t *)(a1 + 8), 0xffffffff, (int32_t)".."); // 0x407fde
                v133 = v134;
            } else {
                // 0x407e13
                v133 = function_4072c0(a1);
            }
            // 0x407e20
            if ((int32_t)v133 != 0) {
                // 0x408024
                *(int16_t *)(a1 + 112) = 7;
                int32_t * v135 = (int32_t *)v4; // 0x408033
                *v135 = *v135 | 0x4000;
                function_407030(result2);
                // 0x407d12
                return 0;
            }
            goto lab_0x407e28;
        } else {
            goto lab_0x407dd1;
        }
    }
  lab_0x407a4f:;
    int64_t v136 = *(int64_t *)(a1 + 8); // 0x407a4f
    int64_t v137 = *v59; // 0x407a53
    if (v136 != 0) {
        int64_t * v138 = (int64_t *)(v136 + 48); // 0x407a60
        int64_t v139 = *v138; // 0x407a60
        int64_t * v140 = (int64_t *)(v136 + 56);
        if (v139 != v136 + 264) {
            // 0x407a70
            *v138 = v139 + v137 - *v140;
        }
        // 0x407a7b
        *v140 = v137;
        int64_t v141 = *(int64_t *)(v136 + 16); // 0x407a7f
        int64_t v142 = v141; // 0x407a86
        while (v141 != 0) {
            // 0x407a60
            v138 = (int64_t *)(v142 + 48);
            v139 = *v138;
            v140 = (int64_t *)(v142 + 56);
            if (v139 != v142 + 264) {
                // 0x407a70
                *v138 = v139 + v137 - *v140;
            }
            // 0x407a7b
            *v140 = v137;
            v141 = *(int64_t *)(v142 + 16);
            v142 = v141;
        }
    }
    // 0x407a88
    v42 = v41;
    v43 = v36;
    result2 = v38;
    v44 = v40;
    if (*(int64_t *)(v38 + 88) >= 0) {
        int64_t * v143 = (int64_t *)(v38 + 48); // 0x407a9e
        int64_t v144 = *v143; // 0x407a9e
        int64_t * v145 = (int64_t *)(v38 + 56);
        if (v144 != v38 + 264) {
            // 0x407aae
            *v143 = v144 + v137 - *v145;
        }
        int64_t v146 = *(int64_t *)(v38 + 16); // 0x407ab9
        *v145 = v137;
        int64_t v147 = v146; // 0x407ac4
        if (v146 == 0) {
            // 0x407ac6
            v147 = *(int64_t *)(v38 + 8);
        }
        // 0x407a90
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
                // 0x407aae
                *v143 = v144 + v137 - *v145;
            }
            // 0x407ab9
            v146 = *(int64_t *)(v148 + 16);
            *v145 = v137;
            v147 = v146;
            if (v146 == 0) {
                // 0x407ac6
                v147 = *(int64_t *)(v148 + 8);
            }
            // 0x407a90
            v42 = v41;
            v43 = v36;
            result2 = v38;
            v44 = v40;
        }
    }
    goto lab_0x407d91;
  lab_0x407c20:;
    int64_t v149 = function_407440(a1, a1, v120, 0); // 0x407c2a
    v3 = v16;
    v2 = v14;
    v11 = v17;
    v7 = a1;
    int16_t * v150; // 0x407760
    int16_t v151; // 0x407760
    int64_t v152; // 0x407760
    int64_t dirp6; // 0x407760
    int64_t v153; // 0x407760
    if ((int32_t)v149 == 0) {
        goto lab_0x4077ab;
    } else {
        int16_t * v154 = (int16_t *)(a1 + 114);
        int64_t v155 = *dirp2; // 0x407c3c
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
            goto lab_0x407c62;
        } else {
            goto lab_0x407c4d;
        }
    }
  lab_0x407e28:
    // 0x407e28
    if (v44 == 0) {
        if ((int32_t)v1 != 3) {
            // 0x407e38
            function_407030(result2);
            // 0x407d12
            return 0;
        }
        int16_t * v157 = (int16_t *)(a1 + 112); // 0x408098
        switch (*v157) {
            case 4: {
            }
            case 7: {
                // 0x407e38
                function_407030(result2);
                // 0x407d12
                return 0;
            }
        }
        // 0x4080b1
        *v157 = 6;
        // 0x407e38
        function_407030(result2);
        // 0x407d12
        return 0;
    }
    goto lab_0x407dd1;
  lab_0x407dd1:;
    int64_t * v158 = (int64_t *)(a1 + 64); // 0x407dd1
    int64_t v159 = *v158; // 0x407dd1
    int64_t v160 = v159; // 0x407ddc
    if (v44 >= 0x2711) {
        if (v159 != 0) {
            // 0x407de7
            uint64_t v161; // 0x407760
            int64_t v162; // 0x407760
            return function_406ea0(a1, v162, v161);
        }
        // 0x40804e
        int64_t v163; // 0x407760
        switch (function_4070c0(a1, v163)) {
            case 0x1021994: {
            }
            case 0x6969: {
                // 0x407e50
                v160 = *v158;
                // break -> 0x407e58
                break;
            }
            default: {
                // 0x40806e
                *v158 = 0x406cc0;
                int64_t result = function_406ea0(a1, result2, v44); // 0x408081
                *v158 = 0;
                // 0x407d12
                return result;
            }
        }
    }
    // 0x407e58
    if (v44 == 1 || v160 == 0) {
        // 0x407d12
        return result2;
    }
    // 0x407de7
    return function_406ea0(a1, result2, v44);
  lab_0x407c4d:
    // 0x407c4d
    *(int32_t *)v15 = *__errno_location();
    v150 = v121;
    v152 = v123;
    v151 = v122;
    v153 = v126;
    dirp6 = v124;
    goto lab_0x407c62;
  lab_0x407c62:
    // 0x407c62
    *v150 = v151;
    closedir((struct __dirstream *)dirp6);
    uint32_t v164 = *v16; // 0x407c6c
    int64_t v165 = v164; // 0x407c6c
    *dirp2 = 0;
    v127 = v153;
    v125 = v165;
    if ((v164 & 512) != 0) {
        uint32_t fd2 = (int32_t)v152; // 0x407c80
        v127 = v153;
        v125 = v165;
        if (fd2 >= 0) {
            // 0x407c84
            close(fd2);
            v127 = v153;
            v125 = (int64_t)*v16;
        }
    }
    goto lab_0x407c8f;
  lab_0x407c8f:
    // 0x407c8f
    *dirp2 = 0;
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v127;
    v6 = v125;
    goto lab_0x4077b4;
}
// Address range: 0x408120 - 0x4084b9
int64_t fts_open(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    if ((v1 & 18) == 0 || a2 >= 0x2000 || (v1 & 516) == 516) {
        // 0x4083c0
        *__errno_location() = 22;
        // 0x4083ad
        return 0;
    }
    int64_t * mem = calloc(128, 1); // 0x408168
    int64_t result = (int64_t)mem; // 0x408168
    if (mem == NULL) {
        // 0x4083ad
        return result;
    }
    // 0x408179
    *(int64_t *)(result + 64) = a3;
    if ((v1 & 2) != 0) {
        // 0x408400
        *(int32_t *)(result + 72) = a2 & -517 | 4;
    } else {
        // 0x408187
        *(int32_t *)(result + 72) = a2;
    }
    int32_t * v2 = (int32_t *)(result + 44); // 0x40818e
    *v2 = -100;
    int64_t v3 = a1; // 0x4081a4
    uint64_t v4 = 0;
    uint64_t len = (int64_t)strlen((char *)128); // 0x4081a8
    int64_t v5 = v4 < len ? len : v4; // 0x4081b0
    v3 += 8;
    int64_t str = *(int64_t *)v3; // 0x4081b8
    while (str != 0) {
        // 0x4081a8
        v4 = v5;
        len = (int64_t)strlen((char *)str);
        v5 = v4 < len ? len : v4;
        v3 += 8;
        str = *(int64_t *)v3;
    }
    uint64_t v6 = v5 + 1; // 0x4081c0
    int64_t v7 = result + 32; // 0x4081d9
    char v8 = function_407320(v7, result + 48, v6 > 0x1000 ? v6 : 0x1000); // 0x4081e2
    if (v8 == 0) {
        // 0x4083eb
        free(mem);
        // 0x4083ad
        return 0;
    }
    int64_t v9; // 0x408120
    int64_t v10; // 0x408120
    int64_t v11; // 0x408120
    char v12; // 0x408120
    char * v13; // 0x408120
    char * v14; // 0x40820d
    if (v7 == 0) {
        // 0x408410
        v14 = NULL;
        v10 = 0;
        v13 = NULL;
        v9 = 0;
        if (a3 != 0) {
            goto lab_0x408233;
        } else {
            goto lab_0x40835c;
        }
    } else {
        int64_t v15 = function_406fa0(result, (int64_t)&g10, 0); // 0x408205
        if (v15 == 0) {
            goto lab_0x4083e2;
        } else {
            // 0x40821b
            v14 = (char *)v15;
            *(int64_t *)(v15 + 88) = -1;
            *(int64_t *)(v15 + 104) = -1;
            v10 = result;
            v12 = v8;
            v11 = result;
            if (a3 == 0) {
                goto lab_0x408240;
            } else {
                goto lab_0x408233;
            }
        }
    }
  lab_0x4082d8:;
    // 0x4082d8
    int64_t v16; // 0x408120
    int64_t v17; // 0x408279
    *(int64_t *)(v17 + 16) = v16;
    int64_t v18; // 0x408120
    int64_t v19 = v18; // 0x4082dc
    int64_t v20 = v17; // 0x4082dc
    goto lab_0x4082df;
  lab_0x4082df:;
    int64_t v21 = v20;
    int64_t v22; // 0x408120
    int64_t v23 = v22 + 1; // 0x4082df
    int64_t v24 = *(int64_t *)(8 * v23 + a1); // 0x4082e3
    int64_t v25 = v19; // 0x4082eb
    int64_t v26 = v23; // 0x4082eb
    int64_t v27 = v21; // 0x4082eb
    int64_t v28 = v24; // 0x4082eb
    if (v24 == 0) {
        // 0x408340
        v13 = v14;
        v9 = v21;
        if (a3 == 0 || v23 < 2) {
            goto lab_0x40835c;
        } else {
            // 0x40834b
            v13 = v14;
            v9 = function_406ea0(result, v21, v23);
            goto lab_0x40835c;
        }
    }
    goto lab_0x4082ed;
  lab_0x408470:
    // 0x408470
    *(int64_t *)(v18 + 16) = v17;
    v19 = v17;
    v20 = v16;
    goto lab_0x4082df;
  lab_0x408233:
    // 0x408233
    v12 = (char)(*(int32_t *)(result + 72) / 1024) % 2;
    v11 = v10;
    goto lab_0x408240;
  lab_0x40835c:;
    int64_t v35 = function_406fa0(result, (int64_t)&g10, 0); // 0x408366
    *mem = v35;
    char * v33 = v13; // 0x408371
    int64_t v34 = v9; // 0x408371
    if (v35 != 0) {
        // 0x408373
        *(int64_t *)(v35 + 16) = v9;
        int32_t * v36 = (int32_t *)(result + 72); // 0x40837c
        *(int16_t *)(v35 + 112) = 9;
        v33 = v13;
        v34 = v9;
        if ((char)function_407390(*v36, result + 88) != 0) {
            uint32_t v37 = *v36; // 0x408390
            if ((v37 & 516) == 0) {
                int32_t v38 = function_4073f0(*v2, (int64_t)v37, (int64_t)"."); // 0x4084a5
                *(int32_t *)(result + 40) = v38;
                if (v38 < 0) {
                    int32_t v39 = *v36; // 0x4084b0
                    *v36 = v39 | 4;
                }
            }
            // 0x40839f
            function_40b2b0(result + 96, 0xffffffff);
            // 0x4083ad
            return result;
        }
    }
    goto lab_0x4083d0;
  lab_0x4083e2:
    // 0x4083e2
    free((int64_t *)*(int64_t *)v7);
    // 0x4083eb
    free(mem);
    // 0x4083ad
    return 0;
  lab_0x408240:
    // 0x408240
    v13 = v14;
    v9 = 0;
    if (v11 == 0) {
        goto lab_0x40835c;
    } else {
        // 0x4082ed
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v11;
        while (true) {
          lab_0x4082ed:;
            int64_t str2 = v28;
            v16 = v27;
            v22 = v26;
            v18 = v25;
            int32_t len2 = strlen((char *)str2); // 0x4082f0
            int64_t v29 = len2; // 0x4082f0
            int64_t v30 = v29; // 0x4082f9
            if ((v1 & 0x1000) == 0 && len2 >= 3) {
                // 0x40830a
                v30 = v29;
                if (*(char *)(str2 - 1 + v29) == 47) {
                    int64_t v31 = v29;
                    v30 = v31;
                    while (*(char *)(str2 - 2 + v31) == 47) {
                        int64_t v32 = v31 - 1; // 0x40832c
                        v30 = v32;
                        if (v31 == 2) {
                            // break -> 0x408270
                            break;
                        }
                        v31 = v32;
                        v30 = v31;
                    }
                }
            }
            // 0x408270
            v17 = function_406fa0(result, str2, v30);
            v33 = v14;
            v34 = v16;
            if (v17 == 0) {
                // break -> 0x4083d0
                break;
            }
            // 0x40828a
            *(int64_t *)(v17 + 88) = 0;
            *(int64_t *)(v17 + 8) = (int64_t)v14;
            *(int64_t *)(v17 + 48) = v17 + 264;
            if (v12 == 0 || v16 == 0) {
                // 0x408430
                *(int16_t *)(v17 + 112) = (int16_t)function_406cf0(result, v17, 0);
                if (a3 != 0) {
                    goto lab_0x4082d8;
                } else {
                    // 0x40844b
                    *(int64_t *)(v17 + 16) = 0;
                    v19 = v17;
                    v20 = v17;
                    if (v16 != 0) {
                        goto lab_0x408470;
                    } else {
                        goto lab_0x4082df;
                    }
                }
            } else {
                // 0x4082ba
                *(int64_t *)(v17 + 168) = 2;
                *(int16_t *)(v17 + 112) = 11;
                if (a3 == 0) {
                    // 0x408468
                    *(int64_t *)(v17 + 16) = 0;
                    goto lab_0x408470;
                } else {
                    goto lab_0x4082d8;
                }
            }
        }
        goto lab_0x4083d0;
    }
  lab_0x4083d0:
    // 0x4083d0
    function_407030(v34);
    free((int64_t *)v33);
    goto lab_0x4083e2;
}
// Address range: 0x4084c0 - 0x408639
int64_t fts_close(int64_t a1) {
    if (a1 != 0) {
        int64_t v1 = a1; // 0x4084d4
        int64_t v2 = a1; // 0x4084d4
        if (*(int64_t *)(a1 + 88) >= 0) {
            while (true) {
                int64_t v3 = v1;
                int64_t v4 = *(int64_t *)(v3 + 16); // 0x4084ef
                int64_t v5; // 0x4084c0
                if (v4 != 0) {
                    // 0x4084e0
                    free((int64_t *)v3);
                    v5 = v4;
                    v2 = v4;
                    if (*(int64_t *)(v4 + 88) < 0) {
                        // break -> 0x40850b
                        break;
                    }
                } else {
                    int64_t v6 = *(int64_t *)(v3 + 8); // 0x4084f8
                    free((int64_t *)v3);
                    v5 = v6;
                    v2 = v6;
                    if (*(int64_t *)(v6 + 88) < 0) {
                        // break -> 0x40850b
                        break;
                    }
                }
                // 0x4084ef
                v1 = v5;
            }
        }
        // 0x40850b
        free((int64_t *)v2);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x408513
    if (v7 != 0) {
        // 0x40851c
        function_407030(v7);
    }
    // 0x408521
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)*(int64_t *)(a1 + 32));
    int32_t * v8 = (int32_t *)(a1 + 72); // 0x408533
    int32_t v9 = *v8; // 0x408533
    int32_t * v10; // 0x4084c0
    int32_t v11; // 0x4084c0
    if ((v9 & 512) == 0) {
        // 0x408590
        v11 = 0;
        if ((v9 & 4) != 0) {
            goto lab_0x408544;
        } else {
            int32_t * fd = (int32_t *)(a1 + 40); // 0x408594
            if (fchdir(*fd) != 0) {
                int32_t * v12 = __errno_location(); // 0x4085f0
                int32_t v13 = *v12; // 0x4085fb
                v11 = v13;
                v10 = v12;
                if (close(*fd) == 0 || v13 != 0) {
                    goto lab_0x408544;
                } else {
                    goto lab_0x408612;
                }
            } else {
                // 0x4085a0
                v11 = 0;
                if (close(*fd) == 0) {
                    goto lab_0x408544;
                } else {
                    // 0x4085ac
                    v10 = __errno_location();
                    goto lab_0x408612;
                }
            }
        }
    } else {
        int32_t fd2 = *(int32_t *)(a1 + 44); // 0x40853b
        v11 = 0;
        if (fd2 >= 0) {
            // 0x4085c0
            v11 = 0;
            if (close(fd2) != 0) {
                // 0x4085cd
                v11 = *__errno_location();
            }
        }
        goto lab_0x408544;
    }
  lab_0x408544:
    // 0x408544
    function_407080(a1 + 96);
    int64_t v14 = *(int64_t *)(a1 + 80); // 0x40854d
    if (v14 != 0) {
        // 0x408556
        function_40ab30(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 88); // 0x40855b
    if ((*v8 & 258) == 0) {
        // 0x4085e0
        free((int64_t *)v15);
    } else {
        if (v15 != 0) {
            // 0x40856d
            function_40ab30(v15);
        }
    }
    // 0x408572
    free((int64_t *)a1);
    int64_t result = v11; // 0x40857c
    if (v11 != 0) {
        // 0x408628
        *__errno_location() = v11;
        result = 0xffffffff;
    }
    // 0x408582
    return result;
  lab_0x408612:
    // 0x408612
    v11 = *v10;
    goto lab_0x408544;
}
// Address range: 0x408640 - 0x408d99
int64_t fts_read(int64_t result) {
    // 0x408640
    if (result == 0) {
        // 0x40876a
        return 0;
    }
    int32_t * v1 = (int32_t *)(result + 72); // 0x408654
    uint32_t v2 = *v1; // 0x408654
    if ((v2 & 0x4000) != 0) {
        // 0x40876a
        return 0;
    }
    int16_t * v3 = (int16_t *)(result + 116); // 0x408660
    int16_t v4 = *v3; // 0x408660
    *v3 = 3;
    if (v4 == 1) {
        // 0x408a30
        *(int16_t *)(result + 112) = (int16_t)function_406cf0(result, result, 0);
        // 0x40876a
        return result;
    }
    int16_t * v5 = (int16_t *)(result + 112); // 0x40867a
    int16_t v6 = *v5; // 0x40867a
    int64_t v7; // 0x408640
    int64_t v8; // 0x408640
    int64_t v9; // 0x408640
    int64_t v10; // 0x408640
    int64_t v11; // 0x408640
    int64_t v12; // 0x408640
    int64_t v13; // 0x408640
    if (v4 == 2) {
        if ((v6 || 1) == 13) {
            int16_t v14 = function_406cf0(result, result, 1); // 0x4089da
            *v5 = v14;
            if (v14 == 1) {
                uint32_t v15 = *v1; // 0x408cc0
                if ((v15 & 4) == 0) {
                    int64_t v16 = v15; // 0x408cc0
                    int32_t v17 = *(int32_t *)(result + 44); // 0x408d33
                    int32_t v18 = function_4073f0(v17, v16, (int64_t)"."); // 0x408d42
                    *(int32_t *)(result + 68) = v18;
                    if (v18 < 0) {
                        int32_t v19 = *__errno_location(); // 0x408d6e
                        *v5 = 7;
                        *(int32_t *)(result + 64) = v19;
                        *(int64_t *)result = result;
                        // 0x40876a
                        return result;
                    }
                    int16_t * v20 = (int16_t *)(result + 114); // 0x408d49
                    *v20 = *v20 | 2;
                    v7 = result;
                    v10 = (int64_t)".";
                    v12 = v16;
                    goto lab_0x408977;
                } else {
                    // 0x408ccb
                    *(int64_t *)result = result;
                    v8 = result;
                    goto lab_0x40898e;
                }
            } else {
                // 0x4089e8
                *(int64_t *)result = result;
                v11 = 1;
                v9 = result;
                v13 = result;
                if (v14 != 11) {
                    // 0x40876a
                    return result;
                }
                goto lab_0x408a00;
            }
        } else {
            if (v6 != 1) {
                goto lab_0x4086c0;
            } else {
                goto lab_0x408797;
            }
        }
    } else {
        if (v6 != 1) {
            goto lab_0x4086c0;
        } else {
            if (v4 != 4) {
                goto lab_0x408797;
            } else {
                goto lab_0x408832;
            }
        }
    }
  lab_0x4086c0:;
    int64_t * v21 = (int64_t *)result;
    int64_t v22 = result;
    int64_t v23 = *(int64_t *)(v22 + 16); // 0x4086c0
    int64_t result2; // 0x408640
    int64_t v24; // 0x408640
    int64_t v25; // 0x408890
    while (v23 != 0) {
        // 0x408698
        *v21 = v23;
        free((int64_t *)v22);
        if (*(int64_t *)(v23 + 88) == 0) {
            // 0x408880
            if ((int32_t)function_4072c0(result) != 0) {
                // 0x408c1f
                *v1 = *v1 | 0x4000;
                result2 = 0;
                return result2;
            } else {
                // 0x408890
                v25 = result + 88;
                int64_t v26 = *(int64_t *)v25; // 0x408890
                if ((*v1 & 258) == 0) {
                    // 0x408c2d
                    free((int64_t *)v26);
                    goto lab_0x4088ae;
                } else {
                    if (v26 == 0) {
                        goto lab_0x4088ae;
                    } else {
                        // 0x4088a9
                        function_40ab30(v26);
                        goto lab_0x4088ae;
                    }
                }
            }
        }
        int16_t * v27 = (int16_t *)(v23 + 116);
        int16_t v28 = *v27; // 0x4086af
        if (v28 != 4) {
            // 0x408930
            v24 = v23;
            if (v28 == 2) {
                int16_t v29 = function_406cf0(result, v23, 1); // 0x408c54
                int16_t * v30 = (int16_t *)(v23 + 112); // 0x408c54
                *v30 = v29;
                if (v29 == 1) {
                    uint32_t v31 = *v1; // 0x408cd7
                    if ((v31 & 4) != 0) {
                        // 0x408c5e
                        *v27 = 3;
                        v24 = v23;
                        goto lab_0x40893a;
                    } else {
                        int32_t v32 = *(int32_t *)(result + 44); // 0x408ce6
                        int32_t v33 = function_4073f0(v32, (int64_t)v31, (int64_t)"."); // 0x408cf5
                        *(int32_t *)(v23 + 68) = v33;
                        if (v33 < 0) {
                            int32_t v34 = *__errno_location(); // 0x408d8b
                            *v30 = 7;
                            *(int32_t *)(v23 + 64) = v34;
                            // 0x408c5e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40893a;
                        } else {
                            int16_t * v35 = (int16_t *)(v23 + 114); // 0x408d00
                            *v35 = *v35 | 2;
                            // 0x408c5e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40893a;
                        }
                    }
                } else {
                    // 0x408c5e
                    *v27 = 3;
                    v24 = v23;
                    goto lab_0x40893a;
                }
            } else {
                goto lab_0x40893a;
            }
        }
        v22 = v23;
        v23 = *(int64_t *)(v22 + 16);
    }
    int64_t * v36 = (int64_t *)(v22 + 8); // 0x4086c9
    int64_t v37 = *v36; // 0x4086c9
    int64_t result6 = v37; // 0x4086d2
    if (*(int64_t *)(v37 + 24) != 0) {
        // 0x408be0
        *v21 = v37;
        *(char *)(*(int64_t *)(result + 32) + *(int64_t *)(v37 + 72)) = 0;
        int64_t v38 = function_407760(result, 3); // 0x408bf9
        if (v38 != 0) {
            // 0x408c8f
            free((int64_t *)v22);
            v24 = v38;
            goto lab_0x40893a;
        } else {
            // 0x408c0a
            if ((*(char *)(result + 73) & 64) != 0) {
                // 0x40876a
                return 0;
            }
            // 0x408c16
            result6 = *v36;
            goto lab_0x4086d8;
        }
    } else {
        goto lab_0x4086d8;
    }
  lab_0x408797:;
    int64_t v39 = v2; // 0x408654
    if ((v39 & 64) == 0) {
        goto lab_0x4087ab;
    } else {
        // 0x40879c
        if (*(int64_t *)(result + 120) != *(int64_t *)(result + 24)) {
            goto lab_0x408832;
        } else {
            goto lab_0x4087ab;
        }
    }
  lab_0x4086d8:
    // 0x4086d8
    *v21 = result6;
    free((int64_t *)v22);
    int64_t * v40 = (int64_t *)(result6 + 88); // 0x4086e4
    if (*v40 == -1) {
        // 0x408aff
        free((int64_t *)result6);
        *__errno_location() = 0;
        *v21 = 0;
        // 0x40876a
        return 0;
    }
    // 0x4086ef
    *(char *)(*(int64_t *)(result6 + 72) + *(int64_t *)(result + 32)) = 0;
    if (*v40 == 0) {
        // 0x408b2f
        if ((int32_t)function_4072c0(result) == 0) {
            goto lab_0x408726;
        } else {
            goto lab_0x408b3f;
        }
    } else {
        uint16_t v41 = *(int16_t *)(result6 + 114); // 0x408712
        if ((v41 & 2) != 0) {
            int32_t v42 = *v1; // 0x408ab5
            int32_t * v43 = (int32_t *)(result6 + 68); // 0x408aba
            uint32_t fd = *v43; // 0x408aba
            int32_t fd2 = fd; // 0x408abf
            if ((v42 & 4) == 0) {
                if ((v42 & 512) == 0) {
                    // 0x408c9c
                    if (fchdir(fd) != 0) {
                        // 0x408ca5
                        *(int32_t *)(result6 + 64) = *__errno_location();
                        *v1 = *v1 | 0x4000;
                    }
                    // 0x408cb8
                    fd2 = *v43;
                } else {
                    // 0x408aca
                    function_407250(result, (int64_t)fd, 1);
                    fd2 = *v43;
                }
            }
            // 0x408adc
            close(fd2);
            goto lab_0x408726;
        } else {
            if (v41 % 2 == 0) {
                int64_t v44 = *(int64_t *)(result6 + 8); // 0x408c6c
                if ((int32_t)function_407440(result, v44, 0xffffffff, (int32_t)"..") == 0) {
                    goto lab_0x408726;
                } else {
                    goto lab_0x408b3f;
                }
            } else {
                goto lab_0x408726;
            }
        }
    }
  lab_0x408832:
    // 0x408832
    if ((*(char *)(result + 114) & 2) != 0) {
        // 0x408c37
        close(*(int32_t *)(result + 68));
    }
    int64_t * v45 = (int64_t *)(result + 8); // 0x40883c
    int64_t v46 = *v45; // 0x40883c
    if (v46 != 0) {
        // 0x408846
        function_407030(v46);
        *v45 = 0;
    }
    // 0x408854
    *v5 = 6;
    function_4076c0(*v1, result + 88, result);
    // 0x40876a
    return result;
  lab_0x408a00:;
    int64_t result5 = v9;
    int64_t result3 = result5; // 0x408a0b
    if (*(int64_t *)(result5 + 168) != 2) {
        // 0x40876a
        return result3;
    }
    int64_t v47 = *(int64_t *)(result5 + 8); // 0x408b67
    int64_t * v48 = (int64_t *)(v47 + 104); // 0x408b6b
    int64_t v49; // 0x408640
    int64_t v50; // 0x408640
    if (*v48 != 0) {
        goto lab_0x408b83;
    } else {
        // 0x408b72
        if ((*v1 & 24) == 24) {
            // 0x408d19
            if ((int32_t)function_4071e0(v47, v13, v11) != 2) {
                goto lab_0x408b83;
            } else {
                // 0x408d2a
                v49 = (int64_t)*(int16_t *)(result5 + 112);
                v50 = result5;
                goto lab_0x408981;
            }
        } else {
            goto lab_0x408b83;
        }
    }
  lab_0x4087ab:;
    int64_t * v51 = (int64_t *)(result + 8); // 0x4087ab
    int64_t v52 = *v51; // 0x4087ab
    int64_t v53; // 0x408640
    if (v52 == 0) {
        goto lab_0x408a59;
    } else {
        if ((v39 & 0x2000) != 0) {
            // 0x408a43
            *v1 = v2 & -0x2001;
            function_407030(v52);
            *v51 = 0;
            goto lab_0x408a59;
        } else {
            int64_t v54 = *(int64_t *)(result + 48); // 0x4087c2
            if ((int32_t)function_407440(result, result, 0xffffffff, (int32_t)v54) == 0) {
                // 0x408ae6
                v53 = *v51;
            } else {
                int32_t * v55 = __errno_location(); // 0x4087de
                int64_t v56 = *v51; // 0x4087e3
                int16_t * v57 = (int16_t *)(result + 114); // 0x4087ea
                *v57 = *v57 | 1;
                *(int32_t *)(result + 64) = *v55;
                v53 = 0;
                if (v56 != 0) {
                    *(int64_t *)(v56 + 48) = *(int64_t *)(*(int64_t *)(v56 + 8) + 48);
                    int64_t v58 = *(int64_t *)(v56 + 16); // 0x40880c
                    int64_t v59 = v58; // 0x408813
                    v53 = v56;
                    while (v58 != 0) {
                        int64_t v60 = *(int64_t *)(*(int64_t *)(v59 + 8) + 48); // 0x408804
                        *(int64_t *)(v59 + 48) = v60;
                        v58 = *(int64_t *)(v59 + 16);
                        v59 = v58;
                        v53 = v56;
                    }
                }
            }
            goto lab_0x408815;
        }
    }
  lab_0x408977:;
    uint16_t v61 = *(int16_t *)(v7 + 112);
    *(int64_t *)result = v7;
    v49 = v61;
    v50 = v7;
    v11 = v10;
    v9 = v7;
    v13 = v12;
    if (v61 == 11) {
        goto lab_0x408a00;
    } else {
        goto lab_0x408981;
    }
  lab_0x40898e:;
    int64_t v62 = v8; // 0x408993
    if (*(int64_t *)(v8 + 88) != 0) {
        goto lab_0x40899e;
    } else {
        goto lab_0x408995;
    }
  lab_0x408b83:;
    int64_t v63 = function_406cf0(result, result5, 0); // 0x408b8b
    int16_t v64 = v63; // 0x408b96
    *(int16_t *)(result5 + 112) = v64;
    v49 = v63;
    v50 = result5;
    if ((*(int32_t *)(result5 + 144) & 0xf000) != 0x4000) {
        goto lab_0x408981;
    } else {
        // 0x408bac
        if (*(int64_t *)(result5 + 88) == 0) {
            // 0x408d0a
            result3 = result5;
            if (v64 != 1) {
                int64_t v65 = result3;
                result2 = v65;
                int64_t result4 = result2;
                return result4;
            }
            goto lab_0x408995;
        } else {
            uint64_t v66 = *v48 - 1; // 0x408bbb
            if (v66 < 0xfffffffffffffffe) {
                // 0x408d5a
                *v48 = v66;
            }
            // 0x408bc9
            v62 = result5;
            if (v64 != 1) {
                // 0x40876a
                return result5;
            }
            goto lab_0x40899e;
        }
    }
  lab_0x408a59:;
    int64_t v67 = function_407760(result, 3); // 0x408a61
    *v51 = v67;
    v53 = v67;
    if (v67 == 0) {
        int32_t v68 = *v1; // 0x408a77
        if ((v68 & 0x4000) != 0) {
            // 0x40876a
            return 0;
        }
        // 0x408a88
        if (*(int32_t *)(result + 64) == 0) {
            // 0x408aa3
            function_4076c0(v68, result + 88, result);
            result2 = result;
          lab_0x40876a:
            // 0x40876a
            return result2;
        }
        // 0x408a91
        if (*v5 != 4) {
            // 0x408a98
            *v5 = 7;
        }
        // 0x408aa3
        function_4076c0(v68, result + 88, result);
        // 0x40876a
        return result;
    }
    goto lab_0x408815;
  lab_0x40893a:;
    int64_t v69 = *(int64_t *)(v24 + 8); // 0x40893a
    int64_t v70 = *(int64_t *)(v69 + 72); // 0x40893e
    char v71 = *(char *)(v70 - 1 + *(int64_t *)(v69 + 56)); // 0x40894a
    int64_t v72 = *(int64_t *)(result + 32) + v70 + (int64_t)(v71 == 47); // 0x408953
    *(char *)v72 = 47;
    int64_t v73 = *(int64_t *)(v24 + 96) + 1; // 0x408963
    int64_t v74 = v24 + 264; // 0x408967
    memmove((int64_t *)(v72 + 1), (int64_t *)v74, (int32_t)v73);
    v7 = v24;
    v10 = v73;
    v12 = v74;
    goto lab_0x408977;
  lab_0x408726:;
    int64_t v75 = (int64_t)*v1; // 0x40872b
    int64_t v76 = v75; // 0x408730
    int32_t * v77; // 0x408640
    int64_t v78; // 0x408640
    if (*(int16_t *)(result6 + 112) == 2) {
        goto lab_0x408758;
    } else {
        // 0x408726
        v77 = (int32_t *)(result6 + 64);
        v78 = v75;
        goto lab_0x408732;
    }
  lab_0x408b3f:;
    int32_t v79 = *__errno_location(); // 0x408b44
    int32_t * v80 = (int32_t *)(result6 + 64);
    *v80 = v79;
    uint32_t v81 = *v1 | 0x4000; // 0x408b49
    *v1 = v81;
    if (*(int16_t *)(result6 + 112) == 2) {
        // 0x40876a
        return 0;
    }
    // 0x408b5d
    v77 = v80;
    v78 = v81;
    goto lab_0x408732;
  lab_0x408981:
    // 0x408981
    result2 = v50;
    v8 = v50;
    if ((int16_t)v49 != 1) {
        // 0x40876a
        return result2;
    }
    goto lab_0x40898e;
  lab_0x40899e:;
    int64_t v93 = function_407610(*v1, result + 88, v62); // 0x4089ae
    result2 = v62;
    if ((char)v93 == 0) {
        // 0x4089bb
        *__errno_location() = 12;
        result2 = 0;
    }
    // 0x40876a
    return result2;
  lab_0x408995:
    // 0x408995
    *(int64_t *)(result + 24) = *(int64_t *)(v8 + 120);
    v62 = v8;
    goto lab_0x40899e;
  lab_0x408815:
    // 0x408815
    *v51 = 0;
    v24 = v53;
    goto lab_0x40893a;
  lab_0x408758:
    // 0x408758
    if ((v76 & 0x4000) != 0) {
        // 0x40876a
        return 0;
    }
    // 0x40876a
    return result6;
  lab_0x408732:
    // 0x408732
    if (*v77 != 0) {
        // 0x408b21
        int64_t v82; // 0x408640
        *(int16_t *)(v82 + 112) = 7;
        int64_t v83; // 0x408640
        v76 = v83;
    } else {
        // 0x40873d
        *(int16_t *)(result6 + 112) = 6;
        function_4076c0((int32_t)v78, result + 88, result6);
        v76 = (int64_t)*v1;
    }
    goto lab_0x408758;
  lab_0x4088ae:;
    int64_t * v84 = (int64_t *)(v23 + 96); // 0x4088ae
    int64_t v85 = *v84; // 0x4088ae
    int64_t str = v23 + 264; // 0x4088b2
    int64_t * v86 = (int64_t *)(result + 32); // 0x4088b9
    *(int64_t *)(v23 + 72) = v85;
    int64_t v87 = v85 + 1; // 0x4088c5
    int64_t * v88 = (int64_t *)str; // 0x4088c9
    memmove((int64_t *)*v86, v88, (int32_t)v87);
    char * found_char_pos = strrchr((char *)str, 47); // 0x4088d6
    int64_t v89 = v87; // 0x4088de
    int64_t v90; // 0x4088d6
    if (found_char_pos == NULL) {
        goto lab_0x40890b;
    } else {
        // 0x4088e0
        v90 = (int64_t)found_char_pos;
        if (str == v90) {
            // 0x408af0
            v89 = v87;
            if (*(char *)(v23 + 265) == 0) {
                goto lab_0x40890b;
            } else {
                goto lab_0x4088e9;
            }
        } else {
            goto lab_0x4088e9;
        }
    }
  lab_0x40890b:;
    int64_t v91 = *v86; // 0x40890b
    *(int64_t *)(v23 + 56) = v91;
    *(int64_t *)(v23 + 48) = v91;
    function_407390(*v1, v25);
    v7 = v23;
    v10 = v89;
    v12 = v25;
    goto lab_0x408977;
  lab_0x4088e9:;
    int64_t str2 = v90 + 1; // 0x4088e9
    int64_t len = strlen((char *)str2); // 0x4088f0
    int64_t v92 = len + 1; // 0x4088fe
    memmove(v88, (int64_t *)str2, (int32_t)v92);
    *v84 = len;
    v89 = v92;
    goto lab_0x40890b;
}
// Address range: 0x408da0 - 0x408dc9
int64_t fts_set(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 5) {
        // 0x408da5
        *(int16_t *)(a2 + 116) = (int16_t)a3;
        return 0;
    }
    // 0x408db0
    *__errno_location() = 22;
    return 1;
}
// Address range: 0x408dd0 - 0x408f3d
int64_t fts_children(int64_t a1, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x408ddd
    if ((a2 & 0xffffdfff) != 0) {
        // 0x408ec8
        *v1 = 22;
        return 0;
    }
    // 0x408df1
    *v1 = 0;
    char * v2 = (char *)(a1 + 73); // 0x408dfa
    if ((*v2 & 64) != 0) {
        // 0x408e6f
        return 0;
    }
    int16_t v3 = *(int16_t *)(a1 + 112); // 0x408e04
    if (v3 == 9) {
        // 0x408ef0
        return *(int64_t *)(a1 + 16);
    }
    // 0x408e14
    if (v3 != 1) {
        // 0x408e6f
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x408e1c
    int64_t v5 = *v4; // 0x408e1c
    if (v5 != 0) {
        // 0x408e25
        function_407030(v5);
    }
    int64_t v6 = 1; // 0x408e36
    if ((int32_t)a2 == 0x2000) {
        int32_t * v7 = (int32_t *)(a1 + 72); // 0x408e38
        *v7 = *v7 | 0x2000;
        v6 = 2;
    }
    // 0x408e45
    int64_t result; // 0x408e66
    if (*(int64_t *)(a1 + 88) != 0 || *(char *)*(int64_t *)(a1 + 48) == 47) {
        // 0x408e60
        result = function_407760(a1, v6);
        *v4 = result;
        // 0x408e6f
        return result;
    }
    uint32_t v8 = *(int32_t *)(a1 + 72); // 0x408e57
    if ((v8 & 4) != 0) {
        // 0x408e60
        result = function_407760(a1, v6);
        *v4 = result;
        // 0x408e6f
        return result;
    }
    int64_t v9 = function_4073f0(*(int32_t *)(a1 + 44), (int64_t)v8, (int64_t)"."); // 0x408e88
    int32_t fd = v9; // 0x408e8f
    if (fd < 0) {
        // 0x408f18
        *v4 = 0;
        // 0x408e6f
        return 0;
    }
    // 0x408e97
    *v4 = function_407760(a1, v6);
    if ((*v2 & 2) != 0) {
        // 0x408f00
        function_407250(a1, v9 & 0xffffffff, 1);
        // 0x408e6f
        return *v4;
    }
    // 0x408eac
    if (fchdir(fd) == 0) {
        // 0x408eb7
        close(fd);
        // 0x408e6f
        return *v4;
    }
    // 0x408f27
    close(fd);
    // 0x408e6f
    return 0;
}
// Address range: 0x408f40 - 0x40901f
int64_t function_408f40(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x408f4c
    uint32_t v2 = *v1; // 0x408f4c
    int64_t v3 = a2 & 0xffffffff; // 0x408f51
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408f54
    uint64_t v5 = (int64_t)*v4; // 0x408f54
    int64_t v6; // 0x408fc2
    if (v3 <= v5) {
      lab_0x408fbc_2:
        // 0x408fbc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x408f42
    int64_t v8 = v2; // 0x408f40
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x408fbc
        goto lab_0x408fbc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408f78
    int64_t v17; // 0x408f86
    int64_t * v18; // 0x408fa0
    int64_t * v19; // 0x408fa3
    int64_t v20; // 0x408fae
    int64_t v21; // 0x408f86
    while ((v16 & 0xffffffff) > v10) {
        // 0x408f83
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x408fa0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x408fb7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x408fbc
            goto lab_0x408fbc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x408fbc
            goto lab_0x408fbc_2;
        }
        // 0x408f72
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x408ffb
    int64_t * v23 = (int64_t *)v22; // 0x409000
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x409003
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x409000
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x409017
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x408f6d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x408fbc
            goto lab_0x408fbc_2;
        }
        // 0x408f72
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408f83
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x408fa0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x408fb7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x408fbc
                goto lab_0x408fbc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x408fbc
                goto lab_0x408fbc_2;
            }
            // 0x408f72
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x408fe0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x409000
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x409017
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x408fbc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x409020 - 0x40963c
int64_t function_409020(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40903f
    int64_t v2 = *v1; // 0x40903f
    char * str2 = (char *)v2; // 0x40904c
    char c = *str2; // 0x40904c
    int64_t v3 = v2; // 0x409078
    int64_t v4 = 0; // 0x409020
    int32_t v5; // 0x409020
    int64_t v6; // 0x409020
    int64_t v7; // 0x409020
    int64_t v8; // 0x409020
    int64_t v9; // 0x409020
    int64_t v10; // 0x409020
    int64_t v11; // 0x409020
    int64_t v12; // 0x409020
    int64_t v13; // 0x409020
    int64_t str3; // 0x409020
    int64_t v14; // 0x409020
    int64_t v15; // 0x409020
    int64_t v16; // 0x409020
    int64_t v17; // 0x409020
    int32_t v18; // 0x409020
    int32_t v19; // 0x409020
    int32_t v20; // 0x409020
    int32_t v21; // 0x409020
    int32_t v22; // 0x409020
    int32_t v23; // 0x409020
    int32_t v24; // 0x409020
    int32_t v25; // 0x409020
    int32_t v26; // 0x409020
    int32_t v27; // 0x409020
    int32_t v28; // 0x409020
    int32_t v29; // 0x409020
    int64_t nmemb; // 0x409020
    int64_t v30; // 0x409020
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40907c
            while (v31 != 0 == (v31 != 61)) {
                // 0x409078
                v3++;
                v31 = *(char *)v3;
            }
            // 0x409088
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40908e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x409058
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4090bc
                int64_t v34; // 0x409020
                int64_t v35; // 0x409020
                if (strncmp(str, str2, n) == 0) {
                    // 0x4090c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x409240;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4090d6
                int64_t v37 = *(int64_t *)v36; // 0x4090da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4090b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4090c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x409240;
                        }
                    }
                    // 0x4090d6
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
                  lab_0x409126:
                    // 0x409126
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
                        goto lab_0x409180;
                    } else {
                        if (v11 == 0) {
                            // 0x4092f0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x409180;
                        } else {
                            if (v39 == 0) {
                                // 0x4092a0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40914a;
                                } else {
                                    // 0x4092ac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40914a;
                                    } else {
                                        // 0x4092ba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40914a;
                                        } else {
                                            goto lab_0x409180;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40914a;
                            }
                        }
                    }
                }
              lab_0x409191:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x409366
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x409512
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x409532
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40957f
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x409599
                            int64_t v45; // 0x40959b
                            if (*(char *)v42 != 0) {
                                // 0x40959b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x409593
                            while (v17 + nmemb != v42) {
                                // 0x409595
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40959b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x409588
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4095c0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x409374
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4094cf
                        free((int64_t *)v17);
                    }
                    // 0x4093c9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4093e0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40928e
                    return 63;
                }
                // 0x4091b0
                v5 = v39;
                if (v13 != 0) {
                    // 0x409234
                    v35 = v13;
                    v34 = v25;
                  lab_0x409240:;
                    int32_t * v49 = (int32_t *)a7; // 0x409250
                    uint32_t v50 = *v49; // 0x409250
                    int64_t v51 = v50; // 0x409250
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40925a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x409263
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40948f
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40943a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40928e
                            return 63;
                        }
                        // 0x4092d8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4095ef
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4094ed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x409500
                                // 0x40928e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4093fe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x409412
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40927b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40927e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x409282
                    int64_t result = v59; // 0x409288
                    if (v58 != 0) {
                        // 0x40928a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40928e
                    return result;
                }
            } else {
                // 0x40908e
                v5 = v32;
            }
            // break -> 0x4091b5
            break;
        }
    }
    // 0x4091b5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4091cd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4091d7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40928e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x409319
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x409206
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x409216
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x409180:
    // 0x409180
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x409180
    int64_t v63 = *(int64_t *)v62; // 0x409184
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x409191
        goto lab_0x409191;
    }
    goto lab_0x409126;
  lab_0x40914a:
    // 0x40914a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x409020
    int32_t v65; // 0x409020
    int32_t v66; // 0x409020
    if (v27 != 0) {
        goto lab_0x409180;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x409300
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x409180;
            } else {
                goto lab_0x409171;
            }
        } else {
            // 0x409165
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40945c
                int64_t v67 = (int64_t)mem; // 0x40945c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x409180;
                } else {
                    // 0x40946f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x409171;
                }
            } else {
                goto lab_0x409171;
            }
        }
    }
  lab_0x409171:
    // 0x409171
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x409180;
}
// Address range: 0x409640 - 0x409c06
int64_t function_409640(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x409661
    if (v3 < 1) {
        // 0x40981e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40965d
    int32_t v5 = *(int32_t *)a7; // 0x409669
    uint64_t v6 = a1 & 0xffffffff; // 0x40966b
    int64_t v7 = v2; // 0x409670
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x409673
    *v8 = 0;
    int64_t v9; // 0x409640
    int64_t v10; // 0x409640
    int64_t v11; // 0x409640
    int64_t v12; // 0x409640
    int64_t str; // 0x409640
    int64_t v13; // 0x409640
    int64_t v14; // 0x409640
    int64_t v15; // 0x409640
    int64_t v16; // 0x409640
    int64_t v17; // 0x409640
    int32_t v18; // 0x409640
    char v19; // 0x409640
    if (v5 == 0) {
        // 0x409858
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40968a;
    } else {
        // 0x409683
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4096d0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4096d3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x409798;
            } else {
                int64_t v22 = v7 + 1; // 0x4096e6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4096f6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4097ac;
                } else {
                    goto lab_0x409708;
                }
            }
        } else {
            goto lab_0x40968a;
        }
    }
  lab_0x40968a:
    // 0x40968a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x409690
    *v24 = 0;
    int64_t v25; // 0x409640
    int64_t v26; // 0x409640
    int64_t v27; // 0x409640
    switch (*(char *)&v2) {
        case 45: {
            // 0x409780
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40978d;
        }
        case 43: {
            // 0x409a90
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40978d;
        }
        default: {
            // 0x4096ac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x409a0f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x409b28
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40978d;
                } else {
                    // 0x409a1d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4096ba;
                }
            } else {
                goto lab_0x4096ba;
            }
        }
    }
  lab_0x409798:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40979f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409708;
    } else {
        goto lab_0x4097ac;
    }
  lab_0x4096ba:
    // 0x4096ba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40978d;
  lab_0x40978d:
    // 0x40978d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x409798;
  lab_0x409708:;
    uint32_t v30 = *(int32_t *)a7; // 0x409708
    int64_t v31 = v30; // 0x409708
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40970a
    if ((int64_t)*v32 > v31) {
        // 0x40970f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409712
    if (*v33 > v30) {
        // 0x409717
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40971a
    int64_t v35 = v31; // 0x40971e
    int64_t v36 = v15; // 0x40971e
    int64_t v37; // 0x409640
    int64_t v38; // 0x409640
    int64_t v39; // 0x409640
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x409888
        int64_t v41 = v40; // 0x409888
        v2 = v41;
        int64_t v42; // 0x409640
        if (*v33 == v40) {
            // 0x409a70
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409a78
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x409894
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409898
                function_408f40(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4098a8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4098b1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4098ba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4098d1
            int64_t v47 = v45 & 0xffffffff; // 0x4098d5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4098de
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4098e4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4098e6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4098c0
            int64_t v49 = v48 & 0xffffffff; // 0x4098c0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4098d1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4098de
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4098e4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4098e6;
                    }
                }
                // 0x4098c0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x409a88
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4098e6;
    } else {
        goto lab_0x409724;
    }
  lab_0x4097ac:
    // 0x4097ac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4097af
    int64_t v51 = v12; // 0x4097af
    int64_t v52 = v14; // 0x4097af
    if (*(char *)v10 == 0) {
        goto lab_0x409708;
    } else {
        goto lab_0x4097b5;
    }
  lab_0x409724:;
    int32_t v53 = v35; // 0x409724
    int64_t v54; // 0x409640
    int64_t v55; // 0x409640
    int64_t v56; // 0x409640
    int64_t v57; // 0x409640
    int64_t v58; // 0x409640
    int64_t v59; // 0x409640
    char * v60; // 0x409640
    int64_t v61; // 0x409640
    int64_t v62; // 0x409739
    int64_t v63; // 0x409640
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x409873
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x409876;
    } else {
        // 0x40972c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409640
        int64_t v66 = v65 ? -1 : 1; // 0x409740
        int64_t v67 = (int64_t)"--"; // 0x409640
        int64_t v68 = v62; // 0x409640
        int64_t v69 = 3; // 0x409740
        unsigned char v70 = *(char *)v68; // 0x409740
        char v71 = *(char *)v67; // 0x409740
        char v72 = v71; // 0x409740
        bool v73 = false; // 0x409740
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
            // 0x409830
            if (*(char *)v62 == 45) {
                // 0x4098f0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4098f0
                if (c == 0) {
                    goto lab_0x40983a;
                } else {
                    // 0x4098fd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x409980;
                    } else {
                        if (c == 45) {
                            // 0x409b63
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4099d5;
                        } else {
                            // 0x40990e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x409980;
                            } else {
                                // 0x409913
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409934;
                                } else {
                                    // 0x40991a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x409980;
                                    } else {
                                        goto lab_0x409934;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40983a;
            }
        } else {
            uint32_t v75 = *v33; // 0x409750
            v2 = v75;
            int32_t v76 = *v32; // 0x409753
            int64_t v77 = v35 + 1; // 0x409756
            int32_t v78 = v77; // 0x409759
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x409ac0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409767
                    function_408f40(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x409775
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x409876;
        }
    }
  lab_0x4097b5:;
    // 0x4097b5
    int64_t v79; // bp-104, 0x409640
    int64_t v80 = &v79; // 0x40964a
    int64_t v81 = v50 + 1; // 0x4097b5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4097bc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4097c1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4097c5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4097c9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4097d1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4097d6
    int32_t c2 = v84; // 0x4097d6
    char * found_char_pos = strchr(str2, c2); // 0x4097d6
    int64_t v87 = *v82; // 0x4097db
    v2 = v87;
    int64_t v88 = *v85; // 0x4097e5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4097f0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x409ae0
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x409aad
        *(int32_t *)(v1 + 8) = c2;
        // 0x40981e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4097d6
    char v91 = *(char *)(v90 + 1); // 0x40980b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4097c5
        if (v91 != 58) {
            // 0x40981e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409a34
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409b38
                *v8 = 0;
            } else {
                // 0x409b1c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x409a5e
            *v83 = 0;
            // 0x40981e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x409a3e
        if (v93 != 0) {
            // 0x409ad0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x409a5e
            *v83 = 0;
            // 0x40981e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x409a51
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x409a5e
            *v83 = 0;
            // 0x40981e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x409b9a
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x409b4a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x409b51
        // 0x409a5e
        *v83 = 0;
        // 0x40981e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4099a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4099ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x409bd0
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x409b81
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x409b88
            // 0x40981e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4099b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4099ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4099d5;
  lab_0x4098e6:
    // 0x4098e6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409724;
  lab_0x4099d5:;
    int64_t v99 = function_409020(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4099f3
    // 0x40981e
    return v99 & 0xffffffff;
  lab_0x409876:;
    int32_t v100 = v55; // 0x409876
    if (v100 != (int32_t)v59) {
        // 0x40987a
        *(int32_t *)a7 = v100;
    }
    // 0x40981e
    return 0xffffffff;
  lab_0x40983a:
    // 0x40983a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409841
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40981e
    return v99 & 0xffffffff;
  lab_0x409980:
    // 0x409980
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4097b5;
  lab_0x409934:
    // 0x409934
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_409020(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x40995a
    if ((int32_t)v101 != -1) {
        // 0x40981e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40996f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x409980;
}
// Address range: 0x409c10 - 0x409c66
int64_t function_409c10(int64_t a1) {
    // 0x409c10
    *(int32_t *)&g45 = g28;
    *(int32_t *)&g46 = g27;
    int64_t v1; // 0x409c10
    int64_t result = function_409640(v1, v1, v1, v1, v1, v1, &g45, a1 & 0xffffffff); // 0x409c36
    g28 = *(int32_t *)&g45;
    g52 = (char *)g48;
    *(int32_t *)&g26 = g47;
    return result;
}
// Address range: 0x409c70 - 0x409c88
int64_t function_409c70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409c70
    return function_409c10(1);
}
// Address range: 0x409c90 - 0x409ca3
int64_t function_409c90(int64_t a1, int64_t a2, char * a3, char (**a4)[10], int32_t a5, int64_t a6) {
    // 0x409c90
    return function_409c10(0);
}
// Address range: 0x409cb0 - 0x409cc5
int64_t function_409cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409cb0
    return function_409640(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x409cd0 - 0x409ce6
int64_t function_409cd0(void) {
    // 0x409cd0
    return function_409c10(0);
}
// Address range: 0x409cf0 - 0x409d08
int64_t function_409cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409cf0
    return function_409640(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409d10 - 0x409d8a
int64_t function_409d10(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x409d1b
    int64_t v2 = (int64_t)&g10; // 0x409d1b
    int32_t * pwc; // 0x409d10
    int64_t v3; // 0x409d10
    int64_t n; // 0x409d10
    if (a2 == 0) {
        goto lab_0x409d62;
    } else {
        // 0x409d1d
        if (a3 == 0) {
            // 0x409d48
            return -2;
        }
        // 0x409d29
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409d62;
        } else {
            goto lab_0x409d34;
        }
    }
  lab_0x409d62:
    // 0x409d62
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409d10
    pwc = (int32_t *)&v4;
    goto lab_0x409d34;
  lab_0x409d34:;
    char * wstr = (char *)v3; // 0x409d3a
    int64_t ps; // 0x409d10
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x409d3a
    int64_t result = v5; // 0x409d3a
    if (v5 < 0xfffffffe) {
        // 0x409d48
        return result;
    }
    int64_t result2 = result; // 0x409d79
    if ((char)function_40a000(0, v3) == 0) {
        // 0x409d7b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409d48
    return result2;
}
// Address range: 0x409d90 - 0x409eba
int64_t function_409d90(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    if ((char)a3 == 0) {
        // 0x409e58
        *(char *)a1 = 0;
        return result;
    }
    // 0x409da6
    if (g49 == 0) {
        int32_t fd = open("/proc/self/fd", O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x409e32
        if (fd < 0) {
            // 0x409e3e
            g49 = -1;
            return 0;
        }
        // 0x409e70
        int64_t path; // bp-72, 0x409d90
        __sprintf_chk((char *)&path, 1, 32, "/proc/self/fd/%d/../fd", (int64_t)fd);
        g49 = access((char *)&path, F_OK) == 0 ? 1 : -1;
        close(fd);
    }
    // 0x409db6
    if (g49 < 0) {
        // 0x409dfe
        return 0;
    }
    char * str = (char *)a3; // 0x409dbd
    int32_t len = strlen(str); // 0x409dbd
    uint64_t size = (int64_t)len + 27; // 0x409dc2
    int64_t v1 = result; // 0x409dcd
    if (len != 4005 && size >= 4032) {
        int64_t * mem = malloc((int32_t)size); // 0x409e10
        v1 = (int64_t)mem;
        if (mem == NULL) {
            // 0x409dfe
            return 0;
        }
    }
    int64_t result2 = v1;
    strcpy((char *)(result2 + (int64_t)__sprintf_chk((char *)result2, 1, -1, "/proc/self/fd/%d/", a2 & 0xffffffff)), str);
    // 0x409dfe
    return result2;
}
// Address range: 0x409ec0 - 0x409f1d
int64_t function_409ec0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409ec7
    int64_t v2; // 0x409ec0
    int64_t result = function_40bd60(a1, v2); // 0x409ed8
    if ((v2 & 32) != 0) {
        // 0x409f00
        if ((int32_t)result == 0) {
            // 0x409f04
            *__errno_location() = 0;
        }
        // 0x409efa
        return 0xffffffff;
    }
    // 0x409ee1
    if ((int32_t)result == 0) {
        // 0x409efa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x409ee8
    if (v1 == 0) {
        // 0x409eea
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x409efa
    return result2;
}
// Address range: 0x409f20 - 0x409f30
int64_t function_409f20(int64_t a1) {
    // 0x409f20
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0x95f616;
    int64_t result; // 0x409f20
    return result;
}
// Address range: 0x409f30 - 0x409fb0
int64_t function_409f30(int64_t a1, int64_t a2) {
    // 0x409f30
    if (*(int32_t *)(a1 + 24) != 0x95f616) {
        // 0x409f92
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 60, "cycle_check");
        return &g57;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x409f39
    int64_t v2 = *v1; // 0x409f39
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x409f3d
    if (v2 == 0) {
        // 0x409f60
        *v1 = 1;
        // 0x409f68
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 8) = a2;
        return 0;
    }
    if (v3 == a1) {
        // 0x409f78
        if (*(int64_t *)(a1 + 8) == a2) {
            // 0x409f58
            return 1;
        }
    }
    int64_t v4 = v2 + 1; // 0x409f4b
    *v1 = v4;
    if ((v4 & v2) != 0) {
        // 0x409f58
        return 0;
    }
    // 0x409f87
    if (v4 == 0) {
        // 0x409f58
        return 1;
    }
    // 0x409f68
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 8) = a2;
    return 0;
}
// Address range: 0x409fb0 - 0x409ffa
int64_t function_409fb0(int64_t path, int64_t oflag, int32_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x409fc3
    return function_40ba20((int64_t)fd);
}
// Address range: 0x40a000 - 0x40a05e
int64_t function_40a000(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40a006
    if (locale == NULL) {
        // 0x40a033
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40a006
    bool v2; // 0x40a000
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x40a000
    int64_t v5 = v1; // 0x40a000
    int64_t v6 = 2; // 0x40a025
    unsigned char v7 = *(char *)v5; // 0x40a025
    char v8 = *(char *)v4; // 0x40a025
    char v9 = v8; // 0x40a025
    bool v10 = false; // 0x40a025
    while (v7 == v8) {
        // 0x40a018
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40a031
    int64_t v13 = v1; // 0x40a031
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40a033
        return 0;
    }
    int64_t v14 = 6; // 0x40a031
    unsigned char v15 = *(char *)v13; // 0x40a04d
    char v16 = *(char *)v12; // 0x40a04d
    char v17 = v16; // 0x40a04d
    bool v18 = false; // 0x40a04d
    while (v15 == v16) {
        // 0x40a040
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
// Address range: 0x40a060 - 0x40a0f3
int64_t function_40a060(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x40a077
    if (v1 == -1) {
        // 0x40a0ef
        return -1;
    }
    int64_t v2 = v1; // 0x40a07f
    int64_t v3; // 0x40a060
    while (true) {
      lab_0x40a088:
        // 0x40a088
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x40a0e0;
        } else {
            goto lab_0x40a0e5;
        }
    }
  lab_0x40a0ef_2:;
    // 0x40a0ef
    int64_t result; // 0x40a060
    return result;
  lab_0x40a0e5:;
    int64_t v4 = v3 + 2; // 0x40a0e5
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40a0ef
        goto lab_0x40a0ef_2;
    }
    goto lab_0x40a088;
  lab_0x40a0e0:
    // 0x40a0e0
    result = v3;
    goto lab_0x40a0e5;
}
// Address range: 0x40a100 - 0x40a110
int64_t function_40a100(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40a100
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x40a110 - 0x40a117
int64_t function_40a110(int64_t a1, int64_t a2) {
    // 0x40a110
    int64_t v1; // 0x40a110
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x40a120 - 0x40a141
int64_t function_40a120(int64_t a1, int64_t a2) {
    // 0x40a120
    int64_t v1; // 0x40a120
    return 16 * v1 + a2;
}
// Address range: 0x40a150 - 0x40a269
int64_t function_40a150(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_40a120(a1, a2); // 0x40a164
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40a16c
    int64_t result2 = *v2; // 0x40a16c
    if (result2 == 0) {
        // 0x40a1fe
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x40a194
            if (v3 == 0) {
                // 0x40a1fe
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x40a1a1
            int64_t v5 = v3; // 0x40a1a7
            int64_t v6 = v1; // 0x40a1a7
            int64_t result = v4; // 0x40a1a7
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40a1dc_2:
                // 0x40a1dc
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40a1e1
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x40a1f0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40a1fe
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x40a1b4
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x40a1c1
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40a1dc_2;
                }
                // 0x40a1c9
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40a1dc_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40a1fe
            return 0;
        }
    }
    // 0x40a213
    if ((char)a4 == 0) {
        // 0x40a1fe
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x40a218
    if (v12 == 0) {
        // 0x40a260
        *v2 = 0;
        // 0x40a1fe
        return result2;
    }
    // 0x40a221
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40a22f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x40a270 - 0x40a2ee
int64_t function_40a270(uint64_t a1) {
    if (a1 == (int64_t)&g12) {
        // 0x40a2ed
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40a27b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g12) {
        // 0x40a2da
        *(int64_t *)a1 = (int64_t)&g12;
        return 0;
    }
    // 0x40a289
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x40a2a4
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x40a2b1
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x40a2b9
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x40a2ed
    return 1;
}
// Address range: 0x40a2f0 - 0x40a43a
int64_t function_40a2f0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40a30a
    uint64_t v2 = *v1; // 0x40a30a
    if (v2 <= a2) {
        // 0x40a3f4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x40a2f0
    int64_t v8 = a2; // 0x40a2f0
    int64_t v9; // 0x40a2f0
    int64_t result; // 0x40a2f0
    int64_t v10; // 0x40a2f0
    while (true) {
      lab_0x40a326_2:
        // 0x40a326
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x40a326
        int64_t v12 = *v11; // 0x40a326
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x40a318;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40a32f
            int64_t v14 = *v13; // 0x40a32f
            int64_t v15 = v14; // 0x40a337
            int64_t v16 = v12; // 0x40a337
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x40a354
                    int64_t v19 = *v18; // 0x40a354
                    int64_t v20 = function_40a120(v3, v19); // 0x40a35d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x40a362
                    int64_t v22 = *v21; // 0x40a362
                    int64_t * v23 = (int64_t *)v20; // 0x40a366
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x40a340
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40a38f
                            break;
                        }
                    } else {
                        // 0x40a36c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40a38f
                            break;
                        }
                    }
                    // 0x40a354
                    v15 = v22;
                }
                // 0x40a38f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x40a393
                v9 = *v1;
                goto lab_0x40a318;
            } else {
                int64_t v26 = function_40a120(v3, v25); // 0x40a3ab
                int64_t * v27 = (int64_t *)v26; // 0x40a3b0
                if (*v27 == 0) {
                    // 0x40a410
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x40a3b9
                    int64_t * v29; // 0x40a2f0
                    int64_t v30; // 0x40a2f0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x40a41f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x40a3f4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x40a41f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40a3ca
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x40a3d9
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x40a3e1
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40a3ea
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x40a3f4
                    break;
                }
                goto lab_0x40a326_2;
            }
        }
    }
    // 0x40a3f4
    return result;
  lab_0x40a318:;
    int64_t v36 = v10 + 16; // 0x40a318
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x40a326_2;
    // 0x40a326
    goto lab_0x40a326_2;
}
// Address range: 0x40a440 - 0x40a445
int64_t function_40a440(int64_t a1) {
    // 0x40a440
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x40a450 - 0x40a455
int64_t function_40a450(int64_t a1) {
    // 0x40a450
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x40a460 - 0x40a465
int64_t function_40a460(int64_t a1) {
    // 0x40a460
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x40a470 - 0x40a4bf
int64_t function_40a470(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40a473
    int64_t result = 0; // 0x40a47c
    if (v1 <= a1) {
      lab_0x40a4bd:
        // 0x40a4bd
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x40a480
    while (*(int64_t *)v3 == 0) {
        // 0x40a480
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40a48f
    int64_t v6 = v5; // 0x40a49b
    int64_t v7 = 1; // 0x40a49b
    int64_t v8; // 0x40a470
    int64_t v9; // 0x40a4a0
    int64_t v10; // 0x40a4a4
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x40a4a0
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x40a4b0
    int64_t v12 = v3 + 16; // 0x40a4b4
    while (v12 < v1) {
        // 0x40a489
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x40a480
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40a48f
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
                // 0x40a4a0
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40a4ad
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40a4bd
    return result2;
}
// Address range: 0x40a4c0 - 0x40a527
int64_t function_40a4c0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40a4c3
    int64_t v2 = a1; // 0x40a4cf
    int64_t v3 = 0; // 0x40a4cf
    int64_t v4 = 0; // 0x40a4cf
    int64_t v5 = 0; // 0x40a4cf
    int64_t v6 = 0; // 0x40a4cf
    int64_t v7; // 0x40a4c0
    int64_t v8; // 0x40a4c0
    int64_t v9; // 0x40a4c0
    if (v1 > a1) {
        while (true) {
          lab_0x40a4e1_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x40a4d8;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x40a4e7
                int64_t v13 = v10 + 1; // 0x40a4eb
                int64_t v14 = v11 + 1; // 0x40a4ef
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x40a4f6
                int64_t v16 = v14; // 0x40a4f6
                if (v12 == 0) {
                    goto lab_0x40a4d8;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x40a500
                    int64_t v18 = v16 + 1; // 0x40a504
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x40a500
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40a50d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x40a516
                        break;
                    }
                    goto lab_0x40a4e1_2;
                }
            }
        }
    }
  lab_0x40a516:
    // 0x40a516
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40a51f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40a51e
    return 0;
  lab_0x40a4d8:;
    int64_t v20 = v8 + 16; // 0x40a4d8
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x40a516
        goto lab_0x40a516;
    }
    goto lab_0x40a4e1_2;
    // 0x40a4e1
    goto lab_0x40a4e1_2;
}
// Address range: 0x40a530 - 0x40a678
int64_t function_40a530(uint64_t a1, int64_t a2) {
    // 0x40a530
    int128_t v1; // 0x40a530
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x40a543
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x40a547
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40a54e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x40a560
            while (*(int64_t *)v7 == 0) {
                // 0x40a560
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40a59d
                    goto lab_0x40a59d;
                }
            }
        }
    }
  lab_0x40a59d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40a5ac
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x40a530
    int128_t v10; // 0x40a530
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x40a643
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40a64c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x40a5e3;
        } else {
            goto lab_0x40a659;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x40a5d6
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x40a659;
        } else {
            goto lab_0x40a5e3;
        }
    }
  lab_0x40a5e3:
    // 0x40a5e3
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x40a5e7
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x40a5e7
    goto lab_0x40a5ec;
  lab_0x40a659:
    // 0x40a659
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40a66a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40a5ec;
  lab_0x40a5ec:
    // 0x40a5ec
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x40a680 - 0x40a6d3
int64_t function_40a680(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_40a120(a1, result); // 0x40a68a
    int64_t v2 = *(int64_t *)v1; // 0x40a68f
    if (v2 == 0) {
        // 0x40a6bd
        return 0;
    }
    // 0x40a6a3
    if (v2 == result) {
        // 0x40a6bd
        return result;
    }
    int64_t v3 = v1; // 0x40a6b4
    int64_t result2 = v2; // 0x40a6b2
    while ((char)v1 == 0) {
        // 0x40a6b4
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40a6bd
            break;
        }
        // 0x40a6a0
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40a6bd
            break;
        }
        result2 = v2;
    }
    // 0x40a6bd
    return result2;
}
// Address range: 0x40a6e0 - 0x40a728
int64_t function_40a6e0(uint64_t a1) {
    int64_t result = 0; // 0x40a6e5
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x40a6f7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40a6ee
    if (v1 <= a1) {
        // 0x40a6f7
        return result;
    }
    int64_t v2 = a1; // 0x40a6f5
    int64_t v3 = *(int64_t *)v2; // 0x40a709
    result = v3;
    while (v3 == 0) {
        // 0x40a700
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x40a6f7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x40a6f7
    return result;
}
// Address range: 0x40a730 - 0x40a79a
int64_t function_40a730(int64_t a1, int64_t a2) {
    int64_t v1 = function_40a120(a1, a2); // 0x40a73c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x40a758
    while (*(int64_t *)v2 != a2) {
        // 0x40a750
        if (v3 == 0) {
            goto lab_0x40a766;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x40a790
        return *(int64_t *)v3;
    }
  lab_0x40a766:;
    int64_t v4 = v1 + 16; // 0x40a778
    int64_t result = 0; // 0x40a77f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x40a770
        result = v5;
        if (v5 != 0) {
            // break -> 0x40a783
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x40a783
    return result;
}
// Address range: 0x40a7a0 - 0x40a804
int64_t function_40a7a0(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40a7a6
    int64_t result = 0; // 0x40a7aa
    if (*v1 <= a1) {
      lab_0x40a7c1:
        // 0x40a7c1
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40a7af
    int64_t v4 = v2; // 0x40a7b5
    int64_t v5; // 0x40a7a0
    int64_t v6; // 0x40a7a0
    int64_t v7; // 0x40a7e8
    int64_t v8; // 0x40a7f1
    int64_t v9; // 0x40a7d1
    int64_t v10; // 0x40a7d5
    if (v3 != 0) {
        // 0x40a7c8
        if (v2 >= a3) {
            // break -> 0x40a7c1
            break;
        }
        // 0x40a7cd
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
            // 0x40a7e5
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x40a7e0
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40a7e5
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
    int64_t v12 = a1 + 16; // 0x40a7b7
    result = v11;
    while (*v1 > v12) {
        // 0x40a7af
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x40a7c8
            result = v2;
            if (v2 >= a3) {
                // break -> 0x40a7c1
                break;
            }
            // 0x40a7cd
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
                // 0x40a7e5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x40a7e0
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x40a7e5
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x40a7b7
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x40a7c1
    return result;
}
// Address range: 0x40a810 - 0x40a888
int64_t function_40a810(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40a821
    int64_t result = 0; // 0x40a825
    if (v1 <= a1) {
      lab_0x40a844:
        // 0x40a844
        return result;
    }
    int64_t v2 = a1; // 0x40a83a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x40a838
    int64_t v5 = v2; // 0x40a838
    int64_t v6 = v3; // 0x40a838
    int64_t v7; // 0x40a810
    int64_t v8; // 0x40a868
    int64_t v9; // 0x40a86c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x40a868
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x40a878
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40a868
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
        // 0x40a832
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40a868
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x40a878
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x40a868
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40a83a
        result2 = v4;
        v2 += 16;
    }
    // 0x40a844
    return result2;
}
// Address range: 0x40a890 - 0x40a8c1
int64_t function_40a890(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40a897
    if (v1 == 0) {
        // 0x40a8bd
        return 0;
    }
    int64_t result = 0; // 0x40a897
    v2++;
    char v3 = *(char *)v2; // 0x40a8b3
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40a8bd
    return result;
}
// Address range: 0x40a8d0 - 0x40a8f0
int64_t function_40a8d0(int64_t a1) {
    // 0x40a8d0
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x40a8f0 - 0x40aa7a
int64_t function_40a8f0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40a8f0
    int128_t v1; // 0x40a8f0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40a92a
    int64_t result = (int64_t)mem; // 0x40a92a
    if (mem == NULL) {
        // 0x40a9da
        return result;
    }
    int64_t v3 = result + 40; // 0x40a93b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x40a8f0
    int128_t v6; // 0x40a8f0
    if (a2 == 0) {
        // 0x40a9f0
        *v4 = (int64_t)&g12;
        int64_t v7 = function_40a270(v3); // 0x40a9f8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40a9fd
        if ((char)v7 == 0) {
            // 0x40a9d0
            free(mem);
            // 0x40a9da
            return 0;
        }
        // 0x40aa09
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40aa53;
        } else {
            goto lab_0x40aa0e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_40a270(v3) == 0) {
            // 0x40a9d0
            free(mem);
            // 0x40a9da
            return 0;
        }
        // 0x40a955
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_40a060(a1); // 0x40a963
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40a9d0
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40a9d0
                free(mem);
                // 0x40a9da
                return 0;
            }
            // 0x40a981
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40a9d0
                free(mem);
                // 0x40a9da
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x40a992
            int64_t v10 = (int64_t)mem2; // 0x40a992
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40a9d0
                free(mem);
                // 0x40a9da
                return 0;
            }
            // 0x40a99f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x40a100 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x40a110 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40a9da
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40aa48
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40aa0e;
        } else {
            goto lab_0x40aa53;
        }
    }
  lab_0x40aa53:
    // 0x40aa53
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40aa63
    int128_t v13 = v6; // 0x40aa6c
    int128_t v14 = __asm_addss(v12, v12); // 0x40aa6c
    goto lab_0x40aa17;
  lab_0x40aa0e:
    // 0x40aa0e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40aa17;
  lab_0x40aa17:
    // 0x40aa17
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40a9d0
    free(mem);
    // 0x40a9da
    return 0;
}
// Address range: 0x40aa80 - 0x40ab28
int64_t function_40aa80(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40aa8a
    uint64_t v2 = *v1; // 0x40aa8a
    int64_t result; // 0x40aa80
    if (v2 <= a1) {
      lab_0x40ab13:
        // 0x40ab13
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40aa98
    while (*v6 == 0) {
        // 0x40aa98
        v7 = v5 + 16;
        int64_t v8; // 0x40aa80
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40ab13
            goto lab_0x40ab13;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40aaa9
    int64_t v10 = *v9; // 0x40aaa9
    int64_t v11 = *v3; // 0x40aaae
    int64_t v12 = v11; // 0x40aab5
    int64_t v13 = v10; // 0x40aab5
    int64_t result2 = v11; // 0x40aab5
    int64_t * v14; // 0x40aace
    int64_t v15; // 0x40aace
    int64_t v16; // 0x40aaca
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40aac5
            v16 = *v3;
        }
        // 0x40aace
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40aac0
            v16 = 0;
            if (v12 != 0) {
                // 0x40aac5
                v16 = *v3;
            }
            // 0x40aace
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
    // 0x40aaed
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40ab00
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40ab0d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40aa9c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40aa98
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40ab13
                goto lab_0x40ab13;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40aaa9
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40aac5
                v16 = *v3;
            }
            // 0x40aace
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40aac0
                v16 = 0;
                if (v12 != 0) {
                    // 0x40aac5
                    v16 = *v3;
                }
                // 0x40aace
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
        // 0x40aaed
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40ab13
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40ab30 - 0x40ac06
int64_t function_40ab30(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40ab3f
    uint64_t v2 = *v1; // 0x40ab3f
    int64_t v3 = a1; // 0x40ab43
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40ab93;
    } else {
        // 0x40ab45
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40ab93;
        } else {
            // 0x40ab4c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40ab61
                int64_t v6; // 0x40ab58
                while (v5 == 0) {
                    // 0x40ab58
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40ab93
                        goto lab_0x40ab93;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40ab78
                int64_t v8 = v7; // 0x40ab7f
                int64_t v9 = v5; // 0x40ab7f
                int64_t v10; // 0x40ab30
                int64_t v11; // 0x40ab78
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40ab70
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40ab73
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40ab86
                v3 = v9;
                while (v2 > v12) {
                    // 0x40ab61
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40ab58
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40ab93
                            goto lab_0x40ab93;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40ab73
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40ab70
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40ab73
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40ab81
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40ab93;
            } else {
                goto lab_0x40abcc;
            }
        }
    }
  lab_0x40ab93:
    // 0x40ab93
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40aba0
        int64_t v14 = v13; // 0x40aba7
        int64_t v15 = v2; // 0x40aba7
        int64_t v16; // 0x40abb0
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40abb0
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40abc1
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40abc1
        int64_t v18 = v15; // 0x40abca
        int64_t v19 = v17; // 0x40abca
        while (v15 > v17) {
            // 0x40aba0
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40abb0
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40abc1
                v15 = *v1;
            }
            // 0x40abc1
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40abcc;
  lab_0x40abcc:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40abcc
    if (v20 == 0) {
        // 0x40abf1
        free(NULL);
        free((int64_t *)a1);
        return &g57;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40abe0
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40abef
    while (v21 != 0) {
        // 0x40abe0
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40abf1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g57;
}
// Address range: 0x40ac10 - 0x40ae0a
int64_t function_40ac10(int64_t a1, uint64_t a2) {
    // 0x40ac10
    int128_t v1; // 0x40ac10
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40ac1b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40ac10
        if (a2 < 0) {
            // 0x40ad90
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40ada0
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40ac30
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40ac39
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40ad82
        return 0;
    }
    uint64_t nmemb = function_40a060(a2); // 0x40ac73
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40ad82
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40acab
    if (*v6 == nmemb) {
        // 0x40ad82
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40acbd
    int64_t v7 = (int64_t)mem; // 0x40acbd
    int64_t v8 = v7; // bp-104, 0x40acc2
    if (mem == NULL) {
        // 0x40ad82
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40ad1a
    int64_t v10 = *v9; // 0x40ad1a
    int64_t v11 = function_40a2f0(&v8, a1, 0); // 0x40ad23
    int64_t result = v11 & 0xffffffff; // 0x40ad28
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40ace4
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40ad46
        function_40a2f0(v13, v12, 1);
        function_40a2f0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40add0
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40ad82
    return result;
}
// Address range: 0x40ae10 - 0x40b084
int64_t function_40ae10(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40ae10
    int128_t v1; // 0x40ae10
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40ae10
    int64_t v5 = function_40a150(a1, a2, &v4, 0); // 0x40ae31
    if (v5 != 0) {
        // 0x40ae3e
        if (a3 != NULL) {
            // 0x40ae45
            *a3 = v5;
        }
        // 0x40ae49
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40ae58
    uint64_t v7 = *v6; // 0x40ae58
    int64_t v8; // 0x40ae10
    int64_t v9; // 0x40ae10
    int64_t v10; // 0x40ae10
    int128_t v11; // 0x40ae10
    int128_t v12; // 0x40ae10
    int64_t v13; // 0x40ae10
    if (v7 < 0) {
        // 0x40aee0
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40aef0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40aef4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40aef9
        int128_t v17 = __asm_addss(v15, v15); // 0x40aefd
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40ae7b;
        } else {
            goto lab_0x40af0a;
        }
    } else {
        // 0x40ae61
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40ae65
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40ae69
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40ae6e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40af0a;
        } else {
            goto lab_0x40ae7b;
        }
    }
  lab_0x40ae7b:
    // 0x40ae7b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40ae84
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x40ae8c
    int128_t v23 = v11; // 0x40ae8c
    if (v13 == 0) {
        goto lab_0x40ae92;
    } else {
        goto lab_0x40af31;
    }
  lab_0x40af0a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40af17
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40af1a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40af23
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40ae92;
    } else {
        goto lab_0x40af31;
    }
  lab_0x40ae92:;
    int64_t * v28 = (int64_t *)v4; // 0x40ae97
    if (*v28 == 0) {
        // 0x40afa8
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40afb1
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40aea2
    int64_t v31 = *v30; // 0x40aea2
    int64_t * v32; // 0x40ae10
    int64_t v33; // 0x40ae10
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40afcd
        if (mem == NULL) {
            // 0x40ae49
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40afcd
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40aeb7
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40aecd
    *v37 = *v37 + 1;
    return 1;
  lab_0x40af31:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40af31
    function_40a270(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40af3a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40af3e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40af42
    int128_t v44; // 0x40ae10
    if (v42 < 0) {
        // 0x40b000
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40b010
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40af50
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40af59
    int128_t v47; // 0x40ae10
    int64_t v48; // 0x40ae10
    if (v46 < 0) {
        // 0x40afe0
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40afed
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40aff0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40af62
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40af66
        v48 = v46;
        v47 = v51;
    }
    // 0x40af6b
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40af7b
        int128_t v53 = v52; // 0x40af84
        if (*(char *)(v41 + 16) == 0) {
            // 0x40b020
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x40af8a
        __asm_comiss(v53, 0x5f800000);
        // 0x40ae49
        return 0xffffffff;
    }
    goto lab_0x40ae92;
}
// Address range: 0x40b090 - 0x40b0cb
int64_t function_40b090(int64_t a1, int64_t a2) {
    // 0x40b090
    int64_t v1; // bp-16, 0x40b090
    int64_t v2; // 0x40b090
    int32_t v3 = function_40ae10(a1, a2, &v1, v2); // 0x40b0a2
    if (v3 == -1) {
        // 0x40b0b0
        return 0;
    }
    // 0x40b0a7
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40b0d0 - 0x40b2a7
int64_t function_40b0d0(int64_t a1) {
    // 0x40b0d0
    int128_t v1; // 0x40b0d0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40b0d0
    int64_t v5; // 0x40b0d0
    int64_t result = function_40a150(a1, v5, &v4, 1); // 0x40b0e5
    if (result == 0) {
        // 0x40b102
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40b0f7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40b102
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40b110
    uint64_t v8 = *v7 - 1; // 0x40b114
    *v7 = v8;
    int64_t v9; // 0x40b0d0
    int64_t v10; // 0x40b0d0
    int64_t v11; // 0x40b0d0
    int128_t v12; // 0x40b0d0
    int128_t v13; // 0x40b0d0
    int64_t v14; // 0x40b0d0
    if (v8 < 0) {
        // 0x40b200
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40b210
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40b214
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40b219
        int128_t v18 = __asm_addss(v16, v16); // 0x40b21d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40b13c;
        } else {
            goto lab_0x40b22a;
        }
    } else {
        // 0x40b122
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40b126
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40b12a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40b12f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40b22a;
        } else {
            goto lab_0x40b13c;
        }
    }
  lab_0x40b13c:
    // 0x40b13c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40b140
    int64_t v23 = v14; // 0x40b140
    int128_t v24 = v12; // 0x40b140
    int64_t v25 = v10; // 0x40b140
    int128_t v26 = v22; // 0x40b140
    goto lab_0x40b145;
  lab_0x40b22a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40b237
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40b23a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40b145;
  lab_0x40b145:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40b145
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x40b102
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40b14e
    function_40a270(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40b157
    int64_t v31 = *(int64_t *)v29; // 0x40b15b
    int128_t v32; // 0x40b0d0
    if (v30 < 0) {
        // 0x40b270
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40b280
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40b168
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40b171
    int128_t v35; // 0x40b0d0
    int64_t v36; // 0x40b0d0
    if (v34 < 0) {
        // 0x40b250
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40b25d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40b260
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40b17e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40b182
        v36 = v34;
        v35 = v39;
    }
    // 0x40b187
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40b102
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40b198
    int128_t v41 = v40; // 0x40b1a1
    if (*(char *)(v31 + 16) == 0) {
        // 0x40b1a3
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40b1a8
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40b298
    if ((char)function_40ac10(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40b102
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40b1ca
    if (*v43 != 0) {
        int64_t v44; // 0x40b0d0
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40b1d8
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40b1e9
    *v43 = 0;
    // 0x40b102
    return result;
}
// Address range: 0x40b2b0 - 0x40b2cb
int64_t function_40b2b0(int64_t a1, int64_t a2) {
    // 0x40b2b0
    *(int64_t *)(a1 + 20) = 0;
    *(char *)(a1 + 28) = 1;
    int32_t v1 = a2; // 0x40b2bc
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v1;
    *(int32_t *)(a1 + 8) = v1;
    *(int32_t *)(a1 + 12) = v1;
    *(int32_t *)(a1 + 16) = v1;
    int64_t result; // 0x40b2b0
    return result;
}
// Address range: 0x40b2d0 - 0x40b2d5
int64_t function_40b2d0(int64_t a1) {
    // 0x40b2d0
    return (int64_t)*(char *)(a1 + 28);
}
// Address range: 0x40b2e0 - 0x40b315
int64_t function_40b2e0(int64_t a1, int32_t a2) {
    char * v1 = (char *)(a1 + 28); // 0x40b2e0
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40b2e4
    int32_t v3 = (int32_t)(*v1 ^ 1); // 0x40b2ed
    uint32_t v4 = (*v2 + v3) % 4; // 0x40b2ef
    int32_t * v5 = (int32_t *)((int64_t)(4 * v4) + a1); // 0x40b2f8
    *v5 = a2;
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x40b2fe
    int32_t v7 = *v6; // 0x40b2fe
    *v2 = v4;
    if (v7 == v4) {
        // 0x40b308
        *v6 = (v7 + v3) % 4;
    }
    // 0x40b310
    *v1 = 0;
    return (int64_t)*v5;
}
// Address range: 0x40b320 - 0x40b361
int64_t function_40b320(int64_t a1) {
    char * v1 = (char *)(a1 + 28); // 0x40b324
    if (*v1 != 0) {
        abort();
        // UNREACHABLE
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40b32e
    uint32_t v3 = *v2; // 0x40b32e
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + a1); // 0x40b33b
    int64_t result = (int64_t)*v4; // 0x40b33b
    *v4 = *(int32_t *)(a1 + 16);
    if (v3 == *(int32_t *)(a1 + 24)) {
        // 0x40b358
        *v1 = 1;
        return result;
    }
    // 0x40b344
    *v2 = (v3 + 3) % 4;
    return result;
}
// Address range: 0x40b370 - 0x40b8d2
int64_t function_40b370(void) {
    char * v1 = nl_langinfo(14); // 0x40b386
    char * v2 = g50; // 0x40b38b
    char * v3; // 0x40b370
    int64_t v4; // 0x40b370
    int64_t v5; // 0x40b370
    int64_t v6; // 0x40b370
    int64_t v7; // 0x40b370
    int32_t size; // 0x40b370
    int32_t size2; // 0x40b370
    int32_t len; // 0x40b442
    int64_t v8; // 0x40b442
    char * env_val; // 0x40b42d
    if (v2 == NULL) {
        // 0x40b428
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40b495;
        } else {
            // 0x40b43a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40b495;
            } else {
                // 0x40b43f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40b42d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40b8c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40b495;
                    } else {
                        // 0x40b839
                        size2 = len + 14;
                        goto lab_0x40b45b;
                    }
                } else {
                    goto lab_0x40b45b;
                }
            }
        }
    } else {
        // 0x40b370
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40b3aa;
    }
  lab_0x40b6dc:;
    // 0x40b6dc
    struct _IO_FILE * stream; // 0x40b51b
    int32_t v10 = __uflow(stream); // 0x40b6df
    int64_t v11; // 0x40b370
    int64_t v12 = v11; // 0x40b6e9
    int64_t v13; // 0x40b370
    int64_t v14 = v13; // 0x40b6e9
    int32_t v15 = v10; // 0x40b6e9
    int64_t v16; // 0x40b370
    int64_t v17 = v16; // 0x40b6e9
    int64_t v18 = v11; // 0x40b6e9
    int64_t v19 = v13; // 0x40b6e9
    int64_t v20 = v16; // 0x40b6e9
    if (v10 == -1) {
        // break -> 0x40b6ef
        goto lab_0x40b6ef;
    }
    goto lab_0x40b569;
  lab_0x40b55e:;
    // 0x40b55e
    int64_t v90; // 0x40b370
    int64_t * v32; // 0x40b550
    *v32 = v90 + 1;
    int64_t v89; // 0x40b370
    v12 = v89;
    int64_t v91; // 0x40b370
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40b370
    v17 = v92;
    goto lab_0x40b569;
  lab_0x40b569:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40b370
    int32_t v25; // bp-120, 0x40b370
    int32_t v26; // bp-184, 0x40b370
    int64_t v27; // 0x40b51b
    int64_t v28; // 0x40b538
    int64_t v29; // 0x40b53d
    int64_t * v30; // 0x40b554
    switch (c) {
        case 32: {
            goto lab_0x40b550;
        }
        case 10: {
            goto lab_0x40b550;
        }
        case 9: {
            goto lab_0x40b550;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40b741
            int32_t v33; // 0x40b370
            char v34; // 0x40b370
            int32_t v35; // 0x40b74e
            if (v31 < *v30) {
                // 0x40b720
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40b74b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40b741
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40b720
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40b74b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40b730
                v36 = v33;
            }
            // 0x40b81f
            if (v36 == -1) {
                // break -> 0x40b6ef
                break;
            }
            goto lab_0x40b550;
        }
        default: {
            // 0x40b57f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40b6ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40b5a8
            int64_t v39 = v37 + 4; // 0x40b5aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40b5b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40b5b8
            while (v41 == 0) {
                // 0x40b5a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40b5d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40b5e2
            int64_t v45 = v43 + 4; // 0x40b5e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40b5f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40b5f2
            while (v47 == 0) {
                // 0x40b5e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40b5df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40b608
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40b618
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40b61c
            int64_t v52 = v51 + v48; // 0x40b625
            int64_t * mem; // 0x40b370
            int64_t v53; // 0x40b370
            int64_t v54; // 0x40b370
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40b75b
                int64_t v56 = v55 + 3; // 0x40b767
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40b641
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40b650
            if (mem == NULL) {
                // 0x40b87c
                free((int64_t *)v21);
                function_40bd60(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x40b4f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40b668
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40b672
            uint32_t v62 = (int32_t)v59; // 0x40b675
            int64_t v63; // 0x40b370
            if (v62 >= 8) {
                // 0x40b784
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40b79e
                int64_t v66 = v61 - v65; // 0x40b7a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40b7ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40b7be
                    int64_t v70 = v69 & 0xffffffff; // 0x40b7be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40b7bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40b84f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40b687
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40b68b
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
            int64_t v73 = v51 + 1; // 0x40b69b
            int64_t v74 = v60 - 1; // 0x40b69f
            uint32_t v75 = (int32_t)v73; // 0x40b6a4
            int64_t v76; // 0x40b370
            if (v75 >= 8) {
                // 0x40b7d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40b7dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40b7ec
                int64_t v80 = v74 - v79; // 0x40b7f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40b7fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40b80b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40b809
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40b866
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40b86e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40b6b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40b6ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40b8b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40b6ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40b55e;
            } else {
                goto lab_0x40b6dc;
            }
        }
    }
  lab_0x40b550:;
    int64_t v93 = v23; // 0x40b370
    int64_t v94 = v22; // 0x40b370
    int64_t v95 = v21; // 0x40b370
    goto lab_0x40b550_2;
  lab_0x40b495:;
    int64_t * mem3 = malloc(size); // 0x40b495
    int64_t v97 = (int64_t)&g10; // 0x40b4a0
    int64_t v98; // 0x40b370
    int64_t path; // 0x40b370
    if (mem3 == NULL) {
        goto lab_0x40b472;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40b495
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40b4b6;
    }
  lab_0x40b3aa:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40b39d
    char v100 = *v3; // 0x40b3aa
    int64_t v101; // 0x40b370
    if (v100 == 0) {
        // 0x40b404
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40b370
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40b370
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40b3f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40b3f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40b3c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40b3cd
        char v107 = *(char *)v106; // 0x40b3d2
        v102 = v107;
        if (v107 == 0) {
            // 0x40b404
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40b3db
    v104 = v103 + 1;
  lab_0x40b3f7:
    // 0x40b404
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40b472:;
    char * v108 = (char *)v97;
    g50 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40b3aa;
  lab_0x40b4b6:;
    int64_t v109 = v98 + path; // 0x40b4b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40b4e2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x40b511
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40b842
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x40b535
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40b550_2:;
                uint64_t v96 = *v32; // 0x40b550
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40b6dc;
                } else {
                    goto lab_0x40b55e;
                }
            }
          lab_0x40b6ef:
            // 0x40b6ef
            function_40bd60(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40b70e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40b4f4;
  lab_0x40b45b:;
    int64_t * mem4 = malloc(size2); // 0x40b45b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x40b501
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40b4b6;
    } else {
        goto lab_0x40b472;
    }
  lab_0x40b4f4:
    // 0x40b4f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40b472;
}
// Address range: 0x40b8e0 - 0x40b90b
int64_t function_40b8e0(int32_t err_num) {
    // 0x40b8e0
    error(g20, err_num, dcgettext(NULL, "unable to record current working directory", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40b910 - 0x40b93b
int64_t function_40b910(int32_t err_num) {
    // 0x40b910
    error(g20, err_num, dcgettext(NULL, "failed to return to initial working directory", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40b940 - 0x40b98a
int64_t function_40b940(int64_t fd, int64_t path, int32_t oflag, int64_t a4) {
    uint32_t v1 = openat((int32_t)fd, (char *)path, oflag); // 0x40b952
    return function_40ba20((int64_t)v1);
}
// Address range: 0x40b990 - 0x40b9da
int64_t function_40b990(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x40b99b
    *v1 = 0;
    int64_t v2; // 0x40b990
    int32_t v3 = function_409fb0((int64_t)".", 0x80000, (int32_t)v2); // 0x40b9af
    *(int32_t *)a1 = v3;
    if (v3 >= 0) {
        // 0x40b9b7
        return 0;
    }
    int64_t v4 = function_40bfc0(0, 0); // 0x40b9c4
    *v1 = v4;
    return v4 == 0 ? 0xffffffff : 0;
}
// Address range: 0x40b9e0 - 0x40b9f9
int64_t function_40b9e0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t fd = v1;
    if (fd < 0) {
        // 0x40b9f0
        return function_40baf0(*(int64_t *)(v1 + 8));
    }
    // 0x40b9e6
    return fchdir(fd);
}
// Address range: 0x40ba00 - 0x40ba19
int64_t function_40ba00(int64_t * a1) {
    // 0x40ba00
    int64_t v1; // 0x40ba00
    uint32_t fd = (int32_t)v1;
    if (fd >= 0) {
        // 0x40ba0a
        close(fd);
    }
    // 0x40ba0f
    free((int64_t *)*(int64_t *)((int64_t)a1 + 8));
    return &g57;
}
// Address range: 0x40ba20 - 0x40ba6e
int64_t function_40ba20(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40ba2c
    if (fd >= 3) {
        // 0x40ba31
        return a1 & 0xffffffff;
    }
    // 0x40ba40
    int64_t v1; // 0x40ba20
    int64_t v2 = function_40c5a0(a1, v1); // 0x40ba40
    int32_t * v3 = __errno_location(); // 0x40ba48
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40ba70 - 0x40bab0
int64_t function_40ba70(int32_t fd) {
    // 0x40ba70
    if (fd < 0) {
        // 0x40ba74
        int64_t result; // 0x40ba70
        return result;
    }
    int32_t result2 = close(fd); // 0x40ba7c
    if (result2 == 0) {
        // 0x40ba85
        return result2;
    }
    // 0x40ba8a
    __assert_fail("! close_fail", "lib/chdir-long.c", 64, "cdb_free");
    return &g57;
}
// Address range: 0x40bab0 - 0x40bae7
int64_t function_40bab0(int32_t * a1) {
    // 0x40bab0
    int64_t path; // 0x40bab0
    int32_t fd = path;
    uint32_t v1 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x40bac2
    int64_t result = 0xffffffff; // 0x40bac9
    if (v1 >= 0) {
        // 0x40bacb
        function_40ba70(fd);
        *a1 = v1;
        result = 0;
    }
    // 0x40bad8
    return result;
}
// Address range: 0x40baf0 - 0x40bd60
int64_t function_40baf0(int64_t a1) {
    char * path = (char *)a1; // 0x40baff
    uint32_t result = chdir(path); // 0x40baff
    if (result == 0) {
        // 0x40bc36
        return 0;
    }
    int32_t * v1 = __errno_location(); // 0x40bb0e
    if (*v1 != 36) {
        // 0x40bc36
        return result;
    }
    int32_t len = strlen(path); // 0x40bb22
    int32_t fd = -100; // bp-44, 0x40bb27
    if (len == 0) {
        // 0x40bd42
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g57;
    }
    if (len < 0x1000) {
        // 0x40bd29
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40bd42
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g57;
    }
    int64_t v2 = len; // 0x40bb22
    int32_t ini_seg_bytes = strspn(path, "/"); // 0x40bb4f
    int64_t v3; // 0x40baf0
    if (ini_seg_bytes == 2) {
        int64_t v4 = function_40c490(a1 + 3, 47, v2 - 3); // 0x40bc75
        if (v4 == 0) {
            // 0x40bc36
            return 0xffffffff;
        }
        char * v5 = (char *)v4; // 0x40bc82
        *v5 = 0;
        int64_t v6 = function_40bab0(&fd); // 0x40bc8d
        *v5 = 47;
        if ((int32_t)v6 != 0) {
            goto lab_0x40bc20;
        } else {
            int64_t str = v4 + 1; // 0x40bc99
            v3 = str + (int64_t)strspn((char *)str, "/");
            goto lab_0x40bb6d;
        }
    } else {
        // 0x40bb61
        v3 = a1;
        if (ini_seg_bytes != 0) {
            // 0x40bc48
            if ((int32_t)function_40bab0(&fd) != 0) {
                goto lab_0x40bc20;
            } else {
                // 0x40bc5b
                v3 = (int64_t)ini_seg_bytes + a1;
                goto lab_0x40bb6d;
            }
        } else {
            goto lab_0x40bb6d;
        }
    }
  lab_0x40bc20:
    // 0x40bc20
    function_40ba70(fd);
    // 0x40bc36
    return 0xffffffff;
  lab_0x40bb6d:
    // 0x40bb6d
    if (*(char *)v3 == 47) {
      lab_0x40bcf7:
        // 0x40bcf7
        __assert_fail("*dir != '/'", "lib/chdir-long.c", 162, "chdir_long");
        // 0x40bd10
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40bd29
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40bd42
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g57;
    }
    uint64_t v7 = v2 + a1; // 0x40bb77
    if (v7 < v3) {
        // 0x40bd10
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40bd29
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40bd42
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g57;
    }
    int64_t v8 = v3; // 0x40bbed
    int64_t v9 = v3; // 0x40bbed
    if (v7 - v3 > 4095) {
        int64_t * v10 = memrchr((int64_t *)v8, 47, 0x1000); // 0x40bb95
        while (v10 != NULL) {
            int64_t v11 = (int64_t)v10; // 0x40bb95
            *(char *)v10 = 0;
            if (v11 - v8 > 4095) {
                // 0x40bcde
                __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 179, "chdir_long");
                goto lab_0x40bcf7;
            }
            int64_t v12 = function_40bab0(&fd); // 0x40bbc0
            *(char *)v10 = 47;
            if ((int32_t)v12 != 0) {
                goto lab_0x40bc20;
            }
            int64_t str2 = v11 + 1; // 0x40bbcc
            int64_t v13 = str2 + (int64_t)strspn((char *)str2, "/"); // 0x40bbdd
            v8 = v13;
            v9 = v13;
            if (v7 - v13 <= 4095) {
                goto lab_0x40bbef;
            }
            v10 = memrchr((int64_t *)v8, 47, 0x1000);
        }
        // 0x40bcb8
        *v1 = 36;
        // 0x40bc36
        return 0xffffffff;
    }
  lab_0x40bbef:
    // 0x40bbef
    if (v7 > v9) {
        // 0x40bbf4
        if ((int32_t)function_40bab0(&fd) != 0) {
            goto lab_0x40bc20;
        } else {
            goto lab_0x40bc05;
        }
    } else {
        goto lab_0x40bc05;
    }
  lab_0x40bc05:
    // 0x40bc05
    if (fchdir(fd) == 0) {
        // 0x40bcd0
        function_40ba70(fd);
        // 0x40bc36
        return 0;
    }
    goto lab_0x40bc20;
}
// Address range: 0x40bd60 - 0x40bddb
int64_t function_40bd60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40bd67
    if (fileno(stream) < 0) {
        // 0x40bdc7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40bd7a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40bdab
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40bdc7
            return fclose(stream);
        }
    }
    // 0x40bd7c
    if ((int32_t)function_40bf20(a1, v1) == 0) {
        // 0x40bdc7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40bd88
    int32_t v3 = *v2; // 0x40bd90
    int64_t result = fclose(stream); // 0x40bd9e
    if (v3 != 0) {
        // 0x40bdd0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40bda0
    return result;
}
// Address range: 0x40bde0 - 0x40bf15
int64_t function_40bde0(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x40be10
    if (cmd != 1030) {
        // 0x40bec0
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40be1c
    int64_t v2; // 0x40bde0
    if (g51 < 0) {
        int64_t v3 = function_40bde0(fd, 0, v1, a4); // 0x40be64
        int64_t v4 = v3 & 0xffffffff; // 0x40be69
        if ((int32_t)v3 < 0) {
            // 0x40be50
            return v4 & 0xffffffff;
        }
        // 0x40be6f
        v2 = v4;
        if (g51 != -1) {
            // 0x40be50
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40be37
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40be46
            g51 = 1;
            // 0x40be50
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40bde0(fd & 0xffffffff, 0, v1, a4); // 0x40bef7
        int64_t v7 = v6 & 0xffffffff; // 0x40befc
        if ((int32_t)v6 < 0) {
            // 0x40be50
            return v7 & 0xffffffff;
        }
        // 0x40bf06
        g51 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40be7f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40be8a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40be50
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40bea2
    close(fd2);
    // 0x40be50
    return 0xffffffff;
}
// Address range: 0x40bf20 - 0x40bf60
int64_t function_40bf20(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40bf3a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40bf3a
        return fflush(stream);
    }
    // 0x40bf48
    function_40bf60(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40bf60 - 0x40bfb7
int64_t function_40bf60(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40bf60
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40bf6a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40bf9b
    int64_t result = -1; // 0x40bfa4
    if (v1 != -1) {
        // 0x40bfa6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40bfb2
    return result;
}
// Address range: 0x40bfc0 - 0x40c482
int64_t function_40bfc0(int32_t a1, int32_t a2) {
    // 0x40bfc0
    int32_t size; // 0x40bfc0
    int32_t v1; // 0x40bfc0
    int32_t v2; // 0x40bfc0
    if (a2 != 0) {
        // 0x40c020
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x40bff2;
        } else {
            goto lab_0x40c03c;
        }
    } else {
        // 0x40bfe0
        size = 0x1000;
        if (a1 != 0) {
            // 0x40c3e0
            *__errno_location() = 22;
            // 0x40c006
            return 0;
        }
        goto lab_0x40bff2;
    }
  lab_0x40c380:;
    // 0x40c380
    int32_t v3; // 0x40c37a
    int64_t v4 = v3; // 0x40c382
    int64_t v5; // 0x40bfc0
    int64_t dirp2 = v5; // 0x40c382
    int32_t * v6; // 0x40c0c6
    if (v3 != 0) {
        goto lab_0x40c391;
    } else {
        // 0x40c384
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x40c391;
    }
  lab_0x40c192:;
    // 0x40c192
    int64_t v7; // 0x40bfc0
    int64_t v8 = v7;
    int64_t v9; // 0x40bfc0
    int64_t v10 = v9 + 19; // 0x40c192
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x40bfc0
    int64_t v12; // 0x40bfc0
    int32_t v13; // 0x40bfc0
    int32_t fd; // 0x40c0e2
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x40c1c5
        if (v11 == v12) {
            // break -> 0x40c1e0
            goto lab_0x40c1e0;
        }
    }
    int64_t v14 = v8; // 0x40bfc0
    goto lab_0x40c150_2;
  lab_0x40c45e_2:
    // 0x40c45e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x40c391;
  lab_0x40bff2:;
    int64_t * mem = malloc(size); // 0x40bff7
    int32_t v41 = (int64_t)mem; // 0x40bffc
    int32_t result = v41; // 0x40c004
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x40c006
        return result;
    }
    goto lab_0x40c03c;
  lab_0x40c03c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x40c041
    int64_t v46 = v45 - 1; // 0x40c050
    *(char *)v46 = 0;
    int64_t v47; // 0x40bfc0
    int64_t v48; // 0x40bfc0
    int32_t * v49; // 0x40bfc0
    int64_t v50; // 0x40bfc0
    int64_t v33; // 0x40bfc0
    int64_t v40; // 0x40bfc0
    int64_t v51; // 0x40bfc0
    int32_t v38; // 0x40bfc0
    int32_t v52; // 0x40bfc0
    int32_t v53; // 0x40bfc0
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x40c3b8;
    } else {
        // 0x40c066
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x40c3b8;
        } else {
            // 0x40c091
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x40c2d8;
            } else {
                // 0x40c0c6
                v6 = __errno_location();
                int32_t v54 = v1; // 0x40c0d3
                int32_t v55 = v42; // 0x40c0d3
                int64_t v56 = v11; // 0x40c0d3
                int64_t v57 = v46; // 0x40c0d3
                int64_t v58 = 0; // 0x40c0d3
                int32_t fd2 = -100; // 0x40c0d3
                int64_t dirp3; // 0x40bfc0
                while (true) {
                    // 0x40c0d6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x40c407
                        break;
                    }
                    // 0x40c0f2
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x40c418
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x40c3fd;
                        } else {
                            // 0x40c421
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x40c3fd;
                        }
                    }
                    // 0x40c10b
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x40c110
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x40c3f9
                            v40 = (int64_t)*v6;
                            goto lab_0x40c3fd;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x40c137
                    if (dirp == NULL) {
                        // 0x40c3f9
                        v40 = (int64_t)*v6;
                        goto lab_0x40c3fd;
                    }
                    // 0x40c148
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x40c150_2:;
                        int64_t v15 = v14; // 0x40bfc0
                        int64_t v16; // 0x40bfc0
                        int64_t v17; // 0x40bfc0
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x40c15b
                            int64_t v20; // 0x40bfc0
                            int64_t v21; // 0x40bfc0
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x40c330
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x40c380;
                                }
                                // 0x40c33d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x40c348
                                if (v23 == NULL) {
                                    // 0x40c37a
                                    v3 = *v6;
                                    goto lab_0x40c380;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x40c192;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x40c173
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x40c360
                            if (*(char *)v28 != 0) {
                                // 0x40c36a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x40c173
                                    break;
                                }
                            }
                            // 0x40c150
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x40c192;
                        } else {
                            // 0x40c178
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x40c18d
                            int64_t v32; // 0x40bfc0
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x40c150
                                v14 = v31;
                                goto lab_0x40c150_2;
                            } else {
                                goto lab_0x40c192;
                            }
                        }
                    }
                  lab_0x40c1e0:;
                    int64_t v61 = v38; // 0x40c1e8
                    uint64_t v62 = v57 - v61; // 0x40c1e8
                    int32_t len = strlen(str); // 0x40c1ed
                    uint64_t v63 = (int64_t)len; // 0x40c1ed
                    int32_t v64 = v60; // 0x40c1f8
                    int32_t v65 = v38; // 0x40c1f8
                    int64_t dest_mem = v57; // 0x40c1f8
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x40c470
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x40c391;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x40c206
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x40c211
                        uint64_t v68 = v67 + v66; // 0x40c215
                        if (v68 < v66) {
                            goto lab_0x40c45e_2;
                        }
                        // 0x40c228
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x40c230
                        if (mem2 == NULL) {
                            goto lab_0x40c45e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x40c230
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x40c28d
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x40c2be
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x40c3c0;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x40c2d8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x40c407
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x40c399;
                } else {
                    goto lab_0x40c391;
                }
            }
        }
    }
  lab_0x40c3b8:
    // 0x40c3b8
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x40c3c0;
  lab_0x40c3c0:;
    int64_t v77 = (int64_t)*v49; // 0x40c3c6
    int64_t v34 = v77; // 0x40c3ca
    int32_t * v35 = v49; // 0x40c3ca
    int32_t * v36 = v49; // 0x40c3ca
    int32_t v37 = v53; // 0x40c3ca
    int64_t v39 = v77; // 0x40c3ca
    if (a1 != 0) {
        goto lab_0x40c3a1;
    } else {
        goto lab_0x40c3cc;
    }
  lab_0x40c3a1:
    // 0x40c3a1
    *v35 = (int32_t)v34;
    // 0x40c006
    return 0;
  lab_0x40c3cc:
    // 0x40c3cc
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x40c3a1;
  lab_0x40c2d8:
    // 0x40c2d8
    if (v51 == v47 - 1 + v48) {
        // 0x40c447
        int64_t v78; // 0x40bfc0
        int64_t v79 = v78 - 1; // 0x40c44c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x40c302
    int32_t v81 = v50 - v51; // 0x40c302
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x40c30d
    if (a2 == 0) {
        // 0x40c430
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x40c006
    return result2;
  lab_0x40c399:
    // 0x40c399
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x40c3cc;
    } else {
        goto lab_0x40c3a1;
    }
  lab_0x40c391:
    // 0x40c391
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x40c399;
  lab_0x40c3fd:
    // 0x40c3fd
    close(fd);
    v33 = v40;
    goto lab_0x40c399;
}
// Address range: 0x40c490 - 0x40c594
int64_t function_40c490(int64_t result, uint64_t a2, int64_t a3) {
    // 0x40c490
    if (a3 == 0) {
        // 0x40c4c9
        return 0;
    }
    int64_t v1 = result; // 0x40c49c
    int64_t v2 = a3; // 0x40c49c
    int64_t result2; // 0x40c490
    if (result % 8 != 0) {
        char v3 = a2; // 0x40c49e
        int64_t v4 = result; // 0x40c4a1
        if ((char)result == v3) {
            // 0x40c4c9
            return result;
        }
        int64_t v5 = a3; // 0x40c4a1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40c4b0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40c4d0;
            }
            // 0x40c4b6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40c4c9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40c4c9
        return result2;
    }
  lab_0x40c4d0:;
    int64_t result3 = v1; // 0x40c4fd
    int64_t v6 = v2; // 0x40c4fd
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40c4df
        int64_t v8 = 0x10000 * v7 | v7; // 0x40c4ec
        int64_t v9 = 0x100000000 * v8 | v8; // 0x40c4f6
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x40c516
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x40c545
            int64_t v12 = v1 + 8; // 0x40c549
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x40c533
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40c55c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x40c553
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x40c4c9
                return 0;
            }
        }
    }
  lab_0x40c55c:;
    char v14 = a2; // 0x40c55c
    if (*(char *)result3 == v14) {
        // 0x40c4c9
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x40c570
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x40c4c9
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x40c4c9
    return result2;
}
// Address range: 0x40c5a0 - 0x40c5ae
int64_t function_40c5a0(int64_t a1, int64_t a2) {
    // 0x40c5a0
    int64_t v1; // 0x40c5a0
    return function_40bde0(a1, 0, 3, v1);
}
// Address range: 0x40c5b0 - 0x40c60d
int64_t function_40c5b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c5b0
    return function_401bc0();
}
// Address range: 0x40c610 - 0x40c611
int64_t function_40c610(void) {
    // 0x40c610
    int64_t result; // 0x40c610
    return result;
}
// Address range: 0x40c620 - 0x40c638
int64_t function_40c620(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c620
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x40c638 - 0x40c658
int64_t function_40c638(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x40c642
    while (*(int64_t *)v1 != -1) {
        // 0x40c643
        v1 -= 8;
    }
    // 0x40c654
    return result;
}
