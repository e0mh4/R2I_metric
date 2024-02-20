#include "decompile_retdec.h"
// Address range: 0x401800 - 0x401805
int64_t function_401800(void) {
    // 0x401800
    abort();
    // UNREACHABLE
}
// Address range: 0x401805 - 0x40180a
int64_t function_401805(void) {
    // 0x401805
    abort();
    // UNREACHABLE
}
// Address range: 0x40180a - 0x40180f
int64_t function_40180a(void) {
    // 0x40180a
    abort();
    // UNREACHABLE
}
// Address range: 0x40180f - 0x401814
int64_t function_40180f(void) {
    // 0x40180f
    abort();
    // UNREACHABLE
}
// Address range: 0x401814 - 0x401819
int64_t function_401814(void) {
    // 0x401814
    abort();
    // UNREACHABLE
}
// Address range: 0x401819 - 0x40181e
int64_t function_401819(void) {
    // 0x401819
    abort();
    // UNREACHABLE
}
// Address range: 0x401820 - 0x401b0b
int64_t function_401820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401826
    function_402250(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_405f50(0x402160, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2; // 0x401820
    int64_t v3 = function_405440(v1, a2, (int64_t *)&g10, &g2, 0, v2); // 0x40187b
    int32_t v4 = v3; // 0x401880
    if (v4 != -1) {
        if (v4 == -131) {
            // 0x40188c
            function_4042f0((int64_t)g29, "groups", "GNU coreutils", (int64_t)g17, "David MacKenzie", "James Youngman");
            exit(0);
            // UNREACHABLE
        }
        if (v4 == -130) {
            // 0x401a74
            function_401bf0(0);
            // UNREACHABLE
        }
        // 0x4018cc
        function_401bf0(1);
        // UNREACHABLE
    }
    uint32_t v5 = *(int32_t *)0x60927c; // 0x4018d6
    if (v5 != (int32_t)a1) {
        int64_t v6 = v5; // 0x4018d6
        if (v1 <= v6) {
            // 0x401a55
            return 0;
        }
        struct passwd * v7 = getpwnam((char *)*(int64_t *)((0x100000000 * v6 >> 29) + a2)); // 0x401989
        int64_t v8; // 0x401820
        int64_t v9; // 0x401989
        int64_t v10; // 0x401911
        int64_t v11; // 0x40191c
        int64_t v12; // 0x401938
        int64_t v13; // 0x40193c
        int64_t v14; // 0x401941
        int64_t v15; // 0x40194f
        int64_t * v16; // 0x401952
        uint64_t v17; // 0x401952
        if (v7 != NULL) {
            // 0x4018f8
            v9 = (int64_t)v7;
            v10 = *(int64_t *)(8 * (int64_t)g26 + a2);
            __printf_chk(1, "%s : ", (char *)v10);
            v11 = (int64_t)*(int32_t *)(v9 + 20);
            v12 = *(int64_t *)(8 * (int64_t)g26 + a2);
            v13 = function_401f60(v12, (int64_t)*(int32_t *)(v9 + 16), v11, v11, 1, 32);
            v14 = (int64_t)g29;
            v15 = (char)v13 == 0 ? 0 : 1;
            v16 = (int64_t *)(v14 + 40);
            v17 = *v16;
            if (v17 >= *(int64_t *)(v14 + 48)) {
                // 0x401a65
                __overflow(g29, 10);
                v8 = v15;
            } else {
                // 0x401960
                *v16 = v17 + 1;
                *(char *)v17 = 10;
                v8 = v15;
            }
        } else {
            // 0x401997
            function_403e70(*(int64_t *)(8 * (int64_t)g26 + a2));
            error(0, (int32_t)"%s: no such user" ^ (int32_t)"%s: no such user", dcgettext(NULL, "%s: no such user", 5));
            v8 = 0;
        }
        // 0x40196b
        g26 = &g27;
        int64_t v18 = &g27; // 0x40197d
        int64_t v19 = v8; // 0x40197d
        while (v1 > (int64_t)&g27) {
            // 0x401983
            v7 = getpwnam((char *)*(int64_t *)((0x100000000 * v18 >> 29) + a2));
            if (v7 != NULL) {
                // 0x4018f8
                v9 = (int64_t)v7;
                v10 = *(int64_t *)(8 * (int64_t)g26 + a2);
                __printf_chk(1, "%s : ", (char *)v10);
                v11 = (int64_t)*(int32_t *)(v9 + 20);
                v12 = *(int64_t *)(8 * (int64_t)g26 + a2);
                v13 = function_401f60(v12, (int64_t)*(int32_t *)(v9 + 16), v11, v11, 1, 32);
                v14 = (int64_t)g29;
                v15 = (char)v13 == 0 ? 0 : v19 & 0xffffffff;
                v16 = (int64_t *)(v14 + 40);
                v17 = *v16;
                if (v17 >= *(int64_t *)(v14 + 48)) {
                    // 0x401a65
                    __overflow(g29, 10);
                    v8 = v15;
                } else {
                    // 0x401960
                    *v16 = v17 + 1;
                    *(char *)v17 = 10;
                    v8 = v15;
                }
            } else {
                // 0x401997
                function_403e70(*(int64_t *)(8 * (int64_t)g26 + a2));
                error(0, (int32_t)"%s: no such user" ^ (int32_t)"%s: no such user", dcgettext(NULL, "%s: no such user", 5));
                v8 = 0;
            }
            // 0x40196b
            g26 = &g27;
            v18 = &g27;
            v19 = v8;
        }
        // 0x401a55
        return v8 % 256 ^ 1;
    }
    int32_t * err_num = __errno_location(); // 0x4019d0
    *err_num = 0;
    uint32_t v20 = getuid(); // 0x4019de
    int64_t v21 = v20; // 0x4019e3
    int64_t v22; // 0x401820
    int64_t v23; // 0x401820
    if (v20 == -1) {
        // 0x401a7b
        if (*err_num == 0) {
            goto lab_0x4019ee;
        } else {
            // 0x401a84
            error(1, *err_num, dcgettext(NULL, "cannot get real UID", 5));
            v23 = &g49;
            v22 = v1;
            goto lab_0x401aa6;
        }
    } else {
        goto lab_0x4019ee;
    }
  lab_0x4019ee:
    // 0x4019ee
    *err_num = 0;
    uint32_t v24 = getegid(); // 0x4019f4
    int64_t v25 = v24; // 0x4019ff
    int64_t v26 = 0xffffffff; // 0x4019ff
    if (v24 == -1) {
        goto lab_0x401ad1;
    } else {
        goto lab_0x401a05;
    }
  lab_0x401ad1:
    // 0x401ad1
    v25 = v26;
    int64_t v27; // 0x401820
    int64_t v28; // 0x401820
    if (*err_num == 0) {
        goto lab_0x401a05;
    } else {
        // 0x401ada
        error(1, *err_num, dcgettext(NULL, "cannot get effective GID", 5));
        v27 = v21;
        v28 = 1;
        goto lab_0x401afc;
    }
  lab_0x401a05:
    // 0x401a05
    *err_num = 0;
    int32_t v29 = getgid(); // 0x401a0b
    int64_t v30 = v29; // 0x401a13
    int64_t v31 = v25; // 0x401a13
    v23 = -1;
    v22 = v25;
    if (v29 == -1) {
        goto lab_0x401aa6;
    } else {
        goto lab_0x401a19;
    }
  lab_0x401aa6:
    // 0x401aa6
    v30 = v23;
    v31 = v22;
    if (*err_num == 0) {
        goto lab_0x401a19;
    } else {
        // 0x401aaf
        error(1, *err_num, dcgettext(NULL, "cannot get real GID", 5));
        v26 = v22;
        goto lab_0x401ad1;
    }
  lab_0x401a19:;
    int64_t v32 = function_401f60(0, v21, v30 & 0xffffffff, v31 & 0xffffffff, 1, 32); // 0x401a2e
    int64_t v33 = (int64_t)g29; // 0x401a33
    int64_t v34 = v32 & 0xffffffff; // 0x401a3a
    int64_t * v35 = (int64_t *)(v33 + 40); // 0x401a3c
    uint64_t v36 = *v35; // 0x401a3c
    v27 = v34;
    v28 = v33;
    if (v36 < *(int64_t *)(v33 + 48)) {
        // 0x401a4a
        *v35 = v36 + 1;
        *(char *)v36 = 10;
        // 0x401a55
        return v34 % 256 ^ 1;
    }
    goto lab_0x401afc;
  lab_0x401afc:
    // 0x401afc
    __overflow((struct _IO_FILE *)v28, 10);
    // 0x401a55
    return v27 % 256 ^ 1;
}
// Address range: 0x401b10 - 0x401b3b
// Address range: 0x401b3b - 0x401b5a
int64_t function_401b3b(void) {
    // 0x401b3b
    return &g28;
}
// Address range: 0x401b5a - 0x401b91
int64_t function_401b5a(void) {
    // 0x401b5a
    return 0;
}
// Address range: 0x401b91 - 0x401be8
int64_t function_401b91(void) {
    // 0x401b91
    if (g32 != 0) {
        // 0x401be7
        int64_t result; // 0x401b91
        return result;
    }
    int64_t v1 = g33; // 0x401bc4
    int64_t result2; // 0x401bd6
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401bd6
        result2 = function_401b3b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401bc6
        v1++;
    }
    // 0x401bba
    g33 = v1;
    // 0x401bd6
    result2 = function_401b3b();
    g32 = 1;
    return result2;
}
// Address range: 0x401be8 - 0x401bed
int64_t function_401be8(void) {
    // 0x401be8
    return function_401b5a();
}
// Address range: 0x401bf0 - 0x401edd
int64_t function_401bf0(int64_t a1) {
    int32_t status = a1; // 0x401c06
    if (status != 0) {
        // 0x401c0a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401c2f
        exit(status);
        // UNREACHABLE
    }
    // 0x401c36
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [USERNAME]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print group memberships for each USERNAME or, if no USERNAME is specified, for\nthe current process (which may differ if the groups database has changed).\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x401cbd
    bool v2; // 0x401bf0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401d40
    int64_t v6 = *(int64_t *)v5; // 0x401d44
    int64_t v7 = 7; // 0x401d4a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"groups";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401d56
        char v11 = *(char *)v9; // 0x401d56
        char v12 = v11; // 0x401d56
        bool v13 = false; // 0x401d56
        while (v10 == v11) {
            // 0x401d4c
            v7--;
            int64_t v14 = v9 + v3; // 0x401d56
            int64_t v15 = v8 + v3; // 0x401d56
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
            // break -> 0x401d62
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x401d62
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401e74;
        } else {
            // 0x401e5e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401eb3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401dc4;
            } else {
                goto lab_0x401e74;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401dc4;
        } else {
            // 0x401daa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401eb3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401dc4;
            } else {
                goto lab_0x401dc4;
            }
        }
    }
  lab_0x401e74:
    // 0x401e74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401e04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c2f
    exit(status);
    // UNREACHABLE
  lab_0x401dc4:
    // 0x401dc4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401e04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c2f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401ee0 - 0x401f55
