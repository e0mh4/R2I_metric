#include "decompile_retdec.h"
// Address range: 0x401a50 - 0x401a55
int64_t function_401a50(void) {
    // 0x401a50
    abort();
    // UNREACHABLE
}
// Address range: 0x401a55 - 0x401a5a
int64_t function_401a55(void) {
    // 0x401a55
    abort();
    // UNREACHABLE
}
// Address range: 0x401a5a - 0x401a5f
int64_t function_401a5a(void) {
    // 0x401a5a
    abort();
    // UNREACHABLE
}
// Address range: 0x401a5f - 0x401a64
int64_t function_401a5f(void) {
    // 0x401a5f
    abort();
    // UNREACHABLE
}
// Address range: 0x401a64 - 0x401a69
int64_t function_401a64(void) {
    // 0x401a64
    abort();
    // UNREACHABLE
}
// Address range: 0x401a69 - 0x401a6e
int64_t function_401a69(void) {
    // 0x401a69
    abort();
    // UNREACHABLE
}
// Address range: 0x401a70 - 0x401c23
int64_t function_401a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x401a72
    char * env_val = getenv("POSIXLY_CORRECT"); // 0x401a7f
    function_4027f0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_4070f0(0x402750, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    char v2 = env_val != NULL; // 0x401ac5
    int64_t v3; // 0x401a70
    int64_t v4; // 0x401a70
    int64_t str; // 0x401b61
    int64_t v5; // 0x401b9e
    int64_t * v6; // 0x401ba8
    int64_t v7; // 0x401bb3
    int64_t * v8; // 0x401bbf
    int64_t v9; // 0x401bc2
    int64_t * str2; // 0x401bc7
    int64_t str3; // 0x401b75
    while (true) {
        uint32_t v10 = (int32_t)function_405f00(v1, a2, "LP", &g2, 0, a6);
        switch (v10) {
            case -1: {
                // 0x401b50
                v4 = a2;
                v3 = v1;
                if (v1 > (int64_t)*(int32_t *)0x60a29c) {
                    // 0x401bee
                    error(0, (int32_t)"ignoring non-option arguments" ^ (int32_t)"ignoring non-option arguments", dcgettext(NULL, "ignoring non-option arguments", 5));
                    v4 = (int32_t)"ignoring non-option arguments" ^ (int32_t)"ignoring non-option arguments";
                    v3 = 0;
                }
                // 0x401b5d
                if (v2 != 0) {
                    // 0x401b61
                    str = function_401d10();
                    if (str != 0) {
                        // 0x401b6b
                        puts((char *)str);
                        // 0x401b92
                        return 0;
                    }
                }
                // 0x401b75
                str3 = function_404cb0(v3, v4);
                if (str3 == 0) {
                    // 0x401b99
                    v5 = function_404a20(24);
                    v6 = (int64_t *)(v5 + 8);
                    *v6 = 0x2000;
                    v7 = function_404a20(0x2000);
                    v8 = (int64_t *)v5;
                    *v8 = v7;
                    v9 = v7 - 1 + *v6;
                    str2 = (int64_t *)(v5 + 16);
                    *str2 = v9;
                    *(char *)v9 = 0;
                    function_401f10(v5);
                    puts((char *)*str2);
                    free((int64_t *)*v8);
                    free(v8);
                } else {
                    // 0x401b82
                    puts((char *)str3);
                    free((int64_t *)str3);
                }
                // 0x401b92
                return 0;
            }
            case -130: {
                // 0x401c12
                function_4023d0(0);
                // UNREACHABLE
            }
        }
        if (v10 <= 0xffffff7e) {
            if (v10 == -131) {
                // 0x401b0b
                function_4048e0((int64_t)g28, "pwd", "GNU coreutils", (int64_t)g17, "Jim Meyering", 0);
                exit(0);
                // UNREACHABLE
            }
            goto lab_0x401c19;
        }
        char v11 = 1; // 0x401af5
        if (v10 != 76) {
            // 0x401b40
            v11 = 0;
            if (v10 != 80) {
              lab_0x401c19:
                // 0x401c19
                function_4023d0(1);
                // UNREACHABLE
            }
        }
        // 0x401ac8
        v2 = v11;
    }
    // 0x401b50
    v4 = a2;
    v3 = v1;
    if (v1 > (int64_t)*(int32_t *)0x60a29c) {
        // 0x401bee
        error(0, (int32_t)"ignoring non-option arguments" ^ (int32_t)"ignoring non-option arguments", dcgettext(NULL, "ignoring non-option arguments", 5));
        v4 = (int32_t)"ignoring non-option arguments" ^ (int32_t)"ignoring non-option arguments";
        v3 = 0;
    }
    // 0x401b5d
    if (v2 != 0) {
        // 0x401b61
        str = function_401d10();
        if (str != 0) {
            // 0x401b6b
            puts((char *)str);
            // 0x401b92
            return 0;
        }
    }
    // 0x401b75
    str3 = function_404cb0(v3, v4);
    if (str3 == 0) {
        // 0x401b99
        v5 = function_404a20(24);
        v6 = (int64_t *)(v5 + 8);
        *v6 = 0x2000;
        v7 = function_404a20(0x2000);
        v8 = (int64_t *)v5;
        *v8 = v7;
        v9 = v7 - 1 + *v6;
        str2 = (int64_t *)(v5 + 16);
        *str2 = v9;
        *(char *)v9 = 0;
        function_401f10(v5);
        puts((char *)*str2);
        free((int64_t *)*v8);
        free(v8);
    } else {
        // 0x401b82
        puts((char *)str3);
        free((int64_t *)str3);
    }
    // 0x401b92
    return 0;
}
// Address range: 0x401c30 - 0x401c5b
// Address range: 0x401c5b - 0x401c7a
int64_t function_401c5b(void) {
    // 0x401c5b
    return &g27;
}
// Address range: 0x401c7a - 0x401cb1
int64_t function_401c7a(void) {
    // 0x401c7a
    return 0;
}
// Address range: 0x401cb1 - 0x401d08
int64_t function_401cb1(void) {
    // 0x401cb1
    if (g31 != 0) {
        // 0x401d07
        int64_t result; // 0x401cb1
        return result;
    }
    int64_t v1 = g32; // 0x401ce4
    int64_t result2; // 0x401cf6
    if (g32 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401cf6
        result2 = function_401c5b();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401ce6
        v1++;
    }
    // 0x401cda
    g32 = v1;
    // 0x401cf6
    result2 = function_401c5b();
    g31 = 1;
    return result2;
}
// Address range: 0x401d08 - 0x401d0d
int64_t function_401d08(void) {
    // 0x401d08
    return function_401c7a();
}
// Address range: 0x401d10 - 0x401dcc
int64_t function_401d10(void) {
    char * env_val = getenv("PWD"); // 0x401d1d
    if (env_val == NULL || *env_val != 47) {
        // 0x401d72
        return 0;
    }
    int64_t result = (int64_t)env_val; // 0x401d1d
    int64_t v1 = function_406480(result, "/."); // 0x401d41
    int64_t v2 = v1; // 0x401d49
    if (v1 == 0) {
      lab_0x401d7e:;
        // 0x401d7e
        int64_t v3; // bp-152, 0x401d10
        int64_t v4; // bp-296, 0x401d10
        if (__xstat(1, env_val, (struct stat *)&v4) != 0 || true != (__xstat(1, ".", (struct stat *)&v3) == 0)) {
            // 0x401d72
            return 0;
        }
        // 0x401dbc
        if (v4 == v3) {
            // 0x401d72
            return result;
        }
        // 0x401d72
        return 0;
    }
    while (true) {
      lab_0x401d4b:;
        int64_t v5 = v2;
        char v6 = *(char *)(v5 + 2); // 0x401d4b
        switch (v6) {
            case 0: {
                return 0;
            }
            case 47: {
                return 0;
            }
            default: {
                if (v6 == 46) {
                    char v7 = *(char *)(v5 + 3); // 0x401d5d
                    if (v7 != 0 != v7 != 47) {
                        // break -> 0x401d70
                        break;
                    }
                }
                // 0x401d38
                v2 = function_406480(v5 + 1, "/.");
                if (v2 == 0) {
                    goto lab_0x401d7e;
                }
                goto lab_0x401d4b;
            }
        }
    }
    // 0x401d72
    return 0;
}
// Address range: 0x401dd0 - 0x401e4b
int64_t function_401dd0(uint64_t a1) {
    uint128_t v1 = 3 * (int128_t)a1; // 0x401ddb
    if ((int64_t)v1 < 0) {
        // 0x401e46
        function_404c70(a1);
        // UNREACHABLE
    }
    if (v1 % 0x30000000000000001 != 0) {
        // 0x401e46
        function_404c70(a1);
        // UNREACHABLE
    }
    int64_t v2 = 3 * a1; // 0x401dee
    int64_t result = function_404a20(v2); // 0x401df8
    if (a1 == 0) {
        // 0x401e38
        *(char *)(result - 1) = 0;
        return result;
    }
    int64_t v3 = result + v2; // 0x401e02
    *(char *)(result + 2) = 47;
    int64_t v4 = result + 3; // 0x401e19
    *(int16_t *)result = 0x2e2e;
    while (v4 != v3) {
        int64_t v5 = v4;
        *(char *)(v5 + 2) = 47;
        v4 = v5 + 3;
        *(int16_t *)v5 = 0x2e2e;
    }
    // 0x401e26
    *(char *)(v3 - 1) = 0;
    return result;
}
// Address range: 0x401e50 - 0x401f10
int64_t function_401e50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x401e67
    int64_t v2 = *v1; // 0x401e67
    uint64_t v3 = v2 - a1; // 0x401e6e
    uint64_t v4 = a3 + 1; // 0x401e71
    int64_t v5 = v2; // 0x401e78
    if (v4 > v3) {
        int64_t * v6 = (int64_t *)(a1 + 8); // 0x401e7a
        int64_t v7 = *v6 + v4; // 0x401e7a
        int64_t v8 = 2 * v7; // 0x401e87
        if (v8 < 0) {
            // 0x401f0b
            return function_404c70(v7);
        }
        if (v7 < 0) {
            // 0x401f0b
            return function_404c70(v7);
        }
        int64_t v9 = function_404a20(v8); // 0x401e94
        int64_t v10 = *v6; // 0x401e99
        int64_t v11 = v8 + v3; // 0x401e9d
        int64_t v12 = v11 - v10 + v9; // 0x401eb6
        *v1 = v12;
        memcpy((int64_t *)v12, (int64_t *)(v11 + v3), (int32_t)(v10 - v3));
        free((int64_t *)v11);
        *(int64_t *)a1 = v9;
        v5 = *v1;
        *v6 = v8;
    }
    int64_t v13 = v5 + -1 - a3; // 0x401ee3
    *v1 = v13;
    *(char *)v13 = 47;
    int64_t v14 = *v1; // 0x401ef0
    return (int64_t)memcpy((int64_t *)(v14 + 1), (int64_t *)a2, (int32_t)a3);
}
// Address range: 0x401f10 - 0x4023d0
int64_t function_401f10(int64_t a1) {
    // 0x401f10
    int64_t v1; // bp-488, 0x401f10
    int64_t v2; // bp-504, 0x401f10
    if (function_404430(&v2) == 0) {
        goto lab_0x40238f;
    } else {
        // 0x401f3e
        if (__xstat(1, ".", (struct stat *)&v1) < 0) {
            goto lab_0x402350;
        } else {
            // 0x401f60
            goto lab_0x401f60_2;
        }
    }
  lab_0x4022d0_2:;
    // 0x4022d0
    int64_t v3; // 0x401f10
    function_404410(function_401dd0(v3));
    char * format = dcgettext(NULL, "failed to chdir to %s", 5); // 0x4022ef
    int32_t * v4 = __errno_location(); // 0x4022f7
    int32_t err_num = *v4; // 0x402307
    error(1, err_num, format);
    goto lab_0x402310;
  lab_0x402297:
    // 0x402297
    function_404410(function_401dd0(v3));
    char * format3 = dcgettext(NULL, "failed to stat %s", 5); // 0x4022b6
    int32_t * v6; // 0x401fd7
    int32_t err_num3 = *v6; // 0x4022bb
    error(1, err_num3, format3);
    goto lab_0x4022d0_2;
  lab_0x40225e:
    // 0x40225e
    function_404410(function_401dd0(v3));
    char * format4 = dcgettext(NULL, "reading directory %s", 5); // 0x40227d
    int32_t err_num4 = *v6; // 0x402282
    error(1, err_num4, format4);
    goto lab_0x402297;
  lab_0x402044_3:;
    // 0x402044
    int64_t v7; // 0x402018
    char * str; // 0x401f10
    function_401e50(a1, v7, (int64_t)strlen(str));
    int64_t v8; // 0x401f10
    struct __dirstream * dirp; // 0x40200a
    int64_t v9; // 0x401f7e
    if (closedir(dirp) != 0) {
        goto lab_0x40225e;
    } else {
        int128_t v10 = __asm_movdqa(0); // 0x40206c
        int128_t v11; // 0x401f10
        int128_t v12 = __asm_movdqa(v11); // 0x40207a
        int128_t v13; // 0x401f10
        int128_t v14 = __asm_movdqa(v13); // 0x402083
        int128_t v15; // 0x401f10
        int128_t v16 = __asm_movdqa(v15); // 0x40208c
        v1 = __asm_movaps(v10);
        int128_t v17; // 0x401f10
        int128_t v18 = __asm_movdqa(v17); // 0x40209a
        int128_t v19; // 0x401f10
        int128_t v20 = __asm_movdqa(v19); // 0x4020a3
        __asm_movaps(v12);
        int128_t v21; // 0x401f10
        int128_t v22 = __asm_movdqa(v21); // 0x4020b1
        int128_t v23; // 0x401f10
        int128_t v24 = __asm_movdqa(v23); // 0x4020ba
        __asm_movaps(v14);
        int128_t v25; // 0x401f10
        int128_t v26 = __asm_movdqa(v25); // 0x4020c8
        __asm_movaps(v16);
        __asm_movaps(v18);
        __asm_movaps(v20);
        __asm_movaps(v22);
        __asm_movaps(v24);
        __asm_movaps(v26);
        v8 = v9;
        goto lab_0x401f60_2;
    }
  lab_0x4021e8:
    // 0x4021e8
    if (chdir("..") < 0) {
        goto lab_0x4022d0_2;
    }
    // 0x4021fa
    int64_t v27; // 0x401f10
    int64_t v28 = v27;
    int128_t v29; // bp-344, 0x401f10
    int32_t v30 = __xstat(1, ".", (struct stat *)&v29); // 0x40220c
    int64_t v31 = v28; // 0x402216
    int32_t v32 = v30; // 0x402216
    goto lab_0x401fd7;
  lab_0x401fd7:;
    int32_t v33 = v32;
    v6 = __errno_location();
    if (v33 <= -1) {
        goto lab_0x402297;
    }
    int64_t v34 = v31;
    int128_t v35 = v29; // 0x401fe8
    int64_t v36 = v1; // 0x401ff0
    *v6 = 0;
    dirp = (struct __dirstream *)v34;
    struct dirent * v37 = readdir(dirp); // 0x40200a
    int64_t v38; // 0x401f10
    if (v37 != NULL) {
        // 0x402018
        v9 = v3 + 1;
        struct dirent * v39 = v37; // 0x401f10
        while (true) {
            struct dirent * v40 = v39;
            struct dirent * v41 = v40; // 0x401f10
            struct dirent * v42; // 0x401f10
            while (true) {
                struct dirent * v43 = v41;
                struct dirent * v44 = v43; // 0x401f10
                v42 = v44;
                int64_t v45 = (int64_t)v42;
                v7 = v45 + 19;
                str = (char *)v7;
                char v46 = *str; // 0x402018
                if (v46 != 46) {
                    // break (via goto) -> 0x402026
                    goto lab_0x402026_2;
                }
                int64_t v47 = v45 + 20; // 0x40215a
                char v48 = *(char *)v47; // 0x40215a
                char v49 = *(char *)(v47 + (int64_t)(v48 == 46)); // 0x402161
                while (v49 != 0) {
                    if (v49 != 47) {
                        // break (via goto) -> 0x402026
                        goto lab_0x402026_2;
                    }
                    struct dirent * v50 = readdir(dirp); // 0x40217a
                    v44 = v50;
                    if (v50 == NULL) {
                        // break (via goto) -> 0x402190
                        goto lab_0x402190_2;
                    }
                    v42 = v44;
                    v45 = (int64_t)v42;
                    v7 = v45 + 19;
                    str = (char *)v7;
                    v46 = *str;
                    if (v46 != 46) {
                        // break (via goto) -> 0x402026
                        goto lab_0x402026_2;
                    }
                    // 0x402158
                    v47 = v45 + 20;
                    v48 = *(char *)v47;
                    v49 = *(char *)(v47 + (int64_t)(v48 == 46));
                }
                struct dirent * v51 = readdir(dirp); // 0x40200a
                v41 = v51;
                if (v51 == NULL) {
                    // break (via goto) -> 0x402190
                    goto lab_0x402190_2;
                }
            }
          lab_0x402026_2:;
            int64_t v52 = *(int64_t *)v42; // 0x402026
            if (v36 != (int64_t)v35 || v52 == 0) {
                // 0x402100
                int64_t v53; // bp-200, 0x401f10
                int32_t v54 = __lxstat(1, str, (struct stat *)&v53); // 0x402110
                int64_t v55; // 0x401f10
                if (v55 == v38 && v54 >= 0) {
                    if (v36 == (int64_t)v35) {
                        goto lab_0x402044_3;
                    }
                    int64_t v56 = v1; // 0x402139
                    int64_t v57 = v53; // 0x40213e
                    if (v57 == v56) {
                        goto lab_0x402044_3;
                    }
                }
            } else {
                if (v52 == v38) {
                    goto lab_0x402044_3;
                }
            }
            // 0x402000
            *v6 = 0;
            struct dirent * v58 = readdir(dirp); // 0x40200a
            v39 = v58;
            if (v58 == NULL) {
                // break -> 0x402190
                break;
            }
        }
    }
  lab_0x402190_2:;
    int32_t v59 = *v6; // 0x402190
    int32_t v60 = closedir(dirp);
    if (v59 != 0) {
        // 0x402253
        *v6 = v59;
        goto lab_0x40225e;
    }
    if (v60 != 0) {
        goto lab_0x40225e;
    }
    int64_t v61 = function_404410(function_401dd0(v3)); // 0x4021b6
    error(1, (int32_t)"couldn't find directory entry in %s with matching i-node" ^ (int32_t)"couldn't find directory entry in %s with matching i-node", dcgettext(NULL, "couldn't find directory entry in %s with matching i-node", 5));
    v27 = v61;
    goto lab_0x4021e8;
  lab_0x40238f:
    // 0x40238f
    function_4041c0(4, (int64_t *)"/");
    error(1, *__errno_location(), dcgettext(NULL, "failed to get attributes of %s", 5));
    return &g47;
  lab_0x402350:
    // 0x402350
    function_4041c0(4, (int64_t *)".");
    error(1, *__errno_location(), dcgettext(NULL, "failed to stat %s", 5));
    goto lab_0x40238f;
  lab_0x401f60_2:
    while (true) {
        // 0x401f60
        v3 = v8;
        int64_t * v62; // 0x401f65
        int64_t v63 = *v62; // 0x401f65
        if (v38 == v63) {
            // 0x401f6f
            int64_t * v64; // 0x401f10
            int64_t v65 = *v64; // 0x401f6f
            int64_t v66 = v1; // 0x401f73
            if (v66 == v65) {
                int64_t v67 = *(int64_t *)(a1 + 16); // 0x402225
                char v68 = *(char *)v67; // 0x402229
                int64_t v69 = v67; // 0x40222c
                int64_t result; // 0x401f10
                if (v68 != 0) {
                    // 0x40222e
                    result = v69;
                    return result;
                }
                int64_t v70 = function_401e50(a1, (int64_t)&g10, 0); // 0x40224c
                v69 = v70;
                // 0x40222e
                result = v69;
                return result;
            }
        }
        struct __dirstream * dirp2 = opendir(".."); // 0x401f8c
        if (dirp2 == NULL) {
            // break -> 0x402310
            break;
        }
        int64_t v71 = (int64_t)dirp2; // 0x401f8c
        int32_t fd = dirfd(dirp2); // 0x401fa0
        v27 = v71;
        if (fd < 0) {
            goto lab_0x4021e8;
        } else {
            // 0x401faf
            if (fchdir(fd) < 0) {
                goto lab_0x4022d0_2;
            }
            int32_t v72 = __fxstat(1, fd, (struct stat *)&v29); // 0x401fcd
            v31 = v71;
            v32 = v72;
            goto lab_0x401fd7;
        }
    }
    goto lab_0x402310;
  lab_0x402310:
    // 0x402310
    function_404410(function_401dd0(v3));
    char * format2 = dcgettext(NULL, "cannot open directory %s", 5); // 0x40232f
    int32_t * v5 = __errno_location(); // 0x402337
    int32_t err_num2 = *v5; // 0x402347
    error(1, err_num2, format2);
    goto lab_0x402350;
}
// Address range: 0x4023d0 - 0x40272d
int64_t function_4023d0(int32_t status) {
    // 0x4023d0
    if (status != 0) {
        // 0x4023ea
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40240f
        exit(status);
        // UNREACHABLE
    }
    // 0x402416
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the full filename of the current working directory.\n\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -L, --logical   use PWD from environment, even if it contains symlinks\n  -P, --physical  avoid all symlinks\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nIf no option is specified, -P is assumed.\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402508
    bool v2; // 0x4023d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402590
    int64_t v6 = *(int64_t *)v5; // 0x402594
    int64_t v7 = 4; // 0x40259a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"pwd";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4025a6
        char v11 = *(char *)v9; // 0x4025a6
        char v12 = v11; // 0x4025a6
        bool v13 = false; // 0x4025a6
        while (v10 == v11) {
            // 0x40259c
            v7--;
            int64_t v14 = v9 + v3; // 0x4025a6
            int64_t v15 = v8 + v3; // 0x4025a6
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
            // break -> 0x4025b2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x4025b2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4026c4;
        } else {
            // 0x4026ae
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402703
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402614;
            } else {
                goto lab_0x4026c4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402614;
        } else {
            // 0x4025fa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402703
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402614;
            } else {
                goto lab_0x402614;
            }
        }
    }
  lab_0x4026c4:
    // 0x4026c4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402654
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40240f
    exit(status);
    // UNREACHABLE
  lab_0x402614:
    // 0x402614
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402654
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40240f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402730 - 0x402738
int64_t function_402730(int64_t a1) {
    // 0x402730
    g34 = a1;
    int64_t result; // 0x402730
    return result;
}
// Address range: 0x402740 - 0x402748
int64_t function_402740(int64_t a1) {
    // 0x402740
    g33 = a1;
    int64_t result; // 0x402740
    return result;
}
// Address range: 0x402750 - 0x4027ee
int64_t function_402750(void) {
    // 0x402750
    int32_t * err_num; // 0x402766
    if ((int32_t)function_406820((int64_t)g28) == 0) {
        goto lab_0x40277c;
    } else {
        // 0x402766
        err_num = __errno_location();
        if (g33 == 0) {
            goto lab_0x402793;
        } else {
            // 0x402777
            if (*err_num != 32) {
                goto lab_0x402793;
            } else {
                goto lab_0x40277c;
            }
        }
    }
  lab_0x40277c:;
    int64_t result = function_406820((int64_t)g30); // 0x402783
    if ((int32_t)result == 0) {
        // 0x40278c
        return result;
    }
    // 0x4027ce
    _exit(g18);
    // UNREACHABLE
  lab_0x402793:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40279f
    if (g34 == 0) {
        // 0x4027d9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4027b3
        error(0, *err_num, "%s: %s", (char *)function_404260((int64_t)g34), v1);
    }
    // 0x4027ce
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x4027f0 - 0x402889
int64_t function_4027f0(int64_t str) {
    // 0x4027f0
    if (str == 0) {
        // 0x402869
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4027fe
    int64_t result = (int64_t)found_char_pos; // 0x4027fe
    if (found_char_pos == NULL) {
        // 0x402859
        g35 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402808
    if (v1 - str < 7) {
        // 0x402859
        g35 = str;
        g29 = str;
        return result;
    }
    // 0x402818
    bool v2; // 0x4027f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4027f0
    int64_t v5 = result - 6; // 0x4027f0
    int64_t v6 = 7; // 0x402826
    unsigned char v7 = *(char *)v5; // 0x402826
    char v8 = *(char *)v4; // 0x402826
    char v9 = v8; // 0x402826
    bool v10 = false; // 0x402826
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
    int64_t v12 = (int64_t)"lt-"; // 0x402830
    int64_t v13 = v1; // 0x402830
    int64_t v14 = 3; // 0x402830
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402859
        g35 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402842
    char v16 = *(char *)v12; // 0x402842
    char v17 = v16; // 0x402842
    bool v18 = false; // 0x402842
    while (v15 == v16) {
        // 0x402832
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
    int64_t v20 = v1; // 0x40284c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40284e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402859
    g35 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x402890 - 0x402982
int64_t function_402890(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4028a4
    int64_t result = (int64_t)v1; // 0x4028a4
    if (result != a1) {
        // 0x4028b1
        return result;
    }
    int64_t v2 = function_4068e0(); // 0x4028c0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402976
    if (v3 == 85) {
        // 0x4028d0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402968
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x4028fe
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40290b
        // 0x4028b1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402968
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40294d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40295a
    // 0x4028b1
    return result4;
}
// Address range: 0x402990 - 0x4029e7
int64_t function_402990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402990
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4029d8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4029e7 - 0x403bb1
int64_t function_4029e7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402a31
    int64_t v3 = 0; // 0x402a31
    int64_t v4; // 0x4029e7
    int64_t v5; // 0x4029e7
    int64_t v6; // 0x4029e7
    int64_t v7; // 0x4029e7
    int64_t v8; // 0x4029e7
    int64_t v9; // 0x4029e7
    int64_t v10; // 0x4029e7
    int64_t v11; // 0x4029e7
    int64_t v12; // 0x4029e7
    int64_t v13; // 0x4029e7
    int64_t v14; // 0x4029e7
    int64_t v15; // 0x4029e7
    int64_t v16; // 0x4029e7
    int64_t v17; // 0x4029e7
    int64_t v18; // 0x4029e7
    int64_t result; // 0x4029e7
    int64_t v19; // 0x4029e7
    int32_t wc; // bp+132, 0x4029e7
    int64_t ps; // bp+136, 0x4029e7
    char v20; // 0x402fa0
    int64_t v21; // 0x402fa0
    int64_t v22; // 0x403348
    int64_t v23; // 0x4029e7
    int64_t v24; // 0x403367
    int32_t v25; // 0x4029e7
    while (true) {
      lab_0x402a38_2:
        // 0x402a38
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4029e7
        int64_t v27; // 0x402a6c
        while (true) {
          lab_0x402a38:
            // 0x402a38
            v5 = v26;
            bool v28 = v15 == v5; // 0x402a43
            if (v15 == -1) {
                // 0x402a45
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402a53
            if (v28) {
                // break (via goto) -> 0x4031b8
                goto lab_0x4031b8;
            }
            // 0x402a5c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g46 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40304b
                    if (v25 % 2 == 0) {
                        goto lab_0x402b91;
                    }
                    // 0x40346d
                    v26 = v5 + 1;
                    goto lab_0x402a38;
                }
                case 7: {
                    goto lab_0x402b91;
                }
                case 8: {
                    goto lab_0x402b91;
                }
                case 9: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402b91;
                }
                case 12: {
                    goto lab_0x402b91;
                }
                case 13: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402b5d;
                }
                case 36: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402b91;
                }
                case 38: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402b91;
                }
                case 44: {
                    goto lab_0x402b91;
                }
                case 45: {
                    goto lab_0x402b91;
                }
                case 46: {
                    goto lab_0x402b91;
                }
                case 47: {
                    goto lab_0x402b91;
                }
                case 48: {
                    goto lab_0x402b91;
                }
                case 49: {
                    goto lab_0x402b91;
                }
                case 50: {
                    goto lab_0x402b91;
                }
                case 51: {
                    goto lab_0x402b91;
                }
                case 52: {
                    goto lab_0x402b91;
                }
                case 53: {
                    goto lab_0x402b91;
                }
                case 54: {
                    goto lab_0x402b91;
                }
                case 55: {
                    goto lab_0x402b91;
                }
                case 56: {
                    goto lab_0x402b91;
                }
                case 57: {
                    goto lab_0x402b91;
                }
                case 58: {
                    goto lab_0x402b91;
                }
                case 59: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402b91;
                }
                case 66: {
                    goto lab_0x402b91;
                }
                case 67: {
                    goto lab_0x402b91;
                }
                case 68: {
                    goto lab_0x402b91;
                }
                case 69: {
                    goto lab_0x402b91;
                }
                case 70: {
                    goto lab_0x402b91;
                }
                case 71: {
                    goto lab_0x402b91;
                }
                case 72: {
                    goto lab_0x402b91;
                }
                case 73: {
                    goto lab_0x402b91;
                }
                case 74: {
                    goto lab_0x402b91;
                }
                case 75: {
                    goto lab_0x402b91;
                }
                case 76: {
                    goto lab_0x402b91;
                }
                case 77: {
                    goto lab_0x402b91;
                }
                case 78: {
                    goto lab_0x402b91;
                }
                case 79: {
                    goto lab_0x402b91;
                }
                case 80: {
                    goto lab_0x402b91;
                }
                case 81: {
                    goto lab_0x402b91;
                }
                case 82: {
                    goto lab_0x402b91;
                }
                case 83: {
                    goto lab_0x402b91;
                }
                case 84: {
                    goto lab_0x402b91;
                }
                case 85: {
                    goto lab_0x402b91;
                }
                case 86: {
                    goto lab_0x402b91;
                }
                case 87: {
                    goto lab_0x402b91;
                }
                case 88: {
                    goto lab_0x402b91;
                }
                case 89: {
                    goto lab_0x402b91;
                }
                case 90: {
                    goto lab_0x402b91;
                }
                case 91: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402b91;
                }
                case 94: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402b91;
                }
                case 96: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402b91;
                }
                case 98: {
                    goto lab_0x402b91;
                }
                case 99: {
                    goto lab_0x402b91;
                }
                case 100: {
                    goto lab_0x402b91;
                }
                case 101: {
                    goto lab_0x402b91;
                }
                case 102: {
                    goto lab_0x402b91;
                }
                case 103: {
                    goto lab_0x402b91;
                }
                case 104: {
                    goto lab_0x402b91;
                }
                case 105: {
                    goto lab_0x402b91;
                }
                case 106: {
                    goto lab_0x402b91;
                }
                case 107: {
                    goto lab_0x402b91;
                }
                case 108: {
                    goto lab_0x402b91;
                }
                case 109: {
                    goto lab_0x402b91;
                }
                case 110: {
                    goto lab_0x402b91;
                }
                case 111: {
                    goto lab_0x402b91;
                }
                case 112: {
                    goto lab_0x402b91;
                }
                case 113: {
                    goto lab_0x402b91;
                }
                case 114: {
                    goto lab_0x402b91;
                }
                case 115: {
                    goto lab_0x402b91;
                }
                case 116: {
                    goto lab_0x402b91;
                }
                case 117: {
                    goto lab_0x402b91;
                }
                case 118: {
                    goto lab_0x402b91;
                }
                case 119: {
                    goto lab_0x402b91;
                }
                case 120: {
                    goto lab_0x402b91;
                }
                case 121: {
                    goto lab_0x402b91;
                }
                case 122: {
                    goto lab_0x402b91;
                }
                case 123: {
                    goto lab_0x402b35;
                }
                case 124: {
                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402b35;
                }
                case 126: {
                    goto lab_0x402b5d;
                }
                default: {
                    goto lab_0x402f35;
                }
            }
        }
      lab_0x402f35:
        if (v23 != 1) {
            // 0x4032a0
            ps = 0;
            int64_t len = v15; // 0x4032b0
            if (v15 == -1) {
                // 0x4032b2
                len = strlen((char *)str);
            }
            // 0x4032de
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40333f:
                // 0x40333f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403344
                int64_t v30 = v29 + str;
                v24 = function_405f80(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4038ba_2;
                    }
                    case -1: {
                        goto lab_0x4038ba_2;
                    }
                    case -2: {
                        // 0x40399d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4039d7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4039da
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4039e7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4039e0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4038ba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4038ba_2;
                    }
                    case 1: {
                        goto lab_0x403310;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4033bc
                        char v34 = *(char *)v33; // 0x4033cd
                        unsigned char v35; // 0x4029e7
                        if (v34 < 125) {
                            // 0x4033d8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4033ef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402990(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4033c0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4033cd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4033d8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4033ef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402990(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4033c0
                            v33++;
                        }
                        goto lab_0x403310;
                    }
                }
            }
            goto lab_0x4038ba_2;
        } else {
            // 0x402f84
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402b91;
        }
    }
  lab_0x4031b8:
    // 0x4031b8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403aba
        if (v8 > result) {
            // 0x403ac3
            *(char *)(v12 + result) = 0;
        }
        // 0x402de7
        return result;
    }
    return function_402990(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402b91:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402ba0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402daa_2;
        }
    }
    int64_t v39 = result; // 0x402ca1
    char v40 = v20; // 0x402ca1
    int64_t v41 = v38; // 0x402ca1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402ca1
    int64_t v43 = v36; // 0x402ca1
    goto lab_0x402c1d;
  lab_0x402daa_2:
    // 0x402de7
    return function_402990(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4038ba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402b91;
    } else {
        uint64_t v49 = v46 + v5; // 0x40348e
        int64_t v50 = v5 + 1; // 0x403571
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403578
        char v52 = v20; // 0x403578
        int64_t v53 = result; // 0x403578
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403541
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403545
            int64_t v56 = v54 + 1; // 0x40354a
            int64_t v57 = v51 + 1; // 0x403571
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40353c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403541
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403545
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
        goto lab_0x402c1d;
    }
  lab_0x403310:
    // 0x403310
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40332f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403332
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4038ba
        goto lab_0x4038ba_2;
    }
    goto lab_0x40333f;
  lab_0x402b5d:
    // 0x402b5d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402daa_2;
    }
    goto lab_0x402b91;
  lab_0x402b35:;
    bool v60 = v15 == 1; // 0x402b40
    if (v15 == -1) {
        // 0x402b42
        v60 = *(char *)v1 == 0;
    }
    // 0x402b4e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402b91;
    } else {
        goto lab_0x402b5d;
    }
  lab_0x402c1d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402c22
        *(char *)(v44 + v45) = v40;
    }
    // 0x402c26
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402a38_2;
}
// Address range: 0x403bc0 - 0x403d5e
int64_t function_403bc0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403bc2
    int32_t * v3 = __errno_location(); // 0x403bdc
    int64_t v4 = (int64_t)g20; // 0x403be1
    int32_t v5 = *v3; // 0x403beb
    int64_t v6 = v4; // 0x403c01
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403d59
            function_404c70(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403c10
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403c17
        int64_t v9; // 0x403bc0
        if (g20 == &g21) {
            int64_t v10 = function_404a80(0, v8); // 0x403d3a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x403d3f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404a80(v4, v8); // 0x403c2b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x403c3a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x403c3a
        int32_t v14 = v7; // 0x403c41
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403c71
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403c7b
    int64_t * v17 = (int64_t *)v15; // 0x403c7e
    uint64_t v18 = *v17; // 0x403c7e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403c81
    int64_t result = *v19; // 0x403c81
    int64_t v20; // 0x403bc0
    uint64_t v21 = function_402990(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403ca4
    if (v18 > v21) {
        // 0x403d1b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403cb7
    *v17 = v22;
    if (result != (int64_t)&g36) {
        // 0x403cc7
        free((int64_t *)result);
    }
    int64_t result2 = function_404a20(v22); // 0x403ce1
    *v19 = result2;
    int64_t v23; // 0x403bc0
    function_402990(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403d1b
    *v3 = v5;
    return result2;
}
// Address range: 0x403d60 - 0x403d94
int64_t function_403d60(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403d67
    int64_t result = function_404c20(a1 == 0 ? (int64_t)&g37 : a1, 56); // 0x403d86
    return result;
}
// Address range: 0x403da0 - 0x403daf
int64_t function_403da0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g37 : a1); // 0x403dac
    return result;
}
// Address range: 0x403db0 - 0x403dbf
int64_t function_403db0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403db8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g37;
}
// Address range: 0x403dc0 - 0x403df3
int64_t function_403dc0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 + 8 : a1 + 8; // 0x403dd9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403dde
    uint32_t v3 = *v2; // 0x403dde
    uint32_t v4 = (int32_t)a2 % 32; // 0x403de2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403e00 - 0x403e13
int64_t function_403e00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g37 + 4 : a1 + 4); // 0x403e0c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403e20 - 0x403e4b
int64_t function_403e20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403e28
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403e45
        abort();
        // UNREACHABLE
    }
    // 0x403e3c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g37;
}
// Address range: 0x403e50 - 0x403ec2
int64_t function_403e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g37 : a5; // 0x403e72
    int32_t * v2 = __errno_location(); // 0x403e7b
    uint32_t v3 = *(int32_t *)v1; // 0x403e9b
    int64_t result = function_402990(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403eaa
    return result;
}
// Address range: 0x403ed0 - 0x403fb1
int64_t function_403ed0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g37 : a4; // 0x403ef2
    int32_t * v2 = __errno_location(); // 0x403ef8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403f17
    int32_t * v4 = (int32_t *)v1; // 0x403f1a
    int64_t v5 = function_402990(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403f35
    int64_t v6 = v5 + 1; // 0x403f3a
    int64_t result = function_404a20(v6); // 0x403f4f
    function_402990(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403f94
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403f9d
    return result;
}
// Address range: 0x403fc0 - 0x403fca
int64_t function_403fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403fc0
    return function_403ed0(a1, a2, 0, a3);
}
// Address range: 0x403fd0 - 0x404065
int64_t function_403fd0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403fd0
    int64_t v2 = v1; // 0x403fd0
    int64_t v3 = v2; // 0x403fe4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404003
        free((int64_t *)*(int64_t *)v4);
        v3 = &g47;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404000
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g47;
        }
    }
    int64_t v6 = v3; // 0x40401d
    if (g21 != 0x60a300) {
        // 0x40401f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g36;
        v6 = &g47;
    }
    int64_t result = v6; // 0x404041
    if (g20 != &g21) {
        // 0x404043
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g47;
    }
    // 0x404056
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x404070 - 0x404081
int64_t function_404070(void) {
    // 0x404070
    int64_t v1; // 0x404070
    return function_403bc0(v1, v1, -1, (int64_t *)&g37);
}
// Address range: 0x404090 - 0x40409a
int64_t function_404090(void) {
    // 0x404090
    int64_t v1; // 0x404090
    return function_403bc0(v1, v1, v1, (int64_t *)&g37);
}
// Address range: 0x4040a0 - 0x4040b6
int64_t function_4040a0(int64_t a1) {
    // 0x4040a0
    return function_403bc0(0, a1, -1, (int64_t *)&g37);
}
// Address range: 0x4040c0 - 0x4040d2
int64_t function_4040c0(int64_t a1, int64_t a2) {
    // 0x4040c0
    return function_403bc0(0, a1, a2, (int64_t *)&g37);
}
// Address range: 0x4040e0 - 0x404148
int64_t function_4040e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4040f0
    return function_403bc0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404150 - 0x4041b4
