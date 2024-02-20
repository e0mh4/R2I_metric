#include "decompile_retdec.h"
// Address range: 0x4016c0 - 0x4016c5
int64_t function_4016c0(void) {
    // 0x4016c0
    abort();
    // UNREACHABLE
}
// Address range: 0x4016c5 - 0x4016ca
int64_t function_4016c5(void) {
    // 0x4016c5
    abort();
    // UNREACHABLE
}
// Address range: 0x4016ca - 0x4016cf
int64_t function_4016ca(void) {
    // 0x4016ca
    abort();
    // UNREACHABLE
}
// Address range: 0x4016cf - 0x4016d4
int64_t function_4016cf(void) {
    // 0x4016cf
    abort();
    // UNREACHABLE
}
// Address range: 0x4016d4 - 0x4016d9
int64_t function_4016d4(void) {
    // 0x4016d4
    abort();
    // UNREACHABLE
}
// Address range: 0x4016d9 - 0x4016de
int64_t function_4016d9(void) {
    // 0x4016d9
    abort();
    // UNREACHABLE
}
// Address range: 0x4016e0 - 0x401837
int64_t function_4016e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a1 & 0xffffffff; // 0x4016e2
    function_402120(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_405ba0(0x401ee0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    setvbuf(g30, (char *)((int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale" ^ (int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"), 1, 0);
    function_402010(v1, a2, "cksum", "coreutils", (int64_t)g19, 0x401bd0);
    int64_t v2 = function_405400(v1, a2, (int64_t *)&g12, &g3, 0, 0x401bd0); // 0x401777
    if ((int32_t)v2 != -1) {
        // 0x40182d
        function_401bd0(1);
        // UNREACHABLE
    }
    uint32_t v3 = *(int32_t *)0x60923c; // 0x401787
    g36 = 0;
    int64_t v4; // 0x4016e0
    int64_t v5; // 0x4016e0
    if (v3 == (int32_t)a1) {
        goto lab_0x401816;
    } else {
        uint64_t v6 = (int64_t)v3; // 0x401787
        if (v1 <= v6) {
            // 0x4017e1
            return 0;
        }
        int64_t v7 = 1; // 0x4017b9
        int64_t v8 = 0x100000000 * v6 / 0x20000000 + a2;
        int64_t v9 = v8 + 8; // 0x4017c8
        v7 &= function_401920(*(int64_t *)v8, 1);
        v4 = v7;
        v5 = 1;
        while (v9 != a2 + 8 + 8 * (((v6 ^ 0xffffffff) + a1 & 0xffffffff) + (int64_t)v3)) {
            // 0x4017c0
            v8 = v9;
            v9 = v8 + 8;
            v7 &= function_401920(*(int64_t *)v8, 1);
            v4 = v7;
            v5 = 1;
        }
        goto lab_0x4017d8;
    }
  lab_0x401816:
    // 0x401816
    v4 = function_401920((int64_t)"-", 0) & 0xffffffff;
    v5 = 0;
    goto lab_0x4017d8;
  lab_0x4017d8:;
    int64_t v10 = v4; // 0x4017df
    if (g36 == 0) {
        // 0x4017e1
        return v10 % 256 ^ 1;
    }
    // 0x4017ed
    v10 = v4;
    if ((int32_t)function_404590((int64_t)g31, v5) != -1) {
        // 0x4017e1
        return v10 % 256 ^ 1;
    }
    // 0x4017fe
    error(1, *__errno_location(), "-");
    goto lab_0x401816;
}
// Address range: 0x401840 - 0x40186b
// Address range: 0x40186b - 0x40188a
int64_t function_40186b(void) {
    // 0x40186b
    return &g29;
}
// Address range: 0x40188a - 0x4018c1
int64_t function_40188a(void) {
    // 0x40188a
    return 0;
}
// Address range: 0x4018c1 - 0x401918
int64_t function_4018c1(void) {
    // 0x4018c1
    if (g34 != 0) {
        // 0x401917
        int64_t result; // 0x4018c1
        return result;
    }
    int64_t v1 = g35; // 0x4018f4
    int64_t result2; // 0x401906
    if (g35 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401906
        result2 = function_40186b();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4018f6
        v1++;
    }
    // 0x4018ea
    g35 = v1;
    // 0x401906
    result2 = function_40186b();
    g34 = 1;
    return result2;
}
// Address range: 0x401918 - 0x40191d
int64_t function_401918(void) {
    // 0x401918
    return function_40188a();
}
// Address range: 0x401920 - 0x401bd0
int64_t function_401920(int64_t file_path, int64_t a2) {
    // 0x401920
    bool v1; // 0x401920
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)"-"; // 0x401920
    int64_t v4 = file_path; // 0x401920
    int64_t v5 = 2; // 0x401948
    unsigned char v6 = *(char *)v4; // 0x401948
    char v7 = *(char *)v3; // 0x401948
    char v8 = v7; // 0x401948
    bool v9 = false; // 0x401948
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    struct _IO_FILE * v11; // 0x401920
    if ((v6 >= v10 && !v9) != v6 < v10) {
        struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x401b4b
        v11 = file;
        if (file != NULL) {
            goto lab_0x401965;
        } else {
            goto lab_0x401a9b;
        }
    } else {
        // 0x401957
        g36 = 1;
        v11 = g31;
        goto lab_0x401965;
    }
  lab_0x401965:;
    int64_t v12 = (int64_t)v11;
    int64_t v13; // 0x401920
    function_401f90(v12, 2, v13);
    int64_t v14; // bp-65592, 0x401920
    int64_t v15 = &v14; // 0x40198d
    int64_t v16 = 0;
    int64_t v17 = 0;
    int32_t v18 = fread_unlocked(&v14, 1, 0x10000, v11); // 0x401992
    int64_t v19; // 0x401920
    int64_t v20; // 0x401920
    while (v18 != 0) {
        int64_t v21 = v18; // 0x401992
        int64_t v22 = v16 + v21; // 0x4019a0
        if (v22 < v16) {
            // 0x401b61
            function_403bc0(0, 3, file_path);
            error(1, (int32_t)"%s: file too long" ^ (int32_t)"%s: file too long", dcgettext(NULL, "%s: file too long", 5));
            goto lab_0x401b98;
        }
        int64_t v23 = v15 + 1; // 0x4019b8
        char v24 = *(char *)v15; // 0x4019c3
        int64_t v25 = *(int64_t *)(8 * (int64_t)(v24 ^ (char)(v17 / 0x1000000)) + (int64_t)&g2); // 0x4019cd
        int64_t v26 = v25 ^ 256 * v17; // 0x4019cd
        int64_t v27 = v26; // 0x4019db
        while (v23 != v21 + v15) {
            int64_t v28 = v23;
            v23 = v28 + 1;
            v24 = *(char *)v28;
            v25 = *(int64_t *)(8 * (int64_t)(v24 ^ (char)(v27 / 0x1000000)) + (int64_t)&g2);
            v26 = v25 ^ 256 * v27;
            v27 = v26;
        }
        int32_t v29 = v11->e0; // 0x4019dd
        if ((v29 & 16) != 0) {
            // 0x4019e4
            v20 = v26;
            v19 = v22;
            if ((v29 & 32) != 0) {
                goto lab_0x401af0;
            } else {
                goto lab_0x4019ec;
            }
        }
        v16 = v22;
        v17 = v26;
        v18 = fread_unlocked(&v14, 1, 0x10000, v11);
    }
    // 0x401ae5
    v20 = v17;
    v19 = v16;
    if ((v11->e0 & 32) == 0) {
        goto lab_0x4019ec;
    } else {
        goto lab_0x401af0;
    }
  lab_0x401a9b:
    // 0x401a9b
    error(0, *__errno_location(), "%s", (char *)function_403bc0(0, 3, file_path));
    // 0x401a76
    return 0;
  lab_0x4019ec:;
    int64_t v30 = (int64_t)"-"; // 0x401920
    int64_t v31 = 2; // 0x401920
    unsigned char v32 = *(char *)file_path; // 0x4019f7
    char v33 = *(char *)v30; // 0x4019f7
    int64_t v34 = file_path + v2; // 0x4019f7
    char v35 = v33; // 0x4019f7
    bool v36 = false; // 0x4019f7
    while (v32 == v33) {
        int64_t v37 = v31 - 1; // 0x4019f7
        v30 += v2;
        v31 = v37;
        v35 = v32;
        v36 = true;
        if (v37 == 0) {
            // break -> 
            break;
        }
        v32 = *(char *)v34;
        v33 = *(char *)v30;
        v34 += v2;
        v35 = v33;
        v36 = false;
    }
    unsigned char v38 = v35;
    if ((v32 >= v38 && !v36) != v32 < v38) {
        // 0x401a8a
        if ((int32_t)function_404590(v12, v34) != -1) {
            goto lab_0x401a06;
        } else {
            goto lab_0x401a9b;
        }
    } else {
        goto lab_0x401a06;
    }
  lab_0x401af0:
    // 0x401af0
    error(0, *__errno_location(), "%s", (char *)function_403bc0(0, 3, file_path));
    int64_t v39 = (int64_t)"-"; // 0x401920
    int64_t v40 = 2; // 0x401920
    unsigned char v41 = *(char *)file_path; // 0x401b25
    char v42 = *(char *)v39; // 0x401b25
    int64_t v43 = file_path + v2; // 0x401b25
    char v44 = v42; // 0x401b25
    bool v45 = false; // 0x401b25
    while (v41 == v42) {
        int64_t v46 = v40 - 1; // 0x401b25
        v39 += v2;
        v40 = v46;
        v44 = v41;
        v45 = true;
        if (v46 == 0) {
            // break -> 
            break;
        }
        v41 = *(char *)v43;
        v42 = *(char *)v39;
        v43 += v2;
        v44 = v42;
        v45 = false;
    }
    unsigned char v47 = v44;
    if ((v41 >= v47 && !v45) != v41 < v47) {
        // 0x401b36
        function_404590(v12, v43);
    }
    // 0x401a76
    return 0;
  lab_0x401a06:;
    // 0x401a06
    int64_t v48; // bp-65624, 0x401920
    int64_t v49 = function_401fc0(v19, &v48); // 0x401a0c
    int64_t v50 = v20; // 0x401a14
    if (v19 != 0) {
        uint64_t v51 = v19;
        int64_t v52 = *(int64_t *)((8 * (v20 / 0x1000000 ^ v51) & 2040) + (int64_t)&g2); // 0x401a31
        int64_t v53 = v52 ^ 256 * v20; // 0x401a31
        int64_t v54 = v53; // 0x401a40
        int64_t v55 = v51 / 256; // 0x401a40
        v50 = v53;
        while (v51 >= 256) {
            // 0x401a20
            v51 = v55;
            v52 = *(int64_t *)((8 * (v54 / 0x1000000 ^ v51) & 2040) + (int64_t)&g2);
            v53 = v52 ^ 256 * v54;
            v54 = v53;
            v55 = v51 / 256;
            v50 = v53;
        }
    }
    int32_t v56 = -1 - (int32_t)v50;
    char * v57 = (char *)v49;
    if ((char)a2 != 0) {
        // 0x401ac9
        __printf_chk(1, "%u %s %s\n", v56, v57, (char *)file_path);
    } else {
        // 0x401a4d
        __printf_chk(1, "%u %s\n", v56, v57);
    }
    // 0x401a61
    if ((*(char *)g30 & 32) == 0) {
        // 0x401a76
        return 1;
    }
  lab_0x401b98:
    // 0x401b98
    error(1, *__errno_location(), "-: %s", dcgettext(NULL, "write error", 5));
    return &g51;
}
// Address range: 0x401bd0 - 0x401ebd
int64_t function_401bd0(int64_t a1) {
    int32_t status = a1; // 0x401be6
    if (status != 0) {
        // 0x401bea
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401c0f
        exit(status);
        // UNREACHABLE
    }
    // 0x401c16
    __printf_chk(1, dcgettext(NULL, "Usage: %s [FILE]...\n  or:  %s [OPTION]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print CRC checksum and byte counts of each FILE.\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x401ca0
    bool v2; // 0x401bd0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401d20
    int64_t v6 = *(int64_t *)v5; // 0x401d24
    int64_t v7 = 6; // 0x401d2a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"cksum";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401d36
        char v11 = *(char *)v9; // 0x401d36
        char v12 = v11; // 0x401d36
        bool v13 = false; // 0x401d36
        while (v10 == v11) {
            // 0x401d2c
            v7--;
            int64_t v14 = v9 + v3; // 0x401d36
            int64_t v15 = v8 + v3; // 0x401d36
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
            // break -> 0x401d42
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x401d42
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401e54;
        } else {
            // 0x401e3e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e93
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401da4;
            } else {
                goto lab_0x401e54;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401da4;
        } else {
            // 0x401d8a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e93
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401da4;
            } else {
                goto lab_0x401da4;
            }
        }
    }
  lab_0x401e54:
    // 0x401e54
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401de4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c0f
    exit(status);
    // UNREACHABLE
  lab_0x401da4:
    // 0x401da4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401de4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c0f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401ec0 - 0x401ec8
int64_t function_401ec0(int64_t a1) {
    // 0x401ec0
    g38 = a1;
    int64_t result; // 0x401ec0
    return result;
}
// Address range: 0x401ed0 - 0x401ed8
int64_t function_401ed0(int64_t a1) {
    // 0x401ed0
    g37 = a1;
    int64_t result; // 0x401ed0
    return result;
}
// Address range: 0x401ee0 - 0x401f7e
int64_t function_401ee0(void) {
    // 0x401ee0
    int32_t * err_num; // 0x401ef6
    if ((int32_t)function_405500((int64_t)g30) == 0) {
        goto lab_0x401f0c;
    } else {
        // 0x401ef6
        err_num = __errno_location();
        if (g37 == 0) {
            goto lab_0x401f23;
        } else {
            // 0x401f07
            if (*err_num != 32) {
                goto lab_0x401f23;
            } else {
                goto lab_0x401f0c;
            }
        }
    }
  lab_0x401f0c:;
    int64_t result = function_405500((int64_t)g33); // 0x401f13
    if ((int32_t)result == 0) {
        // 0x401f1c
        return result;
    }
    // 0x401f5e
    _exit(g20);
    // UNREACHABLE
  lab_0x401f23:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401f2f
    if (g38 == 0) {
        // 0x401f69
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401f43
        error(0, *err_num, "%s: %s", (char *)function_403b90((int64_t)g38), v1);
    }
    // 0x401f5e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401f80 - 0x401f85
int64_t function_401f80(void) {
    // 0x401f80
    int64_t fd; // 0x401f80
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x401f90 - 0x401fb1
int64_t function_401f90(int64_t stream, int64_t advice, int64_t a3) {
    // 0x401f90
    if (stream == 0) {
        // 0x401fb0
        int64_t result; // 0x401f90
        return result;
    }
    // 0x401f95
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x401fc0 - 0x402008
int64_t function_401fc0(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x401fc0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x401fd2
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x401fdb
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x402004
    return result;
}
// Address range: 0x402010 - 0x402112
int64_t function_402010(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x402010
    int64_t v1; // 0x402010
    if ((char)v1 != 0) {
        // 0x402023
        int128_t v2; // 0x402010
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x40205a
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x40206f
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x402010
        return result;
    }
    int64_t result2 = function_405400(a1, a2, &g4, (int64_t *)&g5, 0, a6); // 0x4020a9
    int32_t v4 = result2; // 0x4020ae
    switch (v4) {
        default: {
            // 0x4020b8
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x4020da
                function_404160((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x40206f
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
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
        g39 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402138
    if (v1 - str < 7) {
        // 0x402189
        g39 = str;
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
        g39 = str;
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
        g29 = v20;
    }
    // 0x402189
    g39 = v20;
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
    int64_t v2 = function_4055c0(); // 0x4021f0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4022a6
    if (v3 == 85) {
        // 0x402200
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402298
            result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x40222e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x40223b
        // 0x4021e1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402298
        result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x40227d
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x40228a
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
            g50 = v21;
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
                v24 = function_405480(&wc, v30, v22 - v29);
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
    if (result != (int64_t)&g40) {
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
    int64_t result = function_404500(a1 == 0 ? (int64_t)&g41 : a1, 56); // 0x4036b6
    return result;
}
// Address range: 0x4036d0 - 0x4036df
int64_t function_4036d0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g41 : a1); // 0x4036dc
    return result;
}
// Address range: 0x4036e0 - 0x4036ef
int64_t function_4036e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x4036e8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g41;
}
// Address range: 0x4036f0 - 0x403723
int64_t function_4036f0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 + 8 : a1 + 8; // 0x403709
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40370e
    uint32_t v3 = *v2; // 0x40370e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403712
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403730 - 0x403743
int64_t function_403730(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g41 + 4 : a1 + 4); // 0x40373c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403750 - 0x40377b
int64_t function_403750(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g41 : a1; // 0x403758
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403775
        abort();
        // UNREACHABLE
    }
    // 0x40376c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g41;
}
// Address range: 0x403780 - 0x4037f2
int64_t function_403780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g41 : a5; // 0x4037a2
    int32_t * v2 = __errno_location(); // 0x4037ab
    uint32_t v3 = *(int32_t *)v1; // 0x4037cb
    int64_t result = function_4022c0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4037da
    return result;
}
// Address range: 0x403800 - 0x4038e1
int64_t function_403800(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g41 : a4; // 0x403822
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
        v3 = &g51;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403930
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g51;
        }
    }
    int64_t v6 = v3; // 0x40394d
    if (g23 != 0x6092a0) {
        // 0x40394f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g40;
        v6 = &g51;
    }
    int64_t result = v6; // 0x403971
    if (g22 != &g23) {
        // 0x403973
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g51;
    }
    // 0x403986
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x4039a0 - 0x4039b1
int64_t function_4039a0(void) {
    // 0x4039a0
    int64_t v1; // 0x4039a0
    return function_4034f0(v1, v1, -1, (int64_t *)&g41);
}
// Address range: 0x4039c0 - 0x4039ca
int64_t function_4039c0(void) {
    // 0x4039c0
    int64_t v1; // 0x4039c0
    return function_4034f0(v1, v1, v1, (int64_t *)&g41);
}
// Address range: 0x4039d0 - 0x4039e6
int64_t function_4039d0(int64_t a1) {
    // 0x4039d0
    return function_4034f0(0, a1, -1, (int64_t *)&g41);
}
// Address range: 0x4039f0 - 0x403a02
int64_t function_4039f0(int64_t a1, int64_t a2) {
    // 0x4039f0
    return function_4034f0(0, a1, a2, (int64_t *)&g41);
}
// Address range: 0x403a10 - 0x403a78
int64_t function_403a10(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403a20
    return function_4034f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403a80 - 0x403ae4
int64_t function_403a80(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403a90
    return function_4034f0((int64_t)a1, a3, a4, &v1);
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
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x403b1d
    int128_t v2 = __asm_movdqa(g42); // 0x403b25
    int128_t v3 = __asm_movdqa(g43); // 0x403b2d
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
    int128_t v1 = __asm_movdqa(*(int128_t *)&g41); // 0x403c37
    int128_t v2 = __asm_movdqa(g42); // 0x403c3f
    int128_t v3 = __asm_movdqa(g43); // 0x403c47
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
        return function_403d60(a1, a2, a3, a4, a5, 0, (int64_t)&g51);
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
    return function_403d60(a1, a2, a3, a4, a5, v2, (int64_t)&g51);
}
// Address range: 0x404160 - 0x4041c0
int64_t function_404160(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x404160
    int64_t v4 = &v3; // 0x404160
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x404193
    int64_t v7; // 0x40417d
    int64_t * v8; // 0x40419b
    int64_t v9; // 0x40419b
    int64_t v10; // 0x4041a7
    if (v6 < 48) {
        // 0x404170
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x4041b3
            break;
        }
    } else {
        // 0x40419b
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x4041b3
            break;
        }
    }
    int64_t v11 = 10; // 0x404191
    while (v5 != 9) {
        // 0x404189
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x404170
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x4041b3
                break;
            }
        } else {
            // 0x40419b
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x4041b3
                break;
            }
        }
        // 0x404189
        v11 = 10;
    }
    // 0x4041b3
    return function_403d60(a1, a2, a3, a4, v4, v11, (int64_t)&g51);
}
// Address range: 0x4041c0 - 0x40427c
int64_t function_4041c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
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
    int64_t result = function_403d60(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g51); // 0x40426f
    return result;
}
// Address range: 0x404280 - 0x4042f4
int64_t function_404280(int64_t a1) {
    // 0x404280
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4042e3
    return fputs_unlocked(v1, g30);
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
        return (int32_t)&g51 ^ (int32_t)&g51;
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
// Address range: 0x404590 - 0x40460b
int64_t function_404590(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404597
    if (fileno(stream) < 0) {
        // 0x4045f7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4045aa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4045db
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4045f7
            return fclose(stream);
        }
    }
    // 0x4045ac
    if ((int32_t)function_404610(a1, v1) == 0) {
        // 0x4045f7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4045b8
    int32_t v3 = *v2; // 0x4045c0
    int64_t result = fclose(stream); // 0x4045ce
    if (v3 != 0) {
        // 0x404600
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4045d0
    return result;
}
// Address range: 0x404610 - 0x404650
int64_t function_404610(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40462a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40462a
        return fflush(stream);
    }
    // 0x404638
    function_404650(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404650 - 0x4046a7
int64_t function_404650(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404650
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40465a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40468b
    int64_t result = -1; // 0x404694
    if (v1 != -1) {
        // 0x404696
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4046a2
    return result;
}
// Address range: 0x4046b0 - 0x40478f
int64_t function_4046b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4046bc
    uint32_t v2 = *v1; // 0x4046bc
    int64_t v3 = a2 & 0xffffffff; // 0x4046c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4046c4
    uint64_t v5 = (int64_t)*v4; // 0x4046c4
    int64_t v6; // 0x404732
    if (v3 <= v5) {
      lab_0x40472c_2:
        // 0x40472c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4046b2
    int64_t v8 = v2; // 0x4046b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40472c
        goto lab_0x40472c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4046e8
    int64_t v17; // 0x4046f6
    int64_t * v18; // 0x404710
    int64_t * v19; // 0x404713
    int64_t v20; // 0x40471e
    int64_t v21; // 0x4046f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4046f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404710
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404727
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40472c
            goto lab_0x40472c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40472c
            goto lab_0x40472c_2;
        }
        // 0x4046e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40476b
    int64_t * v23 = (int64_t *)v22; // 0x404770
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404773
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404770
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404787
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4046dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40472c
            goto lab_0x40472c_2;
        }
        // 0x4046e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4046f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404710
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404727
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40472c
                goto lab_0x40472c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40472c
                goto lab_0x40472c_2;
            }
            // 0x4046e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404750
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404770
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404787
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40472c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404790 - 0x404dac
int64_t function_404790(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4047af
    int64_t v2 = *v1; // 0x4047af
    char * str2 = (char *)v2; // 0x4047bc
    char c = *str2; // 0x4047bc
    int64_t v3 = v2; // 0x4047e8
    int64_t v4 = 0; // 0x404790
    int32_t v5; // 0x404790
    int64_t v6; // 0x404790
    int64_t v7; // 0x404790
    int64_t v8; // 0x404790
    int64_t v9; // 0x404790
    int64_t v10; // 0x404790
    int64_t v11; // 0x404790
    int64_t v12; // 0x404790
    int64_t v13; // 0x404790
    int64_t str3; // 0x404790
    int64_t v14; // 0x404790
    int64_t v15; // 0x404790
    int64_t v16; // 0x404790
    int64_t v17; // 0x404790
    int32_t v18; // 0x404790
    int32_t v19; // 0x404790
    int32_t v20; // 0x404790
    int32_t v21; // 0x404790
    int32_t v22; // 0x404790
    int32_t v23; // 0x404790
    int32_t v24; // 0x404790
    int32_t v25; // 0x404790
    int32_t v26; // 0x404790
    int32_t v27; // 0x404790
    int32_t v28; // 0x404790
    int32_t v29; // 0x404790
    int64_t nmemb; // 0x404790
    int64_t v30; // 0x404790
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4047ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4047e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4047f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4047fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4047c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40482c
                int64_t v34; // 0x404790
                int64_t v35; // 0x404790
                if (strncmp(str, str2, n) == 0) {
                    // 0x404835
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4049b0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404846
                int64_t v37 = *(int64_t *)v36; // 0x40484a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404820
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404835
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4049b0;
                        }
                    }
                    // 0x404846
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
                  lab_0x404896:
                    // 0x404896
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
                        goto lab_0x4048f0;
                    } else {
                        if (v11 == 0) {
                            // 0x404a60
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4048f0;
                        } else {
                            if (v39 == 0) {
                                // 0x404a10
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4048ba;
                                } else {
                                    // 0x404a1c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4048ba;
                                    } else {
                                        // 0x404a2a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4048ba;
                                        } else {
                                            goto lab_0x4048f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4048ba;
                            }
                        }
                    }
                }
              lab_0x404901:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404ad6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404c82
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x404ca2
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404cef
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x404d09
                            int64_t v45; // 0x404d0b
                            if (*(char *)v42 != 0) {
                                // 0x404d0b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404d03
                            while (v17 + nmemb != v42) {
                                // 0x404d05
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404d0b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x404cf8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404d30
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x404ae4
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404c3f
                        free((int64_t *)v17);
                    }
                    // 0x404b39
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404b50
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4049fe
                    return 63;
                }
                // 0x404920
                v5 = v39;
                if (v13 != 0) {
                    // 0x4049a4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4049b0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4049c0
                    uint32_t v50 = *v49; // 0x4049c0
                    int64_t v51 = v50; // 0x4049c0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4049ca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4049d3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404bff
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404baa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4049fe
                            return 63;
                        }
                        // 0x404a48
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404d5f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404c5d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404c70
                                // 0x4049fe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404b6e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404b82
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4049eb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4049ee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4049f2
                    int64_t result = v59; // 0x4049f8
                    if (v58 != 0) {
                        // 0x4049fa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4049fe
                    return result;
                }
            } else {
                // 0x4047fe
                v5 = v32;
            }
            // break -> 0x404925
            break;
        }
    }
    // 0x404925
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40493d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404947
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4049fe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404a89
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404976
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404986
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4048f0:
    // 0x4048f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4048f0
    int64_t v63 = *(int64_t *)v62; // 0x4048f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404901
        goto lab_0x404901;
    }
    goto lab_0x404896;
  lab_0x4048ba:
    // 0x4048ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404790
    int32_t v65; // 0x404790
    int32_t v66; // 0x404790
    if (v27 != 0) {
        goto lab_0x4048f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404a70
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4048f0;
            } else {
                goto lab_0x4048e1;
            }
        } else {
            // 0x4048d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404bcc
                int64_t v67 = (int64_t)mem; // 0x404bcc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4048f0;
                } else {
                    // 0x404bdf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4048e1;
                }
            } else {
                goto lab_0x4048e1;
            }
        }
    }
  lab_0x4048e1:
    // 0x4048e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4048f0;
}
// Address range: 0x404db0 - 0x405376
int64_t function_404db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404dd1
    if (v3 < 1) {
        // 0x404f8e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404dcd
    int32_t v5 = *(int32_t *)a7; // 0x404dd9
    uint64_t v6 = a1 & 0xffffffff; // 0x404ddb
    int64_t v7 = v2; // 0x404de0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404de3
    *v8 = 0;
    int64_t v9; // 0x404db0
    int64_t v10; // 0x404db0
    int64_t v11; // 0x404db0
    int64_t v12; // 0x404db0
    int64_t str; // 0x404db0
    int64_t v13; // 0x404db0
    int64_t v14; // 0x404db0
    int64_t v15; // 0x404db0
    int64_t v16; // 0x404db0
    int64_t v17; // 0x404db0
    int32_t v18; // 0x404db0
    char v19; // 0x404db0
    if (v5 == 0) {
        // 0x404fc8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404dfa;
    } else {
        // 0x404df3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404e40
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404e43
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404f08;
            } else {
                int64_t v22 = v7 + 1; // 0x404e56
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404e66
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404f1c;
                } else {
                    goto lab_0x404e78;
                }
            }
        } else {
            goto lab_0x404dfa;
        }
    }
  lab_0x404dfa:
    // 0x404dfa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404e00
    *v24 = 0;
    int64_t v25; // 0x404db0
    int64_t v26; // 0x404db0
    int64_t v27; // 0x404db0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404ef0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404efd;
        }
        case 43: {
            // 0x405200
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404efd;
        }
        default: {
            // 0x404e1c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40517f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405298
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404efd;
                } else {
                    // 0x40518d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404e2a;
                }
            } else {
                goto lab_0x404e2a;
            }
        }
    }
  lab_0x404f08:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404f0f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404e78;
    } else {
        goto lab_0x404f1c;
    }
  lab_0x404e2a:
    // 0x404e2a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404efd;
  lab_0x404efd:
    // 0x404efd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404f08;
  lab_0x404e78:;
    uint32_t v30 = *(int32_t *)a7; // 0x404e78
    int64_t v31 = v30; // 0x404e78
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404e7a
    if ((int64_t)*v32 > v31) {
        // 0x404e7f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404e82
    if (*v33 > v30) {
        // 0x404e87
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404e8a
    int64_t v35 = v31; // 0x404e8e
    int64_t v36 = v15; // 0x404e8e
    int64_t v37; // 0x404db0
    int64_t v38; // 0x404db0
    int64_t v39; // 0x404db0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404ff8
        int64_t v41 = v40; // 0x404ff8
        v2 = v41;
        int64_t v42; // 0x404db0
        if (*v33 == v40) {
            // 0x4051e0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4051e8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405004
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405008
                function_4046b0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405018
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405021
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40502a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405041
            int64_t v47 = v45 & 0xffffffff; // 0x405045
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40504e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405054
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405056;
                }
            }
            int64_t v48 = v47 + 1; // 0x405030
            int64_t v49 = v48 & 0xffffffff; // 0x405030
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405041
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40504e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405054
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405056;
                    }
                }
                // 0x405030
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4051f8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405056;
    } else {
        goto lab_0x404e94;
    }
  lab_0x404f1c:
    // 0x404f1c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404f1f
    int64_t v51 = v12; // 0x404f1f
    int64_t v52 = v14; // 0x404f1f
    if (*(char *)v10 == 0) {
        goto lab_0x404e78;
    } else {
        goto lab_0x404f25;
    }
  lab_0x404e94:;
    int32_t v53 = v35; // 0x404e94
    int64_t v54; // 0x404db0
    int64_t v55; // 0x404db0
    int64_t v56; // 0x404db0
    int64_t v57; // 0x404db0
    int64_t v58; // 0x404db0
    int64_t v59; // 0x404db0
    char * v60; // 0x404db0
    int64_t v61; // 0x404db0
    int64_t v62; // 0x404ea9
    int64_t v63; // 0x404db0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404fe3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404fe6;
    } else {
        // 0x404e9c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404db0
        int64_t v66 = v65 ? -1 : 1; // 0x404eb0
        int64_t v67 = (int64_t)"--"; // 0x404db0
        int64_t v68 = v62; // 0x404db0
        int64_t v69 = 3; // 0x404eb0
        unsigned char v70 = *(char *)v68; // 0x404eb0
        char v71 = *(char *)v67; // 0x404eb0
        char v72 = v71; // 0x404eb0
        bool v73 = false; // 0x404eb0
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
            // 0x404fa0
            if (*(char *)v62 == 45) {
                // 0x405060
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405060
                if (c == 0) {
                    goto lab_0x404faa;
                } else {
                    // 0x40506d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4050f0;
                    } else {
                        if (c == 45) {
                            // 0x4052d3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405145;
                        } else {
                            // 0x40507e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4050f0;
                            } else {
                                // 0x405083
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4050a4;
                                } else {
                                    // 0x40508a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4050f0;
                                    } else {
                                        goto lab_0x4050a4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404faa;
            }
        } else {
            uint32_t v75 = *v33; // 0x404ec0
            v2 = v75;
            int32_t v76 = *v32; // 0x404ec3
            int64_t v77 = v35 + 1; // 0x404ec6
            int32_t v78 = v77; // 0x404ec9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405230
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404ed7
                    function_4046b0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404ee5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404fe6;
        }
    }
  lab_0x404f25:;
    // 0x404f25
    int64_t v79; // bp-104, 0x404db0
    int64_t v80 = &v79; // 0x404dba
    int64_t v81 = v50 + 1; // 0x404f25
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404f2c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404f31
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404f35
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404f39
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404f41
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404f46
    int32_t c2 = v84; // 0x404f46
    char * found_char_pos = strchr(str2, c2); // 0x404f46
    int64_t v87 = *v82; // 0x404f4b
    v2 = v87;
    int64_t v88 = *v85; // 0x404f55
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404f60
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405250
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40521d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404f8e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404f46
    char v91 = *(char *)(v90 + 1); // 0x404f7b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404f35
        if (v91 != 58) {
            // 0x404f8e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4051a4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4052a8
                *v8 = 0;
            } else {
                // 0x40528c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4051ce
            *v83 = 0;
            // 0x404f8e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4051ae
        if (v93 != 0) {
            // 0x405240
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4051ce
            *v83 = 0;
            // 0x404f8e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4051c1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4051ce
            *v83 = 0;
            // 0x404f8e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40530a
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4052ba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4052c1
        // 0x4051ce
        *v83 = 0;
        // 0x404f8e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405119
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40511b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405340
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4052f1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4052f8
            // 0x404f8e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405126
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40512a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405145;
  lab_0x405056:
    // 0x405056
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404e94;
  lab_0x405145:;
    int64_t v99 = function_404790(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405163
    // 0x404f8e
    return v99 & 0xffffffff;
  lab_0x404fe6:;
    int32_t v100 = v55; // 0x404fe6
    if (v100 != (int32_t)v59) {
        // 0x404fea
        *(int32_t *)a7 = v100;
    }
    // 0x404f8e
    return 0xffffffff;
  lab_0x404faa:
    // 0x404faa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404fb1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404f8e
    return v99 & 0xffffffff;
  lab_0x4050f0:
    // 0x4050f0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404f25;
  lab_0x4050a4:
    // 0x4050a4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404790(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x4050ca
    if ((int32_t)v101 != -1) {
        // 0x404f8e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4050df
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4050f0;
}
// Address range: 0x405380 - 0x4053d6
int64_t function_405380(int64_t a1) {
    // 0x405380
    *(int32_t *)&g44 = g28;
    *(int32_t *)&g45 = g27;
    int64_t v1; // 0x405380
    int64_t result = function_404db0(v1, v1, v1, v1, v1, v1, &g44, a1 & 0xffffffff); // 0x4053a6
    g28 = *(int32_t *)&g44;
    g49 = g47;
    *(int32_t *)&g26 = g46;
    return result;
}
// Address range: 0x4053e0 - 0x4053f8
int64_t function_4053e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4053e0
    return function_405380(1);
}
// Address range: 0x405400 - 0x405413
int64_t function_405400(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x405400
    return function_405380(0);
}
// Address range: 0x405420 - 0x405435
int64_t function_405420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405420
    return function_404db0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405440 - 0x405456
int64_t function_405440(void) {
    // 0x405440
    return function_405380(0);
}
// Address range: 0x405460 - 0x405478
int64_t function_405460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405460
    return function_404db0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405480 - 0x4054fa
int64_t function_405480(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40548b
    int64_t v2 = (int64_t)&g12; // 0x40548b
    int32_t * pwc; // 0x405480
    int64_t v3; // 0x405480
    int64_t n; // 0x405480
    if (a2 == 0) {
        goto lab_0x4054d2;
    } else {
        // 0x40548d
        if (a3 == 0) {
            // 0x4054b8
            return -2;
        }
        // 0x405499
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4054d2;
        } else {
            goto lab_0x4054a4;
        }
    }
  lab_0x4054d2:
    // 0x4054d2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405480
    pwc = (int32_t *)&v4;
    goto lab_0x4054a4;
  lab_0x4054a4:;
    char * wstr = (char *)v3; // 0x4054aa
    int64_t ps; // 0x405480
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4054aa
    int64_t result = v5; // 0x4054aa
    if (v5 < 0xfffffffe) {
        // 0x4054b8
        return result;
    }
    int64_t result2 = result; // 0x4054e9
    if ((char)function_405560(0, v3) == 0) {
        // 0x4054eb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4054b8
    return result2;
}
// Address range: 0x405500 - 0x40555d
int64_t function_405500(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405507
    int64_t v2; // 0x405500
    int64_t result = function_404590(a1, v2); // 0x405518
    if ((v2 & 32) != 0) {
        // 0x405540
        if ((int32_t)result == 0) {
            // 0x405544
            *__errno_location() = 0;
        }
        // 0x40553a
        return 0xffffffff;
    }
    // 0x405521
    if ((int32_t)result == 0) {
        // 0x40553a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405528
    if (v1 == 0) {
        // 0x40552a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40553a
    return result2;
}
// Address range: 0x405560 - 0x4055be
int64_t function_405560(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405566
    if (locale == NULL) {
        // 0x405593
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405566
    bool v2; // 0x405560
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x405560
    int64_t v5 = v1; // 0x405560
    int64_t v6 = 2; // 0x405585
    unsigned char v7 = *(char *)v5; // 0x405585
    char v8 = *(char *)v4; // 0x405585
    char v9 = v8; // 0x405585
    bool v10 = false; // 0x405585
    while (v7 == v8) {
        // 0x405578
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405591
    int64_t v13 = v1; // 0x405591
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405593
        return 0;
    }
    int64_t v14 = 6; // 0x405591
    unsigned char v15 = *(char *)v13; // 0x4055ad
    char v16 = *(char *)v12; // 0x4055ad
    char v17 = v16; // 0x4055ad
    bool v18 = false; // 0x4055ad
    while (v15 == v16) {
        // 0x4055a0
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
// Address range: 0x4055c0 - 0x405b22
int64_t function_4055c0(void) {
    char * v1 = nl_langinfo(14); // 0x4055d6
    char * v2 = g48; // 0x4055db
    char * v3; // 0x4055c0
    int64_t v4; // 0x4055c0
    int64_t v5; // 0x4055c0
    int64_t v6; // 0x4055c0
    int64_t v7; // 0x4055c0
    int32_t size; // 0x4055c0
    int32_t size2; // 0x4055c0
    int32_t len; // 0x405692
    int64_t v8; // 0x405692
    char * env_val; // 0x40567d
    if (v2 == NULL) {
        // 0x405678
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4056e5;
        } else {
            // 0x40568a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4056e5;
            } else {
                // 0x40568f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40567d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405b15
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4056e5;
                    } else {
                        // 0x405a89
                        size2 = len + 14;
                        goto lab_0x4056ab;
                    }
                } else {
                    goto lab_0x4056ab;
                }
            }
        }
    } else {
        // 0x4055c0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4055fa;
    }
  lab_0x40592c:;
    // 0x40592c
    struct _IO_FILE * stream; // 0x40576b
    int32_t v10 = __uflow(stream); // 0x40592f
    int64_t v11; // 0x4055c0
    int64_t v12 = v11; // 0x405939
    int64_t v13; // 0x4055c0
    int64_t v14 = v13; // 0x405939
    int32_t v15 = v10; // 0x405939
    int64_t v16; // 0x4055c0
    int64_t v17 = v16; // 0x405939
    int64_t v18 = v11; // 0x405939
    int64_t v19 = v13; // 0x405939
    int64_t v20 = v16; // 0x405939
    if (v10 == -1) {
        // break -> 0x40593f
        goto lab_0x40593f;
    }
    goto lab_0x4057b9;
  lab_0x4057ae:;
    // 0x4057ae
    int64_t v90; // 0x4055c0
    int64_t * v32; // 0x4057a0
    *v32 = v90 + 1;
    int64_t v89; // 0x4055c0
    v12 = v89;
    int64_t v91; // 0x4055c0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4055c0
    v17 = v92;
    goto lab_0x4057b9;
  lab_0x4057b9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4055c0
    int32_t v25; // bp-120, 0x4055c0
    int32_t v26; // bp-184, 0x4055c0
    int64_t v27; // 0x40576b
    int64_t v28; // 0x405788
    int64_t v29; // 0x40578d
    int64_t * v30; // 0x4057a4
    switch (c) {
        case 32: {
            goto lab_0x4057a0;
        }
        case 10: {
            goto lab_0x4057a0;
        }
        case 9: {
            goto lab_0x4057a0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405991
            int32_t v33; // 0x4055c0
            char v34; // 0x4055c0
            int32_t v35; // 0x40599e
            if (v31 < *v30) {
                // 0x405970
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40599b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405991
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405970
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40599b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405980
                v36 = v33;
            }
            // 0x405a6f
            if (v36 == -1) {
                // break -> 0x40593f
                break;
            }
            goto lab_0x4057a0;
        }
        default: {
            // 0x4057cf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40593f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4057f8
            int64_t v39 = v37 + 4; // 0x4057fa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405806
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405808
            while (v41 == 0) {
                // 0x4057f8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405826
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405832
            int64_t v45 = v43 + 4; // 0x405834
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405840
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405842
            while (v47 == 0) {
                // 0x405832
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40582f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405858
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405868
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40586c
            int64_t v52 = v51 + v48; // 0x405875
            int64_t * mem; // 0x4055c0
            int64_t v53; // 0x4055c0
            int64_t v54; // 0x4055c0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4059ab
                int64_t v56 = v55 + 3; // 0x4059b7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405891
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4058a0
            if (mem == NULL) {
                // 0x405acc
                free((int64_t *)v21);
                function_404590(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405744;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4058b8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4058c2
            uint32_t v62 = (int32_t)v59; // 0x4058c5
            int64_t v63; // 0x4055c0
            if (v62 >= 8) {
                // 0x4059d4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4059ee
                int64_t v66 = v61 - v65; // 0x4059f2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4059fd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405a0e
                    int64_t v70 = v69 & 0xffffffff; // 0x405a0e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405a0b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405a9f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4058d7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4058db
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
            int64_t v73 = v51 + 1; // 0x4058eb
            int64_t v74 = v60 - 1; // 0x4058ef
            uint32_t v75 = (int32_t)v73; // 0x4058f4
            int64_t v76; // 0x4055c0
            if (v75 >= 8) {
                // 0x405a22
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405a2c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405a3c
                int64_t v80 = v74 - v79; // 0x405a40
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405a4b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405a5b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405a59
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405ab6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405abe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405906
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40590a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405b03
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40591e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4057ae;
            } else {
                goto lab_0x40592c;
            }
        }
    }
  lab_0x4057a0:;
    int64_t v93 = v23; // 0x4055c0
    int64_t v94 = v22; // 0x4055c0
    int64_t v95 = v21; // 0x4055c0
    goto lab_0x4057a0_2;
  lab_0x4056e5:;
    int64_t * mem3 = malloc(size); // 0x4056e5
    int64_t v97 = (int64_t)&g12; // 0x4056f0
    int64_t v98; // 0x4055c0
    int64_t path; // 0x4055c0
    if (mem3 == NULL) {
        goto lab_0x4056c2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4056e5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405706;
    }
  lab_0x4055fa:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x4055ed
    char v100 = *v3; // 0x4055fa
    int64_t v101; // 0x4055c0
    if (v100 == 0) {
        // 0x405654
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4055c0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4055c0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405640
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405647;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405610
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40561d
        char v107 = *(char *)v106; // 0x405622
        v102 = v107;
        if (v107 == 0) {
            // 0x405654
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40562b
    v104 = v103 + 1;
  lab_0x405647:
    // 0x405654
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4056c2:;
    char * v108 = (char *)v97;
    g48 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4055fa;
  lab_0x405706:;
    int64_t v109 = v98 + path; // 0x405706
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405732
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405761
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405a92
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405785
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4057a0_2:;
                uint64_t v96 = *v32; // 0x4057a0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40592c;
                } else {
                    goto lab_0x4057ae;
                }
            }
          lab_0x40593f:
            // 0x40593f
            function_404590(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40595e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405744;
  lab_0x4056ab:;
    int64_t * mem4 = malloc(size2); // 0x4056ab
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405751
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405706;
    } else {
        goto lab_0x4056c2;
    }
  lab_0x405744:
    // 0x405744
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4056c2;
}
// Address range: 0x405b30 - 0x405b8d
int64_t function_405b30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405b30
    return function_401330();
}
// Address range: 0x405b90 - 0x405b91
int64_t function_405b90(void) {
    // 0x405b90
    int64_t result; // 0x405b90
    return result;
}
// Address range: 0x405ba0 - 0x405bb8
int64_t function_405ba0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405ba0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x405bb8 - 0x405bd8
int64_t function_405bb8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x405bc2
    while (*(int64_t *)v1 != -1) {
        // 0x405bc3
        v1 -= 8;
    }
    // 0x405bd4
    return result;
}
