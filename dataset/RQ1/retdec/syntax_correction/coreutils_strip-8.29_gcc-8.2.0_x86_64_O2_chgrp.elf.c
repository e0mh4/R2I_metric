#include "decompile_retdec.h"
// Address range: 0x402090 - 0x402095
int64_t function_402090(void) {
    // 0x402090
    return abort();
}
// Address range: 0x402095 - 0x40209a
int64_t function_402095(void) {
    // 0x402095
    return abort();
}
// Address range: 0x40209a - 0x40209f
int64_t function_40209a(void) {
    // 0x40209a
    abort();
    // UNREACHABLE
}
// Address range: 0x40209f - 0x4020a4
int64_t function_40209f(void) {
    // 0x40209f
    abort();
    // UNREACHABLE
}
// Address range: 0x4020a4 - 0x4020a9
int64_t function_4020a4(void) {
    // 0x4020a4
    abort();
    // UNREACHABLE
}
// Address range: 0x4020a9 - 0x4020ae
int64_t function_4020a9(void) {
    // 0x4020a9
    abort();
    // UNREACHABLE
}
// Address range: 0x4020ae - 0x4020b3
int64_t function_4020ae(void) {
    // 0x4020ae
    abort();
    // UNREACHABLE
}
// Address range: 0x4020b3 - 0x4020b8
int64_t function_4020b3(void) {
    // 0x4020b3
    abort();
    // UNREACHABLE
}
// Address range: 0x4020b8 - 0x4020bd
int64_t function_4020b8(void) {
    // 0x4020b8
    abort();
    // UNREACHABLE
}
// Address range: 0x4020bd - 0x4020c2
int64_t function_4020bd(void) {
    // 0x4020bd
    abort();
    // UNREACHABLE
}
// Address range: 0x4020c2 - 0x4020c7
int64_t function_4020c2(void) {
    // 0x4020c2
    abort();
    // UNREACHABLE
}
// Address range: 0x4020c7 - 0x4020cc
int64_t function_4020c7(void) {
    // 0x4020c7
    abort();
    // UNREACHABLE
}
// Address range: 0x4020cc - 0x4020d1
int64_t function_4020cc(void) {
    // 0x4020cc
    return abort();
}
// Address range: 0x4020d1 - 0x4020d6
int64_t function_4020d1(void) {
    // 0x4020d1
    abort();
    // UNREACHABLE
}
// Address range: 0x4020e0 - 0x402574
int64_t function_4020e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a1 >> 32; // 0x4020f7
    function_403b60(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_40c0f0(0x403a70, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2; // bp-248, 0x4020e0
    function_402b00(&v2);
    int64_t v3 = 16; // 0x40214d
    int64_t v4 = 0; // 0x40214d
    int64_t v5 = 0xffffffff; // 0x40214d
    int64_t v6; // 0x4020e0
    int64_t v7; // 0x4020e0
    int64_t v8; // 0x4020e0
    char v9; // 0x4020e0
    char v10; // 0x4020e0
    char v11; // 0x4020e0
    while (true) {
      lab_0x402150_2:
        // 0x402150
        v7 = v5;
        v6 = v4;
        v8 = v3;
        v11 = v10;
        int32_t v12 = function_409760(v1 & 0xffffffff, a2, "HLPRcfhv", &g2, 0, a6);
        switch (v12) {
            case -1: {
                goto lab_0x4022da;
            }
            case 99: {
                // 0x4022c0
                v2 = 1;
                v9 = v11;
                v3 = v8;
                v4 = v6;
                v5 = v7;
                goto lab_0x402150;
            }
            default: {
                if (v12 > 99) {
                    // 0x40217c
                    v9 = v11;
                    v3 = v8;
                    v4 = v6;
                    v5 = 1;
                    if (v12 != 128) {
                        if (v12 > 128) {
                            // 0x4021d8
                            v9 = v11;
                            v3 = v8;
                            v4 = 1;
                            v5 = v7;
                            if (v12 != 130) {
                                // 0x4021e3
                                v9 = v11;
                                v3 = v8;
                                v4 = 0;
                                v5 = v7;
                                if (v12 >= 130) {
                                    if (v12 != 131) {
                                        // 0x4021c9
                                        function_402660(1);
                                        // UNREACHABLE
                                    }
                                    // 0x402247
                                    *(int64_t *)&g36 = (int64_t)g51;
                                    v9 = v11;
                                    v3 = v8;
                                    v4 = v6;
                                    v5 = v7;
                                }
                            }
                        } else {
                            // 0x402189
                            v9 = v11;
                            v3 = v8;
                            v4 = v6;
                            v5 = 0;
                            if (v12 != 104) {
                                if (v12 != 118) {
                                    // 0x4021c0
                                    v9 = v11;
                                    v3 = v8;
                                    v4 = v6;
                                    v5 = v7;
                                    if (v12 != 102) {
                                        // 0x4021c9
                                        function_402660(1);
                                        // UNREACHABLE
                                    }
                                } else {
                                    // 0x402197
                                    v2 = 0;
                                    v9 = v11;
                                    v3 = v8;
                                    v4 = v6;
                                    v5 = v7;
                                }
                            }
                        }
                    }
                } else {
                    // 0x4021a0
                    v9 = v11;
                    v3 = 17;
                    v4 = v6;
                    v5 = v7;
                    if (v12 != 72) {
                        if (v12 <= 72) {
                            if (v12 == -131) {
                                // 0x402207
                                function_405c50((int64_t)g30, "chgrp", "GNU coreutils", (int64_t)g19, "David MacKenzie", "Jim Meyering");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v12 == -130) {
                                // 0x402265
                                function_402660(0);
                                // UNREACHABLE
                            }
                            goto lab_0x4021c9;
                        }
                        // 0x4021ab
                        v9 = v11;
                        v3 = 16;
                        v4 = v6;
                        v5 = v7;
                        if (v12 != 80) {
                            // 0x4021b4
                            v9 = 1;
                            v3 = v8;
                            v4 = v6;
                            v5 = v7;
                            if (v12 != 82) {
                                // 0x4021f0
                                v9 = v11;
                                v3 = 2;
                                v4 = v6;
                                v5 = v7;
                                if (v12 != 76) {
                                  lab_0x4021c9:
                                    // 0x4021c9
                                    function_402660(1);
                                    // UNREACHABLE
                                }
                            }
                        }
                    }
                }
                goto lab_0x402150;
            }
        }
    }
  lab_0x4022da:;
    int64_t v13 = 16; // 0x4022df
    int64_t v14; // 0x4020e0
    int64_t v15; // 0x4020e0
    if (v11 != 0) {
        // 0x402396
        v13 = v8;
        if (v8 == 16 == v7 == 1) {
            // 0x40251e
            error(1, (int32_t)"-R --dereference requires either -H or -L" ^ (int32_t)"-R --dereference requires either -H or -L", dcgettext(NULL, "-R --dereference requires either -H or -L", 5));
            v15 = a2;
            v14 = v1;
            goto lab_0x402540;
        } else {
            goto lab_0x4022ea;
        }
    } else {
        goto lab_0x4022ea;
    }
  lab_0x402150:
    // 0x402150
    v10 = v9;
    goto lab_0x402150_2;
  lab_0x4022ea:;
    int32_t v16 = *(int32_t *)0x61131c; // 0x4022ed
    int64_t v17 = v16; // 0x4022ed
    int64_t v18 = (int64_t)g36; // 0x4022f4
    int32_t v19 = (int32_t)v1 - v16; // 0x402303
    int64_t v20; // 0x4020e0
    int64_t v21; // 0x4020e0
    int64_t v22; // 0x4020e0
    int64_t v23; // 0x4020e0
    int64_t v24; // 0x4020e0
    int64_t v25; // 0x4020e0
    int64_t v26; // 0x4020e0
    int64_t v27; // 0x4020e0
    int64_t v28; // 0x4020e0
    int64_t v29; // 0x4020e0
    int64_t v30; // 0x4020e0
    int64_t v31; // 0x4020e0
    int64_t v32; // 0x4020e0
    int64_t v33; // 0x4020e0
    int64_t v34; // 0x4020e0
    int64_t v35; // 0x4020e0
    int64_t v36; // 0x4020e0
    int64_t v37; // 0x4020e0
    int64_t v38; // 0x4020e0
    int64_t v39; // 0x4020e0
    int32_t v40; // bp-200, 0x4020e0
    if (g36 == NULL) {
        // 0x4023b1
        v32 = v17;
        v39 = a2;
        v24 = v1;
        if (v19 < 2) {
            goto lab_0x4024f5;
        } else {
            int64_t v41 = *(int64_t *)(8 * v17 + a2); // 0x4023ba
            g28 = v16 + 1;
            char * name = (char *)v41; // 0x4023c7
            char v42 = *name;
            int64_t v43 = v42 != 0 ? v41 : v18; // 0x4023cb
            v36 = a2;
            v33 = v13;
            v20 = 0xffffffff;
            v25 = v43;
            v29 = v41;
            if (v42 == 0) {
                goto lab_0x402342;
            } else {
                struct group * v44 = getgrnam(name); // 0x4023e5
                v38 = a2;
                v35 = v13;
                v22 = 0xffffffff;
                v27 = v43;
                v31 = v41;
                if (v44 == NULL) {
                    goto lab_0x402454;
                } else {
                    // 0x4023ef
                    v37 = a2;
                    v34 = v13;
                    v21 = (int64_t)*(int32_t *)((int64_t)v44 + 16);
                    v26 = v43;
                    v30 = v41;
                    goto lab_0x4023f3;
                }
            }
        }
    } else {
        // 0x40230e
        v32 = v17;
        v39 = a2;
        v24 = v1;
        if (v19 < 1) {
            goto lab_0x4024f5;
        } else {
            int32_t v45 = __xstat(1, g36, (struct stat *)&v40); // 0x402323
            v23 = v1;
            v28 = v18;
            if (v45 != 0) {
                goto lab_0x4024b8;
            } else {
                // 0x402330
                int32_t v46; // 0x4020e0
                int64_t v47 = (uint32_t)v46; // 0x402330
                function_402b40(v47);
                v36 = a2;
                v33 = v13;
                v20 = v47;
                v25 = v18;
                v29 = 1;
                goto lab_0x402342;
            }
        }
    }
  lab_0x402540:
    // 0x402540
    function_405780(*(int64_t *)(v15 - 8 + 8 * v14));
    error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
    // 0x4021c9
    function_402660(1);
    // UNREACHABLE
  lab_0x4024f5:
    // 0x4024f5
    v15 = v39;
    v14 = v24;
    if (v32 >= v24) {
        // 0x4024fa
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x4021c9
        function_402660(1);
        // UNREACHABLE
    }
    goto lab_0x402540;
  lab_0x402342:;
    int64_t v48 = v20;
    int64_t v49 = v33;
    int64_t v50 = v36;
    if (v11 != 0 != v6 != 0 || function_4057a0(&g35) != 0) {
        uint64_t v51 = function_403930(8 * (int64_t)g28 + v50, (int32_t)v49 | 1024, 0xffffffff, v48 & 0xffffffff, 0xffffffff, -1, &v2); // 0x402379
        return v51 % 256 ^ 1;
    }
    int64_t v52 = function_405530(4, (int64_t *)"/"); // 0x40241f
    char * format = dcgettext(NULL, "failed to get attributes of %s", 5); // 0x402433
    error(1, *__errno_location(), format);
    v38 = (int64_t)format;
    v35 = v52;
    v22 = v48;
    v27 = v25;
    v31 = v29;
    goto lab_0x402454;
  lab_0x4024b8:
    // 0x4024b8
    function_405530(4, (int64_t *)v28);
    char * format2 = dcgettext(NULL, "failed to get attributes of %s", 5); // 0x4024d4
    error(1, *__errno_location(), format2);
    v32 = &g56;
    v39 = (int64_t)format2;
    v24 = v23;
    goto lab_0x4024f5;
  lab_0x402454:;
    int64_t v53 = v31;
    int64_t v54 = v27;
    int64_t v55 = function_4060a0(v53, 0, 10, (int64_t *)&v40, (int64_t *)&g10, a6); // 0x402469
    int64_t v56 = v22; // 0x402470
    if ((int32_t)v55 != 0) {
        goto lab_0x402488;
    } else {
        int64_t v57 = v40; // 0x40247c
        v37 = v38;
        v34 = v35;
        v21 = v57;
        v26 = v54;
        v30 = v53;
        v56 = v57;
        if (v40 > -1) {
            goto lab_0x4023f3;
        } else {
            goto lab_0x402488;
        }
    }
  lab_0x402488:
    // 0x402488
    function_405780(v53);
    error(1, (int32_t)"invalid group: %s" ^ (int32_t)"invalid group: %s", dcgettext(NULL, "invalid group: %s", 5));
    v23 = v56;
    v28 = v54;
    goto lab_0x4024b8;
  lab_0x4023f3:
    // 0x4023f3
    endgrent();
    v36 = v37;
    v33 = v34;
    v20 = v21;
    v25 = v26;
    v29 = v30;
    goto lab_0x402342;
}
// Address range: 0x402580 - 0x4025ab
// Address range: 0x4025ab - 0x4025ca
int64_t function_4025ab(void) {
    // 0x4025ab
    return &g29;
}
// Address range: 0x4025ca - 0x402601
int64_t function_4025ca(void) {
    // 0x4025ca
    return 0;
}
// Address range: 0x402601 - 0x402658
int64_t function_402601(void) {
    // 0x402601
    if (g33 != 0) {
        // 0x402657
        int64_t result; // 0x402601
        return result;
    }
    int64_t v1 = g34; // 0x402634
    int64_t result2; // 0x402646
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x402646
        result2 = function_4025ab();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x402636
        v1++;
    }
    // 0x40262a
    g34 = v1;
    // 0x402646
    result2 = function_4025ab();
    g33 = 1;
    return result2;
}
// Address range: 0x402658 - 0x40265d
int64_t function_402658(void) {
    // 0x402658
    return function_4025ca();
}
// Address range: 0x402660 - 0x402a75
int64_t function_402660(int64_t a1) {
    int32_t status = a1; // 0x402676
    if (status != 0) {
        // 0x40267a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40269f
        exit(status);
        // UNREACHABLE
    }
    // 0x4026a6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... GROUP FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Change the group of each FILE to GROUP.\nWith --reference, change the group of each FILE to that of RFILE.\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "                         (useful only on systems that can change the\n                         ownership of a symlink)\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --no-preserve-root  do not treat '/' specially (the default)\n      --preserve-root    fail to operate recursively on '/'\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --reference=RFILE  use RFILE's group rather than specifying a\n                         GROUP value\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -R, --recursive        operate on files and directories recursively\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  %s staff /u      Change the group of /u to \"staff\".\n  %s -hR staff /u  Change the group of /u and subfiles to \"staff\".\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402852
    bool v2; // 0x402660
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4028d8
    int64_t v6 = *(int64_t *)v5; // 0x4028dc
    int64_t v7 = 6; // 0x4028e2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"chgrp";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4028ee
        char v11 = *(char *)v9; // 0x4028ee
        char v12 = v11; // 0x4028ee
        bool v13 = false; // 0x4028ee
        while (v10 == v11) {
            // 0x4028e4
            v7--;
            int64_t v14 = v9 + v3; // 0x4028ee
            int64_t v15 = v8 + v3; // 0x4028ee
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
            // break -> 0x4028fa
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x4028fa
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402a0c;
        } else {
            // 0x4029f6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402a4b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40295c;
            } else {
                goto lab_0x402a0c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40295c;
        } else {
            // 0x402942
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402a4b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40295c;
            } else {
                goto lab_0x40295c;
            }
        }
    }
  lab_0x402a0c:
    // 0x402a0c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40299c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40269f
    exit(status);
    // UNREACHABLE
  lab_0x40295c:
    // 0x40295c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40299c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40269f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402a80 - 0x402af5