int64_t function_401ee0(int64_t gid, int64_t a2) {
    int64_t v1 = 1; // 0x401ef0
    if ((char)a2 != 0) {
        struct group * v2 = getgrgid((int32_t)gid); // 0x401ef6
        if (v2 != NULL) {
            // 0x401f40
            fputs_unlocked((char *)*(int64_t *)v2, g29);
            return a2 & 0xffffffff & 0xffffffff;
        }
        // 0x401f08
        error(0, (int32_t)"cannot find name for group ID %lu" ^ (int32_t)"cannot find name for group ID %lu", dcgettext(NULL, "cannot find name for group ID %lu", 5));
        v1 = 0;
    }
    int64_t v3 = function_402200(gid & 0xffffffff, &g34); // 0x401f38
    // 0x401f40
    fputs_unlocked((char *)v3, g29);
    return v1 & 0xffffffff;
}
// Address range: 0x401f60 - 0x40213f
int64_t function_401f60(int64_t a1, int64_t uid, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a6; // 0x401f80
    int64_t v2 = 1; // 0x401f80
    int64_t v3; // 0x401f60
    if (a1 != 0) {
        // 0x401f86
        v1 = a6 & 0xffffffff;
        v2 = v3 & 0xffffff00 | (int64_t)(getpwuid((int32_t)uid) != NULL);
    }
    uint64_t v4 = a5 % 256; // 0x401fa1
    int64_t v5 = (char)function_401ee0(a3 & 0xffffffff, v4) == 0 ? 0 : v2; // 0x401fbb
    int32_t v6 = a3; // 0x401fbf
    int32_t v7 = a4; // 0x401fbf
    int64_t v8 = v5; // 0x401fc1
    if (v6 != v7) {
        int64_t v9 = (int64_t)g29; // 0x401fc3
        int64_t * v10 = (int64_t *)(v9 + 40); // 0x401fcf
        uint64_t v11 = *v10; // 0x401fcf
        if (v11 >= *(int64_t *)(v9 + 48)) {
            // 0x402131
            __overflow(g29, (int32_t)v1 % 256);
        } else {
            // 0x401fdd
            *v10 = v11 + 1;
            *(char *)v11 = (char)v1;
        }
        // 0x401fe8
        v8 = (char)function_401ee0(a4 & 0xffffffff, v4) == 0 ? 0 : v5 & 0xffffffff;
    }
    int64_t v12 = function_4046c0(); // 0x402010
    int32_t v13 = v12; // 0x402015
    if (v13 < 0) {
        int32_t * err_num = __errno_location(); // 0x4020c0
        if (a1 == 0) {
            // 0x402110
            error(0, *err_num, dcgettext(NULL, "failed to get groups for the current process", 5));
        } else {
            // 0x4020cd
            function_403e70(a1);
            error(0, *err_num, dcgettext(NULL, "failed to get groups for user %s", 5));
        }
        // 0x40209b
        return 0;
    }
    // 0x40201d
    if (v13 == 0) {
        // 0x402096
        free((int64_t *)v3);
        // 0x40209b
        return v8 & 0xffffffff;
    }
    int64_t v14 = 0x100000000000000 * a6 >> 56; // 0x401f78
    int64_t v15 = 0;
    int32_t * v16 = (int32_t *)(v15 + v3); // 0x402040
    int32_t v17 = *v16; // 0x402040
    int64_t v18 = v8; // 0x402046
    int64_t v19; // 0x40204c
    int64_t * v20; // 0x402053
    uint64_t v21; // 0x402053
    if (v17 != v7 && v17 != v6) {
        // 0x40204c
        v19 = (int64_t)g29;
        v20 = (int64_t *)(v19 + 40);
        v21 = *v20;
        if (v21 >= *(int64_t *)(v19 + 48)) {
            // 0x402100
            __overflow(g29, (int32_t)v14 % 256);
        } else {
            // 0x402061
            *v20 = v21 + 1;
            *(char *)v21 = (char)v14;
        }
        // 0x402070
        v18 = (char)function_401ee0((int64_t)*v16, v4) != 0 ? v8 : 0;
    }
    int64_t v22 = v18;
    int64_t v23 = v15 + 4; // 0x402094
    int64_t v24 = v22; // 0x402094
    while ((4 * v12 + 0x3fffffffc & 0x3fffffffc) != v15) {
        // 0x402040
        v15 = v23;
        int64_t v25 = v22;
        v16 = (int32_t *)(v15 + v3);
        v17 = *v16;
        v18 = v25;
        if (v17 != v7 && v17 != v6) {
            // 0x40204c
            v19 = (int64_t)g29;
            v20 = (int64_t *)(v19 + 40);
            v21 = *v20;
            if (v21 >= *(int64_t *)(v19 + 48)) {
                // 0x402100
                __overflow(g29, (int32_t)v14 % 256);
            } else {
                // 0x402061
                *v20 = v21 + 1;
                *(char *)v21 = (char)v14;
            }
            // 0x402070
            v18 = (char)function_401ee0((int64_t)*v16, v4) != 0 ? v25 : 0;
        }
        // 0x40208d
        v22 = v18;
        v23 = v15 + 4;
        v24 = v22;
    }
    // 0x402096
    free((int64_t *)v3);
    // 0x40209b
    return v24 & 0xffffffff;
}
// Address range: 0x402140 - 0x402148
int64_t function_402140(int64_t a1) {
    // 0x402140
    g36 = a1;
    int64_t result; // 0x402140
    return result;
}
// Address range: 0x402150 - 0x402158
int64_t function_402150(int64_t a1) {
    // 0x402150
    g35 = a1;
    int64_t result; // 0x402150
    return result;
}
// Address range: 0x402160 - 0x4021fe
int64_t function_402160(void) {
    // 0x402160
    int32_t * err_num; // 0x402176
    if ((int32_t)function_405540((int64_t)g29) == 0) {
        goto lab_0x40218c;
    } else {
        // 0x402176
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x4021a3;
        } else {
            // 0x402187
            if (*err_num != 32) {
                goto lab_0x4021a3;
            } else {
                goto lab_0x40218c;
            }
        }
    }
  lab_0x40218c:;
    int64_t result = function_405540((int64_t)g31); // 0x402193
    if ((int32_t)result == 0) {
        // 0x40219c
        return result;
    }
    // 0x4021de
    _exit(g18);
    // UNREACHABLE
  lab_0x4021a3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4021af
    if (g36 == 0) {
        // 0x4021e9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4021c3
        error(0, *err_num, "%s: %s", (char *)function_403cc0((int64_t)g36), v1);
    }
    // 0x4021de
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x402200 - 0x402248
int64_t function_402200(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x402200
    *(char *)v1 = 0;
    int64_t result = v1; // 0x402212
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40221b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x402244
    return result;
}
// Address range: 0x402250 - 0x4022e9
int64_t function_402250(int64_t str) {
    // 0x402250
    if (str == 0) {
        // 0x4022c9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40225e
    int64_t result = (int64_t)found_char_pos; // 0x40225e
    if (found_char_pos == NULL) {
        // 0x4022b9
        g37 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402268
    if (v1 - str < 7) {
        // 0x4022b9
        g37 = str;
        g30 = str;
        return result;
    }
    // 0x402278
    bool v2; // 0x402250
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402250
    int64_t v5 = result - 6; // 0x402250
    int64_t v6 = 7; // 0x402286
    unsigned char v7 = *(char *)v5; // 0x402286
    char v8 = *(char *)v4; // 0x402286
    char v9 = v8; // 0x402286
    bool v10 = false; // 0x402286
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
    int64_t v12 = (int64_t)"lt-"; // 0x402290
    int64_t v13 = v1; // 0x402290
    int64_t v14 = 3; // 0x402290
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4022b9
        g37 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4022a2
    char v16 = *(char *)v12; // 0x4022a2
    char v17 = v16; // 0x4022a2
    bool v18 = false; // 0x4022a2
    while (v15 == v16) {
        // 0x402292
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
    int64_t v20 = v1; // 0x4022ac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4022ae
        v20 = result + 4;
        g28 = v20;
    }
    // 0x4022b9
    g37 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x4022f0 - 0x4023e2
int64_t function_4022f0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402304
    int64_t result = (int64_t)v1; // 0x402304
    if (result != a1) {
        // 0x402311
        return result;
    }
    int64_t v2 = function_405600(); // 0x402320
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4023d6
    if (v3 == 85) {
        // 0x402330
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4023c8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40235e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40236b
        // 0x402311
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4023c8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4023ad
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4023ba
    // 0x402311
    return result4;
}
// Address range: 0x4023f0 - 0x402447
int64_t function_4023f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4023f0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402438
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402447 - 0x403611
int64_t function_402447(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402491
    int64_t v3 = 0; // 0x402491
    int64_t v4; // 0x402447
    int64_t v5; // 0x402447
    int64_t v6; // 0x402447
    int64_t v7; // 0x402447
    int64_t v8; // 0x402447
    int64_t v9; // 0x402447
    int64_t v10; // 0x402447
    int64_t v11; // 0x402447
    int64_t v12; // 0x402447
    int64_t v13; // 0x402447
    int64_t v14; // 0x402447
    int64_t v15; // 0x402447
    int64_t v16; // 0x402447
    int64_t v17; // 0x402447
    int64_t v18; // 0x402447
    int64_t result; // 0x402447
    int64_t v19; // 0x402447
    int32_t wc; // bp+132, 0x402447
    int64_t ps; // bp+136, 0x402447
    char v20; // 0x402a00
    int64_t v21; // 0x402a00
    int64_t v22; // 0x402da8
    int64_t v23; // 0x402447
    int64_t v24; // 0x402dc7
    int32_t v25; // 0x402447
    while (true) {
      lab_0x402498_2:
        // 0x402498
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402447
        int64_t v27; // 0x4024cc
        while (true) {
          lab_0x402498:
            // 0x402498
            v5 = v26;
            bool v28 = v15 == v5; // 0x4024a3
            if (v15 == -1) {
                // 0x4024a5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4024b3
            if (v28) {
                // break (via goto) -> 0x402c18
                goto lab_0x402c18;
            }
            // 0x4024bc
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
                    // 0x402aab
                    if (v25 % 2 == 0) {
                        goto lab_0x4025f1;
                    }
                    // 0x402ecd
                    v26 = v5 + 1;
                    goto lab_0x402498;
                }
                case 7: {
                    goto lab_0x4025f1;
                }
                case 8: {
                    goto lab_0x4025f1;
                }
                case 9: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4025f1;
                }
                case 12: {
                    goto lab_0x4025f1;
                }
                case 13: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4025bd;
                }
                case 36: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4025f1;
                }
                case 38: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4025f1;
                }
                case 44: {
                    goto lab_0x4025f1;
                }
                case 45: {
                    goto lab_0x4025f1;
                }
                case 46: {
                    goto lab_0x4025f1;
                }
                case 47: {
                    goto lab_0x4025f1;
                }
                case 48: {
                    goto lab_0x4025f1;
                }
                case 49: {
                    goto lab_0x4025f1;
                }
                case 50: {
                    goto lab_0x4025f1;
                }
                case 51: {
                    goto lab_0x4025f1;
                }
                case 52: {
                    goto lab_0x4025f1;
                }
                case 53: {
                    goto lab_0x4025f1;
                }
                case 54: {
                    goto lab_0x4025f1;
                }
                case 55: {
                    goto lab_0x4025f1;
                }
                case 56: {
                    goto lab_0x4025f1;
                }
                case 57: {
                    goto lab_0x4025f1;
                }
                case 58: {
                    goto lab_0x4025f1;
                }
                case 59: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4025f1;
                }
                case 66: {
                    goto lab_0x4025f1;
                }
                case 67: {
                    goto lab_0x4025f1;
                }
                case 68: {
                    goto lab_0x4025f1;
                }
                case 69: {
                    goto lab_0x4025f1;
                }
                case 70: {
                    goto lab_0x4025f1;
                }
                case 71: {
                    goto lab_0x4025f1;
                }
                case 72: {
                    goto lab_0x4025f1;
                }
                case 73: {
                    goto lab_0x4025f1;
                }
                case 74: {
                    goto lab_0x4025f1;
                }
                case 75: {
                    goto lab_0x4025f1;
                }
                case 76: {
                    goto lab_0x4025f1;
                }
                case 77: {
                    goto lab_0x4025f1;
                }
                case 78: {
                    goto lab_0x4025f1;
                }
                case 79: {
                    goto lab_0x4025f1;
                }
                case 80: {
                    goto lab_0x4025f1;
                }
                case 81: {
                    goto lab_0x4025f1;
                }
                case 82: {
                    goto lab_0x4025f1;
                }
                case 83: {
                    goto lab_0x4025f1;
                }
                case 84: {
                    goto lab_0x4025f1;
                }
                case 85: {
                    goto lab_0x4025f1;
                }
                case 86: {
                    goto lab_0x4025f1;
                }
                case 87: {
                    goto lab_0x4025f1;
                }
                case 88: {
                    goto lab_0x4025f1;
                }
                case 89: {
                    goto lab_0x4025f1;
                }
                case 90: {
                    goto lab_0x4025f1;
                }
                case 91: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4025f1;
                }
                case 94: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4025f1;
                }
                case 96: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4025f1;
                }
                case 98: {
                    goto lab_0x4025f1;
                }
                case 99: {
                    goto lab_0x4025f1;
                }
                case 100: {
                    goto lab_0x4025f1;
                }
                case 101: {
                    goto lab_0x4025f1;
                }
                case 102: {
                    goto lab_0x4025f1;
                }
                case 103: {
                    goto lab_0x4025f1;
                }
                case 104: {
                    goto lab_0x4025f1;
                }
                case 105: {
                    goto lab_0x4025f1;
                }
                case 106: {
                    goto lab_0x4025f1;
                }
                case 107: {
                    goto lab_0x4025f1;
                }
                case 108: {
                    goto lab_0x4025f1;
                }
                case 109: {
                    goto lab_0x4025f1;
                }
                case 110: {
                    goto lab_0x4025f1;
                }
                case 111: {
                    goto lab_0x4025f1;
                }
                case 112: {
                    goto lab_0x4025f1;
                }
                case 113: {
                    goto lab_0x4025f1;
                }
                case 114: {
                    goto lab_0x4025f1;
                }
                case 115: {
                    goto lab_0x4025f1;
                }
                case 116: {
                    goto lab_0x4025f1;
                }
                case 117: {
                    goto lab_0x4025f1;
                }
                case 118: {
                    goto lab_0x4025f1;
                }
                case 119: {
                    goto lab_0x4025f1;
                }
                case 120: {
                    goto lab_0x4025f1;
                }
                case 121: {
                    goto lab_0x4025f1;
                }
                case 122: {
                    goto lab_0x4025f1;
                }
                case 123: {
                    goto lab_0x402595;
                }
                case 124: {
                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402595;
                }
                case 126: {
                    goto lab_0x4025bd;
                }
                default: {
                    goto lab_0x402995;
                }
            }
        }
      lab_0x402995:
        if (v23 != 1) {
            // 0x402d00
            ps = 0;
            int64_t len = v15; // 0x402d10
            if (v15 == -1) {
                // 0x402d12
                len = strlen((char *)str);
            }
            // 0x402d3e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402d9f:
                // 0x402d9f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402da4
                int64_t v30 = v29 + str;
                v24 = function_4054c0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40331a_2;
                    }
                    case -1: {
                        goto lab_0x40331a_2;
                    }
                    case -2: {
                        // 0x4033fd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403437
                            v19 = v18;
                            int64_t v31 = v18; // 0x40343a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403447
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403440
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40331a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40331a_2;
                    }
                    case 1: {
                        goto lab_0x402d70;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402e1c
                        char v34 = *(char *)v33; // 0x402e2d
                        unsigned char v35; // 0x402447
                        if (v34 < 125) {
                            // 0x402e38
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402e4f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402e20
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402e2d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402e38
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402e4f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402e20
                            v33++;
                        }
                        goto lab_0x402d70;
                    }
                }
            }
            goto lab_0x40331a_2;
        } else {
            // 0x4029e4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4025f1;
        }
    }
  lab_0x402c18:
    // 0x402c18
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40351a
        if (v8 > result) {
            // 0x403523
            *(char *)(v12 + result) = 0;
        }
        // 0x402847
        return result;
    }
    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4025f1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402600
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40280a_2;
        }
    }
    int64_t v39 = result; // 0x402701
    char v40 = v20; // 0x402701
    int64_t v41 = v38; // 0x402701
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402701
    int64_t v43 = v36; // 0x402701
    goto lab_0x40267d;
  lab_0x40280a_2:
    // 0x402847
    return function_4023f0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40331a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4025f1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402eee
        int64_t v50 = v5 + 1; // 0x402fd1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402fd8
        char v52 = v20; // 0x402fd8
        int64_t v53 = result; // 0x402fd8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402fa1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402fa5
            int64_t v56 = v54 + 1; // 0x402faa
            int64_t v57 = v51 + 1; // 0x402fd1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402f9c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402fa1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402fa5
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
        goto lab_0x40267d;
    }
  lab_0x402d70:
    // 0x402d70
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402d8f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402d92
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40331a
        goto lab_0x40331a_2;
    }
    goto lab_0x402d9f;
  lab_0x4025bd:
    // 0x4025bd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40280a_2;
    }
    goto lab_0x4025f1;
  lab_0x402595:;
    bool v60 = v15 == 1; // 0x4025a0
    if (v15 == -1) {
        // 0x4025a2
        v60 = *(char *)v1 == 0;
    }
    // 0x4025ae
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4025f1;
    } else {
        goto lab_0x4025bd;
    }
  lab_0x40267d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402682
        *(char *)(v44 + v45) = v40;
    }
    // 0x402686
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402498_2;
}
// Address range: 0x403620 - 0x4037be
int64_t function_403620(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403622
    int32_t * v3 = __errno_location(); // 0x40363c
    int64_t v4 = (int64_t)g20; // 0x403641
    int32_t v5 = *v3; // 0x40364b
    int64_t v6 = v4; // 0x403661
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4037b9
            function_404680(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403670
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403677
        int64_t v9; // 0x403620
        if (g20 == &g21) {
            int64_t v10 = function_404490(0, v8); // 0x40379a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40379f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404490(v4, v8); // 0x40368b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40369a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40369a
        int32_t v14 = v7; // 0x4036a1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4036d1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4036db
    int64_t * v17 = (int64_t *)v15; // 0x4036de
    uint64_t v18 = *v17; // 0x4036de
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4036e1
    int64_t result = *v19; // 0x4036e1
    int64_t v20; // 0x403620
    uint64_t v21 = function_4023f0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403704
    if (v18 > v21) {
        // 0x40377b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403717
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403727
        free((int64_t *)result);
    }
    int64_t result2 = function_404430(v22); // 0x403741
    *v19 = result2;
    int64_t v23; // 0x403620
    function_4023f0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40377b
    *v3 = v5;
    return result2;
}
// Address range: 0x4037c0 - 0x4037f4
int64_t function_4037c0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4037c7
    int64_t result = function_404630(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4037e6
    return result;
}
// Address range: 0x403800 - 0x40380f
int64_t function_403800(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x40380c
    return result;
}
// Address range: 0x403810 - 0x40381f
int64_t function_403810(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403818
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403820 - 0x403853
int64_t function_403820(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403839
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40383e
    uint32_t v3 = *v2; // 0x40383e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403842
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403860 - 0x403873
int64_t function_403860(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40386c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403880 - 0x4038ab
int64_t function_403880(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403888
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4038a5
        abort();
        // UNREACHABLE
    }
    // 0x40389c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x4038b0 - 0x403922
int64_t function_4038b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4038d2
    int32_t * v2 = __errno_location(); // 0x4038db
    uint32_t v3 = *(int32_t *)v1; // 0x4038fb
    int64_t result = function_4023f0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40390a
    return result;
}
// Address range: 0x403930 - 0x403a11
int64_t function_403930(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403952
    int32_t * v2 = __errno_location(); // 0x403958
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403977
    int32_t * v4 = (int32_t *)v1; // 0x40397a
    int64_t v5 = function_4023f0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403995
    int64_t v6 = v5 + 1; // 0x40399a
    int64_t result = function_404430(v6); // 0x4039af
    function_4023f0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4039f4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4039fd
    return result;
}
// Address range: 0x403a20 - 0x403a2a
int64_t function_403a20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a20
    return function_403930(a1, a2, 0, a3);
}
// Address range: 0x403a30 - 0x403ac5
int64_t function_403a30(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403a30
    int64_t v2 = v1; // 0x403a30
    int64_t v3 = v2; // 0x403a44
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403a63
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403a60
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x403a7d
    if (g21 != 0x609300) {
        // 0x403a7f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403aa1
    if (g20 != &g21) {
        // 0x403aa3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g49;
    }
    // 0x403ab6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403ad0 - 0x403ae1
int64_t function_403ad0(void) {
    // 0x403ad0
    int64_t v1; // 0x403ad0
    return function_403620(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x403af0 - 0x403afa
int64_t function_403af0(void) {
    // 0x403af0
    int64_t v1; // 0x403af0
    return function_403620(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403b00 - 0x403b16
int64_t function_403b00(int64_t a1) {
    // 0x403b00
    return function_403620(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403b20 - 0x403b32
int64_t function_403b20(int64_t a1, int64_t a2) {
    // 0x403b20
    return function_403620(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403b40 - 0x403ba8
int64_t function_403b40(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403b50
    return function_403620((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403bb0 - 0x403c14
int64_t function_403bb0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403bc0
    return function_403620((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403c20 - 0x403c2c
int64_t function_403c20(int64_t a1, int64_t a2) {
    // 0x403c20
    return function_403b40(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403c30 - 0x403c3f
int64_t function_403c30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403c30
    return function_403bb0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403c40 - 0x403cb0
int64_t function_403c40(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403c4d
    int128_t v2 = __asm_movdqa(g40); // 0x403c55
    int128_t v3 = __asm_movdqa(g41); // 0x403c5d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403c72
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403c88
    uint32_t v6 = *v5; // 0x403c88
    uint32_t v7 = (int32_t)a3 % 32; // 0x403c8d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403620(0, a1, a2, &v4);
}
// Address range: 0x403cb0 - 0x403cbd
int64_t function_403cb0(int64_t a1, int64_t a2) {
    // 0x403cb0
    return function_403c40(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403cc0 - 0x403cd1
int64_t function_403cc0(int64_t a1) {
    // 0x403cc0
    return function_403c40(a1, -1, 58);
}
// Address range: 0x403ce0 - 0x403cea
int64_t function_403ce0(void) {
    // 0x403ce0
    int64_t v1; // 0x403ce0
    return function_403c40(v1, v1, 58);
}
// Address range: 0x403cf0 - 0x403d5e
int64_t function_403cf0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403d0a
    return function_403620(a1, a3, -1, &v1);
}
// Address range: 0x403d60 - 0x403dcc
int64_t function_403d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403d67
    int128_t v2 = __asm_movdqa(g40); // 0x403d6f
    int128_t v3 = __asm_movdqa(g41); // 0x403d77
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403d99
    if (a2 == 0 || a3 == 0) {
        // 0x403dc7
        abort();
        // UNREACHABLE
    }
    // 0x403daa
    return function_403620(a1, a4, a5, &v4);
}
// Address range: 0x403dd0 - 0x403dd9
int64_t function_403dd0(void) {
    // 0x403dd0
    int64_t v1; // 0x403dd0
    return function_403d60(v1, v1, v1, v1, -1);
}
// Address range: 0x403de0 - 0x403df7
int64_t function_403de0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403de0
    return function_403d60(0, a1, a2, a3, -1);
}
// Address range: 0x403e00 - 0x403e13
int64_t function_403e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403e00
    return function_403d60(0, a1, a2, a3, a4);
}
// Address range: 0x403e20 - 0x403e2a
int64_t function_403e20(void) {
    // 0x403e20
    int64_t v1; // 0x403e20
    return function_403620(v1, v1, v1, &g19);
}
// Address range: 0x403e30 - 0x403e42
int64_t function_403e30(int64_t a1, int64_t a2) {
    // 0x403e30
    return function_403620(0, a1, a2, &g19);
}
// Address range: 0x403e50 - 0x403e61
int64_t function_403e50(void) {
    // 0x403e50
    int64_t v1; // 0x403e50
    return function_403620(v1, v1, -1, &g19);
}
// Address range: 0x403e70 - 0x403e86
int64_t function_403e70(int64_t a1) {
    // 0x403e70
    return function_403620(0, a1, -1, &g19);
}
// Address range: 0x403e90 - 0x40426d
int64_t function_403e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403f28
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403eac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403ec6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403f0b
    if (a6 < 10) {
        // 0x403f1a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404012
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404270 - 0x404290
int64_t function_404270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404270
    if (a5 == 0) {
        // 0x40428b
        return function_403e90(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x404277
    v1++;
    int64_t v2 = v1; // 0x404289
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404280
        v1++;
        v2 = v1;
    }
    // 0x40428b
    return function_403e90(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x404290 - 0x4042f0
int64_t function_404290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404290
    int64_t v3 = &v2; // 0x404290
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4042c3
    int64_t v6; // 0x4042ad
    int64_t * v7; // 0x4042cb
    int64_t v8; // 0x4042cb
    int64_t v9; // 0x4042d7
    if (v5 < 48) {
        // 0x4042a0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4042e3
            break;
        }
    } else {
        // 0x4042cb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4042e3
            break;
        }
    }
    int64_t v10 = 10; // 0x4042c1
    while (v4 != 9) {
        // 0x4042b9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4042a0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4042e3
                break;
            }
        } else {
            // 0x4042cb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4042e3
                break;
            }
        }
        // 0x4042b9
        v10 = 10;
    }
    // 0x4042e3
    return function_403e90(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x4042f0 - 0x4043ac
int64_t function_4042f0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4042f0
    int64_t v1; // bp-168, 0x4042f0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4042f0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4042f0
    int64_t v8; // 0x4042f0
    int64_t v9; // bp-56, 0x4042f0
    int64_t v10; // 0x404355
    int64_t v11; // 0x404379
    if ((int32_t)v6 < 48) {
        // 0x404340
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404390
            break;
        }
    } else {
        // 0x404372
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404390
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40436a
    int64_t v13 = 10; // 0x40436a
    while (v5 != 9) {
        // 0x40436c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404340
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404390
                break;
            }
        } else {
            // 0x404372
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404390
                break;
            }
        }
        // 0x404362
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404390
    int64_t v14; // bp-136, 0x4042f0
    int64_t result = function_403e90(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x40439f
    return result;
}
// Address range: 0x4043b0 - 0x404424
int64_t function_4043b0(int64_t a1) {
    // 0x4043b0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404413
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404430 - 0x40444a
int64_t function_404430(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404434
    if (size != 0 != (mem == NULL)) {
        // 0x404443
        return (int64_t)mem;
    }
    // 0x404445
    function_404680(size);
    // UNREACHABLE
}
// Address range: 0x404450 - 0x404471
int64_t function_404450(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404453
    int64_t v2 = v1; // 0x404453
    if (v2 < 0) {
        // 0x40446b
        function_404680(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404469
        return function_404430(v2);
    }
    // 0x40446b
    function_404680(v2);
    // UNREACHABLE
}
// Address range: 0x404480 - 0x404482
int64_t function_404480(void) {
    // 0x404480
    int64_t v1; // 0x404480
    return function_404430(v1);
}
// Address range: 0x404490 - 0x4044c6
int64_t function_404490(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4044b8
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4044a1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4044b0
        return (int64_t)mem;
    }
    // 0x4044c1
    function_404680(a1);
    // UNREACHABLE
}
// Address range: 0x4044d0 - 0x4044f1
int64_t function_4044d0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4044d3
    int64_t v2 = v1; // 0x4044d3
    if (v2 < 0) {
        // 0x4044eb
        function_404680(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4044e9
        return function_404490(a1, v2);
    }
    // 0x4044eb
    function_404680(a1);
    // UNREACHABLE
}
// Address range: 0x404500 - 0x404586
int64_t function_404500(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40455b
            function_404680(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404490(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404543
    if (a2 == 0) {
        // 0x404568
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404548
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40455b
        function_404680(a1);
        // UNREACHABLE
    }
    // 0x40452a
    *(int64_t *)a2 = v2;
    return function_404490(a1, v2 * a3);
}
// Address range: 0x404590 - 0x4045e0
int64_t function_404590(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404590
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4045da
            function_404680(a1);
            // UNREACHABLE
        }
        // 0x4045b2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404490(a1, v1);
    }
    if (a2 == 0) {
        // 0x4045c5
        *(int64_t *)a2 = 128;
        return function_404490(0, 128);
    }
    // 0x4045d8
    if (a2 < 0) {
        // 0x4045da
        function_404680(a1);
        // UNREACHABLE
    }
    // 0x4045b2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404490(a1, v1);
}
// Address range: 0x4045e0 - 0x4045f7
int64_t function_4045e0(int64_t a1, int64_t a2) {
    // 0x4045e0
    return (int64_t)memset((int64_t *)function_404430(a1), 0, (int32_t)a1);
}
// Address range: 0x404600 - 0x40462e
int64_t function_404600(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404607
    if ((int64_t)v1 < 0) {
        // 0x404629
        function_404680(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404629
        function_404680(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40461a
    if (mem != NULL) {
        // 0x404624
        return (int64_t)mem;
    }
    // 0x404629
    function_404680(nmemb);
    // UNREACHABLE
}
// Address range: 0x404630 - 0x404658
int64_t function_404630(int64_t a1, int64_t a2) {
    int64_t v1 = function_404430(a2); // 0x40463f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404660 - 0x404673
int64_t function_404660(int64_t str) {
    // 0x404660
    return function_404630(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404680 - 0x4046b1
int64_t function_404680(int64_t a1) {
    // 0x404680
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4046c0 - 0x4046e7
int64_t function_4046c0(void) {
    // 0x4046c0
    int64_t v1; // 0x4046c0
    int64_t v2 = function_405bb0(v1, v1, v1); // 0x4046c1
    if ((int32_t)v2 != -1 || *__errno_location() != 12) {
        // 0x4046cd
        return v2 & 0xffffffff;
    }
    // 0x4046e2
    function_404680(v1);
    // UNREACHABLE
}
// Address range: 0x4046f0 - 0x4047cf
int64_t function_4046f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4046fc
    uint32_t v2 = *v1; // 0x4046fc
    int64_t v3 = a2 & 0xffffffff; // 0x404701
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404704
    uint64_t v5 = (int64_t)*v4; // 0x404704
    int64_t v6; // 0x404772
    if (v3 <= v5) {
      lab_0x40476c_2:
        // 0x40476c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4046f2
    int64_t v8 = v2; // 0x4046f0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40476c
        goto lab_0x40476c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404728
    int64_t v17; // 0x404736
    int64_t * v18; // 0x404750
    int64_t * v19; // 0x404753
    int64_t v20; // 0x40475e
    int64_t v21; // 0x404736
    while ((v16 & 0xffffffff) > v10) {
        // 0x404733
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404750
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404767
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40476c
            goto lab_0x40476c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40476c
            goto lab_0x40476c_2;
        }
        // 0x404722
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4047ab
    int64_t * v23 = (int64_t *)v22; // 0x4047b0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4047b3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4047b0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4047c7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40471d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40476c
            goto lab_0x40476c_2;
        }
        // 0x404722
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404733
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404750
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404767
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40476c
                goto lab_0x40476c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40476c
                goto lab_0x40476c_2;
            }
            // 0x404722
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404790
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4047b0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4047c7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40476c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4047d0 - 0x404dec
int64_t function_4047d0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4047ef
    int64_t v2 = *v1; // 0x4047ef
    char * str2 = (char *)v2; // 0x4047fc
    char c = *str2; // 0x4047fc
    int64_t v3 = v2; // 0x404828
    int64_t v4 = 0; // 0x4047d0
    int32_t v5; // 0x4047d0
    int64_t v6; // 0x4047d0
    int64_t v7; // 0x4047d0
    int64_t v8; // 0x4047d0
    int64_t v9; // 0x4047d0
    int64_t v10; // 0x4047d0
    int64_t v11; // 0x4047d0
    int64_t v12; // 0x4047d0
    int64_t v13; // 0x4047d0
    int64_t str3; // 0x4047d0
    int64_t v14; // 0x4047d0
    int64_t v15; // 0x4047d0
    int64_t v16; // 0x4047d0
    int64_t v17; // 0x4047d0
    int32_t v18; // 0x4047d0
    int32_t v19; // 0x4047d0
    int32_t v20; // 0x4047d0
    int32_t v21; // 0x4047d0
    int32_t v22; // 0x4047d0
    int32_t v23; // 0x4047d0
    int32_t v24; // 0x4047d0
    int32_t v25; // 0x4047d0
    int32_t v26; // 0x4047d0
    int32_t v27; // 0x4047d0
    int32_t v28; // 0x4047d0
    int32_t v29; // 0x4047d0
    int64_t nmemb; // 0x4047d0
    int64_t v30; // 0x4047d0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40482c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404828
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404838
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40483e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404808
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40486c
                int64_t v34; // 0x4047d0
                int64_t v35; // 0x4047d0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404875
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4049f0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404886
                int64_t v37 = *(int64_t *)v36; // 0x40488a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404860
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404875
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4049f0;
                        }
                    }
                    // 0x404886
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
                  lab_0x4048d6:
                    // 0x4048d6
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
                        goto lab_0x404930;
                    } else {
                        if (v11 == 0) {
                            // 0x404aa0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404930;
                        } else {
                            if (v39 == 0) {
                                // 0x404a50
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4048fa;
                                } else {
                                    // 0x404a5c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4048fa;
                                    } else {
                                        // 0x404a6a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4048fa;
                                        } else {
                                            goto lab_0x404930;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4048fa;
                            }
                        }
                    }
                }
              lab_0x404941:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404b16
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404cc2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404ce2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404d2f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404d49
                            int64_t v45; // 0x404d4b
                            if (*(char *)v42 != 0) {
                                // 0x404d4b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404d43
                            while (v17 + nmemb != v42) {
                                // 0x404d45
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404d4b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404d38
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404d70
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x404b24
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404c7f
                        free((int64_t *)v17);
                    }
                    // 0x404b79
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404b90
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x404a3e
                    return 63;
                }
                // 0x404960
                v5 = v39;
                if (v13 != 0) {
                    // 0x4049e4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4049f0:;
                    int32_t * v49 = (int32_t *)a7; // 0x404a00
                    uint32_t v50 = *v49; // 0x404a00
                    int64_t v51 = v50; // 0x404a00
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x404a0a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404a13
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404c3f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404bea
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x404a3e
                            return 63;
                        }
                        // 0x404a88
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404d9f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404c9d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404cb0
                                // 0x404a3e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404bae
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404bc2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x404a2b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x404a2e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404a32
                    int64_t result = v59; // 0x404a38
                    if (v58 != 0) {
                        // 0x404a3a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x404a3e
                    return result;
                }
            } else {
                // 0x40483e
                v5 = v32;
            }
            // break -> 0x404965
            break;
        }
    }
    // 0x404965
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40497d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404987
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x404a3e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404ac9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4049b6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4049c6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404930:
    // 0x404930
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404930
    int64_t v63 = *(int64_t *)v62; // 0x404934
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404941
        goto lab_0x404941;
    }
    goto lab_0x4048d6;
  lab_0x4048fa:
    // 0x4048fa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4047d0
    int32_t v65; // 0x4047d0
    int32_t v66; // 0x4047d0
    if (v27 != 0) {
        goto lab_0x404930;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404ab0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404930;
            } else {
                goto lab_0x404921;
            }
        } else {
            // 0x404915
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404c0c
                int64_t v67 = (int64_t)mem; // 0x404c0c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404930;
                } else {
                    // 0x404c1f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404921;
                }
            } else {
                goto lab_0x404921;
            }
        }
    }
  lab_0x404921:
    // 0x404921
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404930;
}
// Address range: 0x404df0 - 0x4053b6
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404e11
    if (v3 < 1) {
        // 0x404fce
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404e0d
    int32_t v5 = *(int32_t *)a7; // 0x404e19
    uint64_t v6 = a1 & 0xffffffff; // 0x404e1b
    int64_t v7 = v2; // 0x404e20
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404e23
    *v8 = 0;
    int64_t v9; // 0x404df0
    int64_t v10; // 0x404df0
    int64_t v11; // 0x404df0
    int64_t v12; // 0x404df0
    int64_t str; // 0x404df0
    int64_t v13; // 0x404df0
    int64_t v14; // 0x404df0
    int64_t v15; // 0x404df0
    int64_t v16; // 0x404df0
    int64_t v17; // 0x404df0
    int32_t v18; // 0x404df0
    char v19; // 0x404df0
    if (v5 == 0) {
        // 0x405008
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404e3a;
    } else {
        // 0x404e33
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404e80
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404e83
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404f48;
            } else {
                int64_t v22 = v7 + 1; // 0x404e96
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404ea6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404f5c;
                } else {
                    goto lab_0x404eb8;
                }
            }
        } else {
            goto lab_0x404e3a;
        }
    }
  lab_0x404e3a:
    // 0x404e3a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404e40
    *v24 = 0;
    int64_t v25; // 0x404df0
    int64_t v26; // 0x404df0
    int64_t v27; // 0x404df0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404f30
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404f3d;
        }
        case 43: {
            // 0x405240
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404f3d;
        }
        default: {
            // 0x404e5c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4051bf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4052d8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404f3d;
                } else {
                    // 0x4051cd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404e6a;
                }
            } else {
                goto lab_0x404e6a;
            }
        }
    }
  lab_0x404f48:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404f4f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404eb8;
    } else {
        goto lab_0x404f5c;
    }
  lab_0x404e6a:
    // 0x404e6a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404f3d;
  lab_0x404f3d:
    // 0x404f3d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404f48;
  lab_0x404eb8:;
    uint32_t v30 = *(int32_t *)a7; // 0x404eb8
    int64_t v31 = v30; // 0x404eb8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404eba
    if ((int64_t)*v32 > v31) {
        // 0x404ebf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404ec2
    if (*v33 > v30) {
        // 0x404ec7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404eca
    int64_t v35 = v31; // 0x404ece
    int64_t v36 = v15; // 0x404ece
    int64_t v37; // 0x404df0
    int64_t v38; // 0x404df0
    int64_t v39; // 0x404df0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405038
        int64_t v41 = v40; // 0x405038
        v2 = v41;
        int64_t v42; // 0x404df0
        if (*v33 == v40) {
            // 0x405220
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405228
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405044
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405058
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405061
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40506a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405081
            int64_t v47 = v45 & 0xffffffff; // 0x405085
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40508e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405094
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405096;
                }
            }
            int64_t v48 = v47 + 1; // 0x405070
            int64_t v49 = v48 & 0xffffffff; // 0x405070
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405081
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40508e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405094
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405096;
                    }
                }
                // 0x405070
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405238
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405096;
    } else {
        goto lab_0x404ed4;
    }
  lab_0x404f5c:
    // 0x404f5c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404f5f
    int64_t v51 = v12; // 0x404f5f
    int64_t v52 = v14; // 0x404f5f
    if (*(char *)v10 == 0) {
        goto lab_0x404eb8;
    } else {
        goto lab_0x404f65;
    }
  lab_0x404ed4:;
    int32_t v53 = v35; // 0x404ed4
    int64_t v54; // 0x404df0
    int64_t v55; // 0x404df0
    int64_t v56; // 0x404df0
    int64_t v57; // 0x404df0
    int64_t v58; // 0x404df0
    int64_t v59; // 0x404df0
    char * v60; // 0x404df0
    int64_t v61; // 0x404df0
    int64_t v62; // 0x404ee9
    int64_t v63; // 0x404df0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405023
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405026;
    } else {
        // 0x404edc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404df0
        int64_t v66 = v65 ? -1 : 1; // 0x404ef0
        int64_t v67 = (int64_t)"--"; // 0x404df0
        int64_t v68 = v62; // 0x404df0
        int64_t v69 = 3; // 0x404ef0
        unsigned char v70 = *(char *)v68; // 0x404ef0
        char v71 = *(char *)v67; // 0x404ef0
        char v72 = v71; // 0x404ef0
        bool v73 = false; // 0x404ef0
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
            // 0x404fe0
            if (*(char *)v62 == 45) {
                // 0x4050a0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4050a0
                if (c == 0) {
                    goto lab_0x404fea;
                } else {
                    // 0x4050ad
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405130;
                    } else {
                        if (c == 45) {
                            // 0x405313
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405185;
                        } else {
                            // 0x4050be
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405130;
                            } else {
                                // 0x4050c3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4050e4;
                                } else {
                                    // 0x4050ca
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405130;
                                    } else {
                                        goto lab_0x4050e4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404fea;
            }
        } else {
            uint32_t v75 = *v33; // 0x404f00
            v2 = v75;
            int32_t v76 = *v32; // 0x404f03
            int64_t v77 = v35 + 1; // 0x404f06
            int32_t v78 = v77; // 0x404f09
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405270
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404f17
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404f25
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405026;
        }
    }
  lab_0x404f65:;
    // 0x404f65
    int64_t v79; // bp-104, 0x404df0
    int64_t v80 = &v79; // 0x404dfa
    int64_t v81 = v50 + 1; // 0x404f65
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404f6c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404f71
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404f75
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404f79
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404f81
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404f86
    int32_t c2 = v84; // 0x404f86
    char * found_char_pos = strchr(str2, c2); // 0x404f86
    int64_t v87 = *v82; // 0x404f8b
    v2 = v87;
    int64_t v88 = *v85; // 0x404f95
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404fa0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405290
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40525d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404fce
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404f86
    char v91 = *(char *)(v90 + 1); // 0x404fbb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404f75
        if (v91 != 58) {
            // 0x404fce
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4051e4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4052e8
                *v8 = 0;
            } else {
                // 0x4052cc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40520e
            *v83 = 0;
            // 0x404fce
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4051ee
        if (v93 != 0) {
            // 0x405280
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40520e
            *v83 = 0;
            // 0x404fce
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405201
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40520e
            *v83 = 0;
            // 0x404fce
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40534a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4052fa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405301
        // 0x40520e
        *v83 = 0;
        // 0x404fce
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405159
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40515b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405380
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405331
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405338
            // 0x404fce
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405166
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40516a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405185;
  lab_0x405096:
    // 0x405096
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404ed4;
  lab_0x405185:;
    int64_t v99 = function_4047d0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4051a3
    // 0x404fce
    return v99 & 0xffffffff;
  lab_0x405026:;
    int32_t v100 = v55; // 0x405026
    if (v100 != (int32_t)v59) {
        // 0x40502a
        *(int32_t *)a7 = v100;
    }
    // 0x404fce
    return 0xffffffff;
  lab_0x404fea:
    // 0x404fea
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404ff1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404fce
    return v99 & 0xffffffff;
  lab_0x405130:
    // 0x405130
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404f65;
  lab_0x4050e4:
    // 0x4050e4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4047d0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x40510a
    if ((int32_t)v101 != -1) {
        // 0x404fce
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40511f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405130;
}
// Address range: 0x4053c0 - 0x405416
int64_t function_4053c0(int64_t a1) {
    // 0x4053c0
    *(int32_t *)&g42 = g26;
    *(int32_t *)&g43 = g25;
    int64_t v1; // 0x4053c0
    int64_t result = function_404df0(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x4053e6
    g26 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g24 = g44;
    return result;
}
// Address range: 0x405420 - 0x405438
int64_t function_405420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405420
    return function_4053c0(1);
}
// Address range: 0x405440 - 0x405453
int64_t function_405440(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x405440
    return function_4053c0(0);
}
// Address range: 0x405460 - 0x405475
int64_t function_405460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405460
    return function_404df0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405480 - 0x405496
int64_t function_405480(void) {
    // 0x405480
    return function_4053c0(0);
}
// Address range: 0x4054a0 - 0x4054b8
int64_t function_4054a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4054a0
    return function_404df0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4054c0 - 0x40553a
int64_t function_4054c0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4054cb
    int64_t v2 = (int64_t)&g10; // 0x4054cb
    int32_t * pwc; // 0x4054c0
    int64_t v3; // 0x4054c0
    int64_t n; // 0x4054c0
    if (a2 == 0) {
        goto lab_0x405512;
    } else {
        // 0x4054cd
        if (a3 == 0) {
            // 0x4054f8
            return -2;
        }
        // 0x4054d9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405512;
        } else {
            goto lab_0x4054e4;
        }
    }
  lab_0x405512:
    // 0x405512
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4054c0
    pwc = (int32_t *)&v4;
    goto lab_0x4054e4;
  lab_0x4054e4:;
    char * wstr = (char *)v3; // 0x4054ea
    int64_t ps; // 0x4054c0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4054ea
    int64_t result = v5; // 0x4054ea
    if (v5 < 0xfffffffe) {
        // 0x4054f8
        return result;
    }
    int64_t result2 = result; // 0x405529
    if ((char)function_4055a0(0, v3) == 0) {
        // 0x40552b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4054f8
    return result2;
}
// Address range: 0x405540 - 0x40559d
int64_t function_405540(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405547
    int64_t v2; // 0x405540
    int64_t result = function_405dc0(a1, v2); // 0x405558
    if ((v2 & 32) != 0) {
        // 0x405580
        if ((int32_t)result == 0) {
            // 0x405584
            *__errno_location() = 0;
        }
        // 0x40557a
        return 0xffffffff;
    }
    // 0x405561
    if ((int32_t)result == 0) {
        // 0x40557a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405568
    if (v1 == 0) {
        // 0x40556a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40557a
    return result2;
}
// Address range: 0x4055a0 - 0x4055fe
int64_t function_4055a0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4055a6
    if (locale == NULL) {
        // 0x4055d3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4055a6
    bool v2; // 0x4055a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x4055a0
    int64_t v5 = v1; // 0x4055a0
    int64_t v6 = 2; // 0x4055c5
    unsigned char v7 = *(char *)v5; // 0x4055c5
    char v8 = *(char *)v4; // 0x4055c5
    char v9 = v8; // 0x4055c5
    bool v10 = false; // 0x4055c5
    while (v7 == v8) {
        // 0x4055b8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4055d1
    int64_t v13 = v1; // 0x4055d1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4055d3
        return 0;
    }
    int64_t v14 = 6; // 0x4055d1
    unsigned char v15 = *(char *)v13; // 0x4055ed
    char v16 = *(char *)v12; // 0x4055ed
    char v17 = v16; // 0x4055ed
    bool v18 = false; // 0x4055ed
    while (v15 == v16) {
        // 0x4055e0
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
// Address range: 0x405600 - 0x405b62
int64_t function_405600(void) {
    char * v1 = nl_langinfo(14); // 0x405616
    char * v2 = g46; // 0x40561b
    char * v3; // 0x405600
    int64_t v4; // 0x405600
    int64_t v5; // 0x405600
    int64_t v6; // 0x405600
    int64_t v7; // 0x405600
    int32_t size; // 0x405600
    int32_t size2; // 0x405600
    int32_t len; // 0x4056d2
    int64_t v8; // 0x4056d2
    char * env_val; // 0x4056bd
    if (v2 == NULL) {
        // 0x4056b8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405725;
        } else {
            // 0x4056ca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405725;
            } else {
                // 0x4056cf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4056bd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405b55
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405725;
                    } else {
                        // 0x405ac9
                        size2 = len + 14;
                        goto lab_0x4056eb;
                    }
                } else {
                    goto lab_0x4056eb;
                }
            }
        }
    } else {
        // 0x405600
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40563a;
    }
  lab_0x40596c:;
    // 0x40596c
    struct _IO_FILE * stream; // 0x4057ab
    int32_t v10 = __uflow(stream); // 0x40596f
    int64_t v11; // 0x405600
    int64_t v12 = v11; // 0x405979
    int64_t v13; // 0x405600
    int64_t v14 = v13; // 0x405979
    int32_t v15 = v10; // 0x405979
    int64_t v16; // 0x405600
    int64_t v17 = v16; // 0x405979
    int64_t v18 = v11; // 0x405979
    int64_t v19 = v13; // 0x405979
    int64_t v20 = v16; // 0x405979
    if (v10 == -1) {
        // break -> 0x40597f
        goto lab_0x40597f;
    }
    goto lab_0x4057f9;
  lab_0x4057ee:;
    // 0x4057ee
    int64_t v90; // 0x405600
    int64_t * v32; // 0x4057e0
    *v32 = v90 + 1;
    int64_t v89; // 0x405600
    v12 = v89;
    int64_t v91; // 0x405600
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405600
    v17 = v92;
    goto lab_0x4057f9;
  lab_0x4057f9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405600
    int32_t v25; // bp-120, 0x405600
    int32_t v26; // bp-184, 0x405600
    int64_t v27; // 0x4057ab
    int64_t v28; // 0x4057c8
    int64_t v29; // 0x4057cd
    int64_t * v30; // 0x4057e4
    switch (c) {
        case 32: {
            goto lab_0x4057e0;
        }
        case 10: {
            goto lab_0x4057e0;
        }
        case 9: {
            goto lab_0x4057e0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4059d1
            int32_t v33; // 0x405600
            char v34; // 0x405600
            int32_t v35; // 0x4059de
            if (v31 < *v30) {
                // 0x4059b0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4059db
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4059d1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4059b0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4059db
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4059c0
                v36 = v33;
            }
            // 0x405aaf
            if (v36 == -1) {
                // break -> 0x40597f
                break;
            }
            goto lab_0x4057e0;
        }
        default: {
            // 0x40580f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40597f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405838
            int64_t v39 = v37 + 4; // 0x40583a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405846
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405848
            while (v41 == 0) {
                // 0x405838
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405866
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405872
            int64_t v45 = v43 + 4; // 0x405874
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405880
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405882
            while (v47 == 0) {
                // 0x405872
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40586f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405898
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4058a8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4058ac
            int64_t v52 = v51 + v48; // 0x4058b5
            int64_t * mem; // 0x405600
            int64_t v53; // 0x405600
            int64_t v54; // 0x405600
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4059eb
                int64_t v56 = v55 + 3; // 0x4059f7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4058d1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4058e0
            if (mem == NULL) {
                // 0x405b0c
                free((int64_t *)v21);
                function_405dc0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x405784;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4058f8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405902
            uint32_t v62 = (int32_t)v59; // 0x405905
            int64_t v63; // 0x405600
            if (v62 >= 8) {
                // 0x405a14
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405a2e
                int64_t v66 = v61 - v65; // 0x405a32
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405a3d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405a4e
                    int64_t v70 = v69 & 0xffffffff; // 0x405a4e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405a4b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405adf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405917
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40591b
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
            int64_t v73 = v51 + 1; // 0x40592b
            int64_t v74 = v60 - 1; // 0x40592f
            uint32_t v75 = (int32_t)v73; // 0x405934
            int64_t v76; // 0x405600
            if (v75 >= 8) {
                // 0x405a62
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405a6c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405a7c
                int64_t v80 = v74 - v79; // 0x405a80
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405a8b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405a9b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405a99
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405af6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405afe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405946
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40594a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405b43
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40595e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4057ee;
            } else {
                goto lab_0x40596c;
            }
        }
    }
  lab_0x4057e0:;
    int64_t v93 = v23; // 0x405600
    int64_t v94 = v22; // 0x405600
    int64_t v95 = v21; // 0x405600
    goto lab_0x4057e0_2;
  lab_0x405725:;
    int64_t * mem3 = malloc(size); // 0x405725
    int64_t v97 = (int64_t)&g10; // 0x405730
    int64_t v98; // 0x405600
    int64_t path; // 0x405600
    if (mem3 == NULL) {
        goto lab_0x405702;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405725
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405746;
    }
  lab_0x40563a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40562d
    char v100 = *v3; // 0x40563a
    int64_t v101; // 0x405600
    if (v100 == 0) {
        // 0x405694
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405600
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405600
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405680
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405687;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405650
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40565d
        char v107 = *(char *)v106; // 0x405662
        v102 = v107;
        if (v107 == 0) {
            // 0x405694
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40566b
    v104 = v103 + 1;
  lab_0x405687:
    // 0x405694
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405702:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40563a;
  lab_0x405746:;
    int64_t v109 = v98 + path; // 0x405746
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405772
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x4057a1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405ad2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4057c5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4057e0_2:;
                uint64_t v96 = *v32; // 0x4057e0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40596c;
                } else {
                    goto lab_0x4057ee;
                }
            }
          lab_0x40597f:
            // 0x40597f
            function_405dc0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40599e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405784;
  lab_0x4056eb:;
    int64_t * mem4 = malloc(size2); // 0x4056eb
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405791
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405746;
    } else {
        goto lab_0x405702;
    }
  lab_0x405784:
    // 0x405784
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405702;
}
// Address range: 0x405b70 - 0x405ba6
int64_t function_405b70(int32_t a1, uint64_t a2) {
    int64_t v1 = 4 * a2; // 0x405b7a
    if (v1 < 0) {
        // 0x405b90
        *__errno_location() = 12;
        return 0;
    }
    if (a2 < 0x4000000000000000) {
        // 0x405b88
        return (int64_t)realloc((int64_t *)(int64_t)a1, (int32_t)v1);
    }
    // 0x405b90
    *__errno_location() = 12;
    return 0;
}
// Address range: 0x405bb0 - 0x405dbb
int64_t function_405bb0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t grouplist2[1]; // 0x405da9
    int32_t grouplist[1]; // 0x405ce4
    int64_t result; // 0x405bb0
    int64_t result2; // 0x405bb0
    int64_t v1; // 0x405bb0
    int64_t v2; // 0x405bb0
    int64_t v3; // 0x405bb0
    int32_t v4; // 0x405bb0
    int32_t ngroups; // bp-44, 0x405bb0
    int32_t v5; // 0x405c9d
    if (a1 == 0) {
        int32_t v6 = getgroups(0, INVALID_FORM); // 0x405c8c
        ngroups = v6;
        if (v6 < 0) {
            // 0x405d48
            if (*__errno_location() != 38) {
                // 0x405c34
                return 0xffffffff;
            }
            int64_t * mem = malloc(4); // 0x405d5b
            result = 0xffffffff;
            if (mem == NULL) {
                // 0x405c34
                return result;
            }
            int32_t v7 = a2; // 0x405d69
            *(int32_t *)mem = v7;
            *(int64_t *)a3 = (int64_t)mem;
            return v7 != -1;
        }
        int64_t v8 = v6; // 0x405c8c
        v5 = a2;
        if (v5 == -1 == (v6 != 0)) {
            int64_t v9 = function_405b70(0, v8); // 0x405d8b
            if (v9 == 0) {
                // 0x405c34
                return 0xffffffff;
            }
            // 0x405d9c
            v3 = v9;
            v4 = ngroups;
            goto lab_0x405da0;
        } else {
            int64_t v10 = v8 + 1; // 0x405cb2
            ngroups = v10;
            int64_t v11 = function_405b70(0, 0x100000000 * v10 >> 32); // 0x405cbe
            if (v11 == 0) {
                // 0x405c34
                return 0xffffffff;
            }
            // 0x405ccf
            v3 = v11;
            v4 = ngroups;
            if (v5 == -1) {
                goto lab_0x405da0;
            } else {
                // 0x405cdd
                grouplist[0] = (int32_t)v11 + 4;
                int32_t v12 = getgroups(ngroups - 1, grouplist); // 0x405ce4
                v1 = v11;
                if (v12 < 0) {
                    goto lab_0x405c18;
                } else {
                    // 0x405cf1
                    *(int32_t *)v11 = v5;
                    result2 = v12 + 1;
                    v2 = v11;
                    goto lab_0x405cf7;
                }
            }
        }
    } else {
        // 0x405bcb
        ngroups = 10;
        int64_t groups = function_405b70(0, 10); // 0x405bdd
        if (groups == 0) {
            // 0x405c34
            return 0xffffffff;
        }
        int32_t group = a2; // 0x405bf2
        char * user = (char *)a1; // 0x405bfd
        int32_t v13 = getgrouplist(user, group, (int32_t *)groups, &ngroups); // 0x405bfd
        int64_t v14 = groups; // 0x405c04
        int32_t v15 = ngroups; // 0x405c04
        if (v13 < 0) {
            int64_t v16 = ngroups; // 0x405c48
            int64_t v17 = v16; // 0x405c4f
            int64_t v18; // 0x405c51
            if (ngroups == 10) {
                // 0x405c51
                v18 = 2 * v16;
                ngroups = v18;
                v17 = v18 & 0xfffffffe;
            }
            int64_t groups2 = function_405b70((int32_t)groups, 0x100000000 * v17 >> 32); // 0x405c5d
            v1 = groups;
            while (groups2 != 0) {
                uint32_t v19 = getgrouplist(user, group, (int32_t *)groups2, &ngroups); // 0x405bfd
                v14 = groups2;
                v15 = ngroups;
                int64_t v20 = groups2; // 0x405c04
                if (v19 >= 0) {
                    goto lab_0x405c06;
                }
                v16 = ngroups;
                v17 = v16;
                // 0x405c51
                v18 = 2 * v16;
                ngroups = v18;
                v17 = v18 & 0xfffffffe;
                // 0x405c57
                groups2 = function_405b70((int32_t)v20, 0x100000000 * v17 >> 32);
                v1 = v20;
            }
        } else {
          lab_0x405c06:;
            int64_t v21 = function_405b70((int32_t)v14, (int64_t)v15); // 0x405c0e
            v1 = v14;
            if (v21 != 0) {
                // 0x405c70
                *(int64_t *)a3 = v21;
                return ngroups;
            }
        }
        goto lab_0x405c18;
    }
  lab_0x405d2b:;
    // 0x405d2b
    int64_t v22; // 0x405bb0
    int64_t v23 = v22 + 4; // 0x405d2b
    int64_t v24; // 0x405bb0
    result = v24;
    int64_t v25 = v24; // 0x405d32
    v22 = v23;
    int64_t v26; // 0x405bb0
    int64_t v27 = v26; // 0x405d32
    uint64_t v28; // 0x405d09
    if (v28 <= v23) {
        return result;
    }
    goto lab_0x405d38;
  lab_0x405c18:;
    int32_t * v33 = __errno_location(); // 0x405c18
    free((int64_t *)v1);
    // 0x405c34
    return 0xffffffff;
  lab_0x405da0:
    // 0x405da0
    grouplist2[0] = v3;
    int32_t v34 = getgroups(v4 - (int32_t)(v5 != -1), grouplist2); // 0x405da9
    v1 = v3;
    result2 = v34;
    v2 = v3;
    if (v34 >= 0) {
        goto lab_0x405cf7;
    } else {
        goto lab_0x405c18;
    }
  lab_0x405cf7:
    // 0x405cf7
    *(int64_t *)a3 = v2;
    if ((int32_t)result2 < 2) {
        // 0x405c34
        return result2;
    }
    // 0x405d04
    v28 = (0x100000000 * result2 >> 30) + v2;
    int64_t v35 = v2 + 4; // 0x405d0d
    v25 = result2;
    v22 = v35;
    if (v28 <= v35) {
        // 0x405c34
        return result2;
    }
    v27 = v2;
    while (true) {
      lab_0x405d38:;
        int64_t v29 = v27;
        int64_t v30 = v25;
        int32_t v31 = *(int32_t *)v22; // 0x405d38
        if (v31 != *(int32_t *)v2) {
            // 0x405d20
            if (*(int32_t *)v29 == v31) {
                // 0x405d3e
                v24 = v30 + 0xffffffff & 0xffffffff;
                v26 = v29;
                goto lab_0x405d2b;
            } else {
                int64_t v32 = v29 + 4; // 0x405d24
                *(int32_t *)v32 = v31;
                v24 = v30;
                v26 = v32;
                goto lab_0x405d2b;
            }
        } else {
            // 0x405d3e
            v24 = v30 + 0xffffffff & 0xffffffff;
            v26 = v29;
            goto lab_0x405d2b;
        }
    }
    int64_t result3 = result;
    return result3;
}
// Address range: 0x405dc0 - 0x405e3b
int64_t function_405dc0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405dc7
    if (fileno(stream) < 0) {
        // 0x405e27
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405dda
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405e0b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405e27
            return fclose(stream);
        }
    }
    // 0x405ddc
    if ((int32_t)function_405e40(a1, v1) == 0) {
        // 0x405e27
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405de8
    int32_t v3 = *v2; // 0x405df0
    int64_t result = fclose(stream); // 0x405dfe
    if (v3 != 0) {
        // 0x405e30
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405e00
    return result;
}
// Address range: 0x405e40 - 0x405e80
int64_t function_405e40(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405e5a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405e5a
        return fflush(stream);
    }
    // 0x405e68
    function_405e80(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405e80 - 0x405ed7
int64_t function_405e80(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405e80
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405e8a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405ebb
    int64_t result = -1; // 0x405ec4
    if (v1 != -1) {
        // 0x405ec6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405ed2
    return result;
}
// Address range: 0x405ee0 - 0x405f3d
int64_t function_405ee0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405ee0
    return function_401428();
}
// Address range: 0x405f40 - 0x405f41
int64_t function_405f40(void) {
    // 0x405f40
    int64_t result; // 0x405f40
    return result;
}
// Address range: 0x405f50 - 0x405f68
int64_t function_405f50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405f50
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x405f68 - 0x405f88
int64_t function_405f68(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x405f72
    while (*(int64_t *)v1 != -1) {
        // 0x405f73
        v1 -= 8;
    }
    // 0x405f84
    return result;
}
