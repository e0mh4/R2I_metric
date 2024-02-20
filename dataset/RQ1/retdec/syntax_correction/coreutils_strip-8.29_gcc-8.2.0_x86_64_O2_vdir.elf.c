#include "decompile_retdec.h"
// Address range: 0x402e50 - 0x402e55
int64_t function_402e50(void) {
    // 0x402e50
    abort();
    // UNREACHABLE
}
// Address range: 0x402e55 - 0x402e5a
int64_t function_402e55(void) {
    // 0x402e55
    abort();
    // UNREACHABLE
}
// Address range: 0x402e5a - 0x402e5f
int64_t function_402e5a(void) {
    // 0x402e5a
    abort();
    // UNREACHABLE
}
// Address range: 0x402e5f - 0x402e64
int64_t function_402e5f(void) {
    // 0x402e5f
    abort();
    // UNREACHABLE
}
// Address range: 0x402e64 - 0x402e69
int64_t function_402e64(void) {
    // 0x402e64
    abort();
    // UNREACHABLE
}
// Address range: 0x402e69 - 0x402e6e
int64_t function_402e69(void) {
    // 0x402e69
    abort();
    // UNREACHABLE
}
// Address range: 0x402e6e - 0x402e73
int64_t function_402e6e(void) {
    // 0x402e6e
    abort();
    // UNREACHABLE
}
// Address range: 0x402e73 - 0x402e78
int64_t function_402e73(void) {
    // 0x402e73
    abort();
    // UNREACHABLE
}
// Address range: 0x402e78 - 0x402e7d
int64_t function_402e78(void) {
    // 0x402e78
    abort();
    // UNREACHABLE
}
// Address range: 0x402e7d - 0x402e82
int64_t function_402e7d(void) {
    // 0x402e7d
    abort();
    // UNREACHABLE
}
// Address range: 0x402e82 - 0x402e87
int64_t function_402e82(void) {
    // 0x402e82
    return abort();
}
// Address range: 0x402e87 - 0x402e8c
int64_t function_402e87(void) {
    // 0x402e87
    abort();
    // UNREACHABLE
}
// Address range: 0x402e90 - 0x404719
int64_t function_402e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x402e90
    function_410670(a2);
    setlocale(LC_ALL, (char *)&g24);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g76 = 2;
    function_418780(0x40b710, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g124 = 1;
    g170 = -0x8000000000000000;
    g108 = 0;
    g172 = 0;
    g171 = -1;
    g128 = 0;
    int64_t v1; // 0x402e90
    if (g73 == 2) {
        // 0x403cbe
        g154 = 2;
        function_411c30(0, 7);
        v1 = 7;
    } else {
        if (g73 != 3) {
            if (g73 != 1) {
                // 0x403101
                abort();
                // UNREACHABLE
            }
            // 0x403c9d
            if (isatty(1) != 0) {
                // 0x40431a
                g154 = 2;
                function_411c30(0, 3);
                g128 = 1;
                v1 = 3;
            } else {
                // 0x403caf
                g154 = 1;
                v1 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale";
            }
        } else {
            // 0x402f3e
            g154 = 0;
            function_411c30(0, 7);
            v1 = 7;
        }
    }
    // 0x402f54
    g151 = 0;
    g153 = 0;
    g152 = 0;
    g149 = 0;
    g148 = 0;
    g143 = 0;
    g136 = 0;
    g135 = 1;
    g134 = 0;
    g133 = 0;
    g131 = 0;
    g130 = 0;
    g129 = 0;
    g169 = 0;
    char * env_val = getenv("QUOTING_STYLE"); // 0x402fd2
    int64_t v2 = a3; // 0x402fdd
    int64_t v3 = v1; // 0x402fdd
    if (env_val != NULL) {
        int64_t v4 = (int64_t)env_val; // 0x402fd2
        int64_t v5 = function_40acf0(v4, g40, (int64_t *)&g39, 4); // 0x402ff1
        if ((int32_t)v5 < 0) {
            // 0x40385c
            function_412290(v4);
            char * format = dcgettext(NULL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5); // 0x403873
            error(0, (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s" ^ (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s", format);
            v2 = (int64_t)format;
            v3 = (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s" ^ (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s";
        } else {
            uint32_t v6 = *(int32_t *)((0x100000000 * v5 >> 30) + (int64_t)&g39); // 0x403002
            int64_t v7 = v6; // 0x403002
            function_411c30(0, v7);
            v2 = (int64_t)&g39;
            v3 = v7;
        }
    }
    // 0x40300e
    g123 = 80;
    char * env_val2 = getenv("COLUMNS"); // 0x40301e
    if (env_val2 != NULL) {
        // 0x40302b
        if (*env_val2 != 0) {
            int64_t v8 = (int64_t)env_val2; // 0x40301e
            if ((char)function_404b40(v8, v3, v2) == 0) {
                // 0x40389e
                function_412290(v8);
                error(0, (int32_t)"ignoring invalid width in environment variable COLUMNS: %s" ^ (int32_t)"ignoring invalid width in environment variable COLUMNS: %s", dcgettext(NULL, "ignoring invalid width in environment variable COLUMNS: %s", 5));
            }
        }
    }
    // 0x403034
    int16_t v9; // 0x402e90
    if (v9 != 0 == (ioctl(1, 0x5413) != -1)) {
        // 0x403850
        g123 = v9;
    }
    char * env_val3 = getenv("TABSIZE"); // 0x403062
    g125 = 8;
    int64_t v10; // 0x402e90
    if (env_val3 != NULL) {
        int64_t v11 = (int64_t)env_val3; // 0x403062
        int64_t v12; // bp-72, 0x402e90
        if ((int32_t)function_412df0(v11, 0, 0, &v12, 0, v10) != 0) {
            // 0x403d34
            function_412290(v11);
            error(0, (int32_t)"ignoring invalid tab size in environment variable TABSIZE: %s" ^ (int32_t)"ignoring invalid tab size in environment variable TABSIZE: %s", dcgettext(NULL, "ignoring invalid tab size in environment variable TABSIZE: %s", 5));
        } else {
            // 0x403096
            g125 = v12;
        }
    }
    uint64_t v13 = a1 & 0xffffffff; // 0x402e99
    int64_t v14; // bp-104, 0x402e90
    int64_t v15 = &v14; // 0x402e9f
    int64_t v16 = v15 + 32; // 0x4030b8
    int32_t * v17 = (int32_t *)v16; // 0x4030cc
    *v17 = -1;
    int64_t v18 = function_416e00(v13, a2, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &g14, v16, v10); // 0x4030d4
    int64_t v19 = a2; // 0x4030dc
    int64_t v20 = 0; // 0x4030dc
    int64_t v21 = 0; // 0x4030dc
    int64_t v22 = 0; // 0x4030dc
    int64_t v23; // 0x402e90
    int64_t v24; // 0x402e90
    int64_t v25; // 0x402e90
    int64_t v26; // 0x402e90
    int64_t v27; // 0x402e90
    int64_t v28; // 0x402e90
    int64_t v29; // 0x402e90
    int64_t v30; // 0x402e90
    int64_t v31; // 0x402e90
    int64_t v32; // 0x402e90
    int64_t v33; // 0x402e90
    int64_t v34; // 0x402e90
    int64_t v35; // 0x402e90
    int64_t v36; // 0x402e90
    int64_t v37; // 0x402e90
    int64_t v38; // 0x402e90
    int64_t v39; // 0x402e90
    int64_t v40; // 0x402e90
    int32_t v41; // 0x4046d0
    if ((int32_t)v18 != -1) {
        int64_t * v42 = (int64_t *)(v15 - 8);
        int64_t * v43 = (int64_t *)(v15 - 16);
        int64_t * v44 = (int64_t *)(v15 + 8);
        v23 = v18;
        v30 = 0;
        v27 = 0;
        v24 = 0;
        v37 = a2;
        while (true) {
          lab_0x4030de:
            // 0x4030de
            v38 = v37;
            v34 = v33;
            v25 = v24;
            v28 = v27;
            v31 = v30;
            int64_t v45 = v23 + 131; // 0x4030de
            g210 = v45 & 0xffffffff;
            v39 = v38;
            v35 = v34;
            v26 = v25;
            v29 = v28;
            v32 = 1;
            v40 = v38;
            switch ((int32_t)v45) {
                case 0: {
                    int64_t v46 = 1; // 0x403810
                    int64_t v47 = (int64_t)"ls"; // 0x403810
                    if (g73 != 1) {
                        // 0x403816
                        v47 = g73 != 2 ? (int64_t)"vdir" : (int64_t)"dir";
                        v46 = (int64_t)"vdir";
                    }
                    // 0x403827
                    *v42 = v46;
                    *v43 = 0;
                    function_412840((int64_t)g86, (char *)v47, "GNU coreutils", (int64_t)g74, "Richard M. Stallman", "David MacKenzie");
                    exit(0);
                    // UNREACHABLE
                }
                case 1: {
                    // 0x40450a
                    function_40a530(0);
                    // UNREACHABLE
                }
                case 180: {
                    // 0x4037e4
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    if (g154 != 0) {
                        // 0x4037f1
                        g154 = 1;
                        v39 = v38;
                        v35 = v34;
                        v26 = v25;
                        v29 = v28;
                        v32 = v31;
                    }
                    goto lab_0x4030b8;
                }
                case 196: {
                    // 0x4037c8
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    if (g131 == 0) {
                        // 0x4037d5
                        g131 = 1;
                        v39 = v38;
                        v35 = v34;
                        v26 = v25;
                        v29 = v28;
                        v32 = v31;
                    }
                    goto lab_0x4030b8;
                }
                case 197: {
                    int64_t v48 = function_412980(16); // 0x403782
                    *(int64_t *)v48 = (int64_t)"*~";
                    *(int64_t *)(v48 + 8) = g130;
                    g130 = v48;
                    int64_t v49 = function_412980(16); // 0x4037a5
                    *(int64_t *)v49 = (int64_t)".*~";
                    *(int64_t *)(v49 + 8) = g130;
                    g130 = v49;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 198: {
                    // 0x40376e
                    g154 = 2;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 199: {
                    // 0x403762
                    g144 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 201: {
                    // 0x403753
                    g143 = 3;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 202: {
                    // 0x403747
                    g70 = 0;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 203: {
                    // 0x403738
                    g135 = 3;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 204: {
                    // 0x403703
                    *v44 = (int64_t)g202;
                    int64_t v50 = function_412980(16); // 0x403714
                    *(int64_t *)v50 = *v44;
                    *(int64_t *)(v50 + 8) = g130;
                    g130 = v50;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 207: {
                    // 0x4036f4
                    g135 = 5;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 209: {
                    // 0x4036e6
                    function_411c30(0, 0);
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 212: {
                    // 0x4036d5
                    function_411c30(0, 5);
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 213: {
                    // 0x4036c9
                    g134 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 214: {
                    // 0x4036b4
                    g152 = 2;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = 1;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 215: {
                    int64_t v51 = (int64_t)dcgettext(NULL, "invalid tab size", 5); // 0x403681
                    *v42 = 5;
                    *v43 = 2;
                    int64_t v52 = function_412c10((int64_t)g202, (int32_t)"invalid tab size" ^ (int32_t)"invalid tab size", 0, -1, (int64_t *)&g24, v51, (int64_t)&g209); // 0x4036a1
                    g125 = v52;
                    v39 = v38;
                    v35 = v51;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 216: {
                    // 0x403660
                    g152 = -1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = 1;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 219: {
                    // 0x40364b
                    g152 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = 1;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 221: {
                    // 0x40363f
                    g169 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 228: {
                    // 0x403630
                    g131 = 2;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 229: {
                    // 0x40361f
                    function_411c30(0, 7);
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 230: {
                    // 0x403610
                    g153 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 231: {
                    // 0x403604
                    g133 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 233: {
                    // 0x4035c3
                    g131 = 2;
                    g152 = -1;
                    if (g154 == 0) {
                        // 0x404266
                        g154 = (int32_t)(isatty(1) == 0) + 2;
                    }
                    // 0x4035e4
                    g148 = 0;
                    g142 = 0;
                    *(char *)&g141 = 0;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = 1;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 234: {
                    // 0x4035ad
                    g154 = 0;
                    g71 = 0;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 235: {
                    // 0x40357e
                    *(int32_t *)&g147 = 176;
                    g145 = 176;
                    g146 = 1;
                    g69 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 236: {
                    // 0x403572
                    g136 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 238: {
                    goto lab_0x4030b8;
                }
                case 239: {
                    goto lab_0x40310d;
                }
                case 240: {
                    // 0x403558
                    g154 = 4;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 241: {
                    // 0x403106
                    g149 = 1;
                    goto lab_0x40310d;
                }
                case 242: {
                    // 0x403542
                    g154 = 0;
                    g70 = 0;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 243: {
                    // 0x403533
                    g143 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 244: {
                    // 0x403527
                    g128 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 245: {
                    // 0x40351b
                    g151 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 246: {
                    // 0x40350f
                    g148 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 247: {
                    // 0x4034df
                    g152 = 4;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = 1;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 248: {
                    // 0x4034d0
                    g153 = 2;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 249: {
                    goto lab_0x4034bb;
                }
                case 250: {
                    int64_t v53 = function_404b40((int64_t)g202, v38, (int64_t)"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1"); // 0x403475
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    if ((char)v53 != 0) {
                        goto lab_0x4030b8;
                    } else {
                        int64_t v54 = function_412290((int64_t)g202); // 0x403489
                        error(2, (int32_t)"invalid line width" ^ (int32_t)"invalid line width", "%s: %s", dcgettext(NULL, "invalid line width", 5), (char *)v54);
                        v40 = v54;
                        goto lab_0x4034bb;
                    }
                }
                case 251: {
                    // 0x403500
                    g154 = 3;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 259: {
                    // 0x4034f4
                    g150 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 260: {
                    int64_t v55 = function_40dfa0((int64_t)g202, &g147, &g146); // 0x403442
                    int64_t v56 = v55; // 0x403449
                    if ((int32_t)v55 != 0) {
                        // 0x4046c9
                        v41 = *v17;
                        function_413220(v56 & 0xffffffff, v41, 0, &g14, (int64_t)g202);
                        // UNREACHABLE
                    }
                    // 0x40344f
                    g145 = *(int32_t *)&g147;
                    g69 = g146;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 261: {
                    // 0x4033db
                    v36 = v34;
                    if (g202 == NULL) {
                        goto lab_0x403c12;
                    } else {
                        int64_t v57 = function_40afb0("--color", (int64_t)g202, g7, (int64_t *)&g6, 4, g75); // 0x403407
                        int32_t v58 = *(int32_t *)(4 * v57 + (int64_t)&g6); // 0x40340c
                        v36 = g75;
                        switch (v58) {
                            case 1: {
                                goto lab_0x403c12;
                            }
                            case 2: {
                                // 0x403c00
                                v36 = g75;
                                if (isatty(1) == 0) {
                                    goto lab_0x403425;
                                } else {
                                    goto lab_0x403c12;
                                }
                            }
                            default: {
                                goto lab_0x403425;
                            }
                        }
                    }
                }
                case 262: {
                    // 0x4033cc
                    g135 = 4;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 263: {
                    // 0x4033bd
                    g143 = 2;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 264: {
                    int64_t v59 = function_40afb0("--format", (int64_t)g202, g13, (int64_t *)&g12, 4, g75); // 0x4033a6
                    g154 = *(int32_t *)(4 * v59 + (int64_t)&g12);
                    v39 = v38;
                    v35 = g75;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 265: {
                    // 0x40336e
                    g154 = 0;
                    v39 = v38;
                    v35 = v34;
                    v26 = (int64_t)"full-iso";
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 266: {
                    // 0x403362
                    *(char *)&g132 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 267: {
                    int64_t v60 = function_412980(16); // 0x40333c
                    *(int64_t *)v60 = (int64_t)g202;
                    int64_t v61 = g129; // 0x40334b
                    g129 = v60;
                    *(int64_t *)(v60 + 8) = v61;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 268: {
                    char v62 = 1; // 0x4032de
                    int64_t v63 = v34; // 0x4032de
                    if (g202 != NULL) {
                        int64_t v64 = function_40afb0("--hyperlink", (int64_t)g202, g7, (int64_t *)&g6, 4, g75); // 0x403300
                        int32_t v65 = *(int32_t *)(4 * v64 + (int64_t)&g6); // 0x403305
                        v62 = 1;
                        v63 = g75;
                        if (v65 != 1) {
                            // 0x403315
                            v62 = 0;
                            v63 = g75;
                            if (v65 == 2) {
                                // 0x403320
                                v62 = isatty(1) != 0;
                                v63 = g75;
                            }
                        }
                    }
                    // 0x403c2e
                    *(char *)&g141 = v62;
                    v39 = v38;
                    v35 = v63;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 269: {
                    int64_t v66 = function_40afb0("--indicator-style", (int64_t)g202, g17, (int64_t *)&g16, 4, g75); // 0x4032bd
                    g143 = *(int32_t *)(4 * v66 + (int64_t)&g16);
                    v39 = v38;
                    v35 = g75;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 270: {
                    int64_t v67 = function_40afb0("--quoting-style", (int64_t)g202, g40, (int64_t *)&g39, 4, g75); // 0x403282
                    uint32_t v68 = *(int32_t *)(4 * v67 + (int64_t)&g39); // 0x403289
                    function_411c30((int32_t)"--quoting-style" ^ (int32_t)"--quoting-style", (int64_t)v68);
                    v39 = v38;
                    v35 = g75;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 271: {
                    // 0x403253
                    g128 = 0;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 272: {
                    // 0x403224
                    *(int32_t *)&g147 = 144;
                    g145 = 144;
                    g146 = 1;
                    g69 = 1;
                    v39 = v38;
                    v35 = v34;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 273: {
                    int64_t v69 = function_40afb0("--sort", (int64_t)g202, g11, (int64_t *)&g10, 4, g75); // 0x40320d
                    g152 = *(int32_t *)(4 * v69 + (int64_t)&g10);
                    v39 = v38;
                    v35 = g75;
                    v26 = v25;
                    v29 = 1;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 274: {
                    int64_t v70 = function_40afb0("--time", (int64_t)g202, g9, (int64_t *)&g8, 4, g75); // 0x4031cd
                    g153 = *(int32_t *)(4 * v70 + (int64_t)&g8);
                    v39 = v38;
                    v35 = g75;
                    v26 = v25;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                case 275: {
                    // 0x40319e
                    v39 = v38;
                    v35 = v34;
                    v26 = (int64_t)g202;
                    v29 = v28;
                    v32 = v31;
                    goto lab_0x4030b8;
                }
                default: {
                    goto lab_0x4045a1;
                }
            }
        }
    }
  lab_0x403119:
    // 0x403119
    if (g146 == 0) {
        char * env_val4 = getenv("LS_BLOCK_SIZE"); // 0x403d6b
        function_40dfa0((int64_t)env_val4, &g147, &g146);
        if (env_val4 == NULL) {
            // 0x40461b
            if (getenv("BLOCK_SIZE") != NULL) {
                goto lab_0x403d8e;
            } else {
                goto lab_0x403da8;
            }
        } else {
            goto lab_0x403d8e;
        }
    } else {
        goto lab_0x403127;
    }
  lab_0x4030b8:
    // 0x4030b8
    *v17 = -1;
    int64_t v71 = function_416e00(v13, v39, "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1", &g14, v16, v35); // 0x4030d4
    v23 = v71;
    v30 = v32;
    v27 = v29;
    v24 = v26;
    v33 = v35;
    v37 = v39;
    v19 = v39;
    v20 = v26;
    v21 = v29;
    v22 = v32;
    if ((int32_t)v71 == -1) {
        goto lab_0x403119;
    }
    goto lab_0x4030de;
  lab_0x40310d:
    // 0x40310d
    g154 = 0;
    v39 = v38;
    v35 = v34;
    v26 = v25;
    v29 = v28;
    v32 = v31;
    goto lab_0x4030b8;
  lab_0x4034bb:
    // 0x4034bb
    g152 = 3;
    v39 = v40;
    v35 = v34;
    v26 = v25;
    v29 = 1;
    v32 = v31;
    goto lab_0x4030b8;
  lab_0x403c12:
    // 0x403c12
    g142 = 1;
    g125 = 0;
    v39 = v38;
    v35 = v36;
    v26 = v25;
    v29 = v28;
    v32 = v31;
    goto lab_0x4030b8;
  lab_0x403425:
    // 0x403425
    g142 = 0;
    v39 = v38;
    v35 = g75;
    v26 = v25;
    v29 = v28;
    v32 = v31;
    goto lab_0x4030b8;
  lab_0x404283:;
    // 0x404283
    int64_t v72; // 0x402e90
    int64_t v73 = v72;
    int64_t v74 = v73; // 0x404288
    char * v75; // 0x402e90
    int64_t v76; // 0x402e90
    int64_t v77; // 0x402e90
    int64_t v78; // 0x402e90
    if (*v75 == 43) {
        int64_t str = v73 + 1; // 0x4045ab
        char * found_char_pos = strchr((char *)str, 10); // 0x4045b7
        int64_t str2 = str; // 0x4045c2
        if (found_char_pos != NULL) {
            // 0x4045c8
            str2 = (int64_t)found_char_pos + 1;
            if (strchr((char *)str2, 10) != NULL) {
                // 0x404680
                function_412290(str);
                error(2, (int32_t)"invalid time style format %s" ^ (int32_t)"invalid time style format %s", dcgettext(NULL, "invalid time style format %s", 5));
              lab_0x4046b0:
                // 0x4046b0
                __assert_fail("found", "src/ls.c", 1592, "main");
                int64_t v79 = &g209;
                v41 = *v17;
                function_413220(v79 & 0xffffffff, v41, 0, &g14, (int64_t)g202);
                // UNREACHABLE
            }
            // 0x4045e2
            *found_char_pos = 0;
        }
        // 0x4045e7
        *(int64_t *)&g53 = str;
        *(int64_t *)&g54 = str2;
        v77 = 6;
        v78 = 10;
        v76 = str2;
        goto lab_0x404310;
    } else {
        goto lab_0x40428e;
    }
  lab_0x40402e_5:;
    char * format2 = dcgettext(NULL, "unparsable value for LS_COLORS environment variable", 5); // 0x40403a
    error(0, (int32_t)"unparsable value for LS_COLORS environment variable" ^ (int32_t)"unparsable value for LS_COLORS environment variable", format2);
    free((int64_t *)g138);
    int64_t v80 = g139; // 0x404071
    if (g139 != 0) {
        goto lab_0x404062;
    } else {
        goto lab_0x404073;
    }
  lab_0x403fff_2:;
    // 0x403fff
    int64_t v81; // 0x403f24
    function_412290(v81);
    error(0, (int32_t)"unrecognized prefix: %s" ^ (int32_t)"unrecognized prefix: %s", dcgettext(NULL, "unrecognized prefix: %s", 5));
    goto lab_0x40402e_5;
  lab_0x403c40:
    // 0x403c40
    if (g142 == 0) {
        goto lab_0x403c56;
    } else {
        // 0x403c49
        if (g140 != 0) {
            // 0x403dcb
            if (g55 == 2 == *(int16_t *)&g56 == 0x5b1b) {
                // 0x404420
                if (g57 != 1) {
                    // 0x403de7
                    function_405d40();
                    goto lab_0x403dec;
                } else {
                    // 0x40442e
                    if (*(char *)&g58 != 109) {
                        // 0x403de7
                        function_405d40();
                        goto lab_0x403dec;
                    } else {
                        goto lab_0x403dec;
                    }
                }
            } else {
                // 0x403de7
                function_405d40();
                goto lab_0x403dec;
            }
        } else {
            goto lab_0x403c56;
        }
    }
  lab_0x4041c0:;
    // 0x4041c0
    int64_t v82; // 0x402e90
    char * v83 = (char *)(v82 + (int64_t)&g98); // 0x4041c0
    char v84; // 0x402e90
    *v83 = *v83 | v84;
    int64_t v85 = v82 + 1; // 0x4041d0
    if (v82 == 255) {
        // break -> 0x4041f5
        goto lab_0x4041f5;
    }
    goto lab_0x4041d2;
  lab_0x40407a:;
    // 0x40407a
    int64_t v87; // 0x402e90
    int64_t v88 = v87; // 0x404082
    int64_t v89; // 0x402e90
    int64_t v90 = v89; // 0x404082
    if (g65 == 6) {
        int32_t strncmp_rc = strncmp(g66, "target", 6); // 0x404454
        v88 = 6;
        v90 = (int64_t)"target";
        if (strncmp_rc == 0) {
            // 0x404461
            g174 = 1;
            v88 = 6;
            v90 = (int64_t)"target";
        }
    }
    goto lab_0x404088_2;
  lab_0x404088:
    // 0x404088
    g142 = 0;
    int64_t v142; // 0x402e90
    int64_t v93 = v142; // 0x402e90
    int64_t v143; // 0x402e90
    int64_t v94 = v143; // 0x402e90
    goto lab_0x4039f0;
  lab_0x403127:;
    uint64_t v176 = (int64_t)g123;
    g106 = v176 / 3 + (int64_t)(v176 % 3 != 0);
    int64_t v177 = function_411c20(0); // 0x40314d
    char v178 = 0; // 0x402e90
    switch (g154) {
        default: {
            // 0x40316d
            v178 = 0;
            if (g154 != 0 != ((int64_t)g123 == 0)) {
                // 0x403181
                v178 = (int32_t)v177 == 6 | (v177 & 0xfffffffd) == 1;
            }
        }
        case 4: {
        }
        case 1: {
            // 0x4038d2
            g177 = v178;
            int64_t v179 = function_411be0(0); // 0x4038e1
            g127 = v179;
            if ((int32_t)v177 == 7) {
                // 0x40433c
                function_411c40(v179, 32, 1);
            }
            // break -> 0x4038f7
            break;
        }
    }
    // 0x4038f7
    if (g143 >= 2) {
        int64_t v180 = (int64_t)(g143 - 2) + (int64_t)"*=>@|"; // 0x403905
        char v181 = *(char *)v180; // 0x403905
        char v182 = v181; // 0x403916
        int64_t v183 = v180; // 0x403916
        if (v181 != 0) {
            int64_t v184 = v183 + 1; // 0x40392c
            function_411c40((int64_t)g127, v182, 1);
            char v185 = *(char *)v184; // 0x403935
            v182 = v185;
            v183 = v184;
            while (v185 != 0) {
                // 0x403920
                v184 = v183 + 1;
                function_411c40((int64_t)g127, v182, 1);
                v185 = *(char *)v184;
                v182 = v185;
                v183 = v184;
            }
        }
    }
    int64_t v186 = function_411be0(0); // 0x403941
    g126 = v186;
    function_411c40(v186, 58, 1);
    if (g144 == 0) {
        goto lab_0x40397c;
    } else {
        // 0x403968
        if (g154 == 0 == *(char *)&g141 == 0) {
            goto lab_0x40399d;
        } else {
            // 0x403975
            g144 = 0;
            goto lab_0x40397c;
        }
    }
  lab_0x403d8e:
    // 0x403d8e
    g145 = *(int32_t *)&g147;
    g69 = g146;
    goto lab_0x403da8;
  lab_0x40397c:;
    int64_t v187 = g154; // 0x403982
    int64_t v115; // 0x402e90
    int64_t v116; // 0x402e90
    if (v21 == 0 == g153 < 3) {
        if (g154 == 0) {
            goto lab_0x40399d;
        } else {
            // 0x403ec0
            g152 = 4;
            v115 = v187;
            v116 = 58;
            goto lab_0x4039dc;
        }
    } else {
        // 0x403999
        v115 = v187;
        v116 = 58;
        if (g154 != 0) {
            goto lab_0x4039dc;
        } else {
            goto lab_0x40399d;
        }
    }
  lab_0x403da8:
    if (v22 != 0) {
        // 0x403db1
        *(int32_t *)&g147 = 0;
        g146 = 1024;
    }
    goto lab_0x403127;
  lab_0x40399d:;
    int64_t v139 = v20; // 0x4039a0
    if (v20 != 0) {
        goto lab_0x4039b4;
    } else {
        char * env_val8 = getenv("TIME_STYLE"); // 0x4045ff
        v139 = (int64_t)env_val8;
        v74 = (int64_t)"locale";
        if (env_val8 != NULL) {
            goto lab_0x4039b4;
        } else {
            goto lab_0x40428e;
        }
    }
  lab_0x4039dc:;
    int64_t v117 = v116;
    int64_t v118 = v115;
    v93 = v118;
    v94 = v117;
    if (g142 != 0) {
        char * env_val5 = getenv("LS_COLORS"); // 0x403f05
        int64_t v119 = (int64_t)env_val5; // 0x403f05
        int64_t v120 = v15 + 24; // 0x403f0a
        int64_t * v121 = (int64_t *)v120; // 0x403f0a
        *v121 = v119;
        if (env_val5 == NULL) {
            goto lab_0x404353;
        } else {
            // 0x403f18
            if (*env_val5 == 0) {
                goto lab_0x404353;
            } else {
                // 0x403f21
                v81 = v15 + 21;
                *(int16_t *)v81 = 0x3f3f;
                *(char *)(v15 + 23) = 0;
                int64_t v122 = function_412bb0(v119); // 0x403f30
                g138 = v122;
                int64_t * v123 = (int64_t *)v16; // 0x403f3c
                *v123 = v122;
                char * str3 = (char *)v81;
                int64_t v124 = v117; // 0x403f3c
                while (true) {
                  lab_0x403f41_3:;
                    int64_t v125 = *v121; // 0x402e90
                    int64_t v126; // 0x403f41
                    char * v127; // 0x402e90
                    while (true) {
                      lab_0x403f41:
                        // 0x403f41
                        v126 = v125;
                        v127 = (char *)v126;
                        v87 = 0;
                        v89 = v124;
                        switch (*v127) {
                            case 42: {
                                int64_t v128 = function_412980(40); // 0x404480
                                int64_t v129 = g139; // 0x404497
                                *v121 = *v121 + 1;
                                g139 = v128;
                                *(int64_t *)(v128 + 32) = v129;
                                *(int64_t *)(v128 + 8) = *v123;
                                if ((char)function_404860(v16, v120, 1, v128) == 0) {
                                    goto lab_0x40402e_5;
                                }
                                int64_t v130 = *v121; // 0x4044c8
                                *v121 = v130 + 1;
                                if (*(char *)v130 != 61) {
                                    goto lab_0x40402e_5;
                                }
                                // 0x4044df
                                *(int64_t *)(v128 + 24) = *v123;
                                if ((char)function_404860(v16, v120, 0, v128 + 16) == 0) {
                                    goto lab_0x40402e_5;
                                }
                                // 0x403f41
                                v124 = v120;
                                goto lab_0x403f41_3;
                            }
                            case 58: {
                                int64_t v131 = v126 + 1; // 0x40446d
                                *v121 = v131;
                                v125 = v131;
                                goto lab_0x403f41;
                            }
                            case 0: {
                                goto lab_0x40407a;
                            }
                            default: {
                                goto lab_0x403f63;
                            }
                        }
                    }
                  lab_0x403f63:;
                    int64_t v132 = v126 + 1; // 0x403f63
                    *v121 = v132;
                    *str3 = *v127;
                    char * v133 = (char *)v132; // 0x403f73
                    if (*v133 == 0) {
                        goto lab_0x40402e_5;
                    }
                    int64_t v134 = v126 + 2; // 0x403f7d
                    *v121 = v134;
                    *(char *)(v15 + 22) = *v133;
                    *v121 = v126 + 3;
                    int64_t str4 = (int64_t)"lc"; // 0x403f9b
                    if (*(char *)v134 != 61) {
                        goto lab_0x40402e_5;
                    }
                    int64_t v135 = 0;
                    while (strcmp(str3, (char *)str4) != 0) {
                        int64_t v136 = v135 + 1; // 0x403fb0
                        str4 = *(int64_t *)(8 * v136 + (int64_t)&g15);
                        if (str4 == 0) {
                            goto lab_0x403fff_2;
                        }
                        v135 = v136;
                    }
                    int64_t v137 = 0x100000000 * v135 >> 28; // 0x403fde
                    *(int64_t *)(v137 + (int64_t)&g55 + 8) = *v123;
                    int64_t v138 = function_404860(v16, v120, 0, v137 + (int64_t)&g55); // 0x403ff2
                    if ((char)v138 == 0) {
                        goto lab_0x403fff_2;
                    }
                    // 0x403f41
                    v124 = v120;
                    goto lab_0x403f41_3;
                }
                goto lab_0x40407a;
            }
        }
    } else {
        goto lab_0x4039f0;
    }
  lab_0x4039b4:;
    char * str5 = (char *)v139; // 0x4039c1
    int32_t strncmp_rc2 = strncmp(str5, "posix-", 6); // 0x4039c1
    int64_t v140 = v139; // 0x4039c8
    v72 = v139;
    v75 = str5;
    if (strncmp_rc2 != 0) {
        goto lab_0x404283;
    } else {
        v115 = 6;
        v116 = (int64_t)"posix-";
        while ((char)function_40c190(2, (int64_t)"posix-") != 0) {
            int64_t v141 = v140 + 6; // 0x4039b0
            char * str6 = (char *)v141;
            int32_t strncmp_rc3 = strncmp(str6, "posix-", 6); // 0x4039c1
            v140 = v141;
            v72 = v141;
            v75 = str6;
            if (strncmp_rc3 != 0) {
                goto lab_0x404283;
            }
            v115 = 6;
            v116 = (int64_t)"posix-";
        }
        goto lab_0x4039dc;
    }
  lab_0x4039f0:
    // 0x4039f0
    if (g135 == 1) {
        int32_t v104 = 2; // 0x403edb
        if (g133 == 0 && g143 != 3) {
            // 0x403ee6
            v104 = (int32_t)(g154 == 0) + 4 & -2;
        }
        // 0x403ef5
        g135 = v104;
    }
    int64_t v105 = v93; // 0x403a04
    int64_t v106 = v94; // 0x403a04
    if (g134 != 0) {
        int64_t v107 = function_40ca80(30, 0, 0x404800, 0x404810, 0x404850); // 0x403a1d
        g182 = v107;
        if (v107 == 0) {
            // 0x404714
            function_412bd0(30);
            // UNREACHABLE
        }
        // 0x403a32
        _obstack_begin(&g99, 0, 0, 0x402bc0, 0x402750);
        v105 = 0;
        v106 = 0;
    }
    // 0x403a4b
    g122 = function_417410((int64_t)getenv("TZ"), v106, v105);
    char v108; // 0x402e90
    if ((g152 - 2 & -3) == 0) {
        // 0x403a7f
        g121 = 1;
        v108 = 0;
        goto lab_0x403a88;
    } else {
        // 0x403a72
        if (g154 != 0) {
            // 0x403e49
            if (g169 != 0) {
                // 0x403a7f
                g121 = 1;
                v108 = 0;
                goto lab_0x403a88;
            } else {
                // 0x403e56
                if (g148 != 0) {
                    // 0x403a7f
                    g121 = 1;
                    v108 = 0;
                    goto lab_0x403a88;
                } else {
                    // 0x403e63
                    g121 = 0;
                    v108 = 1;
                    if (g134 == 0) {
                        // 0x403e7c
                        v108 = 1;
                        if (g142 == 0) {
                            // 0x403e89
                            v108 = g143 != 0 ? 1 : *(char *)&g132;
                        }
                    }
                    goto lab_0x403a88;
                }
            }
        } else {
            // 0x403a7f
            g121 = 1;
            v108 = 0;
            goto lab_0x403a88;
        }
    }
  lab_0x40428e:;
    int64_t v109 = v74;
    int64_t v110 = function_40acf0(v109, g19, &g18, 4); // 0x4042a0
    if (v110 < 0) {
        // 0x40451d
        function_40ae10("time style", v109, v110);
        fputs_unlocked(dcgettext((char *)((int32_t)"time style" ^ (int32_t)"time style"), "Valid arguments are:\n", 5), g88);
        int64_t v111 = (int64_t)&g19; // 0x404555
        v111 += 8;
        __fprintf_chk(g88, 1, "  - [posix-]%s\n", (char *)(int64_t)"full-iso");
        int64_t v112 = *(int64_t *)v111; // 0x404576
        while (v112 != 0) {
            // 0x40455a
            v111 += 8;
            __fprintf_chk(g88, 1, "  - [posix-]%s\n", (char *)v112);
            v112 = *(int64_t *)v111;
        }
        // 0x40457e
        fputs_unlocked(dcgettext(NULL, "  - +FORMAT (e.g., +%H:%M) for a 'date'-style format\n", 5), g88);
      lab_0x4045a1:
        // 0x4045a1
        function_40a530(2);
        // UNREACHABLE
    }
    if (v110 == 1) {
        // 0x40464e
        *(int64_t *)&g54 = (int64_t)"%Y-%m-%d %H:%M";
        *(int64_t *)&g53 = (int64_t)"%Y-%m-%d %H:%M";
        v77 = &g18;
        v78 = (int64_t)&g19;
        v76 = v109;
    } else {
        if (v110 > 1) {
            if (v110 == 2) {
                // 0x404633
                *(int64_t *)&g53 = (int64_t)"%Y-%m-%d ";
                *(int64_t *)&g54 = (int64_t)"%m-%d %H:%M";
                v77 = &g18;
                v78 = (int64_t)&g19;
                v76 = v109;
            } else {
                // 0x4042c8
                v77 = &g18;
                v78 = (int64_t)&g19;
                v76 = v109;
                if (v110 == 3) {
                    int64_t v113 = function_40c190(2, (int64_t)&g19); // 0x4042d3
                    v77 = &g18;
                    v78 = (int64_t)&g19;
                    v76 = 2;
                    if ((char)v113 != 0) {
                        char * v114 = dcgettext(NULL, (char *)*(int64_t *)&g53, 2); // 0x4042ea
                        *(int64_t *)&g53 = (int64_t)v114;
                        *(int64_t *)&g54 = (int64_t)dcgettext(NULL, g54, 2);
                        v77 = 2;
                        v78 = (int64_t)g54;
                        v76 = 0;
                    }
                }
            }
        } else {
            // 0x4043eb
            v77 = &g18;
            v78 = (int64_t)&g19;
            v76 = v109;
            if (v110 == 0) {
                // 0x4043f4
                *(int64_t *)&g54 = (int64_t)"%Y-%m-%d %H:%M:%S.%N %z";
                *(int64_t *)&g53 = (int64_t)"%Y-%m-%d %H:%M:%S.%N %z";
                v77 = &g18;
                v78 = (int64_t)&g19;
                v76 = v109;
            }
        }
    }
    goto lab_0x404310;
  lab_0x404353:;
    char * env_val7 = getenv("COLORTERM"); // 0x404358
    if (env_val7 == NULL) {
        goto lab_0x40436b;
    } else {
        // 0x404362
        v88 = v118;
        v90 = v117;
        if (*env_val7 != 0) {
            goto lab_0x404088_2;
        } else {
            goto lab_0x40436b;
        }
    }
  lab_0x404310:
    // 0x404310
    function_404bb0(v76, v78);
    v115 = v77;
    v116 = v78;
    goto lab_0x4039dc;
  lab_0x40436b:;
    char * env_val6 = getenv("TERM"); // 0x404370
    v142 = v118;
    v143 = v117;
    if (env_val6 == NULL) {
        goto lab_0x404088;
    } else {
        // 0x404381
        if (*env_val6 == 0) {
            goto lab_0x404088;
        } else {
            int64_t v144 = (int64_t)env_val6; // 0x404370
            int64_t v145 = (int64_t)"# Configuration file for dircolors, a utility to help you set the"; // 0x4043a6
            while (true) {
                int64_t str7 = v145;
                int64_t v146 = 5; // 0x4043d2
                int64_t v147 = (int64_t)"TERM "; // 0x4043d2
                if (strncmp((char *)str7, "TERM ", 5) == 0) {
                    int64_t v148 = function_4159a0(str7 + 5, v144, 0); // 0x4043dd
                    v146 = 0;
                    v147 = v144;
                    if ((int32_t)v148 == 0) {
                        // break -> 0x404088
                        break;
                    }
                }
                int64_t v149 = str7; // 0x40439e
                int64_t v150 = -1; // 0x40439e
                int64_t v151 = 0; // 0x40439e
                while (v150 != 0) {
                    int64_t v152 = v149;
                    v150--;
                    bool v153; // 0x402e90
                    v149 = v152 + (v153 ? -1 : 1);
                    v151 = v150;
                    if (*(char *)v152 == 0) {
                        // break -> 
                        break;
                    }
                    v151 = 0;
                }
                v145 = str7 + -1 - v151;
                v142 = v146;
                v143 = v147;
                if (v145 - (int64_t)"# Configuration file for dircolors, a utility to help you set the" >= 0x104d) {
                    goto lab_0x404088;
                }
            }
            goto lab_0x404088_2;
        }
    }
  lab_0x403a88:
    // 0x403a88
    g120 = v108 % 2;
    if (g144 != 0) {
        // 0x4040e7
        _obstack_begin(&g104, 0, 0, 0x402bc0, 0x402750);
        _obstack_begin(&g103, 0, 0, 0x402bc0, 0x402750);
    }
    // 0x403aa2
    v85 = 0;
    if (*(char *)&g141 != 0) {
        while (true) {
          lab_0x4041d2:
            // 0x4041d2
            v82 = v85;
            int32_t v86 = v82; // 0x4041d7
            if (v86 < 91) {
                // 0x404190
                v84 = 1;
                if (v86 < 47 || v86 > 64 || v86 < 58) {
                    goto lab_0x4041c0;
                } else {
                    // 0x4041b5
                    v84 = v86 == 95;
                    goto lab_0x4041c0;
                }
            } else {
                // 0x4041d9
                v84 = 1;
                if (v86 == 126 || v86 < 123) {
                    goto lab_0x4041c0;
                } else {
                    // 0x4041b5
                    v84 = v86 == 95;
                    goto lab_0x4041c0;
                }
            }
        }
      lab_0x4041f5:;
        int64_t v154 = function_412d40(); // 0x4041f5
        g173 = (char *)(v154 == 0 ? (int64_t)&g24 : v154);
    }
    // 0x403aaf
    g180 = 100;
    int64_t v155 = function_412980(0x4e20); // 0x403ac2
    g179 = 0;
    g181 = v155;
    function_4084b0();
    int32_t v103 = (int32_t)a1 - g84; // 0x403ae1
    int64_t v156 = g84; // 0x403ae4
    int64_t v98; // 0x402e90
    int64_t v96; // 0x402e90
    if (v103 < 1) {
        // 0x403cd9
        int64_t v157; // 0x402e90
        if (g133 == 0) {
            // 0x403ea2
            function_404d90((int64_t *)".", 0, 1);
            v157 = 0;
        } else {
            // 0x403ce6
            function_408580((int64_t)".", 3, 1, (int64_t *)&g24);
            v157 = 3;
        }
        // 0x403cff
        v96 = v157;
        v98 = (int64_t)".";
        if ((int64_t)g179 != 0) {
            goto lab_0x40411e;
        } else {
            // 0x403d0d
            goto lab_0x403d0d_2;
        }
    } else {
        int64_t v158 = *(int64_t *)(8 * v156 + v19); // 0x403af0
        int64_t v159 = v156 + 1; // 0x403b00
        function_408580(v158, 0, 1, (int64_t *)&g24);
        v156 = v159;
        while (v13 > v159) {
            // 0x403af0
            v158 = *(int64_t *)(8 * v156 + v19);
            v159 = v156 + 1;
            function_408580(v158, 0, 1, (int64_t *)&g24);
            v156 = v159;
        }
        // 0x403b0e
        v96 = 0;
        v98 = v158;
        if ((int64_t)g179 != 0) {
            goto lab_0x40411e;
        } else {
            goto lab_0x403b1c;
        }
    }
  lab_0x404088_2:;
    int64_t v91 = v90;
    int64_t v92 = v88;
    v93 = v92;
    v94 = v91;
    if (g142 == 0) {
        goto lab_0x4039f0;
    } else {
        // 0x404095
        if ((char)function_404ae0(13) != 0) {
            goto lab_0x4040ba;
        } else {
            // 0x4040a3
            if ((char)function_404ae0(14) == 0 || g174 == 0) {
                // 0x4040c6
                v93 = v92;
                v94 = v91;
                if ((char)function_404ae0(12) == 0) {
                    goto lab_0x4039f0;
                } else {
                    // 0x4040d8
                    v93 = v92;
                    v94 = v91;
                    if (g154 != 0) {
                        goto lab_0x4039f0;
                    } else {
                        goto lab_0x4040ba;
                    }
                }
            } else {
                goto lab_0x4040ba;
            }
        }
    }
  lab_0x40411e:
    // 0x40411e
    function_404f40();
    int64_t v95 = v96; // 0x40412a
    int64_t v97 = v98; // 0x40412a
    if (g133 == 0) {
        // 0x40440f
        function_405140(0, 1, 1);
        v95 = 1;
        v97 = 0;
    }
    // 0x404130
    int64_t v99; // 0x402e90
    if ((int64_t)g179 == 0) {
        goto lab_0x403b1c;
    } else {
        // 0x40413e
        function_407ca0(v97, v95);
        if (g172 == 0) {
            goto lab_0x403c40;
        } else {
            int64_t v100 = (int64_t)g86; // 0x404151
            if (*(int64_t *)(v100 + 48) > *(int64_t *)(v100 + 40)) {
                // 0x404166
                int64_t * v101; // 0x404158
                uint64_t v102; // 0x404158
                *v101 = v102 + 1;
                *(char *)v102 = 10;
            } else {
                // 0x404671
                __overflow(g86, 10);
            }
            // 0x404171
            g105++;
            v99 = g172;
            goto lab_0x403b64;
        }
    }
  lab_0x403b1c:
    // 0x403b1c
    v99 = g172;
    if (v103 > 1) {
        goto lab_0x403b64;
    } else {
        goto lab_0x403d0d_2;
    }
  lab_0x4040ba:
    // 0x4040ba
    g137 = 1;
    v93 = v92;
    v94 = v91;
    goto lab_0x4039f0;
  lab_0x403d0d_2:;
    int64_t v160 = g172; // 0x403d0d
    int64_t v161; // 0x402e90
    if (v160 == 0) {
        goto lab_0x403c40;
    } else {
        // 0x403d1d
        v161 = v160;
        if (*(int64_t *)(v160 + 24) == 0) {
            // 0x403d28
            g124 = 0;
            v161 = v160;
        }
        goto lab_0x403b6d;
    }
  lab_0x403b64:
    // 0x403b64
    v161 = v99;
    if (v99 == 0) {
        goto lab_0x403c40;
    } else {
        goto lab_0x403b6d;
    }
  lab_0x403b6d:;
    int64_t v162 = v161; // 0x402e90
    while (true) {
        int64_t v163 = v162;
        int64_t * v164 = (int64_t *)v163; // 0x403b71
        int64_t v165 = *v164; // 0x403b71
        g172 = *(int64_t *)(v163 + 24);
        int64_t v166 = g182; // 0x403b7b
        if (v165 != 0 || v166 == 0) {
            int64_t * v167 = (int64_t *)(v163 + 8); // 0x403b34
            function_4092a0(v165, *v167, *(char *)(v163 + 16));
            free((int64_t *)*v164);
            free((int64_t *)*v167);
            free(v164);
            g124 = 1;
        } else {
            int64_t v168 = g101; // 0x403b8c
            if (v168 - g100 < 16) {
                // break -> 0x4046e2
                break;
            }
            int64_t v169 = v168 - 16; // 0x403ba7
            g101 = v169;
            *(int64_t *)v16 = *(int64_t *)v169;
            *(int64_t *)(v15 + 40) = *(int64_t *)(v168 - 8);
            int64_t v170 = function_40d260(v166); // 0x403bcc
            if (v170 == 0) {
                goto lab_0x4046b0;
            }
            // 0x403bda
            free((int64_t *)v170);
            free((int64_t *)*v164);
            free((int64_t *)*(int64_t *)(v163 + 8));
            free(v164);
        }
        // 0x403b5d
        v162 = g172;
        if (g172 == 0) {
            goto lab_0x403c40;
        }
    }
    // 0x4046e2
    __assert_fail("dev_ino_size <= obstack_object_size (&dev_ino_obstack)", "src/ls.c", 1026, "dev_ino_pop");
    // 0x4046fb
    __assert_fail("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 1644, "main");
    // 0x404714
    function_412bd0((int64_t)"hash_get_n_entries (active_dir_set) == 0");
    // UNREACHABLE
  lab_0x403c56:
    // 0x403c56
    if (g144 != 0) {
        // 0x404212
        function_405390("//DIRED//", &g104);
        function_405390("//SUBDIRED//", &g103);
        int64_t v171 = function_411c20(g127); // 0x404237
        int64_t v172 = *(int64_t *)((8 * v171 & 0x7fffffff8) + (int64_t)&g40); // 0x404248
        __printf_chk(1, "//DIRED-OPTIONS// --quoting-style=%s\n", (char *)v172);
    }
    // 0x403c63
    if (g182 == 0) {
        // 0x403c88
        return g108;
    }
    // 0x403c6f
    if (function_40c5f0(g182) != 0) {
        // 0x4046fb
        __assert_fail("hash_get_n_entries (active_dir_set) == 0", "src/ls.c", 1644, "main");
        // 0x404714
        function_412bd0((int64_t)"hash_get_n_entries (active_dir_set) == 0");
        // UNREACHABLE
    }
    // 0x403c80
    function_40ccc0(g182);
    // 0x403c88
    return g108;
  lab_0x403dec:
    // 0x403dec
    fflush_unlocked(g86);
    function_405af0(0);
    if (g109 != 0) {
        raise(19);
        int32_t v173 = g109 - 1; // 0x403e1a
        int32_t v174 = v173; // 0x403e1d
        while (v173 != 0) {
            // 0x403e10
            raise(19);
            v173 = v174 - 1;
            v174 = v173;
        }
    }
    // 0x403e1f
    if (g111 != 0) {
        // 0x403e2d
        raise(g111);
    }
    goto lab_0x403c56;
  lab_0x404062:;
    int64_t v175 = *(int64_t *)(v80 + 32); // 0x404062
    free((int64_t *)v80);
    v80 = v175;
    if (v175 != 0) {
        goto lab_0x404062;
    } else {
        goto lab_0x404073;
    }
  lab_0x404073:
    // 0x404073
    g142 = 0;
    v87 = (int64_t)format2;
    v89 = (int32_t)"unparsable value for LS_COLORS environment variable" ^ (int32_t)"unparsable value for LS_COLORS environment variable";
    goto lab_0x40407a;
}
// Address range: 0x404720 - 0x40474b
// Address range: 0x40474b - 0x40476a
int64_t function_40474b(void) {
    // 0x40474b
    return 0x624648;
}
// Address range: 0x40476a - 0x4047a1
int64_t function_40476a(void) {
    // 0x40476a
    return 0;
}
// Address range: 0x4047a1 - 0x4047f8
int64_t function_4047a1(void) {
    // 0x4047a1
    if (g89 != 0) {
        // 0x4047f7
        int64_t result; // 0x4047a1
        return result;
    }
    int64_t v1 = g90; // 0x4047d4
    int64_t result2; // 0x4047e6
    if (g90 >= ((int64_t)&g48 - (int64_t)&g47 >> 3) - 1) {
        // 0x4047e6
        result2 = function_40474b();
        g89 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g48 - (int64_t)&g47 >> 3) - 1) {
        // 0x4047d6
        v1++;
    }
    // 0x4047ca
    g90 = v1;
    // 0x4047e6
    result2 = function_40474b();
    g89 = 1;
    return result2;
}
// Address range: 0x4047f8 - 0x4047fd
int64_t function_4047f8(void) {
    // 0x4047f8
    return function_40476a();
}
// Address range: 0x404800 - 0x40480c
int64_t function_404800(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x404800
    return a1 % a2;
}
// Address range: 0x404810 - 0x40482c
int64_t function_404810(int64_t a1, int64_t a2) {
    if (a1 == a2) {
        // 0x404820
        return *(int64_t *)(a1 + 8) & -256 | 1;
    }
    // 0x40481a
    return 0;
}
// Address range: 0x404830 - 0x404841
int64_t function_404830(int64_t a1) {
    uint32_t result = g111; // 0x404830
    if (result == 0) {
        // 0x40483a
        g111 = a1;
    }
    // 0x404840
    return result;
}
// Address range: 0x404850 - 0x404855
int64_t function_404850(void) {
    // 0x404850
    int64_t v1; // 0x404850
    free((int64_t *)v1);
    return &g209;
}
// Address range: 0x404860 - 0x404ada
int64_t function_404860(int64_t a1, int64_t a2, uint32_t a3, int64_t a4) {
    int64_t v1 = a2; // 0x404885
    int64_t v2 = a1; // 0x404885
    int64_t v3 = 0; // 0x404885
    char v4; // 0x404860
    char v5; // 0x404860
    char v6; // 0x404860
    char v7; // 0x404860
    int64_t v8; // 0x404860
    int64_t v9; // 0x404860
    int64_t v10; // 0x404860
    int64_t v11; // 0x404860
    int64_t v12; // 0x404860
    int64_t v13; // 0x404860
    int64_t v14; // 0x404860
    int64_t v15; // 0x404860
    while (true) {
      lab_0x4048a2_2:;
        unsigned char v16 = *(char *)v1; // 0x4048a2
        v6 = v4;
        v7 = v5;
        v14 = v16;
        v10 = v1;
        v12 = v2;
        v8 = v3;
        v15 = 61;
        v11 = v1;
        v13 = v2;
        v9 = v3;
        if (v16 == 61) {
            goto lab_0x404935;
        } else {
            goto lab_0x4048af;
        }
    }
  lab_0x4048d8_3:;
    // 0x4048d8
    int64_t v17; // 0x404860
    *(int64_t *)a1 = v17;
    int64_t v18; // 0x404860
    *(int64_t *)a2 = v18;
    int64_t v19; // 0x404860
    *(int64_t *)a4 = v19;
    int64_t result; // 0x404860
    return result;
  lab_0x4049a8:;
    // 0x4049a8
    int64_t v20; // 0x404860
    int64_t v21; // 0x404860
    int64_t v22 = v20 + 0xffffffa9 + 16 * v21 & 0xffffffff;
    int64_t v23; // 0x404860
    int64_t v24 = v23 + 1;
    int64_t v25 = (int64_t)*(char *)v24; // 0x4049a8
    int64_t v26 = v25 + 0xffffffd0; // 0x4049ac
    int64_t v27 = v26; // 0x4049b4
    int64_t v28 = v25; // 0x4049b4
    int64_t v29 = v22; // 0x4049b4
    int64_t v30 = v24; // 0x4049b4
    int64_t v31 = v24; // 0x4049b4
    int64_t v32 = v22; // 0x4049b4
    if ((char)v26 >= 55) {
        // break -> 0x404a00
        goto lab_0x404a00_3;
    }
    goto lab_0x4049b6;
  lab_0x404935:
    // 0x404935
    result = a3;
    v18 = v11;
    v17 = v13;
    v19 = v9;
    int64_t v39 = v15; // 0x404938
    int64_t v40 = v11; // 0x404938
    int64_t v41 = v13; // 0x404938
    int64_t v42 = v9; // 0x404938
    if ((char)a3 != 0) {
        // break -> 0x4048d8
        goto lab_0x4048d8_3;
    }
    goto lab_0x404919;
  lab_0x4048af:;
    int64_t v63 = v8;
    int64_t v60 = v12;
    int64_t v66 = v10;
    int64_t v67 = v14;
    char v62 = v7;
    char v61 = v6;
    char v68 = v67;
    int64_t v53; // 0x404860
    int64_t v52; // 0x404860
    int64_t v51; // 0x4048f0
    int64_t v49; // 0x4048f5
    if (v61 > v62) {
        if (v68 == 92) {
            // 0x4048f0
            g211 = v66;
            v51 = (int64_t)*(char *)(v66 + 1);
            v49 = v66 + 2;
            v52 = v51;
            v53 = v49;
            result = 0;
            v18 = 2;
            v17 = v60;
            v19 = v63;
            switch (v66) {
                case 0: {
                    goto lab_0x4048d8_3;
                }
                case 48: {
                    goto lab_0x404968;
                }
                case 49: {
                    goto lab_0x404968;
                }
                case 50: {
                    goto lab_0x404968;
                }
                case 51: {
                    goto lab_0x404968;
                }
                case 52: {
                    goto lab_0x404968;
                }
                case 53: {
                    goto lab_0x404968;
                }
                case 54: {
                    goto lab_0x404968;
                }
                case 55: {
                    goto lab_0x404968;
                }
                case 63: {
                    // 0x404a20
                    v52 = 127;
                    v53 = 65;
                    goto lab_0x404897;
                }
                case 88: {
                    goto lab_0x4049a0;
                }
                case 95: {
                    // 0x404a30
                    v52 = 32;
                    v53 = 97;
                    goto lab_0x404897;
                }
                case 97: {
                    // 0x404a10
                    v52 = 7;
                    v53 = 99;
                    goto lab_0x404897;
                }
                case 98: {
                    // 0x404aa0
                    v52 = 8;
                    v53 = 100;
                    goto lab_0x404897;
                }
                case 101: {
                    // 0x404a50
                    v52 = 27;
                    v53 = 103;
                    goto lab_0x404897;
                }
                case 102: {
                    // 0x404a40
                    v52 = 12;
                    v53 = 104;
                    goto lab_0x404897;
                }
                case 110: {
                    // 0x404a90
                    v52 = 10;
                    v53 = 112;
                    goto lab_0x404897;
                }
                case 114: {
                    // 0x404a80
                    v52 = 13;
                    v53 = 116;
                    goto lab_0x404897;
                }
                case 116: {
                    // 0x404a70
                    v52 = 9;
                    v53 = 118;
                    goto lab_0x404897;
                }
                case 118: {
                    // 0x404a60
                    v52 = 11;
                    v53 = 120;
                    goto lab_0x404897;
                }
                case 120: {
                    goto lab_0x4049a0;
                }
                default: {
                    goto lab_0x404897;
                }
            }
        } else {
            // 0x4048b6
            v39 = v67;
            v40 = v66;
            v41 = v60;
            v42 = v63;
            if (v68 != 94) {
                goto lab_0x404919;
            } else {
                int64_t v69 = v66 + 1; // 0x4048bb
                unsigned char v70 = *(char *)v69; // 0x4048bb
                if (v70 < 127) {
                    // 0x404890
                    v52 = v70 % 32;
                    v53 = v66 + 2;
                    goto lab_0x404897;
                } else {
                    // 0x4048ce
                    result = 0;
                    v18 = v69;
                    v17 = v60;
                    v19 = v63;
                    if (v70 != 63) {
                        // break -> 0x4048d8
                        goto lab_0x4048d8_3;
                    }
                    // 0x404950
                    *(char *)v60 = 127;
                    v1 = v69;
                    goto lab_0x4048a2;
                }
            }
        }
    } else {
        // 0x404910
        result = 1;
        v18 = v66;
        v17 = v60;
        v19 = v63;
        v39 = v67;
        v40 = v66;
        v41 = v60;
        v42 = v63;
        switch (v68) {
            case 0: {
                goto lab_0x4048d8_3;
            }
            case 58: {
                goto lab_0x4048d8_3;
            }
            default: {
                goto lab_0x404919;
            }
        }
    }
  lab_0x404919:;
    int64_t v43 = v40 + 1; // 0x404919
    *(char *)v41 = (char)v39;
    int64_t v44 = v42 + 1; // 0x404920
    int64_t v45 = v41 + 1; // 0x404924
    unsigned char v46 = *(char *)v43; // 0x404928
    int64_t v47 = v46; // 0x404928
    v6 = v46;
    v7 = 61;
    v14 = v47;
    v10 = v43;
    v12 = v45;
    v8 = v44;
    v15 = v47;
    v11 = v43;
    v13 = v45;
    v9 = v44;
    if (v46 != 61) {
        goto lab_0x4048af;
    } else {
        goto lab_0x404935;
    }
  lab_0x404968:;
    char v48 = *(char *)v49; // 0x404968
    int64_t v50 = v51 + 0xffffffd0 & 0xffffffff; // 0x40496c
    v52 = v50;
    v53 = v49;
    int64_t v54 = v50; // 0x404978
    int64_t v55 = v49; // 0x404978
    char v56 = v48; // 0x404978
    if ((v48 & -8) == 48) {
        int64_t v57 = v55 + 1; // 0x404980
        int64_t v58 = 8 * v54 + 0xffffffd0 + (int64_t)v56 & 0xffffffff; // 0x404984
        char v59 = *(char *)v57; // 0x404989
        v52 = v58;
        v53 = v57;
        v54 = v58;
        v55 = v57;
        while ((v59 & -8) == 48) {
            // 0x404980
            v57 = v55 + 1;
            v58 = 8 * v54 + 0xffffffd0 + (int64_t)v59 & 0xffffffff;
            v59 = *(char *)v57;
            v52 = v58;
            v53 = v57;
            v54 = v58;
            v55 = v57;
        }
    }
    goto lab_0x404897;
  lab_0x4049a0:;
    int64_t v64 = (int64_t)*(char *)v49; // 0x4049a8
    int64_t v65 = v64 + 0xffffffd0; // 0x4049ac
    v27 = v65;
    v28 = v64;
    v29 = 0;
    v30 = v49;
    v31 = v49;
    v32 = 0;
    if ((char)v65 < 55) {
        while (true) {
          lab_0x4049b6:
            // 0x4049b6
            v21 = v29;
            v20 = v28;
            v23 = v30;
            uint64_t v33 = v27 % 64; // 0x4049b9
            uint64_t v34 = 1 << v33;
            while ((v34 & 0x7e0000) == 0) {
                if (v34 % 0x7e000000000001 != 0) {
                    // 0x404ac8
                    goto lab_0x4049a8;
                }
                // 0x4049d2
                v31 = v23;
                v32 = v21;
                if (v33 > 9) {
                    // break (via goto) -> 0x404a00
                    goto lab_0x404a00_3;
                }
                int64_t v35 = v23 + 1; // 0x4049db
                int64_t v36 = v20 + 0xffffffd0 + 16 * v21 & 0xffffffff; // 0x4049e3
                int64_t v37 = (int64_t)*(char *)v35; // 0x4049e8
                int64_t v38 = v37 + 0xffffffd0; // 0x4049ec
                v31 = v35;
                v32 = v36;
                if ((char)v38 >= 55) {
                    // break (via goto) -> 0x404a00
                    goto lab_0x404a00_3;
                }
                v21 = v36;
                v20 = v37;
                v23 = v35;
                v33 = v38 % 64;
                v34 = 1 << v33;
            }
            // 0x404ab0
            goto lab_0x4049a8;
        }
    }
  lab_0x404a00_3:
    // 0x404a00
    *(char *)v60 = (char)v32;
    v1 = v31;
    goto lab_0x4048a2;
  lab_0x404897:
    // 0x404897
    *(char *)v60 = (char)v52;
    v1 = v53;
    goto lab_0x4048a2;
  lab_0x4048a2:
    // 0x4048a2
    v4 = v61;
    v5 = v62;
    v2 = v60 + 1;
    v3 = v63 + 1;
    goto lab_0x4048a2_2;
}
// Address range: 0x404ae0 - 0x404b37
int64_t function_404ae0(int64_t a1) {
    int64_t v1 = 16 * a1 & 0xffffffff0; // 0x404ae4
    int64_t v2 = *(int64_t *)(v1 + (int64_t)&g55); // 0x404ae8
    if (v2 == 0) {
        // 0x404b0c
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + (int64_t)&g56); // 0x404af4
    int64_t v4; // 0x404ae0
    int64_t v5; // 0x404ae0
    int64_t v6; // 0x404ae0
    int64_t v7; // 0x404b2a
    switch (v2) {
        case 1: {
            // 0x404b10
            return *(char *)v3 != 48;
        }
        case 2: {
            // 0x404b20
            bool v8; // 0x404ae0
            v7 = v8 ? -1 : 1;
            v5 = (int64_t)"00";
            v6 = v3;
            v4 = 2;
            // break -> 
            break;
        }
        default: {
            // 0x404b0c
            return 1;
        }
    }
    unsigned char v9 = *(char *)v6; // 0x404b2a
    char v10 = *(char *)v5; // 0x404b2a
    char v11 = v10; // 0x404b2a
    bool v12 = false; // 0x404b2a
    while (v9 == v10) {
        int64_t v13 = v4 - 1; // 0x404b2a
        v5 += v7;
        v6 += v7;
        v4 = v13;
        v11 = v9;
        v12 = true;
        if (v13 == 0) {
            // break -> 
            break;
        }
        v9 = *(char *)v6;
        v10 = *(char *)v5;
        v11 = v10;
        v12 = false;
    }
    unsigned char v14 = v11;
    return !((v9 < v14 | v12)) != v9 < v14;
}
// Address range: 0x404b40 - 0x404ba6
int64_t function_404b40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404b40
    int64_t v1; // bp-16, 0x404b40
    int64_t v2; // 0x404b40
    int64_t v3 = function_4132b0(a1, 0, 0, &v1, (int64_t *)&g24, v2); // 0x404b53
    int32_t v4 = v3; // 0x404b58
    if (v4 == 0) {
        // 0x404b90
        g123 = v1;
        return 1;
    }
    if (v4 != 1) {
        // 0x404b80
        return 0;
    }
    // 0x404b61
    g123 = -1;
    return 1;
}
// Address range: 0x404bb0 - 0x404d89
int64_t function_404bb0(int64_t a1, int64_t a2) {
    // 0x404bb0
    int64_t result; // 0x404bb0
    for (int64_t i = 0; i < 9; i += 8) {
        int64_t v1 = *(int64_t *)(i + (int64_t)&g53); // 0x404bc3
        char v2 = *(char *)v1; // 0x404bca
        int64_t v3 = v1; // 0x404bcf
        char v4 = v2; // 0x404bcf
        int64_t v5 = 0; // 0x404bcf
        if (v2 != 0) {
            int64_t v6 = v3;
            int64_t v7 = v6 + 1;
            char v8 = *(char *)v7; // 0x404bd8
            int64_t v9 = v7; // 0x404bdf
            char v10 = v8; // 0x404bdf
            int64_t v11; // 0x404ca0
            if (v4 == 37) {
                if (v8 == 37) {
                    // 0x404ca0
                    v11 = v6 + 2;
                    v9 = v11;
                    v10 = *(char *)v11;
                } else {
                    // 0x404bf9
                    v9 = v7;
                    v10 = v8;
                    if (v8 == 98) {
                        // break -> 0x404bfe
                        break;
                    }
                }
            }
            // 0x404be3
            v4 = v10;
            v5 = 0;
            while (v10 != 0) {
                // 0x404bd8
                v6 = v9;
                v7 = v6 + 1;
                v8 = *(char *)v7;
                v9 = v7;
                v10 = v8;
                if (v4 == 37) {
                    if (v8 == 37) {
                        // 0x404ca0
                        v11 = v6 + 2;
                        v9 = v11;
                        v10 = *(char *)v11;
                    } else {
                        // 0x404bf9
                        v9 = v7;
                        v10 = v8;
                        v5 = v6;
                        if (v8 == 98) {
                            // break -> 0x404bfe
                            break;
                        }
                    }
                }
                // 0x404be3
                v4 = v10;
                v5 = 0;
            }
        }
        // 0x404bfe
        result = v5;
        int64_t v12; // bp-1624, 0x404bb0
        *(int64_t *)((int64_t)&v12 + 16 + i) = result;
    }
    // 0x404c0d
    int64_t v13; // bp-1608, 0x404bb0
    int64_t v14; // 0x404bb0
    if (v14 == 0 && v13 == 0) {
        // 0x404cc5
        return result;
    }
    // 0x404c1f
    char * found_char_pos; // 0x404c50
    while (true) {
        int64_t v15 = 5;
        int64_t v16; // bp-1592, 0x404bb0
        int64_t v17 = &v16; // 0x404c34
        int64_t v18 = 0; // 0x404c34
        int64_t item = 0x2000e; // 0x404c34
        int64_t v19 = v15; // bp-1616, 0x404c3b
        char * str = nl_langinfo((int32_t)item); // 0x404c40
        found_char_pos = strchr(str, 37);
        if (found_char_pos != NULL) {
            return (int64_t)found_char_pos;
        }
        int64_t result2 = function_40e570((int64_t)str, v17, 128, &v19, 0, 0); // 0x404c70
        while (result2 < 128) {
            uint64_t v20 = v18;
            uint64_t v21 = v19; // 0x404c7b
            v17 += 128;
            v18 = v20 < v21 ? v21 : v20;
            item = item + 1 & 0xffffffff;
            int64_t v22; // bp-56, 0x404bb0
            if (v17 == (int64_t)&v22) {
                // break -> 0x404c94
                break;
            }
            v19 = v15;
            str = nl_langinfo((int32_t)item);
            found_char_pos = strchr(str, 37);
            if (found_char_pos != NULL) {
                return (int64_t)found_char_pos;
            }
            // 0x404c5a
            result2 = function_40e570((int64_t)str, v17, 128, &v19, 0, 0);
        }
        // 0x404cc5
        return result2;
    }
  lab_0x404cc5:
    // 0x404cc5
    return (int64_t)found_char_pos;
  lab_0x404ced:;
    // 0x404ced
    int64_t v23; // 0x404bb0
    int64_t v24 = v23;
    int64_t v25 = *(int64_t *)(v24 + (int64_t)&g53); // 0x404cf4
    char * v26 = (char *)v25;
    int64_t v27 = 192 * v24 + (int64_t)&g97; // 0x404d08
    int64_t v28; // 0x404bbc
    int64_t v29 = v28 + 32; // 0x404d08
    goto lab_0x404d6a;
  lab_0x404d6a:;
    int64_t v30 = v29;
    int64_t str2 = v27;
    int64_t v31; // 0x404bb0
    int64_t v32 = *(int64_t *)v31; // 0x404d6a
    int64_t v33; // 0x404bb0
    int32_t chars_printed; // 0x404bb0
    if (v32 != 0) {
        int64_t v34 = v32 - v25; // 0x404d13
        v33 = v32;
        if (v34 > 128) {
            goto lab_0x404cc5;
        } else {
            // 0x404d1f
            *(int64_t *)(v28 - 16) = v32 + 2;
            *(int64_t *)(v28 - 24) = v30;
            *(int64_t *)(v28 - 32) = v25;
            chars_printed = __snprintf_chk((char *)str2, 128, 1, -1, "%.*s%s%s", v34);
            goto lab_0x404d50;
        }
    } else {
        // 0x404d72
        chars_printed = snprintf((char *)str2, 128, "%s", v26);
        goto lab_0x404d50;
    }
  lab_0x404d50:;
    int32_t v35 = chars_printed;
    if (v35 < 128) {
        int64_t v36 = v30 + 128; // 0x404d59
        v27 = str2 + 128;
        v29 = v36;
        int64_t v37; // 0x404bb0
        if (v36 == v37) {
            // 0x404cb0
            v31 += 8;
            v23 = v24 + 8;
            if (v24 != 8) {
                goto lab_0x404ced;
            } else {
                // 0x404cbe
                g96 = 1;
                v33 = v35;
                goto lab_0x404cc5;
            }
        } else {
            goto lab_0x404d6a;
        }
    } else {
        // 0x404cc5
        v33 = v35;
        goto lab_0x404cc5;
    }
}
// Address range: 0x404d90 - 0x404df6
int64_t function_404d90(int64_t * a1, int32_t a2, int64_t a3) {
    int64_t v1 = function_412980(32); // 0x404da8
    int64_t v2 = 0; // 0x404db5
    if (a2 != 0) {
        // 0x404db7
        v2 = function_412bb0((int64_t)a2);
    }
    // 0x404dbf
    *(int64_t *)(v1 + 8) = v2;
    int64_t v3 = 0; // 0x404dc8
    if (a1 != NULL) {
        // 0x404dca
        v3 = function_412bb0((int64_t)a1);
    }
    // 0x404dd2
    *(int64_t *)v1 = v3;
    int64_t result = g172; // 0x404dd5
    *(char *)(v1 + 16) = (char)a3;
    *(int64_t *)(v1 + 24) = result;
    g172 = v1;
    return result;
}
// Address range: 0x404e00 - 0x404e0b
int64_t function_404e00(int64_t str, int64_t str2) {
    // 0x404e00
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x404e10 - 0x404e1e
int64_t function_404e10(int64_t a1, int64_t a2) {
    char * str = (char *)a1; // 0x404e19
    return strcmp(str, str);
}
// Address range: 0x404e20 - 0x404e78
int64_t function_404e20(int64_t str) {
    // 0x404e20
    char v1; // bp-26, 0x404e20
    int64_t v2 = function_411cd0((int64_t *)&v1, 2, str, -1, (int64_t)g127); // 0x404e44
    int64_t v3; // 0x404e20
    if (v1 != (char)v3) {
        // 0x404e52
        return 1;
    }
    int64_t len = strlen((char *)str); // 0x404e66
    return len & -256 | (int64_t)(v2 != len);
}
// Address range: 0x404e80 - 0x404f3f
int64_t function_404e80(int64_t a1, int32_t a2) {
    char * str = (char *)a1;
    uint64_t v1 = (int64_t)strlen(str) + 1; // 0x404e93
    uint128_t v2 = 3 * (int128_t)v1; // 0x404e9c
    if ((int64_t)v2 < 0) {
        // 0x404f3a
        function_412bd0(a1);
        // UNREACHABLE
    }
    if (v2 % 0x30000000000000001 != 0) {
        // 0x404f3a
        function_412bd0(a1);
        // UNREACHABLE
    }
    int64_t result = function_412980(3 * v1); // 0x404ec2
    char v3 = *str; // 0x404ecd
    int64_t v4 = result; // 0x404ed2
    if (v3 == 0) {
      lab_0x404efe_2:
        // 0x404efe
        *(char *)v4 = 0;
        return result;
    }
    char v5 = v3; // 0x404ecd
    int64_t v6 = result;
    int64_t v7 = a1; // 0x404ed4
    int64_t v8; // 0x404e80
    while (true) {
      lab_0x404ed4:;
        int64_t v9 = v6;
        unsigned char v10 = v5;
        v7++;
        while ((char)a2 == 0 || v10 != 47) {
            char v11 = *(char *)((int64_t)v10 + (int64_t)&g98); // 0x404ee4
            if (v11 == 0) {
                // 0x404f10
                __sprintf_chk((char *)v9, 1, -1, "%%%02x", (int32_t)v10);
                v8 = v9 + 3;
                goto lab_0x404ecd;
            }
            // 0x404ef0
            *(char *)v9 = v10;
            char v12 = *(char *)v7; // 0x404ef3
            int64_t v13 = v9 + 1; // 0x404ef6
            v4 = v13;
            if (v12 == 0) {
                // break (via goto) -> 0x404efe
                goto lab_0x404efe_2;
            }
            v9 = v13;
            v10 = v12;
            v7++;
        }
        // 0x404f30
        *(char *)v9 = 47;
        v8 = v9 + 1;
        goto lab_0x404ecd;
    }
  lab_0x404efe_2:
    // 0x404efe
    *(char *)v4 = 0;
    return result;
  lab_0x404ecd:
    // 0x404ecd
    v6 = v8;
    v5 = *(char *)v7;
    v4 = v6;
    if (v5 == 0) {
        // break -> 0x404efe
        goto lab_0x404efe_2;
    }
    goto lab_0x404ed4;
}
// Address range: 0x404f40 - 0x4050f8
int64_t function_404f40(void) {
    int64_t v1 = g179; // 0x404f41
    int64_t v2 = v1 / 2 + v1; // 0x404f4e
    int64_t v3 = v2; // 0x404f58
    int64_t v4 = v1; // 0x404f58
    if (v2 > g175) {
        int64_t v5 = g176; // 0x405050
        free((int64_t *)v5);
        uint128_t v6 = 24 * (g179 & 0xffffffffffffffff); // 0x405064
        if ((int64_t)v6 < 0 || v6 % 0x1f0000000000000001 != 0) {
            // 0x4050a9
            function_412bd0(v5);
            // UNREACHABLE
        }
        int64_t v7 = function_412980(24 * v1); // 0x405086
        v4 = g179;
        g176 = v7;
        v3 = 3 * v4;
        g175 = v3;
    }
    int64_t result = v3; // 0x404f61
    if (v4 != 0) {
        int64_t v8 = g176; // 0x404f75
        int64_t v9 = g181; // 0x404f75
        *(int64_t *)v8 = v9;
        v8 += 8;
        v9 += 200;
        result = v8;
        while (g176 + 8 * v4 != v8) {
            // 0x404f78
            *(int64_t *)v8 = v9;
            v8 += 8;
            v9 += 200;
            result = v8;
        }
    }
    // 0x404f8b
    if (g152 == -1) {
        // 0x405034
        return result;
    }
    int32_t v10 = _setjmp(INVALID_FORM); /*
        (struct {int32_t e0[8]; int32_t e1; struct _TYPEDEF___sigset_t e2;}){
            .e0 = {(int32_t)&g95, 0, 0, 0, 0, 0, 0, 0},
            .e1 = 0,
            .e2 = (struct {int32_t e0[1];}){
                .e0 = {0}
            }
        }    
*/
    int64_t v11; // 0x404f40
    int64_t v12; // 0x404f40
    if (v10 == 0) {
        // 0x405040
        v11 = 0;
        v12 = g179;
    } else {
        if (g152 == 3) {
            // 0x4050ae
            __assert_fail("sort_type != sort_version", "src/ls.c", 3813, "sort_files");
            *__errno_location() = 0;
            return strcoll("sort_type != sort_version", "src/ls.c");
        }
        int64_t v13 = g179; // 0x404fbb
        v11 = 2;
        v12 = 0;
        if (v13 != 0) {
            int64_t v14 = g176; // 0x404fdc
            int64_t v15 = g181; // 0x404fdc
            *(int64_t *)v14 = v15;
            v14 += 8;
            v15 += 200;
            v11 = 2;
            v12 = v13;
            while (v14 != 8 * v13 + g176) {
                // 0x404fe0
                *(int64_t *)v14 = v15;
                v14 += 8;
                v15 += 200;
                v11 = 2;
                v12 = v13;
            }
        }
    }
    int32_t v16 = g152 == 4 ? g153 : 0; // 0x405003
    unsigned char v17 = *(char *)&g132; // 0x40500a
    int64_t v18 = *(int64_t *)(8 * (2 * ((4 * (int64_t)(v16 + g152) | v11) + (int64_t)g151) + (int64_t)v17) + (int64_t)&g5); // 0x405027
    // 0x405034
    return function_40edd0(g176, v12, v18);
}
// Address range: 0x405100 - 0x405108
int64_t function_405100(int64_t a1, int64_t a2) {
    // 0x405100
    int64_t result; // 0x405100
    return result;
}
// Address range: 0x405110 - 0x40511b
int64_t function_405110(int64_t a1, int64_t result) {
    // 0x405110
    return result;
}
// Address range: 0x405120 - 0x40512e
int64_t function_405120(int64_t a1, int64_t a2) {
    // 0x405120
    return function_40bd40(a1, a1);
}
// Address range: 0x405130 - 0x40513b
int64_t function_405130(int64_t a1, int64_t a2) {
    // 0x405130
    return function_40bd40(a1, a2);
}
// Address range: 0x405140 - 0x4052bb
int64_t function_405140(int32_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a2; // 0x405152
    int64_t v2; // 0x405140
    if (a1 != 0 && g182 != 0) {
        // 0x40515e
        v2 = function_404d90(NULL, a1, 0);
        v1 = a1;
    }
    uint64_t v3 = a2 % 256; // 0x405149
    int64_t v4 = g179; // 0x40516a
    int64_t v5 = v1; // 0x405180
    int64_t v6 = v4; // 0x405180
    int64_t result = v2; // 0x405180
    int64_t v7; // 0x405140
    int64_t v8; // 0x405140
    int64_t v9; // 0x405140
    int64_t v10; // 0x40518d
    int32_t * v11; // 0x405191
    int64_t * v12; // 0x4051a1
    int64_t v13; // 0x4051a1
    if (v4 != 0) {
        while (true) {
          lab_0x405186_2:
            // 0x405186
            v8 = v6;
            v9 = v5;
            int64_t v14; // 0x405140
            uint32_t v15; // 0x405191
            while (true) {
              lab_0x405186:
                // 0x405186
                v14 = v9;
                v6 = v8 - 1;
                v10 = *(int64_t *)(g176 + 8 * v6);
                v11 = (int32_t *)(v10 + 168);
                v15 = *v11;
                if (v15 != 3 == (v15 != 9)) {
                    // break -> 0x405178
                    break;
                }
                // 0x4051a1
                v12 = (int64_t *)v10;
                v13 = *v12;
                if (a1 == 0) {
                    goto lab_0x405280;
                } else {
                    int64_t v16 = function_40b870(v13, v14); // 0x4051b1
                    if (*(char *)v16 == 46) {
                        int64_t v17 = v16 + 1; // 0x40529a
                        unsigned char v18 = *(char *)(v17 + (int64_t)(*(char *)v17 == 46)); // 0x4052a1
                        switch (v18) {
                            case 0: {
                                // 0x405178
                                v7 = v18;
                                v5 = v14;
                                goto lab_0x405178;
                            }
                            case 47: {
                                // 0x405178
                                v7 = v18;
                                v5 = v14;
                                goto lab_0x405178;
                            }
                            default: {
                                goto lab_0x4051bf;
                            }
                        }
                    } else {
                        goto lab_0x4051bf;
                    }
                }
            }
            // 0x405178
            v7 = v15;
            v5 = v14;
            goto lab_0x405178;
        }
    }
  lab_0x405230_2:;
    int64_t v19 = g179; // 0x405230
    if (v19 == 0) {
        // 0x405270
        g179 = 0;
        return result;
    }
    int64_t v20 = 0; // 0x40524c
    int64_t v21 = *(int64_t *)g176; // 0x405250
    *(int64_t *)(8 * v20 + g176) = v21;
    int64_t result2 = g176 + 8; // 0x405261
    int64_t v22 = v20 + (int64_t)(*(int32_t *)(v21 + 168) != 9); // 0x405268
    int64_t v23 = result2; // 0x40526e
    v20 = v22;
    while (g176 + 8 * v19 != result2) {
        // 0x405250
        v21 = *(int64_t *)v23;
        *(int64_t *)(8 * v20 + g176) = v21;
        result2 = v23 + 8;
        v22 = v20 + (int64_t)(*(int32_t *)(v21 + 168) != 9);
        v23 = result2;
        v20 = v22;
    }
    // 0x405270
    g179 = v22;
    return result2;
  lab_0x405178:
    // 0x405178
    result = v7;
    if (v6 == 0) {
        // break -> 0x405230
        goto lab_0x405230_2;
    }
    goto lab_0x405186_2;
  lab_0x405280:;
    int64_t v24 = *(int64_t *)(v10 + 8); // 0x405280
    int64_t v25 = function_404d90((int64_t *)v13, (int32_t)v24, v3); // 0x40528a
    int64_t v26 = v24; // 0x40528f
    int64_t v27 = v25; // 0x40528f
    goto lab_0x4051f0;
  lab_0x4051f0:;
    int64_t v28 = v26;
    v7 = v27;
    v5 = v28;
    if (*v11 != 9) {
        goto lab_0x405178;
    }
    // 0x4051fd
    free((int64_t *)*v12);
    free((int64_t *)*(int64_t *)(v10 + 8));
    free((int64_t *)*(int64_t *)(v10 + 16));
    v8 = v6;
    v9 = v28;
    result = &g209;
    if (v6 == 0) {
        // break (via goto) -> 0x405230
        goto lab_0x405230_2;
    }
    goto lab_0x405186;
  lab_0x4051bf:
    // 0x4051bf
    if (*(char *)v13 == 47) {
        goto lab_0x405280;
    } else {
        int64_t v29 = function_40bb70(); // 0x4051d1
        int64_t v30 = *(int64_t *)(v10 + 8); // 0x4051d6
        int64_t * v31 = (int64_t *)v29; // 0x4051e3
        function_404d90(v31, (int32_t)v30, v3);
        free(v31);
        v26 = v30;
        v27 = &g209;
        goto lab_0x4051f0;
    }
}
// Address range: 0x4052c0 - 0x405381
int64_t function_4052c0(uint64_t a1, uint64_t a2) {
    // 0x4052c0
    int64_t result; // 0x4052c0
    if (a1 >= a2) {
        // 0x40534d
        return result;
    }
    int64_t v1 = a1; // 0x4052c3
    uint64_t v2; // 0x4052c0
    uint64_t v3; // 0x4052c0
    uint64_t v4; // 0x405324
    int64_t * v5; // 0x405328
    uint64_t v6; // 0x405328
    uint64_t v7; // 0x40532c
    while (true) {
      lab_0x405316_2:
        // 0x405316
        v2 = v1;
        int64_t v8 = (int64_t)g86; // 0x405316
        uint64_t v9 = (int64_t)g125; // 0x40531d
        v4 = v2 + 1;
        v5 = (int64_t *)(v8 + 40);
        v6 = *v5;
        v7 = *(int64_t *)(v8 + 48);
        if (v9 != 0) {
            if (a2 / v9 > v4 / v9) {
                int64_t v10; // 0x4052c0
                if (v6 >= v7) {
                    // 0x405368
                    __overflow(g86, 9);
                    v10 = g125;
                } else {
                    // 0x4052f5
                    *v5 = v6 + 1;
                    *(char *)v6 = 9;
                    v10 = v9;
                }
                // 0x405300
                v3 = v10;
                int64_t v11 = v3 + v2 - v2 % v3; // 0x40530e
                if (v11 >= a2) {
                    return v2 / v3;
                }
                // 0x405316
                v1 = v11;
                goto lab_0x405316_2;
            } else {
                goto lab_0x405335;
            }
        } else {
            goto lab_0x405335;
        }
    }
    // 0x40534d
    return v2 / v3;
  lab_0x405335:;
    int64_t v12; // 0x4052c0
    if (v6 >= v7) {
        // 0x405358
        v12 = __overflow(g86, 32);
    } else {
        int64_t v13 = v6 + 1; // 0x40533a
        *v5 = v13;
        *(char *)v6 = 32;
        v12 = v13;
    }
    // 0x405345
    result = v12;
    if (v4 >= a2) {
        return result;
    }
    // 0x405316
    v1 = v4;
    goto lab_0x405316_2;
}
// Address range: 0x405390 - 0x405456
int64_t function_405390(char * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 24); // 0x405396
    int64_t result = *v2; // 0x405396
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x40539a
    int64_t v4 = *v3; // 0x40539a
    uint64_t v5 = result - v4; // 0x4053a1
    if (v5 < 8) {
        // 0x405439
        return result;
    }
    if (result == v4) {
        char * v6 = (char *)(v1 + 80); // 0x405440
        *v6 = *v6 | 2;
    }
    int64_t v7 = *(int64_t *)(v1 + 48); // 0x4053b7
    int64_t v8 = *(int64_t *)(v1 + 8); // 0x4053bb
    int64_t v9 = v7 + result & -1 - v7; // 0x4053c5
    int64_t v10 = *(int64_t *)(v1 + 32); // 0x4053c8
    int64_t v11 = v9 - v8 > v10 - v8 ? v10 : v9; // 0x4053db
    *v2 = v11;
    *v3 = v11;
    fputs_unlocked(a1, g86);
    int64_t v12 = v4 + 8; // 0x40540f
    __printf_chk(1, " %lu", (int32_t)*(int64_t *)v4);
    while ((v5 & -8) + v4 != v12) {
        int64_t v13 = v12;
        v12 = v13 + 8;
        __printf_chk(1, " %lu", (int32_t)*(int64_t *)v13);
    }
    int64_t v14 = (int64_t)g86; // 0x40541d
    int64_t * v15 = (int64_t *)(v14 + 40); // 0x405424
    uint64_t result2 = *v15; // 0x405424
    if (result2 >= *(int64_t *)(v14 + 48)) {
        // 0x405449
        return __overflow(g86, 10);
    }
    // 0x40542e
    *v15 = result2 + 1;
    *(char *)result2 = 10;
    // 0x405439
    return result2;
}
// Address range: 0x405460 - 0x405519
int64_t function_405460(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result; // 0x4054d3
    if (a1 == 0) {
        // 0x405500
        __printf_chk(1, "%*lu ", a3, (int32_t)a2);
        // 0x4054cc
        result = (int64_t)(0x100000000 * a3 >> 32) + 1 + g105;
        g105 = result;
        return result;
    }
    int32_t v1 = (int32_t)a3 - (int32_t)function_40eb70(a1, 0); // 0x405485
    int64_t v2 = v1 > 0 ? v1 : 0; // 0x40548c
    char * str = (char *)a1; // 0x40548f
    fputs_unlocked(str, g86);
    int32_t len = strlen(str); // 0x405497
    int64_t v3 = v2; // 0x4054a2
    int64_t v4 = (int64_t)g86; // 0x4054a8
    int64_t * v5 = (int64_t *)(v4 + 40); // 0x4054af
    uint64_t v6 = *v5; // 0x4054af
    if (v6 >= *(int64_t *)(v4 + 48)) {
        // 0x4054f0
        __overflow(g86, 32);
    } else {
        // 0x4054b9
        *v5 = v6 + 1;
        *(char *)v6 = 32;
    }
    while ((int32_t)v3 != -1) {
        // 0x4054a8
        v3 &= 0xffffffff;
        v4 = (int64_t)g86;
        v5 = (int64_t *)(v4 + 40);
        v6 = *v5;
        if (v6 >= *(int64_t *)(v4 + 48)) {
            // 0x4054f0
            __overflow(g86, 32);
        } else {
            // 0x4054b9
            *v5 = v6 + 1;
            *(char *)v6 = 32;
        }
    }
    // 0x4054cc
    result = v2 + (int64_t)len + 1 + g105;
    g105 = result;
    return result;
}
// Address range: 0x405520 - 0x40555f
int64_t function_405520(uint32_t a1, int32_t a2, char a3) {
    int64_t v1 = a2;
    if (a3 == 0) {
        // 0x40553b
        return function_405460((int64_t)&g21, (int64_t)a1, v1 & 0xffffffff);
    }
    int64_t v2 = 0; // 0x405539
    int64_t v3 = v1; // 0x405539
    if (g149 == 0) {
        // 0x405550
        v2 = function_40e160((int64_t)a1);
        v3 = v1 & 0xffffffff;
    }
    // 0x40553b
    return function_405460(v2, (int64_t)a1, v3 & 0xffffffff);
}
// Address range: 0x405560 - 0x40557a
int64_t function_405560(void) {
    uint32_t v1 = g111; // 0x405560
    int64_t result = v1; // 0x405568
    if (v1 == 0) {
        // 0x40556a
        g109 = &g110;
        result = &g110;
    }
    // 0x405579
    return result;
}
// Address range: 0x405580 - 0x4055e1
int64_t function_405580(int64_t a1, int64_t format, int64_t a3) {
    // 0x405580
    function_412040(4, a3);
    error(0, *__errno_location(), (char *)format);
    if ((char)a1 != 0) {
        // 0x4055b3
        g108 = 2;
        // 0x4055bd
        return &g209;
    }
    int64_t result = g108; // 0x4055c8
    if (g108 != 0) {
        // 0x4055bd
        return result;
    }
    // 0x4055d2
    g108 = 1;
    return result;
}
// Address range: 0x4055f0 - 0x405626
int64_t function_4055f0(int64_t str, int64_t str2) {
    int64_t v1 = *(int64_t *)(str2 + 72); // 0x4055f0
    int64_t v2 = *(int64_t *)(str + 72); // 0x4055f4
    if (v2 > v1) {
        // 0x405620
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0x4055f4
    if (v3 != 0) {
        // 0x405610
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    // 0x4055fc
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x405630 - 0x405686
int64_t function_405630(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x405630
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x405636
    if (v2 != 9 && v2 != 3 && (v1 == 3 || v1 == 9)) {
        // 0x40566b
        return 0xffffffff;
    }
    // 0x40565e
    return v1 == 3 | v1 == 9 ? (int64_t)(v2 == 3) | (int64_t)(v1 & -256) : 1;
}
// Address range: 0x405690 - 0x4056e7
int64_t function_405690(int64_t str, int64_t str2, int64_t a3) {
    int32_t v1 = *(int32_t *)(str + 168); // 0x405690
    int32_t v2 = *(int32_t *)(str2 + 168); // 0x405696
    bool v3 = v2 == 3 | v2 == 9;
    if (v3) {
        // 0x4056be
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x4056cb
            return 1;
        }
    } else {
        // 0x4056ba
        if (v1 == 3 || v1 == 9) {
            // 0x4056cb
            return 0xffffffff;
        }
    }
    // 0x4056d0
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x4056f0 - 0x405746
int64_t function_4056f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x4056f0
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x4056f6
    if (v2 != 9 && v2 != 3 && (v1 == 3 || v1 == 9)) {
        // 0x40572e
        return 0xffffffff;
    }
    // 0x405721
    return v1 == 3 | v1 == 9 ? (int64_t)(v2 == 3) | (int64_t)(v1 & -256) : 1;
}
// Address range: 0x405750 - 0x4057af
int64_t function_405750(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x405750
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x405756
    bool v3 = v2 == 3 | v2 == 9;
    if (v3) {
        // 0x405781
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40578e
            return 1;
        }
    } else {
        // 0x40577d
        if (v1 == 3 || v1 == 9) {
            // 0x40578e
            return 0xffffffff;
        }
    }
    char * str = (char *)a1; // 0x40579e
    return strcmp(str, str);
}
// Address range: 0x4057b0 - 0x405899
int64_t function_4057b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    bool v1; // 0x4057b0
    if ((char)a1 == 0) {
        int32_t v2 = a3; // 0x405842
        if (v2 == 5) {
            // 0x40581a
            return 0;
        }
        // 0x405847
        v1 = v2 == 9 | v2 == 3;
    } else {
        int64_t v3 = a2 & 0xf000; // 0x4057bb
        if (v3 == 0x8000) {
            // 0x405820
            if (g143 == 3) {
                // 0x40582b
                return (a2 & 73) == 0 ? 0 : 42;
            }
            // 0x40581a
            return 0;
        }
        // 0x4057c7
        v1 = v3 == 0x4000;
    }
    // 0x4057cf
    if (v1) {
        // 0x40581a
        return 47;
    }
    // 0x4057d8
    if (g143 == 1) {
        // 0x40581a
        return 0;
    }
    if ((char)a1 == 0) {
        int64_t result = 61; // 0x4057b0
        switch ((int32_t)a3) {
            case 6: {
                // 0x40581a
                return 64;
            }
            case 1: {
                // 0x40581a
                return 124;
            }
            default: {
                // 0x405874
                result = 0;
            }
            case 7: {
                // 0x40581a
                return result;
            }
        }
    }
    int64_t v4 = a2 & 0xf000; // 0x4057e8
    if (v4 == 0xa000) {
        // 0x40581a
        return 64;
    }
    int32_t v5 = v4; // 0x405804
    if (v5 == 0x1000) {
        // 0x40581a
        return 124;
    }
    // 0x40581a
    return v5 == 0xc000 ? 61 : 0;
}
// Address range: 0x4058a0 - 0x4058ea
int64_t function_4058a0(unsigned char a1) {
    // 0x4058a0
    int64_t v1; // 0x4058a0
    int64_t v2 = function_4057b0((int64_t)a1, v1, v1, v1); // 0x4058a5
    char v3 = v2; // 0x4058ac
    if (v3 == 0) {
        // 0x4058d3
        return v2 & -256 | (int64_t)(v3 != 0);
    }
    int64_t v4 = (int64_t)g86; // 0x4058b0
    int64_t * v5 = (int64_t *)(v4 + 40); // 0x4058b7
    uint64_t v6 = *v5; // 0x4058b7
    int64_t v7; // 0x4058a0
    if (v6 >= *(int64_t *)(v4 + 48)) {
        // 0x4058e0
        v7 = __overflow(g86, (int32_t)v2 % 256);
    } else {
        // 0x4058c1
        *v5 = v6 + 1;
        *(char *)v6 = v3;
        v7 = v6;
    }
    // 0x4058cb
    g105++;
    // 0x4058d3
    return v7 & -256 | (int64_t)(v3 != 0);
}
// Address range: 0x4058f0 - 0x405966
int64_t function_4058f0(int64_t str, int64_t str2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(str + 168); // 0x4058f0
    int32_t v2 = *(int32_t *)(str2 + 168); // 0x4058f6
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40591e
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40592b
            return 1;
        }
    } else {
        // 0x40591a
        if (v1 == 3 || v1 == 9) {
            // 0x40592b
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(str2 + 96); // 0x405930
    int64_t v5 = *(int64_t *)(str + 96); // 0x405934
    if (v5 > v4) {
        // 0x40592b
        return 0xffffffff;
    }
    // 0x40593a
    if (v5 < v4) {
        // 0x40592b
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(str2 + 104) - *(int32_t *)(str + 104); // 0x405940
    if (result != 0) {
        // 0x40592b
        return result;
    }
    // 0x405945
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x405970 - 0x4059cf
int64_t function_405970(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x405970
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x405976
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x4059a1
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x4059ae
            return 1;
        }
    } else {
        // 0x40599d
        if (v1 == 3 || v1 == 9) {
            // 0x4059ae
            return 0xffffffff;
        }
    }
    // 0x4059b8
    return function_40bd40(a1, a1);
}
// Address range: 0x4059d0 - 0x405a27
int64_t function_4059d0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x4059d0
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x4059d6
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x4059fe
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x405a0b
            return 1;
        }
    } else {
        // 0x4059fa
        if (v1 == 3 || v1 == 9) {
            // 0x405a0b
            return 0xffffffff;
        }
    }
    // 0x405a10
    return function_40bd40(a1, a2);
}
// Address range: 0x405a30 - 0x405ae6
int64_t function_405a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x405a30
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x405a36
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x405a62
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x405a6f
            return 1;
        }
    } else {
        // 0x405a5a
        if (v1 == 3 || v1 == 9) {
            // 0x405a6f
            return 0xffffffff;
        }
    }
    char * str = (char *)a2; // 0x405a82
    char * found_char_pos = strrchr(str, 46); // 0x405a82
    int64_t v4 = (int64_t)found_char_pos; // 0x405a82
    char * found_char_pos2 = strrchr(str, 46); // 0x405a95
    int64_t str3; // 0x405a30
    int64_t str2; // 0x405a30
    if (found_char_pos2 == NULL) {
        // 0x405ac0
        str3 = (int64_t)&g24;
        str2 = v4;
        if (found_char_pos == NULL) {
            // 0x405aca
            return strcmp(str, str);
        }
    } else {
        // 0x405a9f
        str3 = (int64_t)found_char_pos2;
        str2 = found_char_pos == NULL ? (int64_t)&g24 : v4;
    }
    int32_t strcmp_rc = strcmp((char *)str2, (char *)str3); // 0x405ab1
    if (strcmp_rc == 0) {
        // 0x405aca
        return strcmp(str, str);
    }
    // 0x405aba
    return strcmp_rc;
}
// Address range: 0x405af0 - 0x405c6f
int64_t function_405af0(int32_t a1) {
    int64_t v1 = (int64_t)&g2; // 0x405afe
    int32_t v2 = 20; // 0x405afe
    if ((char)a1 == 0) {
        int64_t result; // 0x405af0
        while (true) {
            int32_t sig_num = v2;
            int64_t v3 = v1;
            if (sigismember((struct _TYPEDEF_sigset_t *)&g112, sig_num) == 0) {
                // 0x405b10
                result = 0;
                if (v3 == (int64_t)&g3) {
                    // break -> 0x405b41
                    break;
                }
            } else {
                void (*prev_sig_handler)(int32_t) = signal(sig_num, SIG_DFL); // 0x405b33
                if (v3 == (int64_t)&g3) {
                    // 0x405b41
                    result = (int64_t)prev_sig_handler;
                    return result;
                }
            }
            // 0x405b19
            v2 = *(int32_t *)v3;
            v1 = v3 + 4;
        }
      lab_0x405b41_2:
        // 0x405b41
        return result;
    }
    // 0x405b50
    sigemptyset((struct _TYPEDEF_sigset_t *)&g112);
    int64_t v4 = (int64_t)&g2; // 0x405b68
    int32_t sig_num2 = 20;
    int64_t oact; // bp-184, 0x405af0
    sigaction(sig_num2, NULL, (struct sigaction *)&oact);
    if (oact != 1) {
        // 0x405b8c
        sigaddset((struct _TYPEDEF_sigset_t *)&g112, sig_num2);
    }
    while (v4 != (int64_t)&g3) {
        int32_t v5 = *(int32_t *)v4; // 0x405b70
        v4 += 4;
        sig_num2 = v5;
        sigaction(sig_num2, NULL, (struct sigaction *)&oact);
        if (oact != 1) {
            // 0x405b8c
            sigaddset((struct _TYPEDEF_sigset_t *)&g112, sig_num2);
        }
    }
    int128_t v6 = __asm_movdqa(*(int128_t *)&g112); // 0x405ba2
    int128_t v7 = __asm_movdqa(g113); // 0x405baa
    int128_t v8 = __asm_movdqa(g114); // 0x405bc2
    int128_t v9 = __asm_movdqa(g115); // 0x405bca
    int128_t v10 = __asm_movdqa(g116); // 0x405bd8
    int128_t v11 = __asm_movdqa(g117); // 0x405be0
    int128_t v12; // 0x405af0
    __asm_movups(v12, v6);
    int128_t v13 = __asm_movdqa(g118); // 0x405bed
    int128_t v14 = __asm_movdqa(g119); // 0x405bf5
    __asm_movups(v12, v7);
    __asm_movups(v12, v8);
    __asm_movups(v12, v9);
    __asm_movups(v12, v10);
    __asm_movups(v12, v11);
    __asm_movups(v12, v13);
    __asm_movups(v12, v14);
    int64_t v15 = (int64_t)&g2; // 0x405c20
    int32_t sig_num3 = 20;
    int32_t v16 = sigismember((struct _TYPEDEF_sigset_t *)&g112, sig_num3); // 0x405c35
    int64_t result2 = 0; // 0x405c3c
    if (v16 != 0) {
        // 0x405c3e
        oact = sig_num3 == 20 ? 0x405560 : 0x404830;
        result2 = sigaction(sig_num3, (struct sigaction *)&oact, NULL);
    }
    // 0x405c5a
    while (v15 != (int64_t)&g3) {
        int32_t v17 = *(int32_t *)v15; // 0x405c28
        v15 += 4;
        sig_num3 = v17;
        v16 = sigismember((struct _TYPEDEF_sigset_t *)&g112, sig_num3);
        result2 = 0;
        if (v16 != 0) {
            // 0x405c3e
            oact = sig_num3 == 20 ? 0x405560 : 0x404830;
            result2 = sigaction(sig_num3, (struct sigaction *)&oact, NULL);
        }
    }
    // 0x405b41
    return result2;
}
// Address range: 0x405c70 - 0x405cc2
int64_t function_405c70(void) {
    // 0x405c70
    if (g60 != 0) {
        // 0x405c7a
        return function_405cd0(&g59, &g60);
    }
    // 0x405c90
    function_405cd0(&g55, (int64_t *)&g56);
    function_405cd0(&g61, (int64_t *)&g62);
    return function_405cd0(&g57, (int64_t *)&g58);
}
// Address range: 0x405cd0 - 0x405d39
int64_t function_405cd0(int64_t * a1, int64_t * a2) {
    // 0x405cd0
    int64_t data; // 0x405cd0
    int32_t result; // 0x405cfe
    if (g140 != 0) {
        // 0x405ce5
        data = (int64_t)a1;
        result = fwrite_unlocked((int64_t *)data, (int32_t)data, 1, g86);
        return result;
    }
    // 0x405d08
    g140 = 1;
    if (tcgetpgrp(1) >= 0) {
        // 0x405d28
        function_405af0(1);
        function_405c70();
    } else {
        // 0x405d1d
        function_405c70();
    }
    // 0x405ce5
    data = 1;
    result = fwrite_unlocked((int64_t *)data, (int32_t)data, 1, g86);
    return result;
}
// Address range: 0x405d40 - 0x405d66
int64_t function_405d40(void) {
    // 0x405d40
    function_405cd0(&g55, (int64_t *)&g56);
    return function_405cd0(&g57, (int64_t *)&g58);
}
// Address range: 0x405d70 - 0x405e21
int64_t function_405d70(void) {
    // 0x405d70
    if ((g109 || g111) == 0) {
        // 0x405e20
        return 0;
    }
    uint32_t result; // 0x405def
    while (true) {
        // 0x405d8d
        if (g140 != 0) {
            // 0x405e10
            function_405d40();
        }
        // 0x405d96
        fflush_unlocked(g86);
        int64_t oset; // bp-136, 0x405d70
        sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&g112, (struct _TYPEDEF_sigset_t *)&oset);
        int32_t sig_num; // 0x405d70
        if (g109 == 0) {
            // 0x405e00
            signal(g111, SIG_DFL);
            sig_num = g111;
        } else {
            // 0x405dc1
            g109--;
            sig_num = 19;
        }
        // 0x405dcf
        raise(sig_num);
        sigprocmask(SIG_SETMASK, (struct _TYPEDEF_sigset_t *)&oset, NULL);
        if (g111 == 0) {
            // 0x405def
            result = g109;
            if (result == 0) {
                // break -> 0x405df9
                break;
            }
        }
    }
    // 0x405df9
    return result;
}
// Address range: 0x405e30 - 0x405e91
int64_t function_405e30(void) {
    // 0x405e30
    if (g142 == 0) {
        // 0x405e39
        int64_t result; // 0x405e30
        return result;
    }
    int64_t result2 = function_404ae0(4); // 0x405e49
    if ((char)result2 == 0) {
        // 0x405e39
        return result2;
    }
    // 0x405e60
    function_405cd0(&g55, (int64_t *)&g56);
    function_405cd0(&g63, &g64);
    return function_405cd0(&g57, (int64_t *)&g58);
}
// Address range: 0x405ea0 - 0x4062c9
int64_t function_405ea0(int64_t * a1, int64_t str, int64_t a3, int64_t a4, int32_t a5, int64_t * a6) {
    int64_t v1 = (int64_t)a1;
    char v2 = g128 & (char)((int32_t)function_411c20((int32_t)a3) < 3); // 0x405edc
    int32_t v3; // 0x405ea0
    int64_t v4; // 0x405ea0
    int64_t v5; // 0x405ea0
    int64_t len2; // 0x405ea0
    int64_t v6; // 0x405ea0
    char v7; // 0x405ea0
    char v8; // 0x405ea0
    if (v2 != 0) {
        // 0x406020
        v3 = 1;
        if ((int32_t)a4 != 0) {
            goto lab_0x405ef3;
        } else {
            int32_t len = strlen((char *)str); // 0x40602b
            int64_t v9 = len; // 0x40602b
            int64_t v10 = v9 + 1; // 0x406033
            int64_t v11 = v1; // 0x40603d
            if (len >= 0x2000) {
                // 0x40625d
                v11 = function_412980(v10);
            }
            // 0x406043
            memcpy((int64_t *)v11, (int64_t *)str, (int32_t)v10);
            v8 = 0;
            v6 = v9;
            v5 = v11;
            goto lab_0x406056;
        }
    } else {
        // 0x405eec
        v3 = 0;
        if ((int32_t)a4 == 0) {
            // 0x405f70
            v7 = v2;
            len2 = strlen((char *)str);
            v4 = str;
            goto lab_0x405f7e;
        } else {
            goto lab_0x405ef3;
        }
    }
  lab_0x406123:;
    // 0x406123
    int64_t v12; // 0x405ea0
    int64_t v13 = v12;
    int64_t v14; // 0x405ea0
    int64_t v15 = v14;
    int64_t v16 = v15; // 0x406126
    int64_t v17; // 0x405ea0
    int64_t v18 = v17; // 0x406126
    int64_t v19 = v13; // 0x406126
    uint64_t v20; // 0x40605b
    if (v20 <= v17) {
        // break -> 0x406208
        goto lab_0x406208;
    }
    goto lab_0x40612c;
  lab_0x406162:;
    // 0x406162
    int64_t v25; // 0x405ea0
    *(char *)v25 = 63;
    int64_t v26 = 1; // 0x40616d
    int64_t v27; // 0x405ea0
    int64_t v28 = v27; // 0x40616d
    int64_t v29; // 0x406191
    int64_t v30 = v29; // 0x40616d
    goto lab_0x406170;
  lab_0x4061d6:;
    // 0x4061d6
    int32_t v40; // 0x405ea0
    v26 = v40;
    int64_t v45; // 0x405ea0
    v28 = v45;
    int64_t v46; // 0x405ea0
    v30 = v46;
    goto lab_0x406170;
  lab_0x406170:;
    // 0x406170
    int64_t ps; // bp-64, 0x405ea0
    int32_t v31 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406175
    int64_t v32; // 0x405ea0
    int64_t v33 = v26 + v32; // 0x40617c
    int64_t v34 = v28; // 0x40617c
    int64_t v35 = v30; // 0x40617c
    if (v31 != 0) {
        goto lab_0x406123;
    }
    goto lab_0x40617e;
  lab_0x406114:;
    // 0x406114
    int64_t v21; // 0x405ea0
    char v24; // 0x40612c
    *(char *)v21 = v24;
    int64_t v23; // 0x405ea0
    v14 = v23 + 1;
    int64_t v22; // 0x405ea0
    v17 = v22 + 1;
    v12 = v21 + 1;
    goto lab_0x406123;
  lab_0x406144:
    // 0x406144
    ps = 0;
    v33 = v23;
    v34 = v22;
    v35 = v21;
    int64_t v36; // 0x405ea0
    int64_t v39; // 0x405ea0
    while (true) {
      lab_0x40617e:
        // 0x40617e
        v25 = v35;
        v36 = v34;
        v32 = v33;
        v29 = v25 + 1;
        int32_t v37; // bp-68, 0x405ea0
        int64_t v38 = function_416e80((int64_t *)&v37, v36, v20 - v36); // 0x406195
        switch (v38) {
            case -1: {
                goto lab_0x406238;
            }
            case -2: {
                // 0x406250
                *(char *)v25 = 63;
                v39 = v20;
                goto lab_0x406244;
            }
            default: {
                // 0x4061ae
                v40 = wcwidth(v37);
                if (v38 != 0) {
                    int64_t v41 = 0x100000000 * v38 >> 32; // 0x406155
                    v27 = v41 + v36;
                    if (v40 >= 0) {
                        int64_t v42 = 0;
                        *(char *)(v42 + v25) = *(char *)(v42 + v36);
                        int64_t v43 = v42 + 1; // 0x4061f1
                        while (v41 != v43) {
                            // 0x4061e8
                            v42 = v43;
                            *(char *)(v42 + v25) = *(char *)(v42 + v36);
                            v43 = v42 + 1;
                        }
                        // 0x4061fa
                        int64_t v44; // 0x40615a
                        v45 = v44;
                        v46 = v41 + v25;
                        goto lab_0x4061d6;
                    } else {
                        goto lab_0x406162;
                    }
                } else {
                    int64_t v47 = v36 + 1; // 0x4061c1
                    v27 = v47;
                    if (v40 < 0) {
                        goto lab_0x406162;
                    } else {
                        // 0x4061c9
                        *(char *)v25 = *(char *)v36;
                        v45 = v47;
                        v46 = v29;
                        goto lab_0x4061d6;
                    }
                }
            }
        }
    }
  lab_0x406238:
    // 0x406238
    *(char *)v25 = 63;
    v39 = v36 + 1;
    goto lab_0x406244;
  lab_0x406244:
    // 0x406244
    v14 = v32 + 1;
    v17 = v39;
    v12 = v29;
    goto lab_0x406123;
  lab_0x405ef3:;
    int64_t v48 = function_411cd0(a1, 0x2000, str, -1, a3); // 0x405f0d
    int64_t v49 = v48; // 0x405f20
    int64_t v50 = v1; // 0x405f20
    if (v48 >= 0x2000) {
        int64_t v51 = v48 + 1; // 0x40626d
        int64_t v52 = function_412980(v51); // 0x40627e
        function_411cd0((int64_t *)v52, v51, str, -1, a3);
        v49 = 0x100000000 * v48 >> 32;
        v50 = v52;
    }
    int64_t v53 = v49;
    char v54 = 1; // 0x405f33
    int64_t v55 = v53; // 0x405f33
    int64_t v56; // 0x405ea0
    if (*(char *)v50 == (char)v56) {
        int64_t v57 = 0x100000000000000 * v53 >> 56; // 0x405f47
        v54 = v57 != (int64_t)strlen((char *)str);
        v55 = v57;
    }
    // 0x405f59
    v7 = v54;
    len2 = v55;
    v4 = v50;
    v8 = v54;
    v6 = v55;
    v5 = v50;
    if (v3 == 0) {
        goto lab_0x405f7e;
    } else {
        goto lab_0x406056;
    }
  lab_0x405f7e:;
    // 0x405f7e
    int64_t v58; // 0x405ea0
    int64_t v59; // 0x405ea0
    int64_t v60; // 0x405ea0
    int64_t result2; // 0x405ea0
    int64_t v61; // 0x405ea0
    int64_t v62; // 0x405ea0
    char v63; // 0x405ea0
    if (a5 == 0) {
        // 0x406000
        v63 = v7;
        v60 = len2;
        v58 = v4;
        if (g177 == 0) {
            // 0x40600d
            *(char *)a6 = 0;
            // 0x4060cf
            *a1 = v4;
            return len2;
        }
        goto lab_0x4060a7;
    } else {
        int64_t v64 = 0x100000000 * len2 >> 32; // 0x405f90
        int64_t v65; // 0x405ea0
        if (__ctype_get_mb_cur_max() < 2) {
            // 0x405f9f
            int64_t v66; // 0x405ea0
            uint64_t v67 = v64 + v66; // 0x405f9f
            v65 = 0;
            int64_t v68; // 0x405ea0
            if (v68 != 0 && v67 >= v66) {
                int16_t ** v69 = __ctype_b_loc(); // 0x405fb4
                int16_t * v70 = *v69; // 0x405fbe
                int64_t v71 = (int64_t)v70; // 0x405fbe
                int64_t v72 = v66; // 0x405fc4
                int64_t v73 = 0; // 0x405fc4
                int64_t v74 = v73;
                int64_t v75 = v72;
                unsigned char v76 = *(char *)v75; // 0x405fc8
                int16_t v77 = *(int16_t *)(2 * (int64_t)v76 + v71); // 0x405fcb
                int64_t v78 = v74 + (int64_t)((v77 & 0x4000) != 0); // 0x405fd8
                int64_t v79 = v75 + 1; // 0x405fdc
                v72 = v79;
                v73 = v78;
                v65 = v78;
                while (v67 != v79) {
                    // 0x405fc8
                    v74 = v73;
                    v75 = v72;
                    v76 = *(char *)v75;
                    v77 = *(int16_t *)(2 * (int64_t)v76 + v71);
                    v78 = v74 + (int64_t)((v77 & 0x4000) != 0);
                    v79 = v75 + 1;
                    v72 = v79;
                    v73 = v78;
                    v65 = v78;
                }
            }
        } else {
            // 0x406218
            v65 = 0x100000000 * function_40e9b0(v4, v64, 0) >> 32;
        }
        // 0x405fe5
        v63 = v7;
        v61 = v65;
        v60 = v64;
        v58 = v4;
        if (g177 != 0) {
            goto lab_0x4060a7;
        } else {
            // 0x405ff2
            *(char *)a6 = 0;
            v62 = v65;
            result2 = v64;
            v59 = v4;
            goto lab_0x4060c7;
        }
    }
  lab_0x406056:;
    int64_t v80 = v5;
    int64_t v81 = v6;
    char v82 = v8;
    v20 = v80 + v81;
    int64_t v83; // 0x405ea0
    int64_t v84; // 0x405ea0
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x40606a
        v84 = v81;
        v83 = v81;
        if (v20 > v80) {
            int16_t ** v85 = __ctype_b_loc(); // 0x40606f
            int64_t v86 = v80; // 0x406077
            unsigned char v87 = *(char *)v86; // 0x406080
            char * v88; // 0x406080
            if ((*(char *)((int64_t)*v85 + 1 + 2 * (int64_t)v87) & 64) == 0) {
                // 0x40608d
                *v88 = 63;
            }
            // 0x406090
            v86++;
            v84 = v81;
            v83 = v81;
            while (v86 != v20) {
                // 0x406080
                v87 = *(char *)v86;
                if ((*(char *)((int64_t)*v85 + 1 + 2 * (int64_t)v87) & 64) == 0) {
                    // 0x40608d
                    *v88 = 63;
                }
                // 0x406090
                v86++;
                v84 = v81;
                v83 = v81;
            }
        }
    } else {
        // 0x4060f0
        v84 = 0;
        v83 = 0;
        if (v20 > v80) {
            // 0x40612c
            v16 = 0;
            v18 = v80;
            v19 = v80;
            while (true) {
              lab_0x40612c:
                // 0x40612c
                v21 = v19;
                v22 = v18;
                v23 = v16;
                v24 = *(char *)v22;
                if (v24 < 64) {
                    if (v24 > 36 || (v24 & -4) == 32) {
                        goto lab_0x406114;
                    } else {
                        goto lab_0x406144;
                    }
                } else {
                    if (v24 == 64) {
                        goto lab_0x406144;
                    } else {
                        if (v24 < 96 || v24 < 127) {
                            goto lab_0x406114;
                        } else {
                            goto lab_0x406144;
                        }
                    }
                }
            }
          lab_0x406208:
            // 0x406208
            v84 = v15;
            v83 = v13 - v80;
        }
    }
    // 0x40609c
    v63 = v82;
    v61 = v84;
    v60 = v83;
    v58 = v80;
    char v89 = 0; // 0x4060a5
    int64_t v90 = v84; // 0x4060a5
    int64_t result = v83; // 0x4060a5
    int64_t v91 = v80; // 0x4060a5
    if (g177 == 0) {
        goto lab_0x4060b8;
    } else {
        goto lab_0x4060a7;
    }
  lab_0x4060b8:
    // 0x4060b8
    *(char *)a6 = v89;
    v62 = v90;
    result2 = result;
    v59 = v91;
    if (a5 == 0) {
        // 0x4060cf
        *a1 = v91;
        return result;
    }
    goto lab_0x4060c7;
  lab_0x4060a7:
    // 0x4060a7
    v89 = (*(char *)&g178 ^ 1 | v63) ^ 1;
    v90 = v61;
    result = v60;
    v91 = v58;
    goto lab_0x4060b8;
  lab_0x4060c7:
    // 0x4060c7
    *(int64_t *)(int64_t)a5 = v62;
    // 0x4060cf
    *a1 = v59;
    return result2;
}
// Address range: 0x4062d0 - 0x406687
int64_t function_4062d0(int64_t a1, int64_t a2, uint32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3; // 0x4062e4
    int64_t v2; // bp-8248, 0x4062d0
    int64_t v3 = &v2; // 0x4062f8
    int64_t v4 = v3; // bp-8256, 0x406307
    char v5; // bp-8257, 0x4062d0
    int64_t v6 = function_405ea0(&v4, a1, a2, v1, 0, (int64_t *)&v5); // 0x40630c
    if (v5 != 0) {
        if ((char)a5 != 0) {
            int64_t v7 = (int64_t)g86; // 0x406570
            int64_t * v8 = (int64_t *)(v7 + 40); // 0x406577
            uint64_t v9 = *v8; // 0x406577
            if (v9 >= *(int64_t *)(v7 + 48)) {
                // 0x40665b
                __overflow(g86, 32);
            } else {
                // 0x406585
                *v8 = v9 + 1;
                *(char *)v9 = 32;
            }
            // 0x406590
            g105++;
        }
    }
    if (a4 != 0) {
        // 0x406329
        if ((char)function_404ae0(4) != 0) {
            // 0x4065e0
            function_405d40();
        }
        int64_t v10 = a4;
        function_405cd0(&g55, (int64_t *)&g56);
        function_405cd0((int64_t *)v10, (int64_t *)(v10 + 8));
        function_405cd0(&g57, (int64_t *)&g58);
    }
    int64_t n; // 0x4062d0
    int64_t n2; // 0x4062d0
    int64_t v11; // 0x4062d0
    int64_t v12; // 0x4062d0
    int64_t v13; // 0x4062d0
    int64_t v14; // 0x4062d0
    int64_t v15; // 0x4062d0
    if (a7 == 0) {
        // 0x4065a0
        v15 = v1;
        v13 = 0;
        n = v6;
        v11 = 0;
        v14 = 0;
        n2 = v6;
        v12 = 0;
        if (a6 != 0) {
            goto lab_0x406411;
        } else {
            goto lab_0x4065b2;
        }
    } else {
        int64_t v16 = 0; // 0x406380
        int64_t v17 = v6; // 0x406380
        int64_t v18 = g177; // 0x406380
        if (g177 != 0) {
            unsigned char v19 = *(char *)&g178; // 0x406518
            v16 = 0;
            v17 = v6;
            v18 = 0;
            if (v19 != 0) {
                // 0x406529
                v16 = 0;
                v17 = v6;
                v18 = 0;
                if (v5 == 0) {
                    int64_t v20 = v19; // 0x406518
                    int64_t v21 = (int64_t)g86; // 0x406539
                    int64_t v22 = v6 - 2; // 0x406540
                    unsigned char v23 = *(char *)v4; // 0x406544
                    int64_t * v24 = (int64_t *)(v21 + 40); // 0x406547
                    uint64_t v25 = *v24; // 0x406547
                    if (v25 >= *(int64_t *)(v21 + 48)) {
                        // 0x40666a
                        __overflow(g86, (int32_t)v23);
                        v16 = 1;
                        v17 = v22;
                        v18 = v20;
                    } else {
                        // 0x406555
                        *v24 = v25 + 1;
                        *(char *)v25 = v23;
                        v16 = 1;
                        v17 = v22;
                        v18 = v20;
                    }
                }
            }
        }
        int64_t v26 = function_404e80((int64_t)g173, 0); // 0x40639f
        int64_t v27 = function_404e80(a7, 1); // 0x4063b4
        char v28 = *(char *)v27; // 0x4063c9
        __printf_chk(1, (char *)&g22);
        free((int64_t *)v26);
        free((int64_t *)v27);
        v15 = v28 != 47 ? (int64_t)"/" : (int64_t)&g24;
        v13 = v16;
        n = v17;
        v11 = v18;
        v14 = v16;
        n2 = v17;
        v12 = v18;
        if (a6 == 0) {
            goto lab_0x4065b2;
        } else {
            goto lab_0x406411;
        }
    }
  lab_0x406411:
    // 0x406411
    if (g144 != 0) {
        int64_t * v29 = (int64_t *)(a6 + 24); // 0x40641a
        int64_t v30 = *v29; // 0x40641a
        int64_t v31 = v30; // 0x406429
        if (*(int64_t *)(a6 + 32) - v30 < 8) {
            // 0x4065f0
            _obstack_newchunk(a6, 8, v30, v15);
            v31 = *v29;
        }
        // 0x40642f
        *(int64_t *)v31 = g105;
        *v29 = *v29 + 8;
    }
    // 0x40643e
    fwrite_unlocked((int64_t *)(v4 + v13), 1, (int32_t)n, g86);
    int64_t v32 = g105 + v6; // 0x406461
    g105 = v32;
    int64_t v33 = v11; // 0x406472
    if (g144 != 0) {
        int64_t * v34 = (int64_t *)(a6 + 24); // 0x406474
        int64_t v35 = *v34; // 0x406474
        uint64_t v36 = *(int64_t *)(a6 + 32) - v35; // 0x40647c
        int64_t v37 = v32; // 0x406483
        int64_t v38 = v35; // 0x406483
        if (v36 < 8) {
            // 0x406620
            _obstack_newchunk(a6, 8, v36, v35);
            v38 = *v34;
            v37 = g105;
        }
        // 0x406489
        *(int64_t *)v38 = v37;
        *v34 = *v34 + 8;
        v33 = v11;
    }
    goto lab_0x406491;
  lab_0x4065b2:
    // 0x4065b2
    fwrite_unlocked((int64_t *)(v4 + v14), 1, (int32_t)n2, g86);
    g105 += v6;
    v33 = v12;
    goto lab_0x406491;
  lab_0x406491:
    if (a7 != 0) {
        // 0x40649c
        fwrite_unlocked(&g23, 1, 6, g86);
        if ((char)v33 != 0) {
            int64_t v39 = (int64_t)g86; // 0x4064c1
            unsigned char v40 = *(char *)(v6 - 1 + v4); // 0x4064c8
            int64_t * v41 = (int64_t *)(v39 + 40); // 0x4064cd
            uint64_t v42 = *v41; // 0x4064cd
            if (v42 >= *(int64_t *)(v39 + 48)) {
                // 0x40664e
                __overflow(g86, (int32_t)v40);
            } else {
                // 0x4064db
                *v41 = v42 + 1;
                *(char *)v42 = v40;
            }
        }
    }
    int64_t v43 = v4; // 0x4064e5
    if (v43 != v3 && v43 != a1) {
        // 0x4064f4
        free((int64_t *)v43);
    }
    // 0x4064f9
    return v6 + (int64_t)v5;
}
// Address range: 0x406690 - 0x406ae8
int64_t function_406690(int64_t a1, uint32_t a2, int32_t a3, uint64_t a4) {
    int64_t v1 = a3;
    uint64_t v2 = (int64_t)a2; // 0x406692
    int64_t v3; // 0x406690
    int64_t v4; // 0x406690
    int64_t v5; // 0x406690
    int64_t v6; // 0x406690
    int64_t v7; // 0x406690
    int64_t v8; // 0x406690
    int64_t v9; // 0x406690
    int64_t v10; // 0x406690
    char v11; // 0x406690
    int64_t v12; // 0x406690
    int64_t v13; // 0x406690
    int64_t v14; // 0x406690
    if ((char)a2 == 0) {
        // 0x406748
        v5 = a1;
        if (g142 == 0) {
            goto lab_0x4066c2;
        } else {
            unsigned char v15 = *(char *)(a1 + 185); // 0x40675a
            int64_t v16 = v15; // 0x40675a
            if (g174 == 0 || v15 == 0) {
                // 0x406767
                v12 = v16;
                v6 = a1;
                v3 = (int64_t)*(int32_t *)(a1 + 48);
            } else {
                // 0x406900
                v12 = v16;
                v6 = a1;
                v3 = (int64_t)*(int32_t *)(a1 + 172);
            }
            goto lab_0x40676b;
        }
    } else {
        int64_t v17 = *(int64_t *)(a1 + 8); // 0x4066ba
        v5 = v17;
        if (g142 != 0) {
            int64_t v18 = (int64_t)*(int32_t *)(a1 + 172); // 0x406717
            if (*(char *)(a1 + 185) != 0) {
                char v19 = *(char *)(a1 + 184); // 0x406870
                v13 = 0;
                v7 = v17;
                v11 = v19;
                v14 = 0;
                v9 = v17;
                v4 = v18;
                if (v19 == 0) {
                    goto lab_0x40677b;
                } else {
                    goto lab_0x406882;
                }
            } else {
                // 0x406724
                v12 = 0xffffffff;
                v6 = v17;
                v3 = v18;
                v10 = 192;
                v8 = v17;
                if ((char)function_404ae0(12) == 0) {
                    goto lab_0x40676b;
                } else {
                    goto lab_0x4067d0;
                }
            }
        } else {
            goto lab_0x4066c2;
        }
    }
  lab_0x4066c2:;
    int64_t v20 = *(int64_t *)(a1 + 16); // 0x4066c6
    int32_t v21 = *(int32_t *)(a1 + 196); // 0x4066d1
    int64_t result = function_4062d0(v5, (int64_t)g127, v21, 0, v2 % 256 ^ 1, v1, v20); // 0x4066e8
    function_405d70();
    // 0x4066f7
    return result;
  lab_0x40676b:;
    char v22 = *(char *)(a1 + 184); // 0x40676b
    v13 = v12;
    v7 = v6;
    v11 = v22;
    v14 = v12;
    v9 = v6;
    v4 = v3;
    if (v22 != 0) {
        goto lab_0x406882;
    } else {
        goto lab_0x40677b;
    }
  lab_0x406882:;
    int64_t v23 = v4 & 0xf000; // 0x406885
    int64_t v24; // 0x406690
    int64_t v25; // 0x406690
    char v26; // 0x406690
    int64_t v27; // 0x406690
    if (v23 == 0x8000) {
        if ((v4 & 2048) == 0) {
            goto lab_0x4069a8;
        } else {
            // 0x406989
            v10 = 256;
            v8 = v9;
            if ((char)function_404ae0(16) == 0) {
                goto lab_0x4069a8;
            } else {
                goto lab_0x4067d0;
            }
        }
    } else {
        // 0x406895
        v24 = 7;
        v26 = v11;
        v27 = v14;
        v25 = v9;
        v10 = 128;
        v8 = v9;
        switch ((int16_t)v23) {
            case 0x4000: {
                if ((v4 & 514) == 514) {
                    // 0x406ac0
                    v10 = 320;
                    v8 = v9;
                    if ((char)function_404ae0(20) != 0) {
                        goto lab_0x4067d0;
                    } else {
                        goto lab_0x406a13;
                    }
                } else {
                    goto lab_0x406a13;
                }
            }
            case -0x6000: {
                goto lab_0x406798;
            }
            case 0x1000: {
                goto lab_0x4067d0;
            }
            case -0x4000: {
                // 0x4067d0
                v10 = 144;
                v8 = v9;
                goto lab_0x4067d0;
            }
            default: {
                int32_t v28 = v23; // 0x406895
                v10 = 160;
                v8 = v9;
                if (v28 != 0x6000) {
                    // 0x4068db
                    v10 = v28 != 0x2000 ? 208 : 176;
                    v8 = v9;
                }
                goto lab_0x4067d0;
            }
        }
    }
  lab_0x40677b:;
    uint32_t v29 = *(int32_t *)(a1 + 168); // 0x40677b
    uint32_t v30 = *(int32_t *)(4 * (int64_t)v29 + (int64_t)&g4); // 0x406782
    v24 = v30;
    v26 = v30 == 7;
    v27 = v13;
    v25 = v7;
    int64_t str = v7; // 0x406792
    if (v30 == 5) {
        goto lab_0x406910;
    } else {
        goto lab_0x406798;
    }
  lab_0x4067d0:;
    int64_t v31 = v8; // 0x4067d0
    int64_t v32 = v10 + (int64_t)&g55; // 0x4067d0
    goto lab_0x4067d7;
  lab_0x406910:;
    int32_t len = strlen((char *)str); // 0x406913
    v10 = 80;
    v8 = str;
    if (g139 != 0) {
        uint64_t v36 = (int64_t)len; // 0x406913
        int64_t v37 = str + v36;
        uint64_t n = *(int64_t *)g139; // 0x406930
        int64_t str2; // 0x40693b
        if (n <= v36) {
            // 0x406938
            str2 = *(int64_t *)(g139 + 8);
            if (strncmp((char *)(v37 - n), (char *)str2, (int32_t)n) == 0) {
                // 0x406970
                v31 = str;
                v32 = g139 + 16;
                goto lab_0x4067d7;
            }
        }
        int64_t v38 = *(int64_t *)(g139 + 32); // 0x406958
        v10 = 80;
        v8 = str;
        while (v38 != 0) {
            int64_t v39 = v38;
            n = *(int64_t *)v39;
            if (n <= v36) {
                // 0x406938
                str2 = *(int64_t *)(v39 + 8);
                if (strncmp((char *)(v37 - n), (char *)str2, (int32_t)n) == 0) {
                    // 0x406970
                    v31 = str;
                    v32 = v39 + 16;
                    goto lab_0x4067d7;
                }
            }
            // 0x406958
            v38 = *(int64_t *)(v39 + 32);
            v10 = 80;
            v8 = str;
        }
    }
    goto lab_0x4067d0;
  lab_0x406798:
    // 0x406798
    if (v26 == 0 || (int32_t)v27 != 0) {
        // 0x406adc
        v10 = 16 * v24;
        v8 = v25;
    } else {
        // 0x4067a8
        v10 = 208;
        v8 = v25;
        if (g174 == 0) {
            // 0x4067b6
            v10 = (char)function_404ae0(13) == 0 ? 112 : 208;
            v8 = v25;
        }
    }
    goto lab_0x4067d0;
  lab_0x4067d7:
    // 0x4067d7
    if (*(int64_t *)(v32 + 8) != 0) {
        goto lab_0x4067f2;
    } else {
        // 0x4067de
        v5 = v31;
        if ((char)function_404ae0(4) == 0) {
            goto lab_0x4066c2;
        } else {
            goto lab_0x4067f2;
        }
    }
  lab_0x4069a8:
    if ((v4 & 1024) != 0) {
        // 0x4069e0
        v10 = 272;
        v8 = v9;
        if ((char)function_404ae0(17) == 0) {
            goto lab_0x4069b1;
        } else {
            goto lab_0x4067d0;
        }
    } else {
        goto lab_0x4069b1;
    }
  lab_0x4067f2:;
    int64_t v33 = *(int64_t *)(a1 + 16); // 0x4067f6
    int32_t v34 = *(int32_t *)(a1 + 196); // 0x40680f
    int64_t result2 = function_4062d0(v31, (int64_t)g127, v34, (int32_t)0, v2 % 256 ^ 1, v1, v33); // 0x406816
    function_405d70();
    function_405c70();
    uint64_t v35 = (int64_t)g123; // 0x406828
    if (v35 == 0 || a4 / v35 == (a4 - 1 + result2) / v35) {
        // 0x4066f7
        return result2;
    }
    // 0x406858
    function_405cd0(&g67, (int64_t *)&g68);
    // 0x4066f7
    return result2;
  lab_0x4069b1:
    // 0x4069b1
    if ((char)function_404ae0(21) == 0) {
        goto lab_0x406a70;
    } else {
        // 0x4069c3
        v10 = 336;
        v8 = v9;
        if (*(char *)(a1 + 192) == 0) {
            goto lab_0x406a70;
        } else {
            goto lab_0x4067d0;
        }
    }
  lab_0x406a13:
    if ((v4 & 2) == 0) {
        goto lab_0x406a30;
    } else {
        // 0x406a19
        v10 = 304;
        v8 = v9;
        if ((char)function_404ae0(19) != 0) {
            goto lab_0x4067d0;
        } else {
            goto lab_0x406a30;
        }
    }
  lab_0x406a70:
    if ((v4 & 73) == 0) {
        goto lab_0x406a90;
    } else {
        // 0x406a76
        v10 = 224;
        v8 = v9;
        if ((char)function_404ae0(14) == 0) {
            goto lab_0x406a90;
        } else {
            goto lab_0x4067d0;
        }
    }
  lab_0x406a30:
    // 0x406a30
    v10 = 96;
    v8 = v9;
    if ((v4 & 512) != 0) {
        // 0x406a42
        v10 = (char)function_404ae0(18) == 0 ? 96 : 288;
        v8 = v9;
    }
    goto lab_0x4067d0;
  lab_0x406a90:
    // 0x406a90
    str = v9;
    if (*(int64_t *)(a1 + 40) < 2) {
        goto lab_0x406910;
    } else {
        // 0x406a9b
        v10 = 352;
        v8 = v9;
        str = v9;
        if ((char)function_404ae0(22) == 0) {
            goto lab_0x406910;
        } else {
            goto lab_0x4067d0;
        }
    }
}
// Address range: 0x406af0 - 0x406c60
int64_t function_406af0(int64_t a1, int64_t a2) {
    // 0x406af0
    function_405e30();
    int64_t v1; // bp-680, 0x406af0
    if (g136 != 0) {
        int64_t v2 = (int64_t)&g21; // 0x406b19
        if (*(char *)(a1 + 184) != 0) {
            int64_t v3 = *(int64_t *)(a1 + 32); // 0x406b1b
            v2 = (int64_t)&g21;
            if (v3 != 0) {
                // 0x406c50
                v2 = function_40e520(v3, &v1);
            }
        }
        int64_t v4 = g154 != 4 ? (int64_t)g166 : 0; // 0x406b3e
        __printf_chk(1, "%*s ", v4, (char *)v2);
    }
    // 0x406b4c
    if (g148 != 0) {
        int64_t v5 = (int64_t)&g21; // 0x406b61
        if (*(char *)(a1 + 184) != 0) {
            int32_t v6 = *(int32_t *)&g147; // 0x406c33
            int64_t v7; // 0x406af0
            v5 = function_40d5d0(*(int64_t *)(a1 + 88), &v1, v6, 512, g146, v7);
        }
        int64_t v8 = g154 != 4 ? (int64_t)g164 : 0; // 0x406b7d
        __printf_chk(1, "%*s ", v8, (char *)v5);
    }
    // 0x406b8b
    if (g169 != 0) {
        int64_t v9 = g154 != 4 ? (int64_t)g161 : 0; // 0x406bb1
        __printf_chk(1, "%*s ", v9, (char *)*(int64_t *)(a1 + 176));
    }
    int64_t result = function_406690(a1, 0, 0, a2); // 0x406bc9
    if (g143 != 0) {
        // 0x406bf0
        return function_4058a0(*(char *)(a1 + 184)) % 256 + result;
    }
    // 0x406bdb
    return result;
}
// Address range: 0x406c60 - 0x407622
int64_t function_406c60(int64_t a1) {
    char * v1 = (char *)(a1 + 184); // 0x406c74
    int64_t v2; // bp-4900, 0x406c60
    if (*v1 == 0) {
        uint32_t v3 = *(int32_t *)(a1 + 168); // 0x407020
        char v4 = *(char *)((int64_t)v3 + (int64_t)"?pcdb-lswd"); // 0x407031
        v2 = v4;
    } else {
        // 0x406c81
        function_40bb60(a1 + 24);
    }
    // 0x406c92
    int32_t v5; // 0x406c60
    if (g168 != 0) {
        int32_t v6 = *(int32_t *)(a1 + 188); // 0x406fb8
        if (v6 == 1 || v6 != 2) {
            goto lab_0x406ca4;
        } else {
            // 0x406fd0
            v5 = g153;
            if (g153 != 1) {
                goto lab_0x406cb3;
            } else {
                goto lab_0x406fe8;
            }
        }
    } else {
        goto lab_0x406ca4;
    }
  lab_0x406ca4:
    // 0x406ca4
    v5 = g153;
    if (g153 == 1) {
        goto lab_0x406fe8;
    } else {
        goto lab_0x406cb3;
    }
  lab_0x406fe8:;
    int64_t v7 = *(int64_t *)(a1 + 128); // bp-4888, 0x406ffd
    char v8 = *v1; // 0x407002
    int32_t v9 = (int32_t)*(int64_t *)(a1 + 136); // 0x407009
    int32_t v10 = v9; // 0x40700e
    char v11 = v8; // 0x40700e
    int32_t v12 = v9; // 0x40700e
    char v13 = v8; // 0x40700e
    if (g136 == 0) {
        goto lab_0x406ce1;
    } else {
        goto lab_0x407060;
    }
  lab_0x406cb3:
    // 0x406cb3
    if (v5 != 0) {
        if (v5 != 2) {
            // 0x40761d
            abort();
            // UNREACHABLE
        }
        // 0x406f89
        v7 = *(int64_t *)(a1 + 96);
        char v14 = *v1; // 0x406f9d
        int32_t v15 = (int32_t)*(int64_t *)(a1 + 104); // 0x406fa4
        v10 = v15;
        v11 = v14;
        v12 = v15;
        v13 = v14;
        if (g136 == 0) {
            goto lab_0x406ce1;
        } else {
            goto lab_0x407060;
        }
    } else {
        // 0x406cbb
        v7 = *(int64_t *)(a1 + 112);
        char v16 = *v1; // 0x406ccf
        int32_t v17 = (int32_t)*(int64_t *)(a1 + 120); // 0x406cd6
        v10 = v17;
        v11 = v16;
        v12 = v17;
        v13 = v16;
        if (g136 != 0) {
            goto lab_0x407060;
        } else {
            goto lab_0x406ce1;
        }
    }
  lab_0x406ce1:;
    // 0x406ce1
    int64_t v18; // bp-3704, 0x406c60
    int64_t v19 = &v18; // 0x406ce1
    int32_t v20 = v10; // 0x406ce9
    char v21 = v11; // 0x406ce9
    int64_t v22 = v19; // 0x406ce9
    int64_t v23 = v19; // 0x406ce9
    goto lab_0x406cec;
  lab_0x407060:;
    int64_t v100 = (int64_t)&g21; // 0x407068
    int64_t v28; // bp-4712, 0x406c60
    if (v13 != 0) {
        int64_t v101 = *(int64_t *)(a1 + 32); // 0x40706a
        v100 = (int64_t)&g21;
        if (v101 != 0) {
            // 0x407378
            v100 = function_40e520(v101, &v28);
        }
    }
    int64_t v102 = &v18; // 0x407077
    __sprintf_chk((char *)&v18, 1, 3643, "%*s ", (int64_t)g166, (char *)v100);
    int64_t v103 = v102;
    int32_t v104 = *(int32_t *)v103; // 0x4070a2
    int64_t v105 = v103 + 4; // 0x4070a4
    int32_t v106 = v104 - 0x1010101 & (v104 ^ -0x7f7f7f80); // 0x4070b0
    uint32_t v107 = v106 & -0x7f7f7f80; // 0x4070b2
    while (v107 == 0) {
        // 0x4070a2
        v103 = v105;
        v104 = *(int32_t *)v103;
        v105 = v103 + 4;
        v106 = v104 - 0x1010101 & (v104 ^ -0x7f7f7f80);
        v107 = v106 & -0x7f7f7f80;
    }
    unsigned char v108 = (char)((v106 & 0x8080) == 0 ? v107 / 0x10000 : v107); // 0x4070d2
    v20 = v12;
    v21 = *v1;
    int64_t v29 = v100; // 0x4070df
    v22 = v102;
    v23 = ((v106 & 0x8080) == 0 ? v103 + 6 : v105) - (-1 - v108 < v108 ? 4 : 3);
    goto lab_0x406cec;
  lab_0x406cec:;
    char v24 = v21; // 0x406cf3
    int64_t v25 = v23; // 0x406cf3
    if (g148 != 0) {
        int64_t v26 = (int64_t)&g21; // 0x406cfd
        if (v21 != 0) {
            int32_t v27 = *(int32_t *)&g147; // 0x4074a4
            v26 = function_40d5d0(*(int64_t *)(a1 + 88), &v28, v27, 512, g146, v29);
        }
        uint32_t v30 = g164 - (int32_t)function_40eb70(v26, 0); // 0x406d14
        int64_t v31 = v23; // 0x406d1d
        if (v30 >= 1) {
            int32_t v32 = v30 - 1;
            int64_t v33 = v23 + 1; // 0x406d25
            int64_t v34 = v23 + 1; // 0x406d30
            *(char *)v23 = 32;
            while (v34 != v33 + (int64_t)v32) {
                int64_t v35 = v34;
                v34 = v35 + 1;
                *(char *)v35 = 32;
            }
            // 0x406d3d
            v31 = v33 + (int64_t)v32;
        }
        int64_t v36 = v26; // 0x406c60
        char v37 = *(char *)v36; // 0x406d49
        int64_t v38 = v31 + 1; // 0x406d4e
        char * v39 = (char *)v31;
        *v39 = v37;
        int64_t v40 = v38; // 0x406d57
        v36++;
        while (v37 != 0) {
            // 0x406d45
            v37 = *(char *)v36;
            v38 = v40 + 1;
            v39 = (char *)v40;
            *v39 = v37;
            v40 = v38;
            v36++;
        }
        // 0x406d59
        *v39 = 32;
        v24 = *v1;
        v25 = v38;
    }
    int64_t v41 = (int64_t)&g21; // 0x406d6b
    if (v24 != 0) {
        // 0x407260
        v41 = function_40e520(*(int64_t *)(a1 + 40), &v28);
    }
    char * str = (char *)v25; // 0x406d96
    __sprintf_chk(str, 1, -1, "%s %*s ", &v2, (int64_t)g163, (char *)v41);
    int32_t len = strlen(str); // 0x406d9e
    if (g144 != 0) {
        // 0x407238
        fwrite_unlocked((int64_t *)"  ", 1, 2, g86);
        g105 += 2;
    }
    int64_t v42 = v25 + (int64_t)len; // 0x406da7
    int64_t v43; // 0x406c60
    if (g71 != 0) {
        goto lab_0x406de0;
    } else {
        // 0x406dc0
        v43 = v42;
        if ((g150 || g70 || g169) == 0) {
            goto lab_0x406e30;
        } else {
            goto lab_0x406de0;
        }
    }
  lab_0x406de0:
    // 0x406de0
    fputs_unlocked((char *)&v18, g86);
    g105 += v42 - v22;
    if (g71 != 0) {
        // 0x4072e8
        function_405520(*(int32_t *)(a1 + 52), g160, *v1);
    }
    // 0x406e06
    if (g70 != 0) {
        int64_t v44 = (int64_t)*(int32_t *)(a1 + 56); // 0x4072d2
        int64_t v45 = (int64_t)&g21; // 0x4072d5
        if (*v1 != 0) {
            // 0x407348
            v45 = 0;
            if (g149 == 0) {
                // 0x407353
                v45 = function_40e2f0(v44);
            }
        }
        // 0x4072d7
        function_405460(v45, v44, (int64_t)g159);
    }
    // 0x406e13
    if (g150 != 0) {
        // 0x4072a0
        function_405520(*(int32_t *)(a1 + 52), g158, *v1);
    }
    int64_t v46 = &v18; // 0x406e27
    v43 = v46;
    if (g169 != 0) {
        // 0x407280
        function_405460(*(int64_t *)(a1 + 176), 0, (int64_t)g161);
        v43 = v46;
    }
    goto lab_0x406e30;
  lab_0x406e30:;
    int64_t v47 = (int64_t)&g21; // 0x406e37
    int64_t v48; // 0x406c60
    int64_t v49; // bp-4776, 0x406c60
    if (*v1 == 0) {
        goto lab_0x406e76;
    } else {
        // 0x406e3d
        if ((*(int32_t *)(a1 + 48) & 0xb000) == 0x2000) {
            int32_t v50 = -2 - g157 - g156 + g155; // 0x4073ff
            int64_t * v51 = (int64_t *)(a1 + 64); // 0x407402
            uint64_t v52 = *v51; // 0x407402
            int64_t v53 = function_40e520(v52 / 0x1000 & 0xffffff00 | v52 % 256, &v28); // 0x407415
            uint64_t v54 = *v51; // 0x40742c
            int64_t v55 = function_40e520(v54 / 0x100000000 & 0xfffff000 | v54 / 256 % 0x1000, &v49); // 0x40744e
            int32_t v56 = v50 >= 0 ? v50 : 0; // 0x407460
            __sprintf_chk((char *)v43, 1, -1, "%*s, %*s ", (int64_t)(g157 + v56), (char *)v55, (int64_t)g156, (char *)v53);
            v48 = v43 + 1 + (int64_t)g155;
            goto lab_0x406ecd;
        } else {
            int64_t v57 = *(int64_t *)(a1 + 72); // 0x406e50
            char * v58; // 0x406c60
            int64_t v59 = function_40d5d0(v57, &v28, g145, 1, g69, (int64_t)v58); // 0x406e6e
            v47 = v59;
            goto lab_0x406e76;
        }
    }
  lab_0x406e76:;
    uint32_t v60 = g155 - (int32_t)function_40eb70(v47, 0); // 0x406e87
    int64_t v61 = v43; // 0x406e90
    if (v60 >= 1) {
        int32_t v62 = v60 - 1;
        int64_t v63 = v43 + 1; // 0x406e98
        int64_t v64 = v43 + 1; // 0x406ea0
        *(char *)v43 = 32;
        while (v64 != v63 + (int64_t)v62) {
            int64_t v65 = v64;
            v64 = v65 + 1;
            *(char *)v65 = 32;
        }
        // 0x406ead
        v61 = v63 + (int64_t)v62;
    }
    int64_t v66 = v47; // 0x406c60
    char v67 = *(char *)v66; // 0x406eb9
    int64_t v68 = v61 + 1; // 0x406ebe
    char * v69 = (char *)v61;
    *v69 = v67;
    int64_t v70 = v68; // 0x406ec7
    v66++;
    while (v67 != 0) {
        // 0x406eb5
        v67 = *(char *)v66;
        v68 = v70 + 1;
        v69 = (char *)v70;
        *v69 = v67;
        v70 = v68;
        v66++;
    }
    // 0x406ec9
    *v69 = 32;
    v48 = v68;
    goto lab_0x406ecd;
  lab_0x406ecd:;
    char * str2 = (char *)v48; // 0x406ecd
    *str2 = 1;
    int64_t v71; // 0x406c60
    int64_t v72; // 0x406c60
    int64_t v73; // 0x406c60
    int64_t v74; // 0x406c60
    int64_t v75; // bp-4840, 0x406c60
    uint64_t v76; // 0x407192
    if (*v1 != 0) {
        // 0x407160
        if (function_4176f0(g122, &v7, &v75) == 0) {
            goto lab_0x407218;
        } else {
            // 0x40717f
            v76 = (int64_t)v20;
            if (g170 < v7) {
                goto lab_0x407595;
            } else {
                int64_t v77 = g171; // 0x40718b
                if (g170 > v7) {
                    int64_t v78 = g170 - 0xf0c2ac; // 0x407390
                    v71 = 1;
                    v72 = v7;
                    v74 = v77;
                    v73 = v78;
                    if (v78 < v7) {
                        goto lab_0x4071c6;
                    } else {
                        goto lab_0x4073a0;
                    }
                } else {
                    if (g171 - v20 < 0) {
                        goto lab_0x407595;
                    } else {
                        // 0x4071b4
                        v71 = 0;
                        if (g170 - 0xf0c2ac < v7) {
                            // 0x4073cd
                            v71 = v77 > v76;
                            goto lab_0x4071c6;
                        } else {
                            goto lab_0x4071c6;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x406ee3;
    }
  lab_0x406ee3:;
    int64_t v79 = g52; // 0x406eed
    int64_t v80 = (int64_t)&g21; // 0x406eed
    int64_t v81 = (int64_t)&g21; // 0x406eed
    if (g52 < 0) {
        goto lab_0x4074fa;
    } else {
        goto lab_0x406ef3;
    }
  lab_0x407218:;
    int64_t v82 = v48; // 0x40721b
    if (*str2 != 0) {
        // 0x4074cb
        if (*v1 == 0) {
            goto lab_0x406ee3;
        } else {
            // 0x4074d8
            int64_t v83; // bp-4872, 0x406c60
            int64_t v84 = function_40e480(v7, &v83); // 0x4074e2
            v79 = g52;
            v80 = v84;
            v81 = v84;
            if (g52 >= 0) {
                goto lab_0x406ef3;
            } else {
                goto lab_0x4074fa;
            }
        }
    } else {
        goto lab_0x407221;
    }
  lab_0x4074fa:;
    int64_t v85 = 0; // bp-4912, 0x40750e
    int64_t v86; // 0x406c60
    int32_t v87; // 0x406c60
    if (function_4176f0(g122, &v85, &v49) == 0) {
        // 0x407562
        v86 = g52;
        goto lab_0x407569;
    } else {
        int64_t v88 = *(int64_t *)&g53; // 0x407536
        if (g96 != 0) {
            // 0x4075d0
            v88 = 128 * (int64_t)v87 + (int64_t)&g97;
        }
        int64_t v89 = &v28; // 0x40754c
        int64_t v90 = function_410650(v89, 1001, v88, &v49, g122, 0); // 0x407554
        if (v90 != 0) {
            int64_t v91 = function_40e9b0(v89, v90, 0); // 0x4075f5
            g52 = v91;
            v86 = v91 & 0xffffffff;
            goto lab_0x407569;
        } else {
            // 0x407562
            v86 = g52;
            goto lab_0x407569;
        }
    }
  lab_0x406ef3:
    // 0x406ef3
    __sprintf_chk(str2, 1, -1, "%*s ", v79, (char *)v80);
    int64_t v92 = v48 + (int64_t)strlen(str2); // 0x406f19
    goto lab_0x406f1d;
  lab_0x407221:
    // 0x407221
    *(int16_t *)v82 = 32;
    v92 = v82 + 1;
    goto lab_0x406f1d;
  lab_0x407595:
    // 0x407595
    function_40c150(&g170);
    int64_t v98 = g171; // 0x4075b0
    int64_t v99 = g170 - 0xf0c2ac; // 0x4075b7
    v72 = v7;
    v74 = v98;
    v73 = v99;
    int64_t v94 = v7; // 0x4075c1
    int64_t v95 = v98; // 0x4075c1
    if (v99 < v7) {
        goto lab_0x4073b4;
    } else {
        goto lab_0x4073a0;
    }
  lab_0x406f1d:;
    int64_t v93 = v92 - v22; // 0x406f27
    fputs_unlocked((char *)&v18, g86);
    g105 += v93;
    int64_t result2 = function_406690(a1, 0, (int32_t)&g104, v93); // 0x406f43
    int64_t result; // 0x406c60
    if (*(int32_t *)(a1 + 168) != 6) {
        // 0x406f5a
        result = g143;
        if (g143 != 0) {
            // 0x407308
            result = function_4058a0(*v1);
        }
        // 0x406f68
        return result;
    }
    // 0x4070f8
    if (*(int64_t *)(a1 + 8) == 0) {
        // 0x406f68
        return result2;
    }
    // 0x407103
    fwrite_unlocked((int64_t *)" -> ", 1, 4, g86);
    g105 += 4;
    result = function_406690(a1, 1, 0, v93 + 4 + result2);
    if (g143 != 0) {
        // 0x407148
        result = function_4058a0(1);
    }
    // 0x406f68
    return result;
  lab_0x4073b4:
    // 0x4073b4
    v71 = 1;
    if (v94 < g170) {
        goto lab_0x4071c6;
    } else {
        // 0x4073bd
        v71 = 0;
        if (v94 > g170) {
            goto lab_0x4071c6;
        } else {
            // 0x4073cd
            v71 = v95 > v76;
            goto lab_0x4071c6;
        }
    }
  lab_0x4073a0:
    // 0x4073a0
    v71 = 0;
    if (v73 > v72) {
        goto lab_0x4071c6;
    } else {
        // 0x4073ab
        v71 = 0;
        v94 = v72;
        v95 = v74;
        if ((int32_t)v74 - v20 >= 0) {
            goto lab_0x4071c6;
        } else {
            goto lab_0x4073b4;
        }
    }
  lab_0x407569:
    // 0x407569
    v79 = v86;
    v80 = v81;
    if ((int32_t)v86 < 0) {
        // 0x407572
        g52 = 0;
        v79 = 0;
        v80 = v81;
    }
    goto lab_0x406ef3;
  lab_0x4071c6:;
    // 0x4071c6
    int64_t v96; // 0x406c60
    if (g96 == 0) {
        // 0x407588
        v96 = *(int64_t *)(8 * v71 + (int64_t)&g53);
    } else {
        // 0x4071da
        v96 = 128 * (12 * v71 + (int64_t)v87) + (int64_t)&g97;
    }
    int64_t v97 = function_410650(v48, 1001, v96, &v75, g122, v76); // 0x407202
    if (v97 == 0) {
        goto lab_0x407218;
    } else {
        // 0x40720c
        v82 = v97 + v48;
        goto lab_0x407221;
    }
}
// Address range: 0x407630 - 0x40768a
int64_t function_407630(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407630
    int64_t v1; // bp-8216, 0x407630
    int64_t v2 = &v1; // 0x407649
    int64_t v3 = v2; // bp-8232, 0x407658
    int64_t v4; // bp-8224, 0x407630
    char v5; // bp-8233, 0x407630
    function_405ea0(&v3, a1, a2, a3 & 0xffffffff, (int32_t)(int64_t)&v4, (int64_t *)&v5);
    int64_t v6 = v3; // 0x407662
    if (v6 != v2 && v6 != a1) {
        // 0x407671
        free((int64_t *)v6);
    }
    // 0x407676
    return v4 + (int64_t)v5;
}
// Address range: 0x407690 - 0x4077fd
int64_t function_407690(int64_t a1) {
    int64_t v1 = 0; // 0x4076a3
    int64_t v2; // 0x407690
    int64_t v3; // 0x407690
    int64_t v4; // 0x407690
    int64_t v5; // 0x407690
    int64_t v6; // 0x407690
    int64_t v7; // bp-680, 0x407690
    int64_t v8; // 0x407690
    if (g136 == 0) {
        goto lab_0x407752;
    } else {
        // 0x4076a9
        if (g154 == 4) {
            int64_t str = function_40e520(*(int64_t *)(a1 + 32), &v7); // 0x4077cf
            int64_t len = strlen((char *)str); // 0x4077d7
            v3 = len;
            v1 = len + 1;
            goto lab_0x407752;
        } else {
            // 0x4076b6
            v4 = &g167;
            v2 = &g165;
            if (g148 == 0) {
                // 0x4077b0
                v5 = &g167;
                v8 = &g162;
                v6 = &g167;
                if (g169 != 0) {
                    goto lab_0x4076fd;
                } else {
                    goto lab_0x407700;
                }
            } else {
                goto lab_0x4076d9;
            }
        }
    }
  lab_0x407752:;
    int64_t v9 = v1; // 0x407759
    int64_t v10 = v3; // 0x407759
    int64_t v11; // 0x407690
    if (g148 == 0) {
        goto lab_0x4076dc;
    } else {
        // 0x40775f
        v4 = v1;
        v2 = &g165;
        if (g154 == 4) {
            // 0x40776c
            v4 = v1;
            v2 = 2;
            if (*(char *)(a1 + 184) != 0) {
                int32_t v12 = *(int32_t *)&g147; // 0x407791
                int64_t v13; // 0x407690
                int64_t str2 = function_40d5d0(*(int64_t *)(a1 + 88), &v7, v12, 512, g146, v13); // 0x407797
                v11 = 512;
                v4 = v1;
                v2 = (int64_t)strlen((char *)str2) + 1;
            }
        }
        goto lab_0x4076d9;
    }
  lab_0x4076dc:;
    // 0x4076dc
    int64_t v14; // 0x407690
    int64_t v15 = v14; // 0x4076e3
    v6 = v9;
    int64_t v16 = v10; // 0x4076e3
    int64_t v17; // 0x407690
    if (g169 == 0) {
        goto lab_0x407700;
    } else {
        // 0x4076e5
        v17 = v14;
        v5 = v9;
        v8 = &g162;
        if (g154 == 4) {
            // 0x4077e8
            v17 = v14;
            v5 = v9;
            v8 = (int64_t)strlen((char *)*(int64_t *)(a1 + 176)) + 1;
        }
        goto lab_0x4076fd;
    }
  lab_0x407700:;
    int64_t v18 = v16 + v6; // 0x407716
    int64_t result = v18; // 0x407721
    if (g143 != 0) {
        uint32_t v19 = *(int32_t *)(a1 + 168); // 0x407723
        uint32_t v20 = *(int32_t *)(a1 + 48); // 0x407729
        unsigned char v21 = *(char *)(a1 + 184); // 0x40772c
        result = v18 + (int64_t)((char)function_4057b0((int64_t)v21, (int64_t)v20, (int64_t)v19, v15) != 0);
    }
    // 0x407743
    return result;
  lab_0x4076d9:
    // 0x4076d9
    v14 = v11;
    v9 = v2 + v4;
    v10 = v2;
    goto lab_0x4076dc;
  lab_0x4076fd:
    // 0x4076fd
    v15 = v17;
    v6 = v8 + v5;
    v16 = v8;
    goto lab_0x407700;
}
// Address range: 0x407800 - 0x407ae0
int64_t function_407800(int32_t a1) {
    int64_t v1 = g179; // 0x40780d
    uint64_t v2 = (int64_t)g106; // 0x407814
    uint64_t result = v1 > v2 ? v2 : v1; // 0x407821
    int64_t v3 = v1; // 0x40782c
    if (result > (int64_t)g91) {
        int64_t v4 = (int64_t)g107; // 0x407835
        int64_t v5; // 0x407800
        int64_t v6; // 0x407800
        if (result < v2 / 2) {
            uint128_t v7 = 48 * (int128_t)result; // 0x407aaa
            if ((int64_t)v7 < 0 || v7 % 0x3f0000000000000001 != 0) {
                // 0x407adb
                return function_412bd0(v4);
            }
            int64_t v8 = function_4129e0(v4, 48 * result); // 0x407aca
            v5 = 2 * result;
            v6 = v8;
        } else {
            uint128_t v9 = 24 * (g106 & 0xffffffffffffffff); // 0x407850
            if ((int64_t)v9 < 0 || v9 % 0x1f0000000000000001 != 0) {
                // 0x407adb
                return function_412bd0(v4);
            }
            int64_t v10 = function_4129e0(v4, 24 * v2); // 0x407873
            v5 = g106;
            v6 = v10;
        }
        // 0x407886
        g107 = (char *)v6;
        int64_t v11 = g91; // 0x407886
        int64_t v12 = v5 - v11; // 0x407890
        uint64_t v13 = v11 + 1; // 0x407893
        uint64_t v14 = v13 + v5; // 0x407897
        if (v14 < v13) {
            // 0x407adb
            return function_412bd0(v12);
        }
        uint64_t v15 = v14 * v12; // 0x4078a6
        if (v14 != v15 / v12) {
            // 0x407adb
            return function_412bd0(v12);
        }
        int64_t v16 = 8 * v15 / 2; // 0x4078d3
        if (v16 < 0 || v15 >= 0x4000000000000000) {
            // 0x407adb
            return function_412bd0(v16);
        }
        int64_t v17 = function_412980(v16); // 0x4078e6
        uint64_t v18 = (int64_t)g91; // 0x4078eb
        if (v5 > v18) {
            int64_t v19 = v17; // 0x40790e
            int64_t v20 = 8 * v18; // 0x40790e
            v20 += 8;
            *(int64_t *)((int64_t)g107 - 8 + 3 * v20) = v19;
            v19 += v20;
            while (8 * v5 != v20) {
                // 0x407910
                v20 += 8;
                *(int64_t *)((int64_t)g107 - 8 + 3 * v20) = v19;
                v19 += v20;
            }
        }
        // 0x407925
        g91 = v5;
        v3 = g179;
    }
    // 0x407933
    if (result != 0) {
        int64_t v21 = 3; // 0x40794b
        int64_t v22 = 0; // 0x40794b
        int64_t v23 = 8 * v21 + (int64_t)g107;
        int64_t v24 = *(int64_t *)(v23 - 8); // 0x407950
        *(char *)(v23 - 24) = 1;
        v22 += 8;
        *(int64_t *)(v23 - 16) = v21;
        int64_t v25 = v24; // 0x407967
        *(int64_t *)v25 = 3;
        v25 += 8;
        while (v24 + v22 != v25) {
            // 0x407970
            *(int64_t *)v25 = 3;
            v25 += 8;
        }
        // 0x407980
        v21 += 3;
        while (v21 != result + 3 + 2 * result) {
            // 0x407950
            v23 = 8 * v21 + (int64_t)g107;
            v24 = *(int64_t *)(v23 - 8);
            *(char *)(v23 - 24) = 1;
            v22 += 8;
            *(int64_t *)(v23 - 16) = v21;
            v25 = v24;
            *(int64_t *)v25 = 3;
            v25 += 8;
            while (v24 + v22 != v25) {
                // 0x407970
                *(int64_t *)v25 = 3;
                v25 += 8;
            }
            // 0x407980
            v21 += 3;
        }
    }
    if (v3 != 0) {
        uint64_t v26 = 0;
        int64_t v27 = function_407690(*(int64_t *)(g176 + 8 * v26)); // 0x4079a3
        uint64_t v28 = (int64_t)g179; // 0x4079a8
        int64_t v29; // 0x407800
        int64_t v30; // 0x407800
        int64_t v31; // 0x407800
        int64_t v32; // 0x407800
        int64_t v33; // 0x4079cb
        char * v34; // 0x407a31
        uint64_t v35; // 0x407a34
        uint64_t v36; // 0x4079fa
        int64_t * v37; // 0x407a02
        uint64_t v38; // 0x407a02
        int64_t * v39; // 0x407a0a
        if (result != 0) {
            // 0x4079bb
            v33 = v27 + 2;
            v31 = 0;
            v30 = (int64_t)g107;
            v34 = (char *)v30;
            v35 = v31 + 1;
            if (*v34 != 0) {
                if ((char)a1 != 0) {
                    // 0x4079d8
                    v32 = v26 / ((v31 + v28) / v35);
                } else {
                    // 0x407a3f
                    v32 = v26 % v35;
                }
                // 0x4079f0
                v36 = v32 != v31 ? v33 : v27;
                v37 = (int64_t *)(*(int64_t *)(v30 + 16) + 8 * v32);
                v38 = *v37;
                if (v36 > v38) {
                    // 0x407a0a
                    v39 = (int64_t *)(v30 + 8);
                    *v39 = v36 - v38 + *v39;
                    *v37 = v36;
                    *v34 = (char)(*v39 < (int64_t)g123);
                }
            }
            // 0x407a25
            v29 = v30 + 24;
            while (result != v35) {
                // 0x407a31
                v31 = v35;
                v30 = v29;
                v34 = (char *)v30;
                v35 = v31 + 1;
                if (*v34 != 0) {
                    if ((char)a1 != 0) {
                        // 0x4079d8
                        v32 = v26 / ((v31 + v28) / v35);
                    } else {
                        // 0x407a3f
                        v32 = v26 % v35;
                    }
                    // 0x4079f0
                    v36 = v32 != v31 ? v33 : v27;
                    v37 = (int64_t *)(*(int64_t *)(v30 + 16) + 8 * v32);
                    v38 = *v37;
                    if (v36 > v38) {
                        // 0x407a0a
                        v39 = (int64_t *)(v30 + 8);
                        *v39 = v36 - v38 + *v39;
                        *v37 = v36;
                        *v34 = (char)(*v39 < (int64_t)g123);
                    }
                }
                // 0x407a25
                v29 = v30 + 24;
            }
        }
        int64_t v40 = v26 + 1; // 0x407a50
        while (v40 < v28) {
            // 0x407998
            v26 = v40;
            v27 = function_407690(*(int64_t *)(g176 + 8 * v26));
            v28 = (int64_t)g179;
            if (result != 0) {
                // 0x4079bb
                v33 = v27 + 2;
                v31 = 0;
                v30 = (int64_t)g107;
                v34 = (char *)v30;
                v35 = v31 + 1;
                if (*v34 != 0) {
                    if ((char)a1 != 0) {
                        // 0x4079d8
                        v32 = v26 / ((v31 + v28) / v35);
                    } else {
                        // 0x407a3f
                        v32 = v26 % v35;
                    }
                    // 0x4079f0
                    v36 = v32 != v31 ? v33 : v27;
                    v37 = (int64_t *)(*(int64_t *)(v30 + 16) + 8 * v32);
                    v38 = *v37;
                    if (v36 > v38) {
                        // 0x407a0a
                        v39 = (int64_t *)(v30 + 8);
                        *v39 = v36 - v38 + *v39;
                        *v37 = v36;
                        *v34 = (char)(*v39 < (int64_t)g123);
                    }
                }
                // 0x407a25
                v29 = v30 + 24;
                while (result != v35) {
                    // 0x407a31
                    v31 = v35;
                    v30 = v29;
                    v34 = (char *)v30;
                    v35 = v31 + 1;
                    if (*v34 != 0) {
                        if ((char)a1 != 0) {
                            // 0x4079d8
                            v32 = v26 / ((v31 + v28) / v35);
                        } else {
                            // 0x407a3f
                            v32 = v26 % v35;
                        }
                        // 0x4079f0
                        v36 = v32 != v31 ? v33 : v27;
                        v37 = (int64_t *)(*(int64_t *)(v30 + 16) + 8 * v32);
                        v38 = *v37;
                        if (v36 > v38) {
                            // 0x407a0a
                            v39 = (int64_t *)(v30 + 8);
                            *v39 = v36 - v38 + *v39;
                            *v37 = v36;
                            *v34 = (char)(*v39 < (int64_t)g123);
                        }
                    }
                    // 0x407a25
                    v29 = v30 + 24;
                }
            }
            // 0x407a50
            v40 = v26 + 1;
        }
    }
    // 0x407a5d
    if (result < 2) {
        // 0x407a94
        return result;
    }
    int64_t v41 = 24 * result + (int64_t)g107;
    if (*(char *)(v41 - 24) != 0) {
        // 0x407a94
        return result;
    }
    int64_t v42 = v41 - 48; // 0x407a7e
    int64_t result2 = result; // 0x407a7e
    while (result2 != 2) {
        // 0x407a8a
        result2--;
        // 0x407a80
        if (*(char *)v42 != 0) {
            // break -> 0x407a94
            break;
        }
        v42 -= 24;
    }
    // 0x407a94
    return result2;
}
// Address range: 0x407ae0 - 0x407c98
int64_t function_407ae0(int64_t a1) {
    // 0x407ae0
    int64_t v1; // 0x407ae0
    int64_t v2; // 0x407ae0
    int64_t v3; // 0x407ae0
    int64_t v4; // 0x407ae0
    int64_t v5; // 0x407ae0
    int64_t v6; // 0x407ae0
    int64_t v7; // 0x407ae0
    int32_t v8; // 0x407ae0
    char v9; // 0x407ae0
    int64_t v10; // 0x407b47
    if ((int64_t)g179 != 0) {
        // 0x407b38
        v6 = 0;
        v2 = 0;
        while (true) {
          lab_0x407b38:;
            int64_t v11 = v2;
            v7 = v6;
            v10 = *(int64_t *)(g176 + 8 * v7);
            if ((int64_t)g123 == 0) {
                // 0x407b10
                v4 = v11;
                v1 = v11;
                if (v7 != 0) {
                    int64_t v12 = v11 + 2; // 0x407be0
                    v8 = 32;
                    v9 = 32;
                    v5 = v12;
                    v3 = v12;
                    goto lab_0x407b92;
                } else {
                    goto lab_0x407b1c;
                }
            } else {
                int64_t v13 = function_407690(v10); // 0x407b50
                if (v7 == 0) {
                    // 0x407c38
                    v4 = v11;
                    v1 = v13 + v11;
                    goto lab_0x407b1c;
                } else {
                    int64_t v14 = v11 + 2; // 0x407b65
                    v8 = 32;
                    v9 = 32;
                    v5 = v14;
                    v3 = v13 + v14;
                    if ((int64_t)g123 != 0) {
                        // 0x407b72
                        uint64_t v15; // 0x407b5e
                        int64_t v16; // 0x407b69
                        bool v17 = -3 - v13 < v11 | v16 >= v15;
                        int32_t v18 = v17 ? 10 : 32;
                        char v19 = v17 ? 10 : 32;
                        int64_t v20 = v17 ? 0 : v14;
                        int64_t v21 = v17 ? v13 : v16;
                        v8 = v18;
                        v9 = v19;
                        v5 = v20;
                        v3 = v21;
                    }
                    goto lab_0x407b92;
                }
            }
        }
    }
  lab_0x407c08:;
    int64_t v22 = (int64_t)g86; // 0x407c08
    int64_t * v23 = (int64_t *)(v22 + 40); // 0x407c0f
    uint64_t result = *v23; // 0x407c0f
    if (result >= *(int64_t *)(v22 + 48)) {
        // 0x407c80
        return __overflow(g86, 10);
    }
    // 0x407c19
    *v23 = result + 1;
    *(char *)result = 10;
    return result;
  lab_0x407b1c:;
    int64_t v24 = v7 + 1; // 0x407b22
    function_406af0(v10, v4);
    v6 = v24;
    v2 = v1;
    if (v24 >= (int64_t)g179) {
        // break -> 0x407c08
        goto lab_0x407c08;
    }
    goto lab_0x407b38;
  lab_0x407b92:;
    int64_t v25 = v3;
    int64_t v26 = v5;
    char v27 = v9;
    int32_t v28 = v8;
    int64_t v29 = (int64_t)g86; // 0x407b92
    int64_t * v30 = (int64_t *)(v29 + 40); // 0x407b99
    uint64_t v31 = *v30; // 0x407b99
    if (v31 >= *(int64_t *)(v29 + 48)) {
        // 0x407c48
        __overflow(g86, 0x1000000 * (int32_t)a1 >> 24);
    } else {
        // 0x407ba7
        *v30 = v31 + 1;
        *(char *)v31 = (char)a1;
    }
    int64_t v32 = (int64_t)g86; // 0x407bb2
    int64_t * v33 = (int64_t *)(v32 + 40); // 0x407bb9
    uint64_t v34 = *v33; // 0x407bb9
    if (v34 >= *(int64_t *)(v32 + 48)) {
        // 0x407c70
        __overflow(g86, v28);
        v4 = v26;
        v1 = v25;
    } else {
        // 0x407bc7
        *v33 = v34 + 1;
        *(char *)v34 = v27;
        v4 = v26;
        v1 = v25;
    }
    goto lab_0x407b1c;
}
// Address range: 0x407ca0 - 0x40803a
int64_t function_407ca0(int64_t a1, int64_t a2) {
    uint32_t v1 = g154; // 0x407cbb
    int64_t result6 = v1; // 0x407cbb
    g212 = result6;
    switch (v1) {
        case 0: {
            // 0x407de0
            if ((int64_t)g179 == 0) {
                // 0x407f89
                return 0;
            }
            int64_t v2 = 0; // 0x407dea
            function_405e30();
            function_406c60(*(int64_t *)(g176 + 8 * v2));
            int64_t v3 = (int64_t)g86; // 0x407e05
            int64_t * v4 = (int64_t *)(v3 + 40); // 0x407e0c
            uint64_t v5 = *v4; // 0x407e0c
            int64_t result; // 0x407ca0
            if (v5 >= *(int64_t *)(v3 + 48)) {
                // 0x407fc0
                result = __overflow(g86, 10);
            } else {
                // 0x407e1a
                *v4 = v5 + 1;
                *(char *)v5 = 10;
                result = v5;
            }
            // 0x407e25
            g105++;
            v2++;
            while (v2 < (int64_t)g179) {
                // 0x407df0
                function_405e30();
                function_406c60(*(int64_t *)(g176 + 8 * v2));
                v3 = (int64_t)g86;
                v4 = (int64_t *)(v3 + 40);
                v5 = *v4;
                if (v5 >= *(int64_t *)(v3 + 48)) {
                    // 0x407fc0
                    result = __overflow(g86, 10);
                } else {
                    // 0x407e1a
                    *v4 = v5 + 1;
                    *(char *)v5 = 10;
                    result = v5;
                }
                // 0x407e25
                g105++;
                v2++;
            }
            // 0x407f89
            return result;
        }
        case 1: {
            // 0x407e40
            if ((int64_t)g179 == 0) {
                // 0x407f89
                return 1;
            }
            int64_t v6 = 0; // 0x407e4a
            function_406af0(*(int64_t *)(g176 + 8 * v6), 0);
            int64_t v7 = (int64_t)g86; // 0x407e62
            int64_t * v8 = (int64_t *)(v7 + 40); // 0x407e69
            uint64_t v9 = *v8; // 0x407e69
            int64_t result2; // 0x407ca0
            if (v9 >= *(int64_t *)(v7 + 48)) {
                // 0x407fb0
                result2 = __overflow(g86, 10);
            } else {
                // 0x407e77
                *v8 = v9 + 1;
                *(char *)v9 = 10;
                result2 = v9;
            }
            // 0x407e82
            v6++;
            while (v6 < (int64_t)g179) {
                // 0x407e50
                function_406af0(*(int64_t *)(g176 + 8 * v6), 0);
                v7 = (int64_t)g86;
                v8 = (int64_t *)(v7 + 40);
                v9 = *v8;
                if (v9 >= *(int64_t *)(v7 + 48)) {
                    // 0x407fb0
                    result2 = __overflow(g86, 10);
                } else {
                    // 0x407e77
                    *v8 = v9 + 1;
                    *(char *)v9 = 10;
                    result2 = v9;
                }
                // 0x407e82
                v6++;
            }
            // 0x407f89
            return result2;
        }
        case 2: {
            // 0x407e98
            if ((int64_t)g123 == 0) {
                // 0x407dcd
                return function_407ae0(32);
            }
            uint64_t v10 = function_407800(1); // 0x407eab
            uint64_t v11 = (int64_t)g179;
            int64_t result3 = v11 / v10;
            int64_t v12 = result3 + (int64_t)(v11 % v10 != 0); // 0x407ee1
            if (v12 == 0) {
                // 0x407f89
                return result3;
            }
            int64_t * v13 = (int64_t *)(24 * v10 - 8 + (int64_t)g107);
            int64_t result4 = 0; // 0x407f73
            int64_t v14 = *(int64_t *)(g176 + 8 * result4); // 0x407f1d
            int64_t v15 = function_407690(v14); // 0x407f24
            function_406af0(v14, 0);
            int64_t v16 = result4 + v12; // 0x407f45
            int64_t v17 = v16; // 0x407f51
            int64_t v18 = v15; // 0x407f51
            int64_t v19 = 0; // 0x407f51
            int64_t v20; // 0x407ca0
            int64_t v21; // 0x407ca0
            int64_t v22; // 0x407f3c
            int64_t v23; // 0x407f05
            int64_t v24; // 0x407f1d
            int64_t v25; // 0x407f24
            int64_t v26; // 0x407f45
            if (v16 < (int64_t)g179) {
                v22 = 8;
                v23 = *(int64_t *)*v13 + v19;
                function_4052c0(v18 + v19, v23);
                v24 = *(int64_t *)(g176 + 8 * v17);
                v25 = function_407690(v24);
                function_406af0(v24, v23);
                v26 = v17 + v12;
                v17 = v26;
                v20 = *(int64_t *)(*v13 + v22);
                v18 = v25;
                v21 = v22;
                v19 = v23;
                while (v26 < (int64_t)g179) {
                    // 0x407f00
                    v22 = v21 + 8;
                    v23 = v20 + v19;
                    function_4052c0(v18 + v19, v23);
                    v24 = *(int64_t *)(g176 + 8 * v17);
                    v25 = function_407690(v24);
                    function_406af0(v24, v23);
                    v26 = v17 + v12;
                    v17 = v26;
                    v20 = *(int64_t *)(*v13 + v22);
                    v18 = v25;
                    v21 = v22;
                    v19 = v23;
                }
            }
            int64_t v27 = (int64_t)g86; // 0x407f53
            int64_t * v28 = (int64_t *)(v27 + 40); // 0x407f5a
            uint64_t v29 = *v28; // 0x407f5a
            if (v29 >= *(int64_t *)(v27 + 48)) {
                // 0x408000
                __overflow(g86, 10);
            } else {
                // 0x407f68
                *v28 = v29 + 1;
                *(char *)v29 = 10;
            }
            // 0x407f73
            result4++;
            while (v12 != result4) {
                // 0x407ef0
                v14 = *(int64_t *)(g176 + 8 * result4);
                v15 = function_407690(v14);
                function_406af0(v14, 0);
                v16 = result4 + v12;
                v17 = v16;
                v18 = v15;
                v19 = 0;
                if (v16 < (int64_t)g179) {
                    v22 = 8;
                    v23 = *(int64_t *)*v13 + v19;
                    function_4052c0(v18 + v19, v23);
                    v24 = *(int64_t *)(g176 + 8 * v17);
                    v25 = function_407690(v24);
                    function_406af0(v24, v23);
                    v26 = v17 + v12;
                    v17 = v26;
                    v20 = *(int64_t *)(*v13 + v22);
                    v18 = v25;
                    v21 = v22;
                    v19 = v23;
                    while (v26 < (int64_t)g179) {
                        // 0x407f00
                        v22 = v21 + 8;
                        v23 = v20 + v19;
                        function_4052c0(v18 + v19, v23);
                        v24 = *(int64_t *)(g176 + 8 * v17);
                        v25 = function_407690(v24);
                        function_406af0(v24, v23);
                        v26 = v17 + v12;
                        v17 = v26;
                        v20 = *(int64_t *)(*v13 + v22);
                        v18 = v25;
                        v21 = v22;
                        v19 = v23;
                    }
                }
                // 0x407f53
                v27 = (int64_t)g86;
                v28 = (int64_t *)(v27 + 40);
                v29 = *v28;
                if (v29 >= *(int64_t *)(v27 + 48)) {
                    // 0x408000
                    __overflow(g86, 10);
                } else {
                    // 0x407f68
                    *v28 = v29 + 1;
                    *(char *)v29 = 10;
                }
                // 0x407f73
                result4++;
            }
            // 0x407f89
            return result4;
        }
        case 3: {
            // 0x407cd0
            if ((int64_t)g123 == 0) {
                // 0x407dcd
                return function_407ae0(32);
            }
            uint64_t v30 = function_407800(0); // 0x407ce0
            int64_t v31 = *(int64_t *)g176; // 0x407cff
            int64_t v32 = function_407690(v31); // 0x407d05
            int64_t * v33 = (int64_t *)(24 * v30 - 8 + (int64_t)g107); // 0x407d14
            function_406af0(v31, 0);
            int64_t v34 = 1; // 0x407d28
            int64_t v35 = 0; // 0x407d28
            if ((int64_t)g179 >= 2) {
                uint64_t v36 = v34 % v30;
                int64_t v37; // 0x407ca0
                int64_t v38; // 0x407d40
                int64_t * v39; // 0x407d47
                uint64_t v40; // 0x407d47
                int64_t v41; // 0x407dad
                if (v36 == 0) {
                    // 0x407d40
                    v38 = (int64_t)g86;
                    v39 = (int64_t *)(v38 + 40);
                    v40 = *v39;
                    if (v40 >= *(int64_t *)(v38 + 48)) {
                        // 0x408010
                        __overflow(g86, 10);
                        v37 = 0;
                    } else {
                        // 0x407d55
                        *v39 = v40 + 1;
                        *(char *)v40 = 10;
                        v37 = 0;
                    }
                } else {
                    // 0x407dad
                    v41 = v35 + *(int64_t *)*v33;
                    function_4052c0(v35 + v32, v41);
                    v37 = v41;
                }
                int64_t v42 = *(int64_t *)(g176 + 8 * v34); // 0x407d6d
                int64_t v43 = v34 + 1; // 0x407d71
                function_406af0(v42, v37);
                int64_t v44 = function_407690(v42); // 0x407d97
                v34 = v43;
                int64_t v45 = *(int64_t *)(*v33 + 8 * v36); // 0x407d97
                v35 = v37;
                while (v43 < (int64_t)g179) {
                    // 0x407d9d
                    v36 = v34 % v30;
                    if (v36 == 0) {
                        // 0x407d40
                        v38 = (int64_t)g86;
                        v39 = (int64_t *)(v38 + 40);
                        v40 = *v39;
                        if (v40 >= *(int64_t *)(v38 + 48)) {
                            // 0x408010
                            __overflow(g86, 10);
                            v37 = 0;
                        } else {
                            // 0x407d55
                            *v39 = v40 + 1;
                            *(char *)v40 = 10;
                            v37 = 0;
                        }
                    } else {
                        // 0x407dad
                        v41 = v35 + v45;
                        function_4052c0(v35 + v44, v41);
                        v37 = v41;
                    }
                    // 0x407d63
                    v42 = *(int64_t *)(g176 + 8 * v34);
                    v43 = v34 + 1;
                    function_406af0(v42, v37);
                    v44 = function_407690(v42);
                    v34 = v43;
                    v45 = *(int64_t *)(*v33 + 8 * v36);
                    v35 = v37;
                }
            }
            int64_t v46 = (int64_t)g86; // 0x407fd8
            int64_t * v47 = (int64_t *)(v46 + 40); // 0x407fdf
            uint64_t result5 = *v47; // 0x407fdf
            if (result5 >= *(int64_t *)(v46 + 48)) {
                // 0x408022
                return __overflow(g86, 10);
            }
            // 0x407fe9
            *v47 = result5 + 1;
            *(char *)result5 = 10;
            // 0x407f89
            return result5;
        }
        case 4: {
            // 0x407dcd
            return function_407ae0(44);
        }
    }
    // 0x407f89
    return result6;
}
// Address range: 0x408040 - 0x4080b6
int64_t function_408040(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x408040
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x408046
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x408071
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40807e
            return 1;
        }
    } else {
        // 0x40806d
        if (v1 == 3 || v1 == 9) {
            // 0x40807e
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 72); // 0x408080
    int64_t v5 = *(int64_t *)(a2 + 72); // 0x408084
    if (v5 > v4) {
        // 0x40807e
        return 0xffffffff;
    }
    int64_t v6 = v5 - v4; // 0x408084
    if (v6 != 0) {
        // 0x4080a0
        return v6 < 0 != ((v6 ^ v5) & (v5 ^ v4)) < 0;
    }
    char * str = (char *)a1; // 0x408092
    return strcmp(str, str);
}
// Address range: 0x4080c0 - 0x4080f6
int64_t function_4080c0(int64_t a1, int64_t a2) {
    int64_t result = *(int64_t *)(a2 + 72); // 0x4080c0
    int64_t v1 = *(int64_t *)(a1 + 72); // 0x4080c4
    if (v1 > result) {
        // 0x4080cc
        return 0xffffffff;
    }
    int64_t v2 = v1 - result; // 0x4080c4
    if (v2 != 0) {
        // 0x4080e0
        return v2 < 0 != ((v2 ^ v1) & (v1 ^ result)) < 0;
    }
    // 0x4080cc
    return result;
}
// Address range: 0x408100 - 0x408176
int64_t function_408100(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x408100
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x408106
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40812e
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40813b
            return 1;
        }
    } else {
        // 0x40812a
        if (v1 == 3 || v1 == 9) {
            // 0x40813b
            return 0xffffffff;
        }
    }
    int64_t result = *(int64_t *)(a2 + 72); // 0x408140
    int64_t v4 = *(int64_t *)(a1 + 72); // 0x408144
    if (v4 > result) {
        // 0x40813b
        return 0xffffffff;
    }
    int64_t v5 = v4 - result; // 0x408144
    if (v5 != 0) {
        // 0x408160
        return v5 < 0 != ((v5 ^ v4) & (v4 ^ result)) < 0;
    }
    // 0x40813b
    return result;
}
// Address range: 0x408180 - 0x4081f6
int64_t function_408180(int64_t str, int64_t str2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(str + 168); // 0x408180
    int32_t v2 = *(int32_t *)(str2 + 168); // 0x408186
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x4081ae
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x4081bb
            return 1;
        }
    } else {
        // 0x4081aa
        if (v1 == 3 || v1 == 9) {
            // 0x4081bb
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(str2 + 72); // 0x4081c0
    int64_t v5 = *(int64_t *)(str + 72); // 0x4081c4
    if (v5 > v4) {
        // 0x4081bb
        return 0xffffffff;
    }
    int64_t v6 = v5 - v4; // 0x4081c4
    if (v6 != 0) {
        // 0x4081e0
        return v6 < 0 != ((v6 ^ v5) & (v5 ^ v4)) < 0;
    }
    // 0x4081cc
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x408200 - 0x408276
int64_t function_408200(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x408200
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x408206
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x408231
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40823e
            return 1;
        }
    } else {
        // 0x40822d
        if (v1 == 3 || v1 == 9) {
            // 0x40823e
            return 0xffffffff;
        }
    }
    int64_t result = *(int64_t *)(a1 + 72); // 0x408240
    int64_t v4 = *(int64_t *)(a2 + 72); // 0x408244
    if (v4 > result) {
        // 0x40823e
        return 0xffffffff;
    }
    int64_t v5 = v4 - result; // 0x408244
    if (v5 != 0) {
        // 0x408260
        return v5 < 0 != ((v5 ^ v4) & (v4 ^ result)) < 0;
    }
    // 0x40823e
    return result;
}
// Address range: 0x408280 - 0x4082b6
int64_t function_408280(int64_t a1, int64_t result) {
    int64_t v1 = *(int64_t *)(a1 + 72); // 0x408283
    int64_t v2 = *(int64_t *)(result + 72); // 0x408287
    if (v2 > v1) {
        // 0x40828f
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0x408287
    if (v3 != 0) {
        // 0x4082a0
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    // 0x40828f
    return result;
}
// Address range: 0x4082c0 - 0x4082f6
int64_t function_4082c0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 72); // 0x4082c3
    int64_t v2 = *(int64_t *)(a2 + 72); // 0x4082c7
    if (v2 > v1) {
        // 0x4082f0
        return 0xffffffff;
    }
    int64_t v3 = v2 - v1; // 0x4082c7
    if (v3 != 0) {
        // 0x4082e0
        return v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0;
    }
    char * str = (char *)a1; // 0x4082d5
    return strcmp(str, str);
}
// Address range: 0x408300 - 0x408386
int64_t function_408300(int64_t str, int64_t str2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(str + 168); // 0x408300
    int32_t v2 = *(int32_t *)(str2 + 168); // 0x408306
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40832e
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40833b
            return 1;
        }
    } else {
        // 0x40832a
        if (v1 == 3 || v1 == 9) {
            // 0x40833b
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(str2 + 128); // 0x408340
    int64_t v5 = *(int64_t *)(str + 128); // 0x408347
    if (v5 > v4) {
        // 0x40833b
        return 0xffffffff;
    }
    // 0x408350
    if (v5 < v4) {
        // 0x40833b
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(str2 + 136) - *(int32_t *)(str + 136); // 0x408359
    if (result != 0) {
        // 0x40833b
        return result;
    }
    // 0x408361
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x408390 - 0x408406
int64_t function_408390(int64_t str, int64_t str2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(str + 168); // 0x408390
    int32_t v2 = *(int32_t *)(str2 + 168); // 0x408396
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x4083be
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x4083cb
            return 1;
        }
    } else {
        // 0x4083ba
        if (v1 == 3 || v1 == 9) {
            // 0x4083cb
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(str2 + 112); // 0x4083d0
    int64_t v5 = *(int64_t *)(str + 112); // 0x4083d4
    if (v5 > v4) {
        // 0x4083cb
        return 0xffffffff;
    }
    // 0x4083da
    if (v5 < v4) {
        // 0x4083cb
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(str2 + 120) - *(int32_t *)(str + 120); // 0x4083e0
    if (result != 0) {
        // 0x4083cb
        return result;
    }
    // 0x4083e5
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x408410 - 0x4084ad
int64_t function_408410(int32_t a1, int64_t a2) {
    // 0x408410
    if (g149 == 0) {
        int64_t v1 = function_40e160((int64_t)a1); // 0x408488
        if (v1 != 0) {
            int64_t v2 = function_40eb70(v1, 0); // 0x408497
            return (int32_t)v2 < 0 ? 0 : v2 & 0xffffffff;
        }
    }
    // 0x408421
    int64_t v3; // bp-56, 0x408410
    int64_t v4 = &v3; // 0x408421
    __sprintf_chk((char *)&v3, 1, 21, "%lu", a1);
    int64_t v5 = v4;
    int32_t v6 = *(int32_t *)v5; // 0x408443
    int64_t v7 = v5 + 4; // 0x408445
    int32_t v8 = v6 - 0x1010101 & (v6 ^ -0x7f7f7f80); // 0x408451
    uint32_t v9 = v8 & -0x7f7f7f80; // 0x408453
    while (v9 == 0) {
        // 0x408443
        v5 = v7;
        v6 = *(int32_t *)v5;
        v7 = v5 + 4;
        v8 = v6 - 0x1010101 & (v6 ^ -0x7f7f7f80);
        v9 = v8 & -0x7f7f7f80;
    }
    int64_t v10 = (v8 & 0x8080) == 0 ? v5 + 6 : v7; // 0x40846d
    unsigned char v11 = (char)((v8 & 0x8080) == 0 ? v9 / 0x10000 : v9); // 0x408473
    return v10 - v4 + (-1 - v11 < v11 ? 0xfffffffc : 0xfffffffd) & 0xffffffff;
}
// Address range: 0x4084b0 - 0x408579
int64_t function_4084b0(void) {
    int64_t v1 = g179; // 0x4084b2
    int64_t v2 = g176; // 0x4084c9
    int64_t result = 0; // 0x4084c9
    if (v1 != 0) {
        int64_t v3 = *(int64_t *)v2; // 0x4084d0
        v2 += 8;
        free((int64_t *)*(int64_t *)v3);
        free((int64_t *)*(int64_t *)(v3 + 8));
        free((int64_t *)*(int64_t *)(v3 + 16));
        result = &g209;
        while (v2 != 8 * v1 + g176) {
            // 0x4084d0
            v3 = *(int64_t *)v2;
            v2 += 8;
            free((int64_t *)*(int64_t *)v3);
            free((int64_t *)*(int64_t *)(v3 + 8));
            free((int64_t *)*(int64_t *)(v3 + 16));
            result = &g209;
        }
    }
    // 0x4084f7
    *(char *)&g178 = 0;
    g179 = 0;
    g168 = 0;
    g166 = 0;
    g164 = 0;
    g163 = 0;
    g160 = 0;
    g159 = 0;
    g158 = 0;
    g161 = 0;
    g157 = 0;
    g156 = 0;
    g155 = 0;
    return result;
}
// Address range: 0x408580 - 0x40929e
int64_t function_408580(int64_t str, int32_t a2, uint64_t a3, int64_t * str2) {
    int128_t v1 = g179; // 0x40859d
    int64_t v2 = v1; // 0x40859d
    int64_t v3 = v2; // 0x40859d
    int64_t v4 = g181; // 0x4085b2
    int64_t v5 = v4; // 0x4085b2
    int64_t v6 = v4; // 0x4085b9
    int64_t v7 = v2; // 0x4085b9
    if (g180 == v2) {
        uint128_t v8 = 400 * (v1 & 0xffffffffffffffff); // 0x4085c3
        if ((int64_t)v8 < 0 || v8 % 0x1ff0000000000000001 != 0) {
            // 0x409299
            function_412bd0(v4);
            // UNREACHABLE
        }
        // 0x4085de
        v6 = function_4129e0(v4, 400 * v2);
        v7 = g179;
        v3 = v7;
        g180 *= 2;
        g181 = v6;
        v5 = v6;
    }
    int64_t v9 = 200 * v7 + v6; // 0x40860f
    int64_t v10 = v9 + 8; // 0x408615
    int64_t * v11 = (int64_t *)v9; // 0x40861c
    *v11 = 0;
    int64_t v12 = v9 + 188; // 0x408623
    *(int64_t *)v12 = 0;
    int64_t v13 = v10 & -8; // 0x40862e
    int64_t v14 = v9 + 196;
    __asm_rep_stosq_memset((char *)v13, 0, (v14 - v13) / 8 % 0x20000000);
    v3 = 0;
    int64_t * v15 = (int64_t *)(v9 + 32); // 0x408641
    *v15 = 0;
    int32_t * v16 = (int32_t *)(v9 + 168); // 0x408649
    *v16 = a2;
    int32_t * v17 = (int32_t *)v14; // 0x408657
    *v17 = -1;
    if (*(char *)&g178 == 0) {
        // 0x408663
        if (g177 != 0) {
            int64_t v18 = function_404e20(str); // 0x408d17
            *v17 = (int32_t)v18 % 256;
            if ((char)v18 != 0) {
                // 0x408d2d
                *(char *)&g178 = 1;
            }
        }
    }
    char v19 = *(char *)&g141; // 0x408670
    int64_t v20; // 0x408580
    int64_t v21; // 0x408580
    int64_t v22; // 0x408580
    char v23; // 0x408580
    if ((char)a3 == 0) {
        if (v19 != 0) {
            char v24 = *(char *)&v5; // 0x408b47
            v22 = str;
            if (v24 != 47) {
                unsigned char v25 = *(char *)&v3; // 0x408c30
                int64_t v26 = v25; // 0x408c30
                v3 = v26;
                v22 = str;
                v20 = v26;
                v23 = v24;
                if (v25 == 0) {
                    goto lab_0x408b5a;
                } else {
                    goto lab_0x408c43;
                }
            } else {
                goto lab_0x408b5a;
            }
        } else {
            // 0x408801
            if (g121 != 0) {
                goto lab_0x4088e8;
            } else {
                // 0x40880e
                if (a2 != 3 || g142 == 0) {
                    goto lab_0x408818;
                } else {
                    // 0x4091c5
                    if ((char)function_404ae0(19) != 0) {
                        goto lab_0x4088e8;
                    } else {
                        // 0x4091e6
                        if ((char)function_404ae0(18) != 0) {
                            goto lab_0x4088e8;
                        } else {
                            // 0x409200
                            if ((char)function_404ae0(20) != 0) {
                                goto lab_0x4088e8;
                            } else {
                                goto lab_0x408818;
                            }
                        }
                    }
                }
            }
        }
    } else {
        char v27 = *(char *)&v5; // 0x408688
        v21 = str;
        if (v27 == 47) {
            goto lab_0x40869f;
        } else {
            unsigned char v28 = *(char *)&v3; // 0x408693
            int64_t v29 = v28; // 0x408693
            v3 = v29;
            v21 = str;
            v20 = v29;
            v23 = v27;
            if (v28 != 0) {
                goto lab_0x408c43;
            } else {
                goto lab_0x40869f;
            }
        }
    }
  lab_0x40869f:;
    int64_t v30 = v21; // 0x4086a2
    v22 = v21;
    if (v19 != 0) {
        goto lab_0x408b5a;
    } else {
        goto lab_0x4086a8;
    }
  lab_0x408b5a:
    // 0x408b5a
    v5 = v22;
    int64_t v31 = function_40b070(v22, 2); // 0x408b62
    *(int64_t *)(v9 + 16) = v31;
    v30 = v22;
    if (v31 == 0) {
        // 0x408b74
        function_405580(a3 % 256, (int64_t)dcgettext(NULL, "error canonicalizing %s", 5), v22);
        v30 = v22;
    }
    goto lab_0x4086a8;
  lab_0x4088e8:;
    char v134 = *(char *)&v5; // 0x4088ef
    if (v134 == 47) {
        goto lab_0x408903;
    } else {
        unsigned char v135 = *(char *)&v3; // 0x4088f7
        int64_t v136 = v135; // 0x4088f7
        v3 = v136;
        v20 = v136;
        v23 = v134;
        if (v135 != 0) {
            goto lab_0x408c43;
        } else {
            goto lab_0x408903;
        }
    }
  lab_0x4086a8:;
    int64_t v32 = g135; // 0x4086a8
    v3 = v32;
    int64_t v33 = v9 + 24; // 0x4086ae
    int64_t v34 = v30; // 0x4086b5
    int64_t v35 = v33; // 0x4086b5
    int64_t v36; // 0x408580
    int64_t v37; // 0x408580
    int32_t v38; // 0x408bba
    char * v39; // 0x4090da
    if (g135 < 3) {
        goto lab_0x408930;
    } else {
        if (g135 < 5) {
            // 0x408ba0
            v34 = v30;
            v35 = v33;
            if ((char)a3 == 0) {
                goto lab_0x408930;
            } else {
                // 0x408ba9
                v5 = 1;
                v38 = __xstat(1, (char *)v30, (struct stat *)v33);
                if (v32 % 256 == 3) {
                    goto lab_0x408be7;
                } else {
                    if (v38 < 0) {
                        int32_t v40 = *__errno_location(); // 0x4090c5
                        v34 = v30;
                        v35 = v33;
                        if (v40 != 2) {
                            // 0x4090ce
                            v39 = dcgettext(NULL, "cannot access %s", 5);
                            function_405580(1, (int64_t)v39, v30);
                            // 0x4087df
                            return 0;
                        }
                        goto lab_0x408930;
                    } else {
                        // 0x408bd2
                        v34 = v30;
                        v35 = v33;
                        if ((*(int32_t *)(v9 + 48) & 0xf000) != 0x4000) {
                            goto lab_0x408930;
                        } else {
                            goto lab_0x408be7;
                        }
                    }
                }
            }
        } else {
            // 0x4086c4
            v36 = v30;
            v37 = v33;
            v34 = v30;
            v35 = v33;
            if (g135 != 5) {
                goto lab_0x408930;
            } else {
                goto lab_0x4086cd;
            }
        }
    }
  lab_0x408c43:;
    int64_t v41 = (int64_t)str2;
    int32_t len = strlen((char *)str); // 0x408c5d
    int32_t len2 = strlen((char *)str2); // 0x408c68
    v3 = v20;
    int64_t v42 = v41 + 1;
    char v43 = *(char *)v42; // 0x408c74
    int64_t v44; // bp-776, 0x408580
    int64_t v45 = (int64_t)&v44 + 15 - ((int64_t)len + 25 + (int64_t)len2 & -16) & -16; // 0x408c99
    v5 = v45;
    int64_t v46 = v45; // 0x408ca3
    if (v20 == 46 != (v43 == 0)) {
        int64_t v47 = v45 | 1; // 0x408cbb
        *(char *)v45 = (char)v20;
        int64_t v48 = v41; // 0x408cc9
        int64_t v49 = v47; // 0x408cc9
        int64_t v50 = v42; // 0x408cc9
        if (v43 != 0) {
            v3 = v43;
            char v51 = *(char *)(v41 + 2); // 0x408cb3
            v5 = v47;
            int64_t v52 = v47 + 1; // 0x408cbb
            int64_t v53 = v42 + 1; // 0x408cbf
            *(char *)v47 = v43;
            int64_t v54 = v52; // 0x408cc9
            char v55 = v51; // 0x408cc9
            int64_t v56 = v42; // 0x408cc9
            v48 = v42;
            v49 = v52;
            v50 = v53;
            while (v51 != 0) {
                int64_t v57 = v53;
                v3 = v55;
                v51 = *(char *)(v56 + 2);
                v5 = v54;
                v52 = v54 + 1;
                v53 = v57 + 1;
                *(char *)v54 = v55;
                v54 = v52;
                v55 = v51;
                v56 = v57;
                v48 = v57;
                v49 = v52;
                v50 = v53;
            }
        }
        // 0x408ccb
        v46 = v49;
        if (v50 > v41) {
            // 0x408cd0
            v46 = v49;
            if (*(char *)v48 != 47) {
                // 0x408cd6
                *(char *)v49 = 47;
                v46 = v5 + 2;
            }
        }
    }
    int64_t v58 = v46; // 0x408cdf
    if (v23 != 0) {
        int64_t v59 = str + 1; // 0x408cf0
        v3 = v59;
        int64_t v60 = v46 + 1; // 0x408cf4
        *(char *)v46 = v23;
        char v61 = *(char *)v59; // 0x408cfb
        v58 = v60;
        if (v61 != 0) {
            int64_t v62 = v3 + 1; // 0x408cf0
            v3 = v62;
            int64_t v63 = v60 + 1; // 0x408cf4
            *(char *)v60 = v61;
            char v64 = *(char *)v62; // 0x408cfb
            int64_t v65 = v63; // 0x408d00
            v58 = v63;
            while (v64 != 0) {
                // 0x408cf0
                v62 = v3 + 1;
                v3 = v62;
                v63 = v65 + 1;
                *(char *)v65 = v64;
                v64 = *(char *)v62;
                v65 = v63;
                v58 = v63;
            }
        }
    }
    // 0x408d02
    *(char *)v58 = 0;
    v21 = v45;
    goto lab_0x40869f;
  lab_0x408903:;
    int64_t v66 = v9 + 24; // 0x408909
    v36 = str;
    v37 = v66;
    v34 = str;
    v35 = v66;
    if (g135 == 5) {
        goto lab_0x4086cd;
    } else {
        goto lab_0x408930;
    }
  lab_0x408818:;
    // 0x408818
    int64_t result; // 0x408580
    int64_t v67; // 0x408580
    if (g136 != 0) {
        // 0x409060
        v67 = a2 == 0;
        if (a2 != 6 == (a2 != 0)) {
            goto lab_0x4088e8;
        } else {
            goto lab_0x409074;
        }
    } else {
        // 0x408827
        result = 0;
        if (g120 == 0) {
            goto lab_0x4087c8;
        } else {
            int64_t v68 = v3 & -256 | (int64_t)(a2 == 0); // 0x408837
            v3 = v68;
            v67 = v68 & 0xffffff01;
            if (a2 == 6 || a2 == 0) {
                goto lab_0x409074;
            } else {
                goto lab_0x40885b;
            }
        }
    }
  lab_0x408930:
    // 0x408930
    v5 = 1;
    int32_t v69 = __lxstat(1, (char *)v34, (struct stat *)v35); // 0x40893b
    int64_t str5 = v34; // 0x408942
    int64_t v70 = v34; // 0x408942
    if (v69 == 0) {
        goto lab_0x4086e5;
    } else {
        goto lab_0x408948;
    }
  lab_0x4086cd:
    // 0x4086cd
    v5 = 1;
    int32_t v71 = __xstat(1, (char *)v36, (struct stat *)v37); // 0x4086d8
    str5 = v36;
    v70 = v36;
    if (v71 != 0) {
        goto lab_0x408948;
    } else {
        goto lab_0x4086e5;
    }
  lab_0x4086e5:
    // 0x4086e5
    *(char *)(v9 + 184) = 1;
    if (a2 == 5) {
        goto lab_0x408af0;
    } else {
        // 0x4086f6
        if ((*(int32_t *)(v9 + 48) & 0xf000) == 0x8000) {
            goto lab_0x408af0;
        } else {
            goto lab_0x408709;
        }
    }
  lab_0x408948:
    // 0x408948
    function_405580(a3 % 256, (int64_t)dcgettext(NULL, "cannot access %s", 5), v70);
    result = 0;
    if ((char)a3 != 0) {
        // 0x4087df
        return 0;
    }
    goto lab_0x4087c8;
  lab_0x409074:
    // 0x409074
    if (g135 == 5) {
        goto lab_0x4088e8;
    } else {
        // 0x409081
        if (g174 != 0) {
            goto lab_0x4088e8;
        } else {
            // 0x40908e
            if ((g137 || g136) == 0) {
                // 0x4090a3
                result = 0;
                if (g120 == 0) {
                    goto lab_0x4087c8;
                } else {
                    // 0x4090ac
                    if ((char)v67 != 0) {
                        goto lab_0x4088e8;
                    } else {
                        goto lab_0x40885b;
                    }
                }
            } else {
                goto lab_0x4088e8;
            }
        }
    }
  lab_0x4087c8:;
    int64_t v72 = function_412bb0(str); // 0x4087cf
    g179 = (int64_t)g179 + 1;
    *v11 = v72;
    // 0x4087df
    return result;
  lab_0x408af0:
    // 0x408af0
    if (g142 != 0) {
        // 0x408afd
        if ((char)function_404ae0(21) != 0) {
            int32_t * v73 = __errno_location(); // 0x408b0f
            int64_t v74 = *(int64_t *)(v9 + 24); // 0x408b14
            *v73 = 95;
            if (v74 != g94) {
                // 0x408b27
                g94 = v74;
            }
            // 0x408b2e
            *(char *)(v9 + 192) = 0;
        }
    }
    goto lab_0x408709;
  lab_0x40885b:
    // 0x40885b
    result = 0;
    if (a2 != 5) {
        goto lab_0x4087c8;
    } else {
        // 0x408868
        if (g143 == 3) {
            goto lab_0x4088e8;
        } else {
            // 0x408871
            result = 0;
            if (g142 == 0) {
                goto lab_0x4087c8;
            } else {
                // 0x408885
                if ((char)function_404ae0(14) != 0) {
                    goto lab_0x4088e8;
                } else {
                    // 0x40889b
                    if ((char)function_404ae0(16) != 0) {
                        goto lab_0x4088e8;
                    } else {
                        // 0x4088b1
                        if ((char)function_404ae0(17) != 0) {
                            goto lab_0x4088e8;
                        } else {
                            // 0x4088c7
                            result = 0;
                            if ((char)function_404ae0(21) == 0) {
                                goto lab_0x4087c8;
                            } else {
                                goto lab_0x4088e8;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x408709:;
    // 0x408709
    int64_t v75; // 0x408580
    int64_t v76; // 0x408580
    int64_t v77; // 0x408580
    int64_t v78; // 0x408580
    int32_t v79; // 0x408580
    if (g154 != 0 == g169 == 0) {
        goto lab_0x408765;
    } else {
        int32_t * v80 = __errno_location(); // 0x40871e
        int64_t * v81 = (int64_t *)(v9 + 24); // 0x408723
        int64_t v82 = *v81; // 0x408723
        *v80 = 95;
        if (v82 != g93) {
            // 0x408739
            g93 = v82;
        }
        // 0x408740
        *(int64_t *)(v9 + 176) = (int64_t)&g72;
        if (g154 == 0) {
            // 0x408db0
            if (v82 == g92) {
                // 0x409270
                *v80 = 95;
                *(int32_t *)v12 = 0;
                int32_t v83 = *(int32_t *)(v9 + 48) & 0xf000; // 0x409284
                v79 = v83;
                v76 = 0;
                v78 = 0;
                if (v83 != 0xa000) {
                    goto lab_0x408778;
                } else {
                    goto lab_0x408e1d;
                }
            } else {
                // 0x408dbd
                *v80 = 0;
                v5 = str5;
                int32_t v84 = function_40b900(); // 0x408dd6
                if (v84 < 1) {
                    uint64_t v85 = (int64_t)v80; // 0x40871e
                    int32_t v86 = *(int32_t *)(v85 % 256); // 0x409117
                    if (v86 != 95 != (v86 - 22 & -17) != 0) {
                        // 0x409127
                        g92 = *v81;
                    }
                    // 0x409132
                    *(int32_t *)v12 = 0;
                    if (v84 < 0) {
                        int64_t v87 = function_412110(0, 3, str5); // 0x409155
                        error(0, *(int32_t *)(0x100000000000000 * v85 / 0x100000000000000), "%s", (char *)v87);
                    }
                } else {
                    // 0x408dde
                    *(int32_t *)v12 = 2;
                    g168 = 1;
                }
                int32_t v88 = *(int32_t *)(v9 + 48) & 0xf000; // 0x408df3
                v79 = v88;
                v76 = 0;
                if (v88 != 0xa000) {
                    goto lab_0x408778;
                } else {
                    // 0x408e03
                    v77 = 0;
                    v78 = 0;
                    if (g154 == 0) {
                        goto lab_0x408e1d;
                    } else {
                        goto lab_0x408e10;
                    }
                }
            }
        } else {
            // 0x40875b
            *(int32_t *)v12 = 0;
            v75 = g154;
            goto lab_0x408765;
        }
    }
  lab_0x408be7:
    // 0x408be7
    str5 = v30;
    if (v38 != 0) {
        // 0x4090ce
        v39 = dcgettext(NULL, "cannot access %s", 5);
        function_405580(1, (int64_t)v39, v30);
        // 0x4087df
        return 0;
    }
    goto lab_0x4086e5;
  lab_0x408765:;
    int32_t v89 = *(int32_t *)(v9 + 48) & 0xf000; // 0x408768
    v79 = v89;
    v76 = v75;
    v77 = v75;
    if (v89 == 0xa000) {
        goto lab_0x408e10;
    } else {
        goto lab_0x408778;
    }
  lab_0x408e10:
    // 0x408e10
    v78 = v77;
    int64_t v90 = v77; // 0x408e17
    if (g137 == 0) {
        goto lab_0x408ee4;
    } else {
        goto lab_0x408e1d;
    }
  lab_0x408778:;
    // 0x408778
    int64_t v91; // 0x408580
    if (v79 == 0x4000) {
        if ((char)a3 == 0) {
            // 0x408f70
            *v16 = 3;
            v91 = v76;
            goto lab_0x40878d;
        } else {
            // 0x408f55
            if (g133 != 0) {
                // 0x408f70
                *v16 = 3;
                v91 = v76;
                goto lab_0x40878d;
            } else {
                // 0x408f5e
                *v16 = 9;
                v91 = v76;
                goto lab_0x40878d;
            }
        }
    } else {
        // 0x408783
        *v16 = 5;
        v91 = v76;
        goto lab_0x40878d;
    }
  lab_0x408ee4:
    // 0x408ee4
    *v16 = 6;
    v91 = v90;
    goto lab_0x40878d;
  lab_0x408e1d:
    // 0x408e1d
    v5 = str5;
    int64_t v132 = function_40abf0(str5, *(int64_t *)(v9 + 72)); // 0x408e24
    int64_t * v112 = (int64_t *)v10; // 0x408e2c
    *v112 = v132;
    int64_t v94 = v132; // 0x408e33
    int64_t v110; // 0x408580
    if (v132 == 0) {
        // 0x409180
        function_405580(a3 % 256, (int64_t)dcgettext(NULL, "cannot read symbolic link %s", 5), str5);
        int64_t v133 = *v112; // 0x4091a0
        v94 = v133;
        v110 = 0;
        if (v133 != 0) {
            goto lab_0x408e39;
        } else {
            goto lab_0x408ec9;
        }
    } else {
        goto lab_0x408e39;
    }
  lab_0x40878d:;
    int64_t v92 = v91;
    int64_t v93 = *(int64_t *)(v9 + 88); // 0x408793
    if (g154 == 0) {
        goto lab_0x408980;
    } else {
        // 0x40879f
        if (g148 != 0) {
            goto lab_0x408980;
        } else {
            goto lab_0x4087ac;
        }
    }
  lab_0x408e39:;
    char * str3 = (char *)v94; // 0x408e39
    int64_t v95; // 0x408580
    if (*str3 == 47) {
        // 0x409048
        v95 = function_412bb0(v94);
        goto lab_0x408ea0;
    } else {
        int64_t v96 = function_40b7b0(str5); // 0x408e46
        if (v96 == 0) {
            // 0x409048
            v95 = function_412bb0(v94);
            goto lab_0x408ea0;
        } else {
            int64_t v97 = 0x100000000000000 * v96 >> 56; // 0x408e63
            int64_t str4 = function_412980(v97 + 2 + (int64_t)strlen(str3)); // 0x408e6f
            char v98 = *(char *)(str5 - 1 + v97); // 0x408e7e
            strcpy(stpncpy((char *)str4, (char *)str5, (int32_t)(v97 + (int64_t)(v98 != 47))), str3);
            v95 = str4;
            goto lab_0x408ea0;
        }
    }
  lab_0x408980:;
    int32_t v99 = *(int32_t *)&g147; // 0x408987
    int64_t v100; // bp-712, 0x408580
    int64_t v101 = function_40d5d0(v93, &v100, v99, 512, g146, v92); // 0x40899f
    int32_t v102 = function_40eb70(v101, 0); // 0x4089b4
    if (g164 < v102) {
        // 0x4089b6
        g164 = v102;
    }
    // 0x4089bc
    int64_t v103; // 0x408580
    int64_t v104; // 0x408580
    int64_t v105; // 0x408580
    uint32_t v106; // 0x408fc7
    if (g154 != 0) {
        goto lab_0x4087ac;
    } else {
        // 0x4089ca
        if (g71 != 0) {
            int32_t v107 = function_408410(*(int32_t *)(v9 + 52), 0); // 0x408f8e
            if (g160 < v107) {
                // 0x408f94
                g160 = v107;
            }
        }
        // 0x4089d7
        v103 = 0;
        if (g70 != 0) {
            // 0x408fc0
            v106 = *(int32_t *)(v9 + 56);
            if (g149 == 0) {
                int64_t v108 = function_40e2f0((int64_t)v106); // 0x409223
                v5 = v108;
                if (v108 == 0) {
                    goto lab_0x408fd1;
                } else {
                    int64_t v109 = function_40eb70(v108, 0); // 0x409236
                    v104 = 0;
                    v105 = (int32_t)v109 < 0 ? 0 : v109 & 0xffffffff;
                    goto lab_0x40902a;
                }
            } else {
                goto lab_0x408fd1;
            }
        } else {
            goto lab_0x4089e4;
        }
    }
  lab_0x408ec9:
    // 0x408ec9
    free((int64_t *)v110);
    int32_t v111 = *(int32_t *)(v9 + 48) & 0xf000; // 0x408ed4
    v79 = v111;
    v76 = v78;
    v90 = v78;
    if (v111 != 0xa000) {
        goto lab_0x408778;
    } else {
        goto lab_0x408ee4;
    }
  lab_0x4087ac:
    // 0x4087ac
    if (g169 != 0) {
        goto lab_0x4089fa;
    } else {
        goto lab_0x4087b9;
    }
  lab_0x408ea0:
    // 0x408ea0
    v110 = 0;
    if (v95 == 0) {
        goto lab_0x408ec9;
    } else {
        // 0x408ea9
        if (*v17 == 0) {
            // 0x409250
            if ((char)function_404e20(*v112) != 0) {
                // 0x409261
                *v17 = -1;
            }
        }
        // 0x408eb7
        if (g143 < 2) {
            // 0x408ec0
            v110 = v95;
            if (g137 != 0) {
                goto lab_0x408ef8;
            } else {
                goto lab_0x408ec9;
            }
        } else {
            goto lab_0x408ef8;
        }
    }
  lab_0x4089fa:;
    int32_t len3 = strlen((char *)*(int64_t *)(v9 + 176)); // 0x408a01
    if (len3 > g161) {
        // 0x408d40
        g161 = len3;
    }
    goto lab_0x408a12;
  lab_0x4087b9:
    // 0x4087b9
    result = v93;
    if (g136 != 0) {
        int32_t len7 = strlen((char *)function_40e520(*v15, &v100)); // 0x408c0b
        result = v93;
        if (len7 > g166) {
            // 0x408c1c
            g166 = len7;
            result = v93;
        }
    }
    goto lab_0x4087c8;
  lab_0x4089e4:
    // 0x4089e4
    if (g150 != 0) {
        int32_t v131 = function_408410(*(int32_t *)(v9 + 52), v103); // 0x408fae
        if (g158 < v131) {
            // 0x408fb4
            g158 = v131;
        }
    }
    // 0x4089f1
    if (g169 == 0) {
        goto lab_0x408a12;
    } else {
        goto lab_0x4089fa;
    }
  lab_0x408a12:
    // 0x408a12
    if (g154 != 0) {
        goto lab_0x4087b9;
    } else {
        // 0x408a20
        int64_t v113; // bp-744, 0x408580
        int32_t len4 = strlen((char *)function_40e520(*(int64_t *)(v9 + 40), &v113)); // 0x408a33
        if (len4 > g163) {
            // 0x408a40
            g163 = len4;
        }
        // 0x408a46
        if ((*(int32_t *)(v9 + 48) & 0xb000) != 0x2000) {
            int64_t v114 = function_40d5d0(*(int64_t *)(v9 + 72), &v100, g145, 1, g69, v92); // 0x408d6d
            int32_t v115 = function_40eb70(v114, 0);
            if (g155 < v115) {
                // 0x408d88
                g155 = v115;
                goto lab_0x4087b9;
            } else {
                goto lab_0x4087b9;
            }
        } else {
            int64_t * v116 = (int64_t *)(v9 + 64); // 0x408a59
            uint64_t v117 = *v116; // 0x408a59
            int64_t str6 = function_40e520(v117 / 0x100000000 & 0xfffff000 | v117 / 256 % 0x1000, &v100); // 0x408a85
            int32_t len5 = strlen((char *)str6); // 0x408a8d
            if (len5 > g157) {
                // 0x408a9a
                g157 = len5;
            }
            uint64_t v118 = *v116; // 0x408aa0
            int64_t str7 = function_40e520(v118 / 0x1000 & 0xffffff00 | v118 % 256, &v100); // 0x408ab6
            int32_t len6 = strlen((char *)str7); // 0x408abe
            int32_t v119 = g156; // 0x408acb
            if ((int64_t)len6 > (int64_t)g156) {
                // 0x408acd
                g156 = len6;
                v119 = len6;
            }
            int32_t v120 = v119 + 2 + g157; // 0x408adb
            if (v120 > g155) {
                // 0x408d88
                g155 = v120;
                goto lab_0x4087b9;
            } else {
                goto lab_0x4087b9;
            }
        }
    }
  lab_0x408fd1:;
    int64_t v121 = &v100; // 0x408995
    __sprintf_chk((char *)&v100, 1, 21, "%lu", v106);
    int64_t v122 = v121;
    int32_t v123 = *(int32_t *)v122; // 0x408ff0
    int64_t v124 = v122 + 4; // 0x408ff2
    int32_t v125 = v123 - 0x1010101 & (v123 ^ -0x7f7f7f80); // 0x408ffe
    uint32_t v126 = v125 & -0x7f7f7f80; // 0x409000
    while (v126 == 0) {
        // 0x408ff0
        v122 = v124;
        v123 = *(int32_t *)v122;
        v124 = v122 + 4;
        v125 = v123 - 0x1010101 & (v123 ^ -0x7f7f7f80);
        v126 = v125 & -0x7f7f7f80;
    }
    int32_t v127 = (v125 & 0x8080) == 0 ? v126 / 0x10000 : v126; // 0x409013
    int64_t v128 = (char)v127 == 0 ? 0xfffffffd : 0xfffffffc; // 0x409023
    v104 = v127 & -0x7f7f8000;
    v105 = ((v125 & 0x8080) == 0 ? v122 + 6 : v124) - v121 + v128 & 0xffffffff;
    goto lab_0x40902a;
  lab_0x408ef8:;
    int32_t v129 = __xstat(1, (char *)v95, (struct stat *)&v100); // 0x408f07
    v110 = v95;
    if (v129 == 0) {
        // 0x408f10
        *(char *)(v9 + 185) = 1;
        v110 = v95;
        int32_t v130; // 0x408580
        if ((v130 & 0xf000) == 0x4000 != ((char)a3 != 0 && g154 != 0)) {
            // 0x408f40
            v110 = v95;
        }
    }
    goto lab_0x408ec9;
  lab_0x40902a:
    // 0x40902a
    v103 = v104;
    if (v105 > (int64_t)g159) {
        // 0x409036
        g159 = v105;
        v103 = v104;
    }
    goto lab_0x4089e4;
}
// Address range: 0x4092a0 - 0x40995a
int64_t function_4092a0(int64_t a1, int64_t a2, unsigned char a3) {
    int32_t * v1 = __errno_location(); // 0x4092bd
    *v1 = 0;
    char * name = (char *)a1; // 0x4092ce
    struct __dirstream * dirp = opendir(name); // 0x4092ce
    if (dirp == NULL) {
        // 0x4093b6
        return function_405580((int64_t)a3, (int64_t)dcgettext(NULL, "cannot open directory %s", 5), a1);
    }
    int64_t v2 = a2; // 0x4092e7
    int64_t v3; // bp-712, 0x4092a0
    if (g182 == 0) {
        goto lab_0x409423;
    } else {
        int32_t v4 = dirfd(dirp); // 0x4092f0
        if (v4 < 0) {
            // 0x4095a8
            if (__xstat(1, name, (struct stat *)&v3) > -1) {
                goto lab_0x409319;
            } else {
                goto lab_0x4095c0;
            }
        } else {
            // 0x409302
            if (__fxstat(1, v4, (struct stat *)&v3) <= -1) {
                goto lab_0x4095c0;
            } else {
                goto lab_0x409319;
            }
        }
    }
  lab_0x409768:;
    // 0x409768
    int64_t v5; // 0x4092a0
    int64_t v6; // 0x4092a0
    int64_t v7; // 0x4092a0
    int64_t v8; // 0x40950b
    int64_t v9; // 0x40951c
    if (g130 != 0) {
        int64_t v10 = g130;
        int64_t v11 = function_4159a0(*(int64_t *)v10, v9, 4); // 0x409794
        v7 = v6;
        v5 = v9;
        while ((int32_t)v11 != 0) {
            int64_t v12 = *(int64_t *)(v10 + 8); // 0x409780
            int64_t v13 = v12; // 0x409787
            if (v12 == 0) {
                goto lab_0x4097a8;
            }
            v10 = v13;
            v11 = function_4159a0(*(int64_t *)v10, v9, 4);
            v7 = v6;
            v5 = v9;
        }
    } else {
      lab_0x4097a8:;
        int64_t v14 = (int64_t)*(char *)(v8 + 18) + 0xffffffff; // 0x4097ae
        int64_t v15 = 0; // 0x4097b3
        if ((char)v14 < 14) {
            uint32_t v16 = *(int32_t *)((4 * v14 & 1020) + (int64_t)&g1); // 0x4097b8
            v15 = v16;
        }
        int64_t v17 = v15;
        int64_t v18 = function_408580(v9, (int32_t)v17, 0, (int64_t *)a1) + v6; // 0x4097cc
        v7 = v18;
        v5 = v17;
        if (g154 == 1) {
            // 0x4097de
            v7 = v18;
            v5 = v17;
            if (g152 == -1) {
                // 0x4097eb
                v7 = v18;
                v5 = v17;
                if (g148 == 0) {
                    // 0x4097f8
                    v7 = v18;
                    v5 = v17;
                    if (g134 == 0) {
                        // 0x409805
                        function_404f40();
                        function_407ca0(v9, v17);
                        function_4084b0();
                        v7 = v18;
                        v5 = v17;
                    }
                }
            }
        }
    }
    goto lab_0x409580;
  lab_0x409580:
    // 0x409580
    function_405d70();
    int64_t v19 = v7; // 0x409585
    int64_t v20 = v5; // 0x409585
    goto lab_0x409500;
  lab_0x409423:
    // 0x409423
    function_4084b0();
    int64_t v31; // 0x4092a0
    if ((g124 || g134) == 0) {
        goto lab_0x4094e6;
    } else {
        // 0x409435
        if (g51 == 0) {
            int64_t v32 = (int64_t)g86; // 0x40943e
            int64_t * v33 = (int64_t *)(v32 + 40); // 0x409445
            uint64_t v34 = *v33; // 0x409445
            if (v34 >= *(int64_t *)(v32 + 48)) {
                // 0x409928
                __overflow(g86, 10);
            } else {
                // 0x409453
                *v33 = v34 + 1;
                *(char *)v34 = 10;
            }
            // 0x40945e
            g105++;
        }
        // 0x409466
        g51 = 0;
        if (g144 != 0) {
            // 0x409890
            fwrite_unlocked((int64_t *)"  ", 1, 2, g86);
            g105 += 2;
            v31 = 0;
            if (*(char *)&g141 == 0) {
                goto lab_0x40948a;
            } else {
                goto lab_0x4098c3;
            }
        } else {
            // 0x40947a
            v31 = 0;
            if (*(char *)&g141 != 0) {
                goto lab_0x4098c3;
            } else {
                goto lab_0x40948a;
            }
        }
    }
  lab_0x4094e6:
    // 0x4094e6
    v19 = 0;
    v20 = v2;
    int64_t v23; // 0x4092a0
    int64_t v24; // 0x4092a0
    while (true) {
      lab_0x409500:;
        int64_t v21 = v20;
        v6 = v19;
        *v1 = 0;
        struct dirent * v22 = readdir(dirp); // 0x40950b
        if (v22 == NULL) {
            // 0x4095f0
            v23 = 0;
            v24 = v21;
            if (*v1 == 0) {
                // break -> 0x409623
                break;
            }
            int64_t v25 = (int64_t)dcgettext(NULL, "reading directory %s", 5);
            function_405580((int64_t)a3 & 0xffffffff, v25, a1);
            v7 = v6;
            v5 = v25;
            v23 = a1;
            v24 = v25;
            if (*v1 != 75) {
                // break -> 0x409623
                break;
            }
            goto lab_0x409580;
        } else {
            // 0x40951c
            v8 = (int64_t)v22;
            v9 = v8 + 19;
            if (g131 == 2) {
                goto lab_0x409768;
            } else {
                // 0x40952f
                if (*(char *)v9 == 46) {
                    // 0x409748
                    v7 = v6;
                    v5 = v21;
                    if (g131 == 0) {
                        goto lab_0x409580;
                    } else {
                        int64_t v26 = v8 + 20; // 0x409752
                        v7 = v6;
                        v5 = v21;
                        if (*(char *)(v26 + (int64_t)(*(char *)v26 == 46)) == 0) {
                            goto lab_0x409580;
                        } else {
                            goto lab_0x409768;
                        }
                    }
                } else {
                    if (g131 != 0) {
                        goto lab_0x409768;
                    } else {
                        // 0x409541
                        if (g129 != 0) {
                            int64_t v27 = g129;
                            int64_t v28 = function_4159a0(*(int64_t *)v27, v9, 4); // 0x409570
                            v7 = v6;
                            v5 = v9;
                            while ((int32_t)v28 != 0) {
                                int64_t v29 = *(int64_t *)(v27 + 8); // 0x409558
                                int64_t v30 = v29; // 0x40955f
                                if (v29 == 0) {
                                    goto lab_0x409768;
                                }
                                v27 = v30;
                                v28 = function_4159a0(*(int64_t *)v27, v9, 4);
                                v7 = v6;
                                v5 = v9;
                            }
                            goto lab_0x409580;
                        } else {
                            goto lab_0x409768;
                        }
                    }
                }
            }
        }
    }
    int64_t v35 = v23; // 0x40962d
    int64_t v36 = v24; // 0x40962d
    int64_t v37 = (int64_t)dirp; // 0x40962d
    if (closedir(dirp) != 0) {
        int64_t v38 = (int64_t)dcgettext(NULL, "closing directory %s", 5); // 0x40983c
        int64_t v39 = a3; // 0x409841
        function_405580(v39, v38, a1);
        v35 = a1;
        v36 = v38;
        v37 = v39;
    }
    // 0x409633
    function_404f40();
    int64_t v40 = v36; // 0x40963f
    int64_t v41 = v37; // 0x40963f
    if (g134 != 0) {
        // 0x409820
        function_405140((int32_t)a1, 0, v35);
        v40 = 0;
        v41 = a1;
    }
    int64_t v42 = g154; // 0x40964d
    int64_t v43 = v40; // 0x40964d
    int64_t v44 = v41; // 0x40964d
    int64_t v45; // 0x4092a0
    if (g154 != 0 != (g148 == 0)) {
        // 0x40965c
        if (g144 != 0) {
            // 0x409860
            fwrite_unlocked((int64_t *)"  ", 1, 2, g86);
            g105 += 2;
        }
        char * str = dcgettext(NULL, "total", 5); // 0x409675
        fputs_unlocked(str, g86);
        int64_t v46 = (int64_t)g86; // 0x409694
        g105 += (int64_t)strlen(str);
        int64_t * v47 = (int64_t *)(v46 + 40); // 0x4096a2
        uint64_t v48 = *v47; // 0x4096a2
        if (v48 >= *(int64_t *)(v46 + 48)) {
            // 0x409937
            __overflow(g86, 32);
        } else {
            // 0x4096b0
            *v47 = v48 + 1;
            *(char *)v48 = 32;
        }
        int32_t v49 = *(int32_t *)&g147; // 0x4096bb
        g105++;
        int64_t v50 = function_40d5d0(v6, &v3, v49, 512, g146, v45); // 0x4096df
        char * str2 = (char *)v50; // 0x4096f1
        fputs_unlocked(str2, g86);
        int64_t v51 = (int64_t)g86; // 0x4096fe
        g105 += (int64_t)strlen(str2);
        int64_t * v52 = (int64_t *)(v51 + 40); // 0x40970c
        uint64_t v53 = *v52; // 0x40970c
        int64_t v54; // 0x4092a0
        int64_t v55; // 0x4092a0
        if (v53 >= *(int64_t *)(v51 + 48)) {
            // 0x409946
            v54 = __overflow(g86, 10);
            v55 = 10;
        } else {
            // 0x40971a
            *v52 = v53 + 1;
            *(char *)v53 = 10;
            v54 = v53;
            v55 = (int64_t)g86;
        }
        // 0x409725
        g105++;
        v42 = v54;
        v43 = v55;
        v44 = v51;
    }
    int64_t result = v42; // 0x409735
    if ((int64_t)g179 != 0) {
        // 0x40973b
        result = function_407ca0(v44, v43);
    }
    // 0x4093b6
    return result;
  lab_0x409319:;
    // 0x409319
    int32_t v56; // 0x4092a0
    int64_t v57 = v56; // 0x409319
    int64_t v58 = function_412980(16); // 0x409332
    int64_t * v59 = (int64_t *)v58; // 0x40934e
    *v59 = v57;
    *(int64_t *)(v58 + 8) = v3;
    int64_t v60 = function_40d220(g182, v58); // 0x409355
    if (v60 == 0) {
        // 0x409955
        function_412bd0(g182);
        // UNREACHABLE
    }
    if (v58 != v60) {
        // 0x409368
        free(v59);
        function_412110(0, 3, a1);
        error(0, (int32_t)"%s: not listing already-listed directory" ^ (int32_t)"%s: not listing already-listed directory", dcgettext(NULL, "%s: not listing already-listed directory", 5));
        g108 = 2;
        // 0x4093b6
        return closedir(dirp);
    }
    uint64_t v61 = g102 - g101; // 0x4093e8
    int64_t v62 = g101; // 0x4093ef
    v2 = v58;
    if (v61 < 16) {
        // 0x4093f1
        _obstack_newchunk((int64_t)&g99, 16, v61, v3);
        v62 = g101;
        v2 = 16;
    }
    // 0x409411
    g101 = v62 + 16;
    *(int64_t *)(v62 + 8) = v3;
    *(int64_t *)v62 = v57;
    goto lab_0x409423;
  lab_0x4095c0:
    // 0x4095c0
    function_405580((int64_t)a3, (int64_t)dcgettext(NULL, "cannot determine device and inode of %s", 5), a1);
    // 0x4093b6
    return closedir(dirp);
  lab_0x40948a:;
    int64_t v63 = a2 == 0 ? a1 : a2; // 0x40949f
    function_4062d0(v63, g126, -1, 0, 1, (int64_t)&g103, v31);
    free((int64_t *)v31);
    fwrite_unlocked((int64_t *)":\n", 1, 2, g86);
    g105 += 2;
    v45 = &g103;
    goto lab_0x4094e6;
  lab_0x4098c3:;
    int64_t v64 = function_40b070(a1, 2); // 0x4098cb
    v31 = v64;
    if (v64 == 0) {
        // 0x4098dc
        function_405580((int64_t)a3, (int64_t)dcgettext(NULL, "error canonicalizing %s", 5), a1);
        v31 = v64;
    }
    goto lab_0x40948a;
}
// Address range: 0x409960 - 0x4099a6
int64_t function_409960(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x409960
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x409967
    if (v2 > v1) {
        // 0x409981
        return 0xffffffff;
    }
    int64_t result = 1; // 0x409970
    if (v2 >= v1) {
        int32_t v3 = *(int32_t *)(a1 + 136); // 0x409979
        result = (int32_t)*(int64_t *)(a2 + 136) - v3;
    }
    // 0x409981
    return result;
}
// Address range: 0x4099b0 - 0x4099e6
int64_t function_4099b0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 112); // 0x4099b0
    uint64_t v2 = *(int64_t *)(a1 + 112); // 0x4099b4
    if (v2 > v1) {
        // 0x4099c5
        return 0xffffffff;
    }
    int64_t result = 1; // 0x4099ba
    if (v2 >= v1) {
        int32_t v3 = *(int32_t *)(a1 + 120); // 0x4099c0
        result = (int32_t)*(int64_t *)(a2 + 120) - v3;
    }
    // 0x4099c5
    return result;
}
// Address range: 0x4099f0 - 0x409a26
int64_t function_4099f0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 96); // 0x4099f0
    uint64_t v2 = *(int64_t *)(a1 + 96); // 0x4099f4
    if (v2 > v1) {
        // 0x409a05
        return 0xffffffff;
    }
    int64_t result = 1; // 0x4099fa
    if (v2 >= v1) {
        int32_t v3 = *(int32_t *)(a1 + 104); // 0x409a00
        result = (int32_t)*(int64_t *)(a2 + 104) - v3;
    }
    // 0x409a05
    return result;
}
// Address range: 0x409a30 - 0x409a76
int64_t function_409a30(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 128); // 0x409a33
    uint64_t v2 = *(int64_t *)(a2 + 128); // 0x409a3a
    if (v2 > v1) {
        // 0x409a54
        return 0xffffffff;
    }
    int64_t result = 1; // 0x409a43
    if (v2 >= v1) {
        int32_t v3 = *(int32_t *)(a2 + 136); // 0x409a4c
        result = (int32_t)*(int64_t *)(a1 + 136) - v3;
    }
    // 0x409a54
    return result;
}
// Address range: 0x409a80 - 0x409ab6
int64_t function_409a80(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 112); // 0x409a83
    uint64_t v2 = *(int64_t *)(a2 + 112); // 0x409a87
    if (v2 > v1) {
        // 0x409a98
        return 0xffffffff;
    }
    int64_t result = 1; // 0x409a8d
    if (v2 >= v1) {
        int32_t v3 = *(int32_t *)(a2 + 120); // 0x409a93
        result = (int32_t)*(int64_t *)(a1 + 120) - v3;
    }
    // 0x409a98
    return result;
}
// Address range: 0x409ac0 - 0x409af6
int64_t function_409ac0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 96); // 0x409ac3
    uint64_t v2 = *(int64_t *)(a2 + 96); // 0x409ac7
    if (v2 > v1) {
        // 0x409ad8
        return 0xffffffff;
    }
    int64_t result = 1; // 0x409acd
    if (v2 >= v1) {
        int32_t v3 = *(int32_t *)(a2 + 104); // 0x409ad3
        result = (int32_t)*(int64_t *)(a1 + 104) - v3;
    }
    // 0x409ad8
    return result;
}
// Address range: 0x409b00 - 0x409b76
int64_t function_409b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x409b00
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x409b06
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x409b2e
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x409b3b
            return 1;
        }
    } else {
        // 0x409b2a
        if (v1 == 3 || v1 == 9) {
            // 0x409b3b
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 96); // 0x409b40
    int64_t v5 = *(int64_t *)(a1 + 96); // 0x409b44
    if (v5 > v4) {
        // 0x409b3b
        return 0xffffffff;
    }
    // 0x409b4a
    if (v5 < v4) {
        // 0x409b3b
        return 1;
    }
    int32_t v6 = *(int32_t *)(a1 + 104); // 0x409b50
    return (int32_t)*(int64_t *)(a2 + 104) - v6;
}
// Address range: 0x409b80 - 0x409bf6
int64_t function_409b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x409b80
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x409b86
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x409bb1
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x409bbe
            return 1;
        }
    } else {
        // 0x409bad
        if (v1 == 3 || v1 == 9) {
            // 0x409bbe
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 112); // 0x409bc0
    int64_t v5 = *(int64_t *)(a2 + 112); // 0x409bc4
    if (v5 > v4) {
        // 0x409bbe
        return 0xffffffff;
    }
    // 0x409bca
    if (v5 < v4) {
        // 0x409bbe
        return 1;
    }
    int32_t v6 = *(int32_t *)(a2 + 120); // 0x409bd0
    return (int32_t)*(int64_t *)(a1 + 120) - v6;
}
// Address range: 0x409c00 - 0x409c76
int64_t function_409c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x409c00
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x409c06
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x409c31
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x409c3e
            return 1;
        }
    } else {
        // 0x409c2d
        if (v1 == 3 || v1 == 9) {
            // 0x409c3e
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 96); // 0x409c40
    int64_t v5 = *(int64_t *)(a2 + 96); // 0x409c44
    if (v5 > v4) {
        // 0x409c3e
        return 0xffffffff;
    }
    // 0x409c4a
    if (v5 < v4) {
        // 0x409c3e
        return 1;
    }
    int32_t v6 = *(int32_t *)(a2 + 104); // 0x409c50
    return (int32_t)*(int64_t *)(a1 + 104) - v6;
}
// Address range: 0x409c80 - 0x409cf6
int64_t function_409c80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x409c80
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x409c86
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x409cae
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x409cbb
            return 1;
        }
    } else {
        // 0x409caa
        if (v1 == 3 || v1 == 9) {
            // 0x409cbb
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 112); // 0x409cc0
    int64_t v5 = *(int64_t *)(a1 + 112); // 0x409cc4
    if (v5 > v4) {
        // 0x409cbb
        return 0xffffffff;
    }
    // 0x409cca
    if (v5 < v4) {
        // 0x409cbb
        return 1;
    }
    int32_t v6 = *(int32_t *)(a1 + 120); // 0x409cd0
    return (int32_t)*(int64_t *)(a2 + 120) - v6;
}
// Address range: 0x409d00 - 0x409d86
int64_t function_409d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x409d00
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x409d06
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x409d31
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x409d3e
            return 1;
        }
    } else {
        // 0x409d2d
        if (v1 == 3 || v1 == 9) {
            // 0x409d3e
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 128); // 0x409d40
    int64_t v5 = *(int64_t *)(a2 + 128); // 0x409d47
    if (v5 > v4) {
        // 0x409d3e
        return 0xffffffff;
    }
    // 0x409d50
    if (v5 < v4) {
        // 0x409d3e
        return 1;
    }
    int32_t v6 = *(int32_t *)(a2 + 136); // 0x409d59
    return (int32_t)*(int64_t *)(a1 + 136) - v6;
}
// Address range: 0x409d90 - 0x409e16
int64_t function_409d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x409d90
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x409d96
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x409dbe
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x409dcb
            return 1;
        }
    } else {
        // 0x409dba
        if (v1 == 3 || v1 == 9) {
            // 0x409dcb
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 128); // 0x409dd0
    int64_t v5 = *(int64_t *)(a1 + 128); // 0x409dd7
    if (v5 > v4) {
        // 0x409dcb
        return 0xffffffff;
    }
    // 0x409de0
    if (v5 < v4) {
        // 0x409dcb
        return 1;
    }
    int32_t v6 = *(int32_t *)(a1 + 136); // 0x409de9
    return (int32_t)*(int64_t *)(a2 + 136) - v6;
}
// Address range: 0x409e20 - 0x409e56
int64_t function_409e20(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 96); // 0x409e23
    int64_t v2 = *(int64_t *)(a2 + 96); // 0x409e27
    if (v2 > v1) {
        // 0x409e4d
        return 0xffffffff;
    }
    // 0x409e2d
    if (v2 < v1) {
        // 0x409e4d
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 104) - *(int32_t *)(a2 + 104); // 0x409e33
    if (result != 0) {
        // 0x409e4d
        return result;
    }
    char * str = (char *)a1; // 0x409e3e
    return strcmp(str, str);
}
// Address range: 0x409e60 - 0x409ea6
int64_t function_409e60(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 128); // 0x409e63
    int64_t v2 = *(int64_t *)(a2 + 128); // 0x409e6a
    if (v2 > v1) {
        // 0x409e95
        return 0xffffffff;
    }
    // 0x409e73
    if (v2 < v1) {
        // 0x409e95
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 136) - *(int32_t *)(a2 + 136); // 0x409e7c
    if (result != 0) {
        // 0x409e95
        return result;
    }
    char * str = (char *)a1; // 0x409e8a
    return strcmp(str, str);
}
// Address range: 0x409eb0 - 0x409ee6
int64_t function_409eb0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 112); // 0x409eb3
    int64_t v2 = *(int64_t *)(a2 + 112); // 0x409eb7
    if (v2 > v1) {
        // 0x409edd
        return 0xffffffff;
    }
    // 0x409ebd
    if (v2 < v1) {
        // 0x409edd
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 120) - *(int32_t *)(a2 + 120); // 0x409ec3
    if (result != 0) {
        // 0x409edd
        return result;
    }
    char * str = (char *)a1; // 0x409ece
    return strcmp(str, str);
}
// Address range: 0x409ef0 - 0x409f26
int64_t function_409ef0(int64_t str, int64_t str2) {
    int64_t v1 = *(int64_t *)(str2 + 96); // 0x409ef0
    int64_t v2 = *(int64_t *)(str + 96); // 0x409ef4
    if (v2 > v1) {
        // 0x409f15
        return 0xffffffff;
    }
    // 0x409efa
    if (v2 < v1) {
        // 0x409f15
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(str2 + 104) - *(int32_t *)(str + 104); // 0x409f00
    if (result != 0) {
        // 0x409f15
        return result;
    }
    // 0x409f05
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x409f30 - 0x409f76
int64_t function_409f30(int64_t str, int64_t str2) {
    int64_t v1 = *(int64_t *)(str2 + 128); // 0x409f30
    int64_t v2 = *(int64_t *)(str + 128); // 0x409f37
    if (v2 > v1) {
        // 0x409f65
        return 0xffffffff;
    }
    // 0x409f40
    if (v2 < v1) {
        // 0x409f65
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(str2 + 136) - *(int32_t *)(str + 136); // 0x409f49
    if (result != 0) {
        // 0x409f65
        return result;
    }
    // 0x409f51
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x409f80 - 0x409fb6
int64_t function_409f80(int64_t str, int64_t str2) {
    int64_t v1 = *(int64_t *)(str2 + 112); // 0x409f80
    int64_t v2 = *(int64_t *)(str + 112); // 0x409f84
    if (v2 > v1) {
        // 0x409fa5
        return 0xffffffff;
    }
    // 0x409f8a
    if (v2 < v1) {
        // 0x409fa5
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(str2 + 120) - *(int32_t *)(str + 120); // 0x409f90
    if (result != 0) {
        // 0x409fa5
        return result;
    }
    // 0x409f95
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x409fc0 - 0x40a025
int64_t function_409fc0(int64_t str, int64_t a2) {
    // 0x409fc0
    strrchr((char *)str, 46);
    char * found_char_pos = strrchr((char *)46, 46); // 0x409fe3
    return found_char_pos == NULL ? (int64_t)&g24 : (int64_t)found_char_pos;
}
// Address range: 0x40a030 - 0x40a095
int64_t function_40a030(int64_t a1, int64_t a2) {
    // 0x40a030
    strrchr((char *)46, 46);
    char * found_char_pos = strrchr((char *)46, 46); // 0x40a054
    return found_char_pos == NULL ? (int64_t)&g24 : (int64_t)found_char_pos;
}
// Address range: 0x40a0a0 - 0x40a146
int64_t function_40a0a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x40a0a0
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x40a0a6
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40a0ce
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40a0db
            return 1;
        }
    } else {
        // 0x40a0ca
        if (v1 == 3 || v1 == 9) {
            // 0x40a0db
            return 0xffffffff;
        }
    }
    // 0x40a0e0
    strrchr((char *)46, 46);
    char * found_char_pos = strrchr((char *)46, 46); // 0x40a103
    return found_char_pos == NULL ? (int64_t)&g24 : (int64_t)found_char_pos;
}
// Address range: 0x40a150 - 0x40a1f6
int64_t function_40a150(int64_t str, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(str + 168); // 0x40a150
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x40a156
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40a17e
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40a18b
            return 1;
        }
    } else {
        // 0x40a17a
        if (v1 == 3 || v1 == 9) {
            // 0x40a18b
            return 0xffffffff;
        }
    }
    // 0x40a190
    strrchr((char *)str, 46);
    char * found_char_pos = strrchr((char *)46, 46); // 0x40a1b3
    return found_char_pos == NULL ? (int64_t)&g24 : (int64_t)found_char_pos;
}
// Address range: 0x40a200 - 0x40a276
int64_t function_40a200(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x40a200
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x40a206
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40a231
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40a23e
            return 1;
        }
    } else {
        // 0x40a22d
        if (v1 == 3 || v1 == 9) {
            // 0x40a23e
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 112); // 0x40a240
    int64_t v5 = *(int64_t *)(a2 + 112); // 0x40a244
    if (v5 > v4) {
        // 0x40a23e
        return 0xffffffff;
    }
    // 0x40a24a
    if (v5 < v4) {
        // 0x40a23e
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 120) - *(int32_t *)(a2 + 120); // 0x40a250
    if (result != 0) {
        // 0x40a23e
        return result;
    }
    char * str = (char *)a1; // 0x40a25c
    return strcmp(str, str);
}
// Address range: 0x40a280 - 0x40a306
int64_t function_40a280(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x40a280
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x40a286
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40a2b1
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40a2be
            return 1;
        }
    } else {
        // 0x40a2ad
        if (v1 == 3 || v1 == 9) {
            // 0x40a2be
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 128); // 0x40a2c0
    int64_t v5 = *(int64_t *)(a2 + 128); // 0x40a2c7
    if (v5 > v4) {
        // 0x40a2be
        return 0xffffffff;
    }
    // 0x40a2d0
    if (v5 < v4) {
        // 0x40a2be
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 136) - *(int32_t *)(a2 + 136); // 0x40a2d9
    if (result != 0) {
        // 0x40a2be
        return result;
    }
    char * str = (char *)a1; // 0x40a2e8
    return strcmp(str, str);
}
// Address range: 0x40a310 - 0x40a386
int64_t function_40a310(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x40a310
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x40a316
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40a341
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40a34e
            return 1;
        }
    } else {
        // 0x40a33d
        if (v1 == 3 || v1 == 9) {
            // 0x40a34e
            return 0xffffffff;
        }
    }
    int64_t v4 = *(int64_t *)(a1 + 96); // 0x40a350
    int64_t v5 = *(int64_t *)(a2 + 96); // 0x40a354
    if (v5 > v4) {
        // 0x40a34e
        return 0xffffffff;
    }
    // 0x40a35a
    if (v5 < v4) {
        // 0x40a34e
        return 1;
    }
    uint32_t result = (int32_t)*(int64_t *)(a1 + 104) - *(int32_t *)(a2 + 104); // 0x40a360
    if (result != 0) {
        // 0x40a34e
        return result;
    }
    char * str = (char *)a1; // 0x40a36c
    return strcmp(str, str);
}
// Address range: 0x40a390 - 0x40a3f9
int64_t function_40a390(int64_t a1, int64_t a2) {
    char * str = (char *)a2; // 0x40a3a2
    char * found_char_pos = strrchr(str, 46); // 0x40a3a2
    int64_t v1 = (int64_t)found_char_pos; // 0x40a3a2
    char * found_char_pos2 = strrchr(str, 46); // 0x40a3b6
    int64_t str3; // 0x40a390
    int64_t str2; // 0x40a390
    if (found_char_pos2 == NULL) {
        // 0x40a3e0
        str3 = (int64_t)&g24;
        str2 = v1;
        if (found_char_pos == NULL) {
            // 0x40a3ea
            return strcmp(str, str);
        }
    } else {
        // 0x40a3c0
        str3 = (int64_t)found_char_pos2;
        str2 = found_char_pos == NULL ? (int64_t)&g24 : v1;
    }
    int32_t strcmp_rc = strcmp((char *)str2, (char *)str3); // 0x40a3d2
    if (strcmp_rc == 0) {
        // 0x40a3ea
        return strcmp(str, str);
    }
    // 0x40a3db
    return strcmp_rc;
}
// Address range: 0x40a400 - 0x40a469
int64_t function_40a400(int64_t a1, int64_t a2) {
    char * str = (char *)a1; // 0x40a412
    char * found_char_pos = strrchr(str, 46); // 0x40a412
    int64_t v1 = (int64_t)found_char_pos; // 0x40a412
    char * found_char_pos2 = strrchr((char *)46, 46); // 0x40a426
    int64_t str3; // 0x40a400
    int64_t str2; // 0x40a400
    if (found_char_pos2 == NULL) {
        // 0x40a450
        str3 = (int64_t)&g24;
        str2 = v1;
        if (found_char_pos == NULL) {
            // 0x40a45a
            return strcmp(str, (char *)46);
        }
    } else {
        // 0x40a430
        str3 = (int64_t)found_char_pos2;
        str2 = found_char_pos == NULL ? (int64_t)&g24 : v1;
    }
    int32_t strcmp_rc = strcmp((char *)str2, (char *)str3); // 0x40a442
    if (strcmp_rc == 0) {
        // 0x40a45a
        return strcmp(str, (char *)46);
    }
    // 0x40a44b
    return strcmp_rc;
}
// Address range: 0x40a470 - 0x40a526
int64_t function_40a470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 168); // 0x40a470
    int32_t v2 = *(int32_t *)(a2 + 168); // 0x40a476
    bool v3 = v2 == 9 | v2 == 3;
    if (v3) {
        // 0x40a4a2
        if ((v1 != 3 && v1 != 9) == v3) {
            // 0x40a4af
            return 1;
        }
    } else {
        // 0x40a49a
        if (v1 == 3 || v1 == 9) {
            // 0x40a4af
            return 0xffffffff;
        }
    }
    char * str = (char *)a1; // 0x40a4c2
    char * found_char_pos = strrchr(str, 46); // 0x40a4c2
    int64_t v4 = (int64_t)found_char_pos; // 0x40a4c2
    char * found_char_pos2 = strrchr((char *)46, 46); // 0x40a4d5
    int64_t str3; // 0x40a470
    int64_t str2; // 0x40a470
    if (found_char_pos2 == NULL) {
        // 0x40a500
        str3 = (int64_t)&g24;
        str2 = v4;
        if (found_char_pos == NULL) {
            // 0x40a50a
            return strcmp(str, (char *)46);
        }
    } else {
        // 0x40a4df
        str3 = (int64_t)found_char_pos2;
        str2 = found_char_pos == NULL ? (int64_t)&g24 : v4;
    }
    int32_t strcmp_rc = strcmp((char *)str2, (char *)str3); // 0x40a4f1
    if (strcmp_rc == 0) {
        // 0x40a50a
        return strcmp(str, (char *)46);
    }
    // 0x40a4fa
    return strcmp_rc;
}
// Address range: 0x40a530 - 0x40abe9
int64_t function_40a530(int32_t status) {
    if (status != 0) {
        // 0x40a54b
        __fprintf_chk(g88, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40a570
        exit(status);
        // UNREACHABLE
    }
    // 0x40a578
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n                               e.g., '--block-size=M'; see SIZE format below\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information);\n                               with -l: show ctime and sort by name;\n                               otherwise: sort by ctime, newest first\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -C                         list entries by columns\n      --color[=WHEN]         colorize the output; WHEN can be 'always' (default\n                               if omitted), 'auto', or 'never'; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs' dired mode\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append '*'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -g                         like -l, but do not list owner\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --group-directories-first\n                             group directories before files;\n                               can be augmented with a --sort option, but any\n                               use of --sort=none (-U) disables grouping\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -G, --no-group             in a long listing, don't print group names\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n      --si                   likewise, but use powers of 1000 not 1024\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                               that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --hyperlink[=WHEN]     hyperlink file names; WHEN can be 'always'\n                               (default if omitted), 'auto', or 'never'\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -k, --kibibytes            default to 1024-byte blocks for disk usage;\n                               used only with -s and per directory totals\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -q, --hide-control-chars   print ? instead of nongraphic characters\n      --show-control-chars   show nongraphic characters as-is (the default,\n                               unless program is 'ls' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always,\n                               shell-escape, shell-escape-always, c, escape\n                               (overrides QUOTING_STYLE environment variable)\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -S                         sort by file size, largest first\n      --sort=WORD            sort by WORD instead of name: none (-U), size (-S),\n                               time (-t), version (-v), extension (-X)\n      --time=WORD            with -l, show time as WORD instead of default\n                               modification time: atime or access or use (-u);\n                               ctime or status (-c); also use specified time\n                               as sort key if --sort=time (newest first)\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --time-style=TIME_STYLE  time/date format with -l; see TIME_STYLE below\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -t                         sort by modification time, newest first\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -u                         with -lt: sort by, and show, access time;\n                               with -l: show access time and sort by name;\n                               otherwise: sort by access time, newest first\n  -U                         do not sort; list entries in directory order\n  -v                         natural sort of (version) numbers within text\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n  -1                         list one file per line.  Avoid '\\n' with -q or -b\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with 'posix-' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors command to set it.\n", 5), g86);
    fputs_unlocked(dcgettext(NULL, "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n", 5), g86);
    int64_t str = (int64_t)"ls"; // 0x40a9b9
    if (g73 != 1) {
        // 0x40a9bf
        str = g73 != 2 ? (int64_t)"vdir" : (int64_t)"dir";
    }
    char * v1 = (char *)&g27; // bp-136, 0x40a9d0
    int64_t v2 = (int64_t)&v1; // 0x40aa55
    int64_t str2 = (int64_t)&g27; // 0x40aa55
    int64_t v3 = v2; // 0x40aa76
    while (strcmp((char *)str, (char *)str2) != 0) {
        // 0x40aa60
        v2 += 16;
        str2 = *(int64_t *)v2;
        v3 = v2;
        if (str2 == 0) {
            // break -> 0x40aa78
            break;
        }
        v3 = v2;
    }
    // 0x40aa78
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v3 + 8) == 0) {
        if (locale == NULL) {
            goto lab_0x40abb4;
        } else {
            // 0x40ab9e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40ab47
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40aad6;
            } else {
                goto lab_0x40abb4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40aad6;
        } else {
            // 0x40aac0
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40ab47
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40aad6;
            } else {
                goto lab_0x40aad6;
            }
        }
    }
  lab_0x40abb4:
    // 0x40abb4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40ab0f
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40a570
    exit(status);
    // UNREACHABLE
  lab_0x40aad6:
    // 0x40aad6
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40ab0f
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40a570
    exit(status);
    // UNREACHABLE
}
// Address range: 0x40abf0 - 0x40acdf
int64_t function_40abf0(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x40ac29
    int64_t * mem = malloc((int32_t)size); // 0x40ac33
    int64_t result = 0; // 0x40ac3e
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x40ac49
        if (v1 < 0) {
            // 0x40aca8
            if (*__errno_location() != 34) {
                // 0x40acb2
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x40ac49
        int64_t v3; // 0x40abf0
        if (buf_size > v2) {
            // 0x40acc0
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x40ac5b
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x40ac68
            int64_t * mem2 = malloc((int32_t)size2); // 0x40ac6e
            if (mem2 == NULL) {
                // 0x40ac7b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x40aca8
                if (*__errno_location() != 34) {
                    // 0x40acb2
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x40ac56
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x40acc0
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x40ac5b
            free(buf);
        }
        // 0x40ac90
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x40acd0
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x40ac7b_2:
    // 0x40ac7b
    return result;
}
// Address range: 0x40ace0 - 0x40acea
int64_t function_40ace0(void) {
    // 0x40ace0
    return function_40a530(1);
}
// Address range: 0x40acf0 - 0x40ae06
int64_t function_40acf0(int64_t a1, char ** a2, int64_t * a3, int64_t n) {
    char * str = (char *)a1; // 0x40ad11
    int32_t len = strlen(str); // 0x40ad11
    if (a2 == NULL) {
        // 0x40addd
        return -1;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = -1;
    int64_t * str3 = (int64_t *)(v3 * n + v1);
    int32_t v4 = 0;
    int64_t v5 = 0; // 0x40ad77
    int64_t v6 = v1; // 0x40acf0
    int64_t v7 = v2; // 0x40ad7e
    int64_t str4; // 0x40acf0
    int64_t v8; // 0x40acf0
    int32_t v9; // 0x40acf0
    int32_t v10; // 0x40acf0
    int32_t v11; // 0x40acf0
    int64_t v12; // 0x40acf0
    int64_t result; // 0x40acf0
    int32_t v13; // 0x40ad73
    char * str2; // 0x40ad92
    while (true) {
        // 0x40ad87
        str4 = v6;
        v8 = v5;
        v10 = v4;
        str2 = (char *)v7;
        v9 = v10;
        if (strncmp(str2, str, len) == 0) {
            // 0x40ad9b
            result = v8;
            if (len == strlen(str2)) {
                // 0x40addd
                return result;
            }
            if (v3 == -1) {
                // break -> 0x40adaf
                break;
            }
            // 0x40ad40
            v9 = 1;
            if (a3 != NULL) {
                // 0x40ad4e
                v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                v9 = v13;
            }
        }
        // 0x40ad77
        v4 = v9;
        v5 = v8 + 1;
        v7 = *(int64_t *)(8 * v5 + v2);
        v6 = str4 + n;
        v12 = v3;
        v11 = v4;
        if (v7 == 0) {
            return (char)v11 == 0 ? v12 : -2;
        }
    }
    int64_t v14 = v8 + 1; // 0x40adb3
    int64_t v15 = *(int64_t *)(8 * v14 + v2); // 0x40adba
    v12 = v8;
    v11 = v10;
    while (v15 != 0) {
        // 0x40ad87
        v3 = v8;
        str3 = (int64_t *)(v3 * n + v1);
        v4 = v10;
        v5 = v14;
        v6 = str4 + n;
        v7 = v15;
        while (true) {
            // 0x40ad87
            str4 = v6;
            v8 = v5;
            v10 = v4;
            str2 = (char *)v7;
            v9 = v10;
            if (strncmp(str2, str, len) == 0) {
                // 0x40ad9b
                result = v8;
                if (len == strlen(str2)) {
                    // 0x40addd
                    return result;
                }
                if (v3 == -1) {
                    // break -> 0x40adaf
                    break;
                }
                // 0x40ad40
                v9 = 1;
                if (a3 != NULL) {
                    // 0x40ad4e
                    v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                    v9 = v13;
                }
            }
            // 0x40ad77
            v4 = v9;
            v5 = v8 + 1;
            v7 = *(int64_t *)(8 * v5 + v2);
            v6 = str4 + n;
            v12 = v3;
            v11 = v4;
            if (v7 == 0) {
                return (char)v11 == 0 ? v12 : -2;
            }
        }
        // 0x40adaf
        v14 = v8 + 1;
        v15 = *(int64_t *)(8 * v14 + v2);
        v12 = v8;
        v11 = v10;
    }
  lab_0x40adc8:
    // 0x40addd
    return (char)v11 == 0 ? v12 : -2;
}
// Address range: 0x40ae10 - 0x40ae81
int64_t function_40ae10(char * a1, int64_t a2, int64_t a3) {
    char * format; // 0x40ae10
    if (a3 == -1) {
        // 0x40ae70
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x40ae25
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x40ae34
    function_412270(1, (int64_t)a1);
    function_411f60(0, 8, a2);
    error(0, 0, format);
    return &g209;
}
// Address range: 0x40ae90 - 0x40afa8
int64_t function_40ae90(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40aebd
    fputs_unlocked(v1, g88);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x40af30
        int64_t v5; // 0x40af37
        int64_t v6; // 0x40af57
        while (v3 != 0) {
            // 0x40af1b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x40aee0
                break;
            }
            // 0x40af2d
            v4 = v3 + 1;
            v5 = function_412290(v2);
            __fprintf_chk(g88, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x40af60
                goto lab_0x40af60;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x40aee3
        int64_t v8 = function_412290(v2); // 0x40aeed
        __fprintf_chk(g88, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40af0d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40af1b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x40aee0
                    break;
                }
                // 0x40af2d
                v4 = v3 + 1;
                v5 = function_412290(v2);
                __fprintf_chk(g88, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x40af60
                    goto lab_0x40af60;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x40aee0
            v7 = v3 + 1;
            v8 = function_412290(v2);
            __fprintf_chk(g88, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x40af60:;
    int64_t v10 = (int64_t)g88; // 0x40af60
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x40af67
    uint64_t result = *v11; // 0x40af67
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x40af90
        return __overflow(g88, 10);
    }
    // 0x40af71
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x40afb0 - 0x40b020
int64_t function_40afb0(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_40acf0(a2, a3, a4, a5); // 0x40afdc
    int64_t result = v1; // 0x40afe4
    if (v1 < 0) {
        // 0x40aff8
        function_40ae10(a1, a2, v1);
        function_40ae90((int64_t)a3, (int64_t)a4, a5);
        result = -1;
    }
    // 0x40afe6
    return result;
}
// Address range: 0x40b020 - 0x40b06d
int64_t function_40b020(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x40b020
    if (result == 0) {
        // 0x40b061
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x40b058
    int32_t n = a4; // 0x40b058
    int64_t v1 = result; // 0x40b05f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x40b061
        return result;
    }
    int64_t str3 = str2; // 0x40b05f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x40b040
    int64_t result2 = 0; // 0x40b04d
    while (v2 != 0) {
        // 0x40b04f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x40b061
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x40b061
    return result2;
}
// Address range: 0x40b070 - 0x40b6e3
int64_t function_40b070(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    uint32_t v2 = (int32_t)a2;
    uint32_t v3 = v2 % 4; // 0x40b089
    if (a1 == 0 || (v2 + 3 & v3) != 0) {
        // 0x40b520
        *__errno_location() = 22;
        // 0x40b36e
        return 0;
    }
    int64_t v4; // 0x40b070
    int64_t v5; // 0x40b070
    int64_t v6; // 0x40b070
    switch ((char)a1) {
        case 0: {
            // 0x40b5e1
            *__errno_location() = 2;
            // 0x40b36e
            return 0;
        }
        case 47: {
            int64_t v7 = function_412980(0x1000); // 0x40b235
            *(char *)v7 = 47;
            v6 = v7 + 1;
            v5 = v7 + 0x1000;
            v4 = v7;
            // break -> 0x40b0e5
            break;
        }
        default: {
            int64_t str = function_412d10(a1, a2); // 0x40b0b7
            if (str == 0) {
                // 0x40b36e
                return 0;
            }
            int32_t len = strlen((char *)str); // 0x40b0cb
            int64_t v8 = len; // 0x40b0cb
            if (len < 0x1000) {
                int64_t v9 = function_4129e0(str, 0x1000); // 0x40b5fc
                v6 = v9 + v8;
                v5 = v9 + 0x1000;
                v4 = v9;
            } else {
                int64_t v10 = str + v8; // 0x40b0df
                v6 = v10;
                v5 = v10;
                v4 = str;
            }
            // break -> 0x40b0e5
            break;
        }
    }
    int64_t v11 = a1; // 0x40b112
    int64_t v12 = 0; // 0x40b112
    int64_t v13 = 0; // 0x40b112
    int64_t v14 = 0; // 0x40b112
    char * v15 = (char *)&v1; // 0x40b112
    int64_t v16 = v6; // 0x40b112
    int64_t v17 = v5; // 0x40b112
    int64_t v18 = v4; // 0x40b112
    int64_t v19 = a1; // 0x40b112
    int64_t v20; // 0x40b070
    int64_t v21; // 0x40b070
    int64_t v22; // 0x40b070
    int64_t v23; // 0x40b070
    char * v24; // 0x40b070
    int64_t v25; // 0x40b070
    int64_t v26; // 0x40b070
    int64_t v27; // 0x40b070
    int64_t v28; // 0x40b070
    int64_t v29; // 0x40b070
    int64_t v30; // 0x40b070
    int64_t v31; // 0x40b070
    int64_t v32; // 0x40b070
    int64_t v33; // 0x40b070
    int32_t * v34; // 0x40b070
    int32_t * v35; // 0x40b070
    int32_t v36; // 0x40b070
    int32_t v37; // 0x40b070
    int32_t v38; // 0x40b070
    int64_t v39; // 0x40b070
    int64_t v40; // 0x40b070
    int64_t v41; // 0x40b070
    int64_t v42; // 0x40b070
    int64_t v43; // 0x40b070
    int64_t v44; // 0x40b070
    int64_t v45; // 0x40b070
    uint64_t v46; // 0x40b070
    int64_t v47; // 0x40b153
    char * str3; // 0x40b070
    int64_t v48; // 0x40b153
    char * v49; // 0x40b070
    int64_t v50; // 0x40b3e4
    char * str2; // 0x40b3f8
    int32_t len2; // 0x40b3f8
    int64_t v51; // 0x40b3f8
    int32_t len3; // 0x40b403
    while (true) {
      lab_0x40b118_4:
        // 0x40b118
        v37 = v36;
        v40 = v14;
        int64_t v52 = v13;
        int64_t v53 = v11;
        int16_t v54 = (int16_t)v37 & -0x1000;
        v42 = v12;
        v24 = v15;
        v27 = v16;
        v22 = v19;
        int32_t v55; // 0x40b070
        while (true) {
          lab_0x40b118_3:
            // 0x40b118
            v21 = v18;
            v26 = v17;
            v43 = v42;
            v46 = v21 + 1;
            v25 = (int64_t)*v24;
            v29 = v27;
            v23 = v22;
            int64_t v56; // 0x40b070
            int64_t v57; // 0x40b170
            while (true) {
              lab_0x40b118_2:
                // 0x40b118
                v30 = v29;
                if (v25 == 0) {
                    // break (via goto) -> 0x40b320
                    goto lab_0x40b320_3;
                }
                int64_t v58 = v23; // 0x40b124
                int64_t v59 = v25; // 0x40b124
                int64_t v60 = v23; // 0x40b124
                int64_t v61; // 0x40b130
                unsigned char v62; // 0x40b134
                if (v25 == 47) {
                    v61 = v58 + 1;
                    v62 = *(char *)v61;
                    v58 = v61;
                    while (v62 == 47) {
                        // 0x40b130
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                    }
                    // 0x40b13d
                    v59 = v62;
                    v60 = v61;
                    if (v62 == 0) {
                        // break (via goto) -> 0x40b320
                        goto lab_0x40b320_3;
                    }
                }
                // 0x40b145
                v56 = v60;
                int64_t v63 = v59;
                v47 = v56 + 1;
                str3 = (char *)v47;
                unsigned char v64 = *str3; // 0x40b153
                int64_t v65 = v47; // 0x40b15e
                while (v64 != 0 == (v64 != 47)) {
                    // 0x40b153
                    v47 = v65 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                }
                if (v47 == v56) {
                    // break (via goto) -> 0x40b320
                    goto lab_0x40b320_3;
                }
                // 0x40b16d
                v48 = v64;
                v57 = v47 - v56;
                while (v57 != 1) {
                    if (v57 == 2 != ((char)v63 == 46)) {
                        // break (via goto) -> 0x40b18c
                        goto lab_0x40b18c_2;
                    }
                    // 0x40b4e0
                    if (*(char *)(v56 + 1) != 46) {
                        // break (via goto) -> 0x40b18c
                        goto lab_0x40b18c_2;
                    }
                    int64_t v66 = v48; // 0x40b4f6
                    int64_t v67 = v47; // 0x40b4f6
                    if (v30 > v46) {
                        int64_t v68 = v30 - 1; // 0x40b4fc
                        v28 = v68;
                        if (v21 >= v68) {
                            goto lab_0x40b118;
                        } else {
                            int64_t v69 = v30 - 2; // 0x40b505
                            v28 = v68;
                            if (*(char *)v69 != 47) {
                                // 0x40b643
                                v28 = v21;
                                v31 = v69;
                                if (v21 == v69) {
                                    goto lab_0x40b118;
                                } else {
                                    goto lab_0x40b650;
                                }
                            } else {
                                goto lab_0x40b118;
                            }
                        }
                    }
                    if (v66 == 0) {
                        // break (via goto) -> 0x40b320
                        goto lab_0x40b320_3;
                    }
                    // 0x40b120
                    v58 = v67;
                    v59 = v66;
                    v60 = v67;
                    if (v66 == 47) {
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                        while (v62 == 47) {
                            // 0x40b130
                            v61 = v58 + 1;
                            v62 = *(char *)v61;
                            v58 = v61;
                        }
                        // 0x40b13d
                        v59 = v62;
                        v60 = v61;
                        if (v62 == 0) {
                            // break (via goto) -> 0x40b320
                            goto lab_0x40b320_3;
                        }
                    }
                    // 0x40b145
                    v56 = v60;
                    v63 = v59;
                    v47 = v56 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                    while (v64 != 0 == (v64 != 47)) {
                        // 0x40b153
                        v47 = v65 + 1;
                        str3 = (char *)v47;
                        v64 = *str3;
                        v65 = v47;
                    }
                    if (v47 == v56) {
                        // break (via goto) -> 0x40b320
                        goto lab_0x40b320_3;
                    }
                    // 0x40b16d
                    v48 = v64;
                    v57 = v47 - v56;
                }
                // 0x40b308
                v28 = v30;
                if ((char)v63 != 46) {
                    // break -> 0x40b18c
                    break;
                }
                goto lab_0x40b118;
            }
          lab_0x40b18c_2:;
            int64_t v70 = v30; // 0x40b190
            if (*(char *)(v30 - 1) != 47) {
                // 0x40b192
                *(char *)v30 = 47;
                v70 = v30 + 1;
            }
            int64_t v71 = v70;
            int64_t v72 = v71 + v57;
            int64_t v73 = v72; // 0x40b1a0
            int64_t v74 = v71; // 0x40b1a0
            v17 = v26;
            int64_t v75 = v21; // 0x40b1a0
            if (v26 <= v72) {
                int64_t v76 = v57 < 0x1000 == (4095 - v57 & v57) < 0 ? v57 + 1 : 0x1000;
                int64_t v77 = v76 + v26 - v21; // 0x40b1c3
                v75 = function_4129e0(v21, v77);
                v74 = v75 + v71 - v21;
                v73 = v74 + v57;
                v17 = v75 + v77;
            }
            // 0x40b1dd
            v18 = v75;
            v20 = v73;
            memcpy((int64_t *)v74, (int64_t *)v56, (int32_t)v57);
            *(char *)v20 = 0;
            v55 = 0;
            if ((a2 & 4) != 0 && v3 == 2) {
                // break -> 0x40b213
                break;
            }
            // 0x40b250
            v1 = 1;
            v49 = (char *)v18;
            int64_t v78; // bp-200, 0x40b070
            int32_t v79; // 0x40b070
            if ((a2 & 4) == 0) {
                // 0x40b388
                v79 = __lxstat(1, v49, (struct stat *)&v78);
            } else {
                // 0x40b269
                v79 = __xstat(1, v49, (struct stat *)&v78);
            }
            // 0x40b273
            if (v79 == 0) {
                // 0x40b2e0
                v55 = v37;
                v15 = str3;
                v11 = v53;
                v12 = v43;
                v13 = v52;
                v14 = v40;
                v38 = v37;
                v16 = v20;
                v19 = v47;
                switch (v54) {
                    case -0x6000: {
                        int64_t v80 = v43; // 0x40b3a6
                        if (v43 == 0) {
                            // 0x40b533
                            v1 = 7;
                            v80 = function_40ca80(7, 0, 0x40d440, 0x40d4b0, 0x40d4f0);
                            if (v80 == 0) {
                                // 0x40b55d
                                function_412bd0(7);
                                // UNREACHABLE
                            }
                        }
                        // 0x40b3ac
                        v45 = v80;
                        int64_t v81 = function_40b9a0(v45, v53, &v78); // 0x40b3bb
                        if ((char)v81 != 0) {
                            // 0x40b479
                            v44 = v45;
                            if (v3 != 2) {
                                // 0x40b484
                                v32 = 40;
                                v34 = __errno_location();
                                goto lab_0x40b491_2;
                            }
                        } else {
                            // 0x40b3c8
                            function_40b910(v45, v53, &v78);
                            int64_t v82; // 0x40b070
                            v50 = function_40abf0(v18, v82);
                            if (v50 != 0) {
                                // 0x40b3f5
                                str2 = (char *)v50;
                                len2 = strlen(str2);
                                v51 = len2;
                                len3 = strlen(str3);
                                uint64_t v83 = v51 + 1 + (int64_t)len3; // 0x40b411
                                if (v52 == 0) {
                                    int64_t v84 = v83 >= 0x1000 ? v83 : 0x1000; // 0x40b5c1
                                    int64_t v85 = function_412980(v84); // 0x40b5cd
                                    v39 = v84;
                                    v41 = v85;
                                    goto lab_0x40b427;
                                } else {
                                    // 0x40b41c
                                    v39 = v52;
                                    v41 = v40;
                                    if (v83 > v52) {
                                        int64_t v86 = function_4129e0(v40, v83); // 0x40b682
                                        v39 = v83;
                                        v41 = v86;
                                        goto lab_0x40b427;
                                    } else {
                                        goto lab_0x40b427;
                                    }
                                }
                            }
                            int32_t * v87 = __errno_location(); // 0x40b613
                            uint32_t v88 = *v87; // 0x40b620
                            v44 = v45;
                            if (v3 == 2 != v88 != 12) {
                                // 0x40b491
                                v32 = v88;
                                v34 = v87;
                                goto lab_0x40b491_2;
                            }
                        }
                        goto lab_0x40b2c9;
                    }
                    case 0x4000: {
                        goto lab_0x40b224;
                    }
                    default: {
                        goto lab_0x40b213;
                    }
                }
            } else {
                int32_t * v89 = __errno_location(); // 0x40b277
                uint32_t v90 = *v89; // 0x40b27f
                if (v3 == 0) {
                    // 0x40b575
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x40b575_3;
                }
                // 0x40b28d
                v55 = 0;
                if (v3 != 1) {
                    // break -> 0x40b213
                    break;
                }
                char v91 = *(char *)(v47 + (int64_t)strspn(str3, "/")); // 0x40b2b5
                v44 = v43;
                if (v90 == 2 != (v91 == 0)) {
                    // 0x40b575
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x40b575_3;
                }
                goto lab_0x40b2c9;
            }
        }
      lab_0x40b213:
        // 0x40b213
        v15 = str3;
        v11 = v53;
        v12 = v43;
        v13 = v52;
        v14 = v40;
        v38 = v55;
        v16 = v20;
        v19 = v47;
        if (v3 != 2 == (*str3 != 0)) {
            // 0x40b568
            v33 = 20;
            v35 = __errno_location();
            goto lab_0x40b575_3;
        }
        goto lab_0x40b224;
    }
  lab_0x40b320_3:;
    char * v92; // 0x40b070
    int64_t v93; // 0x40b070
    int64_t v94; // 0x40b070
    if (v30 > v46) {
        int64_t v95 = v30 - 1; // 0x40b32a
        char * v96 = (char *)v95;
        v92 = v96;
        v93 = v30;
        v94 = v95;
        if (*v96 == 47) {
            goto lab_0x40b338;
        } else {
            goto lab_0x40b334;
        }
    } else {
        goto lab_0x40b334;
    }
  lab_0x40b118:
    // 0x40b118
    v25 = v48;
    v29 = v28;
    v23 = v47;
    goto lab_0x40b118_2;
  lab_0x40b224:
    // 0x40b224
    v36 = v38;
    goto lab_0x40b118_4;
  lab_0x40b2c9:
    // 0x40b2c9
    v42 = v44;
    v24 = str3;
    v27 = v20;
    v22 = v47;
    goto lab_0x40b118_3;
  lab_0x40b334:
    // 0x40b334
    v92 = (char *)v30;
    v93 = v30 + 1;
    v94 = v30;
    goto lab_0x40b338;
  lab_0x40b338:
    // 0x40b338
    *v92 = 0;
    int64_t v97 = v21; // 0x40b33e
    if (v26 != v93) {
        // 0x40b340
        v97 = function_4129e0(v21, 1 - v21 + v94);
    }
    // 0x40b352
    free((int64_t *)v40);
    int64_t result = v97; // 0x40b364
    if (v43 != 0) {
        // 0x40b366
        function_40ccc0(v43);
        result = v97;
    }
  lab_0x40b36e:
    // 0x40b36e
    return result;
  lab_0x40b650:;
    int64_t v98 = v31 - 1; // 0x40b650
    v28 = v31;
    if (*(char *)v98 == 47) {
        goto lab_0x40b118;
    } else {
        // 0x40b65a
        v28 = v98;
        v31 = v98;
        if (v21 != v98) {
            goto lab_0x40b650;
        } else {
            goto lab_0x40b118;
        }
    }
  lab_0x40b575_3:
    // 0x40b575
    free((int64_t *)v40);
    free((int64_t *)v18);
    int64_t v99 = v43; // 0x40b59f
    int64_t v100 = v33; // 0x40b59f
    int32_t * v101 = v35; // 0x40b59f
    if (v43 == 0) {
        goto lab_0x40b4d1;
    } else {
        goto lab_0x40b4b5;
    }
  lab_0x40b4d1:
    // 0x40b4d1
    *v101 = (int32_t)(v100 & 0xffffffff);
    result = 0;
    goto lab_0x40b36e;
  lab_0x40b4b5:
    // 0x40b4b5
    function_40ccc0(v99);
    goto lab_0x40b4d1;
  lab_0x40b491_2:
    // 0x40b491
    free((int64_t *)v40);
    free((int64_t *)v18);
    v99 = v45;
    v100 = v32;
    v101 = v34;
    goto lab_0x40b4b5;
  lab_0x40b427:
    // 0x40b427
    memmove((int64_t *)(v41 + v51), (int64_t *)v47, len3 + 1);
    int64_t * v102 = (int64_t *)v50; // 0x40b447
    int64_t * dest_mem = memcpy((int64_t *)v41, v102, len2); // 0x40b447
    int64_t v103 = v18 + 1; // 0x40b450
    int64_t v104; // 0x40b070
    int64_t v105; // 0x40b070
    if (*str2 == 47) {
        // 0x40b636
        *v49 = 47;
        v104 = v103;
        goto lab_0x40b46c;
    } else {
        // 0x40b463
        v104 = v20;
        if (v20 > v103) {
            int64_t v106 = v20 - 1; // 0x40b6ac
            v104 = v106;
            if (v18 >= v106) {
                goto lab_0x40b46c;
            } else {
                // 0x40b6b5
                v104 = v106;
                v105 = v106;
                if (*(char *)(v20 - 2) == 47) {
                    goto lab_0x40b46c;
                } else {
                    goto lab_0x40b6c2;
                }
            }
        } else {
            goto lab_0x40b46c;
        }
    }
  lab_0x40b46c:;
    int64_t v107 = (int64_t)dest_mem; // 0x40b447
    free(v102);
    v15 = (char *)dest_mem;
    v11 = v107;
    v12 = v45;
    v13 = v39;
    v14 = v41;
    v38 = v37;
    v16 = v104;
    v19 = v107;
    goto lab_0x40b224;
  lab_0x40b6c2:;
    int64_t v108 = v105;
    int64_t v109 = v108 - 1; // 0x40b6c2
    v104 = v18;
    if (v18 == v109) {
        goto lab_0x40b46c;
    } else {
        // 0x40b6cf
        v104 = v109;
        v105 = v109;
        if (*(char *)(v108 - 2) == 47) {
            goto lab_0x40b46c;
        } else {
            goto lab_0x40b6c2;
        }
    }
}
// Address range: 0x40b6f0 - 0x40b6f8
int64_t function_40b6f0(int64_t a1) {
    // 0x40b6f0
    g184 = a1;
    int64_t result; // 0x40b6f0
    return result;
}
// Address range: 0x40b700 - 0x40b708
int64_t function_40b700(int64_t a1) {
    // 0x40b700
    g183 = a1;
    int64_t result; // 0x40b700
    return result;
}
// Address range: 0x40b710 - 0x40b7ae
int64_t function_40b710(void) {
    // 0x40b710
    int32_t * err_num; // 0x40b726
    if ((int32_t)function_4178e0((int64_t)g86) == 0) {
        goto lab_0x40b73c;
    } else {
        // 0x40b726
        err_num = __errno_location();
        if (g183 == 0) {
            goto lab_0x40b753;
        } else {
            // 0x40b737
            if (*err_num != 32) {
                goto lab_0x40b753;
            } else {
                goto lab_0x40b73c;
            }
        }
    }
  lab_0x40b73c:;
    int64_t result = function_4178e0((int64_t)g88); // 0x40b743
    if ((int32_t)result == 0) {
        // 0x40b74c
        return result;
    }
    // 0x40b78e
    _exit(g76);
    // UNREACHABLE
  lab_0x40b753:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40b75f
    if (g184 == 0) {
        // 0x40b799
        error(0, *err_num, "%s", v1);
    } else {
        // 0x40b773
        error(0, *err_num, "%s: %s", (char *)function_4120e0((int64_t)g184), v1);
    }
    // 0x40b78e
    _exit(g76);
    // UNREACHABLE
}
// Address range: 0x40b7b0 - 0x40b80d
int64_t function_40b7b0(int64_t a1) {
    // 0x40b7b0
    int64_t v1; // 0x40b7b0
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x40b7be
    int64_t v3 = function_40b870(a1, v1); // 0x40b7c2
    int64_t result = v3 - a1; // 0x40b7ca
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x40b7f3
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x40b7e0
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x40b7f3
            break;
        }
        result2--;
    }
    // 0x40b7f3
    return result2;
}
// Address range: 0x40b810 - 0x40b86a
int64_t function_40b810(int64_t a1) {
    int64_t v1 = function_40b7b0(a1); // 0x40b819
    int64_t * mem = malloc((int32_t)(v1 + 1 + (int64_t)(v1 == 0))); // 0x40b82f
    if (mem == NULL) {
        // 0x40b856
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v1); // 0x40b845
    int64_t v2 = v1; // 0x40b850
    if (v1 == 0) {
        // 0x40b860
        *(char *)dest_mem = 46;
        v2 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x40b845
    *(char *)(v2 + result) = 0;
    // 0x40b856
    return result;
}
// Address range: 0x40b870 - 0x40b8cb
int64_t function_40b870(int64_t a1, int64_t a2) {
    // 0x40b870
    int64_t v1; // 0x40b870
    char v2 = v1;
    int64_t v3 = a1; // 0x40b879
    int64_t v4 = a1; // 0x40b879
    char v5 = v2; // 0x40b879
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x40b884
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x40b880
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40b88e
    if (v5 == 0) {
      lab_0x40b8ca:
        // 0x40b8ca
        return result;
    }
    int64_t v7 = v4; // 0x40b8b8
    int64_t v8 = 0; // 0x40b8b8
    int64_t v9; // 0x40b870
    int64_t v10; // 0x40b8ba
    char v11; // 0x40b8be
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x40b8b5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40b8ba
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x40b8b5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40b8aa
    char v14 = *(char *)v13; // 0x40b8ae
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
            // 0x40b8b5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40b8ba
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x40b8b5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x40b8a0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40b8ca
    return result2;
}
// Address range: 0x40b8d0 - 0x40b8fb
int64_t function_40b8d0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x40b8d4
    int64_t result = len; // 0x40b8d4
    if (len < 2) {
        // 0x40b8ea
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x40b8e8
    while (*(char *)(v1 + str) == 47) {
        // 0x40b8f0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40b8ea
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40b8ea
    return result2;
}
// Address range: 0x40b900 - 0x40b903
int64_t function_40b900(void) {
    // 0x40b900
    return 0;
}
// Address range: 0x40b910 - 0x40b996
int64_t function_40b910(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x40b980
        int64_t result; // 0x40b910
        return result;
    }
    int64_t v1 = (int64_t)a3;
    int64_t result2 = function_412980(24); // 0x40b92d
    *(int64_t *)result2 = function_412bb0(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(v1 + 8);
    *(int64_t *)(result2 + 16) = v1;
    int64_t v2 = function_40d220(a1, result2); // 0x40b956
    if (v2 == 0) {
        // 0x40b991
        function_412bd0(a1);
        // UNREACHABLE
    }
    // 0x40b960
    if (result2 == v2) {
        // 0x40b980
        return result2;
    }
    // 0x40b965
    return function_40d4f0(result2);
}
// Address range: 0x40b9a0 - 0x40b9db
int64_t function_40b9a0(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x40b9d8
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x40b9ad
    int64_t v2 = function_40c810(a1, &v1); // 0x40b9c1
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x40b9e0 - 0x40bb53
int64_t function_40b9e0(int32_t a1, int64_t a2) {
    int32_t v1 = a1 & 0xf000; // 0x40b9e7
    char v2 = 45; // 0x40b9e0
    int64_t v3; // 0x40b9e0
    uint64_t v4; // 0x40b9e0
    switch ((v1 - 0x1000) / 0x1000) {
        case 3: {
            // 0x40ba49
            v2 = 100;
        }
        case 7: {
          lab_0x40ba49:
            // 0x40ba49
            v4 = (int64_t)a1;
            *(char *)a2 = v2;
            *(char *)(a2 + 1) = (v4 & 256) == 0 ? 45 : 114;
            int64_t v5 = v4 & 128; // 0x40ba62
            char v6 = v5; // 0x40ba6a
            *(char *)(a2 + 2) = (v6 - ((char)(v5 == 0) | v6) & -74) + 119;
            int64_t v7 = v4 & 64; // 0x40ba77
            int64_t v8 = v7 - (v7 | (int64_t)(v7 == 0)); // 0x40ba7d
            if ((v4 & 2048) == 0) {
                // 0x40bb20
                v3 = (v8 & 0xffffffb5) + 120 & 0xfffffffd;
            } else {
                // 0x40ba8b
                v3 = (v8 & 0xffffffe0) + 115 & 0xfffffff3;
            }
            // break -> 0x40ba91
            break;
        }
        case 5: {
            // 0x40ba49
            v2 = 98;
            // branch (via goto) -> 0x40ba49
            goto lab_0x40ba49;
        }
        case 1: {
            // 0x40ba49
            v2 = 99;
            // branch (via goto) -> 0x40ba49
            goto lab_0x40ba49;
        }
        case 9: {
            // 0x40ba49
            v2 = 108;
            // branch (via goto) -> 0x40ba49
            goto lab_0x40ba49;
        }
        case 0: {
            // 0x40ba49
            v2 = 112;
            // branch (via goto) -> 0x40ba49
            goto lab_0x40ba49;
        }
        default: {
            // 0x40ba36
            v2 = v1 != 0xc000 ? 63 : 115;
            // branch (via goto) -> 0x40ba49
            goto lab_0x40ba49;
        }
    }
    // 0x40ba91
    *(char *)(a2 + 3) = (char)v3;
    int64_t v9 = v4 & 32; // 0x40ba96
    char v10 = v9; // 0x40ba9c
    *(char *)(a2 + 4) = (v10 - ((char)(v9 == 0) | v10) & -69) + 114;
    int64_t v11 = v4 & 16; // 0x40baa9
    char v12 = v11; // 0x40baaf
    *(char *)(a2 + 5) = (v12 - ((char)(v11 == 0) | v12) & -74) + 119;
    int64_t v13 = v4 & 8; // 0x40babc
    int64_t v14 = v13 - (v13 | (int64_t)(v13 == 0)); // 0x40bac2
    int64_t v15; // 0x40b9e0
    if ((v4 & 1024) == 0) {
        // 0x40bb30
        v15 = (v14 & 0xffffffb5) + 120 & 0xfffffffd;
    } else {
        // 0x40bacc
        v15 = (v14 & 0xffffffe0) + 115 & 0xfffffff3;
    }
    // 0x40bad2
    *(char *)(a2 + 6) = (char)v15;
    int64_t v16 = v4 & 4; // 0x40bad7
    char v17 = v16; // 0x40badd
    *(char *)(a2 + 7) = (v17 - ((char)(v16 == 0) | v17) & -69) + 114;
    int64_t v18 = v4 & 2; // 0x40baea
    char v19 = v18; // 0x40baf0
    *(char *)(a2 + 8) = (v19 - ((char)(v18 == 0) | v19) & -74) + 119;
    char v20 = v4 % 2 == 0; // 0x40bb03
    if ((v4 & 512) == 0) {
        // 0x40bb40
        *(char *)(a2 + 9) = (v20 & -75) + 120;
        *(int16_t *)(a2 + 10) = 32;
        return 32;
    }
    // 0x40bb0d
    *(char *)(a2 + 9) = (v20 & -32) + 116;
    *(int16_t *)(a2 + 10) = 32;
    return 32;
}
// Address range: 0x40bb60 - 0x40bb68
int64_t function_40bb60(int64_t a1) {
    // 0x40bb60
    int64_t v1; // 0x40bb60
    return function_40b9e0(*(int32_t *)(a1 + 24), v1);
}
// Address range: 0x40bb70 - 0x40bb88
int64_t function_40bb70(void) {
    // 0x40bb70
    int64_t v1; // 0x40bb70
    int64_t result = function_40bb90(v1, v1, v1); // 0x40bb74
    if (result != 0) {
        // 0x40bb7e
        return result;
    }
    // 0x40bb83
    function_412bd0(v1);
    // UNREACHABLE
}
// Address range: 0x40bb90 - 0x40bc69
int64_t function_40bb90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_40b870(a1, a2); // 0x40bba8
    int64_t v2 = function_40b8d0(v1); // 0x40bbb3
    int64_t v3 = 0; // 0x40bbc7
    if (v2 != 0) {
        // 0x40bbc9
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x40bbe0
    int64_t v4 = a2; // 0x40bbe0
    int64_t v5; // 0x40bb90
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x40bc58
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x40bbc1
    int32_t len = strlen((char *)str); // 0x40bbe5
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x40bbf5
    if (mem == NULL) {
        // 0x40bc41
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x40bc0b
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x40bc17
    if (a3 != 0) {
        // 0x40bc20
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x40bc33
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x40bc41
    return (int64_t)mem;
}
// Address range: 0x40bc70 - 0x40bd33
int64_t function_40bc70(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a1;
    char v2 = v1;
    int64_t v3 = 0; // 0x40bc78
    int64_t v4 = 0; // 0x40bc78
    char v5 = v2; // 0x40bc78
    int64_t v6 = v1; // 0x40bc78
    int64_t result = 0; // 0x40bc78
    if (v2 == 0) {
      lab_0x40bd01_2:
        // 0x40bd01
        return result;
    }
    int64_t v7; // 0x40bc70
    int64_t v8; // 0x40bc70
    int64_t v9; // 0x40bc70
    char v10; // 0x40bc70
    int64_t v11; // 0x40bc70
    int64_t v12; // 0x40bc70
    while (true) {
      lab_0x40bccf:
        // 0x40bccf
        v12 = v6;
        v10 = v5;
        int64_t v13 = v4;
        v8 = v3;
        int64_t v14 = v8; // 0x40bcef
        char v15 = v10; // 0x40bcfa
        int64_t v16 = v12; // 0x40bcf3
        while ((char)v13 == 0) {
            int64_t v17 = v16;
            char v18 = v15;
            int64_t v19 = v14;
            if (v18 == 46) {
                // 0x40bd18
                v11 = v17;
                v7 = v19 == 0 ? v17 : v19;
                v9 = 1;
                goto lab_0x40bcc1_2;
            }
            if (v18 > 90) {
                // 0x40bd08
                if (v18 < 123) {
                    goto lab_0x40bcc1_2;
                }
            } else {
                // 0x40bcdd
                v11 = v17;
                v7 = v19;
                v9 = v13;
                if (v18 > 64 || v18 < 58) {
                    goto lab_0x40bcc1_2;
                }
            }
            // 0x40bcec
            v14 = v18 != 126 ? 0 : v19;
            v16 = v17 + 1;
            *a1 = v16;
            v15 = *(char *)v16;
            result = v14;
            if (v15 == 0) {
                return result;
            }
        }
        uint32_t v20 = (int32_t)v10 - 65; // 0x40bca3
        if (v10 == 122 || v20 < 57) {
            uint32_t v21 = v20 % 64;
            v11 = v12;
            v7 = v8;
            v9 = 0;
            if (v21 != 0 != ((1 << (int64_t)v21) % 0x3ffffff04000000 == 0)) {
                goto lab_0x40bcc1_2;
            } else {
                goto lab_0x40bcb8;
            }
        } else {
            goto lab_0x40bcb8;
        }
    }
    // 0x40bd01
    return result;
  lab_0x40bcc1_2:;
    int64_t v22 = v11 + 1; // 0x40bcc1
    *a1 = v22;
    char v23 = *(char *)v22; // 0x40bcc8
    v3 = v7;
    v4 = v9;
    v5 = v23;
    v6 = v22;
    result = v7;
    if (v23 == 0) {
        return result;
    }
    goto lab_0x40bccf;
  lab_0x40bcb8:
    // 0x40bcb8
    v11 = v12;
    v7 = v10 != 126 ? 0 : v8;
    v9 = 0;
    goto lab_0x40bcc1_2;
}
// Address range: 0x40bd40 - 0x40c14d
int64_t function_40bd40(int64_t str, int64_t str2) {
    // 0x40bd40
    int64_t v1; // 0x40bd40
    uint64_t v2 = v1;
    uint32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x40bd54
    if (strcmp_rc == 0) {
        // 0x40bfc6
        return 0;
    }
    char v3 = v2;
    if (v3 == 0) {
        // 0x40bfc6
        return 0xffffffff;
    }
    char v4 = v1;
    if (v4 == 0) {
        // 0x40bfc6
        return 1;
    }
    int64_t result2 = strcmp_rc; // 0x40bd59
    uint64_t v5 = v2 % 256; // 0x40bd64
    uint64_t v6 = v1 % 256; // 0x40bd71
    bool v7; // 0x40bd40
    int64_t v8 = v7 ? -1 : 1;
    int64_t v9 = str; // 0x40bd40
    int64_t v10 = (int64_t)"."; // 0x40bd40
    int64_t v11 = 2; // 0x40bd8f
    unsigned char v12 = *(char *)v10; // 0x40bd8f
    char v13 = *(char *)v9; // 0x40bd8f
    char v14 = v13; // 0x40bd8f
    bool v15 = false; // 0x40bd8f
    while (v12 == v13) {
        v11--;
        v9 += v8;
        v10 += v8;
        v14 = v12;
        v15 = true;
        if (v11 == 0) {
            // break -> 
            break;
        }
        v12 = *(char *)v10;
        v13 = *(char *)v9;
        v14 = v13;
        v15 = false;
    }
    unsigned char v16 = v14;
    int64_t v17 = str2; // 0x40bd98
    int64_t v18 = (int64_t)"."; // 0x40bd98
    if ((v12 >= v16 && !v15) == v12 < v16) {
        // 0x40bfc6
        return 0xffffffff;
    }
    int64_t v19 = 2; // 0x40bd98
    unsigned char v20 = *(char *)v18; // 0x40bda9
    char v21 = *(char *)v17; // 0x40bda9
    char v22 = v21; // 0x40bda9
    bool v23 = false; // 0x40bda9
    while (v20 == v21) {
        // 0x40bd9e
        v19--;
        v17 += v8;
        v18 += v8;
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
    int64_t v25 = str; // 0x40bdb2
    int64_t v26 = (int64_t)".."; // 0x40bdb2
    if ((v20 >= v24 && !v23) == v20 < v24) {
        // 0x40bfc6
        return 1;
    }
    int64_t v27 = 3; // 0x40bdb2
    unsigned char v28 = *(char *)v26; // 0x40bdc8
    char v29 = *(char *)v25; // 0x40bdc8
    char v30 = v29; // 0x40bdc8
    bool v31 = false; // 0x40bdc8
    while (v28 == v29) {
        // 0x40bdb8
        v27--;
        v25 += v8;
        v26 += v8;
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
    int64_t v33 = str2; // 0x40bdd1
    int64_t v34 = (int64_t)".."; // 0x40bdd1
    if ((v28 >= v32 && !v31) == v28 < v32) {
        // 0x40bfc6
        return 0xffffffff;
    }
    int64_t v35 = 3; // 0x40bdd1
    unsigned char v36 = *(char *)v34; // 0x40bde2
    char v37 = *(char *)v33; // 0x40bde2
    v34 += v8;
    v35--;
    char v38 = v37; // 0x40bde2
    bool v39 = false; // 0x40bde2
    while (v36 == v37) {
        // 0x40bdd7
        v33 += v8;
        v38 = v36;
        v39 = true;
        if (v35 == 0) {
            // break -> 
            break;
        }
        v36 = *(char *)v34;
        v37 = *(char *)v33;
        v34 += v8;
        v35--;
        v38 = v37;
        v39 = false;
    }
    unsigned char v40 = v38;
    if ((v36 >= v40 && !v39) == v36 < v40) {
        // 0x40bfc6
        return 1;
    }
    // 0x40bdf1
    if (v3 == 46 == (v4 != 46)) {
        // 0x40bfc6
        return 0xffffffff;
    }
    int64_t str4; // 0x40bd40
    int64_t str3; // 0x40bd40
    if (v3 == 46) {
        // 0x40c010
        str3 = str;
        str4 = str2;
        if (v4 == 46) {
            // 0x40c020
            str3 = str + 1;
            str4 = str2 + 1;
        }
    } else {
        // 0x40be17
        str3 = str;
        str4 = str2;
        if (v4 == 46) {
            // 0x40bfc6
            return 1;
        }
    }
    int64_t v41 = (int64_t)(v3 == 46) | (int64_t)".." & -256; // 0x40bdf5
    int64_t v42 = str3; // bp-72, 0x40be24
    int64_t v43 = str4; // bp-64, 0x40be29
    int64_t v44 = function_40bc70(&v42, v34, v41, v35, v5, v6); // 0x40be2e
    int64_t v45 = function_40bc70(&v43, v34, v41, v35, v5, v6); // 0x40be3b
    int64_t v46; // 0x40bd40
    int64_t n; // 0x40bd40
    int64_t v47; // 0x40bd40
    if (v44 == 0) {
        int64_t v48 = v42 - str3; // 0x40c0bd
        n = v48;
        v46 = v45;
        v47 = v48;
        if (v45 != 0) {
            goto lab_0x40be5b;
        } else {
            goto lab_0x40c0c9;
        }
    } else {
        // 0x40be49
        n = v44 - str3;
        v46 = v45 == 0 ? v43 : v45;
        goto lab_0x40be5b;
    }
  lab_0x40be91:;
    // 0x40be91
    int64_t v49; // 0x40bd40
    int64_t v50 = v49;
    int64_t v51; // 0x40bd40
    int64_t v52 = v51;
    char v53 = *(char *)(v50 + str3); // 0x40be91
    int64_t v54 = v52; // 0x40be9e
    int64_t v55 = v50; // 0x40be9e
    int32_t v56; // 0x40bd40
    int64_t v57; // 0x40bd40
    int64_t v58; // 0x40bd40
    int64_t v59; // 0x40bd40
    int64_t v60; // 0x40bd40
    uint64_t v61; // 0x40bd40
    char v62; // 0x40bd40
    int64_t v63; // 0x40bd40
    int64_t v64; // 0x40bd40
    int64_t v65; // 0x40bd40
    if (v53 == 57 || (int32_t)v53 < 57) {
        goto lab_0x40bf10;
    } else {
        int32_t v66 = v53;
        v56 = v66;
        v57 = v52;
        v62 = v53;
        v63 = v50;
        if (v66 < 58) {
            // 0x40bff8
            v58 = v61;
            v64 = v50;
            if (v61 == v52) {
                goto lab_0x40bf03;
            } else {
                // 0x40c001
                v59 = v52;
                v60 = (int64_t)*(char *)(v52 + str4);
                v65 = v50;
                goto lab_0x40bf46;
            }
        } else {
            goto lab_0x40beb4;
        }
    }
  lab_0x40bf10:;
    int64_t v67 = v55;
    int64_t v68 = v54;
    char v69 = *(char *)(v68 + str4); // 0x40bf10
    uint64_t v70; // 0x40bd40
    if (v61 > v68) {
        if (v69 == 57 || (int32_t)v69 < 57) {
            goto lab_0x40bf84;
        } else {
            int64_t v71 = v69; // 0x40bf10
            v59 = v68;
            v60 = v71;
            v65 = v70;
            if (v70 == v67) {
                goto lab_0x40bf46;
            } else {
                unsigned char v72 = *(char *)(v67 + str3); // 0x40bf2f
                int32_t v73 = v72;
                v56 = v73;
                v57 = v68;
                v62 = v72;
                v63 = v67;
                v59 = v68;
                v60 = v71;
                v65 = v67;
                if (v72 == 57 || v73 < 57) {
                    goto lab_0x40bf46;
                } else {
                    goto lab_0x40beb4;
                }
            }
        }
    } else {
        goto lab_0x40bf84;
    }
  lab_0x40bf84:;
    int64_t v74 = v67;
    char v75 = *(char *)(v74 + str3); // 0x40bf84
    int64_t v76 = v74 + 1; // 0x40bf8a
    while (v75 == 48) {
        // 0x40bf84
        v74 = v76;
        v75 = *(char *)(v74 + str3);
        v76 = v74 + 1;
    }
    int64_t v77 = v68; // 0x40bf90
    int64_t v78 = v68; // 0x40bf90
    char v79 = v69; // 0x40bf90
    if (v69 == 48) {
        int64_t v80 = v77 + 1; // 0x40bf98
        char v81 = *(char *)(v80 + str4); // 0x40bf9c
        v77 = v80;
        v78 = v80;
        v79 = v81;
        while (v81 == 48) {
            // 0x40bf98
            v80 = v77 + 1;
            v81 = *(char *)(v80 + str4);
            v77 = v80;
            v78 = v80;
            v79 = v81;
        }
    }
    char v82 = v79;
    int64_t v83 = v78;
    int64_t v84; // 0x40bd40
    int64_t result; // 0x40bd40
    int64_t v85; // 0x40bd40
    if ((int32_t)v75 < 58) {
        // 0x40bfb2
        result = 1;
        if ((int32_t)v82 >= 58) {
            return result;
        }
        int64_t v86 = 0;
        int64_t v87 = v86 == 0 ? (int64_t)v75 - (int64_t)v82 : v86; // 0x40c044
        int64_t v88 = v87 & 0xffffffff; // 0x40c044
        int64_t v89 = v74 + 1; // 0x40c048
        char v90 = *(char *)(str4 - v74 + v83 + v89); // 0x40c04f
        char v91 = *(char *)(v89 + str3); // 0x40c063
        while (v91 == 57 || (int32_t)v91 < 57) {
            // 0x40c0e0
            result = 1;
            if ((int32_t)v90 >= 58) {
                return result;
            }
            v86 = v88;
            v87 = v86 == 0 ? (int64_t)v91 - (int64_t)v90 : v86;
            v88 = v87 & 0xffffffff;
            v89++;
            v90 = *(char *)(str4 - v74 + v83 + v89);
            v91 = *(char *)(v89 + str3);
        }
        // 0x40c076
        result = 0xffffffff;
        if ((int32_t)v90 < 58) {
            return result;
        }
        // 0x40c081
        result = v88;
        v84 = v89 - v74 + v83;
        v85 = v89;
        if ((int32_t)v87 != 0) {
            return result;
        }
    } else {
        // 0x40bfe0
        result = 0xffffffff;
        v84 = v83;
        v85 = v74;
        if ((int32_t)v82 < 58) {
            return result;
        }
    }
    int64_t v92 = v84; // 0x40be7b
    bool v93 = v70 > v85; // 0x40be7b
    int64_t v94 = v85; // 0x40be7b
    result = result2;
    if (v61 <= v84 && v70 <= v85) {
        return result;
    }
    goto lab_0x40be86;
  lab_0x40beb4:;
    // 0x40beb4
    int64_t v96; // 0x40bd40
    int64_t v95; // 0x40bd40
    int64_t v97 = v96 - v95; // 0x40be89
    int64_t v98 = v63;
    unsigned char v99 = v62;
    int64_t v100 = v57; // 0x40bee7
    int64_t v101 = v99;
    int64_t v102; // 0x40bd40
    int64_t v103; // 0x40bd40
    int64_t v104; // 0x40bd40
    int64_t v105; // 0x40bd40
    if (v56 < 123) {
        if ((1 << (int64_t)((v99 + 63) % 64)) % 0x3ffffff04000000 != 0) {
            // 0x40c0a0
            v102 = v100;
            v104 = 0;
            v105 = v98;
            v103 = v101;
            if (v61 != v98 + v97) {
                goto lab_0x40bee7;
            } else {
                goto lab_0x40befa;
            }
        } else {
            goto lab_0x40becb;
        }
    } else {
        goto lab_0x40becb;
    }
  lab_0x40bf03:;
    int64_t v106 = v64 + 1; // 0x40bf03
    int64_t v107 = v58 + 1; // 0x40bf07
    v51 = v107;
    v49 = v106;
    v54 = v107;
    v55 = v106;
    if (v70 > v106) {
        goto lab_0x40be91;
    } else {
        goto lab_0x40bf10;
    }
  lab_0x40becb:;
    int64_t v108 = v99 == 126 ? 0xffffffff : v101 | 256;
    result = v108;
    if (v61 == v98 + v97) {
        // break -> 0x40bfc6
        goto lab_0x40bfc6_7;
    }
    goto lab_0x40bee7;
  lab_0x40bf46:
    // 0x40bf46
    v58 = v59;
    v64 = v65;
    int64_t v110 = v60; // 0x40bf53
    int64_t v111 = v59; // 0x40bf53
    int64_t v112 = v65; // 0x40bf53
    int64_t v113 = 0; // 0x40bf53
    if ((int32_t)v60 < 58) {
        goto lab_0x40bf03;
    } else {
        goto lab_0x40bf55;
    }
  lab_0x40bee7:;
    unsigned char v109 = *(char *)(v100 + str4); // 0x40bee7
    v102 = v100;
    v104 = 0;
    v105 = v98;
    v103 = v108;
    v110 = v109;
    v111 = v100;
    v112 = v98;
    v113 = v108;
    if (v109 == 57 || (int32_t)v109 < 57) {
        goto lab_0x40befa;
    } else {
        goto lab_0x40bf55;
    }
  lab_0x40bf55:;
    int64_t v114 = v113;
    int64_t v115 = v112;
    int64_t v116 = v111;
    int64_t v117 = v110;
    uint64_t v118 = v117 + 0xffffffbf; // 0x40bf59
    if ((int32_t)v118 < 58) {
        // 0x40bf61
        v102 = v116;
        v104 = v117;
        v105 = v115;
        v103 = v114;
        if ((1 << v118 % 64) % 0x3ffffff04000000 != 0) {
            goto lab_0x40befa;
        } else {
            goto lab_0x40bf6c;
        }
    } else {
        goto lab_0x40bf6c;
    }
  lab_0x40befa:;
    int64_t v119 = v103;
    int64_t v120 = v104;
    v58 = v102;
    v64 = v105;
    if ((int32_t)v120 != (int32_t)v119) {
        // 0x40c12d
        result = v119 - v120 & 0xffffffff;
        goto lab_0x40bfc6_7;
    }
    goto lab_0x40bf03;
  lab_0x40bf6c:
    // 0x40bf6c
    v102 = v116;
    v104 = (char)v117 == 126 ? 0xffffffff : v117 | 256;
    v105 = v115;
    v103 = v114;
    goto lab_0x40befa;
  lab_0x40be5b:;
    int64_t v121 = v46 - str4;
    int64_t v122 = n; // 0x40be5e
    int64_t v123 = v121; // 0x40be5e
    if (n == v121) {
        int32_t strncmp_rc = strncmp((char *)str3, (char *)str4, (int32_t)n); // 0x40c0f9
        v122 = n;
        v123 = n;
        if (strncmp_rc != 0) {
            goto lab_0x40be64;
        } else {
            // 0x40c106
            v47 = v42 - str3;
            goto lab_0x40c0c9;
        }
    } else {
        goto lab_0x40be64;
    }
  lab_0x40c0c9:
    // 0x40c0c9
    v122 = v47;
    v123 = v43 - str4;
    goto lab_0x40be64;
  lab_0x40be64:
    // 0x40be64
    v61 = v123;
    v70 = v122;
    if ((v61 || v70) == 0) {
        // 0x40bfc6
        return result2;
    }
    // 0x40be86
    v92 = 0;
    v93 = v70 != 0;
    v94 = 0;
    while (true) {
      lab_0x40be86:
        // 0x40be86
        v95 = v94;
        v96 = v92;
        v51 = v96;
        v49 = v95;
        v54 = v96;
        v55 = v95;
        if (v93) {
            goto lab_0x40be91;
        } else {
            goto lab_0x40bf10;
        }
    }
  lab_0x40bfc6_7:
    // 0x40bfc6
    return result;
}
// Address range: 0x40c150 - 0x40c18a
int64_t function_40c150(int64_t * tp) {
    int64_t result = 0; // 0x40c164
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x40c166
        int64_t tp2; // bp-24, 0x40c150
        gettimeofday((struct timeval *)&tp2, NULL);
        *tp = tp2;
        int128_t v1; // 0x40c150
        result = 1000 * (int64_t)v1;
        *(int64_t *)((int64_t)tp + 8) = result;
    }
    // 0x40c184
    return result;
}
// Address range: 0x40c190 - 0x40c1ee
int64_t function_40c190(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x40c196
    if (locale == NULL) {
        // 0x40c1c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40c196
    bool v2; // 0x40c190
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g29; // 0x40c190
    int64_t v5 = v1; // 0x40c190
    int64_t v6 = 2; // 0x40c1b5
    unsigned char v7 = *(char *)v5; // 0x40c1b5
    char v8 = *(char *)v4; // 0x40c1b5
    char v9 = v8; // 0x40c1b5
    bool v10 = false; // 0x40c1b5
    while (v7 == v8) {
        // 0x40c1a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40c1c1
    int64_t v13 = v1; // 0x40c1c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40c1c3
        return 0;
    }
    int64_t v14 = 6; // 0x40c1c1
    unsigned char v15 = *(char *)v13; // 0x40c1dd
    char v16 = *(char *)v12; // 0x40c1dd
    char v17 = v16; // 0x40c1dd
    bool v18 = false; // 0x40c1dd
    while (v15 == v16) {
        // 0x40c1d0
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
// Address range: 0x40c1f0 - 0x40c283
int64_t function_40c1f0(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x40c207
    if (v1 == -1) {
        // 0x40c27f
        return -1;
    }
    int64_t v2 = v1; // 0x40c20f
    int64_t v3; // 0x40c1f0
    while (true) {
      lab_0x40c218:
        // 0x40c218
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x40c270;
        } else {
            goto lab_0x40c275;
        }
    }
  lab_0x40c27f_2:;
    // 0x40c27f
    int64_t result; // 0x40c1f0
    return result;
  lab_0x40c275:;
    int64_t v4 = v3 + 2; // 0x40c275
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40c27f
        goto lab_0x40c27f_2;
    }
    goto lab_0x40c218;
  lab_0x40c270:
    // 0x40c270
    result = v3;
    goto lab_0x40c275;
}
// Address range: 0x40c290 - 0x40c2a0
int64_t function_40c290(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40c290
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x40c2a0 - 0x40c2a7
int64_t function_40c2a0(int64_t a1, int64_t a2) {
    // 0x40c2a0
    int64_t v1; // 0x40c2a0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x40c2b0 - 0x40c2d1
int64_t function_40c2b0(int64_t a1, int64_t a2) {
    // 0x40c2b0
    int64_t v1; // 0x40c2b0
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x40c2c8
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x40c2e0 - 0x40c3f9
int64_t function_40c2e0(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_40c2b0(a1, a2); // 0x40c2f4
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40c2fc
    int64_t result2 = *v2; // 0x40c2fc
    if (result2 == 0) {
        // 0x40c38e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x40c324
            if (v3 == 0) {
                // 0x40c38e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x40c331
            int64_t v5 = v3; // 0x40c337
            int64_t v6 = v1; // 0x40c337
            int64_t result = v4; // 0x40c337
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40c36c_2:
                // 0x40c36c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40c371
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x40c380
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40c38e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x40c344
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x40c351
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40c36c_2;
                }
                // 0x40c359
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40c36c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40c38e
            return 0;
        }
    }
    // 0x40c3a3
    if ((char)a4 == 0) {
        // 0x40c38e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x40c3a8
    if (v12 == 0) {
        // 0x40c3f0
        *v2 = 0;
        // 0x40c38e
        return result2;
    }
    // 0x40c3b1
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40c3bf
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x40c400 - 0x40c47e
int64_t function_40c400(uint64_t a1) {
    if (a1 == (int64_t)&g30) {
        // 0x40c47d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40c40b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g30) {
        // 0x40c46a
        *(int64_t *)a1 = (int64_t)&g30;
        return 0;
    }
    // 0x40c419
    __asm_comiss_5(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x40c434
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_6(v2, 0x3dcccccd); // 0x40c441
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x40c449
    __asm_comiss_5(v4, v3);
    __asm_comiss_5(__asm_movss(0x3f800000), v4);
    __asm_comiss_5(v1, v3);
    // 0x40c47d
    return 1;
}
// Address range: 0x40c480 - 0x40c5ca
int64_t function_40c480(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40c49a
    uint64_t v2 = *v1; // 0x40c49a
    if (v2 <= a2) {
        // 0x40c584
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x40c480
    int64_t v8 = a2; // 0x40c480
    int64_t v9; // 0x40c480
    int64_t result; // 0x40c480
    int64_t v10; // 0x40c480
    while (true) {
      lab_0x40c4b6_2:
        // 0x40c4b6
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x40c4b6
        int64_t v12 = *v11; // 0x40c4b6
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x40c4a8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40c4bf
            int64_t v14 = *v13; // 0x40c4bf
            int64_t v15 = v14; // 0x40c4c7
            int64_t v16 = v12; // 0x40c4c7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x40c4e4
                    int64_t v19 = *v18; // 0x40c4e4
                    int64_t v20 = function_40c2b0(v3, v19); // 0x40c4ed
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x40c4f2
                    int64_t v22 = *v21; // 0x40c4f2
                    int64_t * v23 = (int64_t *)v20; // 0x40c4f6
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x40c4d0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40c51f
                            break;
                        }
                    } else {
                        // 0x40c4fc
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40c51f
                            break;
                        }
                    }
                    // 0x40c4e4
                    v15 = v22;
                }
                // 0x40c51f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x40c523
                v9 = *v1;
                goto lab_0x40c4a8;
            } else {
                int64_t v26 = function_40c2b0(v3, v25); // 0x40c53b
                int64_t * v27 = (int64_t *)v26; // 0x40c540
                if (*v27 == 0) {
                    // 0x40c5a0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x40c549
                    int64_t * v29; // 0x40c480
                    int64_t v30; // 0x40c480
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x40c5af
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x40c584
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x40c5af
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40c55a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x40c569
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x40c571
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40c57a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x40c584
                    break;
                }
                goto lab_0x40c4b6_2;
            }
        }
    }
    // 0x40c584
    return result;
  lab_0x40c4a8:;
    int64_t v36 = v10 + 16; // 0x40c4a8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x40c4b6_2;
    // 0x40c4b6
    goto lab_0x40c4b6_2;
}
// Address range: 0x40c5d0 - 0x40c5d5
int64_t function_40c5d0(int64_t a1) {
    // 0x40c5d0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x40c5e0 - 0x40c5e5
int64_t function_40c5e0(int64_t a1) {
    // 0x40c5e0
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x40c5f0 - 0x40c5f5
int64_t function_40c5f0(int64_t a1) {
    // 0x40c5f0
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x40c600 - 0x40c64f
int64_t function_40c600(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c603
    int64_t result = 0; // 0x40c60c
    if (v1 <= a1) {
      lab_0x40c64d:
        // 0x40c64d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x40c610
    while (*(int64_t *)v3 == 0) {
        // 0x40c610
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40c61f
    int64_t v6 = v5; // 0x40c62b
    int64_t v7 = 1; // 0x40c62b
    int64_t v8; // 0x40c600
    int64_t v9; // 0x40c630
    int64_t v10; // 0x40c634
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x40c630
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x40c640
    int64_t v12 = v3 + 16; // 0x40c644
    while (v12 < v1) {
        // 0x40c619
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x40c610
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40c61f
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
                // 0x40c630
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40c63d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40c64d
    return result2;
}
// Address range: 0x40c650 - 0x40c6b7
int64_t function_40c650(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c653
    int64_t v2 = a1; // 0x40c65f
    int64_t v3 = 0; // 0x40c65f
    int64_t v4 = 0; // 0x40c65f
    int64_t v5 = 0; // 0x40c65f
    int64_t v6 = 0; // 0x40c65f
    int64_t v7; // 0x40c650
    int64_t v8; // 0x40c650
    int64_t v9; // 0x40c650
    if (v1 > a1) {
        while (true) {
          lab_0x40c671_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x40c668;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x40c677
                int64_t v13 = v10 + 1; // 0x40c67b
                int64_t v14 = v11 + 1; // 0x40c67f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x40c686
                int64_t v16 = v14; // 0x40c686
                if (v12 == 0) {
                    goto lab_0x40c668;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x40c690
                    int64_t v18 = v16 + 1; // 0x40c694
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x40c690
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40c69d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x40c6a6
                        break;
                    }
                    goto lab_0x40c671_2;
                }
            }
        }
    }
  lab_0x40c6a6:
    // 0x40c6a6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40c6af
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40c6ae
    return 0;
  lab_0x40c668:;
    int64_t v20 = v8 + 16; // 0x40c668
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x40c6a6
        goto lab_0x40c6a6;
    }
    goto lab_0x40c671_2;
    // 0x40c671
    goto lab_0x40c671_2;
}
// Address range: 0x40c6c0 - 0x40c808
int64_t function_40c6c0(uint64_t a1, int64_t a2) {
    // 0x40c6c0
    int128_t v1; // 0x40c6c0
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x40c6d3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x40c6d7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40c6de
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x40c6f0
            while (*(int64_t *)v7 == 0) {
                // 0x40c6f0
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40c72d
                    goto lab_0x40c72d;
                }
            }
        }
    }
  lab_0x40c72d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40c73c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x40c6c0
    int128_t v10; // 0x40c6c0
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x40c7d3
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40c7dc
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x40c773;
        } else {
            goto lab_0x40c7e9;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x40c766
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x40c7e9;
        } else {
            goto lab_0x40c773;
        }
    }
  lab_0x40c773:
    // 0x40c773
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x40c777
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x40c777
    goto lab_0x40c77c;
  lab_0x40c7e9:
    // 0x40c7e9
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40c7fa
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40c77c;
  lab_0x40c77c:
    // 0x40c77c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x40c810 - 0x40c863
int64_t function_40c810(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_40c2b0(a1, result); // 0x40c81a
    int64_t v2 = *(int64_t *)v1; // 0x40c81f
    if (v2 == 0) {
        // 0x40c84d
        return 0;
    }
    // 0x40c833
    if (v2 == result) {
        // 0x40c84d
        return result;
    }
    int64_t v3 = v1; // 0x40c844
    int64_t result2 = v2; // 0x40c842
    while ((char)v1 == 0) {
        // 0x40c844
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40c84d
            break;
        }
        // 0x40c830
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40c84d
            break;
        }
        result2 = v2;
    }
    // 0x40c84d
    return result2;
}
// Address range: 0x40c870 - 0x40c8b8
int64_t function_40c870(uint64_t a1) {
    int64_t result = 0; // 0x40c875
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x40c887
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c87e
    if (v1 <= a1) {
        // 0x40c887
        return result;
    }
    int64_t v2 = a1; // 0x40c885
    int64_t v3 = *(int64_t *)v2; // 0x40c899
    result = v3;
    while (v3 == 0) {
        // 0x40c890
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x40c887
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x40c887
    return result;
}
// Address range: 0x40c8c0 - 0x40c92a
int64_t function_40c8c0(int64_t a1, int64_t a2) {
    int64_t v1 = function_40c2b0(a1, a2); // 0x40c8cc
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x40c8e8
    while (*(int64_t *)v2 != a2) {
        // 0x40c8e0
        if (v3 == 0) {
            goto lab_0x40c8f6;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x40c920
        return *(int64_t *)v3;
    }
  lab_0x40c8f6:;
    int64_t v4 = v1 + 16; // 0x40c908
    int64_t result = 0; // 0x40c90f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x40c900
        result = v5;
        if (v5 != 0) {
            // break -> 0x40c913
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x40c913
    return result;
}
// Address range: 0x40c930 - 0x40c994
int64_t function_40c930(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40c936
    int64_t result = 0; // 0x40c93a
    if (*v1 <= a1) {
      lab_0x40c951:
        // 0x40c951
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40c93f
    int64_t v4 = v2; // 0x40c945
    int64_t v5; // 0x40c930
    int64_t v6; // 0x40c930
    int64_t v7; // 0x40c978
    int64_t v8; // 0x40c981
    int64_t v9; // 0x40c961
    int64_t v10; // 0x40c965
    if (v3 != 0) {
        // 0x40c958
        if (v2 >= a3) {
            // break -> 0x40c951
            break;
        }
        // 0x40c95d
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
            // 0x40c975
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x40c970
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40c975
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
    int64_t v12 = a1 + 16; // 0x40c947
    result = v11;
    while (*v1 > v12) {
        // 0x40c93f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x40c958
            result = v2;
            if (v2 >= a3) {
                // break -> 0x40c951
                break;
            }
            // 0x40c95d
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
                // 0x40c975
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x40c970
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x40c975
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x40c947
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x40c951
    return result;
}
// Address range: 0x40c9a0 - 0x40ca18
int64_t function_40c9a0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c9b1
    int64_t result = 0; // 0x40c9b5
    if (v1 <= a1) {
      lab_0x40c9d4:
        // 0x40c9d4
        return result;
    }
    int64_t v2 = a1; // 0x40c9ca
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x40c9c8
    int64_t v5 = v2; // 0x40c9c8
    int64_t v6 = v3; // 0x40c9c8
    int64_t v7; // 0x40c9a0
    int64_t v8; // 0x40c9f8
    int64_t v9; // 0x40c9fc
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x40c9f8
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x40ca08
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40c9f8
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
        // 0x40c9c2
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40c9f8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x40ca08
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x40c9f8
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40c9ca
        result2 = v4;
        v2 += 16;
    }
    // 0x40c9d4
    return result2;
}
// Address range: 0x40ca20 - 0x40ca51
int64_t function_40ca20(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40ca27
    if (v1 == 0) {
        // 0x40ca4d
        return 0;
    }
    int64_t result = 0; // 0x40ca27
    v2++;
    char v3 = *(char *)v2; // 0x40ca43
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40ca4d
    return result;
}
// Address range: 0x40ca60 - 0x40ca80
int64_t function_40ca60(int64_t a1) {
    // 0x40ca60
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x40ca80 - 0x40cc0a
int64_t function_40ca80(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40ca80
    int128_t v1; // 0x40ca80
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40caba
    int64_t result = (int64_t)mem; // 0x40caba
    if (mem == NULL) {
        // 0x40cb6a
        return result;
    }
    int64_t v3 = result + 40; // 0x40cacb
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x40ca80
    int128_t v6; // 0x40ca80
    if (a2 == 0) {
        // 0x40cb80
        *v4 = (int64_t)&g30;
        int64_t v7 = function_40c400(v3); // 0x40cb88
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40cb8d
        if ((char)v7 == 0) {
            // 0x40cb60
            free(mem);
            // 0x40cb6a
            return 0;
        }
        // 0x40cb99
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40cbe3;
        } else {
            goto lab_0x40cb9e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_40c400(v3) == 0) {
            // 0x40cb60
            free(mem);
            // 0x40cb6a
            return 0;
        }
        // 0x40cae5
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_40c1f0(a1); // 0x40caf3
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40cb60
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40cb60
                free(mem);
                // 0x40cb6a
                return 0;
            }
            // 0x40cb11
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40cb60
                free(mem);
                // 0x40cb6a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x40cb22
            int64_t v10 = (int64_t)mem2; // 0x40cb22
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40cb60
                free(mem);
                // 0x40cb6a
                return 0;
            }
            // 0x40cb2f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x40c290 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x40c2a0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40cb6a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40cbd8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40cb9e;
        } else {
            goto lab_0x40cbe3;
        }
    }
  lab_0x40cbe3:
    // 0x40cbe3
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40cbf3
    int128_t v13 = v6; // 0x40cbfc
    int128_t v14 = __asm_addss(v12, v12); // 0x40cbfc
    goto lab_0x40cba7;
  lab_0x40cb9e:
    // 0x40cb9e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40cba7;
  lab_0x40cba7:
    // 0x40cba7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40cb60
    free(mem);
    // 0x40cb6a
    return 0;
}
// Address range: 0x40cc10 - 0x40ccb8
int64_t function_40cc10(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40cc1a
    uint64_t v2 = *v1; // 0x40cc1a
    int64_t result; // 0x40cc10
    if (v2 <= a1) {
      lab_0x40cca3:
        // 0x40cca3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40cc28
    while (*v6 == 0) {
        // 0x40cc28
        v7 = v5 + 16;
        int64_t v8; // 0x40cc10
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40cca3
            goto lab_0x40cca3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40cc39
    int64_t v10 = *v9; // 0x40cc39
    int64_t v11 = *v3; // 0x40cc3e
    int64_t v12 = v11; // 0x40cc45
    int64_t v13 = v10; // 0x40cc45
    int64_t result2 = v11; // 0x40cc45
    int64_t * v14; // 0x40cc5e
    int64_t v15; // 0x40cc5e
    int64_t v16; // 0x40cc5a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40cc55
            v16 = *v3;
        }
        // 0x40cc5e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40cc50
            v16 = 0;
            if (v12 != 0) {
                // 0x40cc55
                v16 = *v3;
            }
            // 0x40cc5e
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
    // 0x40cc7d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40cc90
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40cc9d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40cc2c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40cc28
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40cca3
                goto lab_0x40cca3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40cc39
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40cc55
                v16 = *v3;
            }
            // 0x40cc5e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40cc50
                v16 = 0;
                if (v12 != 0) {
                    // 0x40cc55
                    v16 = *v3;
                }
                // 0x40cc5e
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
        // 0x40cc7d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40cca3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40ccc0 - 0x40cd96
int64_t function_40ccc0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40cccf
    uint64_t v2 = *v1; // 0x40cccf
    int64_t v3 = a1; // 0x40ccd3
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40cd23;
    } else {
        // 0x40ccd5
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40cd23;
        } else {
            // 0x40ccdc
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40ccf1
                int64_t v6; // 0x40cce8
                while (v5 == 0) {
                    // 0x40cce8
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40cd23
                        goto lab_0x40cd23;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40cd08
                int64_t v8 = v7; // 0x40cd0f
                int64_t v9 = v5; // 0x40cd0f
                int64_t v10; // 0x40ccc0
                int64_t v11; // 0x40cd08
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40cd00
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40cd03
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40cd16
                v3 = v9;
                while (v2 > v12) {
                    // 0x40ccf1
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40cce8
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40cd23
                            goto lab_0x40cd23;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40cd03
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40cd00
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40cd03
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40cd11
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40cd23;
            } else {
                goto lab_0x40cd5c;
            }
        }
    }
  lab_0x40cd23:
    // 0x40cd23
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40cd30
        int64_t v14 = v13; // 0x40cd37
        int64_t v15 = v2; // 0x40cd37
        int64_t v16; // 0x40cd40
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40cd40
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40cd51
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40cd51
        int64_t v18 = v15; // 0x40cd5a
        int64_t v19 = v17; // 0x40cd5a
        while (v15 > v17) {
            // 0x40cd30
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40cd40
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40cd51
                v15 = *v1;
            }
            // 0x40cd51
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40cd5c;
  lab_0x40cd5c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40cd5c
    if (v20 == 0) {
        // 0x40cd81
        free(NULL);
        free((int64_t *)a1);
        return &g209;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40cd70
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40cd7f
    while (v21 != 0) {
        // 0x40cd70
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40cd81
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g209;
}
// Address range: 0x40cda0 - 0x40cf9a
int64_t function_40cda0(int64_t a1, uint64_t a2) {
    // 0x40cda0
    int128_t v1; // 0x40cda0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40cdab
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40cda0
        if (a2 < 0) {
            // 0x40cf20
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40cf30
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40cdc0
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40cdc9
        __asm_comiss(__asm_divss_8(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40cf12
        return 0;
    }
    uint64_t nmemb = function_40c1f0(a2); // 0x40ce03
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40cf12
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40ce3b
    if (*v6 == nmemb) {
        // 0x40cf12
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40ce4d
    int64_t v7 = (int64_t)mem; // 0x40ce4d
    int64_t v8 = v7; // bp-104, 0x40ce52
    if (mem == NULL) {
        // 0x40cf12
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40ceaa
    int64_t v10 = *v9; // 0x40ceaa
    int64_t v11 = function_40c480(&v8, a1, 0); // 0x40ceb3
    int64_t result = v11 & 0xffffffff; // 0x40ceb8
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40ce74
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40ced6
        function_40c480(v13, v12, 1);
        function_40c480(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40cf60
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40cf12
    return result;
}
// Address range: 0x40cfa0 - 0x40d214
int64_t function_40cfa0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40cfa0
    int128_t v1; // 0x40cfa0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40cfa0
    int64_t v5 = function_40c2e0(a1, a2, &v4, 0); // 0x40cfc1
    if (v5 != 0) {
        // 0x40cfce
        if (a3 != NULL) {
            // 0x40cfd5
            *a3 = v5;
        }
        // 0x40cfd9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40cfe8
    uint64_t v7 = *v6; // 0x40cfe8
    int64_t v8; // 0x40cfa0
    int64_t v9; // 0x40cfa0
    int64_t v10; // 0x40cfa0
    int128_t v11; // 0x40cfa0
    int128_t v12; // 0x40cfa0
    int64_t v13; // 0x40cfa0
    if (v7 < 0) {
        // 0x40d070
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40d080
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40d084
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40d089
        int128_t v17 = __asm_addss(v15, v15); // 0x40d08d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40d00b;
        } else {
            goto lab_0x40d09a;
        }
    } else {
        // 0x40cff1
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40cff5
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40cff9
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40cffe
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40d09a;
        } else {
            goto lab_0x40d00b;
        }
    }
  lab_0x40d00b:
    // 0x40d00b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40d014
    __asm_comiss_5(v11, v21);
    int128_t v22 = v21; // 0x40d01c
    int128_t v23 = v11; // 0x40d01c
    if (v13 == 0) {
        goto lab_0x40d022;
    } else {
        goto lab_0x40d0c1;
    }
  lab_0x40d09a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40d0a7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40d0aa
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40d0b3
    __asm_comiss_5(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40d022;
    } else {
        goto lab_0x40d0c1;
    }
  lab_0x40d022:;
    int64_t * v28 = (int64_t *)v4; // 0x40d027
    if (*v28 == 0) {
        // 0x40d138
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40d141
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40d032
    int64_t v31 = *v30; // 0x40d032
    int64_t * v32; // 0x40cfa0
    int64_t v33; // 0x40cfa0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40d15d
        if (mem == NULL) {
            // 0x40cfd9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40d15d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40d047
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40d05d
    *v37 = *v37 + 1;
    return 1;
  lab_0x40d0c1:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40d0c1
    function_40c400(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40d0ca
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40d0ce
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40d0d2
    int128_t v44; // 0x40cfa0
    if (v42 < 0) {
        // 0x40d190
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40d1a0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40d0e0
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40d0e9
    int128_t v47; // 0x40cfa0
    int64_t v48; // 0x40cfa0
    if (v46 < 0) {
        // 0x40d170
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40d17d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40d180
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40d0f2
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40d0f6
        v48 = v46;
        v47 = v51;
    }
    // 0x40d0fb
    __asm_comiss_5(v47, __asm_mulss_7(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40d10b
        int128_t v53 = v52; // 0x40d114
        if (*(char *)(v41 + 16) == 0) {
            // 0x40d1b0
            v53 = __asm_mulss_7(v52, v43);
        }
        // 0x40d11a
        __asm_comiss(v53, 0x5f800000);
        // 0x40cfd9
        return 0xffffffff;
    }
    goto lab_0x40d022;
}
// Address range: 0x40d220 - 0x40d25b
int64_t function_40d220(int64_t a1, int64_t a2) {
    // 0x40d220
    int64_t v1; // bp-16, 0x40d220
    int64_t v2; // 0x40d220
    int32_t v3 = function_40cfa0(a1, a2, &v1, v2); // 0x40d232
    if (v3 == -1) {
        // 0x40d240
        return 0;
    }
    // 0x40d237
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40d260 - 0x40d437
int64_t function_40d260(int64_t a1) {
    // 0x40d260
    int128_t v1; // 0x40d260
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40d260
    int64_t v5; // 0x40d260
    int64_t result = function_40c2e0(a1, v5, &v4, 1); // 0x40d275
    if (result == 0) {
        // 0x40d292
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40d287
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40d292
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40d2a0
    uint64_t v8 = *v7 - 1; // 0x40d2a4
    *v7 = v8;
    int64_t v9; // 0x40d260
    int64_t v10; // 0x40d260
    int64_t v11; // 0x40d260
    int128_t v12; // 0x40d260
    int128_t v13; // 0x40d260
    int64_t v14; // 0x40d260
    if (v8 < 0) {
        // 0x40d390
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40d3a0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40d3a4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40d3a9
        int128_t v18 = __asm_addss(v16, v16); // 0x40d3ad
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40d2cc;
        } else {
            goto lab_0x40d3ba;
        }
    } else {
        // 0x40d2b2
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40d2b6
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40d2ba
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40d2bf
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40d3ba;
        } else {
            goto lab_0x40d2cc;
        }
    }
  lab_0x40d2cc:
    // 0x40d2cc
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40d2d0
    int64_t v23 = v14; // 0x40d2d0
    int128_t v24 = v12; // 0x40d2d0
    int64_t v25 = v10; // 0x40d2d0
    int128_t v26 = v22; // 0x40d2d0
    goto lab_0x40d2d5;
  lab_0x40d3ba:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40d3c7
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40d3ca
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40d2d5;
  lab_0x40d2d5:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40d2d5
    __asm_comiss_5(v28, v27);
    if (v23 == 0) {
        // 0x40d292
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40d2de
    function_40c400(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40d2e7
    int64_t v31 = *(int64_t *)v29; // 0x40d2eb
    int128_t v32; // 0x40d260
    if (v30 < 0) {
        // 0x40d400
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40d410
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40d2f8
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40d301
    int128_t v35; // 0x40d260
    int64_t v36; // 0x40d260
    if (v34 < 0) {
        // 0x40d3e0
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40d3ed
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40d3f0
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40d30e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40d312
        v36 = v34;
        v35 = v39;
    }
    // 0x40d317
    __asm_comiss_5(__asm_mulss_7(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40d292
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40d328
    int128_t v41 = v40; // 0x40d331
    if (*(char *)(v31 + 16) == 0) {
        // 0x40d333
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40d338
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40d428
    if ((char)function_40cda0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40d292
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40d35a
    if (*v43 != 0) {
        int64_t v44; // 0x40d260
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40d368
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40d379
    *v43 = 0;
    // 0x40d292
    return result;
}
// Address range: 0x40d440 - 0x40d467
int64_t function_40d440(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x40d440
    return (*(int64_t *)(a1 + 8) ^ function_417960(a1, a2, a3)) % a2;
}
// Address range: 0x40d470 - 0x40d47d
int64_t function_40d470(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x40d470
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x40d480 - 0x40d4a5
int64_t function_40d480(int64_t a1, int64_t a2) {
    // 0x40d480
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x40d48a
        return 0;
    }
    // 0x40d49a
    return function_4122b0(a1, a2);
}
// Address range: 0x40d4b0 - 0x40d4e3
int64_t function_40d4b0(int64_t str, int64_t str2) {
    // 0x40d4b0
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x40d4bc
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x40d4d4
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x40d4f0 - 0x40d505
int64_t function_40d4f0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40d4f7
    free(v1);
    free(v1);
    return &g209;
}
// Address range: 0x40d510 - 0x40d5c7
int64_t function_40d510(int32_t a1, float80_t a2) {
    // 0x40d510
    int3_t v1; // 0x40d510
    int3_t v2 = v1 - 1; // 0x40d510
    __frontend_reg_store_fpr(v2, 9223372036854775808.0L);
    int3_t v3 = v1 - 2;
    __frontend_reg_store_fpr(v3, a2);
    float80_t v4 = __frontend_reg_load_fpr(v3); // 0x40d51a
    float80_t v5 = __frontend_reg_load_fpr(v2); // 0x40d51a
    int64_t result; // 0x40d510
    if (v4 > v5 || v4 == v5) {
        // 0x40d590
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3) - __frontend_reg_load_fpr(v2));
        float80_t v6 = __frontend_reg_load_fpr(v3); // 0x40d596
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        __frontend_reg_store_fpr(v2, v6);
        result = (int64_t)__frontend_reg_load_fpr(v3) ^ -0x8000000000000000;
    } else {
        // 0x40d51e
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3));
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        result = __frontend_reg_load_fpr(v3);
    }
    // 0x40d544
    __frontend_reg_store_fpr(v3, (float80_t)result);
    if (result < 0) {
        // 0x40d552
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v3) + 18446744073709551616.0L);
    }
    int3_t v7 = v3;
    if (a1 != 0) {
        // 0x40d588
        __frontend_reg_store_fpr(v7 + 1, __frontend_reg_load_fpr(v7));
        // 0x40d58a
        return result;
    }
    int3_t v8 = v7 + 1; // 0x40d55c
    float80_t v9 = __frontend_reg_load_fpr(v7); // 0x40d55c
    __frontend_reg_store_fpr(v7, __frontend_reg_load_fpr(v8));
    __frontend_reg_store_fpr(v8, v9);
    float80_t v10 = __frontend_reg_load_fpr(v7); // 0x40d55e
    float80_t v11 = __frontend_reg_load_fpr(v8); // 0x40d55e
    if (v10 != v11 == v10 == v11) {
        // 0x40d568
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    } else {
        // 0x40d562
        if (v10 == v11) {
            // 0x40d58a
            return result;
        }
        // 0x40d564
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    }
    int64_t result2 = result + 1; // 0x40d570
    __frontend_reg_store_fpr(v8, (float80_t)result2);
    if (result2 >= 0) {
        // 0x40d58a
        return result2;
    }
    // 0x40d5c0
    __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8) + 18446744073709551616.0L);
    return result2;
}
// Address range: 0x40d5d0 - 0x40df9e
int64_t function_40d5d0(int64_t a1, int64_t * str3, uint32_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)str3;
    int32_t v2 = a3 & 32; // 0x40d5d6
    uint32_t v3 = a3 % 4; // 0x40d5e0
    int64_t v4; // bp-168, 0x40d5d0
    int64_t v5 = &v4; // 0x40d5f0
    uint32_t v6 = (v2 | 1024) - (v2 | (int32_t)(v2 == 0)) & 2024; // 0x40d605
    struct lconv * locale_info = localeconv(); // 0x40d61b
    int64_t str = *(int64_t *)locale_info; // 0x40d620
    int64_t len = strlen((char *)str); // 0x40d629
    int64_t v7 = len >= 17 ? (int64_t)"." : str; // 0x40d643
    int64_t str2 = *(int64_t *)((int64_t)locale_info + 8); // 0x40d64c
    int64_t v8 = len >= 17 ? 1 : len; // 0x40d651
    uint32_t len2 = strlen((char *)str2); // 0x40d662
    int64_t v9 = v1 + 647; // 0x40d679
    v4 = v9;
    int64_t v10; // 0x40d5d0
    int64_t v11; // 0x40d5d0
    int64_t v12; // 0x40d5d0
    int64_t v13; // 0x40d5d0
    int64_t v14; // 0x40d5d0
    int64_t v15; // 0x40d5d0
    int64_t v16; // 0x40d5d0
    int64_t v17; // 0x40d5d0
    int64_t v18; // 0x40d5d0
    if (a5 > a4) {
        if (a4 == 0) {
            goto lab_0x40d6b5;
        } else {
            if (a5 % a4 != 0) {
                goto lab_0x40d6b5;
            } else {
                uint64_t v19 = a5 / a4; // 0x40d920
                int64_t v20 = a1 / v19; // 0x40d934
                uint64_t v21 = 10 * (a1 % v19); // 0x40d940
                uint64_t v22 = 2 * (v21 % v19); // 0x40d949
                int64_t v23 = v21 / v19 & 0xffffffff; // 0x40d94c
                int64_t v24 = v19 > v22 ? (int64_t)(v22 != 0) : v19 < v22 ? 3 : 2;
                uint32_t v25 = a3 & 16; // 0x40d965
                v13 = v25;
                v17 = v20;
                v15 = v24;
                v10 = v23;
                v14 = 0;
                v12 = 0xffffffff;
                v18 = v20;
                v16 = v24;
                v11 = v23;
                if (v25 == 0) {
                    goto lab_0x40d981;
                } else {
                    goto lab_0x40d96e;
                }
            }
        }
    } else {
        if (a4 % a5 != 0) {
            goto lab_0x40d6b5;
        } else {
            uint64_t v26 = a4 / a5; // 0x40d692
            int64_t v27 = v26 * a1; // 0x40d6a2
            if (v27 / v26 == a1) {
                uint32_t v28 = a3 & 16; // 0x40dc21
                int64_t v29 = v28; // 0x40dc21
                v13 = v29;
                v17 = v27;
                v15 = 0;
                v10 = 0;
                v14 = v29;
                v12 = 0xffffffff;
                v18 = v27;
                v16 = 0;
                v11 = 0;
                if (v28 != 0) {
                    goto lab_0x40d96e;
                } else {
                    goto lab_0x40d981;
                }
            } else {
                goto lab_0x40d6b5;
            }
        }
    }
  lab_0x40d981:;
    int64_t v30 = v14; // 0x40d98a
    int64_t v31 = v12; // 0x40d98a
    int64_t v32 = v18; // 0x40d98a
    int64_t v33 = v16; // 0x40d98a
    int64_t v34 = v11; // 0x40d98a
    int64_t v35 = v9; // 0x40d98a
    int64_t v36; // 0x40d5d0
    int64_t v37; // 0x40d5d0
    int64_t v38; // 0x40d5d0
    int64_t v39; // 0x40d5d0
    int64_t v40; // 0x40d5d0
    int64_t v41; // 0x40d5d0
    int64_t v42; // 0x40d5d0
    if (v3 == 1) {
        // 0x40dcc0
        v40 = v14;
        v38 = v12;
        v41 = v18;
        v36 = v9;
        v39 = v12;
        v42 = v18;
        v37 = v9;
        if ((int32_t)(v18 % 2 != -v16) + (int32_t)v11 < 6) {
            goto lab_0x40d9c0;
        } else {
            goto lab_0x40d9a1;
        }
    } else {
        goto lab_0x40d990;
    }
  lab_0x40d6b5:;
    // 0x40d6b5
    int3_t v43; // 0x40d5d0
    int3_t v44 = v43 - 1;
    __frontend_reg_store_fpr(v44, (float80_t)a4);
    int3_t v45; // 0x40d5d0
    int3_t v46; // 0x40d5d0
    if (a4 < 0) {
        // 0x40d900
        __frontend_reg_store_fpr(v44, __frontend_reg_load_fpr(v44) + 18446744073709551616.0L);
        v45 = v44;
    } else {
        // 0x40d6b5
        v45 = v43 - 2;
        v46 = v44;
    }
    int3_t v47 = v46;
    __frontend_reg_store_fpr(v45, (float80_t)a5);
    float80_t v48 = __frontend_reg_load_fpr(v45);
    int3_t v49; // 0x40d5d0
    int3_t v50; // 0x40d5d0
    int3_t v51; // 0x40d5d0
    int3_t v52; // 0x40d5d0
    if (a5 < 0) {
        // 0x40d8e0
        __frontend_reg_store_fpr(v45, v48 + 18446744073709551616.0L);
        int3_t v53 = v47 + 1;
        __frontend_reg_store_fpr(v53, __frontend_reg_load_fpr(v53) / __frontend_reg_load_fpr(v47));
        __frontend_reg_store_fpr(v47, (float80_t)a1);
        v49 = v53;
        v51 = v47;
        v50 = v53;
        v52 = v47;
        if (a1 >= 0) {
            goto lab_0x40d6f2;
        } else {
            goto lab_0x40d8c8;
        }
    } else {
        // 0x40d6de
        __frontend_reg_store_fpr(v47, __frontend_reg_load_fpr(v47) / v48);
        __frontend_reg_store_fpr(v45, (float80_t)a1);
        int3_t v54 = v45 + 1;
        v49 = v54;
        v51 = v45;
        v50 = v54;
        v52 = v45;
        if (a1 < 0) {
            goto lab_0x40d8c8;
        } else {
            goto lab_0x40d6f2;
        }
    }
  lab_0x40d6f2:;
    int3_t v55 = v49;
    float80_t v56 = __frontend_reg_load_fpr(v51); // 0x40d6f2
    __frontend_reg_store_fpr(v55, v56 * __frontend_reg_load_fpr(v55));
    int3_t v57 = v55; // 0x40d6f9
    int3_t v58 = v55; // 0x40d6f9
    if ((a3 & 16) == 0) {
        goto lab_0x40d810;
    } else {
        goto lab_0x40d6ff;
    }
  lab_0x40d8c8:;
    int3_t v59 = v52;
    __frontend_reg_store_fpr(v59, __frontend_reg_load_fpr(v59) + 18446744073709551616.0L);
    int3_t v60 = v59 + 2; // 0x40d8ce
    __frontend_reg_store_fpr(v60, __frontend_reg_load_fpr(v50) * __frontend_reg_load_fpr(v60));
    v57 = v60;
    v58 = v60;
    if ((a3 & 16) != 0) {
        goto lab_0x40d6ff;
    } else {
        goto lab_0x40d810;
    }
  lab_0x40d96e:;
    int64_t v61 = v13;
    v14 = v61;
    v12 = 0;
    v18 = v17;
    v16 = v15;
    v11 = v10;
    int64_t v62; // 0x40d5d0
    int64_t v63; // 0x40d5d0
    int64_t v64; // 0x40d5d0
    int64_t v65; // 0x40d5d0
    int64_t v66; // 0x40d5d0
    int64_t v67; // 0x40d5d0
    int64_t v68; // 0x40dba6
    int64_t v69; // 0x40db8a
    if (v17 < (int64_t)v6) {
        goto lab_0x40d981;
    } else {
        int64_t v70; // 0x40d5d0
        int32_t v71 = v70; // 0x40dba4
        int64_t v72; // 0x40d5d0
        uint64_t v73; // 0x40d5d0
        v68 = v72 / v73;
        int64_t v74; // 0x40d5d0
        uint64_t v75 = 10 * (v72 % v73) + v74 & 0xffffffff; // 0x40dbb7
        int64_t v76 = v75 / v73; // 0x40dbb7
        uint32_t v77 = 2 * (int32_t)(v75 % v73) + (v71 >> 1); // 0x40dbb9
        uint32_t v78 = v77 + v71; // 0x40dbc2
        int64_t v79 = v77 < v6 ? (int64_t)(v78 != 0) : v6 < v78 ? 3 : 2;
        int64_t v80; // 0x40d5d0
        v69 = v80 + 1 & 0xffffffff;
        while (v68 >= v73) {
            // 0x40db96
            v14 = v61;
            v12 = v69;
            v18 = v68;
            v16 = v79;
            v11 = v76;
            v80 = v69;
            v72 = v68;
            v70 = v79;
            v74 = v76;
            int64_t v81; // 0x40db8a
            if ((int32_t)v81 == 8) {
                goto lab_0x40d981;
            }
            int64_t v82 = v74;
            int64_t v83 = v70;
            uint64_t v84 = v72;
            int64_t v85 = v80;
            v71 = v83;
            v68 = v84 / v73;
            v75 = 10 * (v84 % v73) + v82 & 0xffffffff;
            v76 = v75 / v73;
            v77 = 2 * (int32_t)(v75 % v73) + (v71 >> 1);
            v78 = v77 + v71;
            int64_t v86 = v6 < v78 ? 3 : 2;
            v79 = v77 < v6 ? (int64_t)(v78 != 0) : v86;
            v81 = v85 + 1;
            v69 = v81 & 0xffffffff;
        }
        // 0x40dd70
        v14 = v61;
        v12 = v69;
        v18 = v68;
        v16 = v79;
        v11 = v76;
        if (v68 < 10) {
            bool v87; // 0x40d5d0
            if (v3 == 1) {
                int32_t v88 = (int32_t)(v79 + v76 % 2) - 2; // 0x40de47
                v87 = v88 >= 0 == (v88 != 0);
            } else {
                // 0x40dd85
                v87 = v3 == 0 == (v79 != 0);
            }
            // 0x40dd97
            if (v87) {
                int64_t v89 = v76 + 1; // 0x40de30
                v63 = v89 & 0xffffffff;
                if ((int32_t)v89 == 10) {
                    // 0x40dea3
                    v67 = v68 + 1;
                    v64 = 0;
                    v66 = 10;
                    v65 = 0;
                    v62 = v9;
                    if (v68 == 9) {
                        goto lab_0x40ddf0;
                    } else {
                        goto lab_0x40dda7;
                    }
                } else {
                    goto lab_0x40de38;
                }
            } else {
                // 0x40dd9f
                v67 = v68;
                v64 = v79;
                v63 = v76;
                if (v75 >= v73) {
                    goto lab_0x40de38;
                } else {
                    goto lab_0x40dda7;
                }
            }
        } else {
            goto lab_0x40d981;
        }
    }
  lab_0x40d810:;
    int3_t v90 = v58; // 0x40d817
    if (v3 != 1) {
        int3_t v91 = v58 - 1; // 0x40d819
        __frontend_reg_store_fpr(v91, 1.84467e+19L);
        float80_t v92 = __frontend_reg_load_fpr(v91); // 0x40d81f
        float80_t v93 = __frontend_reg_load_fpr(v58); // 0x40d81f
        v90 = v58;
        if (v92 > v93) {
            // 0x40dbe0
            function_40d510(v3, __frontend_reg_load_fpr(v58));
            v90 = v58 + 1;
        }
    }
    // 0x40d827
    __frontend_reg_load_fpr(v90);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len3 = strlen((char *)str3); // 0x40d856
    int64_t v94 = len3; // 0x40d85d
    int64_t v95 = 0xffffffff; // 0x40d85d
    int64_t v96 = len3; // 0x40d85d
    goto lab_0x40d860;
  lab_0x40d6ff:;
    int3_t v179 = v57;
    int3_t v178 = v179 - 1; // 0x40d6ff
    __frontend_reg_store_fpr(v178, (float80_t)v6);
    int3_t v204 = v179 - 2; // 0x40d705
    __frontend_reg_store_fpr(v204, __frontend_reg_load_fpr(v178));
    int3_t v205 = v179 - 3;
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v204));
    int64_t v206 = 1; // 0x40d716
    int64_t v163 = v206 & 0xffffffff; // 0x40d716
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v205) * __frontend_reg_load_fpr(v178));
    float80_t v207 = __frontend_reg_load_fpr(v205); // 0x40d71b
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v179));
    __frontend_reg_store_fpr(v179, v207);
    while (__frontend_reg_load_fpr(v205) >= __frontend_reg_load_fpr(v179)) {
        float80_t v208 = __frontend_reg_load_fpr(v205);
        if ((int32_t)v206 == 8) {
            // 0x40d726
            __frontend_reg_store_fpr(v178, v208);
            __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v204));
            goto lab_0x40d734;
        }
        // 0x40d710
        __frontend_reg_store_fpr(v204, v208);
        float80_t v209 = __frontend_reg_load_fpr(v204); // 0x40d712
        __frontend_reg_store_fpr(v204, __frontend_reg_load_fpr(v179));
        __frontend_reg_store_fpr(v179, v209);
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v204));
        v206 = v163 + 1;
        v163 = v206 & 0xffffffff;
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v205) * __frontend_reg_load_fpr(v178));
        v207 = __frontend_reg_load_fpr(v205);
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v179));
        __frontend_reg_store_fpr(v179, v207);
    }
    // 0x40d730
    __frontend_reg_store_fpr(v178, __frontend_reg_load_fpr(v205));
    __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v204));
    goto lab_0x40d734;
  lab_0x40d990:;
    int64_t v210 = v35;
    int64_t v211 = v32;
    int64_t v212 = v31;
    v39 = v212;
    v42 = v211;
    v37 = v210;
    if (v3 != 0) {
        goto lab_0x40d9c0;
    } else {
        // 0x40d99a
        v40 = v30;
        v38 = v212;
        v41 = v211;
        v36 = v210;
        v39 = v212;
        v42 = v211;
        v37 = v210;
        if ((int32_t)(v34 + v33) < 1) {
            goto lab_0x40d9c0;
        } else {
            goto lab_0x40d9a1;
        }
    }
  lab_0x40d860:;
    int64_t v97 = *(int64_t *)(v5 + 8); // 0x40d864
    int64_t v98 = v4 - v94; // 0x40d86c
    memmove((int64_t *)v98, (int64_t *)v97, (int32_t)v94);
    int64_t v99 = v95; // 0x40d875
    int64_t v100 = v98 + v96; // 0x40d875
    int64_t v101 = v98; // 0x40d875
    goto lab_0x40d87a;
  lab_0x40d734:;
    float80_t v177 = __frontend_reg_load_fpr(v178); // 0x40d742
    __frontend_reg_store_fpr(v179, v177 / __frontend_reg_load_fpr(v179));
    uint64_t v180 = v8 + (v2 == 0 ? 3 : 2); // 0x40d749
    int3_t v142; // 0x40d5d0
    int3_t v172; // 0x40d5d0
    int3_t v146; // 0x40d5d0
    int64_t v143; // 0x40d5d0
    int3_t v174; // 0x40d5d0
    if (v3 == 1) {
        // 0x40dc70
        __frontend_reg_store_fpr(v178, __frontend_reg_load_fpr(v179));
        __frontend_reg_load_fpr(v178);
        float80_t v181 = __frontend_reg_load_fpr(v179); // 0x40dc94
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len6 = strlen((char *)str3); // 0x40dca0
        __frontend_reg_store_fpr(v179, v181);
        v142 = v179;
        v143 = len6;
        if (v180 < len6) {
            // 0x40dcb0
            __frontend_reg_store_fpr(v178, 10.0L);
            float80_t v182 = __frontend_reg_load_fpr(v179); // 0x40dcb6
            __frontend_reg_store_fpr(v179, v182 * __frontend_reg_load_fpr(v178));
            v146 = v178;
            goto lab_0x40d7d6;
        } else {
            goto lab_0x40dc38;
        }
    } else {
        // 0x40d757
        __frontend_reg_store_fpr(v178, 1.84467e+19L);
        float80_t v183 = __frontend_reg_load_fpr(v178); // 0x40d75d
        float80_t v184 = __frontend_reg_load_fpr(v179); // 0x40d75d
        bool v185 = false; // 0x40d75d
        bool v186 = false; // 0x40d75d
        if (v183 <= v184) {
            v185 = true;
            v186 = false;
            if (v183 >= v184) {
                v185 = v183 != v184;
                v186 = true;
            }
        }
        __frontend_reg_store_fpr(v178, __frontend_reg_load_fpr(v179));
        v172 = v178;
        if (!v185 && !v186) {
            // 0x40dbf8
            __frontend_reg_load_fpr(v178);
            float80_t v187 = __frontend_reg_load_fpr(v179); // 0x40dc01
            function_40d510(v3, v187);
            __frontend_reg_store_fpr(v179, v187);
            v172 = v179;
        }
        float80_t v188 = __frontend_reg_load_fpr(v172); // 0x40d767
        v174 = v172 + 1;
        __frontend_reg_load_fpr(v174);
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len7 = strlen((char *)str3); // 0x40d795
        __frontend_reg_store_fpr(v174, v188);
        v142 = v174;
        v143 = len7;
        if (v180 < len7) {
            // 0x40d7a9
            __frontend_reg_store_fpr(v172, 10.0L);
            __frontend_reg_store_fpr(v174, __frontend_reg_load_fpr(v174) * __frontend_reg_load_fpr(v172));
            goto lab_0x40d7b1;
        } else {
            goto lab_0x40dc38;
        }
    }
  lab_0x40d9c0:;
    int64_t v189 = v37 - 1; // 0x40d9d9
    *(char *)v189 = (char)v42 + 48;
    int64_t v190 = v189; // 0x40d9fb
    while (v42 >= 10) {
        // 0x40d9d3
        v189 = v190 - 1;
        *(char *)v189 = (char)v42 + 48;
        v190 = v189;
    }
    int64_t v102 = v39; // 0x40da02
    int64_t v103 = v189; // 0x40da02
    int64_t v104 = v39; // 0x40da02
    int64_t v105 = v37; // 0x40da02
    int64_t v106 = v189; // 0x40da02
    if ((a3 & 4) == 0) {
        goto lab_0x40d885;
    } else {
        goto lab_0x40da08;
    }
  lab_0x40d9a1:;
    int64_t v191 = v36;
    int64_t v192 = v38;
    int64_t v193 = v41 + 1; // 0x40d9a1
    v39 = v192;
    v42 = v193;
    v37 = v191;
    if ((int32_t)v192 == 8 || (int32_t)v40 == 0 || v193 != (int64_t)v6) {
        goto lab_0x40d9c0;
    } else {
        int64_t v194 = v191; // 0x40dd2e
        if ((a3 & 8) == 0) {
            // 0x40deb4
            *(char *)(v191 - 1) = 48;
            int64_t v195 = v191 + -1 - v8; // 0x40debf
            int64_t v196 = v8 & 0xffffffff; // 0x40dec2
            uint32_t v197 = (int32_t)v8; // 0x40dec5
            if (v197 >= 8) {
                int64_t v198 = v195 + 8 & -8; // 0x40df10
                *(int64_t *)v195 = *(int64_t *)v7;
                *(int64_t *)(v195 + v196 - 8) = *(int64_t *)(v196 + v7 - 8);
                int64_t v199 = v195 - v198; // 0x40df27
                uint32_t v200 = (int32_t)(v199 + v8); // 0x40df33
                v194 = v195;
                if (v200 >= 8) {
                    int64_t v201 = 0;
                    int64_t v202 = v201 + 8; // 0x40df43
                    *(int64_t *)(v201 + v198) = *(int64_t *)(v7 - v199 + v201);
                    v194 = v195;
                    while ((v200 & -8) > (int32_t)v202) {
                        // 0x40df41
                        v201 = v202 & 0xffffffff;
                        v202 = v201 + 8;
                        *(int64_t *)(v201 + v198) = *(int64_t *)(v7 - v199 + v201);
                        v194 = v195;
                    }
                }
            } else {
                if ((v8 & 4) != 0) {
                    // 0x40df6c
                    *(int32_t *)v195 = *(int32_t *)v7;
                    *(int32_t *)(v195 + v196 - 4) = *(int32_t *)(v196 + v7 - 4);
                    v194 = v195;
                } else {
                    // 0x40ded5
                    v194 = v195;
                    if (v197 != 0) {
                        // 0x40dedd
                        *(char *)v195 = *(char *)v7;
                        v194 = v195;
                        if ((v8 & 2) != 0) {
                            // 0x40deec
                            *(int16_t *)(v195 + v196 - 2) = *(int16_t *)(v196 + v7 - 2);
                            v194 = v195;
                        }
                    }
                }
            }
        }
        int64_t v203 = v194 - 1; // 0x40dd34
        *(char *)v203 = 49;
        v99 = v192 + 1 & 0xffffffff;
        v100 = v194;
        v101 = v203;
        goto lab_0x40d87a;
    }
  lab_0x40d87a:
    // 0x40d87a
    v102 = v99;
    v103 = v101;
    v104 = v99;
    v105 = v100;
    v106 = v101;
    if ((*(char *)(v5 + 16) & 4) != 0) {
        goto lab_0x40da08;
    } else {
        goto lab_0x40d885;
    }
  lab_0x40d885:;
    int64_t result = v103;
    int64_t v107 = v5 + 16; // 0x40d885
    char v108 = *(char *)v107; // 0x40d885
    if (v108 > -1) {
        // 0x40d8a8
        *(char *)v4 = 0;
        return result;
    }
    int64_t v109 = v102; // 0x40d88f
    int64_t v110; // 0x40d5d0
    int64_t v111; // 0x40d5d0
    int64_t v112; // 0x40d5d0
    int64_t v113; // 0x40d5d0
    if ((int32_t)v102 == -1) {
        uint64_t v114 = *(int64_t *)(v5 + 24); // 0x40dad0
        v109 = 0;
        if (v114 < 2) {
            goto lab_0x40d895;
        } else {
            int64_t v115 = 1; // 0x40daed
            int64_t v116 = 1;
            v115 *= (int64_t)*(int32_t *)(v5 + 52);
            int64_t v117 = v116; // 0x40daf7
            while (v114 > v115) {
                int64_t v118 = v116 + 1; // 0x40daf9
                int64_t v119 = v118 & 0xffffffff; // 0x40daf9
                v117 = v119;
                if ((int32_t)v118 == 8) {
                    // break -> 0x40db01
                    break;
                }
                v116 = v119;
                v115 *= (int64_t)*(int32_t *)(v5 + 52);
                v117 = v116;
            }
            int32_t v120 = *(int32_t *)v107; // 0x40db01
            int64_t v121 = v120 & 256; // 0x40db07
            v110 = v121;
            v112 = v117;
            v111 = v121;
            v113 = v117;
            if ((v120 & 64) == 0) {
                goto lab_0x40db30;
            } else {
                goto lab_0x40db11;
            }
        }
    } else {
        goto lab_0x40d895;
    }
  lab_0x40da08:;
    int64_t str4 = len2 >= 17 ? (int64_t)&g24 : str2; // 0x40d675
    int32_t len4 = strlen((char *)str4); // 0x40da15
    int64_t v122 = v105 - v106; // 0x40da1a
    int64_t v123 = v5 + 64; // 0x40da28
    int64_t * v124 = (int64_t *)(v5 + 32); // 0x40da2d
    *v124 = (int64_t)len4;
    int64_t * v125 = (int64_t *)v123; // 0x40da32
    __memcpy_chk(v125, (int64_t *)v106, (int32_t)v122, 41);
    int32_t * v126 = (int32_t *)(v5 + 20); // 0x40da37
    *v126 = (int32_t)v104;
    int64_t v127 = *v124; // 0x40da49
    int64_t * v128 = (int64_t *)str4;
    int32_t v129 = v127;
    int64_t v130 = *(int64_t *)(v5 + 56);
    int64_t v131 = v105;
    uint64_t v132 = v122;
    unsigned char v133 = *(char *)v130; // 0x40da50
    int64_t v134 = -1; // 0x40da56
    int64_t v135 = v130; // 0x40da56
    if (v133 != 0) {
        // 0x40da58
        v134 = v133 >= 127 ? v132 : (int64_t)v133;
        v135 = v130 + 1;
    }
    int64_t v136 = v134;
    while (v132 >= v136) {
        int64_t v137 = v131 - v136; // 0x40da90
        int64_t v138 = v132 - v136; // 0x40da93
        memcpy((int64_t *)v137, (int64_t *)(v138 + v123), (int32_t)v136);
        if (v138 == 0) {
            // 0x40df81
            v102 = (int64_t)*v126;
            v103 = v137;
            goto lab_0x40d885;
        }
        int64_t v139 = v137 - v127; // 0x40dab3
        memcpy((int64_t *)v139, v128, v129);
        v130 = v135;
        v131 = v139;
        v132 = v138;
        v133 = *(char *)v130;
        v134 = v136;
        v135 = v130;
        if (v133 != 0) {
            // 0x40da58
            v134 = v133 >= 127 ? v132 : (int64_t)v133;
            v135 = v130 + 1;
        }
        // 0x40da69
        v136 = v134;
    }
    int64_t v140 = v131 - v132; // 0x40da7d
    memcpy((int64_t *)v140, v125, (int32_t)v132);
    v102 = (int64_t)*v126;
    v103 = v140;
    goto lab_0x40d885;
  lab_0x40dc38:;
    int3_t v141 = v142;
    if ((a3 & 8) == 0) {
        // 0x40dc58
        __frontend_reg_store_fpr(v141, __frontend_reg_load_fpr(v141));
        goto lab_0x40dc5a;
    } else {
        // 0x40dc3f
        if (*(char *)(v1 - 1 + v143) == 48) {
            int3_t v144 = v141 - 1; // 0x40de18
            __frontend_reg_store_fpr(v144, 10.0L);
            float80_t v145 = __frontend_reg_load_fpr(v141); // 0x40de23
            __frontend_reg_store_fpr(v141, v145 * __frontend_reg_load_fpr(v144));
            v146 = v144;
            if (v3 != 1) {
                goto lab_0x40d7b1;
            } else {
                goto lab_0x40d7d6;
            }
        } else {
            // 0x40dc4f
            __frontend_reg_store_fpr(v141, __frontend_reg_load_fpr(v141));
            goto lab_0x40dc5a;
        }
    }
  lab_0x40d895:;
    uint32_t v147 = *(int32_t *)v107 & 256; // 0x40d899
    if ((v147 || (int32_t)v109) == 0) {
        // 0x40d8a8
        *(char *)v4 = 0;
        return result;
    }
    int64_t v148 = v147; // 0x40d899
    v110 = v148;
    v112 = v109;
    int64_t v149 = v148; // 0x40dd05
    int64_t v150 = v109; // 0x40dd05
    if ((v108 & 64) == 0) {
        goto lab_0x40db28;
    } else {
        goto lab_0x40db11;
    }
  lab_0x40de38:;
    int64_t v151 = v68; // 0x40de3b
    int64_t v152 = v63 + 48 & 0xffffffff; // 0x40de3b
    goto lab_0x40ddb7;
  lab_0x40dda7:
    // 0x40dda7
    v151 = v67;
    v152 = 48;
    v66 = v67;
    v65 = v64;
    v62 = v9;
    if ((a3 & 8) != 0) {
        goto lab_0x40ddf0;
    } else {
        goto lab_0x40ddb7;
    }
  lab_0x40d7d6:;
    int3_t v170 = v146 + 1; // 0x40d7d6
    __frontend_reg_store_fpr(v170, __frontend_reg_load_fpr(v170) / __frontend_reg_load_fpr(v146));
    __frontend_reg_load_fpr(v170);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len5 = strlen((char *)str3); // 0x40d802
    v94 = len5;
    v95 = v163;
    v96 = len5;
    goto lab_0x40d860;
  lab_0x40d7b1:;
    int3_t v171 = v172 - 1; // 0x40d7b1
    __frontend_reg_store_fpr(v171, 1.84467e+19L);
    float80_t v173 = __frontend_reg_load_fpr(v171); // 0x40d7b7
    v146 = v172;
    if (v173 > __frontend_reg_load_fpr(v174)) {
        float80_t v175 = __frontend_reg_load_fpr(v172); // 0x40d7bb
        function_40d510(v3, __frontend_reg_load_fpr(v174));
        __frontend_reg_store_fpr(v174, v175);
        v146 = v174;
    }
    goto lab_0x40d7d6;
  lab_0x40db28:
    // 0x40db28
    v111 = v149;
    v113 = v150;
    int64_t v166; // 0x40d5d0
    if ((int32_t)v150 == 0) {
        // 0x40df8d
        v166 = v4;
        if ((int32_t)v149 == 0) {
            // 0x40d8a8
            *(char *)v4 = 0;
            return result;
        }
        goto lab_0x40db6d;
    } else {
        goto lab_0x40db30;
    }
  lab_0x40db11:;
    int64_t v176 = *(int64_t *)(v5 + 8); // 0x40db11
    *(char *)(v176 + 647) = 32;
    v4 = v176 + 648;
    v149 = v110;
    v150 = v112;
    goto lab_0x40db28;
  lab_0x40ddf0:
    // 0x40ddf0
    v30 = v61;
    v31 = v69;
    v32 = v66;
    v33 = v65;
    v34 = 0;
    v35 = v62;
    v39 = v69;
    v42 = v66;
    v37 = v62;
    if (v3 == 1) {
        goto lab_0x40d9c0;
    } else {
        goto lab_0x40d990;
    }
  lab_0x40ddb7:;
    int64_t v153 = v1 + 646; // 0x40ddbc
    *(char *)v153 = (char)v152;
    int64_t v154 = v8 & 0xffffffff; // 0x40ddc9
    int64_t v155 = v153 - v8; // 0x40ddcc
    uint32_t v156 = (int32_t)v8; // 0x40ddcf
    if (v156 >= 8) {
        int64_t v157 = v155 + 8 & -8; // 0x40de5c
        *(int64_t *)v155 = *(int64_t *)v7;
        *(int64_t *)(v154 + v155 - 8) = *(int64_t *)(v154 + v7 - 8);
        int64_t v158 = v155 - v157; // 0x40de73
        uint32_t v159 = (int32_t)(v158 + v8); // 0x40de7f
        v66 = v151;
        v65 = 0;
        v62 = v155;
        if (v159 >= 8) {
            int64_t v160 = v7 - v158; // 0x40de76
            int64_t v161 = 0;
            int64_t v162 = v161 + 8; // 0x40de8f
            *(int64_t *)(v161 + v157) = *(int64_t *)(v160 + v161);
            v66 = v151;
            v65 = 0;
            v62 = v155;
            while ((v159 & -8) > (int32_t)v162) {
                // 0x40de8d
                v161 = v162 & 0xffffffff;
                v162 = v161 + 8;
                *(int64_t *)(v161 + v157) = *(int64_t *)(v160 + v161);
                v66 = v151;
                v65 = 0;
                v62 = v155;
            }
        }
    } else {
        if ((v8 & 4) != 0) {
            // 0x40df57
            *(int32_t *)v155 = *(int32_t *)v7;
            *(int32_t *)(v154 + v155 - 4) = *(int32_t *)(v154 + v7 - 4);
            v66 = v151;
            v65 = 0;
            v62 = v155;
        } else {
            // 0x40dddf
            v66 = v151;
            v65 = 0;
            v62 = v155;
            if (v156 != 0) {
                // 0x40dde3
                *(char *)v155 = *(char *)v7;
                v66 = v151;
                v65 = 0;
                v62 = v155;
                if ((v8 & 2) != 0) {
                    // 0x40de03
                    *(int16_t *)(v154 + v155 - 2) = *(int16_t *)(v154 + v7 - 2);
                    v66 = v151;
                    v65 = 0;
                    v62 = v155;
                }
            }
        }
    }
    goto lab_0x40ddf0;
  lab_0x40dc5a:
    // 0x40dc5a
    v94 = v143;
    v95 = v163;
    v96 = v143 + -1 - v8;
    goto lab_0x40d860;
  lab_0x40db30:;
    int32_t * v164 = (int32_t *)(v5 + 48); // 0x40db30
    if (*v164 == 0 == (int32_t)v113 == 1) {
        int64_t v165 = v4 + 1; // 0x40dd54
        *(char *)v4 = 107;
        v166 = v165;
        if ((int32_t)v111 == 0) {
            // 0x40dd63
            v4 = v165;
            // 0x40d8a8
            *(char *)v4 = 0;
            return result;
        }
    } else {
        int64_t v167 = v4; // 0x40db46
        char v168 = *(char *)((0x100000000 * v113 >> 32) + (int64_t)&g33); // 0x40db4a
        int64_t v169 = v167 + 1; // 0x40db51
        *(char *)v167 = v168;
        if ((int32_t)v111 == 0) {
            // 0x40dd63
            v4 = v169;
            // 0x40d8a8
            *(char *)v4 = 0;
            return result;
        }
        // 0x40db5f
        v166 = v169;
        if (*v164 != 0) {
            // 0x40dd10
            *(char *)v169 = 105;
            v166 = v167 + 2;
        }
    }
    goto lab_0x40db6d;
  lab_0x40db6d:
    // 0x40db6d
    *(char *)v166 = 66;
    v4 = v166 + 1;
    // 0x40d8a8
    *(char *)v4 = 0;
    return result;
}
// Address range: 0x40dfa0 - 0x40e157
int64_t function_40dfa0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = a1; // 0x40dfb6
    if (a1 == 0) {
        char * env_val = getenv("BLOCK_SIZE"); // 0x40e0c5
        v1 = (int64_t)env_val;
        if (env_val == NULL) {
            char * env_val2 = getenv("BLOCKSIZE"); // 0x40e0db
            v1 = (int64_t)env_val2;
            if (env_val2 == NULL) {
                // 0x40e0ec
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40e142
                    *a3 = 1024;
                    *(int32_t *)a2 = 0;
                } else {
                    // 0x40e0fb
                    *a3 = 512;
                    *(int32_t *)a2 = 0;
                }
                // 0x40dffe
                return 0;
            }
        }
    }
    char v2 = *(char *)v1; // 0x40dfbe
    int64_t v3 = v1 + (int64_t)(v2 == 39);
    int64_t v4 = v2 != 39 ? 0 : 4;
    int64_t v5 = function_40acf0(v3, g32, (int64_t *)&g31, 4); // 0x40dfde
    if ((int32_t)v5 >= 0) {
        // 0x40dfe7
        *a3 = 1;
        int32_t v6 = *(int32_t *)((0x100000000 * v5 >> 30) + (int64_t)&g31); // 0x40dff1
        *(int32_t *)a2 = v6 | (int32_t)v4;
        // 0x40dffe
        return 0;
    }
    // 0x40e010
    int64_t v7; // bp-48, 0x40dfa0
    int64_t v8; // 0x40dfa0
    int64_t result = function_4132b0(v3, (int32_t)(int64_t)&v7, 0, a3, (int64_t *)"eEgGkKmMpPtTyYzZ0", v8); // 0x40e023
    if ((int32_t)result != 0) {
        // 0x40e084
        *(int32_t *)a2 = 0;
        // 0x40e08d
        *a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    int64_t v9 = (int64_t)*(char *)v3 + 0xffffffd0; // 0x40e02f
    int64_t v10 = v9 & 0xffffffff; // 0x40e02f
    int64_t v11 = v10; // 0x40e035
    int64_t v12 = v4; // 0x40e035
    int64_t v13; // 0x40dfa0
    if ((char)v9 < 10) {
        goto lab_0x40e084;
    } else {
        // 0x40e037
        v13 = v10;
        if (v3 != v7) {
            int64_t v14 = v3 + 1; // 0x40e059
            int64_t v15 = (int64_t)*(char *)v14 + 0xffffffd0; // 0x40e060
            while ((char)v15 >= 10) {
                // 0x40e050
                if (v14 == v7) {
                    // 0x40e118
                    v13 = v15 & 0xffffffff;
                    goto lab_0x40e118_2;
                }
                v14++;
                v15 = (int64_t)*(char *)v14 + 0xffffffd0;
            }
            // 0x40e084
            v11 = v15 & 0xffffffff;
            v12 = v4;
            goto lab_0x40e084;
        } else {
            goto lab_0x40e118_2;
        }
    }
  lab_0x40e084:
    // 0x40e084
    *(int32_t *)a2 = (int32_t)v12;
    if (v11 == 0) {
        // 0x40e08d
        *a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    // 0x40dffe
    return result;
  lab_0x40e118_2:;
    // 0x40e118
    int64_t v16; // 0x40dfa0
    if (*(char *)(v7 - 1) == 66) {
        int64_t v17 = v4 | 384; // 0x40e130
        v11 = v13;
        v12 = v17;
        v16 = v17;
        if (*(char *)(v7 - 2) != 105) {
            goto lab_0x40e084;
        } else {
            goto lab_0x40e122;
        }
    } else {
        // 0x40e11e
        v16 = v4 | 128;
        goto lab_0x40e122;
    }
  lab_0x40e122:
    // 0x40e122
    v11 = v13;
    v12 = v16 & 0xffffffdf | 32;
    goto lab_0x40e084;
}
// Address range: 0x40e160 - 0x40e1f0
int64_t function_40e160(int64_t a1) {
    int32_t * v1 = g188; // 0x40e164
    int32_t uid = a1;
    int64_t v2; // 0x40e1e1
    if (v1 != NULL) {
        int64_t v3 = (int64_t)v1; // 0x40e164
        int64_t v4 = v3; // 0x40e172
        if (*v1 == uid) {
            // 0x40e1df
            v2 = v3 + 16;
            return *(char *)v2 == 0 ? 0 : v2;
        }
        v4 += 8;
        while (v4 != 0) {
            int64_t v5 = v4; // 0x40e182
            if (*(int32_t *)v4 == uid) {
                // 0x40e1df
                v2 = v5 + 16;
                return *(char *)v2 == 0 ? 0 : v2;
            }
            v4 += 8;
        }
    }
    struct passwd * v6 = getpwuid(uid); // 0x40e195
    int64_t v7 = 24; // 0x40e1a2
    int64_t str = (int64_t)&g24; // 0x40e1a2
    if (v6 != NULL) {
        // 0x40e1a4
        str = *(int64_t *)v6;
        v7 = (int64_t)strlen((char *)str) + 24 & -8;
    }
    int64_t v8 = function_412980(v7); // 0x40e1b7
    int32_t * v9 = (int32_t *)v8; // 0x40e1bf
    *v9 = uid;
    strcpy((char *)(v8 + 16), (char *)str);
    int32_t * v10 = g188; // 0x40e1cd
    g188 = v9;
    *(int64_t *)(v8 + 8) = (int64_t)v10;
    // 0x40e1df
    v2 = v8 + 16;
    return *(char *)v2 == 0 ? 0 : v2;
}
// Address range: 0x40e1f0 - 0x40e2e9
int64_t function_40e1f0(int64_t str2) {
    int32_t * v1 = g188; // 0x40e1f7
    int64_t v2; // 0x40e1f0
    char v3 = v2;
    if (v1 != NULL) {
        int64_t v4 = (int64_t)v1;
        char * str = (char *)(v4 + 16); // 0x40e219
        int64_t result; // 0x40e1f0
        if (*str == v3) {
            // 0x40e21f
            result = v4;
            if (strcmp(str, (char *)str2) == 0) {
                // 0x40e22f
                return result;
            }
        }
        int64_t v5 = *(int64_t *)(v4 + 8); // 0x40e210
        while (v5 != 0) {
            // 0x40e219
            v4 = v5;
            str = (char *)(v4 + 16);
            if (*str == v3) {
                // 0x40e21f
                result = v4;
                if (strcmp(str, (char *)str2) == 0) {
                    // 0x40e22f
                    return result;
                }
            }
            // 0x40e210
            v5 = *(int64_t *)(v4 + 8);
        }
    }
    int32_t v6 = g187; // 0x40e240
    char * name; // 0x40e1f0
    if (v6 == 0) {
        // 0x40e240
        name = (char *)str2;
    } else {
        char * str4 = (char *)str2;
        int64_t v7 = v6; // 0x40e251
        char * str3 = (char *)(v7 + 16); // 0x40e261
        if (*str3 == v3) {
            // 0x40e267
            if (strcmp(str3, str4) == 0) {
                // 0x40e22f
                return 0;
            }
        }
        // 0x40e258
        v7 += 8;
        name = str4;
        while (v7 != 0) {
            // 0x40e261
            str3 = (char *)(v7 + 16);
            if (*str3 == v3) {
                // 0x40e267
                if (strcmp(str3, str4) == 0) {
                    // 0x40e22f
                    return 0;
                }
            }
            // 0x40e258
            v7 += 8;
            name = str4;
        }
    }
    struct passwd * v8 = getpwnam(name); // 0x40e283
    int64_t result2 = function_412980((int64_t)strlen(name) + 24 & -8); // 0x40e29b
    strcpy((char *)(result2 + 16), name);
    if (v8 == NULL) {
        int32_t v9 = g187; // 0x40e2d0
        g187 = result2;
        *(int64_t *)(result2 + 8) = (int64_t)v9;
        return 0;
    }
    int32_t * v10 = (int32_t *)result2; // 0x40e2b7
    *v10 = *(int32_t *)((int64_t)v8 + 16);
    int32_t * v11 = g188; // 0x40e2b9
    g188 = v10;
    *(int64_t *)(result2 + 8) = (int64_t)v11;
    // 0x40e22f
    return result2;
}
// Address range: 0x40e2f0 - 0x40e380
int64_t function_40e2f0(int64_t a1) {
    int32_t * v1 = g186; // 0x40e2f4
    int32_t gid = a1;
    int64_t v2; // 0x40e371
    if (v1 != NULL) {
        int64_t v3 = (int64_t)v1; // 0x40e2f4
        int64_t v4 = v3; // 0x40e302
        if (*v1 == gid) {
            // 0x40e36f
            v2 = v3 + 16;
            return *(char *)v2 == 0 ? 0 : v2;
        }
        v4 += 8;
        while (v4 != 0) {
            int64_t v5 = v4; // 0x40e312
            if (*(int32_t *)v4 == gid) {
                // 0x40e36f
                v2 = v5 + 16;
                return *(char *)v2 == 0 ? 0 : v2;
            }
            v4 += 8;
        }
    }
    struct group * v6 = getgrgid(gid); // 0x40e325
    int64_t v7 = 24; // 0x40e332
    int64_t str = (int64_t)&g24; // 0x40e332
    if (v6 != NULL) {
        // 0x40e334
        str = *(int64_t *)v6;
        v7 = (int64_t)strlen((char *)str) + 24 & -8;
    }
    int64_t v8 = function_412980(v7); // 0x40e347
    int32_t * v9 = (int32_t *)v8; // 0x40e34f
    *v9 = gid;
    strcpy((char *)(v8 + 16), (char *)str);
    int32_t * v10 = g186; // 0x40e35d
    g186 = v9;
    *(int64_t *)(v8 + 8) = (int64_t)v10;
    // 0x40e36f
    v2 = v8 + 16;
    return *(char *)v2 == 0 ? 0 : v2;
}
// Address range: 0x40e380 - 0x40e479
int64_t function_40e380(int64_t str2) {
    int32_t * v1 = g186; // 0x40e387
    int64_t v2; // 0x40e380
    char v3 = v2;
    if (v1 != NULL) {
        int64_t v4 = (int64_t)v1;
        char * str = (char *)(v4 + 16); // 0x40e3a9
        int64_t result; // 0x40e380
        if (*str == v3) {
            // 0x40e3af
            result = v4;
            if (strcmp(str, (char *)str2) == 0) {
                // 0x40e3bf
                return result;
            }
        }
        int64_t v5 = *(int64_t *)(v4 + 8); // 0x40e3a0
        while (v5 != 0) {
            // 0x40e3a9
            v4 = v5;
            str = (char *)(v4 + 16);
            if (*str == v3) {
                // 0x40e3af
                result = v4;
                if (strcmp(str, (char *)str2) == 0) {
                    // 0x40e3bf
                    return result;
                }
            }
            // 0x40e3a0
            v5 = *(int64_t *)(v4 + 8);
        }
    }
    int32_t v6 = g185; // 0x40e3d0
    char * name; // 0x40e380
    if (v6 == 0) {
        // 0x40e3d0
        name = (char *)str2;
    } else {
        char * str4 = (char *)str2;
        int64_t v7 = v6; // 0x40e3e1
        char * str3 = (char *)(v7 + 16); // 0x40e3f1
        if (*str3 == v3) {
            // 0x40e3f7
            if (strcmp(str3, str4) == 0) {
                // 0x40e3bf
                return 0;
            }
        }
        // 0x40e3e8
        v7 += 8;
        name = str4;
        while (v7 != 0) {
            // 0x40e3f1
            str3 = (char *)(v7 + 16);
            if (*str3 == v3) {
                // 0x40e3f7
                if (strcmp(str3, str4) == 0) {
                    // 0x40e3bf
                    return 0;
                }
            }
            // 0x40e3e8
            v7 += 8;
            name = str4;
        }
    }
    struct group * v8 = getgrnam(name); // 0x40e413
    int64_t result2 = function_412980((int64_t)strlen(name) + 24 & -8); // 0x40e42b
    strcpy((char *)(result2 + 16), name);
    if (v8 == NULL) {
        int32_t v9 = g185; // 0x40e460
        g185 = result2;
        *(int64_t *)(result2 + 8) = (int64_t)v9;
        return 0;
    }
    int32_t * v10 = (int32_t *)result2; // 0x40e447
    *v10 = *(int32_t *)((int64_t)v8 + 16);
    int32_t * v11 = g186; // 0x40e449
    g186 = v10;
    *(int64_t *)(result2 + 8) = (int64_t)v11;
    // 0x40e3bf
    return result2;
}
// Address range: 0x40e480 - 0x40e51c
int64_t function_40e480(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x40e480
    *(char *)v1 = 0;
    int64_t result = v1; // 0x40e4a5
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x40e4d6
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x40e4f8
    int64_t v4 = v2 - 1; // 0x40e508
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x40e510
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x40e520 - 0x40e568
int64_t function_40e520(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x40e520
    *(char *)v1 = 0;
    int64_t result = v1; // 0x40e532
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40e53b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x40e564
    return result;
}
// Address range: 0x40e570 - 0x40e90b
int64_t function_40e570(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int32_t a5, uint32_t a6) {
    uint64_t v1 = (int64_t)a4;
    uint64_t v2 = (int64_t)a6; // 0x40e57c
    char * str = (char *)a1; // 0x40e596
    int32_t len = strlen(str); // 0x40e596
    int64_t v3 = len; // 0x40e596
    int32_t * v4 = NULL; // 0x40e5a2
    int64_t v5 = a1; // 0x40e5a2
    int64_t v6 = 0; // 0x40e5a2
    int64_t v7 = v3; // 0x40e5a2
    int64_t v8 = v3; // 0x40e5a2
    int64_t v9; // 0x40e570
    int64_t result; // 0x40e570
    int64_t v10; // 0x40e570
    int64_t v11; // 0x40e570
    int32_t * v12; // 0x40e570
    int32_t v13; // 0x40e570
    int64_t * mem; // 0x40e754
    int64_t v14; // 0x40e780
    if ((a6 & 2) == 0) {
        // 0x40e6f0
        v4 = NULL;
        v5 = a1;
        v6 = 0;
        v7 = v3;
        v8 = v3;
        if (__ctype_get_mb_cur_max() < 2) {
            goto lab_0x40e5b6;
        } else {
            int32_t v15 = mbstowcs(NULL, str, 0); // 0x40e70b
            if (v15 != -1) {
                int32_t n = v15 + 1; // 0x40e740
                int32_t size = 4 * n; // 0x40e74f
                mem = malloc(size);
                if (mem == NULL) {
                    // 0x40e86a
                    v4 = (int32_t *)mem;
                    v5 = a1;
                    v6 = 0;
                    v7 = v3;
                    v8 = v3;
                    v12 = NULL;
                    v9 = 0;
                    result = -1;
                    if (v2 % 2 != 0) {
                        goto lab_0x40e5b6;
                    } else {
                        goto lab_0x40e68e;
                    }
                } else {
                    int32_t v16 = mbstowcs((int32_t *)mem, str, n); // 0x40e772
                    v4 = (int32_t *)mem;
                    v5 = a1;
                    v6 = 0;
                    v7 = v3;
                    v8 = v3;
                    if (v16 == 0) {
                        goto lab_0x40e5b6;
                    } else {
                        // 0x40e780
                        v14 = (int64_t)mem;
                        *(int32_t *)((int64_t)size - 4 + v14) = 0;
                        int32_t wc = *(int32_t *)mem; // 0x40e791
                        if (wc == 0) {
                            // 0x40e87f
                            v11 = wcswidth((int32_t *)mem, n);
                            goto lab_0x40e890;
                        } else {
                            int32_t v17 = 0; // 0x40e7b9
                            if (iswprint(wc) == 0) {
                                // 0x40e7bb
                                *(int32_t *)v14 = 0xfffd;
                                v17 = 1;
                            }
                            int32_t v18 = v17;
                            int64_t v19 = v14 + 4; // 0x40e7c6
                            int32_t v20 = *(int32_t *)v19; // 0x40e7ca
                            int32_t wc2 = v20; // 0x40e7ce
                            while (v20 != 0) {
                                int64_t v21 = v19;
                                v17 = v18;
                                if (iswprint(wc2) == 0) {
                                    // 0x40e7bb
                                    *(int32_t *)v21 = 0xfffd;
                                    v17 = 1;
                                }
                                // 0x40e7c6
                                v18 = v17;
                                v19 = v21 + 4;
                                v20 = *(int32_t *)v19;
                                wc2 = v20;
                            }
                            int64_t v22 = wcswidth((int32_t *)mem, n); // 0x40e7d7
                            v11 = v22;
                            if ((char)v18 == 0) {
                                goto lab_0x40e890;
                            } else {
                                // 0x40e7ea
                                v10 = v22;
                                v13 = wcstombs(NULL, (int32_t *)mem, 0);
                                goto lab_0x40e800;
                            }
                        }
                    }
                }
            } else {
                // 0x40e716
                v4 = NULL;
                v5 = a1;
                v6 = 0;
                v7 = v3;
                v8 = v3;
                v12 = NULL;
                v9 = 0;
                result = -1;
                if (v2 % 2 != 0) {
                    goto lab_0x40e5b6;
                } else {
                    goto lab_0x40e68e;
                }
            }
        }
    } else {
        goto lab_0x40e5b6;
    }
  lab_0x40e5b6:;
    int32_t * v23 = v4; // 0x40e5bd
    int64_t v24 = v5; // 0x40e5bd
    int64_t v25 = v1; // 0x40e5bd
    int64_t v26 = v6; // 0x40e5bd
    int64_t v27 = v1; // 0x40e5bd
    int32_t * v28 = v4; // 0x40e5bd
    int64_t v29 = v5; // 0x40e5bd
    int64_t v30 = v6; // 0x40e5bd
    int64_t v31 = v7; // 0x40e5bd
    int64_t v32 = v8; // 0x40e5bd
    if (v8 <= v1) {
        goto lab_0x40e6bb;
    } else {
        goto lab_0x40e5c8;
    }
  lab_0x40e6bb:
    // 0x40e6bb
    v23 = v28;
    v24 = v29;
    v25 = v32;
    v26 = v30;
    v27 = v31;
    int64_t v33; // 0x40e570
    int64_t v34; // 0x40e570
    int64_t v35; // 0x40e570
    int64_t v36; // 0x40e570
    int64_t v37; // 0x40e570
    int64_t v38; // 0x40e570
    int64_t v39; // 0x40e570
    int32_t * v40; // 0x40e570
    int32_t * v41; // 0x40e570
    int64_t v42; // 0x40e570
    int64_t v43; // 0x40e570
    if (v32 >= v1) {
        goto lab_0x40e5c8;
    } else {
        int64_t v44 = v1 - v32; // 0x40e6ce
        *a4 = v32;
        v40 = v28;
        v42 = v29;
        v38 = v44;
        v33 = v30;
        v36 = v31;
        v41 = v28;
        v43 = v29;
        v39 = 0;
        v34 = v30;
        v35 = v44;
        v37 = v31;
        if (a5 != 0) {
            goto lab_0x40e5d8;
        } else {
            goto lab_0x40e5ec;
        }
    }
  lab_0x40e5c8:
    // 0x40e5c8
    *a4 = v25;
    v40 = v23;
    v42 = v24;
    v38 = 0;
    v33 = v26;
    v36 = v27;
    v41 = v23;
    v43 = v24;
    v39 = 0;
    v34 = v26;
    v35 = 0;
    v37 = v27;
    if (a5 == 0) {
        goto lab_0x40e5ec;
    } else {
        goto lab_0x40e5d8;
    }
  lab_0x40e5ec:;
    uint64_t v45 = v37;
    int64_t v46 = (v2 & 4) == 0 ? v39 : 0;
    int64_t v47 = (v2 & 8) != 0 ? 0 : v35; // 0x40e608
    if (a3 != 0) {
        uint64_t v48 = a2 - 1 + a3; // 0x40e611
        if (v48 > a2 == (v46 != 0)) {
            int64_t v49 = -v46; // 0x40e63b
            int64_t v50 = a2; // 0x40e570
            int64_t v51 = v50;
            int64_t v52 = v51 + 1; // 0x40e62d
            *(char *)v51 = 32;
            v50 = v52;
            while (v48 > v52 == (a2 - v52 != v49)) {
                // 0x40e62d
                v51 = v50;
                v52 = v51 + 1;
                *(char *)v51 = 32;
                v50 = v52;
            }
        }
        // 0x40e640
        *(char *)a2 = 0;
        uint64_t v53 = v48 - a2; // 0x40e64b
        int64_t v54 = v53 > v45 ? v45 : v53; // 0x40e651
        int64_t v55 = (int64_t)mempcpy((int64_t *)a2, (int64_t *)v43, (int32_t)v54); // 0x40e655
        int64_t v56 = v55; // 0x40e660
        if (v47 != 0 == v48 > v55) {
            int64_t v57 = v55 + 1; // 0x40e675
            *(char *)v55 = 32;
            v56 = v57;
            while (v48 > v57 == (v47 - v57 != -v55)) {
                int64_t v58 = v57;
                v57 = v58 + 1;
                *(char *)v58 = 32;
                v56 = v57;
            }
        }
        // 0x40e688
        *(char *)v56 = 0;
    }
    // 0x40e68b
    v12 = v41;
    v9 = v34;
    result = v45 + v46 + v47;
    goto lab_0x40e68e;
  lab_0x40e5d8:
    // 0x40e5d8
    v41 = v40;
    v43 = v42;
    v39 = v38;
    v34 = v33;
    v35 = 0;
    v37 = v36;
    if (a5 != 1) {
        int64_t v72 = v38 / 2; // 0x40e5e6
        v41 = v40;
        v43 = v42;
        v39 = v38 % 2 + v72;
        v34 = v33;
        v35 = v72;
        v37 = v36;
    }
    goto lab_0x40e5ec;
  lab_0x40e68e:
    // 0x40e68e
    free((int64_t *)v12);
    free((int64_t *)v9);
    return result;
  lab_0x40e890:
    // 0x40e890
    v28 = (int32_t *)mem;
    v29 = a1;
    v30 = 0;
    v31 = v3;
    v32 = v11;
    v10 = v11;
    v13 = len;
    if (v11 <= v1) {
        goto lab_0x40e6bb;
    } else {
        goto lab_0x40e800;
    }
  lab_0x40e800:;
    int32_t size2 = v13 + 1;
    int64_t * mem2 = malloc(size2); // 0x40e805
    int64_t v59 = (int64_t)mem2; // 0x40e805
    if (mem2 == NULL) {
        // 0x40e8e0
        v4 = (int32_t *)mem;
        v5 = a1;
        v6 = v59;
        v7 = v3;
        v8 = v10;
        v12 = (int32_t *)mem;
        v9 = v59;
        result = -1;
        if (v2 % 2 != 0) {
            goto lab_0x40e5b6;
        } else {
            goto lab_0x40e68e;
        }
    } else {
        int32_t v60 = *(int32_t *)mem; // 0x40e81e
        int32_t * v61 = (int32_t *)mem; // 0x40e828
        int64_t v62 = 0; // 0x40e828
        if (v60 != 0) {
            int64_t v63 = 0;
            int64_t v64 = v14;
            int32_t v65 = wcwidth(v60); // 0x40e852
            int64_t v66; // 0x40e570
            if (v65 != -1) {
                // 0x40e838
                v66 = v65;
            } else {
                // 0x40e85c
                *(int32_t *)v64 = 0xfffd;
                v66 = 1;
            }
            int64_t v67 = v66 + v63; // 0x40e83a
            while (v67 <= v1) {
                int64_t v68 = v64 + 4; // 0x40e844
                int32_t * v69 = (int32_t *)v68;
                int32_t v70 = *v69; // 0x40e848
                v61 = v69;
                v62 = v67;
                if (v70 == 0) {
                    goto lab_0x40e8b8;
                }
                v63 = v67;
                v64 = v68;
                v65 = wcwidth(v70);
                if (v65 != -1) {
                    // 0x40e838
                    v66 = v65;
                } else {
                    // 0x40e85c
                    *(int32_t *)v64 = 0xfffd;
                    v66 = 1;
                }
                // 0x40e83a
                v67 = v66 + v63;
            }
            // 0x40e8b8
            v61 = (int32_t *)v64;
            v62 = v63;
        }
      lab_0x40e8b8:
        // 0x40e8b8
        *v61 = 0;
        int32_t v71 = wcstombs((char *)mem2, (int32_t *)mem, size2); // 0x40e8cb
        v4 = (int32_t *)mem;
        v5 = v59;
        v6 = v59;
        v7 = v71;
        v8 = v62;
        goto lab_0x40e5b6;
    }
}
// Address range: 0x40e910 - 0x40e9ad
int64_t function_40e910(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)a2;
    uint64_t v2 = a2 + 1; // 0x40e938
    int64_t * v3 = (int64_t *)0;
    int64_t * mem = realloc(v3, (int32_t)v2); // 0x40e942
    while (mem != NULL) {
        int64_t v4 = (int64_t)mem;
        *v1 = a2;
        int64_t v5 = function_40e570(a1, v4, v2, v1, (int32_t)a3, (int32_t)a4); // 0x40e969
        int64_t result; // 0x40e910
        if (v5 == -1) {
            // 0x40e9a0
            free(mem);
            result = 0;
            return result;
        }
        // 0x40e974
        result = v4;
        if (v2 > v5) {
            // 0x40e97c
            return result;
        }
        v2 = v5 + 1;
        v3 = (int64_t *)v4;
        mem = realloc(v3, (int32_t)v2);
    }
    // 0x40e990
    free(v3);
    // 0x40e97c
    return 0;
}
// Address range: 0x40e9b0 - 0x40eb63
int64_t function_40e9b0(uint64_t a1, int64_t a2, uint32_t a3) {
    uint64_t v1 = a2 + a1; // 0x40e9b9
    int64_t v2; // 0x40e9b0
    int64_t v3; // 0x40e9b0
    int64_t v4; // 0x40e9b0
    int64_t v5; // 0x40e9b0
    int64_t v6; // 0x40e9b0
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x40eaf0
        if (v1 <= a1) {
            // 0x40ead6
            return 0;
        }
        int16_t * v7 = *__ctype_b_loc(); // 0x40eb04
        v6 = a1;
        v3 = 0;
        while (true) {
          lab_0x40eb10:
            // 0x40eb10
            v4 = v3;
            unsigned char v8 = *(char *)v6; // 0x40eb14
            int16_t v9 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)v7); // 0x40eb18
            if ((v9 & 0x4000) != 0) {
                goto lab_0x40eb2a;
            } else {
                // 0x40eb21
                v2 = 0xffffffff;
                if ((a3 & 2) != 0) {
                    // break -> 0x40ead6
                    break;
                }
                // 0x40eb26
                v5 = v4;
                if ((v9 & 2) != 0) {
                    goto lab_0x40eb37;
                } else {
                    goto lab_0x40eb2a;
                }
            }
        }
      lab_0x40ead6_7:
        // 0x40ead6
        return v2 & 0xffffffff;
    }
    // 0x40e9d7
    if (v1 <= a1) {
        // 0x40ead6
        return 0;
    }
    uint64_t v10 = (int64_t)a3; // 0x40e9b2
    int64_t v11 = a1;
    int64_t v12 = 0; // 0x40e9b0
    int64_t v13; // 0x40e9b0
    int64_t v14; // 0x40e9b0
    int64_t v15; // 0x40e9b0
    int64_t v16; // 0x40e9b0
    while (true) {
      lab_0x40ea0c:
        // 0x40ea0c
        v14 = v12;
        v16 = v11;
        char v17 = *(char *)v16; // 0x40ea0c
        if (v17 < 64) {
            // 0x40e9f0
            v15 = v16;
            v13 = v14;
            if (v17 > 36 || (v17 & -4) == 32) {
                goto lab_0x40e9fb;
            } else {
                goto lab_0x40ea22;
            }
        } else {
            if (v17 == 64) {
                goto lab_0x40ea22;
            } else {
                // 0x40ea17
                v15 = v16;
                v13 = v14;
                if (v17 < 96 || v17 < 127) {
                    goto lab_0x40e9fb;
                } else {
                    goto lab_0x40ea22;
                }
            }
        }
    }
  lab_0x40ead6_7:
    // 0x40ead6
    return v2 & 0xffffffff;
  lab_0x40eb2a:
    // 0x40eb2a
    v2 = v4;
    if ((int32_t)v4 == 0x7fffffff) {
        return v2 & 0xffffffff;
    }
    // 0x40eb33
    v5 = v4 + 1 & 0xffffffff;
    goto lab_0x40eb37;
  lab_0x40eb37:;
    int64_t v18 = v6 + 1; // 0x40eb10
    v2 = v5;
    v6 = v18;
    v3 = v5;
    if (v1 == v18) {
        // break -> 0x40ead6
        goto lab_0x40ead6_7;
    }
    goto lab_0x40eb10;
  lab_0x40e9fb:;
    int64_t v19 = v15 + 1; // 0x40e9ff
    v12 = v13 + 1 & 0xffffffff;
  lab_0x40ea03:
    // 0x40ea03
    v11 = v19;
    if (v11 >= v1) {
        // break -> 0x40ead6
        goto lab_0x40ead6_7;
    }
    goto lab_0x40ea0c;
  lab_0x40ea22:;
    int64_t ps = 0; // bp-64, 0x40ea22
    int64_t v20 = v16; // 0x40ea2b
    int64_t v21 = v14; // 0x40ea2b
    int64_t v22; // 0x40e9b0
    int64_t v23; // 0x40e9b0
    while (true) {
      lab_0x40ea54:
        // 0x40ea54
        v22 = v21;
        v23 = v20;
        int32_t wc; // bp-68, 0x40e9b0
        int64_t v24 = function_416e80((int64_t *)&wc, v23, v1 - v23); // 0x40ea67
        switch (v24) {
            case -1: {
                goto lab_0x40eac0;
            }
            case -2: {
                // 0x40eb40
                v2 = 0xffffffff;
                if (v10 % 2 == 0) {
                    // 0x40ea03
                    v2 = v22 + 1 & 0xffffffff;
                }
                // 0x40ead6
                return v2 & 0xffffffff;
            }
            default: {
                int32_t v25 = wcwidth(wc); // 0x40ea8a
                int64_t v26; // 0x40e9b0
                if (v25 >= 0) {
                    int64_t v27 = v25; // 0x40ea8a
                    v2 = 0x7fffffff;
                    if ((0x7fffffff - v22 & 0xffffffff) < v27) {
                        // break (via goto) -> 0x40ead6
                        goto lab_0x40ead6_7;
                    }
                    // 0x40ea40
                    v26 = v22 + v27 & 0xffffffff;
                } else {
                    // 0x40ea93
                    v2 = 0xffffffff;
                    if ((v10 & 2) != 0) {
                        // break (via goto) -> 0x40ead6
                        goto lab_0x40ead6_7;
                    }
                    // 0x40ea99
                    v26 = v22;
                    if (iswcntrl(wc) == 0) {
                        // 0x40eaa6
                        v2 = 0x7fffffff;
                        if ((int32_t)v22 == 0x7fffffff) {
                            // break (via goto) -> 0x40ead6
                            goto lab_0x40ead6_7;
                        }
                        // 0x40eab3
                        v26 = v22 + 1 & 0xffffffff;
                    }
                }
                int64_t v28 = (v24 == 0 ? 1 : v24) + v23; // 0x40ea48
                int32_t v29 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40ea4b
                v19 = v28;
                v12 = v26;
                v20 = v28;
                v21 = v26;
                if (v29 != 0) {
                    goto lab_0x40ea03;
                }
                goto lab_0x40ea54;
            }
        }
    }
  lab_0x40eac0:
    // 0x40eac0
    v15 = v23;
    v13 = v22;
    v2 = 0xffffffff;
    if (v10 % 2 != 0) {
        // break -> 0x40ead6
        goto lab_0x40ead6_7;
    }
    goto lab_0x40e9fb;
}
// Address range: 0x40eb70 - 0x40eb93
int64_t function_40eb70(int64_t str, int32_t a2) {
    // 0x40eb70
    return function_40e9b0(str, (int64_t)strlen((char *)str), a2);
}
// Address range: 0x40eba0 - 0x40edc1
int64_t function_40eba0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x40eba0
    if (a2 < 3) {
        int64_t result2; // 0x40eba0
        if (a2 != 2 || (int32_t)result2 < 1) {
            // 0x40ebc6
            int64_t result; // 0x40eba0
            return result;
        }
        int64_t * v1 = (int64_t *)(a1 + 8); // 0x40ebd8
        *(int64_t *)a1 = *v1;
        *v1 = a1;
        return result2;
    }
    // 0x40ec08
    function_40eba0(a1, a2 % 2, a3, a4);
    int64_t v2; // 0x40eba0
    int64_t v3; // 0x40eba0
    int64_t v4; // 0x40eba0
    int64_t v5; // 0x40eba0
    int64_t v6; // 0x40eba0
    int64_t v7; // 0x40eba0
    int64_t v8; // 0x40eba0
    int64_t v9; // 0x40ed02
    int64_t v10; // 0x40ed09
    if (a2 != 3) {
        // 0x40ecf0
        v9 = a2 / 4;
        v10 = 8 * v9 + a1;
        function_40eba0(v10, -v9, a3, a4);
        int64_t v11 = function_40eba0(a1, v9, a3, a4); // 0x40ed29
        int64_t v12 = a3 + 8; // 0x40ed46
        v6 = 0;
        v4 = a3;
        v2 = v12;
        if ((int32_t)v11 < 1) {
            // 0x40ed70
            *(int64_t *)a3 = a1;
            v3 = v12;
            v8 = 0;
            v7 = 1;
            if ((a2 & -4) == 4) {
                goto lab_0x40ed98;
            } else {
                // 0x40ed40
                v6 = 1;
                v4 = v12;
                v2 = a3 + 16;
                goto lab_0x40ed51;
            }
        } else {
            goto lab_0x40ed51;
        }
    } else {
        // 0x40ec41
        *(int64_t *)a3 = a1;
        v5 = a1;
        goto lab_0x40ec47;
    }
  lab_0x40ed51:
    // 0x40ed51
    *(int64_t *)v4 = *(int64_t *)v10;
    v3 = v2;
    v8 = v9;
    v7 = v6;
    if (0 != v9 + 1) {
        int64_t v13; // 0x40eba0
        int64_t v14; // 0x40eba0
        *(int64_t *)v14 = *(int64_t *)(8 * v13 + a1);
        v3 = v14 + 8;
        v8 = v9;
        int64_t v15; // 0x40eba0
        v7 = v15;
        while (0 != v13 + 1) {
            int64_t v16 = v14;
            int64_t v17 = v13;
            int64_t v18 = *(int64_t *)(8 * v17 + a1); // 0x40ed60
            int64_t v19 = v16 + 8; // 0x40ed46
            *(int64_t *)v16 = v18;
            int64_t v20 = v17 + 1; // 0x40ed55
            v13 = v20;
            v14 = v19;
            v3 = v19;
            v8 = v9;
            v7 = v15;
        }
    }
    goto lab_0x40ed98;
  lab_0x40ec47:;
    int32_t v22 = 0; // 0x40ec6f
    int64_t v23 = 1; // 0x40ec6f
    if ((int32_t)a1 < 1) {
        // 0x40ec90
        *(int64_t *)a1 = v5;
        v22 = 1;
        v23 = 2;
        if ((a2 & -2) == 2) {
            // 0x40ebc6
            return 1;
        }
    }
    int64_t v24 = a1 - 8;
    int32_t v25 = v22;
    int64_t v26 = 8 * v23; // 0x40ec71
    *(int64_t *)(v26 + v24) = *(int64_t *)a1;
    int64_t v27 = 1; // 0x40ec76
    int64_t v28 = v26; // 0x40ec7f
    int64_t * dest_mem; // 0x40ece7
    if (v27 == a2) {
        // 0x40ecb8
        dest_mem = memcpy((int64_t *)(v28 + a1), (int64_t *)((int64_t)(8 * v25) + a3), 8 * ((int32_t)0 - v25));
        return (int64_t)dest_mem;
    }
    int64_t v29 = v23 + 1; // 0x40ec66
    int64_t v30 = 8 * v29; // 0x40ec71
    *(int64_t *)(v30 + v24) = *(int64_t *)(8 * v27 + a1);
    int64_t v31 = v27 + 1; // 0x40ec76
    int64_t v32 = v31; // 0x40ec7f
    int64_t v33 = v29; // 0x40ec7f
    v28 = v30;
    while (v31 != a2) {
        // 0x40ec81
        v29 = v33 + 1;
        v30 = 8 * v29;
        *(int64_t *)(v30 + v24) = *(int64_t *)(8 * v32 + a1);
        v31 = v32 + 1;
        v32 = v31;
        v33 = v29;
        v28 = v30;
    }
    // 0x40ecb8
    dest_mem = memcpy((int64_t *)(v28 + a1), (int64_t *)((int64_t)(8 * v25) + a3), 8 * ((int32_t)0 - v25));
    return (int64_t)dest_mem;
  lab_0x40ed98:;
    int64_t v21 = 8 * (v8 - v7); // 0x40edab
    memcpy((int64_t *)v3, (int64_t *)(8 * v7 + a1), (int32_t)v21);
    v5 = v21;
    goto lab_0x40ec47;
}
// Address range: 0x40edd0 - 0x40eddf
int64_t function_40edd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40edd0
    return function_40eba0(a1, a2, 8 * a2 + a1, a3);
}
// Address range: 0x40ede0 - 0x40ee21
int64_t function_40ede0(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x40ee19
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x40edf3
    int64_t v2 = a3; // 0x40edf8
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x40ee00
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x40ee08
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x40ee00
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x40ee19
    return result;
}
// Address range: 0x40ee30 - 0x40ee71
int64_t function_40ee30(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x40ee69
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x40ee43
    int64_t v2 = a3; // 0x40ee48
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x40ee50
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x40ee58
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x40ee50
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x40ee69
    return result;
}
// Address range: 0x40ee80 - 0x410645
int64_t function_40ee80(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3 = a2; // bp-1224, 0x40eea4
    char v4 = *(char *)&v1; // 0x40eecc
    v3 = a2;
    int64_t result = 0; // 0x40eed4
    int64_t v5 = v2; // 0x40eed4
    char v6; // 0x40ee80
    char v7; // 0x40ee80
    char v8; // 0x40ee80
    char v9; // 0x40ee80
    char v10; // 0x40ee80
    char v11; // 0x40ee80
    char v12; // 0x40ee80
    char v13; // 0x40ee80
    char v14; // 0x40ee80
    char v15; // 0x40ee80
    int64_t v16; // 0x40ee80
    int64_t v17; // 0x40ee80
    int64_t v18; // 0x40ee80
    int64_t v19; // 0x40ee80
    int64_t v20; // 0x40ee80
    int64_t v21; // 0x40ee80
    int64_t v22; // 0x40ee80
    int64_t v23; // 0x40ee80
    int64_t v24; // 0x40ee80
    int64_t v25; // 0x40ee80
    int64_t v26; // 0x40ee80
    int64_t v27; // 0x40ee80
    int64_t v28; // 0x40ee80
    int64_t v29; // 0x40ee80
    char v30; // 0x40ee80
    int64_t v31; // 0x40ee80
    int64_t v32; // 0x40ee80
    int64_t v33; // 0x40ee80
    int64_t v34; // 0x40ee80
    int64_t v35; // 0x40ee80
    int64_t v36; // 0x40ee80
    int64_t v37; // 0x40ee80
    int64_t v38; // 0x40ee80
    char * v39; // 0x40ee80
    int64_t v40; // 0x40ee80
    char * v41; // 0x40ee80
    int64_t v42; // 0x40ee80
    int64_t * str; // 0x40ee80
    char * v43; // 0x40ee80
    int64_t * v44; // 0x40ee80
    int64_t format; // 0x40ee80
    int16_t * v45; // 0x40ee80
    int64_t * v46; // 0x40ee80
    int32_t * v47; // 0x40ee80
    int32_t * v48; // 0x40ee80
    int64_t v49; // 0x40ee95
    int64_t * v50; // 0x40ee80
    int64_t * v51; // 0x40ee80
    int64_t * v52; // 0x40ee80
    int64_t * v53; // 0x40ee80
    int64_t * v54; // 0x40ee80
    int64_t * v55; // 0x40ee80
    int32_t * v56; // 0x40ee80
    int64_t v57; // 0x40ee80
    char * v58; // 0x40ee80
    int64_t * v59; // 0x40ee80
    int32_t * v60; // 0x40ee80
    int64_t * v61; // 0x40ee80
    int64_t * v62; // 0x40ee80
    int64_t * tm; // 0x40ee80
    int64_t v63; // 0x40ee80
    int32_t * v64; // 0x40ee80
    int64_t * v65; // 0x40ee80
    int64_t str2; // 0x40ee80
    if (v4 != 0) {
        // 0x40eeea
        v49 = &v3;
        tm = (int64_t *)(v49 + 8);
        v63 = v49 + 48;
        v64 = (int32_t *)v63;
        v65 = (int64_t *)(v49 + 1232);
        str2 = v49 + 144;
        int64_t v66 = v49 + 64;
        v39 = (char *)v66;
        v40 = v49 + 135;
        v41 = (char *)v63;
        v42 = v49 + 44;
        str = (int64_t *)(v49 + 32);
        int64_t v67 = v49 + 72;
        v43 = (char *)v67;
        v44 = (int64_t *)v63;
        format = v49 + 112;
        v45 = (int16_t *)format;
        v46 = (int64_t *)(v49 + 16);
        v47 = (int32_t *)(v49 + 1240);
        v48 = (int32_t *)v66;
        v50 = (int64_t *)(v49 - 8);
        v51 = (int64_t *)(v49 - 16);
        v52 = (int64_t *)(v49 + 24);
        v53 = (int64_t *)v66;
        int64_t v68 = v49 + 80;
        v54 = (int64_t *)v68;
        v55 = (int64_t *)v67;
        v56 = (int32_t *)v67;
        v57 = v49 + 145;
        int64_t v69 = v49 + 88;
        v58 = (char *)v69;
        v59 = (int64_t *)v69;
        v60 = (int32_t *)v68;
        v61 = (int64_t *)(v49 + 104);
        v62 = (int64_t *)(v49 + 96);
        v30 = v4;
        v33 = a3;
        v19 = 0;
        v22 = v2;
        while (true) {
          lab_0x40eeea:
            // 0x40eeea
            v23 = v22;
            v20 = v19;
            int64_t v70 = v33;
            char v71 = v30;
            char v72 = v7;
            char v73 = v6;
            if (v71 == 37) {
                char v74 = v73; // 0x40ef74
                char v75 = v72; // 0x40ef74
                int64_t v76 = v70; // 0x40ef74
                int64_t v77 = 0; // 0x40ef74
                int64_t v78 = (int64_t)*(char *)(v49 + 43); // 0x40ef74
                int64_t v79 = 0; // 0x40ef74
                int64_t v80; // 0x40ee80
                while (true) {
                  lab_0x40ef78_2:
                    // 0x40ef78
                    v16 = v78;
                    v10 = v74;
                    v11 = v75;
                    v34 = v76;
                    v26 = v77;
                    v17 = v79;
                    while (true) {
                      lab_0x40ef78:;
                        int64_t v81 = v26;
                        char v82 = v11;
                        char v83 = v10;
                        int64_t v84 = v34 + 1; // 0x40ef78
                        char v85 = *(char *)v84; // 0x40ef7c
                        v14 = v83;
                        v15 = v82;
                        v31 = 48;
                        v36 = v84;
                        v28 = v81;
                        if (v85 == 48) {
                            goto lab_0x40efa8;
                        } else {
                            // 0x40ef88
                            v18 = v17;
                            v27 = v81;
                            v35 = v84;
                            v80 = v85;
                            v13 = v82;
                            v12 = v83;
                            while (v12 <= v13) {
                                if (v80 != 35) {
                                    // 0x40efb0
                                    v14 = v12;
                                    v15 = v13;
                                    v31 = v80;
                                    v36 = v35;
                                    v28 = v27;
                                    if ((char)v80 == 45) {
                                        goto lab_0x40efa8;
                                    } else {
                                        int64_t v86 = v80 & 0xffffffff;
                                        v38 = v86;
                                        v37 = v35;
                                        v32 = 0xffffffff;
                                        v29 = v86;
                                        if ((int32_t)v80 < 58) {
                                            goto lab_0x40f011;
                                        } else {
                                            goto lab_0x40efc8_2;
                                        }
                                    }
                                }
                                int64_t v87 = v35 + 1; // 0x40ef8e
                                char v88 = *(char *)v87; // 0x40ef92
                                int64_t v89 = v88; // 0x40ef92
                                v14 = v88;
                                v15 = 48;
                                v31 = v89;
                                v36 = v87;
                                v28 = 1;
                                if (v88 == 48) {
                                    goto lab_0x40efa8;
                                }
                                v27 = 1;
                                v35 = v87;
                                v80 = v89;
                                v13 = 48;
                                v12 = v88;
                            }
                            char v90 = v80;
                            v74 = v12;
                            v75 = v13;
                            v76 = v35;
                            v77 = v27;
                            v78 = 1;
                            v79 = v18;
                            if (v90 != 94) {
                                // 0x40f000
                                v14 = v12;
                                v15 = v13;
                                v31 = v80;
                                v36 = v35;
                                v28 = v27;
                                if (v90 != 95) {
                                    // break (via goto) -> 0x40f004
                                    goto lab_0x40f004;
                                }
                                goto lab_0x40efa8;
                            } else {
                                goto lab_0x40ef78_2;
                            }
                        }
                    }
                }
              lab_0x40f004:;
                int64_t v91 = v80 & 0xffffffff;
                v38 = v91;
                v37 = v35;
                v32 = 0xffffffff;
                v29 = v91;
                if ((int32_t)v80 < 58) {
                    goto lab_0x40f011;
                } else {
                    goto lab_0x40efc8_2;
                }
            } else {
                int64_t v92 = v3 - v20; // 0x40eef2
                v1 = v92;
                if (v92 < 2) {
                    // break -> 0x40ef33
                    break;
                }
                int64_t v93 = 0; // 0x40eefe
                if (v23 != 0) {
                    // 0x40ef00
                    *(char *)v23 = v71;
                    v93 = v23 + 1;
                }
                // 0x40ef07
                v8 = v73;
                v9 = v72;
                v25 = v70;
                v21 = v20 + 1;
                v24 = v93;
                goto lab_0x40ef0e;
            }
        }
      lab_0x40ef33_11:
        // 0x40ef33
        return 0;
    }
    goto lab_0x40ef1b_2;
  lab_0x40efa8:
    // 0x40efa8
    v10 = v14;
    v11 = v15;
    v34 = v36;
    v26 = v28;
    v17 = v31 & 0xffffffff;
    goto lab_0x40ef78;
  lab_0x40f05e:;
    // 0x40f05e
    int64_t v94; // 0x40f01b
    v38 = v94;
    int64_t v95; // 0x40f013
    v37 = v95;
    v32 = 0x7fffffff;
    v29 = v94;
    int64_t v96; // 0x40f01d
    if ((int32_t)v96 >= 10) {
        // break -> 0x40efc8
        goto lab_0x40efc8_2;
    }
    // 0x40f063
    int64_t v97; // 0x40ee80
    int64_t v98 = v97 + 2; // 0x40f063
    int64_t v99 = (int64_t)*(char *)v98; // 0x40f063
    int64_t v100 = v99 + 0xffffffd0 & 0xffffffff; // 0x40f072
    v1 = v100;
    int64_t v101 = v100; // 0x40f075
    int64_t v102 = v99; // 0x40f075
    int64_t v103 = v99 & 0xffffffff; // 0x40f075
    int64_t v104 = v98; // 0x40f075
    int64_t v105 = 0x7fffffff; // 0x40f075
    goto lab_0x40f03a;
  lab_0x40f03a:;
    int64_t v106 = v105;
    int64_t v107 = v104;
    int64_t v108 = v107; // 0x40f03d
    int64_t v109 = v106; // 0x40f03d
    if ((int32_t)v101 >= 10) {
        // 0x40f03f
        v38 = v103;
        v37 = v107;
        v32 = v106;
        v29 = v102 & 0xffffffff;
        goto lab_0x40efc8_2;
    }
    goto lab_0x40f013;
  lab_0x40f011:
    // 0x40f011
    v108 = v35;
    v109 = 0;
    while (true) {
      lab_0x40f013:;
        int64_t v110 = v109;
        v97 = v108;
        v95 = v97 + 1;
        int64_t v111 = (int64_t)*(char *)v95; // 0x40f013
        v94 = v111 & 0xffffffff;
        v96 = v111 + 0xffffffd0;
        int64_t v112 = v96 & 0xffffffff; // 0x40f01d
        v1 = v112;
        int32_t v113 = v110; // 0x40f020
        if (v113 > 0xccccccc) {
            goto lab_0x40f05e;
        } else {
            char v114 = *(char *)v97; // 0x40f028
            if (v113 != 0xccccccc || v114 < 56) {
                // 0x40f02d
                v101 = v112;
                v102 = v111;
                v103 = v94;
                v104 = v95;
                v105 = 10 * v110 + 0xffffffd0 + (int64_t)v114 & 0xffffffff;
                goto lab_0x40f03a;
            } else {
                goto lab_0x40f05e;
            }
        }
    }
    goto lab_0x40efc8_2;
  lab_0x40efc8_2:;
    int64_t v115 = v32;
    int64_t v116 = v37;
    int64_t v117 = v38; // 0x40ee80
    int64_t v118 = v116; // 0x40ee80
    int64_t v119 = 0; // 0x40ee80
    int64_t v120; // 0x40ee80
    switch ((char)v120) {
        case 69: {
        }
        case 79: {
            int64_t v121 = v116 + 1; // 0x40f048
            v117 = (int64_t)*(char *)v121;
            v118 = v121;
            v119 = v29;
            // break -> 0x40efde
            break;
        }
    }
    int64_t v122 = v119;
    int64_t v123 = v118;
    int64_t v124 = v117;
    g213 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v124; // 0x40efe1
    int64_t v127 = v16; // 0x40efe1
    int64_t v128 = 0; // 0x40efe1
    int64_t v129 = 1; // 0x40efe1
    int64_t v130 = v123; // 0x40efe1
    int64_t v131 = v16; // 0x40efe1
    int64_t v132 = v123; // 0x40efe1
    int64_t v133 = 0; // 0x40efe1
    int64_t v134; // 0x40ee80
    int64_t v135; // 0x40ee80
    int64_t v136; // 0x40ee80
    int64_t v137; // 0x40ee80
    int64_t v138; // 0x40ee80
    int64_t v139; // 0x40ee80
    int64_t v140; // 0x40ee80
    int64_t v141; // 0x40ee80
    int64_t v142; // 0x40ee80
    int64_t v143; // 0x40ee80
    int64_t v144; // 0x40ee80
    int64_t v145; // 0x40ee80
    int64_t v146; // 0x40ee80
    int64_t v147; // 0x40ee80
    int64_t v148; // 0x40ee80
    int64_t v149; // 0x40ee80
    int64_t v150; // 0x40ee80
    int64_t v151; // 0x40ee80
    int64_t v152; // 0x40ee80
    int64_t v153; // 0x40ee80
    int64_t v154; // 0x40ee80
    int64_t v155; // 0x40ee80
    int64_t v156; // 0x40ee80
    int64_t v157; // 0x40ee80
    int64_t v158; // 0x40ee80
    int64_t v159; // 0x40ee80
    int64_t v160; // 0x40ee80
    int64_t v161; // 0x40ee80
    int64_t v162; // 0x40ee80
    int64_t v163; // 0x40ee80
    int64_t v164; // 0x40ee80
    int64_t v165; // 0x40ee80
    int64_t v166; // 0x40ee80
    int64_t v167; // 0x40ee80
    int64_t v168; // 0x40ee80
    int64_t v169; // 0x40ee80
    int64_t v170; // 0x40ee80
    int64_t v171; // 0x40ee80
    int64_t v172; // 0x40ee80
    int64_t v173; // 0x40ee80
    int64_t v174; // 0x40ee80
    int64_t v175; // 0x40ee80
    int64_t v176; // 0x40ee80
    int64_t v177; // 0x40ee80
    int64_t v178; // 0x40ee80
    int64_t v179; // 0x40ee80
    int64_t v180; // 0x40ee80
    int64_t v181; // 0x40ee80
    int64_t v182; // 0x40ee80
    int64_t v183; // 0x40ee80
    int64_t v184; // 0x40ee80
    int64_t v185; // 0x40ee80
    int32_t v186; // 0x40ee80
    switch (v125) {
        case 0: {
            // 0x40ff63
            v177 = v123 - 1;
            goto lab_0x40fe57;
        }
        case 37: {
            int64_t v187 = v3 - v20; // 0x40fefe
            v1 = v187;
            int32_t v188 = v115; // 0x40ff01
            int64_t v189 = 0x100000000 * v115 >> 32;
            int64_t v190 = v188 >= 0 ? v189 : 0; // 0x40ff06
            int64_t v191 = v190 != 0 ? v190 : 1; // 0x40ff0b
            v134 = v187;
            v162 = v190;
            v176 = 1;
            v160 = v123;
            v161 = v123;
            v142 = v16;
            v152 = v191;
            if ((int32_t)v122 != 0) {
                goto lab_0x40fd03;
            } else {
                // 0x40ff18
                if (v191 >= v187) {
                    // break -> 0x40ef33
                    break;
                }
                // 0x40ff21
                v155 = v191;
                v156 = 0;
                if (v23 != 0) {
                    int64_t v192 = v124; // 0x40ff2d
                    int64_t v193 = v23; // 0x40ff2d
                    if (v188 >= 2) {
                        int64_t v194 = v189 - 1; // 0x40ff32
                        v1 = v194;
                        int64_t v195 = v194 + v23; // 0x40ff36
                        int64_t * v196 = (int64_t *)v23;
                        int32_t v197 = v194;
                        if (v18 == 48) {
                            // 0x4105c6
                            memset(v196, 48, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        } else {
                            // 0x40ff44
                            memset(v196, 32, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        }
                    }
                    // 0x40ff57
                    *(char *)v193 = (char)v192;
                    v155 = v191;
                    v156 = v193 + 1;
                }
                goto lab_0x40f8a6;
            }
        }
        case 58: {
            int64_t v198 = v123 + 1; // 0x40ffbf
            char v199 = *(char *)v198; // 0x40ffbf
            v1 = v198;
            int64_t v200 = v198; // 0x40ffcf
            char v201 = v199; // 0x40ffcf
            int64_t v202 = 1; // 0x40ffcf
            if (v199 == 58) {
                int64_t v203 = 2; // 0x40fff7
                int64_t v204 = v203 + v123; // 0x40fffb
                char v205 = *(char *)v204; // 0x40fffb
                v1 = v204;
                v200 = v204;
                v201 = v205;
                v202 = v203;
                int64_t v206 = v203; // 0x410006
                while (v205 == 58) {
                    // 0x40fff7
                    v203 = v206 + 1;
                    v204 = v203 + v123;
                    v205 = *(char *)v204;
                    v1 = v204;
                    v200 = v204;
                    v201 = v205;
                    v202 = v203;
                    v206 = v203;
                }
            }
            // 0x40ffd1
            v130 = v123;
            v131 = v16;
            v132 = v200;
            v133 = v202;
            if (v201 != 122) {
                goto lab_0x40fcc8;
            } else {
                goto lab_0x40fda0;
            }
        }
        case 65: {
            goto lab_0x40f090;
        }
        case 66: {
            goto lab_0x40f090;
        }
        case 67: {
            // 0x40fbf3
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f632;
            } else {
                // 0x40fbfd
                *v41 = 0;
                int32_t v207 = *(int32_t *)(*tm + 20); // 0x40fc12
                int32_t v208 = v207 / 100; // 0x40fc23
                int32_t v209 = v208 + 19; // 0x40fc27
                int32_t v210 = v207 + 1900; // 0x40fc3b
                v171 = v123;
                v168 = v115;
                v182 = v209 - (int32_t)(-100 * v208 + v207 < 0 == v209 >= 0 == (v209 != 0));
                v178 = 0;
                v157 = v210 < 0 != ((v210 ^ v207) & (v207 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40f61f;
            }
        }
        case 68: {
            // 0x40f387
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f390
                *v44 = (int64_t)"%m/%d/%y";
                goto lab_0x40f399;
            }
        }
        case 70: {
            // 0x40f489
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f492
                *v44 = (int64_t)"%Y-%m-%d";
                goto lab_0x40f399;
            }
        }
        case 71: {
            goto lab_0x40f4a0;
        }
        case 72: {
            // 0x40f732
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f73c
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 8);
                v138 = 2;
                v148 = v18;
                goto lab_0x40f610;
            }
        }
        case 73: {
            // 0x40f74f
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f759
                v167 = v115;
                v181 = (int64_t)*(int32_t *)v42;
                v138 = 2;
                v148 = v18;
                goto lab_0x40f610;
            }
        }
        case 77: {
            // 0x40f768
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f772
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 4);
                v138 = 2;
                v148 = v18;
                goto lab_0x40f610;
            }
        }
        case 78: {
            // 0x40f785
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                uint32_t v211 = (int32_t)v115; // 0x40f78f
                if (v211 != -1) {
                    int64_t v212 = (int64_t)*v47;
                    int64_t v213 = v212; // 0x410421
                    int64_t v214 = v115; // 0x410421
                    int64_t v215 = v212; // 0x410421
                    if (v211 <= 8) {
                        int64_t v216 = v213;
                        int64_t v217 = (v214 & 0xffffffff) + 1; // 0x410445
                        int64_t v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31); // 0x410450
                        v214 = v217;
                        v215 = v218;
                        while ((int32_t)v217 != 9) {
                            // 0x410440
                            v216 = v218;
                            v217 = (v214 & 0xffffffff) + 1;
                            v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31);
                            v214 = v217;
                            v215 = v218;
                        }
                    }
                    // 0x410457
                    v167 = v115;
                    v181 = v215;
                    v138 = v115 & 0xffffffff;
                    v148 = v18;
                } else {
                    // 0x40f798
                    v167 = 9;
                    v181 = (int64_t)*v47;
                    v138 = 9;
                    v148 = v18;
                }
                goto lab_0x40f610;
            }
        }
        case 80: {
            goto lab_0x40f7b5;
        }
        case 82: {
            // 0x40f724
            *v44 = (int64_t)"%H:%M";
            goto lab_0x40f399;
        }
        case 83: {
            // 0x40fba0
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40fbaa
                v167 = v115;
                v181 = (int64_t)*(int32_t *)*tm;
                v138 = 2;
                v148 = v18;
                goto lab_0x40f610;
            }
        }
        case 84: {
            // 0x40ffe9
            *v44 = (int64_t)"%H:%M:%S";
            goto lab_0x40f399;
        }
        case 85: {
            // 0x40fbbc
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                int64_t v219 = *tm; // 0x40fbc6
                v186 = *(int32_t *)(v219 + 28) + 7 - *(int32_t *)(v219 + 24);
                goto lab_0x40fbdd;
            }
        }
        case 86: {
            goto lab_0x40f4a0;
        }
        case 87: {
            // 0x40fc4e
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                int64_t v220 = *tm; // 0x40fc54
                int32_t v221 = *(int32_t *)(v220 + 24); // 0x40fc5e
                int32_t v222 = v221 + 6; // 0x40fc62
                *v64 = v221;
                int32_t v223 = *(int32_t *)(v220 + 28); // 0x40fc85
                v186 = 1 - v221 + v223 + 7 * ((v222 + (int32_t)(-0x6db6db6d * (int64_t)v222 / 0x100000000) >> 2) - (v222 >> 31));
                goto lab_0x40fbdd;
            }
        }
        case 88: {
            goto lab_0x40f1d0;
        }
        case 89: {
            // 0x40fb4d
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            v130 = v123;
            v131 = v16;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x40f632;
                }
                case 79: {
                    goto lab_0x40fcc8;
                }
                default: {
                    // 0x40fb61
                    *v41 = 0;
                    int32_t v224 = *(int32_t *)(*tm + 20); // 0x40fb71
                    int32_t v225 = v224 + 1900; // 0x40fb74
                    v174 = v123;
                    v164 = v115;
                    v185 = v225;
                    v180 = 0;
                    v159 = v225 < 0 != ((v225 ^ v224) & (v224 ^ -0x80000000)) < 0;
                    v136 = 4;
                    v145 = v18;
                    goto lab_0x40fb90;
                }
            }
        }
        case 90: {
            char v226 = v27; // 0x40f654
            *v43 = v226;
            *v39 = v226 != 0 ? 0 : (char)v16;
            int32_t len = strlen((char *)*str); // 0x40f66f
            uint64_t v227 = (int64_t)len; // 0x40f66f
            int64_t v228 = 0x100000000 * v115 >> 32;
            uint64_t v229 = (int32_t)v115 >= 0 ? v228 : 0; // 0x40f685
            int64_t v230 = v229 <= v227 ? v227 : v229; // 0x40f68d
            int64_t v231 = v3 - v20; // 0x40f691
            v1 = v231;
            *v44 = v230;
            if (v231 <= v230) {
                // break -> 0x40ef33
                break;
            }
            int64_t v232 = v230; // 0x40f6a5
            int64_t v233 = 0; // 0x40f6a5
            if (v23 != 0) {
                char v234 = *v39; // 0x40f6aa
                char v235 = *v43; // 0x40f6b0
                char v236 = v235; // 0x40f6b6
                char v237 = v234; // 0x40f6b6
                int64_t v238 = v23; // 0x40f6b6
                if (v229 > v227) {
                    int64_t v239 = v228 - v227; // 0x40f6bb
                    v1 = v239;
                    int64_t v240 = v239 + v23; // 0x40f6be
                    if (v18 == 48) {
                        // 0x4105de
                        memset((int64_t *)v23, 48, (int32_t)v239);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    } else {
                        // 0x40f6cc
                        *v43 = v235;
                        *v39 = v234;
                        memset((int64_t *)v23, 32, (int32_t)v1);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    }
                }
                int64_t v241 = v238;
                v1 = v227;
                int64_t v242 = *str; // 0x40f6f5
                if (v236 != 0) {
                    // 0x41051c
                    function_40ede0(v241, v242, v227);
                } else {
                    // 0x40f706
                    if (v237 == 0) {
                        // 0x410512
                        memcpy((int64_t *)v241, (int64_t *)v242, len);
                    } else {
                        // 0x40f70f
                        function_40ee30(v241, v242, v227);
                    }
                }
                // 0x40f714
                v232 = *v44;
                v233 = v241 + v227;
            }
            // 0x40f717
            v8 = v12;
            v9 = v13;
            v25 = v123;
            v21 = v232 + v20;
            v24 = v233;
            goto lab_0x40ef0e;
        }
        case 97: {
            goto lab_0x40f090;
        }
        case 98: {
            goto lab_0x40fcb1;
        }
        case 99: {
            goto lab_0x40f1d0;
        }
        case 100: {
            // 0x40fe8d
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40fe97
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 12);
                v138 = 2;
                v148 = v18;
                goto lab_0x40f610;
            }
        }
        case 101: {
            // 0x40feaa
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40feb4
                v183 = *tm + 12;
                goto lab_0x40f7e1;
            }
        }
        case 103: {
            goto lab_0x40f4a0;
        }
        case 104: {
            goto lab_0x40fcb1;
        }
        case 106: {
            // 0x40fec1
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40fecb
                *v41 = 0;
                int32_t v243 = *(int32_t *)(*tm + 28); // 0x40fedb
                int32_t v244 = v243 + 1; // 0x40fede
                v171 = v123;
                v168 = v115;
                v182 = v244;
                v178 = 0;
                v157 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v139 = 3;
                v149 = v18;
                goto lab_0x40f61f;
            }
        }
        case 107: {
            // 0x40f7cf
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f7d9
                v183 = *tm + 8;
                goto lab_0x40f7e1;
            }
        }
        case 108: {
            // 0x40f806
            v183 = v42;
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                goto lab_0x40f7e1;
            }
        }
        case 109: {
            // 0x40f816
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40f820
                *v41 = 0;
                int32_t v245 = *(int32_t *)(*tm + 16); // 0x40f830
                int32_t v246 = v245 + 1; // 0x40f833
                v171 = v123;
                v168 = v115;
                v182 = v246;
                v178 = 0;
                v157 = v246 < 0 != (v246 & (v245 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40f61f;
            }
        }
        case 110: {
            int32_t v247 = v115; // 0x40f844
            int64_t v248 = 0x100000000 * v115 >> 32;
            int64_t v249 = v247 >= 0 ? v248 : 0; // 0x40f855
            int64_t v250 = v249 == 0 ? 1 : v249; // 0x40f85b
            if (v3 - v20 <= v250) {
                // break -> 0x40ef33
                break;
            }
            // 0x40f86f
            v155 = v250;
            v156 = 0;
            if (v23 != 0) {
                int64_t v251 = v23; // 0x40f877
                if (v247 >= 2) {
                    int64_t v252 = v248 - 1; // 0x40f87c
                    v1 = v252;
                    int64_t v253 = v252 + v23; // 0x40f880
                    int64_t * v254 = (int64_t *)v23;
                    int32_t v255 = v252;
                    if (v18 == 48) {
                        // 0x41056b
                        memset(v254, 48, v255);
                        v251 = v253;
                    } else {
                        // 0x40f88e
                        memset(v254, 32, v255);
                        v251 = v253;
                    }
                }
                // 0x40f89e
                *(char *)v251 = 10;
                v155 = v250;
                v156 = v251 + 1;
            }
            goto lab_0x40f8a6;
        }
        case 112: {
            // 0x40ffe1
            v129 = 0;
            goto lab_0x40f7b5;
        }
        case 113: {
            // 0x40f8b1
            v172 = v123;
            v169 = v115;
            v140 = 1;
            v150 = v18;
            if ((int32_t)v122 == 79) {
                goto lab_0x40f632;
            } else {
                // 0x40f8c9
                *v41 = 0;
                v173 = v123;
                v163 = v115;
                v184 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v179 = 0;
                v158 = 0;
                v141 = 1;
                v151 = v18;
                goto lab_0x40f8e0;
            }
        }
        case 114: {
            goto lab_0x40f1dd;
        }
        case 115: {
            int64_t v256 = *tm; // 0x40f1fd
            *v39 = (char)v16;
            int128_t v257 = __asm_movdqu(*(int128_t *)(v256 + 32)); // 0x40f21f
            int128_t v258 = __asm_movdqu(*(int128_t *)v256); // 0x40f224
            int128_t v259 = __asm_movdqu(*(int128_t *)(v256 + 16)); // 0x40f228
            *(int128_t *)str2 = (int128_t)__asm_movaps_9(v258);
            *(int128_t *)(v49 + 160) = (int128_t)__asm_movaps_9(v259);
            *(int128_t *)v63 = (int128_t)__asm_movaps_9(v257);
            *(int128_t *)(v49 + 176) = (int128_t)__asm_movaps_9(v257);
            *(int64_t *)(v49 + 192) = *(int64_t *)(v256 + 48);
            int64_t v260 = function_4177a0(*v65, str2, v1, v124); // 0x40f256
            int64_t v261 = v260;
            int64_t v262 = v261 >> 63; // 0x40f288
            int64_t v263 = (v261 >> 63 & -10) + v261; // 0x40f295
            int64_t v264 = (v260 < 0 ? -v263 : v263) + 48; // 0x40f2a8
            v1 = v264 & 0xffffffff;
            int64_t v265 = v40 - 1; // 0x40f2ab
            *(char *)v265 = (char)v264;
            int64_t v266 = v265; // 0x40f2b6
            while (v262 != 0) {
                // 0x40f270
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & -10) + v261;
                v264 = (v260 < 0 ? -v263 : v263) + 48;
                v1 = v264 & 0xffffffff;
                v265 = v266 - 1;
                *(char *)v265 = (char)v264;
                v266 = v265;
            }
            int64_t v267 = (int64_t)*v39; // 0x40f25b
            int32_t v268 = v115; // 0x40f2b8
            int64_t v269 = v268 >= 0 == (v268 != 0) ? v115 & 0xffffffff : 1; // 0x40f2c0
            v170 = v123;
            v166 = v115;
            v135 = v269;
            v144 = v267;
            v147 = v18;
            v154 = v265;
            v175 = v123;
            v165 = v115;
            v137 = v269;
            v143 = v267;
            v146 = v18;
            v153 = v265;
            if (v260 < 0) {
                goto lab_0x410028;
            } else {
                goto lab_0x40f2cd;
            }
        }
        case 116: {
            int32_t v270 = v115; // 0x40faa4
            int64_t v271 = 0x100000000 * v115 >> 32;
            int64_t v272 = v270 >= 0 ? v271 : 0; // 0x40fab5
            int64_t v273 = v272 == 0 ? 1 : v272; // 0x40fabb
            if (v3 - v20 <= v273) {
                // break -> 0x40ef33
                break;
            }
            // 0x40facf
            v155 = v273;
            v156 = 0;
            if (v23 != 0) {
                int64_t v274 = v23; // 0x40fadb
                if (v270 >= 2) {
                    int64_t v275 = v271 - 1; // 0x40fae0
                    v1 = v275;
                    int64_t v276 = v275 + v23; // 0x40fae4
                    int64_t * v277 = (int64_t *)v23;
                    int32_t v278 = v275;
                    if (v18 == 48) {
                        // 0x410580
                        memset(v277, 48, v278);
                        v274 = v276;
                    } else {
                        // 0x40faf2
                        memset(v277, 32, v278);
                        v274 = v276;
                    }
                }
                // 0x40fb02
                *(char *)v274 = 9;
                v155 = v273;
                v156 = v274 + 1;
            }
            goto lab_0x40f8a6;
        }
        case 117: {
            int32_t v279 = *(int32_t *)(*tm + 24); // 0x40fb1f
            int32_t v280 = v279 + 6; // 0x40fb22
            *v64 = v279;
            v167 = v115;
            v181 = v279 + 7 + -7 * ((v280 + (int32_t)(-0x6db6db6d * (int64_t)v280 / 0x100000000) >> 2) - (v280 >> 31));
            v138 = 1;
            v148 = v18;
            goto lab_0x40f610;
        }
        case 119: {
            // 0x40fc98
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40fcc8;
            } else {
                // 0x40fc9e
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 24);
                v138 = 1;
                v148 = v18;
                goto lab_0x40f610;
            }
        }
        case 120: {
            goto lab_0x40f1d0;
        }
        case 121: {
            // 0x40ff70
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f632;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x40ff8a
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x40ffa2
                v167 = v115;
                v181 = v283;
                v138 = 2;
                v148 = v18;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x40ffb1
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x40ffb7
                    v167 = v115;
                    v181 = v285 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
                goto lab_0x40f610;
            }
        }
        case 122: {
            goto lab_0x40fda0;
        }
        default: {
            goto lab_0x40fcc8;
        }
    }
  lab_0x40ef0e:
    // 0x40ef0e
    v5 = v24;
    result = v21;
    int64_t v286 = v25 + 1; // 0x40ef0e
    char v287 = *(char *)v286; // 0x40ef0e
    v6 = v8;
    v7 = v9;
    v30 = v287;
    v33 = v286;
    v19 = result;
    v22 = v5;
    if (v287 == 0) {
        // 0x40ef1b
        goto lab_0x40ef1b_2;
    }
    goto lab_0x40eeea;
  lab_0x40f090:
    // 0x40f090
    v130 = v123;
    v131 = v16;
    int64_t v288; // 0x40ee80
    if ((int32_t)v122 != 0) {
        goto lab_0x40fcc8;
    } else {
        // 0x40f099
        v288 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff;
        goto lab_0x40f0a0;
    }
  lab_0x40f4a0:
    // 0x40f4a0
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 69) {
        goto lab_0x40fcc8;
    } else {
        int64_t v289 = *tm; // 0x40f4aa
        int32_t v290 = *(int32_t *)(v289 + 20); // 0x40f4af
        uint32_t v291 = *(int32_t *)(v289 + 28); // 0x40f4b2
        uint32_t v292 = *(int32_t *)(v289 + 24); // 0x40f4b6
        *v64 = v290;
        int32_t v293 = v290 - 100 + (v290 >> 31 & 400); // 0x40f4cd
        int32_t v294 = v291 - v292; // 0x40f4d4
        int32_t v295 = v294 + 382; // 0x40f4d7
        int32_t v296 = v291 - 379 - v294 + 7 * ((v295 + (int32_t)(-0x6db6db6d * (int64_t)v295 / 0x100000000) >> 2) - (v295 >> 31)); // 0x40f4fe
        int32_t v297; // 0x40ee80
        int32_t v298; // 0x40f589
        if (v296 < 0) {
            // 0x410397
            v1 = 365;
            int64_t v299 = 365; // 0x4103a3
            if ((v293 + 3) % 4 == 0) {
                int32_t v300 = v293 - 1;
                v1 = 366;
                v299 = 366;
                if (v300 % 100 - v300 == 1 - v293) {
                    uint32_t v301 = v300 % 400;
                    int64_t v302 = v301; // 0x4103ce
                    int64_t v303 = v302 + 366 + (v302 ^ 0xffffffff) + (int64_t)(v301 == 0) & 0xffffffff; // 0x4103d7
                    v1 = v303;
                    v299 = v303;
                }
            }
            int64_t v304 = v299; // 0x4103dd
            int64_t v305; // 0x40f4b2
            int64_t v306 = v304 + v305; // 0x4103dd
            int64_t v307; // 0x40f4b6
            int64_t v308 = v306 - v307 + 382; // 0x4103f1
            v297 = (int32_t)(v306 - v308) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v308 >> 32) / 0x100000000 + v308) >> 2) - ((int32_t)v308 >> 31));
        } else {
            int64_t v309 = 365; // 0x40f515
            if (v293 % 4 == 0) {
                // 0x40f517
                v309 = 366;
                if (v293 % 100 == 0) {
                    // 0x40f53c
                    v309 = v293 == 0 ? 366 : 365;
                }
            }
            int64_t v310 = (int64_t)v291 - v309; // 0x40f560
            int64_t v311 = v310 - (int64_t)v292 + 382; // 0x40f567
            v298 = (int32_t)(v310 - v311) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v311 >> 32) / 0x100000000 + v311) >> 2) - ((int32_t)v311 >> 31));
            v297 = v298 >= 0 ? v298 : v296;
        }
        int64_t v312 = (v298 >> 31) + 1;
        if (v125 == 71) {
            uint32_t v313 = *v64; // 0x410485
            *v41 = 0;
            int32_t v314 = -1900 - (int32_t)v312; // 0x410499
            int32_t v315 = v313 - v314; // 0x41049c
            v171 = v123;
            v168 = v115;
            v182 = v312 + 1900 + (int64_t)v313 & 0xffffffff;
            v178 = 0;
            v157 = v315 < 0 != ((v315 ^ v313) & (v313 ^ v314)) < 0;
            v139 = 4;
            v149 = v18;
            goto lab_0x40f61f;
        } else {
            if (v125 != 103) {
                int32_t v316 = v297;
                int32_t v317 = v316 < 0 ? 2 : 1; // 0x41047a
                v167 = v115;
                v181 = v317 + (v316 + (int32_t)(-0x6db6db6d * (int64_t)v316 / 0x100000000) >> 2);
                v138 = 2;
                v148 = v18;
            } else {
                int32_t v318 = *v64; // 0x40f5af
                int32_t v319 = v312; // 0x40f5da
                int32_t v320 = (v318 % 100 + v319) % 100;
                int64_t v321 = v320; // 0x40f5f0
                v167 = v115;
                v181 = v321;
                v138 = 2;
                v148 = v18;
                if (v320 < 0) {
                    int32_t v322 = -1900 - v319; // 0x40f600
                    int32_t v323 = v318 - v322; // 0x40f605
                    int64_t v324 = v323 < 0 == ((v323 ^ v318) & (v318 ^ v322)) < 0 ? v321 + 100 : -v321; // 0x40f608
                    v167 = v115;
                    v181 = v324 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
            }
            goto lab_0x40f610;
        }
    }
  lab_0x40f7b5:
    // 0x40f7b5
    v126 = 112;
    v127 = (char)v27 != 0 ? 0 : v16;
    v128 = ((char)v27 != 0 ? v27 : v129) & 0xffffffff;
    goto lab_0x40f1dd;
  lab_0x40f1d0:
    // 0x40f1d0
    v126 = v124;
    v127 = v16;
    v128 = 0;
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 79) {
        goto lab_0x40fcc8;
    } else {
        goto lab_0x40f1dd;
    }
  lab_0x40fcb1:;
    int64_t v660 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff; // 0x40fcb4
    v288 = v660;
    v130 = v123;
    v131 = v660;
    if ((int32_t)v122 == 0) {
        goto lab_0x40f0a0;
    } else {
        goto lab_0x40fcc8;
    }
  lab_0x40f1dd:;
    int64_t v325 = v128;
    int64_t v326 = v127;
    int64_t v327 = v126;
    *v45 = 0x2520;
    int64_t v328 = v327; // 0x40f1ea
    int64_t v329 = v123; // 0x40f1ea
    int64_t v330 = v115; // 0x40f1ea
    int64_t v331 = 0; // 0x40f1ea
    int64_t v332 = v326; // 0x40f1ea
    int64_t v333 = v18; // 0x40f1ea
    int64_t v334 = v325; // 0x40f1ea
    int64_t v335; // 0x40ee80
    int64_t v336; // 0x40ee80
    int64_t v337; // 0x40ee80
    int64_t v338; // 0x40ee80
    int64_t v339; // 0x40ee80
    int64_t v340; // 0x40ee80
    int64_t v341; // 0x40ee80
    int64_t v342; // 0x40ee80
    if ((int32_t)v122 != 0) {
        goto lab_0x40f63f;
    } else {
        // 0x40f1f0
        v340 = *v46;
        v342 = v327;
        v341 = v115;
        v338 = v123;
        v339 = v122;
        v335 = v326;
        v336 = v18;
        v337 = v325;
        goto lab_0x40f0c0;
    }
  lab_0x40fda0:;
    int64_t v343 = v132;
    int64_t v344 = *tm; // 0x40fda0
    v8 = v12;
    v9 = v13;
    v25 = v343;
    v21 = v20;
    v24 = v23;
    int64_t v345; // 0x40ee80
    uint32_t v346; // 0x40fdee
    uint32_t v347; // 0x40fe23
    int32_t v348; // 0x40fe27
    if (*(int32_t *)(v344 + 32) < 0) {
        goto lab_0x40ef0e;
    } else {
        int64_t v349 = *(int64_t *)(v344 + 40); // 0x40fdb0
        int32_t v350 = v349; // 0x40fdba
        int64_t v351 = 1; // 0x40fdbc
        if (v350 >= 0) {
            // 0x40fdbe
            v351 = 0;
            if (v350 == 0) {
                // 0x40fdc6
                v351 = *(char *)*str == 45;
            }
        }
        // 0x40fdd2
        v345 = v351;
        int64_t v352 = 0x100000000 * v349 >> 32; // 0x40fdde
        int32_t v353 = v350 >> 31; // 0x40fde2
        *v48 = v353;
        v346 = ((int32_t)(-0x6e5d4c3b * v352 / 0x100000000) + v350 >> 11) - v353;
        *v64 = v346;
        int32_t v354 = ((int32_t)(-0x77777777 * v352 / 0x100000000 + v349) >> 5) - *v48; // 0x40fe00
        v347 = -60 * ((v354 + (int32_t)(-0x77777777 * (int64_t)v354 / 0x100000000) >> 5) - (v354 >> 31)) + v354;
        v348 = -60 * v354 + v350;
        v177 = v343;
        switch (v133) {
            case 1: {
                goto lab_0x4104f6;
            }
            case 0: {
                // 0x410526
                *v41 = 1;
                v171 = v343;
                v168 = v115;
                v182 = v347 + 100 * v346;
                v178 = 0;
                v157 = v345;
                v139 = 5;
                v149 = v18;
                goto lab_0x40f61f;
            }
            case 2: {
                goto lab_0x4104d2;
            }
            case 3: {
                if (v348 != 0) {
                    goto lab_0x4104d2;
                } else {
                    if (v347 != 0) {
                        goto lab_0x4104f6;
                    } else {
                        // 0x410547
                        *v41 = 1;
                        v171 = v343;
                        v168 = v115;
                        v182 = v346;
                        v178 = v347;
                        v157 = v345;
                        v139 = 3;
                        v149 = v18;
                        goto lab_0x40f61f;
                    }
                }
            }
            default: {
                goto lab_0x40fe57;
            }
        }
    }
  lab_0x40fcc8:;
    int64_t v355 = v130 + 1; // 0x40fccc
    v1 = v355 & 0xffffffff;
    int64_t v356 = v130 - 1;
    int64_t v357 = v356; // 0x40fcde
    while (*(char *)v356 != 37) {
        // 0x40fccf
        v356 = v357 - 1;
        v357 = v356;
    }
    int64_t v358 = 0x100000000 * (v355 - v356) >> 32; // 0x40fce9
    int64_t v359 = v3 - v20; // 0x40fcef
    v1 = v359;
    int64_t v360 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x40fcf7
    v134 = v359;
    v162 = v360;
    v176 = v358;
    v160 = v130;
    v161 = v356;
    v142 = v131;
    v152 = v358 >= v360 ? v358 : v360;
    goto lab_0x40fd03;
  lab_0x40fd03:
    // 0x40fd03
    if (v134 <= v152) {
        // break -> 0x40ef33
        goto lab_0x40ef33_11;
    }
    int64_t v361 = v160;
    int64_t v362 = v361; // 0x40fd0f
    int64_t v363 = 0; // 0x40fd0f
    if (v23 != 0) {
        int64_t v364 = v142;
        int64_t v365 = v161;
        int64_t v366 = v176;
        int64_t v367 = v366; // 0x40fd18
        int64_t v368 = v361; // 0x40fd18
        int64_t v369 = v365; // 0x40fd18
        int64_t v370 = v364; // 0x40fd18
        int64_t v371 = v23; // 0x40fd18
        if (v366 < v162) {
            // 0x40fd1a
            *v54 = v366;
            int64_t v372 = (0x100000000 * v115 >> 32) - v366; // 0x40fd22
            v1 = v372;
            *v55 = v361;
            int64_t v373 = v372 + v23; // 0x40fd2a
            *v53 = v365;
            *v41 = (char)v364;
            int64_t * v374 = (int64_t *)v23;
            int32_t v375 = v1;
            if (v18 == 48) {
                // 0x4102a4
                memset(v374, 48, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            } else {
                // 0x40fd42
                memset(v374, 32, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            }
        }
        int64_t v376 = v371;
        int64_t v377 = v369;
        *v53 = v368;
        v1 = v367;
        *v44 = v367;
        if ((char)v370 == 0) {
            // 0x4100ee
            memcpy((int64_t *)v376, (int64_t *)v377, (int32_t)v1);
        } else {
            // 0x40fd83
            function_40ee30(v376, v377, v1);
        }
        // 0x40fd92
        v362 = *v53;
        v363 = *v44 + v376;
    }
    // 0x40fd95
    v8 = v12;
    v9 = v13;
    v25 = v362;
    v21 = v152 + v20;
    v24 = v363;
    goto lab_0x40ef0e;
  lab_0x40fe57:;
    int64_t v378 = v177;
    int64_t v379 = v3 - v20; // 0x40fe60
    v1 = v379;
    v130 = v378;
    v131 = v16;
    if (*(char *)v378 != 37) {
        goto lab_0x40fcc8;
    } else {
        int64_t v380 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x40fe68
        v134 = v379;
        v162 = v380;
        v176 = 1;
        v160 = v378;
        v161 = v378;
        v142 = v16;
        v152 = v380 != 0 ? v380 : 1;
        goto lab_0x40fd03;
    }
  lab_0x40f632:
    // 0x40f632
    *v45 = 0x2520;
    v328 = v124;
    v329 = v172;
    v330 = v169;
    v331 = v140;
    v332 = v16;
    v333 = v150;
    v334 = 0;
    goto lab_0x40f63f;
  lab_0x40f399:
    // 0x40f399
    *v50 = (int64_t)*v47;
    *v51 = *v65;
    int64_t v643 = *v44; // 0x40f3c2
    v1 = v643;
    uint64_t v644 = function_40ee80(0, -1, v643, *tm, v16, *v52); // 0x40f3c7
    int64_t v645 = 0x100000000 * v115 >> 32;
    uint64_t v646 = (int32_t)v115 >= 0 ? v645 : 0; // 0x40f3e0
    int64_t v647 = v644 >= v646 ? v644 : v646; // 0x40f3e8
    int64_t v648 = v3 - v20; // 0x40f3ec
    *v53 = v647;
    if (v648 <= v647) {
        // break -> 0x40ef33
        goto lab_0x40ef33_11;
    }
    int64_t v649 = v647; // 0x40f400
    int64_t v650 = 0; // 0x40f400
    if (v23 != 0) {
        int64_t v651 = v644; // 0x40f405
        int64_t v652 = v648; // 0x40f405
        int64_t v653 = v23; // 0x40f405
        if (v644 < v646) {
            // 0x40f407
            *v54 = v644;
            int64_t v654 = v645 - v644; // 0x40f40f
            v1 = v654;
            *v55 = v648;
            int64_t v655 = v654 + v23; // 0x40f417
            int64_t * v656 = (int64_t *)v23;
            int32_t v657 = v1;
            if (v18 == 48) {
                // 0x410378
                memset(v656, 48, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            } else {
                // 0x40f425
                memset(v656, 32, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            }
        }
        // 0x40f43f
        *v55 = v651;
        *v50 = (int64_t)*v47;
        *v51 = *v65;
        int64_t v658 = *v44; // 0x40f466
        v1 = v658;
        function_40ee80((int32_t)v653, v652, v658, *tm, v16, *v52);
        v649 = *v53;
        v650 = *v55 + v653;
    }
    // 0x40f47c
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v649 + v20;
    v24 = v650;
    goto lab_0x40ef0e;
  lab_0x40f0a0:
    // 0x40f0a0
    *v45 = 0x2520;
    v340 = *v46;
    v342 = v124;
    v341 = v115;
    v338 = v123;
    v339 = 0;
    v335 = v288;
    v336 = v18;
    v337 = 0;
    goto lab_0x40f0c0;
  lab_0x40f7e1:;
    int64_t v659 = (int64_t)*(int32_t *)v183;
    v167 = v115;
    v181 = v659;
    v138 = 2;
    v148 = v18;
    switch ((int32_t)v18) {
        case 48: {
            goto lab_0x40f610;
        }
        case 45: {
            goto lab_0x40f610;
        }
        default: {
            // 0x40f7fb
            v167 = v115;
            v181 = v659;
            v138 = 2;
            v148 = 95;
            goto lab_0x40f610;
        }
    }
  lab_0x40f8a6:
    // 0x40f8a6
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v155 + v20;
    v24 = v156;
    goto lab_0x40ef0e;
  lab_0x40f63f:
    // 0x40f63f
    *(char *)(v49 + 114) = (char)v122;
    v340 = v49 + 115;
    v342 = v328;
    v341 = v330;
    v338 = v329;
    v339 = v331 & 0xffffffff;
    v335 = v332;
    v336 = v333;
    v337 = v334;
    goto lab_0x40f0c0;
  lab_0x410028:;
    int64_t v630 = v153;
    int64_t v631 = v143;
    int64_t v632 = v137;
    int64_t v633 = v165;
    int64_t v634 = v175;
    *v41 = 45;
    char v436 = 45; // 0x410036
    int64_t v437 = v634; // 0x410036
    int64_t v438 = v633; // 0x410036
    int64_t v439 = v632; // 0x410036
    int64_t v440 = v631; // 0x410036
    int64_t v441 = v146; // 0x410036
    int64_t v442 = v630; // 0x410036
    int32_t v429; // 0x40ee80
    int64_t v433; // 0x40ee80
    int64_t v434; // 0x40ee80
    int64_t v435; // 0x40ee80
    int64_t v432; // 0x40ee80
    int64_t v431; // 0x40ee80
    int64_t v430; // 0x40ee80
    if ((int32_t)v146 != 45) {
        goto lab_0x40f970;
    } else {
        // 0x410028
        v429 = v633;
        v430 = 45;
        v431 = v634;
        v432 = v633;
        v433 = v632;
        v434 = v631;
        v435 = v630;
        goto lab_0x41003c;
    }
  lab_0x40f2cd:;
    int64_t v524 = v135;
    int64_t v523 = v166;
    int64_t v522 = v40 - v154; // 0x40f2d9
    char v505; // 0x40ee80
    int64_t v510; // 0x40ee80
    int64_t v511; // 0x40ee80
    int64_t v512; // 0x40ee80
    int64_t v509; // 0x40ee80
    int64_t v506; // 0x40ee80
    int64_t v508; // 0x40ee80
    int64_t v507; // 0x40ee80
    if ((int32_t)v147 == 45) {
        goto lab_0x40f2f4;
    } else {
        int32_t v635 = v524 - v522; // 0x40f2eb
        if (v635 >= 0 == (v635 != 0)) {
            int64_t v636; // 0x40f2dc
            int32_t v637; // 0x40f2df
            if (v637 == 95) {
                // 0x4101ee
                *v41 = 0;
                v505 = 0;
                v506 = v636;
                int64_t v638; // 0x40ee80
                v507 = v638;
                v508 = v523;
                int64_t v639; // 0x40f2e8
                v509 = v639;
                v510 = v524;
                int64_t v640; // 0x40ee80
                v511 = v640;
                int64_t v641; // 0x40ee80
                v512 = v641;
                goto lab_0x4101f3;
            } else {
                int64_t v642 = 0x100000000 * v524 >> 32; // 0x4104bb
                v1 = v642;
                if (v642 >= v636) {
                    // break -> 0x40ef33
                    goto lab_0x40ef33_11;
                }
                // 0x4104c7
                goto lab_0x40fa45;
            }
        } else {
            goto lab_0x40f2f4;
        }
    }
  lab_0x40f610:
    // 0x40f610
    *v41 = 0;
    v171 = v123;
    v168 = v167;
    v182 = v181;
    v178 = 0;
    v157 = 0;
    v139 = v138;
    v149 = v148;
    goto lab_0x40f61f;
  lab_0x40f61f:;
    int64_t v596 = v149;
    int64_t v597 = v139;
    int64_t v598 = v157;
    int64_t v599 = v178;
    int64_t v600 = v182;
    int64_t v601 = v168;
    int64_t v602 = v171;
    v174 = v602;
    v164 = v601;
    v185 = v600;
    v180 = v599;
    v159 = v598;
    v136 = v597;
    v145 = v596;
    int64_t v603; // 0x40ee80
    int64_t v604; // 0x40ee80
    int64_t v605; // 0x40ee80
    int64_t v606; // 0x40ee80
    int64_t v607; // 0x40ee80
    int64_t v608; // 0x40ee80
    int64_t v609; // 0x40ee80
    if ((int32_t)v122 != 79) {
        goto lab_0x40fb90;
    } else {
        // 0x40f629
        v172 = v602;
        v169 = v601;
        v140 = v597;
        v150 = v596;
        v607 = v602;
        v606 = v601;
        v609 = v600;
        v608 = v599;
        v605 = v598;
        v603 = v597;
        v604 = v596;
        if ((char)v598 != 0) {
            goto lab_0x40fb99;
        } else {
            goto lab_0x40f632;
        }
    }
  lab_0x40fbdd:;
    int32_t v610 = v186;
    int64_t v611 = -0x6db6db6d * (int64_t)v610 / 0x100000000;
    v1 = v611;
    v167 = v115;
    v181 = (v610 + (int32_t)v611 >> 2) - (v610 >> 31);
    v138 = 2;
    v148 = v18;
    goto lab_0x40f610;
  lab_0x40fb90:
    // 0x40fb90
    v173 = v174;
    v163 = v164;
    v184 = v185;
    v179 = v180;
    v158 = v159;
    v141 = v136;
    v151 = v145;
    v607 = v174;
    v606 = v164;
    v609 = v185;
    v608 = v180;
    v605 = v159;
    v603 = v136;
    v604 = v145;
    if ((char)v159 == 0) {
        goto lab_0x40f8e0;
    } else {
        goto lab_0x40fb99;
    }
  lab_0x40f0c0:;
    int64_t v381 = v337;
    int64_t v382 = v336;
    int64_t v383 = v341;
    *(char *)v340 = (char)v342;
    v1 = format;
    *(char *)(v340 + 1) = 0;
    *v44 = v338;
    *v56 = (int32_t)v339;
    *v39 = (char)v335;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x40f0ec
    int64_t v384 = *v44; // 0x40f0f1
    v8 = v12;
    v9 = v13;
    v25 = v384;
    v21 = v20;
    v24 = v23;
    int64_t v385; // 0x40ee80
    int64_t v386; // 0x40ee80
    int64_t v387; // 0x40ee80
    int64_t v388; // 0x40ee80
    int64_t v389; // 0x40ee80
    int64_t v390; // 0x40ee80
    int64_t v391; // 0x40ee80
    int64_t v392; // 0x40ee80
    int64_t v393; // 0x40ee80
    int64_t v394; // 0x40ee80
    int64_t v395; // 0x40ee80
    int64_t v396; // 0x40ee80
    if (copied_chars == 0) {
        goto lab_0x40ef0e;
    } else {
        uint64_t v397 = (int64_t)copied_chars - 1; // 0x40f0ff
        int64_t v398 = 0x100000000 * v383 >> 32;
        uint64_t v399 = (int32_t)v383 >= 0 ? v398 : 0; // 0x40f111
        int64_t v400 = v397 >= v399 ? v397 : v399; // 0x40f119
        int64_t v401 = v3 - v20; // 0x40f11d
        v1 = v401;
        if (v401 <= v400) {
            // break -> 0x40ef33
            goto lab_0x40ef33_11;
        }
        // 0x40f129
        v392 = v400;
        v391 = v384;
        v388 = v20;
        v390 = 0;
        if (v23 == 0) {
            goto lab_0x40f1c6;
        } else {
            char v402 = *v39; // 0x40f137
            int64_t v403 = v397; // 0x40f140
            int64_t v404 = v384; // 0x40f140
            char v405 = v402; // 0x40f140
            int64_t v406 = v23; // 0x40f140
            if (v397 < v399 == *v56 == 0) {
                // 0x40f147
                *v55 = v397;
                int64_t v407 = v398 - v397; // 0x40f14f
                v1 = v407;
                *v53 = v384;
                int64_t v408 = v407 + v23; // 0x40f157
                *v41 = v402;
                int64_t * v409 = (int64_t *)v23;
                int32_t v410 = v1;
                if ((int32_t)v382 == 48) {
                    // 0x410116
                    memset(v409, 48, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                } else {
                    // 0x40f16a
                    memset(v409, 32, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                }
            }
            int64_t v411 = v406;
            *v53 = v404;
            v1 = v403;
            *v44 = v403;
            v393 = v400;
            v396 = v57;
            v395 = v411;
            v385 = v405;
            v386 = v20;
            if ((char)v381 != 0) {
                // 0x410102
                function_40ede0(v411, v57, v1);
                v394 = v400;
                v387 = v20;
                v389 = v411;
                goto lab_0x40f1c3;
            } else {
                goto lab_0x40f1ab;
            }
        }
    }
  lab_0x40f8e0:;
    int64_t v412 = v151;
    int64_t v413 = v141;
    int64_t v414 = v163;
    int64_t v415 = v173;
    *v39 = (char)v158;
    int64_t v416 = v184; // 0x40f8f3
    int64_t v417 = v40 - 1;
    int64_t v418 = v417; // 0x40f900
    if (v179 % 2 != 0) {
        // 0x40f902
        *(char *)v417 = 58;
        v418 = v40 - 2;
    }
    int64_t v419 = v418;
    uint32_t v420 = (int32_t)v179 >> 1; // 0x40f915
    int64_t v421 = 0xcccccccd * v416 / 0x800000000; // 0x40f917
    v1 = v421;
    *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    while (v416 < 10 != (v420 == 0)) {
        // 0x40f93a
        v416 = v1 & 0xffffffff;
        int64_t v422 = v420; // 0x40f93c
        int64_t v423 = v419;
        v417 = v423 - 1;
        v418 = v417;
        if (v422 % 2 != 0) {
            // 0x40f902
            *(char *)v417 = 58;
            v418 = v423 - 2;
        }
        // 0x40f910
        v419 = v418;
        v420 = (int32_t)v422 >> 1;
        v421 = 0xcccccccd * v416 / 0x800000000;
        v1 = v421;
        *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    }
    int32_t v424 = v413; // 0x40f946
    int32_t v425 = v414;
    int32_t v426 = v424 - v425; // 0x40f946
    int64_t v427 = v426 < 0 == ((v426 ^ v424) & (int32_t)(v413 ^ v414)) < 0 ? v413 : v414;
    int64_t v428 = v427 & 0xffffffff; // 0x40f949
    v175 = v415;
    v165 = v414;
    v137 = v428;
    v143 = v16;
    v146 = v412;
    v153 = v419;
    if (*v39 != 0) {
        goto lab_0x410028;
    } else {
        // 0x40f956
        v170 = v415;
        v166 = v414;
        v135 = v428;
        v144 = v16;
        v147 = v412;
        v154 = v419;
        if (*v41 == 0) {
            goto lab_0x40f2cd;
        } else {
            // 0x40f961
            v429 = v425;
            v430 = 43;
            v431 = v415;
            v432 = v414;
            v433 = v428;
            v434 = v16;
            v435 = v419;
            if ((int32_t)v412 == 45) {
                goto lab_0x41003c;
            } else {
                // 0x40f96b
                *v41 = 43;
                v436 = 43;
                v437 = v415;
                v438 = v414;
                v439 = v428;
                v440 = v16;
                v441 = v412;
                v442 = v419;
                goto lab_0x40f970;
            }
        }
    }
  lab_0x40f970:;
    int64_t v443 = v442;
    int64_t v444 = v441;
    int64_t v445 = v440;
    int64_t v446 = v439;
    int64_t v447 = v438;
    int64_t v448 = v437;
    int64_t v449 = v40 - v443; // 0x40f980
    int64_t v450 = (v449 ^ 0xffffffff) + v446; // 0x40f983
    uint64_t v451 = v3 - v20; // 0x40f986
    int64_t v452; // 0x40ee80
    int64_t v453; // 0x40ee80
    int64_t v454; // 0x40ee80
    int64_t v455; // 0x40ee80
    int64_t v456; // 0x40ee80
    int64_t v457; // 0x40ee80
    int64_t v458; // 0x40ee80
    int64_t v459; // 0x40ee80
    int64_t v460; // 0x40ee80
    int64_t v461; // 0x40ee80
    int64_t v462; // 0x40ee80
    int64_t v463; // 0x40ee80
    int64_t v464; // 0x40ee80
    int64_t v465; // 0x40ee80
    int64_t v466; // 0x40ee80
    int64_t v467; // 0x40ee80
    int64_t v468; // 0x40ee80
    int64_t v469; // 0x40ee80
    int64_t v470; // 0x40ee80
    int64_t v471; // 0x40ee80
    int64_t v472; // 0x40ee80
    int64_t v473; // 0x40ee80
    int64_t v474; // 0x40ee80
    int64_t v475; // 0x40ee80
    int64_t v476; // 0x40ee80
    int64_t v477; // 0x40f9ca
    if ((int32_t)v450 < 1) {
        int64_t v478 = 0x100000000 * v447 >> 32;
        int64_t v479 = (int32_t)v447 >= 0 ? v478 : 0; // 0x41014d
        int64_t v480 = v479 != 0 ? v479 : 1; // 0x410153
        if (v480 >= v451) {
            // break -> 0x40ef33
            goto lab_0x40ef33_11;
        }
        int64_t v481 = v449; // 0x410163
        int64_t v482 = v480; // 0x410163
        int64_t v483 = v479; // 0x410163
        int64_t v484 = v446; // 0x410163
        int64_t v485 = v445; // 0x410163
        int64_t v486 = 0; // 0x410163
        if (v23 != 0) {
            int32_t v487 = v446; // 0x410165
            int64_t v488 = v449; // 0x410168
            int64_t v489 = v480; // 0x410168
            int64_t v490 = v479; // 0x410168
            int64_t v491 = v446; // 0x410168
            int64_t v492 = v445; // 0x410168
            int64_t v493 = v23; // 0x410168
            if (v487 == 0 && v479 >= 2) {
                // 0x410170
                *v61 = v449;
                int64_t v494 = v478 - 1; // 0x410178
                v1 = v494;
                *v62 = v480;
                *v59 = v479;
                *v53 = v494 + v23;
                *v60 = v487;
                *v43 = (char)v445;
                if ((int32_t)v444 == 48) {
                    // 0x410595
                    int64_t * v495; // 0x40ee80
                    int32_t v496; // 0x40ee80
                    memset(v495, 48, v496);
                    int64_t v497 = *v53; // 0x4105a2
                    unsigned char v498 = *v43; // 0x4105a7
                    uint32_t v499 = *v60; // 0x4105ad
                    int64_t v500 = *v59; // 0x4105b2
                    int64_t v501 = *v62; // 0x4105b7
                    int64_t v502 = *v61; // 0x4105bc
                    v488 = v502;
                    v489 = v501;
                    v490 = v500;
                    v491 = v499;
                    v492 = v498;
                    v493 = v497;
                } else {
                    // 0x4101a3
                    memset((int64_t *)v23, 32, (int32_t)v1);
                    v488 = *v61;
                    v489 = *v62;
                    v490 = *v59;
                    v491 = (int64_t)*v60;
                    v492 = (int64_t)*v43;
                    v493 = *v53;
                }
            }
            // 0x4101cf
            *(char *)v493 = *v41;
            v481 = v488;
            v482 = v489;
            v483 = v490;
            v484 = v491;
            v485 = v492;
            v486 = v493 + 1;
        }
        int64_t v503 = v482 + v20; // 0x4101e0
        v472 = v3 - v503;
        v476 = v481;
        v473 = v447;
        v468 = v448;
        v469 = v483;
        v453 = v484;
        v457 = v485;
        v459 = v444;
        v461 = v443;
        v462 = v503;
        v466 = v486;
        goto lab_0x40f306;
    } else {
        int32_t v504 = v444; // 0x40f992
        v505 = v436;
        v506 = v451;
        v507 = v448;
        v508 = v447;
        v509 = v450;
        v510 = v446;
        v511 = v445;
        v512 = v443;
        if (v504 == 95) {
            goto lab_0x4101f3;
        } else {
            // 0x40f99c
            if (0x100000000 * v446 >> 32 >= v451) {
                // break -> 0x40ef33
                goto lab_0x40ef33_11;
            }
            int64_t v513 = 0x100000000 * v447 >> 32;
            int64_t v514 = (int32_t)v447 >= 0 ? v513 : 0; // 0x40f9b7
            v1 = v514;
            uint64_t v515 = v514 != 0 ? v514 : 1; // 0x40f9bd
            if (v515 >= v451) {
                // break -> 0x40ef33
                goto lab_0x40ef33_11;
            }
            // 0x40f9ca
            v477 = v515 + v20;
            int64_t v516 = 0x100000000 * v450 >> 32; // 0x40f9cd
            v475 = v449;
            v467 = v448;
            v471 = v516;
            v452 = v446;
            v456 = v445;
            v458 = v444;
            v460 = v443;
            v463 = v477;
            v465 = 0;
            if (v23 == 0) {
                goto lab_0x40fa90;
            } else {
                int32_t v517 = v446; // 0x40f9dc
                v474 = v449;
                v470 = v516;
                v454 = v446;
                v455 = v445;
                v464 = v23;
                if (v517 == 0 && v514 >= 2) {
                    // 0x40f9e7
                    *v59 = v516;
                    int64_t v518 = v513 - 1; // 0x40f9ef
                    v1 = v518;
                    *v54 = v449;
                    int64_t v519 = v518 + v23; // 0x40f9f8
                    *v56 = v517;
                    *v39 = (char)v445;
                    int64_t * v520 = (int64_t *)v23;
                    int32_t v521 = v1;
                    if (v504 == 48) {
                        // 0x4105ff
                        memset(v520, 48, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    } else {
                        // 0x40fa10
                        memset(v520, 32, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    }
                }
                // 0x40fa35
                *(char *)v464 = *v41;
                goto lab_0x40fa45;
            }
        }
    }
  lab_0x40f2f4:
    // 0x40f2f4
    v472 = v3 - v20;
    v476 = v522;
    v473 = v523;
    v468 = v170;
    v469 = (int32_t)v523 >= 0 ? 0x100000000 * v523 >> 32 : 0;
    v453 = v524;
    v457 = v144;
    v459 = v147;
    v461 = v154;
    v462 = v20;
    v466 = v23;
    goto lab_0x40f306;
  lab_0x4104f6:
    // 0x4104f6
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v347 + 100 * v346;
    v178 = 4;
    v157 = v345;
    v139 = 6;
    v149 = v18;
    goto lab_0x40f61f;
  lab_0x4104d2:
    // 0x4104d2
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v348 + 0x2710 * v346 + 100 * v347;
    v178 = 20;
    v157 = v345;
    v139 = 9;
    v149 = v18;
    goto lab_0x40f61f;
  lab_0x40fb99:
    // 0x40fb99
    v173 = v607;
    v163 = v606;
    v184 = -v609 & 0xffffffff;
    v179 = v608;
    v158 = v605;
    v141 = v603;
    v151 = v604;
    goto lab_0x40f8e0;
  lab_0x41003c:;
    int64_t v612 = 0x100000000 * v432 >> 32;
    int64_t v613 = v429 >= 0 ? v612 : 0; // 0x410052
    uint64_t v614 = v613 != 0 ? v613 : 1; // 0x410058
    if (v3 - v20 <= v614) {
        // break -> 0x40ef33
        goto lab_0x40ef33_11;
    }
    int64_t v615 = v434;
    int64_t v616 = v433;
    int64_t v617 = v613; // 0x41006b
    int64_t v618 = v616; // 0x41006b
    int64_t v619 = v615; // 0x41006b
    int64_t v620 = 0; // 0x41006b
    if (v23 != 0) {
        int64_t v621 = v430;
        int32_t v622 = v616; // 0x41006d
        int64_t v623 = v621; // 0x410070
        int64_t v624 = v613; // 0x410070
        int64_t v625 = v616; // 0x410070
        int64_t v626 = v615; // 0x410070
        int64_t v627 = v23; // 0x410070
        if (v622 == 0 && v613 >= 2) {
            // 0x410078
            *v58 = (char)v621;
            int64_t v628 = v612 - 1; // 0x410087
            *v54 = v613;
            v1 = v628;
            *v56 = v622;
            *v39 = (char)v615;
            *v44 = v628;
            memset((int64_t *)v23, 32, (int32_t)v628);
            v624 = *v54;
            v623 = (int64_t)*v58;
            v625 = (int64_t)*v56;
            v626 = (int64_t)*v39;
            v627 = *v44 + v23;
        }
        // 0x4100c4
        *(char *)v627 = (char)v623;
        v617 = v624;
        v618 = v625;
        v619 = v626;
        v620 = v627 + 1;
    }
    int64_t v629 = v614 + v20; // 0x4100cf
    v472 = v3 - v629;
    v476 = v40 - v435;
    v473 = v432;
    v468 = v431;
    v469 = v617;
    v453 = v618;
    v457 = v619;
    v459 = 45;
    v461 = v435;
    v462 = v629;
    v466 = v620;
    goto lab_0x40f306;
  lab_0x40f306:;
    uint64_t v525 = v469;
    uint64_t v526 = v476;
    int64_t v527 = v526 >= v525 ? v526 : v525; // 0x40f30c
    if (v527 >= v472) {
        // break -> 0x40ef33
        goto lab_0x40ef33_11;
    }
    int64_t v528 = v466;
    int64_t v529 = v462;
    int64_t v530 = v468;
    v392 = v527;
    v391 = v530;
    v388 = v529;
    v390 = 0;
    if (v528 == 0) {
        goto lab_0x40f1c6;
    } else {
        int64_t v531 = v457;
        int64_t v532 = v526; // 0x40f325
        int64_t v533 = v530; // 0x40f325
        int64_t v534 = v531; // 0x40f325
        int64_t v535 = v528; // 0x40f325
        if (v526 < v525 == (int32_t)v453 == 0) {
            // 0x40f32c
            *v55 = v526;
            int64_t v536 = (0x100000000 * v473 >> 32) - v526; // 0x40f334
            v1 = v536;
            *v53 = v530;
            *v41 = (char)v531;
            if ((int32_t)v459 == 48) {
                // 0x410277
                int64_t * v537; // 0x40ee80
                int32_t v538; // 0x40ee80
                memset(v537, 48, v538);
                unsigned char v539 = *v41; // 0x410287
                int64_t v540 = *v53; // 0x41028d
                int64_t v541 = *v55; // 0x410292
                v532 = v541;
                v533 = v540;
                v534 = v539;
                int64_t v542; // 0x40f33c
                v535 = v542;
            } else {
                // 0x40f34f
                memset((int64_t *)v528, 32, (int32_t)v1);
                v532 = *v55;
                v533 = *v53;
                v534 = (int64_t)*v41;
                v535 = v528 + v536;
            }
        }
        // 0x40f36f
        *v53 = v533;
        v1 = v532;
        *v44 = v532;
        v393 = v527;
        v396 = v461;
        v395 = v535;
        v385 = v534;
        v386 = v529;
        goto lab_0x40f1ab;
    }
  lab_0x40f1c6:
    // 0x40f1c6
    v8 = v12;
    v9 = v13;
    v25 = v391;
    v21 = v388 + v392;
    v24 = v390;
    goto lab_0x40ef0e;
  lab_0x4101f3:;
    int64_t v543 = v509;
    int64_t v544 = 0x100000000 * v543 >> 32; // 0x4101f3
    if (v544 >= v506) {
        // break -> 0x40ef33
        goto lab_0x40ef33_11;
    }
    int64_t v545 = v512;
    int64_t v546 = v511;
    int64_t v547 = v510;
    int64_t v548 = v508;
    int64_t v549 = v507;
    char v550 = v505; // 0x410202
    int64_t v551 = v543 & 0xffffffff; // 0x410202
    int64_t v552 = v547; // 0x410202
    int64_t v553 = v546; // 0x410202
    int64_t v554 = 0; // 0x410202
    if (v23 != 0) {
        // 0x410204
        v1 = v544;
        *v60 = (int32_t)v543;
        *v56 = (int32_t)v547;
        *v39 = (char)v546;
        memset((int64_t *)v23, 32, (int32_t)v544);
        v550 = *v41;
        v551 = (int64_t)*v60;
        v552 = (int64_t)*v56;
        v553 = (int64_t)*v39;
        v554 = v544 + v23;
    }
    int64_t v555 = v554;
    int64_t v556 = v553;
    int64_t v557 = v552;
    int64_t v558 = v551;
    char v559 = v550; // 0x410250
    int64_t v560 = v544 + v20; // 0x410238
    int32_t v561 = v558; // 0x41023e
    int32_t v562 = v561 - (int32_t)v548; // 0x41023e
    int64_t v563 = v562 < 0 == ((v562 ^ v561) & (int32_t)(v558 ^ v548)) < 0 ? 0 : v548 - v558 & 0xffffffff; // 0x410246
    int64_t v564 = v3 - v560; // 0x41024d
    int64_t v565 = 0x100000000 * v563 >> 32;
    if (v559 != 0) {
        int64_t v566 = v563 != 0 ? v565 : 1; // 0x4102eb
        if (v566 >= v564) {
            // break -> 0x40ef33
            goto lab_0x40ef33_11;
        }
        int64_t v567 = v566; // 0x4102fb
        int64_t v568 = v565; // 0x4102fb
        int64_t v569 = v557; // 0x4102fb
        int64_t v570 = v556; // 0x4102fb
        int64_t v571 = 0; // 0x4102fb
        if (v555 != 0) {
            int32_t v572 = v557; // 0x4102fd
            char v573 = v559; // 0x410300
            int64_t v574 = v566; // 0x410300
            int64_t v575 = v565; // 0x410300
            int64_t v576 = v557; // 0x410300
            int64_t v577 = v556; // 0x410300
            int64_t v578 = v555; // 0x410300
            if (v572 == 0 && v565 >= 2) {
                int64_t v579 = v565 - 1; // 0x410308
                *v59 = v566;
                v1 = v579;
                *v60 = v572;
                *v43 = (char)v556;
                *v53 = v565;
                memset((int64_t *)v555, 32, (int32_t)v579);
                v574 = *v59;
                v575 = *v53;
                v573 = *v41;
                v576 = (int64_t)*v60;
                v577 = (int64_t)*v43;
                v578 = v579 + v555;
            }
            // 0x410348
            v568 = v575;
            v567 = v574;
            *(char *)v578 = v573;
            v569 = v576;
            v570 = v577;
            v571 = v578 + 1;
        }
        int64_t v580 = v567 + v560; // 0x410359
        v472 = v3 - v580;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v568;
        v453 = v569;
        v457 = v570;
        v459 = 95;
        v461 = v545;
        v462 = v580;
        v466 = v571;
    } else {
        // 0x41025b
        v472 = v564;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v565;
        v453 = v557;
        v457 = v556;
        v459 = 95;
        v461 = v545;
        v462 = v560;
        v466 = v555;
    }
    goto lab_0x40f306;
  lab_0x40f1ab:;
    int64_t v581 = v386;
    int64_t v582 = v395;
    int64_t v583 = v396;
    int64_t v584 = v393;
    if ((char)v385 == 0) {
        // 0x410010
        memcpy((int64_t *)v582, (int64_t *)v583, (int32_t)v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    } else {
        // 0x40f1b4
        function_40ee30(v582, v583, v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    }
    goto lab_0x40f1c3;
  lab_0x40fa90:;
    int64_t v585 = v463 + v471; // 0x40fa94
    v472 = v3 - v585;
    v476 = v475;
    v473 = 0;
    v468 = v467;
    v469 = 0;
    v453 = v452;
    v457 = v456;
    v459 = v458;
    v461 = v460;
    v462 = v585;
    v466 = v465;
    goto lab_0x40f306;
  lab_0x40fa45:;
    int64_t v586 = v464 + 1;
    int64_t v587 = v477;
    int64_t v588 = v443;
    int64_t v589 = v444;
    int64_t v590 = v455;
    int64_t v591 = v454;
    int64_t v592 = v470;
    int64_t v593 = v448;
    int64_t v594 = v474;
    v475 = v594;
    v467 = v593;
    v471 = v592;
    v452 = v591;
    v456 = v590;
    v458 = v589;
    v460 = v588;
    v463 = v587;
    v465 = 0;
    if (v586 != 0) {
        // 0x40fa4a
        v1 = v592;
        *v59 = v594;
        *v60 = (int32_t)v591;
        *v55 = v593;
        *v39 = (char)v590;
        *v44 = v592;
        memset((int64_t *)v586, 48, (int32_t)v592);
        int64_t v595 = *v44; // 0x40fa73
        v475 = *v59;
        v467 = *v55;
        v471 = v595;
        v452 = (int64_t)*v60;
        v456 = (int64_t)*v39;
        v458 = v589;
        v460 = v588;
        v463 = v587;
        v465 = v595 + v586;
    }
    goto lab_0x40fa90;
  lab_0x40f1c3:
    // 0x40f1c3
    v392 = v394;
    v391 = *v53;
    v388 = v387;
    v390 = *v44 + v389;
    goto lab_0x40f1c6;
  lab_0x40ef1b_2:
    // 0x40ef1b
    if (v3 != 0 && v5 != 0) {
        // 0x40ef27
        *(char *)v5 = 0;
    }
    // 0x40ef33
    return result;
}
// Address range: 0x410650 - 0x41066f
int64_t function_410650(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    char v1 = 0; // bp-9, 0x410654
    int64_t result = function_40ee80((int32_t)a1, a2, a3, (int64_t)a4, 0, (int64_t)&v1); // 0x410665
    return result;
}
// Address range: 0x410670 - 0x410709
int64_t function_410670(int64_t str) {
    // 0x410670
    if (str == 0) {
        // 0x4106e9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g88);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x41067e
    int64_t result = (int64_t)found_char_pos; // 0x41067e
    if (found_char_pos == NULL) {
        // 0x4106d9
        g189 = str;
        g87 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x410688
    if (v1 - str < 7) {
        // 0x4106d9
        g189 = str;
        g87 = str;
        return result;
    }
    // 0x410698
    bool v2; // 0x410670
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x410670
    int64_t v5 = result - 6; // 0x410670
    int64_t v6 = 7; // 0x4106a6
    unsigned char v7 = *(char *)v5; // 0x4106a6
    char v8 = *(char *)v4; // 0x4106a6
    char v9 = v8; // 0x4106a6
    bool v10 = false; // 0x4106a6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4106b0
    int64_t v13 = v1; // 0x4106b0
    int64_t v14 = 3; // 0x4106b0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4106d9
        g189 = str;
        g87 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4106c2
    char v16 = *(char *)v12; // 0x4106c2
    char v17 = v16; // 0x4106c2
    bool v18 = false; // 0x4106c2
    while (v15 == v16) {
        // 0x4106b2
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
    int64_t v20 = v1; // 0x4106cc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4106ce
        v20 = result + 4;
        g85 = v20;
    }
    // 0x4106d9
    g189 = v20;
    g87 = v20;
    return result;
}
// Address range: 0x410710 - 0x410802
int64_t function_410710(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x410724
    int64_t result = (int64_t)v1; // 0x410724
    if (result != a1) {
        // 0x410731
        return result;
    }
    int64_t v2 = function_4179a0(); // 0x410740
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4107f6
    if (v3 == 85) {
        // 0x410750
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4107e8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g42 : (int64_t)&g34;
            return result2;
        }
        char v4 = *v1; // 0x41077e
        int64_t result3 = v4 != 96 ? (int64_t)&g35 : (int64_t)&g38; // 0x41078b
        // 0x410731
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4107e8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g42 : (int64_t)&g34;
        return result2;
    }
    char v5 = *v1; // 0x4107cd
    int64_t result4 = v5 != 96 ? (int64_t)&g36 : (int64_t)&g37; // 0x4107da
    // 0x410731
    return result4;
}
// Address range: 0x410810 - 0x410867
int64_t function_410810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x410810
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x410867 - 0x411a31
int64_t function_410867(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4108b1
    int64_t v3 = 0; // 0x4108b1
    int64_t v4; // 0x410867
    int64_t v5; // 0x410867
    int64_t v6; // 0x410867
    int64_t v7; // 0x410867
    int64_t v8; // 0x410867
    int64_t v9; // 0x410867
    int64_t v10; // 0x410867
    int64_t v11; // 0x410867
    int64_t v12; // 0x410867
    int64_t v13; // 0x410867
    int64_t v14; // 0x410867
    int64_t v15; // 0x410867
    int64_t v16; // 0x410867
    int64_t v17; // 0x410867
    int64_t v18; // 0x410867
    int64_t result; // 0x410867
    int64_t v19; // 0x410867
    int32_t wc; // bp+132, 0x410867
    int64_t ps; // bp+136, 0x410867
    char v20; // 0x410e20
    int64_t v21; // 0x410e20
    int64_t v22; // 0x4111c8
    int64_t v23; // 0x410867
    int64_t v24; // 0x4111e7
    int32_t v25; // 0x410867
    while (true) {
      lab_0x4108b8_2:
        // 0x4108b8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x410867
        int64_t v27; // 0x4108ec
        while (true) {
          lab_0x4108b8:
            // 0x4108b8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4108c3
            if (v15 == -1) {
                // 0x4108c5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4108d3
            if (v28) {
                // break (via goto) -> 0x411038
                goto lab_0x411038;
            }
            // 0x4108dc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g208 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x410ecb
                    if (v25 % 2 == 0) {
                        goto lab_0x410a11;
                    }
                    // 0x4112ed
                    v26 = v5 + 1;
                    goto lab_0x4108b8;
                }
                case 7: {
                    goto lab_0x410a11;
                }
                case 8: {
                    goto lab_0x410a11;
                }
                case 9: {
                    goto lab_0x410c2a_2;
                }
                case 10: {
                    goto lab_0x410c2a_2;
                }
                case 11: {
                    goto lab_0x410a11;
                }
                case 12: {
                    goto lab_0x410a11;
                }
                case 13: {
                    goto lab_0x410c2a_2;
                }
                case 32: {
                    goto lab_0x410c2a_2;
                }
                case 33: {
                    goto lab_0x410c2a_2;
                }
                case 34: {
                    goto lab_0x410c2a_2;
                }
                case 35: {
                    goto lab_0x4109dd;
                }
                case 36: {
                    goto lab_0x410c2a_2;
                }
                case 37: {
                    goto lab_0x410a11;
                }
                case 38: {
                    goto lab_0x410c2a_2;
                }
                case 39: {
                    goto lab_0x410c2a_2;
                }
                case 40: {
                    goto lab_0x410c2a_2;
                }
                case 41: {
                    goto lab_0x410c2a_2;
                }
                case 42: {
                    goto lab_0x410c2a_2;
                }
                case 43: {
                    goto lab_0x410a11;
                }
                case 44: {
                    goto lab_0x410a11;
                }
                case 45: {
                    goto lab_0x410a11;
                }
                case 46: {
                    goto lab_0x410a11;
                }
                case 47: {
                    goto lab_0x410a11;
                }
                case 48: {
                    goto lab_0x410a11;
                }
                case 49: {
                    goto lab_0x410a11;
                }
                case 50: {
                    goto lab_0x410a11;
                }
                case 51: {
                    goto lab_0x410a11;
                }
                case 52: {
                    goto lab_0x410a11;
                }
                case 53: {
                    goto lab_0x410a11;
                }
                case 54: {
                    goto lab_0x410a11;
                }
                case 55: {
                    goto lab_0x410a11;
                }
                case 56: {
                    goto lab_0x410a11;
                }
                case 57: {
                    goto lab_0x410a11;
                }
                case 58: {
                    goto lab_0x410a11;
                }
                case 59: {
                    goto lab_0x410c2a_2;
                }
                case 60: {
                    goto lab_0x410c2a_2;
                }
                case 61: {
                    goto lab_0x410c2a_2;
                }
                case 62: {
                    goto lab_0x410c2a_2;
                }
                case 63: {
                    goto lab_0x410c2a_2;
                }
                case 65: {
                    goto lab_0x410a11;
                }
                case 66: {
                    goto lab_0x410a11;
                }
                case 67: {
                    goto lab_0x410a11;
                }
                case 68: {
                    goto lab_0x410a11;
                }
                case 69: {
                    goto lab_0x410a11;
                }
                case 70: {
                    goto lab_0x410a11;
                }
                case 71: {
                    goto lab_0x410a11;
                }
                case 72: {
                    goto lab_0x410a11;
                }
                case 73: {
                    goto lab_0x410a11;
                }
                case 74: {
                    goto lab_0x410a11;
                }
                case 75: {
                    goto lab_0x410a11;
                }
                case 76: {
                    goto lab_0x410a11;
                }
                case 77: {
                    goto lab_0x410a11;
                }
                case 78: {
                    goto lab_0x410a11;
                }
                case 79: {
                    goto lab_0x410a11;
                }
                case 80: {
                    goto lab_0x410a11;
                }
                case 81: {
                    goto lab_0x410a11;
                }
                case 82: {
                    goto lab_0x410a11;
                }
                case 83: {
                    goto lab_0x410a11;
                }
                case 84: {
                    goto lab_0x410a11;
                }
                case 85: {
                    goto lab_0x410a11;
                }
                case 86: {
                    goto lab_0x410a11;
                }
                case 87: {
                    goto lab_0x410a11;
                }
                case 88: {
                    goto lab_0x410a11;
                }
                case 89: {
                    goto lab_0x410a11;
                }
                case 90: {
                    goto lab_0x410a11;
                }
                case 91: {
                    goto lab_0x410c2a_2;
                }
                case 92: {
                    goto lab_0x410c2a_2;
                }
                case 93: {
                    goto lab_0x410a11;
                }
                case 94: {
                    goto lab_0x410c2a_2;
                }
                case 95: {
                    goto lab_0x410a11;
                }
                case 96: {
                    goto lab_0x410c2a_2;
                }
                case 97: {
                    goto lab_0x410a11;
                }
                case 98: {
                    goto lab_0x410a11;
                }
                case 99: {
                    goto lab_0x410a11;
                }
                case 100: {
                    goto lab_0x410a11;
                }
                case 101: {
                    goto lab_0x410a11;
                }
                case 102: {
                    goto lab_0x410a11;
                }
                case 103: {
                    goto lab_0x410a11;
                }
                case 104: {
                    goto lab_0x410a11;
                }
                case 105: {
                    goto lab_0x410a11;
                }
                case 106: {
                    goto lab_0x410a11;
                }
                case 107: {
                    goto lab_0x410a11;
                }
                case 108: {
                    goto lab_0x410a11;
                }
                case 109: {
                    goto lab_0x410a11;
                }
                case 110: {
                    goto lab_0x410a11;
                }
                case 111: {
                    goto lab_0x410a11;
                }
                case 112: {
                    goto lab_0x410a11;
                }
                case 113: {
                    goto lab_0x410a11;
                }
                case 114: {
                    goto lab_0x410a11;
                }
                case 115: {
                    goto lab_0x410a11;
                }
                case 116: {
                    goto lab_0x410a11;
                }
                case 117: {
                    goto lab_0x410a11;
                }
                case 118: {
                    goto lab_0x410a11;
                }
                case 119: {
                    goto lab_0x410a11;
                }
                case 120: {
                    goto lab_0x410a11;
                }
                case 121: {
                    goto lab_0x410a11;
                }
                case 122: {
                    goto lab_0x410a11;
                }
                case 123: {
                    goto lab_0x4109b5;
                }
                case 124: {
                    goto lab_0x410c2a_2;
                }
                case 125: {
                    goto lab_0x4109b5;
                }
                case 126: {
                    goto lab_0x4109dd;
                }
                default: {
                    goto lab_0x410db5;
                }
            }
        }
      lab_0x410db5:
        if (v23 != 1) {
            // 0x411120
            ps = 0;
            int64_t len = v15; // 0x411130
            if (v15 == -1) {
                // 0x411132
                len = strlen((char *)str);
            }
            // 0x41115e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4111bf:
                // 0x4111bf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4111c4
                int64_t v30 = v29 + str;
                v24 = function_416e80((int64_t *)&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x41173a_2;
                    }
                    case -1: {
                        goto lab_0x41173a_2;
                    }
                    case -2: {
                        // 0x41181d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x411857
                            v19 = v18;
                            int64_t v31 = v18; // 0x41185a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x411867
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x411860
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x41173a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x41173a_2;
                    }
                    case 1: {
                        goto lab_0x411190;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x41123c
                        char v34 = *(char *)v33; // 0x41124d
                        unsigned char v35; // 0x410867
                        if (v34 < 125) {
                            // 0x411258
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x41126f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x410c2a_2;
                            }
                        }
                        // 0x411240
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x41124d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x411258
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x41126f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x410c2a_2;
                                }
                            }
                            // 0x411240
                            v33++;
                        }
                        goto lab_0x411190;
                    }
                }
            }
            goto lab_0x41173a_2;
        } else {
            // 0x410e04
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x410a11;
        }
    }
  lab_0x411038:
    // 0x411038
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x41193a
        if (v8 > result) {
            // 0x411943
            *(char *)(v12 + result) = 0;
        }
        // 0x410c67
        return result;
    }
    goto lab_0x410c2a_2;
  lab_0x410a11:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x410a20
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x410c2a_2;
        }
    }
    int64_t v42 = result; // 0x410b21
    char v43 = v20; // 0x410b21
    int64_t v44 = v58; // 0x410b21
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x410b21
    int64_t v46 = v56; // 0x410b21
    goto lab_0x410a9d;
  lab_0x410c2a_2:;
    // 0x410c67
    char * v36; // 0x410867
    return function_410810(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x41173a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x410a11;
    } else {
        uint64_t v40 = v37 + v5; // 0x41130e
        int64_t v41 = v5 + 1; // 0x4113f1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x4113f8
        char v48 = v20; // 0x4113f8
        int64_t v49 = result; // 0x4113f8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x4113c1
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x4113c5
            int64_t v52 = v50 + 1; // 0x4113ca
            int64_t v53 = v47 + 1; // 0x4113f1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x4113bc
                v50 = v52;
                if (v38 > v50) {
                    // 0x4113c1
                    *(char *)(v50 + v39) = v51;
                }
                // 0x4113c5
                v51 = *(char *)(v47 + str);
                v52 = v50 + 1;
                v53 = v47 + 1;
                v42 = v52;
                v43 = v51;
                v44 = v22;
                v3 = v53;
                v45 = v38;
                v46 = v39;
                v47 = v53;
            }
        }
        goto lab_0x410a9d;
    }
  lab_0x411190:
    // 0x411190
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x4111af
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4111b2
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x41173a
        goto lab_0x41173a_2;
    }
    goto lab_0x4111bf;
  lab_0x4109dd:
    // 0x4109dd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x410c2a_2;
    }
    goto lab_0x410a11;
  lab_0x4109b5:;
    bool v61 = v15 == 1; // 0x4109c0
    if (v15 == -1) {
        // 0x4109c2
        v61 = *(char *)v1 == 0;
    }
    // 0x4109ce
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x410a11;
    } else {
        goto lab_0x4109dd;
    }
  lab_0x410a9d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x410aa2
        *(char *)(v59 + v60) = v43;
    }
    // 0x410aa6
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x4108b8_2;
}
// Address range: 0x411a40 - 0x411bde
int64_t function_411a40(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x411a42
    int32_t * v3 = __errno_location(); // 0x411a5c
    int64_t v4 = (int64_t)g78; // 0x411a61
    int32_t v5 = *v3; // 0x411a6b
    int64_t v6 = v4; // 0x411a81
    if (v2 >= (int64_t)*(int32_t *)&g81) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x411bd9
            function_412bd0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x411a90
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x411a97
        int64_t v9; // 0x411a40
        if (g78 == &g79) {
            int64_t v10 = function_4129e0(0, v8); // 0x411bba
            int128_t v11 = __asm_movdqa(*(int128_t *)&g79); // 0x411bbf
            *(int64_t *)&g78 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4129e0(v4, v8); // 0x411aab
            *(int64_t *)&g78 = v12;
            v9 = v12;
        }
        // 0x411aba
        v6 = v9;
        int32_t v13 = *(int32_t *)&g81; // 0x411aba
        int32_t v14 = v7; // 0x411ac1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g81 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x411af1
    int64_t v17 = v15 + 8; // 0x411af4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x411afb
    int64_t * v19 = (int64_t *)v16; // 0x411afe
    uint64_t v20 = *v19; // 0x411afe
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x411b01
    int64_t result = *v21; // 0x411b01
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x411b0c
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x411b15
    int64_t v24; // 0x411a40
    uint64_t v25 = function_410810(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x411b24
    if (v20 > v25) {
        // 0x411b9b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x411b37
    *v19 = v26;
    if (result != (int64_t)&g190) {
        // 0x411b47
        free((int64_t *)result);
    }
    int64_t result2 = function_412980(v26); // 0x411b61
    *v21 = result2;
    int64_t v27 = *v22; // 0x411b7b
    int64_t v28 = *v23; // 0x411b7e
    int64_t v29; // 0x411a40
    function_410810(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x411b9b
    *v3 = v5;
    return result2;
}
// Address range: 0x411be0 - 0x411c14
int64_t function_411be0(int32_t a1) {
    int32_t * v1 = __errno_location(); // 0x411be7
    int64_t result = function_412b80(a1 == 0 ? (int64_t)&g191 : (int64_t)a1, 56); // 0x411c06
    return result;
}
// Address range: 0x411c20 - 0x411c2f
int64_t function_411c20(int32_t a1) {
    uint32_t result = *((a1 == 0 ? (int32_t *)&g191 : (int32_t *)(int64_t)a1)); // 0x411c2c
    return result;
}
// Address range: 0x411c30 - 0x411c3f
int64_t function_411c30(int32_t a1, int64_t a2) {
    int32_t * v1 = a1 == 0 ? (int32_t *)&g191 : (int32_t *)(int64_t)a1; // 0x411c3c
    *v1 = (int32_t)a2;
    return (int64_t)&g191;
}
// Address range: 0x411c40 - 0x411c73
int64_t function_411c40(int64_t a1, unsigned char a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g191 + 8 : a1 + 8; // 0x411c59
    int32_t * v2 = (int32_t *)(v1 + (int64_t)(4 * a2 / 32)); // 0x411c5e
    uint32_t v3 = *v2; // 0x411c5e
    uint32_t v4 = (int32_t)(a2 % 32);
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x411c80 - 0x411c93
int64_t function_411c80(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g191 + 4 : a1 + 4); // 0x411c8c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x411ca0 - 0x411ccb
int64_t function_411ca0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g191 : a1; // 0x411ca8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x411cc5
        abort();
        // UNREACHABLE
    }
    // 0x411cbc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g191;
}
// Address range: 0x411cd0 - 0x411d42
int64_t function_411cd0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g191 : a5; // 0x411cf2
    int32_t * v2 = __errno_location(); // 0x411cfb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x411d14
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x411d18
    uint32_t v5 = *(int32_t *)v1; // 0x411d1b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x411d21
    int64_t result = function_410810((int64_t)a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x411d2a
    return result;
}
// Address range: 0x411d50 - 0x411e31
int64_t function_411d50(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g191 : a4; // 0x411d72
    int32_t * v2 = __errno_location(); // 0x411d78
    int64_t v3 = v1 + 8; // 0x411d8f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x411d97
    int32_t * v5 = (int32_t *)v1; // 0x411d9a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x411da8
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x411dab
    int64_t v8 = function_410810(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x411db5
    int64_t v9 = v8 + 1; // 0x411dba
    int64_t result = function_412980(v9); // 0x411dcf
    function_410810(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x411e14
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x411e1d
    return result;
}
// Address range: 0x411e40 - 0x411e4a
int64_t function_411e40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411e40
    return function_411d50(a1, a2, 0, a3);
}
// Address range: 0x411e50 - 0x411ee5
int64_t function_411e50(void) {
    uint32_t v1 = *(int32_t *)&g81; // 0x411e50
    int64_t v2 = v1; // 0x411e50
    int64_t v3 = v2; // 0x411e64
    if (v1 >= 2) {
        int64_t v4 = &g81;
        int64_t v5 = v4 + 16; // 0x411e83
        free((int64_t *)*(int64_t *)v4);
        v3 = &g209;
        while (v5 != (int64_t)g78 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x411e80
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g209;
        }
    }
    int64_t v6 = v3; // 0x411e9d
    if (g79 != 0x6257e0) {
        // 0x411e9f
        free((int64_t *)g79);
        g79 = 256;
        *(int64_t *)&g80 = (int64_t)&g190;
        v6 = &g209;
    }
    int64_t result = v6; // 0x411ec1
    if (g78 != &g79) {
        // 0x411ec3
        free(g78);
        *(int64_t *)&g78 = (int64_t)&g79;
        result = &g209;
    }
    // 0x411ed6
    *(int32_t *)&g81 = 1;
    return result;
}
// Address range: 0x411ef0 - 0x411f01
int64_t function_411ef0(void) {
    // 0x411ef0
    int64_t v1; // 0x411ef0
    return function_411a40(v1, v1, -1, (int64_t *)&g191);
}
// Address range: 0x411f10 - 0x411f1a
int64_t function_411f10(void) {
    // 0x411f10
    int64_t v1; // 0x411f10
    return function_411a40(v1, v1, v1, (int64_t *)&g191);
}
// Address range: 0x411f20 - 0x411f36
int64_t function_411f20(int64_t a1) {
    // 0x411f20
    return function_411a40(0, a1, -1, (int64_t *)&g191);
}
// Address range: 0x411f40 - 0x411f52
int64_t function_411f40(int64_t a1, int64_t a2) {
    // 0x411f40
    return function_411a40(0, a1, a2, (int64_t *)&g191);
}
// Address range: 0x411f60 - 0x411fc8
int64_t function_411f60(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x411f70
    return function_411a40((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x411fd0 - 0x412034
int64_t function_411fd0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x411fe0
    return function_411a40((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x412040 - 0x41204c
int64_t function_412040(int64_t a1, int64_t a2) {
    // 0x412040
    return function_411f60(0, a1 & 0xffffffff, a2);
}
// Address range: 0x412050 - 0x41205f
int64_t function_412050(int64_t a1, int64_t a2, int64_t a3) {
    // 0x412050
    return function_411fd0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x412060 - 0x4120d0
int64_t function_412060(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g191); // 0x41206d
    int128_t v2 = __asm_movdqa(g192); // 0x412075
    int128_t v3 = __asm_movdqa(g193); // 0x41207d
    int64_t v4 = __asm_movaps_9(v1); // bp-72, 0x412092
    __asm_movaps_9(v2);
    __asm_movaps_9(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4120a8
    uint32_t v6 = *v5; // 0x4120a8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4120ad
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_411a40(0, a1, a2, &v4);
}
// Address range: 0x4120d0 - 0x4120dd
int64_t function_4120d0(int64_t a1, int64_t a2) {
    // 0x4120d0
    return function_412060(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4120e0 - 0x4120f1
int64_t function_4120e0(int64_t a1) {
    // 0x4120e0
    return function_412060(a1, -1, 58);
}
// Address range: 0x412100 - 0x41210a
int64_t function_412100(void) {
    // 0x412100
    int64_t v1; // 0x412100
    return function_412060(v1, v1, 58);
}
// Address range: 0x412110 - 0x41217e
int64_t function_412110(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x41212a
    return function_411a40((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x412180 - 0x4121ec
int64_t function_412180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g191); // 0x412187
    int128_t v2 = __asm_movdqa(g192); // 0x41218f
    int128_t v3 = __asm_movdqa(g193); // 0x412197
    __asm_movaps_9(v1);
    __asm_movaps_9(v2);
    __asm_movaps_9(v3);
    int64_t v4 = 10; // bp-72, 0x4121b9
    if (a2 == 0 || a3 == 0) {
        // 0x4121e7
        abort();
        // UNREACHABLE
    }
    // 0x4121ca
    return function_411a40(a1, a4, a5, &v4);
}
// Address range: 0x4121f0 - 0x4121f9
int64_t function_4121f0(void) {
    // 0x4121f0
    int64_t v1; // 0x4121f0
    return function_412180(v1, v1, v1, v1, -1);
}
// Address range: 0x412200 - 0x412217
int64_t function_412200(int64_t a1, int64_t a2, int64_t a3) {
    // 0x412200
    return function_412180(0, a1, a2, a3, -1);
}
// Address range: 0x412220 - 0x412233
int64_t function_412220(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x412220
    return function_412180(0, a1, a2, a3, a4);
}
// Address range: 0x412240 - 0x41224a
int64_t function_412240(void) {
    // 0x412240
    int64_t v1; // 0x412240
    return function_411a40(v1, v1, v1, &g77);
}
// Address range: 0x412250 - 0x412262
int64_t function_412250(int64_t a1, int64_t a2) {
    // 0x412250
    return function_411a40(0, a1, a2, &g77);
}
// Address range: 0x412270 - 0x412281
int64_t function_412270(int64_t a1, int64_t a2) {
    // 0x412270
    return function_411a40(a1, a2, -1, &g77);
}
// Address range: 0x412290 - 0x4122a6
int64_t function_412290(int64_t a1) {
    // 0x412290
    return function_411a40(0, a1, -1, &g77);
}
// Address range: 0x4122b0 - 0x4123e0
int64_t function_4122b0(int64_t a1, int64_t a2) {
    int64_t str = function_40b870(a1, a2); // 0x4122c9
    int64_t str2 = function_40b870(a2, a2); // 0x4122d4
    int64_t n = function_40b8d0(str); // 0x4122df
    if (n != function_40b8d0(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x4122f4
        return 0;
    }
    int64_t v1 = function_417940(); // 0x412325
    int64_t v2 = function_417940(); // 0x412330
    char * v3 = (char *)v1; // 0x412343
    int64_t v4; // bp-344, 0x4122b0
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x4123c0
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x41235c
    int64_t v6; // bp-200, 0x4122b0
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x4123a0
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x412374
    // 0x412376
    v7 = v4 == v6;
    // 0x412385
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x4122f4
    return v7 & 0xffffffff;
}
// Address range: 0x4123e0 - 0x4127bd
int64_t function_4123e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x412478
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4123fc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x412416
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x41245b
    if (a6 < 10) {
        // 0x41246a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x412562
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4127c0 - 0x4127e0
int64_t function_4127c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4127c0
    if (a5 == 0) {
        // 0x4127db
        return function_4123e0(a1, a2, a3, a4, a5, 0, (int64_t)&g209);
    }
    int64_t v1 = 0; // 0x4127c7
    v1++;
    int64_t v2 = v1; // 0x4127d9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4127d0
        v1++;
        v2 = v1;
    }
    // 0x4127db
    return function_4123e0(a1, a2, a3, a4, a5, v2, (int64_t)&g209);
}
// Address range: 0x4127e0 - 0x412840
int64_t function_4127e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4127e0
    int64_t v3 = &v2; // 0x4127e0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x412813
    int64_t v6; // 0x4127fd
    int64_t * v7; // 0x41281b
    int64_t v8; // 0x41281b
    int64_t v9; // 0x412827
    if (v5 < 48) {
        // 0x4127f0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x412833
            break;
        }
    } else {
        // 0x41281b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x412833
            break;
        }
    }
    int64_t v10 = 10; // 0x412811
    while (v4 != 9) {
        // 0x412809
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4127f0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x412833
                break;
            }
        } else {
            // 0x41281b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x412833
                break;
            }
        }
        // 0x412809
        v10 = 10;
    }
    // 0x412833
    return function_4123e0(a1, a2, a3, a4, v3, v10, (int64_t)&g209);
}
// Address range: 0x412840 - 0x4128fc
int64_t function_412840(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x412840
    int64_t v1; // bp-168, 0x412840
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x412840
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x412840
    int64_t v8; // 0x412840
    int64_t v9; // bp-56, 0x412840
    int64_t v10; // 0x4128a5
    int64_t v11; // 0x4128c9
    if ((int32_t)v6 < 48) {
        // 0x412890
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4128e0
            break;
        }
    } else {
        // 0x4128c2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4128e0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4128ba
    int64_t v13 = 10; // 0x4128ba
    while (v5 != 9) {
        // 0x4128bc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x412890
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4128e0
                break;
            }
        } else {
            // 0x4128c2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4128e0
                break;
            }
        }
        // 0x4128b2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4128e0
    int64_t v14; // bp-136, 0x412840
    int64_t result = function_4123e0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g209); // 0x4128ef
    return result;
}
// Address range: 0x412900 - 0x412974
int64_t function_412900(int64_t a1) {
    // 0x412900
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x412963
    return fputs_unlocked(v1, g86);
}
// Address range: 0x412980 - 0x41299a
int64_t function_412980(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x412984
    if (size != 0 != (mem == NULL)) {
        // 0x412993
        return (int64_t)mem;
    }
    // 0x412995
    function_412bd0(size);
    // UNREACHABLE
}
// Address range: 0x4129a0 - 0x4129c1
int64_t function_4129a0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4129a3
    int64_t v2 = v1; // 0x4129a3
    if (v2 < 0) {
        // 0x4129bb
        function_412bd0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4129b9
        return function_412980(v2);
    }
    // 0x4129bb
    function_412bd0(v2);
    // UNREACHABLE
}
// Address range: 0x4129d0 - 0x4129d2
int64_t function_4129d0(void) {
    // 0x4129d0
    int64_t v1; // 0x4129d0
    return function_412980(v1);
}
// Address range: 0x4129e0 - 0x412a16
int64_t function_4129e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x412a08
        free(v1);
        return (int32_t)&g209 ^ (int32_t)&g209;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4129f1
    if (a2 != 0 != (mem == NULL)) {
        // 0x412a00
        return (int64_t)mem;
    }
    // 0x412a11
    function_412bd0(a1);
    // UNREACHABLE
}
// Address range: 0x412a20 - 0x412a41
int64_t function_412a20(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x412a23
    int64_t v2 = v1; // 0x412a23
    if (v2 < 0) {
        // 0x412a3b
        function_412bd0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x412a39
        return function_4129e0(a1, v2);
    }
    // 0x412a3b
    function_412bd0(a1);
    // UNREACHABLE
}
// Address range: 0x412a50 - 0x412ad6
int64_t function_412a50(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x412aab
            function_412bd0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4129e0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x412a93
    if (a2 == 0) {
        // 0x412ab8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x412a98
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x412aab
        function_412bd0(a1);
        // UNREACHABLE
    }
    // 0x412a7a
    *(int64_t *)a2 = v2;
    return function_4129e0(a1, v2 * a3);
}
// Address range: 0x412ae0 - 0x412b30
int64_t function_412ae0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        if (a2 >= (int64_t *)0x5555555555555554) {
            // 0x412b2a
            function_412bd0(a1);
            // UNREACHABLE
        }
        int64_t v2 = v1 + 1 + v1 / 2;
        *a2 = v2;
        return function_4129e0(a1, v2);
    }
    if (a2 == NULL) {
        // 0x412b15
        *a2 = 128;
        return function_4129e0(0, 128);
    }
    // 0x412b28
    if (a2 < NULL) {
        // 0x412b2a
        function_412bd0(a1);
        // UNREACHABLE
    }
    // 0x412b02
    *a2 = v1;
    return function_4129e0(a1, v1);
}
// Address range: 0x412b30 - 0x412b47
int64_t function_412b30(int64_t a1, int64_t a2) {
    // 0x412b30
    return (int64_t)memset((int64_t *)function_412980(a1), 0, (int32_t)a1);
}
// Address range: 0x412b50 - 0x412b7e
int64_t function_412b50(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x412b57
    if ((int64_t)v1 < 0) {
        // 0x412b79
        function_412bd0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x412b79
        function_412bd0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x412b6a
    if (mem != NULL) {
        // 0x412b74
        return (int64_t)mem;
    }
    // 0x412b79
    function_412bd0(nmemb);
    // UNREACHABLE
}
// Address range: 0x412b80 - 0x412ba8
int64_t function_412b80(int64_t a1, int64_t a2) {
    int64_t v1 = function_412980(a2); // 0x412b8f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x412bb0 - 0x412bc3
int64_t function_412bb0(int64_t str) {
    // 0x412bb0
    return function_412b80(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x412bd0 - 0x412c01
int64_t function_412bd0(int64_t a1) {
    // 0x412bd0
    error(g76, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x412c10 - 0x412ce0
int64_t function_412c10(int64_t a1, int32_t a2, int32_t a3, uint64_t a4, int64_t * a5, int64_t a6, int64_t a7) {
    // 0x412c10
    int64_t result2; // bp-64, 0x412c10
    int32_t v1 = function_4132b0(a1, 0, a2, &result2, a5, a6); // 0x412c3c
    int32_t * v2; // 0x412c10
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x412cba
        if (v1 == 1) {
            // 0x412cd8
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x412cc7
            v2 = v3;
            if (v1 == 3) {
                // 0x412ccc
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x412c40
        if (result >= (int64_t)a3 && result <= a4) {
            // 0x412ca2
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x412c4f
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_412290(a1); // 0x412c6c
    int32_t v6 = *v2; // 0x412c71
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x412c87
    int32_t v7 = a7; // 0x412c8a
    error(v7 == 0 ? 1 : v7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x412ca2
    return result2;
}
// Address range: 0x412ce0 - 0x412d01
int64_t function_412ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412ce0
    return function_412c10(a1, 10, (int32_t)a2, a3, (int64_t *)a4, a5, a6);
}
// Address range: 0x412d10 - 0x412d3f
int64_t function_412d10(int64_t a1, int64_t a2) {
    int64_t result = function_415be0(0, 0); // 0x412d15
    if (result != 0 || *__errno_location() != 12) {
        // 0x412d22
        return result;
    }
    // 0x412d3a
    function_412bd0(0);
    // UNREACHABLE
}
// Address range: 0x412d40 - 0x412df0
int64_t function_412d40(void) {
    int64_t v1 = 34; // bp-48, 0x412d56
    int32_t * v2 = __errno_location(); // 0x412d5f
    int64_t name = 0; // 0x412d67
    uint32_t v3; // 0x412dc0
    while (true) {
        // 0x412d70
        name = function_412ae0(name, &v1);
        char * v4 = (char *)(name - 2 + v1); // 0x412d91
        *v4 = 0;
        *v2 = 0;
        if (gethostname((char *)name, (int32_t)v1 - 1) != 0) {
            // 0x412dc0
            v3 = *v2;
            if (v3 >= 37) {
                // break -> 0x412dc9
                break;
            }
            if ((1 << (int64_t)(v3 % 64) & 0x1000401001) == 0) {
                // break -> 0x412dc9
                break;
            }
        } else {
            // 0x412da6
            if (*v4 == 0) {
                // 0x412dac
                return name;
            }
        }
    }
    // 0x412dc9
    free((int64_t *)name);
    *v2 = v3;
    return 0;
}
// Address range: 0x412df0 - 0x413220
int64_t function_412df0(int64_t str, int32_t a2, uint32_t base, int64_t * a4, int32_t a5, int64_t a6) {
    if (base >= 37) {
        // 0x4131fb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g209;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x412e22
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x412e52
    int64_t v3 = str; // 0x412e57
    char v4 = c; // 0x412e57
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x412e4c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x412e48
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x412e59
    if (v4 == 45) {
        // 0x412e93
        return 4;
    }
    int64_t str2 = a5;
    int64_t v6; // bp-64, 0x412df0
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x412e1e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x412e64
    int64_t * v7 = (int64_t *)endptr; // 0x412e69
    int64_t v8 = *v7; // 0x412e69
    char v9; // 0x412df0
    int64_t v10; // 0x412df0
    int64_t v11; // 0x412df0
    int64_t v12; // 0x412df0
    int64_t v13; // 0x412df0
    int64_t v14; // 0x412df0
    int64_t v15; // 0x412df0
    if (v8 == str) {
        // 0x412ec0
        if (c == 0 || a5 == 0) {
            // 0x412e93
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x412ee1
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x412e93
            return 4;
        }
        goto lab_0x412eef;
    } else {
        int32_t v16 = *v1; // 0x412e74
        int64_t v17 = 0; // 0x412e7a
        if (v16 != 0) {
            // 0x412ea8
            v17 = 1;
            if (v16 != 34) {
                // 0x412e93
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x412e64
        v13 = v18;
        v10 = v17;
        if (a5 == 0) {
            goto lab_0x412e90;
        } else {
            char c2 = *(char *)v8; // 0x412e83
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x412fe3
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x412eef;
                } else {
                    goto lab_0x412ff5;
                }
            } else {
                goto lab_0x412e90;
            }
        }
    }
  lab_0x412eef:;
    int64_t v19 = 0x100000000 * v8 >> 32;
    unsigned char v20 = v9 - 69;
    int64_t v21 = 1024; // 0x412ef7
    int64_t v22 = 1; // 0x412ef7
    int64_t v23; // 0x412df0
    int64_t v24; // 0x412df0
    int64_t v25; // 0x412df0
    int64_t v26; // 0x412df0
    int64_t v27; // 0x412df0
    int64_t v28; // 0x412df0
    int64_t v29; // 0x412df0
    int64_t v30; // 0x412df0
    int64_t v31; // 0x412df0
    int64_t v32; // 0x412df0
    int64_t v33; // 0x412df0
    int64_t v34; // 0x412df0
    int64_t v35; // 0x412df0
    int64_t v36; // 0x412df0
    int64_t v37; // 0x412df0
    int64_t v38; // 0x412df0
    int64_t v39; // 0x412df0
    int64_t v40; // 0x412df0
    int64_t v41; // 0x412df0
    int64_t v42; // 0x412df0
    if (v20 < 48) {
        // 0x412ef9
        v21 = 1024;
        v22 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x412f5a;
        } else {
            // 0x412f0c
            v21 = 1024;
            v22 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x412f5a;
            } else {
                // 0x412f28
                v21 = 1000;
                v22 = 2;
                switch (*(char *)(v19 + 1)) {
                    case 68: {
                        goto lab_0x412f5a;
                    }
                    case 105: {
                        char v43 = *(char *)(v19 + 2); // 0x413189
                        v21 = 1024;
                        v22 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x412f5a;
                    }
                    default: {
                        // 0x412f3d
                        g214 = v20;
                        v21 = 1000;
                        v22 = 2;
                        v25 = 1024;
                        v37 = 1;
                        v24 = v14;
                        v23 = v11;
                        v38 = 1;
                        v26 = 1024;
                        v39 = 1;
                        v15 = v14;
                        v12 = v11;
                        v40 = 1;
                        v27 = 1024;
                        v41 = 1;
                        v28 = 1024;
                        v42 = 1;
                        v29 = 1024;
                        v33 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        switch (v9) {
                            case 69: {
                                goto lab_0x4130fb;
                            }
                            case 70: {
                                goto lab_0x412ff5;
                            }
                            case 71: {
                                goto lab_0x413133;
                            }
                            case 72: {
                                goto lab_0x412ff5;
                            }
                            case 73: {
                                goto lab_0x412ff5;
                            }
                            case 74: {
                                goto lab_0x412ff5;
                            }
                            case 75: {
                                goto lab_0x412fbc;
                            }
                            case 76: {
                                goto lab_0x412ff5;
                            }
                            case 77: {
                                goto lab_0x412f7e;
                            }
                            case 78: {
                                goto lab_0x412ff5;
                            }
                            case 79: {
                                goto lab_0x412ff5;
                            }
                            case 80: {
                                goto lab_0x4130c8;
                            }
                            case 81: {
                                goto lab_0x412ff5;
                            }
                            case 82: {
                                goto lab_0x412ff5;
                            }
                            case 83: {
                                goto lab_0x412ff5;
                            }
                            case 84: {
                                goto lab_0x413098;
                            }
                            case 85: {
                                goto lab_0x412ff5;
                            }
                            case 86: {
                                goto lab_0x412ff5;
                            }
                            case 87: {
                                goto lab_0x412ff5;
                            }
                            case 88: {
                                goto lab_0x412ff5;
                            }
                            case 89: {
                                goto lab_0x413066;
                            }
                            case 90: {
                                goto lab_0x41302b;
                            }
                            case 91: {
                                goto lab_0x412ff5;
                            }
                            case 92: {
                                goto lab_0x412ff5;
                            }
                            case 93: {
                                goto lab_0x412ff5;
                            }
                            case 94: {
                                goto lab_0x412ff5;
                            }
                            case 95: {
                                goto lab_0x412ff5;
                            }
                            case 96: {
                                goto lab_0x412ff5;
                            }
                            case 97: {
                                goto lab_0x412ff5;
                            }
                            case 98: {
                                goto lab_0x41300f;
                            }
                            case 99: {
                                goto lab_0x412f98;
                            }
                            case 100: {
                                goto lab_0x412ff5;
                            }
                            case 101: {
                                goto lab_0x412ff5;
                            }
                            case 102: {
                                goto lab_0x412ff5;
                            }
                            case 103: {
                                goto lab_0x413133;
                            }
                            case 104: {
                                goto lab_0x412ff5;
                            }
                            case 105: {
                                goto lab_0x412ff5;
                            }
                            case 106: {
                                goto lab_0x412ff5;
                            }
                            case 107: {
                                goto lab_0x412fbc;
                            }
                            case 108: {
                                goto lab_0x412ff5;
                            }
                            case 109: {
                                goto lab_0x412f7e;
                            }
                            case 110: {
                                goto lab_0x412ff5;
                            }
                            case 111: {
                                goto lab_0x412ff5;
                            }
                            case 112: {
                                goto lab_0x412ff5;
                            }
                            case 113: {
                                goto lab_0x412ff5;
                            }
                            case 114: {
                                goto lab_0x412ff5;
                            }
                            case 115: {
                                goto lab_0x412ff5;
                            }
                            case 116: {
                                goto lab_0x413098;
                            }
                            default: {
                                goto lab_0x412f5a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x412f5a;
    }
  lab_0x412e90:
    // 0x412e90
    *a4 = v13;
    // 0x412e93
    return v10 & 0xffffffff;
  lab_0x412f5a:
    // 0x412f5a
    g215 = v9 - 66;
    v25 = v21;
    v37 = v22;
    v24 = v14;
    v23 = v11;
    v38 = v22;
    v26 = v21;
    v39 = v22;
    v15 = v14;
    v12 = v11;
    v40 = v22;
    v27 = v21;
    v41 = v22;
    v28 = v21;
    v42 = v22;
    v29 = v21;
    v33 = v22;
    v30 = v21;
    v34 = v22;
    v31 = v21;
    v35 = v22;
    v32 = v21;
    v36 = v22;
    int64_t v44; // 0x412df0
    switch (v9) {
        case 66: {
            // 0x413154
            v44 = v22;
            if (v14 >= 0x40000000000000) {
                goto lab_0x412fc7;
            } else {
                // 0x413161
                v24 = 1024 * v14;
                v23 = v11;
                v38 = v22;
                goto lab_0x412f98;
            }
        }
        case 69: {
            goto lab_0x4130fb;
        }
        case 71: {
            goto lab_0x413133;
        }
        case 75: {
            goto lab_0x412fbc;
        }
        case 77: {
            goto lab_0x412f7e;
        }
        case 80: {
            goto lab_0x4130c8;
        }
        case 84: {
            goto lab_0x413098;
        }
        case 89: {
            goto lab_0x413066;
        }
        case 90: {
            goto lab_0x41302b;
        }
        case 98: {
            goto lab_0x41300f;
        }
        case 99: {
            goto lab_0x412f98;
        }
        case 103: {
            goto lab_0x413133;
        }
        case 107: {
            goto lab_0x412fbc;
        }
        case 109: {
            goto lab_0x412f7e;
        }
        case 116: {
            goto lab_0x413098;
        }
        case 119: {
            // 0x413000
            v44 = v22;
            if (v14 < 0) {
                goto lab_0x412fc7;
            } else {
                // 0x413005
                v24 = 2 * v14;
                v23 = v11;
                v38 = v22;
                goto lab_0x412f98;
            }
        }
        default: {
            goto lab_0x412ff5;
        }
    }
  lab_0x4130fb:;
    uint128_t v45 = (int128_t)v14 * (int128_t)v31; // 0x413113
    int64_t v46 = (int64_t)(v45 < 0xffffffffffffffff ? v45 : 0xffffffffffffffff);
    int64_t v47 = v45 > 0xffffffffffffffff ? 1 : 0;
    int32_t v48 = 5; // 0x41311f
    int64_t v49 = v46; // 0x413122
    int64_t v50 = v35; // 0x413122
    int64_t v51 = v47; // 0x413122
    int32_t v52 = v48; // 0x413122
    int64_t v53 = v47; // 0x413122
    while (v48 != 0) {
        // 0x413110
        v45 = (int128_t)v46 * (int128_t)v31;
        v46 = (int64_t)(v45 < 0xffffffffffffffff ? v45 : 0xffffffffffffffff);
        v47 = v45 > 0xffffffffffffffff ? 1 : v53;
        v48 = v52 - 1;
        v49 = v46;
        v50 = v35;
        v51 = v47;
        v52 = v48;
        v53 = v47;
    }
    goto lab_0x413054;
  lab_0x413133:
    // 0x413133
    v24 = -1;
    v23 = 1;
    v38 = v36;
    if ((int128_t)v32 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x41313e
        int128_t v54; // 0x413139
        uint128_t v55; // 0x413139
        uint128_t v56 = (v55 & 0xffffffffffffffff) * v54; // 0x41313e
        v24 = -1;
        v23 = 1;
        int64_t v57; // 0x412df0
        v38 = v57;
        if (v56 <= 0xffffffffffffffff) {
            uint128_t v58 = (v56 & 0xffffffffffffffff) * v54; // 0x413143
            v24 = -1;
            v23 = 1;
            v38 = v57;
            if (v58 <= 0xffffffffffffffff) {
                // 0x413148
                v24 = v58;
                int64_t v59; // 0x412df0
                v23 = v59 & 0xffffffff;
                v38 = v57;
            }
        }
    }
    goto lab_0x412f98;
  lab_0x412fbc:;
    uint128_t v62 = (int128_t)v26 * (int128_t)v14; // 0x412fbf
    v24 = v62;
    v23 = v11;
    v38 = v39;
    v44 = v39;
    if (v62 <= 0xffffffffffffffff) {
        goto lab_0x412f98;
    } else {
        goto lab_0x412fc7;
    }
  lab_0x412f7e:;
    int128_t v63 = v25; // 0x412f84
    uint128_t v64 = v63 * (int128_t)v14; // 0x412f84
    v44 = v37;
    if (v64 > 0xffffffffffffffff) {
        goto lab_0x412fc7;
    } else {
        uint128_t v65 = (v64 & 0xffffffffffffffff) * v63; // 0x412f89
        v44 = v37;
        if (v65 > 0xffffffffffffffff) {
            goto lab_0x412fc7;
        } else {
            // 0x412f8e
            v24 = v65;
            v23 = v11;
            v38 = v37;
            goto lab_0x412f98;
        }
    }
  lab_0x4130c8:;
    uint128_t v66 = (int128_t)v14 * (int128_t)v30; // 0x4130db
    int64_t v67 = (int64_t)(v66 < 0xffffffffffffffff ? v66 : 0xffffffffffffffff);
    int64_t v68 = v66 > 0xffffffffffffffff ? 1 : 0;
    int32_t v69 = 4; // 0x4130e7
    v49 = v67;
    v50 = v34;
    v51 = v68;
    int32_t v70 = v69; // 0x4130ea
    int64_t v71 = v68; // 0x4130ea
    while (v69 != 0) {
        // 0x4130d8
        v66 = (int128_t)v67 * (int128_t)v30;
        v67 = (int64_t)(v66 < 0xffffffffffffffff ? v66 : 0xffffffffffffffff);
        v68 = v66 > 0xffffffffffffffff ? 1 : v71;
        v69 = v70 - 1;
        v49 = v67;
        v50 = v34;
        v51 = v68;
        v70 = v69;
        v71 = v68;
    }
    goto lab_0x413054;
  lab_0x413098:;
    uint128_t v72 = (int128_t)v14 * (int128_t)v29; // 0x4130ab
    int64_t v73 = (int64_t)(v72 < 0xffffffffffffffff ? v72 : 0xffffffffffffffff);
    int64_t v74 = v72 > 0xffffffffffffffff ? 1 : 0;
    int32_t v75 = 3; // 0x4130b7
    v49 = v73;
    v50 = v33;
    v51 = v74;
    int32_t v76 = v75; // 0x4130ba
    int64_t v77 = v74; // 0x4130ba
    while (v75 != 0) {
        // 0x4130a8
        v72 = (int128_t)v73 * (int128_t)v29;
        v73 = (int64_t)(v72 < 0xffffffffffffffff ? v72 : 0xffffffffffffffff);
        v74 = v72 > 0xffffffffffffffff ? 1 : v77;
        v75 = v76 - 1;
        v49 = v73;
        v50 = v33;
        v51 = v74;
        v76 = v75;
        v77 = v74;
    }
    goto lab_0x413054;
  lab_0x413066:;
    uint128_t v78 = (int128_t)v14 * (int128_t)v28; // 0x41307b
    int64_t v79 = (int64_t)(v78 < 0xffffffffffffffff ? v78 : 0xffffffffffffffff);
    int64_t v80 = v78 > 0xffffffffffffffff ? 1 : 0;
    int32_t v81 = 7; // 0x413087
    v49 = v79;
    v50 = v42;
    v51 = v80;
    int32_t v82 = v81; // 0x41308a
    int64_t v83 = v80; // 0x41308a
    while (v81 != 0) {
        // 0x413078
        v78 = (int128_t)v79 * (int128_t)v28;
        v79 = (int64_t)(v78 < 0xffffffffffffffff ? v78 : 0xffffffffffffffff);
        v80 = v78 > 0xffffffffffffffff ? 1 : v83;
        v81 = v82 - 1;
        v49 = v79;
        v50 = v42;
        v51 = v80;
        v82 = v81;
        v83 = v80;
    }
    goto lab_0x413054;
  lab_0x41302b:;
    uint128_t v84 = (int128_t)v14 * (int128_t)v27; // 0x413043
    int64_t v85 = (int64_t)(v84 < 0xffffffffffffffff ? v84 : 0xffffffffffffffff);
    int64_t v86 = v84 > 0xffffffffffffffff ? 1 : 0;
    int32_t v87 = 6; // 0x41304f
    int32_t v88 = v87; // 0x413052
    int64_t v89 = v86; // 0x413052
    v49 = v85;
    v50 = v41;
    v51 = v86;
    while (v87 != 0) {
        // 0x413040
        v84 = (int128_t)v85 * (int128_t)v27;
        v85 = (int64_t)(v84 < 0xffffffffffffffff ? v84 : 0xffffffffffffffff);
        v86 = v84 > 0xffffffffffffffff ? 1 : v89;
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v49 = v85;
        v50 = v41;
        v51 = v86;
    }
    goto lab_0x413054;
  lab_0x41300f:
    // 0x41300f
    v44 = v40;
    if (v14 >= 0x80000000000000) {
        goto lab_0x412fc7;
    } else {
        // 0x413018
        v24 = 512 * v14;
        v23 = v11;
        v38 = v40;
        goto lab_0x412f98;
    }
  lab_0x412f98:;
    int64_t v60 = v23;
    int64_t v61 = (0x100000000 * v38 >> 32) + v19; // 0x412f9d
    *v7 = v61;
    v13 = v24;
    v10 = (*(char *)v61 != 0 ? v60 | 2 : v60) & 0xffffffff;
    goto lab_0x412e90;
  lab_0x412ff5:
    // 0x412ff5
    *a4 = v15;
    // 0x412e93
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x412fc7:
    // 0x412fc7
    v24 = -1;
    v23 = 1;
    v38 = v44;
    goto lab_0x412f98;
  lab_0x413054:
    // 0x413054
    v24 = v49;
    v23 = (v51 | v11) & 0xffffffff;
    v38 = v50;
    goto lab_0x412f98;
}
// Address range: 0x413220 - 0x4132a1
int64_t function_413220(int64_t a1, int32_t a2, int32_t a3, char (**a4)[4], int64_t a5) {
    int64_t v1 = *(int64_t *)((8 * a1 + 0x7fffffff8 & 0x7fffffff8) + (int64_t)&g43); // 0x413242
    error(g76, 0, dcgettext(NULL, (char *)v1, 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4132b0 - 0x4137e9
int64_t function_4132b0(int64_t a1, int32_t a2, uint32_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    int64_t v1; // 0x4132b0
    if (a3 >= 37) {
        // 0x4136cb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        int32_t v2 = *(int32_t *)((int64_t)"0 <= strtol_base && strtol_base <= 36" + 4); // 0x413700
        if (v2 == 0) {
          lab_0x413734_4:
            // 0x413734
            return (int64_t)"0 <= strtol_base && strtol_base <= 36";
        }
        while (true) {
          lab_0x413707:
            // 0x413707
            v1 = (int64_t)"0 <= strtol_base && strtol_base <= 36";
            if (v2 == 91) {
                // break (via goto) -> 0x413740
                goto lab_0x413740;
            }
            if (v2 < 65) {
                if ((1 << (int64_t)((v2 + 31) % 64) & 0xc0000601) != 0) {
                    // 0x41371a
                    if (*(int32_t *)(v1 + 8) == 40) {
                        // break -> 0x413700
                        break;
                    }
                }
                if (v2 == 41) {
                    // 0x4137e0
                    return v1 + 8;
                }
            }
            int32_t v3 = *(int32_t *)(v1 + 8); // 0x41372d
            int64_t v4 = v1 + 4; // 0x413732
            while (v3 != 0) {
                // 0x413707
                v1 = v4;
                int32_t v5 = v3;
                if (v5 == 91) {
                    // break (via goto) -> 0x413740
                    goto lab_0x413740;
                }
                if (v5 < 65) {
                    if ((1 << (int64_t)((v5 + 31) % 64) & 0xc0000601) != 0) {
                        // 0x41371a
                        if (*(int32_t *)(v1 + 8) == 40) {
                            // break -> 0x413700
                            break;
                        }
                    }
                    if (v5 == 41) {
                        // 0x4137e0
                        return v1 + 8;
                    }
                }
                // 0x413729
                v3 = *(int32_t *)(v1 + 8);
                v4 = v1 + 4;
            }
            return (int64_t)"0 <= strtol_base && strtol_base <= 36";
        }
      lab_0x413734_4:
        // 0x413734
        return (int64_t)"0 <= strtol_base && strtol_base <= 36";
    }
    char c = a1;
    int32_t * v6 = __errno_location(); // 0x4132e2
    *v6 = 0;
    int64_t v7 = (int64_t)*__ctype_b_loc() + 1; // 0x413312
    int64_t v8 = a1; // 0x413317
    char v9 = c; // 0x413317
    if ((*(char *)(v7 + (2 * a1 & 510)) & 32) != 0) {
        v8++;
        unsigned char v10 = *(char *)v8; // 0x41330c
        v9 = v10;
        while ((*(char *)(2 * (int64_t)v10 + v7) & 32) != 0) {
            // 0x413308
            v8++;
            v10 = *(char *)v8;
            v9 = v10;
        }
    }
    // 0x413319
    if (v9 == 45) {
        // 0x413355
        return 4;
    }
    // 0x41331e
    int64_t v11; // bp-64, 0x4132b0
    int64_t v12 = a2 == 0 ? (int64_t)&v11 : (int64_t)a2; // 0x4132de
    int32_t v13 = __strtoul_internal((char *)a1, (char **)v12, a3, 0); // 0x413326
    int64_t * v14 = (int64_t *)v12; // 0x41332b
    int64_t v15 = *v14; // 0x41332b
    char v16; // 0x4132b0
    int64_t v17; // 0x4132b0
    int64_t v18; // 0x4132b0
    int64_t v19; // 0x4132b0
    int64_t v20; // 0x4132b0
    int64_t v21; // 0x4132b0
    int64_t v22; // 0x4132b0
    if (v15 == a1) {
        // 0x413388
        if (c == 0 || str == NULL) {
            // 0x413355
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x4133a9
        v21 = 1;
        v18 = 0;
        v16 = c;
        if (found_char_pos == NULL) {
            // 0x413355
            return 4;
        }
        goto lab_0x4133b7;
    } else {
        int32_t v23 = *v6; // 0x413336
        int64_t v24 = 0; // 0x41333c
        if (v23 != 0) {
            // 0x413370
            v24 = 1;
            if (v23 != 34) {
                // 0x413355
                return 4;
            }
        }
        int64_t v25 = v13; // 0x413326
        v20 = v25;
        v17 = v24;
        if (str == NULL) {
            goto lab_0x413352;
        } else {
            char c2 = *(char *)v15; // 0x413345
            v20 = v25;
            v17 = v24;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x4134b3
                v21 = v25;
                v18 = v24;
                v16 = c2;
                v22 = v25;
                v19 = v24;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4133b7;
                } else {
                    goto lab_0x4134c5;
                }
            } else {
                goto lab_0x413352;
            }
        }
    }
  lab_0x4137a8:;
    int64_t v26 = v1 + 12; // 0x4137a8
    int32_t v27 = *(int32_t *)v26; // 0x4137af
    int64_t v28 = v26; // 0x4137af
    goto lab_0x413765;
  lab_0x413765:;
    int64_t v29 = v28;
    int32_t v30 = v27; // 0x413768
    int64_t v31 = v29; // 0x413768
    if (v27 == 93) {
        int64_t v32 = v29 + 4; // 0x41376a
        v30 = *(int32_t *)v32;
        v31 = v32;
    }
    int64_t v33 = v31; // 0x413784
    int64_t v34 = v31; // 0x413784
    int32_t v35 = v30; // 0x413784
    if (v30 != 93) {
        if (v35 == 0) {
            // break (via goto) -> 0x413734
            goto lab_0x413734_4;
        }
        int64_t v36 = v34 + 4;
        int32_t v37 = *(int32_t *)v36; // 0x413778
        v33 = v36;
        v34 = v36;
        v35 = v37;
        while (v37 != 93) {
            // 0x41378a
            if (v35 == 0) {
                // break (via goto) -> 0x413734
                goto lab_0x413734_4;
            }
            // 0x413778
            v36 = v34 + 4;
            v37 = *(int32_t *)v36;
            v33 = v36;
            v34 = v36;
            v35 = v37;
        }
    }
    int32_t v38 = *(int32_t *)(v33 + 4); // 0x413700
    int32_t v39 = v38; // 0x413705
    int64_t v40 = v33; // 0x413705
    if (v38 == 0) {
        // break -> 0x413734
        goto lab_0x413734_4;
    }
    goto lab_0x413707;
  lab_0x4133b7:;
    int64_t v41 = 0x100000000 * v15 >> 32;
    unsigned char v42 = v16 - 69;
    int64_t v43 = 1024; // 0x4133bf
    int64_t v44 = 1; // 0x4133bf
    int64_t v45; // 0x4132b0
    int64_t v46; // 0x4132b0
    int64_t v47; // 0x4132b0
    int64_t v48; // 0x4132b0
    int64_t v49; // 0x4132b0
    int64_t v50; // 0x4132b0
    int64_t v51; // 0x4132b0
    int64_t v52; // 0x4132b0
    int64_t v53; // 0x4132b0
    int64_t v54; // 0x4132b0
    int64_t v55; // 0x4132b0
    int64_t v56; // 0x4132b0
    int64_t v57; // 0x4132b0
    int64_t v58; // 0x4132b0
    int64_t v59; // 0x4132b0
    int64_t v60; // 0x4132b0
    int64_t v61; // 0x4132b0
    int64_t v62; // 0x4132b0
    int64_t v63; // 0x4132b0
    int64_t v64; // 0x4132b0
    if (v42 < 48) {
        // 0x4133c1
        v43 = 1024;
        v44 = 1;
        if ((1 << (int64_t)((v16 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x41342a;
        } else {
            // 0x4133d4
            v43 = 1024;
            v44 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x41342a;
            } else {
                // 0x4133f0
                v43 = 1000;
                v44 = 2;
                switch (*(char *)(v41 + 1)) {
                    case 68: {
                        goto lab_0x41342a;
                    }
                    case 105: {
                        char v65 = *(char *)(v41 + 2); // 0x413659
                        v43 = 1024;
                        v44 = (v65 == 66 ? 2 : 1) + (int64_t)(v65 == 66);
                        goto lab_0x41342a;
                    }
                    default: {
                        // 0x413405
                        g216 = v42;
                        v43 = 1000;
                        v44 = 2;
                        v47 = 1024;
                        v59 = 1;
                        v46 = v21;
                        v45 = v18;
                        v60 = 1;
                        v48 = 1024;
                        v61 = 1;
                        v22 = v21;
                        v19 = v18;
                        v62 = 1;
                        v49 = 1024;
                        v63 = 1;
                        v50 = 1024;
                        v64 = 1;
                        v51 = 1024;
                        v55 = 1;
                        v52 = 1024;
                        v56 = 1;
                        v53 = 1024;
                        v57 = 1;
                        v54 = 1024;
                        v58 = 1;
                        switch (v16) {
                            case 69: {
                                goto lab_0x4135cb;
                            }
                            case 70: {
                                goto lab_0x4134c5;
                            }
                            case 71: {
                                goto lab_0x413603;
                            }
                            case 72: {
                                goto lab_0x4134c5;
                            }
                            case 73: {
                                goto lab_0x4134c5;
                            }
                            case 74: {
                                goto lab_0x4134c5;
                            }
                            case 75: {
                                goto lab_0x41348c;
                            }
                            case 76: {
                                goto lab_0x4134c5;
                            }
                            case 77: {
                                goto lab_0x41344e;
                            }
                            case 78: {
                                goto lab_0x4134c5;
                            }
                            case 79: {
                                goto lab_0x4134c5;
                            }
                            case 80: {
                                goto lab_0x413598;
                            }
                            case 81: {
                                goto lab_0x4134c5;
                            }
                            case 82: {
                                goto lab_0x4134c5;
                            }
                            case 83: {
                                goto lab_0x4134c5;
                            }
                            case 84: {
                                goto lab_0x413568;
                            }
                            case 85: {
                                goto lab_0x4134c5;
                            }
                            case 86: {
                                goto lab_0x4134c5;
                            }
                            case 87: {
                                goto lab_0x4134c5;
                            }
                            case 88: {
                                goto lab_0x4134c5;
                            }
                            case 89: {
                                goto lab_0x413536;
                            }
                            case 90: {
                                goto lab_0x4134fb;
                            }
                            case 91: {
                                goto lab_0x4134c5;
                            }
                            case 92: {
                                goto lab_0x4134c5;
                            }
                            case 93: {
                                goto lab_0x4134c5;
                            }
                            case 94: {
                                goto lab_0x4134c5;
                            }
                            case 95: {
                                goto lab_0x4134c5;
                            }
                            case 96: {
                                goto lab_0x4134c5;
                            }
                            case 97: {
                                goto lab_0x4134c5;
                            }
                            case 98: {
                                goto lab_0x4134df;
                            }
                            case 99: {
                                goto lab_0x413468;
                            }
                            case 100: {
                                goto lab_0x4134c5;
                            }
                            case 101: {
                                goto lab_0x4134c5;
                            }
                            case 102: {
                                goto lab_0x4134c5;
                            }
                            case 103: {
                                goto lab_0x413603;
                            }
                            case 104: {
                                goto lab_0x4134c5;
                            }
                            case 105: {
                                goto lab_0x4134c5;
                            }
                            case 106: {
                                goto lab_0x4134c5;
                            }
                            case 107: {
                                goto lab_0x41348c;
                            }
                            case 108: {
                                goto lab_0x4134c5;
                            }
                            case 109: {
                                goto lab_0x41344e;
                            }
                            case 110: {
                                goto lab_0x4134c5;
                            }
                            case 111: {
                                goto lab_0x4134c5;
                            }
                            case 112: {
                                goto lab_0x4134c5;
                            }
                            case 113: {
                                goto lab_0x4134c5;
                            }
                            case 114: {
                                goto lab_0x4134c5;
                            }
                            case 115: {
                                goto lab_0x4134c5;
                            }
                            case 116: {
                                goto lab_0x413568;
                            }
                            default: {
                                goto lab_0x41342a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x41342a;
    }
  lab_0x413352:
    // 0x413352
    *a4 = v20;
    // 0x413355
    return v17 & 0xffffffff;
  lab_0x41342a:
    // 0x41342a
    g203 = v16 - 66;
    v47 = v43;
    v59 = v44;
    v46 = v21;
    v45 = v18;
    v60 = v44;
    v48 = v43;
    v61 = v44;
    v22 = v21;
    v19 = v18;
    v62 = v44;
    v49 = v43;
    v63 = v44;
    v50 = v43;
    v64 = v44;
    v51 = v43;
    v55 = v44;
    v52 = v43;
    v56 = v44;
    v53 = v43;
    v57 = v44;
    v54 = v43;
    v58 = v44;
    int64_t v66; // 0x4132b0
    switch (v16) {
        case 66: {
            // 0x413624
            v66 = v44;
            if (v21 >= 0x40000000000000) {
                goto lab_0x413497;
            } else {
                // 0x413631
                v46 = 1024 * v21;
                v45 = v18;
                v60 = v44;
                goto lab_0x413468;
            }
        }
        case 69: {
            goto lab_0x4135cb;
        }
        case 71: {
            goto lab_0x413603;
        }
        case 75: {
            goto lab_0x41348c;
        }
        case 77: {
            goto lab_0x41344e;
        }
        case 80: {
            goto lab_0x413598;
        }
        case 84: {
            goto lab_0x413568;
        }
        case 89: {
            goto lab_0x413536;
        }
        case 90: {
            goto lab_0x4134fb;
        }
        case 98: {
            goto lab_0x4134df;
        }
        case 99: {
            goto lab_0x413468;
        }
        case 103: {
            goto lab_0x413603;
        }
        case 107: {
            goto lab_0x41348c;
        }
        case 109: {
            goto lab_0x41344e;
        }
        case 116: {
            goto lab_0x413568;
        }
        case 119: {
            // 0x4134d0
            if (v21 < 0) {
                goto lab_0x413497;
            } else {
                // 0x4134d5
                v46 = 2 * v21;
                v45 = v18;
                v60 = v44;
                goto lab_0x413468;
            }
        }
        default: {
            goto lab_0x4134c5;
        }
    }
  lab_0x4135cb:;
    uint128_t v67 = (int128_t)v21 * (int128_t)v53; // 0x4135e3
    int64_t v68 = (int64_t)(v67 < 0xffffffffffffffff ? v67 : 0xffffffffffffffff);
    int64_t v69 = v67 > 0xffffffffffffffff ? 1 : 0;
    int32_t v70 = 5; // 0x4135ef
    int64_t v71 = v68; // 0x4135f2
    int64_t v72 = v57; // 0x4135f2
    int64_t v73 = v69; // 0x4135f2
    int32_t v74 = v70; // 0x4135f2
    int64_t v75 = v69; // 0x4135f2
    while (v70 != 0) {
        // 0x4135e0
        v67 = (int128_t)v68 * (int128_t)v53;
        v68 = (int64_t)(v67 < 0xffffffffffffffff ? v67 : 0xffffffffffffffff);
        v69 = v67 > 0xffffffffffffffff ? 1 : v75;
        v70 = v74 - 1;
        v71 = v68;
        v72 = v57;
        v73 = v69;
        v74 = v70;
        v75 = v69;
    }
    goto lab_0x413524;
  lab_0x413603:
    // 0x413603
    v46 = -1;
    v45 = 1;
    v60 = v58;
    if ((int128_t)v54 * (int128_t)v21 <= 0xffffffffffffffff) {
        // 0x41360e
        int128_t v76; // 0x413609
        uint128_t v77; // 0x413609
        uint128_t v78 = (v77 & 0xffffffffffffffff) * v76; // 0x41360e
        v46 = -1;
        v45 = 1;
        int64_t v79; // 0x4132b0
        v60 = v79;
        if (v78 <= 0xffffffffffffffff) {
            uint128_t v80 = (v78 & 0xffffffffffffffff) * v76; // 0x413613
            v46 = -1;
            v45 = 1;
            v60 = v79;
            if (v80 <= 0xffffffffffffffff) {
                // 0x413618
                v46 = v80;
                int64_t v81; // 0x4132b0
                v45 = v81 & 0xffffffff;
                v60 = v79;
            }
        }
    }
    goto lab_0x413468;
  lab_0x41348c:;
    uint128_t v84 = (int128_t)v48 * (int128_t)v21; // 0x41348f
    v46 = v84;
    v45 = v18;
    v60 = v61;
    v66 = v61;
    if (v84 <= 0xffffffffffffffff) {
        goto lab_0x413468;
    } else {
        goto lab_0x413497;
    }
  lab_0x41344e:;
    int128_t v85 = v47; // 0x413454
    uint128_t v86 = v85 * (int128_t)v21; // 0x413454
    v66 = v59;
    if (v86 > 0xffffffffffffffff) {
        goto lab_0x413497;
    } else {
        uint128_t v87 = (v86 & 0xffffffffffffffff) * v85; // 0x413459
        v66 = v59;
        if (v87 > 0xffffffffffffffff) {
            goto lab_0x413497;
        } else {
            // 0x41345e
            v46 = v87;
            v45 = v18;
            v60 = v59;
            goto lab_0x413468;
        }
    }
  lab_0x413598:;
    uint128_t v88 = (int128_t)v21 * (int128_t)v52; // 0x4135ab
    int64_t v89 = (int64_t)(v88 < 0xffffffffffffffff ? v88 : 0xffffffffffffffff);
    int64_t v90 = v88 > 0xffffffffffffffff ? 1 : 0;
    int32_t v91 = 4; // 0x4135b7
    v71 = v89;
    v72 = v56;
    v73 = v90;
    int32_t v92 = v91; // 0x4135ba
    int64_t v93 = v90; // 0x4135ba
    while (v91 != 0) {
        // 0x4135a8
        v88 = (int128_t)v89 * (int128_t)v52;
        v89 = (int64_t)(v88 < 0xffffffffffffffff ? v88 : 0xffffffffffffffff);
        v90 = v88 > 0xffffffffffffffff ? 1 : v93;
        v91 = v92 - 1;
        v71 = v89;
        v72 = v56;
        v73 = v90;
        v92 = v91;
        v93 = v90;
    }
    goto lab_0x413524;
  lab_0x413568:;
    uint128_t v94 = (int128_t)v21 * (int128_t)v51; // 0x41357b
    int64_t v95 = (int64_t)(v94 < 0xffffffffffffffff ? v94 : 0xffffffffffffffff);
    int64_t v96 = v94 > 0xffffffffffffffff ? 1 : 0;
    int32_t v97 = 3; // 0x413587
    v71 = v95;
    v72 = v55;
    v73 = v96;
    int32_t v98 = v97; // 0x41358a
    int64_t v99 = v96; // 0x41358a
    while (v97 != 0) {
        // 0x413578
        v94 = (int128_t)v95 * (int128_t)v51;
        v95 = (int64_t)(v94 < 0xffffffffffffffff ? v94 : 0xffffffffffffffff);
        v96 = v94 > 0xffffffffffffffff ? 1 : v99;
        v97 = v98 - 1;
        v71 = v95;
        v72 = v55;
        v73 = v96;
        v98 = v97;
        v99 = v96;
    }
    goto lab_0x413524;
  lab_0x413536:;
    uint128_t v100 = (int128_t)v21 * (int128_t)v50; // 0x41354b
    int64_t v101 = (int64_t)(v100 < 0xffffffffffffffff ? v100 : 0xffffffffffffffff);
    int64_t v102 = v100 > 0xffffffffffffffff ? 1 : 0;
    int32_t v103 = 7; // 0x413557
    v71 = v101;
    v72 = v64;
    v73 = v102;
    int32_t v104 = v103; // 0x41355a
    int64_t v105 = v102; // 0x41355a
    while (v103 != 0) {
        // 0x413548
        v100 = (int128_t)v101 * (int128_t)v50;
        v101 = (int64_t)(v100 < 0xffffffffffffffff ? v100 : 0xffffffffffffffff);
        v102 = v100 > 0xffffffffffffffff ? 1 : v105;
        v103 = v104 - 1;
        v71 = v101;
        v72 = v64;
        v73 = v102;
        v104 = v103;
        v105 = v102;
    }
    goto lab_0x413524;
  lab_0x4134fb:;
    uint128_t v106 = (int128_t)v21 * (int128_t)v49; // 0x413513
    int64_t v107 = (int64_t)(v106 < 0xffffffffffffffff ? v106 : 0xffffffffffffffff);
    int64_t v108 = v106 > 0xffffffffffffffff ? 1 : 0;
    int32_t v109 = 6; // 0x41351f
    int32_t v110 = v109; // 0x413522
    int64_t v111 = v108; // 0x413522
    v71 = v107;
    v72 = v63;
    v73 = v108;
    while (v109 != 0) {
        // 0x413510
        v106 = (int128_t)v107 * (int128_t)v49;
        v107 = (int64_t)(v106 < 0xffffffffffffffff ? v106 : 0xffffffffffffffff);
        v108 = v106 > 0xffffffffffffffff ? 1 : v111;
        v109 = v110 - 1;
        v110 = v109;
        v111 = v108;
        v71 = v107;
        v72 = v63;
        v73 = v108;
    }
    goto lab_0x413524;
  lab_0x4134df:
    // 0x4134df
    v66 = v62;
    if (v21 >= 0x80000000000000) {
        goto lab_0x413497;
    } else {
        // 0x4134e8
        v46 = 512 * v21;
        v45 = v18;
        v60 = v62;
        goto lab_0x413468;
    }
  lab_0x413468:;
    int64_t v82 = v45;
    int64_t v83 = (0x100000000 * v60 >> 32) + v41; // 0x41346d
    *v14 = v83;
    v20 = v46;
    v17 = (*(char *)v83 != 0 ? v82 | 2 : v82) & 0xffffffff;
    goto lab_0x413352;
  lab_0x4134c5:
    // 0x4134c5
    *a4 = v22;
    // 0x413355
    return (v19 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x413497:
    // 0x413497
    v46 = -1;
    v45 = 1;
    v60 = v66;
    goto lab_0x413468;
  lab_0x413524:
    // 0x413524
    v46 = v71;
    v45 = (v73 | v18) & 0xffffffff;
    v60 = v72;
    goto lab_0x413468;
}
// Address range: 0x4137f0 - 0x4138e9
int64_t function_4137f0(int64_t result) {
    char v1 = *(char *)(result + 1); // 0x413800
    char v2 = v1; // 0x413806
    if (v1 == 0) {
      lab_0x413836_3:
        // 0x413836
        return result;
    }
    int64_t v3 = result; // 0x413806
    int64_t v4; // 0x4137f0
    int64_t v5; // 0x4137f0
    char v6; // 0x4137f0
    int64_t v7; // 0x4137f0
    while (true) {
      lab_0x413808:
        // 0x413808
        v5 = v3;
        char v8 = v2;
        while (v8 != 91) {
            if (v8 < 65) {
                if ((1 << (int64_t)((v8 + 31) % 64) & 0xc0000601) != 0) {
                    int64_t v9 = v5 + 2; // 0x41381b
                    if (*(char *)v9 == 40) {
                        // 0x413898
                        v4 = function_4137f0(v9);
                        goto lab_0x413800;
                    }
                }
                if (v8 == 41) {
                    // 0x4138e0
                    return v5 + 2;
                }
            }
            char v10 = *(char *)(v5 + 2); // 0x41382e
            if (v10 == 0) {
                return result;
            }
            v5++;
            v8 = v10;
        }
        int32_t v11 = g194; // 0x413848
        if (g194 == 0) {
            int32_t v12 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x4138d0
            g194 = v12;
            v11 = v12;
        }
        int64_t v13 = v5 + 2; // 0x41384a
        char v14 = *(char *)v13; // 0x41384a
        if (v14 == 33) {
            goto lab_0x4138b0;
        } else {
            // 0x413853
            v6 = v14;
            v7 = v13;
            if (v11 < 0 == v14 == 94) {
                goto lab_0x4138b0;
            } else {
                goto lab_0x413866;
            }
        }
    }
  lab_0x413836_3:
    // 0x413836
    return result;
  lab_0x4138b0:;
    int64_t v15 = v5 + 3; // 0x4138b0
    v6 = *(char *)v15;
    v7 = v15;
    goto lab_0x413866;
  lab_0x413866:;
    int64_t v16 = v7;
    char v17 = v6; // 0x413869
    int64_t v18 = v16; // 0x413869
    if (v6 == 93) {
        int64_t v19 = v16 + 1; // 0x41386b
        v17 = *(char *)v19;
        v18 = v19;
    }
    int64_t v20 = v18; // 0x413885
    char v21 = v17; // 0x413885
    v4 = v18;
    if (v17 != 93) {
        if (v21 == 0) {
            // break (via goto) -> 0x413836
            goto lab_0x413836_3;
        }
        int64_t v22 = v20 + 1;
        char v23 = *(char *)v22; // 0x413878
        v20 = v22;
        v4 = v22;
        while (v23 != 93) {
            // 0x41388b
            if (v23 == 0) {
                // break (via goto) -> 0x413836
                goto lab_0x413836_3;
            }
            // 0x413878
            v22 = v20 + 1;
            v23 = *(char *)v22;
            v20 = v22;
            v4 = v22;
        }
    }
    goto lab_0x413800;
  lab_0x413800:
    // 0x413800
    v3 = v4;
    v2 = *(char *)(v3 + 1);
    if (v2 == 0) {
        // break -> 0x413836
        goto lab_0x413836_3;
    }
    goto lab_0x413808;
}
// Address range: 0x4138f0 - 0x413e80
int64_t function_4138f0(int64_t a1, int64_t wstr, uint64_t a3, uint64_t a4, uint64_t a5, uint32_t a6) {
    int64_t v1 = 0; // bp-64, 0x41391d
    int32_t v2 = wcslen((int32_t *)wstr); // 0x413925
    int64_t v3 = wstr + 4; // 0x41392e
    int32_t v4 = *(int32_t *)v3; // 0x41392e
    if (v4 == 0) {
        // 0x4139b5
        return 0xffffffff;
    }
    int64_t v5 = 0x100000000 * a1 >> 32; // 0x413907
    int64_t v6 = a5 % 256;
    int64_t v7 = v2; // 0x413925
    int32_t v8 = v4; // 0x413953
    int64_t v9 = &v1; // 0x413953
    int64_t v10; // bp-136, 0x4138f0
    int64_t v11 = &v10; // 0x413953
    int64_t v12 = v3; // 0x413953
    int64_t v13 = 0; // 0x413953
    int64_t v14 = v3; // 0x413953
    int64_t v15; // 0x4138f0
    int64_t v16; // 0x4138f0
    int64_t wstr2; // 0x4138f0
    int64_t v17; // 0x4138f0
    int32_t v18; // 0x4138f0
    int64_t v19; // 0x4138f0
    int64_t v20; // 0x4138f0
    int64_t v21; // 0x4138f0
    int64_t v22; // 0x4138f0
    int64_t v23; // 0x4138f0
    while (true) {
      lab_0x413972:
        // 0x413972
        v22 = v12;
        v23 = v11;
        v19 = v9;
        wstr2 = v14;
        v15 = v13;
        int32_t v24 = v8;
        while (v24 != 91) {
            if (v24 >= 65) {
                // 0x413958
                v16 = v15;
                v17 = wstr2;
                if (v24 == 124 == v15 == 0) {
                    // 0x413a50
                    v21 = v7;
                    if ((int32_t)v5 < 65) {
                        goto lab_0x413a6d;
                    } else {
                        // 0x413a5f
                        v21 = (wstr2 - v22 >> 2) + 1;
                        goto lab_0x413a6d;
                    }
                } else {
                    goto lab_0x413966;
                }
            }
            if ((1 << (int64_t)((v24 + 31) % 64) & 0xc0000601) != 0) {
                int64_t v25 = wstr2 + 4; // 0x413985
                if (*(int32_t *)v25 == 40) {
                    // 0x41398c
                    v16 = v15 + 1;
                    v17 = v25;
                    goto lab_0x413966;
                }
            }
            // 0x41398c
            v16 = v15;
            v17 = wstr2;
            if (v24 != 41) {
                goto lab_0x413966;
            }
            if (v15 == 0) {
                // break (via goto) -> 0x413b16
                goto lab_0x413b16;
            }
            int64_t v26 = wstr2 + 4; // 0x41399e
            int32_t v27 = *(int32_t *)v26; // 0x41399e
            if (v27 == 0) {
                // 0x4139b5
                return 0xffffffff;
            }
            wstr2 = v26;
            v15--;
            v24 = v27;
        }
        int32_t v28 = g194; // 0x4139e8
        if (g194 == 0) {
            int32_t v29 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x413b08
            g194 = v29;
            v28 = v29;
        }
        int64_t v30 = wstr2 + 4; // 0x4139ee
        int32_t v31 = *(int32_t *)v30; // 0x4139ee
        if (v31 == 33) {
            goto lab_0x413a40;
        } else {
            // 0x4139f7
            v18 = v31;
            v20 = v30;
            if (v28 < 0 == v31 == 94) {
                goto lab_0x413a40;
            } else {
                goto lab_0x413a0a;
            }
        }
    }
  lab_0x413b16:;
    int64_t v32 = v7; // 0x413b26
    if ((int32_t)v5 >= 65) {
        // 0x413b28
        v32 = (wstr2 - v22 >> 2) + 1;
    }
    int64_t v33 = 4 * v32 + 15 & -8; // 0x413b46
    if (v32 < 0x4000000000000000 != v33 < 0x1f3f) {
        // 0x4139b5
        return 0xffffffff;
    }
    int64_t v34 = v23 + 15 - (v33 + 23 & -16) & -16; // 0x413b88
    int32_t * v35 = wmempcpy((int32_t *)(v34 | 8), (int32_t *)v22, (int32_t)((wstr2 - v22) / 4)); // 0x413b93
    *v35 = 0;
    *(int64_t *)v19 = v34;
    int64_t v36 = v1; // 0x413ba2
    *(int64_t *)v34 = 0;
    if (v36 == 0) {
        // 0x413e5a
        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_wmatch");
        return &g209;
    }
    // 0x413bb6
    if (*(int32_t *)(wstr2 - 4) != 41) {
        // 0x413e41
        __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_wmatch");
        // 0x413e5a
        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_wmatch");
        return &g209;
    }
    int64_t v37 = v5 + 0xffffffdf; // 0x413bc5
    g205 = v37 & 0xffffffff;
    int64_t v38; // 0x4138f0
    int64_t v39; // 0x4138f0
    int64_t result2; // 0x4138f0
    int64_t v40; // 0x4138f0
    int32_t v41; // 0x413d15
    switch ((int32_t)v37) {
        case 0: {
            // 0x413cea
            if (a3 > a4) {
                // 0x4139b5
                return 1;
            }
            // 0x413cf8
            v41 = a6 % 2 != 0 ? a6 : a6 & -5;
            v38 = a3;
            while (true) {
              lab_0x413d18:;
                int64_t v42 = v36; // 0x413d1c
                while ((int32_t)function_413e80(v42 + 8, a3, v38, v6, v41) != 0) {
                    // 0x413d39
                    v42 = *(int64_t *)v42;
                    if (v42 == 0) {
                        // 0x413d42
                        v40 = v6;
                        if (v39 == a3) {
                            goto lab_0x413d62;
                        } else {
                            // 0x413d4b
                            v40 = (a6 & 5) == 5 == *(int32_t *)(v39 - 4) == 47;
                            goto lab_0x413d62;
                        }
                    }
                }
                goto lab_0x413d7d;
            }
            int64_t result = result2;
            return result;
        }
        case 9: {
            // 0x413bdb
            if ((int32_t)function_413e80(wstr2, a3, a4, v6, a6) == 0) {
                // 0x4139b5
                return 0;
            }
        }
        case 10: {
            int64_t v43 = v36; // 0x413c24
            int64_t v44; // 0x4138f0
            int64_t v45; // 0x4138f0
            int64_t v46; // 0x4138f0
            int64_t v47; // 0x4138f0
            int32_t v48; // 0x413c14
            int64_t v49; // 0x413c18
            int64_t v50; // 0x413cb8
            int64_t v51; // 0x413c9b
            int32_t * v52; // 0x413c3f
            int32_t v53; // 0x413c3f
            int32_t v54; // 0x413c6c
            if (a3 <= a4) {
                if ((int32_t)function_413e80(v45 + 8, a3, v46, v6, v48) == 0) {
                    if (v47 != a3) {
                        // 0x413c3d
                        v52 = (int32_t *)(v47 - 4);
                        v53 = *v52;
                        result2 = 0;
                        if ((int32_t)function_413e80(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                            return result2;
                        }
                        // 0x413c6a
                        v54 = *v52;
                        result2 = 0;
                        if ((int32_t)function_413e80(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                            return result2;
                        }
                    } else {
                        // 0x413cca
                        result2 = 0;
                        if ((int32_t)function_413e80(wstr2, a3, a4, v6, v48) == 0) {
                            return result2;
                        }
                    }
                    int64_t v55 = v1; // 0x413c97
                    v44 = v55;
                }
                // 0x413c9b
                v51 = v46 + 4;
                v46 = v51;
                while (v51 <= a4) {
                    // 0x413ca8
                    v47 = v46;
                    v50 = function_413e80(v45 + 8, a3, v47, v6, v48);
                    v44 = v45;
                    if ((int32_t)v50 == 0) {
                        if (v47 != a3) {
                            // 0x413c3d
                            v52 = (int32_t *)(v47 - 4);
                            v53 = *v52;
                            result2 = 0;
                            if ((int32_t)function_413e80(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                                return result2;
                            }
                            // 0x413c6a
                            v54 = *v52;
                            result2 = 0;
                            if ((int32_t)function_413e80(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                                return result2;
                            }
                        } else {
                            // 0x413cca
                            result2 = 0;
                            if ((int32_t)function_413e80(wstr2, a3, a4, v6, v48) == 0) {
                                return result2;
                            }
                        }
                        // 0x413c97
                        v44 = v1;
                    }
                    // 0x413c9b
                    v51 = v47 + 4;
                    v45 = v44;
                    v46 = v51;
                }
            }
            // 0x413e07
            v43 = *(int64_t *)v43;
            v1 = v43;
            while (v43 != 0) {
                // 0x413c28
                if (a3 <= a4) {
                    v47 = v46;
                    v50 = function_413e80(v45 + 8, a3, v47, v6, v48);
                    v44 = v45;
                    if ((int32_t)v50 == 0) {
                        if (v47 != a3) {
                            // 0x413c3d
                            v52 = (int32_t *)(v47 - 4);
                            v53 = *v52;
                            result2 = 0;
                            if ((int32_t)function_413e80(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                                return result2;
                            }
                            // 0x413c6a
                            v54 = *v52;
                            result2 = 0;
                            if ((int32_t)function_413e80(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                                return result2;
                            }
                        } else {
                            // 0x413cca
                            result2 = 0;
                            if ((int32_t)function_413e80(wstr2, a3, a4, v6, v48) == 0) {
                                return result2;
                            }
                        }
                        // 0x413c97
                        v44 = v1;
                    }
                    // 0x413c9b
                    v51 = v47 + 4;
                    v45 = v44;
                    v46 = v51;
                    while (v51 <= a4) {
                        // 0x413ca8
                        v47 = v46;
                        v50 = function_413e80(v45 + 8, a3, v47, v6, v48);
                        v44 = v45;
                        if ((int32_t)v50 == 0) {
                            if (v47 != a3) {
                                // 0x413c3d
                                v52 = (int32_t *)(v47 - 4);
                                v53 = *v52;
                                result2 = 0;
                                if ((int32_t)function_413e80(wstr2, v47, a4, (int64_t)((a6 & 5) == 5 == v53 == 47), v48) == 0) {
                                    return result2;
                                }
                                // 0x413c6a
                                v54 = *v52;
                                result2 = 0;
                                if ((int32_t)function_413e80(v49, v47, a4, (int64_t)((a6 & 5) == 5 == v54 == 47), v48) == 0) {
                                    return result2;
                                }
                            } else {
                                // 0x413cca
                                result2 = 0;
                                if ((int32_t)function_413e80(wstr2, a3, a4, v6, v48) == 0) {
                                    return result2;
                                }
                            }
                            // 0x413c97
                            v44 = v1;
                        }
                        // 0x413c9b
                        v51 = v47 + 4;
                        v45 = v44;
                        v46 = v51;
                    }
                }
                // 0x413e07
                v43 = *(int64_t *)v43;
                v1 = v43;
            }
            // 0x4139b5
            return 1;
        }
        case 30: {
            // 0x413de1
            if ((int32_t)function_413e80(wstr2, a3, a4, v6, a6) == 0) {
                // 0x4139b5
                return 0;
            }
        }
        case 31: {
            int32_t v56 = a6 % 2 != 0 ? a6 : a6 & -5; // 0x413da3
            int64_t v57 = v36; // 0x413da6
            int32_t * v58 = wcscat((int32_t *)(v57 + 8), (int32_t *)wstr2); // 0x413dbc
            result2 = 0;
            while ((int32_t)function_413e80((int64_t)v58, a3, a4, v6, v56) != 0) {
                // 0x413da8
                v57 = *(int64_t *)v57;
                v1 = v57;
                result2 = 1;
                if (v57 == 0) {
                    // break -> 0x4139b5
                    break;
                }
                v58 = wcscat((int32_t *)(v57 + 8), (int32_t *)wstr2);
                result2 = 0;
            }
          lab_0x4139b5_4:
            // 0x4139b5
            return result2;
        }
        default: {
            // 0x413e28
            __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 1197, "ext_wmatch");
            // 0x413e41
            __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_wmatch");
            // 0x413e5a
            __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_wmatch");
            return &g209;
        }
    }
  lab_0x413966:;
    int64_t v59 = v17 + 4; // 0x413966
    int32_t v60 = *(int32_t *)v59; // 0x41396a
    v9 = v19;
    v11 = v23;
    v12 = v22;
    v13 = v16;
    v14 = v59;
    goto lab_0x41396e;
  lab_0x413d7d:;
    int64_t v67 = v38 + 4; // 0x413d7d
    v38 = v67;
    if (v67 > a4) {
        // break -> 0x4139b5
        goto lab_0x4139b5_4;
    }
    goto lab_0x413d18;
  lab_0x413a40:;
    int64_t v68 = wstr2 + 8; // 0x413a40
    v18 = *(int32_t *)v68;
    v20 = v68;
    goto lab_0x413a0a;
  lab_0x413a0a:;
    int64_t v69 = v20;
    int32_t v70 = v18; // 0x413a0d
    int64_t v71 = v69; // 0x413a0d
    if (v18 == 93) {
        int64_t v72 = v69 + 4; // 0x413a0f
        v70 = *(int32_t *)v72;
        v71 = v72;
    }
    int64_t v73 = v71 + 4; // 0x413a2a
    int64_t v74 = v73; // 0x413a31
    int32_t v75 = v70; // 0x413a31
    if (v70 != 93) {
        while (v75 != 0) {
            int32_t v76 = *(int32_t *)v74; // 0x413a24
            v74 += 4;
            v75 = v76;
            if (v76 == 93) {
                // break -> 0x413a33
                break;
            }
        }
        // 0x4139b5
        return 0xffffffff;
    }
    // 0x413a33
    v60 = *(int32_t *)v73;
    v9 = v19;
    v11 = v23;
    v12 = v22;
    v13 = v15;
    v14 = v73;
    goto lab_0x41396e;
  lab_0x41396e:
    // 0x41396e
    v8 = v60;
    if (v8 == 0) {
        // 0x4139b5
        return 0xffffffff;
    }
    goto lab_0x413972;
  lab_0x413a6d:;
    int64_t v61 = 4 * v21 + 15 & -8; // 0x413a75
    result2 = 0xffffffff;
    if (v21 < 0x4000000000000000 == v61 < 0x1f3f) {
        int64_t v62 = v23 - (v61 + 23 & -16); // 0x413aab
        int64_t v63 = v62 + 15 & -16; // 0x413ab7
        int32_t * v64 = wmempcpy((int32_t *)(v63 | 8), (int32_t *)v22, (int32_t)((wstr2 - v22) / 4)); // 0x413abf
        int64_t v65 = wstr2 + 4; // 0x413ac4
        *v64 = 0;
        *(int64_t *)v63 = 0;
        *(int64_t *)v19 = v63;
        v60 = *(int32_t *)v65;
        v9 = v63;
        v11 = v62;
        v12 = v65;
        v13 = 0;
        v14 = v65;
        goto lab_0x41396e;
    } else {
        goto lab_0x4139b5_4;
    }
  lab_0x413d62:
    // 0x413d62
    result2 = 0;
    int64_t v66; // 0x4138f0
    if ((int32_t)function_413e80(v66, v39, a4, v40, v41) == 0) {
        goto lab_0x4139b5_4;
    } else {
        goto lab_0x413d7d;
    }
}
// Address range: 0x413e80 - 0x41495c
int64_t function_413e80(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint32_t a5) {
    int32_t v1 = a1;
    int64_t v2 = a2; // 0x413eab
    int64_t result; // 0x413e80
    if (v1 == 0) {
      lab_0x41411c:
        // 0x41411c
        if (v2 == a3) {
            // 0x414135
            return 0;
        }
        // 0x414125
        result = 1;
        if ((a5 & 8) != 0) {
            // 0x414859
            result = *(int32_t *)v2 != 47;
        }
      lab_0x414135_3:
        // 0x414135
        return result;
    }
    int64_t v3 = a5;
    uint32_t v4 = a5 % 2;
    uint32_t v5 = a5 & 32;
    int64_t v6 = a1; // 0x413ed2
    int64_t v7 = a2; // 0x413ed2
    int64_t v8 = a4 & 0xffffffff; // 0x413ed2
    int32_t v9 = v1; // 0x413ed2
    int64_t v10; // 0x413e80
    int64_t v11; // 0x413e80
    int32_t v12; // 0x413e80
    int32_t v13; // 0x413e80
    int32_t v14; // 0x413e80
    int64_t v15; // 0x413e80
    int64_t wc7; // 0x413e80
    int32_t v16; // 0x413e80
    int64_t v17; // 0x413e80
    int64_t v18; // 0x413e80
    int64_t v19; // 0x413e80
    int64_t v20; // 0x413e80
    int32_t * wc4; // 0x413e80
    int32_t wc6; // 0x413f7b
    while (true) {
      lab_0x413ed5:;
        int32_t wc = v9;
        int64_t v21 = v8;
        wc7 = v7;
        v18 = v6;
        int64_t v22 = v21; // 0x413ed8
        int32_t v23 = wc; // 0x413ed8
        if ((v3 & 16) != 0) {
            // 0x413eda
            v22 = v21 % 256;
            v23 = towlower(wc);
        }
        // 0x413ef0
        v17 = v18 + 4;
        v12 = v23;
        v10 = v22;
        g204 = v12 - 33;
        switch (v12) {
            case 33: {
                goto lab_0x414150;
            }
            case 42: {
                goto lab_0x414190;
            }
            case 43: {
                goto lab_0x414150;
            }
            case 47: {
                if ((a5 & 5) == 5) {
                    // 0x4144b8
                    if (wc7 == a3) {
                        // 0x414135
                        return 1;
                    }
                    // 0x4144c3
                    v15 = v17;
                    v8 = 1;
                    if (*(int32_t *)wc7 != 47) {
                        // 0x414135
                        return 1;
                    }
                    goto lab_0x4140fd;
                } else {
                    goto lab_0x4140db;
                }
            }
            case 63: {
                int64_t v24 = v10; // 0x4140a5
                if (v5 != 0) {
                    // 0x4145f6
                    v24 = v10;
                    if (*(int32_t *)v17 == 40) {
                        int64_t v25 = v10 % 256; // 0x41460a
                        int64_t v26 = function_4138f0(63, v17, wc7, a3, v25, a5); // 0x414620
                        v24 = v25;
                        result = v26;
                        if ((int32_t)v26 != -1) {
                            // 0x414135
                            return result;
                        }
                    }
                }
                // 0x4140ab
                if (wc7 == a3) {
                    // 0x414135
                    return 1;
                }
                int32_t v27 = *(int32_t *)wc7; // 0x4140b2
                if (v27 == 47) {
                    // 0x4144e0
                    v15 = v17;
                    v8 = 0;
                    if (v4 != 0) {
                        // 0x414135
                        return 1;
                    }
                } else {
                    unsigned char v28 = (char)(v27 == 46) & (char)v24; // 0x4140c3
                    if (v28 != 0) {
                        // 0x414135
                        return 1;
                    }
                    // 0x4140c8
                    v15 = v17;
                    v8 = v28;
                }
                goto lab_0x4140fd;
            }
            case 64: {
                goto lab_0x414150;
            }
            case 91: {
                int32_t v29 = g194; // 0x413f6a
                int64_t v30 = v10; // 0x413f6a
                if (g194 == 0) {
                    // 0x414500
                    v29 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1;
                    g194 = v29;
                    v30 = v10 % 256;
                }
                // 0x413f70
                if (wc7 == a3) {
                    // 0x414135
                    return 1;
                }
                int32_t v31 = v29; // 0x413fa5
                wc4 = (int32_t *)wc7;
                wc6 = *wc4;
                if (wc6 == 46) {
                    // 0x4144f0
                    if ((char)v30 != 0) {
                        // 0x414135
                        return 1;
                    }
                } else {
                    // 0x413f88
                    if (wc6 == 47 == (v4 != 0)) {
                        // 0x414135
                        return 1;
                    }
                }
                int32_t v32 = *(int32_t *)v17; // 0x413f99
                if (v32 == 33) {
                    // 0x414490
                    v16 = 1;
                    v11 = v18 + 8;
                    goto lab_0x413fc5;
                } else {
                    // 0x413fa5
                    v16 = 0;
                    v11 = v17;
                    if (v31 < 0 == v32 == 94) {
                        // 0x414490
                        v16 = 1;
                        v11 = v18 + 8;
                        goto lab_0x413fc5;
                    } else {
                        goto lab_0x413fc5;
                    }
                }
            }
            case 92: {
                if ((v3 & 2) != 0) {
                    // 0x414330
                    if (wc7 == a3) {
                        // 0x414135
                        return 1;
                    }
                    // 0x41433b
                    v19 = v17;
                    v13 = v12;
                    v20 = v17;
                    v14 = v12;
                    if ((v3 & 16) != 0) {
                        goto lab_0x413f46;
                    } else {
                        goto lab_0x414344;
                    }
                } else {
                    int32_t wc2 = *(int32_t *)v17; // 0x413f11
                    if (wc2 == 0) {
                        // 0x414135
                        return 1;
                    }
                    int64_t v33 = v18 + 8; // 0x413f15
                    if ((v3 & 16) == 0) {
                        // 0x414530
                        v20 = v33;
                        v14 = wc2;
                        if (wc7 == a3) {
                            // 0x414135
                            return 1;
                        }
                        goto lab_0x414344;
                    } else {
                        // 0x413f30
                        v19 = v33;
                        v13 = towlower(wc2);
                        if (wc7 == a3) {
                            // 0x414135
                            return 1;
                        }
                        goto lab_0x413f46;
                    }
                }
            }
            default: {
                goto lab_0x4140db;
            }
        }
    }
  lab_0x414190:;
    int64_t v34 = v10; // 0x4141a9
    int64_t result2; // 0x413e80
    if (v5 != 0) {
        // 0x4145b4
        v34 = v10;
        if (*(int32_t *)v17 == 40) {
            int64_t v35 = v10 % 256; // 0x4145cf
            int64_t v36 = function_4138f0(42, v17, wc7, a3, v35, a5); // 0x4145dd
            v34 = v35;
            if ((int32_t)v36 != -1) {
                // 0x414135
                result2 = result;
                return result2;
            }
        }
    }
    // 0x4141af
    if (wc7 != a3) {
        // 0x4141b4
        if (*(int32_t *)wc7 == 46) {
            // 0x4141b9
            if ((char)v34 != 0) {
                // 0x414135
                return 1;
            }
        }
    }
    uint32_t v37 = *(int32_t *)v17; // 0x4141c2
    int64_t v38 = v37; // 0x4141c2
    int64_t v39 = v18 + 8; // 0x4141c6
    int64_t v40 = wc7; // 0x4141ce
    int64_t v41 = v34; // 0x4141ce
    int64_t v42 = v38; // 0x4141ce
    int64_t v43 = v39; // 0x4141ce
    int32_t * v44; // 0x413e80
    int64_t v45; // 0x413e80
    int64_t v46; // 0x413e80
    int64_t v47; // 0x413e80
    int64_t v48; // 0x413e80
    int64_t v49; // 0x413e80
    int64_t v50; // 0x413e80
    int64_t v51; // 0x413e80
    int64_t v52; // 0x413e80
    int64_t v53; // 0x413e80
    int64_t v54; // 0x413e80
    int64_t v55; // 0x413e80
    int64_t v56; // 0x413e80
    int64_t v57; // 0x413e80
    int64_t v58; // 0x413e80
    int64_t v59; // 0x413e80
    int32_t * v60; // 0x413e80
    if (v37 != 42 != v37 != 63) {
        // 0x4141d6
        v52 = v5;
        v57 = v5 != 0;
        v54 = wc7;
        v45 = v34;
        v48 = v38;
        v50 = v39;
        while (true) {
          lab_0x4141f0_2:
            // 0x4141f0
            v51 = v50;
            int64_t v61 = v48;
            int64_t v62 = v45;
            v55 = v54;
            int64_t v63 = v57;
            v60 = (int32_t *)v51;
            v58 = v63;
            v46 = v62;
            v49 = v61;
            if (*v60 != 40) {
                goto lab_0x4141fe;
            } else {
                // 0x4141f6
                v58 = v63;
                v46 = v62;
                v49 = v61;
                if ((char)v63 != 0) {
                    int64_t v64 = v52;
                    int64_t v65 = v63 % 256; // 0x414456
                    int64_t v66 = v62 % 256; // 0x41445b
                    if (v64 != v51) {
                        // 0x414440
                        v44 = (int32_t *)v64;
                        v53 = v64;
                        v59 = v65;
                        v56 = v55;
                        v47 = v66;
                        goto lab_0x41420b;
                    } else {
                        // 0x41446a
                        v58 = v65;
                        v46 = v66;
                        v49 = 0x1000000 * (int32_t)v61 >> 24;
                        goto lab_0x4141fe;
                    }
                } else {
                    goto lab_0x4141fe;
                }
            }
        }
        // 0x414135
        result2 = result;
        return result2;
    }
  lab_0x41421e:;
    int64_t wstr = v40;
    int32_t v67 = v42; // 0x414225
    if (v67 == 0) {
        // 0x414748
        if (v4 == 0 || (a5 & 8) != 0) {
            // 0x414135
            return 0;
        }
        // 0x41475b
        result = wmemchr((int32_t *)wstr, 47, (int32_t)((a3 - wstr) / 4)) != NULL;
        // 0x414135
        return result;
    }
    int64_t v68 = v43;
    int32_t * v69 = wmemchr((int32_t *)wstr, -v4 & 47, (int32_t)((a3 - wstr) / 4)); // 0x414250
    int64_t v70 = v41 % 256; // 0x414264
    uint64_t v71 = v69 == NULL ? a3 : (int64_t)v69; // 0x41426a
    if (v67 == 91) {
        goto lab_0x414566;
    } else {
        if (v5 != 0) {
            uint64_t v72 = v42 + 0xffffffdf; // 0x414540
            if ((int32_t)v72 < 32) {
                if ((1 << v72 % 64 & 0x80000401) == 0) {
                    goto lab_0x414286;
                } else {
                    // 0x41455c
                    if (*(int32_t *)v68 != 40) {
                        goto lab_0x414286;
                    } else {
                        goto lab_0x414566;
                    }
                }
            } else {
                goto lab_0x414286;
            }
        } else {
            goto lab_0x414286;
        }
    }
  lab_0x4141fe:;
    int64_t v73 = v46;
    int64_t v74 = v58;
    v44 = v60;
    v53 = v51;
    v59 = v74;
    v56 = v55;
    v47 = v73;
    if ((int32_t)v49 == 63) {
        // 0x414360
        if (v55 == a3) {
            return 1;
        }
        // 0x414369
        if (!((v4 == 0 | *(int32_t *)v55 != 47))) {
            return 1;
        }
        // 0x414372
        v44 = v60;
        v53 = v51;
        v59 = v74;
        v56 = v55 + 4;
        v47 = v73;
    }
    goto lab_0x41420b;
  lab_0x41420b:;
    uint32_t v75 = *v44; // 0x41420b
    int64_t v76 = v75; // 0x41420b
    int64_t v77 = v53 + 4; // 0x41420e
    v40 = v56;
    v41 = v47;
    v42 = v76;
    v43 = v77;
    switch (v75) {
        case 63: {
            goto lab_0x4141f0;
        }
        case 42: {
            goto lab_0x4141f0;
        }
        default: {
            goto lab_0x41421e;
        }
    }
  lab_0x4141f0:
    // 0x4141f0
    v52 = v53;
    v57 = v59;
    v54 = v56;
    v45 = v47;
    v48 = v76;
    v50 = v77;
    goto lab_0x4141f0_2;
  lab_0x4143d3:;
    // 0x4143d3
    int64_t v78; // 0x413e80
    int64_t v79 = v78 + 4; // 0x4143d3
    int64_t v80 = 58; // 0x4143da
    int64_t v81 = v79; // 0x4143da
    int32_t * v82; // 0x413e80
    int32_t * v83 = v82; // 0x4143da
    int64_t v84 = v78; // 0x4143da
    int64_t v85 = v79; // 0x4143da
    uint32_t v86; // 0x413e80
    if (v86 == 91) {
        goto lab_0x414640;
    }
    goto lab_0x414007;
  lab_0x414640:;
    int64_t v120 = v84; // 0x414647
    int64_t v121 = v85; // 0x414647
    int64_t v122 = (int64_t)*v83; // 0x414647
    goto lab_0x414663_2;
  lab_0x414663_2:;
    int32_t v185 = v122; // 0x414669
    result = 1;
    int32_t v147 = v185; // 0x41466c
    int64_t v160 = v122; // 0x41466c
    int64_t v159 = v121; // 0x41466c
    int64_t v145 = v120; // 0x41466c
    if (v185 == 0) {
        goto lab_0x414135_3;
    } else {
        goto lab_0x414672;
    }
  lab_0x414036:;
    // 0x414036
    int64_t v95; // 0x413e80
    int64_t v174 = v95;
    int64_t v94; // 0x413e80
    int64_t v175 = v94;
    int64_t v93; // 0x413e80
    int64_t v176 = v93;
    int64_t v177 = v175 + 4; // 0x414036
    int64_t v123; // 0x413e80
    int64_t v124; // 0x413e80
    int32_t v178; // 0x414040
    if (v174 != 45) {
        // 0x413ff0
        v123 = v174;
        v124 = v177;
        if (v86 == (int32_t)v176) {
            // 0x413ff0
            v83 = (int32_t *)v175;
            v84 = v175;
            v85 = v177;
            goto lab_0x414640;
        }
        goto lab_0x413ffe;
    } else {
        // 0x414040
        v178 = *(int32_t *)v177;
        switch (v178) {
            case 93: {
                goto lab_0x4143f0;
            }
            case 0: {
                goto lab_0x4143f0;
            }
            default: {
                goto lab_0x414054;
            }
        }
    }
  lab_0x4140e2:;
    // 0x4140e2
    int32_t * v96; // 0x413e80
    int32_t wc5 = *v96; // 0x4140e2
    int32_t v126 = wc5; // 0x4140e7
    if ((v3 & 16) != 0) {
        // 0x4140e9
        v126 = towlower(wc5);
    }
    // 0x4140f0
    v15 = v17;
    v8 = 0;
    if (v126 != v12) {
        // 0x414135
        return 1;
    }
    goto lab_0x4140fd;
  lab_0x41402a:;
    // 0x41402a
    int64_t v99; // 0x413e80
    int64_t v172 = v99;
    int64_t v98; // 0x413e80
    int64_t wc10 = v98;
    int32_t v100; // 0x413e80
    int64_t v173 = v100;
    v93 = wc10;
    v94 = v172;
    v95 = v173;
    if ((v3 & 16) != 0) {
        // 0x41402f
        v93 = towlower((int32_t)wc10);
        v94 = v172;
        v95 = v173;
    }
    goto lab_0x414036;
  lab_0x413ffe:;
    int64_t v179 = v124;
    v80 = v123;
    v81 = v179;
    int32_t v127; // 0x413e80
    if (v123 == 93) {
        // 0x414720
        v15 = v179;
        v8 = 0;
        result = 1;
        if (v127 != 0) {
            goto lab_0x4140fd;
        } else {
            goto lab_0x414135_3;
        }
    }
    goto lab_0x414007;
  lab_0x4143f0:
    // 0x4143f0
    v120 = v175;
    v121 = v177;
    v122 = v174;
    if (v86 == (int32_t)v176) {
        goto lab_0x414663_2;
    }
    // 0x4143f8
    v98 = 45;
    v99 = v177;
    v100 = 93;
    if (v178 != 93) {
        goto lab_0x414054;
    } else {
        goto lab_0x41402a;
    }
  lab_0x414054:;
    int64_t v180 = v175 + 8; // 0x414054
    int32_t v181 = v178; // 0x41405b
    int64_t v182 = v180; // 0x41405b
    if ((v3 & 2) == 0 == v178 == 92) {
        // 0x4144a8
        v181 = *(int32_t *)v180;
        v182 = v175 + 12;
    }
    // 0x414066
    if (v181 == 0) {
        // 0x414135
        return 1;
    }
    int64_t v183 = (int64_t)*(int32_t *)v182; // 0x414070
    int64_t v184 = v182 + 4; // 0x414073
    v123 = v183;
    v124 = v184;
    v120 = v182;
    v121 = v184;
    v122 = v183;
    if (v86 >= (int32_t)v176 == v181 >= v86) {
        goto lab_0x414663_2;
    }
    goto lab_0x413ffe;
  lab_0x414007:;
    int64_t v87 = v80; // 0x413e80
    int64_t v88 = v81; // 0x413e80
    goto lab_0x414007_2;
  lab_0x414150:
    if (v5 != 0) {
        // 0x414157
        if (*(int32_t *)v17 == 40) {
            int64_t v125 = function_4138f0((int64_t)v12, v17, wc7, a3, v10 % 256, a5); // 0x41417a
            result = v125;
            if ((int32_t)v125 != -1) {
                // 0x414135
                return result;
            }
        }
    }
    goto lab_0x4140db;
  lab_0x4140db:
    // 0x4140db
    if (wc7 == a3) {
        // 0x414135
        return 1;
    }
    // 0x4140db
    v96 = (int32_t *)wc7;
    goto lab_0x4140e2;
  lab_0x4140fd:
    // 0x4140fd
    v6 = v15;
    v9 = *(int32_t *)v6;
    v7 = wc7 + 4;
    v2 = v7;
    if (v9 == 0) {
        goto lab_0x41411c;
    }
    goto lab_0x413ed5;
  lab_0x413fc5:
    // 0x413fc5
    v127 = v16;
    int32_t v128 = wc6; // 0x413fc8
    if ((v3 & 16) != 0) {
        // 0x413fca
        v128 = towlower(wc6);
    }
    // 0x413fd5
    v86 = v128;
    v87 = (int64_t)*(int32_t *)v11;
    v88 = v11 + 4;
    while (true) {
      lab_0x414007_2:
        // 0x414007
        v78 = v88;
        int64_t v89 = v87;
        int32_t v90 = v89; // 0x41400c
        if ((v3 & 2) == 0 == v90 == 92) {
            uint32_t wc3 = *(int32_t *)v78; // 0x414418
            if (wc3 == 0) {
                // 0x414135
                return 1;
            }
            int64_t v91 = wc3; // 0x414426
            if ((v3 & 16) != 0) {
                // 0x414428
                v91 = towlower(wc3);
            }
            int64_t v92 = v78 + 4; // 0x41442f
            v93 = v91;
            v94 = v92;
            v95 = (int64_t)*(int32_t *)v92;
            goto lab_0x414036;
        } else {
            // 0x414015
            v96 = wc4;
            switch (v90) {
                case 91: {
                    // 0x414380
                    v82 = (int32_t *)v78;
                    int32_t v97 = *v82; // 0x414380
                    v98 = v89;
                    v99 = v78;
                    v100 = v97;
                    int64_t v101 = v78; // 0x414388
                    if (v97 != 58) {
                        goto lab_0x41402a;
                    } else {
                        int64_t v102 = 0;
                        int64_t v103 = v101 + 4; // 0x4143bb
                        int32_t v104 = *(int32_t *)v103; // 0x4143bb
                        while (v104 != 58) {
                            if (v104 >= 122) {
                                goto lab_0x4143d3;
                            }
                            int64_t v105 = v102 + 1; // 0x4143a0
                            int64_t v106; // bp-1416, 0x413e80
                            *(int32_t *)((int64_t)&v106 + 316 + 4 * v105) = v104;
                            if (v102 == 255) {
                                // 0x414135
                                return 1;
                            }
                            v102 = v105;
                            v103 += 4;
                            v104 = *(int32_t *)v103;
                        }
                        // 0x4143c8
                        int64_t v107; // 0x413e80
                        if (*(int32_t *)(v107 + 8) == 93) {
                            // 0x4147d2
                            int64_t v108; // 0x413e80
                            *(int32_t *)(v108 + 4 * v102) = 0;
                            int32_t v109; // bp-1096, 0x413e80
                            int32_t v110 = v109;
                            int64_t v111; // 0x413e80
                            int64_t v112; // 0x413e80
                            if (v110 < 64) {
                                // 0x414800
                                if (v111 == v112 || v110 < 37 == ((v110 & -4) != 32)) {
                                    // 0x414135
                                    return 1;
                                }
                            } else {
                                // 0x414834
                                if (v110 == 64) {
                                    // 0x414135
                                    return 1;
                                }
                                if (v110 < 96) {
                                    // 0x414811
                                    if (v111 == v112) {
                                        // 0x414135
                                        return 1;
                                    }
                                } else {
                                    // 0x414842
                                    if (v110 > 126 || v111 == v112) {
                                        // 0x414135
                                        return 1;
                                    }
                                }
                            }
                            int64_t v113 = v111 + 4; // 0x41481a
                            int64_t v114; // 0x413e80
                            int64_t v115 = v114 + 1; // 0x41481e
                            *(char *)v114 = (char)v110;
                            int32_t v116 = *(int32_t *)v113; // 0x414825
                            while (v116 != 0) {
                                int64_t v117 = v115;
                                int64_t v118 = v113;
                                v110 = v116;
                                if (v110 < 64) {
                                    // 0x414800
                                    if (v118 == v112 || v110 < 37 == ((v110 & -4) != 32)) {
                                        // 0x414135
                                        return 1;
                                    }
                                } else {
                                    // 0x414834
                                    if (v110 == 64) {
                                        // 0x414135
                                        return 1;
                                    }
                                    if (v110 < 96) {
                                        // 0x414811
                                        if (v118 == v112) {
                                            // 0x414135
                                            return 1;
                                        }
                                    } else {
                                        // 0x414842
                                        if (v110 > 126 || v118 == v112) {
                                            // 0x414135
                                            return 1;
                                        }
                                    }
                                }
                                // 0x41481a
                                v113 = v118 + 4;
                                v115 = v117 + 1;
                                *(char *)v117 = (char)v110;
                                v116 = *(int32_t *)v113;
                            }
                            // 0x4148f1
                            *(char *)v115 = 0;
                            int64_t name; // bp-1368, 0x413e80
                            int32_t desc = wctype((char *)&name); // 0x4148fe
                            if (desc == 0) {
                                // 0x414135
                                return 1;
                            }
                            // 0x414914
                            if (iswctype(*wc4, desc) != 0) {
                                int64_t v119 = v107 + 12; // 0x41493a
                                v120 = v119;
                                v121 = v107 + 16;
                                v122 = (int64_t)*(int32_t *)v119;
                                goto lab_0x414663_2;
                            }
                            // 0x41492a
                            v123 = (int64_t)*(int32_t *)(v107 + 12);
                            v124 = v107 + 16;
                            goto lab_0x413ffe;
                        } else {
                            goto lab_0x4143d3;
                        }
                    }
                }
                case 0: {
                    goto lab_0x4140e2;
                }
                default: {
                    // 0x414026
                    v98 = v89;
                    v99 = v78;
                    v100 = *(int32_t *)v78;
                    goto lab_0x41402a;
                }
            }
        }
    }
    goto lab_0x4140e2;
  lab_0x413f46:;
    int32_t v129 = towlower(*(int32_t *)wc7); // 0x413f52
    int32_t v130 = v13; // 0x413f52
    int64_t v131 = v19; // 0x413f52
    goto lab_0x41434b;
  lab_0x414344:
    // 0x414344
    v129 = *(int32_t *)wc7;
    v130 = v14;
    v131 = v20;
    goto lab_0x41434b;
  lab_0x41434b:
    // 0x41434b
    v15 = v131;
    v8 = 0;
    if (v129 != v130) {
        // 0x414135
        return 1;
    }
    goto lab_0x4140fd;
  lab_0x414566:;
    int32_t v132 = v4 != 0 ? a5 : a5 & -5; // 0x414571
    int64_t v133 = wstr; // 0x41457d
    if (v71 <= wstr) {
        // 0x414135
        return 1;
    }
    int64_t v134 = v70; // 0x41457d
    result = 0;
    while ((int32_t)function_413e80(v68 - 4, v133, a3, v134, v132) != 0) {
        int64_t v135 = v133 + 4; // 0x4145a3
        result = 1;
        v133 = v135;
        v134 = 0;
        if (v71 <= v135) {
            // break -> 0x414135
            break;
        }
        result = 0;
    }
    // 0x414135
    return result;
  lab_0x414286:;
    int32_t v136; // 0x413e80
    if (v42 == 47) {
        if (v4 != 0) {
            // 0x41487e
            if (wstr >= a3) {
                // 0x414135
                return 1;
            }
            int64_t v137 = wstr; // 0x414881
            int64_t v138 = v137 + 4;
            while (*(int32_t *)v137 != 47) {
                // 0x414890
                v137 = v138;
                if (v138 >= a3) {
                    // 0x414135
                    return 1;
                }
                v138 = v137 + 4;
            }
            // 0x4148a2
            result = (int32_t)function_413e80(v68, v138, a3, (int64_t)(a5 / 4 % 2), a5) != 0;
            // 0x414135
            return result;
        }
        // 0x41484f
        v136 = a5 & -5;
        goto lab_0x414298;
    } else {
        // 0x414290
        v136 = a5;
        if (v4 == 0) {
            // 0x41484f
            v136 = a5 & -5;
            goto lab_0x414298;
        } else {
            goto lab_0x414298;
        }
    }
  lab_0x414298:;
    int64_t wc8 = v42; // 0x4142a0
    if ((v3 & 2) == 0 && v42 == 92) {
        // 0x4148d5
        wc8 = (int64_t)*(int32_t *)v68;
    }
    int64_t v139 = wc8; // 0x4142a8
    if ((v3 & 16) != 0) {
        // 0x4142aa
        v139 = towlower((int32_t)wc8);
    }
    // 0x4142bf
    if (v71 <= wstr) {
        // 0x414135
        return 1;
    }
    int64_t v140 = v68 - 4; // 0x4142bf
    int32_t wc9 = *(int32_t *)wstr; // 0x4142f0
    int32_t v141 = wc9; // 0x4142f6
    if ((v3 & 16) != 0) {
        // 0x4142f8
        v141 = towlower(wc9);
    }
    // 0x4142ff
    if (v141 == (int32_t)v139) {
        // 0x414304
        if ((int32_t)function_413e80(v140, wstr, a3, v70, v136) == 0) {
            // break -> 0x414135
            break;
        }
    }
    int64_t v142 = wstr + 4; // 0x4142e0
    result = 1;
    while (v71 > v142) {
        int64_t v143 = v142;
        wc9 = *(int32_t *)v143;
        v141 = wc9;
        if ((v3 & 16) != 0) {
            // 0x4142f8
            v141 = towlower(wc9);
        }
        // 0x4142ff
        if (v141 == (int32_t)v139) {
            // 0x414304
            result = 0;
            if ((int32_t)function_413e80(v140, v143, a3, 0, v136) == 0) {
                // break -> 0x414135
                break;
            }
        }
        // 0x4142e0
        v142 = v143 + 4;
        result = 1;
    }
    // 0x414135
    return result;
  lab_0x414672:;
    int64_t v144 = v145;
    int32_t v146 = v147;
    int32_t v148; // 0x413e80
    int64_t v149; // 0x413e80
    int32_t v150; // 0x413e80
    int64_t v151; // 0x413e80
    int64_t v152; // 0x413e80
    int64_t v153; // 0x413e80
    int64_t v154; // 0x413e80
    int64_t v155; // 0x413e80
    int64_t v156; // 0x413e80
    int64_t v157; // 0x413e80
    if ((v3 & 2) == 0 == v146 == 92) {
        // 0x4146d8
        result = 1;
        if (*(int32_t *)(v144 + 4) == 0) {
            goto lab_0x414135_3;
        } else {
            int64_t v158 = v144 + 8; // 0x4146e3
            v154 = v158;
            v150 = *(int32_t *)v158;
            goto lab_0x41465f;
        }
    } else {
        // 0x414685
        v156 = v159;
        v155 = v160;
        v151 = v156;
        if (v146 != 91) {
            goto lab_0x414650;
        } else {
            int32_t v161 = *(int32_t *)(v144 + 4); // 0x41468b
            int64_t v162 = v144 + 8;
            v154 = v156;
            v150 = v161;
            switch (v161) {
                case 58: {
                    // 0x4147b6
                    v157 = v144 + 1024;
                    v152 = v162;
                    goto lab_0x4147b6_2;
                }
                case 61: {
                    // 0x4146f0
                    result = 1;
                    if (*(int32_t *)v162 == 0) {
                        goto lab_0x414135_3;
                    } else {
                        // 0x4146fb
                        result = 1;
                        if (*(int32_t *)(v144 + 12) != 61) {
                            goto lab_0x414135_3;
                        } else {
                            // 0x414705
                            result = 1;
                            if (*(int32_t *)(v144 + 16) != 93) {
                                goto lab_0x414135_3;
                            } else {
                                // 0x41470f
                                v155 = (int64_t)*(int32_t *)(v144 + 20);
                                v151 = v144 + 24;
                                goto lab_0x414650;
                            }
                        }
                    }
                }
                case 46: {
                    int64_t v163 = v144 + 12; // 0x4146bd
                    int32_t v164 = *(int32_t *)v163; // 0x4146bd
                    result = 1;
                    v148 = v164;
                    v149 = v163;
                    v153 = v162;
                    if (v164 == 0) {
                        goto lab_0x414135_3;
                    } else {
                        goto lab_0x4146cc;
                    }
                }
                default: {
                    goto lab_0x41465f;
                }
            }
        }
    }
  lab_0x414650:;
    int64_t v165 = v151;
    if (v155 == 93) {
        // 0x4148dd
        v15 = v165;
        v8 = (v3 & 2) == 0 == v146 == 92;
        result = 1;
        if (v127 != 0) {
            goto lab_0x414135_3;
        } else {
            goto lab_0x4140fd;
        }
    } else {
        // 0x414659
        v154 = v165;
        v150 = *(int32_t *)v165;
        goto lab_0x41465f;
    }
  lab_0x41465f:
    // 0x41465f
    result = 1;
    v147 = v150;
    v160 = v150;
    v159 = v154 + 4;
    v145 = v154;
    if (v150 == 0) {
        goto lab_0x414135_3;
    } else {
        goto lab_0x414672;
    }
  lab_0x4147b6_2:;
    int64_t v166 = v152;
    int32_t v167 = *(int32_t *)v166;
    if (v167 != 58) {
        // 0x414798
        v154 = v156;
        v150 = 58;
        if (v167 < 122) {
            // 0x4147a6
            result = 1;
            v152 = v166 + 4;
            if (v157 == v166) {
                goto lab_0x414135_3;
            } else {
                goto lab_0x4147b6_2;
            }
        } else {
            goto lab_0x41465f;
        }
    } else {
        // 0x4147bc
        v154 = v156;
        v150 = v167;
        if (*(int32_t *)(v166 + 4) != 93) {
            goto lab_0x41465f;
        } else {
            // 0x4147c6
            v155 = (int64_t)*(int32_t *)(v166 + 8);
            v151 = v166 + 12;
            goto lab_0x414650;
        }
    }
  lab_0x4146cc:;
    int64_t v168 = v149;
    if (v148 != 46) {
        goto lab_0x4146ba;
    } else {
        int64_t v169 = v153;
        if (*(int32_t *)(v169 + 8) == 93) {
            // 0x414866
            v155 = (int64_t)*(int32_t *)(v169 + 12);
            v151 = v169 + 16;
            goto lab_0x414650;
        } else {
            goto lab_0x4146ba;
        }
    }
  lab_0x4146ba:;
    int64_t v170 = v168 + 4; // 0x4146bd
    int32_t v171 = *(int32_t *)v170; // 0x4146bd
    result = 1;
    v148 = v171;
    v149 = v170;
    v153 = v168;
    if (v171 == 0) {
        goto lab_0x414135_3;
    } else {
        goto lab_0x4146cc;
    }
}
// Address range: 0x414960 - 0x414eb0
int64_t function_414960(int64_t a1, int64_t str, uint64_t a3, uint64_t a4, uint64_t a5, uint32_t a6) {
    int64_t v1 = 0; // bp-64, 0x41498d
    int32_t len = strlen((char *)str); // 0x414995
    int64_t v2 = str + 1; // 0x41499e
    char v3 = *(char *)v2; // 0x41499e
    if (v3 == 0) {
        // 0x414a35
        return 0xffffffff;
    }
    int64_t v4 = 0x100000000 * a1 >> 32; // 0x414977
    int64_t v5 = len; // 0x414995
    char v6 = v3; // 0x4149d0
    int64_t v7 = &v1; // 0x4149d0
    int64_t v8; // bp-136, 0x414960
    int64_t v9 = &v8; // 0x4149d0
    int64_t v10 = v2; // 0x4149d0
    int64_t v11 = v2; // 0x4149d0
    int64_t v12 = 0; // 0x4149d0
    int64_t v13; // 0x414960
    int64_t v14; // 0x414960
    int64_t v15; // 0x414960
    int64_t v16; // 0x414960
    int64_t v17; // 0x414960
    int64_t v18; // 0x414960
    int64_t v19; // 0x414960
    char v20; // 0x414960
    char v21; // 0x414960
    int64_t v22; // 0x414960
    int64_t v23; // 0x414960
    int64_t v24; // 0x414960
    int64_t v25; // 0x414960
    int64_t v26; // 0x414960
    int64_t v27; // 0x414bc4
    int32_t v28; // 0x414d3c
    int64_t v29; // 0x414960
    int64_t v30; // 0x414960
    while (true) {
      lab_0x4149f2:
        // 0x4149f2
        v24 = v10;
        v26 = v9;
        v22 = v7;
        v18 = v12;
        v15 = v11;
        char v31 = v6;
        while (v31 != 91) {
            if (v31 >= 65) {
                // 0x4149d8
                v16 = v15;
                v19 = v18;
                if (v31 == 124 == v18 == 0) {
                    int64_t v32 = v15 - v24; // 0x414ad3
                    int64_t v33 = ((int32_t)v4 < 65 ? v5 : v32 + 1) + 15 & -8; // 0x414ae7
                    if (v33 < 0x1f3f) {
                        int64_t v34 = v26 - (v33 + 23 & -16); // 0x414b04
                        int64_t v35 = v34 + 15 & -16; // 0x414b0c
                        int64_t * v36 = mempcpy((int64_t *)(v35 | 8), (int64_t *)v24, (int32_t)v32); // 0x414b14
                        int64_t v37 = v15 + 1; // 0x414b19
                        *(char *)v36 = 0;
                        *(int64_t *)v35 = 0;
                        *(int64_t *)v22 = v35;
                        v20 = *(char *)v37;
                        v7 = v35;
                        v9 = v34;
                        v10 = v37;
                        v11 = v37;
                        v12 = 0;
                        goto lab_0x4149ee;
                    } else {
                        return 0xffffffff;
                    }
                } else {
                    goto lab_0x4149e5;
                }
            }
            if ((1 << (int64_t)((v31 + 31) % 64) & 0xc0000601) != 0) {
                int64_t v38 = v15 + 1; // 0x414a04
                if (*(char *)v38 == 40) {
                    // 0x414a0b
                    v16 = v38;
                    v19 = v18 + 1;
                    goto lab_0x4149e5;
                }
            }
            // 0x414a0b
            v16 = v15;
            v19 = v18;
            if (v31 != 41) {
                goto lab_0x4149e5;
            }
            if (v18 == 0) {
                // 0x414b66
                if ((((int32_t)v4 < 65 ? v5 : v15 - v24 + 1) + 15 & -8) < 0x1f3f) {
                    // 0x414b9e
                    int64_t v39; // 0x414b89
                    int64_t v40 = v26 + 15 - (v39 + 23 & -16) & -16; // 0x414bae
                    int64_t v41; // 0x414b73
                    int64_t * v42 = mempcpy((int64_t *)(v40 | 8), (int64_t *)v24, (int32_t)v41); // 0x414bb9
                    *(int64_t *)v22 = v40;
                    *(char *)v42 = 0;
                    v27 = v1;
                    *(int64_t *)v40 = 0;
                    if (v27 == 0) {
                        // 0x414e8a
                        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_match");
                        return &g209;
                    }
                    char v43 = *(char *)(v15 - 1); // 0x414bdd
                    if (v43 != 41) {
                        // 0x414e71
                        __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_match");
                        // 0x414e8a
                        __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_match");
                        return &g209;
                    }
                    int64_t v44 = v4 + 0xffffffdf; // 0x414bec
                    g207 = v44 & 0xffffffff;
                    switch ((int32_t)v44) {
                        case 0: {
                            // 0x414d15
                            if (a3 > a4) {
                                return 0xffffffff;
                            } else {
                                // 0x414d23
                                v28 = a6 % 2 != 0 ? a6 : a6 & -5;
                                v30 = 0x100000000 * v15 >> 32;
                                v13 = a3;
                                // 0x414d3f
                                v14 = v13;
                                v17 = v27;
                                goto lab_0x414d48;
                            }
                        }
                        case 9: {
                            // 0x414c02
                            if ((int32_t)function_414eb0(v15, a3, a4, v29, a6) == 0) {
                                return 0xffffffff;
                            } else {
                                goto lab_0x414c22;
                            }
                        }
                        case 10: {
                            goto lab_0x414c22;
                        }
                        case 30: {
                            // 0x414e0c
                            if ((int32_t)function_414eb0(v15, a3, a4, v29, a6) != 0) {
                                goto lab_0x414dbc;
                            } else {
                                return 0xffffffff;
                            }
                        }
                        case 31: {
                            goto lab_0x414dbc;
                        }
                        default: {
                            // 0x414e58
                            __assert_fail("! \"Invalid extended matching operator\"", "lib/fnmatch_loop.c", 1197, "ext_match");
                            // 0x414e71
                            __assert_fail("p[-1] == L_(')')", "lib/fnmatch_loop.c", 1109, "ext_match");
                            // 0x414e8a
                            __assert_fail("list != NULL", "lib/fnmatch_loop.c", 1108, "ext_match");
                            return &g209;
                        }
                    }
                } else {
                    return 0xffffffff;
                }
            }
            int64_t v45 = v15 + 1; // 0x414a1c
            char v46 = *(char *)v45; // 0x414a1c
            if (v46 == 0) {
                return 0xffffffff;
            }
            v18--;
            v15 = v45;
            v31 = v46;
        }
        int32_t v47 = g194; // 0x414a68
        v8 = v24;
        if (g194 == 0) {
            // 0x414b40
            v8 = v24;
            int32_t v48 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1; // 0x414b58
            g194 = v48;
            v47 = v48;
        }
        // 0x414a6e
        v25 = v8;
        int64_t v49 = v15 + 1; // 0x414a6e
        char v50 = *(char *)v49; // 0x414a6e
        if (v50 == 33) {
            goto lab_0x414ac0;
        } else {
            // 0x414a77
            v21 = v50;
            v23 = v49;
            if (v47 < 0 == v50 == 94) {
                goto lab_0x414ac0;
            } else {
                goto lab_0x414a89;
            }
        }
    }
  lab_0x414a35_3:
    // 0x414a35
    return 0xffffffff;
  lab_0x4149e5:;
    int64_t v51 = v16 + 1; // 0x4149e5
    v20 = *(char *)v51;
    v7 = v22;
    v9 = v26;
    v10 = v24;
    v11 = v51;
    v12 = v19;
    goto lab_0x4149ee;
  lab_0x414ac0:;
    int64_t v82 = v15 + 2; // 0x414ac0
    v21 = *(char *)v82;
    v23 = v82;
    goto lab_0x414a89;
  lab_0x414a89:;
    int64_t v83 = v23;
    char v84 = v21; // 0x414a8b
    int64_t v85 = v83; // 0x414a8b
    int64_t v86; // 0x414960
    int64_t v87; // 0x414960
    char v88; // 0x414960
    if (v21 != 93) {
        goto lab_0x414aab;
    } else {
        char v89 = *(char *)(v83 + 1); // 0x414a8d
        int64_t v90 = v83 + 2; // 0x414a95
        v88 = v89;
        v87 = v90;
        v86 = v90;
        if (v89 == 93) {
            goto lab_0x414ab3;
        } else {
            goto lab_0x414aa0;
        }
    }
  lab_0x414aab:;
    int64_t v91 = v85 + 1;
    v88 = v84;
    v87 = v91;
    v86 = v91;
    if (v84 != 93) {
        goto lab_0x414aa0;
    } else {
        goto lab_0x414ab3;
    }
  lab_0x414aa0:
    // 0x414aa0
    if (v88 == 0) {
        // break -> 0x414a35
        goto lab_0x414a35_3;
    }
    // 0x414aa4
    v84 = *(char *)v87;
    v85 = v87;
    goto lab_0x414aab;
  lab_0x414ab3:
    // 0x414ab3
    v20 = *(char *)v86;
    v7 = v22;
    v9 = v26;
    v10 = v25;
    v11 = v86;
    v12 = v18;
    goto lab_0x4149ee;
  lab_0x4149ee:
    // 0x4149ee
    v6 = v20;
    if (v6 == 0) {
        // break -> 0x414a35
        goto lab_0x414a35_3;
    }
    goto lab_0x4149f2;
  lab_0x414c22:;
    int32_t v52 = a6 % 2 != 0 ? a6 : a6 & -5; // 0x414c3f
    int64_t v53 = str - 1; // 0x414c43
    int64_t v54 = 0x100000000 * v15 >> 32;
    int64_t v55 = v27; // 0x414c4f
    goto lab_0x414c53;
  lab_0x414dbc:;
    int32_t v62 = a6 % 2 != 0 ? a6 : a6 & -5; // 0x414dce
    char * str2 = (char *)v15; // 0x414de7
    int64_t v61 = v27; // 0x414dd1
    goto lab_0x414de0;
  lab_0x414c53:;
    int64_t v56 = v55;
    int64_t v57 = a3; // 0x414c56
    int64_t v58 = v56; // 0x414c56
    int64_t v59 = v56; // 0x414c56
    if (a3 > a4) {
        goto lab_0x414e32;
    } else {
        goto lab_0x414cd3;
    }
  lab_0x414de0:;
    int64_t v60 = v61;
    char * dest_str = strcat((char *)(v60 + 8), str2); // 0x414de7
    if ((int32_t)function_414eb0((int64_t)dest_str, a3, a4, v29, v62) != 0) {
        int64_t v63 = *(int64_t *)v60; // 0x414dd3
        v1 = v63;
        v61 = v63;
        if (v63 == 0) {
            goto lab_0x414a35_3;
        } else {
            goto lab_0x414de0;
        }
    } else {
        goto lab_0x414a35_3;
    }
  lab_0x414e32:;
    int64_t v64 = v59;
    int64_t v65 = *(int64_t *)v64; // 0x414e32
    v1 = v65;
    v55 = v65;
    if (v65 != 0) {
        goto lab_0x414c53;
    } else {
        goto lab_0x414a35_3;
    }
  lab_0x414cd3:;
    int64_t v66 = v58;
    int64_t v67 = v57;
    int64_t v68 = function_414eb0(v66 + 8, a3, v67, v29, v52); // 0x414ce3
    int64_t v69 = v66; // 0x414cea
    if ((int32_t)v68 != 0) {
        goto lab_0x414cc6;
    } else {
        int64_t v70; // 0x414cc2
        if (v67 != a3) {
            char * v71 = (char *)(v67 - 1); // 0x414c6a
            char v72 = *v71; // 0x414c6a
            if ((int32_t)function_414eb0(v54, v67, a4, (int64_t)((a6 & 5) == 5 == v72 == 47), v52) == 0) {
                goto lab_0x414a35_3;
            } else {
                char v73 = *v71; // 0x414c97
                if ((int32_t)function_414eb0(v53, v67, a4, (int64_t)((a6 & 5) == 5 == v73 == 47), v52) == 0) {
                    goto lab_0x414a35_3;
                } else {
                    // 0x414cc2
                    v70 = v1;
                    v69 = v70;
                    goto lab_0x414cc6;
                }
            }
        } else {
            // 0x414cf5
            if ((int32_t)function_414eb0(v54, a3, a4, v29, v52) != 0) {
                // 0x414cc2
                v70 = v1;
                v69 = v70;
                goto lab_0x414cc6;
            } else {
                goto lab_0x414a35_3;
            }
        }
    }
  lab_0x414d48:;
    int64_t v74 = v17;
    int64_t v75; // 0x414960
    if ((int32_t)function_414eb0(v74 + 8, a3, v14, v29, v28) == 0) {
        goto lab_0x414da4;
    } else {
        int64_t v76 = *(int64_t *)v74; // 0x414d61
        v17 = v76;
        if (v76 != 0) {
            goto lab_0x414d48;
        } else {
            // 0x414d69
            v75 = v29;
            if (v14 == a3) {
                goto lab_0x414d89;
            } else {
                char v77 = *(char *)(v14 - 1); // 0x414d74
                v75 = (a6 & 5) == 5 == v77 == 47;
                goto lab_0x414d89;
            }
        }
    }
  lab_0x414cc6:;
    int64_t v78 = v69;
    int64_t v79 = v67 + 1; // 0x414cc6
    v57 = v79;
    v58 = v78;
    v59 = v78;
    if (v79 > a4) {
        goto lab_0x414e32;
    } else {
        goto lab_0x414cd3;
    }
  lab_0x414da4:;
    int64_t v80 = v14 + 1; // 0x414da4
    v13 = v80;
    if (v80 <= a4) {
        // 0x414d3f
        v14 = v13;
        v17 = v27;
        goto lab_0x414d48;
    } else {
        goto lab_0x414a35_3;
    }
  lab_0x414d89:;
    int64_t v81 = v75;
    if ((int32_t)function_414eb0(v30, v14, a4, v81, v28) == 0) {
        goto lab_0x414a35_3;
    } else {
        goto lab_0x414da4;
    }
}
// Address range: 0x414eb0 - 0x415993
int64_t function_414eb0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint32_t a5) {
    char v1 = a1;
    int64_t v2 = a2; // 0x414ede
    int64_t result; // 0x414eb0
    if (v1 == 0) {
      lab_0x4151a9:
        // 0x4151a9
        if (v2 == a3) {
            // 0x4151c5
            return 0;
        }
        // 0x4151b4
        result = 1;
        if ((a5 & 8) != 0) {
            // 0x4158dc
            result = *(char *)v2 != 47;
        }
      lab_0x4151c5_3:
        // 0x4151c5
        return result;
    }
    int64_t v3 = a5;
    uint32_t v4 = a5 % 2;
    int64_t v5 = a1; // 0x414efc
    char v6 = v1; // 0x414efc
    int64_t v7 = a2; // 0x414efc
    int64_t v8 = a4 & 0xffffffff; // 0x414efc
    int64_t v9; // 0x414eb0
    int64_t v10; // 0x414eb0
    int64_t v11; // 0x414eb0
    int64_t v12; // 0x414eb0
    uint64_t v13; // 0x414eb0
    int64_t v14; // 0x414eb0
    int64_t result2; // 0x414eb0
    int64_t v15; // 0x414eb0
    int64_t v16; // 0x414eb0
    int32_t v17; // 0x414eb0
    int64_t v18; // 0x414eb0
    int64_t v19; // 0x414eb0
    int64_t v20; // 0x414eb0
    int64_t v21; // 0x414eb0
    char * wc; // 0x414eb0
    unsigned char v22; // 0x414f99
    while (true) {
      lab_0x414eff:
        // 0x414eff
        v13 = v8;
        v12 = v7;
        v19 = v5;
        int64_t v23 = v6;
        int64_t v24 = v23; // 0x414f01
        if ((v3 & 16) != 0) {
            int32_t ** v25 = __ctype_tolower_loc(); // 0x414f03
            v24 = (int64_t)*(char *)(4 * v23 + (int64_t)*v25);
        }
        // 0x414f10
        v18 = v19 + 1;
        v9 = v24;
        uint64_t v26 = v9 + 0xffffffdf; // 0x414f10
        g206 = v26 % 256;
        switch ((char)v26) {
            case 0: {
                goto lab_0x4151e0;
            }
            case 9: {
                goto lab_0x415220;
            }
            case 10: {
                goto lab_0x4151e0;
            }
            case 14: {
                if ((a5 & 5) == 5) {
                    // 0x4155f8
                    if (v12 == a3) {
                        // 0x4151c5
                        return 1;
                    }
                    // 0x415603
                    v11 = v18;
                    v8 = 1;
                    if (*(char *)v12 != 47) {
                        // 0x4151c5
                        return 1;
                    }
                    goto lab_0x41518e;
                } else {
                    goto lab_0x415163;
                }
            }
            case 30: {
                if ((a5 & 32) != 0) {
                    // 0x41570b
                    if (*(char *)v18 == 40) {
                        int64_t v27 = function_414960(63, v18, v12, a3, v13 % 256, a5); // 0x415731
                        result = v27;
                        if ((int32_t)v27 != -1) {
                            // 0x4151c5
                            return result;
                        }
                    }
                }
                // 0x41512b
                if (v12 == a3) {
                    // 0x4151c5
                    return 1;
                }
                char v28 = *(char *)v12; // 0x415136
                if (v28 == 47) {
                    // 0x415630
                    v11 = v18;
                    v8 = 0;
                    if (v4 != 0) {
                        // 0x4151c5
                        return 1;
                    }
                } else {
                    unsigned char v29 = (char)(v28 == 46) & (char)v13; // 0x415147
                    if (v29 != 0) {
                        // 0x4151c5
                        return 1;
                    }
                    // 0x41514c
                    v11 = v18;
                    v8 = v29;
                }
                goto lab_0x41518e;
            }
            case 31: {
                goto lab_0x4151e0;
            }
            case 58: {
                int32_t v30 = g194; // 0x414f88
                if (g194 == 0) {
                    // 0x415640
                    v30 = getenv("POSIXLY_CORRECT") == NULL ? -1 : 1;
                    g194 = v30;
                }
                // 0x414f8e
                if (v12 == a3) {
                    // 0x4151c5
                    return 1;
                }
                int32_t v31 = v30; // 0x414fc5
                wc = (char *)v12;
                v22 = *wc;
                if (v22 == 46) {
                    // 0x415620
                    if ((char)v13 != 0) {
                        // 0x4151c5
                        return 1;
                    }
                } else {
                    // 0x414fa7
                    if (v22 == 47 == (v4 != 0)) {
                        // 0x4151c5
                        return 1;
                    }
                }
                char v32 = *(char *)v18; // 0x414fb8
                if (v32 == 33) {
                    // 0x4155e0
                    v17 = 1;
                    v14 = v19 + 2;
                    goto lab_0x414fe4;
                } else {
                    // 0x414fc5
                    v17 = 0;
                    v14 = v18;
                    if (v31 < 0 == v32 == 94) {
                        // 0x4155e0
                        v17 = 1;
                        v14 = v19 + 2;
                        goto lab_0x414fe4;
                    } else {
                        goto lab_0x414fe4;
                    }
                }
            }
            case 59: {
                if ((v3 & 2) != 0) {
                    // 0x4153d0
                    if (v12 == a3) {
                        // 0x4151c5
                        return 1;
                    }
                    // 0x4153db
                    v20 = v18;
                    v21 = 92;
                    if ((v3 & 16) == 0) {
                        goto lab_0x414f66;
                    } else {
                        int32_t * v33 = *__ctype_tolower_loc(); // 0x4153ed
                        v15 = 92;
                        v16 = (int64_t)v33;
                        v10 = v18;
                        goto lab_0x4153f5;
                    }
                } else {
                    unsigned char v34 = *(char *)v18; // 0x414f38
                    if (v34 == 0) {
                        // 0x4151c5
                        return 1;
                    }
                    int64_t v35 = v34; // 0x414f38
                    int64_t v36 = v19 + 2; // 0x414f3d
                    if ((v3 & 16) != 0) {
                        int32_t * v37 = *__ctype_tolower_loc(); // 0x415675
                        if (v12 == a3) {
                            // 0x4151c5
                            result2 = result;
                            return result2;
                        }
                        int64_t v38 = (int64_t)v37; // 0x415675
                        v15 = (int64_t)(*(int32_t *)(4 * v35 + v38) % 256);
                        v16 = v38;
                        v10 = v36;
                        goto lab_0x4153f5;
                    } else {
                        // 0x414f57
                        v20 = v36;
                        v21 = v35;
                        if (v12 == a3) {
                            // 0x4151c5
                            return 1;
                        }
                        goto lab_0x414f66;
                    }
                }
            }
            default: {
                goto lab_0x415163;
            }
        }
    }
  lab_0x415220:
    if ((a5 & 32) != 0) {
        // 0x415748
        if (*(char *)v18 == 40) {
            // 0x415753
            if ((int32_t)function_414960(42, v18, v12, a3, v13 % 256, a5) != -1) {
                // 0x4151c5
                result2 = result;
                return result2;
            }
        }
    }
    if (v12 != a3) {
        // 0x415238
        if (*(char *)v12 == 46) {
            // 0x41523e
            if ((char)v13 != 0) {
                // 0x4151c5
                return 1;
            }
        }
    }
    char v39 = *(char *)v18; // 0x415247
    int64_t v40 = v19 + 2; // 0x41524c
    char v41 = v39; // 0x415254
    int64_t v42 = v40; // 0x415254
    int64_t v43 = v12; // 0x415254
    char * v44; // 0x414eb0
    int64_t v45; // 0x414eb0
    int64_t v46; // 0x414eb0
    int64_t v47; // 0x414eb0
    char v48; // 0x414eb0
    char v49; // 0x414eb0
    int64_t v50; // 0x414eb0
    int64_t v51; // 0x414eb0
    int64_t v52; // 0x414eb0
    char * v53; // 0x414eb0
    if (v39 != 42 != v39 != 63) {
        // 0x41525c
        v48 = v39;
        v50 = v40;
        v45 = v12;
        while (true) {
          lab_0x415278_2:
            // 0x415278
            v46 = v45;
            v51 = v50;
            v49 = v48;
            v53 = (char *)v51;
            if ((a5 & 32) != 0 == *v53 == 40) {
                int64_t v54 = function_4137f0(v51); // 0x415515
                if (v54 != v51) {
                    // 0x415508
                    v44 = (char *)v54;
                    v52 = v54;
                    v47 = v46;
                    goto lab_0x415294;
                } else {
                    goto lab_0x415287;
                }
            } else {
                goto lab_0x415287;
            }
        }
        // 0x4151c5
        result2 = result;
        return result2;
    }
  lab_0x4152a8:;
    int64_t v55 = v43;
    if (v41 == 0) {
        // 0x4157e8
        if (v4 == 0) {
            // 0x4151c5
            return 0;
        }
        // 0x4157f0
        if ((a5 & 8) == 0) {
            // 0x4151c5
            return function_416f00(v55, 47, a3 - v55) != 0;
        }
        // 0x4151c5
        return 0;
    }
    int64_t v56 = function_416f00(v55, -v4 & 47, a3 - v55); // 0x4152db
    int64_t v57 = 0x100000000000000 * v42 >> 56; // 0x4152f0
    uint64_t v58 = v56 == 0 ? a3 : v56; // 0x4152f5
    if (v41 == 91) {
        goto lab_0x4156ba;
    } else {
        if ((a5 & 32) != 0 == v41 < 65) {
            if ((1 << (int64_t)((v41 + 31) % 64) & 0x80000401) == 0) {
                goto lab_0x41530f;
            } else {
                // 0x4156b0
                if (*(char *)v57 != 40) {
                    goto lab_0x41530f;
                } else {
                    goto lab_0x4156ba;
                }
            }
        } else {
            goto lab_0x41530f;
        }
    }
  lab_0x415287:
    // 0x415287
    v44 = v53;
    v52 = v51;
    v47 = v46;
    if (v49 == 63) {
        // 0x415408
        if (v46 == a3) {
            return 1;
        }
        // 0x415413
        if (!((v4 == 0 | *(char *)v46 != 47))) {
            return 1;
        }
        // 0x41541d
        v44 = v53;
        v52 = v51;
        v47 = v46 + 1;
    }
    goto lab_0x415294;
  lab_0x415294:;
    char v59 = *v44; // 0x415294
    int64_t v60 = v52 + 1; // 0x415298
    v41 = v59;
    v42 = v60;
    v43 = v47;
    switch (v59) {
        case 63: {
            goto lab_0x415278;
        }
        case 42: {
            goto lab_0x415278;
        }
        default: {
            goto lab_0x4152a8;
        }
    }
  lab_0x415278:
    // 0x415278
    v48 = v59;
    v50 = v60;
    v45 = v47;
    goto lab_0x415278_2;
  lab_0x415488:;
    // 0x415488
    int64_t v61; // 0x414eb0
    int64_t v62 = v61 + 1; // 0x415488
    int64_t v63 = v62; // 0x415490
    int64_t v64 = 58; // 0x415490
    char * v65; // 0x414eb0
    char * v66 = v65; // 0x415490
    int64_t v67 = v62; // 0x415490
    int64_t v68 = v61; // 0x415490
    int64_t v69; // 0x414eb0
    if (v69 == 91) {
        goto lab_0x415820;
    }
    goto lab_0x41502a;
  lab_0x415820:;
    int64_t v97 = v67; // 0x415825
    int64_t v98 = (int64_t)*v66; // 0x415825
    int64_t v99 = v68; // 0x415825
    goto lab_0x4150d7;
  lab_0x4150d7:;
    char v160 = v98; // 0x4150dc
    char v137 = v160; // 0x4150df
    int64_t v151 = v98; // 0x4150df
    int64_t v135 = v99; // 0x4150df
    int64_t v150 = v97; // 0x4150df
    result = 1;
    if (v160 == 0) {
        goto lab_0x4151c5_3;
    } else {
        goto lab_0x4150e5;
    }
  lab_0x4150d3:;
    // 0x4150d3
    int64_t v149; // 0x414eb0
    v97 = v149 + 1;
    int64_t v148; // 0x414eb0
    v98 = v148;
    v99 = v149;
    goto lab_0x4150d7;
  lab_0x41506b:;
    // 0x41506b
    int64_t v81; // 0x414eb0
    int64_t v161 = v81;
    int64_t v80; // 0x414eb0
    int64_t v162 = v80;
    int64_t v79; // 0x414eb0
    int64_t v163 = v79;
    int64_t v164 = v162 + 1; // 0x41506b
    int64_t v100; // 0x414eb0
    int64_t v101; // 0x414eb0
    char v165; // 0x415075
    unsigned char v111; // 0x414eb0
    if (v163 != 45) {
        // 0x415010
        v100 = v164;
        v101 = v163;
        if (v111 == (char)v161) {
            // 0x415010
            v66 = (char *)v162;
            v67 = v164;
            v68 = v162;
            goto lab_0x415820;
        }
        goto lab_0x415020;
    } else {
        // 0x415075
        v165 = *(char *)v164;
        switch (v165) {
            case 93: {
                goto lab_0x4154a8;
            }
            case 0: {
                goto lab_0x4154a8;
            }
            default: {
                goto lab_0x41508f;
            }
        }
    }
  lab_0x41516a:;
    // 0x41516a
    char * v82; // 0x414eb0
    int64_t v103 = (int64_t)*v82; // 0x41516a
    int64_t v104 = v103; // 0x415173
    if ((v3 & 16) != 0) {
        int32_t * v105 = *__ctype_tolower_loc(); // 0x41517a
        v104 = (int64_t)*(int32_t *)(4 * v103 + (int64_t)v105);
    }
    // 0x415181
    v11 = v18;
    v8 = 0;
    int64_t v83; // 0x414eb0
    if ((int32_t)v104 != (int32_t)v83) {
        // 0x4151c5
        return 1;
    }
    goto lab_0x41518e;
  lab_0x415050:;
    // 0x415050
    int64_t v87; // 0x414eb0
    int64_t v170 = v87;
    int64_t v86; // 0x414eb0
    int64_t v171 = v86;
    char v85; // 0x414eb0
    int64_t v172 = v85;
    v79 = v172;
    v80 = v171;
    v81 = v170;
    if ((v3 & 16) != 0) {
        int32_t * v173 = *__ctype_tolower_loc(); // 0x415063
        v79 = v172;
        v80 = v171;
        v81 = (int64_t)*(char *)(4 * v170 + (int64_t)v173);
    }
    goto lab_0x41506b;
  lab_0x415020:;
    int64_t v174 = v100;
    v63 = v174;
    v64 = v101;
    int32_t v107; // 0x414eb0
    if (v101 == 93) {
        // 0x4157c0
        v11 = v174;
        v8 = 0;
        result = 1;
        if (v107 != 0) {
            goto lab_0x41518e;
        } else {
            goto lab_0x4151c5_3;
        }
    }
    goto lab_0x41502a;
  lab_0x4154a8:
    // 0x4154a8
    v97 = v164;
    v98 = v163;
    v99 = v162;
    if (v111 == (char)v161) {
        goto lab_0x4150d7;
    }
    // 0x4154b1
    v85 = 93;
    v86 = v164;
    v87 = 45;
    if (v165 != 93) {
        goto lab_0x41508f;
    } else {
        goto lab_0x415050;
    }
  lab_0x41508f:;
    int64_t v175 = v162 + 2; // 0x41508f
    int64_t v176 = v175; // 0x415095
    char v177 = v165; // 0x415095
    if ((v3 & 2) == 0 == v165 == 92) {
        // 0x4155c8
        v176 = v162 + 3;
        v177 = *(char *)v175;
    }
    // 0x4150a0
    if (v177 == 0) {
        // 0x4151c5
        return 1;
    }
    int64_t v178 = (int64_t)*(char *)v176; // 0x4150a8
    v100 = v176 + 1;
    v101 = v178;
    v148 = v178;
    v149 = v176;
    int32_t v110; // 0x414ff5
    if (v110 >= (int32_t)(0x100000000000000 * v161 >> 56) && v177 >= v111) {
        goto lab_0x4150d3;
    }
    goto lab_0x415020;
  lab_0x41502a:;
    int64_t v70 = v63; // 0x414eb0
    int64_t v71 = v64; // 0x414eb0
    goto lab_0x41502a_2;
  lab_0x4151e0:
    if ((a5 & 32) != 0) {
        // 0x4151eb
        if (*(char *)v18 == 40) {
            int64_t v102 = function_414960(v9, v18, v12, a3, v13 % 256, a5); // 0x415210
            result = v102;
            if ((int32_t)v102 != -1) {
                // 0x4151c5
                return result;
            }
        }
    }
    goto lab_0x415163;
  lab_0x415163:
    // 0x415163
    if (v12 == a3) {
        // 0x4151c5
        return 1;
    }
    // 0x415163
    v82 = (char *)v12;
    v83 = v9;
    goto lab_0x41516a;
  lab_0x41518e:
    // 0x41518e
    v5 = v11;
    v6 = *(char *)v5;
    v7 = v12 + 1;
    v2 = v7;
    if (v6 == 0) {
        goto lab_0x4151a9;
    }
    goto lab_0x414eff;
  lab_0x414fe4:;
    int64_t v106 = v22; // 0x414f99
    v107 = v17;
    int64_t v108 = v106; // 0x414fe6
    if ((v3 & 16) != 0) {
        int32_t * v109 = *__ctype_tolower_loc(); // 0x414fed
        v108 = (int64_t)*(char *)(4 * v106 + (int64_t)v109);
    }
    // 0x414ff5
    v69 = v108;
    v110 = v69;
    v111 = (char)v69;
    v70 = v14 + 1;
    v71 = (int64_t)*(char *)v14;
    while (true) {
      lab_0x41502a_2:;
        int64_t v72 = v71;
        v61 = v70;
        char v73 = v72; // 0x41502e
        if ((v3 & 2) == 0 == v73 == 92) {
            unsigned char v74 = *(char *)v61; // 0x4154d8
            if (v74 == 0) {
                // 0x4151c5
                return 1;
            }
            int64_t v75 = v74; // 0x4154d8
            int64_t v76 = v75; // 0x4154e8
            if ((v3 & 16) != 0) {
                int32_t * v77 = *__ctype_tolower_loc(); // 0x4154ef
                v76 = (int64_t)*(char *)(4 * v75 + (int64_t)v77);
            }
            int64_t v78 = v61 + 1; // 0x4154f7
            v79 = (int64_t)*(char *)v78;
            v80 = v78;
            v81 = v76;
            goto lab_0x41506b;
        } else {
            // 0x415038
            v82 = wc;
            v83 = 91;
            switch (v73) {
                case 91: {
                    // 0x415430
                    v65 = (char *)v61;
                    char v84 = *v65; // 0x415430
                    v85 = v84;
                    v86 = v61;
                    v87 = v72;
                    int64_t v88 = v61; // 0x415439
                    if (v84 != 58) {
                        goto lab_0x415050;
                    } else {
                        int64_t v89 = 0;
                        int64_t v90 = v88 + 1; // 0x415471
                        char v91 = *(char *)v90; // 0x415471
                        while (v91 != 58) {
                            if (v91 >= 122) {
                                goto lab_0x415488;
                            }
                            int64_t v92 = v89 + 1; // 0x415459
                            int64_t v93; // bp-376, 0x414eb0
                            *(char *)((int64_t)&v93 + 47 + v92) = v91;
                            if (v89 == 255) {
                                // 0x4151c5
                                return 1;
                            }
                            v89 = v92;
                            v90++;
                            v91 = *(char *)v90;
                        }
                        // 0x41547e
                        int64_t v94; // 0x414eb0
                        if (*(char *)(v94 + 2) == 93) {
                            // 0x41587a
                            int64_t v95; // 0x414eb0
                            *(char *)(v95 + v89) = 0;
                            int64_t name; // bp-328, 0x414eb0
                            int32_t desc = wctype((char *)&name); // 0x415889
                            if (desc == 0) {
                                // 0x4151c5
                                return 1;
                            }
                            // 0x41589f
                            if (iswctype(btowc((int32_t)*wc), desc) != 0) {
                                int64_t v96 = v94 + 3; // 0x415974
                                v97 = v94 + 4;
                                v98 = (int64_t)*(char *)v96;
                                v99 = v96;
                                goto lab_0x4150d7;
                            }
                            // 0x4158c4
                            v100 = v94 + 4;
                            v101 = (int64_t)*(char *)((0x100000000000000 * v90 >> 56) + 2);
                            goto lab_0x415020;
                        } else {
                            goto lab_0x415488;
                        }
                    }
                }
                case 0: {
                    goto lab_0x41516a;
                }
                default: {
                    // 0x41504b
                    v85 = *(char *)v61;
                    v86 = v61;
                    v87 = v72;
                    goto lab_0x415050;
                }
            }
        }
    }
    goto lab_0x41516a;
  lab_0x414f66:;
    int64_t v112 = v21; // 0x414f6a
    int32_t v113 = (int32_t)*(char *)v12; // 0x414f6a
    int64_t v114 = v20; // 0x414f6a
    goto lab_0x414f6f;
  lab_0x414f6f:
    // 0x414f6f
    v11 = v114;
    v8 = 0;
    if (v113 != (int32_t)v112) {
        // 0x4151c5
        return 1;
    }
    goto lab_0x41518e;
  lab_0x4153f5:;
    int32_t v115 = *(int32_t *)(4 * (int64_t)*(char *)v12 + v16); // 0x4153f9
    v112 = v15;
    v113 = v115;
    v114 = v10;
    goto lab_0x414f6f;
  lab_0x4156ba:;
    int32_t v116 = v4 != 0 ? a5 : a5 & -5; // 0x4156c9
    int64_t v117 = v55; // 0x4156d2
    if (v58 <= v55) {
        // 0x4151c5
        return 1;
    }
    int64_t v118 = v13; // 0x4156d2
    result = 0;
    while ((int32_t)function_414eb0(v57 - 1, v117, a3, v118 % 256, v116) != 0) {
        int64_t v119 = v117 + 1; // 0x4156fa
        result = 1;
        v117 = v119;
        v118 = 0;
        if (v58 == v119) {
            // break -> 0x4151c5
            break;
        }
        result = 0;
    }
    // 0x4151c5
    return result;
  lab_0x41530f:;
    int32_t v120; // 0x414eb0
    if (v41 == 47) {
        if (v4 != 0) {
            int64_t v121 = v55; // 0x415904
            if (v55 >= a3) {
                // 0x4151c5
                result2 = result;
                return result2;
            }
            int64_t v122 = v121 + 1;
            while (*(char *)v121 != 47) {
                // 0x415910
                v121 = v122;
                if (v122 == a3) {
                    // 0x4151c5
                    return 1;
                }
                v122 = v121 + 1;
            }
            // 0x415923
            result = (int32_t)function_414eb0(v57, v122, a3, (int64_t)(a5 / 4 % 2), a5) != 0;
            // 0x4151c5
            return result;
        }
        // 0x4158d2
        v120 = a5 & -5;
        goto lab_0x415321;
    } else {
        // 0x415319
        v120 = a5;
        if (v4 == 0) {
            // 0x4158d2
            v120 = a5 & -5;
            goto lab_0x415321;
        } else {
            goto lab_0x415321;
        }
    }
  lab_0x415321:;
    char v123 = v41; // 0x415329
    if ((v3 & 2) == 0 && v41 == 92) {
        // 0x415957
        v123 = *(char *)v57;
    }
    int64_t v124 = v123;
    int64_t v125 = v124; // 0x415331
    if ((v3 & 16) != 0) {
        int32_t * v126 = *__ctype_tolower_loc(); // 0x41534d
        v125 = (int64_t)*(char *)(4 * v124 + (int64_t)v126);
    }
    // 0x415355
    if (v58 <= v55) {
        // 0x4151c5
        return 1;
    }
    int64_t v127 = v57 - 1; // 0x415355
    int64_t v128 = v13 % 256;
    int64_t v129 = (int64_t)*(char *)v55; // 0x415380
    int64_t v130 = v129; // 0x415389
    int32_t * v131; // 0x415394
    if ((v3 & 16) != 0) {
        // 0x41538b
        v131 = *__ctype_tolower_loc();
        v130 = (int64_t)*(int32_t *)(4 * v129 + (int64_t)v131);
    }
    // 0x41539a
    if ((int32_t)v125 == (int32_t)v130) {
        // 0x41539e
        if ((int32_t)function_414eb0(v127, v55, a3, v128, v120) == 0) {
            // break -> 0x4151c5
            break;
        }
    }
    int64_t v132 = v55 + 1; // 0x415370
    result = 1;
    while (v58 != v132) {
        int64_t v133 = v132;
        v129 = (int64_t)*(char *)v133;
        v130 = v129;
        if ((v3 & 16) != 0) {
            // 0x41538b
            v131 = *__ctype_tolower_loc();
            v130 = (int64_t)*(int32_t *)(4 * v129 + (int64_t)v131);
        }
        // 0x41539a
        if ((int32_t)v125 == (int32_t)v130) {
            // 0x41539e
            result = 0;
            if ((int32_t)function_414eb0(v127, v133, a3, 0, v120) == 0) {
                // break -> 0x4151c5
                break;
            }
        }
        // 0x415370
        v132 = v133 + 1;
        result = 1;
    }
    // 0x4151c5
    return result;
  lab_0x4150e5:;
    int64_t v134 = v135;
    char v136 = v137;
    char v138; // 0x414eb0
    int64_t v139; // 0x414eb0
    int64_t v140; // 0x414eb0
    int64_t v141; // 0x414eb0
    int64_t v142; // 0x414eb0
    int64_t v143; // 0x414eb0
    int64_t v144; // 0x414eb0
    char v145; // 0x414eb0
    int64_t v146; // 0x414eb0
    if ((v3 & 2) == 0 == v136 == 92) {
        // 0x4155a8
        result = 1;
        if (*(char *)(v134 + 1) == 0) {
            goto lab_0x4151c5_3;
        } else {
            int64_t v147 = v134 + 2; // 0x4155b3
            v148 = (int64_t)*(char *)v147;
            v149 = v147;
            goto lab_0x4150d3;
        }
    } else {
        // 0x4150fb
        v142 = v150;
        v143 = v151;
        v141 = v142;
        if (v136 == 91) {
            char v152 = *(char *)(v134 + 1); // 0x415550
            if (v152 == 58) {
                // 0x41582a
                v146 = v134 + 256;
                v144 = v134 + 2;
                goto lab_0x41585d;
            } else {
                int64_t v153 = v134 + 2;
                if (v152 == 61) {
                    // 0x415788
                    result = 1;
                    if (*(char *)v153 == 0) {
                        goto lab_0x4151c5_3;
                    } else {
                        // 0x415793
                        result = 1;
                        if (*(char *)(v134 + 3) != 61) {
                            goto lab_0x4151c5_3;
                        } else {
                            // 0x41579e
                            result = 1;
                            if (*(char *)(v134 + 4) != 93) {
                                goto lab_0x4151c5_3;
                            } else {
                                // 0x4157a9
                                v143 = (int64_t)*(char *)(v134 + 5);
                                v141 = v134 + 6;
                                goto lab_0x415105;
                            }
                        }
                    }
                } else {
                    // 0x415569
                    v145 = v152;
                    if (v152 != 46) {
                        goto lab_0x4150d3_2;
                    } else {
                        int64_t v154 = v134 + 3; // 0x41558d
                        char v155 = *(char *)v154; // 0x41558d
                        result = 1;
                        v138 = v155;
                        v139 = v154;
                        v140 = v153;
                        if (v155 == 0) {
                            goto lab_0x4151c5_3;
                        } else {
                            goto lab_0x41559e;
                        }
                    }
                }
            }
        } else {
            goto lab_0x415105;
        }
    }
  lab_0x415105:;
    int64_t v156 = v141;
    if ((char)v143 == 93) {
        // 0x415960
        v11 = v156;
        v8 = (v3 & 2) == 0 == v136 == 92;
        result = 1;
        if (v107 != 0) {
            goto lab_0x4151c5_3;
        } else {
            goto lab_0x41518e;
        }
    } else {
        unsigned char v157 = *(char *)v156; // 0x415111
        v137 = v157;
        v151 = v157;
        v135 = v156;
        v150 = v156 + 1;
        result = 1;
        if (v157 == 0) {
            goto lab_0x4151c5_3;
        } else {
            goto lab_0x4150e5;
        }
    }
  lab_0x41585d:;
    int64_t v158 = v144;
    char v159 = *(char *)v158;
    if (v159 != 58) {
        // 0x415840
        v148 = 58;
        v149 = v142;
        if (v159 < 122) {
            // 0x41584d
            result = 1;
            v144 = v158 + 1;
            if (v146 == v158) {
                goto lab_0x4151c5_3;
            } else {
                goto lab_0x41585d;
            }
        } else {
            goto lab_0x4150d3;
        }
    } else {
        // 0x415863
        v145 = v159;
        if (*(char *)(v158 + 1) != 93) {
            goto lab_0x4150d3_2;
        } else {
            // 0x41586d
            v143 = (int64_t)*(char *)(v158 + 2);
            v141 = v158 + 3;
            goto lab_0x415105;
        }
    }
  lab_0x4150d3_2:
    // 0x4150d3
    v148 = v145;
    v149 = v142;
    goto lab_0x4150d3;
  lab_0x41559e:;
    int64_t v166 = v139;
    if (v138 != 46) {
        goto lab_0x41558a;
    } else {
        int64_t v167 = v140;
        if (*(char *)(v167 + 2) == 93) {
            // 0x4158ea
            v143 = (int64_t)*(char *)(v167 + 3);
            v141 = v167 + 4;
            goto lab_0x415105;
        } else {
            goto lab_0x41558a;
        }
    }
  lab_0x41558a:;
    int64_t v168 = v166 + 1; // 0x41558d
    char v169 = *(char *)v168; // 0x41558d
    result = 1;
    v138 = v169;
    v139 = v168;
    v140 = v166;
    if (v169 == 0) {
        goto lab_0x4151c5_3;
    } else {
        goto lab_0x41559e;
    }
}
// Address range: 0x4159a0 - 0x415be0
int64_t function_4159a0(int64_t a1, int64_t a2, uint32_t a3) {
    uint64_t v1 = (int64_t)a3; // 0x4159ac
    int64_t wstr = a1; // bp-80, 0x4159b4
    int64_t wstr2 = a2; // bp-88, 0x4159b8
    int64_t v2 = a2; // 0x4159c5
    if (__ctype_get_mb_cur_max() != 1) {
        int64_t ps = 0; // bp-64, 0x415a08
        int32_t v3 = mbsrtowcs(NULL, (char **)&wstr, 0, (struct _TYPEDEF___mbstate_t *)&ps); // 0x415a14
        uint64_t len = (int64_t)v3 + 1; // 0x415a19
        v2 = a2;
        if (len != 0) {
            // 0x415a22
            if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                // 0x415bbf
                __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                return &g209;
            }
            int32_t v4 = mbsrtowcs(NULL, (char **)&wstr2, 0, (struct _TYPEDEF___mbstate_t *)&ps); // 0x415a3f
            int64_t len2 = (int64_t)v4 + 1; // 0x415a44
            if (len2 != 0) {
                // 0x415a51
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                    // 0x415ba6
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 301, "gnu_fnmatch");
                    // 0x415bbf
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                    return &g209;
                }
                uint64_t v5 = len2 + len; // 0x415a65
                if (v5 >= len != v5 < 0x4000000000000000) {
                    // 0x415b05
                    *__errno_location() = 12;
                    // 0x4159ef
                    return 0xffffffff;
                }
                int64_t size = 4 * v5; // 0x415a81
                if (v5 < 2000) {
                    // 0x415a95
                    int64_t v6; // bp-104, 0x4159a0
                    int64_t wstr3 = (int64_t)&v6 + 15 - (size + 23 & -16) & -16; // 0x415ab0
                    mbsrtowcs((int32_t *)wstr3, (char **)&wstr, (int32_t)len, (struct _TYPEDEF___mbstate_t *)&ps);
                    if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) != 0) {
                        int64_t wstr4 = wstr3 + 4 * len; // 0x415ab7
                        mbsrtowcs((int32_t *)wstr4, (char **)&wstr2, (int32_t)len2, (struct _TYPEDEF___mbstate_t *)&ps);
                        // 0x4159ef
                        return function_413e80(wstr3, wstr4, 4 * len2 - 4 + wstr4, v1 / 4 % 2, a3);
                    }
                    // 0x415b8d
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 327, "gnu_fnmatch");
                    // 0x415ba6
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 301, "gnu_fnmatch");
                    // 0x415bbf
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                    return &g209;
                }
                int64_t * mem = malloc((int32_t)size); // 0x415b1a
                if (mem == NULL) {
                    // 0x415b05
                    *__errno_location() = 12;
                    // 0x4159ef
                    return 0xffffffff;
                }
                // 0x415b27
                mbsrtowcs((int32_t *)mem, (char **)&wstr, (int32_t)len, (struct _TYPEDEF___mbstate_t *)&ps);
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                    // 0x415b8d
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 327, "gnu_fnmatch");
                    // 0x415ba6
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 301, "gnu_fnmatch");
                    // 0x415bbf
                    __assert_fail("mbsinit (&ps)", "lib/fnmatch.c", 297, "gnu_fnmatch");
                    return &g209;
                }
                int64_t v7 = (int64_t)mem; // 0x415b1a
                int64_t wstr5 = 4 * len + v7; // 0x415b35
                mbsrtowcs((int32_t *)wstr5, (char **)&wstr2, (int32_t)len2, (struct _TYPEDEF___mbstate_t *)&ps);
                int64_t v8 = function_413e80(v7, wstr5, 4 * len2 - 4 + wstr5, v1 / 4 % 2, a3); // 0x415b75
                free(mem);
                // 0x4159ef
                return v8 & 0xffffffff;
            }
            // 0x415a33
            v2 = wstr2;
        }
    }
    int64_t str = v2; // 0x4159c7
    // 0x4159ef
    return function_414eb0(wstr, str, str + (int64_t)strlen((char *)str), v1 / 4 % 2, a3);
}
// Address range: 0x415be0 - 0x4160a2
int64_t function_415be0(int32_t a1, int32_t a2) {
    // 0x415be0
    int32_t size; // 0x415be0
    int32_t v1; // 0x415be0
    int32_t v2; // 0x415be0
    if (a2 != 0) {
        // 0x415c40
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x415c12;
        } else {
            goto lab_0x415c5c;
        }
    } else {
        // 0x415c00
        size = 0x1000;
        if (a1 != 0) {
            // 0x416000
            *__errno_location() = 22;
            // 0x415c26
            return 0;
        }
        goto lab_0x415c12;
    }
  lab_0x415fa0:;
    // 0x415fa0
    int32_t v3; // 0x415f9a
    int64_t v4 = v3; // 0x415fa2
    int64_t v5; // 0x415be0
    int64_t dirp2 = v5; // 0x415fa2
    int32_t * v6; // 0x415ce6
    if (v3 != 0) {
        goto lab_0x415fb1;
    } else {
        // 0x415fa4
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x415fb1;
    }
  lab_0x415db2:;
    // 0x415db2
    int64_t v7; // 0x415be0
    int64_t v8 = v7;
    int64_t v9; // 0x415be0
    int64_t v10 = v9 + 19; // 0x415db2
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x415be0
    int64_t v12; // 0x415be0
    int32_t v13; // 0x415be0
    int32_t fd; // 0x415d02
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x415de5
        if (v11 == v12) {
            // break -> 0x415e00
            goto lab_0x415e00;
        }
    }
    int64_t v14 = v8; // 0x415be0
    goto lab_0x415d70_2;
  lab_0x41607e_2:
    // 0x41607e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x415fb1;
  lab_0x415c12:;
    int64_t * mem = malloc(size); // 0x415c17
    int32_t v41 = (int64_t)mem; // 0x415c1c
    int32_t result = v41; // 0x415c24
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x415c26
        return result;
    }
    goto lab_0x415c5c;
  lab_0x415c5c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x415c61
    int64_t v46 = v45 - 1; // 0x415c70
    *(char *)v46 = 0;
    int64_t v47; // 0x415be0
    int64_t v48; // 0x415be0
    int32_t * v49; // 0x415be0
    int64_t v50; // 0x415be0
    int64_t v33; // 0x415be0
    int64_t v40; // 0x415be0
    int64_t v51; // 0x415be0
    int32_t v38; // 0x415be0
    int32_t v52; // 0x415be0
    int32_t v53; // 0x415be0
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x415fd8;
    } else {
        // 0x415c86
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x415fd8;
        } else {
            // 0x415cb1
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x415ef8;
            } else {
                // 0x415ce6
                v6 = __errno_location();
                int32_t v54 = v1; // 0x415cf3
                int32_t v55 = v42; // 0x415cf3
                int64_t v56 = v11; // 0x415cf3
                int64_t v57 = v46; // 0x415cf3
                int64_t v58 = 0; // 0x415cf3
                int32_t fd2 = -100; // 0x415cf3
                int64_t dirp3; // 0x415be0
                while (true) {
                    // 0x415cf6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x416027
                        break;
                    }
                    // 0x415d12
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x416038
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x41601d;
                        } else {
                            // 0x416041
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x41601d;
                        }
                    }
                    // 0x415d2b
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x415d30
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x416019
                            v40 = (int64_t)*v6;
                            goto lab_0x41601d;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x415d57
                    if (dirp == NULL) {
                        // 0x416019
                        v40 = (int64_t)*v6;
                        goto lab_0x41601d;
                    }
                    // 0x415d68
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x415d70_2:;
                        int64_t v15 = v14; // 0x415be0
                        int64_t v16; // 0x415be0
                        int64_t v17; // 0x415be0
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x415d7b
                            int64_t v20; // 0x415be0
                            int64_t v21; // 0x415be0
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x415f50
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x415fa0;
                                }
                                // 0x415f5d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x415f68
                                if (v23 == NULL) {
                                    // 0x415f9a
                                    v3 = *v6;
                                    goto lab_0x415fa0;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x415db2;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x415d93
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x415f80
                            if (*(char *)v28 != 0) {
                                // 0x415f8a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x415d93
                                    break;
                                }
                            }
                            // 0x415d70
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x415db2;
                        } else {
                            // 0x415d98
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x415dad
                            int64_t v32; // 0x415be0
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x415d70
                                v14 = v31;
                                goto lab_0x415d70_2;
                            } else {
                                goto lab_0x415db2;
                            }
                        }
                    }
                  lab_0x415e00:;
                    int64_t v61 = v38; // 0x415e08
                    uint64_t v62 = v57 - v61; // 0x415e08
                    int32_t len = strlen(str); // 0x415e0d
                    uint64_t v63 = (int64_t)len; // 0x415e0d
                    int32_t v64 = v60; // 0x415e18
                    int32_t v65 = v38; // 0x415e18
                    int64_t dest_mem = v57; // 0x415e18
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x416090
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x415fb1;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x415e26
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x415e31
                        uint64_t v68 = v67 + v66; // 0x415e35
                        if (v68 < v66) {
                            goto lab_0x41607e_2;
                        }
                        // 0x415e48
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x415e50
                        if (mem2 == NULL) {
                            goto lab_0x41607e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x415e50
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x415ead
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x415ede
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x415fe0;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x415ef8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x416027
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x415fb9;
                } else {
                    goto lab_0x415fb1;
                }
            }
        }
    }
  lab_0x415fd8:
    // 0x415fd8
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x415fe0;
  lab_0x415fe0:;
    int64_t v77 = (int64_t)*v49; // 0x415fe6
    int64_t v34 = v77; // 0x415fea
    int32_t * v35 = v49; // 0x415fea
    int32_t * v36 = v49; // 0x415fea
    int32_t v37 = v53; // 0x415fea
    int64_t v39 = v77; // 0x415fea
    if (a1 != 0) {
        goto lab_0x415fc1;
    } else {
        goto lab_0x415fec;
    }
  lab_0x415fc1:
    // 0x415fc1
    *v35 = (int32_t)v34;
    // 0x415c26
    return 0;
  lab_0x415fec:
    // 0x415fec
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x415fc1;
  lab_0x415ef8:
    // 0x415ef8
    if (v51 == v47 - 1 + v48) {
        // 0x416067
        int64_t v78; // 0x415be0
        int64_t v79 = v78 - 1; // 0x41606c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x415f22
    int32_t v81 = v50 - v51; // 0x415f22
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x415f2d
    if (a2 == 0) {
        // 0x416050
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x415c26
    return result2;
  lab_0x415fb9:
    // 0x415fb9
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x415fec;
    } else {
        goto lab_0x415fc1;
    }
  lab_0x415fb1:
    // 0x415fb1
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x415fb9;
  lab_0x41601d:
    // 0x41601d
    close(fd);
    v33 = v40;
    goto lab_0x415fb9;
}
// Address range: 0x4160b0 - 0x41618f
int64_t function_4160b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4160bc
    uint32_t v2 = *v1; // 0x4160bc
    int64_t v3 = a2 & 0xffffffff; // 0x4160c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4160c4
    uint64_t v5 = (int64_t)*v4; // 0x4160c4
    int64_t v6; // 0x416132
    if (v3 <= v5) {
      lab_0x41612c_2:
        // 0x41612c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4160b2
    int64_t v8 = v2; // 0x4160b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x41612c
        goto lab_0x41612c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4160e8
    int64_t v17; // 0x4160f6
    int64_t * v18; // 0x416110
    int64_t * v19; // 0x416113
    int64_t v20; // 0x41611e
    int64_t v21; // 0x4160f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4160f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x416110
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x416127
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x41612c
            goto lab_0x41612c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x41612c
            goto lab_0x41612c_2;
        }
        // 0x4160e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x41616b
    int64_t * v23 = (int64_t *)v22; // 0x416170
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x416173
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x416170
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x416187
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4160dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x41612c
            goto lab_0x41612c_2;
        }
        // 0x4160e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4160f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x416110
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x416127
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x41612c
                goto lab_0x41612c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x41612c
                goto lab_0x41612c_2;
            }
            // 0x4160e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x416150
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x416170
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x416187
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x41612c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x416190 - 0x4167ac
int64_t function_416190(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4161af
    int64_t v2 = *v1; // 0x4161af
    char * str2 = (char *)v2; // 0x4161bc
    char c = *str2; // 0x4161bc
    int64_t v3 = v2; // 0x4161e8
    int64_t v4 = 0; // 0x416190
    int32_t v5; // 0x416190
    int64_t v6; // 0x416190
    int64_t v7; // 0x416190
    int64_t v8; // 0x416190
    int64_t v9; // 0x416190
    int64_t v10; // 0x416190
    int64_t v11; // 0x416190
    int64_t v12; // 0x416190
    int64_t v13; // 0x416190
    int64_t str3; // 0x416190
    int64_t v14; // 0x416190
    int64_t v15; // 0x416190
    int64_t v16; // 0x416190
    int64_t v17; // 0x416190
    int32_t v18; // 0x416190
    int32_t v19; // 0x416190
    int32_t v20; // 0x416190
    int32_t v21; // 0x416190
    int32_t v22; // 0x416190
    int32_t v23; // 0x416190
    int32_t v24; // 0x416190
    int32_t v25; // 0x416190
    int32_t v26; // 0x416190
    int32_t v27; // 0x416190
    int32_t v28; // 0x416190
    int32_t v29; // 0x416190
    int64_t nmemb; // 0x416190
    int64_t v30; // 0x416190
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4161ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4161e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4161f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4161fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4161c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x41622c
                int64_t v34; // 0x416190
                int64_t v35; // 0x416190
                if (strncmp(str, str2, n) == 0) {
                    // 0x416235
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4163b0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x416246
                int64_t v37 = *(int64_t *)v36; // 0x41624a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x416220
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x416235
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4163b0;
                        }
                    }
                    // 0x416246
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
                  lab_0x416296:
                    // 0x416296
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
                        goto lab_0x4162f0;
                    } else {
                        if (v11 == 0) {
                            // 0x416460
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4162f0;
                        } else {
                            if (v39 == 0) {
                                // 0x416410
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4162ba;
                                } else {
                                    // 0x41641c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4162ba;
                                    } else {
                                        // 0x41642a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4162ba;
                                        } else {
                                            goto lab_0x4162f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4162ba;
                            }
                        }
                    }
                }
              lab_0x416301:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4164d6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x416682
                            flockfile(g88);
                            int64_t v41 = *v1; // 0x4166a2
                            __fprintf_chk(g88, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4166ef
                            int64_t v43 = (int64_t)g88;
                            int64_t v44 = v43; // 0x416709
                            int64_t v45; // 0x41670b
                            if (*(char *)v42 != 0) {
                                // 0x41670b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g88;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x416703
                            while (v17 + nmemb != v42) {
                                // 0x416705
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x41670b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g88;
                                }
                                // 0x4166f8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x416730
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g88);
                            v40 = *v1;
                        } else {
                            // 0x4164e4
                            __fprintf_chk(g88, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x41663f
                        free((int64_t *)v17);
                    }
                    // 0x416539
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x416550
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4163fe
                    return 63;
                }
                // 0x416320
                v5 = v39;
                if (v13 != 0) {
                    // 0x4163a4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4163b0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4163c0
                    uint32_t v50 = *v49; // 0x4163c0
                    int64_t v51 = v50; // 0x4163c0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4163ca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4163d3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4165ff
                                __fprintf_chk(g88, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4165aa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4163fe
                            return 63;
                        }
                        // 0x416448
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x41675f
                                    __fprintf_chk(g88, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x41665d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x416670
                                // 0x4163fe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x41656e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x416582
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4163eb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4163ee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4163f2
                    int64_t result = v59; // 0x4163f8
                    if (v58 != 0) {
                        // 0x4163fa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4163fe
                    return result;
                }
            } else {
                // 0x4161fe
                v5 = v32;
            }
            // break -> 0x416325
            break;
        }
    }
    // 0x416325
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x41633d
        if (*(char *)(v60 + 1) != 45) {
            // 0x416347
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4163fe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x416489
        __fprintf_chk(g88, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x416376
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x416386
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4162f0:
    // 0x4162f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4162f0
    int64_t v63 = *(int64_t *)v62; // 0x4162f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x416301
        goto lab_0x416301;
    }
    goto lab_0x416296;
  lab_0x4162ba:
    // 0x4162ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x416190
    int32_t v65; // 0x416190
    int32_t v66; // 0x416190
    if (v27 != 0) {
        goto lab_0x4162f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x416470
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4162f0;
            } else {
                goto lab_0x4162e1;
            }
        } else {
            // 0x4162d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4165cc
                int64_t v67 = (int64_t)mem; // 0x4165cc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4162f0;
                } else {
                    // 0x4165df
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4162e1;
                }
            } else {
                goto lab_0x4162e1;
            }
        }
    }
  lab_0x4162e1:
    // 0x4162e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4162f0;
}
// Address range: 0x4167b0 - 0x416d76
int64_t function_4167b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4167d1
    if (v3 < 1) {
        // 0x41698e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4167cd
    int32_t v5 = *(int32_t *)a7; // 0x4167d9
    uint64_t v6 = a1 & 0xffffffff; // 0x4167db
    int64_t v7 = v2; // 0x4167e0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4167e3
    *v8 = 0;
    int64_t v9; // 0x4167b0
    int64_t v10; // 0x4167b0
    int64_t v11; // 0x4167b0
    int64_t v12; // 0x4167b0
    int64_t str; // 0x4167b0
    int64_t v13; // 0x4167b0
    int64_t v14; // 0x4167b0
    int64_t v15; // 0x4167b0
    int64_t v16; // 0x4167b0
    int64_t v17; // 0x4167b0
    int32_t v18; // 0x4167b0
    char v19; // 0x4167b0
    if (v5 == 0) {
        // 0x4169c8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4167fa;
    } else {
        // 0x4167f3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x416840
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x416843
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x416908;
            } else {
                int64_t v22 = v7 + 1; // 0x416856
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x416866
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x41691c;
                } else {
                    goto lab_0x416878;
                }
            }
        } else {
            goto lab_0x4167fa;
        }
    }
  lab_0x4167fa:
    // 0x4167fa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x416800
    *v24 = 0;
    int64_t v25; // 0x4167b0
    int64_t v26; // 0x4167b0
    int64_t v27; // 0x4167b0
    switch (*(char *)&v2) {
        case 45: {
            // 0x4168f0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4168fd;
        }
        case 43: {
            // 0x416c00
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4168fd;
        }
        default: {
            // 0x41681c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x416b7f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x416c98
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4168fd;
                } else {
                    // 0x416b8d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x41682a;
                }
            } else {
                goto lab_0x41682a;
            }
        }
    }
  lab_0x416908:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x41690f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x416878;
    } else {
        goto lab_0x41691c;
    }
  lab_0x41682a:
    // 0x41682a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4168fd;
  lab_0x4168fd:
    // 0x4168fd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x416908;
  lab_0x416878:;
    uint32_t v30 = *(int32_t *)a7; // 0x416878
    int64_t v31 = v30; // 0x416878
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x41687a
    if ((int64_t)*v32 > v31) {
        // 0x41687f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x416882
    if (*v33 > v30) {
        // 0x416887
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x41688a
    int64_t v35 = v31; // 0x41688e
    int64_t v36 = v15; // 0x41688e
    int64_t v37; // 0x4167b0
    int64_t v38; // 0x4167b0
    int64_t v39; // 0x4167b0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4169f8
        int64_t v41 = v40; // 0x4169f8
        v2 = v41;
        int64_t v42; // 0x4167b0
        if (*v33 == v40) {
            // 0x416be0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x416be8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x416a04
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x416a08
                function_4160b0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x416a18
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x416a21
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x416a2a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x416a41
            int64_t v47 = v45 & 0xffffffff; // 0x416a45
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x416a4e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x416a54
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x416a56;
                }
            }
            int64_t v48 = v47 + 1; // 0x416a30
            int64_t v49 = v48 & 0xffffffff; // 0x416a30
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x416a41
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x416a4e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x416a54
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x416a56;
                    }
                }
                // 0x416a30
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x416bf8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x416a56;
    } else {
        goto lab_0x416894;
    }
  lab_0x41691c:
    // 0x41691c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x41691f
    int64_t v51 = v12; // 0x41691f
    int64_t v52 = v14; // 0x41691f
    if (*(char *)v10 == 0) {
        goto lab_0x416878;
    } else {
        goto lab_0x416925;
    }
  lab_0x416894:;
    int32_t v53 = v35; // 0x416894
    int64_t v54; // 0x4167b0
    int64_t v55; // 0x4167b0
    int64_t v56; // 0x4167b0
    int64_t v57; // 0x4167b0
    int64_t v58; // 0x4167b0
    int64_t v59; // 0x4167b0
    char * v60; // 0x4167b0
    int64_t v61; // 0x4167b0
    int64_t v62; // 0x4168a9
    int64_t v63; // 0x4167b0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4169e3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4169e6;
    } else {
        // 0x41689c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4167b0
        int64_t v66 = v65 ? -1 : 1; // 0x4168b0
        int64_t v67 = (int64_t)"--"; // 0x4167b0
        int64_t v68 = v62; // 0x4167b0
        int64_t v69 = 3; // 0x4168b0
        unsigned char v70 = *(char *)v68; // 0x4168b0
        char v71 = *(char *)v67; // 0x4168b0
        char v72 = v71; // 0x4168b0
        bool v73 = false; // 0x4168b0
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
            // 0x4169a0
            if (*(char *)v62 == 45) {
                // 0x416a60
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x416a60
                if (c == 0) {
                    goto lab_0x4169aa;
                } else {
                    // 0x416a6d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x416af0;
                    } else {
                        if (c == 45) {
                            // 0x416cd3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x416b45;
                        } else {
                            // 0x416a7e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x416af0;
                            } else {
                                // 0x416a83
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x416aa4;
                                } else {
                                    // 0x416a8a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x416af0;
                                    } else {
                                        goto lab_0x416aa4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4169aa;
            }
        } else {
            uint32_t v75 = *v33; // 0x4168c0
            v2 = v75;
            int32_t v76 = *v32; // 0x4168c3
            int64_t v77 = v35 + 1; // 0x4168c6
            int32_t v78 = v77; // 0x4168c9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x416c30
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4168d7
                    function_4160b0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4168e5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4169e6;
        }
    }
  lab_0x416925:;
    // 0x416925
    int64_t v79; // bp-104, 0x4167b0
    int64_t v80 = &v79; // 0x4167ba
    int64_t v81 = v50 + 1; // 0x416925
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x41692c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x416931
    *v83 = v81;
    char v84 = *(char *)v2; // 0x416935
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x416939
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x416941
    *v86 = v84;
    char * str2 = (char *)v52; // 0x416946
    int32_t c2 = v84; // 0x416946
    char * found_char_pos = strchr(str2, c2); // 0x416946
    int64_t v87 = *v82; // 0x41694b
    v2 = v87;
    int64_t v88 = *v85; // 0x416955
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x416960
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x416c50
            __fprintf_chk(g88, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x416c1d
        *(int32_t *)(v1 + 8) = c2;
        // 0x41698e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x416946
    char v91 = *(char *)(v90 + 1); // 0x41697b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x416935
        if (v91 != 58) {
            // 0x41698e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x416ba4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x416ca8
                *v8 = 0;
            } else {
                // 0x416c8c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x416bce
            *v83 = 0;
            // 0x41698e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x416bae
        if (v93 != 0) {
            // 0x416c40
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x416bce
            *v83 = 0;
            // 0x41698e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x416bc1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x416bce
            *v83 = 0;
            // 0x41698e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x416d0a
            __fprintf_chk(g88, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x416cba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x416cc1
        // 0x416bce
        *v83 = 0;
        // 0x41698e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x416b19
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x416b1b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x416d40
                __fprintf_chk(g88, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x416cf1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x416cf8
            // 0x41698e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x416b26
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x416b2a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x416b45;
  lab_0x416a56:
    // 0x416a56
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x416894;
  lab_0x416b45:;
    int64_t v99 = function_416190(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x416b63
    // 0x41698e
    return v99 & 0xffffffff;
  lab_0x4169e6:;
    int32_t v100 = v55; // 0x4169e6
    if (v100 != (int32_t)v59) {
        // 0x4169ea
        *(int32_t *)a7 = v100;
    }
    // 0x41698e
    return 0xffffffff;
  lab_0x4169aa:
    // 0x4169aa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4169b1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x41698e
    return v99 & 0xffffffff;
  lab_0x416af0:
    // 0x416af0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x416925;
  lab_0x416aa4:
    // 0x416aa4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_416190(v6, a2, str, a4, a5, v57, v1, v11, &g41); // 0x416aca
    if ((int32_t)v101 != -1) {
        // 0x41698e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x416adf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x416af0;
}
// Address range: 0x416d80 - 0x416dd6
int64_t function_416d80(int64_t a1) {
    // 0x416d80
    *(int32_t *)&g195 = g84;
    *(int32_t *)&g196 = g83;
    int64_t v1; // 0x416d80
    int64_t result = function_4167b0(v1, v1, v1, v1, v1, v1, &g195, a1 & 0xffffffff); // 0x416da6
    g84 = *(int32_t *)&g195;
    g202 = (char *)g198;
    *(int32_t *)&g82 = g197;
    return result;
}
// Address range: 0x416de0 - 0x416df8
int64_t function_416de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x416de0
    return function_416d80(1);
}
// Address range: 0x416e00 - 0x416e13
int64_t function_416e00(int64_t a1, int64_t a2, char * a3, char (**a4)[4], int64_t a5, int64_t a6) {
    // 0x416e00
    return function_416d80(0);
}
// Address range: 0x416e20 - 0x416e35
int64_t function_416e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x416e20
    return function_4167b0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x416e40 - 0x416e56
int64_t function_416e40(void) {
    // 0x416e40
    return function_416d80(0);
}
// Address range: 0x416e60 - 0x416e78
int64_t function_416e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x416e60
    return function_4167b0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x416e80 - 0x416efa
int64_t function_416e80(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x416e8b
    int64_t v2 = (int64_t)&g24; // 0x416e8b
    int64_t * pwc; // 0x416e80
    int64_t v3; // 0x416e80
    int64_t n; // 0x416e80
    if (a2 == 0) {
        goto lab_0x416ed2;
    } else {
        // 0x416e8d
        if (a3 == 0) {
            // 0x416eb8
            return -2;
        }
        // 0x416e99
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x416ed2;
        } else {
            goto lab_0x416ea4;
        }
    }
  lab_0x416ed2:
    // 0x416ed2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x416e80
    pwc = &v4;
    goto lab_0x416ea4;
  lab_0x416ea4:;
    char * wstr = (char *)v3; // 0x416eaa
    int64_t ps; // 0x416e80
    int32_t v5 = mbrtowc((int32_t *)pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x416eaa
    int64_t result = v5; // 0x416eaa
    if (v5 < 0xfffffffe) {
        // 0x416eb8
        return result;
    }
    int64_t result2 = result; // 0x416ee9
    if ((char)function_40c190(0, v3) == 0) {
        // 0x416eeb
        *(int32_t *)pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x416eb8
    return result2;
}
// Address range: 0x416f00 - 0x417004
int64_t function_416f00(int64_t result, int32_t a2, int64_t a3) {
    // 0x416f00
    if (a3 == 0) {
        // 0x416f39
        return 0;
    }
    int64_t v1 = result; // 0x416f0c
    int64_t v2 = a3; // 0x416f0c
    int64_t result2; // 0x416f00
    if (result % 8 != 0) {
        char v3 = a2; // 0x416f0e
        int64_t v4 = result; // 0x416f11
        if ((char)result == v3) {
            // 0x416f39
            return result;
        }
        int64_t v5 = a3; // 0x416f11
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x416f20
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x416f40;
            }
            // 0x416f26
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x416f39
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x416f39
        return result2;
    }
  lab_0x416f40:;
    int64_t result3 = v1; // 0x416f6d
    int64_t v6 = v2; // 0x416f6d
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x416f4f
        int64_t v9 = 0x10000 * v8 | v8; // 0x416f5c
        int64_t v10 = 0x100000000 * v9 | v9; // 0x416f66
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x416f86
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x416fb5
            int64_t v13 = v1 + 8; // 0x416fb9
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x416fa3
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x416fcc;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x416fc3
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x416f39
                return 0;
            }
        }
    }
  lab_0x416fcc:;
    char v15 = a2; // 0x416fcc
    if (*(char *)result3 == v15) {
        // 0x416f39
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x416fe0
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x416f39
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x416f39
    return result2;
}
// Address range: 0x417010 - 0x41704b
int64_t function_417010(int64_t a1) {
    // 0x417010
    __fprintf_chk(g88, 1, "%s\n", dcgettext(NULL, "memory exhausted", 5));
    exit(g76);
    // UNREACHABLE
}
// Address range: 0x417050 - 0x417065
int64_t function_417050(int64_t a1, int64_t a2) {
    // 0x417050
    return *(int64_t *)(a1 + 56);
}
// Address range: 0x417070 - 0x417085
int64_t function_417070(int64_t a1, int64_t a2) {
    // 0x417070
    return *(int64_t *)(a1 + 64);
}
// Address range: 0x417090 - 0x417113
int64_t function_417090(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 == 0 ? 15 : a3 - 1;
    *(int64_t *)(a1 + 48) = v1;
    int64_t v2 = a2 == 0 ? 4064 : a2; // 0x4170b2
    *(int64_t *)a1 = v2;
    int64_t v3 = function_417050(a1, v2); // 0x4170b9
    *(int64_t *)(a1 + 8) = v3;
    if (v3 == 0) {
        // 0x41710d
        function_417010(a1);
        // UNREACHABLE
    }
    int64_t v4 = v1 + 16 + v3 & (a3 == 0 ? -16 : -a3); // 0x4170cf
    *(int64_t *)(a1 + 16) = v4;
    int64_t v5 = v3 + a1; // 0x4170d9
    *(int64_t *)(a1 + 24) = v4;
    *(int64_t *)v3 = v5;
    *(int64_t *)(a1 + 32) = v5;
    *(int64_t *)(v3 + 8) = 0;
    char * v6 = (char *)(a1 + 80); // 0x4170f4
    *v6 = *v6 & -7;
    return 1;
}
// Address range: 0x417120 - 0x417131
int64_t _obstack_begin(int64_t * a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    char * v2 = (char *)(v1 + 80); // 0x417120
    *v2 = *v2 & -2;
    *(int64_t *)(v1 + 56) = a4;
    *(int64_t *)(v1 + 64) = a5;
    return function_417090(v1, (int64_t)a2, (int64_t)a3);
}
// Address range: 0x417140 - 0x417155
int64_t _obstack_begin_1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a1 + 80); // 0x417140
    *v1 = *v1 | 1;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    *(int64_t *)(a1 + 72) = a6;
    return function_417090(a1, a2, a3);
}
// Address range: 0x417160 - 0x41725b
int64_t _obstack_newchunk(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x41716a
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x41716e
    uint64_t v3 = *v1 - *v2; // 0x41716e
    uint64_t v4 = v3 + a2; // 0x417176
    if (v4 < a2) {
        // 0x417255
        function_417010(a1);
        // UNREACHABLE
    }
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x41717f
    uint64_t v6 = v4 + *v5; // 0x41717f
    if (v6 < v4) {
        // 0x417255
        function_417010(a1);
        // UNREACHABLE
    }
    int64_t * v7 = (int64_t *)(a1 + 8); // 0x417172
    int64_t v8 = *v7; // 0x417172
    uint64_t v9 = v3 / 8 + 100 + v6; // 0x41718d
    uint64_t v10 = v6 <= a1 ? a1 : v6; // 0x417192
    int64_t v11 = v10 >= v9 ? v10 : v9; // 0x417199
    int64_t v12 = function_417050(a1, v11); // 0x4171b8
    if (v12 == 0) {
        // 0x417255
        function_417010(a1);
        // UNREACHABLE
    }
    int64_t v13 = v12 + v11; // 0x4171c9
    *v7 = v12;
    int64_t * v14 = (int64_t *)(v12 + 8); // 0x4171d5
    *v14 = v8;
    *(int64_t *)(a1 + 32) = v13;
    *(int64_t *)v12 = v13;
    int64_t v15 = *v5; // 0x4171e1
    int64_t v16 = v12 + 16 + v15 & -1 - v15; // 0x4171f3
    int64_t * dest_mem = memcpy((int64_t *)v16, (int64_t *)*v2, (int32_t)v3); // 0x4171f9
    char * v17 = (char *)(a1 + 80); // 0x4171fe
    int64_t result = (int64_t)dest_mem; // 0x417204
    if ((*v17 & 2) == 0) {
        int64_t v18 = *v5; // 0x417206
        int64_t v19 = v8 + 16 + v18 & -1 - v18; // 0x417213
        result = v19;
        if (*v2 == v19) {
            // 0x417240
            *v14 = *(int64_t *)(v8 + 8);
            result = function_417070(a1, v8);
        }
    }
    // 0x41721d
    *v2 = v16;
    *v1 = v16 + v3;
    *v17 = *v17 & -3;
    return result;
}
// Address range: 0x417260 - 0x417297
int64_t _obstack_allocated_p(int64_t a1, uint64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x417260
    if (v1 == 0) {
        // 0x417283
        return 0;
    }
    if (v1 < a2) {
        // 0x417275
        if (*(int64_t *)v1 >= a2) {
            // break -> 0x417283
            break;
        }
    }
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x41727a
    int64_t result = 0; // 0x417281
    while (v2 != 0) {
        uint64_t v3 = v2;
        if (v3 < a2) {
            // 0x417275
            result = 1;
            if (*(int64_t *)v3 >= a2) {
                // break -> 0x417283
                break;
            }
        }
        // 0x41727a
        v2 = *(int64_t *)(v3 + 8);
        result = 0;
    }
    // 0x417283
    return result;
}
// Address range: 0x4172a0 - 0x417305
int64_t _obstack_free(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4172a7
    int64_t v2 = *v1; // 0x4172a7
    int64_t result2; // 0x4172a0
    if (v2 != 0) {
        char * v3 = (char *)(a1 + 80);
        uint64_t result; // 0x4172bd
        if (v2 < a2) {
            // 0x4172bd
            result = *(int64_t *)v2;
            if (result >= a2) {
                // 0x4172f0
                *(int64_t *)(a1 + 24) = a2;
                *(int64_t *)(a1 + 16) = a2;
                *(int64_t *)(a1 + 32) = result;
                *v1 = v2;
                return result;
            }
        }
        int64_t v4 = *(int64_t *)(v2 + 8); // 0x4172c5
        int64_t v5 = function_417070(a1, v2); // 0x4172cc
        *v3 = *v3 | 2;
        result2 = v5;
        while (v4 != 0) {
            uint64_t v6 = v4;
            if (v6 < a2) {
                // 0x4172bd
                result = *(int64_t *)v6;
                if (result >= a2) {
                    // 0x4172f0
                    *(int64_t *)(a1 + 24) = a2;
                    *(int64_t *)(a1 + 16) = a2;
                    *(int64_t *)(a1 + 32) = result;
                    *v1 = v6;
                    return result;
                }
            }
            // 0x4172c5
            v4 = *(int64_t *)(v6 + 8);
            v5 = function_417070(a1, v6);
            *v3 = *v3 | 2;
            result2 = v5;
        }
    }
    if (a2 == 0) {
        // 0x4172e6
        return result2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x417310 - 0x417339
int64_t _obstack_memory_used(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x417310
    int64_t result = 0; // 0x417319
    if (v1 == 0) {
        // 0x417332
        return 0;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x417326
    result += *(int64_t *)v2 - v2;
    while (v3 != 0) {
        // 0x417320
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
        result += *(int64_t *)v2 - v2;
    }
    // 0x417332
    return result;
}
// Address range: 0x417340 - 0x417385
int64_t function_417340(int64_t a1) {
    // 0x417340
    int32_t v1; // 0x417340
    if (*(char *)(a1 + 8) != 0) {
        // 0x417370
        v1 = setenv("TZ", (char *)(a1 + 9), 1);
    } else {
        // 0x41734a
        v1 = unsetenv("TZ");
    }
    int64_t result = 0; // 0x417358
    if (v1 == 0) {
        // 0x41735a
        tzset();
        result = 1;
    }
    // 0x417364
    return result;
}
// Address range: 0x417390 - 0x4173b9
int64_t function_417390(int64_t a1) {
    // 0x417390
    if (a1 == 0) {
        // 0x4173b0
        int64_t result; // 0x417390
        return result;
    }
    int64_t * v1 = (int64_t *)a1; // 0x4173a0
    int64_t v2 = *v1; // 0x4173a0
    free(v1);
    while (v2 != 0) {
        // 0x4173a0
        v1 = (int64_t *)v2;
        v2 = *v1;
        free(v1);
    }
    // 0x4173b0
    return &g209;
}
// Address range: 0x4173c0 - 0x417401
int64_t function_4173c0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4173cd
    int64_t v2 = function_417340(a1); // 0x4173db
    int32_t v3 = *v1; // 0x4173e4
    if ((char)v2 == 0) {
        // 0x4173e6
        v3 = *v1;
    }
    // 0x4173e9
    function_417390(a1);
    *v1 = v3;
    return v2 & 0xffffffff;
}
// Address range: 0x417410 - 0x41749f
int64_t function_417410(int64_t str, int64_t a2, int64_t a3) {
    int64_t result2; // 0x417410
    if (str == 0) {
        int64_t * mem = malloc(128); // 0x41747d
        int64_t result = (int64_t)mem; // 0x41747d
        result2 = result;
        if (mem != NULL) {
            // 0x41748a
            *mem = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int32_t len = strlen((char *)str); // 0x41741c
        uint64_t v1 = (int64_t)len + 1; // 0x417426
        int64_t * mem2 = malloc(v1 >= 118 ? len + 18 & -8 : 128); // 0x41743a
        int64_t v2 = (int64_t)mem2; // 0x41743a
        result2 = v2;
        if (mem2 != NULL) {
            // 0x417447
            *mem2 = 0;
            int64_t v3 = v2 + 9; // 0x417453
            *(int16_t *)(v2 + 8) = 1;
            memcpy((int64_t *)v3, (int64_t *)str, (int32_t)v1);
            *(char *)(v3 + v1) = 0;
            result2 = v2;
        }
    }
    // 0x41746b
    return result2;
}
// Address range: 0x4174a0 - 0x417615
int64_t function_4174a0(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x4174ae
    uint64_t v2 = *v1; // 0x4174ae
    if (v2 == 0) {
        // 0x417551
        return 1;
    }
    int64_t v3; // 0x4174a0
    if (v2 >= a2) {
        int64_t v4 = a2 + 56; // 0x4174c6
        v3 = v4;
        if (v2 < v4) {
            // 0x417551
            return 1;
        }
    }
    char * str2 = (char *)v2; // 0x4174d4
    if (*str2 == 0) {
        // 0x417548
        *v1 = (int64_t)&g24;
        // 0x417551
        return 1;
    }
    int64_t str = a1 + 9; // 0x4174d9
    if (strcmp((char *)str, str2) == 0) {
        // 0x417548
        *v1 = str;
        // 0x417551
        return 1;
    }
    int64_t v5 = a1;
    int64_t v6 = str;
    char * str3 = (char *)v6; // 0x4174f7
    int64_t v7; // 0x4174a0
    int64_t v8; // 0x4174a0
    int64_t v9; // 0x4174a0
    int64_t v10; // 0x4174fc
    if (*str3 == 0) {
        // 0x4174fc
        v10 = v5 + 9;
        if (v6 != v10) {
            // break (via goto) -> 0x417588
            goto lab_0x417588;
        }
        // 0x417509
        if (*(char *)(v5 + 8) == 0) {
            // 0x4175b8
            v8 = 0;
            v9 = v3;
            v7 = (int64_t)strlen(str2) + 1;
            goto lab_0x4175c6;
        }
    }
    int64_t v11 = v6 + 1 + (int64_t)strlen(str3); // 0x41751b
    char * str5 = (char *)v11;
    int64_t v12; // 0x4174a0
    int64_t v13; // 0x417525
    int64_t str4; // 0x41752e
    int32_t strcmp_rc; // 0x41753b
    while (*str5 == 0) {
        // 0x417525
        v13 = *(int64_t *)v5;
        if (v13 == 0) {
            // break -> 0x4174e8
            break;
        }
        // 0x41752e
        str4 = v13 + 9;
        strcmp_rc = strcmp((char *)str4, str2);
        v12 = str4;
        if (strcmp_rc == 0) {
            // 0x417548
            *v1 = v12;
            // 0x417551
            return 1;
        }
        v5 = v13;
        v6 = str4;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x4174fc
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x417588
                goto lab_0x417588;
            }
            // 0x417509
            if (*(char *)(v5 + 8) == 0) {
                // 0x4175b8
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x4175c6;
            }
        }
        // 0x417513
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
    }
    // 0x417548
    *v1 = v11;
    while (strcmp(str5, str2) != 0) {
        // 0x4174f7
        v6 = v11;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x4174fc
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x417588
                goto lab_0x417588;
            }
            // 0x417509
            if (*(char *)(v5 + 8) == 0) {
                // 0x4175b8
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x4175c6;
            }
        }
        // 0x417513
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
        while (*str5 == 0) {
            // 0x417525
            v13 = *(int64_t *)v5;
            if (v13 == 0) {
                // break -> 0x4174e8
                break;
            }
            // 0x41752e
            str4 = v13 + 9;
            strcmp_rc = strcmp((char *)str4, str2);
            v12 = str4;
            if (strcmp_rc == 0) {
                // 0x417548
                *v1 = v12;
                // 0x417551
                return 1;
            }
            v5 = v13;
            v6 = str4;
            str3 = (char *)v6;
            if (*str3 == 0) {
                // 0x4174fc
                v10 = v5 + 9;
                if (v6 != v10) {
                    // break (via goto) -> 0x417588
                    goto lab_0x417588;
                }
                // 0x417509
                if (*(char *)(v5 + 8) == 0) {
                    // 0x4175b8
                    v8 = 0;
                    v9 = v3;
                    v7 = (int64_t)strlen(str2) + 1;
                    goto lab_0x4175c6;
                }
            }
            // 0x417513
            v11 = v6 + 1 + (int64_t)strlen(str3);
            str5 = (char *)v11;
        }
        // 0x417548
        *v1 = v11;
    }
    // 0x417551
    return 1;
  lab_0x417588:;
    int64_t v14 = (int64_t)strlen(str2) + 1; // 0x417590
    int64_t v15 = v6 - v10; // 0x417597
    int64_t v16 = -1 - v15;
    v8 = v15;
    v9 = v16;
    v7 = v14;
    if (v14 > v16) {
        // 0x4175a5
        *__errno_location() = 12;
        // 0x417551
        return 0;
    }
    goto lab_0x4175c6;
  lab_0x4175c6:
    // 0x4175c6
    if (v7 + v8 < 119) {
        // 0x4175cf
        memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v7);
        *(char *)(v7 + v6) = 0;
        // 0x417548
        *v1 = v6;
        // 0x417551
        return 1;
    }
    int64_t v17 = function_417410(v2, v2, v9); // 0x4175f3
    *(int64_t *)v5 = v17;
    if (v17 == 0) {
        // 0x417551
        return 0;
    }
    // 0x417601
    *(char *)(v17 + 8) = 0;
    // 0x417548
    *v1 = v17 + 9;
    // 0x417551
    return 1;
}
// Address range: 0x417620 - 0x4176cf
int64_t function_417620(int64_t a1) {
    char * env_val = getenv("TZ"); // 0x41762c
    int64_t v1 = (int64_t)env_val; // 0x41762c
    char v2 = *(char *)(a1 + 8);
    int64_t v3; // 0x417620
    if (env_val == NULL) {
        // 0x417690
        if (v2 == 0) {
            // 0x41765d
            return 1;
        }
    } else {
        if (v2 != 0) {
            // 0x417668
            v3 = v1;
            if (strcmp((char *)(a1 + 9), env_val) == 0) {
                // 0x41765d
                return 1;
            }
        }
    }
    // 0x417641
    int64_t v4; // 0x417620
    int64_t result = function_417410(v1, v3, v4); // 0x417644
    if (result == 0) {
        // 0x41765d
        return 0;
    }
    // 0x417651
    if ((char)function_417340(a1) != 0) {
        // 0x41765d
        return result;
    }
    int32_t * v5 = __errno_location(); // 0x4176a8
    if (result != 1) {
        // 0x4176b9
        function_417390(result);
    }
    // 0x4176c1
    return 0;
}
// Address range: 0x4176d0 - 0x4176e1
int64_t function_4176d0(int64_t a1) {
    // 0x4176d0
    if (a1 == 1) {
        // 0x4176e0
        int64_t result; // 0x4176d0
        return result;
    }
    // 0x4176d6
    return function_417390(a1);
}
// Address range: 0x4176f0 - 0x417795
int64_t function_4176f0(int64_t a1, int64_t * timep, int64_t * time) {
    if (a1 == 0) {
        // 0x417780
        return (int64_t)gmtime_r((int32_t *)timep, (struct tm *)time);
    }
    int64_t v1 = function_417620(a1); // 0x417708
    if (v1 == 0) {
        // 0x41773a
        return 0;
    }
    // 0x417715
    if (localtime_r((int32_t *)timep, (struct tm *)time) != NULL) {
        int64_t result = (int64_t)time;
        if ((char)function_4174a0(a1, result) != 0) {
            // 0x417734
            if (v1 == 1 || (char)function_4173c0(v1) != 0) {
                // 0x41773a
                return result;
            }
            // 0x41773a
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x417756
        function_4173c0(v1);
    }
    // 0x41773a
    return 0;
}
// Address range: 0x4177a0 - 0x4178bc
int64_t function_4177a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4177a0
    int32_t v1; // 0x4177a0
    int32_t v2 = v1;
    if (a1 == 0) {
        // 0x417898
        return function_4178c0(a2);
    }
    int64_t v3 = function_417620(a1); // 0x4177b7
    if (v3 == 0) {
        // 0x41780e
        return -1;
    }
    int64_t v4 = function_4186f0(a2); // 0x4177cb
    int64_t timep = v4; // bp-96, 0x4177d0
    if (v4 == -1) {
        // 0x417820
        int32_t time; // bp-88, 0x4177a0
        if (localtime_r((int32_t *)&timep, (struct tm *)&time) == NULL) {
            goto lab_0x4177f3;
        } else {
            int32_t v5 = *(int32_t *)(a2 + 32); // 0x417834
            if (v2 >= 0 == v5 > -1 == (v5 == 0 != (v2 == 0))) {
                goto lab_0x4177f3;
            } else {
                int32_t v6 = *(int32_t *)(a2 + 16); // 0x417853
                int32_t v7 = *(int32_t *)(a2 + 20); // 0x417856
                int32_t v8 = *(int32_t *)(a2 + 12); // 0x417863
                int32_t v9 = *(int32_t *)(a2 + 8); // 0x41786c
                int32_t v10 = *(int32_t *)(a2 + 4); // 0x417875
                if ((v7 ^ v1 | v6 ^ v1 | v8 ^ v1 | v9 ^ v1 || v10 ^ v1 || time ^ (int32_t)(int64_t)&time) == 0) {
                    goto lab_0x4177db;
                } else {
                    goto lab_0x4177f3;
                }
            }
        }
    } else {
        goto lab_0x4177db;
    }
  lab_0x4177db:
    // 0x4177db
    if ((char)function_4174a0(a1, a2) == 0) {
        // 0x4177ea
        timep = -1;
    }
    goto lab_0x4177f3;
  lab_0x4177f3:
    if (v3 != 1) {
        // 0x4177f9
        if ((char)function_4173c0(v3) == 0) {
            // 0x41780e
            return -1;
        }
    }
    // 0x41780e
    return timep;
}
// Address range: 0x4178c0 - 0x4178d6
int64_t function_4178c0(int64_t a1) {
    // 0x4178c0
    *(int32_t *)(a1 + 32) = 0;
    return function_4182b0(a1, 0x4029a0, &g199);
}
// Address range: 0x4178e0 - 0x41793d
int64_t function_4178e0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4178e7
    int64_t v2; // 0x4178e0
    int64_t result = function_417f10(a1, v2); // 0x4178f8
    if ((v2 & 32) != 0) {
        // 0x417920
        if ((int32_t)result == 0) {
            // 0x417924
            *__errno_location() = 0;
        }
        // 0x41791a
        return 0xffffffff;
    }
    // 0x417901
    if ((int32_t)result == 0) {
        // 0x41791a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x417908
    if (v1 == 0) {
        // 0x41790a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x41791a
    return result2;
}
// Address range: 0x417940 - 0x417958
int64_t function_417940(void) {
    // 0x417940
    int64_t v1; // 0x417940
    int64_t result = function_40b810(v1); // 0x417944
    if (result != 0) {
        // 0x41794e
        return result;
    }
    // 0x417953
    function_412bd0(v1);
    // UNREACHABLE
}
// Address range: 0x417960 - 0x417996
int64_t function_417960(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x417966
    if (v1 == 0) {
        // 0x417990
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x417978
    char v5 = *(char *)v2; // 0x41797b
    while (v5 != 0) {
        // 0x417970
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x417983
    return v4 % a2;
}
// Address range: 0x4179a0 - 0x417f02
int64_t function_4179a0(void) {
    char * v1 = nl_langinfo(14); // 0x4179b6
    char * v2 = g200; // 0x4179bb
    char * v3; // 0x4179a0
    int64_t v4; // 0x4179a0
    int64_t v5; // 0x4179a0
    int64_t v6; // 0x4179a0
    int64_t v7; // 0x4179a0
    int32_t size; // 0x4179a0
    int32_t size2; // 0x4179a0
    int32_t len; // 0x417a72
    int64_t v8; // 0x417a72
    char * env_val; // 0x417a5d
    if (v2 == NULL) {
        // 0x417a58
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x417ac5;
        } else {
            // 0x417a6a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x417ac5;
            } else {
                // 0x417a6f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x417a5d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x417ef5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x417ac5;
                    } else {
                        // 0x417e69
                        size2 = len + 14;
                        goto lab_0x417a8b;
                    }
                } else {
                    goto lab_0x417a8b;
                }
            }
        }
    } else {
        // 0x4179a0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4179da;
    }
  lab_0x417d0c:;
    // 0x417d0c
    struct _IO_FILE * stream; // 0x417b4b
    int32_t v10 = __uflow(stream); // 0x417d0f
    int64_t v11; // 0x4179a0
    int64_t v12 = v11; // 0x417d19
    int64_t v13; // 0x4179a0
    int64_t v14 = v13; // 0x417d19
    int32_t v15 = v10; // 0x417d19
    int64_t v16; // 0x4179a0
    int64_t v17 = v16; // 0x417d19
    int64_t v18 = v11; // 0x417d19
    int64_t v19 = v13; // 0x417d19
    int64_t v20 = v16; // 0x417d19
    if (v10 == -1) {
        // break -> 0x417d1f
        goto lab_0x417d1f;
    }
    goto lab_0x417b99;
  lab_0x417b8e:;
    // 0x417b8e
    int64_t v90; // 0x4179a0
    int64_t * v32; // 0x417b80
    *v32 = v90 + 1;
    int64_t v89; // 0x4179a0
    v12 = v89;
    int64_t v91; // 0x4179a0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4179a0
    v17 = v92;
    goto lab_0x417b99;
  lab_0x417b99:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4179a0
    int32_t v25; // bp-120, 0x4179a0
    int32_t v26; // bp-184, 0x4179a0
    int64_t v27; // 0x417b4b
    int64_t v28; // 0x417b68
    int64_t v29; // 0x417b6d
    int64_t * v30; // 0x417b84
    switch (c) {
        case 32: {
            goto lab_0x417b80;
        }
        case 10: {
            goto lab_0x417b80;
        }
        case 9: {
            goto lab_0x417b80;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x417d71
            int32_t v33; // 0x4179a0
            char v34; // 0x4179a0
            int32_t v35; // 0x417d7e
            if (v31 < *v30) {
                // 0x417d50
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x417d7b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x417d71
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x417d50
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x417d7b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x417d60
                v36 = v33;
            }
            // 0x417e4f
            if (v36 == -1) {
                // break -> 0x417d1f
                break;
            }
            goto lab_0x417b80;
        }
        default: {
            // 0x417baf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x417d1f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x417bd8
            int64_t v39 = v37 + 4; // 0x417bda
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x417be6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x417be8
            while (v41 == 0) {
                // 0x417bd8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x417c06
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x417c12
            int64_t v45 = v43 + 4; // 0x417c14
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x417c20
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x417c22
            while (v47 == 0) {
                // 0x417c12
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x417c0f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x417c38
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x417c48
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x417c4c
            int64_t v52 = v51 + v48; // 0x417c55
            int64_t * mem; // 0x4179a0
            int64_t v53; // 0x4179a0
            int64_t v54; // 0x4179a0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x417d8b
                int64_t v56 = v55 + 3; // 0x417d97
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x417c71
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x417c80
            if (mem == NULL) {
                // 0x417eac
                free((int64_t *)v21);
                function_417f10(v27, v53);
                v24 = (int64_t)&g24;
                goto lab_0x417b24;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x417c98
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x417ca2
            uint32_t v62 = (int32_t)v59; // 0x417ca5
            int64_t v63; // 0x4179a0
            if (v62 >= 8) {
                // 0x417db4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x417dce
                int64_t v66 = v61 - v65; // 0x417dd2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x417ddd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x417dee
                    int64_t v70 = v69 & 0xffffffff; // 0x417dee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x417deb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x417e7f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x417cb7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x417cbb
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
            int64_t v73 = v51 + 1; // 0x417ccb
            int64_t v74 = v60 - 1; // 0x417ccf
            uint32_t v75 = (int32_t)v73; // 0x417cd4
            int64_t v76; // 0x4179a0
            if (v75 >= 8) {
                // 0x417e02
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x417e0c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x417e1c
                int64_t v80 = v74 - v79; // 0x417e20
                uint32_t v81 = (int32_t)(v80 + v73); // 0x417e2b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x417e3b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x417e39
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x417e96
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x417e9e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x417ce6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x417cea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x417ee3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x417cfe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x417b8e;
            } else {
                goto lab_0x417d0c;
            }
        }
    }
  lab_0x417b80:;
    int64_t v93 = v23; // 0x4179a0
    int64_t v94 = v22; // 0x4179a0
    int64_t v95 = v21; // 0x4179a0
    goto lab_0x417b80_2;
  lab_0x417ac5:;
    int64_t * mem3 = malloc(size); // 0x417ac5
    int64_t v97 = (int64_t)&g24; // 0x417ad0
    int64_t v98; // 0x4179a0
    int64_t path; // 0x4179a0
    if (mem3 == NULL) {
        goto lab_0x417aa2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x417ac5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x417ae6;
    }
  lab_0x4179da:;
    int64_t str = v1 == NULL ? (int64_t)&g24 : (int64_t)v1; // 0x4179cd
    char v100 = *v3; // 0x4179da
    int64_t v101; // 0x4179a0
    if (v100 == 0) {
        // 0x417a34
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4179a0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4179a0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x417a20
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x417a27;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4179f0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4179fd
        char v107 = *(char *)v106; // 0x417a02
        v102 = v107;
        if (v107 == 0) {
            // 0x417a34
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x417a0b
    v104 = v103 + 1;
  lab_0x417a27:
    // 0x417a34
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x417aa2:;
    char * v108 = (char *)v97;
    g200 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4179da;
  lab_0x417ae6:;
    int64_t v109 = v98 + path; // 0x417ae6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x417b12
    v24 = (int64_t)&g24;
    if (fd >= 0) {
        // 0x417b41
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x417e72
            close(fd);
            v24 = (int64_t)&g24;
        } else {
            // 0x417b65
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x417b80_2:;
                uint64_t v96 = *v32; // 0x417b80
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x417d0c;
                } else {
                    goto lab_0x417b8e;
                }
            }
          lab_0x417d1f:
            // 0x417d1f
            function_417f10(v27, v19);
            v24 = (int64_t)&g24;
            if (v18 != 0) {
                // 0x417d3e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x417b24;
  lab_0x417a8b:;
    int64_t * mem4 = malloc(size2); // 0x417a8b
    v97 = (int64_t)&g24;
    if (mem4 != NULL) {
        // 0x417b31
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x417ae6;
    } else {
        goto lab_0x417aa2;
    }
  lab_0x417b24:
    // 0x417b24
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x417aa2;
}
// Address range: 0x417f10 - 0x417f8b
int64_t function_417f10(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x417f17
    if (fileno(stream) < 0) {
        // 0x417f77
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x417f2a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x417f5b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x417f77
            return fclose(stream);
        }
    }
    // 0x417f2c
    if ((int32_t)function_417f90(a1, v1) == 0) {
        // 0x417f77
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x417f38
    int32_t v3 = *v2; // 0x417f40
    int64_t result = fclose(stream); // 0x417f4e
    if (v3 != 0) {
        // 0x417f80
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x417f50
    return result;
}
// Address range: 0x417f90 - 0x417fd0
int64_t function_417f90(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x417faa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x417faa
        return fflush(stream);
    }
    // 0x417fb8
    function_417fd0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x417fd0 - 0x418027
int64_t function_417fd0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x417fd0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x417fda
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x41800b
    int64_t result = -1; // 0x418014
    if (v1 != -1) {
        // 0x418016
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x418022
    return result;
}
// Address range: 0x418030 - 0x418147
int64_t function_418030(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a1 / 4 + 475 + (int64_t)(a1 % 4 == 0); // 0x41805e
    int32_t v2 = (a6 >> 2) + 475 + (int32_t)(a6 % 4 == 0); // 0x41807a
    int32_t v3 = v1; // 0x418083
    int32_t v4 = ((int32_t)(0x51eb851f * (0x100000000 * v1 >> 32) / 0x100000000) >> 3) - (v3 >> 31); // 0x418094
    int32_t v5 = v4 - (int32_t)(-25 * v4 + v3 < 0); // 0x4180a4
    int32_t v6 = v2 / 25; // 0x4180b8
    int32_t v7 = v6 - (int32_t)(-25 * v6 + v2 < 0); // 0x4180c9
    return (0x100000000 * a5 >> 32) - (0x100000000 * a10 >> 32) + 60 * ((0x100000000 * a4 >> 32) - (0x100000000 * a9 >> 32) + 60 * ((0x100000000 * a3 >> 32) - (0x100000000 * a8 >> 32) + 24 * (365 * (a1 - (int64_t)a6) + a2 - (0x100000000 * a7 >> 32) + (int64_t)(v3 - v2 - v5 + (v5 >> 2) + v7 - (v7 >> 2)))));
}
// Address range: 0x418150 - 0x4181e1
int64_t function_418150(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, uint64_t a6, int64_t a7) {
    if (a7 != 0) {
        uint32_t v1 = *(int32_t *)a7; // 0x41815e
        uint32_t v2 = *(int32_t *)(a7 + 4); // 0x418163
        uint32_t v3 = *(int32_t *)(a7 + 8); // 0x418169
        uint32_t v4 = *(int32_t *)(a7 + 28); // 0x41816f
        int32_t v5 = *(int32_t *)(a7 + 20); // 0x418175
        int64_t v6 = function_418030(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, v5, (int64_t)v4, (int64_t)v3, (int64_t)v2, (int64_t)v1); // 0x418179
        int64_t result = v6 + a6; // 0x418182
        if (((result ^ v6) & (result ^ a6)) >= 0) {
            // 0x418187
            return result;
        }
    }
    if (a6 >= 0) {
        int64_t v7 = a6 - 0x7ffffffffffffffd; // 0x4181ad
        int64_t result2 = v7 < 0 == (0x7ffffffffffffffc - a6 & a6) < 0 == (v7 != 0) ? a6 - 1 : 0x7fffffffffffffff; // 0x4181b1
        return result2;
    }
    // 0x4181c0
    if (a6 > -0x7fffffffffffffff) {
        // 0x418187
        return -0x8000000000000000;
    }
    // 0x4181cf
    return a6 + 1;
}
// Address range: 0x4181f0 - 0x4182af
int64_t function_4181f0(int64_t a1, int64_t result, uint64_t a3) {
    if (result == 0 != a3 != 0) {
        // 0x41821d
        return result;
    }
    int64_t v1 = ((int64_t)a3 >> 1) + a3 % 2; // 0x41825b
    if (v1 != 0 == (v1 != a3)) {
        // 0x41821d
        return result;
    }
    int64_t v2 = v1; // 0x418261
    while (v2 != 0) {
        // 0x418268
        v2 = (v2 >> 1) + v2 % 2;
    }
    // 0x41821d
    return result;
}
// Address range: 0x4182b0 - 0x4186ea
int64_t function_4182b0(int64_t a1, int64_t a2, int64_t * a3) {
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x4182cb
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x4182d3
    uint32_t v3 = *(int32_t *)(a1 + 8); // 0x4182e4
    int32_t v4 = *(int32_t *)(a1 + 16); // 0x4182e7
    int32_t v5 = v4 / 12; // 0x418305
    int32_t v6 = -12 * v5 + v4; // 0x41830f
    int32_t v7 = *(int32_t *)(a1 + 20); // 0x41831a
    int64_t v8 = (int64_t)(v5 - (int32_t)(v6 < 0)) + (int64_t)v7; // 0x418321
    int64_t v9 = 0; // 0x418327
    if (v8 % 4 == 0) {
        // 0x418329
        v9 = 1;
        if (v8 == (v8 >> 63 & 100)) {
            // 0x418590
            v9 = v8 < 0;
        }
    }
    // 0x418365
    int64_t v10; // 0x4182b0
    int32_t v11 = v10;
    int64_t v12 = v9;
    uint16_t v13 = *(int16_t *)(2 * (v12 + (int64_t)((v6 >> 31 & 12) + v6) + 4 * v12) + (int64_t)&g45); // 0x418397
    int32_t v14 = v11 - 59; // 0x4183b0
    int64_t v15 = v14 == 0 | v14 < 0 != (58 - v11 & v11) < 0 ? v10 & 0xffffffff : 59; // 0x4183b3
    int64_t v16 = (int32_t)v15 >= 0 ? v15 : 0; // 0x4183c7
    int64_t v17 = function_418030(v8, (int64_t)v1 - 1 + (int64_t)v13, (int64_t)v3, (int64_t)v2, v16, 70, 0, 0, 0, -v12 & 0xffffffff); // 0x4183f0
    int64_t v18; // bp-280, 0x4182b0
    int64_t v19 = &v18; // 0x4183f5
    int64_t * v20 = (int64_t *)(v19 + 16);
    int64_t v21 = v19 + 96; // 0x418443
    int64_t v22 = v19 + 80; // 0x418448
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
    int32_t v33 = 6; // 0x418413
    int64_t v34 = v17; // 0x418413
    int64_t v35 = v17;
    uint64_t v36 = 0;
    int64_t v37 = function_4181f0(*v20, v22, v21); // 0x41844d
    int64_t v38 = *v23; // 0x418452
    *v24 = v37;
    int64_t v39 = function_418150(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g209); // 0x418474
    while (v38 != v39) {
        // 0x418484
        if (v38 != v35 && v38 == v34) {
            int32_t v40 = *v30; // 0x41848e
            if (v40 < 0) {
                goto lab_0x4184b7_3;
            }
            int32_t v41 = *v32; // 0x41849b
            if (v41 < 0) {
                if (v36 <= (int64_t)(v40 != 0)) {
                    goto lab_0x4184b7_3;
                }
            } else {
                if (v41 != 0 != v40 != 0) {
                    goto lab_0x4184b7_3;
                }
            }
        }
        // 0x418418
        v33--;
        if (v33 == 0) {
            // 0x418577
            return -1;
        }
        // 0x418421
        *v23 = v39;
        v34 = v35;
        v35 = v38;
        v36 = (int64_t)(*v30 != 0);
        v37 = function_4181f0(*v20, v22, v21);
        v38 = *v23;
        *v24 = v37;
        v39 = function_418150(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g209);
    }
    int32_t v42 = *v32; // 0x4185c0
    int32_t v43 = *v30; // 0x4185c4
    int64_t v44 = *(int64_t *)(v19 + 72); // 0x4185cb
    *(char *)v31 = (char)(v42 == 0);
    int64_t v45 = v38; // 0x4185e4
    int64_t v46 = v44; // 0x4185e4
    if (v43 >= 0 && v42 >= 0 && v42 == 0 != (v43 == 0)) {
        int64_t * v47 = (int64_t *)v31; // 0x418600
        *v47 = v8;
        int64_t v48 = v19 + 88; // 0x41863b
        int64_t * v49 = (int64_t *)v48;
        int64_t v50 = v19 + 160;
        int64_t v51 = v38; // 0x418605
        int64_t v52 = 0x92c70; // 0x418605
        while (true) {
            int64_t v53 = -v52; // 0x418632
            int64_t v54 = v53 & 0xffffffff; // 0x418632
            int64_t v55 = 0x100000000 * v53 >> 32; // 0x418635
            int64_t v56 = v55 + v51; // 0x418638
            *v49 = v56;
            int64_t v57 = v51; // 0x418640
            int32_t v58 = 2; // 0x418640
            int64_t v59 = v54; // 0x418640
            int32_t v60 = 2; // 0x418640
            int64_t v61 = v54; // 0x418640
            if (((v56 ^ v55) & (v56 ^ v51)) >= 0) {
              lab_0x41865e:
                // 0x41865e
                function_4181f0(*v20, v48, v50);
                int32_t v62 = *(int32_t *)(v19 + 192); // 0x418675
                if (v42 == 0 != (v62 == 0) != v62 >= 0) {
                    // break -> 0x41868a
                    break;
                }
                // 0x4186e0
                v59 = v61;
                v58 = v60;
                v57 = *v23;
            }
            int64_t v63 = 2 * v52; // 0x418627
            int64_t v64 = v57;
            int32_t v65 = v58; // 0x4182b0
            int64_t v66 = v59; // 0x418642
            while (v65 != 1) {
                int64_t v67 = v66 + v63; // 0x418642
                v66 = v67 & 0xffffffff;
                int64_t v68 = 0x100000000 * v67 >> 32; // 0x41864b
                int64_t v69 = v68 + v64; // 0x418654
                *v49 = v69;
                v65 = 1;
                v60 = 1;
                v61 = v66;
                if (((v69 ^ v68) & (v69 ^ v64)) >= 0) {
                    goto lab_0x41865e;
                }
            }
            int64_t v70 = v52 + 0x92c70; // 0x418610
            v45 = v64;
            v46 = v44;
            v51 = v64;
            v52 = v70 & 0xffffffff;
            if ((int32_t)v70 == 0x100dc400) {
                goto lab_0x4184c0;
            }
        }
        // 0x41868a
        *v24 = v50;
        int64_t v71 = function_418150(*v47, *v28, *v27, *v26, *v25, *v49, (int64_t)&g209); // 0x4186b6
        *v23 = v71;
        function_4181f0(*v20, v22, v21);
        v45 = *v23;
        v46 = v44;
    }
    goto lab_0x4184c0;
  lab_0x4184b7_3:
    // 0x4184b7
    v45 = v38;
    v46 = *(int64_t *)(v19 + 72);
    goto lab_0x4184c0;
  lab_0x4184c0:;
    int64_t v72 = *(int64_t *)(v19 + 56); // 0x4184c8
    int32_t v73 = *(int32_t *)v21; // 0x4184d0
    int32_t v74 = *(int32_t *)(v19 + 64); // 0x4184d4
    int64_t v75 = *(int64_t *)(v19 + 48); // 0x4184db
    *(int64_t *)v75 = v45 - (int64_t)*(int32_t *)(v19 + 68) - v72;
    int64_t result = v45; // 0x4184e5
    if (v73 != v74) {
        int32_t v76 = *v25; // 0x4184e9
        int64_t v77 = (int64_t)(v73 == 60 == v74 < 1) - (int64_t)v76 + (int64_t)v74; // 0x418505
        int64_t v78 = v77 + v45; // 0x418508
        *v23 = v78;
        if (((v78 ^ v45) & (v78 ^ v77)) < 0) {
            // 0x418577
            return -1;
        }
        // 0x418512
        *(int64_t *)(v19 + 160) = v78;
        if (*v20 == 0) {
            // 0x418577
            return -1;
        }
        // 0x418533
        result = *v23;
    }
    int128_t v79 = __asm_movdqa(*(int128_t *)v21); // 0x418538
    int128_t v80 = __asm_movdqa(*(int128_t *)(v19 + 112)); // 0x41853e
    int128_t v81 = __asm_movdqa(*(int128_t *)v29); // 0x418544
    __asm_movups(*(int128_t *)v46, v79);
    __asm_movups(*(int128_t *)(v46 + 16), v80);
    __asm_movups(*(int128_t *)(v46 + 32), v81);
    *(int64_t *)(v46 + 48) = *(int64_t *)(v19 + 144);
    // 0x418577
    return result;
}
// Address range: 0x4186f0 - 0x41870c
int64_t function_4186f0(int64_t a1) {
    // 0x4186f0
    tzset();
    return function_4182b0(a1, 0x4027a0, &g201);
}
// Address range: 0x418710 - 0x41876d
int64_t function_418710(int64_t a1, int64_t a2, int64_t a3) {
    // 0x418710
    return function_4026a8();
}
// Address range: 0x418770 - 0x418771
int64_t function_418770(void) {
    // 0x418770
    int64_t result; // 0x418770
    return result;
}
// Address range: 0x418780 - 0x418798
int64_t function_418780(int64_t a1, int64_t a2, int64_t a3) {
    // 0x418780
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g50);
}
// Address range: 0x418798 - 0x4187b8
int64_t function_418798(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g46; // 0x4187a2
    while (*(int64_t *)v1 != -1) {
        // 0x4187a3
        v1 -= 8;
    }
    // 0x4187b4
    return result;
}