int64_t function_402a80(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x402ad8
        if (a2 == 0) {
            // 0x402acb
            return 0;
        }
        // 0x402ae0
        return function_405fc0(a2);
    }
    // 0x402a89
    if (a2 == 0) {
        // 0x402ae0
        return function_405fc0(a1);
    }
    char * str = (char *)a1; // 0x402a94
    int32_t len = strlen(str); // 0x402a94
    char * str2 = (char *)a2; // 0x402a9f
    int64_t str3 = function_405d90((int64_t)len + 2 + (int64_t)strlen(str2)); // 0x402aa9
    char * v1 = stpcpy((char *)str3, str); // 0x402ab7
    *v1 = 58;
    strcpy((char *)((int64_t)v1 + 1), str2);
    // 0x402acb
    return str3;
}
// Address range: 0x402b00 - 0x402b2c
int64_t function_402b00(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    *(int32_t *)a1 = 2;
    *(char *)(v1 + 4) = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(int16_t *)(v1 + 16) = 1;
    *(int64_t *)(v1 + 24) = 0;
    *(int64_t *)(v1 + 32) = 0;
    return 1;
}
// Address range: 0x402b30 - 0x402b31
int64_t function_402b30(void) {
    // 0x402b30
    int64_t result; // 0x402b30
    return result;
}
// Address range: 0x402b40 - 0x402b78
int64_t function_402b40(int64_t gid) {
    struct group * v1 = getgrgid((int32_t)gid); // 0x402b47
    if (v1 != NULL) {
        // 0x402b51
        return function_405fc0(*(int64_t *)v1);
    }
    // 0x402b60
    int64_t v2; // bp-40, 0x402b40
    int64_t v3 = function_403b10(gid & 0xffffffff, &v2); // 0x402b65
    return function_405fc0(v3);
}
// Address range: 0x402b80 - 0x402bb8
int64_t function_402b80(uint32_t uid) {
    struct passwd * v1 = getpwuid(uid); // 0x402b87
    if (v1 != NULL) {
        // 0x402b91
        return function_405fc0(*(int64_t *)v1);
    }
    // 0x402ba0
    int64_t v2; // bp-40, 0x402b80
    int64_t v3 = function_403b10((int64_t)uid, &v2); // 0x402ba5
    return function_405fc0(v3);
}
// Address range: 0x402bc0 - 0x40392d
int64_t function_402bc0(int64_t a1, int64_t a2, uint32_t owner, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)(a2 + 56); // 0x402bdd
    int16_t * v2 = (int16_t *)(a2 + 112); // 0x402be1
    uint16_t v3 = *v2; // 0x402be1
    int64_t v4 = v3; // 0x402be1
    g52 = v4;
    int64_t v5 = a6; // 0x402bfe
    int64_t v6; // 0x402bc0
    char v7; // 0x402bc0
    char v8; // 0x402bc0
    int64_t v9; // 0x402bc0
    int64_t format; // 0x402bc0
    bool v10; // 0x402bc0
    switch (v3) {
        case 1: {
            unsigned char v11 = *(char *)(a7 + 4); // 0x402e78
            v6 = 0;
            v5 = a6;
            if (v11 != 0) {
                int64_t v12 = *(int64_t *)(a7 + 8); // 0x402e85
                if (v12 == 0 || *(int64_t *)(a2 + 128) != *(int64_t *)v12 || *(int64_t *)(a2 + 120) != *(int64_t *)(v12 + 8)) {
                    // 0x402e5d
                    return (int64_t)v11 & 0xffffffff;
                }
                int64_t v13 = v10 ? -1 : 1; // 0x402eb2
                int64_t v14 = (int64_t)"/"; // 0x402bc0
                int64_t v15 = v1; // 0x402bc0
                int64_t v16 = 2; // 0x402eb2
                unsigned char v17 = *(char *)v15; // 0x402eb2
                char v18 = *(char *)v14; // 0x402eb2
                char v19 = v18; // 0x402eb2
                bool v20 = false; // 0x402eb2
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
                    // 0x403893
                    function_405450(1, 4, (int64_t *)"/");
                    function_405450(0, 4, (int64_t *)v1);
                    error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
                } else {
                    // 0x402ec1
                    function_405530(4, (int64_t *)v1);
                    error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
                }
                // 0x402ef4
                error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
                fts_set(a1, a2, 4);
                fts_read(a1);
                // 0x402e5d
                return 0;
            }
            goto lab_0x402c31;
        }
        case 2: {
            // 0x402c08
            v5 = a6 & 0xffffffff;
            if ((char)function_406070(a1, a2) != 0) {
                // 0x4034a0
                function_405600(0, 3, v1);
                error(0, (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n" ^ (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", dcgettext(NULL, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", 5));
                // 0x402e5d
                return 0;
            }
            goto lab_0x402c31;
        }
        case 4: {
            char v22 = *(char *)(a7 + 17); // 0x402fc0
            if (v22 != 0) {
                goto lab_0x402f45;
            } else {
                // 0x402fcd
                function_405530(4, (int64_t *)v1);
                v7 = v22;
                v9 = (int64_t)"cannot read directory %s";
                goto lab_0x402fe8;
            }
        }
        case 6: {
            // 0x403018
            v5 = a6;
            if (*(char *)(a7 + 4) == 0) {
                // 0x402e5d
                return 1;
            }
            goto lab_0x402c31;
        }
        case 7: {
            // 0x402f38
            if (*(char *)(a7 + 17) == 0) {
                // 0x403588
                function_405600(0, 3, v1);
                v8 = 0;
                format = (int64_t)"%s";
                goto lab_0x402ffa;
            } else {
                goto lab_0x402f45;
            }
        }
        case 10: {
            // 0x402f88
            if (*(int64_t *)(a2 + 88) == 0) {
                int64_t * v23 = (int64_t *)(a2 + 32); // 0x402f8f
                if (*v23 == 0) {
                    // 0x4037c0
                    *v23 = 1;
                    fts_set(a1, a2, 1);
                    // 0x402e5d
                    return 1;
                }
            }
            char v24 = *(char *)(a7 + 17); // 0x402f9a
            if (v24 != 0) {
                goto lab_0x402f45;
            } else {
                // 0x402fa3
                function_405530(4, (int64_t *)v1);
                v7 = v24;
                v9 = (int64_t)"cannot access %s";
                goto lab_0x402fe8;
            }
        }
        default: {
            goto lab_0x402c31;
        }
    }
  lab_0x402c31:;
    int64_t v25 = owner; // 0x402bc2
    int64_t group = 0x100000000 * a4 >> 32; // 0x402be5
    int64_t v26 = *(int64_t *)(a2 + 48); // 0x402c31
    int64_t v27 = a2 + 120; // 0x402c39
    int64_t v28 = v5 & 0xffffffff;
    char * v29 = (char *)(v26 & 0xffffffff); // 0x402c41
    char * v30 = (char *)(a7 + 16); // 0x402c46
    char v31 = *v30; // 0x402c46
    int64_t v32; // 0x402bc0
    int64_t v33; // 0x402bc0
    int64_t v34; // 0x402bc0
    char v35; // 0x402bc0
    int64_t v36; // 0x402bc0
    if ((v28 & a5) == 0xffffffff) {
        // 0x4031a0
        if (*(int32_t *)a7 != 2) {
            goto lab_0x402c54;
        } else {
            // 0x4031a9
            if (*(int64_t *)(a7 + 8) != 0) {
                goto lab_0x402c54;
            } else {
                if (v31 != 0) {
                    goto lab_0x402c58;
                } else {
                    // 0x4031bc
                    v35 = v31;
                    v34 = v5;
                    v32 = v27;
                    if (v3 < 3 || (v3 - 4 & -3) == 0) {
                        // 0x4031d4
                        v36 = (int64_t)*(int32_t *)(a1 + 44);
                        v33 = v27;
                        goto lab_0x402d11;
                    } else {
                        goto lab_0x402d05;
                    }
                }
            }
        }
    } else {
        goto lab_0x402c54;
    }
  lab_0x402c54:;
    int64_t v37 = v4; // 0x402c56
    int64_t v38 = v5; // 0x402c56
    int64_t v39 = v27; // 0x402c56
    if (v31 == 0) {
        goto lab_0x402c70;
    } else {
        goto lab_0x402c58;
    }
  lab_0x402f45:;
    int32_t v40 = *(int32_t *)a7; // 0x402f45
    int64_t v41 = 0; // 0x402f4c
    int32_t v42 = v40; // 0x402f4c
    int64_t v43 = 0; // 0x402f4c
    if (v40 == 2) {
        goto lab_0x402e53;
    } else {
        goto lab_0x402f52;
    }
  lab_0x402c70:;
    int64_t v44 = v37;
    int64_t v45 = v44 & 0xff00 | v6 & 0xffffff00 | (int64_t)((v44 & 0xfffd) == 4) | (int64_t)((int16_t)v44 < 3);
    int32_t v46 = a5; // 0x402c89
    int64_t v47; // 0x402bc0
    int64_t v48; // 0x402bc0
    int64_t v49; // 0x402bc0
    if (v46 == -1) {
        goto lab_0x402cd8;
    } else {
        // 0x402c8f
        if (*(int32_t *)(v39 + 28) == v46) {
            goto lab_0x402cd8;
        } else {
            if ((char)v45 == 0) {
                int32_t v50 = *(int32_t *)a7; // 0x403378
                v41 = 1;
                v49 = 4;
                v48 = 1;
                v47 = v39;
                if (v50 == 2 || v50 != 0) {
                    goto lab_0x402e53;
                } else {
                    goto lab_0x403308;
                }
            } else {
                int64_t v51 = *(int64_t *)(a7 + 8); // 0x402c9e
                if (v51 == 0) {
                    goto lab_0x402cb4;
                } else {
                    // 0x402ca7
                    if (*(int64_t *)v51 == *(int64_t *)(v39 + 8)) {
                        // 0x4035d0
                        if (*(int64_t *)v39 == *(int64_t *)(v51 + 8)) {
                            goto lab_0x403060;
                        } else {
                            goto lab_0x4035dd;
                        }
                    } else {
                        goto lab_0x402cb4;
                    }
                }
            }
        }
    }
  lab_0x402c58:
    // 0x402c58
    v37 = v4;
    v38 = v5;
    v39 = v27;
    int32_t v52; // 0x402bc0
    int64_t v53; // bp-344, 0x402bc0
    if ((*(int32_t *)(a2 + 144) & 0xf000) == 0xa000) {
        // 0x403408
        if (__fxstatat(1, *(int32_t *)(a1 + 44), v29, (struct stat *)&v53, 0) != 0) {
            // 0x4036a0
            if (*(char *)(a7 + 17) == 0) {
                // 0x403848
                function_405530(4, (int64_t *)v1);
                error(0, *__errno_location(), dcgettext(NULL, "cannot dereference %s", 5));
                int32_t v54 = *(int32_t *)a7; // 0x403883
                v41 = 0;
                v52 = v54;
                if (v54 != 2) {
                    goto lab_0x4036ba;
                } else {
                    goto lab_0x402e53;
                }
            } else {
                int32_t v55 = *(int32_t *)a7; // 0x4036ad
                v41 = 0;
                v52 = v55;
                if (v55 == 2) {
                    goto lab_0x402e53;
                } else {
                    goto lab_0x4036ba;
                }
            }
        } else {
            // 0x40343a
            v37 = (int64_t)*v2;
            v38 = v28;
            v39 = &v53;
            goto lab_0x402c70;
        }
    } else {
        goto lab_0x402c70;
    }
  lab_0x402e53:
    // 0x402e53
    if (*(char *)(a7 + 4) == 0) {
        // 0x4030e0
        fts_set(a1, a2, 4);
    }
    // 0x402e5d
    return v41 & 0xffffffff;
  lab_0x402f52:;
    int64_t v56 = 3; // 0x402f54
    char * v57 = NULL; // 0x402f54
    int64_t v58 = 0; // 0x402f54
    int64_t v59 = 0; // 0x402f54
    v41 = v43;
    if (v42 != 0) {
        goto lab_0x402e53;
    } else {
        goto lab_0x402d9b;
    }
  lab_0x402fe8:
    // 0x402fe8
    v8 = v7;
    format = (int64_t)dcgettext(NULL, (char *)v9, 5);
    goto lab_0x402ffa;
  lab_0x402ffa:;
    int64_t v60 = v8;
    error(0, *(int32_t *)(a2 + 64), (char *)format);
    int32_t v61 = *(int32_t *)a7; // 0x403003
    v41 = v60;
    v42 = v61;
    v43 = v60;
    if (v61 != 2) {
        goto lab_0x402f52;
    } else {
        goto lab_0x402e53;
    }
  lab_0x402cd8:;
    int32_t v62 = v38; // 0x402cd8
    if (v62 == -1) {
        if ((char)v45 == 0) {
            goto lab_0x402d01;
        } else {
            int64_t v63 = *(int64_t *)(a7 + 8); // 0x403039
            if (v63 == 0) {
                goto lab_0x402d01;
            } else {
                // 0x403046
                if (*(int64_t *)(v39 + 8) != *(int64_t *)v63) {
                    goto lab_0x402d01;
                } else {
                    // 0x403053
                    if (*(int64_t *)v39 != *(int64_t *)(v63 + 8)) {
                        goto lab_0x402d01;
                    } else {
                        goto lab_0x403060;
                    }
                }
            }
        }
    } else {
        // 0x402ce2
        if ((char)v45 == 0) {
            goto lab_0x402cf8;
        } else {
            // 0x402ceb
            if (*(int64_t *)(a7 + 8) != 0) {
                // 0x4035b0
                int64_t v64; // 0x402ceb
                int64_t v65 = *(int64_t *)v64; // 0x4035b0
                int64_t v66; // 0x402bc0
                int64_t v67 = *(int64_t *)(v66 + 8); // 0x4035b3
                if (v67 != v65) {
                    goto lab_0x402cf8;
                } else {
                    int64_t v68 = *(int64_t *)(v64 + 8); // 0x4035bd
                    int64_t v69 = *(int64_t *)v66; // 0x4035c1
                    if (v69 != v68) {
                        goto lab_0x402cf8;
                    } else {
                        goto lab_0x403060;
                    }
                }
            } else {
                goto lab_0x402cf8;
            }
        }
    }
  lab_0x402d9b:;
    int64_t v70 = v59;
    int64_t v71 = v58;
    char * v72 = v57;
    int64_t v73 = v56;
    int64_t v74 = *(int64_t *)(a7 + 32);
    int64_t v75 = *(int64_t *)(a7 + 24);
    int64_t v76 = function_402a80(v75, v74); // 0x402da1
    int64_t v77 = v74 != 0 ? v71 : 0; // 0x402dae
    int64_t v78 = 0x100000000 * v76 >> 32; // 0x402db4
    char * v79; // 0x402bc0
    int64_t v80; // 0x402bc0
    int64_t v81; // 0x402bc0
    int64_t v82; // 0x402bc0
    if (v75 == 0) {
        int64_t v83 = 0x100000000 * function_402a80(0, v77) >> 32; // 0x403217
        int32_t v84 = v73; // 0x403220
        v81 = v83;
        if (v84 == 3) {
            goto lab_0x4031e0;
        } else {
            if (v84 != 4) {
                if (v74 == 0) {
                    // 0x403788
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "no change to ownership of %s\n", 5);
                } else {
                    // 0x40356e
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "changed group of %s from %s to %s\n", 5);
                }
            } else {
                if (v74 == 0) {
                    // 0x403548
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "ownership of %s retained\n", 5);
                } else {
                    // 0x40323c
                    v82 = v78;
                    v80 = v83;
                    v79 = dcgettext(NULL, "group of %s retained as %s\n", 5);
                }
            }
            goto lab_0x402e00;
        }
    } else {
        int64_t v85 = 0x100000000 * function_402a80(0x100000000 * (int64_t)v72 >> 32, v77) >> 32; // 0x402dcc
        v81 = v85;
        switch ((int32_t)v73) {
            case 3: {
                goto lab_0x4031e0;
            }
            case 4: {
                // 0x4033a0
                v82 = v78;
                v80 = v85;
                v79 = dcgettext(NULL, "ownership of %s retained as %s\n", 5);
                goto lab_0x402e00;
            }
            default: {
                // 0x402de7
                v82 = v78;
                v80 = v85;
                v79 = dcgettext(NULL, "changed ownership of %s from %s to %s\n", 5);
                goto lab_0x402e00;
            }
        }
    }
  lab_0x402d05:;
    int32_t * v86 = (int32_t *)(a1 + 44); // 0x402d05
    uint32_t v87 = *v86; // 0x402d05
    int64_t v88 = v87; // 0x402d05
    v36 = v88;
    v33 = v32;
    int64_t v89; // 0x402bc0
    int32_t v90; // 0x402bc0
    int32_t * v91; // 0x403102
    if (v35 != 0) {
        // 0x4030f8
        v89 = v88;
        if ((v28 & a5) == 0xffffffff) {
            goto lab_0x402d40;
        } else {
            // 0x403102
            v91 = (int32_t *)(v32 + 24);
            int32_t v92 = *v91 & 0xf000; // 0x403106
            v90 = 2304;
            if (v92 == 0x8000) {
                goto lab_0x403129;
            } else {
                // 0x403116
                v89 = v88;
                v90 = 0x10900;
                if (v92 != 0x4000) {
                    goto lab_0x402d40;
                } else {
                    goto lab_0x403129;
                }
            }
        }
    } else {
        goto lab_0x402d11;
    }
  lab_0x402d01:
    // 0x402d01
    v35 = *v30;
    v34 = v38;
    v32 = v39;
    goto lab_0x402d05;
  lab_0x402cf8:
    if (*(int32_t *)(v39 + 32) != v62) {
        goto lab_0x4035dd;
    } else {
        goto lab_0x402d01;
    }
  lab_0x4031e0:;
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
                // 0x4037e0
                v82 = v78;
                v80 = v93;
                v79 = dcgettext(NULL, "failed to change ownership of %s\n", 5);
            } else {
                // 0x403469
                v82 = v78;
                v80 = v93;
                v79 = dcgettext(NULL, "failed to change group of %s from %s to %s\n", 5);
            }
        } else {
            // 0x4031fa
            v82 = v78;
            v80 = v93;
            v79 = dcgettext(NULL, "failed to change ownership of %s from %s to %s\n", 5);
        }
    }
    goto lab_0x402e00;
  lab_0x402d11:;
    int64_t v128 = v33; // 0x402d30
    int64_t v104; // 0x402bc0
    int64_t v98; // 0x402bc0
    char * v96; // 0x402bc0
    int64_t v97; // 0x402bc0
    if ((int32_t)function_4064d0(v36, (int32_t)v26, v25, (int32_t)group, 256) == 0) {
        goto lab_0x402d49;
    } else {
        int32_t v137 = *__errno_location(); // 0x402d37
        v104 = v33;
        if (v137 == 95) {
            int32_t v138 = *(int32_t *)a7; // 0x4035f8
            v41 = 1;
            if (v138 == 2 || v138 != 0) {
                goto lab_0x402e53;
            } else {
                int64_t v139 = function_402b80(*(int32_t *)(v33 + 28)); // 0x403614
                int64_t v140 = function_402b40((int64_t)*(int32_t *)(v33 + 32)); // 0x403622
                function_405530(4, (int64_t *)v1);
                __printf_chk(1, dcgettext(NULL, "neither symbolic link %s nor referent has been changed\n", 5));
                v96 = (char *)(v139 & 0xffffffff);
                v97 = 0x100000000 * v140 >> 32;
                v98 = 1;
                goto lab_0x402e3f;
            }
        } else {
            goto lab_0x403170;
        }
    }
  lab_0x4035dd:;
    int32_t v141 = *(int32_t *)a7; // 0x4035dd
    int32_t v136 = v141; // 0x4035e7
    int64_t v135 = 1; // 0x4035e7
    v41 = 1;
    if (v141 != 2) {
        goto lab_0x402cbf;
    } else {
        goto lab_0x402e53;
    }
  lab_0x403308:;
    int64_t v119 = v49; // 0x403310
    int64_t v120 = v48; // 0x403310
    int32_t v121 = *(int32_t *)(v47 + 28); // 0x403310
    int32_t v122 = *(int32_t *)(v47 + 32); // 0x403310
    goto lab_0x402d7c;
  lab_0x402cb4:;
    int32_t v142 = *(int32_t *)a7; // 0x402cb4
    v136 = v142;
    v135 = v45;
    v41 = v45;
    if (v142 == 2) {
        goto lab_0x402e53;
    } else {
        goto lab_0x402cbf;
    }
  lab_0x4036ba:
    // 0x4036ba
    v41 = 0;
    if (v52 != 0) {
        goto lab_0x402e53;
    } else {
        // 0x4036c2
        v49 = 3;
        v48 = 0;
        v47 = &v53;
        goto lab_0x403308;
    }
  lab_0x402e00:
    // 0x402e00
    function_405530(4, (int64_t *)v1);
    __printf_chk(1, v79);
    free((int64_t *)(0x100000000 * v80 >> 32));
    free((int64_t *)(0x100000000 * v82 >> 32));
    v96 = v72;
    v97 = v71;
    v98 = v70;
    goto lab_0x402e3f;
  lab_0x402d49:;
    int32_t v129 = *(int32_t *)a7; // 0x402d49
    v41 = 1;
    int64_t v118; // 0x402bc0
    if (v129 == 2) {
        goto lab_0x402e53;
    } else {
        // 0x402d54
        v118 = v128;
        if (owner == -1) {
            goto lab_0x403250;
        } else {
            int32_t v134 = *(int32_t *)(v118 + 28); // 0x402d5e
            if (v134 == owner) {
                goto lab_0x403250;
            } else {
                // 0x402d6b
                v119 = 2;
                v120 = 1;
                v121 = v134;
                v122 = *(int32_t *)(v118 + 32);
                goto lab_0x402d7c;
            }
        }
    }
  lab_0x402d40:
    // 0x402d40
    v128 = v32;
    v104 = v32;
    if ((int32_t)function_4064d0(v89, (int32_t)v26, v25, (int32_t)group, 0) != 0) {
        goto lab_0x403170;
    } else {
        goto lab_0x402d49;
    }
  lab_0x402cbf:
    // 0x402cbf
    v41 = v135;
    v49 = 4;
    v48 = v135;
    v47 = v39;
    if (v136 != 0) {
        goto lab_0x402e53;
    } else {
        goto lab_0x403308;
    }
  lab_0x402d7c:
    // 0x402d7c
    v56 = v119;
    v57 = (char *)(function_402b80(v121) & 0xffffffff);
    v58 = 0x100000000 * function_402b40((int64_t)v122) >> 32;
    v59 = v120;
    goto lab_0x402d9b;
  lab_0x402e3f:
    // 0x402e3f
    free((int64_t *)v96);
    free((int64_t *)v97);
    v41 = v98;
    goto lab_0x402e53;
  lab_0x403170:;
    // 0x403170
    int32_t v99; // 0x402bc0
    if (*(char *)(a7 + 17) == 0) {
        // 0x403318
        function_405530(4, (int64_t *)v1);
        char * format2; // 0x402bc0
        if (owner == -1) {
            // 0x403510
            format2 = dcgettext(NULL, "changing group of %s", 5);
        } else {
            // 0x40333a
            format2 = dcgettext(NULL, "changing ownership of %s", 5);
        }
        // 0x403349
        error(0, *__errno_location(), format2);
        int32_t v100 = *(int32_t *)a7; // 0x403361
        v41 = 0;
        v99 = v100;
        if (v100 != 2) {
            goto lab_0x40318a;
        } else {
            goto lab_0x402e53;
        }
    } else {
        int32_t v101 = *(int32_t *)a7; // 0x40317d
        v41 = 0;
        v99 = v101;
        if (v101 == 2) {
            goto lab_0x402e53;
        } else {
            goto lab_0x40318a;
        }
    }
  lab_0x403129:;
    int32_t v102 = __openat_2(v87, v29, v90); // 0x40313e
    int32_t fd = v102; // 0x403151
    if (v102 >= 0) {
        goto lab_0x403280;
    } else {
        int32_t * v103 = __errno_location(); // 0x403157
        v104 = v32;
        if (*v103 == 13) {
            // 0x4033c0
            if ((*v91 & 0xf000) == 0x8000) {
                int32_t v105 = __openat_2(v87, v29, v90 | 1); // 0x4036f5
                fd = v105;
                if (v105 >= 0) {
                    goto lab_0x403280;
                } else {
                    // 0x403713
                    v104 = v32;
                    if (*(int32_t *)(0x100000000 * (int64_t)v103 >> 32) != 13) {
                        goto lab_0x403170;
                    } else {
                        // 0x4033de
                        v89 = (int64_t)*v86;
                        goto lab_0x402d40;
                    }
                }
            } else {
                // 0x4033de
                v89 = (int64_t)*v86;
                goto lab_0x402d40;
            }
        } else {
            goto lab_0x403170;
        }
    }
  lab_0x403060:;
    int64_t v106 = v10 ? -1 : 1; // 0x40306e
    int64_t v107 = (int64_t)"/"; // 0x402bc0
    int64_t v108 = v1; // 0x402bc0
    int64_t v109 = 2; // 0x402bc0
    unsigned char v110 = *(char *)v108; // 0x40306e
    char v111 = *(char *)v107; // 0x40306e
    char v112 = v111; // 0x40306e
    bool v113 = false; // 0x40306e
    while (v110 == v111) {
        int64_t v114 = v109 - 1; // 0x40306e
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
        // 0x4037f4
        function_405450(1, 4, (int64_t *)"/");
        function_405450(0, 4, (int64_t *)v1);
        error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
    } else {
        // 0x40307d
        function_405530(4, (int64_t *)v1);
        error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
    }
    // 0x4030b0
    error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
    // 0x402e5d
    return 0;
  lab_0x403250:;
    int32_t v116 = group; // 0x403254
    if (v116 == -1) {
        goto lab_0x403528;
    } else {
        int32_t v117 = *(int32_t *)(v118 + 32); // 0x40325d
        if (v117 == v116) {
            goto lab_0x403528;
        } else {
            // 0x40326a
            v119 = 2;
            v120 = 1;
            v121 = *(int32_t *)(v118 + 28);
            v122 = v117;
            goto lab_0x402d7c;
        }
    }
  lab_0x403280:;
    // 0x403280
    int64_t v123; // bp-200, 0x402bc0
    if (__fxstat(1, fd, (struct stat *)&v123) != 0) {
        goto lab_0x4034e0;
    } else {
        // 0x4032ae
        int64_t v124; // 0x402bc0
        if (*(int64_t *)(v32 + 8) == v124) {
            // 0x403730
            if (*(int64_t *)v32 != v123) {
                goto lab_0x4032ca;
            } else {
                int32_t v125 = a5; // 0x403741
                int32_t v126; // 0x402bc0
                if (v125 == -1 || v126 == v125) {
                    int32_t v127 = v34; // 0x4038e7
                    if (v127 != -1 == (v126 != v127)) {
                        goto lab_0x403759;
                    } else {
                        // 0x4038fb
                        if (fchown(fd, owner, (int32_t)group) != 0) {
                            goto lab_0x4034e0;
                        } else {
                            // 0x403919
                            v128 = v32;
                            v104 = v32;
                            if (close(fd) != 0) {
                                goto lab_0x403170;
                            } else {
                                goto lab_0x402d49;
                            }
                        }
                    }
                } else {
                    goto lab_0x403759;
                }
            }
        } else {
            goto lab_0x4032ca;
        }
    }
  lab_0x403528:
    // 0x403528
    v41 = 1;
    v49 = 4;
    v48 = 1;
    v47 = v118;
    if (v129 != 0) {
        goto lab_0x402e53;
    } else {
        goto lab_0x403308;
    }
  lab_0x40318a:
    // 0x40318a
    v41 = 0;
    v49 = 3;
    v48 = 0;
    v47 = v104;
    if (v99 == 0) {
        goto lab_0x403308;
    } else {
        goto lab_0x402e53;
    }
  lab_0x4034e0:;
    int32_t * v130 = __errno_location(); // 0x4034e4
    close(fd);
    v104 = v32;
    goto lab_0x403170;
  lab_0x4032ca:;
    int32_t * v131 = __errno_location(); // 0x4032ce
    close(fd);
    int32_t v132 = *(int32_t *)a7; // 0x4032e4
    v41 = 0;
    v49 = 3;
    v48 = 0;
    v47 = v32;
    if (v132 == 2 || v132 != 0) {
        goto lab_0x402e53;
    } else {
        goto lab_0x403308;
    }
  lab_0x403759:;
    int32_t * v133 = __errno_location(); // 0x40375d
    close(fd);
    v128 = v32;
    goto lab_0x402d49;
}
// Address range: 0x403930 - 0x403a4e
int64_t function_403930(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, uint32_t a6, int64_t * a7) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a2;
    int64_t v3 = v2; // 0x403959
    if (((int32_t)a5 & a6) == -1) {
        // 0x4039e0
        v3 = v2;
        if (*(char *)(v1 + 16) == 0) {
            // 0x4039ec
            v3 = (*(int32_t *)a7 == 2 ? v2 | 8 : v2) & 0xffffffff;
        }
    }
    int64_t v4 = function_406020(a1, v3); // 0x403966
    int64_t v5 = fts_read(v4); // 0x403995
    int64_t v6 = 1; // 0x40399d
    if (v5 != 0) {
        int64_t v7 = a4 & 0xffffffff; // 0x403935
        int64_t v8; // bp-72, 0x403930
        int64_t v9 = &v8; // 0x403949
        int64_t v10 = 1;
        *(int64_t *)(v9 - 16) = v1;
        int32_t v11 = *(int32_t *)(v9 + 12); // 0x40397f
        v10 &= function_402bc0(v4, v5, v11, v7, a5 & 0xffffffff, (int64_t)a6, (int64_t)&g56);
        int64_t v12 = fts_read(v4); // 0x403995
        v6 = v10;
        while (v12 != 0) {
            // 0x403970
            *(int64_t *)(v9 - 16) = v1;
            v11 = *(int32_t *)(v9 + 12);
            v10 &= function_402bc0(v4, v12, v11, v7, a5 & 0xffffffff, (int64_t)a6, (int64_t)&g56);
            v12 = fts_read(v4);
            v6 = v10;
        }
    }
    int32_t * err_num = __errno_location(); // 0x40399f
    int64_t v13 = v6; // 0x4039ab
    if (*err_num != 0) {
        // 0x4039ad
        v13 = 0;
        if (*(char *)(v1 + 17) == 0) {
            // 0x403a28
            error(0, *err_num, dcgettext(NULL, "fts_read failed", 5));
            v13 = 0;
        }
    }
    int64_t v14 = v13; // 0x4039c3
    if ((int32_t)fts_close(v4) != 0) {
        // 0x403a00
        error(0, *err_num, dcgettext(NULL, "fts_close failed", 5));
        v14 = 0;
    }
    // 0x4039c5
    return v14 & 0xffffffff;
}
// Address range: 0x403a50 - 0x403a58
int64_t function_403a50(int64_t a1) {
    // 0x403a50
    g38 = a1;
    int64_t result; // 0x403a50
    return result;
}
// Address range: 0x403a60 - 0x403a68
int64_t function_403a60(int64_t a1) {
    // 0x403a60
    g37 = a1;
    int64_t result; // 0x403a60
    return result;
}
// Address range: 0x403a70 - 0x403b0e
int64_t function_403a70(void) {
    // 0x403a70
    int32_t * err_num; // 0x403a86
    if ((int32_t)function_409990((int64_t)g30) == 0) {
        goto lab_0x403a9c;
    } else {
        // 0x403a86
        err_num = __errno_location();
        if (g37 == 0) {
            goto lab_0x403ab3;
        } else {
            // 0x403a97
            if (*err_num != 32) {
                goto lab_0x403ab3;
            } else {
                goto lab_0x403a9c;
            }
        }
    }
  lab_0x403a9c:;
    int64_t result = function_409990((int64_t)g32); // 0x403aa3
    if ((int32_t)result == 0) {
        // 0x403aac
        return result;
    }
    // 0x403aee
    _exit(g20);
    // UNREACHABLE
  lab_0x403ab3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x403abf
    if (g38 == 0) {
        // 0x403af9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403ad3
        error(0, *err_num, "%s: %s", (char *)function_4055d0((int64_t)g38), v1);
    }
    // 0x403aee
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x403b10 - 0x403b58
int64_t function_403b10(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x403b10
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403b22
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x403b2b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x403b54
    return result;
}
// Address range: 0x403b60 - 0x403bf9
int64_t function_403b60(int64_t str) {
    // 0x403b60
    if (str == 0) {
        // 0x403bd9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403b6e
    int64_t result = (int64_t)found_char_pos; // 0x403b6e
    if (found_char_pos == NULL) {
        // 0x403bc9
        g39 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403b78
    if (v1 - str < 7) {
        // 0x403bc9
        g39 = str;
        g31 = str;
        return result;
    }
    // 0x403b88
    bool v2; // 0x403b60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403b60
    int64_t v5 = result - 6; // 0x403b60
    int64_t v6 = 7; // 0x403b96
    unsigned char v7 = *(char *)v5; // 0x403b96
    char v8 = *(char *)v4; // 0x403b96
    char v9 = v8; // 0x403b96
    bool v10 = false; // 0x403b96
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
    int64_t v12 = (int64_t)"lt-"; // 0x403ba0
    int64_t v13 = v1; // 0x403ba0
    int64_t v14 = 3; // 0x403ba0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403bc9
        g39 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403bb2
    char v16 = *(char *)v12; // 0x403bb2
    char v17 = v16; // 0x403bb2
    bool v18 = false; // 0x403bb2
    while (v15 == v16) {
        // 0x403ba2
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
    int64_t v20 = v1; // 0x403bbc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403bbe
        v20 = result + 4;
        g29 = v20;
    }
    // 0x403bc9
    g39 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x403c00 - 0x403cf2
int64_t function_403c00(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403c14
    int64_t result = (int64_t)v1; // 0x403c14
    if (result != a1) {
        // 0x403c21
        return result;
    }
    int64_t v2 = function_40ae40(); // 0x403c30
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403ce6
    if (v3 == 85) {
        // 0x403c40
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403cd8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x403c6e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x403c7b
        // 0x403c21
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403cd8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x403cbd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x403cca
    // 0x403c21
    return result4;
}
// Address range: 0x403d00 - 0x403d57
int64_t function_403d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403d00
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403d48
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403d57 - 0x404f21
int64_t function_403d57(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403da1
    int64_t v3 = 0; // 0x403da1
    int64_t v4; // 0x403d57
    int64_t v5; // 0x403d57
    int64_t v6; // 0x403d57
    int64_t v7; // 0x403d57
    int64_t v8; // 0x403d57
    int64_t v9; // 0x403d57
    int64_t v10; // 0x403d57
    int64_t v11; // 0x403d57
    int64_t v12; // 0x403d57
    int64_t v13; // 0x403d57
    int64_t v14; // 0x403d57
    int64_t v15; // 0x403d57
    int64_t v16; // 0x403d57
    int64_t v17; // 0x403d57
    int64_t v18; // 0x403d57
    int64_t result; // 0x403d57
    int64_t v19; // 0x403d57
    int32_t wc; // bp+132, 0x403d57
    int64_t ps; // bp+136, 0x403d57
    char v20; // 0x404310
    int64_t v21; // 0x404310
    int64_t v22; // 0x4046b8
    int64_t v23; // 0x403d57
    int64_t v24; // 0x4046d7
    int32_t v25; // 0x403d57
    while (true) {
      lab_0x403da8_2:
        // 0x403da8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403d57
        int64_t v27; // 0x403ddc
        while (true) {
          lab_0x403da8:
            // 0x403da8
            v5 = v26;
            bool v28 = v15 == v5; // 0x403db3
            if (v15 == -1) {
                // 0x403db5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403dc3
            if (v28) {
                // break (via goto) -> 0x404528
                goto lab_0x404528;
            }
            // 0x403dcc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g55 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4043bb
                    if (v25 % 2 == 0) {
                        goto lab_0x403f01;
                    }
                    // 0x4047dd
                    v26 = v5 + 1;
                    goto lab_0x403da8;
                }
                case 7: {
                    goto lab_0x403f01;
                }
                case 8: {
                    goto lab_0x403f01;
                }
                case 9: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403f01;
                }
                case 12: {
                    goto lab_0x403f01;
                }
                case 13: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x403ecd;
                }
                case 36: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403f01;
                }
                case 38: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403f01;
                }
                case 44: {
                    goto lab_0x403f01;
                }
                case 45: {
                    goto lab_0x403f01;
                }
                case 46: {
                    goto lab_0x403f01;
                }
                case 47: {
                    goto lab_0x403f01;
                }
                case 48: {
                    goto lab_0x403f01;
                }
                case 49: {
                    goto lab_0x403f01;
                }
                case 50: {
                    goto lab_0x403f01;
                }
                case 51: {
                    goto lab_0x403f01;
                }
                case 52: {
                    goto lab_0x403f01;
                }
                case 53: {
                    goto lab_0x403f01;
                }
                case 54: {
                    goto lab_0x403f01;
                }
                case 55: {
                    goto lab_0x403f01;
                }
                case 56: {
                    goto lab_0x403f01;
                }
                case 57: {
                    goto lab_0x403f01;
                }
                case 58: {
                    goto lab_0x403f01;
                }
                case 59: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403f01;
                }
                case 66: {
                    goto lab_0x403f01;
                }
                case 67: {
                    goto lab_0x403f01;
                }
                case 68: {
                    goto lab_0x403f01;
                }
                case 69: {
                    goto lab_0x403f01;
                }
                case 70: {
                    goto lab_0x403f01;
                }
                case 71: {
                    goto lab_0x403f01;
                }
                case 72: {
                    goto lab_0x403f01;
                }
                case 73: {
                    goto lab_0x403f01;
                }
                case 74: {
                    goto lab_0x403f01;
                }
                case 75: {
                    goto lab_0x403f01;
                }
                case 76: {
                    goto lab_0x403f01;
                }
                case 77: {
                    goto lab_0x403f01;
                }
                case 78: {
                    goto lab_0x403f01;
                }
                case 79: {
                    goto lab_0x403f01;
                }
                case 80: {
                    goto lab_0x403f01;
                }
                case 81: {
                    goto lab_0x403f01;
                }
                case 82: {
                    goto lab_0x403f01;
                }
                case 83: {
                    goto lab_0x403f01;
                }
                case 84: {
                    goto lab_0x403f01;
                }
                case 85: {
                    goto lab_0x403f01;
                }
                case 86: {
                    goto lab_0x403f01;
                }
                case 87: {
                    goto lab_0x403f01;
                }
                case 88: {
                    goto lab_0x403f01;
                }
                case 89: {
                    goto lab_0x403f01;
                }
                case 90: {
                    goto lab_0x403f01;
                }
                case 91: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403f01;
                }
                case 94: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403f01;
                }
                case 96: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403f01;
                }
                case 98: {
                    goto lab_0x403f01;
                }
                case 99: {
                    goto lab_0x403f01;
                }
                case 100: {
                    goto lab_0x403f01;
                }
                case 101: {
                    goto lab_0x403f01;
                }
                case 102: {
                    goto lab_0x403f01;
                }
                case 103: {
                    goto lab_0x403f01;
                }
                case 104: {
                    goto lab_0x403f01;
                }
                case 105: {
                    goto lab_0x403f01;
                }
                case 106: {
                    goto lab_0x403f01;
                }
                case 107: {
                    goto lab_0x403f01;
                }
                case 108: {
                    goto lab_0x403f01;
                }
                case 109: {
                    goto lab_0x403f01;
                }
                case 110: {
                    goto lab_0x403f01;
                }
                case 111: {
                    goto lab_0x403f01;
                }
                case 112: {
                    goto lab_0x403f01;
                }
                case 113: {
                    goto lab_0x403f01;
                }
                case 114: {
                    goto lab_0x403f01;
                }
                case 115: {
                    goto lab_0x403f01;
                }
                case 116: {
                    goto lab_0x403f01;
                }
                case 117: {
                    goto lab_0x403f01;
                }
                case 118: {
                    goto lab_0x403f01;
                }
                case 119: {
                    goto lab_0x403f01;
                }
                case 120: {
                    goto lab_0x403f01;
                }
                case 121: {
                    goto lab_0x403f01;
                }
                case 122: {
                    goto lab_0x403f01;
                }
                case 123: {
                    goto lab_0x403ea5;
                }
                case 124: {
                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403ea5;
                }
                case 126: {
                    goto lab_0x403ecd;
                }
                default: {
                    goto lab_0x4042a5;
                }
            }
        }
      lab_0x4042a5:
        if (v23 != 1) {
            // 0x404610
            ps = 0;
            int64_t len = v15; // 0x404620
            if (v15 == -1) {
                // 0x404622
                len = strlen((char *)str);
            }
            // 0x40464e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4046af:
                // 0x4046af
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4046b4
                int64_t v30 = v29 + str;
                v24 = function_4097e0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x404c2a_2;
                    }
                    case -1: {
                        goto lab_0x404c2a_2;
                    }
                    case -2: {
                        // 0x404d0d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404d47
                            v19 = v18;
                            int64_t v31 = v18; // 0x404d4a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404d57
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404d50
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x404c2a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x404c2a_2;
                    }
                    case 1: {
                        goto lab_0x404680;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40472c
                        char v34 = *(char *)v33; // 0x40473d
                        unsigned char v35; // 0x403d57
                        if (v34 < 125) {
                            // 0x404748
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40475f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404730
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40473d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404748
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40475f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404730
                            v33++;
                        }
                        goto lab_0x404680;
                    }
                }
            }
            goto lab_0x404c2a_2;
        } else {
            // 0x4042f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403f01;
        }
    }
  lab_0x404528:
    // 0x404528
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x404e2a
        if (v8 > result) {
            // 0x404e33
            *(char *)(v12 + result) = 0;
        }
        // 0x404157
        return result;
    }
    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403f01:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403f10
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40411a_2;
        }
    }
    int64_t v39 = result; // 0x404011
    char v40 = v20; // 0x404011
    int64_t v41 = v38; // 0x404011
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404011
    int64_t v43 = v36; // 0x404011
    goto lab_0x403f8d;
  lab_0x40411a_2:
    // 0x404157
    return function_403d00(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404c2a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403f01;
    } else {
        uint64_t v49 = v46 + v5; // 0x4047fe
        int64_t v50 = v5 + 1; // 0x4048e1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4048e8
        char v52 = v20; // 0x4048e8
        int64_t v53 = result; // 0x4048e8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4048b1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4048b5
            int64_t v56 = v54 + 1; // 0x4048ba
            int64_t v57 = v51 + 1; // 0x4048e1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4048ac
                v54 = v56;
                if (v47 > v54) {
                    // 0x4048b1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4048b5
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
        goto lab_0x403f8d;
    }
  lab_0x404680:
    // 0x404680
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40469f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4046a2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x404c2a
        goto lab_0x404c2a_2;
    }
    goto lab_0x4046af;
  lab_0x403ecd:
    // 0x403ecd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40411a_2;
    }
    goto lab_0x403f01;
  lab_0x403ea5:;
    bool v60 = v15 == 1; // 0x403eb0
    if (v15 == -1) {
        // 0x403eb2
        v60 = *(char *)v1 == 0;
    }
    // 0x403ebe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403f01;
    } else {
        goto lab_0x403ecd;
    }
  lab_0x403f8d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403f92
        *(char *)(v44 + v45) = v40;
    }
    // 0x403f96
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403da8_2;
}
// Address range: 0x404f30 - 0x4050ce
int64_t function_404f30(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404f32
    int32_t * v3 = __errno_location(); // 0x404f4c
    int32_t v4 = v2; // 0x404f61
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g22; // 0x404f51
    int32_t v6 = *v3; // 0x404f5b
    int64_t v7 = v5; // 0x404f71
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if (v4 == 0x7fffffff) {
            // 0x4050c9
            function_405fe0(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x404f80
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x404f87
        int64_t v10; // 0x404f30
        if (g22 == &g23) {
            int64_t v11 = function_405df0(0, v9); // 0x4050aa
            int128_t v12 = __asm_movdqa(*(int128_t *)&g23); // 0x4050af
            *(int64_t *)&g22 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_405df0(v5, v9); // 0x404f9b
            *(int64_t *)&g22 = v13;
            v10 = v13;
        }
        // 0x404faa
        v7 = v10;
        int32_t v14 = *(int32_t *)&g25; // 0x404faa
        int32_t v15 = v8; // 0x404fb1
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g25 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x404fe1
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x404feb
    int64_t * v18 = (int64_t *)v16; // 0x404fee
    uint64_t v19 = *v18; // 0x404fee
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x404ff1
    int64_t result = *v20; // 0x404ff1
    int64_t v21; // 0x404f30
    uint64_t v22 = function_403d00(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x405014
    if (v19 > v22) {
        // 0x40508b
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x405027
    *v18 = v23;
    if (result != (int64_t)&g40) {
        // 0x405037
        free((int64_t *)result);
    }
    int64_t result2 = function_405d90(v23); // 0x405051
    *v20 = result2;
    int64_t v24; // 0x404f30
    function_403d00(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x40508b
    *v3 = v6;
    return result2;
}
// Address range: 0x4050d0 - 0x405104
int64_t function_4050d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4050d7
    int64_t result = function_405f90(a1 == 0 ? (int64_t)&g41 : a1, 56); // 0x4050f6
    return result;
}
// Address range: 0x405110 - 0x40511f
int64_t function_405110(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g41 : a1); // 0x40511c
    return result;
}
// Address range: 0x405120 - 0x40512f
int64_t function_405120(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x405128
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g41;
}
// Address range: 0x405130 - 0x405163
int64_t function_405130(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 + 8 : a1 + 8; // 0x405149
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40514e
    uint32_t v3 = *v2; // 0x40514e
    uint32_t v4 = (int32_t)a2 % 32; // 0x405152
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405170 - 0x405183
int64_t function_405170(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g41 + 4 : a1 + 4); // 0x40517c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405190 - 0x4051bb
int64_t function_405190(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x405198
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4051b5
        abort();
        // UNREACHABLE
    }
    // 0x4051ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g41;
}
// Address range: 0x4051c0 - 0x405232
int64_t function_4051c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g41 : a5; // 0x4051e2
    int32_t * v2 = __errno_location(); // 0x4051eb
    uint32_t v3 = *(int32_t *)v1; // 0x40520b
    int64_t result = function_403d00(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40521a
    return result;
}
// Address range: 0x405240 - 0x405321
int64_t function_405240(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g41 : a4; // 0x405262
    int32_t * v2 = __errno_location(); // 0x405268
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405287
    int32_t * v4 = (int32_t *)v1; // 0x40528a
    int64_t v5 = function_403d00(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4052a5
    int64_t v6 = v5 + 1; // 0x4052aa
    int64_t result = function_405d90(v6); // 0x4052bf
    function_403d00(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405304
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40530d
    return result;
}
// Address range: 0x405330 - 0x40533a
int64_t function_405330(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405330
    return function_405240(a1, a2, 0, a3);
}
// Address range: 0x405340 - 0x4053d5
int64_t function_405340(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x405340
    int64_t v2 = v1; // 0x405340
    int64_t v3 = v2; // 0x405354
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x405373
        free((int64_t *)*(int64_t *)v4);
        v3 = &g56;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x405370
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g56;
        }
    }
    int64_t v6 = v3; // 0x40538d
    if (g23 != 0x6113a0) {
        // 0x40538f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g40;
        v6 = &g56;
    }
    int64_t result = v6; // 0x4053b1
    if (g22 != &g23) {
        // 0x4053b3
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g56;
    }
    // 0x4053c6
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x4053e0 - 0x4053f1
int64_t function_4053e0(void) {
    // 0x4053e0
    int64_t v1; // 0x4053e0
    return function_404f30(v1, v1, -1, (int64_t *)&g41);
}
// Address range: 0x405400 - 0x40540a
int64_t function_405400(void) {
    // 0x405400
    int64_t v1; // 0x405400
    return function_404f30(v1, v1, v1, (int64_t *)&g41);
}
// Address range: 0x405410 - 0x405426
int64_t function_405410(int64_t a1) {
    // 0x405410
    return function_404f30(0, a1, -1, (int64_t *)&g41);
}
// Address range: 0x405430 - 0x405442
int64_t function_405430(int64_t a1, int64_t a2) {
    // 0x405430
    return function_404f30(0, a1, a2, (int64_t *)&g41);
}
// Address range: 0x405450 - 0x4054b8
int64_t function_405450(int64_t a1, int64_t a2, int64_t * a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405460
    return function_404f30(a1, (int64_t)a3, -1, &v1);
}
// Address range: 0x4054c0 - 0x405524
int64_t function_4054c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4054d0
    return function_404f30((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405530 - 0x40553c
int64_t function_405530(int64_t a1, int64_t * a2) {
    // 0x405530
    return function_405450(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405540 - 0x40554f
int64_t function_405540(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405540
    return function_4054c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405550 - 0x4055c0
int64_t function_405550(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x40555d
    int128_t v2 = __asm_movdqa(g42); // 0x405565
    int128_t v3 = __asm_movdqa(g43); // 0x40556d
    int64_t v4 = __asm_movaps_6(v1); // bp-72, 0x405582
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405598
    uint32_t v6 = *v5; // 0x405598
    uint32_t v7 = (int32_t)a3 % 32; // 0x40559d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404f30(0, a1, a2, &v4);
}
// Address range: 0x4055c0 - 0x4055cd
int64_t function_4055c0(int64_t a1, int64_t a2) {
    // 0x4055c0
    return function_405550(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4055d0 - 0x4055e1
int64_t function_4055d0(int64_t a1) {
    // 0x4055d0
    return function_405550(a1, -1, 58);
}
// Address range: 0x4055f0 - 0x4055fa
int64_t function_4055f0(void) {
    // 0x4055f0
    int64_t v1; // 0x4055f0
    return function_405550(v1, v1, 58);
}
// Address range: 0x405600 - 0x40566e
int64_t function_405600(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40561a
    return function_404f30((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405670 - 0x4056dc
int64_t function_405670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x405677
    int128_t v2 = __asm_movdqa(g42); // 0x40567f
    int128_t v3 = __asm_movdqa(g43); // 0x405687
    __asm_movaps_6(v1);
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int64_t v4 = 10; // bp-72, 0x4056a9
    if (a2 == 0 || a3 == 0) {
        // 0x4056d7
        abort();
        // UNREACHABLE
    }
    // 0x4056ba
    return function_404f30(a1, a4, a5, &v4);
}
// Address range: 0x4056e0 - 0x4056e9
int64_t function_4056e0(void) {
    // 0x4056e0
    int64_t v1; // 0x4056e0
    return function_405670(v1, v1, v1, v1, -1);
}
// Address range: 0x4056f0 - 0x405707
int64_t function_4056f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4056f0
    return function_405670(0, a1, a2, a3, -1);
}
// Address range: 0x405710 - 0x405723
int64_t function_405710(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405710
    return function_405670(0, a1, a2, a3, a4);
}
// Address range: 0x405730 - 0x40573a
int64_t function_405730(void) {
    // 0x405730
    int64_t v1; // 0x405730
    return function_404f30(v1, v1, v1, &g21);
}
// Address range: 0x405740 - 0x405752
int64_t function_405740(int64_t a1, int64_t a2) {
    // 0x405740
    return function_404f30(0, a1, a2, &g21);
}
// Address range: 0x405760 - 0x405771
int64_t function_405760(void) {
    // 0x405760
    int64_t v1; // 0x405760
    return function_404f30(v1, v1, -1, &g21);
}
// Address range: 0x405780 - 0x405796
int64_t function_405780(int64_t a1) {
    // 0x405780
    return function_404f30(0, a1, -1, &g21);
}
// Address range: 0x4057a0 - 0x4057eb
int64_t function_4057a0(int64_t * a1) {
    // 0x4057a0
    int64_t v1; // bp-152, 0x4057a0
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x4057e0
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x4057f0 - 0x405bcd
int64_t function_4057f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405888
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40580c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405826
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40586b
    if (a6 < 10) {
        // 0x40587a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405972
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405bd0 - 0x405bf0
int64_t function_405bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405bd0
    if (a5 == 0) {
        // 0x405beb
        return function_4057f0(a1, a2, a3, a4, a5, 0, (int64_t)&g56);
    }
    int64_t v1 = 0; // 0x405bd7
    v1++;
    int64_t v2 = v1; // 0x405be9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405be0
        v1++;
        v2 = v1;
    }
    // 0x405beb
    return function_4057f0(a1, a2, a3, a4, a5, v2, (int64_t)&g56);
}
// Address range: 0x405bf0 - 0x405c50
int64_t function_405bf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405bf0
    int64_t v3 = &v2; // 0x405bf0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405c23
    int64_t v6; // 0x405c0d
    int64_t * v7; // 0x405c2b
    int64_t v8; // 0x405c2b
    int64_t v9; // 0x405c37
    if (v5 < 48) {
        // 0x405c00
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405c43
            break;
        }
    } else {
        // 0x405c2b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405c43
            break;
        }
    }
    int64_t v10 = 10; // 0x405c21
    while (v4 != 9) {
        // 0x405c19
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405c00
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405c43
                break;
            }
        } else {
            // 0x405c2b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405c43
                break;
            }
        }
        // 0x405c19
        v10 = 10;
    }
    // 0x405c43
    return function_4057f0(a1, a2, a3, a4, v3, v10, (int64_t)&g56);
}
// Address range: 0x405c50 - 0x405d0c
int64_t function_405c50(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405c50
    int64_t v1; // bp-168, 0x405c50
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405c50
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405c50
    int64_t v8; // 0x405c50
    int64_t v9; // bp-56, 0x405c50
    int64_t v10; // 0x405cb5
    int64_t v11; // 0x405cd9
    if ((int32_t)v6 < 48) {
        // 0x405ca0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405cf0
            break;
        }
    } else {
        // 0x405cd2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405cf0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x405cca
    int64_t v13 = 10; // 0x405cca
    while (v5 != 9) {
        // 0x405ccc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405ca0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405cf0
                break;
            }
        } else {
            // 0x405cd2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405cf0
                break;
            }
        }
        // 0x405cc2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405cf0
    int64_t v14; // bp-136, 0x405c50
    int64_t result = function_4057f0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g56); // 0x405cff
    return result;
}
// Address range: 0x405d10 - 0x405d84
int64_t function_405d10(int64_t a1) {
    // 0x405d10
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405d73
    return fputs_unlocked(v1, g30);
}
// Address range: 0x405d90 - 0x405daa
int64_t function_405d90(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405d94
    if (size != 0 != (mem == NULL)) {
        // 0x405da3
        return (int64_t)mem;
    }
    // 0x405da5
    function_405fe0(size);
    // UNREACHABLE
}
// Address range: 0x405db0 - 0x405dd1
int64_t function_405db0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405db3
    int64_t v2 = v1; // 0x405db3
    if (v2 < 0) {
        // 0x405dcb
        function_405fe0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405dc9
        return function_405d90(v2);
    }
    // 0x405dcb
    function_405fe0(v2);
    // UNREACHABLE
}
// Address range: 0x405de0 - 0x405de2
int64_t function_405de0(void) {
    // 0x405de0
    int64_t v1; // 0x405de0
    return function_405d90(v1);
}
// Address range: 0x405df0 - 0x405e26
int64_t function_405df0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405e18
        free(v1);
        return (int32_t)&g56 ^ (int32_t)&g56;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405e01
    if (a2 != 0 != (mem == NULL)) {
        // 0x405e10
        return (int64_t)mem;
    }
    // 0x405e21
    function_405fe0(a1);
    // UNREACHABLE
}
// Address range: 0x405e30 - 0x405e51
int64_t function_405e30(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405e33
    int64_t v2 = v1; // 0x405e33
    if (v2 < 0) {
        // 0x405e4b
        function_405fe0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405e49
        return function_405df0(a1, v2);
    }
    // 0x405e4b
    function_405fe0(a1);
    // UNREACHABLE
}
// Address range: 0x405e60 - 0x405ee6
int64_t function_405e60(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x405ebb
            function_405fe0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405df0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405ea3
    if (a2 == 0) {
        // 0x405ec8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405ea8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x405ebb
        function_405fe0(a1);
        // UNREACHABLE
    }
    // 0x405e8a
    *(int64_t *)a2 = v2;
    return function_405df0(a1, v2 * a3);
}
// Address range: 0x405ef0 - 0x405f40
int64_t function_405ef0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405ef0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x405f3a
            function_405fe0(a1);
            // UNREACHABLE
        }
        // 0x405f12
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405df0(a1, v1);
    }
    if (a2 == 0) {
        // 0x405f25
        *(int64_t *)a2 = 128;
        return function_405df0(0, 128);
    }
    // 0x405f38
    if (a2 < 0) {
        // 0x405f3a
        function_405fe0(a1);
        // UNREACHABLE
    }
    // 0x405f12
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405df0(a1, v1);
}
// Address range: 0x405f40 - 0x405f57
int64_t function_405f40(int64_t a1, int64_t a2) {
    // 0x405f40
    return (int64_t)memset((int64_t *)function_405d90(a1), 0, (int32_t)a1);
}
// Address range: 0x405f60 - 0x405f8e
int64_t function_405f60(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405f67
    if ((int64_t)v1 < 0) {
        // 0x405f89
        function_405fe0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405f89
        function_405fe0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x405f7a
    if (mem != NULL) {
        // 0x405f84
        return (int64_t)mem;
    }
    // 0x405f89
    function_405fe0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405f90 - 0x405fb8
int64_t function_405f90(int64_t a1, int64_t a2) {
    int64_t v1 = function_405d90(a2); // 0x405f9f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405fc0 - 0x405fd3
int64_t function_405fc0(int64_t str) {
    // 0x405fc0
    return function_405f90(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405fe0 - 0x406011
int64_t function_405fe0(int64_t a1) {
    // 0x405fe0
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406020 - 0x406070
int64_t function_406020(int64_t a1, int64_t a2) {
    // 0x406020
    int64_t v1; // 0x406020
    int64_t result = fts_open(a1, (int32_t)a2 | 512, v1); // 0x40602a
    if (result != 0) {
        // 0x406034
        return result;
    }
    // 0x406040
    if (*__errno_location() == 22) {
        // 0x406050
        __assert_fail("errno != EINVAL", "lib/xfts.c", 41, "xfts_open");
        return &g56;
    }
    // 0x40604a
    function_405fe0(a1);
    // UNREACHABLE
}
// Address range: 0x406070 - 0x406099
int64_t function_406070(int64_t a1, int64_t a2) {
    int64_t result = 1; // 0x406070
    int32_t v1; // 0x406070
    switch (v1 & 17) {
        case 17: {
            // 0x406090
            return *(int64_t *)(a2 + 88) != 0;
        }
        default: {
            // 0x406087
            result = 0;
        }
        case 16: {
            // 0x406087
            return result;
        }
    }
}
// Address range: 0x4060a0 - 0x4064d0
int64_t function_4060a0(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x4060ae
    if (base >= 37) {
        // 0x4064ab
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g56;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x4060d2
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x406102
    int64_t v3 = str; // 0x406107
    char v4 = c; // 0x406107
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x4060fc
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x4060f8
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x406109
    if (v4 == 45) {
        // 0x406143
        return 4;
    }
    // 0x40610e
    int64_t v6; // bp-64, 0x4060a0
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x4060ce
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x406114
    int64_t * v7 = (int64_t *)endptr; // 0x406119
    int64_t v8 = *v7; // 0x406119
    char v9; // 0x4060a0
    int64_t v10; // 0x4060a0
    int64_t v11; // 0x4060a0
    int64_t v12; // 0x4060a0
    int64_t v13; // 0x4060a0
    int64_t v14; // 0x4060a0
    int64_t v15; // 0x4060a0
    if (v8 == str) {
        // 0x406170
        if (c == 0 || str2 == NULL) {
            // 0x406143
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x406191
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x406143
            return 4;
        }
        goto lab_0x40619f;
    } else {
        int32_t v16 = *v1; // 0x406124
        int64_t v17 = 0; // 0x40612a
        if (v16 != 0) {
            // 0x406158
            v17 = 1;
            if (v16 != 34) {
                // 0x406143
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x406114
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x406140;
        } else {
            char c2 = *(char *)v8; // 0x406133
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x406293
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40619f;
                } else {
                    goto lab_0x4062a5;
                }
            } else {
                goto lab_0x406140;
            }
        }
    }
  lab_0x40619f:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x4061a7
    int64_t v21 = 1; // 0x4061a7
    int64_t v22; // 0x4060a0
    int64_t v23; // 0x4060a0
    int64_t v24; // 0x4060a0
    int64_t v25; // 0x4060a0
    int64_t v26; // 0x4060a0
    int64_t v27; // 0x4060a0
    int64_t v28; // 0x4060a0
    int64_t v29; // 0x4060a0
    int64_t v30; // 0x4060a0
    int64_t v31; // 0x4060a0
    int64_t v32; // 0x4060a0
    int64_t v33; // 0x4060a0
    int64_t v34; // 0x4060a0
    int64_t v35; // 0x4060a0
    int64_t v36; // 0x4060a0
    int64_t v37; // 0x4060a0
    int64_t v38; // 0x4060a0
    int64_t v39; // 0x4060a0
    int64_t v40; // 0x4060a0
    int64_t v41; // 0x4060a0
    if (v19 < 48) {
        // 0x4061a9
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40620a;
        } else {
            // 0x4061bc
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x40620a;
            } else {
                // 0x4061d8
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x40620a;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x406439
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x40620a;
                    }
                    default: {
                        // 0x4061ed
                        g53 = v19;
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
                                goto lab_0x4063ab;
                            }
                            case 70: {
                                goto lab_0x4062a5;
                            }
                            case 71: {
                                goto lab_0x4063e3;
                            }
                            case 72: {
                                goto lab_0x4062a5;
                            }
                            case 73: {
                                goto lab_0x4062a5;
                            }
                            case 74: {
                                goto lab_0x4062a5;
                            }
                            case 75: {
                                goto lab_0x40626c;
                            }
                            case 76: {
                                goto lab_0x4062a5;
                            }
                            case 77: {
                                goto lab_0x40622e;
                            }
                            case 78: {
                                goto lab_0x4062a5;
                            }
                            case 79: {
                                goto lab_0x4062a5;
                            }
                            case 80: {
                                goto lab_0x406378;
                            }
                            case 81: {
                                goto lab_0x4062a5;
                            }
                            case 82: {
                                goto lab_0x4062a5;
                            }
                            case 83: {
                                goto lab_0x4062a5;
                            }
                            case 84: {
                                goto lab_0x406348;
                            }
                            case 85: {
                                goto lab_0x4062a5;
                            }
                            case 86: {
                                goto lab_0x4062a5;
                            }
                            case 87: {
                                goto lab_0x4062a5;
                            }
                            case 88: {
                                goto lab_0x4062a5;
                            }
                            case 89: {
                                goto lab_0x406316;
                            }
                            case 90: {
                                goto lab_0x4062db;
                            }
                            case 91: {
                                goto lab_0x4062a5;
                            }
                            case 92: {
                                goto lab_0x4062a5;
                            }
                            case 93: {
                                goto lab_0x4062a5;
                            }
                            case 94: {
                                goto lab_0x4062a5;
                            }
                            case 95: {
                                goto lab_0x4062a5;
                            }
                            case 96: {
                                goto lab_0x4062a5;
                            }
                            case 97: {
                                goto lab_0x4062a5;
                            }
                            case 98: {
                                goto lab_0x4062bf;
                            }
                            case 99: {
                                goto lab_0x406248;
                            }
                            case 100: {
                                goto lab_0x4062a5;
                            }
                            case 101: {
                                goto lab_0x4062a5;
                            }
                            case 102: {
                                goto lab_0x4062a5;
                            }
                            case 103: {
                                goto lab_0x4063e3;
                            }
                            case 104: {
                                goto lab_0x4062a5;
                            }
                            case 105: {
                                goto lab_0x4062a5;
                            }
                            case 106: {
                                goto lab_0x4062a5;
                            }
                            case 107: {
                                goto lab_0x40626c;
                            }
                            case 108: {
                                goto lab_0x4062a5;
                            }
                            case 109: {
                                goto lab_0x40622e;
                            }
                            case 110: {
                                goto lab_0x4062a5;
                            }
                            case 111: {
                                goto lab_0x4062a5;
                            }
                            case 112: {
                                goto lab_0x4062a5;
                            }
                            case 113: {
                                goto lab_0x4062a5;
                            }
                            case 114: {
                                goto lab_0x4062a5;
                            }
                            case 115: {
                                goto lab_0x4062a5;
                            }
                            case 116: {
                                goto lab_0x406348;
                            }
                            default: {
                                goto lab_0x40620a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40620a;
    }
  lab_0x406140:
    // 0x406140
    *a4 = v13;
    // 0x406143
    return v10 & 0xffffffff;
  lab_0x40620a:
    // 0x40620a
    g54 = v9 - 66;
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
    int64_t v43; // 0x4060a0
    switch (v9) {
        case 66: {
            // 0x406404
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x406277;
            } else {
                // 0x406411
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406248;
            }
        }
        case 69: {
            goto lab_0x4063ab;
        }
        case 71: {
            goto lab_0x4063e3;
        }
        case 75: {
            goto lab_0x40626c;
        }
        case 77: {
            goto lab_0x40622e;
        }
        case 80: {
            goto lab_0x406378;
        }
        case 84: {
            goto lab_0x406348;
        }
        case 89: {
            goto lab_0x406316;
        }
        case 90: {
            goto lab_0x4062db;
        }
        case 98: {
            goto lab_0x4062bf;
        }
        case 99: {
            goto lab_0x406248;
        }
        case 103: {
            goto lab_0x4063e3;
        }
        case 107: {
            goto lab_0x40626c;
        }
        case 109: {
            goto lab_0x40622e;
        }
        case 116: {
            goto lab_0x406348;
        }
        case 119: {
            // 0x4062b0
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x406277;
            } else {
                // 0x4062b5
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406248;
            }
        }
        default: {
            goto lab_0x4062a5;
        }
    }
  lab_0x4063ab:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x4063c3
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x4063cf
    int64_t v48 = v45; // 0x4063d2
    int64_t v49 = v34; // 0x4063d2
    int64_t v50 = v46; // 0x4063d2
    int32_t v51 = v47; // 0x4063d2
    int64_t v52 = v46; // 0x4063d2
    while (v47 != 0) {
        // 0x4063c0
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
    goto lab_0x406304;
  lab_0x4063e3:
    // 0x4063e3
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x4063ee
        int128_t v53; // 0x4063e9
        uint128_t v54; // 0x4063e9
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x4063ee
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x4060a0
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x4063f3
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x4063f8
                v23 = v57;
                int64_t v58; // 0x4060a0
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x406248;
  lab_0x40626c:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x40626f
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x406248;
    } else {
        goto lab_0x406277;
    }
  lab_0x40622e:;
    int128_t v62 = v24; // 0x406234
    uint128_t v63 = v62 * (int128_t)v14; // 0x406234
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x406277;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x406239
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x406277;
        } else {
            // 0x40623e
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x406248;
        }
    }
  lab_0x406378:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x40638b
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x406397
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x40639a
    int64_t v70 = v67; // 0x40639a
    while (v68 != 0) {
        // 0x406388
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
    goto lab_0x406304;
  lab_0x406348:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x40635b
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x406367
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x40636a
    int64_t v76 = v73; // 0x40636a
    while (v74 != 0) {
        // 0x406358
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
    goto lab_0x406304;
  lab_0x406316:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x40632b
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x406337
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x40633a
    int64_t v82 = v79; // 0x40633a
    while (v80 != 0) {
        // 0x406328
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
    goto lab_0x406304;
  lab_0x4062db:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x4062f3
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x4062ff
    int32_t v87 = v86; // 0x406302
    int64_t v88 = v85; // 0x406302
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x4062f0
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
    goto lab_0x406304;
  lab_0x4062bf:
    // 0x4062bf
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x406277;
    } else {
        // 0x4062c8
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x406248;
    }
  lab_0x406248:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x40624d
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x406140;
  lab_0x4062a5:
    // 0x4062a5
    *a4 = v15;
    // 0x406143
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x406277:
    // 0x406277
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x406248;
  lab_0x406304:
    // 0x406304
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x406248;
}
// Address range: 0x4064d0 - 0x40673e
int64_t function_4064d0(int64_t a1, int32_t a2, int64_t a3, int32_t group, int64_t a5) {
    if ((a5 & 0xfffffeff) != 0) {
        // 0x406710
        *__errno_location() = 22;
        // 0x40660e
        return 0xffffffff;
    }
    int64_t v1 = a2;
    int32_t fd = a1; // 0x4064fc
    if (fd == -100 || (char)a2 == 47) {
        char * path = (char *)v1;
        int32_t owner = a3;
        int64_t result; // 0x4064d0
        if ((int32_t)a5 == 256) {
            // 0x406668
            result = lchown(path, owner, group);
        } else {
            // 0x406639
            result = chown(path, owner, group);
        }
        // 0x40660e
        return result;
    }
    // 0x40650e
    int32_t v2; // bp-4088, 0x4064d0
    int64_t v3 = function_409860((int64_t *)&v2, a1 & 0xffffffff, v1); // 0x406518
    if (v3 != 0) {
        char * path2 = (char *)v3;
        int32_t owner2 = a3;
        int32_t v4; // 0x4064d0
        if ((int32_t)a5 == 256) {
            // 0x406678
            v4 = lchown(path2, owner2, group);
        } else {
            // 0x40653b
            v4 = chown(path2, owner2, group);
        }
        int32_t * v5 = __errno_location(); // 0x40654b
        uint32_t v6 = *v5; // 0x406559
        if (v3 != (int64_t)&v2) {
            // 0x406560
            free((int64_t *)v3);
        }
        int64_t result2 = v4;
        if (v4 != -1) {
            // 0x40660e
            return result2;
        }
        if (v6 < 39) {
            if ((1 << (int64_t)(v6 % 64) & 0x4000102006) == 0) {
                // 0x406651
                *v5 = v6;
                // 0x40660e
                return result2;
            }
        } else {
            if (v6 != 95) {
                // 0x406651
                *v5 = v6;
                // 0x40660e
                return result2;
            }
        }
    }
    // 0x4065a0
    if ((int32_t)function_40b460((int64_t *)&v2) != 0) {
        int32_t v7 = *__errno_location(); // 0x406737
        function_40b3b0(v7);
        // UNREACHABLE
    }
    // 0x4065b2
    if (fd > -1 == v2 == fd) {
        // 0x4066f0
        function_40b4d0((int64_t *)&v2);
        *__errno_location() = 9;
        // 0x40660e
        return 0xffffffff;
    }
    // 0x4065c0
    if (fchdir(fd) != 0) {
        int32_t * v8 = __errno_location(); // 0x4066c8
        function_40b4d0((int64_t *)&v2);
        // 0x40660e
        return 0xffffffff;
    }
    char * path3 = (char *)v1;
    int32_t owner3 = a3;
    int32_t result3; // 0x4064d0
    if ((int32_t)a5 == 256) {
        // 0x406658
        result3 = lchown(path3, owner3, group);
    } else {
        // 0x4065e0
        result3 = chown(path3, owner3, group);
    }
    // 0x4065e8
    int32_t v9; // 0x40672b
    if (result3 != -1) {
        // 0x4065f2
        if ((int32_t)function_40b4b0((int64_t *)&v2) == 0) {
            // 0x406604
            function_40b4d0((int64_t *)&v2);
            // 0x40660e
            return result3;
        }
        // 0x406726
        v9 = *__errno_location();
        function_40b3e0(v9);
        // UNREACHABLE
    }
    int32_t * v10 = __errno_location(); // 0x406690
    int32_t v11 = *v10; // 0x40669d
    if ((int32_t)function_40b4b0((int64_t *)&v2) != 0) {
        // 0x406726
        v9 = *__errno_location();
        function_40b3e0(v9);
        // UNREACHABLE
    }
    // 0x4066a8
    function_40b4d0((int64_t *)&v2);
    if (v11 != 0) {
        // 0x4066ba
        *v10 = v11;
    }
    // 0x40660e
    return 0xffffffff;
}
// Address range: 0x406740 - 0x40675a
int64_t function_406740(int64_t a1, int64_t a2) {
    // 0x406740
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(a2 + 8)) {
        // 0x406750
        return a2 & -256 | (int64_t)(a1 == a2);
    }
    // 0x40674c
    return 0;
}
// Address range: 0x406760 - 0x40676d
int64_t function_406760(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x406760
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x406770 - 0x40677c
int64_t function_406770(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x406770
    return a1 % a2;
}
// Address range: 0x406780 - 0x40678a
int64_t function_406780(int64_t a1, int64_t a2) {
    // 0x406780
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x406790 - 0x4067b2
int64_t function_406790(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x40679b
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x4067a2
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x4067c0 - 0x40696a
int64_t function_4067c0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2 + 120; // 0x4067c6
    int64_t v2 = a1 + 72; // 0x4067ce
    uint64_t v3 = (int64_t)*(int32_t *)v2; // 0x4067ce
    int64_t * v4 = (int64_t *)(a2 + 88); // 0x4067d1
    int64_t * v5 = (int64_t *)(a2 + 48); // 0x4067d6
    int64_t v6 = *v5; // 0x4067d6
    int32_t v7; // 0x4067c0
    if (*v4 != 0 || v3 % 2 == 0) {
        if ((v3 & 2) != 0) {
            goto lab_0x4067e0;
        } else {
            if ((char)a3 != 0) {
                goto lab_0x4067e0;
            } else {
                int32_t v8 = *(int32_t *)(a1 + 44); // 0x40683b
                if (__fxstatat(1, v8, (char *)v6, (struct stat *)v1, 256) != 0) {
                    // 0x406890
                    v7 = *__errno_location();
                    goto lab_0x406897;
                } else {
                    goto lab_0x406857;
                }
            }
        }
    } else {
        goto lab_0x4067e0;
    }
  lab_0x4067e0:;
    struct stat * v9 = (struct stat *)v1; // 0x4067e8
    if (__xstat(1, (char *)v6, v9) == 0) {
        goto lab_0x406857;
    } else {
        int32_t * v10 = __errno_location(); // 0x4067f1
        int32_t v11 = *v10; // 0x4067f9
        v7 = v11;
        if (v11 == 2) {
            // 0x406804
            if (__lxstat(1, (char *)*v5, v9) == 0) {
                // 0x40681d
                *v10 = 0;
                return 13;
            }
            // 0x406940
            v7 = *v10;
        }
        goto lab_0x406897;
    }
  lab_0x406857:;
    int32_t v12 = *(int32_t *)(a2 + 144) & 0xf000; // 0x40685d
    int64_t v13; // 0x4067c0
    switch ((int16_t)v12) {
        case 0x4000: {
            uint64_t v14 = *(int64_t *)(a2 + 136); // 0x4068d0
            v13 = -1;
            if (v14 >= 2) {
                // 0x4068dd
                v13 = -1;
                if (*v4 >= 1) {
                    // 0x4068e4
                    v13 = (*(char *)v2 & 32) == 0 ? v14 - 2 : v14;
                }
            }
            // break -> 0x4068f2
            break;
        }
        case -0x6000: {
            // 0x406883
            return 12;
        }
        default: {
            // 0x406883
            return 4 * (int64_t)(v12 == 0x8000) + (v12 == 0x8000 ? 4 : 3);
        }
    }
    int64_t v15 = a2 + 264; // 0x4068f2
    *(int64_t *)(a2 + 104) = v13;
    if (*(char *)v15 != 46) {
        // 0x406883
        return 1;
    }
    // 0x406908
    if (*(char *)(a2 + 265) == 0) {
        // 0x406883
        return *v4 == 0 ? 1 : 5;
    }
    // 0x406911
    if ((*(int32_t *)v15 & 0xffff00) != 0x2e00) {
        // 0x406883
        return 1;
    }
    // 0x406883
    return *v4 == 0 ? 1 : 5;
  lab_0x406897:
    // 0x406897
    *(int32_t *)(a2 + 64) = v7;
    int64_t v16 = a2 + 128 & -8; // 0x4068a0
    *(int64_t *)v1 = 0;
    *(int64_t *)(a2 + 256) = 0;
    __asm_rep_stosq_memset((char *)v16, 0, (a2 + 264 - v16) / 8 % 0x20000000);
    return 10;
}
// Address range: 0x406970 - 0x406a6d
int64_t function_406970(int64_t a1, int64_t result, uint64_t nmemb) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x406983
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x406987
    int64_t v3 = *v2; // 0x406987
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40698b
    int64_t base = v3; // 0x40698f
    if (*v4 < nmemb) {
        uint64_t v5 = nmemb + 40; // 0x40699b
        *v4 = v5;
        if (v5 >= 0x2000000000000000) {
            // 0x406a41
            free((int64_t *)v3);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        int64_t * mem = realloc((int64_t *)v3, 8 * (int32_t)v5); // 0x4069b0
        if (mem == NULL) {
            // 0x406a41
            free((int64_t *)*v2);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        // 0x4069c1
        base = (int64_t)mem;
        *v2 = base;
    }
    int64_t v6 = base; // 0x4069cb
    int64_t v7 = result; // 0x4069cb
    if (result != 0) {
        *(int64_t *)v6 = v7;
        v7 += 16;
        v6 += 8;
        while (v7 != 0) {
            // 0x4069d0
            *(int64_t *)v6 = v7;
            v7 += 16;
            v6 += 8;
        }
    }
    // 0x4069e1
    qsort((int64_t *)base, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))v1);
    int64_t v8 = *v2; // 0x4069f1
    int64_t result2 = *(int64_t *)v8; // 0x4069f8
    if (nmemb == 1) {
        // 0x406a2a
        *(int64_t *)(result2 + 16) = 0;
        return result2;
    }
    int64_t v9 = v8 + 8; // 0x406a13
    int64_t * v10 = (int64_t *)v9; // 0x406a13
    *(int64_t *)(result2 + 16) = *v10;
    int64_t v11 = nmemb - 2; // 0x406a1f
    int64_t v12 = v11; // 0x406a23
    int64_t v13 = v9; // 0x406a23
    if (v11 != 0) {
        v13 += 8;
        int64_t * v14 = (int64_t *)v13; // 0x406a13
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
    // 0x406a2a
    *(int64_t *)(*(int64_t *)(8 * nmemb - 8 + v8) + 16) = 0;
    return result2;
}
// Address range: 0x406a70 - 0x406afa
int64_t function_406a70(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    int64_t * mem = malloc(v1 + 272 & -8); // 0x406a8e
    int64_t result = (int64_t)mem; // 0x406a8e
    if (mem != NULL) {
        int64_t v2 = result + 264; // 0x406a9b
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
    // 0x406aec
    return result;
}
// Address range: 0x406b00 - 0x406b41
int64_t function_406b00(int64_t a1) {
    // 0x406b00
    if (a1 == 0) {
        // 0x406b32
        int64_t result; // 0x406b00
        return result;
    }
    int64_t dirp = *(int64_t *)(a1 + 24); // 0x406b10
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x406b14
    if (dirp != 0) {
        // 0x406b1d
        closedir((struct __dirstream *)dirp);
    }
    // 0x406b22
    free((int64_t *)a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        dirp = *(int64_t *)(v2 + 24);
        v1 = *(int64_t *)(v2 + 16);
        if (dirp != 0) {
            // 0x406b1d
            closedir((struct __dirstream *)dirp);
        }
        // 0x406b22
        free((int64_t *)v2);
    }
    // 0x406b32
    return &g56;
}
// Address range: 0x406b50 - 0x406b89
int64_t function_406b50(int64_t a1) {
    int64_t result = function_40ada0(a1); // 0x406b6f
    if ((char)result != 0) {
        // 0x406b78
        return result;
    }
    int32_t fd = function_40adf0(a1); // 0x406b68
    if (fd >= 0) {
        // 0x406b80
        close(fd);
    }
    int64_t result2 = function_40ada0(a1); // 0x406b6f
    while ((char)result2 == 0) {
        // 0x406b60
        fd = function_40adf0(a1);
        if (fd >= 0) {
            // 0x406b80
            close(fd);
        }
        // 0x406b6c
        result2 = function_40ada0(a1);
    }
    // 0x406b78
    return result2;
}
// Address range: 0x406b90 - 0x406ca1
int64_t function_406b90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x406b98
    int64_t v2 = *v1; // 0x406b98
    if ((*(char *)(v2 + 73) & 2) == 0) {
        // 0x406bd2
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 80); // 0x406ba6
    int64_t v4 = *v3; // 0x406ba6
    int64_t v5 = v4; // 0x406bb0
    int64_t result; // bp-152, 0x406b90
    if (v4 == 0) {
        // 0x406c40
        v5 = function_40a3c0(13, 0, 0x406770, 0x406780, 0x401bb0);
        *v3 = v5;
        if (v5 == 0) {
            // 0x406c6c
            fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result);
            // 0x406bd2
            return 0;
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 120); // 0x406bb6
    result = *v6;
    int64_t v7 = function_40a150(v5, &result); // 0x406bc4
    if (v7 != 0) {
        // 0x406bd2
        return *(int64_t *)(v7 + 8);
    }
    // 0x406be0
    if (fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result) != 0) {
        // 0x406bd2
        return 0;
    }
    int64_t * mem = malloc(16); // 0x406bfc
    if (mem == NULL) {
        // 0x406bd2
        return result;
    }
    int64_t v8 = (int64_t)mem; // 0x406bfc
    *(int64_t *)(v8 + 8) = result;
    *mem = *v6;
    if (function_40ab60(v5, v8) != 0) {
        // 0x406c28
        return result;
    }
    // 0x406c90
    free(mem);
    // 0x406bd2
    return result;
}
// Address range: 0x406cb0 - 0x406d14
int64_t function_406cb0(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_406b90(a1, a2); // 0x406cb4
    if (v1 == 0x9fa0) {
        // 0x406ce6
        return 0;
    }
    if (v1 <= 0x9fa0) {
        // 0x406cf0
        if (v1 != 0) {
            // 0x406cf7
            return v1 != 0x6969;
        }
        // 0x406ce6
        return 0;
    }
    // 0x406cc3
    switch (v1) {
        case 0x5346414f: {
            // 0x406ce6
            return 0;
        }
        case 0x58465342: {
            // 0x406ce6
            return 2;
        }
    }
    // 0x406ce6
    return v1 == 0x52654973 ? 2 : 1;
}
// Address range: 0x406d20 - 0x406d86
int64_t function_406d20(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x406d2b
    int32_t fd = *v1; // 0x406d2b
    int32_t v2 = a2; // 0x406d2e
    if (fd == v2 == (fd != -100)) {
        // 0x406d81
        abort();
        // UNREACHABLE
    }
    if ((char)a3 == 0) {
        // 0x406d3b
        if (fd >= 0 != ((*(char *)(a1 + 72) & 4) == 0)) {
            // 0x406d45
            *v1 = v2;
            int64_t result; // 0x406d20
            return result;
        }
        int32_t result2 = close(fd); // 0x406d72
        *v1 = v2;
        return result2;
    }
    int64_t result3 = function_40adb0(a1 + 96, fd); // 0x406d54
    uint32_t fd2 = (int32_t)result3; // 0x406d59
    if (fd2 < 0) {
        // 0x406d45
        *v1 = v2;
        return result3;
    }
    int32_t result4 = close(fd2); // 0x406d5f
    *v1 = v2;
    return result4;
}
// Address range: 0x406d90 - 0x406dea
int64_t function_406d90(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 72); // 0x406d99
    uint32_t v2 = v1 & 4; // 0x406d9e
    if (v2 != 0) {
        // 0x406dc2
        function_406b50(a1 + 96);
        return 0;
    }
    int64_t result; // 0x406d90
    if ((v1 & 512) == 0) {
        // 0x406dd8
        result = fchdir(*(int32_t *)(a1 + 40)) != 0;
    } else {
        // 0x406da8
        function_406d20(a1, 0xffffff9c, 1);
        result = v2;
    }
    // 0x406dc2
    function_406b50(a1 + 96);
    return result;
}
// Address range: 0x406df0 - 0x406e5b
int64_t function_406df0(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 256 + a3; // 0x406dfa
    if (v1 < a2) {
        int64_t * v2 = (int64_t *)a1; // 0x406e28
        free(v2);
        *v2 = 0;
        *__errno_location() = 36;
        return 0;
    }
    // 0x406e07
    *(int64_t *)a2 = v1;
    int64_t * v3 = (int64_t *)a1; // 0x406e0d
    int64_t * mem = realloc(v3, (int32_t)v1); // 0x406e0d
    if (mem != NULL) {
        // 0x406e17
        *v3 = (int64_t)mem;
        return 1;
    }
    // 0x406e48
    free(v3);
    *v3 = 0;
    return (int32_t)&g56 ^ (int32_t)&g56;
}
// Address range: 0x406e60 - 0x406ebb
int64_t function_406e60(int32_t a1, int64_t a2) {
    if ((a1 & 258) != 0) {
        int64_t v1 = function_40a3c0(31, 0, 0x406760, 0x406740, 0x401bb0); // 0x406e83
        *(int64_t *)a2 = v1;
        // 0x406e91
        return v1 & -256 | (int64_t)(v1 != 0);
    }
    int64_t * mem = malloc(32); // 0x406e9d
    int64_t v2 = (int64_t)mem; // 0x406e9d
    *(int64_t *)a2 = v2;
    if (mem == NULL) {
        // 0x406e91
        return 0;
    }
    // 0x406eaf
    function_4099f0(v2);
    return 1;
}
// Address range: 0x406ec0 - 0x406f04
int64_t function_406ec0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x2000 * a2 & 0x20000 | 128 * a2 & 0x40000 | 0x90900; // 0x406eda
    if ((a2 & 512) == 0) {
        // 0x406ef8
        return function_409a80(a3, v1, (int32_t)v1);
    }
    // 0x406ee8
    return function_40b410((int64_t)a1, a3, (int32_t)v1, a3);
}
// Address range: 0x406f10 - 0x4070d6
int64_t function_406f10(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff; // 0x406f1f
    int32_t * v3 = (int32_t *)(a1 + 72); // 0x406f2c
    uint32_t v4 = *v3; // 0x406f2c
    int64_t v5 = v4; // 0x406f2c
    int32_t v6 = v4 & 4; // 0x406f33
    int64_t v7; // 0x406f10
    int64_t v8; // 0x406f10
    int64_t v9; // 0x406f10
    int64_t v10; // 0x406f10
    int64_t v11; // 0x406f10
    if (a4 == 0) {
        goto lab_0x406fb0;
    } else {
        // 0x406f3b
        bool v12; // 0x406f10
        int64_t v13 = v12 ? -1 : 1; // 0x406f48
        int64_t v14 = (int64_t)".."; // 0x406f10
        int64_t v15 = v1; // 0x406f10
        int64_t v16 = 3; // 0x406f48
        unsigned char v17 = *(char *)v15; // 0x406f48
        char v18 = *(char *)v14; // 0x406f48
        char v19 = v18; // 0x406f48
        bool v20 = false; // 0x406f48
        while (v17 == v18) {
            // 0x406f3b
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
            goto lab_0x406fb0;
        } else {
            if (v6 != 0) {
                goto lab_0x407020;
            } else {
                // 0x406f5b
                v11 = v2;
                v7 = v2;
                v9 = 1;
                if ((int32_t)a3 >= 0) {
                    goto lab_0x406fc2;
                } else {
                    // 0x406f63
                    v8 = v5;
                    v10 = 1;
                    if ((v5 & 512) == 0) {
                        goto lab_0x40704e;
                    } else {
                        int64_t v22 = a1 + 96; // 0x406f70
                        int64_t v23 = function_40ada0(v22); // 0x406f7c
                        v8 = v5;
                        v10 = v23 & 0xffffffff;
                        if ((char)v23 != 0) {
                            goto lab_0x40704e;
                        } else {
                            int64_t v24 = function_40adf0(v22); // 0x406f94
                            if ((int32_t)v24 < 0) {
                                // 0x407098
                                v8 = (int64_t)*v3;
                                v10 = 1;
                                goto lab_0x40704e;
                            } else {
                                // 0x406fa4
                                v11 = v24 & 0xffffffff;
                                v7 = v24;
                                v9 = 1;
                                goto lab_0x406fc2;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x406fb0:
    if (v6 != 0) {
        goto lab_0x407020;
    } else {
        // 0x406fb4
        v11 = v2;
        v7 = v2;
        v9 = 0;
        v8 = v5;
        v10 = 0;
        if ((int32_t)a3 < 0) {
            goto lab_0x40704e;
        } else {
            goto lab_0x406fc2;
        }
    }
  lab_0x407020:
    // 0x407020
    if ((v5 & 512) == 0) {
        // 0x40702f
        return 0;
    }
    int32_t fd = a3; // 0x407029
    if (fd >= 0) {
        // 0x407088
        close(fd);
        // 0x40702f
        return 0;
    }
    // 0x40702f
    return 0;
  lab_0x40704e:;
    int64_t v25 = function_406ec0(*(int32_t *)(a1 + 44), v8, v1); // 0x407058
    v11 = v2;
    v7 = v25;
    v9 = v10;
    if ((int32_t)v25 < 0) {
        // 0x40702f
        return 0xffffffff;
    }
    goto lab_0x406fc2;
  lab_0x406fc2:;
    int32_t fd2 = v7; // 0x406fc7
    int64_t v26; // bp-200, 0x406f10
    uint32_t v27 = __fxstat(1, fd2, (struct stat *)&v26); // 0x406fcf
    int64_t v28 = 0xffffffff; // 0x406fd8
    if (v27 != 0) {
        goto lab_0x407003;
    } else {
        // 0x406fda
        if (*(int64_t *)(a2 + 120) != v26) {
            goto lab_0x406ff3;
        } else {
            // 0x406fe5
            int64_t v29; // 0x406f10
            if (*(int64_t *)(a2 + 128) == v29) {
                // 0x407070
                if ((*(char *)(a1 + 73) & 2) != 0) {
                    // 0x4070a8
                    function_406d20(a1, v7 & 0xffffffff, v9 % 256 ^ 1);
                    // 0x40702f
                    return (int64_t)v27 & 0xffffffff;
                }
                // 0x407077
                v28 = fchdir(fd2);
                goto lab_0x407003;
            } else {
                goto lab_0x406ff3;
            }
        }
    }
  lab_0x407003:
    // 0x407003
    if ((int32_t)v11 < 0) {
        int32_t * v30 = __errno_location(); // 0x407007
        close(fd2);
    }
    // 0x40702f
    return v28 & 0xffffffff;
  lab_0x406ff3:
    // 0x406ff3
    *__errno_location() = 2;
    v28 = 0xffffffff;
    goto lab_0x407003;
}
// Address range: 0x4070e0 - 0x40718f
int64_t function_4070e0(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) == 0) {
        int64_t result = function_409a00(a2, a3 + 120); // 0x407168
        if ((char)result == 0) {
            // 0x407151
            return 1;
        }
        // 0x407171
        *(int64_t *)a3 = a3;
        *(int16_t *)(a3 + 112) = 2;
        return result;
    }
    int64_t * mem = malloc(24); // 0x4070f7
    if (mem == NULL) {
        // 0x407151
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x4070f7
    *(int64_t *)(v1 + 16) = a3;
    *mem = *(int64_t *)(a3 + 120);
    *(int64_t *)(v1 + 8) = *(int64_t *)(a3 + 128);
    int64_t v2 = function_40ab60(a2, v1); // 0x407126
    if (v2 == v1) {
        // 0x407151
        return 1;
    }
    // 0x407133
    free(mem);
    int64_t result2 = 0; // 0x40713e
    if (v2 != 0) {
        // 0x407140
        *(int16_t *)(a3 + 112) = 2;
        *(int64_t *)a3 = *(int64_t *)(v2 + 16);
        result2 = 1;
    }
    // 0x407151
    return result2;
}
// Address range: 0x407190 - 0x407226
int64_t function_407190(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) != 0) {
        // 0x4071d0
        free((int64_t *)function_40aba0(a2));
        return &g56;
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x40719f
    if (result == 0) {
        // 0x4071c9
        return 0;
    }
    // 0x4071a8
    if (*(int64_t *)(result + 88) < 0) {
        // 0x4071c9
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40720c
    int64_t result2 = result; // 0x407210
    if (*v1 == *(int64_t *)(a3 + 120)) {
        // 0x407212
        result2 = *(int64_t *)(result + 128);
        *v1 = *(int64_t *)(result + 120);
        *(int64_t *)a2 = result2;
    }
    // 0x4071c9
    return result2;
}
// Address range: 0x407230 - 0x407be3
int64_t function_407230(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x407244
    int64_t * dirp2 = (int64_t *)(a1 + 24); // 0x407248
    int64_t dirp = *dirp2; // 0x407248
    int64_t v2; // 0x407230
    int32_t * v3; // 0x407230
    int64_t v4; // 0x407230
    int64_t v5; // 0x407230
    int64_t v6; // 0x407230
    int64_t v7; // 0x407230
    int64_t v8; // 0x407230
    int64_t v9; // 0x407230
    char v10; // 0x407230
    int64_t v11; // 0x407230
    int64_t v12; // 0x407230
    int64_t v13; // 0x407666
    int64_t v14; // 0x407230
    int64_t v15; // 0x4076a5
    int32_t * v16; // 0x407230
    int64_t v17; // 0x4076b2
    int32_t v18; // 0x4076b6
    if (dirp == 0) {
        // 0x407620
        v14 = a1 + 72;
        v16 = (int32_t *)v14;
        uint32_t v19 = *v16; // 0x407620
        uint64_t v20 = (int64_t)v19; // 0x407620
        v5 = 0;
        if ((v19 & 16) != 0) {
            // 0x40762b
            v5 = 0x20000;
            if (v20 % 2 != 0) {
                // 0x407800
                v5 = 0x20000 * (int64_t)(*(int64_t *)(a1 + 88) != 0);
            }
        }
        int64_t v21 = *(int64_t *)(a1 + 48); // 0x40763f
        int64_t v22 = 0xffffff9c; // 0x407658
        if ((v20 & 516) == 512) {
            // 0x40765a
            v22 = (int64_t)*(int32_t *)(a1 + 44);
        }
        int64_t v23 = 128 * v20 & 0x40000 | v5 & 0xfff60000 | 0x90900; // 0x40765e
        v13 = function_40b410(v22, v21, (int32_t)v23, v5);
        int32_t fd = v13; // 0x40766d
        if (fd < 0) {
            goto lab_0x4079a2;
        } else {
            struct __dirstream * v24 = fdopendir(fd); // 0x407677
            if (v24 == NULL) {
                int32_t * v25 = __errno_location(); // 0x40798c
                close(fd);
                goto lab_0x4079a2;
            } else {
                int16_t * v26 = (int16_t *)(a1 + 112); // 0x407685
                *dirp2 = (int64_t)v24;
                if (*v26 == 11) {
                    // 0x407a3c
                    *v26 = (int16_t)function_4067c0(a1, a1, 0);
                    v8 = a1;
                } else {
                    int32_t v27 = *v16; // 0x407695
                    v8 = v21;
                    if ((v27 & 256) != 0) {
                        int64_t v28 = a1 + 88; // 0x4079f0
                        function_407190(v27, v28, a1);
                        function_4067c0(a1, a1, 0);
                        int64_t v29 = function_4070e0(*v16, v28, a1); // 0x407a16
                        v8 = v28;
                        if ((char)v29 == 0) {
                            // 0x407a23
                            *__errno_location() = 12;
                          lab_0x4077e2:
                            // 0x4077e2
                            return 0;
                        }
                    }
                }
                // 0x4076a5
                v15 = a1 + 64;
                v17 = *(int64_t *)v15 == 0 ? 0x186a0 : -1;
                v18 = v1;
                if (v18 == 2) {
                    goto lab_0x4079e0;
                } else {
                    // 0x4076c6
                    if ((*v16 & 56) == 24) {
                        // 0x407812
                    } else {
                        // 0x4076d6
                        goto lab_0x4076e5;
                    }
                }
            }
        }
    } else {
        // 0x40725a
        if (dirfd((struct __dirstream *)dirp) < 0) {
            // 0x407abd
            closedir((struct __dirstream *)*dirp2);
            *dirp2 = 0;
            if ((int32_t)v1 != 3) {
                // 0x4077e2
                return 0;
            }
            goto lab_0x407ad9;
        } else {
            int64_t v30 = a1 + 72;
            int32_t * v31 = (int32_t *)v30;
            v3 = v31;
            v2 = v30;
            v11 = -1;
            v7 = a2;
            if (*(int64_t *)(a1 + 64) == 0) {
                // 0x4079c8
                v4 = v30;
                v12 = 0x186a0;
                v10 = 1;
                v9 = a2;
                v6 = (int64_t)*v31;
                goto lab_0x407284;
            } else {
                goto lab_0x40727b;
            }
        }
    }
  lab_0x407790_2:;
    // 0x407790
    int64_t v32; // 0x4073b4
    free((int64_t *)v32);
    int64_t v33; // 0x407230
    function_406b00(v33);
    closedir((struct __dirstream *)*dirp2);
    *dirp2 = 0;
    *(int16_t *)(a1 + 112) = 7;
    int32_t * v34; // 0x407230
    *v34 = *v34 | 0x4000;
    return 0;
  lab_0x40750c_2:;
    // 0x40750c
    int64_t v35; // 0x407230
    int64_t v36 = v35; // 0x407519
    int64_t v37; // 0x407230
    int64_t v38 = v37; // 0x407519
    int64_t v39; // 0x407230
    int64_t v40 = v39; // 0x407519
    char * v41; // 0x407230
    char * v42 = v41; // 0x407519
    int64_t v43 = v35; // 0x407519
    int64_t result2 = v37; // 0x407519
    int64_t v44 = v39; // 0x407519
    char v45; // 0x407230
    if (v45 == 0) {
        goto lab_0x407861;
    } else {
        goto lab_0x40751f;
    }
  lab_0x40739c:;
    // 0x40739c
    char * str; // 0x407230
    uint64_t len = (int64_t)strlen(str); // 0x4073a3
    int64_t v46; // 0x407230
    v32 = function_406a70(a1, v46, len);
    if (v32 == 0) {
        goto lab_0x407790_2;
    }
    // 0x4073c5
    int64_t v47; // 0x407230
    int64_t v48 = v47; // 0x4073ca
    char v49; // 0x407230
    char v50 = v49; // 0x4073ca
    int64_t v51; // 0x407230
    int64_t v52 = v51; // 0x4073ca
    int64_t v53 = a1; // 0x4073ca
    int64_t v54; // 0x407230
    int64_t v55; // 0x407230
    int64_t v56; // 0x4072d2
    int64_t * v57; // 0x4072d2
    int64_t v58; // 0x407230
    int64_t * v59; // 0x407230
    if (v51 <= len) {
        char v60 = function_406df0(v58, v56, v55 + 2 + len);
        if (v60 == 0) {
            goto lab_0x407790_2;
        }
        int64_t v61 = *v59; // 0x407490
        char v62 = v49; // 0x407499
        int64_t v63 = v47; // 0x407499
        if (v61 != *v59) {
            // 0x40749f
            v63 = (*v41 & 4) == 0 ? v47 : v61 + v54;
            v62 = v60;
        }
        // 0x4074b3
        v48 = v63;
        v50 = v62;
        v52 = *v57 - v54;
        v53 = v58;
    }
    uint64_t v64 = v54 + len; // 0x4073d3
    int32_t * v65; // 0x40736a
    if (v64 < len) {
        // 0x407b90
        free((int64_t *)v32);
        function_406b00(v33);
        closedir((struct __dirstream *)*dirp2);
        *dirp2 = 0;
        *(int16_t *)(a1 + 112) = 7;
        *v34 = *v34 | 0x4000;
        *v65 = 36;
        goto lab_0x4077e2;
    }
    int64_t v66 = v52;
    v45 = v50;
    v35 = v48;
    int64_t v67 = v32 + 264; // 0x4073e3
    int64_t * v68; // 0x4072e7
    *(int64_t *)(v32 + 88) = *v68 + 1;
    *(int64_t *)(v32 + 72) = v64;
    *(int64_t *)(v32 + 8) = v53;
    struct dirent * v69; // 0x40737b
    *(int64_t *)(v32 + 128) = *(int64_t *)v69;
    int32_t v70 = *v34; // 0x407403
    int32_t v71; // 0x407230
    if ((v70 & 4) != 0) {
        // 0x4074d0
        *(int64_t *)(v32 + 48) = *(int64_t *)(v32 + 56);
        int64_t v72 = *(int64_t *)(v32 + 96); // 0x4074dd
        memmove((int64_t *)v35, (int64_t *)v67, (int32_t)v72 + 1);
        v71 = *v34;
    } else {
        // 0x40740e
        *(int64_t *)(v32 + 48) = v67;
        v71 = v70;
    }
    int64_t v73 = v71;
    int64_t v74; // 0x407230
    int64_t v75; // 0x407230
    int64_t v76; // 0x407230
    int64_t v77; // 0x407230
    int64_t v78; // 0x40742c
    int64_t v79; // 0x40742c
    int64_t v80; // 0x407230
    int64_t v81; // 0x40737b
    if (*(int64_t *)v80 != 0 == (v73 & 1024) == 0) {
        // 0x4075f8
        *(int16_t *)(v32 + 112) = (int16_t)function_4067c0(a1, v32, 0);
        v76 = v32;
        goto lab_0x407327;
    } else {
        unsigned char v82 = *(char *)(v81 + 18); // 0x407422
        int64_t v83 = v82; // 0x40742a
        v78 = v83 + 0xffffffff;
        v79 = v78 & 0xffffffff;
        v77 = v83;
        if ((v73 & 24) == 24) {
            unsigned char v84 = v82 & -5;
            v77 = 0;
            if (v84 == 0) {
                goto lab_0x407438;
            } else {
                int64_t v85 = v84; // 0x4075c0
                *(int16_t *)(v32 + 112) = 11;
                if ((int32_t)v78 < 12) {
                    int32_t v86 = *(int32_t *)(4 * v79 + (int64_t)&g8); // 0x407778
                    *(int32_t *)(v32 + 144) = v86;
                    v74 = 1;
                    v75 = v85;
                } else {
                    // 0x4075df
                    *(int32_t *)(v32 + 144) = 0;
                    v74 = 1;
                    v75 = v85;
                }
                goto lab_0x407320;
            }
        } else {
            goto lab_0x407438;
        }
    }
  lab_0x407327:;
    int64_t v87 = v76;
    *(int64_t *)(v32 + 16) = 0;
    int64_t v88; // 0x407230
    v39 = v88 + 1;
    int64_t v89; // 0x407230
    int64_t v90; // 0x407230
    int64_t v91; // 0x407230
    int64_t v92; // 0x407230
    int64_t v93; // 0x407230
    int64_t v94; // 0x407230
    char v95; // 0x407230
    int64_t v96; // 0x407230
    if (v33 == 0) {
        // 0x4074f8
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v32;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v32;
        if (v39 >= v12) {
            goto lab_0x40750c_2;
        }
    } else {
        // 0x40733b
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
            goto lab_0x40750c_2;
        }
    }
    goto lab_0x407353;
  lab_0x407438:
    // 0x407438
    *(int16_t *)(v32 + 112) = 11;
    if ((int32_t)v78 < 12) {
        int32_t v166 = *(int32_t *)(4 * v79 + (int64_t)&g8); // 0x40744b
        *(int32_t *)(v32 + 144) = v166;
        v74 = 2;
        int64_t v167; // 0x407230
        v75 = v167;
    } else {
        // 0x407310
        *(int32_t *)(v32 + 144) = 0;
        v74 = 2;
        v75 = v77;
    }
    goto lab_0x407320;
  lab_0x407353:;
    int64_t v97 = *dirp2; // 0x40735d
    int64_t dirp3 = v97; // 0x407364
    int64_t v98 = v91; // 0x407364
    int64_t v99 = v90; // 0x407364
    int64_t v100 = v93; // 0x407364
    int64_t v101 = v89; // 0x407364
    int64_t v102 = v92; // 0x407364
    char v103 = v95; // 0x407364
    int64_t v104 = v96; // 0x407364
    int64_t v105 = v96; // 0x407364
    char v106 = v95; // 0x407364
    int64_t v107 = v93; // 0x407364
    int64_t v108 = v90; // 0x407364
    if (v97 == 0) {
        goto lab_0x407856;
    }
    goto lab_0x40736a;
  lab_0x407320:
    // 0x407320
    *(int64_t *)(v32 + 168) = v74;
    v76 = v75;
    goto lab_0x407327;
  lab_0x4079a2:
    // 0x4079a2
    *dirp2 = 0;
    if ((int32_t)v1 != 3) {
        // 0x4077e2
        return 0;
    }
    goto lab_0x407ad9;
  lab_0x407ad9:
    // 0x407ad9
    *(int16_t *)(a1 + 112) = 4;
    *(int32_t *)(a1 + 64) = *__errno_location();
    // 0x4077e2
    return 0;
  lab_0x40727b:
    // 0x40727b
    v4 = v2;
    v12 = v11;
    v10 = 1;
    v9 = v7;
    v6 = (int64_t)*v3;
    goto lab_0x407284;
  lab_0x4079e0:
    // 0x4079e0
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v8;
    v6 = (int64_t)*v16;
    goto lab_0x407284;
  lab_0x407284:;
    int64_t v111 = *(int64_t *)v4; // 0x407284
    char v112 = *(char *)(v111 - 1 + *(int64_t *)(a1 + 56)); // 0x40729a
    v55 = v111 + (int64_t)(v112 == 47);
    int64_t v113 = 0; // 0x4072bb
    if ((v6 & 4) != 0) {
        int64_t v114 = *(int64_t *)(a1 + 32) + v55; // 0x4072c2
        *(char *)v114 = 47;
        v113 = v114 + 1;
    }
    // 0x4072d2
    v54 = v111 + (int64_t)(v112 != 47);
    v56 = a1 + 48;
    v57 = (int64_t *)v56;
    v68 = (int64_t *)(a1 + 88);
    int64_t v115 = *dirp2; // 0x40735d
    if (v115 == 0) {
        // 0x4072d2
        v42 = (char *)v4;
        v43 = v113;
        result2 = 0;
        v44 = 0;
        goto lab_0x407861;
    } else {
        // 0x40736a
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
          lab_0x40736a:
            // 0x40736a
            v47 = v104;
            v49 = v103;
            v33 = v100;
            v88 = v99;
            int64_t v109 = v98;
            v65 = __errno_location();
            *v65 = 0;
            v69 = readdir((struct __dirstream *)dirp3);
            if (v69 == NULL) {
                // break -> 0x407940
                break;
            }
            // 0x40738c
            v51 = v102;
            v94 = v101;
            v81 = (int64_t)v69;
            v46 = v81 + 19;
            str = (char *)v46;
            if ((*v41 & 32) != 0) {
                goto lab_0x40739c;
            } else {
                // 0x407392
                if (*str == 46) {
                    int64_t v110 = v81 + 20; // 0x4075a0
                    v96 = v47;
                    v95 = v49;
                    v92 = v51;
                    v93 = v33;
                    v90 = v88;
                    v91 = v109;
                    v89 = v94;
                    if (*(char *)v110 == 0) {
                        goto lab_0x407353;
                    } else {
                        // 0x4075a6
                        v96 = v47;
                        v95 = v49;
                        v92 = v51;
                        v93 = v33;
                        v90 = v88;
                        v91 = v109;
                        v89 = v94;
                        if (*(int16_t *)v110 != 46) {
                            goto lab_0x40739c;
                        } else {
                            goto lab_0x407353;
                        }
                    }
                } else {
                    goto lab_0x40739c;
                }
            }
        }
        int32_t v116 = *v65; // 0x407940
        if (v116 != 0) {
            // 0x407950
            *(int32_t *)v80 = v116;
            *(int16_t *)(a1 + 112) = (v88 | dirp) == 0 ? 4 : 7;
        }
        int64_t dirp4 = *dirp2; // 0x40796d
        v105 = v47;
        v106 = v49;
        v107 = v33;
        v108 = v88;
        if (dirp4 != 0) {
            // 0x40797a
            closedir((struct __dirstream *)dirp4);
            *dirp2 = 0;
            v105 = v47;
            v106 = v49;
            v107 = v33;
            v108 = v88;
        }
      lab_0x407856:
        // 0x407856
        v36 = v105;
        v38 = v107;
        v40 = v108;
        v42 = v41;
        v43 = v105;
        result2 = v107;
        v44 = v108;
        if (v106 != 0) {
            goto lab_0x40751f;
        } else {
            goto lab_0x407861;
        }
    }
  lab_0x4076e5:;
    int64_t v117 = v13 & 0xffffffff; // 0x40766b
    int64_t v118 = v18 == 3;
    char v119 = 1;
    int64_t v120 = v117; // 0x4076ea
    int16_t * v121; // 0x407230
    int16_t v122; // 0x407230
    int64_t v123; // 0x407230
    int64_t v124; // 0x407230
    int64_t v125; // 0x407230
    int64_t v126; // 0x407230
    int64_t v127; // 0x407230
    if ((*(char *)(a1 + 73) & 2) != 0) {
        int64_t v128 = function_40b8b0(v117, 1030, 3, v5); // 0x407a61
        int64_t v129 = v128 & 0xffffffff; // 0x407a66
        v120 = v129;
        if ((int32_t)v128 >= 0) {
            goto lab_0x4076f0;
        } else {
            int16_t * v130 = (int16_t *)(a1 + 114);
            int64_t dirp5 = *dirp2; // 0x407a75
            int16_t v131 = *v130 | 1;
            v121 = v130;
            v123 = v129;
            v122 = v131;
            v126 = 1030;
            v124 = dirp5;
            if (v119 != 0 == (v118 != 0)) {
                goto lab_0x40771d;
            } else {
                // 0x407a8a
                *v130 = v131;
                closedir((struct __dirstream *)dirp5);
                v127 = 1030;
                v125 = (int64_t)*v16;
                goto lab_0x40775f;
            }
        }
    } else {
        goto lab_0x4076f0;
    }
  lab_0x407861:
    // 0x407861
    if ((*v42 & 4) != 0) {
        int64_t v132 = *v57; // 0x40786d
        *(char *)(v43 + (int64_t)(v44 == 0 | v132 == v54)) = 0;
    }
    // 0x407886
    if (dirp != 0 || v10 == 0) {
        goto lab_0x4078f8;
    } else {
        // 0x407895
        if ((int32_t)v1 == 1 || v44 == 0) {
            // 0x4078d8
            int64_t v133; // 0x407230
            if (*v68 != 0) {
                int64_t v134 = function_406f10(a1, *(int64_t *)(a1 + 8), 0xffffffff, (int32_t)".."); // 0x407aae
                v133 = v134;
            } else {
                // 0x4078e3
                v133 = function_406d90(a1);
            }
            // 0x4078f0
            if ((int32_t)v133 != 0) {
                // 0x407af4
                *(int16_t *)(a1 + 112) = 7;
                int32_t * v135 = (int32_t *)v4; // 0x407b03
                *v135 = *v135 | 0x4000;
                function_406b00(result2);
                // 0x4077e2
                return 0;
            }
            goto lab_0x4078f8;
        } else {
            goto lab_0x4078a1;
        }
    }
  lab_0x40751f:;
    int64_t v136 = *(int64_t *)(a1 + 8); // 0x40751f
    int64_t v137 = *v59; // 0x407523
    if (v136 != 0) {
        int64_t * v138 = (int64_t *)(v136 + 48); // 0x407530
        int64_t v139 = *v138; // 0x407530
        int64_t * v140 = (int64_t *)(v136 + 56);
        if (v139 != v136 + 264) {
            // 0x407540
            *v138 = v139 + v137 - *v140;
        }
        // 0x40754b
        *v140 = v137;
        int64_t v141 = *(int64_t *)(v136 + 16); // 0x40754f
        int64_t v142 = v141; // 0x407556
        while (v141 != 0) {
            // 0x407530
            v138 = (int64_t *)(v142 + 48);
            v139 = *v138;
            v140 = (int64_t *)(v142 + 56);
            if (v139 != v142 + 264) {
                // 0x407540
                *v138 = v139 + v137 - *v140;
            }
            // 0x40754b
            *v140 = v137;
            v141 = *(int64_t *)(v142 + 16);
            v142 = v141;
        }
    }
    // 0x407558
    v42 = v41;
    v43 = v36;
    result2 = v38;
    v44 = v40;
    if (*(int64_t *)(v38 + 88) >= 0) {
        int64_t * v143 = (int64_t *)(v38 + 48); // 0x40756e
        int64_t v144 = *v143; // 0x40756e
        int64_t * v145 = (int64_t *)(v38 + 56);
        if (v144 != v38 + 264) {
            // 0x40757e
            *v143 = v144 + v137 - *v145;
        }
        int64_t v146 = *(int64_t *)(v38 + 16); // 0x407589
        *v145 = v137;
        int64_t v147 = v146; // 0x407594
        if (v146 == 0) {
            // 0x407596
            v147 = *(int64_t *)(v38 + 8);
        }
        // 0x407560
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
                // 0x40757e
                *v143 = v144 + v137 - *v145;
            }
            // 0x407589
            v146 = *(int64_t *)(v148 + 16);
            *v145 = v137;
            v147 = v146;
            if (v146 == 0) {
                // 0x407596
                v147 = *(int64_t *)(v148 + 8);
            }
            // 0x407560
            v42 = v41;
            v43 = v36;
            result2 = v38;
            v44 = v40;
        }
    }
    goto lab_0x407861;
  lab_0x4076f0:;
    int64_t v149 = function_406f10(a1, a1, v120, 0); // 0x4076fa
    v3 = v16;
    v2 = v14;
    v11 = v17;
    v7 = a1;
    int16_t * v150; // 0x407230
    int16_t v151; // 0x407230
    int64_t v152; // 0x407230
    int64_t dirp6; // 0x407230
    int64_t v153; // 0x407230
    if ((int32_t)v149 == 0) {
        goto lab_0x40727b;
    } else {
        int16_t * v154 = (int16_t *)(a1 + 114);
        int64_t v155 = *dirp2; // 0x40770c
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
            goto lab_0x407732;
        } else {
            goto lab_0x40771d;
        }
    }
  lab_0x4078f8:
    // 0x4078f8
    if (v44 == 0) {
        if ((int32_t)v1 != 3) {
            // 0x407908
            function_406b00(result2);
            // 0x4077e2
            return 0;
        }
        int16_t * v157 = (int16_t *)(a1 + 112); // 0x407b68
        switch (*v157) {
            case 4: {
            }
            case 7: {
                // 0x407908
                function_406b00(result2);
                // 0x4077e2
                return 0;
            }
        }
        // 0x407b81
        *v157 = 6;
        // 0x407908
        function_406b00(result2);
        // 0x4077e2
        return 0;
    }
    goto lab_0x4078a1;
  lab_0x4078a1:;
    int64_t * v158 = (int64_t *)(a1 + 64); // 0x4078a1
    int64_t v159 = *v158; // 0x4078a1
    int64_t v160 = v159; // 0x4078ac
    if (v44 >= 0x2711) {
        if (v159 != 0) {
            // 0x4078b7
            uint64_t v161; // 0x407230
            int64_t v162; // 0x407230
            return function_406970(a1, v162, v161);
        }
        // 0x407b1e
        int64_t v163; // 0x407230
        switch (function_406b90(a1, v163)) {
            case 0x1021994: {
            }
            case 0x6969: {
                // 0x407920
                v160 = *v158;
                // break -> 0x407928
                break;
            }
            default: {
                // 0x407b3e
                *v158 = 0x406790;
                int64_t result = function_406970(a1, result2, v44); // 0x407b51
                *v158 = 0;
                // 0x4077e2
                return result;
            }
        }
    }
    // 0x407928
    if (v44 == 1 || v160 == 0) {
        // 0x4077e2
        return result2;
    }
    // 0x4078b7
    return function_406970(a1, result2, v44);
  lab_0x40771d:
    // 0x40771d
    *(int32_t *)v15 = *__errno_location();
    v150 = v121;
    v152 = v123;
    v151 = v122;
    v153 = v126;
    dirp6 = v124;
    goto lab_0x407732;
  lab_0x407732:
    // 0x407732
    *v150 = v151;
    closedir((struct __dirstream *)dirp6);
    uint32_t v164 = *v16; // 0x40773c
    int64_t v165 = v164; // 0x40773c
    *dirp2 = 0;
    v127 = v153;
    v125 = v165;
    if ((v164 & 512) != 0) {
        uint32_t fd2 = (int32_t)v152; // 0x407750
        v127 = v153;
        v125 = v165;
        if (fd2 >= 0) {
            // 0x407754
            close(fd2);
            v127 = v153;
            v125 = (int64_t)*v16;
        }
    }
    goto lab_0x40775f;
  lab_0x40775f:
    // 0x40775f
    *dirp2 = 0;
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v127;
    v6 = v125;
    goto lab_0x407284;
}
// Address range: 0x407bf0 - 0x407f89
int64_t fts_open(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    if ((v1 & 18) == 0 || a2 >= 0x2000 || (v1 & 516) == 516) {
        // 0x407e90
        *__errno_location() = 22;
        // 0x407e7d
        return 0;
    }
    int64_t * mem = calloc(128, 1); // 0x407c38
    int64_t result = (int64_t)mem; // 0x407c38
    if (mem == NULL) {
        // 0x407e7d
        return result;
    }
    // 0x407c49
    *(int64_t *)(result + 64) = a3;
    if ((v1 & 2) != 0) {
        // 0x407ed0
        *(int32_t *)(result + 72) = a2 & -517 | 4;
    } else {
        // 0x407c57
        *(int32_t *)(result + 72) = a2;
    }
    int32_t * v2 = (int32_t *)(result + 44); // 0x407c5e
    *v2 = -100;
    int64_t v3 = a1; // 0x407c74
    uint64_t v4 = 0;
    uint64_t len = (int64_t)strlen((char *)128); // 0x407c78
    int64_t v5 = v4 < len ? len : v4; // 0x407c80
    v3 += 8;
    int64_t str = *(int64_t *)v3; // 0x407c88
    while (str != 0) {
        // 0x407c78
        v4 = v5;
        len = (int64_t)strlen((char *)str);
        v5 = v4 < len ? len : v4;
        v3 += 8;
        str = *(int64_t *)v3;
    }
    uint64_t v6 = v5 + 1; // 0x407c90
    int64_t v7 = result + 32; // 0x407ca9
    char v8 = function_406df0(v7, result + 48, v6 > 0x1000 ? v6 : 0x1000); // 0x407cb2
    if (v8 == 0) {
        // 0x407ebb
        free(mem);
        // 0x407e7d
        return 0;
    }
    int64_t v9; // 0x407bf0
    int64_t v10; // 0x407bf0
    int64_t v11; // 0x407bf0
    char v12; // 0x407bf0
    char * v13; // 0x407bf0
    char * v14; // 0x407cdd
    if (v7 == 0) {
        // 0x407ee0
        v14 = NULL;
        v10 = 0;
        v13 = NULL;
        v9 = 0;
        if (a3 != 0) {
            goto lab_0x407d03;
        } else {
            goto lab_0x407e2c;
        }
    } else {
        int64_t v15 = function_406a70(result, (int64_t)&g10, 0); // 0x407cd5
        if (v15 == 0) {
            goto lab_0x407eb2;
        } else {
            // 0x407ceb
            v14 = (char *)v15;
            *(int64_t *)(v15 + 88) = -1;
            *(int64_t *)(v15 + 104) = -1;
            v10 = result;
            v12 = v8;
            v11 = result;
            if (a3 == 0) {
                goto lab_0x407d10;
            } else {
                goto lab_0x407d03;
            }
        }
    }
  lab_0x407da8:;
    // 0x407da8
    int64_t v16; // 0x407bf0
    int64_t v17; // 0x407d49
    *(int64_t *)(v17 + 16) = v16;
    int64_t v18; // 0x407bf0
    int64_t v19 = v18; // 0x407dac
    int64_t v20 = v17; // 0x407dac
    goto lab_0x407daf;
  lab_0x407daf:;
    int64_t v21 = v20;
    int64_t v22; // 0x407bf0
    int64_t v23 = v22 + 1; // 0x407daf
    int64_t v24 = *(int64_t *)(8 * v23 + a1); // 0x407db3
    int64_t v25 = v19; // 0x407dbb
    int64_t v26 = v23; // 0x407dbb
    int64_t v27 = v21; // 0x407dbb
    int64_t v28 = v24; // 0x407dbb
    if (v24 == 0) {
        // 0x407e10
        v13 = v14;
        v9 = v21;
        if (a3 == 0 || v23 < 2) {
            goto lab_0x407e2c;
        } else {
            // 0x407e1b
            v13 = v14;
            v9 = function_406970(result, v21, v23);
            goto lab_0x407e2c;
        }
    }
    goto lab_0x407dbd;
  lab_0x407f40:
    // 0x407f40
    *(int64_t *)(v18 + 16) = v17;
    v19 = v17;
    v20 = v16;
    goto lab_0x407daf;
  lab_0x407d03:
    // 0x407d03
    v12 = (char)(*(int32_t *)(result + 72) / 1024) % 2;
    v11 = v10;
    goto lab_0x407d10;
  lab_0x407e2c:;
    int64_t v35 = function_406a70(result, (int64_t)&g10, 0); // 0x407e36
    *mem = v35;
    char * v33 = v13; // 0x407e41
    int64_t v34 = v9; // 0x407e41
    if (v35 != 0) {
        // 0x407e43
        *(int64_t *)(v35 + 16) = v9;
        int32_t * v36 = (int32_t *)(result + 72); // 0x407e4c
        *(int16_t *)(v35 + 112) = 9;
        v33 = v13;
        v34 = v9;
        if ((char)function_406e60(*v36, result + 88) != 0) {
            uint32_t v37 = *v36; // 0x407e60
            if ((v37 & 516) == 0) {
                int32_t v38 = function_406ec0(*v2, (int64_t)v37, (int64_t)"."); // 0x407f75
                *(int32_t *)(result + 40) = v38;
                if (v38 < 0) {
                    int32_t v39 = *v36; // 0x407f80
                    *v36 = v39 | 4;
                }
            }
            // 0x407e6f
            function_40ad80(result + 96, 0xffffffff);
            // 0x407e7d
            return result;
        }
    }
    goto lab_0x407ea0;
  lab_0x407eb2:
    // 0x407eb2
    free((int64_t *)*(int64_t *)v7);
    // 0x407ebb
    free(mem);
    // 0x407e7d
    return 0;
  lab_0x407d10:
    // 0x407d10
    v13 = v14;
    v9 = 0;
    if (v11 == 0) {
        goto lab_0x407e2c;
    } else {
        // 0x407dbd
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v11;
        while (true) {
          lab_0x407dbd:;
            int64_t str2 = v28;
            v16 = v27;
            v22 = v26;
            v18 = v25;
            int32_t len2 = strlen((char *)str2); // 0x407dc0
            int64_t v29 = len2; // 0x407dc0
            int64_t v30 = v29; // 0x407dc9
            if ((v1 & 0x1000) == 0 && len2 >= 3) {
                // 0x407dda
                v30 = v29;
                if (*(char *)(str2 - 1 + v29) == 47) {
                    int64_t v31 = v29;
                    v30 = v31;
                    while (*(char *)(str2 - 2 + v31) == 47) {
                        int64_t v32 = v31 - 1; // 0x407dfc
                        v30 = v32;
                        if (v31 == 2) {
                            // break -> 0x407d40
                            break;
                        }
                        v31 = v32;
                        v30 = v31;
                    }
                }
            }
            // 0x407d40
            v17 = function_406a70(result, str2, v30);
            v33 = v14;
            v34 = v16;
            if (v17 == 0) {
                // break -> 0x407ea0
                break;
            }
            // 0x407d5a
            *(int64_t *)(v17 + 88) = 0;
            *(int64_t *)(v17 + 8) = (int64_t)v14;
            *(int64_t *)(v17 + 48) = v17 + 264;
            if (v12 == 0 || v16 == 0) {
                // 0x407f00
                *(int16_t *)(v17 + 112) = (int16_t)function_4067c0(result, v17, 0);
                if (a3 != 0) {
                    goto lab_0x407da8;
                } else {
                    // 0x407f1b
                    *(int64_t *)(v17 + 16) = 0;
                    v19 = v17;
                    v20 = v17;
                    if (v16 != 0) {
                        goto lab_0x407f40;
                    } else {
                        goto lab_0x407daf;
                    }
                }
            } else {
                // 0x407d8a
                *(int64_t *)(v17 + 168) = 2;
                *(int16_t *)(v17 + 112) = 11;
                if (a3 == 0) {
                    // 0x407f38
                    *(int64_t *)(v17 + 16) = 0;
                    goto lab_0x407f40;
                } else {
                    goto lab_0x407da8;
                }
            }
        }
        goto lab_0x407ea0;
    }
  lab_0x407ea0:
    // 0x407ea0
    function_406b00(v34);
    free((int64_t *)v33);
    goto lab_0x407eb2;
}
// Address range: 0x407f90 - 0x408109
int64_t fts_close(int64_t a1) {
    if (a1 != 0) {
        int64_t v1 = a1; // 0x407fa4
        int64_t v2 = a1; // 0x407fa4
        if (*(int64_t *)(a1 + 88) >= 0) {
            while (true) {
                int64_t v3 = v1;
                int64_t v4 = *(int64_t *)(v3 + 16); // 0x407fbf
                int64_t v5; // 0x407f90
                if (v4 != 0) {
                    // 0x407fb0
                    free((int64_t *)v3);
                    v5 = v4;
                    v2 = v4;
                    if (*(int64_t *)(v4 + 88) < 0) {
                        // break -> 0x407fdb
                        break;
                    }
                } else {
                    int64_t v6 = *(int64_t *)(v3 + 8); // 0x407fc8
                    free((int64_t *)v3);
                    v5 = v6;
                    v2 = v6;
                    if (*(int64_t *)(v6 + 88) < 0) {
                        // break -> 0x407fdb
                        break;
                    }
                }
                // 0x407fbf
                v1 = v5;
            }
        }
        // 0x407fdb
        free((int64_t *)v2);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x407fe3
    if (v7 != 0) {
        // 0x407fec
        function_406b00(v7);
    }
    // 0x407ff1
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)*(int64_t *)(a1 + 32));
    int32_t * v8 = (int32_t *)(a1 + 72); // 0x408003
    int32_t v9 = *v8; // 0x408003
    int32_t * v10; // 0x407f90
    int32_t v11; // 0x407f90
    if ((v9 & 512) == 0) {
        // 0x408060
        v11 = 0;
        if ((v9 & 4) != 0) {
            goto lab_0x408014;
        } else {
            int32_t * fd = (int32_t *)(a1 + 40); // 0x408064
            if (fchdir(*fd) != 0) {
                int32_t * v12 = __errno_location(); // 0x4080c0
                int32_t v13 = *v12; // 0x4080cb
                v11 = v13;
                v10 = v12;
                if (close(*fd) == 0 || v13 != 0) {
                    goto lab_0x408014;
                } else {
                    goto lab_0x4080e2;
                }
            } else {
                // 0x408070
                v11 = 0;
                if (close(*fd) == 0) {
                    goto lab_0x408014;
                } else {
                    // 0x40807c
                    v10 = __errno_location();
                    goto lab_0x4080e2;
                }
            }
        }
    } else {
        int32_t fd2 = *(int32_t *)(a1 + 44); // 0x40800b
        v11 = 0;
        if (fd2 >= 0) {
            // 0x408090
            v11 = 0;
            if (close(fd2) != 0) {
                // 0x40809d
                v11 = *__errno_location();
            }
        }
        goto lab_0x408014;
    }
  lab_0x408014:
    // 0x408014
    function_406b50(a1 + 96);
    int64_t v14 = *(int64_t *)(a1 + 80); // 0x40801d
    if (v14 != 0) {
        // 0x408026
        function_40a600(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 88); // 0x40802b
    if ((*v8 & 258) == 0) {
        // 0x4080b0
        free((int64_t *)v15);
    } else {
        if (v15 != 0) {
            // 0x40803d
            function_40a600(v15);
        }
    }
    // 0x408042
    free((int64_t *)a1);
    int64_t result = v11; // 0x40804c
    if (v11 != 0) {
        // 0x4080f8
        *__errno_location() = v11;
        result = 0xffffffff;
    }
    // 0x408052
    return result;
  lab_0x4080e2:
    // 0x4080e2
    v11 = *v10;
    goto lab_0x408014;
}
// Address range: 0x408110 - 0x408869
int64_t fts_read(int64_t result) {
    // 0x408110
    if (result == 0) {
        // 0x40823a
        return 0;
    }
    int32_t * v1 = (int32_t *)(result + 72); // 0x408124
    uint32_t v2 = *v1; // 0x408124
    if ((v2 & 0x4000) != 0) {
        // 0x40823a
        return 0;
    }
    int16_t * v3 = (int16_t *)(result + 116); // 0x408130
    int16_t v4 = *v3; // 0x408130
    *v3 = 3;
    if (v4 == 1) {
        // 0x408500
        *(int16_t *)(result + 112) = (int16_t)function_4067c0(result, result, 0);
        // 0x40823a
        return result;
    }
    int16_t * v5 = (int16_t *)(result + 112); // 0x40814a
    int16_t v6 = *v5; // 0x40814a
    int64_t v7; // 0x408110
    int64_t v8; // 0x408110
    int64_t v9; // 0x408110
    int64_t v10; // 0x408110
    int64_t v11; // 0x408110
    int64_t v12; // 0x408110
    int64_t v13; // 0x408110
    if (v4 == 2) {
        if ((v6 || 1) == 13) {
            int16_t v14 = function_4067c0(result, result, 1); // 0x4084aa
            *v5 = v14;
            if (v14 == 1) {
                uint32_t v15 = *v1; // 0x408790
                if ((v15 & 4) == 0) {
                    int64_t v16 = v15; // 0x408790
                    int32_t v17 = *(int32_t *)(result + 44); // 0x408803
                    int32_t v18 = function_406ec0(v17, v16, (int64_t)"."); // 0x408812
                    *(int32_t *)(result + 68) = v18;
                    if (v18 < 0) {
                        int32_t v19 = *__errno_location(); // 0x40883e
                        *v5 = 7;
                        *(int32_t *)(result + 64) = v19;
                        *(int64_t *)result = result;
                        // 0x40823a
                        return result;
                    }
                    int16_t * v20 = (int16_t *)(result + 114); // 0x408819
                    *v20 = *v20 | 2;
                    v7 = result;
                    v10 = (int64_t)".";
                    v12 = v16;
                    goto lab_0x408447;
                } else {
                    // 0x40879b
                    *(int64_t *)result = result;
                    v8 = result;
                    goto lab_0x40845e;
                }
            } else {
                // 0x4084b8
                *(int64_t *)result = result;
                v11 = 1;
                v9 = result;
                v13 = result;
                if (v14 != 11) {
                    // 0x40823a
                    return result;
                }
                goto lab_0x4084d0;
            }
        } else {
            if (v6 != 1) {
                goto lab_0x408190;
            } else {
                goto lab_0x408267;
            }
        }
    } else {
        if (v6 != 1) {
            goto lab_0x408190;
        } else {
            if (v4 != 4) {
                goto lab_0x408267;
            } else {
                goto lab_0x408302;
            }
        }
    }
  lab_0x408190:;
    int64_t * v21 = (int64_t *)result;
    int64_t v22 = result;
    int64_t v23 = *(int64_t *)(v22 + 16); // 0x408190
    int64_t result2; // 0x408110
    int64_t v24; // 0x408110
    int64_t v25; // 0x408360
    while (v23 != 0) {
        // 0x408168
        *v21 = v23;
        free((int64_t *)v22);
        if (*(int64_t *)(v23 + 88) == 0) {
            // 0x408350
            if ((int32_t)function_406d90(result) != 0) {
                // 0x4086ef
                *v1 = *v1 | 0x4000;
                result2 = 0;
                return result2;
            } else {
                // 0x408360
                v25 = result + 88;
                int64_t v26 = *(int64_t *)v25; // 0x408360
                if ((*v1 & 258) == 0) {
                    // 0x4086fd
                    free((int64_t *)v26);
                    goto lab_0x40837e;
                } else {
                    if (v26 == 0) {
                        goto lab_0x40837e;
                    } else {
                        // 0x408379
                        function_40a600(v26);
                        goto lab_0x40837e;
                    }
                }
            }
        }
        int16_t * v27 = (int16_t *)(v23 + 116);
        int16_t v28 = *v27; // 0x40817f
        if (v28 != 4) {
            // 0x408400
            v24 = v23;
            if (v28 == 2) {
                int16_t v29 = function_4067c0(result, v23, 1); // 0x408724
                int16_t * v30 = (int16_t *)(v23 + 112); // 0x408724
                *v30 = v29;
                if (v29 == 1) {
                    uint32_t v31 = *v1; // 0x4087a7
                    if ((v31 & 4) != 0) {
                        // 0x40872e
                        *v27 = 3;
                        v24 = v23;
                        goto lab_0x40840a;
                    } else {
                        int32_t v32 = *(int32_t *)(result + 44); // 0x4087b6
                        int32_t v33 = function_406ec0(v32, (int64_t)v31, (int64_t)"."); // 0x4087c5
                        *(int32_t *)(v23 + 68) = v33;
                        if (v33 < 0) {
                            int32_t v34 = *__errno_location(); // 0x40885b
                            *v30 = 7;
                            *(int32_t *)(v23 + 64) = v34;
                            // 0x40872e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40840a;
                        } else {
                            int16_t * v35 = (int16_t *)(v23 + 114); // 0x4087d0
                            *v35 = *v35 | 2;
                            // 0x40872e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40840a;
                        }
                    }
                } else {
                    // 0x40872e
                    *v27 = 3;
                    v24 = v23;
                    goto lab_0x40840a;
                }
            } else {
                goto lab_0x40840a;
            }
        }
        v22 = v23;
        v23 = *(int64_t *)(v22 + 16);
    }
    int64_t * v36 = (int64_t *)(v22 + 8); // 0x408199
    int64_t v37 = *v36; // 0x408199
    int64_t result6 = v37; // 0x4081a2
    if (*(int64_t *)(v37 + 24) != 0) {
        // 0x4086b0
        *v21 = v37;
        *(char *)(*(int64_t *)(result + 32) + *(int64_t *)(v37 + 72)) = 0;
        int64_t v38 = function_407230(result, 3); // 0x4086c9
        if (v38 != 0) {
            // 0x40875f
            free((int64_t *)v22);
            v24 = v38;
            goto lab_0x40840a;
        } else {
            // 0x4086da
            if ((*(char *)(result + 73) & 64) != 0) {
                // 0x40823a
                return 0;
            }
            // 0x4086e6
            result6 = *v36;
            goto lab_0x4081a8;
        }
    } else {
        goto lab_0x4081a8;
    }
  lab_0x408267:;
    int64_t v39 = v2; // 0x408124
    if ((v39 & 64) == 0) {
        goto lab_0x40827b;
    } else {
        // 0x40826c
        if (*(int64_t *)(result + 120) != *(int64_t *)(result + 24)) {
            goto lab_0x408302;
        } else {
            goto lab_0x40827b;
        }
    }
  lab_0x4081a8:
    // 0x4081a8
    *v21 = result6;
    free((int64_t *)v22);
    int64_t * v40 = (int64_t *)(result6 + 88); // 0x4081b4
    if (*v40 == -1) {
        // 0x4085cf
        free((int64_t *)result6);
        *__errno_location() = 0;
        *v21 = 0;
        // 0x40823a
        return 0;
    }
    // 0x4081bf
    *(char *)(*(int64_t *)(result6 + 72) + *(int64_t *)(result + 32)) = 0;
    if (*v40 == 0) {
        // 0x4085ff
        if ((int32_t)function_406d90(result) == 0) {
            goto lab_0x4081f6;
        } else {
            goto lab_0x40860f;
        }
    } else {
        uint16_t v41 = *(int16_t *)(result6 + 114); // 0x4081e2
        if ((v41 & 2) != 0) {
            int32_t v42 = *v1; // 0x408585
            int32_t * v43 = (int32_t *)(result6 + 68); // 0x40858a
            uint32_t fd = *v43; // 0x40858a
            int32_t fd2 = fd; // 0x40858f
            if ((v42 & 4) == 0) {
                if ((v42 & 512) == 0) {
                    // 0x40876c
                    if (fchdir(fd) != 0) {
                        // 0x408775
                        *(int32_t *)(result6 + 64) = *__errno_location();
                        *v1 = *v1 | 0x4000;
                    }
                    // 0x408788
                    fd2 = *v43;
                } else {
                    // 0x40859a
                    function_406d20(result, (int64_t)fd, 1);
                    fd2 = *v43;
                }
            }
            // 0x4085ac
            close(fd2);
            goto lab_0x4081f6;
        } else {
            if (v41 % 2 == 0) {
                int64_t v44 = *(int64_t *)(result6 + 8); // 0x40873c
                if ((int32_t)function_406f10(result, v44, 0xffffffff, (int32_t)"..") == 0) {
                    goto lab_0x4081f6;
                } else {
                    goto lab_0x40860f;
                }
            } else {
                goto lab_0x4081f6;
            }
        }
    }
  lab_0x408302:
    // 0x408302
    if ((*(char *)(result + 114) & 2) != 0) {
        // 0x408707
        close(*(int32_t *)(result + 68));
    }
    int64_t * v45 = (int64_t *)(result + 8); // 0x40830c
    int64_t v46 = *v45; // 0x40830c
    if (v46 != 0) {
        // 0x408316
        function_406b00(v46);
        *v45 = 0;
    }
    // 0x408324
    *v5 = 6;
    function_407190(*v1, result + 88, result);
    // 0x40823a
    return result;
  lab_0x4084d0:;
    int64_t result5 = v9;
    int64_t result3 = result5; // 0x4084db
    if (*(int64_t *)(result5 + 168) != 2) {
        // 0x40823a
        return result3;
    }
    int64_t v47 = *(int64_t *)(result5 + 8); // 0x408637
    int64_t * v48 = (int64_t *)(v47 + 104); // 0x40863b
    int64_t v49; // 0x408110
    int64_t v50; // 0x408110
    if (*v48 != 0) {
        goto lab_0x408653;
    } else {
        // 0x408642
        if ((*v1 & 24) == 24) {
            // 0x4087e9
            if ((int32_t)function_406cb0(v47, v13, v11) != 2) {
                goto lab_0x408653;
            } else {
                // 0x4087fa
                v49 = (int64_t)*(int16_t *)(result5 + 112);
                v50 = result5;
                goto lab_0x408451;
            }
        } else {
            goto lab_0x408653;
        }
    }
  lab_0x40827b:;
    int64_t * v51 = (int64_t *)(result + 8); // 0x40827b
    int64_t v52 = *v51; // 0x40827b
    int64_t v53; // 0x408110
    if (v52 == 0) {
        goto lab_0x408529;
    } else {
        if ((v39 & 0x2000) != 0) {
            // 0x408513
            *v1 = v2 & -0x2001;
            function_406b00(v52);
            *v51 = 0;
            goto lab_0x408529;
        } else {
            int64_t v54 = *(int64_t *)(result + 48); // 0x408292
            if ((int32_t)function_406f10(result, result, 0xffffffff, (int32_t)v54) == 0) {
                // 0x4085b6
                v53 = *v51;
            } else {
                int32_t * v55 = __errno_location(); // 0x4082ae
                int64_t v56 = *v51; // 0x4082b3
                int16_t * v57 = (int16_t *)(result + 114); // 0x4082ba
                *v57 = *v57 | 1;
                *(int32_t *)(result + 64) = *v55;
                v53 = 0;
                if (v56 != 0) {
                    *(int64_t *)(v56 + 48) = *(int64_t *)(*(int64_t *)(v56 + 8) + 48);
                    int64_t v58 = *(int64_t *)(v56 + 16); // 0x4082dc
                    int64_t v59 = v58; // 0x4082e3
                    v53 = v56;
                    while (v58 != 0) {
                        int64_t v60 = *(int64_t *)(*(int64_t *)(v59 + 8) + 48); // 0x4082d4
                        *(int64_t *)(v59 + 48) = v60;
                        v58 = *(int64_t *)(v59 + 16);
                        v59 = v58;
                        v53 = v56;
                    }
                }
            }
            goto lab_0x4082e5;
        }
    }
  lab_0x408447:;
    uint16_t v61 = *(int16_t *)(v7 + 112);
    *(int64_t *)result = v7;
    v49 = v61;
    v50 = v7;
    v11 = v10;
    v9 = v7;
    v13 = v12;
    if (v61 == 11) {
        goto lab_0x4084d0;
    } else {
        goto lab_0x408451;
    }
  lab_0x40845e:;
    int64_t v62 = v8; // 0x408463
    if (*(int64_t *)(v8 + 88) != 0) {
        goto lab_0x40846e;
    } else {
        goto lab_0x408465;
    }
  lab_0x408653:;
    int64_t v63 = function_4067c0(result, result5, 0); // 0x40865b
    int16_t v64 = v63; // 0x408666
    *(int16_t *)(result5 + 112) = v64;
    v49 = v63;
    v50 = result5;
    if ((*(int32_t *)(result5 + 144) & 0xf000) != 0x4000) {
        goto lab_0x408451;
    } else {
        // 0x40867c
        if (*(int64_t *)(result5 + 88) == 0) {
            // 0x4087da
            result3 = result5;
            if (v64 != 1) {
                int64_t v65 = result3;
                result2 = v65;
                int64_t result4 = result2;
                return result4;
            }
            goto lab_0x408465;
        } else {
            uint64_t v66 = *v48 - 1; // 0x40868b
            if (v66 < 0xfffffffffffffffe) {
                // 0x40882a
                *v48 = v66;
            }
            // 0x408699
            v62 = result5;
            if (v64 != 1) {
                // 0x40823a
                return result5;
            }
            goto lab_0x40846e;
        }
    }
  lab_0x408529:;
    int64_t v67 = function_407230(result, 3); // 0x408531
    *v51 = v67;
    v53 = v67;
    if (v67 == 0) {
        int32_t v68 = *v1; // 0x408547
        if ((v68 & 0x4000) != 0) {
            // 0x40823a
            return 0;
        }
        // 0x408558
        if (*(int32_t *)(result + 64) == 0) {
            // 0x408573
            function_407190(v68, result + 88, result);
            result2 = result;
          lab_0x40823a:
            // 0x40823a
            return result2;
        }
        // 0x408561
        if (*v5 != 4) {
            // 0x408568
            *v5 = 7;
        }
        // 0x408573
        function_407190(v68, result + 88, result);
        // 0x40823a
        return result;
    }
    goto lab_0x4082e5;
  lab_0x40840a:;
    int64_t v69 = *(int64_t *)(v24 + 8); // 0x40840a
    int64_t v70 = *(int64_t *)(v69 + 72); // 0x40840e
    char v71 = *(char *)(v70 - 1 + *(int64_t *)(v69 + 56)); // 0x40841a
    int64_t v72 = *(int64_t *)(result + 32) + v70 + (int64_t)(v71 == 47); // 0x408423
    *(char *)v72 = 47;
    int64_t v73 = *(int64_t *)(v24 + 96) + 1; // 0x408433
    int64_t v74 = v24 + 264; // 0x408437
    memmove((int64_t *)(v72 + 1), (int64_t *)v74, (int32_t)v73);
    v7 = v24;
    v10 = v73;
    v12 = v74;
    goto lab_0x408447;
  lab_0x4081f6:;
    int64_t v75 = (int64_t)*v1; // 0x4081fb
    int64_t v76 = v75; // 0x408200
    int32_t * v77; // 0x408110
    int64_t v78; // 0x408110
    if (*(int16_t *)(result6 + 112) == 2) {
        goto lab_0x408228;
    } else {
        // 0x4081f6
        v77 = (int32_t *)(result6 + 64);
        v78 = v75;
        goto lab_0x408202;
    }
  lab_0x40860f:;
    int32_t v79 = *__errno_location(); // 0x408614
    int32_t * v80 = (int32_t *)(result6 + 64);
    *v80 = v79;
    uint32_t v81 = *v1 | 0x4000; // 0x408619
    *v1 = v81;
    if (*(int16_t *)(result6 + 112) == 2) {
        // 0x40823a
        return 0;
    }
    // 0x40862d
    v77 = v80;
    v78 = v81;
    goto lab_0x408202;
  lab_0x408451:
    // 0x408451
    result2 = v50;
    v8 = v50;
    if ((int16_t)v49 != 1) {
        // 0x40823a
        return result2;
    }
    goto lab_0x40845e;
  lab_0x40846e:;
    int64_t v93 = function_4070e0(*v1, result + 88, v62); // 0x40847e
    result2 = v62;
    if ((char)v93 == 0) {
        // 0x40848b
        *__errno_location() = 12;
        result2 = 0;
    }
    // 0x40823a
    return result2;
  lab_0x408465:
    // 0x408465
    *(int64_t *)(result + 24) = *(int64_t *)(v8 + 120);
    v62 = v8;
    goto lab_0x40846e;
  lab_0x4082e5:
    // 0x4082e5
    *v51 = 0;
    v24 = v53;
    goto lab_0x40840a;
  lab_0x408228:
    // 0x408228
    if ((v76 & 0x4000) != 0) {
        // 0x40823a
        return 0;
    }
    // 0x40823a
    return result6;
  lab_0x408202:
    // 0x408202
    if (*v77 != 0) {
        // 0x4085f1
        int64_t v82; // 0x408110
        *(int16_t *)(v82 + 112) = 7;
        int64_t v83; // 0x408110
        v76 = v83;
    } else {
        // 0x40820d
        *(int16_t *)(result6 + 112) = 6;
        function_407190((int32_t)v78, result + 88, result6);
        v76 = (int64_t)*v1;
    }
    goto lab_0x408228;
  lab_0x40837e:;
    int64_t * v84 = (int64_t *)(v23 + 96); // 0x40837e
    int64_t v85 = *v84; // 0x40837e
    int64_t str = v23 + 264; // 0x408382
    int64_t * v86 = (int64_t *)(result + 32); // 0x408389
    *(int64_t *)(v23 + 72) = v85;
    int64_t v87 = v85 + 1; // 0x408395
    int64_t * v88 = (int64_t *)str; // 0x408399
    memmove((int64_t *)*v86, v88, (int32_t)v87);
    char * found_char_pos = strrchr((char *)str, 47); // 0x4083a6
    int64_t v89 = v87; // 0x4083ae
    int64_t v90; // 0x4083a6
    if (found_char_pos == NULL) {
        goto lab_0x4083db;
    } else {
        // 0x4083b0
        v90 = (int64_t)found_char_pos;
        if (str == v90) {
            // 0x4085c0
            v89 = v87;
            if (*(char *)(v23 + 265) == 0) {
                goto lab_0x4083db;
            } else {
                goto lab_0x4083b9;
            }
        } else {
            goto lab_0x4083b9;
        }
    }
  lab_0x4083db:;
    int64_t v91 = *v86; // 0x4083db
    *(int64_t *)(v23 + 56) = v91;
    *(int64_t *)(v23 + 48) = v91;
    function_406e60(*v1, v25);
    v7 = v23;
    v10 = v89;
    v12 = v25;
    goto lab_0x408447;
  lab_0x4083b9:;
    int64_t str2 = v90 + 1; // 0x4083b9
    int64_t len = strlen((char *)str2); // 0x4083c0
    int64_t v92 = len + 1; // 0x4083ce
    memmove(v88, (int64_t *)str2, (int32_t)v92);
    *v84 = len;
    v89 = v92;
    goto lab_0x4083db;
}
// Address range: 0x408870 - 0x408899
int64_t fts_set(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 5) {
        // 0x408875
        *(int16_t *)(a2 + 116) = (int16_t)a3;
        return 0;
    }
    // 0x408880
    *__errno_location() = 22;
    return 1;
}
// Address range: 0x4088a0 - 0x408a0d
int64_t fts_children(int64_t a1, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x4088ad
    if ((a2 & 0xffffdfff) != 0) {
        // 0x408998
        *v1 = 22;
        return 0;
    }
    // 0x4088c1
    *v1 = 0;
    char * v2 = (char *)(a1 + 73); // 0x4088ca
    if ((*v2 & 64) != 0) {
        // 0x40893f
        return 0;
    }
    int16_t v3 = *(int16_t *)(a1 + 112); // 0x4088d4
    if (v3 == 9) {
        // 0x4089c0
        return *(int64_t *)(a1 + 16);
    }
    // 0x4088e4
    if (v3 != 1) {
        // 0x40893f
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4088ec
    int64_t v5 = *v4; // 0x4088ec
    if (v5 != 0) {
        // 0x4088f5
        function_406b00(v5);
    }
    int64_t v6 = 1; // 0x408906
    if ((int32_t)a2 == 0x2000) {
        int32_t * v7 = (int32_t *)(a1 + 72); // 0x408908
        *v7 = *v7 | 0x2000;
        v6 = 2;
    }
    // 0x408915
    int64_t result; // 0x408936
    if (*(int64_t *)(a1 + 88) != 0 || *(char *)*(int64_t *)(a1 + 48) == 47) {
        // 0x408930
        result = function_407230(a1, v6);
        *v4 = result;
        // 0x40893f
        return result;
    }
    uint32_t v8 = *(int32_t *)(a1 + 72); // 0x408927
    if ((v8 & 4) != 0) {
        // 0x408930
        result = function_407230(a1, v6);
        *v4 = result;
        // 0x40893f
        return result;
    }
    int64_t v9 = function_406ec0(*(int32_t *)(a1 + 44), (int64_t)v8, (int64_t)"."); // 0x408958
    int32_t fd = v9; // 0x40895f
    if (fd < 0) {
        // 0x4089e8
        *v4 = 0;
        // 0x40893f
        return 0;
    }
    // 0x408967
    *v4 = function_407230(a1, v6);
    if ((*v2 & 2) != 0) {
        // 0x4089d0
        function_406d20(a1, v9 & 0xffffffff, 1);
        // 0x40893f
        return *v4;
    }
    // 0x40897c
    if (fchdir(fd) == 0) {
        // 0x408987
        close(fd);
        // 0x40893f
        return *v4;
    }
    // 0x4089f7
    close(fd);
    // 0x40893f
    return 0;
}
// Address range: 0x408a10 - 0x408aef
int64_t function_408a10(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x408a1c
    uint32_t v2 = *v1; // 0x408a1c
    int64_t v3 = a2 & 0xffffffff; // 0x408a21
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408a24
    uint64_t v5 = (int64_t)*v4; // 0x408a24
    int64_t v6; // 0x408a92
    if (v3 <= v5) {
      lab_0x408a8c_2:
        // 0x408a8c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x408a12
    int64_t v8 = v2; // 0x408a10
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x408a8c
        goto lab_0x408a8c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408a48
    int64_t v17; // 0x408a56
    int64_t * v18; // 0x408a70
    int64_t * v19; // 0x408a73
    int64_t v20; // 0x408a7e
    int64_t v21; // 0x408a56
    while ((v16 & 0xffffffff) > v10) {
        // 0x408a53
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x408a70
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x408a87
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x408a8c
            goto lab_0x408a8c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x408a8c
            goto lab_0x408a8c_2;
        }
        // 0x408a42
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x408acb
    int64_t * v23 = (int64_t *)v22; // 0x408ad0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408ad3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408ad0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408ae7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x408a3d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x408a8c
            goto lab_0x408a8c_2;
        }
        // 0x408a42
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408a53
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x408a70
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x408a87
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x408a8c
                goto lab_0x408a8c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x408a8c
                goto lab_0x408a8c_2;
            }
            // 0x408a42
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x408ab0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408ad0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408ae7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x408a8c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408af0 - 0x40910c
int64_t function_408af0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x408b0f
    int64_t v2 = *v1; // 0x408b0f
    char * str2 = (char *)v2; // 0x408b1c
    char c = *str2; // 0x408b1c
    int64_t v3 = v2; // 0x408b48
    int64_t v4 = 0; // 0x408af0
    int32_t v5; // 0x408af0
    int64_t v6; // 0x408af0
    int64_t v7; // 0x408af0
    int64_t v8; // 0x408af0
    int64_t v9; // 0x408af0
    int64_t v10; // 0x408af0
    int64_t v11; // 0x408af0
    int64_t v12; // 0x408af0
    int64_t v13; // 0x408af0
    int64_t str3; // 0x408af0
    int64_t v14; // 0x408af0
    int64_t v15; // 0x408af0
    int64_t v16; // 0x408af0
    int64_t v17; // 0x408af0
    int32_t v18; // 0x408af0
    int32_t v19; // 0x408af0
    int32_t v20; // 0x408af0
    int32_t v21; // 0x408af0
    int32_t v22; // 0x408af0
    int32_t v23; // 0x408af0
    int32_t v24; // 0x408af0
    int32_t v25; // 0x408af0
    int32_t v26; // 0x408af0
    int32_t v27; // 0x408af0
    int32_t v28; // 0x408af0
    int32_t v29; // 0x408af0
    int64_t nmemb; // 0x408af0
    int64_t v30; // 0x408af0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x408b4c
            while (v31 != 0 == (v31 != 61)) {
                // 0x408b48
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408b58
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x408b5e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408b28
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x408b8c
                int64_t v34; // 0x408af0
                int64_t v35; // 0x408af0
                if (strncmp(str, str2, n) == 0) {
                    // 0x408b95
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408d10;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408ba6
                int64_t v37 = *(int64_t *)v36; // 0x408baa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x408b80
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408b95
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408d10;
                        }
                    }
                    // 0x408ba6
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
                  lab_0x408bf6:
                    // 0x408bf6
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
                        goto lab_0x408c50;
                    } else {
                        if (v11 == 0) {
                            // 0x408dc0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408c50;
                        } else {
                            if (v39 == 0) {
                                // 0x408d70
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x408c1a;
                                } else {
                                    // 0x408d7c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x408c1a;
                                    } else {
                                        // 0x408d8a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x408c1a;
                                        } else {
                                            goto lab_0x408c50;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x408c1a;
                            }
                        }
                    }
                }
              lab_0x408c61:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408e36
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408fe2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x409002
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40904f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x409069
                            int64_t v45; // 0x40906b
                            if (*(char *)v42 != 0) {
                                // 0x40906b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x409063
                            while (v17 + nmemb != v42) {
                                // 0x409065
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40906b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x409058
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x409090
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x408e44
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x408f9f
                        free((int64_t *)v17);
                    }
                    // 0x408e99
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408eb0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x408d5e
                    return 63;
                }
                // 0x408c80
                v5 = v39;
                if (v13 != 0) {
                    // 0x408d04
                    v35 = v13;
                    v34 = v25;
                  lab_0x408d10:;
                    int32_t * v49 = (int32_t *)a7; // 0x408d20
                    uint32_t v50 = *v49; // 0x408d20
                    int64_t v51 = v50; // 0x408d20
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x408d2a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408d33
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x408f5f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x408f0a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x408d5e
                            return 63;
                        }
                        // 0x408da8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4090bf
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x408fbd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408fd0
                                // 0x408d5e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x408ece
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408ee2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x408d4b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x408d4e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408d52
                    int64_t result = v59; // 0x408d58
                    if (v58 != 0) {
                        // 0x408d5a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x408d5e
                    return result;
                }
            } else {
                // 0x408b5e
                v5 = v32;
            }
            // break -> 0x408c85
            break;
        }
    }
    // 0x408c85
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x408c9d
        if (*(char *)(v60 + 1) != 45) {
            // 0x408ca7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x408d5e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408de9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408cd6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408ce6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408c50:
    // 0x408c50
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408c50
    int64_t v63 = *(int64_t *)v62; // 0x408c54
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408c61
        goto lab_0x408c61;
    }
    goto lab_0x408bf6;
  lab_0x408c1a:
    // 0x408c1a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408af0
    int32_t v65; // 0x408af0
    int32_t v66; // 0x408af0
    if (v27 != 0) {
        goto lab_0x408c50;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408dd0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408c50;
            } else {
                goto lab_0x408c41;
            }
        } else {
            // 0x408c35
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x408f2c
                int64_t v67 = (int64_t)mem; // 0x408f2c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408c50;
                } else {
                    // 0x408f3f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408c41;
                }
            } else {
                goto lab_0x408c41;
            }
        }
    }
  lab_0x408c41:
    // 0x408c41
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408c50;
}
// Address range: 0x409110 - 0x4096d6
int64_t function_409110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x409131
    if (v3 < 1) {
        // 0x4092ee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40912d
    int32_t v5 = *(int32_t *)a7; // 0x409139
    uint64_t v6 = a1 & 0xffffffff; // 0x40913b
    int64_t v7 = v2; // 0x409140
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x409143
    *v8 = 0;
    int64_t v9; // 0x409110
    int64_t v10; // 0x409110
    int64_t v11; // 0x409110
    int64_t v12; // 0x409110
    int64_t str; // 0x409110
    int64_t v13; // 0x409110
    int64_t v14; // 0x409110
    int64_t v15; // 0x409110
    int64_t v16; // 0x409110
    int64_t v17; // 0x409110
    int32_t v18; // 0x409110
    char v19; // 0x409110
    if (v5 == 0) {
        // 0x409328
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40915a;
    } else {
        // 0x409153
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4091a0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4091a3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x409268;
            } else {
                int64_t v22 = v7 + 1; // 0x4091b6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4091c6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40927c;
                } else {
                    goto lab_0x4091d8;
                }
            }
        } else {
            goto lab_0x40915a;
        }
    }
  lab_0x40915a:
    // 0x40915a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x409160
    *v24 = 0;
    int64_t v25; // 0x409110
    int64_t v26; // 0x409110
    int64_t v27; // 0x409110
    switch (*(char *)&v2) {
        case 45: {
            // 0x409250
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40925d;
        }
        case 43: {
            // 0x409560
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40925d;
        }
        default: {
            // 0x40917c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4094df
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4095f8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40925d;
                } else {
                    // 0x4094ed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40918a;
                }
            } else {
                goto lab_0x40918a;
            }
        }
    }
  lab_0x409268:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40926f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4091d8;
    } else {
        goto lab_0x40927c;
    }
  lab_0x40918a:
    // 0x40918a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40925d;
  lab_0x40925d:
    // 0x40925d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x409268;
  lab_0x4091d8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4091d8
    int64_t v31 = v30; // 0x4091d8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4091da
    if ((int64_t)*v32 > v31) {
        // 0x4091df
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4091e2
    if (*v33 > v30) {
        // 0x4091e7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4091ea
    int64_t v35 = v31; // 0x4091ee
    int64_t v36 = v15; // 0x4091ee
    int64_t v37; // 0x409110
    int64_t v38; // 0x409110
    int64_t v39; // 0x409110
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x409358
        int64_t v41 = v40; // 0x409358
        v2 = v41;
        int64_t v42; // 0x409110
        if (*v33 == v40) {
            // 0x409540
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409548
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x409364
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409368
                function_408a10(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x409378
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x409381
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40938a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4093a1
            int64_t v47 = v45 & 0xffffffff; // 0x4093a5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4093ae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4093b4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4093b6;
                }
            }
            int64_t v48 = v47 + 1; // 0x409390
            int64_t v49 = v48 & 0xffffffff; // 0x409390
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4093a1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4093ae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4093b4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4093b6;
                    }
                }
                // 0x409390
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x409558
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4093b6;
    } else {
        goto lab_0x4091f4;
    }
  lab_0x40927c:
    // 0x40927c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40927f
    int64_t v51 = v12; // 0x40927f
    int64_t v52 = v14; // 0x40927f
    if (*(char *)v10 == 0) {
        goto lab_0x4091d8;
    } else {
        goto lab_0x409285;
    }
  lab_0x4091f4:;
    int32_t v53 = v35; // 0x4091f4
    int64_t v54; // 0x409110
    int64_t v55; // 0x409110
    int64_t v56; // 0x409110
    int64_t v57; // 0x409110
    int64_t v58; // 0x409110
    int64_t v59; // 0x409110
    char * v60; // 0x409110
    int64_t v61; // 0x409110
    int64_t v62; // 0x409209
    int64_t v63; // 0x409110
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x409343
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x409346;
    } else {
        // 0x4091fc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409110
        int64_t v66 = v65 ? -1 : 1; // 0x409210
        int64_t v67 = (int64_t)"--"; // 0x409110
        int64_t v68 = v62; // 0x409110
        int64_t v69 = 3; // 0x409210
        unsigned char v70 = *(char *)v68; // 0x409210
        char v71 = *(char *)v67; // 0x409210
        char v72 = v71; // 0x409210
        bool v73 = false; // 0x409210
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
            // 0x409300
            if (*(char *)v62 == 45) {
                // 0x4093c0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4093c0
                if (c == 0) {
                    goto lab_0x40930a;
                } else {
                    // 0x4093cd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x409450;
                    } else {
                        if (c == 45) {
                            // 0x409633
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4094a5;
                        } else {
                            // 0x4093de
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x409450;
                            } else {
                                // 0x4093e3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409404;
                                } else {
                                    // 0x4093ea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x409450;
                                    } else {
                                        goto lab_0x409404;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40930a;
            }
        } else {
            uint32_t v75 = *v33; // 0x409220
            v2 = v75;
            int32_t v76 = *v32; // 0x409223
            int64_t v77 = v35 + 1; // 0x409226
            int32_t v78 = v77; // 0x409229
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x409590
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409237
                    function_408a10(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x409245
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x409346;
        }
    }
  lab_0x409285:;
    // 0x409285
    int64_t v79; // bp-104, 0x409110
    int64_t v80 = &v79; // 0x40911a
    int64_t v81 = v50 + 1; // 0x409285
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40928c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x409291
    *v83 = v81;
    char v84 = *(char *)v2; // 0x409295
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x409299
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4092a1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4092a6
    int32_t c2 = v84; // 0x4092a6
    char * found_char_pos = strchr(str2, c2); // 0x4092a6
    int64_t v87 = *v82; // 0x4092ab
    v2 = v87;
    int64_t v88 = *v85; // 0x4092b5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4092c0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4095b0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40957d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4092ee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4092a6
    char v91 = *(char *)(v90 + 1); // 0x4092db
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x409295
        if (v91 != 58) {
            // 0x4092ee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409504
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409608
                *v8 = 0;
            } else {
                // 0x4095ec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40952e
            *v83 = 0;
            // 0x4092ee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40950e
        if (v93 != 0) {
            // 0x4095a0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40952e
            *v83 = 0;
            // 0x4092ee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x409521
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40952e
            *v83 = 0;
            // 0x4092ee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40966a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40961a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x409621
        // 0x40952e
        *v83 = 0;
        // 0x4092ee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x409479
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40947b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4096a0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x409651
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x409658
            // 0x4092ee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x409486
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40948a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4094a5;
  lab_0x4093b6:
    // 0x4093b6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4091f4;
  lab_0x4094a5:;
    int64_t v99 = function_408af0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4094c3
    // 0x4092ee
    return v99 & 0xffffffff;
  lab_0x409346:;
    int32_t v100 = v55; // 0x409346
    if (v100 != (int32_t)v59) {
        // 0x40934a
        *(int32_t *)a7 = v100;
    }
    // 0x4092ee
    return 0xffffffff;
  lab_0x40930a:
    // 0x40930a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409311
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4092ee
    return v99 & 0xffffffff;
  lab_0x409450:
    // 0x409450
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x409285;
  lab_0x409404:
    // 0x409404
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408af0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x40942a
    if ((int32_t)v101 != -1) {
        // 0x4092ee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40943f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x409450;
}
// Address range: 0x4096e0 - 0x409736
int64_t function_4096e0(int64_t a1) {
    // 0x4096e0
    *(int32_t *)&g44 = g28;
    *(int32_t *)&g45 = g27;
    int64_t v1; // 0x4096e0
    int64_t result = function_409110(v1, v1, v1, v1, v1, v1, &g44, a1 & 0xffffffff); // 0x409706
    g28 = *(int32_t *)&g44;
    g51 = (char *)g47;
    *(int32_t *)&g26 = g46;
    return result;
}
// Address range: 0x409740 - 0x409758
int64_t function_409740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409740
    return function_4096e0(1);
}
// Address range: 0x409760 - 0x409773
int64_t function_409760(int64_t a1, int64_t a2, char * a3, char (**a4)[10], int32_t a5, int64_t a6) {
    // 0x409760
    return function_4096e0(0);
}
// Address range: 0x409780 - 0x409795
int64_t function_409780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409780
    return function_409110(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4097a0 - 0x4097b6
int64_t function_4097a0(void) {
    // 0x4097a0
    return function_4096e0(0);
}
// Address range: 0x4097c0 - 0x4097d8
int64_t function_4097c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4097c0
    return function_409110(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4097e0 - 0x40985a
int64_t function_4097e0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4097eb
    int64_t v2 = (int64_t)&g10; // 0x4097eb
    int32_t * pwc; // 0x4097e0
    int64_t v3; // 0x4097e0
    int64_t n; // 0x4097e0
    if (a2 == 0) {
        goto lab_0x409832;
    } else {
        // 0x4097ed
        if (a3 == 0) {
            // 0x409818
            return -2;
        }
        // 0x4097f9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409832;
        } else {
            goto lab_0x409804;
        }
    }
  lab_0x409832:
    // 0x409832
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4097e0
    pwc = (int32_t *)&v4;
    goto lab_0x409804;
  lab_0x409804:;
    char * wstr = (char *)v3; // 0x40980a
    int64_t ps; // 0x4097e0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40980a
    int64_t result = v5; // 0x40980a
    if (v5 < 0xfffffffe) {
        // 0x409818
        return result;
    }
    int64_t result2 = result; // 0x409849
    if ((char)function_409ad0(0, v3) == 0) {
        // 0x40984b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409818
    return result2;
}
// Address range: 0x409860 - 0x40998a
int64_t function_409860(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    if ((char)a3 == 0) {
        // 0x409928
        *(char *)a1 = 0;
        return result;
    }
    // 0x409876
    if (g48 == 0) {
        int32_t fd = open("/proc/self/fd", O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x409902
        if (fd < 0) {
            // 0x40990e
            g48 = -1;
            return 0;
        }
        // 0x409940
        int64_t path; // bp-72, 0x409860
        __sprintf_chk((char *)&path, 1, 32, "/proc/self/fd/%d/../fd", (int64_t)fd);
        g48 = access((char *)&path, F_OK) == 0 ? 1 : -1;
        close(fd);
    }
    // 0x409886
    if (g48 < 0) {
        // 0x4098ce
        return 0;
    }
    char * str = (char *)a3; // 0x40988d
    int32_t len = strlen(str); // 0x40988d
    uint64_t size = (int64_t)len + 27; // 0x409892
    int64_t v1 = result; // 0x40989d
    if (len != 4005 && size >= 4032) {
        int64_t * mem = malloc((int32_t)size); // 0x4098e0
        v1 = (int64_t)mem;
        if (mem == NULL) {
            // 0x4098ce
            return 0;
        }
    }
    int64_t result2 = v1;
    strcpy((char *)(result2 + (int64_t)__sprintf_chk((char *)result2, 1, -1, "/proc/self/fd/%d/", a2 & 0xffffffff)), str);
    // 0x4098ce
    return result2;
}
// Address range: 0x409990 - 0x4099ed
int64_t function_409990(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409997
    int64_t v2; // 0x409990
    int64_t result = function_40b830(a1, v2); // 0x4099a8
    if ((v2 & 32) != 0) {
        // 0x4099d0
        if ((int32_t)result == 0) {
            // 0x4099d4
            *__errno_location() = 0;
        }
        // 0x4099ca
        return 0xffffffff;
    }
    // 0x4099b1
    if ((int32_t)result == 0) {
        // 0x4099ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4099b8
    if (v1 == 0) {
        // 0x4099ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4099ca
    return result2;
}
// Address range: 0x4099f0 - 0x409a00
int64_t function_4099f0(int64_t a1) {
    // 0x4099f0
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0x95f616;
    int64_t result; // 0x4099f0
    return result;
}
// Address range: 0x409a00 - 0x409a80
int64_t function_409a00(int64_t a1, int64_t a2) {
    // 0x409a00
    if (*(int32_t *)(a1 + 24) != 0x95f616) {
        // 0x409a62
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 60, "cycle_check");
        return &g56;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x409a09
    int64_t v2 = *v1; // 0x409a09
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x409a0d
    if (v2 == 0) {
        // 0x409a30
        *v1 = 1;
        // 0x409a38
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 8) = a2;
        return 0;
    }
    if (v3 == a1) {
        // 0x409a48
        if (*(int64_t *)(a1 + 8) == a2) {
            // 0x409a28
            return 1;
        }
    }
    int64_t v4 = v2 + 1; // 0x409a1b
    *v1 = v4;
    if ((v4 & v2) != 0) {
        // 0x409a28
        return 0;
    }
    // 0x409a57
    if (v4 == 0) {
        // 0x409a28
        return 1;
    }
    // 0x409a38
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 8) = a2;
    return 0;
}
// Address range: 0x409a80 - 0x409aca
int64_t function_409a80(int64_t path, int64_t oflag, int32_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x409a93
    return function_40b4f0((int64_t)fd);
}
// Address range: 0x409ad0 - 0x409b2e
int64_t function_409ad0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x409ad6
    if (locale == NULL) {
        // 0x409b03
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x409ad6
    bool v2; // 0x409ad0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x409ad0
    int64_t v5 = v1; // 0x409ad0
    int64_t v6 = 2; // 0x409af5
    unsigned char v7 = *(char *)v5; // 0x409af5
    char v8 = *(char *)v4; // 0x409af5
    char v9 = v8; // 0x409af5
    bool v10 = false; // 0x409af5
    while (v7 == v8) {
        // 0x409ae8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409b01
    int64_t v13 = v1; // 0x409b01
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409b03
        return 0;
    }
    int64_t v14 = 6; // 0x409b01
    unsigned char v15 = *(char *)v13; // 0x409b1d
    char v16 = *(char *)v12; // 0x409b1d
    char v17 = v16; // 0x409b1d
    bool v18 = false; // 0x409b1d
    while (v15 == v16) {
        // 0x409b10
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
// Address range: 0x409b30 - 0x409bc3
int64_t function_409b30(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x409b47
    if (v1 == -1) {
        // 0x409bbf
        return -1;
    }
    int64_t v2 = v1; // 0x409b4f
    int64_t v3; // 0x409b30
    while (true) {
      lab_0x409b58:
        // 0x409b58
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x409bb0;
        } else {
            goto lab_0x409bb5;
        }
    }
  lab_0x409bbf_2:;
    // 0x409bbf
    int64_t result; // 0x409b30
    return result;
  lab_0x409bb5:;
    int64_t v4 = v3 + 2; // 0x409bb5
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x409bbf
        goto lab_0x409bbf_2;
    }
    goto lab_0x409b58;
  lab_0x409bb0:
    // 0x409bb0
    result = v3;
    goto lab_0x409bb5;
}
// Address range: 0x409bd0 - 0x409be0
int64_t function_409bd0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x409bd0
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x409be0 - 0x409be7
int64_t function_409be0(int64_t a1, int64_t a2) {
    // 0x409be0
    int64_t v1; // 0x409be0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x409bf0 - 0x409c11
int64_t function_409bf0(int64_t a1, int64_t a2) {
    // 0x409bf0
    int64_t v1; // 0x409bf0
    return 16 * v1 + a2;
}
// Address range: 0x409c20 - 0x409d39
int64_t function_409c20(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_409bf0(a1, a2); // 0x409c34
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x409c3c
    int64_t result2 = *v2; // 0x409c3c
    if (result2 == 0) {
        // 0x409cce
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x409c64
            if (v3 == 0) {
                // 0x409cce
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x409c71
            int64_t v5 = v3; // 0x409c77
            int64_t v6 = v1; // 0x409c77
            int64_t result = v4; // 0x409c77
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x409cac_2:
                // 0x409cac
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x409cb1
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x409cc0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x409cce
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x409c84
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x409c91
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x409cac_2;
                }
                // 0x409c99
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x409cac_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x409cce
            return 0;
        }
    }
    // 0x409ce3
    if ((char)a4 == 0) {
        // 0x409cce
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x409ce8
    if (v12 == 0) {
        // 0x409d30
        *v2 = 0;
        // 0x409cce
        return result2;
    }
    // 0x409cf1
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x409cff
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x409d40 - 0x409dbe
int64_t function_409d40(uint64_t a1) {
    if (a1 == (int64_t)&g12) {
        // 0x409dbd
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x409d4b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g12) {
        // 0x409daa
        *(int64_t *)a1 = (int64_t)&g12;
        return 0;
    }
    // 0x409d59
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x409d74
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x409d81
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x409d89
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x409dbd
    return 1;
}
// Address range: 0x409dc0 - 0x409f0a
int64_t function_409dc0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x409dda
    uint64_t v2 = *v1; // 0x409dda
    if (v2 <= a2) {
        // 0x409ec4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x409dc0
    int64_t v8 = a2; // 0x409dc0
    int64_t v9; // 0x409dc0
    int64_t result; // 0x409dc0
    int64_t v10; // 0x409dc0
    while (true) {
      lab_0x409df6_2:
        // 0x409df6
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x409df6
        int64_t v12 = *v11; // 0x409df6
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x409de8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x409dff
            int64_t v14 = *v13; // 0x409dff
            int64_t v15 = v14; // 0x409e07
            int64_t v16 = v12; // 0x409e07
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x409e24
                    int64_t v19 = *v18; // 0x409e24
                    int64_t v20 = function_409bf0(v3, v19); // 0x409e2d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x409e32
                    int64_t v22 = *v21; // 0x409e32
                    int64_t * v23 = (int64_t *)v20; // 0x409e36
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x409e10
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x409e5f
                            break;
                        }
                    } else {
                        // 0x409e3c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x409e5f
                            break;
                        }
                    }
                    // 0x409e24
                    v15 = v22;
                }
                // 0x409e5f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x409e63
                v9 = *v1;
                goto lab_0x409de8;
            } else {
                int64_t v26 = function_409bf0(v3, v25); // 0x409e7b
                int64_t * v27 = (int64_t *)v26; // 0x409e80
                if (*v27 == 0) {
                    // 0x409ee0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x409e89
                    int64_t * v29; // 0x409dc0
                    int64_t v30; // 0x409dc0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x409eef
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x409ec4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x409eef
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x409e9a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x409ea9
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x409eb1
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x409eba
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x409ec4
                    break;
                }
                goto lab_0x409df6_2;
            }
        }
    }
    // 0x409ec4
    return result;
  lab_0x409de8:;
    int64_t v36 = v10 + 16; // 0x409de8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x409df6_2;
    // 0x409df6
    goto lab_0x409df6_2;
}
// Address range: 0x409f10 - 0x409f15
int64_t function_409f10(int64_t a1) {
    // 0x409f10
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x409f20 - 0x409f25
int64_t function_409f20(int64_t a1) {
    // 0x409f20
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x409f30 - 0x409f35
int64_t function_409f30(int64_t a1) {
    // 0x409f30
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x409f40 - 0x409f8f
int64_t function_409f40(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409f43
    int64_t result = 0; // 0x409f4c
    if (v1 <= a1) {
      lab_0x409f8d:
        // 0x409f8d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x409f50
    while (*(int64_t *)v3 == 0) {
        // 0x409f50
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x409f5f
    int64_t v6 = v5; // 0x409f6b
    int64_t v7 = 1; // 0x409f6b
    int64_t v8; // 0x409f40
    int64_t v9; // 0x409f70
    int64_t v10; // 0x409f74
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x409f70
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x409f80
    int64_t v12 = v3 + 16; // 0x409f84
    while (v12 < v1) {
        // 0x409f59
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x409f50
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x409f5f
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
                // 0x409f70
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x409f7d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x409f8d
    return result2;
}
// Address range: 0x409f90 - 0x409ff7
int64_t function_409f90(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409f93
    int64_t v2 = a1; // 0x409f9f
    int64_t v3 = 0; // 0x409f9f
    int64_t v4 = 0; // 0x409f9f
    int64_t v5 = 0; // 0x409f9f
    int64_t v6 = 0; // 0x409f9f
    int64_t v7; // 0x409f90
    int64_t v8; // 0x409f90
    int64_t v9; // 0x409f90
    if (v1 > a1) {
        while (true) {
          lab_0x409fb1_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x409fa8;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x409fb7
                int64_t v13 = v10 + 1; // 0x409fbb
                int64_t v14 = v11 + 1; // 0x409fbf
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x409fc6
                int64_t v16 = v14; // 0x409fc6
                if (v12 == 0) {
                    goto lab_0x409fa8;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x409fd0
                    int64_t v18 = v16 + 1; // 0x409fd4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x409fd0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x409fdd
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x409fe6
                        break;
                    }
                    goto lab_0x409fb1_2;
                }
            }
        }
    }
  lab_0x409fe6:
    // 0x409fe6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x409fef
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x409fee
    return 0;
  lab_0x409fa8:;
    int64_t v20 = v8 + 16; // 0x409fa8
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x409fe6
        goto lab_0x409fe6;
    }
    goto lab_0x409fb1_2;
    // 0x409fb1
    goto lab_0x409fb1_2;
}
// Address range: 0x40a000 - 0x40a148
int64_t function_40a000(uint64_t a1, int64_t a2) {
    // 0x40a000
    int128_t v1; // 0x40a000
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x40a013
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x40a017
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40a01e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x40a030
            while (*(int64_t *)v7 == 0) {
                // 0x40a030
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40a06d
                    goto lab_0x40a06d;
                }
            }
        }
    }
  lab_0x40a06d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40a07c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x40a000
    int128_t v10; // 0x40a000
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x40a113
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40a11c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x40a0b3;
        } else {
            goto lab_0x40a129;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x40a0a6
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x40a129;
        } else {
            goto lab_0x40a0b3;
        }
    }
  lab_0x40a0b3:
    // 0x40a0b3
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x40a0b7
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x40a0b7
    goto lab_0x40a0bc;
  lab_0x40a129:
    // 0x40a129
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40a13a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40a0bc;
  lab_0x40a0bc:
    // 0x40a0bc
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x40a150 - 0x40a1a3
int64_t function_40a150(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_409bf0(a1, result); // 0x40a15a
    int64_t v2 = *(int64_t *)v1; // 0x40a15f
    if (v2 == 0) {
        // 0x40a18d
        return 0;
    }
    // 0x40a173
    if (v2 == result) {
        // 0x40a18d
        return result;
    }
    int64_t v3 = v1; // 0x40a184
    int64_t result2 = v2; // 0x40a182
    while ((char)v1 == 0) {
        // 0x40a184
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40a18d
            break;
        }
        // 0x40a170
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40a18d
            break;
        }
        result2 = v2;
    }
    // 0x40a18d
    return result2;
}
// Address range: 0x40a1b0 - 0x40a1f8
int64_t function_40a1b0(uint64_t a1) {
    int64_t result = 0; // 0x40a1b5
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x40a1c7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40a1be
    if (v1 <= a1) {
        // 0x40a1c7
        return result;
    }
    int64_t v2 = a1; // 0x40a1c5
    int64_t v3 = *(int64_t *)v2; // 0x40a1d9
    result = v3;
    while (v3 == 0) {
        // 0x40a1d0
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x40a1c7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x40a1c7
    return result;
}
// Address range: 0x40a200 - 0x40a26a
int64_t function_40a200(int64_t a1, int64_t a2) {
    int64_t v1 = function_409bf0(a1, a2); // 0x40a20c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x40a228
    while (*(int64_t *)v2 != a2) {
        // 0x40a220
        if (v3 == 0) {
            goto lab_0x40a236;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x40a260
        return *(int64_t *)v3;
    }
  lab_0x40a236:;
    int64_t v4 = v1 + 16; // 0x40a248
    int64_t result = 0; // 0x40a24f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x40a240
        result = v5;
        if (v5 != 0) {
            // break -> 0x40a253
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x40a253
    return result;
}
// Address range: 0x40a270 - 0x40a2d4
int64_t function_40a270(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40a276
    int64_t result = 0; // 0x40a27a
    if (*v1 <= a1) {
      lab_0x40a291:
        // 0x40a291
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40a27f
    int64_t v4 = v2; // 0x40a285
    int64_t v5; // 0x40a270
    int64_t v6; // 0x40a270
    int64_t v7; // 0x40a2b8
    int64_t v8; // 0x40a2c1
    int64_t v9; // 0x40a2a1
    int64_t v10; // 0x40a2a5
    if (v3 != 0) {
        // 0x40a298
        if (v2 >= a3) {
            // break -> 0x40a291
            break;
        }
        // 0x40a29d
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
            // 0x40a2b5
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x40a2b0
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40a2b5
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
    int64_t v12 = a1 + 16; // 0x40a287
    result = v11;
    while (*v1 > v12) {
        // 0x40a27f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x40a298
            result = v2;
            if (v2 >= a3) {
                // break -> 0x40a291
                break;
            }
            // 0x40a29d
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
                // 0x40a2b5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x40a2b0
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x40a2b5
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x40a287
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x40a291
    return result;
}
// Address range: 0x40a2e0 - 0x40a358
int64_t function_40a2e0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40a2f1
    int64_t result = 0; // 0x40a2f5
    if (v1 <= a1) {
      lab_0x40a314:
        // 0x40a314
        return result;
    }
    int64_t v2 = a1; // 0x40a30a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x40a308
    int64_t v5 = v2; // 0x40a308
    int64_t v6 = v3; // 0x40a308
    int64_t v7; // 0x40a2e0
    int64_t v8; // 0x40a338
    int64_t v9; // 0x40a33c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x40a338
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x40a348
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40a338
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
        // 0x40a302
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40a338
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x40a348
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x40a338
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40a30a
        result2 = v4;
        v2 += 16;
    }
    // 0x40a314
    return result2;
}
// Address range: 0x40a360 - 0x40a391
int64_t function_40a360(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40a367
    if (v1 == 0) {
        // 0x40a38d
        return 0;
    }
    int64_t result = 0; // 0x40a367
    v2++;
    char v3 = *(char *)v2; // 0x40a383
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40a38d
    return result;
}
// Address range: 0x40a3a0 - 0x40a3c0
int64_t function_40a3a0(int64_t a1) {
    // 0x40a3a0
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x40a3c0 - 0x40a54a
int64_t function_40a3c0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40a3c0
    int128_t v1; // 0x40a3c0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40a3fa
    int64_t result = (int64_t)mem; // 0x40a3fa
    if (mem == NULL) {
        // 0x40a4aa
        return result;
    }
    int64_t v3 = result + 40; // 0x40a40b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x40a3c0
    int128_t v6; // 0x40a3c0
    if (a2 == 0) {
        // 0x40a4c0
        *v4 = (int64_t)&g12;
        int64_t v7 = function_409d40(v3); // 0x40a4c8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40a4cd
        if ((char)v7 == 0) {
            // 0x40a4a0
            free(mem);
            // 0x40a4aa
            return 0;
        }
        // 0x40a4d9
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40a523;
        } else {
            goto lab_0x40a4de;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_409d40(v3) == 0) {
            // 0x40a4a0
            free(mem);
            // 0x40a4aa
            return 0;
        }
        // 0x40a425
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_409b30(a1); // 0x40a433
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40a4a0
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40a4a0
                free(mem);
                // 0x40a4aa
                return 0;
            }
            // 0x40a451
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40a4a0
                free(mem);
                // 0x40a4aa
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x40a462
            int64_t v10 = (int64_t)mem2; // 0x40a462
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40a4a0
                free(mem);
                // 0x40a4aa
                return 0;
            }
            // 0x40a46f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x409bd0 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x409be0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40a4aa
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40a518
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40a4de;
        } else {
            goto lab_0x40a523;
        }
    }
  lab_0x40a523:
    // 0x40a523
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40a533
    int128_t v13 = v6; // 0x40a53c
    int128_t v14 = __asm_addss(v12, v12); // 0x40a53c
    goto lab_0x40a4e7;
  lab_0x40a4de:
    // 0x40a4de
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40a4e7;
  lab_0x40a4e7:
    // 0x40a4e7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40a4a0
    free(mem);
    // 0x40a4aa
    return 0;
}
// Address range: 0x40a550 - 0x40a5f8
int64_t function_40a550(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40a55a
    uint64_t v2 = *v1; // 0x40a55a
    int64_t result; // 0x40a550
    if (v2 <= a1) {
      lab_0x40a5e3:
        // 0x40a5e3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40a568
    while (*v6 == 0) {
        // 0x40a568
        v7 = v5 + 16;
        int64_t v8; // 0x40a550
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40a5e3
            goto lab_0x40a5e3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40a579
    int64_t v10 = *v9; // 0x40a579
    int64_t v11 = *v3; // 0x40a57e
    int64_t v12 = v11; // 0x40a585
    int64_t v13 = v10; // 0x40a585
    int64_t result2 = v11; // 0x40a585
    int64_t * v14; // 0x40a59e
    int64_t v15; // 0x40a59e
    int64_t v16; // 0x40a59a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40a595
            v16 = *v3;
        }
        // 0x40a59e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40a590
            v16 = 0;
            if (v12 != 0) {
                // 0x40a595
                v16 = *v3;
            }
            // 0x40a59e
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
    // 0x40a5bd
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40a5d0
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40a5dd
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40a56c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40a568
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40a5e3
                goto lab_0x40a5e3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40a579
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40a595
                v16 = *v3;
            }
            // 0x40a59e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40a590
                v16 = 0;
                if (v12 != 0) {
                    // 0x40a595
                    v16 = *v3;
                }
                // 0x40a59e
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
        // 0x40a5bd
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40a5e3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40a600 - 0x40a6d6
int64_t function_40a600(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40a60f
    uint64_t v2 = *v1; // 0x40a60f
    int64_t v3 = a1; // 0x40a613
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40a663;
    } else {
        // 0x40a615
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40a663;
        } else {
            // 0x40a61c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40a631
                int64_t v6; // 0x40a628
                while (v5 == 0) {
                    // 0x40a628
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40a663
                        goto lab_0x40a663;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40a648
                int64_t v8 = v7; // 0x40a64f
                int64_t v9 = v5; // 0x40a64f
                int64_t v10; // 0x40a600
                int64_t v11; // 0x40a648
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40a640
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40a643
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40a656
                v3 = v9;
                while (v2 > v12) {
                    // 0x40a631
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40a628
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40a663
                            goto lab_0x40a663;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40a643
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40a640
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40a643
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40a651
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40a663;
            } else {
                goto lab_0x40a69c;
            }
        }
    }
  lab_0x40a663:
    // 0x40a663
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40a670
        int64_t v14 = v13; // 0x40a677
        int64_t v15 = v2; // 0x40a677
        int64_t v16; // 0x40a680
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40a680
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40a691
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40a691
        int64_t v18 = v15; // 0x40a69a
        int64_t v19 = v17; // 0x40a69a
        while (v15 > v17) {
            // 0x40a670
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40a680
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40a691
                v15 = *v1;
            }
            // 0x40a691
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40a69c;
  lab_0x40a69c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40a69c
    if (v20 == 0) {
        // 0x40a6c1
        free(NULL);
        free((int64_t *)a1);
        return &g56;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40a6b0
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40a6bf
    while (v21 != 0) {
        // 0x40a6b0
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40a6c1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g56;
}
// Address range: 0x40a6e0 - 0x40a8da
int64_t function_40a6e0(int64_t a1, uint64_t a2) {
    // 0x40a6e0
    int128_t v1; // 0x40a6e0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40a6eb
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40a6e0
        if (a2 < 0) {
            // 0x40a860
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40a870
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40a700
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40a709
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40a852
        return 0;
    }
    uint64_t nmemb = function_409b30(a2); // 0x40a743
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40a852
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40a77b
    if (*v6 == nmemb) {
        // 0x40a852
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40a78d
    int64_t v7 = (int64_t)mem; // 0x40a78d
    int64_t v8 = v7; // bp-104, 0x40a792
    if (mem == NULL) {
        // 0x40a852
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40a7ea
    int64_t v10 = *v9; // 0x40a7ea
    int64_t v11 = function_409dc0(&v8, a1, 0); // 0x40a7f3
    int64_t result = v11 & 0xffffffff; // 0x40a7f8
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40a7b4
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40a816
        function_409dc0(v13, v12, 1);
        function_409dc0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40a8a0
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40a852
    return result;
}
// Address range: 0x40a8e0 - 0x40ab54
int64_t function_40a8e0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40a8e0
    int128_t v1; // 0x40a8e0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40a8e0
    int64_t v5 = function_409c20(a1, a2, &v4, 0); // 0x40a901
    if (v5 != 0) {
        // 0x40a90e
        if (a3 != NULL) {
            // 0x40a915
            *a3 = v5;
        }
        // 0x40a919
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40a928
    uint64_t v7 = *v6; // 0x40a928
    int64_t v8; // 0x40a8e0
    int64_t v9; // 0x40a8e0
    int64_t v10; // 0x40a8e0
    int128_t v11; // 0x40a8e0
    int128_t v12; // 0x40a8e0
    int64_t v13; // 0x40a8e0
    if (v7 < 0) {
        // 0x40a9b0
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40a9c0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40a9c4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40a9c9
        int128_t v17 = __asm_addss(v15, v15); // 0x40a9cd
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40a94b;
        } else {
            goto lab_0x40a9da;
        }
    } else {
        // 0x40a931
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40a935
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40a939
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40a93e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40a9da;
        } else {
            goto lab_0x40a94b;
        }
    }
  lab_0x40a94b:
    // 0x40a94b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40a954
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x40a95c
    int128_t v23 = v11; // 0x40a95c
    if (v13 == 0) {
        goto lab_0x40a962;
    } else {
        goto lab_0x40aa01;
    }
  lab_0x40a9da:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40a9e7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40a9ea
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40a9f3
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40a962;
    } else {
        goto lab_0x40aa01;
    }
  lab_0x40a962:;
    int64_t * v28 = (int64_t *)v4; // 0x40a967
    if (*v28 == 0) {
        // 0x40aa78
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40aa81
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40a972
    int64_t v31 = *v30; // 0x40a972
    int64_t * v32; // 0x40a8e0
    int64_t v33; // 0x40a8e0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40aa9d
        if (mem == NULL) {
            // 0x40a919
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40aa9d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40a987
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40a99d
    *v37 = *v37 + 1;
    return 1;
  lab_0x40aa01:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40aa01
    function_409d40(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40aa0a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40aa0e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40aa12
    int128_t v44; // 0x40a8e0
    if (v42 < 0) {
        // 0x40aad0
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40aae0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40aa20
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40aa29
    int128_t v47; // 0x40a8e0
    int64_t v48; // 0x40a8e0
    if (v46 < 0) {
        // 0x40aab0
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40aabd
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40aac0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40aa32
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40aa36
        v48 = v46;
        v47 = v51;
    }
    // 0x40aa3b
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40aa4b
        int128_t v53 = v52; // 0x40aa54
        if (*(char *)(v41 + 16) == 0) {
            // 0x40aaf0
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x40aa5a
        __asm_comiss(v53, 0x5f800000);
        // 0x40a919
        return 0xffffffff;
    }
    goto lab_0x40a962;
}
// Address range: 0x40ab60 - 0x40ab9b
int64_t function_40ab60(int64_t a1, int64_t a2) {
    // 0x40ab60
    int64_t v1; // bp-16, 0x40ab60
    int64_t v2; // 0x40ab60
    int32_t v3 = function_40a8e0(a1, a2, &v1, v2); // 0x40ab72
    if (v3 == -1) {
        // 0x40ab80
        return 0;
    }
    // 0x40ab77
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40aba0 - 0x40ad77
int64_t function_40aba0(int64_t a1) {
    // 0x40aba0
    int128_t v1; // 0x40aba0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40aba0
    int64_t v5; // 0x40aba0
    int64_t result = function_409c20(a1, v5, &v4, 1); // 0x40abb5
    if (result == 0) {
        // 0x40abd2
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40abc7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40abd2
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40abe0
    uint64_t v8 = *v7 - 1; // 0x40abe4
    *v7 = v8;
    int64_t v9; // 0x40aba0
    int64_t v10; // 0x40aba0
    int64_t v11; // 0x40aba0
    int128_t v12; // 0x40aba0
    int128_t v13; // 0x40aba0
    int64_t v14; // 0x40aba0
    if (v8 < 0) {
        // 0x40acd0
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40ace0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40ace4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40ace9
        int128_t v18 = __asm_addss(v16, v16); // 0x40aced
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40ac0c;
        } else {
            goto lab_0x40acfa;
        }
    } else {
        // 0x40abf2
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40abf6
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40abfa
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40abff
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40acfa;
        } else {
            goto lab_0x40ac0c;
        }
    }
  lab_0x40ac0c:
    // 0x40ac0c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40ac10
    int64_t v23 = v14; // 0x40ac10
    int128_t v24 = v12; // 0x40ac10
    int64_t v25 = v10; // 0x40ac10
    int128_t v26 = v22; // 0x40ac10
    goto lab_0x40ac15;
  lab_0x40acfa:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40ad07
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40ad0a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40ac15;
  lab_0x40ac15:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40ac15
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x40abd2
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40ac1e
    function_409d40(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40ac27
    int64_t v31 = *(int64_t *)v29; // 0x40ac2b
    int128_t v32; // 0x40aba0
    if (v30 < 0) {
        // 0x40ad40
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40ad50
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40ac38
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40ac41
    int128_t v35; // 0x40aba0
    int64_t v36; // 0x40aba0
    if (v34 < 0) {
        // 0x40ad20
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40ad2d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40ad30
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40ac4e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40ac52
        v36 = v34;
        v35 = v39;
    }
    // 0x40ac57
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40abd2
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40ac68
    int128_t v41 = v40; // 0x40ac71
    if (*(char *)(v31 + 16) == 0) {
        // 0x40ac73
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40ac78
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40ad68
    if ((char)function_40a6e0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40abd2
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40ac9a
    if (*v43 != 0) {
        int64_t v44; // 0x40aba0
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40aca8
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40acb9
    *v43 = 0;
    // 0x40abd2
    return result;
}
// Address range: 0x40ad80 - 0x40ad9b
int64_t function_40ad80(int64_t a1, int64_t a2) {
    // 0x40ad80
    *(int64_t *)(a1 + 20) = 0;
    *(char *)(a1 + 28) = 1;
    int32_t v1 = a2; // 0x40ad8c
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v1;
    *(int32_t *)(a1 + 8) = v1;
    *(int32_t *)(a1 + 12) = v1;
    *(int32_t *)(a1 + 16) = v1;
    int64_t result; // 0x40ad80
    return result;
}
// Address range: 0x40ada0 - 0x40ada5
int64_t function_40ada0(int64_t a1) {
    // 0x40ada0
    return (int64_t)*(char *)(a1 + 28);
}
// Address range: 0x40adb0 - 0x40ade5
int64_t function_40adb0(int64_t a1, int32_t a2) {
    char * v1 = (char *)(a1 + 28); // 0x40adb0
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40adb4
    int32_t v3 = (int32_t)(*v1 ^ 1); // 0x40adbd
    uint32_t v4 = (*v2 + v3) % 4; // 0x40adbf
    int32_t * v5 = (int32_t *)((int64_t)(4 * v4) + a1); // 0x40adc8
    *v5 = a2;
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x40adce
    int32_t v7 = *v6; // 0x40adce
    *v2 = v4;
    if (v7 == v4) {
        // 0x40add8
        *v6 = (v7 + v3) % 4;
    }
    // 0x40ade0
    *v1 = 0;
    return (int64_t)*v5;
}
// Address range: 0x40adf0 - 0x40ae31
int64_t function_40adf0(int64_t a1) {
    char * v1 = (char *)(a1 + 28); // 0x40adf4
    if (*v1 != 0) {
        abort();
        // UNREACHABLE
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40adfe
    uint32_t v3 = *v2; // 0x40adfe
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + a1); // 0x40ae0b
    int64_t result = (int64_t)*v4; // 0x40ae0b
    *v4 = *(int32_t *)(a1 + 16);
    if (v3 == *(int32_t *)(a1 + 24)) {
        // 0x40ae28
        *v1 = 1;
        return result;
    }
    // 0x40ae14
    *v2 = (v3 + 3) % 4;
    return result;
}
// Address range: 0x40ae40 - 0x40b3a2
int64_t function_40ae40(void) {
    char * v1 = nl_langinfo(14); // 0x40ae56
    char * v2 = g49; // 0x40ae5b
    char * v3; // 0x40ae40
    int64_t v4; // 0x40ae40
    int64_t v5; // 0x40ae40
    int64_t v6; // 0x40ae40
    int64_t v7; // 0x40ae40
    int32_t size; // 0x40ae40
    int32_t size2; // 0x40ae40
    int32_t len; // 0x40af12
    int64_t v8; // 0x40af12
    char * env_val; // 0x40aefd
    if (v2 == NULL) {
        // 0x40aef8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40af65;
        } else {
            // 0x40af0a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40af65;
            } else {
                // 0x40af0f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40aefd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40b395
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40af65;
                    } else {
                        // 0x40b309
                        size2 = len + 14;
                        goto lab_0x40af2b;
                    }
                } else {
                    goto lab_0x40af2b;
                }
            }
        }
    } else {
        // 0x40ae40
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40ae7a;
    }
  lab_0x40b1ac:;
    // 0x40b1ac
    struct _IO_FILE * stream; // 0x40afeb
    int32_t v10 = __uflow(stream); // 0x40b1af
    int64_t v11; // 0x40ae40
    int64_t v12 = v11; // 0x40b1b9
    int64_t v13; // 0x40ae40
    int64_t v14 = v13; // 0x40b1b9
    int32_t v15 = v10; // 0x40b1b9
    int64_t v16; // 0x40ae40
    int64_t v17 = v16; // 0x40b1b9
    int64_t v18 = v11; // 0x40b1b9
    int64_t v19 = v13; // 0x40b1b9
    int64_t v20 = v16; // 0x40b1b9
    if (v10 == -1) {
        // break -> 0x40b1bf
        goto lab_0x40b1bf;
    }
    goto lab_0x40b039;
  lab_0x40b02e:;
    // 0x40b02e
    int64_t v90; // 0x40ae40
    int64_t * v32; // 0x40b020
    *v32 = v90 + 1;
    int64_t v89; // 0x40ae40
    v12 = v89;
    int64_t v91; // 0x40ae40
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40ae40
    v17 = v92;
    goto lab_0x40b039;
  lab_0x40b039:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40ae40
    int32_t v25; // bp-120, 0x40ae40
    int32_t v26; // bp-184, 0x40ae40
    int64_t v27; // 0x40afeb
    int64_t v28; // 0x40b008
    int64_t v29; // 0x40b00d
    int64_t * v30; // 0x40b024
    switch (c) {
        case 32: {
            goto lab_0x40b020;
        }
        case 10: {
            goto lab_0x40b020;
        }
        case 9: {
            goto lab_0x40b020;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40b211
            int32_t v33; // 0x40ae40
            char v34; // 0x40ae40
            int32_t v35; // 0x40b21e
            if (v31 < *v30) {
                // 0x40b1f0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40b21b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40b211
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40b1f0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40b21b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40b200
                v36 = v33;
            }
            // 0x40b2ef
            if (v36 == -1) {
                // break -> 0x40b1bf
                break;
            }
            goto lab_0x40b020;
        }
        default: {
            // 0x40b04f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40b1bf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40b078
            int64_t v39 = v37 + 4; // 0x40b07a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40b086
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40b088
            while (v41 == 0) {
                // 0x40b078
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40b0a6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40b0b2
            int64_t v45 = v43 + 4; // 0x40b0b4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40b0c0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40b0c2
            while (v47 == 0) {
                // 0x40b0b2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40b0af
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40b0d8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40b0e8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40b0ec
            int64_t v52 = v51 + v48; // 0x40b0f5
            int64_t * mem; // 0x40ae40
            int64_t v53; // 0x40ae40
            int64_t v54; // 0x40ae40
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40b22b
                int64_t v56 = v55 + 3; // 0x40b237
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40b111
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40b120
            if (mem == NULL) {
                // 0x40b34c
                free((int64_t *)v21);
                function_40b830(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x40afc4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40b138
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40b142
            uint32_t v62 = (int32_t)v59; // 0x40b145
            int64_t v63; // 0x40ae40
            if (v62 >= 8) {
                // 0x40b254
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40b26e
                int64_t v66 = v61 - v65; // 0x40b272
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40b27d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40b28e
                    int64_t v70 = v69 & 0xffffffff; // 0x40b28e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40b28b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40b31f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40b157
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40b15b
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
            int64_t v73 = v51 + 1; // 0x40b16b
            int64_t v74 = v60 - 1; // 0x40b16f
            uint32_t v75 = (int32_t)v73; // 0x40b174
            int64_t v76; // 0x40ae40
            if (v75 >= 8) {
                // 0x40b2a2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40b2ac
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40b2bc
                int64_t v80 = v74 - v79; // 0x40b2c0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40b2cb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40b2db
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40b2d9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40b336
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40b33e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40b186
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40b18a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40b383
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40b19e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40b02e;
            } else {
                goto lab_0x40b1ac;
            }
        }
    }
  lab_0x40b020:;
    int64_t v93 = v23; // 0x40ae40
    int64_t v94 = v22; // 0x40ae40
    int64_t v95 = v21; // 0x40ae40
    goto lab_0x40b020_2;
  lab_0x40af65:;
    int64_t * mem3 = malloc(size); // 0x40af65
    int64_t v97 = (int64_t)&g10; // 0x40af70
    int64_t v98; // 0x40ae40
    int64_t path; // 0x40ae40
    if (mem3 == NULL) {
        goto lab_0x40af42;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40af65
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40af86;
    }
  lab_0x40ae7a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40ae6d
    char v100 = *v3; // 0x40ae7a
    int64_t v101; // 0x40ae40
    if (v100 == 0) {
        // 0x40aed4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40ae40
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40ae40
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40aec0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40aec7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40ae90
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40ae9d
        char v107 = *(char *)v106; // 0x40aea2
        v102 = v107;
        if (v107 == 0) {
            // 0x40aed4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40aeab
    v104 = v103 + 1;
  lab_0x40aec7:
    // 0x40aed4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40af42:;
    char * v108 = (char *)v97;
    g49 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40ae7a;
  lab_0x40af86:;
    int64_t v109 = v98 + path; // 0x40af86
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40afb2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x40afe1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40b312
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x40b005
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40b020_2:;
                uint64_t v96 = *v32; // 0x40b020
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40b1ac;
                } else {
                    goto lab_0x40b02e;
                }
            }
          lab_0x40b1bf:
            // 0x40b1bf
            function_40b830(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40b1de
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40afc4;
  lab_0x40af2b:;
    int64_t * mem4 = malloc(size2); // 0x40af2b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x40afd1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40af86;
    } else {
        goto lab_0x40af42;
    }
  lab_0x40afc4:
    // 0x40afc4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40af42;
}
// Address range: 0x40b3b0 - 0x40b3db
int64_t function_40b3b0(int32_t err_num) {
    // 0x40b3b0
    error(g20, err_num, dcgettext(NULL, "unable to record current working directory", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40b3e0 - 0x40b40b
int64_t function_40b3e0(int32_t err_num) {
    // 0x40b3e0
    error(g20, err_num, dcgettext(NULL, "failed to return to initial working directory", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40b410 - 0x40b45a
int64_t function_40b410(int64_t fd, int64_t path, int32_t oflag, int64_t a4) {
    uint32_t v1 = openat((int32_t)fd, (char *)path, oflag); // 0x40b422
    return function_40b4f0((int64_t)v1);
}
// Address range: 0x40b460 - 0x40b4aa
int64_t function_40b460(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x40b46b
    *v1 = 0;
    int64_t v2; // 0x40b460
    int32_t v3 = function_409a80((int64_t)".", 0x80000, (int32_t)v2); // 0x40b47f
    *(int32_t *)a1 = v3;
    if (v3 >= 0) {
        // 0x40b487
        return 0;
    }
    int64_t v4 = function_40ba90(0, 0); // 0x40b494
    *v1 = v4;
    return v4 == 0 ? 0xffffffff : 0;
}
// Address range: 0x40b4b0 - 0x40b4c9
int64_t function_40b4b0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t fd = v1;
    if (fd < 0) {
        // 0x40b4c0
        return function_40b5c0(*(int64_t *)(v1 + 8));
    }
    // 0x40b4b6
    return fchdir(fd);
}
// Address range: 0x40b4d0 - 0x40b4e9
int64_t function_40b4d0(int64_t * a1) {
    // 0x40b4d0
    int64_t v1; // 0x40b4d0
    uint32_t fd = (int32_t)v1;
    if (fd >= 0) {
        // 0x40b4da
        close(fd);
    }
    // 0x40b4df
    free((int64_t *)*(int64_t *)((int64_t)a1 + 8));
    return &g56;
}
// Address range: 0x40b4f0 - 0x40b53e
int64_t function_40b4f0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40b4fc
    if (fd >= 3) {
        // 0x40b501
        return a1 & 0xffffffff;
    }
    // 0x40b510
    int64_t v1; // 0x40b4f0
    int64_t v2 = function_40c070(a1, v1); // 0x40b510
    int32_t * v3 = __errno_location(); // 0x40b518
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40b540 - 0x40b580
int64_t function_40b540(int32_t fd) {
    // 0x40b540
    if (fd < 0) {
        // 0x40b544
        int64_t result; // 0x40b540
        return result;
    }
    int32_t result2 = close(fd); // 0x40b54c
    if (result2 == 0) {
        // 0x40b555
        return result2;
    }
    // 0x40b55a
    __assert_fail("! close_fail", "lib/chdir-long.c", 64, "cdb_free");
    return &g56;
}
// Address range: 0x40b580 - 0x40b5b7
int64_t function_40b580(int32_t * a1) {
    // 0x40b580
    int64_t path; // 0x40b580
    int32_t fd = path;
    uint32_t v1 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x40b592
    int64_t result = 0xffffffff; // 0x40b599
    if (v1 >= 0) {
        // 0x40b59b
        function_40b540(fd);
        *a1 = v1;
        result = 0;
    }
    // 0x40b5a8
    return result;
}
// Address range: 0x40b5c0 - 0x40b830
int64_t function_40b5c0(int64_t a1) {
    char * path = (char *)a1; // 0x40b5cf
    uint32_t result = chdir(path); // 0x40b5cf
    if (result == 0) {
        // 0x40b706
        return 0;
    }
    int32_t * v1 = __errno_location(); // 0x40b5de
    if (*v1 != 36) {
        // 0x40b706
        return result;
    }
    int32_t len = strlen(path); // 0x40b5f2
    int32_t fd = -100; // bp-44, 0x40b5f7
    if (len == 0) {
        // 0x40b812
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g56;
    }
    if (len < 0x1000) {
        // 0x40b7f9
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40b812
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g56;
    }
    int64_t v2 = len; // 0x40b5f2
    int32_t ini_seg_bytes = strspn(path, "/"); // 0x40b61f
    int64_t v3; // 0x40b5c0
    if (ini_seg_bytes == 2) {
        int64_t v4 = function_40bf60(a1 + 3, 47, v2 - 3); // 0x40b745
        if (v4 == 0) {
            // 0x40b706
            return 0xffffffff;
        }
        char * v5 = (char *)v4; // 0x40b752
        *v5 = 0;
        int64_t v6 = function_40b580(&fd); // 0x40b75d
        *v5 = 47;
        if ((int32_t)v6 != 0) {
            goto lab_0x40b6f0;
        } else {
            int64_t str = v4 + 1; // 0x40b769
            v3 = str + (int64_t)strspn((char *)str, "/");
            goto lab_0x40b63d;
        }
    } else {
        // 0x40b631
        v3 = a1;
        if (ini_seg_bytes != 0) {
            // 0x40b718
            if ((int32_t)function_40b580(&fd) != 0) {
                goto lab_0x40b6f0;
            } else {
                // 0x40b72b
                v3 = (int64_t)ini_seg_bytes + a1;
                goto lab_0x40b63d;
            }
        } else {
            goto lab_0x40b63d;
        }
    }
  lab_0x40b6f0:
    // 0x40b6f0
    function_40b540(fd);
    // 0x40b706
    return 0xffffffff;
  lab_0x40b63d:
    // 0x40b63d
    if (*(char *)v3 == 47) {
      lab_0x40b7c7:
        // 0x40b7c7
        __assert_fail("*dir != '/'", "lib/chdir-long.c", 162, "chdir_long");
        // 0x40b7e0
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40b7f9
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40b812
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g56;
    }
    uint64_t v7 = v2 + a1; // 0x40b647
    if (v7 < v3) {
        // 0x40b7e0
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40b7f9
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40b812
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g56;
    }
    int64_t v8 = v3; // 0x40b6bd
    int64_t v9 = v3; // 0x40b6bd
    if (v7 - v3 > 4095) {
        int64_t * v10 = memrchr((int64_t *)v8, 47, 0x1000); // 0x40b665
        while (v10 != NULL) {
            int64_t v11 = (int64_t)v10; // 0x40b665
            *(char *)v10 = 0;
            if (v11 - v8 > 4095) {
                // 0x40b7ae
                __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 179, "chdir_long");
                goto lab_0x40b7c7;
            }
            int64_t v12 = function_40b580(&fd); // 0x40b690
            *(char *)v10 = 47;
            if ((int32_t)v12 != 0) {
                goto lab_0x40b6f0;
            }
            int64_t str2 = v11 + 1; // 0x40b69c
            int64_t v13 = str2 + (int64_t)strspn((char *)str2, "/"); // 0x40b6ad
            v8 = v13;
            v9 = v13;
            if (v7 - v13 <= 4095) {
                goto lab_0x40b6bf;
            }
            v10 = memrchr((int64_t *)v8, 47, 0x1000);
        }
        // 0x40b788
        *v1 = 36;
        // 0x40b706
        return 0xffffffff;
    }
  lab_0x40b6bf:
    // 0x40b6bf
    if (v7 > v9) {
        // 0x40b6c4
        if ((int32_t)function_40b580(&fd) != 0) {
            goto lab_0x40b6f0;
        } else {
            goto lab_0x40b6d5;
        }
    } else {
        goto lab_0x40b6d5;
    }
  lab_0x40b6d5:
    // 0x40b6d5
    if (fchdir(fd) == 0) {
        // 0x40b7a0
        function_40b540(fd);
        // 0x40b706
        return 0;
    }
    goto lab_0x40b6f0;
}
// Address range: 0x40b830 - 0x40b8ab
int64_t function_40b830(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40b837
    if (fileno(stream) < 0) {
        // 0x40b897
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40b84a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40b87b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40b897
            return fclose(stream);
        }
    }
    // 0x40b84c
    if ((int32_t)function_40b9f0(a1, v1) == 0) {
        // 0x40b897
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40b858
    int32_t v3 = *v2; // 0x40b860
    int64_t result = fclose(stream); // 0x40b86e
    if (v3 != 0) {
        // 0x40b8a0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40b870
    return result;
}
// Address range: 0x40b8b0 - 0x40b9e5
int64_t function_40b8b0(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x40b8e0
    if (cmd != 1030) {
        // 0x40b990
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40b8ec
    int64_t v2; // 0x40b8b0
    if (g50 < 0) {
        int64_t v3 = function_40b8b0(fd, 0, v1, a4); // 0x40b934
        int64_t v4 = v3 & 0xffffffff; // 0x40b939
        if ((int32_t)v3 < 0) {
            // 0x40b920
            return v4 & 0xffffffff;
        }
        // 0x40b93f
        v2 = v4;
        if (g50 != -1) {
            // 0x40b920
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40b907
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40b916
            g50 = 1;
            // 0x40b920
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40b8b0(fd & 0xffffffff, 0, v1, a4); // 0x40b9c7
        int64_t v7 = v6 & 0xffffffff; // 0x40b9cc
        if ((int32_t)v6 < 0) {
            // 0x40b920
            return v7 & 0xffffffff;
        }
        // 0x40b9d6
        g50 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40b94f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40b95a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40b920
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40b972
    close(fd2);
    // 0x40b920
    return 0xffffffff;
}
// Address range: 0x40b9f0 - 0x40ba30
int64_t function_40b9f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40ba0a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40ba0a
        return fflush(stream);
    }
    // 0x40ba18
    function_40ba30(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40ba30 - 0x40ba87
int64_t function_40ba30(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40ba30
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40ba3a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40ba6b
    int64_t result = -1; // 0x40ba74
    if (v1 != -1) {
        // 0x40ba76
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40ba82
    return result;
}
// Address range: 0x40ba90 - 0x40bf52
int64_t function_40ba90(int32_t a1, int32_t a2) {
    // 0x40ba90
    int32_t size; // 0x40ba90
    int32_t v1; // 0x40ba90
    int32_t v2; // 0x40ba90
    if (a2 != 0) {
        // 0x40baf0
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x40bac2;
        } else {
            goto lab_0x40bb0c;
        }
    } else {
        // 0x40bab0
        size = 0x1000;
        if (a1 != 0) {
            // 0x40beb0
            *__errno_location() = 22;
            // 0x40bad6
            return 0;
        }
        goto lab_0x40bac2;
    }
  lab_0x40be50:;
    // 0x40be50
    int32_t v3; // 0x40be4a
    int64_t v4 = v3; // 0x40be52
    int64_t v5; // 0x40ba90
    int64_t dirp2 = v5; // 0x40be52
    int32_t * v6; // 0x40bb96
    if (v3 != 0) {
        goto lab_0x40be61;
    } else {
        // 0x40be54
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x40be61;
    }
  lab_0x40bc62:;
    // 0x40bc62
    int64_t v7; // 0x40ba90
    int64_t v8 = v7;
    int64_t v9; // 0x40ba90
    int64_t v10 = v9 + 19; // 0x40bc62
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x40ba90
    int64_t v12; // 0x40ba90
    int32_t v13; // 0x40ba90
    int32_t fd; // 0x40bbb2
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x40bc95
        if (v11 == v12) {
            // break -> 0x40bcb0
            goto lab_0x40bcb0;
        }
    }
    int64_t v14 = v8; // 0x40ba90
    goto lab_0x40bc20_2;
  lab_0x40bf2e_2:
    // 0x40bf2e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x40be61;
  lab_0x40bac2:;
    int64_t * mem = malloc(size); // 0x40bac7
    int32_t v41 = (int64_t)mem; // 0x40bacc
    int32_t result = v41; // 0x40bad4
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x40bad6
        return result;
    }
    goto lab_0x40bb0c;
  lab_0x40bb0c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x40bb11
    int64_t v46 = v45 - 1; // 0x40bb20
    *(char *)v46 = 0;
    int64_t v47; // 0x40ba90
    int64_t v48; // 0x40ba90
    int32_t * v49; // 0x40ba90
    int64_t v50; // 0x40ba90
    int64_t v33; // 0x40ba90
    int64_t v40; // 0x40ba90
    int64_t v51; // 0x40ba90
    int32_t v38; // 0x40ba90
    int32_t v52; // 0x40ba90
    int32_t v53; // 0x40ba90
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x40be88;
    } else {
        // 0x40bb36
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x40be88;
        } else {
            // 0x40bb61
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x40bda8;
            } else {
                // 0x40bb96
                v6 = __errno_location();
                int32_t v54 = v1; // 0x40bba3
                int32_t v55 = v42; // 0x40bba3
                int64_t v56 = v11; // 0x40bba3
                int64_t v57 = v46; // 0x40bba3
                int64_t v58 = 0; // 0x40bba3
                int32_t fd2 = -100; // 0x40bba3
                int64_t dirp3; // 0x40ba90
                while (true) {
                    // 0x40bba6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x40bed7
                        break;
                    }
                    // 0x40bbc2
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x40bee8
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x40becd;
                        } else {
                            // 0x40bef1
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x40becd;
                        }
                    }
                    // 0x40bbdb
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x40bbe0
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x40bec9
                            v40 = (int64_t)*v6;
                            goto lab_0x40becd;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x40bc07
                    if (dirp == NULL) {
                        // 0x40bec9
                        v40 = (int64_t)*v6;
                        goto lab_0x40becd;
                    }
                    // 0x40bc18
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x40bc20_2:;
                        int64_t v15 = v14; // 0x40ba90
                        int64_t v16; // 0x40ba90
                        int64_t v17; // 0x40ba90
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x40bc2b
                            int64_t v20; // 0x40ba90
                            int64_t v21; // 0x40ba90
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x40be00
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x40be50;
                                }
                                // 0x40be0d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x40be18
                                if (v23 == NULL) {
                                    // 0x40be4a
                                    v3 = *v6;
                                    goto lab_0x40be50;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x40bc62;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x40bc43
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x40be30
                            if (*(char *)v28 != 0) {
                                // 0x40be3a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x40bc43
                                    break;
                                }
                            }
                            // 0x40bc20
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x40bc62;
                        } else {
                            // 0x40bc48
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x40bc5d
                            int64_t v32; // 0x40ba90
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x40bc20
                                v14 = v31;
                                goto lab_0x40bc20_2;
                            } else {
                                goto lab_0x40bc62;
                            }
                        }
                    }
                  lab_0x40bcb0:;
                    int64_t v61 = v38; // 0x40bcb8
                    uint64_t v62 = v57 - v61; // 0x40bcb8
                    int32_t len = strlen(str); // 0x40bcbd
                    uint64_t v63 = (int64_t)len; // 0x40bcbd
                    int32_t v64 = v60; // 0x40bcc8
                    int32_t v65 = v38; // 0x40bcc8
                    int64_t dest_mem = v57; // 0x40bcc8
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x40bf40
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x40be61;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x40bcd6
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x40bce1
                        uint64_t v68 = v67 + v66; // 0x40bce5
                        if (v68 < v66) {
                            goto lab_0x40bf2e_2;
                        }
                        // 0x40bcf8
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x40bd00
                        if (mem2 == NULL) {
                            goto lab_0x40bf2e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x40bd00
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x40bd5d
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x40bd8e
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x40be90;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x40bda8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x40bed7
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x40be69;
                } else {
                    goto lab_0x40be61;
                }
            }
        }
    }
  lab_0x40be88:
    // 0x40be88
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x40be90;
  lab_0x40be90:;
    int64_t v77 = (int64_t)*v49; // 0x40be96
    int64_t v34 = v77; // 0x40be9a
    int32_t * v35 = v49; // 0x40be9a
    int32_t * v36 = v49; // 0x40be9a
    int32_t v37 = v53; // 0x40be9a
    int64_t v39 = v77; // 0x40be9a
    if (a1 != 0) {
        goto lab_0x40be71;
    } else {
        goto lab_0x40be9c;
    }
  lab_0x40be71:
    // 0x40be71
    *v35 = (int32_t)v34;
    // 0x40bad6
    return 0;
  lab_0x40be9c:
    // 0x40be9c
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x40be71;
  lab_0x40bda8:
    // 0x40bda8
    if (v51 == v47 - 1 + v48) {
        // 0x40bf17
        int64_t v78; // 0x40ba90
        int64_t v79 = v78 - 1; // 0x40bf1c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x40bdd2
    int32_t v81 = v50 - v51; // 0x40bdd2
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x40bddd
    if (a2 == 0) {
        // 0x40bf00
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x40bad6
    return result2;
  lab_0x40be69:
    // 0x40be69
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x40be9c;
    } else {
        goto lab_0x40be71;
    }
  lab_0x40be61:
    // 0x40be61
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x40be69;
  lab_0x40becd:
    // 0x40becd
    close(fd);
    v33 = v40;
    goto lab_0x40be69;
}
// Address range: 0x40bf60 - 0x40c064
int64_t function_40bf60(int64_t result, uint64_t a2, int64_t a3) {
    // 0x40bf60
    if (a3 == 0) {
        // 0x40bf99
        return 0;
    }
    int64_t v1 = result; // 0x40bf6c
    int64_t v2 = a3; // 0x40bf6c
    int64_t result2; // 0x40bf60
    if (result % 8 != 0) {
        char v3 = a2; // 0x40bf6e
        int64_t v4 = result; // 0x40bf71
        if ((char)result == v3) {
            // 0x40bf99
            return result;
        }
        int64_t v5 = a3; // 0x40bf71
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40bf80
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40bfa0;
            }
            // 0x40bf86
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40bf99
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40bf99
        return result2;
    }
  lab_0x40bfa0:;
    int64_t result3 = v1; // 0x40bfcd
    int64_t v6 = v2; // 0x40bfcd
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40bfaf
        int64_t v8 = 0x10000 * v7 | v7; // 0x40bfbc
        int64_t v9 = 0x100000000 * v8 | v8; // 0x40bfc6
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x40bfe6
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x40c015
            int64_t v12 = v1 + 8; // 0x40c019
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x40c003
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40c02c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x40c023
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x40bf99
                return 0;
            }
        }
    }
  lab_0x40c02c:;
    char v14 = a2; // 0x40c02c
    if (*(char *)result3 == v14) {
        // 0x40bf99
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x40c040
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x40bf99
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x40bf99
    return result2;
}
// Address range: 0x40c070 - 0x40c07e
int64_t function_40c070(int64_t a1, int64_t a2) {
    // 0x40c070
    int64_t v1; // 0x40c070
    return function_40b8b0(a1, 0, 3, v1);
}
// Address range: 0x40c080 - 0x40c0dd
int64_t function_40c080(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c080
    return function_401b40();
}
// Address range: 0x40c0e0 - 0x40c0e1
int64_t function_40c0e0(void) {
    // 0x40c0e0
    int64_t result; // 0x40c0e0
    return result;
}
// Address range: 0x40c0f0 - 0x40c108
int64_t function_40c0f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c0f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x40c108 - 0x40c128
int64_t function_40c108(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x40c112
    while (*(int64_t *)v1 != -1) {
        // 0x40c113
        v1 -= 8;
    }
    // 0x40c124
    return result;
}