int64_t function_404150(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404160
    return function_403bc0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4041c0 - 0x4041cc
int64_t function_4041c0(int64_t a1, int64_t * a2) {
    // 0x4041c0
    return function_4040e0(0, a1 & 0xffffffff, (int64_t)a2);
}
// Address range: 0x4041d0 - 0x4041df
int64_t function_4041d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4041d0
    return function_404150(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4041e0 - 0x404250
int64_t function_4041e0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x4041ed
    int128_t v2 = __asm_movdqa(g38); // 0x4041f5
    int128_t v3 = __asm_movdqa(g39); // 0x4041fd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404212
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404228
    uint32_t v6 = *v5; // 0x404228
    uint32_t v7 = (int32_t)a3 % 32; // 0x40422d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403bc0(0, a1, a2, &v4);
}
// Address range: 0x404250 - 0x40425d
int64_t function_404250(int64_t a1, int64_t a2) {
    // 0x404250
    return function_4041e0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404260 - 0x404271
int64_t function_404260(int64_t a1) {
    // 0x404260
    return function_4041e0(a1, -1, 58);
}
// Address range: 0x404280 - 0x40428a
int64_t function_404280(void) {
    // 0x404280
    int64_t v1; // 0x404280
    return function_4041e0(v1, v1, 58);
}
// Address range: 0x404290 - 0x4042fe
int64_t function_404290(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4042aa
    return function_403bc0(a1, a3, -1, &v1);
}
// Address range: 0x404300 - 0x40436c
int64_t function_404300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x404307
    int128_t v2 = __asm_movdqa(g38); // 0x40430f
    int128_t v3 = __asm_movdqa(g39); // 0x404317
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404339
    if (a2 == 0 || a3 == 0) {
        // 0x404367
        abort();
        // UNREACHABLE
    }
    // 0x40434a
    return function_403bc0(a1, a4, a5, &v4);
}
// Address range: 0x404370 - 0x404379
int64_t function_404370(void) {
    // 0x404370
    int64_t v1; // 0x404370
    return function_404300(v1, v1, v1, v1, -1);
}
// Address range: 0x404380 - 0x404397
int64_t function_404380(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404380
    return function_404300(0, a1, a2, a3, -1);
}
// Address range: 0x4043a0 - 0x4043b3
int64_t function_4043a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4043a0
    return function_404300(0, a1, a2, a3, a4);
}
// Address range: 0x4043c0 - 0x4043ca
int64_t function_4043c0(void) {
    // 0x4043c0
    int64_t v1; // 0x4043c0
    return function_403bc0(v1, v1, v1, &g19);
}
// Address range: 0x4043d0 - 0x4043e2
int64_t function_4043d0(int64_t a1, int64_t a2) {
    // 0x4043d0
    return function_403bc0(0, a1, a2, &g19);
}
// Address range: 0x4043f0 - 0x404401
int64_t function_4043f0(void) {
    // 0x4043f0
    int64_t v1; // 0x4043f0
    return function_403bc0(v1, v1, -1, &g19);
}
// Address range: 0x404410 - 0x404426
int64_t function_404410(int64_t a1) {
    // 0x404410
    return function_403bc0(0, a1, -1, &g19);
}
// Address range: 0x404430 - 0x40447b
int64_t function_404430(int64_t * a1) {
    // 0x404430
    int64_t v1; // bp-152, 0x404430
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x404470
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x404480 - 0x40485d
int64_t function_404480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404518
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40449c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4044b6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4044fb
    if (a6 < 10) {
        // 0x40450a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404602
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404860 - 0x404880
int64_t function_404860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404860
    if (a5 == 0) {
        // 0x40487b
        return function_404480(a1, a2, a3, a4, a5, 0, (int64_t)&g47);
    }
    int64_t v1 = 0; // 0x404867
    v1++;
    int64_t v2 = v1; // 0x404879
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404870
        v1++;
        v2 = v1;
    }
    // 0x40487b
    return function_404480(a1, a2, a3, a4, a5, v2, (int64_t)&g47);
}
// Address range: 0x404880 - 0x4048e0
int64_t function_404880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404880
    int64_t v3 = &v2; // 0x404880
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4048b3
    int64_t v6; // 0x40489d
    int64_t * v7; // 0x4048bb
    int64_t v8; // 0x4048bb
    int64_t v9; // 0x4048c7
    if (v5 < 48) {
        // 0x404890
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4048d3
            break;
        }
    } else {
        // 0x4048bb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4048d3
            break;
        }
    }
    int64_t v10 = 10; // 0x4048b1
    while (v4 != 9) {
        // 0x4048a9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404890
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4048d3
                break;
            }
        } else {
            // 0x4048bb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4048d3
                break;
            }
        }
        // 0x4048a9
        v10 = 10;
    }
    // 0x4048d3
    return function_404480(a1, a2, a3, a4, v3, v10, (int64_t)&g47);
}
// Address range: 0x4048e0 - 0x40499c
int64_t function_4048e0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4048e0
    int64_t v1; // bp-168, 0x4048e0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4048e0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4048e0
    int64_t v8; // 0x4048e0
    int64_t v9; // bp-56, 0x4048e0
    int64_t v10; // 0x404945
    int64_t v11; // 0x404969
    if ((int32_t)v6 < 48) {
        // 0x404930
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404980
            break;
        }
    } else {
        // 0x404962
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404980
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40495a
    int64_t v13 = 10; // 0x40495a
    while (v5 != 9) {
        // 0x40495c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404930
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404980
                break;
            }
        } else {
            // 0x404962
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404980
                break;
            }
        }
        // 0x404952
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404980
    int64_t v14; // bp-136, 0x4048e0
    int64_t result = function_404480(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g47); // 0x40498f
    return result;
}
// Address range: 0x4049a0 - 0x404a14
int64_t function_4049a0(int64_t a1) {
    // 0x4049a0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404a03
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404a20 - 0x404a3a
int64_t function_404a20(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404a24
    if (size != 0 != (mem == NULL)) {
        // 0x404a33
        return (int64_t)mem;
    }
    // 0x404a35
    function_404c70(size);
    // UNREACHABLE
}
// Address range: 0x404a40 - 0x404a61
int64_t function_404a40(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404a43
    int64_t v2 = v1; // 0x404a43
    if (v2 < 0) {
        // 0x404a5b
        function_404c70(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404a59
        return function_404a20(v2);
    }
    // 0x404a5b
    function_404c70(v2);
    // UNREACHABLE
}
// Address range: 0x404a70 - 0x404a72
int64_t function_404a70(void) {
    // 0x404a70
    int64_t v1; // 0x404a70
    return function_404a20(v1);
}
// Address range: 0x404a80 - 0x404ab6
int64_t function_404a80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404aa8
        free(v1);
        return (int32_t)&g47 ^ (int32_t)&g47;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404a91
    if (a2 != 0 != (mem == NULL)) {
        // 0x404aa0
        return (int64_t)mem;
    }
    // 0x404ab1
    function_404c70(a1);
    // UNREACHABLE
}
// Address range: 0x404ac0 - 0x404ae1
int64_t function_404ac0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404ac3
    int64_t v2 = v1; // 0x404ac3
    if (v2 < 0) {
        // 0x404adb
        function_404c70(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404ad9
        return function_404a80(a1, v2);
    }
    // 0x404adb
    function_404c70(a1);
    // UNREACHABLE
}
// Address range: 0x404af0 - 0x404b76
int64_t function_404af0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404b4b
            function_404c70(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404a80(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404b33
    if (a2 == 0) {
        // 0x404b58
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404b38
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404b4b
        function_404c70(a1);
        // UNREACHABLE
    }
    // 0x404b1a
    *(int64_t *)a2 = v2;
    return function_404a80(a1, v2 * a3);
}
// Address range: 0x404b80 - 0x404bd0
int64_t function_404b80(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404b80
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404bca
            function_404c70(a1);
            // UNREACHABLE
        }
        // 0x404ba2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404a80(a1, v1);
    }
    if (a2 == 0) {
        // 0x404bb5
        *(int64_t *)a2 = 128;
        return function_404a80(0, 128);
    }
    // 0x404bc8
    if (a2 < 0) {
        // 0x404bca
        function_404c70(a1);
        // UNREACHABLE
    }
    // 0x404ba2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404a80(a1, v1);
}
// Address range: 0x404bd0 - 0x404be7
int64_t function_404bd0(int64_t a1, int64_t a2) {
    // 0x404bd0
    return (int64_t)memset((int64_t *)function_404a20(a1), 0, (int32_t)a1);
}
// Address range: 0x404bf0 - 0x404c1e
int64_t function_404bf0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404bf7
    if ((int64_t)v1 < 0) {
        // 0x404c19
        function_404c70(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404c19
        function_404c70(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404c0a
    if (mem != NULL) {
        // 0x404c14
        return (int64_t)mem;
    }
    // 0x404c19
    function_404c70(nmemb);
    // UNREACHABLE
}
// Address range: 0x404c20 - 0x404c48
int64_t function_404c20(int64_t a1, int64_t a2) {
    int64_t v1 = function_404a20(a2); // 0x404c2f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404c50 - 0x404c63
int64_t function_404c50(int64_t str) {
    // 0x404c50
    return function_404c20(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404c70 - 0x404ca1
int64_t function_404c70(int64_t a1) {
    // 0x404c70
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404cb0 - 0x404cdf
int64_t function_404cb0(int64_t a1, int64_t a2) {
    int64_t result = function_404ce0(0, 0); // 0x404cb5
    if (result != 0 || *__errno_location() != 12) {
        // 0x404cc2
        return result;
    }
    // 0x404cda
    function_404c70(0);
    // UNREACHABLE
}
// Address range: 0x404ce0 - 0x4051a2
int64_t function_404ce0(int32_t a1, int32_t a2) {
    // 0x404ce0
    int32_t size; // 0x404ce0
    int32_t v1; // 0x404ce0
    int32_t v2; // 0x404ce0
    if (a2 != 0) {
        // 0x404d40
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x404d12;
        } else {
            goto lab_0x404d5c;
        }
    } else {
        // 0x404d00
        size = 0x1000;
        if (a1 != 0) {
            // 0x405100
            *__errno_location() = 22;
            // 0x404d26
            return 0;
        }
        goto lab_0x404d12;
    }
  lab_0x4050a0:;
    // 0x4050a0
    int32_t v3; // 0x40509a
    int64_t v4 = v3; // 0x4050a2
    int64_t v5; // 0x404ce0
    int64_t dirp2 = v5; // 0x4050a2
    int32_t * v6; // 0x404de6
    if (v3 != 0) {
        goto lab_0x4050b1;
    } else {
        // 0x4050a4
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x4050b1;
    }
  lab_0x404eb2:;
    // 0x404eb2
    int64_t v7; // 0x404ce0
    int64_t v8 = v7;
    int64_t v9; // 0x404ce0
    int64_t v10 = v9 + 19; // 0x404eb2
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x404ce0
    int64_t v12; // 0x404ce0
    int32_t v13; // 0x404ce0
    int32_t fd; // 0x404e02
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x404ee5
        if (v11 == v12) {
            // break -> 0x404f00
            goto lab_0x404f00;
        }
    }
    int64_t v14 = v8; // 0x404ce0
    goto lab_0x404e70_2;
  lab_0x40517e_2:
    // 0x40517e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x4050b1;
  lab_0x404d12:;
    int64_t * mem = malloc(size); // 0x404d17
    int32_t v41 = (int64_t)mem; // 0x404d1c
    int32_t result = v41; // 0x404d24
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x404d26
        return result;
    }
    goto lab_0x404d5c;
  lab_0x404d5c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x404d61
    int64_t v46 = v45 - 1; // 0x404d70
    *(char *)v46 = 0;
    int64_t v47; // 0x404ce0
    int64_t v48; // 0x404ce0
    int32_t * v49; // 0x404ce0
    int64_t v50; // 0x404ce0
    int64_t v33; // 0x404ce0
    int64_t v40; // 0x404ce0
    int64_t v51; // 0x404ce0
    int32_t v38; // 0x404ce0
    int32_t v52; // 0x404ce0
    int32_t v53; // 0x404ce0
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x4050d8;
    } else {
        // 0x404d86
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x4050d8;
        } else {
            // 0x404db1
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x404ff8;
            } else {
                // 0x404de6
                v6 = __errno_location();
                int32_t v54 = v1; // 0x404df3
                int32_t v55 = v42; // 0x404df3
                int64_t v56 = v11; // 0x404df3
                int64_t v57 = v46; // 0x404df3
                int64_t v58 = 0; // 0x404df3
                int32_t fd2 = -100; // 0x404df3
                int64_t dirp3; // 0x404ce0
                while (true) {
                    // 0x404df6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x405127
                        break;
                    }
                    // 0x404e12
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x405138
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x40511d;
                        } else {
                            // 0x405141
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x40511d;
                        }
                    }
                    // 0x404e2b
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x404e30
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x405119
                            v40 = (int64_t)*v6;
                            goto lab_0x40511d;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x404e57
                    if (dirp == NULL) {
                        // 0x405119
                        v40 = (int64_t)*v6;
                        goto lab_0x40511d;
                    }
                    // 0x404e68
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x404e70_2:;
                        int64_t v15 = v14; // 0x404ce0
                        int64_t v16; // 0x404ce0
                        int64_t v17; // 0x404ce0
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x404e7b
                            int64_t v20; // 0x404ce0
                            int64_t v21; // 0x404ce0
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x405050
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x4050a0;
                                }
                                // 0x40505d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x405068
                                if (v23 == NULL) {
                                    // 0x40509a
                                    v3 = *v6;
                                    goto lab_0x4050a0;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x404eb2;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x404e93
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x405080
                            if (*(char *)v28 != 0) {
                                // 0x40508a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x404e93
                                    break;
                                }
                            }
                            // 0x404e70
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x404eb2;
                        } else {
                            // 0x404e98
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x404ead
                            int64_t v32; // 0x404ce0
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x404e70
                                v14 = v31;
                                goto lab_0x404e70_2;
                            } else {
                                goto lab_0x404eb2;
                            }
                        }
                    }
                  lab_0x404f00:;
                    int64_t v61 = v38; // 0x404f08
                    uint64_t v62 = v57 - v61; // 0x404f08
                    int32_t len = strlen(str); // 0x404f0d
                    uint64_t v63 = (int64_t)len; // 0x404f0d
                    int32_t v64 = v60; // 0x404f18
                    int32_t v65 = v38; // 0x404f18
                    int64_t dest_mem = v57; // 0x404f18
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x405190
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x4050b1;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x404f26
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x404f31
                        uint64_t v68 = v67 + v66; // 0x404f35
                        if (v68 < v66) {
                            goto lab_0x40517e_2;
                        }
                        // 0x404f48
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x404f50
                        if (mem2 == NULL) {
                            goto lab_0x40517e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x404f50
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x404fad
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x404fde
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x4050e0;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x404ff8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x405127
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x4050b9;
                } else {
                    goto lab_0x4050b1;
                }
            }
        }
    }
  lab_0x4050d8:
    // 0x4050d8
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x4050e0;
  lab_0x4050e0:;
    int64_t v77 = (int64_t)*v49; // 0x4050e6
    int64_t v34 = v77; // 0x4050ea
    int32_t * v35 = v49; // 0x4050ea
    int32_t * v36 = v49; // 0x4050ea
    int32_t v37 = v53; // 0x4050ea
    int64_t v39 = v77; // 0x4050ea
    if (a1 != 0) {
        goto lab_0x4050c1;
    } else {
        goto lab_0x4050ec;
    }
  lab_0x4050c1:
    // 0x4050c1
    *v35 = (int32_t)v34;
    // 0x404d26
    return 0;
  lab_0x4050ec:
    // 0x4050ec
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x4050c1;
  lab_0x404ff8:
    // 0x404ff8
    if (v51 == v47 - 1 + v48) {
        // 0x405167
        int64_t v78; // 0x404ce0
        int64_t v79 = v78 - 1; // 0x40516c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x405022
    int32_t v81 = v50 - v51; // 0x405022
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x40502d
    if (a2 == 0) {
        // 0x405150
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x404d26
    return result2;
  lab_0x4050b9:
    // 0x4050b9
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x4050ec;
    } else {
        goto lab_0x4050c1;
    }
  lab_0x4050b1:
    // 0x4050b1
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x4050b9;
  lab_0x40511d:
    // 0x40511d
    close(fd);
    v33 = v40;
    goto lab_0x4050b9;
}
// Address range: 0x4051b0 - 0x40528f
int64_t function_4051b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4051bc
    uint32_t v2 = *v1; // 0x4051bc
    int64_t v3 = a2 & 0xffffffff; // 0x4051c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4051c4
    uint64_t v5 = (int64_t)*v4; // 0x4051c4
    int64_t v6; // 0x405232
    if (v3 <= v5) {
      lab_0x40522c_2:
        // 0x40522c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4051b2
    int64_t v8 = v2; // 0x4051b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40522c
        goto lab_0x40522c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4051e8
    int64_t v17; // 0x4051f6
    int64_t * v18; // 0x405210
    int64_t * v19; // 0x405213
    int64_t v20; // 0x40521e
    int64_t v21; // 0x4051f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4051f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405210
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405227
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40522c
            goto lab_0x40522c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40522c
            goto lab_0x40522c_2;
        }
        // 0x4051e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40526b
    int64_t * v23 = (int64_t *)v22; // 0x405270
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405273
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405270
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405287
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4051dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40522c
            goto lab_0x40522c_2;
        }
        // 0x4051e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4051f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405210
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405227
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40522c
                goto lab_0x40522c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40522c
                goto lab_0x40522c_2;
            }
            // 0x4051e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405250
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405270
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405287
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40522c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405290 - 0x4058ac
int64_t function_405290(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4052af
    int64_t v2 = *v1; // 0x4052af
    char * str2 = (char *)v2; // 0x4052bc
    char c = *str2; // 0x4052bc
    int64_t v3 = v2; // 0x4052e8
    int64_t v4 = 0; // 0x405290
    int32_t v5; // 0x405290
    int64_t v6; // 0x405290
    int64_t v7; // 0x405290
    int64_t v8; // 0x405290
    int64_t v9; // 0x405290
    int64_t v10; // 0x405290
    int64_t v11; // 0x405290
    int64_t v12; // 0x405290
    int64_t v13; // 0x405290
    int64_t str3; // 0x405290
    int64_t v14; // 0x405290
    int64_t v15; // 0x405290
    int64_t v16; // 0x405290
    int64_t v17; // 0x405290
    int32_t v18; // 0x405290
    int32_t v19; // 0x405290
    int32_t v20; // 0x405290
    int32_t v21; // 0x405290
    int32_t v22; // 0x405290
    int32_t v23; // 0x405290
    int32_t v24; // 0x405290
    int32_t v25; // 0x405290
    int32_t v26; // 0x405290
    int32_t v27; // 0x405290
    int32_t v28; // 0x405290
    int32_t v29; // 0x405290
    int64_t nmemb; // 0x405290
    int64_t v30; // 0x405290
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4052ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4052e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4052f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4052fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4052c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40532c
                int64_t v34; // 0x405290
                int64_t v35; // 0x405290
                if (strncmp(str, str2, n) == 0) {
                    // 0x405335
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4054b0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405346
                int64_t v37 = *(int64_t *)v36; // 0x40534a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405320
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405335
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4054b0;
                        }
                    }
                    // 0x405346
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
                  lab_0x405396:
                    // 0x405396
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
                        goto lab_0x4053f0;
                    } else {
                        if (v11 == 0) {
                            // 0x405560
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4053f0;
                        } else {
                            if (v39 == 0) {
                                // 0x405510
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4053ba;
                                } else {
                                    // 0x40551c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4053ba;
                                    } else {
                                        // 0x40552a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4053ba;
                                        } else {
                                            goto lab_0x4053f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4053ba;
                            }
                        }
                    }
                }
              lab_0x405401:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4055d6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405782
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x4057a2
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4057ef
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x405809
                            int64_t v45; // 0x40580b
                            if (*(char *)v42 != 0) {
                                // 0x40580b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405803
                            while (v17 + nmemb != v42) {
                                // 0x405805
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40580b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x4057f8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405830
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x4055e4
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40573f
                        free((int64_t *)v17);
                    }
                    // 0x405639
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405650
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4054fe
                    return 63;
                }
                // 0x405420
                v5 = v39;
                if (v13 != 0) {
                    // 0x4054a4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4054b0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4054c0
                    uint32_t v50 = *v49; // 0x4054c0
                    int64_t v51 = v50; // 0x4054c0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4054ca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4054d3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4056ff
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4056aa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4054fe
                            return 63;
                        }
                        // 0x405548
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40585f
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40575d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405770
                                // 0x4054fe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40566e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405682
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4054eb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4054ee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4054f2
                    int64_t result = v59; // 0x4054f8
                    if (v58 != 0) {
                        // 0x4054fa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4054fe
                    return result;
                }
            } else {
                // 0x4052fe
                v5 = v32;
            }
            // break -> 0x405425
            break;
        }
    }
    // 0x405425
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40543d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405447
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4054fe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405589
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405476
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405486
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4053f0:
    // 0x4053f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4053f0
    int64_t v63 = *(int64_t *)v62; // 0x4053f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405401
        goto lab_0x405401;
    }
    goto lab_0x405396;
  lab_0x4053ba:
    // 0x4053ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405290
    int32_t v65; // 0x405290
    int32_t v66; // 0x405290
    if (v27 != 0) {
        goto lab_0x4053f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405570
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4053f0;
            } else {
                goto lab_0x4053e1;
            }
        } else {
            // 0x4053d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4056cc
                int64_t v67 = (int64_t)mem; // 0x4056cc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4053f0;
                } else {
                    // 0x4056df
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4053e1;
                }
            } else {
                goto lab_0x4053e1;
            }
        }
    }
  lab_0x4053e1:
    // 0x4053e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4053f0;
}
// Address range: 0x4058b0 - 0x405e76
int64_t function_4058b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4058d1
    if (v3 < 1) {
        // 0x405a8e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4058cd
    int32_t v5 = *(int32_t *)a7; // 0x4058d9
    uint64_t v6 = a1 & 0xffffffff; // 0x4058db
    int64_t v7 = v2; // 0x4058e0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4058e3
    *v8 = 0;
    int64_t v9; // 0x4058b0
    int64_t v10; // 0x4058b0
    int64_t v11; // 0x4058b0
    int64_t v12; // 0x4058b0
    int64_t str; // 0x4058b0
    int64_t v13; // 0x4058b0
    int64_t v14; // 0x4058b0
    int64_t v15; // 0x4058b0
    int64_t v16; // 0x4058b0
    int64_t v17; // 0x4058b0
    int32_t v18; // 0x4058b0
    char v19; // 0x4058b0
    if (v5 == 0) {
        // 0x405ac8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4058fa;
    } else {
        // 0x4058f3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405940
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405943
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405a08;
            } else {
                int64_t v22 = v7 + 1; // 0x405956
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405966
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405a1c;
                } else {
                    goto lab_0x405978;
                }
            }
        } else {
            goto lab_0x4058fa;
        }
    }
  lab_0x4058fa:
    // 0x4058fa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405900
    *v24 = 0;
    int64_t v25; // 0x4058b0
    int64_t v26; // 0x4058b0
    int64_t v27; // 0x4058b0
    switch (*(char *)&v2) {
        case 45: {
            // 0x4059f0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4059fd;
        }
        case 43: {
            // 0x405d00
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4059fd;
        }
        default: {
            // 0x40591c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405c7f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405d98
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4059fd;
                } else {
                    // 0x405c8d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40592a;
                }
            } else {
                goto lab_0x40592a;
            }
        }
    }
  lab_0x405a08:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405a0f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405978;
    } else {
        goto lab_0x405a1c;
    }
  lab_0x40592a:
    // 0x40592a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4059fd;
  lab_0x4059fd:
    // 0x4059fd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405a08;
  lab_0x405978:;
    uint32_t v30 = *(int32_t *)a7; // 0x405978
    int64_t v31 = v30; // 0x405978
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40597a
    if ((int64_t)*v32 > v31) {
        // 0x40597f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405982
    if (*v33 > v30) {
        // 0x405987
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40598a
    int64_t v35 = v31; // 0x40598e
    int64_t v36 = v15; // 0x40598e
    int64_t v37; // 0x4058b0
    int64_t v38; // 0x4058b0
    int64_t v39; // 0x4058b0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405af8
        int64_t v41 = v40; // 0x405af8
        v2 = v41;
        int64_t v42; // 0x4058b0
        if (*v33 == v40) {
            // 0x405ce0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405ce8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405b04
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405b08
                function_4051b0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405b18
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405b21
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405b2a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405b41
            int64_t v47 = v45 & 0xffffffff; // 0x405b45
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405b4e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405b54
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405b56;
                }
            }
            int64_t v48 = v47 + 1; // 0x405b30
            int64_t v49 = v48 & 0xffffffff; // 0x405b30
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405b41
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405b4e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405b54
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405b56;
                    }
                }
                // 0x405b30
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405cf8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405b56;
    } else {
        goto lab_0x405994;
    }
  lab_0x405a1c:
    // 0x405a1c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405a1f
    int64_t v51 = v12; // 0x405a1f
    int64_t v52 = v14; // 0x405a1f
    if (*(char *)v10 == 0) {
        goto lab_0x405978;
    } else {
        goto lab_0x405a25;
    }
  lab_0x405994:;
    int32_t v53 = v35; // 0x405994
    int64_t v54; // 0x4058b0
    int64_t v55; // 0x4058b0
    int64_t v56; // 0x4058b0
    int64_t v57; // 0x4058b0
    int64_t v58; // 0x4058b0
    int64_t v59; // 0x4058b0
    char * v60; // 0x4058b0
    int64_t v61; // 0x4058b0
    int64_t v62; // 0x4059a9
    int64_t v63; // 0x4058b0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405ae3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405ae6;
    } else {
        // 0x40599c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4058b0
        int64_t v66 = v65 ? -1 : 1; // 0x4059b0
        int64_t v67 = (int64_t)"--"; // 0x4058b0
        int64_t v68 = v62; // 0x4058b0
        int64_t v69 = 3; // 0x4059b0
        unsigned char v70 = *(char *)v68; // 0x4059b0
        char v71 = *(char *)v67; // 0x4059b0
        char v72 = v71; // 0x4059b0
        bool v73 = false; // 0x4059b0
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
            // 0x405aa0
            if (*(char *)v62 == 45) {
                // 0x405b60
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405b60
                if (c == 0) {
                    goto lab_0x405aaa;
                } else {
                    // 0x405b6d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405bf0;
                    } else {
                        if (c == 45) {
                            // 0x405dd3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405c45;
                        } else {
                            // 0x405b7e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405bf0;
                            } else {
                                // 0x405b83
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405ba4;
                                } else {
                                    // 0x405b8a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405bf0;
                                    } else {
                                        goto lab_0x405ba4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405aaa;
            }
        } else {
            uint32_t v75 = *v33; // 0x4059c0
            v2 = v75;
            int32_t v76 = *v32; // 0x4059c3
            int64_t v77 = v35 + 1; // 0x4059c6
            int32_t v78 = v77; // 0x4059c9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405d30
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4059d7
                    function_4051b0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4059e5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405ae6;
        }
    }
  lab_0x405a25:;
    // 0x405a25
    int64_t v79; // bp-104, 0x4058b0
    int64_t v80 = &v79; // 0x4058ba
    int64_t v81 = v50 + 1; // 0x405a25
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405a2c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405a31
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405a35
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405a39
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405a41
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405a46
    int32_t c2 = v84; // 0x405a46
    char * found_char_pos = strchr(str2, c2); // 0x405a46
    int64_t v87 = *v82; // 0x405a4b
    v2 = v87;
    int64_t v88 = *v85; // 0x405a55
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405a60
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405d50
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405d1d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405a8e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405a46
    char v91 = *(char *)(v90 + 1); // 0x405a7b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405a35
        if (v91 != 58) {
            // 0x405a8e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405ca4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405da8
                *v8 = 0;
            } else {
                // 0x405d8c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405cce
            *v83 = 0;
            // 0x405a8e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405cae
        if (v93 != 0) {
            // 0x405d40
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405cce
            *v83 = 0;
            // 0x405a8e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405cc1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405cce
            *v83 = 0;
            // 0x405a8e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405e0a
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405dba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405dc1
        // 0x405cce
        *v83 = 0;
        // 0x405a8e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405c19
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405c1b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405e40
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405df1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405df8
            // 0x405a8e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405c26
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405c2a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405c45;
  lab_0x405b56:
    // 0x405b56
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405994;
  lab_0x405c45:;
    int64_t v99 = function_405290(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405c63
    // 0x405a8e
    return v99 & 0xffffffff;
  lab_0x405ae6:;
    int32_t v100 = v55; // 0x405ae6
    if (v100 != (int32_t)v59) {
        // 0x405aea
        *(int32_t *)a7 = v100;
    }
    // 0x405a8e
    return 0xffffffff;
  lab_0x405aaa:
    // 0x405aaa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405ab1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405a8e
    return v99 & 0xffffffff;
  lab_0x405bf0:
    // 0x405bf0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405a25;
  lab_0x405ba4:
    // 0x405ba4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405290(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x405bca
    if ((int32_t)v101 != -1) {
        // 0x405a8e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405bdf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405bf0;
}
// Address range: 0x405e80 - 0x405ed6
int64_t function_405e80(int64_t a1) {
    // 0x405e80
    *(int32_t *)&g40 = g26;
    *(int32_t *)&g41 = g25;
    int64_t v1; // 0x405e80
    int64_t result = function_4058b0(v1, v1, v1, v1, v1, v1, &g40, a1 & 0xffffffff); // 0x405ea6
    g26 = *(int32_t *)&g40;
    g45 = g43;
    *(int32_t *)&g24 = g42;
    return result;
}
// Address range: 0x405ee0 - 0x405ef8
int64_t function_405ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405ee0
    return function_405e80(1);
}
// Address range: 0x405f00 - 0x405f13
int64_t function_405f00(int64_t a1, int64_t a2, char * a3, char (**a4)[8], int32_t a5, int64_t a6) {
    // 0x405f00
    return function_405e80(0);
}
// Address range: 0x405f20 - 0x405f35
int64_t function_405f20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f20
    return function_4058b0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405f40 - 0x405f56
int64_t function_405f40(void) {
    // 0x405f40
    return function_405e80(0);
}
// Address range: 0x405f60 - 0x405f78
int64_t function_405f60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f60
    return function_4058b0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405f80 - 0x405ffa
int64_t function_405f80(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405f8b
    int64_t v2 = (int64_t)&g10; // 0x405f8b
    int32_t * pwc; // 0x405f80
    int64_t v3; // 0x405f80
    int64_t n; // 0x405f80
    if (a2 == 0) {
        goto lab_0x405fd2;
    } else {
        // 0x405f8d
        if (a3 == 0) {
            // 0x405fb8
            return -2;
        }
        // 0x405f99
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405fd2;
        } else {
            goto lab_0x405fa4;
        }
    }
  lab_0x405fd2:
    // 0x405fd2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405f80
    pwc = (int32_t *)&v4;
    goto lab_0x405fa4;
  lab_0x405fa4:;
    char * wstr = (char *)v3; // 0x405faa
    int64_t ps; // 0x405f80
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405faa
    int64_t result = v5; // 0x405faa
    if (v5 < 0xfffffffe) {
        // 0x405fb8
        return result;
    }
    int64_t result2 = result; // 0x405fe9
    if ((char)function_406880(0, v3) == 0) {
        // 0x405feb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405fb8
    return result2;
}
// Address range: 0x406000 - 0x40612e
int64_t function_406000(int64_t a1, uint64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 1; // 0x406027
    int64_t v2 = 0; // 0x406027
    int64_t v3 = -1; // 0x406027
    int64_t v4; // 0x406000
    int64_t v5; // 0x406000
    int64_t v6; // 0x406000
    if (a2 <= 1) {
        // 0x406053
        *a3 = 1;
        v5 = -1;
        v4 = -1;
        v6 = 1;
    } else {
        int64_t v7; // 0x406000
        int64_t v8; // 0x406000
        int64_t v9; // 0x406000
        int64_t v10; // 0x406000
        while (true) {
            // 0x406029
            v9 = v3;
            int64_t v11 = v9 + a1; // 0x406029
            char * v12 = (char *)(v11 + 1);
            int64_t v13 = 1;
            unsigned char v14 = *(char *)(v13 + v11); // 0x40602d
            unsigned char v15 = *(char *)(v1 + a1); // 0x406032
            int64_t v16 = v1; // 0x406035
            int64_t v17 = v1; // 0x406035
            int64_t v18 = v13; // 0x406035
            int64_t v19 = v2; // 0x406035
            int64_t v20 = 1; // 0x406035
            char v21 = v14; // 0x406035
            char v22 = v15; // 0x406035
            unsigned char v23; // 0x40602d
            unsigned char v24; // 0x406032
            int64_t v25; // 0x406047
            if (v15 < v14) {
                v10 = v16;
                v25 = v10 + 1;
                if (v25 >= a2) {
                    // break (via goto) -> 0x406053
                    goto lab_0x406053;
                }
                // 0x406029
                v23 = *v12;
                v24 = *(char *)(v25 + a1);
                while (v24 < v23) {
                    // 0x40603b
                    v10 = v25;
                    v25 = v10 + 1;
                    if (v25 >= a2) {
                        // break (via goto) -> 0x406053
                        goto lab_0x406053;
                    }
                    // 0x406029
                    v23 = *v12;
                    v24 = *(char *)(v25 + a1);
                }
                // 0x4060b8
                v17 = v25;
                v18 = 1;
                v19 = v10;
                v20 = v10 - v9;
                v21 = v23;
                v22 = v24;
            }
            // 0x4060b8
            v3 = v19;
            while (v22 == v21) {
                int64_t v26 = v18;
                v13 = v26 == v20 ? 1 : v26 + 1;
                int64_t v27 = v26 == v20 ? v17 : v3;
                int64_t v28 = v27 + v13; // 0x406020
                v8 = v9;
                v7 = v20;
                if (v28 >= a2) {
                    goto lab_0x406053_3;
                }
                v14 = *(char *)(v13 + v11);
                v15 = *(char *)(v28 + a1);
                v16 = v28;
                v17 = v28;
                v18 = v13;
                v19 = v27;
                v21 = v14;
                v22 = v15;
                if (v15 < v14) {
                    v10 = v16;
                    v25 = v10 + 1;
                    if (v25 >= a2) {
                        // break (via goto) -> 0x406053
                        goto lab_0x406053;
                    }
                    // 0x406029
                    v23 = *v12;
                    v24 = *(char *)(v25 + a1);
                    while (v24 < v23) {
                        // 0x40603b
                        v10 = v25;
                        v25 = v10 + 1;
                        if (v25 >= a2) {
                            // break (via goto) -> 0x406053
                            goto lab_0x406053;
                        }
                        // 0x406029
                        v23 = *v12;
                        v24 = *(char *)(v25 + a1);
                    }
                    // 0x4060b8
                    v17 = v25;
                    v18 = 1;
                    v19 = v10;
                    v20 = v10 - v9;
                    v21 = v23;
                    v22 = v24;
                }
                // 0x4060b8
                v3 = v19;
            }
            // 0x4060ba
            v1 = v3 + 2;
            v2 = v3 + 1;
            v8 = v3;
            v7 = 1;
            if (v1 >= a2) {
                goto lab_0x406053_3;
            }
        }
      lab_0x406053:
        // 0x406053
        v8 = v9;
        v7 = v10 - v9;
      lab_0x406053_3:
        // 0x406053
        *a3 = v7;
        int64_t v29 = 1; // 0x406077
        int64_t v30 = -1; // 0x406077
        int64_t v31 = 0; // 0x406077
        v5 = v8;
        v4 = -1;
        v6 = 1;
        if (a2 > 1) {
            int64_t v32; // 0x406000
            int64_t v33; // 0x406000
            while (true) {
                // 0x406079
                v32 = v30;
                int64_t v34 = v32 + a1; // 0x406079
                char * v35 = (char *)(v34 + 1);
                int64_t v36 = 1;
                unsigned char v37 = *(char *)(v36 + v34); // 0x40607d
                unsigned char v38 = *(char *)(v29 + a1); // 0x406082
                int64_t v39 = v29; // 0x406086
                int64_t v40 = v29; // 0x406086
                int64_t v41 = 1; // 0x406086
                int64_t v42 = v36; // 0x406086
                int64_t v43 = v31; // 0x406086
                char v44 = v37; // 0x406086
                char v45 = v38; // 0x406086
                int64_t v46; // 0x406094
                unsigned char v47; // 0x40607d
                unsigned char v48; // 0x406082
                if (v38 > v37) {
                    v33 = v39;
                    v46 = v33 + 1;
                    if (v46 >= a2) {
                        // break (via goto) -> 0x4060a0
                        goto lab_0x4060a0;
                    }
                    // 0x406079
                    v47 = *v35;
                    v48 = *(char *)(v46 + a1);
                    while (v48 > v47) {
                        // 0x406088
                        v33 = v46;
                        v46 = v33 + 1;
                        if (v46 >= a2) {
                            // break (via goto) -> 0x4060a0
                            goto lab_0x4060a0;
                        }
                        // 0x406079
                        v47 = *v35;
                        v48 = *(char *)(v46 + a1);
                    }
                    // 0x4060d8
                    v40 = v46;
                    v41 = v33 - v32;
                    v42 = 1;
                    v43 = v33;
                    v44 = v47;
                    v45 = v48;
                }
                int64_t v49 = v43;
                while (v45 == v44) {
                    int64_t v50 = v42;
                    v36 = v50 == v41 ? 1 : v50 + 1;
                    int64_t v51 = v50 == v41 ? v40 : v49;
                    int64_t v52 = v51 + v36; // 0x406070
                    v5 = v8;
                    v4 = v32;
                    v6 = v41;
                    if (v52 >= a2) {
                        goto lab_0x4060a0_3;
                    }
                    v37 = *(char *)(v36 + v34);
                    v38 = *(char *)(v52 + a1);
                    v39 = v52;
                    v40 = v52;
                    v42 = v36;
                    v43 = v51;
                    v44 = v37;
                    v45 = v38;
                    if (v38 > v37) {
                        v33 = v39;
                        v46 = v33 + 1;
                        if (v46 >= a2) {
                            // break (via goto) -> 0x4060a0
                            goto lab_0x4060a0;
                        }
                        // 0x406079
                        v47 = *v35;
                        v48 = *(char *)(v46 + a1);
                        while (v48 > v47) {
                            // 0x406088
                            v33 = v46;
                            v46 = v33 + 1;
                            if (v46 >= a2) {
                                // break (via goto) -> 0x4060a0
                                goto lab_0x4060a0;
                            }
                            // 0x406079
                            v47 = *v35;
                            v48 = *(char *)(v46 + a1);
                        }
                        // 0x4060d8
                        v40 = v46;
                        v41 = v33 - v32;
                        v42 = 1;
                        v43 = v33;
                        v44 = v47;
                        v45 = v48;
                    }
                    // 0x4060d8
                    v49 = v43;
                }
                int64_t v53 = v49 + 2; // 0x406070
                v29 = v53;
                v30 = v49;
                v31 = v49 + 1;
                v5 = v8;
                v4 = v49;
                v6 = 1;
                if (v53 >= a2) {
                    goto lab_0x4060a0_3;
                }
            }
          lab_0x4060a0:
            // 0x4060a0
            v5 = v8;
            v4 = v32;
            v6 = v33 - v32;
        }
    }
  lab_0x4060a0_3:;
    int64_t v54 = v4 + 1; // 0x4060a0
    int64_t v55 = v5 + 1; // 0x4060a4
    int64_t result = v55; // 0x4060ab
    if (v54 >= v55) {
        // 0x4060ad
        *a3 = v6;
        result = v54;
    }
    // 0x4060b3
    return result;
}
// Address range: 0x406130 - 0x406479
int64_t function_406130(int64_t a1, int64_t a2, int64_t str, int64_t a4) {
    // 0x406130
    int64_t v1; // 0x406130
    int64_t v2; // bp-2112, 0x406130
    int64_t v3; // 0x406130
    if (a4 < 3) {
        // 0x406450
        v2 = 1;
        v1 = a4 - 1;
        v3 = 1;
    } else {
        // 0x406157
        int64_t v4; // 0x406130
        v1 = function_406000(str, a4, &v2, a4, v4, v4);
        v3 = v2;
    }
    // 0x406174
    int64_t v5; // bp-2184, 0x406130
    int64_t v6 = &v5; // 0x406146
    int64_t n = v1;
    int64_t v7; // bp-2104, 0x406130
    int64_t v8 = &v7; // 0x406181
    *(int64_t *)v8 = a4;
    v8 += 8;
    int64_t v9; // bp-56, 0x406130
    while (v8 != (int64_t)&v9) {
        // 0x406188
        *(int64_t *)v8 = a4;
        v8 += 8;
    }
    int64_t str2 = v3 + str; // 0x406199
    int64_t v10; // 0x406130
    int64_t result; // 0x406130
    if (a4 == 0) {
        // 0x4062ea
        v10 = -1;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x4062ff
            return 0;
        }
    } else {
        int64_t v11 = a4 - 1;
        int64_t v12 = v6 + 80; // 0x4061c5
        int64_t v13 = str + 1; // 0x4061c1
        *(int64_t *)(8 * (int64_t)*(char *)str + v12) = v11 + str - str;
        while (a4 + str != v13) {
            int64_t v14 = v13;
            unsigned char v15 = *(char *)v14; // 0x4061b8
            v13 = v14 + 1;
            *(int64_t *)(8 * (int64_t)v15 + v12) = v11 + str - v14;
        }
        // 0x4061cf
        v10 = v11;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x40631b
            if (function_406f70(a2 + a1, 0, a4 - a2) != 0) {
                // 0x4062ff
                return 0;
            }
            int64_t v16 = a4 - v3; // 0x406332
            int64_t v17 = 0;
            int64_t v18 = 0; // 0x406130
            int64_t v19 = a4;
            while (v19 != 0) {
                int64_t v20 = v17;
                int64_t v21 = 0x100000000 * v18;
                uint64_t v22 = *(int64_t *)(8 * (int64_t)*(char *)(a1 - 1 + v19) + v12); // 0x4063b4
                int64_t v23; // 0x406130
                int64_t v24; // 0x406130
                if (v22 != 0) {
                    int64_t v25 = v22; // 0x406355
                    if (v22 < v3) {
                        // 0x406357
                        v25 = v21 != 0 ? 0x100000000 * v16 >> 32 : v22;
                    }
                    // 0x406360
                    v23 = 0;
                    v24 = v25 + v20;
                } else {
                    uint64_t v26 = v21 >> 32; // 0x40639b
                    int64_t v27 = v26 >= n ? v26 : n; // 0x4063c4
                    if (v27 >= v11) {
                        // 0x406400
                        if (v26 < n) {
                            int64_t v28 = v20 + a1; // 0x40640d
                            char * v29; // 0x406130
                            char v30 = *v29; // 0x406411
                            int64_t v31; // 0x40631b
                            char v32 = *(char *)(v28 + v31); // 0x406416
                            int64_t v33 = v31; // 0x40641a
                            if (v32 == v30) {
                                int64_t v34 = v33;
                                while (v26 != v34) {
                                    int64_t v35 = v34 - 1;
                                    char v36 = *(char *)(v35 + v28); // 0x406420
                                    char v37 = *(char *)(v35 + str); // 0x406425
                                    v33 = v35;
                                    if (v37 != v36) {
                                        // break -> 0x406438
                                        break;
                                    }
                                    v34 = v33;
                                }
                            }
                        }
                        // 0x406438
                        if (v26 + 1 > n) {
                            // 0x406470
                            result = v20 + a1;
                            return result;
                        }
                        // 0x406441
                        v23 = v16;
                        v24 = v20 + v3;
                    } else {
                        int64_t v38 = v27;
                        char v39 = *(char *)(v20 + a1 + v38); // 0x4063e1
                        while (*(char *)(v38 + str) == v39) {
                            int64_t v40 = v38 + 1; // 0x4063d8
                            if (v40 == v11) {
                                goto lab_0x406400;
                            }
                            v38 = v40;
                            v39 = *(char *)(v20 + a1 + v38);
                        }
                        // 0x4063eb
                        v23 = 0;
                        v24 = v38 + v20 + 1 - n;
                    }
                }
                // 0x406366
                v17 = v24;
                int64_t v41 = v17 + a4; // 0x406369
                v18 = v23;
                if (function_406f70(v19 + a1, 0, v41 - v19) != 0) {
                    // break -> 0x4062ff
                    break;
                }
                v19 = v41;
            }
            // 0x4062ff
            return 0;
        }
    }
    uint64_t v42 = a4 - n; // 0x4061ee
    int64_t v43 = (v42 < n ? n : v42) + 1; // 0x4061fb
    v2 = v43;
    int64_t v44 = function_406f70(a2 + a1, 0, a4 - a2); // 0x406240
    if (a4 == 0) {
        // 0x4062ff
        return 0;
    }
    int64_t v45 = n - 1;
    int64_t v46 = v44; // 0x406130
    int64_t v47 = a4; // 0x406226
    int64_t v48 = 0;
    int64_t v49; // 0x406130
    int64_t v50; // 0x406130
    int64_t v51; // 0x406130
    int64_t v52; // 0x406130
    int64_t v53; // 0x406256
    int64_t v54; // 0x406271
    while (true) {
      lab_0x406253:
        // 0x406253
        result = 0;
        if (v46 != 0) {
            // break -> 0x4062ff
            break;
        }
        // 0x406261
        v49 = v47;
        v53 = 0x100000000 * v48 >> 32;
        unsigned char v55 = *(char *)(a1 - 1 + v49); // 0x406261
        int64_t v56 = *(int64_t *)(v6 + 80 + 8 * (int64_t)v55); // 0x406267
        v51 = v56;
        v50 = v53;
        if (v56 != 0) {
            goto lab_0x406220;
        } else {
            // 0x406271
            v54 = v53 + a1;
            if (n >= v10) {
                goto lab_0x4062a3;
            } else {
                // 0x40627a
                v52 = n;
                if (*(char *)(v54 + n) == *(char *)(n + str)) {
                    int64_t v57 = n + 1; // 0x40629a
                    while (v57 < v10) {
                        int64_t v58 = v57; // 0x406298
                        v52 = v57;
                        if (*(char *)(v57 + str) != *(char *)(v57 + v54)) {
                            goto lab_0x4062e0;
                        }
                        v57 = v58 + 1;
                    }
                    goto lab_0x4062a3;
                } else {
                    goto lab_0x4062e0;
                }
            }
        }
    }
  lab_0x4062ff_3:
    // 0x4062ff
    return result;
  lab_0x4062e0:
    // 0x4062e0
    v51 = v52;
    v50 = 1 - n + v53;
    goto lab_0x406220;
  lab_0x406220:;
    int64_t v59 = v50 + v51; // 0x406220
    goto lab_0x406223;
  lab_0x406223:
    // 0x406223
    v48 = v59;
    v47 = v48 + a4;
    v46 = function_406f70(v49 + a1, 0, v47 - v49);
    result = 0;
    if (v47 == 0) {
        // break -> 0x4062ff
        goto lab_0x4062ff_3;
    }
    goto lab_0x406253;
  lab_0x4062a3:
    // 0x4062a3
    result = v54;
    if (n == 0) {
        // break -> 0x4062ff
        goto lab_0x4062ff_3;
    }
    // 0x4062ad
    if (*(char *)(v54 + v45) == *(char *)(v45 + str)) {
        result = v54;
        if (v45 == 0) {
            // break (via goto) -> 0x4062ff
            goto lab_0x4062ff_3;
        }
        int64_t v60 = v45 - 1; // 0x4062ca
        int64_t v61 = v60; // 0x4062c8
        while (*(char *)(v60 + str) == *(char *)(v60 + v54)) {
            // 0x4062ca
            result = v54;
            if (v61 == 0) {
                // break (via goto) -> 0x4062ff
                goto lab_0x4062ff_3;
            }
            // 0x4062c0
            v60 = v61 - 1;
            v61 = v60;
        }
    }
    // 0x406311
    v59 = v53 + v43;
    goto lab_0x406223;
}
// Address range: 0x406480 - 0x406814
int64_t function_406480(int64_t result, char * str) {
    int64_t v1 = (int64_t)str;
    char v2 = result;
    char c = v1;
    if (v2 == 0) {
        // 0x406545
        return c == 0 ? result : 0;
    }
    int64_t v3 = result; // 0x4064a0
    int64_t v4 = v1; // 0x4064a0
    if (c == 0) {
        // 0x406545
        return result;
    }
    int64_t v5 = 1; // 0x4064a0
    v3++;
    v4++;
    unsigned char v6 = *(char *)v4; // 0x4064d1
    v5 &= (int64_t)(c == v2);
    char v7 = *(char *)v3; // 0x4064d7
    while (v7 != 0) {
        // 0x4064c0
        if (v6 == 0) {
            goto lab_0x4064e5;
        }
        char v8 = v6;
        v3++;
        v4++;
        v6 = *(char *)v4;
        v5 &= (int64_t)(v8 == v7);
        v7 = *(char *)v3;
    }
    // 0x4064de
    if (v6 != 0) {
        // 0x406545
        return 0;
    }
  lab_0x4064e5:
    // 0x4064e5
    if (v5 != 0) {
        // 0x406545
        return result;
    }
    uint64_t v9 = v4 - v1; // 0x4064f7
    char * found_char_pos = strchr((char *)(result + 1), (int32_t)c); // 0x4064fe
    int64_t result2 = (int64_t)found_char_pos; // 0x4064fe
    if (v9 == 1 || found_char_pos == NULL) {
        // 0x406545
        return result2;
    }
    uint64_t v10 = v9 + result; // 0x406511
    int64_t v11 = v10 < result2 ? 1 : v10 - result2; // 0x406527
    if (v9 >= 32) {
        // 0x406545
        return function_406130(result2, v11, v1, v9);
    }
    int64_t v12; // 0x406480
    int64_t v13; // bp-64, 0x406480
    int64_t v14; // 0x406480
    if (v9 < 3) {
        // 0x4067e9
        v13 = 1;
        v12 = v9 - 1;
        v14 = 1;
    } else {
        // 0x40656a
        v12 = function_406000(v1, v9, &v13, (int64_t)v6, v11, v1 % 256);
        v14 = v13;
    }
    int64_t n = v12;
    int64_t v15; // 0x406480
    int64_t v16; // 0x406480
    int64_t v17; // 0x406480
    int64_t v18; // 0x406480
    int64_t v19; // 0x406480
    int64_t v20; // 0x4066f0
    int64_t v21; // 0x406480
    int64_t v22; // 0x406480
    if (memcmp((int64_t *)str, (int64_t *)(v14 + v1), (int32_t)n) != 0) {
        uint64_t v23 = v9 - n; // 0x4066e3
        v20 = (v23 < n ? n : v23) + 1;
        v13 = v20;
        if (v9 == 0 | function_406f70(v11 + result2, 0, v9 - v11) != 0) {
            // 0x406545
            return 0;
        }
        // 0x406738
        v21 = n - 1;
        int64_t v24 = 0x100000000 - 0x100000000 * n >> 32;
        v15 = v9;
        v17 = 0;
        while (true) {
          lab_0x406738:
            // 0x406738
            v18 = v17;
            v16 = v15;
            v22 = v18 + result2;
            if (v9 > n) {
                // 0x406741
                if (*(char *)(v22 + n) == *(char *)(n + v1)) {
                    int64_t v25 = n + 1; // 0x40676a
                    while (v9 > v25) {
                        int64_t v26 = v25; // 0x406768
                        int64_t v27 = v25; // 0x406768
                        if (*(char *)(v25 + v1) != *(char *)(v25 + v22)) {
                            // 0x4067b0
                            v19 = v18 + v24 + v27;
                            goto lab_0x4067bd;
                        }
                        v25 = v26 + 1;
                    }
                    goto lab_0x406773;
                } else {
                    // 0x4067b0
                    v19 = v18 + v24 + n;
                    goto lab_0x4067bd;
                }
            } else {
                goto lab_0x406773;
            }
        }
      lab_0x406545_3:
        // 0x406545
        return 0;
    }
    // 0x4065b7
    if (v9 == 0 | function_406f70(v11 + result2, 0, v9 - v11) != 0) {
        // 0x406545
        return 0;
    }
    int64_t v28 = n - 1; // 0x4065b7
    char * v29 = (char *)(v28 + v1);
    int64_t v30 = 0x100000000 * (v9 - v14) / 0x100000000;
    int64_t v31 = 0x100000000 - 0x100000000 * n >> 32;
    int64_t v32 = v9; // 0x406480
    int64_t v33 = 0; // 0x406480
    int64_t v34 = 0; // 0x406480
    int64_t v35; // 0x406480
    uint64_t v36; // 0x406480
    int64_t v37; // 0x406480
    int64_t v38; // 0x406480
    while (true) {
      lab_0x406612:
        // 0x406612
        v36 = v34;
        v37 = v33;
        v35 = v32;
        int64_t v39 = n >= v36 ? n : v36; // 0x406618
        if (v9 > v39) {
            // 0x406621
            v38 = v39;
            if (*(char *)(v39 + v37 + result2) != *(char *)(v39 + v1)) {
                goto lab_0x4066c0;
            } else {
                int64_t v40; // 0x406480
                while (v9 != v40 + 1) {
                    // 0x406640
                    int64_t v41; // 0x406480
                    int64_t v42; // 0x40664a
                    char v43 = *(char *)(v42 + v41); // 0x406640
                    char v44 = *(char *)(v42 + v1); // 0x406644
                    v40 = v42;
                    v38 = v42;
                    if (v44 != v43) {
                        goto lab_0x4066c0;
                    }
                    int64_t v45 = v40;
                    v42 = v45 + 1;
                }
                goto lab_0x406653;
            }
        } else {
            goto lab_0x406653;
        }
    }
  lab_0x40680c:
    // 0x406545
    return v37 + result2;
  lab_0x406773:
    // 0x406773
    if (n == 0) {
        return 0;
    }
    // 0x40677d
    int64_t result3; // 0x406480
    if (*(char *)(v22 + v21) == *(char *)(v21 + v1)) {
        result3 = v22;
        if (v21 == 0) {
            return result3;
        }
        int64_t v46 = v21 - 1; // 0x40679a
        int64_t v47 = v46; // 0x406798
        while (*(char *)(v46 + v1) == *(char *)(v46 + v22)) {
            // 0x40679a
            result3 = v22;
            if (v47 == 0) {
                return result3;
            }
            // 0x406790
            v46 = v47 - 1;
            v47 = v46;
        }
    }
    // 0x4067c8
    v19 = v18 + v20;
    goto lab_0x4067bd;
  lab_0x4067bd:;
    int64_t v48 = v19 + v9; // 0x406718
    int64_t v49 = function_406f70(v16 + result2, 0, v48 - v16); // 0x406729
    v15 = v48;
    v17 = v19;
    if (v48 == 0 || v49 != 0) {
        // break -> 0x406545
        goto lab_0x406545_3;
    }
    goto lab_0x406738;
  lab_0x4066c0:;
    int64_t v50 = 0; // 0x4066d0
    int64_t v51 = v37 + v31 + v38; // 0x4066d0
    goto lab_0x4066af;
  lab_0x406653:;
    int64_t v54 = n; // 0x40665b
    if (n > v36) {
        int64_t v55 = v37 + result2; // 0x406666
        v54 = n;
        if (*v29 == *(char *)(v55 + v28)) {
            int64_t v56 = v28;
            v54 = v56;
            while (v36 != v56) {
                int64_t v57 = v56 - 1;
                int64_t v58 = v57; // 0x40668a
                v54 = v56;
                if (*(char *)(v57 + v1) != *(char *)(v57 + v55)) {
                    // break -> 0x406698
                    break;
                }
                v56 = v58;
                v54 = v56;
            }
        }
    }
    // 0x406698
    if (v36 + 1 > v54) {
        // break -> 0x40680c
        goto lab_0x40680c;
    }
    // 0x4066a5
    v50 = v30;
    v51 = v37 + v14;
    goto lab_0x4066af;
  lab_0x4066af:;
    int64_t v52 = v51 + v9; // 0x4065e0
    int64_t v53 = function_406f70(v35 + result2, 0, v52 - v35); // 0x4065f6
    result3 = 0;
    v32 = v52;
    v33 = v51;
    v34 = v50;
    if (v52 == 0 || v53 != 0) {
      lab_0x406545_3:
        // 0x406545
        return result3;
    }
    goto lab_0x406612;
}
// Address range: 0x406820 - 0x40687d
int64_t function_406820(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406827
    int64_t v2; // 0x406820
    int64_t result = function_406e50(a1, v2); // 0x406838
    if ((v2 & 32) != 0) {
        // 0x406860
        if ((int32_t)result == 0) {
            // 0x406864
            *__errno_location() = 0;
        }
        // 0x40685a
        return 0xffffffff;
    }
    // 0x406841
    if ((int32_t)result == 0) {
        // 0x40685a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406848
    if (v1 == 0) {
        // 0x40684a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40685a
    return result2;
}
// Address range: 0x406880 - 0x4068de
int64_t function_406880(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406886
    if (locale == NULL) {
        // 0x4068b3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406886
    bool v2; // 0x406880
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x406880
    int64_t v5 = v1; // 0x406880
    int64_t v6 = 2; // 0x4068a5
    unsigned char v7 = *(char *)v5; // 0x4068a5
    char v8 = *(char *)v4; // 0x4068a5
    char v9 = v8; // 0x4068a5
    bool v10 = false; // 0x4068a5
    while (v7 == v8) {
        // 0x406898
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4068b1
    int64_t v13 = v1; // 0x4068b1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4068b3
        return 0;
    }
    int64_t v14 = 6; // 0x4068b1
    unsigned char v15 = *(char *)v13; // 0x4068cd
    char v16 = *(char *)v12; // 0x4068cd
    char v17 = v16; // 0x4068cd
    bool v18 = false; // 0x4068cd
    while (v15 == v16) {
        // 0x4068c0
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
// Address range: 0x4068e0 - 0x406e42
int64_t function_4068e0(void) {
    char * v1 = nl_langinfo(14); // 0x4068f6
    char * v2 = g44; // 0x4068fb
    char * v3; // 0x4068e0
    int64_t v4; // 0x4068e0
    int64_t v5; // 0x4068e0
    int64_t v6; // 0x4068e0
    int64_t v7; // 0x4068e0
    int32_t size; // 0x4068e0
    int32_t size2; // 0x4068e0
    int32_t len; // 0x4069b2
    int64_t v8; // 0x4069b2
    char * env_val; // 0x40699d
    if (v2 == NULL) {
        // 0x406998
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406a05;
        } else {
            // 0x4069aa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406a05;
            } else {
                // 0x4069af
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40699d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406e35
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406a05;
                    } else {
                        // 0x406da9
                        size2 = len + 14;
                        goto lab_0x4069cb;
                    }
                } else {
                    goto lab_0x4069cb;
                }
            }
        }
    } else {
        // 0x4068e0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40691a;
    }
  lab_0x406c4c:;
    // 0x406c4c
    struct _IO_FILE * stream; // 0x406a8b
    int32_t v10 = __uflow(stream); // 0x406c4f
    int64_t v11; // 0x4068e0
    int64_t v12 = v11; // 0x406c59
    int64_t v13; // 0x4068e0
    int64_t v14 = v13; // 0x406c59
    int32_t v15 = v10; // 0x406c59
    int64_t v16; // 0x4068e0
    int64_t v17 = v16; // 0x406c59
    int64_t v18 = v11; // 0x406c59
    int64_t v19 = v13; // 0x406c59
    int64_t v20 = v16; // 0x406c59
    if (v10 == -1) {
        // break -> 0x406c5f
        goto lab_0x406c5f;
    }
    goto lab_0x406ad9;
  lab_0x406ace:;
    // 0x406ace
    int64_t v90; // 0x4068e0
    int64_t * v32; // 0x406ac0
    *v32 = v90 + 1;
    int64_t v89; // 0x4068e0
    v12 = v89;
    int64_t v91; // 0x4068e0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4068e0
    v17 = v92;
    goto lab_0x406ad9;
  lab_0x406ad9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4068e0
    int32_t v25; // bp-120, 0x4068e0
    int32_t v26; // bp-184, 0x4068e0
    int64_t v27; // 0x406a8b
    int64_t v28; // 0x406aa8
    int64_t v29; // 0x406aad
    int64_t * v30; // 0x406ac4
    switch (c) {
        case 32: {
            goto lab_0x406ac0;
        }
        case 10: {
            goto lab_0x406ac0;
        }
        case 9: {
            goto lab_0x406ac0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406cb1
            int32_t v33; // 0x4068e0
            char v34; // 0x4068e0
            int32_t v35; // 0x406cbe
            if (v31 < *v30) {
                // 0x406c90
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406cbb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406cb1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406c90
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406cbb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406ca0
                v36 = v33;
            }
            // 0x406d8f
            if (v36 == -1) {
                // break -> 0x406c5f
                break;
            }
            goto lab_0x406ac0;
        }
        default: {
            // 0x406aef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406c5f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406b18
            int64_t v39 = v37 + 4; // 0x406b1a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406b26
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406b28
            while (v41 == 0) {
                // 0x406b18
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406b46
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406b52
            int64_t v45 = v43 + 4; // 0x406b54
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406b60
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406b62
            while (v47 == 0) {
                // 0x406b52
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406b4f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406b78
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406b88
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x406b8c
            int64_t v52 = v51 + v48; // 0x406b95
            int64_t * mem; // 0x4068e0
            int64_t v53; // 0x4068e0
            int64_t v54; // 0x4068e0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406ccb
                int64_t v56 = v55 + 3; // 0x406cd7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406bb1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406bc0
            if (mem == NULL) {
                // 0x406dec
                free((int64_t *)v21);
                function_406e50(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x406a64;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406bd8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406be2
            uint32_t v62 = (int32_t)v59; // 0x406be5
            int64_t v63; // 0x4068e0
            if (v62 >= 8) {
                // 0x406cf4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406d0e
                int64_t v66 = v61 - v65; // 0x406d12
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406d1d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406d2e
                    int64_t v70 = v69 & 0xffffffff; // 0x406d2e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406d2b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406dbf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406bf7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406bfb
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
            int64_t v73 = v51 + 1; // 0x406c0b
            int64_t v74 = v60 - 1; // 0x406c0f
            uint32_t v75 = (int32_t)v73; // 0x406c14
            int64_t v76; // 0x4068e0
            if (v75 >= 8) {
                // 0x406d42
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406d4c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406d5c
                int64_t v80 = v74 - v79; // 0x406d60
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406d6b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406d7b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406d79
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406dd6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406dde
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406c26
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406c2a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406e23
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406c3e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x406ace;
            } else {
                goto lab_0x406c4c;
            }
        }
    }
  lab_0x406ac0:;
    int64_t v93 = v23; // 0x4068e0
    int64_t v94 = v22; // 0x4068e0
    int64_t v95 = v21; // 0x4068e0
    goto lab_0x406ac0_2;
  lab_0x406a05:;
    int64_t * mem3 = malloc(size); // 0x406a05
    int64_t v97 = (int64_t)&g10; // 0x406a10
    int64_t v98; // 0x4068e0
    int64_t path; // 0x4068e0
    if (mem3 == NULL) {
        goto lab_0x4069e2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406a05
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406a26;
    }
  lab_0x40691a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40690d
    char v100 = *v3; // 0x40691a
    int64_t v101; // 0x4068e0
    if (v100 == 0) {
        // 0x406974
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4068e0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4068e0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406960
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406967;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406930
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40693d
        char v107 = *(char *)v106; // 0x406942
        v102 = v107;
        if (v107 == 0) {
            // 0x406974
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40694b
    v104 = v103 + 1;
  lab_0x406967:
    // 0x406974
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4069e2:;
    char * v108 = (char *)v97;
    g44 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40691a;
  lab_0x406a26:;
    int64_t v109 = v98 + path; // 0x406a26
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406a52
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x406a81
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406db2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x406aa5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406ac0_2:;
                uint64_t v96 = *v32; // 0x406ac0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406c4c;
                } else {
                    goto lab_0x406ace;
                }
            }
          lab_0x406c5f:
            // 0x406c5f
            function_406e50(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x406c7e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406a64;
  lab_0x4069cb:;
    int64_t * mem4 = malloc(size2); // 0x4069cb
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x406a71
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406a26;
    } else {
        goto lab_0x4069e2;
    }
  lab_0x406a64:
    // 0x406a64
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4069e2;
}
// Address range: 0x406e50 - 0x406ecb
int64_t function_406e50(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406e57
    if (fileno(stream) < 0) {
        // 0x406eb7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x406e6a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x406e9b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406eb7
            return fclose(stream);
        }
    }
    // 0x406e6c
    if ((int32_t)function_406ed0(a1, v1) == 0) {
        // 0x406eb7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406e78
    int32_t v3 = *v2; // 0x406e80
    int64_t result = fclose(stream); // 0x406e8e
    if (v3 != 0) {
        // 0x406ec0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406e90
    return result;
}
// Address range: 0x406ed0 - 0x406f10
int64_t function_406ed0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x406eea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x406eea
        return fflush(stream);
    }
    // 0x406ef8
    function_406f10(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406f10 - 0x406f67
int64_t function_406f10(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406f10
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x406f1a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x406f4b
    int64_t result = -1; // 0x406f54
    if (v1 != -1) {
        // 0x406f56
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406f62
    return result;
}
// Address range: 0x406f70 - 0x407074
int64_t function_406f70(int64_t result, int32_t a2, int64_t a3) {
    // 0x406f70
    if (a3 == 0) {
        // 0x406fa9
        return 0;
    }
    int64_t v1 = result; // 0x406f7c
    int64_t v2 = a3; // 0x406f7c
    int64_t result2; // 0x406f70
    if (result % 8 != 0) {
        char v3 = a2; // 0x406f7e
        int64_t v4 = result; // 0x406f81
        if ((char)result == v3) {
            // 0x406fa9
            return result;
        }
        int64_t v5 = a3; // 0x406f81
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x406f90
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x406fb0;
            }
            // 0x406f96
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x406fa9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x406fa9
        return result2;
    }
  lab_0x406fb0:;
    int64_t result3 = v1; // 0x406fdd
    int64_t v6 = v2; // 0x406fdd
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x406fbf
        int64_t v9 = 0x10000 * v8 | v8; // 0x406fcc
        int64_t v10 = 0x100000000 * v9 | v9; // 0x406fd6
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x406ff6
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x407025
            int64_t v13 = v1 + 8; // 0x407029
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x407013
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x40703c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x407033
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x406fa9
                return 0;
            }
        }
    }
  lab_0x40703c:;
    char v15 = a2; // 0x40703c
    if (*(char *)result3 == v15) {
        // 0x406fa9
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x407050
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x406fa9
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x406fa9
    return result2;
}
// Address range: 0x407080 - 0x4070dd
int64_t function_407080(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407080
    return function_401618();
}
// Address range: 0x4070e0 - 0x4070e1
int64_t function_4070e0(void) {
    // 0x4070e0
    int64_t result; // 0x4070e0
    return result;
}
// Address range: 0x4070f0 - 0x407108
int64_t function_4070f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4070f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x407108 - 0x407128
int64_t function_407108(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x407112
    while (*(int64_t *)v1 != -1) {
        // 0x407113
        v1 -= 8;
    }
    // 0x407124
    return result;
}
