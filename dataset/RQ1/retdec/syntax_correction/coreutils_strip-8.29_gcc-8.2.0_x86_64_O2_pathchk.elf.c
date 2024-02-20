#include "decompile_retdec.h"
// Address range: 0x401620 - 0x401625
int64_t function_401620(void) {
    // 0x401620
    abort();
    // UNREACHABLE
}
// Address range: 0x401625 - 0x40162a
int64_t function_401625(void) {
    // 0x401625
    abort();
    // UNREACHABLE
}
// Address range: 0x40162a - 0x40162f
int64_t function_40162a(void) {
    // 0x40162a
    abort();
    // UNREACHABLE
}
// Address range: 0x40162f - 0x401634
int64_t function_40162f(void) {
    // 0x40162f
    abort();
    // UNREACHABLE
}
// Address range: 0x401634 - 0x401639
int64_t function_401634(void) {
    // 0x401634
    abort();
    // UNREACHABLE
}
// Address range: 0x401639 - 0x40163e
int64_t function_401639(void) {
    // 0x401639
    abort();
    // UNREACHABLE
}
// Address range: 0x401640 - 0x401c85
int64_t function_401640(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401644
    function_402120(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401640
    function_405bc0(0x402080, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    char v3 = 0; // 0x401696
    int64_t v4 = 0; // 0x401696
    int64_t v5; // 0x401640
    char v6; // 0x401640
    while (true) {
        // 0x4016bb
        v6 = v3;
        int64_t v7 = v4; // 0x401640
        uint32_t v8; // 0x401640
        while (true) {
          lab_0x4016bb:
            // 0x4016bb
            v5 = v7;
            v8 = (int32_t)function_4052e0(v1, a2, "+pP", &g3, 0, v2);
            v7 = 1;
            switch (v8) {
                case -1: {
                    goto lab_0x401743;
                }
                case 80: {
                    goto lab_0x4016bb;
                }
                default: {
                    goto lab_0x4016dd;
                }
            }
        }
      lab_0x4016dd:
        if (v8 <= 80) {
            if (v8 == -131) {
                // 0x4016e6
                function_4041c0((int64_t)g31, "pathchk", "GNU coreutils", (int64_t)g19, "Paul Eggert", "David MacKenzie");
                exit(0);
                // UNREACHABLE
            }
            if (v8 == -130) {
                // 0x40172a
                function_401d70(0);
                // UNREACHABLE
            }
            goto lab_0x401c7b;
        }
        // 0x4016a0
        v4 = v5;
        if (v8 != 112) {
            // 0x4016a5
            v4 = 1;
            if (v8 != 128) {
              lab_0x401c7b:
                // 0x401c7b
                function_401d70(1);
                // UNREACHABLE
            }
        }
        // 0x4016b6
        v3 = 1;
    }
  lab_0x401743:;
    uint32_t v9 = *(int32_t *)0x60923c; // 0x401743
    uint32_t v10 = (int32_t)a1; // 0x401749
    if (v9 == v10) {
        // 0x401c5c
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401c7b
        function_401d70(1);
        // UNREACHABLE
    }
    int64_t v11 = v9; // 0x401743
    if (v1 <= v11) {
        // 0x401ab5
        return 0;
    }
    int32_t v12 = 1; // 0x401771
    int64_t v13 = v11; // 0x401771
    int32_t v14; // 0x401640
    int64_t v15; // 0x4017fd
    char * str; // 0x401640
    uint32_t len; // 0x401804
    while (true) {
      lab_0x4017f6:
        // 0x4017f6
        v15 = *(int64_t *)((0x100000000 * v13 >> 29) + a2);
        str = (char *)v15;
        len = strlen(str);
        if ((char)v5 != 0) {
            char * found_char_pos = strchr(str, 45); // 0x401994
            char * v16 = found_char_pos; // 0x40199c
            if (found_char_pos != NULL) {
                int64_t v17 = (int64_t)v16;
                while (v15 != v17) {
                    // 0x401985
                    if (*(char *)(v17 - 1) == 47) {
                        // break -> 0x4019c2
                        break;
                    }
                    char * found_char_pos2 = strchr((char *)(v17 + 1), 45); // 0x401994
                    v16 = found_char_pos2;
                    if (found_char_pos2 == NULL) {
                        goto lab_0x40199e;
                    }
                    v17 = (int64_t)v16;
                }
                // 0x4019c2
                function_403af0(4, v15);
                error(0, (int32_t)"leading '-' in a component of file name %s" ^ (int32_t)"leading '-' in a component of file name %s", dcgettext(NULL, "leading '-' in a component of file name %s", 5));
                v14 = 0;
                goto lab_0x4017d8;
            } else {
                goto lab_0x40199e;
            }
        } else {
            if (v6 == 0) {
                goto lab_0x401776;
            } else {
                if (len == 0) {
                    goto lab_0x401adb;
                } else {
                    goto lab_0x40182b;
                }
            }
        }
    }
  lab_0x401ab5:;
    // 0x401ab5
    int32_t v18; // 0x4017de
    return v18 ^ 1;
  lab_0x40199e:
    if (len == 0) {
        goto lab_0x401adb;
    } else {
        if (v6 != 0) {
            goto lab_0x40182b;
        } else {
            goto lab_0x401776;
        }
    }
  lab_0x401863:;
    // 0x401863
    int64_t v19; // 0x401640
    int64_t v20 = v19; // 0x40186c
    int64_t v21 = v15; // 0x40186c
    int64_t v22; // 0x401640
    int64_t v23; // 0x401640
    int64_t v24; // 0x401640
    while (true) {
      lab_0x401874_2:
        // 0x401874
        v24 = v20;
        int64_t v25 = v21; // 0x401640
        char * v26; // 0x401640
        char v27; // 0x401874
        while (true) {
          lab_0x401874:
            // 0x401874
            v23 = v25;
            v26 = (char *)v23;
            v27 = *v26;
            v14 = 1;
            switch (v27) {
                case 47: {
                    // 0x401870
                    v25 = v23 + 1;
                    goto lab_0x401874;
                }
                case 0: {
                    goto lab_0x4017d8;
                }
                default: {
                    goto lab_0x401887;
                }
            }
        }
      lab_0x401887:
        // 0x401887
        v22 = v24;
        if (v24 != 0) {
            goto lab_0x4018cb;
        } else {
            // 0x401890
            *__errno_location() = 0;
            *v26 = 0;
            int32_t v28 = pathconf(v15 != v23 ? str : (char *)&g2, _PC_NAME_MAX); // 0x4018bb
            *v26 = v27;
            if (v28 < 0) {
                // 0x401929
                int32_t * v29; // 0x4018a0
                int32_t v30 = *v29; // 0x401929
                int64_t v31; // 0x401640
                v22 = v31;
                switch (v30) {
                    case 0: {
                        // 0x401ad2
                        v22 = -1;
                        goto lab_0x4018cb;
                    }
                    case 2: {
                        goto lab_0x4018cb;
                    }
                    default: {
                        // 0x40193e
                        *v26 = 0;
                        char * v32; // 0x40189c
                        int64_t v33 = function_403bc0(0, 3, (int64_t)v32); // 0x40194d
                        int32_t err_num = *v29; // 0x401952
                        error(0, err_num, "%s", (char *)v33);
                        *v26 = v27;
                        v14 = 0;
                        goto lab_0x4017d8;
                    }
                }
            } else {
                // 0x4018c8
                v22 = v28;
                goto lab_0x4018cb;
            }
        }
    }
    goto lab_0x4017d8;
  lab_0x4017d8:
    // 0x4017d8
    v18 = v14 & v12;
    g28 = &g29;
    v12 = v18;
    v13 = &g29;
    if (v10 <= (int32_t)&g29) {
        // break -> 0x401ab5
        goto lab_0x401ab5;
    }
    goto lab_0x4017f6;
  lab_0x4018cb:;
    int64_t v34 = v23 + 1; // 0x4018cb
    char v35 = *(char *)v34; // 0x4018cb
    int64_t v36 = 1; // 0x401640
    int64_t v37 = v34; // 0x401640
    char v38 = v35; // 0x401640
    switch (v35) {
        case 47: {
            goto lab_0x401900;
        }
        case 0: {
            goto lab_0x401900;
        }
        default: {
            int64_t v39 = 2; // 0x4018e1
            int64_t v40 = v39 + v23; // 0x4018e5
            char v41 = *(char *)v40; // 0x4018e5
            int64_t v42 = v39; // 0x4018f2
            v36 = v39;
            v37 = v40;
            v38 = v41;
            while (v41 != 47 == (v41 != 0)) {
                // 0x4018e1
                v39 = v42 + 1;
                v40 = v39 + v23;
                v41 = *(char *)v40;
                v42 = v39;
                v36 = v39;
                v37 = v40;
                v38 = v41;
            }
            goto lab_0x401900;
        }
    }
  lab_0x401900:;
    int64_t v43 = v37;
    v20 = v24;
    v21 = v43;
    if (v22 < v36) {
        char * v44 = (char *)v43; // 0x401c0b
        *v44 = 0;
        function_403d40(v23);
        error(0, (int32_t)"limit %lu exceeded by length %lu of file name component %s" ^ (int32_t)"limit %lu exceeded by length %lu of file name component %s", dcgettext(NULL, "limit %lu exceeded by length %lu of file name component %s", 5));
        *v44 = v38;
        v14 = 0;
        goto lab_0x4017d8;
    }
    goto lab_0x401874_2;
  lab_0x401776:;
    // 0x401776
    int64_t v45; // bp-200, 0x401640
    int32_t v46 = __lxstat(1, str, (struct stat *)&v45); // 0x401783
    v14 = 1;
    if (v46 == 0) {
        goto lab_0x4017d8;
    } else {
        int32_t * err_num2 = __errno_location(); // 0x401790
        if (!((len == 0 | *err_num2 != 2))) {
            if (len < 256) {
                goto lab_0x401a4c;
            } else {
                // 0x401a11
                *err_num2 = 0;
                char * path = *str != 47 ? (char *)&g2 : (char *)&g4; // 0x401a32
                int32_t v47 = pathconf(path, _PC_PATH_MAX); // 0x401a32
                if (v47 < 0) {
                    // 0x401b02
                    if (*err_num2 == 0) {
                        goto lab_0x401a4c;
                    } else {
                        // 0x401b0c
                        error(0, *err_num2, dcgettext(NULL, "%s: unable to determine maximum file name length", 5));
                        v14 = 0;
                        goto lab_0x4017d8;
                    }
                } else {
                    if (len >= v47) {
                        goto lab_0x401bbf;
                    } else {
                        goto lab_0x401a4c;
                    }
                }
            }
        } else {
            // 0x4017ae
            error(0, *err_num2, "%s", (char *)function_403bc0(0, 3, v15));
            v14 = 0;
            goto lab_0x4017d8;
        }
    }
  lab_0x401adb:
    // 0x401adb
    error(0, (int32_t)"empty file name" ^ (int32_t)"empty file name", dcgettext(NULL, "empty file name", 5));
    v14 = 0;
    goto lab_0x4017d8;
  lab_0x40182b:;
    int64_t ini_seg_bytes = strspn(str, "/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-"); // 0x401833
    int64_t v48 = v15 + ini_seg_bytes; // 0x401838
    if (*(char *)v48 != 0) {
        // 0x401b39
        v45 = 0;
        uint64_t v49 = function_405360(v48, (int64_t)len - ini_seg_bytes, &v45); // 0x401b50
        function_403a10(0, 4, v15);
        function_403a80(1, 8, v48, v49 < 17 ? v49 : 1);
        error(0, (int32_t)"nonportable character %s in file name %s" ^ (int32_t)"nonportable character %s in file name %s", dcgettext(NULL, "nonportable character %s in file name %s", 5));
        v14 = 0;
        goto lab_0x4017d8;
    } else {
        // 0x401846
        v19 = 14;
        if (len < 256) {
            goto lab_0x401863;
        } else {
            goto lab_0x401bbf;
        }
    }
  lab_0x401a4c:;
    int64_t v50 = v15; // 0x401a4f
    while (true) {
      lab_0x401a5c_2:;
        int64_t v51 = v50; // 0x401a5c
        char v52 = *(char *)v50; // 0x401a5c
        int64_t v53; // 0x401640
        while (true) {
          lab_0x401a5f:
            // 0x401a5f
            v53 = v51;
            v14 = 1;
            switch (v52) {
                case 47: {
                    goto lab_0x401a58;
                }
                case 0: {
                    goto lab_0x4017d8;
                }
                default: {
                    int64_t v54 = v53 + 1; // 0x401a6c
                    char v55 = *(char *)v54; // 0x401a6c
                    switch (v55) {
                        case 0: {
                            // 0x401ab0
                            v51 = v54;
                            v52 = v55;
                            goto lab_0x401a5f;
                        }
                        case 47: {
                            // 0x401ab0
                            v51 = v54;
                            v52 = v55;
                            goto lab_0x401a5f;
                        }
                        default: {
                            int64_t v56 = 2; // 0x401a82
                            int64_t v57 = v56 + v53; // 0x401a86
                            char v58 = *(char *)v57; // 0x401a86
                            int64_t v59 = v56; // 0x401a91
                            while (v58 != 47 == (v58 != 0)) {
                                // 0x401a82
                                v56 = v59 + 1;
                                v57 = v56 + v53;
                                v58 = *(char *)v57;
                                v59 = v56;
                            }
                            // 0x401a97
                            v19 = 0;
                            int64_t v60 = v57; // 0x401a9e
                            if (v56 >= 15) {
                                goto lab_0x401863;
                            }
                            // 0x401a5c
                            v50 = v60;
                            goto lab_0x401a5c_2;
                        }
                    }
                }
            }
        }
      lab_0x401a58:
        // 0x401a5c
        v50 = v53 + 1;
        goto lab_0x401a5c_2;
    }
    goto lab_0x4017d8;
  lab_0x401bbf:
    // 0x401bbf
    function_403af0(4, v15);
    error(0, (int32_t)"limit %lu exceeded by length %lu of file name %s" ^ (int32_t)"limit %lu exceeded by length %lu of file name %s", dcgettext(NULL, "limit %lu exceeded by length %lu of file name %s", 5));
    v14 = 0;
    goto lab_0x4017d8;
}
// Address range: 0x401c90 - 0x401cbb
// Address range: 0x401cbb - 0x401cda
int64_t function_401cbb(void) {
    // 0x401cbb
    return &g30;
}
// Address range: 0x401cda - 0x401d11
int64_t function_401cda(void) {
    // 0x401cda
    return 0;
}
// Address range: 0x401d11 - 0x401d68
int64_t function_401d11(void) {
    // 0x401d11
    if (g34 != 0) {
        // 0x401d67
        int64_t result; // 0x401d11
        return result;
    }
    int64_t v1 = g35; // 0x401d44
    int64_t result2; // 0x401d56
    if (g35 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401d56
        result2 = function_401cbb();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401d46
        v1++;
    }
    // 0x401d3a
    g35 = v1;
    // 0x401d56
    result2 = function_401cbb();
    g34 = 1;
    return result2;
}
// Address range: 0x401d68 - 0x401d6d
int64_t function_401d68(void) {
    // 0x401d68
    return function_401cda();
}
// Address range: 0x401d70 - 0x40205d
int64_t function_401d70(int32_t status) {
    // 0x401d70
    if (status != 0) {
        // 0x401d8a
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401daf
        exit(status);
        // UNREACHABLE
    }
    // 0x401db6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... NAME...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Diagnose invalid or unportable file names.\n\n  -p                  check for most POSIX systems\n  -P                  check for empty names and leading \"-\"\n      --portability   check for all POSIX systems (equivalent to -p -P)\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    int64_t v1 = &g1; // bp-136, 0x401e3d
    bool v2; // 0x401d70
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401ec0
    int64_t v6 = *(int64_t *)v5; // 0x401ec4
    int64_t v7 = 8; // 0x401eca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"pathchk";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401ed6
        char v11 = *(char *)v9; // 0x401ed6
        char v12 = v11; // 0x401ed6
        bool v13 = false; // 0x401ed6
        while (v10 == v11) {
            // 0x401ecc
            v7--;
            int64_t v14 = v9 + v3; // 0x401ed6
            int64_t v15 = v8 + v3; // 0x401ed6
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
            // break -> 0x401ee2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 8;
    }
    // 0x401ee2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401ff4;
        } else {
            // 0x401fde
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402033
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401f44;
            } else {
                goto lab_0x401ff4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401f44;
        } else {
            // 0x401f2a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402033
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401f44;
            } else {
                goto lab_0x401f44;
            }
        }
    }
  lab_0x401ff4:
    // 0x401ff4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401f84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401daf
    exit(status);
    // UNREACHABLE
  lab_0x401f44:
    // 0x401f44
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401f84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401daf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402060 - 0x402068
int64_t function_402060(int64_t a1) {
    // 0x402060
    g37 = a1;
    int64_t result; // 0x402060
    return result;
}
// Address range: 0x402070 - 0x402078
int64_t function_402070(int64_t a1) {
    // 0x402070
    g36 = a1;
    int64_t result; // 0x402070
    return result;
}
// Address range: 0x402080 - 0x40211e
int64_t function_402080(void) {
    // 0x402080
    int32_t * err_num; // 0x402096
    if ((int32_t)function_405400((int64_t)g31) == 0) {
        goto lab_0x4020ac;
    } else {
        // 0x402096
        err_num = __errno_location();
        if (g36 == 0) {
            goto lab_0x4020c3;
        } else {
            // 0x4020a7
            if (*err_num != 32) {
                goto lab_0x4020c3;
            } else {
                goto lab_0x4020ac;
            }
        }
    }
  lab_0x4020ac:;
    int64_t result = function_405400((int64_t)g33); // 0x4020b3
    if ((int32_t)result == 0) {
        // 0x4020bc
        return result;
    }
    // 0x4020fe
    _exit(g20);
    // UNREACHABLE
  lab_0x4020c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4020cf
    if (g37 == 0) {
        // 0x402109
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4020e3
        error(0, *err_num, "%s: %s", (char *)function_403b90((int64_t)g37), v1);
    }
    // 0x4020fe
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x402120 - 0x4021b9
int64_t function_402120(int64_t str) {
    // 0x402120
    if (str == 0) {
        // 0x402199
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40212e
    int64_t result = (int64_t)found_char_pos; // 0x40212e
    if (found_char_pos == NULL) {
        // 0x402189
        g38 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402138
    if (v1 - str < 7) {
        // 0x402189
        g38 = str;
        g32 = str;
        return result;
    }
    // 0x402148
    bool v2; // 0x402120
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402120
    int64_t v5 = result - 6; // 0x402120
    int64_t v6 = 7; // 0x402156
    unsigned char v7 = *(char *)v5; // 0x402156
    char v8 = *(char *)v4; // 0x402156
    char v9 = v8; // 0x402156
    bool v10 = false; // 0x402156
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
    int64_t v12 = (int64_t)"lt-"; // 0x402160
    int64_t v13 = v1; // 0x402160
    int64_t v14 = 3; // 0x402160
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402189
        g38 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402172
    char v16 = *(char *)v12; // 0x402172
    char v17 = v16; // 0x402172
    bool v18 = false; // 0x402172
    while (v15 == v16) {
        // 0x402162
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
    int64_t v20 = v1; // 0x40217c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40217e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x402189
    g38 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x4021c0 - 0x4022b2
int64_t function_4021c0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4021d4
    int64_t result = (int64_t)v1; // 0x4021d4
    if (result != a1) {
        // 0x4021e1
        return result;
    }
    int64_t v2 = function_4054c0(); // 0x4021f0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4022a6
    if (v3 == 85) {
        // 0x402200
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402298
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x40222e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40223b
        // 0x4021e1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402298
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40227d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40228a
    // 0x4021e1
    return result4;
}
// Address range: 0x4022c0 - 0x402317
int64_t function_4022c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4022c0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402308
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402317 - 0x4034e1
int64_t function_402317(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402361
    int64_t v3 = 0; // 0x402361
    int64_t v4; // 0x402317
    int64_t v5; // 0x402317
    int64_t v6; // 0x402317
    int64_t v7; // 0x402317
    int64_t v8; // 0x402317
    int64_t v9; // 0x402317
    int64_t v10; // 0x402317
    int64_t v11; // 0x402317
    int64_t v12; // 0x402317
    int64_t v13; // 0x402317
    int64_t v14; // 0x402317
    int64_t v15; // 0x402317
    int64_t v16; // 0x402317
    int64_t v17; // 0x402317
    int64_t v18; // 0x402317
    int64_t result; // 0x402317
    int64_t v19; // 0x402317
    int32_t wc; // bp+132, 0x402317
    int64_t ps; // bp+136, 0x402317
    char v20; // 0x4028d0
    int64_t v21; // 0x4028d0
    int64_t v22; // 0x402c78
    int64_t v23; // 0x402317
    int64_t v24; // 0x402c97
    int32_t v25; // 0x402317
    while (true) {
      lab_0x402368_2:
        // 0x402368
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402317
        int64_t v27; // 0x40239c
        while (true) {
          lab_0x402368:
            // 0x402368
            v5 = v26;
            bool v28 = v15 == v5; // 0x402373
            if (v15 == -1) {
                // 0x402375
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402383
            if (v28) {
                // break (via goto) -> 0x402ae8
                goto lab_0x402ae8;
            }
            // 0x40238c
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
                    // 0x40297b
                    if (v25 % 2 == 0) {
                        goto lab_0x4024c1;
                    }
                    // 0x402d9d
                    v26 = v5 + 1;
                    goto lab_0x402368;
                }
                case 7: {
                    goto lab_0x4024c1;
                }
                case 8: {
                    goto lab_0x4024c1;
                }
                case 9: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4024c1;
                }
                case 12: {
                    goto lab_0x4024c1;
                }
                case 13: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40248d;
                }
                case 36: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4024c1;
                }
                case 38: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4024c1;
                }
                case 44: {
                    goto lab_0x4024c1;
                }
                case 45: {
                    goto lab_0x4024c1;
                }
                case 46: {
                    goto lab_0x4024c1;
                }
                case 47: {
                    goto lab_0x4024c1;
                }
                case 48: {
                    goto lab_0x4024c1;
                }
                case 49: {
                    goto lab_0x4024c1;
                }
                case 50: {
                    goto lab_0x4024c1;
                }
                case 51: {
                    goto lab_0x4024c1;
                }
                case 52: {
                    goto lab_0x4024c1;
                }
                case 53: {
                    goto lab_0x4024c1;
                }
                case 54: {
                    goto lab_0x4024c1;
                }
                case 55: {
                    goto lab_0x4024c1;
                }
                case 56: {
                    goto lab_0x4024c1;
                }
                case 57: {
                    goto lab_0x4024c1;
                }
                case 58: {
                    goto lab_0x4024c1;
                }
                case 59: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4024c1;
                }
                case 66: {
                    goto lab_0x4024c1;
                }
                case 67: {
                    goto lab_0x4024c1;
                }
                case 68: {
                    goto lab_0x4024c1;
                }
                case 69: {
                    goto lab_0x4024c1;
                }
                case 70: {
                    goto lab_0x4024c1;
                }
                case 71: {
                    goto lab_0x4024c1;
                }
                case 72: {
                    goto lab_0x4024c1;
                }
                case 73: {
                    goto lab_0x4024c1;
                }
                case 74: {
                    goto lab_0x4024c1;
                }
                case 75: {
                    goto lab_0x4024c1;
                }
                case 76: {
                    goto lab_0x4024c1;
                }
                case 77: {
                    goto lab_0x4024c1;
                }
                case 78: {
                    goto lab_0x4024c1;
                }
                case 79: {
                    goto lab_0x4024c1;
                }
                case 80: {
                    goto lab_0x4024c1;
                }
                case 81: {
                    goto lab_0x4024c1;
                }
                case 82: {
                    goto lab_0x4024c1;
                }
                case 83: {
                    goto lab_0x4024c1;
                }
                case 84: {
                    goto lab_0x4024c1;
                }
                case 85: {
                    goto lab_0x4024c1;
                }
                case 86: {
                    goto lab_0x4024c1;
                }
                case 87: {
                    goto lab_0x4024c1;
                }
                case 88: {
                    goto lab_0x4024c1;
                }
                case 89: {
                    goto lab_0x4024c1;
                }
                case 90: {
                    goto lab_0x4024c1;
                }
                case 91: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4024c1;
                }
                case 94: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4024c1;
                }
                case 96: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4024c1;
                }
                case 98: {
                    goto lab_0x4024c1;
                }
                case 99: {
                    goto lab_0x4024c1;
                }
                case 100: {
                    goto lab_0x4024c1;
                }
                case 101: {
                    goto lab_0x4024c1;
                }
                case 102: {
                    goto lab_0x4024c1;
                }
                case 103: {
                    goto lab_0x4024c1;
                }
                case 104: {
                    goto lab_0x4024c1;
                }
                case 105: {
                    goto lab_0x4024c1;
                }
                case 106: {
                    goto lab_0x4024c1;
                }
                case 107: {
                    goto lab_0x4024c1;
                }
                case 108: {
                    goto lab_0x4024c1;
                }
                case 109: {
                    goto lab_0x4024c1;
                }
                case 110: {
                    goto lab_0x4024c1;
                }
                case 111: {
                    goto lab_0x4024c1;
                }
                case 112: {
                    goto lab_0x4024c1;
                }
                case 113: {
                    goto lab_0x4024c1;
                }
                case 114: {
                    goto lab_0x4024c1;
                }
                case 115: {
                    goto lab_0x4024c1;
                }
                case 116: {
                    goto lab_0x4024c1;
                }
                case 117: {
                    goto lab_0x4024c1;
                }
                case 118: {
                    goto lab_0x4024c1;
                }
                case 119: {
                    goto lab_0x4024c1;
                }
                case 120: {
                    goto lab_0x4024c1;
                }
                case 121: {
                    goto lab_0x4024c1;
                }
                case 122: {
                    goto lab_0x4024c1;
                }
                case 123: {
                    goto lab_0x402465;
                }
                case 124: {
                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402465;
                }
                case 126: {
                    goto lab_0x40248d;
                }
                default: {
                    goto lab_0x402865;
                }
            }
        }
      lab_0x402865:
        if (v23 != 1) {
            // 0x402bd0
            ps = 0;
            int64_t len = v15; // 0x402be0
            if (v15 == -1) {
                // 0x402be2
                len = strlen((char *)str);
            }
            // 0x402c0e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402c6f:
                // 0x402c6f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402c74
                int64_t v30 = v29 + str;
                v24 = function_405380(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4031ea_2;
                    }
                    case -1: {
                        goto lab_0x4031ea_2;
                    }
                    case -2: {
                        // 0x4032cd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403307
                            v19 = v18;
                            int64_t v31 = v18; // 0x40330a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403317
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403310
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4031ea
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4031ea_2;
                    }
                    case 1: {
                        goto lab_0x402c40;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402cec
                        char v34 = *(char *)v33; // 0x402cfd
                        unsigned char v35; // 0x402317
                        if (v34 < 125) {
                            // 0x402d08
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402d1f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402cf0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402cfd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402d08
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402d1f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402cf0
                            v33++;
                        }
                        goto lab_0x402c40;
                    }
                }
            }
            goto lab_0x4031ea_2;
        } else {
            // 0x4028b4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4024c1;
        }
    }
  lab_0x402ae8:
    // 0x402ae8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4033ea
        if (v8 > result) {
            // 0x4033f3
            *(char *)(v12 + result) = 0;
        }
        // 0x402717
        return result;
    }
    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4024c1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4024d0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4026da_2;
        }
    }
    int64_t v39 = result; // 0x4025d1
    char v40 = v20; // 0x4025d1
    int64_t v41 = v38; // 0x4025d1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4025d1
    int64_t v43 = v36; // 0x4025d1
    goto lab_0x40254d;
  lab_0x4026da_2:
    // 0x402717
    return function_4022c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4031ea_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4024c1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402dbe
        int64_t v50 = v5 + 1; // 0x402ea1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402ea8
        char v52 = v20; // 0x402ea8
        int64_t v53 = result; // 0x402ea8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402e71
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402e75
            int64_t v56 = v54 + 1; // 0x402e7a
            int64_t v57 = v51 + 1; // 0x402ea1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402e6c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402e71
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402e75
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
        goto lab_0x40254d;
    }
  lab_0x402c40:
    // 0x402c40
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402c5f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402c62
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4031ea
        goto lab_0x4031ea_2;
    }
    goto lab_0x402c6f;
  lab_0x40248d:
    // 0x40248d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4026da_2;
    }
    goto lab_0x4024c1;
  lab_0x402465:;
    bool v60 = v15 == 1; // 0x402470
    if (v15 == -1) {
        // 0x402472
        v60 = *(char *)v1 == 0;
    }
    // 0x40247e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4024c1;
    } else {
        goto lab_0x40248d;
    }
  lab_0x40254d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402552
        *(char *)(v44 + v45) = v40;
    }
    // 0x402556
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402368_2;
}
// Address range: 0x4034f0 - 0x40368e
int64_t function_4034f0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4034f2
    int32_t * v3 = __errno_location(); // 0x40350c
    int64_t v4 = (int64_t)g22; // 0x403511
    int32_t v5 = *v3; // 0x40351b
    int64_t v6 = v4; // 0x403531
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403689
            function_404550(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403540
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403547
        int64_t v9; // 0x4034f0
        if (g22 == &g23) {
            int64_t v10 = function_404360(0, v8); // 0x40366a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x40366f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404360(v4, v8); // 0x40355b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40356a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40356a
        int32_t v14 = v7; // 0x403571
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4035a1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4035ab
    int64_t * v17 = (int64_t *)v15; // 0x4035ae
    uint64_t v18 = *v17; // 0x4035ae
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4035b1
    int64_t result = *v19; // 0x4035b1
    int64_t v20; // 0x4034f0
    uint64_t v21 = function_4022c0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4035d4
    if (v18 > v21) {
        // 0x40364b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4035e7
    *v17 = v22;
    if (result != (int64_t)&g39) {
        // 0x4035f7
        free((int64_t *)result);
    }
    int64_t result2 = function_404300(v22); // 0x403611
    *v19 = result2;
    int64_t v23; // 0x4034f0
    function_4022c0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40364b
    *v3 = v5;
    return result2;
}
// Address range: 0x403690 - 0x4036c4
int64_t function_403690(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403697
    int64_t result = function_404500(a1 == 0 ? (int64_t)&g40 : a1, 56); // 0x4036b6
    return result;
}
// Address range: 0x4036d0 - 0x4036df
int64_t function_4036d0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g40 : a1); // 0x4036dc
    return result;
}
// Address range: 0x4036e0 - 0x4036ef
int64_t function_4036e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x4036e8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g40;
}
// Address range: 0x4036f0 - 0x403723
int64_t function_4036f0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 + 8 : a1 + 8; // 0x403709
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40370e
    uint32_t v3 = *v2; // 0x40370e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403712
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403730 - 0x403743
int64_t function_403730(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g40 + 4 : a1 + 4); // 0x40373c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403750 - 0x40377b
int64_t function_403750(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x403758
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403775
        abort();
        // UNREACHABLE
    }
    // 0x40376c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g40;
}
// Address range: 0x403780 - 0x4037f2
int64_t function_403780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g40 : a5; // 0x4037a2
    int32_t * v2 = __errno_location(); // 0x4037ab
    uint32_t v3 = *(int32_t *)v1; // 0x4037cb
    int64_t result = function_4022c0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4037da
    return result;
}
// Address range: 0x403800 - 0x4038e1
int64_t function_403800(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g40 : a4; // 0x403822
    int32_t * v2 = __errno_location(); // 0x403828
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403847
    int32_t * v4 = (int32_t *)v1; // 0x40384a
    int64_t v5 = function_4022c0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403865
    int64_t v6 = v5 + 1; // 0x40386a
    int64_t result = function_404300(v6); // 0x40387f
    function_4022c0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4038c4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4038cd
    return result;
}
// Address range: 0x4038f0 - 0x4038fa
int64_t function_4038f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4038f0
    return function_403800(a1, a2, 0, a3);
}
// Address range: 0x403900 - 0x403995
int64_t function_403900(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403900
    int64_t v2 = v1; // 0x403900
    int64_t v3 = v2; // 0x403914
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403933
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403930
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x40394d
    if (g23 != 0x6092a0) {
        // 0x40394f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g39;
        v6 = &g50;
    }
    int64_t result = v6; // 0x403971
    if (g22 != &g23) {
        // 0x403973
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g50;
    }
    // 0x403986
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x4039a0 - 0x4039b1
int64_t function_4039a0(void) {
    // 0x4039a0
    int64_t v1; // 0x4039a0
    return function_4034f0(v1, v1, -1, (int64_t *)&g40);
}
// Address range: 0x4039c0 - 0x4039ca
int64_t function_4039c0(void) {
    // 0x4039c0
    int64_t v1; // 0x4039c0
    return function_4034f0(v1, v1, v1, (int64_t *)&g40);
}
// Address range: 0x4039d0 - 0x4039e6
int64_t function_4039d0(int64_t a1) {
    // 0x4039d0
    return function_4034f0(0, a1, -1, (int64_t *)&g40);
}
// Address range: 0x4039f0 - 0x403a02
int64_t function_4039f0(int64_t a1, int64_t a2) {
    // 0x4039f0
    return function_4034f0(0, a1, a2, (int64_t *)&g40);
}
// Address range: 0x403a10 - 0x403a78
int64_t function_403a10(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403a20
    return function_4034f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403a80 - 0x403ae4
int64_t function_403a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403a90
    return function_4034f0(a1, a3, a4, &v1);
}
// Address range: 0x403af0 - 0x403afc
int64_t function_403af0(int64_t a1, int64_t a2) {
    // 0x403af0
    return function_403a10(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403b00 - 0x403b0f
int64_t function_403b00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403b00
    return function_403a80(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403b10 - 0x403b80
int64_t function_403b10(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x403b1d
    int128_t v2 = __asm_movdqa(g41); // 0x403b25
    int128_t v3 = __asm_movdqa(g42); // 0x403b2d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403b42
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403b58
    uint32_t v6 = *v5; // 0x403b58
    uint32_t v7 = (int32_t)a3 % 32; // 0x403b5d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4034f0(0, a1, a2, &v4);
}
// Address range: 0x403b80 - 0x403b8d
int64_t function_403b80(int64_t a1, int64_t a2) {
    // 0x403b80
    return function_403b10(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403b90 - 0x403ba1
int64_t function_403b90(int64_t a1) {
    // 0x403b90
    return function_403b10(a1, -1, 58);
}
// Address range: 0x403bb0 - 0x403bba
int64_t function_403bb0(void) {
    // 0x403bb0
    int64_t v1; // 0x403bb0
    return function_403b10(v1, v1, 58);
}
// Address range: 0x403bc0 - 0x403c2e
int64_t function_403bc0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403bda
    return function_4034f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403c30 - 0x403c9c
int64_t function_403c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x403c37
    int128_t v2 = __asm_movdqa(g41); // 0x403c3f
    int128_t v3 = __asm_movdqa(g42); // 0x403c47
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403c69
    if (a2 == 0 || a3 == 0) {
        // 0x403c97
        abort();
        // UNREACHABLE
    }
    // 0x403c7a
    return function_4034f0(a1, a4, a5, &v4);
}
// Address range: 0x403ca0 - 0x403ca9
int64_t function_403ca0(void) {
    // 0x403ca0
    int64_t v1; // 0x403ca0
    return function_403c30(v1, v1, v1, v1, -1);
}
// Address range: 0x403cb0 - 0x403cc7
int64_t function_403cb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403cb0
    return function_403c30(0, a1, a2, a3, -1);
}
// Address range: 0x403cd0 - 0x403ce3
int64_t function_403cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403cd0
    return function_403c30(0, a1, a2, a3, a4);
}
// Address range: 0x403cf0 - 0x403cfa
int64_t function_403cf0(void) {
    // 0x403cf0
    int64_t v1; // 0x403cf0
    return function_4034f0(v1, v1, v1, &g21);
}
// Address range: 0x403d00 - 0x403d12
int64_t function_403d00(int64_t a1, int64_t a2) {
    // 0x403d00
    return function_4034f0(0, a1, a2, &g21);
}
// Address range: 0x403d20 - 0x403d31
int64_t function_403d20(void) {
    // 0x403d20
    int64_t v1; // 0x403d20
    return function_4034f0(v1, v1, -1, &g21);
}
// Address range: 0x403d40 - 0x403d56
int64_t function_403d40(int64_t a1) {
    // 0x403d40
    return function_4034f0(0, a1, -1, &g21);
}
// Address range: 0x403d60 - 0x40413d
int64_t function_403d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403df8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403d7c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403d96
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403ddb
    if (a6 < 10) {
        // 0x403dea
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403ee2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404140 - 0x404160
int64_t function_404140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404140
    if (a5 == 0) {
        // 0x40415b
        return function_403d60(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x404147
    v1++;
    int64_t v2 = v1; // 0x404159
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404150
        v1++;
        v2 = v1;
    }
    // 0x40415b
    return function_403d60(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x404160 - 0x4041c0
int64_t function_404160(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404160
    int64_t v3 = &v2; // 0x404160
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404193
    int64_t v6; // 0x40417d
    int64_t * v7; // 0x40419b
    int64_t v8; // 0x40419b
    int64_t v9; // 0x4041a7
    if (v5 < 48) {
        // 0x404170
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4041b3
            break;
        }
    } else {
        // 0x40419b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4041b3
            break;
        }
    }
    int64_t v10 = 10; // 0x404191
    while (v4 != 9) {
        // 0x404189
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404170
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4041b3
                break;
            }
        } else {
            // 0x40419b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4041b3
                break;
            }
        }
        // 0x404189
        v10 = 10;
    }
    // 0x4041b3
    return function_403d60(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x4041c0 - 0x40427c
int64_t function_4041c0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4041c0
    int64_t v1; // bp-168, 0x4041c0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4041c0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4041c0
    int64_t v8; // 0x4041c0
    int64_t v9; // bp-56, 0x4041c0
    int64_t v10; // 0x404225
    int64_t v11; // 0x404249
    if ((int32_t)v6 < 48) {
        // 0x404210
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404260
            break;
        }
    } else {
        // 0x404242
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404260
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40423a
    int64_t v13 = 10; // 0x40423a
    while (v5 != 9) {
        // 0x40423c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404210
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404260
                break;
            }
        } else {
            // 0x404242
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404260
                break;
            }
        }
        // 0x404232
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404260
    int64_t v14; // bp-136, 0x4041c0
    int64_t result = function_403d60(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x40426f
    return result;
}
// Address range: 0x404280 - 0x4042f4
int64_t function_404280(int64_t a1) {
    // 0x404280
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4042e3
    return fputs_unlocked(v1, g31);
}
// Address range: 0x404300 - 0x40431a
int64_t function_404300(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404304
    if (size != 0 != (mem == NULL)) {
        // 0x404313
        return (int64_t)mem;
    }
    // 0x404315
    function_404550(size);
    // UNREACHABLE
}
// Address range: 0x404320 - 0x404341
int64_t function_404320(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404323
    int64_t v2 = v1; // 0x404323
    if (v2 < 0) {
        // 0x40433b
        function_404550(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404339
        return function_404300(v2);
    }
    // 0x40433b
    function_404550(v2);
    // UNREACHABLE
}
// Address range: 0x404350 - 0x404352
int64_t function_404350(void) {
    // 0x404350
    int64_t v1; // 0x404350
    return function_404300(v1);
}
// Address range: 0x404360 - 0x404396
int64_t function_404360(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404388
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404371
    if (a2 != 0 != (mem == NULL)) {
        // 0x404380
        return (int64_t)mem;
    }
    // 0x404391
    function_404550(a1);
    // UNREACHABLE
}
// Address range: 0x4043a0 - 0x4043c1
int64_t function_4043a0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4043a3
    int64_t v2 = v1; // 0x4043a3
    if (v2 < 0) {
        // 0x4043bb
        function_404550(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4043b9
        return function_404360(a1, v2);
    }
    // 0x4043bb
    function_404550(a1);
    // UNREACHABLE
}
// Address range: 0x4043d0 - 0x404456
int64_t function_4043d0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40442b
            function_404550(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404360(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404413
    if (a2 == 0) {
        // 0x404438
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404418
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40442b
        function_404550(a1);
        // UNREACHABLE
    }
    // 0x4043fa
    *(int64_t *)a2 = v2;
    return function_404360(a1, v2 * a3);
}
// Address range: 0x404460 - 0x4044b0
int64_t function_404460(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404460
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4044aa
            function_404550(a1);
            // UNREACHABLE
        }
        // 0x404482
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404360(a1, v1);
    }
    if (a2 == 0) {
        // 0x404495
        *(int64_t *)a2 = 128;
        return function_404360(0, 128);
    }
    // 0x4044a8
    if (a2 < 0) {
        // 0x4044aa
        function_404550(a1);
        // UNREACHABLE
    }
    // 0x404482
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404360(a1, v1);
}
// Address range: 0x4044b0 - 0x4044c7
int64_t function_4044b0(int64_t a1, int64_t a2) {
    // 0x4044b0
    return (int64_t)memset((int64_t *)function_404300(a1), 0, (int32_t)a1);
}
// Address range: 0x4044d0 - 0x4044fe
int64_t function_4044d0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4044d7
    if ((int64_t)v1 < 0) {
        // 0x4044f9
        function_404550(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4044f9
        function_404550(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4044ea
    if (mem != NULL) {
        // 0x4044f4
        return (int64_t)mem;
    }
    // 0x4044f9
    function_404550(nmemb);
    // UNREACHABLE
}
// Address range: 0x404500 - 0x404528
int64_t function_404500(int64_t a1, int64_t a2) {
    int64_t v1 = function_404300(a2); // 0x40450f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404530 - 0x404543
int64_t function_404530(int64_t str) {
    // 0x404530
    return function_404500(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404550 - 0x404581
int64_t function_404550(int64_t a1) {
    // 0x404550
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404590 - 0x40466f
int64_t function_404590(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40459c
    uint32_t v2 = *v1; // 0x40459c
    int64_t v3 = a2 & 0xffffffff; // 0x4045a1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4045a4
    uint64_t v5 = (int64_t)*v4; // 0x4045a4
    int64_t v6; // 0x404612
    if (v3 <= v5) {
      lab_0x40460c_2:
        // 0x40460c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404592
    int64_t v8 = v2; // 0x404590
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40460c
        goto lab_0x40460c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4045c8
    int64_t v17; // 0x4045d6
    int64_t * v18; // 0x4045f0
    int64_t * v19; // 0x4045f3
    int64_t v20; // 0x4045fe
    int64_t v21; // 0x4045d6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4045d3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4045f0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404607
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40460c
            goto lab_0x40460c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40460c
            goto lab_0x40460c_2;
        }
        // 0x4045c2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40464b
    int64_t * v23 = (int64_t *)v22; // 0x404650
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404653
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404650
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404667
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4045bd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40460c
            goto lab_0x40460c_2;
        }
        // 0x4045c2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4045d3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4045f0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404607
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40460c
                goto lab_0x40460c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40460c
                goto lab_0x40460c_2;
            }
            // 0x4045c2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404630
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404650
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404667
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40460c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404670 - 0x404c8c
int64_t function_404670(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40468f
    int64_t v2 = *v1; // 0x40468f
    char * str2 = (char *)v2; // 0x40469c
    char c = *str2; // 0x40469c
    int64_t v3 = v2; // 0x4046c8
    int64_t v4 = 0; // 0x404670
    int32_t v5; // 0x404670
    int64_t v6; // 0x404670
    int64_t v7; // 0x404670
    int64_t v8; // 0x404670
    int64_t v9; // 0x404670
    int64_t v10; // 0x404670
    int64_t v11; // 0x404670
    int64_t v12; // 0x404670
    int64_t v13; // 0x404670
    int64_t str3; // 0x404670
    int64_t v14; // 0x404670
    int64_t v15; // 0x404670
    int64_t v16; // 0x404670
    int64_t v17; // 0x404670
    int32_t v18; // 0x404670
    int32_t v19; // 0x404670
    int32_t v20; // 0x404670
    int32_t v21; // 0x404670
    int32_t v22; // 0x404670
    int32_t v23; // 0x404670
    int32_t v24; // 0x404670
    int32_t v25; // 0x404670
    int32_t v26; // 0x404670
    int32_t v27; // 0x404670
    int32_t v28; // 0x404670
    int32_t v29; // 0x404670
    int64_t nmemb; // 0x404670
    int64_t v30; // 0x404670
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4046cc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4046c8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4046d8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4046de
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4046a8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40470c
                int64_t v34; // 0x404670
                int64_t v35; // 0x404670
                if (strncmp(str, str2, n) == 0) {
                    // 0x404715
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404890;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404726
                int64_t v37 = *(int64_t *)v36; // 0x40472a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404700
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404715
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404890;
                        }
                    }
                    // 0x404726
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
                  lab_0x404776:
                    // 0x404776
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
                        goto lab_0x4047d0;
                    } else {
                        if (v11 == 0) {
                            // 0x404940
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4047d0;
                        } else {
                            if (v39 == 0) {
                                // 0x4048f0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40479a;
                                } else {
                                    // 0x4048fc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40479a;
                                    } else {
                                        // 0x40490a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40479a;
                                        } else {
                                            goto lab_0x4047d0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40479a;
                            }
                        }
                    }
                }
              lab_0x4047e1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4049b6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404b62
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x404b82
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404bcf
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x404be9
                            int64_t v45; // 0x404beb
                            if (*(char *)v42 != 0) {
                                // 0x404beb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404be3
                            while (v17 + nmemb != v42) {
                                // 0x404be5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404beb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x404bd8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404c10
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x4049c4
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404b1f
                        free((int64_t *)v17);
                    }
                    // 0x404a19
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404a30
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4048de
                    return 63;
                }
                // 0x404800
                v5 = v39;
                if (v13 != 0) {
                    // 0x404884
                    v35 = v13;
                    v34 = v25;
                  lab_0x404890:;
                    int32_t * v49 = (int32_t *)a7; // 0x4048a0
                    uint32_t v50 = *v49; // 0x4048a0
                    int64_t v51 = v50; // 0x4048a0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4048aa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4048b3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404adf
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404a8a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4048de
                            return 63;
                        }
                        // 0x404928
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404c3f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404b3d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404b50
                                // 0x4048de
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404a4e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404a62
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4048cb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4048ce
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4048d2
                    int64_t result = v59; // 0x4048d8
                    if (v58 != 0) {
                        // 0x4048da
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4048de
                    return result;
                }
            } else {
                // 0x4046de
                v5 = v32;
            }
            // break -> 0x404805
            break;
        }
    }
    // 0x404805
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40481d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404827
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4048de
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404969
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404856
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404866
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4047d0:
    // 0x4047d0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4047d0
    int64_t v63 = *(int64_t *)v62; // 0x4047d4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4047e1
        goto lab_0x4047e1;
    }
    goto lab_0x404776;
  lab_0x40479a:
    // 0x40479a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404670
    int32_t v65; // 0x404670
    int32_t v66; // 0x404670
    if (v27 != 0) {
        goto lab_0x4047d0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404950
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4047d0;
            } else {
                goto lab_0x4047c1;
            }
        } else {
            // 0x4047b5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404aac
                int64_t v67 = (int64_t)mem; // 0x404aac
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4047d0;
                } else {
                    // 0x404abf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4047c1;
                }
            } else {
                goto lab_0x4047c1;
            }
        }
    }
  lab_0x4047c1:
    // 0x4047c1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4047d0;
}
// Address range: 0x404c90 - 0x405256
int64_t function_404c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404cb1
    if (v3 < 1) {
        // 0x404e6e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404cad
    int32_t v5 = *(int32_t *)a7; // 0x404cb9
    uint64_t v6 = a1 & 0xffffffff; // 0x404cbb
    int64_t v7 = v2; // 0x404cc0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404cc3
    *v8 = 0;
    int64_t v9; // 0x404c90
    int64_t v10; // 0x404c90
    int64_t v11; // 0x404c90
    int64_t v12; // 0x404c90
    int64_t str; // 0x404c90
    int64_t v13; // 0x404c90
    int64_t v14; // 0x404c90
    int64_t v15; // 0x404c90
    int64_t v16; // 0x404c90
    int64_t v17; // 0x404c90
    int32_t v18; // 0x404c90
    char v19; // 0x404c90
    if (v5 == 0) {
        // 0x404ea8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404cda;
    } else {
        // 0x404cd3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404d20
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404d23
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404de8;
            } else {
                int64_t v22 = v7 + 1; // 0x404d36
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404d46
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404dfc;
                } else {
                    goto lab_0x404d58;
                }
            }
        } else {
            goto lab_0x404cda;
        }
    }
  lab_0x404cda:
    // 0x404cda
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404ce0
    *v24 = 0;
    int64_t v25; // 0x404c90
    int64_t v26; // 0x404c90
    int64_t v27; // 0x404c90
    switch (*(char *)&v2) {
        case 45: {
            // 0x404dd0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404ddd;
        }
        case 43: {
            // 0x4050e0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404ddd;
        }
        default: {
            // 0x404cfc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40505f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405178
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404ddd;
                } else {
                    // 0x40506d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404d0a;
                }
            } else {
                goto lab_0x404d0a;
            }
        }
    }
  lab_0x404de8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404def
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404d58;
    } else {
        goto lab_0x404dfc;
    }
  lab_0x404d0a:
    // 0x404d0a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404ddd;
  lab_0x404ddd:
    // 0x404ddd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404de8;
  lab_0x404d58:;
    uint32_t v30 = *(int32_t *)a7; // 0x404d58
    int64_t v31 = v30; // 0x404d58
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404d5a
    if ((int64_t)*v32 > v31) {
        // 0x404d5f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404d62
    if (*v33 > v30) {
        // 0x404d67
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404d6a
    int64_t v35 = v31; // 0x404d6e
    int64_t v36 = v15; // 0x404d6e
    int64_t v37; // 0x404c90
    int64_t v38; // 0x404c90
    int64_t v39; // 0x404c90
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404ed8
        int64_t v41 = v40; // 0x404ed8
        v2 = v41;
        int64_t v42; // 0x404c90
        if (*v33 == v40) {
            // 0x4050c0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4050c8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404ee4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404ef8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404f01
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404f0a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404f21
            int64_t v47 = v45 & 0xffffffff; // 0x404f25
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404f2e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404f34
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404f36;
                }
            }
            int64_t v48 = v47 + 1; // 0x404f10
            int64_t v49 = v48 & 0xffffffff; // 0x404f10
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404f21
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404f2e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404f34
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404f36;
                    }
                }
                // 0x404f10
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4050d8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404f36;
    } else {
        goto lab_0x404d74;
    }
  lab_0x404dfc:
    // 0x404dfc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404dff
    int64_t v51 = v12; // 0x404dff
    int64_t v52 = v14; // 0x404dff
    if (*(char *)v10 == 0) {
        goto lab_0x404d58;
    } else {
        goto lab_0x404e05;
    }
  lab_0x404d74:;
    int32_t v53 = v35; // 0x404d74
    int64_t v54; // 0x404c90
    int64_t v55; // 0x404c90
    int64_t v56; // 0x404c90
    int64_t v57; // 0x404c90
    int64_t v58; // 0x404c90
    int64_t v59; // 0x404c90
    char * v60; // 0x404c90
    int64_t v61; // 0x404c90
    int64_t v62; // 0x404d89
    int64_t v63; // 0x404c90
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404ec3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404ec6;
    } else {
        // 0x404d7c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404c90
        int64_t v66 = v65 ? -1 : 1; // 0x404d90
        int64_t v67 = (int64_t)"--"; // 0x404c90
        int64_t v68 = v62; // 0x404c90
        int64_t v69 = 3; // 0x404d90
        unsigned char v70 = *(char *)v68; // 0x404d90
        char v71 = *(char *)v67; // 0x404d90
        char v72 = v71; // 0x404d90
        bool v73 = false; // 0x404d90
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
            // 0x404e80
            if (*(char *)v62 == 45) {
                // 0x404f40
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404f40
                if (c == 0) {
                    goto lab_0x404e8a;
                } else {
                    // 0x404f4d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404fd0;
                    } else {
                        if (c == 45) {
                            // 0x4051b3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405025;
                        } else {
                            // 0x404f5e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404fd0;
                            } else {
                                // 0x404f63
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404f84;
                                } else {
                                    // 0x404f6a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404fd0;
                                    } else {
                                        goto lab_0x404f84;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404e8a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404da0
            v2 = v75;
            int32_t v76 = *v32; // 0x404da3
            int64_t v77 = v35 + 1; // 0x404da6
            int32_t v78 = v77; // 0x404da9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405110
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404db7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404dc5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404ec6;
        }
    }
  lab_0x404e05:;
    // 0x404e05
    int64_t v79; // bp-104, 0x404c90
    int64_t v80 = &v79; // 0x404c9a
    int64_t v81 = v50 + 1; // 0x404e05
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404e0c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404e11
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404e15
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404e19
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404e21
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404e26
    int32_t c2 = v84; // 0x404e26
    char * found_char_pos = strchr(str2, c2); // 0x404e26
    int64_t v87 = *v82; // 0x404e2b
    v2 = v87;
    int64_t v88 = *v85; // 0x404e35
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404e40
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405130
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4050fd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404e6e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404e26
    char v91 = *(char *)(v90 + 1); // 0x404e5b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404e15
        if (v91 != 58) {
            // 0x404e6e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405084
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405188
                *v8 = 0;
            } else {
                // 0x40516c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4050ae
            *v83 = 0;
            // 0x404e6e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40508e
        if (v93 != 0) {
            // 0x405120
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4050ae
            *v83 = 0;
            // 0x404e6e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4050a1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4050ae
            *v83 = 0;
            // 0x404e6e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4051ea
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40519a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4051a1
        // 0x4050ae
        *v83 = 0;
        // 0x404e6e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404ff9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404ffb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405220
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4051d1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4051d8
            // 0x404e6e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405006
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40500a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405025;
  lab_0x404f36:
    // 0x404f36
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404d74;
  lab_0x405025:;
    int64_t v99 = function_404670(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405043
    // 0x404e6e
    return v99 & 0xffffffff;
  lab_0x404ec6:;
    int32_t v100 = v55; // 0x404ec6
    if (v100 != (int32_t)v59) {
        // 0x404eca
        *(int32_t *)a7 = v100;
    }
    // 0x404e6e
    return 0xffffffff;
  lab_0x404e8a:
    // 0x404e8a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404e91
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404e6e
    return v99 & 0xffffffff;
  lab_0x404fd0:
    // 0x404fd0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404e05;
  lab_0x404f84:
    // 0x404f84
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404670(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404faa
    if ((int32_t)v101 != -1) {
        // 0x404e6e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404fbf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404fd0;
}
// Address range: 0x405260 - 0x4052b6
int64_t function_405260(int64_t a1) {
    // 0x405260
    *(int32_t *)&g43 = g28;
    *(int32_t *)&g44 = g27;
    int64_t v1; // 0x405260
    int64_t result = function_404c90(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x405286
    g28 = *(int32_t *)&g43;
    g48 = g46;
    *(int32_t *)&g26 = g45;
    return result;
}
// Address range: 0x4052c0 - 0x4052d8
int64_t function_4052c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4052c0
    return function_405260(1);
}
// Address range: 0x4052e0 - 0x4052f3
int64_t function_4052e0(int64_t a1, int64_t a2, char * a3, char (**a4)[12], int32_t a5, int64_t a6) {
    // 0x4052e0
    return function_405260(0);
}
// Address range: 0x405300 - 0x405315
int64_t function_405300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405300
    return function_404c90(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405320 - 0x405336
int64_t function_405320(void) {
    // 0x405320
    return function_405260(0);
}
// Address range: 0x405340 - 0x405358
int64_t function_405340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405340
    return function_404c90(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405360 - 0x40537c
int64_t function_405360(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x405360
    return function_405380(NULL, a1, a2);
}
// Address range: 0x405380 - 0x4053fa
int64_t function_405380(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40538b
    int64_t v2 = (int64_t)&g12; // 0x40538b
    int32_t * pwc; // 0x405380
    int64_t v3; // 0x405380
    int64_t n; // 0x405380
    if (a2 == 0) {
        goto lab_0x4053d2;
    } else {
        // 0x40538d
        if (a3 == 0) {
            // 0x4053b8
            return -2;
        }
        // 0x405399
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4053d2;
        } else {
            goto lab_0x4053a4;
        }
    }
  lab_0x4053d2:
    // 0x4053d2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405380
    pwc = (int32_t *)&v4;
    goto lab_0x4053a4;
  lab_0x4053a4:;
    char * wstr = (char *)v3; // 0x4053aa
    int64_t ps; // 0x405380
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4053aa
    int64_t result = v5; // 0x4053aa
    if (v5 < 0xfffffffe) {
        // 0x4053b8
        return result;
    }
    int64_t result2 = result; // 0x4053e9
    if ((char)function_405460(0, v3) == 0) {
        // 0x4053eb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4053b8
    return result2;
}
// Address range: 0x405400 - 0x40545d
int64_t function_405400(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405407
    int64_t v2; // 0x405400
    int64_t result = function_405a30(a1, v2); // 0x405418
    if ((v2 & 32) != 0) {
        // 0x405440
        if ((int32_t)result == 0) {
            // 0x405444
            *__errno_location() = 0;
        }
        // 0x40543a
        return 0xffffffff;
    }
    // 0x405421
    if ((int32_t)result == 0) {
        // 0x40543a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405428
    if (v1 == 0) {
        // 0x40542a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40543a
    return result2;
}
// Address range: 0x405460 - 0x4054be
int64_t function_405460(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405466
    if (locale == NULL) {
        // 0x405493
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405466
    bool v2; // 0x405460
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x405460
    int64_t v5 = v1; // 0x405460
    int64_t v6 = 2; // 0x405485
    unsigned char v7 = *(char *)v5; // 0x405485
    char v8 = *(char *)v4; // 0x405485
    char v9 = v8; // 0x405485
    bool v10 = false; // 0x405485
    while (v7 == v8) {
        // 0x405478
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405491
    int64_t v13 = v1; // 0x405491
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405493
        return 0;
    }
    int64_t v14 = 6; // 0x405491
    unsigned char v15 = *(char *)v13; // 0x4054ad
    char v16 = *(char *)v12; // 0x4054ad
    char v17 = v16; // 0x4054ad
    bool v18 = false; // 0x4054ad
    while (v15 == v16) {
        // 0x4054a0
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
// Address range: 0x4054c0 - 0x405a22
int64_t function_4054c0(void) {
    char * v1 = nl_langinfo(14); // 0x4054d6
    char * v2 = g47; // 0x4054db
    char * v3; // 0x4054c0
    int64_t v4; // 0x4054c0
    int64_t v5; // 0x4054c0
    int64_t v6; // 0x4054c0
    int64_t v7; // 0x4054c0
    int32_t size; // 0x4054c0
    int32_t size2; // 0x4054c0
    int32_t len; // 0x405592
    int64_t v8; // 0x405592
    char * env_val; // 0x40557d
    if (v2 == NULL) {
        // 0x405578
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4055e5;
        } else {
            // 0x40558a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4055e5;
            } else {
                // 0x40558f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40557d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405a15
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4055e5;
                    } else {
                        // 0x405989
                        size2 = len + 14;
                        goto lab_0x4055ab;
                    }
                } else {
                    goto lab_0x4055ab;
                }
            }
        }
    } else {
        // 0x4054c0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4054fa;
    }
  lab_0x40582c:;
    // 0x40582c
    struct _IO_FILE * stream; // 0x40566b
    int32_t v10 = __uflow(stream); // 0x40582f
    int64_t v11; // 0x4054c0
    int64_t v12 = v11; // 0x405839
    int64_t v13; // 0x4054c0
    int64_t v14 = v13; // 0x405839
    int32_t v15 = v10; // 0x405839
    int64_t v16; // 0x4054c0
    int64_t v17 = v16; // 0x405839
    int64_t v18 = v11; // 0x405839
    int64_t v19 = v13; // 0x405839
    int64_t v20 = v16; // 0x405839
    if (v10 == -1) {
        // break -> 0x40583f
        goto lab_0x40583f;
    }
    goto lab_0x4056b9;
  lab_0x4056ae:;
    // 0x4056ae
    int64_t v90; // 0x4054c0
    int64_t * v32; // 0x4056a0
    *v32 = v90 + 1;
    int64_t v89; // 0x4054c0
    v12 = v89;
    int64_t v91; // 0x4054c0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4054c0
    v17 = v92;
    goto lab_0x4056b9;
  lab_0x4056b9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4054c0
    int32_t v25; // bp-120, 0x4054c0
    int32_t v26; // bp-184, 0x4054c0
    int64_t v27; // 0x40566b
    int64_t v28; // 0x405688
    int64_t v29; // 0x40568d
    int64_t * v30; // 0x4056a4
    switch (c) {
        case 32: {
            goto lab_0x4056a0;
        }
        case 10: {
            goto lab_0x4056a0;
        }
        case 9: {
            goto lab_0x4056a0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405891
            int32_t v33; // 0x4054c0
            char v34; // 0x4054c0
            int32_t v35; // 0x40589e
            if (v31 < *v30) {
                // 0x405870
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40589b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405891
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405870
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40589b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405880
                v36 = v33;
            }
            // 0x40596f
            if (v36 == -1) {
                // break -> 0x40583f
                break;
            }
            goto lab_0x4056a0;
        }
        default: {
            // 0x4056cf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40583f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4056f8
            int64_t v39 = v37 + 4; // 0x4056fa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405706
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405708
            while (v41 == 0) {
                // 0x4056f8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405726
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405732
            int64_t v45 = v43 + 4; // 0x405734
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405740
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405742
            while (v47 == 0) {
                // 0x405732
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40572f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405758
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405768
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40576c
            int64_t v52 = v51 + v48; // 0x405775
            int64_t * mem; // 0x4054c0
            int64_t v53; // 0x4054c0
            int64_t v54; // 0x4054c0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4058ab
                int64_t v56 = v55 + 3; // 0x4058b7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405791
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4057a0
            if (mem == NULL) {
                // 0x4059cc
                free((int64_t *)v21);
                function_405a30(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405644;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4057b8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4057c2
            uint32_t v62 = (int32_t)v59; // 0x4057c5
            int64_t v63; // 0x4054c0
            if (v62 >= 8) {
                // 0x4058d4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4058ee
                int64_t v66 = v61 - v65; // 0x4058f2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4058fd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40590e
                    int64_t v70 = v69 & 0xffffffff; // 0x40590e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40590b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40599f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4057d7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4057db
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
            int64_t v73 = v51 + 1; // 0x4057eb
            int64_t v74 = v60 - 1; // 0x4057ef
            uint32_t v75 = (int32_t)v73; // 0x4057f4
            int64_t v76; // 0x4054c0
            if (v75 >= 8) {
                // 0x405922
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40592c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40593c
                int64_t v80 = v74 - v79; // 0x405940
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40594b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40595b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405959
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4059b6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4059be
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405806
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40580a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405a03
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40581e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4056ae;
            } else {
                goto lab_0x40582c;
            }
        }
    }
  lab_0x4056a0:;
    int64_t v93 = v23; // 0x4054c0
    int64_t v94 = v22; // 0x4054c0
    int64_t v95 = v21; // 0x4054c0
    goto lab_0x4056a0_2;
  lab_0x4055e5:;
    int64_t * mem3 = malloc(size); // 0x4055e5
    int64_t v97 = (int64_t)&g12; // 0x4055f0
    int64_t v98; // 0x4054c0
    int64_t path; // 0x4054c0
    if (mem3 == NULL) {
        goto lab_0x4055c2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4055e5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405606;
    }
  lab_0x4054fa:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x4054ed
    char v100 = *v3; // 0x4054fa
    int64_t v101; // 0x4054c0
    if (v100 == 0) {
        // 0x405554
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4054c0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4054c0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405540
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405547;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405510
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40551d
        char v107 = *(char *)v106; // 0x405522
        v102 = v107;
        if (v107 == 0) {
            // 0x405554
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40552b
    v104 = v103 + 1;
  lab_0x405547:
    // 0x405554
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4055c2:;
    char * v108 = (char *)v97;
    g47 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4054fa;
  lab_0x405606:;
    int64_t v109 = v98 + path; // 0x405606
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405632
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405661
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405992
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405685
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4056a0_2:;
                uint64_t v96 = *v32; // 0x4056a0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40582c;
                } else {
                    goto lab_0x4056ae;
                }
            }
          lab_0x40583f:
            // 0x40583f
            function_405a30(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40585e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405644;
  lab_0x4055ab:;
    int64_t * mem4 = malloc(size2); // 0x4055ab
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405651
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405606;
    } else {
        goto lab_0x4055c2;
    }
  lab_0x405644:
    // 0x405644
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4055c2;
}
// Address range: 0x405a30 - 0x405aab
int64_t function_405a30(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405a37
    if (fileno(stream) < 0) {
        // 0x405a97
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405a4a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405a7b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405a97
            return fclose(stream);
        }
    }
    // 0x405a4c
    if ((int32_t)function_405ab0(a1, v1) == 0) {
        // 0x405a97
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405a58
    int32_t v3 = *v2; // 0x405a60
    int64_t result = fclose(stream); // 0x405a6e
    if (v3 != 0) {
        // 0x405aa0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405a70
    return result;
}
// Address range: 0x405ab0 - 0x405af0
int64_t function_405ab0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405aca
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405aca
        return fflush(stream);
    }
    // 0x405ad8
    function_405af0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405af0 - 0x405b47
int64_t function_405af0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405af0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405afa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405b2b
    int64_t result = -1; // 0x405b34
    if (v1 != -1) {
        // 0x405b36
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405b42
    return result;
}
// Address range: 0x405b50 - 0x405bad
int64_t function_405b50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405b50
    return function_4012a8();
}
// Address range: 0x405bb0 - 0x405bb1
int64_t function_405bb0(void) {
    // 0x405bb0
    int64_t result; // 0x405bb0
    return result;
}
// Address range: 0x405bc0 - 0x405bd8
int64_t function_405bc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405bc0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x405bd8 - 0x405bf8
int64_t function_405bd8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x405be2
    while (*(int64_t *)v1 != -1) {
        // 0x405be3
        v1 -= 8;
    }
    // 0x405bf4
    return result;
}
