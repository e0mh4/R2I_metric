#include "decompile_retdec.h"
// Address range: 0x4016d0 - 0x4016d5
int64_t function_4016d0(void) {
    // 0x4016d0
    abort();
    // UNREACHABLE
}
// Address range: 0x4016d5 - 0x4016da
int64_t function_4016d5(void) {
    // 0x4016d5
    abort();
    // UNREACHABLE
}
// Address range: 0x4016da - 0x4016df
int64_t function_4016da(void) {
    // 0x4016da
    abort();
    // UNREACHABLE
}
// Address range: 0x4016df - 0x4016e4
int64_t function_4016df(void) {
    // 0x4016df
    abort();
    // UNREACHABLE
}
// Address range: 0x4016e4 - 0x4016e9
int64_t function_4016e4(void) {
    // 0x4016e4
    abort();
    // UNREACHABLE
}
// Address range: 0x4016e9 - 0x4016ee
int64_t function_4016e9(void) {
    // 0x4016e9
    abort();
    // UNREACHABLE
}
// Address range: 0x4016ee - 0x4016f3
int64_t function_4016ee(void) {
    // 0x4016ee
    abort();
    // UNREACHABLE
}
// Address range: 0x4016f3 - 0x4016f8
int64_t function_4016f3(void) {
    // 0x4016f3
    abort();
    // UNREACHABLE
}
// Address range: 0x401700 - 0x401899
int64_t function_401700(int64_t a1, int64_t a2) {
    // 0x401700
    function_4032e0(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g20 = 2;
    int64_t v1; // 0x401700
    function_408f30(0x4031f0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    g32 = a2;
    uint32_t v2 = (int32_t)a1; // 0x401756
    int64_t v3; // 0x401700
    char * v4; // 0x401861
    if (v2 == 2) {
        char * str = (char *)*(int64_t *)(a2 + 8); // 0x4017c7
        if (strcmp(str, "--help") == 0) {
            // 0x401892
            function_402e30(0);
            // UNREACHABLE
        }
        // 0x4017d4
        if (strcmp(str, "--version") == 0) {
            // 0x401813
            function_4056b0((int64_t)g27, &g4, "GNU coreutils", (int64_t)g19, "Kevin Braunsdorf", "Matthew Bradburn");
            // 0x4017b2
            return 0;
        }
        // 0x4017e7
        if (strcmp(str, "]") == 0) {
            // 0x4017f8
            g34 = 1;
            *(int32_t *)&g35 = 1;
            // 0x4017b2
            return 1;
        }
    } else {
        if (v2 >= 2) {
            // 0x401764
            if (strcmp((char *)*(int64_t *)(a2 - 8 + (0x100000000 * a1 >> 29)), "]") == 0) {
                // 0x40177e
                *(int32_t *)&g35 = 1;
                g34 = v2 - 1;
                uint64_t v5 = function_402790(a1 + 0xfffffffe & 0xffffffff); // 0x401794
                int32_t v6 = *(int32_t *)&g35; // 0x401799
                if (v6 == g34) {
                    // 0x4017b2
                    return v5 % 256 ^ 1;
                }
                int64_t v7 = *(int64_t *)(g32 + 8 * (int64_t)v6); // 0x40187a
                // 0x40185f
                v3 = function_404f00((int64_t *)v7);
                v4 = dcgettext(NULL, (char *)(int64_t)"extra argument %s", 5);
                function_401b10((int64_t)v4, v3, 5, v1, v1, v1);
                // UNREACHABLE
            }
        }
    }
    // 0x40185f
    v3 = function_404f00((int64_t *)"]");
    v4 = dcgettext(NULL, (char *)(int64_t)"missing %s", 5);
    function_401b10((int64_t)v4, v3, 5, v1, v1, v1);
    // UNREACHABLE
}
// Address range: 0x4018a0 - 0x4018cb
// Address range: 0x4018cb - 0x4018ea
int64_t function_4018cb(void) {
    // 0x4018cb
    return 0x60d258;
}
// Address range: 0x4018ea - 0x401921
int64_t function_4018ea(void) {
    // 0x4018ea
    return 0;
}
// Address range: 0x401921 - 0x401978
int64_t function_401921(void) {
    // 0x401921
    if (g30 != 0) {
        // 0x401977
        int64_t result; // 0x401921
        return result;
    }
    int64_t v1 = g31; // 0x401954
    int64_t result2; // 0x401966
    if (g31 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401966
        result2 = function_4018cb();
        g30 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401956
        v1++;
    }
    // 0x40194a
    g31 = v1;
    // 0x401966
    result2 = function_4018cb();
    g30 = 1;
    return result2;
}
// Address range: 0x401978 - 0x40197d
int64_t function_401978(void) {
    // 0x401978
    return function_4018ea();
}
// Address range: 0x401980 - 0x401ac8
int64_t function_401980(int64_t a1, int64_t a2, int64_t a3) {
    // 0x401980
    bool v1; // 0x401980
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)&g1; // 0x401980
    int64_t v4 = a1; // 0x401980
    int64_t v5 = 2; // 0x401996
    unsigned char v6 = *(char *)v4; // 0x401996
    char v7 = *(char *)v3; // 0x401996
    char v8 = v7; // 0x401996
    bool v9 = false; // 0x401996
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
    int64_t v11 = (int64_t)"!="; // 0x4019a0
    int64_t v12 = a1; // 0x4019a0
    if ((v6 >= v10 && !v9) == v6 < v10) {
        // 0x4019bb
        return 1;
    }
    int64_t v13 = 3; // 0x4019a0
    unsigned char v14 = *(char *)v12; // 0x4019af
    char v15 = *(char *)v11; // 0x4019af
    char v16 = v15; // 0x4019af
    bool v17 = false; // 0x4019af
    while (v14 == v15) {
        // 0x4019a2
        v13--;
        v11 += v2;
        v12 += v2;
        v16 = v14;
        v17 = true;
        if (v13 == 0) {
            // break -> 
            break;
        }
        v14 = *(char *)v12;
        v15 = *(char *)v11;
        v16 = v15;
        v17 = false;
    }
    unsigned char v18 = v16;
    int64_t v19 = (int64_t)"=="; // 0x4019b9
    int64_t v20 = a1; // 0x4019b9
    if ((v14 >= v18 && !v17) == v14 < v18) {
        // 0x4019bb
        return 1;
    }
    int64_t v21 = 3; // 0x4019b9
    unsigned char v22 = *(char *)v20; // 0x4019cd
    char v23 = *(char *)v19; // 0x4019cd
    char v24 = v23; // 0x4019cd
    bool v25 = false; // 0x4019cd
    while (v22 == v23) {
        // 0x4019c0
        v21--;
        v19 += v2;
        v20 += v2;
        v24 = v22;
        v25 = true;
        if (v21 == 0) {
            // break -> 
            break;
        }
        v22 = *(char *)v20;
        v23 = *(char *)v19;
        v24 = v23;
        v25 = false;
    }
    unsigned char v26 = v24;
    int64_t v27 = (int64_t)"-nt"; // 0x4019d7
    int64_t v28 = a1; // 0x4019d7
    if ((v22 >= v26 && !v25) == v22 < v26) {
        // 0x4019bb
        return 1;
    }
    int64_t v29 = 4; // 0x4019d7
    unsigned char v30 = *(char *)v28; // 0x4019e6
    char v31 = *(char *)v27; // 0x4019e6
    char v32 = v31; // 0x4019e6
    bool v33 = false; // 0x4019e6
    while (v30 == v31) {
        // 0x4019d9
        v29--;
        v27 += v2;
        v28 += v2;
        v32 = v30;
        v33 = true;
        if (v29 == 0) {
            // break -> 
            break;
        }
        v30 = *(char *)v28;
        v31 = *(char *)v27;
        v32 = v31;
        v33 = false;
    }
    unsigned char v34 = v32;
    int64_t v35 = (int64_t)"-ot"; // 0x4019f0
    int64_t v36 = a1; // 0x4019f0
    if ((v30 >= v34 && !v33) == v30 < v34) {
        // 0x4019bb
        return 1;
    }
    int64_t v37 = 4; // 0x4019f0
    unsigned char v38 = *(char *)v36; // 0x4019ff
    char v39 = *(char *)v35; // 0x4019ff
    char v40 = v39; // 0x4019ff
    bool v41 = false; // 0x4019ff
    while (v38 == v39) {
        // 0x4019f2
        v37--;
        v35 += v2;
        v36 += v2;
        v40 = v38;
        v41 = true;
        if (v37 == 0) {
            // break -> 
            break;
        }
        v38 = *(char *)v36;
        v39 = *(char *)v35;
        v40 = v39;
        v41 = false;
    }
    unsigned char v42 = v40;
    int64_t v43 = (int64_t)"-ef"; // 0x401a09
    int64_t v44 = a1; // 0x401a09
    if ((v38 >= v42 && !v41) == v38 < v42) {
        // 0x4019bb
        return 1;
    }
    int64_t v45 = 4; // 0x401a09
    unsigned char v46 = *(char *)v44; // 0x401a18
    char v47 = *(char *)v43; // 0x401a18
    char v48 = v47; // 0x401a18
    bool v49 = false; // 0x401a18
    while (v46 == v47) {
        // 0x401a0b
        v45--;
        v43 += v2;
        v44 += v2;
        v48 = v46;
        v49 = true;
        if (v45 == 0) {
            // break -> 
            break;
        }
        v46 = *(char *)v44;
        v47 = *(char *)v43;
        v48 = v47;
        v49 = false;
    }
    unsigned char v50 = v48;
    int64_t v51 = (int64_t)"-eq"; // 0x401a22
    int64_t v52 = a1; // 0x401a22
    if ((v46 >= v50 && !v49) == v46 < v50) {
        // 0x4019bb
        return 1;
    }
    int64_t v53 = 4; // 0x401a22
    unsigned char v54 = *(char *)v52; // 0x401a31
    char v55 = *(char *)v51; // 0x401a31
    char v56 = v55; // 0x401a31
    bool v57 = false; // 0x401a31
    while (v54 == v55) {
        // 0x401a24
        v53--;
        v51 += v2;
        v52 += v2;
        v56 = v54;
        v57 = true;
        if (v53 == 0) {
            // break -> 
            break;
        }
        v54 = *(char *)v52;
        v55 = *(char *)v51;
        v56 = v55;
        v57 = false;
    }
    unsigned char v58 = v56;
    int64_t v59 = (int64_t)"-ne"; // 0x401a3b
    int64_t v60 = a1; // 0x401a3b
    if ((v54 >= v58 && !v57) == v54 < v58) {
        // 0x4019bb
        return 1;
    }
    int64_t v61 = 4; // 0x401a3b
    unsigned char v62 = *(char *)v60; // 0x401a4e
    char v63 = *(char *)v59; // 0x401a4e
    char v64 = v63; // 0x401a4e
    bool v65 = false; // 0x401a4e
    while (v62 == v63) {
        // 0x401a41
        v61--;
        v59 += v2;
        v60 += v2;
        v64 = v62;
        v65 = true;
        if (v61 == 0) {
            // break -> 
            break;
        }
        v62 = *(char *)v60;
        v63 = *(char *)v59;
        v64 = v63;
        v65 = false;
    }
    unsigned char v66 = v64;
    int64_t v67 = (int64_t)"-lt"; // 0x401a58
    int64_t v68 = a1; // 0x401a58
    if ((v62 >= v66 && !v65) == v62 < v66) {
        // 0x4019bb
        return 1;
    }
    int64_t v69 = 4; // 0x401a58
    unsigned char v70 = *(char *)v68; // 0x401a6b
    char v71 = *(char *)v67; // 0x401a6b
    char v72 = v71; // 0x401a6b
    bool v73 = false; // 0x401a6b
    while (v70 == v71) {
        // 0x401a5e
        v69--;
        v67 += v2;
        v68 += v2;
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
    int64_t v75 = (int64_t)"-le"; // 0x401a75
    int64_t v76 = a1; // 0x401a75
    if ((v70 >= v74 && !v73) == v70 < v74) {
        // 0x4019bb
        return 1;
    }
    int64_t v77 = 4; // 0x401a75
    unsigned char v78 = *(char *)v76; // 0x401a88
    char v79 = *(char *)v75; // 0x401a88
    char v80 = v79; // 0x401a88
    bool v81 = false; // 0x401a88
    while (v78 == v79) {
        // 0x401a7b
        v77--;
        v75 += v2;
        v76 += v2;
        v80 = v78;
        v81 = true;
        if (v77 == 0) {
            // break -> 
            break;
        }
        v78 = *(char *)v76;
        v79 = *(char *)v75;
        v80 = v79;
        v81 = false;
    }
    unsigned char v82 = v80;
    if ((v78 >= v82 && !v81) == v78 < v82) {
        // 0x4019bb
        return 1;
    }
    char * str = (char *)a1; // 0x401aa0
    if (strcmp(str, "-gt") == 0) {
        // 0x4019bb
        return 1;
    }
    int32_t strcmp_rc = strcmp(str, "-ge"); // 0x401abc
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x401ad0 - 0x401b0c
int64_t function_401ad0(int64_t a1, int64_t * a2) {
    // 0x401ad0
    int64_t v1; // bp-152, 0x401ad0
    int32_t v2 = __xstat(1, (char *)a1, (struct stat *)&v1); // 0x401ae6
    if (v2 == 0) {
        // branch -> 0x401b03
    }
    // 0x401b03
    return (int64_t)(v2 & -256) | (int64_t)(v2 == 0);
}
// Address range: 0x401b10 - 0x401bad
int64_t function_401b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x401b10
    int64_t v1; // 0x401b10
    if ((char)v1 != 0) {
        // 0x401b34
        int128_t v2; // 0x401b10
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 8; // bp-208, 0x401b89
    function_405240(0, 0, a1, &v3);
    exit(2);
    // UNREACHABLE
}
// Address range: 0x401bb0 - 0x401c82
int64_t function_401bb0(int64_t a1) {
    int64_t v1 = (int64_t)*__ctype_b_loc(); // 0x401bb9
    int64_t v2 = a1;
    unsigned char v3 = *(char *)v2; // 0x401bbf
    int64_t v4 = v2 + 1;
    while (*(char *)(2 * (int64_t)v3 + v1) % 2 != 0) {
        // 0x401bbf
        v2 = v4;
        v3 = *(char *)v2;
        v4 = v2 + 1;
    }
    int64_t v5 = v3 == 43 ? v4 : v2 + (int64_t)(v3 == 45);
    char v6 = *(char *)v5; // 0x401bdc
    int64_t v7; // 0x401c5c
    char * v8; // 0x401c70
    int64_t v9; // 0x401bb0
    if (v6 != 57 && (int32_t)v6 >= 57) {
        // 0x401c59
        v7 = function_404f00((int64_t *)a1);
        v8 = dcgettext(NULL, "invalid integer %s", 5);
        function_401b10((int64_t)v8, v7, 5, v5, v1, v9);
        // UNREACHABLE
    }
    int64_t v10 = v5 + 1; // 0x401bdf
    char v11 = *(char *)v10; // 0x401beb
    int64_t v12 = v10; // 0x401bf7
    char v13 = v11; // 0x401bf7
    int64_t v14 = v10; // 0x401bf7
    if (v11 == 57 || (int32_t)v11 < 57) {
        v12++;
        char v15 = *(char *)v12; // 0x401c04
        v13 = v15;
        v14 = v12;
        while (v15 == 57 || (int32_t)v15 < 57) {
            // 0x401c00
            v12++;
            v15 = *(char *)v12;
            v13 = v15;
            v14 = v12;
        }
    }
    int64_t v16 = (int64_t)v13 & 0xffffffff;
    int64_t v17 = v14; // 0x401c19
    int64_t v18 = v16; // 0x401c19
    if (*(char *)((2 * v16 & 510) + v1) % 2 != 0) {
        v17++;
        int64_t v19 = (int64_t)*(char *)v17; // 0x401c24
        v18 = v19;
        while (*(char *)(2 * v19 + v1) % 2 != 0) {
            // 0x401c20
            v17++;
            v19 = (int64_t)*(char *)v17;
            v18 = v19;
        }
    }
    // 0x401c31
    if ((char)v18 == 0) {
        // 0x401c35
        return v3 == 43 ? v4 : v2;
    }
    // 0x401c59
    v7 = function_404f00((int64_t *)a1);
    v8 = dcgettext(NULL, "invalid integer %s", 5);
    function_401b10((int64_t)v8, v7, 5, v18, v1, v9);
    // UNREACHABLE
}
// Address range: 0x401c90 - 0x401cca
int64_t function_401c90(void) {
    int64_t v1 = *(int64_t *)(g32 - 8 + 8 * (int64_t)g34); // 0x401c9f
    int64_t v2 = function_404f00((int64_t *)v1); // 0x401ca4
    int64_t v3; // 0x401c90
    function_401b10((int64_t)dcgettext(NULL, "missing argument after %s", 5), v2, 5, v3, v3, v3);
    // UNREACHABLE
}
// Address range: 0x401cd0 - 0x402209
int64_t function_401cd0(int64_t a1, int64_t a2) {
    // 0x401cd0
    int64_t v1; // 0x401cd0
    int64_t v2 = v1;
    *(int32_t *)&g35 = (int32_t)&g36;
    if (g34 > (int32_t)&g36) {
        // 0x401ce7
        *(int32_t *)&g35 = (int32_t)&g37;
        return &g37;
    }
    int64_t v3 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36); // 0x401d17
    char v4 = *(char *)(v3 + 1); // 0x401d1b
    g47 = v4 - 71;
    int64_t v5; // 0x401cd0
    int64_t v6; // bp-176, 0x401cd0
    int32_t v7; // 0x401cd0
    switch (v4) {
        case 71: {
            int64_t v8 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x4021b4
            if (__xstat(1, (char *)v8, (struct stat *)&v6) != 0) {
                // 0x401d32
                return 0;
            }
            int32_t * v9 = __errno_location(); // 0x4021c6
            *v9 = 0;
            int32_t v10 = getegid(); // 0x4021d4
            if (v10 != -1) {
                // 0x401d32
                return ((int64_t)&v6 & -256 | (int64_t)(v7 == v10)) & 0xffffffff;
            }
            // 0x4021fb
            if (*v9 != 0) {
                // 0x401d32
                return 0;
            }
            // 0x401d32
            return (int64_t)(v7 == v10) & 0xffffffff;
        }
        case 76: {
        }
        case 104: {
            int64_t v11 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x402174
            int32_t v12 = __lxstat(1, (char *)v11, (struct stat *)&v6); // 0x402179
            v5 = 0;
            if (v12 == 0) {
                // 0x402188
                v5 = (v7 & 0xf000) == 0xa000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 79: {
            int64_t v13 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x402124
            if (__xstat(1, (char *)v13, (struct stat *)&v6) != 0) {
                // 0x401d32
                return 0;
            }
            int32_t * v14 = __errno_location(); // 0x402136
            *v14 = 0;
            int32_t v15 = geteuid(); // 0x402144
            if (v15 != -1) {
                // 0x401d32
                return ((int64_t)&v6 & -256 | (int64_t)(v7 == v15)) & 0xffffffff;
            }
            // 0x4021ea
            if (*v14 != 0) {
                // 0x401d32
                return 0;
            }
            // 0x401d32
            return (int64_t)(v7 == v15) & 0xffffffff;
        }
        case 83: {
            int64_t v16 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x4020e4
            int32_t v17 = __xstat(1, (char *)v16, (struct stat *)&v6); // 0x4020e9
            v5 = 0;
            if (v17 == 0) {
                // 0x4020f8
                v5 = (v7 & 0xf000) == 0xc000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 97: {
        }
        case 101: {
            int64_t v18 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x4020b4
            int32_t v19 = __xstat(1, (char *)v18, (struct stat *)&v6); // 0x4020b9
            // 0x401d32
            return ((int64_t)&v6 & -256 | (int64_t)(v19 == 0)) & 0xffffffff;
        }
        case 98: {
            int64_t v20 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x402074
            int32_t v21 = __xstat(1, (char *)v20, (struct stat *)&v6); // 0x402079
            v5 = 0;
            if (v21 == 0) {
                // 0x402088
                v5 = (v7 & 0xf000) == 0x6000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 99: {
            int64_t v22 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x402034
            int32_t v23 = __xstat(1, (char *)v22, (struct stat *)&v6); // 0x402039
            v5 = 0;
            if (v23 == 0) {
                // 0x402048
                v5 = (v7 & 0xf000) == 0x2000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 100: {
            int64_t v24 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401ff4
            int32_t v25 = __xstat(1, (char *)v24, (struct stat *)&v6); // 0x401ff9
            v5 = 0;
            if (v25 == 0) {
                // 0x402008
                v5 = (v7 & 0xf000) == 0x4000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 102: {
            int64_t v26 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401fb4
            int32_t v27 = __xstat(1, (char *)v26, (struct stat *)&v6); // 0x401fb9
            v5 = 0;
            if (v27 == 0) {
                // 0x401fc8
                v5 = (v7 & 0xf000) == 0x8000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 103: {
            int64_t v28 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401f74
            int32_t v29 = __xstat(1, (char *)v28, (struct stat *)&v6); // 0x401f79
            v5 = 0;
            if (v29 == 0) {
                // 0x401f88
                v5 = v7 / 1024 % 2;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 107: {
            int64_t v30 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401f34
            int32_t v31 = __xstat(1, (char *)v30, (struct stat *)&v6); // 0x401f39
            v5 = 0;
            if (v31 == 0) {
                // 0x401f48
                v5 = v7 / 512 % 2;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 110: {
            int64_t v32 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401f0c
            char v33 = *(char *)v32; // 0x401f11
            // 0x401d32
            return ((int64_t)(v33 != 0) | (int64_t)&g36 & -256) & 0xffffffff;
        }
        case 112: {
            int64_t v34 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401ecc
            int32_t v35 = __xstat(1, (char *)v34, (struct stat *)&v6); // 0x401ed1
            v5 = 0;
            if (v35 == 0) {
                // 0x401ee0
                v5 = (v7 & 0xf000) == 0x1000;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 114: {
            int64_t v36 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401ea1
            int32_t v37 = euidaccess((char *)v36, 4); // 0x401ea6
            // 0x401d32
            return ((int64_t)(v37 == 0) | (int64_t)&g36 & -256) & 0xffffffff;
        }
        case 115: {
            int64_t v38 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401e64
            int32_t v39 = __xstat(1, (char *)v38, (struct stat *)&v6); // 0x401e69
            v5 = 0;
            if (v39 == 0) {
                // 0x401e78
                v5 = v2 >= 0 == (v2 != 0);
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 116: {
            int32_t * v40 = __errno_location(); // 0x401e09
            *v40 = 0;
            int32_t str_as_l = strtol((char *)(int64_t)(int32_t)&g36, NULL, 10); // 0x401e21
            v5 = 0;
            if (str_as_l > -1 == (*v40 != 34)) {
                // 0x401e3d
                v5 = isatty(str_as_l) != 0;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 117: {
            int64_t v41 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401dc4
            int32_t v42 = __xstat(1, (char *)v41, (struct stat *)&v6); // 0x401dc9
            v5 = 0;
            if (v42 == 0) {
                // 0x401dd8
                v5 = v7 / 2048 % 2;
            }
            // 0x401d32
            return v5 & 0xffffffff;
        }
        case 119: {
            int64_t v43 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401d99
            int32_t v44 = euidaccess((char *)v43, 2); // 0x401d9e
            // 0x401d32
            return ((int64_t)(v44 == 0) | (int64_t)&g36 & -256) & 0xffffffff;
        }
        case 120: {
            int64_t v45 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401d71
            int32_t v46 = euidaccess((char *)v45, 1); // 0x401d76
            // 0x401d32
            return ((int64_t)(v46 == 0) | (int64_t)&g36 & -256) & 0xffffffff;
        }
        case 122: {
            int64_t v47 = *(int64_t *)(g32 + 8 * (int64_t)(int32_t)&g36 - 8); // 0x401d4c
            char v48 = *(char *)v47; // 0x401d51
            // 0x401d32
            return ((int64_t)(v48 == 0) | (int64_t)&g36 & -256) & 0xffffffff;
        }
    }
    // 0x401d32
    return 0;
}
// Address range: 0x402210 - 0x4026b4
int64_t function_402210(uint32_t a1) {
    int64_t v1 = &g36; // 0x40222d
    if ((char)a1 != 0) {
        // 0x40222f
        *(int32_t *)&g35 = (int32_t)&g36;
        v1 = &g37;
    }
    int64_t v2 = 0x100000000 * v1 >> 29;
    int64_t v3 = v2 + g32;
    int64_t v4 = &g33; // 0x40224f
    int64_t v5 = 0; // 0x40224f
    bool v6; // 0x402210
    if (v1 < (int64_t)&g33) {
        int64_t v7 = v6 ? -1 : 1; // 0x402260
        int64_t v8 = (int64_t)"-l"; // 0x402210
        int64_t v9 = *(int64_t *)(v3 + 8); // 0x402210
        unsigned char v10 = *(char *)v9; // 0x402260
        char v11 = *(char *)v8; // 0x402260
        int64_t v12 = 2; // 0x402260
        char v13 = v11; // 0x402260
        bool v14 = false; // 0x402260
        while (v10 == v11) {
            v8 += v7;
            v9 += v7;
            v13 = v10;
            v14 = true;
            if (v12 == 0) {
                // break -> 
                break;
            }
            v10 = *(char *)v9;
            v11 = *(char *)v8;
            v12--;
            v13 = v11;
            v14 = false;
        }
        unsigned char v15 = v13;
        uint64_t v16 = (int64_t)!((v10 < v15 | v14)) - (int64_t)(v10 < v15); // 0x402265
        int64_t v17 = v16 % 256 | v12 & -256; // 0x402265
        v4 = v17;
        v5 = 0;
        if ((char)v16 == 0) {
            // 0x4022e0
            *(int32_t *)&g35 = (int32_t)v1;
            v4 = v17;
            v5 = 1;
        }
    }
    int64_t v18 = *(int64_t *)v3; // 0x40226c
    unsigned char v19 = *(char *)v18; // 0x402278
    bool v20; // 0x402210
    int64_t v21; // 0x402210
    char v22; // 0x402338
    bool v23; // 0x402210
    switch (v19) {
        case 45: {
            // 0x402338
            v22 = *(char *)(v18 + 1);
            v21 = v4;
            switch (v22) {
                case 108: {
                    goto lab_0x402498;
                }
                case 103: {
                    goto lab_0x402498;
                }
                default: {
                    goto lab_0x40234e;
                }
            }
        }
        case 61: {
            char v24 = *(char *)(v18 + 1); // 0x4022f0
            if (v24 == 0) {
                goto lab_0x402308;
            } else {
                // 0x4022f8
                v20 = false;
                v23 = false;
                if (v24 != 61) {
                    goto lab___crit_edge21;
                } else {
                    // 0x4022fc
                    v20 = false;
                    v23 = false;
                    if (*(char *)(v18 + 2) != 0) {
                        goto lab___crit_edge21;
                    } else {
                        goto lab_0x402308;
                    }
                }
            }
        }
        default: {
            int64_t v25 = v6 ? -1 : 1; // 0x402293
            int64_t v26 = 2; // 0x402293
            int64_t v27 = v18; // 0x402293
            int64_t v28 = (int64_t)"!="; // 0x402293
            v20 = v19 < 33;
            v23 = false;
            if (v19 == 33) {
                v20 = v19 < 33;
                v23 = true;
                while (v26 != 0) {
                    int64_t v29 = v27 + v25; // 0x402293
                    int64_t v30 = v28 + v25; // 0x402293
                    unsigned char v31 = *(char *)v29;
                    unsigned char v32 = *(char *)v30; // 0x402293
                    v26--;
                    v27 = v29;
                    v28 = v30;
                    v20 = v31 < v32;
                    v23 = false;
                    if (v31 != v32) {
                        // break -> ._crit_edge21
                        break;
                    }
                    v20 = v31 < v32;
                    v23 = true;
                }
            }
            goto lab___crit_edge21;
        }
    }
  lab___crit_edge21:;
    bool v33 = v20;
    if ((!v33 && !v23) != v33) {
        abort();
        // UNREACHABLE
    }
    int64_t str2 = *(int64_t *)(g32 + 8 * (int64_t)&g37); // 0x4022b0
    int64_t str = *(int64_t *)(g32 + 8 * (int64_t)&g37 - 16); // 0x4022b4
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x4022b9
    *(int32_t *)&g35 = (int32_t)&g38;
    // 0x4022cd
    return (int64_t)(strcmp_rc != 0) & 0xffffffff;
  lab_0x402498:;
    unsigned char v34 = *(char *)(v18 + 2); // 0x402498
    int64_t v35 = v34; // 0x402498
    v21 = v35;
    int64_t v36; // 0x402210
    int64_t v37; // 0x40255c
    char * v38; // 0x402570
    if (v34 != 101 == (v34 != 116)) {
        goto lab_0x40234e;
    } else {
        // 0x4024aa
        if (*(char *)(v18 + 3) != 0) {
            // 0x402559
            v37 = function_404f00((int64_t *)v18);
            v38 = dcgettext(NULL, "%s: unknown binary operator", 5);
            function_401b10((int64_t)v38, v37, 5, v35, v36, v36);
            // UNREACHABLE
        }
        goto lab_0x40259b;
    }
  lab_0x40234e:;
    uint64_t v39 = (int64_t)a1; // 0x402212
    int64_t v40; // 0x402210
    int64_t v41; // 0x402210
    char v42; // 0x402210
    int64_t v43; // bp-184, 0x402210
    int64_t v44; // bp-328, 0x402210
    char * v45; // 0x40268b
    switch (v22) {
        case 101: {
            char v46 = *(char *)(v18 + 2); // 0x402400
            v42 = v46;
            v41 = v21;
            if (v46 == 113) {
                goto lab_0x402595;
            } else {
                goto lab_0x40240d;
            }
        }
        case 110: {
            unsigned char v47 = *(char *)(v18 + 2); // 0x402588
            int64_t v48 = v47; // 0x402588
            v41 = v48;
            if (v47 != 101) {
                // 0x4024bd
                if (v47 != 116 || *(char *)(v18 + 3) != 0) {
                    // 0x402559
                    v37 = function_404f00((int64_t *)v18);
                    v38 = dcgettext(NULL, "%s: unknown binary operator", 5);
                    function_401b10((int64_t)v38, v37, 5, v48, v36, v36);
                    // UNREACHABLE
                }
                // 0x4024d0
                *(int32_t *)&g35 = (int32_t)&g38;
                if ((char)(v5 || v39) != 0) {
                    // 0x402689
                    v45 = dcgettext(NULL, (char *)(int64_t)"-nt does not accept -l", 5);
                    function_401b10((int64_t)v45, 0, 5, v48, v36, v36);
                    // UNREACHABLE
                }
                int64_t v49 = function_401ad0(*(int64_t *)(v3 - 8), &v44); // 0x4024e8
                int64_t v50 = function_401ad0(*(int64_t *)(v3 + 8), &v43); // 0x4024fc
                if ((char)v49 == 0 || (char)v50 == 0) {
                    // 0x4022cd
                    return v49 & 0xffffffff & 0xffffffff;
                }
                // 0x402512
                if (v43 > v44) {
                    // 0x4022cd
                    return 0;
                }
                // 0x402531
                v40 = v50 & 0xffffffff;
                if (v43 >= v44) {
                    int32_t v51 = 0; // 0x402539
                    v40 = v50 & 0xffffff00 | (int64_t)(v51 >= 0 == (v51 != 0));
                }
                // 0x4022cd
                return v40 & 0xffffffff;
            }
            goto lab_0x402595;
        }
        default: {
            if (v22 == 111) {
                // 0x402369
                if (*(char *)(v18 + 2) != 116 || *(char *)(v18 + 3) != 0) {
                    // 0x402559
                    v37 = function_404f00((int64_t *)v18);
                    v38 = dcgettext(NULL, "%s: unknown binary operator", 5);
                    function_401b10((int64_t)v38, v37, 5, v21, v36, v36);
                    // UNREACHABLE
                }
                // 0x40237d
                *(int32_t *)&g35 = (int32_t)&g38;
                int64_t v52 = v5 | v39;
                if ((char)v52 != 0) {
                    // 0x402689
                    v45 = dcgettext(NULL, (char *)(int64_t)"-ot does not accept -l", 5);
                    function_401b10((int64_t)v45, 0, 5, v21, v36, v36);
                    // UNREACHABLE
                }
                int64_t v53 = function_401ad0(*(int64_t *)(v3 - 8), &v44); // 0x402396
                int64_t v54 = function_401ad0(*(int64_t *)(v3 + 8), &v43); // 0x4023ab
                if ((char)v53 == 0 || (char)v54 == 0) {
                    // 0x4022cd
                    return v54 & 0xffffffff & 0xffffffff;
                }
                uint64_t v55 = v44; // 0x4023c3
                v40 = v53 & 0xffffffff;
                if (v55 >= v43) {
                    int64_t v56 = v55 - v43; // 0x4023ea
                    uint32_t v57 = v56 < 0 == ((v56 ^ v55) & (v43 ^ v55)) < 0 == (v56 != 0) ? (int32_t)v52 % 256 : (int32_t)false; // 0x4023ef
                    v40 = v57;
                }
                // 0x4022cd
                return v40 & 0xffffffff;
            }
            // 0x402550
            if (v22 != 101) {
                // 0x402559
                v37 = function_404f00((int64_t *)v18);
                v38 = dcgettext(NULL, "%s: unknown binary operator", 5);
                function_401b10((int64_t)v38, v37, 5, v21, v36, v36);
                // UNREACHABLE
            }
            // 0x402640
            v42 = *(char *)(v18 + 2);
            goto lab_0x40240d;
        }
    }
  lab_0x402308:;
    int64_t str4 = *(int64_t *)(g32 + 8 * (int64_t)&g37); // 0x402316
    int64_t str3 = *(int64_t *)(g32 + 8 * (int64_t)&g37 - 16); // 0x40231a
    int32_t strcmp_rc2 = strcmp((char *)str3, (char *)str4); // 0x40231f
    *(int32_t *)&g35 = (int32_t)&g38;
    // 0x4022cd
    return (int64_t)(strcmp_rc2 == 0) & 0xffffffff;
  lab_0x40240d:
    // 0x40240d
    if (v42 != 102 || *(char *)(v18 + 3) != 0) {
        // 0x402559
        v37 = function_404f00((int64_t *)v18);
        v38 = dcgettext(NULL, "%s: unknown binary operator", 5);
        function_401b10((int64_t)v38, v37, 5, v21, v36, v36);
        // UNREACHABLE
    }
    // 0x402420
    *(int32_t *)&g35 = (int32_t)&g38;
    if ((char)(v5 || v39) != 0) {
        // 0x402689
        v45 = dcgettext(NULL, (char *)(int64_t)"-ef does not accept -l", 5);
        function_401b10((int64_t)v45, 0, 5, v21, v36, v36);
        // UNREACHABLE
    }
    int64_t v58 = v5 | v39 % 256; // 0x402427
    int64_t v59 = *(int64_t *)(v3 - 8); // 0x402430
    if (__xstat(1, (char *)v59, (struct stat *)&v44) != 0) {
        // 0x4022cd
        return v58 & 0xffffffff;
    }
    int32_t v60 = __xstat(1, (char *)*(int64_t *)(v3 + 8), (struct stat *)&v43); // 0x40245c
    if (v60 != 0) {
        // 0x4022cd
        return v58 & 0xffffffff;
    }
    // 0x402469
    v40 = v58;
    if (v44 == v43) {
        // 0x40247b
        v40 = true;
    }
    // 0x4022cd
    return v40 & 0xffffffff;
  lab_0x402595:
    // 0x402595
    if (*(char *)(v18 + 3) != 0) {
        // 0x402559
        v37 = function_404f00((int64_t *)v18);
        v38 = dcgettext(NULL, "%s: unknown binary operator", 5);
        function_401b10((int64_t)v38, v37, 5, v41, v36, v36);
        // UNREACHABLE
    }
    goto lab_0x40259b;
  lab_0x40259b:
    if ((char)a1 != 0) {
        int64_t str5 = *(int64_t *)(v3 - 8); // 0x40259b
        int32_t len = strlen((char *)str5); // 0x4025a4
        function_403290((int64_t)len, &v44);
    }
    if (v5 != 0) {
        int32_t len2 = strlen((char *)*(int64_t *)(v2 + 16 + g32)); // 0x4025c8
        function_403290((int64_t)len2, &v43);
    }
    int64_t v61 = function_404f20(); // 0x4025e3
    int64_t v62 = *(int64_t *)(g32 + v2); // 0x4025ef
    char v63 = *(char *)(v62 + 2); // 0x4025f3
    *(int32_t *)&g35 = (int32_t)&g38;
    switch (*(char *)(v62 + 1)) {
        case 108: {
            int32_t v64 = v61; // 0x402653
            int32_t v65 = (int32_t)(v63 == 101) - v64; // 0x402653
            v40 = v65 < 0 == (v65 & v64) < 0 == (v65 != 0);
            // break -> 0x4022cd
            break;
        }
        case 103: {
            int32_t v66 = v63 == 101; // 0x402663
            int32_t v67 = v61; // 0x402665
            int32_t v68 = v66 - v67; // 0x402665
            v40 = v68 < 0 != ((v68 ^ v66) & (v66 ^ v67)) < 0;
            // break -> 0x4022cd
            break;
        }
        default: {
            // 0x40260f
            v40 = (int32_t)v61 != 0 == v63 == 101;
            // break -> 0x4022cd
            break;
        }
    }
    // 0x4022cd
    return v40 & 0xffffffff;
}
// Address range: 0x4026c0 - 0x4026e7
int64_t function_4026c0(int64_t a1) {
    char v1 = *(char *)(a1 + 1); // 0x4026c0
    int64_t result = 0; // 0x4026cc
    if (v1 < 123) {
        unsigned char v2 = (v1 + 57) % 64;
        int64_t v3 = v2 == 0 ? 1 : 1 << (int64_t)v2;
        result = v3 & -256 | (int64_t)((v3 & 0xb7b93fc0011a1) != 0);
    }
    // 0x4026e6
    return result;
}
// Address range: 0x4026f0 - 0x402790
int64_t function_4026f0(void) {
    int64_t v1 = 8 * (int64_t)*(int32_t *)&g35 + g32;
    int64_t v2 = *(int64_t *)v1; // 0x402708
    bool v3; // 0x4026f0
    int64_t v4 = v3 ? -1 : 1; // 0x40271a
    int64_t v5 = (int64_t)&g2; // 0x40271a
    int64_t v6 = v2; // 0x4026f0
    int64_t v7 = 2; // 0x40271a
    unsigned char v8 = *(char *)v6; // 0x40271a
    char v9 = *(char *)v5; // 0x40271a
    v5 += v4;
    v7--;
    char v10 = v9; // 0x40271a
    bool v11 = false; // 0x40271a
    while (v8 == v9) {
        v6 += v4;
        v10 = v8;
        v11 = true;
        if (v7 == 0) {
            // break -> 
            break;
        }
        v8 = *(char *)v6;
        v9 = *(char *)v5;
        v5 += v4;
        v7--;
        v10 = v9;
        v11 = false;
    }
    unsigned char v12 = v10;
    if ((v8 >= v12 && !v11) == v8 < v12) {
        int64_t v13 = *(int64_t *)(v1 + 8); // 0x402750
        *(int32_t *)&g35 = (int32_t)&g37;
        return v13 & -256 | (int64_t)(*(char *)v13 == 0);
    }
    // 0x402725
    int64_t v14; // 0x40276a
    char * v15; // 0x40277e
    if (*(char *)v2 != 45 || *(char *)(v2 + 1) == 0 || *(char *)(v2 + 2) != 0) {
        // 0x40276a
        v14 = function_404f00((int64_t *)v5);
        v15 = dcgettext(NULL, "%s: unary operator expected", 5);
        return function_401b10((int64_t)v15, v14, 5, v7, v2, g32);
    }
    int64_t result = function_4026c0(v2); // 0x40273d
    if ((char)result != 0) {
        // 0x402746
        return result;
    }
    // 0x40276a
    v14 = function_404f00((int64_t *)v2);
    v15 = dcgettext(NULL, "%s: unary operator expected", 5);
    return function_401b10((int64_t)v15, v14, 5, v7, v2, g32);
}
// Address range: 0x402790 - 0x402cc7
int64_t function_402790(int64_t a1) {
    int32_t v1 = a1; // 0x402794
    if (v1 == 2) {
        // 0x402868
        return function_4026f0();
    }
    // 0x40279d
    int64_t v2; // bp-8, 0x402790
    int64_t v3 = &v2; // 0x402790
    int64_t v4; // 0x402790
    int64_t v5; // 0x402790
    int64_t v6; // 0x402790
    int64_t v7; // 0x402790
    int64_t v8; // 0x402790
    int64_t v9; // 0x402790
    int64_t v10; // 0x402790
    int64_t v11; // 0x402790
    int64_t v12; // 0x402790
    int64_t v13; // 0x402790
    int64_t v14; // 0x402790
    int64_t v15; // 0x402790
    int64_t v16; // 0x402790
    int64_t v17; // 0x402790
    int64_t v18; // 0x402790
    int64_t v19; // 0x402790
    int64_t v20; // 0x402790
    bool v21; // 0x402790
    if (v1 > 2) {
        if (v1 == 3) {
            // 0x402858
            return function_402cd0();
        }
        if (v1 != 4) {
            goto lab_0x402840;
        } else {
            int64_t v22 = (int64_t)*(int32_t *)&g35; // 0x4027b1
            int64_t v23 = 8 * v22; // 0x4027c9
            int64_t v24 = v23 + g32;
            int64_t v25 = *(int64_t *)v24; // 0x4027c9
            int64_t v26 = v21 ? -1 : 1;
            int64_t v27 = (int64_t)&g2; // 0x402790
            unsigned char v28 = *(char *)v25; // 0x4027db
            char v29 = *(char *)v27; // 0x4027db
            int64_t v30 = v25 + v26; // 0x4027db
            int64_t v31 = 1; // 0x4027db
            char v32 = v29; // 0x4027db
            bool v33 = false; // 0x4027db
            while (v28 == v29) {
                v27 += v26;
                v32 = v28;
                v33 = true;
                if (v31 == 0) {
                    // break -> 
                    break;
                }
                v28 = *(char *)v30;
                v29 = *(char *)v27;
                v30 += v26;
                v31--;
                v32 = v29;
                v33 = false;
            }
            unsigned char v34 = v32;
            int64_t v35 = v22 & -256; // 0x4027dd
            uint64_t v36 = (int64_t)!((v28 < v34 | v33)) - (int64_t)(v28 < v34); // 0x4027e0
            int64_t v37 = (int64_t)&g3; // 0x4027e5
            if ((char)v36 != 0) {
                unsigned char v38 = *(char *)v25; // 0x402885
                char v39 = *(char *)v37; // 0x402885
                int64_t v40 = v25 + v26; // 0x402885
                int64_t v41 = 1; // 0x402885
                char v42 = v39; // 0x402885
                bool v43 = false; // 0x402885
                while (v38 == v39) {
                    // 0x402878
                    v37 += v26;
                    v42 = v38;
                    v43 = true;
                    if (v41 == 0) {
                        // break -> 
                        break;
                    }
                    v38 = *(char *)v40;
                    v39 = *(char *)v37;
                    v40 += v26;
                    v41--;
                    v42 = v39;
                    v43 = false;
                }
                unsigned char v44 = v42;
                uint64_t v45 = (int64_t)!((v38 < v44 | v43)) - (int64_t)(v38 < v44); // 0x40288a
                v4 = v26;
                v12 = v22;
                v14 = v41;
                v16 = v45 % 256 | v35;
                v18 = v40;
                v8 = v25;
                v10 = g32;
                v6 = v23;
                if ((char)v45 == 0) {
                    int64_t v46 = (int64_t)&g11; // 0x402790
                    int64_t v47 = *(int64_t *)(v24 + 24); // 0x402790
                    unsigned char v48 = *(char *)v47; // 0x4028a0
                    char v49 = *(char *)v46; // 0x4028a0
                    int64_t v50 = v47 + v26; // 0x4028a0
                    int64_t v51 = 1; // 0x4028a0
                    char v52 = v49; // 0x4028a0
                    bool v53 = false; // 0x4028a0
                    while (v48 == v49) {
                        v46 += v26;
                        v52 = v48;
                        v53 = true;
                        if (v51 == 0) {
                            // break -> 
                            break;
                        }
                        v48 = *(char *)v50;
                        v49 = *(char *)v46;
                        v50 += v26;
                        v51--;
                        v52 = v49;
                        v53 = false;
                    }
                    unsigned char v54 = v52;
                    uint64_t v55 = (int64_t)!((v48 < v54 | v53)) - (int64_t)(v48 < v54); // 0x4028a5
                    v4 = v26;
                    v12 = v22;
                    v14 = v51;
                    v16 = v55 % 256 | v35;
                    v18 = v50;
                    v8 = v25;
                    v10 = g32;
                    v6 = v23;
                    if ((char)v55 == 0) {
                        // 0x4028ac
                        *(int32_t *)&g35 = (int32_t)&g36;
                        int64_t result = function_4026f0(); // 0x4028b5
                        *(int32_t *)&g35 = (int32_t)&g36;
                        // 0x402808
                        return result;
                    }
                }
                goto lab_0x402846;
            } else {
                // 0x4027eb
                *(int32_t *)&g35 = (int32_t)&g36;
                v5 = v26;
                v13 = &g36;
                v15 = v31;
                v17 = v36 % 256 | v35;
                v20 = v3;
                v19 = v30;
                v9 = v25;
                v11 = g32;
                v7 = v23;
                if (g34 > (int32_t)&g36) {
                    // 0x402808
                    return function_402cd0() & 0xffffffff ^ 1;
                }
                goto lab_0x4028d0;
            }
        }
    } else {
        if (v1 == 1) {
            // 0x402815
            *(int32_t *)&g35 = (int32_t)&g36;
            int64_t v56 = *(int64_t *)(g32 + 8 * (int64_t)*(int32_t *)&g35); // 0x40282c
            return v56 & -256 | (int64_t)(*(char *)v56 != 0);
        }
        goto lab_0x402840;
    }
  lab_0x402c4b_2:;
    // 0x402c4b
    int64_t v57; // 0x402a17
    int64_t v58 = v57; // 0x402790
    int64_t v59; // 0x402a25
    char v60 = v59; // 0x402790
    int64_t v61; // 0x402790
    int64_t v62 = v61; // 0x402790
    int64_t v63; // 0x4029a8
    int64_t v64 = v63; // 0x402790
    goto lab_0x402c4b_3;
  lab_0x402ab0:;
    // 0x402ab0
    int64_t v67; // 0x402790
    int64_t v68 = v67; // 0x402ab2
    int64_t v69; // 0x402790
    int64_t v70 = v69; // 0x402ab2
    int64_t v71; // 0x402790
    int64_t v72 = v71; // 0x402ab2
    int64_t v73; // 0x402790
    int64_t v74 = v73; // 0x402ab2
    int64_t v75; // 0x402790
    int64_t v76 = v75; // 0x402ab2
    int64_t v77; // 0x402790
    int64_t v78 = v77; // 0x402ab2
    int64_t v79; // 0x402790
    int64_t v80 = v79; // 0x402ab2
    int64_t v81; // 0x402790
    int64_t v82 = v81; // 0x402ab2
    int64_t v83; // 0x402790
    int64_t v84 = v83; // 0x402ab2
    int64_t v85; // 0x402790
    int64_t v86 = v85; // 0x402ab2
    int64_t v87; // 0x402790
    int64_t v88 = v87; // 0x402ab2
    int64_t v89; // 0x402790
    int64_t v90 = v89; // 0x402ab2
    int64_t v91 = v89; // 0x402ab2
    int64_t v92 = v87; // 0x402ab2
    int64_t v93 = v85; // 0x402ab2
    int64_t v94 = v83; // 0x402ab2
    int64_t v95 = v81; // 0x402ab2
    int64_t v96 = v79; // 0x402ab2
    int64_t v97 = v77; // 0x402ab2
    int64_t v98 = v75; // 0x402ab2
    int64_t v99 = v73; // 0x402ab2
    int64_t v100 = v71; // 0x402ab2
    int64_t v101 = v69; // 0x402ab2
    int64_t v102 = v67; // 0x402ab2
    int64_t v103; // 0x402790
    if ((char)v103 != 0) {
      lab_0x402ab4:
        // 0x402ab4
        *(int32_t *)&g35 = (int32_t)v84;
        v91 = v90;
        v92 = v88;
        v93 = v86;
        v94 = v84;
        v95 = v82;
        v96 = v80;
        v97 = v78;
        v98 = v76;
        v99 = v74;
        v100 = v72;
        v101 = v70;
        v102 = v68;
    }
    goto lab_0x402aba;
  lab_0x402900:;
    // 0x402900
    int64_t v268; // 0x402790
    int64_t v161 = v268;
    int64_t v266; // 0x402790
    int64_t v159 = v266;
    int64_t v265; // 0x402790
    int64_t v158 = v265;
    int64_t v264; // 0x402790
    int64_t v290 = v264;
    int64_t v263; // 0x402790
    int64_t v291 = v263;
    int64_t v262; // 0x402790
    int64_t v157 = v262;
    int64_t v261; // 0x402790
    int64_t v292 = v261;
    int64_t v260; // 0x402790
    int64_t v293 = v260;
    int64_t v259; // 0x402790
    int64_t v160 = v259; // 0x402900
    int64_t v294 = 0x100000000 * v291;
    int64_t v295 = v294 >> 32; // 0x402907
    int64_t v296 = *(int64_t *)((v294 >> 29) + v160); // 0x40290a
    unsigned char v297 = *(char *)v296; // 0x40290e
    int64_t v298 = v297; // 0x40290e
    int64_t v147; // 0x402790
    int64_t v267; // 0x402790
    int64_t v149; // 0x402790
    int64_t v145; // 0x402790
    int64_t v163; // 0x402790
    int64_t v152; // 0x402790
    int64_t v154; // 0x402790
    int64_t v156; // 0x402790
    if (v297 != 33) {
        goto lab_0x402993;
    } else {
        // 0x40291c
        v91 = v292;
        v92 = v157;
        v93 = v291;
        v94 = v295;
        v95 = v290;
        v96 = v158;
        v97 = v159;
        v98 = v160;
        v99 = 0;
        v100 = v298;
        v101 = v161;
        v102 = v296;
        if (*(char *)(v296 + 1) != 0) {
            goto lab_0x402aba;
        } else {
            int64_t v299 = v291 + 1; // 0x402927
            int64_t v300 = v299 & 0xffffffff; // 0x402927
            *(int32_t *)&g35 = (int32_t)v299;
            v103 = v293;
            v89 = v292;
            v87 = v157;
            v85 = v300;
            v83 = v295;
            v81 = v290;
            v79 = v158;
            v77 = v159;
            v75 = v160;
            v73 = v267;
            v71 = v298;
            v69 = v161;
            v67 = v296;
            if (v300 < v161) {
                int64_t v301 = 0x100000000 * v299;
                int64_t v302 = v301 >> 32; // 0x402939
                int64_t v303 = *(int64_t *)((v301 >> 29) + v160); // 0x402974
                int64_t v304 = v302 & 0xffffffff; // 0x402978
                unsigned char v305 = *(char *)v303; // 0x40297c
                if (v305 == 33) {
                    int64_t v306 = v302; // 0x402955
                    v103 = 0;
                    v89 = v304;
                    v87 = v157;
                    v85 = v304;
                    v83 = v302;
                    v81 = 33;
                    v79 = v158;
                    v77 = v159;
                    v75 = v160;
                    v73 = 1;
                    v71 = v298;
                    v69 = v161;
                    v67 = v303;
                    if (*(char *)(v303 + 1) != 0) {
                        goto lab_0x402ab0;
                    } else {
                        int64_t v307 = v306 + 1; // 0x40295b
                        if (v161 <= v307) {
                            // 0x402c40
                            *(int32_t *)&g35 = (int32_t)v307;
                            v58 = v307 & 0xffffffff;
                            v60 = 33;
                            v62 = v158;
                            v64 = v159;
                            goto lab_0x402c4b_3;
                        }
                        int64_t v308 = 0; // 0x40296b
                        int64_t v309 = *(int64_t *)(8 * v307 + v160); // 0x402974
                        int64_t v310 = v307 & 0xffffffff; // 0x402978
                        unsigned char v311 = *(char *)v309; // 0x40297c
                        while (v311 == 33) {
                            // 0x402950
                            if (*(char *)(v309 + 1) != 0) {
                                goto lab_0x402ab4;
                            }
                            v307++;
                            if (v161 <= v307) {
                                // 0x402c40
                                *(int32_t *)&g35 = (int32_t)v307;
                                v58 = v307 & 0xffffffff;
                                v60 = 33;
                                v62 = v158;
                                v64 = v159;
                                goto lab_0x402c4b_3;
                            }
                            // 0x40296b
                            v308 ^= 1;
                            v309 = *(int64_t *)(8 * v307 + v160);
                            v310 = v307 & 0xffffffff;
                            v311 = *(char *)v309;
                        }
                        // 0x40298a
                        v147 = v311;
                        *(int32_t *)&g35 = (int32_t)v307;
                        v163 = 1;
                        v156 = v310;
                        v154 = v310;
                        v152 = v307;
                        v149 = v308;
                        v145 = v309;
                        goto lab_0x402993;
                    }
                } else {
                    // 0x402986
                    v163 = 0;
                    v156 = v304;
                    v154 = v304;
                    v152 = v302;
                    v149 = 1;
                    v147 = v305;
                    v145 = v303;
                    goto lab_0x402993;
                }
            } else {
                goto lab_0x402ab0;
            }
        }
    }
  lab_0x402aba:;
    int64_t v104 = v102;
    int64_t v105 = v101;
    int64_t v106 = v100;
    int64_t v107 = v99;
    int64_t v108 = v98;
    int64_t v109 = v97;
    int64_t v110 = v96;
    int64_t v111 = v94;
    int64_t v112 = v93;
    int64_t v113 = v92;
    int32_t v114 = v105 - v112; // 0x402abf
    int64_t v115 = v104; // 0x402ac2
    int64_t v116; // 0x402790
    int64_t v117; // 0x402790
    int64_t v118; // 0x402790
    int64_t v119; // 0x402790
    int64_t v120; // 0x402790
    int64_t v121; // 0x402790
    int64_t v122; // 0x402790
    int64_t v123; // 0x402790
    int64_t v124; // 0x402790
    int64_t v125; // 0x402790
    int64_t v126; // 0x402790
    int64_t v127; // 0x402790
    int64_t v128; // 0x402790
    int64_t v129; // 0x402790
    int64_t * v130; // 0x402790
    if (v114 < 4) {
        int64_t v131 = v91;
        v129 = v95;
        v119 = v108;
        if (v114 == 3) {
            goto lab_0x402afa;
        } else {
            // 0x402b52
            v116 = v108;
            v127 = v131;
            v117 = v108;
            if ((char)v106 != 45) {
                goto lab_0x402b12;
            } else {
                goto lab_0x402b58;
            }
        }
    } else {
        int64_t v132 = (int64_t)"-l";
        unsigned char v133 = *(char *)v115; // 0x402ad5
        char v134 = *(char *)v132; // 0x402ad5
        int64_t v135 = v115 + v5; // 0x402ad5
        int64_t v136 = 2; // 0x402ad5
        char v137 = v134; // 0x402ad5
        bool v138 = false; // 0x402ad5
        while (v133 == v134) {
            int64_t v139 = v132 + v5; // 0x402ad5
            v115 = v135;
            int64_t v140 = v136; // 0x402ad5
            v137 = v133;
            v138 = true;
            if (v136 == 0) {
                // break -> 
                break;
            }
            v132 = v139;
            v133 = *(char *)v115;
            v134 = *(char *)v132;
            v135 = v115 + v5;
            v136 = v140 - 1;
            v137 = v134;
            v138 = false;
        }
        unsigned char v141 = v137;
        v129 = v135;
        v119 = v108;
        if ((v133 >= v141 && !v138) != v133 < v141) {
            goto lab_0x402afa;
        } else {
            // 0x402ae0
            *v130 = v108;
            int64_t v142 = function_401980(*(int64_t *)(8 * v111 + 16 + v108), v135, v113); // 0x402ae9
            int64_t v143 = *v130; // 0x402aee
            v129 = v135;
            v119 = v143;
            if ((char)v142 != 0) {
                // 0x402bf8
                v124 = function_402210(1);
                v128 = v113;
                v126 = (int64_t)*(int32_t *)&g35;
                v125 = v111;
                v123 = v109;
                v118 = v143;
                v120 = v107;
                v121 = v106;
                v122 = v104;
                goto lab_0x402a58;
            } else {
                goto lab_0x402afa;
            }
        }
    }
  lab_0x402993:;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = v147;
    int64_t v151 = v152;
    int64_t v153 = v154;
    int64_t v155 = v156;
    v91 = v155;
    v92 = v157;
    v93 = v153;
    v94 = v151;
    v95 = v150;
    v96 = v158;
    v97 = v159;
    v98 = v160;
    v99 = v148;
    v100 = v146;
    v101 = v161;
    v102 = v144;
    if (v146 != 40) {
        goto lab_0x402aba;
    } else {
        // 0x40299d
        v91 = v155;
        v92 = v157;
        v93 = v153;
        v94 = v151;
        v95 = v150;
        v96 = v158;
        v97 = v159;
        v98 = v160;
        v99 = v148;
        v100 = v146;
        v101 = v161;
        v102 = v144;
        if (*(char *)(v144 + 1) != 0) {
            goto lab_0x402aba;
        } else {
            int64_t v162 = v153 + 1; // 0x4029a8
            v63 = v162 & 0xffffffff;
            *(int32_t *)&g35 = (int32_t)v162;
            v103 = v163;
            v89 = v155;
            v87 = v157;
            v85 = v153;
            v83 = v151;
            v81 = v150;
            v79 = v158;
            v77 = v63;
            v75 = v160;
            v73 = v148;
            v71 = v146;
            v69 = v161;
            v67 = v144;
            if (v161 > v63) {
                // 0x4029bc
                if ((v153 + 2 & 0xffffffff) < v161) {
                    uint32_t v164 = -1 - (int32_t)v153 + (int32_t)v161; // 0x4029d2
                    int64_t v165 = 1; // 0x4029d5
                    int64_t v166; // 0x4029bc
                    int64_t v167 = (0x100000000 * v166 >> 29) + v160; // 0x4029d5
                    int64_t v168 = v167;
                    int64_t v169 = v165;
                    int64_t v170 = *(int64_t *)v168; // 0x4029da
                    int64_t v171 = (int64_t)&g11; // 0x402790
                    int64_t v172 = v170; // 0x402790
                    int64_t v173 = 2; // 0x402790
                    int64_t v174 = v172;
                    int64_t v175 = v171;
                    unsigned char v176 = *(char *)v174; // 0x4029e7
                    char v177 = *(char *)v175; // 0x4029e7
                    char v178 = v177; // 0x4029e7
                    bool v179 = false; // 0x4029e7
                    int64_t v180; // 0x402790
                    int64_t v181; // 0x402790
                    int64_t v182; // 0x4029e7
                    while (v176 == v177) {
                        v181 = v173;
                        v182 = v181 - 1;
                        v171 = v175 + v180;
                        v172 = v174 + v180;
                        v173 = v182;
                        v178 = v176;
                        v179 = true;
                        if (v182 == 0) {
                            // break -> 
                            break;
                        }
                        v174 = v172;
                        v175 = v171;
                        v176 = *(char *)v174;
                        v177 = *(char *)v175;
                        v178 = v177;
                        v179 = false;
                    }
                    bool v183 = v179;
                    unsigned char v184 = v178;
                    while ((v176 >= v184 && !v183) != v176 < v184) {
                        if (v169 == 4) {
                            // 0x402b90
                            goto lab_0x402a10;
                        }
                        int64_t v185 = v169 + 1; // 0x4029fc
                        int64_t v186 = v185 & 0xffffffff; // 0x4029fc
                        int64_t v187 = v168 + 8; // 0x4029ff
                        v165 = v186;
                        v167 = v187;
                        if (v164 == (int32_t)v185) {
                            // break -> 0x402a10
                            break;
                        }
                        v168 = v167;
                        v169 = v165;
                        v170 = *(int64_t *)v168;
                        v171 = (int64_t)&g11;
                        v172 = v170;
                        v173 = 2;
                        v174 = v172;
                        v175 = v171;
                        v176 = *(char *)v174;
                        v177 = *(char *)v175;
                        v178 = v177;
                        v179 = false;
                        while (v176 == v177) {
                            v181 = v173;
                            v182 = v181 - 1;
                            v171 = v175 + v180;
                            v172 = v174 + v180;
                            v173 = v182;
                            v178 = v176;
                            v179 = true;
                            if (v182 == 0) {
                                // break -> 
                                break;
                            }
                            v174 = v172;
                            v175 = v171;
                            v176 = *(char *)v174;
                            v177 = *(char *)v175;
                            v178 = v177;
                            v179 = false;
                        }
                        v183 = v179;
                        v184 = v178;
                    }
                }
                goto lab_0x402a10;
            } else {
                goto lab_0x402ab0;
            }
        }
    }
  lab_0x402afa:;
    int64_t v188 = v119;
    int64_t v189 = *(int64_t *)(8 * v111 + 8 + v188); // 0x402afa
    if ((char)function_401980(v189, v129, v113) != 0) {
        // 0x402ba0
        v124 = function_402210(0);
        v128 = v113;
        v126 = (int64_t)*(int32_t *)&g35;
        v125 = v111;
        v123 = v109;
        v118 = v188;
        v120 = v107;
        v121 = v106;
        v122 = v104;
        goto lab_0x402a58;
    } else {
        // 0x402b0c
        v116 = v188;
        if ((char)v106 == 45) {
            goto lab_0x402b58;
        } else {
            goto lab_0x402b12;
        }
    }
  lab_0x402b12:;
    int64_t v190 = v112 + 1; // 0x402b18
    int64_t v191 = v190 & 0xffffffff; // 0x402b18
    *(int32_t *)&g35 = (int32_t)v190;
    char * v192; // 0x402790
    char v193 = *v192 & (char)(v107 ^ (int64_t)((char)v106 != 0)); // 0x402b24
    *v192 = v193;
    char v194 = v193; // 0x402b2b
    int64_t v195 = v113; // 0x402b2b
    int64_t v196 = v191; // 0x402b2b
    int64_t v197 = v111; // 0x402b2b
    int64_t v198 = v109; // 0x402b2b
    int64_t v199 = v116; // 0x402b2b
    int64_t v200 = v107; // 0x402b2b
    int64_t v201 = v106; // 0x402b2b
    int64_t v202 = v105; // 0x402b2b
    int64_t v203 = v104; // 0x402b2b
    char v204 = v193; // 0x402b2b
    if (v105 <= v191) {
        // break -> 0x402b31
        goto lab_0x402b31_2;
    }
    goto lab_0x402a68;
  lab_0x402b58:;
    int64_t v284 = v117;
    v116 = v284;
    int64_t v282; // 0x402790
    int64_t v283; // 0x402790
    int64_t v281; // 0x402790
    int64_t v279; // 0x402790
    int64_t v280; // 0x402790
    if (*(char *)(v104 + 1) == 0) {
        goto lab_0x402b12;
    } else {
        // 0x402b5f
        v116 = v284;
        if (*(char *)(v104 + 2) != 0) {
            goto lab_0x402b12;
        } else {
            int64_t v285 = function_4026c0(v104); // 0x402b69
            if ((char)v285 == 0) {
                // 0x402cb3
                v281 = v127;
                v282 = v110;
                v283 = v109;
                v279 = (int64_t)"%s: unary operator expected";
                v280 = function_404f00((int64_t *)v104);
                goto lab_0x402c9f;
            }
            // 0x402b76
            v124 = v285;
            v128 = v113;
            v126 = (int64_t)*(int32_t *)&g35;
            v125 = v111;
            v123 = v109;
            v118 = v284;
            v120 = v107;
            v121 = v106;
            v122 = v104;
            goto lab_0x402a58;
        }
    }
  lab_0x402a10:
    // 0x402a10
    v61 = v158;
    int64_t v286 = function_402790(1); // 0x402a12
    v57 = (int64_t)*(int32_t *)&g35;
    v59 = *(int64_t *)(8 * v57 + g32);
    if (v59 == 0) {
        int64_t v287 = function_404f00((int64_t *)&g11); // 0x402c8d
        v281 = v57;
        v282 = v61;
        v283 = v63;
        v279 = (int64_t)"%s expected";
        v280 = v287;
        goto lab_0x402c9f;
    }
    // 0x402a35
    if (*(char *)v59 != 41) {
        goto lab_0x402c4b_2;
    }
    // 0x402a3e
    if (*(char *)(v59 + 1) != 0) {
        goto lab_0x402c4b_2;
    }
    // 0x402a48
    *(int32_t *)&g35 = (int32_t)&g36;
    v124 = v286;
    v128 = g32;
    v126 = &g36;
    v125 = v151;
    v123 = v63;
    v118 = v160;
    v120 = v148;
    v121 = v146;
    v122 = v144;
    goto lab_0x402a58;
  lab_0x402a58:;
    int64_t v288 = g34;
    char v289 = *v192 & (char)(v120 ^ v124); // 0x402a5b
    *v192 = v289;
    v194 = v289;
    v195 = v128;
    v196 = v126;
    v197 = v125;
    v198 = v123;
    v199 = v118;
    v200 = v120;
    v201 = v121;
    v202 = v288;
    v203 = v122;
    v204 = v289;
    if (v126 >= v288) {
        // break -> 0x402b31
        goto lab_0x402b31_2;
    }
    goto lab_0x402a68;
  lab_0x402a68:;
    int64_t v205 = v203;
    int64_t v206 = v202;
    int64_t v207 = v201;
    int64_t v208 = v200;
    int64_t v209 = v199;
    int64_t v210 = v198;
    int64_t v211 = v197;
    int64_t v212 = v196;
    int64_t v213 = v195;
    char v214 = v194; // 0x402bcd
    int64_t v215 = *(int64_t *)(g32 + (0x100000000 * v212 >> 29)); // 0x402a77
    int64_t v216 = (int64_t)"-a";
    unsigned char v217 = *(char *)v215; // 0x402a83
    char v218 = *(char *)v216; // 0x402a83
    int64_t v219 = v215 + v5; // 0x402a83
    int64_t v220 = 2; // 0x402a83
    char v221 = v218; // 0x402a83
    bool v222 = false; // 0x402a83
    while (v217 == v218) {
        int64_t v223 = v216 + v5; // 0x402a83
        int64_t v224 = v219; // 0x402a83
        int64_t v225 = v220; // 0x402a83
        v221 = v217;
        v222 = true;
        if (v220 == 0) {
            // break -> 
            break;
        }
        v216 = v223;
        v217 = *(char *)v224;
        v218 = *(char *)v216;
        v219 = v224 + v5;
        v220 = v225 - 1;
        v221 = v218;
        v222 = false;
    }
    unsigned char v226 = v221;
    uint64_t v227 = (int64_t)!((v217 < v226 | v222)) - (int64_t)(v217 < v226); // 0x402a88
    int64_t v228; // 0x402790
    int64_t v229; // 0x402790
    int64_t v230; // 0x402790
    int64_t v231; // 0x402790
    int64_t v232; // 0x402790
    int64_t v233; // 0x402790
    int64_t v234; // 0x402790
    int64_t v235; // 0x402790
    int64_t v236; // 0x402790
    int64_t v237; // 0x402790
    int64_t v238; // 0x402790
    int64_t v239; // 0x402790
    int64_t v240; // 0x402790
    char * v241; // 0x4028eb
    if ((char)v227 != 0) {
        char v242 = *v241 | v214; // 0x402bd2
        *v241 = v242;
        int64_t v243 = (int64_t)"-o";
        unsigned char v244 = *(char *)v215; // 0x402bd6
        char v245 = *(char *)v243; // 0x402bd6
        int64_t v246 = v215 + v5; // 0x402bd6
        int64_t v247 = 2; // 0x402bd6
        char v248 = v245; // 0x402bd6
        bool v249 = false; // 0x402bd6
        while (v244 == v245) {
            int64_t v250 = v243 + v5; // 0x402bd6
            int64_t v251 = v246; // 0x402bd6
            int64_t v252 = v247; // 0x402bd6
            v248 = v244;
            v249 = true;
            if (v247 == 0) {
                // break -> 
                break;
            }
            v243 = v250;
            v244 = *(char *)v251;
            v245 = *(char *)v243;
            v246 = v251 + v5;
            v247 = v252 - 1;
            v248 = v245;
            v249 = false;
        }
        unsigned char v253 = v248;
        uint64_t v254 = (int64_t)!((v244 < v253 | v249)) - (int64_t)(v244 < v253); // 0x402bdb
        char result2 = v242; // 0x402bdf
        if ((char)v254 != 0) {
            // 0x402b3a
            return result2;
        }
        int64_t v255 = v212 + 1; // 0x402be5
        *(int32_t *)&g35 = (int32_t)v255;
        v235 = v254 % 256;
        v238 = v247;
        v239 = v213;
        v237 = v255 & 0xffffffff;
        v236 = v211;
        v240 = v246;
        v233 = v215;
        v234 = v210;
        v228 = v209;
        v229 = v208;
        v230 = v207;
        v231 = v206;
        v232 = v205;
        goto lab_0x4028f0_2;
    } else {
        int64_t v256 = v227 % 256; // 0x402a88
        int64_t v257 = v212 + 1; // 0x402a92
        int64_t v258 = v257 & 0xffffffff; // 0x402a92
        *(int32_t *)&g35 = (int32_t)v257;
        v259 = g32;
        v260 = v256;
        v261 = v220;
        v262 = v213;
        v263 = v258;
        v264 = v219;
        v265 = v215;
        v266 = v210;
        v267 = v208;
        v268 = v206;
        v103 = v256;
        v89 = v220;
        v87 = v213;
        v85 = v258;
        v83 = v211;
        v81 = v219;
        v79 = v215;
        v77 = v210;
        v75 = v209;
        v73 = v208;
        v71 = v207;
        v69 = v206;
        v67 = v205;
        if (v258 < v206) {
            goto lab_0x402900;
        } else {
            goto lab_0x402ab0;
        }
    }
  lab_0x402840:
    // 0x402840
    v4 = v21 ? -1 : 1;
    v12 = (int64_t)*(int32_t *)&g35;
    goto lab_0x402846;
  lab_0x402846:
    // 0x402846
    v5 = v4;
    v13 = v12;
    v15 = v14;
    v17 = v16;
    int64_t v269; // 0x402790
    v20 = g34 > (int32_t)v12 ? (int64_t)&v269 : v3;
    v19 = v18;
    v9 = v8;
    v11 = v10;
    v7 = v6;
    goto lab_0x4028d0;
  lab_0x4028d0:
    // 0x4028d0
    v241 = (char *)(v20 - 57);
    *v241 = 0;
    v192 = (char *)(v20 - 58);
    v130 = (int64_t *)(v20 - 72);
    v235 = v13;
    v238 = v15;
    v239 = v17;
    v237 = (int64_t)*(int32_t *)&g35;
    v240 = v19;
    v233 = v9;
    v234 = v11;
    v228 = v7;
    v231 = g34;
    while (true) {
      lab_0x4028f0_2:;
        int64_t v270 = v231;
        int64_t v271 = v229;
        int64_t v272 = v234;
        int64_t v273 = v233;
        int64_t v274 = v240;
        int64_t v275 = v237;
        int64_t v276 = v239;
        int64_t v277 = v238;
        int64_t v278 = v235;
        *v192 = 1;
        v103 = v278;
        v89 = v277;
        v87 = v276;
        v85 = v275;
        v83 = v236;
        v81 = v274;
        v79 = v273;
        v77 = v272;
        v75 = v228;
        v73 = v271;
        v71 = v230;
        v69 = v270;
        v67 = v232;
        if (v275 < v270) {
            // 0x4028f0
            v259 = g32;
            v260 = v278;
            v261 = v277;
            v262 = v276;
            v263 = v275;
            v264 = v274;
            v265 = v273;
            v266 = v272;
            v267 = v271;
            v268 = v270;
            goto lab_0x402900;
        } else {
            goto lab_0x402ab0;
        }
    }
  lab_0x402b31_2:;
    char result3 = *v241 | v204; // 0x402b36
    *v241 = result3;
    // 0x402b3a
    return result3;
  lab_0x402c9f:
    // 0x402c9f
    function_401b10((int64_t)dcgettext(NULL, (char *)v279, 5), v280, 5, v281, v282, v283);
    // UNREACHABLE
  lab_0x402c4b_3:;
    int64_t v65 = function_404ee0(1, v60); // 0x402c50
    int64_t v66 = function_404ee0(0, (char)&g11); // 0x402c5f
    function_401b10((int64_t)dcgettext(NULL, "%s expected, found %s", 5), v66, v65, v58, v62, v64);
    // UNREACHABLE
}
// Address range: 0x402cd0 - 0x402e30
int64_t function_402cd0(void) {
    int64_t v1 = *(int64_t *)(g32 + 8 * (int64_t)&g36); // 0x402cef
    int64_t v2; // 0x402cd0
    int64_t v3 = function_401980(v1, v2, v2); // 0x402cff
    if ((char)v3 != 0) {
        // 0x402df0
        return function_402210(0);
    }
    int64_t v4 = *(int64_t *)(g32 + 8 * (int64_t)&g36 - 8); // 0x402d0c
    bool v5; // 0x402cd0
    int64_t v6 = v5 ? -1 : 1;
    int64_t v7 = (int64_t)&g2; // 0x402cd0
    int64_t v8 = v4; // 0x402cd0
    int64_t v9 = 2; // 0x402d1e
    unsigned char v10 = *(char *)v8; // 0x402d1e
    char v11 = *(char *)v7; // 0x402d1e
    char v12 = v11; // 0x402d1e
    bool v13 = false; // 0x402d1e
    while (v10 == v11) {
        v9--;
        v7 += v6;
        v8 += v6;
        v12 = v10;
        v13 = true;
        if (v9 == 0) {
            // break -> 
            break;
        }
        v10 = *(char *)v8;
        v11 = *(char *)v7;
        v12 = v11;
        v13 = false;
    }
    unsigned char v14 = v12;
    int64_t v15 = v3 & -256; // 0x402d20
    uint64_t v16 = (int64_t)!((v10 < v14 | v13)) - (int64_t)(v10 < v14); // 0x402d23
    int64_t v17 = (int64_t)&g3; // 0x402d27
    int64_t v18 = v4; // 0x402d27
    int64_t v19 = 2; // 0x402d27
    if ((char)v16 == 0) {
        // 0x402d29
        *(int32_t *)&g35 = (int32_t)&g36;
        int64_t result = v16 % 256 | v15; // 0x402d38
        if (g34 > (int32_t)&g36) {
            // 0x402d3e
            result = function_4026f0() & 0xffffffff ^ 1;
        }
        // 0x402d46
        return result;
    }
    unsigned char v20 = *(char *)v18; // 0x402d65
    char v21 = *(char *)v17; // 0x402d65
    char v22 = v21; // 0x402d65
    bool v23 = false; // 0x402d65
    while (v20 == v21) {
        // 0x402d58
        v19--;
        v17 += v6;
        v18 += v6;
        v22 = v20;
        v23 = true;
        if (v19 == 0) {
            // break -> 
            break;
        }
        v20 = *(char *)v18;
        v21 = *(char *)v17;
        v22 = v21;
        v23 = false;
    }
    unsigned char v24 = v22;
    if ((v20 >= v24 && !v23) == v20 < v24) {
        int64_t v25 = (int64_t)&g11; // 0x402cd0
        int64_t v26 = *(int64_t *)(g32 + 8 * (int64_t)&g36 + 8); // 0x402cd0
        int64_t v27 = 2; // 0x402d7f
        unsigned char v28 = *(char *)v26; // 0x402d7f
        char v29 = *(char *)v25; // 0x402d7f
        char v30 = v29; // 0x402d7f
        bool v31 = false; // 0x402d7f
        while (v28 == v29) {
            v27--;
            v25 += v6;
            v26 += v6;
            v30 = v28;
            v31 = true;
            if (v27 == 0) {
                // break -> 
                break;
            }
            v28 = *(char *)v26;
            v29 = *(char *)v25;
            v30 = v29;
            v31 = false;
        }
        unsigned char v32 = v30;
        if ((v28 >= v32 && !v31) == v28 < v32) {
            // 0x402d8a
            *(int32_t *)&g35 = (int32_t)&g38;
            // 0x402d46
            return v15 | (int64_t)(*(char *)v1 != 0);
        }
    }
    int64_t v33 = (int64_t)"-a"; // 0x402cd0
    int64_t v34 = v1; // 0x402cd0
    int64_t v35 = 3; // 0x402dad
    unsigned char v36 = *(char *)v34; // 0x402dad
    char v37 = *(char *)v33; // 0x402dad
    char v38 = v37; // 0x402dad
    bool v39 = false; // 0x402dad
    while (v36 == v37) {
        v35--;
        v33 += v6;
        v34 += v6;
        v38 = v36;
        v39 = true;
        if (v35 == 0) {
            // break -> 
            break;
        }
        v36 = *(char *)v34;
        v37 = *(char *)v33;
        v38 = v37;
        v39 = false;
    }
    unsigned char v40 = v38;
    int64_t v41 = (int64_t)!((v36 < v40 | v39)) - (int64_t)(v36 < v40); // 0x402db2
    int64_t v42 = (int64_t)"-o"; // 0x402db6
    int64_t v43 = v1; // 0x402db6
    if ((char)v41 == 0) {
        // 0x402dd0
        return v41 % 256 | v15;
    }
    int64_t v44 = 3; // 0x402db6
    unsigned char v45 = *(char *)v43; // 0x402dc5
    char v46 = *(char *)v42; // 0x402dc5
    v44--;
    char v47 = v46; // 0x402dc5
    bool v48 = false; // 0x402dc5
    while (v45 == v46) {
        // 0x402db8
        v42 += v6;
        v43 += v6;
        v47 = v45;
        v48 = true;
        if (v44 == 0) {
            // break -> 
            break;
        }
        v45 = *(char *)v43;
        v46 = *(char *)v42;
        v44--;
        v47 = v46;
        v48 = false;
    }
    unsigned char v49 = v47;
    int64_t v50 = (int64_t)!((v45 < v49 | v48)) - (int64_t)(v45 < v49); // 0x402dca
    if ((char)v50 == 0) {
        // 0x402dd0
        return v50 % 256 | v15;
    }
    int64_t v51 = function_404f00((int64_t *)v1); // 0x402e04
    function_401b10((int64_t)dcgettext(NULL, "%s: binary operator expected", 5), v51, 5, v44, v2, v2);
    // UNREACHABLE
}
// Address range: 0x402e30 - 0x4031c6
int64_t function_402e30(int32_t status) {
    if (status != 0) {
        // 0x402e3c
        __fprintf_chk(g29, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402e6d
        exit(status);
        // UNREACHABLE
    }
    // 0x402e74
    fputs_unlocked(dcgettext(NULL, "Usage: test EXPRESSION\n  or:  test\n  or:  [ EXPRESSION ]\n  or:  [ ]\n  or:  [ OPTION\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "Exit with the status determined by EXPRESSION.\n\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nAn omitted EXPRESSION defaults to false.  Otherwise,\nEXPRESSION is true or false and sets exit status.  It is one of:\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\n  ( EXPRESSION )               EXPRESSION is true\n  ! EXPRESSION                 EXPRESSION is false\n  EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n  EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\n  -n STRING            the length of STRING is nonzero\n  STRING               equivalent to -n STRING\n  -z STRING            the length of STRING is zero\n  STRING1 = STRING2    the strings are equal\n  STRING1 != STRING2   the strings are not equal\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\n  INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n  INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n  INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n  INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n  INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n  INTEGER1 -ne INTEGER2   INTEGER1 is not equal to INTEGER2\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\n  FILE1 -ef FILE2   FILE1 and FILE2 have the same device and inode numbers\n  FILE1 -nt FILE2   FILE1 is newer (modification date) than FILE2\n  FILE1 -ot FILE2   FILE1 is older than FILE2\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\n  -b FILE     FILE exists and is block special\n  -c FILE     FILE exists and is character special\n  -d FILE     FILE exists and is a directory\n  -e FILE     FILE exists\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "  -f FILE     FILE exists and is a regular file\n  -g FILE     FILE exists and is set-group-ID\n  -G FILE     FILE exists and is owned by the effective group ID\n  -h FILE     FILE exists and is a symbolic link (same as -L)\n  -k FILE     FILE exists and has its sticky bit set\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "  -L FILE     FILE exists and is a symbolic link (same as -h)\n  -O FILE     FILE exists and is owned by the effective user ID\n  -p FILE     FILE exists and is a named pipe\n  -r FILE     FILE exists and read permission is granted\n  -s FILE     FILE exists and has a size greater than zero\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "  -S FILE     FILE exists and is a socket\n  -t FD       file descriptor FD is opened on a terminal\n  -u FILE     FILE exists and its set-user-ID bit is set\n  -w FILE     FILE exists and write permission is granted\n  -x FILE     FILE exists and execute (or search) permission is granted\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nExcept for -h and -L, all FILE-related tests dereference symbolic links.\nBeware that parentheses need to be escaped (e.g., by backslashes) for shells.\nINTEGER may also be -l STRING, which evaluates to the length of STRING.\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nNOTE: Binary -a and -o are inherently ambiguous.  Use 'test EXPR1 && test\nEXPR2' or 'test EXPR1 || test EXPR2' instead.\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nNOTE: [ honors the --help and --version options, but test does not.\ntest treats each of those as it treats any other nonempty STRING.\n", 5), g27);
    dcgettext(NULL, "test and/or [", 5);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL); // 0x40310c
    if (locale != NULL) {
        // 0x403116
        if (strncmp(locale, "en_", 3) != 0) {
            // 0x40319c
            __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
        }
    }
    // 0x40312c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402e6d
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4031d0 - 0x4031d8
int64_t function_4031d0(int64_t a1) {
    // 0x4031d0
    g40 = a1;
    int64_t result; // 0x4031d0
    return result;
}
// Address range: 0x4031e0 - 0x4031e8
int64_t function_4031e0(int64_t a1) {
    // 0x4031e0
    g39 = a1;
    int64_t result; // 0x4031e0
    return result;
}
// Address range: 0x4031f0 - 0x40328e
int64_t function_4031f0(void) {
    // 0x4031f0
    int32_t * err_num; // 0x403206
    if ((int32_t)function_405d20((int64_t)g27) == 0) {
        goto lab_0x40321c;
    } else {
        // 0x403206
        err_num = __errno_location();
        if (g39 == 0) {
            goto lab_0x403233;
        } else {
            // 0x403217
            if (*err_num != 32) {
                goto lab_0x403233;
            } else {
                goto lab_0x40321c;
            }
        }
    }
  lab_0x40321c:;
    int64_t result = function_405d20((int64_t)g29); // 0x403223
    if ((int32_t)result == 0) {
        // 0x40322c
        return result;
    }
    // 0x40326e
    _exit(g20);
    // UNREACHABLE
  lab_0x403233:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40323f
    if (g40 == 0) {
        // 0x403279
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403253
        error(0, *err_num, "%s: %s", (char *)function_404d50((int64_t)g40), v1);
    }
    // 0x40326e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x403290 - 0x4032d8
int64_t function_403290(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x403290
    *(char *)v1 = 0;
    int64_t result = v1; // 0x4032a2
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x4032ab
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x4032d4
    return result;
}
// Address range: 0x4032e0 - 0x403379
int64_t function_4032e0(int64_t str) {
    // 0x4032e0
    if (str == 0) {
        // 0x403359
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g29);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4032ee
    int64_t result = (int64_t)found_char_pos; // 0x4032ee
    if (found_char_pos == NULL) {
        // 0x403349
        g41 = str;
        g28 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4032f8
    if (v1 - str < 7) {
        // 0x403349
        g41 = str;
        g28 = str;
        return result;
    }
    // 0x403308
    bool v2; // 0x4032e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4032e0
    int64_t v5 = result - 6; // 0x4032e0
    int64_t v6 = 7; // 0x403316
    unsigned char v7 = *(char *)v5; // 0x403316
    char v8 = *(char *)v4; // 0x403316
    char v9 = v8; // 0x403316
    bool v10 = false; // 0x403316
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
    int64_t v12 = (int64_t)"lt-"; // 0x403320
    int64_t v13 = v1; // 0x403320
    int64_t v14 = 3; // 0x403320
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403349
        g41 = str;
        g28 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403332
    char v16 = *(char *)v12; // 0x403332
    char v17 = v16; // 0x403332
    bool v18 = false; // 0x403332
    while (v15 == v16) {
        // 0x403322
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
    int64_t v20 = v1; // 0x40333c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40333e
        v20 = result + 4;
        g26 = v20;
    }
    // 0x403349
    g41 = v20;
    g28 = v20;
    return result;
}
// Address range: 0x403380 - 0x403472
int64_t function_403380(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403394
    int64_t result = (int64_t)v1; // 0x403394
    if (result != a1) {
        // 0x4033a1
        return result;
    }
    int64_t v2 = function_405de0(); // 0x4033b0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403466
    if (v3 == 85) {
        // 0x4033c0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403458
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4033ee
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x4033fb
        // 0x4033a1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403458
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40343d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40344a
    // 0x4033a1
    return result4;
}
// Address range: 0x403480 - 0x4034d7
int64_t function_403480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x403480
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x4034d7 - 0x4046a1
int64_t function_4034d7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = 0; // 0x403521
    int64_t v2 = 0; // 0x403521
    int64_t v3; // 0x4034d7
    int64_t v4; // 0x4034d7
    int64_t v5; // 0x4034d7
    int64_t v6; // 0x4034d7
    int64_t v7; // 0x4034d7
    int64_t v8; // 0x4034d7
    int64_t v9; // 0x4034d7
    int64_t v10; // 0x4034d7
    int64_t v11; // 0x4034d7
    int64_t v12; // 0x4034d7
    int64_t v13; // 0x4034d7
    int64_t v14; // 0x4034d7
    int64_t v15; // 0x4034d7
    int64_t v16; // 0x4034d7
    int64_t v17; // 0x4034d7
    int64_t v18; // 0x4034d7
    int64_t v19; // 0x4034d7
    int64_t result; // 0x4034d7
    int64_t v20; // 0x4034d7
    int64_t v21; // 0x4034d7
    int64_t ps; // bp+136, 0x4034d7
    char v22; // 0x403a90
    int64_t v23; // 0x403a90
    int32_t wc; // 0x4034d7
    int64_t v24; // 0x4034d7
    while (true) {
      lab_0x403528_2:
        // 0x403528
        v11 = v10;
        v7 = v6;
        v14 = v13;
        result = v1;
        int64_t v25 = v2; // 0x4034d7
        int64_t v26; // 0x40355c
        while (true) {
          lab_0x403528:
            // 0x403528
            v4 = v25;
            bool v27 = v14 == v4; // 0x403533
            if (v14 == -1) {
                // 0x403535
                v27 = *(char *)(v4 + str) == 0;
            }
            // 0x403543
            if (v27) {
                // break (via goto) -> 0x403ca8
                goto lab_0x403ca8;
            }
            // 0x40354c
            v26 = v4 + str;
            v22 = *(char *)v26;
            v23 = v22;
            g51 = v23;
            v17 = v14;
            v8 = v7;
            v12 = v11;
            v3 = v14;
            v5 = v7;
            v9 = v11;
            switch (v22) {
                case 0: {
                    // 0x403b3b
                    if (wc % 2 == 0) {
                        goto lab_0x403681;
                    }
                    // 0x403f5d
                    v25 = v4 + 1;
                    goto lab_0x403528;
                }
                case 7: {
                    goto lab_0x403681;
                }
                case 8: {
                    goto lab_0x403681;
                }
                case 9: {
                    goto lab_0x40389a_2;
                }
                case 10: {
                    goto lab_0x40389a_2;
                }
                case 11: {
                    goto lab_0x403681;
                }
                case 12: {
                    goto lab_0x403681;
                }
                case 13: {
                    goto lab_0x40389a_2;
                }
                case 32: {
                    goto lab_0x40389a_2;
                }
                case 33: {
                    goto lab_0x40389a_2;
                }
                case 34: {
                    goto lab_0x40389a_2;
                }
                case 35: {
                    goto lab_0x40364d;
                }
                case 36: {
                    goto lab_0x40389a_2;
                }
                case 37: {
                    goto lab_0x403681;
                }
                case 38: {
                    goto lab_0x40389a_2;
                }
                case 39: {
                    goto lab_0x40389a_2;
                }
                case 40: {
                    goto lab_0x40389a_2;
                }
                case 41: {
                    goto lab_0x40389a_2;
                }
                case 42: {
                    goto lab_0x40389a_2;
                }
                case 43: {
                    goto lab_0x403681;
                }
                case 44: {
                    goto lab_0x403681;
                }
                case 45: {
                    goto lab_0x403681;
                }
                case 46: {
                    goto lab_0x403681;
                }
                case 47: {
                    goto lab_0x403681;
                }
                case 48: {
                    goto lab_0x403681;
                }
                case 49: {
                    goto lab_0x403681;
                }
                case 50: {
                    goto lab_0x403681;
                }
                case 51: {
                    goto lab_0x403681;
                }
                case 52: {
                    goto lab_0x403681;
                }
                case 53: {
                    goto lab_0x403681;
                }
                case 54: {
                    goto lab_0x403681;
                }
                case 55: {
                    goto lab_0x403681;
                }
                case 56: {
                    goto lab_0x403681;
                }
                case 57: {
                    goto lab_0x403681;
                }
                case 58: {
                    goto lab_0x403681;
                }
                case 59: {
                    goto lab_0x40389a_2;
                }
                case 60: {
                    goto lab_0x40389a_2;
                }
                case 61: {
                    goto lab_0x40389a_2;
                }
                case 62: {
                    goto lab_0x40389a_2;
                }
                case 63: {
                    goto lab_0x40389a_2;
                }
                case 65: {
                    goto lab_0x403681;
                }
                case 66: {
                    goto lab_0x403681;
                }
                case 67: {
                    goto lab_0x403681;
                }
                case 68: {
                    goto lab_0x403681;
                }
                case 69: {
                    goto lab_0x403681;
                }
                case 70: {
                    goto lab_0x403681;
                }
                case 71: {
                    goto lab_0x403681;
                }
                case 72: {
                    goto lab_0x403681;
                }
                case 73: {
                    goto lab_0x403681;
                }
                case 74: {
                    goto lab_0x403681;
                }
                case 75: {
                    goto lab_0x403681;
                }
                case 76: {
                    goto lab_0x403681;
                }
                case 77: {
                    goto lab_0x403681;
                }
                case 78: {
                    goto lab_0x403681;
                }
                case 79: {
                    goto lab_0x403681;
                }
                case 80: {
                    goto lab_0x403681;
                }
                case 81: {
                    goto lab_0x403681;
                }
                case 82: {
                    goto lab_0x403681;
                }
                case 83: {
                    goto lab_0x403681;
                }
                case 84: {
                    goto lab_0x403681;
                }
                case 85: {
                    goto lab_0x403681;
                }
                case 86: {
                    goto lab_0x403681;
                }
                case 87: {
                    goto lab_0x403681;
                }
                case 88: {
                    goto lab_0x403681;
                }
                case 89: {
                    goto lab_0x403681;
                }
                case 90: {
                    goto lab_0x403681;
                }
                case 91: {
                    goto lab_0x40389a_2;
                }
                case 92: {
                    goto lab_0x40389a_2;
                }
                case 93: {
                    goto lab_0x403681;
                }
                case 94: {
                    goto lab_0x40389a_2;
                }
                case 95: {
                    goto lab_0x403681;
                }
                case 96: {
                    goto lab_0x40389a_2;
                }
                case 97: {
                    goto lab_0x403681;
                }
                case 98: {
                    goto lab_0x403681;
                }
                case 99: {
                    goto lab_0x403681;
                }
                case 100: {
                    goto lab_0x403681;
                }
                case 101: {
                    goto lab_0x403681;
                }
                case 102: {
                    goto lab_0x403681;
                }
                case 103: {
                    goto lab_0x403681;
                }
                case 104: {
                    goto lab_0x403681;
                }
                case 105: {
                    goto lab_0x403681;
                }
                case 106: {
                    goto lab_0x403681;
                }
                case 107: {
                    goto lab_0x403681;
                }
                case 108: {
                    goto lab_0x403681;
                }
                case 109: {
                    goto lab_0x403681;
                }
                case 110: {
                    goto lab_0x403681;
                }
                case 111: {
                    goto lab_0x403681;
                }
                case 112: {
                    goto lab_0x403681;
                }
                case 113: {
                    goto lab_0x403681;
                }
                case 114: {
                    goto lab_0x403681;
                }
                case 115: {
                    goto lab_0x403681;
                }
                case 116: {
                    goto lab_0x403681;
                }
                case 117: {
                    goto lab_0x403681;
                }
                case 118: {
                    goto lab_0x403681;
                }
                case 119: {
                    goto lab_0x403681;
                }
                case 120: {
                    goto lab_0x403681;
                }
                case 121: {
                    goto lab_0x403681;
                }
                case 122: {
                    goto lab_0x403681;
                }
                case 123: {
                    goto lab_0x403625;
                }
                case 124: {
                    goto lab_0x40389a_2;
                }
                case 125: {
                    goto lab_0x403625;
                }
                case 126: {
                    goto lab_0x40364d;
                }
                default: {
                    goto lab_0x403a25;
                }
            }
        }
      lab_0x403a25:
        if (v24 != 1) {
            // 0x403d90
            ps = 0;
            int64_t len = v14; // 0x403da0
            if (v14 == -1) {
                // 0x403da2
                len = strlen((char *)str);
            }
            int64_t v28 = len;
            v18 = 0;
            while (true) {
              lab_0x403e2f:
                // 0x403e2f
                v19 = v18;
                uint64_t v29 = v19 + v4; // 0x403e34
                v20 = 0;
                switch (str) {
                    case 0: {
                        goto lab_0x404379_2;
                    }
                    case -1: {
                        // 0x404459
                        v15 = 0x100000000 * v28 >> 32;
                        goto lab_0x4043aa_2;
                    }
                    case -2: {
                        int64_t v30 = 0x100000000 * v28 >> 32; // 0x40448d
                        v15 = v30;
                        if (v29 >= v30) {
                            goto lab_0x4043aa_2;
                        } else {
                            // 0x4044c7
                            v15 = v30;
                            if (*(char *)(v29 - 2) != 0) {
                                int64_t v31 = 1; // 0x4044d7
                                v21 = v31;
                                v16 = v30;
                                while (v31 + v4 < v30) {
                                    // 0x4044d0
                                    v21 = v31;
                                    v16 = v30;
                                    int64_t v32 = v31; // 0x4044d5
                                    if (*(char *)(v31 + v26) == 0) {
                                        // break -> 0x4043aa
                                        break;
                                    }
                                    v31 = v32 + 1;
                                    v21 = v31;
                                    v16 = v30;
                                }
                                goto lab_0x4043aa;
                            } else {
                                goto lab_0x4043aa_2;
                            }
                        }
                    }
                    case 1: {
                        goto lab_0x403e00;
                    }
                    default: {
                        int64_t v33; // 0x4034d7
                        char v34; // 0x403ebd
                        unsigned char v35; // 0x4034d7
                        if (*(char *)v33 < 125) {
                            // 0x403ec8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403edf
                                v3 = 0x100000000 * v28 >> 32;
                                v5 = 0x100000000 * v7 >> 32;
                                v9 = 0x100000000 * v11 >> 32;
                                goto lab_0x40389a_2;
                            }
                        }
                        int64_t v36 = v33 + 1; // 0x403eb0
                        v33 = v36;
                        // 0x403e9c
                        int64_t v37; // 0x403ea9
                        while (v37 != v36) {
                            // 0x403ebd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403ec8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403edf
                                    v3 = 0x100000000 * v28 >> 32;
                                    v5 = 0x100000000 * v7 >> 32;
                                    v9 = 0x100000000 * v11 >> 32;
                                    goto lab_0x40389a_2;
                                }
                            }
                            // 0x403eb0
                            v36 = v33 + 1;
                            v33 = v36;
                        }
                        goto lab_0x403e00;
                    }
                }
            }
          lab_0x404379_2:
            // 0x404379
            v21 = v20;
            v16 = 0x100000000 * v28 >> 32;
            goto lab_0x4043aa;
        } else {
            // 0x403a74
            __ctype_b_loc();
            v17 = 0x100000000000000 * v14 >> 56;
            v8 = v7;
            v12 = v11;
            goto lab_0x403681;
        }
    }
  lab_0x403ca8:
    // 0x403ca8
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (result != 0) {
        // 0x4045aa
        if (v7 > result) {
            // 0x4045b3
            *(char *)(v11 + result) = 0;
        }
        // 0x4038d7
        return result;
    }
    goto lab_0x40389a_2;
  lab_0x403681:;
    int64_t v41 = v12;
    int64_t v42 = v8;
    int64_t v43 = v17;
    if (v24 != 0) {
        // 0x403690
        v3 = v43;
        v5 = v42;
        v9 = v41;
        if ((*(int32_t *)((v23 / 8 & 28) + v24) & 1 << (int32_t)(v22 % 32)) != 0) {
            goto lab_0x40389a_2;
        }
    }
    int64_t v44 = result; // 0x403791
    char v45 = v22; // 0x403791
    int64_t v46 = v43; // 0x403791
    v2 = v4 + 1;
    int64_t v47 = v42; // 0x403791
    int64_t v48 = v41; // 0x403791
    goto lab_0x40370d;
  lab_0x40389a_2:;
    // 0x4038d7
    char * v38; // 0x4034d7
    return function_403480(v9, v5, str, v3, 2, wc & -3, 0, (int64_t)v38, (int64_t)v38);
  lab_0x403e00:
    // 0x403e00
    iswprint(wc);
    int64_t v39 = v19 + str; // 0x403e1f
    int32_t v40 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403e22
    v18 = v39;
    v20 = v39;
    if (v40 != 0) {
        // break -> 0x404379
        goto lab_0x404379_2;
    }
    goto lab_0x403e2f;
  lab_0x40364d:
    // 0x40364d
    v17 = v14;
    v8 = v7;
    v12 = v11;
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (v4 == 0) {
        goto lab_0x40389a_2;
    }
    goto lab_0x403681;
  lab_0x403625:;
    bool v51 = v14 == 1; // 0x403630
    if (v14 == -1) {
        // 0x403632
        v51 = *(char *)(str + 1) == 0;
    }
    // 0x40363e
    v17 = v14;
    v8 = v7;
    v12 = v11;
    if (!v51) {
        goto lab_0x403681;
    } else {
        goto lab_0x40364d;
    }
  lab_0x4043aa:;
    int64_t v52 = v16;
    uint64_t v53 = v21;
    int64_t v54 = 0x100000000 * v7 >> 32;
    int64_t v55 = 0x100000000 * v11 >> 32;
    v17 = v52;
    v8 = v54;
    v12 = v55;
    if (v53 < 2) {
        goto lab_0x403681;
    } else {
        uint64_t v56 = v53 + v4; // 0x403f7e
        int64_t v57 = v4 + 1; // 0x404061
        v44 = result;
        v45 = v22;
        v46 = v52;
        v2 = v57;
        v47 = v54;
        v48 = v55;
        int64_t v58 = v57; // 0x404068
        char v59 = v22; // 0x404068
        int64_t v60 = result; // 0x404068
        if (v57 < v56) {
            uint64_t v61 = v60;
            if (v54 > v61) {
                // 0x404031
                *(char *)(v61 + v55) = v59;
            }
            char v62 = *(char *)(v58 + str); // 0x404035
            int64_t v63 = v61 + 1; // 0x40403a
            int64_t v64 = v58 + 1; // 0x404061
            v44 = v63;
            v45 = v62;
            v46 = v52;
            v2 = v64;
            v47 = v54;
            v48 = v55;
            v58 = v64;
            while (v64 < v56) {
                // 0x40402c
                v61 = v63;
                if (v54 > v61) {
                    // 0x404031
                    *(char *)(v61 + v55) = v62;
                }
                // 0x404035
                v62 = *(char *)(v58 + str);
                v63 = v61 + 1;
                v64 = v58 + 1;
                v44 = v63;
                v45 = v62;
                v46 = v52;
                v2 = v64;
                v47 = v54;
                v48 = v55;
                v58 = v64;
            }
        }
        goto lab_0x40370d;
    }
  lab_0x40370d:;
    int64_t v49 = v48;
    uint64_t v50 = v44;
    if (v50 < v47) {
        // 0x403712
        *(char *)(v49 + v50) = v45;
    }
    // 0x403716
    v1 = v50 + 1;
    v13 = v46;
    v6 = v47;
    v10 = v49;
    goto lab_0x403528_2;
  lab_0x4043aa_2:
    // 0x4043aa
    v17 = v15;
    v8 = 0x100000000 * v7 >> 32;
    v12 = 0x100000000 * v11 >> 32;
    goto lab_0x403681;
}
// Address range: 0x4046b0 - 0x40484e
int64_t function_4046b0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4046b2
    int32_t * v3 = __errno_location(); // 0x4046cc
    int64_t v4 = (int64_t)g22; // 0x4046d1
    int32_t v5 = *v3; // 0x4046db
    int64_t v6 = v4; // 0x4046f1
    if (v2 >= (int64_t)*(int32_t *)0x60d250) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404849
            function_405a40(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404700
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404707
        int64_t v9; // 0x4046b0
        if (g22 == &g23) {
            int64_t v10 = function_405850(0, v8); // 0x40482a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x40482f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405850(v4, v8); // 0x40471b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40472a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40472a
        int32_t v14 = v7; // 0x404731
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x404761
    int64_t v17 = v15 + 8; // 0x404764
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x40476b
    int64_t * v19 = (int64_t *)v16; // 0x40476e
    uint64_t v20 = *v19; // 0x40476e
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x404771
    int64_t result = *v21; // 0x404771
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x40477c
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x404785
    int64_t v24; // 0x4046b0
    uint64_t v25 = function_403480(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x404794
    if (v20 > v25) {
        // 0x40480b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x4047a7
    *v19 = v26;
    if (result != (int64_t)&g42) {
        // 0x4047b7
        free((int64_t *)result);
    }
    int64_t result2 = function_4057f0(v26); // 0x4047d1
    *v21 = result2;
    int64_t v27 = *v22; // 0x4047eb
    int64_t v28 = *v23; // 0x4047ee
    int64_t v29; // 0x4046b0
    function_403480(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40480b
    *v3 = v5;
    return result2;
}
// Address range: 0x404850 - 0x404884
int64_t function_404850(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404857
    int64_t result = function_4059f0(a1 == 0 ? (int64_t)&g43 : a1, 56); // 0x404876
    return result;
}
// Address range: 0x404890 - 0x40489f
int64_t function_404890(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g43 : a1); // 0x40489c
    return result;
}
// Address range: 0x4048a0 - 0x4048af
int64_t function_4048a0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x4048a8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g43;
}
// Address range: 0x4048b0 - 0x4048e3
int64_t function_4048b0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 + 8 : a1 + 8; // 0x4048c9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4048ce
    uint32_t v3 = *v2; // 0x4048ce
    uint32_t v4 = (int32_t)a2 % 32; // 0x4048d2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4048f0 - 0x404903
int64_t function_4048f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g43 + 4 : a1 + 4); // 0x4048fc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404910 - 0x40493b
int64_t function_404910(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x404918
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404935
        abort();
        // UNREACHABLE
    }
    // 0x40492c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g43;
}
// Address range: 0x404940 - 0x4049b2
int64_t function_404940(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g43 : a5; // 0x404962
    int32_t * v2 = __errno_location(); // 0x40496b
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x404984
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x404988
    uint32_t v5 = *(int32_t *)v1; // 0x40498b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x404991
    int64_t result = function_403480(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40499a
    return result;
}
// Address range: 0x4049c0 - 0x404aa1
int64_t function_4049c0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g43 : a4; // 0x4049e2
    int32_t * v2 = __errno_location(); // 0x4049e8
    int64_t v3 = v1 + 8; // 0x4049ff
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404a07
    int32_t * v5 = (int32_t *)v1; // 0x404a0a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x404a18
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x404a1b
    int64_t v8 = function_403480(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x404a25
    int64_t v9 = v8 + 1; // 0x404a2a
    int64_t result = function_4057f0(v9); // 0x404a3f
    function_403480(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x404a84
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x404a8d
    return result;
}
// Address range: 0x404ab0 - 0x404aba
int64_t function_404ab0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ab0
    return function_4049c0(a1, a2, 0, a3);
}
// Address range: 0x404ac0 - 0x404b55
int64_t function_404ac0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x404ac0
    int64_t v2 = v1; // 0x404ac0
    int64_t v3 = v2; // 0x404ad4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x404af3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g52;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404af0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g52;
        }
    }
    int64_t v6 = v3; // 0x404b0d
    if (g23 != 0x60d2c0) {
        // 0x404b0f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g42;
        v6 = &g52;
    }
    int64_t result = v6; // 0x404b31
    if (g22 != &g23) {
        // 0x404b33
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g52;
    }
    // 0x404b46
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x404b60 - 0x404b71
int64_t function_404b60(void) {
    // 0x404b60
    int64_t v1; // 0x404b60
    return function_4046b0(v1, v1, -1, (int64_t *)&g43);
}
// Address range: 0x404b80 - 0x404b8a
int64_t function_404b80(void) {
    // 0x404b80
    int64_t v1; // 0x404b80
    return function_4046b0(v1, v1, v1, (int64_t *)&g43);
}
// Address range: 0x404b90 - 0x404ba6
int64_t function_404b90(int64_t a1) {
    // 0x404b90
    return function_4046b0(0, a1, -1, (int64_t *)&g43);
}
// Address range: 0x404bb0 - 0x404bc2
int64_t function_404bb0(int64_t a1, int64_t a2) {
    // 0x404bb0
    return function_4046b0(0, a1, a2, (int64_t *)&g43);
}
// Address range: 0x404bd0 - 0x404c38
int64_t function_404bd0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404be0
    return function_4046b0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404c40 - 0x404ca4
int64_t function_404c40(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404c50
    return function_4046b0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404cb0 - 0x404cbc
int64_t function_404cb0(int64_t a1, int64_t a2) {
    // 0x404cb0
    return function_404bd0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404cc0 - 0x404ccf
int64_t function_404cc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404cc0
    return function_404c40(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404cd0 - 0x404d40
int64_t function_404cd0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x404cdd
    int128_t v2 = __asm_movdqa(g44); // 0x404ce5
    int128_t v3 = __asm_movdqa(g45); // 0x404ced
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404d02
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404d18
    uint32_t v6 = *v5; // 0x404d18
    uint32_t v7 = (int32_t)a3 % 32; // 0x404d1d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4046b0(0, a1, a2, &v4);
}
// Address range: 0x404d40 - 0x404d4d
int64_t function_404d40(int64_t a1, int64_t a2) {
    // 0x404d40
    return function_404cd0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404d50 - 0x404d61
int64_t function_404d50(int64_t a1) {
    // 0x404d50
    return function_404cd0(a1, -1, 58);
}
// Address range: 0x404d70 - 0x404d7a
int64_t function_404d70(void) {
    // 0x404d70
    int64_t v1; // 0x404d70
    return function_404cd0(v1, v1, 58);
}
// Address range: 0x404d80 - 0x404dee
int64_t function_404d80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404d9a
    return function_4046b0(a1, a3, -1, &v1);
}
// Address range: 0x404df0 - 0x404e5c
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x404df7
    int128_t v2 = __asm_movdqa(g44); // 0x404dff
    int128_t v3 = __asm_movdqa(g45); // 0x404e07
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404e29
    if (a2 == 0 || a3 == 0) {
        // 0x404e57
        abort();
        // UNREACHABLE
    }
    // 0x404e3a
    return function_4046b0(a1, a4, a5, &v4);
}
// Address range: 0x404e60 - 0x404e69
int64_t function_404e60(void) {
    // 0x404e60
    int64_t v1; // 0x404e60
    return function_404df0(v1, v1, v1, v1, -1);
}
// Address range: 0x404e70 - 0x404e87
int64_t function_404e70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404e70
    return function_404df0(0, a1, a2, a3, -1);
}
// Address range: 0x404e90 - 0x404ea3
int64_t function_404e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404e90
    return function_404df0(0, a1, a2, a3, a4);
}
// Address range: 0x404eb0 - 0x404eba
int64_t function_404eb0(void) {
    // 0x404eb0
    int64_t v1; // 0x404eb0
    return function_4046b0(v1, v1, v1, &g21);
}
// Address range: 0x404ec0 - 0x404ed2
int64_t function_404ec0(int64_t a1, int64_t a2) {
    // 0x404ec0
    return function_4046b0(0, a1, a2, &g21);
}
// Address range: 0x404ee0 - 0x404ef1
int64_t function_404ee0(int64_t a1, char a2) {
    // 0x404ee0
    return function_4046b0(a1, (int64_t)a2, -1, &g21);
}
// Address range: 0x404f00 - 0x404f16
int64_t function_404f00(int64_t * a1) {
    // 0x404f00
    return function_4046b0(0, (int64_t)a1, -1, &g21);
}
// Address range: 0x404f20 - 0x405171
int64_t function_404f20(void) {
    // 0x404f20
    int64_t v1; // 0x404f20
    uint64_t v2 = v1;
    char v3 = v2;
    char v4 = v1;
    int64_t v5 = v1 % 256; // 0x404f23
    int64_t v6; // 0x404f20
    int64_t v7; // 0x404f20
    int64_t v8; // 0x404f20
    int64_t v9; // 0x404f20
    int64_t v10; // 0x404f20
    int64_t v11; // 0x404f20
    int64_t v12; // 0x404f20
    int64_t v13; // 0x404f20
    int64_t v14; // 0x404f20
    int64_t v15; // 0x404f20
    int64_t v16; // 0x404f20
    int64_t v17; // 0x404f20
    int64_t v18; // 0x404f20
    int64_t v19; // 0x404f20
    if (v3 == 45) {
        int64_t v20; // 0x404f20
        int64_t v21 = v20 + 1; // 0x404fd0
        unsigned char v22 = *(char *)v21; // 0x404fd4
        v20 = v21;
        while (v22 == 48) {
            // 0x404fd0
            v21 = v20 + 1;
            v22 = *(char *)v21;
            v20 = v21;
        }
        int64_t v23 = (int64_t)v22 + 0xffffffd0; // 0x404fdf
        if (v4 != 45) {
            // 0x404fe8
            if ((int32_t)v23 < 10) {
                // 0x405028
                return 0xffffffff;
            }
            // 0x404ff8
            if (v4 != 48) {
                // 0x405001
                return (int32_t)v5 < 58 ? 0xffffffff : 0;
            }
            int64_t v24; // 0x404f20
            int64_t v25 = v24 + 1; // 0x405100
            unsigned char v26 = *(char *)v25; // 0x405104
            v24 = v25;
            while (v26 == 48) {
                // 0x405100
                v25 = v24 + 1;
                v26 = *(char *)v25;
                v24 = v25;
            }
            // 0x405001
            return (int32_t)(int64_t)v26 < 58 ? 0xffffffff : 0;
        }
        int64_t v27; // 0x404f20
        int64_t v28 = v27 + 1; // 0x405050
        unsigned char v29 = *(char *)v28; // 0x405054
        v27 = v28;
        while (v29 == 48) {
            // 0x405050
            v28 = v27 + 1;
            v29 = *(char *)v28;
            v27 = v28;
        }
        int64_t v30 = v29; // 0x405054
        v8 = v28;
        v9 = v21;
        v19 = v30;
        v13 = v23;
        if (v22 != v29) {
            goto lab_0x405082;
        } else {
            // 0x405060
            v11 = v28;
            v18 = v30;
            if ((int32_t)v23 < 10) {
                int64_t v31 = v21 + 1; // 0x40506a
                int64_t v32 = v28 + 1; // 0x40506e
                unsigned char v33 = *(char *)v31; // 0x405072
                int64_t v34 = v33;
                while (v33 == *(char *)v32) {
                    // 0x405060
                    v11 = v32;
                    v18 = v34;
                    if ((int32_t)(v34 + 0xffffffd0) >= 10) {
                        goto lab_0x405158;
                    }
                    v31++;
                    v32++;
                    v33 = *(char *)v31;
                    v34 = v33;
                }
            } else {
                goto lab_0x405158;
            }
        }
    } else {
        int64_t v35 = v2 % 256; // 0x404f20
        if (v4 == 45) {
            int64_t v36; // 0x404f20
            int64_t v37 = v36 + 1; // 0x405010
            unsigned char v38 = *(char *)v37; // 0x405014
            v36 = v37;
            while (v38 == 48) {
                // 0x405010
                v37 = v36 + 1;
                v38 = *(char *)v37;
                v36 = v37;
            }
            // 0x40501b
            if ((int32_t)v38 < 58) {
                // 0x405028
                return 1;
            }
            // 0x405037
            if (v3 != 48) {
                // 0x40503c
                return (int32_t)v35 < 58;
            }
            int64_t v39; // 0x404f20
            int64_t v40 = v39 + 1; // 0x405030
            unsigned char v41 = *(char *)v40; // 0x405034
            v39 = v40;
            while (v41 == 48) {
                // 0x405030
                v40 = v39 + 1;
                v41 = *(char *)v40;
                v39 = v40;
            }
            // 0x40503c
            return (int32_t)(int64_t)v41 < 58;
        }
        int64_t v42 = v35; // 0x404f43
        int64_t v43; // 0x404f20
        if (v3 == 48) {
            int64_t v44; // 0x404f20
            int64_t v45 = v44 + 1; // 0x4050f0
            unsigned char v46 = *(char *)v45; // 0x4050f4
            v44 = v45;
            while (v46 == 48) {
                // 0x4050f0
                v45 = v44 + 1;
                v46 = *(char *)v45;
                v44 = v45;
            }
            // 0x404f40
            v43 = v45;
            v42 = v46;
        }
        int64_t v47 = v5; // 0x404f4c
        int64_t v48; // 0x404f20
        if (v4 == 48) {
            int64_t v49; // 0x404f20
            int64_t v50 = v49 + 1; // 0x4050e0
            unsigned char v51 = *(char *)v50; // 0x4050e4
            v49 = v50;
            while (v51 == 48) {
                // 0x4050e0
                v50 = v49 + 1;
                v51 = *(char *)v50;
                v49 = v50;
            }
            // 0x404f49
            v48 = v50;
            v47 = v51;
        }
        int64_t v52 = v42 + 0xffffffd0; // 0x404f55
        v6 = v48;
        v7 = v43;
        v15 = v42;
        v17 = v47;
        v12 = v52;
        if ((char)v47 != (char)v42) {
            goto lab_0x404f80;
        } else {
            // 0x404f60
            v10 = v48;
            v14 = v42;
            v16 = v47;
            if ((int32_t)v52 < 10) {
                int64_t v53 = v43 + 1; // 0x404f6a
                int64_t v54 = v48 + 1; // 0x404f6e
                unsigned char v55 = *(char *)v53; // 0x404f72
                int64_t v56 = v55;
                unsigned char v57 = *(char *)v54; // 0x404f75
                int64_t v58 = v56 + 0xffffffd0; // 0x404f78
                while (v55 == v57) {
                    // 0x404f60
                    v10 = v54;
                    v14 = v56;
                    v16 = v56;
                    if ((int32_t)v58 >= 10) {
                        goto lab_0x405140;
                    }
                    v53++;
                    v54++;
                    v55 = *(char *)v53;
                    v56 = v55;
                    v57 = *(char *)v54;
                    v58 = v56 + 0xffffffd0;
                }
                // 0x404f80
                v6 = v54;
                v7 = v53;
                v15 = v56;
                v17 = v57;
                v12 = v58;
                goto lab_0x404f80;
            } else {
                goto lab_0x405140;
            }
        }
    }
  lab_0x405158:;
    int64_t v59 = v11; // 0x40515d
    int64_t v60 = v18; // 0x40515d
    goto lab_0x405160;
  lab_0x405140:;
    int64_t v73 = v10; // 0x405140
    int64_t v74 = v14 - v16 & 0xffffffff; // 0x405140
    int64_t v75 = v16; // 0x405140
    goto lab_0x405142;
  lab_0x405082:
    // 0x405082
    v59 = v8;
    v60 = v19;
    int64_t v61; // 0x404f20
    if ((int32_t)v13 < 10) {
        int64_t v76 = 1;
        unsigned char v77 = *(char *)(v76 + v9); // 0x4050a0
        while (v77 == 57 || (int32_t)v77 < 57) {
            // 0x4050a0
            int64_t v78; // 0x404f20
            v76 = v78 + 1;
            v77 = *(char *)(v76 + v9);
            v78 = v76;
        }
        // 0x4050b2
        v61 = v8;
        if ((int32_t)v19 >= 58) {
            // 0x405129
            return v76 != 0 ? 0xffffffff : 0;
        }
        goto lab_0x4050ba;
    } else {
        goto lab_0x405160;
    }
  lab_0x404f80:;
    int64_t v79 = v15 - v17 & 0xffffffff; // 0x404f80
    v73 = v6;
    v74 = v79;
    v75 = v17;
    int64_t v69; // 0x404f20
    int64_t v71; // 0x404f20
    int64_t v72; // 0x404f20
    if ((int32_t)v12 < 10) {
        int64_t v80 = 1;
        int64_t v81 = v80; // 0x404fa0
        while ((int32_t)*(char *)(v80 + v7) < 58) {
            // 0x404f90
            v80 = v81 + 1;
            v81 = v80;
        }
        // 0x404fa2
        v69 = v6;
        v72 = v79;
        v71 = v80;
        if ((int32_t)v17 >= 58) {
            // 0x405120
            return v80 != 0;
        }
        goto lab_0x404fae;
    } else {
        goto lab_0x405142;
    }
  lab_0x405160:
    // 0x405160
    v61 = v59;
    if ((int32_t)v60 >= 58) {
        // 0x405028
        return 0;
    }
    goto lab_0x4050ba;
  lab_0x405142:
    // 0x405142
    v69 = v73;
    v72 = v74;
    v71 = 0;
    if ((int32_t)v75 >= 58) {
        // 0x405028
        return 0;
    }
    goto lab_0x404fae;
  lab_0x4050ba:;
    int64_t v62 = 1;
    unsigned char v63 = *(char *)(v62 + v61); // 0x4050c0
    int64_t v64 = v62; // 0x4050cf
    while (v63 == 57 || (int32_t)v63 < 57) {
        // 0x4050c0
        v62 = v64 + 1;
        v63 = *(char *)(v62 + v61);
        v64 = v62;
    }
    // 0x4050d1
    int64_t v65; // 0x404f20
    if (v65 != v62) {
        // 0x4050d6
        return v65 < v62 ? 1 : 0xffffffff;
    }
    // 0x405110
    int64_t v66; // 0x404f20
    return v65 == 0 ? 0 : v66 & 0xffffffff;
  lab_0x404fae:;
    int64_t v67 = 1;
    unsigned char v68 = *(char *)(v67 + v69); // 0x404fb0
    int64_t v70 = v67; // 0x404fbf
    while (v68 == 57 || (int32_t)v68 < 57) {
        // 0x404fb0
        v67 = v70 + 1;
        v68 = *(char *)(v67 + v69);
        v70 = v67;
    }
    // 0x404fc1
    if (v71 == v67) {
        // 0x405110
        return v71 == 0 ? 0 : v72 & 0xffffffff;
    }
    // 0x404fca
    return v71 < v67 ? 0xffffffff : 1;
}
// Address range: 0x405180 - 0x405231
int64_t function_405180(int64_t a1, int64_t a2, int32_t file_name, int32_t line_num, int64_t a5, int64_t a6) {
    int64_t v1 = function_405bb0(a5, a6); // 0x40519a
    if (v1 == 0) {
        // 0x405205
        error(0, *__errno_location(), dcgettext(NULL, "unable to display error message", 5));
        abort();
        // UNREACHABLE
    }
    int32_t status = a1;
    int32_t err_num = a2;
    if (file_name == 0) {
        // 0x4051e0
        error(status, err_num, "%s", (char *)v1);
        free((int64_t *)v1);
        return &g52;
    }
    // 0x4051ac
    error_at_line(status, err_num, (char *)(int64_t)file_name, line_num, "%s", (char *)v1);
    free((int64_t *)v1);
    return &g52;
}
// Address range: 0x405240 - 0x40524f
int64_t function_405240(int32_t a1, int32_t a2, int64_t a3, int64_t * a4) {
    // 0x405240
    return function_405180((int64_t)a1, (int64_t)a2, 0, 0, a3, (int64_t)a4);
}
// Address range: 0x405250 - 0x40562d
int64_t function_405250(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4052e8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40526c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405286
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4052cb
    if (a6 < 10) {
        // 0x4052da
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4053d2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405630 - 0x405650
int64_t function_405630(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405630
    if (a5 == 0) {
        // 0x40564b
        return function_405250(a1, a2, a3, a4, a5, 0, (int64_t)&g52);
    }
    int64_t v1 = 0; // 0x405637
    v1++;
    int64_t v2 = v1; // 0x405649
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405640
        v1++;
        v2 = v1;
    }
    // 0x40564b
    return function_405250(a1, a2, a3, a4, a5, v2, (int64_t)&g52);
}
// Address range: 0x405650 - 0x4056b0
int64_t function_405650(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405650
    int64_t v3 = &v2; // 0x405650
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405683
    int64_t v6; // 0x40566d
    int64_t * v7; // 0x40568b
    int64_t v8; // 0x40568b
    int64_t v9; // 0x405697
    if (v5 < 48) {
        // 0x405660
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4056a3
            break;
        }
    } else {
        // 0x40568b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4056a3
            break;
        }
    }
    int64_t v10 = 10; // 0x405681
    while (v4 != 9) {
        // 0x405679
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405660
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4056a3
                break;
            }
        } else {
            // 0x40568b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4056a3
                break;
            }
        }
        // 0x405679
        v10 = 10;
    }
    // 0x4056a3
    return function_405250(a1, a2, a3, a4, v3, v10, (int64_t)&g52);
}
// Address range: 0x4056b0 - 0x40576c
int64_t function_4056b0(int64_t a1, int64_t * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4056b0
    int64_t v1; // bp-168, 0x4056b0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4056b0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4056b0
    int64_t v8; // 0x4056b0
    int64_t v9; // bp-56, 0x4056b0
    int64_t v10; // 0x405715
    int64_t v11; // 0x405739
    if ((int32_t)v6 < 48) {
        // 0x405700
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405750
            break;
        }
    } else {
        // 0x405732
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405750
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40572a
    int64_t v13 = 10; // 0x40572a
    while (v5 != 9) {
        // 0x40572c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405700
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405750
                break;
            }
        } else {
            // 0x405732
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405750
                break;
            }
        }
        // 0x405722
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405750
    int64_t v14; // bp-136, 0x4056b0
    int64_t result = function_405250(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g52); // 0x40575f
    return result;
}
// Address range: 0x405770 - 0x4057e4
int64_t function_405770(int64_t a1) {
    // 0x405770
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4057d3
    return fputs_unlocked(v1, g27);
}
// Address range: 0x4057f0 - 0x40580a
int64_t function_4057f0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4057f4
    if (size != 0 != (mem == NULL)) {
        // 0x405803
        return (int64_t)mem;
    }
    // 0x405805
    function_405a40(size);
    // UNREACHABLE
}
// Address range: 0x405810 - 0x405831
int64_t function_405810(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405813
    int64_t v2 = v1; // 0x405813
    if (v2 < 0) {
        // 0x40582b
        function_405a40(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405829
        return function_4057f0(v2);
    }
    // 0x40582b
    function_405a40(v2);
    // UNREACHABLE
}
// Address range: 0x405840 - 0x405842
int64_t function_405840(void) {
    // 0x405840
    int64_t v1; // 0x405840
    return function_4057f0(v1);
}
// Address range: 0x405850 - 0x405886
int64_t function_405850(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405878
        free(v1);
        return (int32_t)&g52 ^ (int32_t)&g52;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405861
    if (a2 != 0 != (mem == NULL)) {
        // 0x405870
        return (int64_t)mem;
    }
    // 0x405881
    function_405a40(a1);
    // UNREACHABLE
}
// Address range: 0x405890 - 0x4058b1
int64_t function_405890(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405893
    int64_t v2 = v1; // 0x405893
    if (v2 < 0) {
        // 0x4058ab
        function_405a40(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4058a9
        return function_405850(a1, v2);
    }
    // 0x4058ab
    function_405a40(a1);
    // UNREACHABLE
}
// Address range: 0x4058c0 - 0x405946
int64_t function_4058c0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40591b
            function_405a40(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405850(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405903
    if (a2 == 0) {
        // 0x405928
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405908
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40591b
        function_405a40(a1);
        // UNREACHABLE
    }
    // 0x4058ea
    *(int64_t *)a2 = v2;
    return function_405850(a1, v2 * a3);
}
// Address range: 0x405950 - 0x4059a0
int64_t function_405950(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405950
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40599a
            function_405a40(a1);
            // UNREACHABLE
        }
        // 0x405972
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405850(a1, v1);
    }
    if (a2 == 0) {
        // 0x405985
        *(int64_t *)a2 = 128;
        return function_405850(0, 128);
    }
    // 0x405998
    if (a2 < 0) {
        // 0x40599a
        function_405a40(a1);
        // UNREACHABLE
    }
    // 0x405972
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405850(a1, v1);
}
// Address range: 0x4059a0 - 0x4059b7
int64_t function_4059a0(int64_t a1, int64_t a2) {
    // 0x4059a0
    return (int64_t)memset((int64_t *)function_4057f0(a1), 0, (int32_t)a1);
}
// Address range: 0x4059c0 - 0x4059ee
int64_t function_4059c0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4059c7
    if ((int64_t)v1 < 0) {
        // 0x4059e9
        function_405a40(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4059e9
        function_405a40(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4059da
    if (mem != NULL) {
        // 0x4059e4
        return (int64_t)mem;
    }
    // 0x4059e9
    function_405a40(nmemb);
    // UNREACHABLE
}
// Address range: 0x4059f0 - 0x405a18
int64_t function_4059f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4057f0(a2); // 0x4059ff
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405a20 - 0x405a33
int64_t function_405a20(int64_t str) {
    // 0x405a20
    return function_4059f0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405a40 - 0x405a71
int64_t function_405a40(int64_t a1) {
    // 0x405a40
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405a80 - 0x405ba7
int64_t function_405a80(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int128_t v2 = *(int128_t *)&v1; // 0x405a8e
    int128_t v3; // 0x405a80
    __asm_movups(v3, __asm_movdqu(v2));
    int64_t result; // 0x405a80
    int64_t v4; // 0x405a80
    if (a1 == 0) {
        int64_t v5 = function_4057f0(1); // 0x405b75
        v4 = v5;
        result = v5;
    } else {
        int64_t v6 = v2;
        int64_t v7 = 0; // 0x405abb
        int64_t v8 = a1; // 0x405abb
        int64_t v9 = v3;
        int32_t v10 = v3;
        int64_t str; // 0x405a80
        int64_t v11; // 0x405a80
        int64_t v12; // 0x405a80
        int64_t v13; // 0x405a80
        int32_t v14; // 0x405a80
        int32_t v15; // 0x405ac2
        if (v10 < 48) {
            // 0x405ac0
            v15 = (int32_t)v9 + 8;
            v14 = v15;
            v13 = v15;
            v11 = v12;
            str = (v9 & 0xffffffff) + *(int64_t *)(a2 + 16);
        } else {
            // 0x405aea
            v14 = v10;
            v13 = v9;
            v11 = v12 + 8;
            str = v12;
        }
        uint64_t v16 = v7 + (int64_t)strlen((char *)*(int64_t *)str); // 0x405ad4
        int64_t v17 = v16 < v7 ? -1 : v16; // 0x405ad7
        v8--;
        v7 = v17;
        while (v8 != 0) {
            int64_t v18 = v11;
            v9 = v13;
            v10 = v14;
            if (v10 < 48) {
                // 0x405ac0
                v15 = (int32_t)v9 + 8;
                v14 = v15;
                v13 = v15;
                v11 = v18;
                str = (v9 & 0xffffffff) + *(int64_t *)(a2 + 16);
            } else {
                // 0x405aea
                v14 = v10;
                v13 = v9;
                v11 = v18 + 8;
                str = v18;
            }
            // 0x405acc
            v16 = v7 + (int64_t)strlen((char *)*(int64_t *)str);
            v17 = v16 < v7 ? -1 : v16;
            v8--;
            v7 = v17;
        }
        if (v17 >= 0x80000000) {
            // 0x405b98
            *__errno_location() = 75;
            // 0x405b83
            return 0;
        }
        int64_t v19 = function_4057f0(v17 + 1); // 0x405b11
        int64_t * v20 = (int64_t *)(v6 + 8);
        int64_t v21 = v19; // 0x405b1c
        int64_t v22 = a1; // 0x405b1c
        uint32_t v23 = (int32_t)v2; // 0x405b53
        int64_t v24; // 0x405a80
        int64_t v25; // 0x405b5c
        if (v23 < 48) {
            // 0x405b20
            *(int32_t *)v6 = v23 + 8;
            v24 = *(int64_t *)(v6 + 16) + (int64_t)v23;
        } else {
            // 0x405b5c
            v25 = *v20;
            *v20 = v25 + 8;
            v24 = v25;
        }
        int64_t str2 = *(int64_t *)v24; // 0x405b2e
        int32_t len = strlen((char *)str2); // 0x405b34
        memcpy((int64_t *)v21, (int64_t *)str2, len);
        v21 += (int64_t)len;
        v22--;
        v4 = v21;
        result = v19;
        while (v22 != 0) {
            // 0x405b2e
            v23 = *(int32_t *)&v1;
            if (v23 < 48) {
                // 0x405b20
                *(int32_t *)v6 = v23 + 8;
                v24 = *(int64_t *)(v6 + 16) + (int64_t)v23;
            } else {
                // 0x405b5c
                v25 = *v20;
                *v20 = v25 + 8;
                v24 = v25;
            }
            // 0x405b2e
            str2 = *(int64_t *)v24;
            len = strlen((char *)str2);
            memcpy((int64_t *)v21, (int64_t *)str2, len);
            v21 += (int64_t)len;
            v22--;
            v4 = v21;
            result = v19;
        }
    }
    // 0x405b80
    *(char *)v4 = 0;
    // 0x405b83
    return result;
}
// Address range: 0x405bb0 - 0x405c3a
int64_t function_405bb0(int64_t a1, int64_t a2) {
    char v1 = a1;
    if (v1 == 0) {
        // 0x405be8
        return 0;
    }
    if (v1 == 37) {
        // 0x405bbf
        if (*(char *)(a1 + 1) == 115) {
            int64_t result = 1; // 0x405bdc
            int64_t v2 = 2 * result + a1;
            char v3 = *(char *)v2; // 0x405be0
            while (v3 != 0) {
                if (v3 != 37) {
                    goto lab_0x405bf8_2;
                }
                // 0x405bd5
                if (*(char *)(v2 + 1) != 115) {
                    goto lab_0x405bf8_2;
                }
                result++;
                v2 = 2 * result + a1;
                v3 = *(char *)v2;
            }
            // 0x405be8
            return result;
        }
    }
  lab_0x405bf8_2:;
    // 0x405bf8
    int64_t result2; // bp-16, 0x405bb0
    if ((int32_t)function_405cc0(&result2, a1, a2) >= 0) {
        // 0x405c0c
        return result2;
    }
    // 0x405c20
    if (*__errno_location() != 12) {
        // 0x405be8
        return 0;
    }
    // 0x405c35
    function_405a40((int64_t)&result2);
    // UNREACHABLE
}
// Address range: 0x405c40 - 0x405cba
int64_t function_405c40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405c4b
    int64_t v2 = (int64_t)&g12; // 0x405c4b
    int64_t v3; // 0x405c40
    int64_t v4; // 0x405c40
    int64_t n; // 0x405c40
    if (a2 == 0) {
        goto lab_0x405c92;
    } else {
        // 0x405c4d
        if (a3 == 0) {
            // 0x405c78
            return -2;
        }
        // 0x405c59
        n = a3;
        v4 = a2;
        v3 = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == 0) {
            goto lab_0x405c92;
        } else {
            goto lab_0x405c64;
        }
    }
  lab_0x405c92:
    // 0x405c92
    n = v1;
    v4 = v2;
    int64_t v5; // bp-28, 0x405c40
    v3 = &v5;
    goto lab_0x405c64;
  lab_0x405c64:;
    int32_t * pwc = (int32_t *)v3; // 0x405c6a
    char * wstr = (char *)v4; // 0x405c6a
    int64_t ps; // 0x405c40
    int32_t v6 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405c6a
    int64_t result = v6; // 0x405c6a
    if (v6 < 0xfffffffe) {
        // 0x405c78
        return result;
    }
    int64_t result2 = result; // 0x405ca9
    if ((char)function_405d80(0, v4) == 0) {
        // 0x405cab
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405c78
    return result2;
}
// Address range: 0x405cc0 - 0x405d19
int64_t function_405cc0(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x405cc0
    int32_t v1; // bp-16, 0x405cc0
    int64_t v2; // 0x405cc0
    int64_t v3 = function_406470(0, (int64_t *)&v1, a2, a3, v2, v2, v2, (int64_t)&g52); // 0x405cd5
    if (v3 == 0) {
        // 0x405cf2
        return 0xffffffff;
    }
    // 0x405cdf
    int64_t result; // 0x405cc0
    if (v1 > -1) {
        // 0x405ced
        *a1 = v3;
        result = v1;
    } else {
        // 0x405cf8
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x405cf2
    return result;
}
// Address range: 0x405d20 - 0x405d7d
int64_t function_405d20(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405d27
    int64_t v2; // 0x405d20
    int64_t result = function_406350(a1, v2); // 0x405d38
    if ((v2 & 32) != 0) {
        // 0x405d60
        if ((int32_t)result == 0) {
            // 0x405d64
            *__errno_location() = 0;
        }
        // 0x405d5a
        return 0xffffffff;
    }
    // 0x405d41
    if ((int32_t)result == 0) {
        // 0x405d5a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405d48
    if (v1 == 0) {
        // 0x405d4a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405d5a
    return result2;
}
// Address range: 0x405d80 - 0x405dde
int64_t function_405d80(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405d86
    if (locale == NULL) {
        // 0x405db3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405d86
    bool v2; // 0x405d80
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x405d80
    int64_t v5 = v1; // 0x405d80
    int64_t v6 = 2; // 0x405da5
    unsigned char v7 = *(char *)v5; // 0x405da5
    char v8 = *(char *)v4; // 0x405da5
    char v9 = v8; // 0x405da5
    bool v10 = false; // 0x405da5
    while (v7 == v8) {
        // 0x405d98
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405db1
    int64_t v13 = v1; // 0x405db1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405db3
        return 0;
    }
    int64_t v14 = 6; // 0x405db1
    unsigned char v15 = *(char *)v13; // 0x405dcd
    char v16 = *(char *)v12; // 0x405dcd
    char v17 = v16; // 0x405dcd
    bool v18 = false; // 0x405dcd
    while (v15 == v16) {
        // 0x405dc0
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
// Address range: 0x405de0 - 0x406342
int64_t function_405de0(void) {
    char * v1 = nl_langinfo(14); // 0x405df6
    char * v2 = g46; // 0x405dfb
    char * v3; // 0x405de0
    int64_t v4; // 0x405de0
    int64_t v5; // 0x405de0
    int64_t v6; // 0x405de0
    int64_t v7; // 0x405de0
    int32_t size; // 0x405de0
    int32_t size2; // 0x405de0
    int32_t len; // 0x405eb2
    int64_t v8; // 0x405eb2
    char * env_val; // 0x405e9d
    if (v2 == NULL) {
        // 0x405e98
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405f05;
        } else {
            // 0x405eaa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405f05;
            } else {
                // 0x405eaf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405e9d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406335
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405f05;
                    } else {
                        // 0x4062a9
                        size2 = len + 14;
                        goto lab_0x405ecb;
                    }
                } else {
                    goto lab_0x405ecb;
                }
            }
        }
    } else {
        // 0x405de0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405e1a;
    }
  lab_0x40614c:;
    // 0x40614c
    struct _IO_FILE * stream; // 0x405f8b
    int32_t v10 = __uflow(stream); // 0x40614f
    int64_t v11; // 0x405de0
    int64_t v12 = v11; // 0x406159
    int64_t v13; // 0x405de0
    int64_t v14 = v13; // 0x406159
    int32_t v15 = v10; // 0x406159
    int64_t v16; // 0x405de0
    int64_t v17 = v16; // 0x406159
    int64_t v18 = v11; // 0x406159
    int64_t v19 = v13; // 0x406159
    int64_t v20 = v16; // 0x406159
    if (v10 == -1) {
        // break -> 0x40615f
        goto lab_0x40615f;
    }
    goto lab_0x405fd9;
  lab_0x405fce:;
    // 0x405fce
    int64_t v90; // 0x405de0
    int64_t * v32; // 0x405fc0
    *v32 = v90 + 1;
    int64_t v89; // 0x405de0
    v12 = v89;
    int64_t v91; // 0x405de0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405de0
    v17 = v92;
    goto lab_0x405fd9;
  lab_0x405fd9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405de0
    int32_t v25; // bp-120, 0x405de0
    int32_t v26; // bp-184, 0x405de0
    int64_t v27; // 0x405f8b
    int64_t v28; // 0x405fa8
    int64_t v29; // 0x405fad
    int64_t * v30; // 0x405fc4
    switch (c) {
        case 32: {
            goto lab_0x405fc0;
        }
        case 10: {
            goto lab_0x405fc0;
        }
        case 9: {
            goto lab_0x405fc0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4061b1
            int32_t v33; // 0x405de0
            char v34; // 0x405de0
            int32_t v35; // 0x4061be
            if (v31 < *v30) {
                // 0x406190
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4061bb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4061b1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406190
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4061bb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4061a0
                v36 = v33;
            }
            // 0x40628f
            if (v36 == -1) {
                // break -> 0x40615f
                break;
            }
            goto lab_0x405fc0;
        }
        default: {
            // 0x405fef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40615f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406018
            int64_t v39 = v37 + 4; // 0x40601a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406026
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406028
            while (v41 == 0) {
                // 0x406018
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406046
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406052
            int64_t v45 = v43 + 4; // 0x406054
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406060
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406062
            while (v47 == 0) {
                // 0x406052
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40604f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406078
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406088
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40608c
            int64_t v52 = v51 + v48; // 0x406095
            int64_t * mem; // 0x405de0
            int64_t v53; // 0x405de0
            int64_t v54; // 0x405de0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4061cb
                int64_t v56 = v55 + 3; // 0x4061d7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4060b1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4060c0
            if (mem == NULL) {
                // 0x4062ec
                free((int64_t *)v21);
                function_406350(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405f64;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4060d8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4060e2
            uint32_t v62 = (int32_t)v59; // 0x4060e5
            int64_t v63; // 0x405de0
            if (v62 >= 8) {
                // 0x4061f4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40620e
                int64_t v66 = v61 - v65; // 0x406212
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40621d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40622e
                    int64_t v70 = v69 & 0xffffffff; // 0x40622e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40622b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4062bf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4060f7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4060fb
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
            int64_t v73 = v51 + 1; // 0x40610b
            int64_t v74 = v60 - 1; // 0x40610f
            uint32_t v75 = (int32_t)v73; // 0x406114
            int64_t v76; // 0x405de0
            if (v75 >= 8) {
                // 0x406242
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40624c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40625c
                int64_t v80 = v74 - v79; // 0x406260
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40626b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40627b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406279
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4062d6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4062de
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406126
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40612a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406323
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40613e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405fce;
            } else {
                goto lab_0x40614c;
            }
        }
    }
  lab_0x405fc0:;
    int64_t v93 = v23; // 0x405de0
    int64_t v94 = v22; // 0x405de0
    int64_t v95 = v21; // 0x405de0
    goto lab_0x405fc0_2;
  lab_0x405f05:;
    int64_t * mem3 = malloc(size); // 0x405f05
    int64_t v97 = (int64_t)&g12; // 0x405f10
    int64_t v98; // 0x405de0
    int64_t path; // 0x405de0
    if (mem3 == NULL) {
        goto lab_0x405ee2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405f05
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405f26;
    }
  lab_0x405e1a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x405e0d
    char v100 = *v3; // 0x405e1a
    int64_t v101; // 0x405de0
    if (v100 == 0) {
        // 0x405e74
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405de0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405de0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405e60
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405e67;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405e30
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405e3d
        char v107 = *(char *)v106; // 0x405e42
        v102 = v107;
        if (v107 == 0) {
            // 0x405e74
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405e4b
    v104 = v103 + 1;
  lab_0x405e67:
    // 0x405e74
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405ee2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405e1a;
  lab_0x405f26:;
    int64_t v109 = v98 + path; // 0x405f26
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405f52
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405f81
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4062b2
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405fa5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405fc0_2:;
                uint64_t v96 = *v32; // 0x405fc0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40614c;
                } else {
                    goto lab_0x405fce;
                }
            }
          lab_0x40615f:
            // 0x40615f
            function_406350(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40617e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405f64;
  lab_0x405ecb:;
    int64_t * mem4 = malloc(size2); // 0x405ecb
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405f71
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405f26;
    } else {
        goto lab_0x405ee2;
    }
  lab_0x405f64:
    // 0x405f64
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405ee2;
}
// Address range: 0x406350 - 0x4063cb
int64_t function_406350(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406357
    if (fileno(stream) < 0) {
        // 0x4063b7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40636a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40639b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4063b7
            return fclose(stream);
        }
    }
    // 0x40636c
    if ((int32_t)function_4063d0(a1, v1) == 0) {
        // 0x4063b7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406378
    int32_t v3 = *v2; // 0x406380
    int64_t result = fclose(stream); // 0x40638e
    if (v3 != 0) {
        // 0x4063c0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406390
    return result;
}
// Address range: 0x4063d0 - 0x406410
int64_t function_4063d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4063ea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4063ea
        return fflush(stream);
    }
    // 0x4063f8
    function_406410(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406410 - 0x406467
int64_t function_406410(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406410
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40641a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40644b
    int64_t result = -1; // 0x406454
    if (v1 != -1) {
        // 0x406456
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406462
    return result;
}
// Address range: 0x406470 - 0x407f89
int64_t function_406470(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x406470
    int64_t v1; // bp-1416, 0x406470
    int64_t v2; // bp-1656, 0x406470
    if ((int32_t)function_4081b0(a3, &v1, &v2) < 0) {
        // 0x406ae0
        return 0;
    }
    int64_t v3 = &v2; // 0x40647b
    int64_t v4; // bp-1384, 0x406470
    int64_t v5; // bp-1640, 0x406470
    int64_t v6; // 0x406470
    if ((int32_t)function_407f90(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x4073c7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x4073e3
            free((int64_t *)v6);
        }
        // 0x4073e8
        *__errno_location() = 22;
        // 0x406ae0
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x4064db
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x4064e3
    uint64_t v9 = v8 + v6; // 0x4064e7
    int64_t v10; // 0x406470
    char * v11; // 0x406470
    int64_t v12; // 0x406470
    if (v9 < v8) {
        // 0x406b90
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x406a99;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x406b90
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x406a99;
        } else {
            uint64_t size = v9 + 6; // 0x4064f7
            if (size < 4000) {
                // 0x406640
                v12 = 0;
                int64_t v13; // bp-1784, 0x406470
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x406534;
            } else {
                if (size == -1) {
                    // 0x406b90
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x406a99;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x406518
                    if (mem == NULL) {
                        // 0x406b90
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x406a99;
                    } else {
                        // 0x40652d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x406534;
                    }
                }
            }
        }
    }
  lab_0x406a60_2:;
    // 0x406a60
    int64_t v14; // 0x406470
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x406a68
    int64_t v17 = v16; // 0x406a76
    int64_t v18 = v16; // 0x406a76
    int64_t v19 = v15; // 0x406a76
    int64_t v20; // 0x406558
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x406c88;
    } else {
        goto lab_0x406a81;
    }
  lab_0x406a99:
    // 0x406a99
    if (v6 != (int64_t)&v4) {
        // 0x406ab0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x406acc
        free((int64_t *)v6);
    }
    // 0x406ad1
    *(int32_t *)v10 = 12;
    // 0x406ae0
    return 0;
  lab_0x406534:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x40656d
    int64_t v23 = *v22; // 0x40656d
    int64_t v24 = 0; // 0x406573
    int64_t v25 = v20; // 0x406573
    int64_t v26 = v21; // 0x406573
    int64_t v27 = 0; // 0x406573
    int64_t v28; // 0x406470
    int64_t v29; // 0x406470
    int64_t v30; // 0x406470
    int64_t v31; // 0x406470
    int64_t v32; // 0x406470
    int64_t v33; // 0x406470
    int64_t v34; // 0x406470
    if (v23 == a3) {
        goto lab_0x406b83;
    } else {
        int64_t v35 = v23 - a3; // 0x406579
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40658b;
    }
  lab_0x406b83:;
    int64_t v36 = v24; // 0x406b86
    float80_t v37; // 0x406470
    float80_t v38 = v37; // 0x406b86
    float80_t v39; // 0x406470
    float80_t v40 = v39; // 0x406b86
    int64_t v41 = v25; // 0x406b86
    int64_t v42 = v26; // 0x406b86
    int64_t v43 = v27; // 0x406b86
    int64_t v44; // 0x406470
    int64_t v45 = v44; // 0x406b86
    goto lab_0x4066e8;
  lab_0x4066e8:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x406470
    int64_t v51; // 0x406470
    int64_t v52; // 0x406470
    int64_t v53; // 0x406470
    int64_t v54; // 0x406470
    int64_t v55; // 0x406470
    int64_t v56; // 0x406470
    int64_t v57; // 0x406470
    int64_t dest_mem2; // 0x406470
    int64_t dest_mem3; // 0x406470
    int64_t v58; // 0x406470
    float80_t v59; // 0x406470
    float80_t v60; // 0x406470
    float80_t v61; // 0x406470
    float80_t v62; // 0x406470
    float80_t v63; // 0x406470
    uint64_t v64; // 0x407816
    char * v65; // 0x4066fc
    char v66; // 0x4066fc
    int64_t v67; // 0x406724
    uint32_t v68; // 0x406728
    int64_t v69; // 0x406b05
    char v70; // 0x406470
    if (v1 == v49) {
        // 0x407810
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x407f7a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x407872;
            } else {
                goto lab_0x406a60_2;
            }
        } else {
            // 0x407820
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x407872;
            } else {
                if (v47 != 0) {
                    // 0x407e3d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406a60_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x407e43
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40783e;
                        } else {
                            goto lab_0x407e4f;
                        }
                    }
                } else {
                    // 0x40782e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40783e;
                    } else {
                        goto lab_0x407e4f;
                    }
                }
            }
        }
    } else {
        // 0x4066fc
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x406701
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40719c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x4072d0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x406a60_2;
                } else {
                    goto lab_0x406b62;
                }
            } else {
                // 0x406b12
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x406b62;
                } else {
                    if (v47 != 0) {
                        // 0x407400
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x406a60_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x407406
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x406b30;
                            } else {
                                goto lab_0x407412;
                            }
                        }
                    } else {
                        // 0x406b20
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x406b30;
                        } else {
                            goto lab_0x407412;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40719c
                abort();
                // UNREACHABLE
            }
            // 0x406719
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g48 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x407090
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406b67;
                }
                case 19: {
                    // 0x407080
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406b67;
                }
                case 20: {
                    // 0x407068
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406b67;
                }
                case 21: {
                    goto lab_0x406c50;
                }
                case 22: {
                    goto lab_0x406c50;
                }
                default: {
                    // 0x40673a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x406be0
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x406bfd;
                        } else {
                            // 0x406be7
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x406770;
                            } else {
                                goto lab_0x406bfd;
                            }
                        }
                    } else {
                        goto lab_0x406770;
                    }
                }
            }
        }
    }
  lab_0x40658b:;
    int64_t v75 = v34;
    float80_t v76; // 0x406470
    float80_t v77 = v76;
    float80_t v78; // 0x406470
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x406470
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40658e
    int64_t v89 = v85; // 0x40658e
    int64_t v90 = v84; // 0x40658e
    float80_t v91 = v79; // 0x40658e
    float80_t v92 = v77; // 0x40658e
    int64_t v93 = v75; // 0x40658e
    int64_t v94 = v80; // 0x40658e
    int64_t v95 = v81; // 0x40658e
    int64_t v96 = v82; // 0x40658e
    int64_t v97 = v87; // 0x40658e
    int64_t v98; // 0x406470
    int64_t v99; // 0x406470
    int64_t v100; // 0x406470
    int64_t v101; // 0x406470
    int64_t v102; // 0x406470
    if (v82 >= v87) {
        goto lab_0x4066d9;
    } else {
        if (v82 != 0) {
            // 0x406670
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x406a60_2;
            } else {
                int64_t v103 = 2 * v82; // 0x406676
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40668b;
                } else {
                    goto lab_0x40667e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x4065b4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40669e;
                } else {
                    goto lab_0x4065c0;
                }
            } else {
                goto lab_0x40667e;
            }
        }
    }
  lab_0x4066d9:
    // 0x4066d9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x4066e8;
  lab_0x407872:
    // 0x407872
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40787a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40788b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x407897
    if (v12 != 0) {
        // 0x4078a3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x4078c2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4078de
        free((int64_t *)v6);
    }
    // 0x4078e3
    *a2 = v46;
    // 0x406ae0
    return result;
  lab_0x406c50:
    // 0x406c50
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x406b67;
  lab_0x40667e:
    // 0x40667e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x406a60_2;
    } else {
        goto lab_0x40668b;
    }
  lab_0x406c88:
    // 0x406c88
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x406a81;
  lab_0x406a81:
    if (v12 == 0) {
        // 0x406b90
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x406a99;
    } else {
        // 0x406a91
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x406a99;
    }
  lab_0x406b62:
    // 0x406b62
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x406b67;
  lab_0x406770:;
    int64_t v273 = (int64_t)v11; // 0x406770
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x406777
    int64_t v275 = v273 + 1; // 0x40677b
    *v11 = 37;
    int64_t v276 = v275; // 0x406784
    if (v274 % 2 != 0) {
        // 0x406786
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x406777
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x406797
    if ((v277 & 2) != 0) {
        // 0x406799
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4067a3
    if ((v277 & 4) != 0) {
        // 0x4067a5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4067af
    if ((v277 & 8) != 0) {
        // 0x4067b1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x4067bb
    if ((v277 & 16) != 0) {
        // 0x4067bd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x4067c7
    if ((v277 & 64) != 0) {
        // 0x4067c9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x4067d3
    if ((v277 & 32) != 0) {
        // 0x4067d5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x4067dd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x4067e1
    int64_t v293 = v290; // 0x4067e8
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x4067f7
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40681a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40681e
    int64_t v298 = v295; // 0x406825
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x406834
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40672a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x406860
    int64_t v272; // 0x406470
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x406869
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x406c68;
        } else {
            if (v301 == 12) {
                // 0x407428
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x406890;
            } else {
                // 0x406880
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x406c60
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x406c68;
                } else {
                    goto lab_0x406890;
                }
            }
        }
    } else {
        goto lab_0x406890;
    }
  lab_0x406b67:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x406b67
    int64_t v111 = v55 + 88; // 0x406b6b
    int64_t v112 = *(int64_t *)v111; // 0x406b6f
    int64_t v113 = v49 + 1; // 0x406b72
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x406579
        int64_t v115 = v114 + v105; // 0x40657f
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
            // 0x406ba8
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
                goto lab_0x406a60_2;
            } else {
                goto lab_0x4066d9;
            }
        } else {
            goto lab_0x40658b;
        }
    } else {
        goto lab_0x406b83;
    }
  lab_0x40668b:;
    int64_t v116 = v80 == v20; // 0x406692
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x4065c0;
    } else {
        goto lab_0x40669e;
    }
  lab_0x40669e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x406470
    if (v102 != 0) {
        goto lab_0x4065c0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x4066ba
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x406c75;
        } else {
            // 0x4066c8
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
            goto lab_0x4066d9;
        }
    }
  lab_0x4065c0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x4065d7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x406a60_2;
    } else {
        // 0x4065fd
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x406625
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
        goto lab_0x4066d9;
    }
  lab_0x40783e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x407e04
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x406a60_2;
        } else {
            // 0x407e15
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x407e2a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x407872;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x407861
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x406c75;
        } else {
            // 0x40786f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x407872;
        }
    }
  lab_0x407e4f:
    // 0x407e4f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x406a60_2;
    } else {
        goto lab_0x40783e;
    }
  lab_0x406bfd:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x406bfd
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x406c01
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x406c05
    int64_t v123 = 0; // 0x406c0c
    int64_t v124 = v122; // 0x406c0c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x406c12
        int64_t v126 = v120; // 0x406c1a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x407ba1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x407bb9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x407bcb
            int64_t v131 = v128; // 0x407bd4
            int64_t v132 = v130; // 0x407bd4
            int64_t v133; // 0x406470
            int64_t v134; // 0x407be6
            if (v130 < v129) {
                // 0x407bd6
                if (v121 == v128) {
                    // break -> 0x4069f0
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x4069db
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x4069f0
                        goto lab_0x4069f0;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x407b98
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x407ba1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x407bd6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x4069f0
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x4069db
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x4069f0
                            goto lab_0x4069f0;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x407b98
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x406c24
            if (*(int32_t *)v135 != 5) {
                // 0x40719c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x406c30
            int64_t v137 = v136; // 0x406c30
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x406c3d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x4069f0:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x4069f0
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x4069f4
    int64_t v142; // 0x406470
    int64_t v143; // 0x406470
    int64_t v144; // 0x406470
    if (v140 == v141) {
        goto lab_0x4070a0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x406a01
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x407c04
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x407c0d
            if (v141 == v146) {
                goto lab_0x4070be;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x407c33
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x407c3a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x407c53
                int64_t v152 = v151; // 0x407c5c
                int64_t v153 = v149; // 0x407c5c
                int64_t v154; // 0x406470
                int64_t v155; // 0x407c67
                if (v151 < v150) {
                    // 0x407c5e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x406a60_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x407c7a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x406a60_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x407c20
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x407c29
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x407c5e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x406a60_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x407c7a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x406a60_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x407c20
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x406a2c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x406a13
            if (*(int32_t *)v156 != 5) {
                // 0x40719c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x406a20
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x4070a0;
            } else {
                goto lab_0x406a2c;
            }
        }
    }
  lab_0x406890:
    // 0x406890
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40689d
    int64_t v160 = 0; // 0x4068a5
    if (v159 != -1) {
        // 0x4068ab
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40719c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x4068ce
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x4068dc
        if (*(int32_t *)v162 != 5) {
            // 0x40719c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x4068ef
        int64_t v164; // bp-8, 0x406470
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x406470
    uint64_t v165; // 0x406906
    if (v46 > 0xfffffffffffffffd) {
        // 0x407338
        v14 = v48;
        if (v47 == -1) {
            // 0x406964
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x406a60_2;
    } else {
        // 0x406910
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x406964
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x407040
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x406a60_2;
            } else {
                int64_t v167 = 2 * v47; // 0x407046
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x406932;
                } else {
                    goto lab_0x407052;
                }
            }
        } else {
            // 0x406922
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x406932;
            } else {
                goto lab_0x407052;
            }
        }
    }
  lab_0x406b30:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x407359
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x406a60_2;
        } else {
            // 0x407371
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x407382
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x406b62;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x406b51
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x406c75;
        } else {
            // 0x406b5f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x406b62;
        }
    }
  lab_0x407412:
    // 0x407412
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x406a60_2;
    } else {
        goto lab_0x406b30;
    }
  lab_0x4070a0:
    // 0x4070a0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x4070be;
  lab_0x406c68:
    // 0x406c68
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x406890;
  lab_0x406c75:
    // 0x406c75
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x406c88;
  lab_0x4070be:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x4070c4
    v14 = v48;
    int64_t v170; // 0x406470
    int64_t v171; // 0x406470
    int64_t * v172; // 0x406470
    int64_t v173; // 0x406470
    int64_t v174; // bp-760, 0x406470
    uint64_t size5; // 0x4070c8
    if (v169 == -1) {
        goto lab_0x406a60_2;
    } else {
        // 0x4070d9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x407139;
        } else {
            // 0x4070e5
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x406a60_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40710d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x406a60_2;
                } else {
                    goto lab_0x407139;
                }
            }
        }
    }
  lab_0x406a2c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x4070be;
    } else {
        // 0x406a35
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x4070be;
        } else {
            goto lab_0x406a60_2;
        }
    }
  lab_0x406932:
    // 0x406932
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x4072f9
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x407314
            if (v48 == v20 && v46 != 0) {
                // 0x407322
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x406964
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x406953
        v14 = v48;
        if (mem11 != NULL) {
            // 0x406964
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x406a60_2;
  lab_0x407052:
    // 0x407052
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x406a60_2;
    } else {
        goto lab_0x406932;
    }
  lab_0x407139:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x406470
    int64_t v181; // 0x406470
    int64_t v182; // 0x406470
    int64_t v183; // 0x406470
    int64_t v184; // 0x406470
    int64_t v185; // 0x406470
    int64_t v186; // 0x406470
    int64_t v187; // 0x406470
    int64_t v188; // 0x406470
    int64_t v189; // 0x406470
    int64_t v190; // 0x406470
    int64_t v191; // 0x406470
    int64_t v192; // 0x406470
    int64_t v193; // 0x406470
    float80_t v194; // 0x406470
    float80_t v195; // 0x406470
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x407cb2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x407cc0
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
            // 0x407ded
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
        goto lab_0x4075f9;
    } else {
        // 0x407141
        int64_t v198; // 0x406470
        float80_t v199; // 0x406470
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x407901
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40790e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40776a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40716f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x407178
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40719c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40719c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x407ce6
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x407ce6
                            v181 = v187 + 3;
                            goto lab_0x407e61;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x407e61;
                            } else {
                                goto lab_0x407d22;
                            }
                        }
                    } else {
                        // 0x4079f3
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x4075e7;
                        } else {
                            int64_t v202 = v187 + 2; // 0x407a01
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x407f4a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x407a48
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x407a5b
                                int64_t v207 = v176 & 0xffffffff; // 0x407a5e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x407a6c
                                int64_t v209 = v187 + 1; // 0x407a89
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x407a9e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x407aab
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x4075f9;
                        }
                    }
                } else {
                    // 0x407798
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x407798
                        v180 = v187 + 1;
                        goto lab_0x407d47;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x407d47;
                        } else {
                            goto lab_0x4077b8;
                        }
                    }
                }
            } else {
                // 0x4075d0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x4075e7;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x407b1c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x407b2d
                    char v215 = *v213; // 0x407b34
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x407b70
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x407b7d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x407b45
                        v182 = v218;
                        int64_t v219; // 0x407b37
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x4075f9;
                }
            }
        } else {
            float80_t v220; // 0x406470
            if (v220 != 0.0L) {
                // 0x40719c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x4077eb
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x4077fa
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
                // 0x407ad3
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
            goto lab_0x4075f9;
        }
    }
  lab_0x4075f9:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x4075fc
    int64_t v229 = v228; // 0x407602
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x407604
        int64_t v232 = v231 + v224; // 0x407607
        int64_t v233 = v232 - v225; // 0x40760e
        if ((v230 & 2) != 0) {
            // 0x407ab3
            v229 = v233;
            int64_t v234 = v224; // 0x407ab6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x407ac0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x407ac0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x407925
                int64_t v238 = v224; // 0x40792b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x407939
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x407930
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x407945
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x407958
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
                int64_t v243 = v224; // 0x407631
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x407651
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x407648
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40765a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x407668
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
        // 0x40719c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x407698
    int64_t dest_mem5 = v48; // 0x4076a5
    int64_t v250 = v248; // 0x4076a5
    int64_t v251 = v47; // 0x4076a5
    int64_t v252; // 0x406470
    if (v47 - v46 > v248) {
        goto lab_0x407720;
    } else {
        if (v249 < v46) {
            // 0x4078f2
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x406a60_2;
            } else {
                goto lab_0x407720;
            }
        } else {
            // 0x4076b0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x407720;
            } else {
                if (v47 != 0) {
                    // 0x407c88
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406a60_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x407c8e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x4076ce;
                        } else {
                            goto lab_0x407c9a;
                        }
                    }
                } else {
                    // 0x4076be
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x4076ce;
                    } else {
                        goto lab_0x407c9a;
                    }
                }
            }
        }
    }
  lab_0x407720:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x407731
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40774d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x406b67;
  lab_0x4075e7:
    // 0x4075e7
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x4075f9;
  lab_0x407d47:;
    char * v257 = nl_langinfo(0x10000); // 0x407d7a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x407d8b
    char v259 = *v257; // 0x407d92
    int64_t v260 = v176 & 0xffffffff; // 0x407d95
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x407da3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x407dd0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x407ddd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x4077b8;
  lab_0x4077b8:
    // 0x4077b8
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
    goto lab_0x4075f9;
  lab_0x4076ce:
    // 0x4076ce
    if (v48 == 0 || v48 == v20) {
        // 0x40796b
        int64_t size7; // 0x406470
        int64_t * mem12 = malloc((int32_t)size7); // 0x407982
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x406a60_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40798e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x4079b9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x407720;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x4076fd
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x406a60_2;
        } else {
            // 0x40770b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x407720;
        }
    }
  lab_0x407c9a:
    // 0x407c9a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x406a60_2;
    } else {
        goto lab_0x4076ce;
    }
  lab_0x407e61:;
    int64_t v265 = v187 + 4; // 0x407e61
    char v266 = *nl_langinfo(0x10000); // 0x407eac
    int64_t v267 = v176 & 0xffffffff; // 0x407eaf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x407eb6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x407edd
        int64_t v270 = v265 + 1; // 0x407ee5
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
    goto lab_0x407d22;
  lab_0x407d22:
    // 0x407d22
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x4075f9;
}
// Address range: 0x407f90 - 0x4081a9
int64_t function_407f90(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x407ff3
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x407fa8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x407fb9
    g49 = v5;
    int64_t v6; // 0x407f90
    int64_t v7; // 0x407f90
    int64_t v8; // 0x407f90
    int64_t v9; // 0x407f90
    int64_t v10; // 0x407f90
    int64_t v11; // 0x407f90
    int64_t v12; // 0x407f90
    uint32_t v13; // 0x4080b0
    int64_t * v14; // 0x4080e0
    int64_t v15; // 0x4080e8
    uint32_t v16; // 0x408130
    uint32_t v17; // 0x408100
    int64_t * v18; // 0x408090
    int64_t v19; // 0x408090
    int64_t * v20; // 0x4080a0
    int64_t v21; // 0x4080a0
    int64_t * v22; // 0x408078
    int64_t v23; // 0x408078
    int64_t * v24; // 0x408060
    int64_t v25; // 0x408060
    int64_t * v26; // 0x408180
    uint32_t v27; // 0x408040
    int64_t v28; // 0x408180
    int64_t * v29; // 0x408170
    int64_t v30; // 0x408170
    uint32_t v31; // 0x408020
    int64_t * v32; // 0x408198
    int64_t v33; // 0x408198
    int64_t v34; // 0x408143
    uint32_t v35; // 0x408000
    int64_t v36; // 0x408117
    uint32_t v37; // 0x407fc8
    int32_t * v38; // 0x4080b0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x408040
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x408047
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x408090
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x408053
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x407fe6
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x408020
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x408027
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x4080a0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x408033
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x407fe6
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x408000
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x408007
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x408078
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x408013
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x407fe6
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
            // 0x407fc8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x407fd3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x408060
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x407fdf
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x407fe6
            break;
        }
        case 11: {
            // 0x4080b0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x4080bf
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x408180
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x4080cc
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x407fe6
            break;
        }
        case 12: {
            // 0x4080e0
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x407fe6
            break;
        }
        case 15: {
            // 0x408130
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x408137
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x408170
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x408143
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x407fe6
            break;
        }
        case 16: {
            // 0x408100
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40810b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x408198
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x408117
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x407fe6
            break;
        }
        default: {
            // 0x407ff3
            return 0xffffffff;
        }
    }
    // 0x407fe6
    v3++;
    int64_t v39 = v4 + 32; // 0x407ff1
    while (v3 < v2) {
        // 0x407fb0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g49 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x408040
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x408047
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x408090
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x408053
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x407fe6
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x408020
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x408027
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x4080a0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x408033
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x407fe6
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x408000
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x408007
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x408078
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x408013
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x407fe6
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
                // 0x407fc8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x407fd3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x408060
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x407fdf
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x407fe6
                break;
            }
            case 11: {
                // 0x4080b0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x4080bf
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x408180
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x4080cc
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x407fe6
                break;
            }
            case 12: {
                // 0x4080e0
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x407fe6
                break;
            }
            case 15: {
                // 0x408130
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x408137
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x408170
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x408143
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x407fe6
                break;
            }
            case 16: {
                // 0x408100
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40810b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x408198
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x408117
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x407fe6
                break;
            }
            default: {
                // 0x407ff3
                return 0xffffffff;
            }
        }
        // 0x407fe6
        v3++;
        v39 = v4 + 32;
    }
    // 0x407ff3
    return 0;
}
// Address range: 0x4081b0 - 0x408eb9
int64_t function_4081b0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x4081b2
    int64_t v4 = v1 + 16; // 0x4081b6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x4081e9
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x4081fe
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40822b
    int32_t v8 = 0; // 0x408230
    int64_t v9 = 0; // 0x408230
    int64_t v10 = v3; // 0x408230
    int64_t v11 = a1; // 0x408230
    int64_t v12 = 0; // 0x408230
    char v13; // 0x4081b0
    int64_t v14; // 0x4081b0
    int64_t v15; // 0x4081b0
    int64_t v16; // 0x4081b0
    int64_t v17; // 0x4081b0
    int64_t v18; // 0x4081b0
    int64_t v19; // 0x4081b0
    int64_t v20; // 0x4081b0
    int64_t v21; // 0x4081b0
    int64_t v22; // 0x4081b0
    int64_t v23; // 0x4081b0
    int64_t v24; // 0x4081b0
    int64_t v25; // 0x4081b0
    int64_t v26; // 0x4081b0
    int64_t v27; // 0x4081b0
    int64_t v28; // 0x4081b0
    int64_t v29; // 0x4081b0
    int64_t v30; // 0x4081b0
    int32_t v31; // 0x4081b0
    int64_t v32; // 0x4081b0
    int64_t v33; // 0x408220
    int64_t v34; // 0x408270
    int64_t * v35; // 0x408293
    int64_t v36; // 0x4082f6
    if (v7 != 0) {
        // 0x408220
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x4081b0
        int64_t v38 = 7; // 0x4081b0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x4081b0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x408220:
            // 0x408220
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x408263
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x408278
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x4082b4
                int64_t v43 = v42; // 0x4082b4
                int64_t v44 = v43; // 0x4082bd
                int64_t v45 = v33; // 0x4082bd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x408650
                    char v47 = *(char *)v46; // 0x408654
                    int64_t v48 = v46; // 0x40865d
                    while (v47 < 58) {
                        // 0x408650
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40865f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x408cf5
                        char v52 = *(char *)v51; // 0x408cf5
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x408cf9
                        int64_t v54 = v33; // 0x408d0d
                        int64_t v55 = v51; // 0x408d0d
                        char v56 = v52; // 0x408d0d
                        int64_t v57 = v53; // 0x408d0d
                        bool v58 = v52 < 58; // 0x408d0d
                        bool v59 = v52 < 58; // 0x408d0d
                        char v60 = v52; // 0x408d0d
                        int64_t v61 = v51; // 0x408d0d
                        int64_t v62; // 0x408d22
                        int64_t v63; // 0x408cf5
                        char v64; // 0x408cf5
                        int64_t v65; // 0x408cf9
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x408978_9;
                            }
                            // 0x408cf3
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
                                // 0x408d0f
                                if (v64 >= 58) {
                                    goto lab_0x408978_9;
                                }
                                // 0x408cf3
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
                        int64_t v67 = v55; // 0x408cc8
                        while (v58) {
                            // 0x408cce
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
                                    goto lab_0x408978_9;
                                }
                                // 0x408cf3
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
                                    // 0x408d0f
                                    if (v64 >= 58) {
                                        goto lab_0x408978_9;
                                    }
                                    // 0x408cf3
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
                            // 0x408cc4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x408dcd
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x408978_9;
                        }
                        int64_t v68 = v54 + 2; // 0x408dde
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x4081b0
                v36 = v45;
                char v70; // 0x4081b0
                while (true) {
                    // 0x4082f6
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x408310
                                *v41 = *v41 | 2;
                                // break -> 0x4082f0
                                break;
                            }
                            case 43: {
                                // 0x408320
                                *v41 = *v41 | 4;
                                // break -> 0x4082f0
                                break;
                            }
                            case 32: {
                                // 0x408330
                                *v41 = *v41 | 8;
                                // break -> 0x4082f0
                                break;
                            }
                            case 35: {
                                // 0x408340
                                *v41 = *v41 | 16;
                                // break -> 0x4082f0
                                break;
                            }
                            case 48: {
                                // 0x408350
                                *v41 = *v41 | 32;
                                // break -> 0x4082f0
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x408358
                                    break;
                                }
                                // 0x4082e6
                                *v41 = *v41 | 64;
                                // break -> 0x4082f0
                                break;
                            }
                        }
                    } else {
                        // 0x4082ff
                        *v41 = *v41 | 1;
                    }
                    // 0x4082f0
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x4081b0
                int64_t * v72; // 0x408281
                int64_t * v73; // 0x40828a
                if (v70 == 42) {
                    // 0x4083cd
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x4083ed
                    int64_t v75 = v74; // 0x4083ed
                    int64_t v76 = v75 + 0xffffffd0; // 0x4083f1
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x4083f7
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x4087cd
                        char v80 = *(char *)v79; // 0x4087d1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x4087cd
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x4087dd
                        v26 = v79;
                        int64_t v81 = v75; // 0x4087e1
                        int64_t v82 = v36; // 0x4087e1
                        int64_t v83 = 0; // 0x4087e1
                        if (v80 != 36) {
                            goto lab_0x4083fd;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x408812
                            int64_t v89 = v85; // 0x408812
                            int64_t v90 = v87; // 0x408812
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x408817
                            int64_t v95 = v92 + 1; // 0x40881a
                            char v96 = *(char *)v95; // 0x40881a
                            int64_t v97 = v96; // 0x40881a
                            while (v94 < v91) {
                                // 0x408831
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x408978_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x4087eb
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x4087f4
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
                                    // 0x408831
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x408978_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x4087eb
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x408e6b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x408978_9;
                            }
                            // 0x408e79
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40840c;
                        }
                    } else {
                        goto lab_0x4083fd;
                    }
                } else {
                    // 0x40835d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x4081b0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x408a7b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x408a80
                        int64_t v102 = v71; // 0x408a89
                        char * v103 = v100; // 0x408a89
                        int64_t v104 = v36; // 0x408a89
                        int64_t v105 = v71; // 0x408a89
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x408a93
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x408a93
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x408a93
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x408aa2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x408ac5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x408368;
                }
            } else {
                goto lab_0x408228;
            }
        }
    }
  lab_0x408232:
    // 0x408232
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x408254
    return 0;
  lab_0x408978_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x408983
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x408995
    if (v3 != v115) {
        // 0x4089a0
        free((int64_t *)v115);
    }
    // 0x4089a5
    *__errno_location() = 22;
    // 0x408254
    return 0xffffffff;
  lab_0x408b50_5:;
    // 0x408b50
    int64_t v116; // 0x4081b0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x408b55
    int64_t v119; // 0x4081b0
    if (v4 == v117) {
        goto lab_0x408b69_3;
    } else {
        // 0x408b57
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x408b69_3;
    }
  lab_0x408b69_3:;
    int64_t v120 = *v5; // 0x408b69
    int32_t * v121; // 0x408b79
    if (v3 == v120) {
        // 0x408b79
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x408b74
    free((int64_t *)v120);
    // 0x408b79
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x408228:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40822b
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
        // break -> 0x408232
        goto lab_0x408232;
    }
    goto lab_0x408220;
  lab_0x4083fd:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x4083fd
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x4087a3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x408978_9;
        }
        // 0x4087bb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40840c;
  lab_0x408368:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40836b
    int64_t v147 = v339; // 0x40836b
    int64_t v145 = v338; // 0x40836b
    int64_t v143 = v337; // 0x40836b
    int64_t v186; // 0x4081b0
    int64_t v190; // 0x4081b0
    int64_t v189; // 0x4081b0
    int64_t v188; // 0x4081b0
    int64_t v187; // 0x4081b0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x408470;
    } else {
        goto lab_0x408371;
    }
  lab_0x40840c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40840c
    int64_t v132 = v128; // 0x408413
    int64_t v133 = v16; // 0x408413
    int64_t v134 = v131; // 0x408413
    int64_t v135; // 0x4081b0
    int64_t v136; // 0x4081b0
    int64_t v137; // 0x4081b0
    int64_t v138; // 0x4086bf
    if (v16 > v127) {
        goto lab_0x40841c;
    } else {
        uint64_t v139 = 2 * v16; // 0x4086b5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x408b50_5;
        }
        int64_t size = 32 * v138; // 0x4086de
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x408c3c
            if (mem == NULL) {
                goto lab_0x408b69_3;
            }
            // 0x408c5e
            v135 = (int64_t)mem;
            goto lab_0x408c69;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x4086ff
            int64_t v140 = *v6; // 0x408704
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x408b50_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x4086ff
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x408c69;
            } else {
                goto lab_0x40873d;
            }
        }
    }
  lab_0x408371:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x408378
    int64_t v151 = v146; // 0x408378
    int64_t v152 = v144; // 0x408378
    uint64_t v153; // 0x4081b0
    int64_t v154; // 0x4081b0
    int64_t v155; // 0x4083b7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x4083bb
        int64_t v158; // 0x4081b0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x408520
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x4083b3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x408528
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x4083b0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x4083b3
                    break;
                }
            }
        } else {
            // 0x4083c0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x4083b3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x408528
    int64_t v162 = v161 % 256; // 0x408534
    g50 = v162;
    int64_t v163 = 17; // 0x408537
    int64_t v164 = v154; // 0x408537
    int64_t v165 = v154; // 0x408537
    switch ((char)v161) {
        case 0: {
            goto lab_0x4085a1;
        }
        case 28: {
            goto lab_0x4088f2;
        }
        case 30: {
            // 0x40891e
            v163 = 14;
            v164 = 99;
            goto lab_0x408549;
        }
        case 32: {
            goto lab_0x4088f2;
        }
        case 33: {
            goto lab_0x4088f2;
        }
        case 34: {
            goto lab_0x4088f2;
        }
        case 46: {
            // 0x40890f
            v163 = 16;
            v164 = 115;
            goto lab_0x408549;
        }
        case 51: {
            goto lab_0x40892d;
        }
        case 60: {
            goto lab_0x4088f2;
        }
        case 62: {
            int32_t v166 = v153; // 0x408849
            int32_t v167 = v166 - 7; // 0x408849
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40884f
            v163 = v168;
            v164 = v154;
            goto lab_0x408549;
        }
        case 63: {
            goto lab_0x4088a0;
        }
        case 64: {
            goto lab_0x4088f2;
        }
        case 65: {
            goto lab_0x4088f2;
        }
        case 66: {
            goto lab_0x4088f2;
        }
        case 68: {
            goto lab_0x4088a0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40885f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x408865
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40886d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40887b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40888f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x408549;
        }
        case 74: {
            goto lab_0x40892d;
        }
        case 75: {
            goto lab_0x408549;
        }
        case 78: {
            int32_t v171 = v153; // 0x408540
            int32_t v172 = v171 - 7; // 0x408540
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x408546
            v163 = v173;
            v164 = v154;
            goto lab_0x408549;
        }
        case 80: {
            goto lab_0x40892d;
        }
        case 83: {
            goto lab_0x40892d;
        }
        default: {
            goto lab_0x408978_9;
        }
    }
  lab_0x40841c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x408433
        int64_t v178 = v176; // 0x4081b0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x408428
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x408428
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x408441
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40844d
    int32_t v182 = *v181; // 0x40844d
    if (v182 != 0) {
        // 0x408ace
        if (v182 != 5) {
            goto lab_0x408978_9;
        }
        unsigned char v183 = *(char *)v129; // 0x408ad7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x408368;
    } else {
        // 0x408457
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40845d
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
            goto lab_0x408371;
        } else {
            goto lab_0x408470;
        }
    }
  lab_0x408470:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x408470
    char v197 = *v196; // 0x408470
    int64_t * v198; // 0x408298
    *v198 = v192;
    int64_t v199; // 0x4081b0
    int64_t v200; // 0x4081b0
    int64_t v201; // 0x4081b0
    int64_t v202; // 0x4081b0
    int64_t v203; // 0x4081b0
    int64_t * v204; // 0x4082a1
    int64_t * v205; // 0x4082aa
    int64_t v206; // 0x408489
    if (v197 != 42) {
        char v207 = *v196; // 0x408670
        int64_t v208 = v193; // 0x408679
        char * v209; // 0x4081b0
        int64_t v210; // 0x4081b0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x408680
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x408684
            v208 = v212;
            while (v214 < 58) {
                // 0x408680
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40868e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x408670
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x4086a1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x408371;
    } else {
        // 0x40847f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40849f
        int64_t v219 = v218; // 0x40849f
        int64_t v220 = v219 + 0xffffffd0; // 0x4084a3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x4084a9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x408d54
            char v224 = *(char *)v223; // 0x408d58
            v221 = v223;
            while (v224 < 58) {
                // 0x408d54
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x408d64
            v201 = v223;
            int64_t v225 = v219; // 0x408d68
            int64_t v226 = v206; // 0x408d68
            int64_t v227 = 0; // 0x408d68
            if (v224 != 36) {
                goto lab_0x4084af;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x408d99
                int64_t v233 = v229; // 0x408d99
                int64_t v234 = v231; // 0x408d99
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x408d9e
                int64_t v239 = v236 + 1; // 0x408da5
                char v240 = *(char *)v239; // 0x408da9
                int64_t v241 = v240; // 0x408da9
                while (v238 < v235) {
                    // 0x408db7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x408978_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x408d72
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x408d7b
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
                        // 0x408db7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x408978_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x408d72
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x408e87
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x408978_9;
                }
                // 0x408e95
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x4084be;
            }
        } else {
            goto lab_0x4084af;
        }
    }
  lab_0x4085a1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x4085a6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x4085ae
    *a2 = v245;
    int64_t v246; // 0x4081b0
    int64_t v247; // 0x4081b0
    int64_t dest_mem; // 0x4081b0
    int64_t v248; // 0x4081b0
    int64_t v249; // 0x408ea3
    if (v246 > v245) {
        // 0x4085ba
        goto lab_0x408228;
    } else {
        if (v246 < 0) {
            // 0x408ea3
            v249 = *v6;
            v116 = v249;
            goto lab_0x408b50_5;
        }
        int64_t v250 = 2 * v246; // 0x4085d6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x408ea3
            v249 = *v6;
            v116 = v249;
            goto lab_0x408b50_5;
        }
        int64_t v251 = *v5; // 0x4085e7
        int64_t size2 = 176 * v246; // 0x4085f9
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x408749
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x408cac
                v118 = v252;
                if (v4 == v252) {
                    // 0x408b79
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x408b57
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x408b69_3;
            }
            goto lab_0x408764;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x40860b
            if (mem4 == NULL) {
                // 0x408ea3
                v249 = *v6;
                v116 = v249;
                goto lab_0x408b50_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x40860b
            int64_t v254 = *v5; // 0x40862d
            int64_t v255 = *a2; // 0x408631
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x408764;
            } else {
                goto lab_0x40863f;
            }
        }
    }
  lab_0x4088f2:
    // 0x4088f2
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x408907
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x408549;
  lab_0x40892d:;
    uint32_t v335 = (int32_t)v153; // 0x408935
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40893b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x408943
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x408951
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40895e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x408549;
  lab_0x4088a0:;
    uint32_t v336 = (int32_t)v153; // 0x4088a8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x4088ae
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4088b6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x4088c4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4088d1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x408549;
  lab_0x408549:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x4081b0
    int64_t v260; // 0x4081b0
    int64_t * v261; // 0x4082af
    if (v259 == -1) {
        // 0x408a54
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x408978_9;
        }
        // 0x408a6c
        v260 = v148;
    } else {
        // 0x408553
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x408558
    int64_t v264 = v258; // 0x40855f
    int64_t v265 = v162; // 0x40855f
    int64_t v266 = v263; // 0x40855f
    int64_t v267; // 0x4081b0
    int64_t v268; // 0x4081b0
    int64_t v269; // 0x4081b0
    int64_t v270; // 0x4081b0
    int64_t v271; // 0x4081b0
    if (v142 > v262) {
        goto lab_0x408565;
    } else {
        uint64_t v272 = 2 * v142; // 0x4089c8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x4089d2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x408b50_5;
        }
        int64_t size3 = 32 * v273; // 0x4089f1
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x408a04
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x408ae9
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x408b69_3;
            }
            goto lab_0x408b06;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x408a11
            if (mem6 == NULL) {
                // 0x408ea3
                v249 = *v6;
                v116 = v249;
                goto lab_0x408b50_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x408a11
            int64_t v276 = v274 & 0xffffffff; // 0x408a16
            int64_t v277 = *v6; // 0x408a41
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x408b06;
            } else {
                goto lab_0x408a4b;
            }
        }
    }
  lab_0x408565:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40857b
        int64_t v282 = v279; // 0x4081b0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x408570
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x408570
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x408589
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x408595
    int32_t v286 = *v285; // 0x408595
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x4089ba
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x408978_9;
        }
    } else {
        // 0x40859f
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x4085a1;
  lab_0x408c69:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x408c69
    int64_t * v290; // 0x4081b0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40873d;
  lab_0x40873d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40841c;
  lab_0x4084af:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x4084af
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x408d2a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x408978_9;
        }
        // 0x408d42
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x4084be;
  lab_0x4084be:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x4084be
    int64_t v300 = v296; // 0x4084c5
    int64_t v301 = v191; // 0x4084c5
    int64_t v302 = v299; // 0x4084c5
    int64_t v303; // 0x4081b0
    int64_t v304; // 0x4081b0
    int64_t v305; // 0x4081b0
    int64_t v306; // 0x408ba2
    if (v191 > v295) {
        goto lab_0x4084ce;
    } else {
        uint64_t v307 = 2 * v191; // 0x408b98
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x408b50_5;
        }
        int64_t size4 = 32 * v306; // 0x408bbd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x408dee
            if (mem7 == NULL) {
                goto lab_0x408b69_3;
            }
            // 0x408e10
            v304 = (int64_t)mem7;
            goto lab_0x408e1b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x408bde
            int64_t v308 = *v6; // 0x408be3
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x408b50_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x408bde
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x408e1b;
            } else {
                goto lab_0x408c1c;
            }
        }
    }
  lab_0x408764:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x4081b0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40863f;
  lab_0x40863f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x408228;
  lab_0x408b06:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x408b1c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x408a4b;
  lab_0x408a4b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x408565;
  lab_0x4084ce:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x4084e3
        int64_t v324 = v322; // 0x4081b0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x4084d8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x4084d8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x4084f1
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x4084fe
    int32_t v328 = *v327; // 0x4084fe
    if (v328 != 0) {
        // 0x408c25
        if (v328 != 5) {
            goto lab_0x408978_9;
        }
        unsigned char v329 = *(char *)v297; // 0x408c2e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x408508
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x408511
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x408371;
  lab_0x408e1b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x408e1b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x408c1c;
  lab_0x408c1c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x4084ce;
}
// Address range: 0x408ec0 - 0x408f1d
int64_t function_408ec0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408ec0
    return function_401330();
}
// Address range: 0x408f20 - 0x408f21
int64_t function_408f20(void) {
    // 0x408f20
    int64_t result; // 0x408f20
    return result;
}
// Address range: 0x408f30 - 0x408f48
int64_t function_408f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408f30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x408f48 - 0x408f68
int64_t function_408f48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x408f52
    while (*(int64_t *)v1 != -1) {
        // 0x408f53
        v1 -= 8;
    }
    // 0x408f64
    return result;
}
