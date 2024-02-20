#include "decompile_retdec.h"
// Address range: 0x402070 - 0x402075
int64_t function_402070(void) {
    // 0x402070
    abort();
    // UNREACHABLE
}
// Address range: 0x402075 - 0x40207a
int64_t function_402075(void) {
    // 0x402075
    abort();
    // UNREACHABLE
}
// Address range: 0x40207a - 0x40207f
int64_t function_40207a(void) {
    // 0x40207a
    abort();
    // UNREACHABLE
}
// Address range: 0x40207f - 0x402084
int64_t function_40207f(void) {
    // 0x40207f
    abort();
    // UNREACHABLE
}
// Address range: 0x402084 - 0x402089
int64_t function_402084(void) {
    // 0x402084
    abort();
    // UNREACHABLE
}
// Address range: 0x402089 - 0x40208e
int64_t function_402089(void) {
    // 0x402089
    abort();
    // UNREACHABLE
}
// Address range: 0x40208e - 0x402093
int64_t function_40208e(void) {
    // 0x40208e
    abort();
    // UNREACHABLE
}
// Address range: 0x4020a0 - 0x402920
int64_t function_4020a0(int64_t a1, int64_t a2) {
    // 0x4020a0
    int128_t v1; // 0x4020a0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x4020a2
    int64_t v4 = a1 & 0xffffffff; // 0x4020ba
    int64_t v5; // bp-168, 0x4020a0
    int64_t v6 = &v5; // 0x4020c0
    __asm_movaps(v3);
    __asm_movaps(v3);
    function_4051c0(a2);
    setlocale(LC_ALL, (char *)&g17);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v7; // 0x4020a0
    function_40a210(0x4042c0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v7);
    int64_t v8 = v6 + 80;
    char * v9 = (char *)v8;
    int32_t * v10 = (int32_t *)(v6 + 104);
    char * v11 = (char *)(v6 + 108);
    int64_t v12 = 0; // 0x40211a
    int64_t str; // 0x4020a0
    int64_t v13; // 0x4020a0
    int64_t v14; // 0x4020a0
    char * format; // 0x4028fe
    while (true) {
      lab_0x402120_2:
        // 0x402120
        str = v12;
        int64_t v15 = v14;
        int32_t v16 = function_4099c0(v4, a2, "fn:s:uvxz", &g4, 0, v15);
        switch (v16) {
            case -1: {
                goto lab_0x402317;
            }
            case 115: {
                int64_t v17 = (int64_t)dcgettext(NULL, "invalid file size", 5); // 0x4022c4
                *(int64_t *)(v6 - 16) = 0;
                int64_t v18 = function_4084d0((int64_t)g55, (int32_t)"invalid file size" ^ (int32_t)"invalid file size", 0, 0x7fffffffffffffff, "cbBkKMGTPEZY0", v17, (int64_t)&g59); // 0x4022e6
                *(int64_t *)(v6 + 96) = v18;
                v13 = v17;
                v12 = str;
                goto lab_0x402120;
            }
            default: {
                if (v16 > 115) {
                    if (v16 == 120) {
                        // 0x402300
                        char * v19; // 0x4020a0
                        *v19 = 1;
                        v13 = v15;
                        v12 = str;
                    } else {
                        if (v16 > 120) {
                            if (v16 != 122) {
                                if (v16 != 128) {
                                    // 0x40289b
                                    function_403ac0(1);
                                    // UNREACHABLE
                                }
                                char * str2 = g55; // 0x40228b
                                int64_t v20 = (int64_t)str2; // 0x40228b
                                v13 = v15;
                                v12 = v20;
                                if (str != 0) {
                                    // 0x402297
                                    v13 = v15;
                                    v12 = v20;
                                    if (strcmp((char *)str, str2) != 0) {
                                        // 0x4028f2
                                        format = dcgettext(NULL, "multiple random sources specified", 5);
                                        error(1, (int32_t)"multiple random sources specified" ^ (int32_t)"multiple random sources specified", format);
                                        return &g59;
                                    }
                                }
                            } else {
                                // 0x4021e1
                                char * v21; // 0x4020a0
                                *v21 = 1;
                                v13 = v15;
                                v12 = str;
                            }
                        } else {
                            if (v16 != 117) {
                                if (v16 != 118) {
                                    // 0x40289b
                                    function_403ac0(1);
                                    // UNREACHABLE
                                }
                                // 0x4021c9
                                *v11 = 1;
                                v13 = v15;
                                v12 = str;
                            } else {
                                char * v22 = g55; // 0x40215f
                                if (v22 == NULL) {
                                    // 0x40230a
                                    *v10 = 3;
                                    v13 = v15;
                                    v12 = str;
                                } else {
                                    int32_t v23 = g25; // 0x40217f
                                    int64_t v24 = v23; // 0x40217f
                                    int64_t v25 = function_4041e0("--remove", (int64_t)v22, g6, (int64_t *)&g5, 4, v24); // 0x40218b
                                    int32_t v26 = *(int32_t *)(4 * v25 + (int64_t)&g5); // 0x402190
                                    *v10 = v26;
                                    v13 = v24;
                                    v12 = str;
                                }
                            }
                        }
                    }
                } else {
                    if (v16 == -130) {
                        // 0x4028a5
                        function_403ac0(0);
                        // UNREACHABLE
                    }
                    if (v16 <= 0xffffff7e) {
                        if (v16 == -131) {
                            // 0x40224b
                            function_408100((int64_t)g36, "shred", "GNU coreutils", (int64_t)g24, "Colin Plumb", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x40289b;
                    }
                    if (v16 != 102) {
                        if (v16 != 110) {
                          lab_0x40289b:
                            // 0x40289b
                            function_403ac0(1);
                            // UNREACHABLE
                        }
                        char * v27 = dcgettext(NULL, "invalid number of passes", 5); // 0x402205
                        int64_t v28 = function_4085a0((int64_t)g55, (int32_t)"invalid number of passes" ^ (int32_t)"invalid number of passes", 0x3fffffffffffffff, (int64_t *)&g17, (int64_t)v27, 0); // 0x402228
                        *(int64_t *)(v6 + 88) = v28;
                        v13 = 0;
                        v12 = str;
                    } else {
                        // 0x4021b6
                        *v9 = 1;
                        v13 = v15;
                        v12 = str;
                    }
                }
                goto lab_0x402120;
            }
        }
    }
  lab_0x402317:;
    int32_t v29 = *(int32_t *)0x60f35c; // 0x402317
    int32_t v30 = (int32_t)a1 - v29; // 0x402321
    if (v30 == 0) {
        // 0x40287c
        error(0, (int32_t)"missing file operand" ^ (int32_t)"missing file operand", dcgettext(NULL, "missing file operand", 5));
        // 0x40289b
        function_403ac0(1);
        // UNREACHABLE
    }
    int64_t v31 = function_406e30(); // 0x402331
    g41 = v31;
    int64_t v32 = str; // 0x402340
    int32_t fd; // 0x4020a0
    int64_t v33; // 0x4020a0
    int64_t v34; // 0x4020a0
    int64_t v35; // 0x4020a0
    int64_t v36; // 0x4020a0
    int64_t v37; // 0x4020a0
    char v38; // 0x4020a0
    char * v39; // 0x4020a0
    int32_t * v40; // 0x402367
    int64_t * v41; // 0x402371
    int64_t * v42; // 0x4020a0
    int64_t * v43; // 0x4020a0
    int64_t * v44; // 0x4020a0
    int32_t * v45; // 0x4020a0
    char * v46; // 0x4020a0
    int64_t * v47; // 0x4020a0
    int64_t * v48; // 0x4020a0
    int64_t * v49; // 0x4020a0
    int64_t * v50; // 0x4020a0
    int64_t v51; // 0x4023e2
    int64_t path; // 0x4023e7
    int64_t v52; // 0x4023f7
    int32_t * err_num; // 0x402466
    if (v31 != 0) {
        // 0x402346
        function_40a210(0x402a00, -1, (int64_t)"fn:s:uvxz");
        if (v30 < 1) {
            // 0x4024c9
            *(char *)(v6 | 7) = 1;
            // 0x4024ce
            return 0;
        }
        int64_t v53 = v29; // 0x402317
        v39 = (char *)(v6 | 7);
        *v39 = 1;
        v40 = (int32_t *)(v6 + 20);
        *v40 = -1;
        v41 = (int64_t *)(v6 + 8);
        *v41 = a2 + 8 + 8 * ((int64_t)(v30 - 1) + v53);
        bool v54; // 0x4020a0
        int64_t v55 = v54 ? -1 : 1;
        v42 = (int64_t *)(v6 + 48);
        v43 = (int64_t *)(v6 + 64);
        v44 = (int64_t *)(v6 + 24);
        v45 = (int32_t *)(v6 + 16);
        int64_t v56 = v6 + 32;
        v46 = (char *)v56;
        v47 = (int64_t *)(v6 + 56);
        v48 = (int64_t *)(v6 + 72);
        v49 = (int64_t *)(v6 + 40);
        v50 = (int64_t *)v56;
        v35 = 8 * v53 + a2;
        while (true) {
          lab_0x4023d0:
            // 0x4023d0
            v36 = v35;
            int64_t * v57 = (int64_t *)v36; // 0x4023d0
            int64_t v58 = *v57; // 0x4023d0
            v51 = function_408470(function_406c60(0, 3, v58));
            path = *v57;
            v52 = g41;
            int64_t v59 = path;
            int64_t v60 = (int64_t)&g16;
            unsigned char v61 = *(char *)v59; // 0x402401
            char v62 = *(char *)v60; // 0x402401
            int64_t v63 = 1; // 0x402401
            char v64 = v62; // 0x402401
            bool v65 = false; // 0x402401
            while (v61 == v62) {
                int64_t v66 = v60 + v55; // 0x402401
                int64_t v67 = v59 + v55; // 0x402401
                int64_t v68 = v63; // 0x402401
                v64 = v61;
                v65 = true;
                if (v63 == 0) {
                    // break -> 
                    break;
                }
                v59 = v67;
                v60 = v66;
                v61 = *(char *)v59;
                v62 = *(char *)v60;
                v63 = v68 - 1;
                v64 = v62;
                v65 = false;
            }
            unsigned char v69 = v64;
            if ((v61 >= v69 && !v65) == v61 < v69) {
                int64_t v70 = function_408a90(1, 3, v58, v63); // 0x40238a
                int64_t v71; // 0x4020a0
                if ((int32_t)v70 < 0) {
                    // 0x40251a
                    error(0, *__errno_location(), dcgettext(NULL, "%s: fcntl failed", 5));
                    v71 = (int32_t)&g59 ^ (int32_t)&g59;
                } else {
                    if ((v70 & 1024) != 0) {
                        // 0x4024a0
                        error(0, (int32_t)"%s: cannot shred append-only file descriptor" ^ (int32_t)"%s: cannot shred append-only file descriptor", dcgettext(NULL, "%s: cannot shred append-only file descriptor", 5));
                        v71 = (int32_t)&g59 ^ (int32_t)&g59;
                    } else {
                        // 0x4023a0
                        v71 = function_4033d0(1, v51, v52, v8);
                    }
                }
                // 0x4023b5
                v38 = *v39 & (char)v71;
                v37 = v51;
                v34 = v36;
                goto lab_0x4023b9;
            } else {
                int64_t v72 = function_4044d0(path, 257, v58); // 0x40241a
                int32_t v73 = v72;
                fd = v73;
                v33 = v72;
                if (v73 < 0) {
                    // 0x402466
                    err_num = __errno_location();
                    if (*err_num == 13) {
                        // 0x40254b
                        if (*v9 == 0) {
                            goto lab_0x402477;
                        } else {
                            // 0x402556
                            if (chmod((char *)path, 128) != 0) {
                                goto lab_0x402477;
                            } else {
                                int64_t v74 = function_4044d0(path, 257, v58); // 0x402573
                                int32_t v75 = v74;
                                fd = v75;
                                v33 = v74;
                                if (v75 >= 0) {
                                    goto lab_0x402426;
                                } else {
                                    goto lab_0x402477;
                                }
                            }
                        }
                    } else {
                        goto lab_0x402477;
                    }
                } else {
                    goto lab_0x402426;
                }
            }
        }
      lab_0x4024ce:
        // 0x4024ce
        return (int64_t)(*v39 ^ 1);
    }
    goto lab_0x4028c5;
  lab_0x4023b9:
    // 0x4023b9
    *v39 = v38;
    int64_t v76 = v34 + 8; // 0x4023bc
    free((int64_t *)v37);
    v35 = v76;
    if (*v41 == v76) {
        // break -> 0x4024ce
        goto lab_0x4024ce;
    }
    goto lab_0x4023d0;
  lab_0x402426:;
    int64_t v77 = function_4033d0(v33 & 0xffffffff, v51, v52, v8); // 0x402434
    int64_t v78; // 0x4020a0
    int64_t v79; // 0x4020a0
    int64_t v80; // 0x4020a0
    if (close(fd) != 0) {
        // 0x4024e8
        error(0, *__errno_location(), dcgettext(NULL, "%s: failed to close", 5));
        v80 = v51;
        v78 = 0;
        v79 = v36;
    } else {
        int64_t v81 = v77 & 0xffffffff; // 0x40243c
        char v82 = v77; // 0x40244c
        v80 = v51;
        v78 = v81;
        v79 = v36;
        if (v82 != 0) {
            // 0x402451
            v80 = v51;
            v78 = v81;
            v79 = v36;
            if (*v10 != 0) {
                int64_t v83 = function_408470(path); // 0x40258b
                *v42 = v83;
                int64_t v84 = function_404440(v83, v51); // 0x40259b
                int64_t v85 = function_404360(); // 0x4025a6
                *v43 = v85;
                *v44 = function_408470(function_406c60(0, 3, v85));
                *v45 = *v40;
                if (*v10 == 3) {
                    // 0x402761
                    *v45 = (int32_t)function_4044d0(*v43, 0x10900, v85);
                }
                // 0x4025df
                if (*v11 != 0) {
                    // 0x402708
                    error(0, (int32_t)"%s: removing" ^ (int32_t)"%s: removing", dcgettext(NULL, "%s: removing", 5));
                }
                int64_t v86 = v51; // 0x4025ef
                int64_t v87 = v81; // 0x4025ef
                int64_t v88 = v36; // 0x4025ef
                if (*v10 != 1) {
                    int64_t v89 = function_4044a0(v84); // 0x4025f8
                    int64_t v90 = *v42; // 0x4025fd
                    *v46 = v82;
                    *v47 = v51;
                    *v48 = v36;
                    *v49 = v84 + path - v90;
                    int64_t v91 = v81; // 0x40262e
                    if (v89 != 0) {
                        int64_t * v92 = (int64_t *)v84; // 0x40263c
                        int64_t v93 = v89; // 0x4020a0
                        int64_t v94 = v81;
                        while (true) {
                            int64_t v95 = v94;
                            int64_t v96 = v93 - 1;
                            memset(v92, 48, (int32_t)v93);
                            *(char *)(v93 + v84) = 0;
                            int64_t v97; // 0x4020a0
                            if ((int32_t)function_407a00(0xffffff9c, path, 0xffffff9c, v90, 1) == 0) {
                              lab_0x40277b:;
                                uint32_t v98 = *v45; // 0x40277b
                                int64_t v99 = v95; // 0x402780
                                if (v98 >= 0) {
                                    // 0x402782
                                    v99 = (int32_t)function_402a60(v98, *v44) != 0 ? 0 : v95 & 0xffffffff;
                                }
                                // 0x40279b
                                if (*v11 != 0) {
                                    // 0x4027a2
                                    *v50 = *v46 == 0 ? path : *v47;
                                    error(0, (int32_t)"%s: renamed to %s" ^ (int32_t)"%s: renamed to %s", dcgettext(NULL, "%s: renamed to %s", 5));
                                    *v46 = 0;
                                }
                                // 0x4027e1
                                memcpy((int64_t *)*v49, v92, (int32_t)v96 + 2);
                                v97 = v99;
                            } else {
                                int64_t v100 = v96 + v84;
                                char * c = (char *)v100;
                                int32_t v101 = *__errno_location(); // 0x40266c
                                v97 = v95;
                                while (v101 == 17) {
                                    char * found_char_pos = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", (int32_t)*c); // 0x40269d
                                    int64_t v102 = v100; // 0x4026a5
                                    if (found_char_pos == NULL) {
                                        // 0x4028ac
                                        __assert_fail("p", "src/shred.c", 1034, "incname");
                                        v32 = path;
                                        goto lab_0x4028c5;
                                    }
                                    char * v103 = c;
                                    char v104 = *(char *)((int64_t)found_char_pos + 1); // 0x4026ab
                                    while (v104 == 0) {
                                        int64_t v105 = v102;
                                        *v103 = 48;
                                        v97 = v95;
                                        if (v84 == v105) {
                                            // break (via goto) -> 0x4027f2
                                            goto lab_0x4027f2;
                                        }
                                        // 0x402694
                                        v102 = v105 - 1;
                                        char * c2 = (char *)v102; // 0x402694
                                        char * found_char_pos2 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", (int32_t)*c2); // 0x40269d
                                        if (found_char_pos2 == NULL) {
                                            // 0x4028ac
                                            __assert_fail("p", "src/shred.c", 1034, "incname");
                                            v32 = path;
                                            goto lab_0x4028c5;
                                        }
                                        v103 = c2;
                                        v104 = *(char *)((int64_t)found_char_pos2 + 1);
                                    }
                                    // 0x4026b3
                                    *v103 = v104;
                                    if ((int32_t)function_407a00(0xffffff9c, path, 0xffffff9c, v90, 1) == 0) {
                                        goto lab_0x40277b;
                                    }
                                    v101 = *__errno_location();
                                    v97 = v95;
                                }
                            }
                          lab_0x4027f2:
                            // 0x4027f2
                            v94 = v97;
                            v93 = v96;
                            v91 = v94;
                            if (v96 == 0) {
                                // break -> 0x4026b8
                                break;
                            }
                        }
                    }
                    // 0x4026b8
                    v88 = *v48;
                    v86 = *v47;
                    v87 = v91;
                }
                // 0x4026c2
                int64_t v106; // 0x4020a0
                if (unlink((char *)path) != 0) {
                    // 0x40272f
                    error(0, *__errno_location(), dcgettext(NULL, "%s: failed to remove", 5));
                    v106 = 0;
                } else {
                    int64_t v107 = v87;
                    v106 = v107;
                    if (*v11 != 0) {
                        // 0x402855
                        error(0, (int32_t)"%s: removed" ^ (int32_t)"%s: removed", dcgettext(NULL, "%s: removed", 5));
                        v106 = v107;
                    }
                }
                int64_t v108 = v106;
                int32_t fd2 = *v45; // 0x4026d9
                int64_t v109 = v108; // 0x4026df
                if (fd2 >= 0) {
                    // 0x4027fb
                    v109 = (int32_t)function_402a60(fd2, *v44) != 0 ? 0 : v108 & 0xffffffff;
                    if (close(fd2) != 0) {
                        // 0x402821
                        error(0, *__errno_location(), dcgettext(NULL, "%s: failed to close", 5));
                        v109 = 0;
                    }
                }
                // 0x4026e5
                free((int64_t *)*v42);
                free((int64_t *)*v43);
                free((int64_t *)*v44);
                v80 = v86;
                v78 = v109;
                v79 = v88;
            }
        }
    }
    goto lab_0x40245c;
  lab_0x402477:
    // 0x402477
    error(0, *err_num, dcgettext(NULL, "%s: failed to open for writing", 5));
    v80 = v51;
    v78 = 0;
    v79 = v36;
    goto lab_0x40245c;
  lab_0x40245c:
    // 0x40245c
    v38 = *v39 & (char)v78;
    v37 = v80;
    v34 = v79;
    goto lab_0x4023b9;
  lab_0x402120:
    // 0x402120
    v14 = v13;
    goto lab_0x402120_2;
  lab_0x4028c5:
    // 0x4028c5
    error(1, *__errno_location(), "%s", (char *)function_406c60(0, 3, v32));
    // 0x4028f2
    format = dcgettext(NULL, "multiple random sources specified", 5);
    error(1, (int32_t)"multiple random sources specified" ^ (int32_t)"multiple random sources specified", format);
    return &g59;
}
// Address range: 0x402920 - 0x40294b
// Address range: 0x40294b - 0x40296a
int64_t function_40294b(void) {
    // 0x40294b
    return &g35;
}
// Address range: 0x40296a - 0x4029a1
int64_t function_40296a(void) {
    // 0x40296a
    return 0;
}
// Address range: 0x4029a1 - 0x4029f8
int64_t function_4029a1(void) {
    // 0x4029a1
    if (g39 != 0) {
        // 0x4029f7
        int64_t result; // 0x4029a1
        return result;
    }
    int64_t v1 = g40; // 0x4029d4
    int64_t result2; // 0x4029e6
    if (g40 >= ((int64_t)&g21 - (int64_t)&g20 >> 3) - 1) {
        // 0x4029e6
        result2 = function_40294b();
        g39 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g21 - (int64_t)&g20 >> 3) - 1) {
        // 0x4029d6
        v1++;
    }
    // 0x4029ca
    g40 = v1;
    // 0x4029e6
    result2 = function_40294b();
    g39 = 1;
    return result2;
}
// Address range: 0x4029f8 - 0x4029fd
int64_t function_4029f8(void) {
    // 0x4029f8
    return function_40296a();
}
// Address range: 0x402a00 - 0x402a0c
int64_t function_402a00(void) {
    // 0x402a00
    return function_406f90(g41);
}
// Address range: 0x402a10 - 0x402a5c
int64_t function_402a10(int64_t a1, int32_t a2) {
    // 0x402a10
    int64_t v1; // 0x402a10
    int64_t result = function_408a90(a1, 3, v1, v1); // 0x402a21
    int32_t v2 = result; // 0x402a26
    if (v2 < 1) {
        // 0x402a3e
        return result;
    }
    int64_t v3 = result & 0xffffbfff;
    int64_t v4 = v3 | 0x4000; // 0x402a2e
    int64_t v5 = (char)a2 != 0 ? v4 : v3; // 0x402a37
    if ((int32_t)v5 != v2) {
        // 0x402a48
        return function_408a90(a1 & 0xffffffff, 4, v5, v4);
    }
    // 0x402a3e
    return result;
}
// Address range: 0x402a60 - 0x402b1d
int64_t function_402a60(int32_t fd, int64_t a2) {
    // 0x402a60
    if (fdatasync(fd) == 0) {
        // 0x402ae3
        return 0;
    }
    int32_t * v1 = __errno_location(); // 0x402a78
    int32_t err_num2 = *v1; // 0x402a7d
    int64_t result; // 0x402a60
    switch (err_num2) {
        case 22: {
        }
        case 21: {
        }
        case 9: {
            // 0x402ac0
            if (fsync(fd) == 0) {
                // 0x402ae3
                return 0;
            }
            int32_t err_num = *v1; // 0x402acb
            if (err_num > 22 == (err_num != 9)) {
                // 0x402af0
                error(0, err_num, dcgettext(NULL, "%s: fsync failed", 5));
                *v1 = err_num;
                result = 0xffffffff;
            } else {
                // 0x402adc
                sync();
                result = 0;
            }
            // break -> 0x402ae3
            break;
        }
        default: {
            // 0x402a8f
            error(0, err_num2, dcgettext(NULL, "%s: fdatasync failed", 5));
            *v1 = err_num2;
            // 0x402ae3
            return 0xffffffff;
        }
    }
    // 0x402ae3
    return result;
}
// Address range: 0x402b20 - 0x4033c8
int64_t function_402b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t v1 = getpagesize(); // 0x402b51
    int64_t v2; // 0x402b20
    int64_t v3; // 0x402b20
    if (a5 < 1) {
        // 0x403000
        v3 = 0x10000;
        v2 = 0x10002;
        goto lab_0x402b8e;
    } else {
        uint32_t v4 = a5 % 0x1000;
        char v5 = a5 / 16; // 0x402b73
        v3 = 0xf000;
        v2 = 0xf000;
        if (v5 == (char)a5 == (char)((0x1000 * v4 | v4) / 256) == v5) {
            // 0x403000
            v3 = 0x10000;
            v2 = 0x10002;
            goto lab_0x402b8e;
        } else {
            goto lab_0x402b8e;
        }
    }
  lab_0x4032d0_2:;
    int32_t err_num = (int32_t)"%s: file too large" ^ (int32_t)"%s: file too large"; // 0x4032eb
    char * format = dcgettext(NULL, "%s: file too large", 5); // 0x4032eb
    goto lab_0x402c18;
  lab_0x402c21_3:;
    // 0x402c26
    int64_t v6; // 0x402b33
    free((int64_t *)*(int64_t *)(v6 + 48));
    // 0x402c30
    return 0xffffffff;
  lab_0x403287:;
    // 0x403287
    int64_t v7; // 0x402b20
    int64_t v8 = v7;
    int64_t v9; // 0x402b20
    int64_t v10 = v9;
    int64_t * v11; // 0x402b20
    int64_t v12 = *v11; // 0x403287
    char v13 = *(char *)v12; // 0x40328c
    int64_t v14; // 0x402b20
    int64_t * v15; // 0x402b20
    int64_t * v16; // 0x402b20
    if (v13 != 0) {
        goto lab_0x4032a8;
    } else {
        int64_t time_val = time(NULL); // 0x403293
        *v15 = time_val;
        int64_t v17 = *v16; // 0x40329d
        v14 = v8;
        if (v17 > time_val) {
            goto lab_0x402d37_3;
        } else {
            goto lab_0x4032a8;
        }
    }
  lab_0x403060:;
    // 0x403060
    int64_t v18; // 0x402b20
    int64_t v19 = v18; // 0x40306b
    int32_t * v20; // 0x402b20
    if (*v20 >= 0) {
        goto lab_0x402d73;
    } else {
        goto lab_0x403071;
    }
  lab_0x402d73:;
    // 0x402d73
    int64_t v21; // 0x402b20
    int64_t v22; // 0x402b20
    int64_t v23; // 0x402b20
    int64_t v24; // 0x402b20
    int64_t v25; // 0x402b20
    int64_t v26; // bp-2136, 0x402b20
    int64_t v27; // 0x402bae
    int32_t fd; // 0x402b20
    int64_t v28; // 0x402b20
    char * v29; // 0x402b20
    while (true) {
        // 0x402d94
        uint64_t v30; // 0x402b20
        int64_t * v31; // 0x402b20
        int32_t err_num3; // 0x402dc3
        while (true) {
            // 0x402d94
            int64_t v32; // 0x402b20
            v22 = v32;
            int32_t v33 = write(fd, (int64_t *)(v22 + v27), (int32_t)(v30 - v22)); // 0x402da1
            int64_t v34; // 0x402b20
            if (v33 >= 0 == (v33 != 0)) {
                // 0x402d88
                v34 = v22 + (int64_t)v33;
            } else {
                char * v35; // 0x402b20
                if (v21 < 0) {
                    if (v33 == 0) {
                        // break (via goto) -> 0x40324f
                        goto lab_0x40324f_2;
                    }
                    int32_t * v36 = __errno_location(); // 0x403021
                    int32_t err_num2 = *v36; // 0x403026
                    if (err_num2 == 28) {
                        // break (via goto) -> 0x40324f
                        goto lab_0x40324f_2;
                    }
                    char v37 = *v35; // 0x403033
                    if (err_num2 == 22 != (v37 == 0)) {
                        int64_t v38 = v26; // 0x403200
                        function_405170(v38 + v22, v28);
                        error(0, err_num2, dcgettext(NULL, "%s: error writing at offset %s", 5));
                        goto lab_0x402c21_3;
                    }
                } else {
                    int32_t * v39 = __errno_location(); // 0x402db4
                    char v40 = *v35; // 0x402db9
                    *v31 = (int64_t)v39;
                    err_num3 = *v39;
                    if (v40 == 0 != (err_num3 == 22)) {
                        // break -> 0x402dd2
                        break;
                    }
                }
                // 0x403048
                int64_t v41; // 0x402b28
                function_402a10(v41, 0);
                *v35 = 1;
                v34 = v22;
            }
            int64_t v42 = v34;
            v32 = v42;
            v25 = v24;
            v23 = v42;
            if (v30 <= v42) {
                // break (via goto) -> 0x402e61
                goto lab_0x402e61;
            }
        }
        int64_t v43 = v26; // 0x402dd2
        int64_t v44 = function_405170(v43 + v22, v28); // 0x402de2
        int64_t * v45; // 0x402b20
        *v45 = v44;
        error(0, err_num3, dcgettext(NULL, "%s: error writing at offset %s", 5));
        if (err_num3 != 5) {
            goto lab_0x402c21_3;
        }
        int64_t v46 = v22 | 511; // 0x402e23
        if (v46 >= v30) {
            goto lab_0x402c21_3;
        }
        int64_t v47 = v26; // 0x402e33
        int64_t v48 = v46 + 1; // 0x402e37
        if (lseek(fd, (int32_t)(v47 + v48), SEEK_SET) == -1) {
            char * format2 = dcgettext(NULL, "%s: lseek failed", 5); // 0x40309c
            int64_t v49 = *v31; // 0x4030ab
            int32_t err_num4 = *(int32_t *)v49; // 0x4030b0
            error(0, err_num4, format2);
            goto lab_0x402c21_3;
        }
        // 0x402e53
        *v29 = 1;
        v25 = v46;
        v23 = v48;
        if (v30 <= v48) {
            // break -> 0x402e61
            break;
        }
    }
  lab_0x402e61:;
    uint64_t v50 = v23;
    int64_t v51 = v26; // 0x402e64
    if (0x7fffffffffffffff - v51 < v50) {
        goto lab_0x4032d0_2;
    }
    int64_t v52 = v25;
    int64_t v53 = v51 + v50; // 0x402e84
    int64_t * v54; // 0x402b20
    int64_t v55 = *v54; // 0x402e87
    v26 = v53;
    int64_t v56; // 0x402b20
    int64_t v57; // 0x402b20
    int64_t v58; // 0x402b20
    int64_t v59; // 0x402b20
    if (v55 != 0) {
        // 0x402e9a
        v9 = v52;
        v7 = v21;
        if (v21 == v53) {
            goto lab_0x403287;
        }
        uint64_t time_val2 = (int64_t)time(NULL); // 0x402ea5
        *v15 = time_val2;
        uint64_t v60 = *v16; // 0x402eaf
        if (v60 <= time_val2) {
            int64_t v61 = v26; // 0x402eba
            int64_t str2 = function_4045e0(v61, v59, 434, 1, 1, v52); // 0x402ed6
            int64_t str = *v11; // 0x402edb
            int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x402ee6
            v58 = str2;
            v56 = v21;
            v57 = v53;
            if (strcmp_rc != 0) {
                goto lab_0x402ef3;
            }
        }
    }
    // 0x402d37
    goto lab_0x402d37_2;
  lab_0x403071:
    // 0x403071
    function_407360(*(int64_t *)(v6 + 56), v27, v19);
    goto lab_0x402d73;
  lab_0x402d37_3:;
    int64_t v65 = v14; // 0x402b20
    goto lab_0x402d37_4;
  lab_0x4032a8:
    // 0x4032a8
    v58 = function_4045e0(v8, v59, 434, 1, 1, v10);
    v56 = v8;
    v57 = v8;
  lab_0x402ef3:;
    int64_t v71 = v56;
    int64_t v72 = v58;
    int64_t v73; // 0x402b20
    int64_t * v74; // 0x402b20
    int64_t * v75; // 0x402b20
    int64_t v76; // 0x402b20
    if (v71 < 0) {
        char * format3 = dcgettext(NULL, "%s: pass %lu/%lu (%s)...%s", 5); // 0x403342
        *v74 = v72;
        *v75 = v76;
        error(0, (int32_t)"%s: pass %lu/%lu (%s)...%s" ^ (int32_t)"%s: pass %lu/%lu (%s)...%s", format3);
        v73 = v72;
    } else {
        uint64_t v77 = v57;
        int64_t v78 = 100; // 0x402f02
        if (v71 != 0) {
            if (v77 < 0x28f5c28f5c28f5d) {
                // 0x402f17
                v78 = 100 * v77 / v71;
            } else {
                // 0x403378
                v78 = v77 / (v71 >> 63);
            }
        }
        int64_t v79 = v78;
        int32_t * v80; // 0x402b20
        *v80 = (int32_t)v79;
        int64_t v81 = function_4045e0(v71, v28, 432, 1, 1, v79); // 0x402f4b
        int64_t v82 = v71 == v77 ? v81 : v72; // 0x402f5d
        char * format4 = dcgettext(NULL, "%s: pass %lu/%lu (%s)...%s/%s %d%%", 5); // 0x402f66
        uint32_t v83 = *v80; // 0x402f6b
        *v74 = (int64_t)v83;
        *v75 = v81;
        int64_t * v84; // 0x402b20
        *v84 = v82;
        int64_t * v85; // 0x402b20
        *v85 = v76;
        error(0, (int32_t)"%s: pass %lu/%lu (%s)...%s/%s %d%%" ^ (int32_t)"%s: pass %lu/%lu (%s)...%s/%s %d%%", format4);
        v73 = v82;
    }
    int64_t v86 = v73;
    char * v87; // 0x402b20
    __strcpy_chk(v87, (char *)v86, 652);
    int64_t v88 = *v15; // 0x402fb7
    int64_t * v89; // 0x402b20
    int64_t v90 = *v89; // 0x402fbc
    *v16 = v88 + 5;
    int64_t v91; // 0x402b20
    if ((int32_t)function_402a60(fd, v90) == 0) {
        // 0x4032f0
        *v11 = v91;
        v14 = v71;
    } else {
        int32_t * v92 = __errno_location(); // 0x402fda
        int32_t v93 = *v92; // 0x402fdf
        if (v93 != 5) {
            goto lab_0x402c21_3;
        }
        // 0x402fe8
        *v29 = 1;
        *v11 = v91;
        v14 = v71;
    }
    goto lab_0x402d37_3;
  lab_0x402b8e:;
    uint64_t v94 = (int64_t)v1; // 0x402b56
    int64_t v95 = v94 - 1; // 0x402b8e
    int64_t v96 = function_408240(v2 + v95); // 0x402b96
    if (a4 >= 0 == (a4 != 0) != v3 > a4) {
        // 0x403190
        function_402a10(a1 & 0xffffffff, 1);
    }
    // 0x402bcb
    v6 = &v26;
    uint64_t v97 = v96 + v95; // 0x402b9d
    v27 = v97 - v97 % v94;
    fd = a1;
    if ((*(int32_t *)(a2 + 24) & 0xf000) == 0x2000) {
        // 0x4030c0
        if (ioctl(fd, 0x40086d01) != 0) {
            goto lab_0x402bde;
        } else {
            if (a5 >= 0) {
                goto lab_0x402c5a;
            } else {
                goto lab_0x403108;
            }
        }
    } else {
        goto lab_0x402bde;
    }
  lab_0x402bde:;
    int32_t v98 = lseek(fd, 0, SEEK_SET); // 0x402be5
    int32_t * v99; // 0x402b20
    if (v98 < 1) {
        if (v98 != 0) {
            // 0x4033bb
            v99 = __errno_location();
            goto lab_0x402bfd;
        } else {
            if (a5 < 0) {
                goto lab_0x403108;
            } else {
                goto lab_0x402c5a;
            }
        }
    } else {
        int32_t * v100 = __errno_location(); // 0x402bef
        *v100 = 22;
        v99 = v100;
        goto lab_0x402bfd;
    }
  lab_0x402c5a:;
    uint64_t v101 = (int64_t)a5;
    int16_t v102 = llvm_bswap_i16((int16_t)(0x1000 * v101 | v101 % 0x1000)); // 0x402c6e
    int64_t v103 = v27 + 1; // 0x402c75
    *(int16_t *)v103 = v102;
    char * v104 = (char *)v27; // 0x402c79
    *v104 = (char)(a5 / 16);
    int64_t v105; // 0x402b20
    int64_t v106; // 0x402b20
    int64_t v107; // 0x402b20
    int64_t v108; // 0x402b20
    if (a4 < 0 || v2 <= a4) {
        // 0x4031d0
        v108 = v2;
        v105 = v2;
        goto lab_0x402c9d;
    } else {
        // 0x402c8d
        v108 = a4;
        v105 = a4;
        v106 = a4;
        v107 = 3;
        if (a4 < 4 || (a4 & -2) == 4) {
            goto lab_0x402cbf;
        } else {
            goto lab_0x402c9d;
        }
    }
  lab_0x403108:;
    int64_t v109 = 0x646e6172; // bp-2031, 0x40310e
    if (a8 == 0) {
        goto lab_0x402d18;
    } else {
        goto lab_0x403130;
    }
  lab_0x402bfd:;
    char * v110 = dcgettext(NULL, "%s: cannot rewind", 5); // 0x402c09
    err_num = *v99;
    format = v110;
    goto lab_0x402c18;
  lab_0x402d18:
    // 0x402d18
    v26 = 0;
    int64_t * v62 = (int64_t *)(v6 + 32);
    v20 = (int32_t *)(v6 + 28);
    v65 = a4;
    while (true) {
      lab_0x402d37_4:
        // 0x402d37
        v21 = v65;
        while (true) {
          lab_0x402d37_2:
            // 0x402d37
            if (v21 < 0) {
                // 0x402d37
                v18 = *v62;
                goto lab_0x403060;
            } else {
                int64_t v63 = v21 - v26; // 0x402d47
                uint64_t v64 = *v62; // 0x402d4a
                v18 = v64;
                if (v63 >= v64) {
                    goto lab_0x403060;
                } else {
                    if (v21 < v26 || v63 == 0) {
                        // break (via goto) -> 0x4032ff
                        goto lab_0x4032ff;
                    }
                    // 0x402d67
                    v19 = v63;
                    if (*v20 < 0) {
                        goto lab_0x403071;
                    } else {
                        goto lab_0x402d73;
                    }
                }
            }
        }
      lab_0x40324f_2:;
        int64_t v66 = v26; // 0x403259
        if (0x7fffffffffffffff - v66 < v22) {
            goto lab_0x4032d0_2;
        }
        // 0x403265
        int64_t * v67; // 0x402b20
        int64_t v68 = *v67; // 0x403265
        int64_t v69 = v66 + v22; // 0x40326a
        int64_t v70 = *v54; // 0x40326e
        v26 = v69;
        *(int64_t *)v68 = v69;
        v9 = v24;
        v7 = v69;
        v14 = v69;
        if (v70 == 0) {
            goto lab_0x402d37_3;
        } else {
            goto lab_0x403287;
        }
    }
  lab_0x4032ff:
    // 0x4032ff
    if ((int32_t)function_402a60(fd, *(int64_t *)(v6 + 16)) == 0) {
        // 0x4033a7
        free((int64_t *)*(int64_t *)(v6 + 48));
        // 0x402c30
        return (int64_t)*(char *)(v6 + 8);
    }
    int32_t * v111 = __errno_location(); // 0x403314
    int64_t v112 = *(int64_t *)(v6 + 48); // 0x403319
    if (*v111 == 5) {
        // 0x403327
        free((int64_t *)v112);
        // 0x402c30
        return 1;
    }
    // 0x402c26
    free((int64_t *)v112);
    // 0x402c30
    return 0xffffffff;
  lab_0x403130:
    // 0x403130
    error(0, (int32_t)"%s: pass %lu/%lu (%s)..." ^ (int32_t)"%s: pass %lu/%lu (%s)...", dcgettext(NULL, "%s: pass %lu/%lu (%s)...", 5));
    time(NULL);
    goto lab_0x402d18;
  lab_0x402c18:
    // 0x402c18
    error(0, err_num, format);
    goto lab_0x402c21_3;
  lab_0x402c9d:;
    int64_t v113 = 3;
    int64_t v114 = 2 * v113; // 0x402cb2
    memcpy((int64_t *)(v113 + v27), (int64_t *)v27, (int32_t)v113);
    v106 = v105;
    v107 = v114;
    while (v114 <= v108 / 2) {
        // 0x402ca8
        v113 = v114;
        v114 = 2 * v113;
        memcpy((int64_t *)(v113 + v27), (int64_t *)v27, (int32_t)v113);
        v106 = v105;
        v107 = v114;
    }
    goto lab_0x402cbf;
  lab_0x402cbf:;
    uint64_t v115 = v107;
    int32_t v116 = a5 & 0x1000; // 0x402cc3
    if (v106 > v115) {
        // 0x4031e0
        memcpy((int64_t *)(v115 + v27), (int64_t *)v27, (int32_t)(v106 - v115));
        if (v116 != 0) {
            goto lab_0x4031b1;
        } else {
            goto lab_0x402cda;
        }
    } else {
        if (v116 == 0 || v106 == 0) {
            goto lab_0x402cda;
        } else {
            goto lab_0x4031b1;
        }
    }
  lab_0x4031b1:;
    int64_t v117 = 0; // 0x4031b3
    char * v118 = (char *)(v117 + v27); // 0x4031b8
    *v118 = *v118 ^ -128;
    int64_t v119 = v117 + 512; // 0x4031bc
    v117 = v119;
    while (v119 < v106) {
        // 0x4031b8
        v118 = (char *)(v117 + v27);
        *v118 = *v118 ^ -128;
        v119 = v117 + 512;
        v117 = v119;
    }
    goto lab_0x402cda;
  lab_0x402cda:;
    unsigned char v120 = *(char *)(v27 + 2); // 0x402cda
    unsigned char v121 = *(char *)v103; // 0x402cf2
    unsigned char v122 = *v104; // 0x402cf9
    __sprintf_chk((char *)&v109, 1, 7, "%02x%02x%02x", (int32_t)v122, (int32_t)v121, (int32_t)v120);
    if (a8 != 0) {
        goto lab_0x403130;
    } else {
        goto lab_0x402d18;
    }
}
// Address range: 0x4033d0 - 0x403ab5
int64_t function_4033d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4033d0
    int64_t v1; // 0x4033d0
    int64_t v2 = v1;
    int64_t v3; // bp-296, 0x4033d0
    int64_t v4 = &v3; // 0x4033df
    int32_t fd = a1; // 0x403418
    int64_t v5; // bp-200, 0x4033d0
    if (__fxstat(1, fd, (struct stat *)&v5) != 0) {
        // 0x4035a0
        error(0, *__errno_location(), dcgettext(NULL, "%s: fstat failed", 5));
        // 0x403589
        return (int64_t)*(char *)(v4 + 67);
    }
    // 0x403425
    int32_t v6; // 0x4033d0
    int32_t v7 = v6 & 0xf000; // 0x403429
    char * format; // 0x40356c
    if (v7 == 0x2000) {
        // 0x403910
        if (isatty(fd) != 0) {
            // 0x403560
            format = dcgettext(NULL, "%s: invalid file type", 5);
            error(0, (int32_t)"%s: invalid file type" ^ (int32_t)"%s: invalid file type", format);
            // 0x403589
            return (int64_t)*(char *)(v4 + 67);
        }
    }
    if (v7 == 0xc000 || v7 == 0x1000) {
        // 0x403560
        format = dcgettext(NULL, "%s: invalid file type", 5);
        error(0, (int32_t)"%s: invalid file type" ^ (int32_t)"%s: invalid file type", format);
        // 0x403589
        return (int64_t)*(char *)(v4 + 67);
    }
    int128_t v8; // 0x4033d0
    if (v7 == 0x8000) {
        if ((int64_t)v8 < 0) {
            // 0x40393f
            error(0, (int32_t)"%s: file has negative size" ^ (int32_t)"%s: file has negative size", dcgettext(NULL, "%s: file has negative size", 5));
            // 0x403589
            return (int64_t)*(char *)(v4 + 67);
        }
    }
    int64_t * v9 = (int64_t *)(a4 + 8); // 0x403460
    uint64_t v10 = *v9; // 0x403460
    int64_t v11 = 4 * v10; // 0x40346e
    if (v11 < 0) {
        // 0x403ab0
        function_408490(v11);
        // UNREACHABLE
    }
    if (v10 >= 0x4000000000000000) {
        // 0x403ab0
        function_408490(v11);
        // UNREACHABLE
    }
    int64_t v12 = a1 & 0xffffffff; // 0x4033d9
    int64_t v13 = function_408240(v11); // 0x403484
    int64_t v14 = *(int64_t *)(a4 + 16); // 0x40348c
    int64_t * v15; // 0x4033d0
    int64_t v16; // 0x4033d0
    int64_t v17; // 0x4033d0
    int64_t v18; // 0x4033d0
    int64_t v19; // 0x4033d0
    int64_t v20; // 0x4033d0
    int64_t v21; // 0x4033d0
    int64_t v22; // 0x4033d0
    int64_t v23; // 0x4033d0
    int64_t v24; // 0x4033d0
    int64_t v25; // 0x4033d0
    if (v14 == -1) {
        if (v7 != 0x8000) {
            // 0x4039a2
            lseek(fd, 0, SEEK_END);
            if (*v9 != 0) {
                goto lab_0x4034d1;
            } else {
                int64_t v26 = function_406e60(a3); // 0x4039da
                int64_t * v27 = (int64_t *)(v4 + 32); // 0x403795
                v16 = *v27;
                v15 = v27;
                v23 = 0;
                v22 = v12;
                v18 = v13;
                v20 = v26;
                goto lab_0x403795;
            }
        } else {
            int64_t v28 = *v9; // 0x403651
            if (*(char *)(a4 + 29) != 0) {
                // 0x4039ee
                if (v28 != 0) {
                    goto lab_0x4034d1;
                } else {
                    // 0x403a03
                    v21 = v12;
                    v17 = v13;
                    v19 = function_406e60(a3);
                    goto lab_0x403785;
                }
            } else {
                int64_t v29 = v8; // 0x403645
                int64_t v30 = v2 < 0x2000000000000001 ? v2 : 512; // 0x40368b
                v25 = v28;
                v24 = v29 == 0 | v30 <= v29 ? 0 : v29;
                goto lab_0x4036d7;
            }
        }
    } else {
        int64_t v31 = *v9; // 0x40349f
        if (v7 == 0x8000) {
            int64_t v32 = v8; // 0x4035db
            int64_t v33 = v2 < 0x2000000000000001 ? v2 : 512; // 0x403603
            int64_t v34 = v33 - v14; // 0x403607
            v25 = v31;
            v24 = v32;
            if ((v34 < 0 == ((v34 ^ v33) & (v14 ^ v33)) < 0 == (v34 != 0) ? v14 : v33) > v32) {
                goto lab_0x4036d7;
            } else {
                // 0x403617
                if (v31 == 0) {
                    goto lab_0x40398b;
                } else {
                    goto lab_0x4034d1;
                }
            }
        } else {
            // 0x4034bc
            if (v31 == 0) {
                goto lab_0x40398b;
            } else {
                goto lab_0x4034d1;
            }
        }
    }
  lab_0x4036e8:;
    int64_t v35 = function_406e60(a3); // 0x4036ed
    int64_t v36; // 0x4033d0
    v21 = v36;
    v17 = v13;
    v19 = v35;
    int64_t v37; // 0x4033d0
    int64_t v38; // 0x4033d0
    int64_t v39; // 0x4033d0
    int64_t v40; // 0x4033d0
    int64_t v41; // 0x4033d0
    if (v41 == 0) {
        goto lab_0x403785;
    } else {
        // 0x403703
        v40 = *v9;
        v39 = v36;
        v37 = v13;
        v38 = v35;
        goto lab_0x403714;
    }
  lab_0x40350b:;
    // 0x40350b
    int64_t v42; // 0x4033d0
    int64_t v43 = v42;
    int64_t v44 = -((0x100000000 * v43)) >> 32; // 0x40350d
    uint64_t v45; // 0x4033d0
    if (v45 <= v44) {
        // break -> 0x403972
        goto lab_0x403972;
    }
    // 0x403518
    int64_t v46; // 0x4033d0
    int64_t v47 = v46;
    int64_t v48 = v44; // 0x40351b
    int64_t v49; // 0x4033d0
    int64_t v50 = v49; // 0x40351b
    int64_t v51 = v47; // 0x40351b
    int64_t v52; // 0x4033d0
    int64_t v53 = v44 + v52; // 0x40351b
    goto lab_0x40351e;
  lab_0x40351e:;
    int64_t v54 = v53;
    int64_t v55 = v51;
    int64_t v56 = v50;
    int64_t v57 = v48;
    uint32_t v58 = *(int32_t *)v55; // 0x40351e
    int64_t v59 = v58; // 0x40351e
    int64_t v60 = v45 - v57; // 0x40351e
    int64_t v61 = v56; // 0x40351e
    int64_t v62 = v55; // 0x40351e
    int64_t v63 = v54; // 0x40351e
    goto lab_0x403522;
  lab_0x4034d1:;
    // 0x4034d1
    int64_t v70; // 0x4033d0
    int64_t v71; // 0x4033d0
    int64_t v72; // 0x4033d0
    int64_t v74; // 0x4033d0
    int64_t v69; // 0x4033d0
    int64_t v73; // 0x4033d0
    int64_t v75; // 0x4034ee
    while (true) {
      lab_0x403522:
        // 0x403522
        v52 = v63;
        v49 = v61;
        v45 = v60;
        int64_t v64 = v59;
        v42 = 0xfffffffe;
        v46 = (int64_t)&g3;
        if (v64 == 0) {
            goto lab_0x40350b;
        } else {
            int64_t v65 = v62;
            int64_t v66 = v65 + 4; // 0x403526
            v42 = v64;
            v46 = v66;
            if ((int32_t)v64 < 0) {
                goto lab_0x40350b;
            } else {
                int64_t v67 = 0x100000000 * v64;
                int64_t v68 = v67 >> 32; // 0x40352e
                if (v45 < v68) {
                    // 0x4037d0
                    v69 = v49;
                    v70 = v45;
                    v71 = v66;
                    v72 = v68;
                    if (v45 < 2 || v68 > 3 * v45) {
                        // 0x403968
                        v73 = v52 + v45;
                        v74 = v75;
                        goto lab_0x403858;
                    } else {
                        goto lab_0x40381a;
                    }
                }
                int64_t v76 = v67 >> 30; // 0x40353a
                v48 = v68;
                v50 = v76 + (int64_t)memcpy((int64_t *)v49, (int64_t *)v66, (int32_t)v76);
                v51 = v66 + v76;
                v53 = v52;
                goto lab_0x40351e;
            }
        }
    }
  lab_0x403972:
    // 0x403972
    v73 = v52 + v45;
    v74 = v75;
    goto lab_0x403858;
  lab_0x4036d7:
    // 0x4036d7
    v41 = v24;
    v36 = v12;
    if (v25 != 0) {
        goto lab_0x4034d1;
    } else {
        goto lab_0x4036e8;
    }
  lab_0x40398b:
    // 0x40398b
    v21 = v12;
    v17 = v13;
    v19 = function_406e60(a3);
    goto lab_0x403785;
  lab_0x403858:;
    int64_t v77 = 0x100000000000000 * v73 >> 56; // 0x40385d
    int64_t v78 = v74 & 0xffffffff;
    int64_t v79 = v77 - 1; // 0x403871
    int64_t v80; // 0x4033d0
    int64_t v81 = v80 - v77;
    uint64_t v82 = v79;
    int64_t v83 = 0;
    int32_t * v84 = (int32_t *)(4 * v83 + v13);
    int32_t v85 = *v84; // 0x4038b1
    int64_t v86; // 0x4033d0
    int32_t * v87; // 0x4038ec
    int64_t v88; // 0x4038f3
    while (v82 > v79) {
        // 0x4038bb
        v87 = (int32_t *)(4 * (function_406e70(a3, v81 + -1 - v83) + v83) + v13);
        *v84 = *v87;
        v88 = v83 + 1;
        *v87 = 0x1000000 * v85 >> 24;
        v41 = v86;
        v36 = v78;
        if (v88 == v80) {
            // break (via goto) -> 0x4036e8
            goto lab_0x4036e8;
        }
        v82 -= v79;
        v83 = v88;
        v84 = (int32_t *)(4 * v83 + v13);
        v85 = *v84;
    }
    // 0x403890
    *(int32_t *)(4 * v81 + v13) = v85;
    *v84 = -1;
    int64_t v89 = v83 + 1; // 0x4038a5
    v41 = v86;
    v36 = v78;
    int64_t v90 = v81 + 1; // 0x4038af
    while (v89 != v80) {
        int64_t v91 = v90;
        v82 += v81;
        v83 = v89;
        v84 = (int32_t *)(4 * v83 + v13);
        v85 = *v84;
        while (v82 > v79) {
            // 0x4038bb
            v87 = (int32_t *)(4 * (function_406e70(a3, v91 + -1 - v83) + v83) + v13);
            *v84 = *v87;
            v88 = v83 + 1;
            *v87 = 0x1000000 * v85 >> 24;
            v41 = v86;
            v36 = v78;
            if (v88 == v80) {
                // break (via goto) -> 0x4036e8
                goto lab_0x4036e8;
            }
            v82 -= v79;
            v83 = v88;
            v84 = (int32_t *)(4 * v83 + v13);
            v85 = *v84;
        }
        // 0x403890
        *(int32_t *)(4 * v91 + v13) = v85;
        *v84 = -1;
        v89 = v83 + 1;
        v41 = v86;
        v36 = v78;
        v90 = v91 + 1;
    }
    goto lab_0x4036e8;
  lab_0x403795:
    // 0x403795
    *v15 = 0;
    *(int64_t *)(v4 + 88) = v16;
    v40 = v23;
    v39 = v22;
    v37 = v18;
    v38 = v20;
    goto lab_0x403714;
  lab_0x403785:;
    int64_t v118 = v17;
    int64_t fd2 = v21;
    int64_t * v119 = (int64_t *)(v4 + 32);
    int64_t v120 = *v119; // 0x403785
    if (v120 == 0) {
        // 0x403a32
        if (*(int32_t *)(a4 + 24) != 0) {
            // 0x403a47
            if (ftruncate((int32_t)fd2, 0) != 0) {
                // 0x403a54
                if ((*(int32_t *)(v4 + 120) & 0xf000) == 0x8000) {
                    // 0x403a64
                    error(0, *__errno_location(), dcgettext(NULL, "%s: error truncating", 5));
                    // 0x4037bd
                    free((int64_t *)v118);
                    // 0x403589
                    return (int64_t)*(char *)(v4 + 67);
                }
            }
        }
        // 0x403a39
        *(char *)(v4 + 67) = *(char *)(v4 + 16);
      lab_0x4037bd:
        // 0x4037bd
        free((int64_t *)v118);
        // 0x403589
        return (int64_t)*(char *)(v4 + 67);
    }
    // 0x403791
    v16 = v120;
    v15 = v119;
    v23 = *v9;
    v22 = fd2;
    v18 = v118;
    v20 = v19;
    goto lab_0x403795;
  lab_0x403714:
    // 0x403714
    *(int64_t *)(v4 + 8) = v37;
    if (v40 != -(int64_t)*(char *)(a4 + 30)) {
        int64_t * v92 = (int64_t *)(v4 - 8); // 0x403745
        int64_t * v93 = (int64_t *)(v4 - 16); // 0x40374d
        int64_t v94; // 0x4033d0
        int64_t v95 = v94 & 0xffffffff; // 0x40374e
        int64_t v96 = v4 + 88; // 0x403750
        int64_t v97 = v4 + 96; // 0x403755
        char * v98 = (char *)(v4 + 16);
        int64_t v99 = 0; // 0x4033d0
        int64_t v100; // 0x4033d0
        int64_t v101 = v100; // 0x4033d0
        uint64_t v102 = v101;
        uint64_t v103 = v99;
        int32_t v104 = 0; // 0x403736
        int64_t * v105; // 0x403717
        int64_t v106; // 0x403738
        int32_t v107; // 0x40373d
        if (v103 < v102) {
            // 0x403738
            v106 = *v105;
            v107 = *(int32_t *)(v106 + 4 * v103);
            v104 = v107;
        }
        int32_t v108 = v104;
        int64_t v109 = v103 + 1; // 0x403741
        int64_t v110; // 0x4033d0
        *v92 = v110;
        *v93 = v109;
        int64_t v111; // 0x4033d0
        int64_t v112; // 0x403722
        int64_t v113 = function_402b20(v95, v97, v112, v96, v108, v111, (int64_t)&g59, (int64_t)&g59); // 0x40375a
        int32_t v114 = v113; // 0x403761
        if (v114 != 0) {
            if (v114 < 0) {
                // 0x4037b8
                goto lab_0x4037bd;
            }
            // 0x403767
            *v98 = 0;
        }
        int64_t v115 = *v9; // 0x40376c
        char * v116; // 0x403770
        unsigned char v117 = *v116; // 0x403770
        v99 = v109;
        v101 = v115;
        while (v115 + (int64_t)v117 > v109) {
            // 0x403730
            v102 = v101;
            v103 = v99;
            v104 = 0;
            if (v103 < v102) {
                // 0x403738
                v106 = *v105;
                v107 = *(int32_t *)(v106 + 4 * v103);
                v104 = v107;
            }
            // 0x403741
            v108 = v104;
            v109 = v103 + 1;
            *v92 = v110;
            *v93 = v109;
            v113 = function_402b20(v95, v97, v112, v96, v108, v111, (int64_t)&g59, (int64_t)&g59);
            v114 = v113;
            if (v114 != 0) {
                if (v114 < 0) {
                    // 0x4037b8
                    goto lab_0x4037bd;
                }
                // 0x403767
                *v98 = 0;
            }
            // 0x40376c
            v115 = *v9;
            v117 = *v116;
            v99 = v109;
            v101 = v115;
        }
    }
    // 0x40377d
    v21 = v39;
    v17 = v37;
    v19 = v38;
    goto lab_0x403785;
  lab_0x40381a:;
    int64_t v121 = v72;
    int64_t v122 = v71;
    int64_t v123 = v70;
    int64_t v124 = v69;
    int64_t v125; // 0x4033d0
    int64_t v126; // 0x4033d0
    int64_t v127; // 0x4033d0
    if (v123 == v121) {
        goto lab_0x403839;
    } else {
        int64_t v128 = v121 - 1; // 0x403823
        uint64_t v129 = function_406e70(a3, v128); // 0x40382f
        v127 = v124;
        v126 = v128;
        v125 = v123;
        if (v123 > v129) {
            goto lab_0x403839;
        } else {
            goto lab_0x403817;
        }
    }
  lab_0x403839:;
    int32_t v130 = *(int32_t *)v122; // 0x403839
    *(int32_t *)v124 = v130;
    int64_t v131 = v123 - 1; // 0x403843
    v73 = v52;
    v74 = a1;
    if (v131 != 0) {
        // 0x403810
        v127 = v124 + 4;
        v126 = v121 - 1;
        v125 = v131;
        goto lab_0x403817;
    } else {
        goto lab_0x403858;
    }
  lab_0x403817:;
    int64_t v132 = v125;
    int64_t v133 = v126;
    int64_t v134 = v127;
    v69 = v134;
    v70 = v132;
    v71 = v122 + 4;
    v72 = v133;
    goto lab_0x40381a;
}
// Address range: 0x403ac0 - 0x403f0d
int64_t function_403ac0(int64_t a1) {
    int32_t status = a1; // 0x403ad6
    if (status != 0) {
        // 0x403ada
        __fprintf_chk(g38, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x403aff
        exit(status);
        // UNREACHABLE
    }
    // 0x403b06
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Overwrite the specified FILE(s) repeatedly, in order to make it harder\nfor even very expensive hardware probing to recover the data.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nIf FILE is -, shred standard output.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "  -f, --force    change permissions to allow writing if necessary\n  -n, --iterations=N  overwrite N times instead of the default (%d)\n      --random-source=FILE  get random bytes from FILE\n  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n", 5));
    fputs_unlocked(dcgettext(NULL, "  -u             deallocate and remove file after overwriting\n      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n  -v, --verbose  show progress\n  -x, --exact    do not round file sizes up to the next full block;\n                   this is the default for non-regular files\n  -z, --zero     add a final overwrite with zeros to hide shredding\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nDelete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda,\nand those files usually should not be removed.\nThe optional HOW parameter indicates how to remove a directory entry:\n'unlink' => use a standard unlink call.\n'wipe' => also first obfuscate bytes in the name.\n'wipesync' => also sync each obfuscated byte to disk.\nThe default mode is 'wipesync', but note it can be expensive.\n\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "CAUTION: Note that shred relies on a very important assumption:\nthat the file system overwrites data in place.  This is the traditional\nway to do things, but many modern file system designs do not satisfy this\nassumption.  The following are examples of file systems on which shred is\nnot effective, or is not guaranteed to be effective in all file system modes:\n\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "* log-structured or journaled file systems, such as those supplied with\nAIX and Solaris (and JFS, ReiserFS, XFS, Ext3, etc.)\n\n* file systems that write redundant data and carry on even if some writes\nfail, such as RAID-based file systems\n\n* file systems that make snapshots, such as Network Appliance's NFS server\n\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "* file systems that cache in temporary locations, such as NFS\nversion 3 clients\n\n* compressed file systems\n\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "In the case of ext3 file systems, the above disclaimer applies\n(and shred is thus of limited effectiveness) only in data=journal mode,\nwhich journals file data in addition to just metadata.  In both the\ndata=ordered (default) and data=writeback modes, shred works as usual.\nExt3 journaling modes can be changed by adding the data=something option\nto the mount options for a particular file system in the /etc/fstab file,\nas documented in the mount man page (man mount).\n\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "In addition, file system backups and remote mirrors may contain copies\nof the file that cannot be removed, and that will allow a shredded file\nto be recovered later.\n", 5), g36);
    int64_t v1 = &g2; // bp-136, 0x403ced
    bool v2; // 0x403ac0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x403d70
    int64_t v6 = *(int64_t *)v5; // 0x403d74
    int64_t v7 = 6; // 0x403d7a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"shred";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x403d86
        char v11 = *(char *)v9; // 0x403d86
        char v12 = v11; // 0x403d86
        bool v13 = false; // 0x403d86
        while (v10 == v11) {
            // 0x403d7c
            v7--;
            int64_t v14 = v9 + v3; // 0x403d86
            int64_t v15 = v8 + v3; // 0x403d86
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
            // break -> 0x403d92
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x403d92
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403ea4;
        } else {
            // 0x403e8e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403ee3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403df4;
            } else {
                goto lab_0x403ea4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403df4;
        } else {
            // 0x403dda
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403ee3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403df4;
            } else {
                goto lab_0x403df4;
            }
        }
    }
  lab_0x403ea4:
    // 0x403ea4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403e34
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x403aff
    exit(status);
    // UNREACHABLE
  lab_0x403df4:
    // 0x403df4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403e34
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x403aff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403f10 - 0x403f1a
int64_t function_403f10(void) {
    // 0x403f10
    return function_403ac0(1);
}
// Address range: 0x403f20 - 0x404036
int64_t function_403f20(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x403f41
    int32_t len = strlen(str); // 0x403f41
    if (a2 == 0) {
        // 0x40400d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x403fa7
    int64_t v4 = a3; // 0x403f20
    int64_t v5 = a2; // 0x403fae
    int64_t str4; // 0x403f20
    int64_t v6; // 0x403f20
    int32_t v7; // 0x403f20
    int32_t v8; // 0x403f20
    int32_t v9; // 0x403f20
    int64_t v10; // 0x403f20
    int64_t result; // 0x403f20
    int32_t v11; // 0x403fa3
    char * str2; // 0x403fc2
    while (true) {
        // 0x403fb7
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x403fcb
            result = v6;
            if (len == strlen(str2)) {
                // 0x40400d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x403fdf
                break;
            }
            // 0x403f70
            v7 = 1;
            if (a3 != 0) {
                // 0x403f7e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x403fa7
        v2 = v7;
        v3 = v6 + 1;
        v5 = *(int64_t *)(8 * v3 + a2);
        v4 = str4 + n;
        v10 = v1;
        v9 = v2;
        if (v5 == 0) {
            return (char)v9 == 0 ? v10 : -2;
        }
    }
    int64_t v12 = v6 + 1; // 0x403fe3
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x403fea
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x403fb7
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x403fb7
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x403fcb
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40400d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x403fdf
                    break;
                }
                // 0x403f70
                v7 = 1;
                if (a3 != 0) {
                    // 0x403f7e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x403fa7
            v2 = v7;
            v3 = v6 + 1;
            v5 = *(int64_t *)(8 * v3 + a2);
            v4 = str4 + n;
            v10 = v1;
            v9 = v2;
            if (v5 == 0) {
                return (char)v9 == 0 ? v10 : -2;
            }
        }
        // 0x403fdf
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x403ff8:
    // 0x40400d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x404040 - 0x4040b1
int64_t function_404040(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x404040
    if (a3 == -1) {
        // 0x4040a0
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x404055
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x404064
    function_406dc0(1, a1);
    function_406ab0(0, 8, a2);
    error(0, 0, format);
    return &g59;
}
// Address range: 0x4040c0 - 0x4041d8
int64_t function_4040c0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x4040ed
    fputs_unlocked(v1, g38);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x404160
        int64_t v5; // 0x404167
        int64_t v6; // 0x404187
        while (v3 != 0) {
            // 0x40414b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x404110
                break;
            }
            // 0x40415d
            v4 = v3 + 1;
            v5 = function_406de0(v2);
            __fprintf_chk(g38, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x404190
                goto lab_0x404190;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x404113
        int64_t v8 = function_406de0(v2); // 0x40411d
        __fprintf_chk(g38, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40413d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40414b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x404110
                    break;
                }
                // 0x40415d
                v4 = v3 + 1;
                v5 = function_406de0(v2);
                __fprintf_chk(g38, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x404190
                    goto lab_0x404190;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x404110
            v7 = v3 + 1;
            v8 = function_406de0(v2);
            __fprintf_chk(g38, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x404190:;
    int64_t v10 = (int64_t)g38; // 0x404190
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x404197
    uint64_t result = *v11; // 0x404197
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x4041c0
        return __overflow(g38, 10);
    }
    // 0x4041a1
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x4041e0 - 0x404250
int64_t function_4041e0(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_403f20(a2, v2, v1, a5); // 0x40420c
    int64_t result = v3; // 0x404214
    if (v3 < 0) {
        // 0x404228
        function_404040((int64_t)a1, a2, v3);
        function_4040c0(v2, v1, a5);
        result = -1;
    }
    // 0x404216
    return result;
}
// Address range: 0x404250 - 0x40429d
int64_t function_404250(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x404250
    if (result == 0) {
        // 0x404291
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x404288
    int32_t n = a4; // 0x404288
    int64_t v1 = result; // 0x40428f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x404291
        return result;
    }
    int64_t str3 = str2; // 0x40428f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x404270
    int64_t result2 = 0; // 0x40427d
    while (v2 != 0) {
        // 0x40427f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x404291
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x404291
    return result2;
}
// Address range: 0x4042a0 - 0x4042a8
int64_t function_4042a0(int64_t a1) {
    // 0x4042a0
    g43 = a1;
    int64_t result; // 0x4042a0
    return result;
}
// Address range: 0x4042b0 - 0x4042b8
int64_t function_4042b0(int64_t a1) {
    // 0x4042b0
    g42 = a1;
    int64_t result; // 0x4042b0
    return result;
}
// Address range: 0x4042c0 - 0x40435e
int64_t function_4042c0(void) {
    // 0x4042c0
    int32_t * err_num; // 0x4042d6
    if ((int32_t)function_409ac0((int64_t)g36) == 0) {
        goto lab_0x4042ec;
    } else {
        // 0x4042d6
        err_num = __errno_location();
        if (g42 == 0) {
            goto lab_0x404303;
        } else {
            // 0x4042e7
            if (*err_num != 32) {
                goto lab_0x404303;
            } else {
                goto lab_0x4042ec;
            }
        }
    }
  lab_0x4042ec:;
    int64_t result = function_409ac0((int64_t)g38); // 0x4042f3
    if ((int32_t)result == 0) {
        // 0x4042fc
        return result;
    }
    // 0x40433e
    _exit(g26);
    // UNREACHABLE
  lab_0x404303:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40430f
    if (g43 == 0) {
        // 0x404349
        error(0, *err_num, "%s", v1);
    } else {
        // 0x404323
        error(0, *err_num, "%s: %s", (char *)function_406c30((int64_t)g43), v1);
    }
    // 0x40433e
    _exit(g26);
    // UNREACHABLE
}
// Address range: 0x404360 - 0x404378
int64_t function_404360(void) {
    // 0x404360
    int64_t v1; // 0x404360
    int64_t result = function_4043e0(v1); // 0x404364
    if (result != 0) {
        // 0x40436e
        return result;
    }
    // 0x404373
    function_408490(v1);
    // UNREACHABLE
}
// Address range: 0x404380 - 0x4043dd
int64_t function_404380(int64_t a1) {
    // 0x404380
    int64_t v1; // 0x404380
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x40438e
    int64_t v3 = function_404440(a1, v1); // 0x404392
    int64_t result = v3 - a1; // 0x40439a
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x4043c3
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x4043b0
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x4043c3
            break;
        }
        result2--;
    }
    // 0x4043c3
    return result2;
}
// Address range: 0x4043e0 - 0x40443a
int64_t function_4043e0(int64_t a1) {
    // 0x4043e0
    int64_t v1; // 0x4043e0
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x4043ff
    if (mem == NULL) {
        // 0x404426
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x404415
    int64_t v3; // 0x4043e0
    if (v2 == 0) {
        // 0x404430
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x404415
    *(char *)(v3 + result) = 0;
    // 0x404426
    return result;
}
// Address range: 0x404440 - 0x40449b
int64_t function_404440(int64_t a1, int64_t a2) {
    // 0x404440
    int64_t v1; // 0x404440
    char v2 = v1;
    int64_t v3 = a1; // 0x404449
    int64_t v4 = a1; // 0x404449
    char v5 = v2; // 0x404449
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x404454
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x404450
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40445e
    if (v5 == 0) {
      lab_0x40449a:
        // 0x40449a
        return result;
    }
    int64_t v7 = v4; // 0x404488
    int64_t v8 = 0; // 0x404488
    int64_t v9; // 0x404440
    int64_t v10; // 0x40448a
    char v11; // 0x40448e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x404485
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40448a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x404485
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40447a
    char v14 = *(char *)v13; // 0x40447e
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
            // 0x404485
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40448a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x404485
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x404470
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40449a
    return result2;
}
// Address range: 0x4044a0 - 0x4044cb
int64_t function_4044a0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4044a4
    int64_t result = len; // 0x4044a4
    if (len < 2) {
        // 0x4044ba
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x4044b8
    while (*(char *)(v1 + str) == 47) {
        // 0x4044c0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x4044ba
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x4044ba
    return result2;
}
// Address range: 0x4044d0 - 0x40451a
int64_t function_4044d0(int64_t path, int64_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x4044e3
    return function_407c50((int64_t)fd);
}
// Address range: 0x404520 - 0x4045d7
int64_t function_404520(int32_t a1, float80_t a2) {
    // 0x404520
    int3_t v1; // 0x404520
    int3_t v2 = v1 - 1; // 0x404520
    __frontend_reg_store_fpr(v2, 9223372036854775808.0L);
    int3_t v3 = v1 - 2;
    __frontend_reg_store_fpr(v3, a2);
    float80_t v4 = __frontend_reg_load_fpr(v3); // 0x40452a
    float80_t v5 = __frontend_reg_load_fpr(v2); // 0x40452a
    int64_t result; // 0x404520
    if (v4 > v5 || v4 == v5) {
        // 0x4045a0
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3) - __frontend_reg_load_fpr(v2));
        float80_t v6 = __frontend_reg_load_fpr(v3); // 0x4045a6
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        __frontend_reg_store_fpr(v2, v6);
        result = (int64_t)__frontend_reg_load_fpr(v3) ^ -0x8000000000000000;
    } else {
        // 0x40452e
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3));
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        result = __frontend_reg_load_fpr(v3);
    }
    // 0x404554
    __frontend_reg_store_fpr(v3, (float80_t)result);
    if (result < 0) {
        // 0x404562
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v3) + 18446744073709551616.0L);
    }
    int3_t v7 = v3;
    if (a1 != 0) {
        // 0x404598
        __frontend_reg_store_fpr(v7 + 1, __frontend_reg_load_fpr(v7));
        // 0x40459a
        return result;
    }
    int3_t v8 = v7 + 1; // 0x40456c
    float80_t v9 = __frontend_reg_load_fpr(v7); // 0x40456c
    __frontend_reg_store_fpr(v7, __frontend_reg_load_fpr(v8));
    __frontend_reg_store_fpr(v8, v9);
    float80_t v10 = __frontend_reg_load_fpr(v7); // 0x40456e
    float80_t v11 = __frontend_reg_load_fpr(v8); // 0x40456e
    if (v10 != v11 == v10 == v11) {
        // 0x404578
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    } else {
        // 0x404572
        if (v10 == v11) {
            // 0x40459a
            return result;
        }
        // 0x404574
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    }
    int64_t result2 = result + 1; // 0x404580
    __frontend_reg_store_fpr(v8, (float80_t)result2);
    if (result2 >= 0) {
        // 0x40459a
        return result2;
    }
    // 0x4045d0
    __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8) + 18446744073709551616.0L);
    return result2;
}
// Address range: 0x4045e0 - 0x404fae
int64_t function_4045e0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a3 & 32; // 0x4045e6
    uint32_t v2 = (int32_t)a3 % 4; // 0x4045f0
    int64_t v3; // bp-168, 0x4045e0
    int64_t v4 = &v3; // 0x404600
    int32_t v5 = v1; // 0x404607
    uint32_t v6 = (v5 | 1024) - ((int32_t)(v1 == 0) | v5) & 2024; // 0x404615
    int64_t v7 = 0x100000000 * a3 >> 32; // 0x40461a
    struct lconv * locale_info = localeconv(); // 0x40462b
    int64_t str = *(int64_t *)locale_info; // 0x404630
    int64_t len = strlen((char *)str); // 0x404639
    int64_t v8 = len >= 17 ? (int64_t)&g1 : str; // 0x404653
    int64_t str2 = *(int64_t *)((int64_t)locale_info + 8); // 0x40465c
    int64_t v9 = len >= 17 ? 1 : len; // 0x404661
    uint32_t len2 = strlen((char *)str2); // 0x404672
    int64_t v10 = a2 + 647; // 0x404689
    v3 = v10;
    int64_t v11; // 0x4045e0
    int64_t v12; // 0x4045e0
    int64_t v13; // 0x4045e0
    int64_t v14; // 0x4045e0
    int64_t v15; // 0x4045e0
    int64_t v16; // 0x4045e0
    int64_t v17; // 0x4045e0
    int64_t v18; // 0x4045e0
    int64_t v19; // 0x4045e0
    if (a5 > a4) {
        if (a4 == 0) {
            goto lab_0x4046c5;
        } else {
            if (a5 % a4 != 0) {
                goto lab_0x4046c5;
            } else {
                uint64_t v20 = a5 / a4; // 0x404930
                int64_t v21 = a1 / v20; // 0x404944
                uint64_t v22 = 10 * (a1 % v20); // 0x404950
                uint64_t v23 = 2 * (v22 % v20); // 0x404959
                int64_t v24 = v22 / v20 & 0xffffffff; // 0x40495c
                int64_t v25 = v20 > v23 ? (int64_t)(v23 != 0) : v20 < v23 ? 3 : 2;
                uint32_t v26 = (int32_t)v7 & 16; // 0x404975
                v14 = v26;
                v18 = v21;
                v16 = v25;
                v11 = v24;
                v15 = 0;
                v13 = 0xffffffff;
                v19 = v21;
                v17 = v25;
                v12 = v24;
                if (v26 == 0) {
                    goto lab_0x404991;
                } else {
                    goto lab_0x40497e;
                }
            }
        }
    } else {
        if (a4 % a5 != 0) {
            goto lab_0x4046c5;
        } else {
            uint64_t v27 = a4 / a5; // 0x4046a2
            int64_t v28 = v27 * a1; // 0x4046b2
            if (v28 / v27 == a1) {
                uint32_t v29 = (int32_t)v7 & 16; // 0x404c31
                int64_t v30 = v29; // 0x404c31
                v14 = v30;
                v18 = v28;
                v16 = 0;
                v11 = 0;
                v15 = v30;
                v13 = 0xffffffff;
                v19 = v28;
                v17 = 0;
                v12 = 0;
                if (v29 != 0) {
                    goto lab_0x40497e;
                } else {
                    goto lab_0x404991;
                }
            } else {
                goto lab_0x4046c5;
            }
        }
    }
  lab_0x404991:;
    int64_t v31 = v15; // 0x40499a
    int64_t v32 = v13; // 0x40499a
    int64_t v33 = v19; // 0x40499a
    int64_t v34 = v17; // 0x40499a
    int64_t v35 = v12; // 0x40499a
    int64_t v36 = v10; // 0x40499a
    int64_t v37; // 0x4045e0
    int64_t v38; // 0x4045e0
    int64_t v39; // 0x4045e0
    int64_t v40; // 0x4045e0
    int64_t v41; // 0x4045e0
    int64_t v42; // 0x4045e0
    int64_t v43; // 0x4045e0
    if (v2 == 1) {
        // 0x404cd0
        v41 = v15;
        v39 = v13;
        v42 = v19;
        v37 = v10;
        v40 = v13;
        v43 = v19;
        v38 = v10;
        if ((int32_t)(v19 % 2 != -v17) + (int32_t)v12 < 6) {
            goto lab_0x4049d0;
        } else {
            goto lab_0x4049b1;
        }
    } else {
        goto lab_0x4049a0;
    }
  lab_0x4046c5:;
    // 0x4046c5
    int3_t v44; // 0x4045e0
    int3_t v45 = v44 - 1;
    __frontend_reg_store_fpr(v45, (float80_t)a4);
    int3_t v46; // 0x4045e0
    int3_t v47; // 0x4045e0
    if (a4 < 0) {
        // 0x404910
        __frontend_reg_store_fpr(v45, __frontend_reg_load_fpr(v45) + 18446744073709551616.0L);
        v46 = v45;
    } else {
        // 0x4046c5
        v46 = v44 - 2;
        v47 = v45;
    }
    int3_t v48 = v47;
    __frontend_reg_store_fpr(v46, (float80_t)a5);
    float80_t v49 = __frontend_reg_load_fpr(v46);
    int3_t v50; // 0x4045e0
    int3_t v51; // 0x4045e0
    int3_t v52; // 0x4045e0
    int3_t v53; // 0x4045e0
    if (a5 < 0) {
        // 0x4048f0
        __frontend_reg_store_fpr(v46, v49 + 18446744073709551616.0L);
        int3_t v54 = v48 + 1;
        __frontend_reg_store_fpr(v54, __frontend_reg_load_fpr(v54) / __frontend_reg_load_fpr(v48));
        __frontend_reg_store_fpr(v48, (float80_t)a1);
        v50 = v54;
        v52 = v48;
        v51 = v54;
        v53 = v48;
        if (a1 >= 0) {
            goto lab_0x404702;
        } else {
            goto lab_0x4048d8;
        }
    } else {
        // 0x4046ee
        __frontend_reg_store_fpr(v48, __frontend_reg_load_fpr(v48) / v49);
        __frontend_reg_store_fpr(v46, (float80_t)a1);
        int3_t v55 = v46 + 1;
        v50 = v55;
        v52 = v46;
        v51 = v55;
        v53 = v46;
        if (a1 < 0) {
            goto lab_0x4048d8;
        } else {
            goto lab_0x404702;
        }
    }
  lab_0x404702:;
    int3_t v56 = v50;
    float80_t v57 = __frontend_reg_load_fpr(v52); // 0x404702
    __frontend_reg_store_fpr(v56, v57 * __frontend_reg_load_fpr(v56));
    int3_t v58 = v56; // 0x404709
    int3_t v59 = v56; // 0x404709
    if ((a3 & 16) == 0) {
        goto lab_0x404820;
    } else {
        goto lab_0x40470f;
    }
  lab_0x4048d8:;
    int3_t v60 = v53;
    __frontend_reg_store_fpr(v60, __frontend_reg_load_fpr(v60) + 18446744073709551616.0L);
    int3_t v61 = v60 + 2; // 0x4048de
    __frontend_reg_store_fpr(v61, __frontend_reg_load_fpr(v51) * __frontend_reg_load_fpr(v61));
    v58 = v61;
    v59 = v61;
    if ((a3 & 16) != 0) {
        goto lab_0x40470f;
    } else {
        goto lab_0x404820;
    }
  lab_0x40497e:;
    int64_t v62 = v14;
    v15 = v62;
    v13 = 0;
    v19 = v18;
    v17 = v16;
    v12 = v11;
    int64_t v63; // 0x4045e0
    int64_t v64; // 0x4045e0
    int64_t v65; // 0x4045e0
    int64_t v66; // 0x4045e0
    int64_t v67; // 0x4045e0
    int64_t v68; // 0x4045e0
    int64_t v69; // 0x404bb6
    int64_t v70; // 0x404b9a
    if (v18 < (int64_t)v6) {
        goto lab_0x404991;
    } else {
        int64_t v71; // 0x4045e0
        int32_t v72 = v71; // 0x404bb4
        int64_t v73; // 0x4045e0
        uint64_t v74; // 0x4045e0
        v69 = v73 / v74;
        int64_t v75; // 0x4045e0
        uint64_t v76 = 10 * (v73 % v74) + v75 & 0xffffffff; // 0x404bc7
        int64_t v77 = v76 / v74; // 0x404bc7
        uint32_t v78 = 2 * (int32_t)(v76 % v74) + (v72 >> 1); // 0x404bc9
        uint32_t v79 = v78 + v72; // 0x404bd2
        int64_t v80 = v78 < v6 ? (int64_t)(v79 != 0) : v6 < v79 ? 3 : 2;
        int64_t v81; // 0x4045e0
        v70 = v81 + 1 & 0xffffffff;
        while (v69 >= v74) {
            // 0x404ba6
            v15 = v62;
            v13 = v70;
            v19 = v69;
            v17 = v80;
            v12 = v77;
            v81 = v70;
            v73 = v69;
            v71 = v80;
            v75 = v77;
            int64_t v82; // 0x404b9a
            if ((int32_t)v82 == 8) {
                goto lab_0x404991;
            }
            int64_t v83 = v75;
            int64_t v84 = v71;
            uint64_t v85 = v73;
            int64_t v86 = v81;
            v72 = v84;
            v69 = v85 / v74;
            v76 = 10 * (v85 % v74) + v83 & 0xffffffff;
            v77 = v76 / v74;
            v78 = 2 * (int32_t)(v76 % v74) + (v72 >> 1);
            v79 = v78 + v72;
            int64_t v87 = v6 < v79 ? 3 : 2;
            v80 = v78 < v6 ? (int64_t)(v79 != 0) : v87;
            v82 = v86 + 1;
            v70 = v82 & 0xffffffff;
        }
        // 0x404d80
        v15 = v62;
        v13 = v70;
        v19 = v69;
        v17 = v80;
        v12 = v77;
        if (v69 < 10) {
            bool v88; // 0x4045e0
            if (v2 == 1) {
                int32_t v89 = (int32_t)(v80 + v77 % 2) - 2; // 0x404e57
                v88 = v89 >= 0 == (v89 != 0);
            } else {
                // 0x404d95
                v88 = v2 == 0 == (v80 != 0);
            }
            // 0x404da7
            if (v88) {
                int64_t v90 = v77 + 1; // 0x404e40
                v64 = v90 & 0xffffffff;
                if ((int32_t)v90 == 10) {
                    // 0x404eb3
                    v68 = v69 + 1;
                    v65 = 0;
                    v67 = 10;
                    v66 = 0;
                    v63 = v10;
                    if (v69 == 9) {
                        goto lab_0x404e00;
                    } else {
                        goto lab_0x404db7;
                    }
                } else {
                    goto lab_0x404e48;
                }
            } else {
                // 0x404daf
                v68 = v69;
                v65 = v80;
                v64 = v77;
                if (v76 >= v74) {
                    goto lab_0x404e48;
                } else {
                    goto lab_0x404db7;
                }
            }
        } else {
            goto lab_0x404991;
        }
    }
  lab_0x404820:;
    int3_t v91 = v59; // 0x404827
    if (v2 != 1) {
        int3_t v92 = v59 - 1; // 0x404829
        __frontend_reg_store_fpr(v92, 1.84467e+19L);
        float80_t v93 = __frontend_reg_load_fpr(v92); // 0x40482f
        float80_t v94 = __frontend_reg_load_fpr(v59); // 0x40482f
        v91 = v59;
        if (v93 > v94) {
            // 0x404bf0
            function_404520(v2, __frontend_reg_load_fpr(v59));
            v91 = v59 + 1;
        }
    }
    // 0x404837
    __frontend_reg_load_fpr(v91);
    char * str3 = (char *)a2; // 0x404859
    __sprintf_chk(str3, 1, -1, "%.0Lf");
    int64_t len3 = strlen(str3); // 0x404866
    int64_t v95 = len3; // 0x40486d
    int64_t v96 = 0xffffffff; // 0x40486d
    int64_t v97 = len3; // 0x40486d
    goto lab_0x404870;
  lab_0x40470f:;
    int3_t v180 = v58;
    int3_t v179 = v180 - 1; // 0x40470f
    __frontend_reg_store_fpr(v179, (float80_t)v6);
    int3_t v205 = v180 - 2; // 0x404715
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v179));
    int3_t v206 = v180 - 3;
    __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v205));
    int64_t v207 = 1; // 0x404726
    int64_t v164 = v207 & 0xffffffff; // 0x404726
    __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v206) * __frontend_reg_load_fpr(v179));
    float80_t v208 = __frontend_reg_load_fpr(v206); // 0x40472b
    __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v180));
    __frontend_reg_store_fpr(v180, v208);
    while (__frontend_reg_load_fpr(v206) >= __frontend_reg_load_fpr(v180)) {
        float80_t v209 = __frontend_reg_load_fpr(v206);
        if ((int32_t)v207 == 8) {
            // 0x404736
            __frontend_reg_store_fpr(v179, v209);
            __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v205));
            goto lab_0x404744;
        }
        // 0x404720
        __frontend_reg_store_fpr(v205, v209);
        float80_t v210 = __frontend_reg_load_fpr(v205); // 0x404722
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v180));
        __frontend_reg_store_fpr(v180, v210);
        __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v205));
        v207 = v164 + 1;
        v164 = v207 & 0xffffffff;
        __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v206) * __frontend_reg_load_fpr(v179));
        v208 = __frontend_reg_load_fpr(v206);
        __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v180));
        __frontend_reg_store_fpr(v180, v208);
    }
    // 0x404740
    __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v206));
    __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v205));
    goto lab_0x404744;
  lab_0x4049a0:;
    int64_t v211 = v36;
    int64_t v212 = v33;
    int64_t v213 = v32;
    v40 = v213;
    v43 = v212;
    v38 = v211;
    if (v2 != 0) {
        goto lab_0x4049d0;
    } else {
        // 0x4049aa
        v41 = v31;
        v39 = v213;
        v42 = v212;
        v37 = v211;
        v40 = v213;
        v43 = v212;
        v38 = v211;
        if ((int32_t)(v35 + v34) < 1) {
            goto lab_0x4049d0;
        } else {
            goto lab_0x4049b1;
        }
    }
  lab_0x404870:;
    int64_t v98 = *(int64_t *)(v4 + 8); // 0x404874
    int64_t v99 = v3 - v95; // 0x40487c
    memmove((int64_t *)v99, (int64_t *)v98, (int32_t)v95);
    int64_t v100 = v96; // 0x404885
    int64_t v101 = v99 + v97; // 0x404885
    int64_t v102 = v99; // 0x404885
    goto lab_0x40488a;
  lab_0x404744:;
    float80_t v178 = __frontend_reg_load_fpr(v179); // 0x404752
    __frontend_reg_store_fpr(v180, v178 / __frontend_reg_load_fpr(v180));
    uint64_t v181 = v9 + (v5 == 0 ? 3 : 2); // 0x404759
    int3_t v143; // 0x4045e0
    int3_t v173; // 0x4045e0
    int3_t v147; // 0x4045e0
    int64_t v144; // 0x4045e0
    int3_t v175; // 0x4045e0
    if (v2 == 1) {
        // 0x404c80
        __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v180));
        __frontend_reg_load_fpr(v179);
        float80_t v182 = __frontend_reg_load_fpr(v180); // 0x404ca4
        char * str6 = (char *)a2; // 0x404ca8
        __sprintf_chk(str6, 1, -1, "%.1Lf");
        int64_t len6 = strlen(str6); // 0x404cb0
        __frontend_reg_store_fpr(v180, v182);
        v143 = v180;
        v144 = len6;
        if (v181 < len6) {
            // 0x404cc0
            __frontend_reg_store_fpr(v179, 10.0L);
            float80_t v183 = __frontend_reg_load_fpr(v180); // 0x404cc6
            __frontend_reg_store_fpr(v180, v183 * __frontend_reg_load_fpr(v179));
            v147 = v179;
            goto lab_0x4047e6;
        } else {
            goto lab_0x404c48;
        }
    } else {
        // 0x404767
        __frontend_reg_store_fpr(v179, 1.84467e+19L);
        float80_t v184 = __frontend_reg_load_fpr(v179); // 0x40476d
        float80_t v185 = __frontend_reg_load_fpr(v180); // 0x40476d
        bool v186 = false; // 0x40476d
        bool v187 = false; // 0x40476d
        if (v184 <= v185) {
            v186 = true;
            v187 = false;
            if (v184 >= v185) {
                v186 = v184 != v185;
                v187 = true;
            }
        }
        __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v180));
        v173 = v179;
        if (!v186 && !v187) {
            // 0x404c08
            __frontend_reg_load_fpr(v179);
            float80_t v188 = __frontend_reg_load_fpr(v180); // 0x404c11
            function_404520(v2, v188);
            __frontend_reg_store_fpr(v180, v188);
            v173 = v180;
        }
        float80_t v189 = __frontend_reg_load_fpr(v173); // 0x404777
        v175 = v173 + 1;
        __frontend_reg_load_fpr(v175);
        char * str7 = (char *)a2; // 0x40479d
        __sprintf_chk(str7, 1, -1, "%.1Lf");
        int64_t len7 = strlen(str7); // 0x4047a5
        __frontend_reg_store_fpr(v175, v189);
        v143 = v175;
        v144 = len7;
        if (v181 < len7) {
            // 0x4047b9
            __frontend_reg_store_fpr(v173, 10.0L);
            __frontend_reg_store_fpr(v175, __frontend_reg_load_fpr(v175) * __frontend_reg_load_fpr(v173));
            goto lab_0x4047c1;
        } else {
            goto lab_0x404c48;
        }
    }
  lab_0x4049d0:;
    int64_t v190 = v38 - 1; // 0x4049e9
    *(char *)v190 = (char)v43 + 48;
    int64_t v191 = v190; // 0x404a0b
    while (v43 >= 10) {
        // 0x4049e3
        v190 = v191 - 1;
        *(char *)v190 = (char)v43 + 48;
        v191 = v190;
    }
    int64_t v103 = v40; // 0x404a12
    int64_t v104 = v190; // 0x404a12
    int64_t v105 = v40; // 0x404a12
    int64_t v106 = v38; // 0x404a12
    int64_t v107 = v190; // 0x404a12
    if ((a3 & 4) == 0) {
        goto lab_0x404895;
    } else {
        goto lab_0x404a18;
    }
  lab_0x4049b1:;
    int64_t v192 = v37;
    int64_t v193 = v39;
    int64_t v194 = v42 + 1; // 0x4049b1
    v40 = v193;
    v43 = v194;
    v38 = v192;
    if ((int32_t)v193 == 8 || (int32_t)v41 == 0 || v194 != (int64_t)v6) {
        goto lab_0x4049d0;
    } else {
        int64_t v195 = v192; // 0x404d3e
        if ((a3 & 8) == 0) {
            // 0x404ec4
            *(char *)(v192 - 1) = 48;
            int64_t v196 = v192 + -1 - v9; // 0x404ecf
            int64_t v197 = v9 & 0xffffffff; // 0x404ed2
            uint32_t v198 = (int32_t)v9; // 0x404ed5
            if (v198 >= 8) {
                int64_t v199 = v196 + 8 & -8; // 0x404f20
                *(int64_t *)v196 = *(int64_t *)v8;
                *(int64_t *)(v196 + v197 - 8) = *(int64_t *)(v197 + v8 - 8);
                int64_t v200 = v196 - v199; // 0x404f37
                uint32_t v201 = (int32_t)(v200 + v9); // 0x404f43
                v195 = v196;
                if (v201 >= 8) {
                    int64_t v202 = 0;
                    int64_t v203 = v202 + 8; // 0x404f53
                    *(int64_t *)(v202 + v199) = *(int64_t *)(v8 - v200 + v202);
                    v195 = v196;
                    while ((v201 & -8) > (int32_t)v203) {
                        // 0x404f51
                        v202 = v203 & 0xffffffff;
                        v203 = v202 + 8;
                        *(int64_t *)(v202 + v199) = *(int64_t *)(v8 - v200 + v202);
                        v195 = v196;
                    }
                }
            } else {
                if ((v9 & 4) != 0) {
                    // 0x404f7c
                    *(int32_t *)v196 = *(int32_t *)v8;
                    *(int32_t *)(v196 + v197 - 4) = *(int32_t *)(v197 + v8 - 4);
                    v195 = v196;
                } else {
                    // 0x404ee5
                    v195 = v196;
                    if (v198 != 0) {
                        // 0x404eed
                        *(char *)v196 = *(char *)v8;
                        v195 = v196;
                        if ((v9 & 2) != 0) {
                            // 0x404efc
                            *(int16_t *)(v196 + v197 - 2) = *(int16_t *)(v197 + v8 - 2);
                            v195 = v196;
                        }
                    }
                }
            }
        }
        int64_t v204 = v195 - 1; // 0x404d44
        *(char *)v204 = 49;
        v100 = v193 + 1 & 0xffffffff;
        v101 = v195;
        v102 = v204;
        goto lab_0x40488a;
    }
  lab_0x40488a:
    // 0x40488a
    v103 = v100;
    v104 = v102;
    v105 = v100;
    v106 = v101;
    v107 = v102;
    if ((*(char *)(v4 + 16) & 4) != 0) {
        goto lab_0x404a18;
    } else {
        goto lab_0x404895;
    }
  lab_0x404895:;
    int64_t result = v104;
    int64_t v108 = v4 + 16; // 0x404895
    char v109 = *(char *)v108; // 0x404895
    if (v109 > -1) {
        // 0x4048b8
        *(char *)v3 = 0;
        return result;
    }
    int64_t v110 = v103; // 0x40489f
    int64_t v111; // 0x4045e0
    int64_t v112; // 0x4045e0
    int64_t v113; // 0x4045e0
    int64_t v114; // 0x4045e0
    if ((int32_t)v103 == -1) {
        uint64_t v115 = *(int64_t *)(v4 + 24); // 0x404ae0
        v110 = 0;
        if (v115 < 2) {
            goto lab_0x4048a5;
        } else {
            int64_t v116 = 1; // 0x404afd
            int64_t v117 = 1;
            v116 *= (int64_t)*(int32_t *)(v4 + 52);
            int64_t v118 = v117; // 0x404b07
            while (v115 > v116) {
                int64_t v119 = v117 + 1; // 0x404b09
                int64_t v120 = v119 & 0xffffffff; // 0x404b09
                v118 = v120;
                if ((int32_t)v119 == 8) {
                    // break -> 0x404b11
                    break;
                }
                v117 = v120;
                v116 *= (int64_t)*(int32_t *)(v4 + 52);
                v118 = v117;
            }
            int32_t v121 = *(int32_t *)v108; // 0x404b11
            int64_t v122 = v121 & 256; // 0x404b17
            v111 = v122;
            v113 = v118;
            v112 = v122;
            v114 = v118;
            if ((v121 & 64) == 0) {
                goto lab_0x404b40;
            } else {
                goto lab_0x404b21;
            }
        }
    } else {
        goto lab_0x4048a5;
    }
  lab_0x404a18:;
    int64_t str4 = len2 >= 17 ? (int64_t)&g17 : str2; // 0x404685
    int32_t len4 = strlen((char *)str4); // 0x404a25
    int64_t v123 = v106 - v107; // 0x404a2a
    int64_t v124 = v4 + 64; // 0x404a38
    int64_t * v125 = (int64_t *)(v4 + 32); // 0x404a3d
    *v125 = (int64_t)len4;
    int64_t * v126 = (int64_t *)v124; // 0x404a42
    __memcpy_chk(v126, (int64_t *)v107, (int32_t)v123, 41);
    int32_t * v127 = (int32_t *)(v4 + 20); // 0x404a47
    *v127 = (int32_t)v105;
    int64_t v128 = *v125; // 0x404a59
    int64_t * v129 = (int64_t *)str4;
    int32_t v130 = v128;
    int64_t v131 = *(int64_t *)(v4 + 56);
    int64_t v132 = v106;
    uint64_t v133 = v123;
    unsigned char v134 = *(char *)v131; // 0x404a60
    int64_t v135 = -1; // 0x404a66
    int64_t v136 = v131; // 0x404a66
    if (v134 != 0) {
        // 0x404a68
        v135 = v134 >= 127 ? v133 : (int64_t)v134;
        v136 = v131 + 1;
    }
    int64_t v137 = v135;
    while (v133 >= v137) {
        int64_t v138 = v132 - v137; // 0x404aa0
        int64_t v139 = v133 - v137; // 0x404aa3
        memcpy((int64_t *)v138, (int64_t *)(v139 + v124), (int32_t)v137);
        if (v139 == 0) {
            // 0x404f91
            v103 = (int64_t)*v127;
            v104 = v138;
            goto lab_0x404895;
        }
        int64_t v140 = v138 - v128; // 0x404ac3
        memcpy((int64_t *)v140, v129, v130);
        v131 = v136;
        v132 = v140;
        v133 = v139;
        v134 = *(char *)v131;
        v135 = v137;
        v136 = v131;
        if (v134 != 0) {
            // 0x404a68
            v135 = v134 >= 127 ? v133 : (int64_t)v134;
            v136 = v131 + 1;
        }
        // 0x404a79
        v137 = v135;
    }
    int64_t v141 = v132 - v133; // 0x404a8d
    memcpy((int64_t *)v141, v126, (int32_t)v133);
    v103 = (int64_t)*v127;
    v104 = v141;
    goto lab_0x404895;
  lab_0x404c48:;
    int3_t v142 = v143;
    if ((a3 & 8) == 0) {
        // 0x404c68
        __frontend_reg_store_fpr(v142, __frontend_reg_load_fpr(v142));
        goto lab_0x404c6a;
    } else {
        // 0x404c4f
        if (*(char *)(a2 - 1 + v144) == 48) {
            int3_t v145 = v142 - 1; // 0x404e28
            __frontend_reg_store_fpr(v145, 10.0L);
            float80_t v146 = __frontend_reg_load_fpr(v142); // 0x404e33
            __frontend_reg_store_fpr(v142, v146 * __frontend_reg_load_fpr(v145));
            v147 = v145;
            if (v2 != 1) {
                goto lab_0x4047c1;
            } else {
                goto lab_0x4047e6;
            }
        } else {
            // 0x404c5f
            __frontend_reg_store_fpr(v142, __frontend_reg_load_fpr(v142));
            goto lab_0x404c6a;
        }
    }
  lab_0x4048a5:;
    uint32_t v148 = *(int32_t *)v108 & 256; // 0x4048a9
    if ((v148 || (int32_t)v110) == 0) {
        // 0x4048b8
        *(char *)v3 = 0;
        return result;
    }
    int64_t v149 = v148; // 0x4048a9
    v111 = v149;
    v113 = v110;
    int64_t v150 = v149; // 0x404d15
    int64_t v151 = v110; // 0x404d15
    if ((v109 & 64) == 0) {
        goto lab_0x404b38;
    } else {
        goto lab_0x404b21;
    }
  lab_0x404e48:;
    int64_t v152 = v69; // 0x404e4b
    int64_t v153 = v64 + 48 & 0xffffffff; // 0x404e4b
    goto lab_0x404dc7;
  lab_0x404db7:
    // 0x404db7
    v152 = v68;
    v153 = 48;
    v67 = v68;
    v66 = v65;
    v63 = v10;
    if ((a3 & 8) != 0) {
        goto lab_0x404e00;
    } else {
        goto lab_0x404dc7;
    }
  lab_0x4047e6:;
    int3_t v171 = v147 + 1; // 0x4047e6
    __frontend_reg_store_fpr(v171, __frontend_reg_load_fpr(v171) / __frontend_reg_load_fpr(v147));
    __frontend_reg_load_fpr(v171);
    char * str5 = (char *)a2; // 0x40480a
    __sprintf_chk(str5, 1, -1, "%.0Lf");
    int64_t len5 = strlen(str5); // 0x404812
    v95 = len5;
    v96 = v164;
    v97 = len5;
    goto lab_0x404870;
  lab_0x4047c1:;
    int3_t v172 = v173 - 1; // 0x4047c1
    __frontend_reg_store_fpr(v172, 1.84467e+19L);
    float80_t v174 = __frontend_reg_load_fpr(v172); // 0x4047c7
    v147 = v173;
    if (v174 > __frontend_reg_load_fpr(v175)) {
        float80_t v176 = __frontend_reg_load_fpr(v173); // 0x4047cb
        function_404520(v2, __frontend_reg_load_fpr(v175));
        __frontend_reg_store_fpr(v175, v176);
        v147 = v175;
    }
    goto lab_0x4047e6;
  lab_0x404b38:
    // 0x404b38
    v112 = v150;
    v114 = v151;
    int64_t v167; // 0x4045e0
    if ((int32_t)v151 == 0) {
        // 0x404f9d
        v167 = v3;
        if ((int32_t)v150 == 0) {
            // 0x4048b8
            *(char *)v3 = 0;
            return result;
        }
        goto lab_0x404b7d;
    } else {
        goto lab_0x404b40;
    }
  lab_0x404b21:;
    int64_t v177 = *(int64_t *)(v4 + 8); // 0x404b21
    *(char *)(v177 + 647) = 32;
    v3 = v177 + 648;
    v150 = v111;
    v151 = v113;
    goto lab_0x404b38;
  lab_0x404e00:
    // 0x404e00
    v31 = v62;
    v32 = v70;
    v33 = v67;
    v34 = v66;
    v35 = 0;
    v36 = v63;
    v40 = v70;
    v43 = v67;
    v38 = v63;
    if (v2 == 1) {
        goto lab_0x4049d0;
    } else {
        goto lab_0x4049a0;
    }
  lab_0x404dc7:;
    int64_t v154 = a2 + 646; // 0x404dcc
    *(char *)v154 = (char)v153;
    int64_t v155 = v9 & 0xffffffff; // 0x404dd9
    int64_t v156 = v154 - v9; // 0x404ddc
    uint32_t v157 = (int32_t)v9; // 0x404ddf
    if (v157 >= 8) {
        int64_t v158 = v156 + 8 & -8; // 0x404e6c
        *(int64_t *)v156 = *(int64_t *)v8;
        *(int64_t *)(v155 + v156 - 8) = *(int64_t *)(v155 + v8 - 8);
        int64_t v159 = v156 - v158; // 0x404e83
        uint32_t v160 = (int32_t)(v159 + v9); // 0x404e8f
        v67 = v152;
        v66 = 0;
        v63 = v156;
        if (v160 >= 8) {
            int64_t v161 = v8 - v159; // 0x404e86
            int64_t v162 = 0;
            int64_t v163 = v162 + 8; // 0x404e9f
            *(int64_t *)(v162 + v158) = *(int64_t *)(v161 + v162);
            v67 = v152;
            v66 = 0;
            v63 = v156;
            while ((v160 & -8) > (int32_t)v163) {
                // 0x404e9d
                v162 = v163 & 0xffffffff;
                v163 = v162 + 8;
                *(int64_t *)(v162 + v158) = *(int64_t *)(v161 + v162);
                v67 = v152;
                v66 = 0;
                v63 = v156;
            }
        }
    } else {
        if ((v9 & 4) != 0) {
            // 0x404f67
            *(int32_t *)v156 = *(int32_t *)v8;
            *(int32_t *)(v155 + v156 - 4) = *(int32_t *)(v155 + v8 - 4);
            v67 = v152;
            v66 = 0;
            v63 = v156;
        } else {
            // 0x404def
            v67 = v152;
            v66 = 0;
            v63 = v156;
            if (v157 != 0) {
                // 0x404df3
                *(char *)v156 = *(char *)v8;
                v67 = v152;
                v66 = 0;
                v63 = v156;
                if ((v9 & 2) != 0) {
                    // 0x404e13
                    *(int16_t *)(v155 + v156 - 2) = *(int16_t *)(v155 + v8 - 2);
                    v67 = v152;
                    v66 = 0;
                    v63 = v156;
                }
            }
        }
    }
    goto lab_0x404e00;
  lab_0x404c6a:
    // 0x404c6a
    v95 = v144;
    v96 = v164;
    v97 = v144 + -1 - v9;
    goto lab_0x404870;
  lab_0x404b40:;
    int32_t * v165 = (int32_t *)(v4 + 48); // 0x404b40
    if (*v165 == 0 == (int32_t)v114 == 1) {
        int64_t v166 = v3 + 1; // 0x404d64
        *(char *)v3 = 107;
        v167 = v166;
        if ((int32_t)v112 == 0) {
            // 0x404d73
            v3 = v166;
            // 0x4048b8
            *(char *)v3 = 0;
            return result;
        }
    } else {
        int64_t v168 = v3; // 0x404b56
        char v169 = *(char *)((0x100000000 * v114 >> 32) + (int64_t)&g9); // 0x404b5a
        int64_t v170 = v168 + 1; // 0x404b61
        *(char *)v168 = v169;
        if ((int32_t)v112 == 0) {
            // 0x404d73
            v3 = v170;
            // 0x4048b8
            *(char *)v3 = 0;
            return result;
        }
        // 0x404b6f
        v167 = v170;
        if (*v165 != 0) {
            // 0x404d20
            *(char *)v170 = 105;
            v167 = v168 + 2;
        }
    }
    goto lab_0x404b7d;
  lab_0x404b7d:
    // 0x404b7d
    *(char *)v167 = 66;
    v3 = v167 + 1;
    // 0x4048b8
    *(char *)v3 = 0;
    return result;
}
// Address range: 0x404fb0 - 0x405167
int64_t function_404fb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1; // 0x404fc6
    if (a1 == 0) {
        char * env_val = getenv("BLOCK_SIZE"); // 0x4050d5
        v1 = (int64_t)env_val;
        if (env_val == NULL) {
            char * env_val2 = getenv("BLOCKSIZE"); // 0x4050eb
            v1 = (int64_t)env_val2;
            if (env_val2 == NULL) {
                int64_t * v2 = (int64_t *)a3;
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405152
                    *v2 = 1024;
                    *(int32_t *)a2 = 0;
                } else {
                    // 0x40510b
                    *v2 = 512;
                    *(int32_t *)a2 = 0;
                }
                // 0x40500e
                return 0;
            }
        }
    }
    char v3 = *(char *)v1; // 0x404fce
    int64_t v4 = v1 + (int64_t)(v3 == 39);
    int64_t v5 = v3 != 39 ? 0 : 4;
    int64_t v6 = function_403f20(v4, (int64_t)&g8, (int64_t)&g7, 4); // 0x404fee
    if ((int32_t)v6 >= 0) {
        // 0x404ff7
        *(int64_t *)a3 = 1;
        int32_t v7 = *(int32_t *)((0x100000000 * v6 >> 30) + (int64_t)&g7); // 0x405001
        *(int32_t *)a2 = v7 | (int32_t)v5;
        // 0x40500e
        return 0;
    }
    // 0x405020
    int64_t v8; // bp-48, 0x404fb0
    int64_t v9; // 0x404fb0
    int64_t result = function_4085d0(v4, &v8, 0, a3, "eEgGkKmMpPtTyYzZ0", v9); // 0x405033
    if ((int32_t)result != 0) {
        // 0x405094
        *(int32_t *)a2 = 0;
        // 0x40509d
        *(int64_t *)a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    int64_t v10 = (int64_t)*(char *)v4 + 0xffffffd0; // 0x40503f
    int64_t v11 = v10 & 0xffffffff; // 0x40503f
    int64_t v12 = v11; // 0x405045
    int64_t v13 = v5; // 0x405045
    int64_t v14; // 0x404fb0
    if ((char)v10 < 10) {
        goto lab_0x405094;
    } else {
        // 0x405047
        v14 = v11;
        if (v4 != v8) {
            int64_t v15 = v4 + 1; // 0x405069
            int64_t v16 = (int64_t)*(char *)v15 + 0xffffffd0; // 0x405070
            while ((char)v16 >= 10) {
                // 0x405060
                if (v15 == v8) {
                    // 0x405128
                    v14 = v16 & 0xffffffff;
                    goto lab_0x405128_2;
                }
                v15++;
                v16 = (int64_t)*(char *)v15 + 0xffffffd0;
            }
            // 0x405094
            v12 = v16 & 0xffffffff;
            v13 = v5;
            goto lab_0x405094;
        } else {
            goto lab_0x405128_2;
        }
    }
  lab_0x405094:
    // 0x405094
    *(int32_t *)a2 = (int32_t)v13;
    if (v12 == 0) {
        // 0x40509d
        *(int64_t *)a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    // 0x40500e
    return result;
  lab_0x405128_2:;
    // 0x405128
    int64_t v17; // 0x404fb0
    if (*(char *)(v8 - 1) == 66) {
        int64_t v18 = v5 | 384; // 0x405140
        v12 = v14;
        v13 = v18;
        v17 = v18;
        if (*(char *)(v8 - 2) != 105) {
            goto lab_0x405094;
        } else {
            goto lab_0x405132;
        }
    } else {
        // 0x40512e
        v17 = v5 | 128;
        goto lab_0x405132;
    }
  lab_0x405132:
    // 0x405132
    v12 = v14;
    v13 = v17 & 0xffffffdf | 32;
    goto lab_0x405094;
}
// Address range: 0x405170 - 0x4051b8
int64_t function_405170(uint64_t a1, int64_t a2) {
    int64_t v1 = a2 + 20; // 0x405170
    *(char *)v1 = 0;
    int64_t result = v1; // 0x405182
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40518b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x4051b4
    return result;
}
// Address range: 0x4051c0 - 0x405259
int64_t function_4051c0(int64_t str) {
    // 0x4051c0
    if (str == 0) {
        // 0x405239
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g38);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4051ce
    int64_t result = (int64_t)found_char_pos; // 0x4051ce
    if (found_char_pos == NULL) {
        // 0x405229
        g44 = str;
        g37 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4051d8
    if (v1 - str < 7) {
        // 0x405229
        g44 = str;
        g37 = str;
        return result;
    }
    // 0x4051e8
    bool v2; // 0x4051c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4051c0
    int64_t v5 = result - 6; // 0x4051c0
    int64_t v6 = 7; // 0x4051f6
    unsigned char v7 = *(char *)v5; // 0x4051f6
    char v8 = *(char *)v4; // 0x4051f6
    char v9 = v8; // 0x4051f6
    bool v10 = false; // 0x4051f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x405200
    int64_t v13 = v1; // 0x405200
    int64_t v14 = 3; // 0x405200
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x405229
        g44 = str;
        g37 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x405212
    char v16 = *(char *)v12; // 0x405212
    char v17 = v16; // 0x405212
    bool v18 = false; // 0x405212
    while (v15 == v16) {
        // 0x405202
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
    int64_t v20 = v1; // 0x40521c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40521e
        v20 = result + 4;
        g35 = v20;
    }
    // 0x405229
    g44 = v20;
    g37 = v20;
    return result;
}
// Address range: 0x405260 - 0x405352
int64_t function_405260(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x405274
    int64_t result = (int64_t)v1; // 0x405274
    if (result != a1) {
        // 0x405281
        return result;
    }
    int64_t v2 = function_409c20(); // 0x405290
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x405346
    if (v3 == 85) {
        // 0x4052a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x405338
            result2 = (int32_t)a2 != 9 ? (int64_t)&g15 : (int64_t)&g10;
            return result2;
        }
        char v4 = *v1; // 0x4052ce
        int64_t result3 = v4 != 96 ? (int64_t)&g11 : (int64_t)&g14; // 0x4052db
        // 0x405281
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x405338
        result2 = (int32_t)a2 != 9 ? (int64_t)&g15 : (int64_t)&g10;
        return result2;
    }
    char v5 = *v1; // 0x40531d
    int64_t result4 = v5 != 96 ? (int64_t)&g12 : (int64_t)&g13; // 0x40532a
    // 0x405281
    return result4;
}
// Address range: 0x405360 - 0x4053b7
int64_t function_405360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x405360
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4053a8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4053b7 - 0x406581
int64_t function_4053b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x405401
    int64_t v3 = 0; // 0x405401
    int64_t v4; // 0x4053b7
    int64_t v5; // 0x4053b7
    int64_t v6; // 0x4053b7
    int64_t v7; // 0x4053b7
    int64_t v8; // 0x4053b7
    int64_t v9; // 0x4053b7
    int64_t v10; // 0x4053b7
    int64_t v11; // 0x4053b7
    int64_t v12; // 0x4053b7
    int64_t v13; // 0x4053b7
    int64_t v14; // 0x4053b7
    int64_t v15; // 0x4053b7
    int64_t v16; // 0x4053b7
    int64_t v17; // 0x4053b7
    int64_t v18; // 0x4053b7
    int64_t result; // 0x4053b7
    int64_t v19; // 0x4053b7
    int32_t wc; // bp+132, 0x4053b7
    int64_t ps; // bp+136, 0x4053b7
    char v20; // 0x405970
    int64_t v21; // 0x405970
    int64_t v22; // 0x405d18
    int64_t v23; // 0x4053b7
    int64_t v24; // 0x405d37
    int32_t v25; // 0x4053b7
    while (true) {
      lab_0x405408_2:
        // 0x405408
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4053b7
        int64_t v27; // 0x40543c
        while (true) {
          lab_0x405408:
            // 0x405408
            v5 = v26;
            bool v28 = v15 == v5; // 0x405413
            if (v15 == -1) {
                // 0x405415
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x405423
            if (v28) {
                // break (via goto) -> 0x405b88
                goto lab_0x405b88;
            }
            // 0x40542c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g58 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x405a1b
                    if (v25 % 2 == 0) {
                        goto lab_0x405561;
                    }
                    // 0x405e3d
                    v26 = v5 + 1;
                    goto lab_0x405408;
                }
                case 7: {
                    goto lab_0x405561;
                }
                case 8: {
                    goto lab_0x405561;
                }
                case 9: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x405561;
                }
                case 12: {
                    goto lab_0x405561;
                }
                case 13: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40552d;
                }
                case 36: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x405561;
                }
                case 38: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x405561;
                }
                case 44: {
                    goto lab_0x405561;
                }
                case 45: {
                    goto lab_0x405561;
                }
                case 46: {
                    goto lab_0x405561;
                }
                case 47: {
                    goto lab_0x405561;
                }
                case 48: {
                    goto lab_0x405561;
                }
                case 49: {
                    goto lab_0x405561;
                }
                case 50: {
                    goto lab_0x405561;
                }
                case 51: {
                    goto lab_0x405561;
                }
                case 52: {
                    goto lab_0x405561;
                }
                case 53: {
                    goto lab_0x405561;
                }
                case 54: {
                    goto lab_0x405561;
                }
                case 55: {
                    goto lab_0x405561;
                }
                case 56: {
                    goto lab_0x405561;
                }
                case 57: {
                    goto lab_0x405561;
                }
                case 58: {
                    goto lab_0x405561;
                }
                case 59: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x405561;
                }
                case 66: {
                    goto lab_0x405561;
                }
                case 67: {
                    goto lab_0x405561;
                }
                case 68: {
                    goto lab_0x405561;
                }
                case 69: {
                    goto lab_0x405561;
                }
                case 70: {
                    goto lab_0x405561;
                }
                case 71: {
                    goto lab_0x405561;
                }
                case 72: {
                    goto lab_0x405561;
                }
                case 73: {
                    goto lab_0x405561;
                }
                case 74: {
                    goto lab_0x405561;
                }
                case 75: {
                    goto lab_0x405561;
                }
                case 76: {
                    goto lab_0x405561;
                }
                case 77: {
                    goto lab_0x405561;
                }
                case 78: {
                    goto lab_0x405561;
                }
                case 79: {
                    goto lab_0x405561;
                }
                case 80: {
                    goto lab_0x405561;
                }
                case 81: {
                    goto lab_0x405561;
                }
                case 82: {
                    goto lab_0x405561;
                }
                case 83: {
                    goto lab_0x405561;
                }
                case 84: {
                    goto lab_0x405561;
                }
                case 85: {
                    goto lab_0x405561;
                }
                case 86: {
                    goto lab_0x405561;
                }
                case 87: {
                    goto lab_0x405561;
                }
                case 88: {
                    goto lab_0x405561;
                }
                case 89: {
                    goto lab_0x405561;
                }
                case 90: {
                    goto lab_0x405561;
                }
                case 91: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x405561;
                }
                case 94: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x405561;
                }
                case 96: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x405561;
                }
                case 98: {
                    goto lab_0x405561;
                }
                case 99: {
                    goto lab_0x405561;
                }
                case 100: {
                    goto lab_0x405561;
                }
                case 101: {
                    goto lab_0x405561;
                }
                case 102: {
                    goto lab_0x405561;
                }
                case 103: {
                    goto lab_0x405561;
                }
                case 104: {
                    goto lab_0x405561;
                }
                case 105: {
                    goto lab_0x405561;
                }
                case 106: {
                    goto lab_0x405561;
                }
                case 107: {
                    goto lab_0x405561;
                }
                case 108: {
                    goto lab_0x405561;
                }
                case 109: {
                    goto lab_0x405561;
                }
                case 110: {
                    goto lab_0x405561;
                }
                case 111: {
                    goto lab_0x405561;
                }
                case 112: {
                    goto lab_0x405561;
                }
                case 113: {
                    goto lab_0x405561;
                }
                case 114: {
                    goto lab_0x405561;
                }
                case 115: {
                    goto lab_0x405561;
                }
                case 116: {
                    goto lab_0x405561;
                }
                case 117: {
                    goto lab_0x405561;
                }
                case 118: {
                    goto lab_0x405561;
                }
                case 119: {
                    goto lab_0x405561;
                }
                case 120: {
                    goto lab_0x405561;
                }
                case 121: {
                    goto lab_0x405561;
                }
                case 122: {
                    goto lab_0x405561;
                }
                case 123: {
                    goto lab_0x405505;
                }
                case 124: {
                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x405505;
                }
                case 126: {
                    goto lab_0x40552d;
                }
                default: {
                    goto lab_0x405905;
                }
            }
        }
      lab_0x405905:
        if (v23 != 1) {
            // 0x405c70
            ps = 0;
            int64_t len = v15; // 0x405c80
            if (v15 == -1) {
                // 0x405c82
                len = strlen((char *)str);
            }
            // 0x405cae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x405d0f:
                // 0x405d0f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x405d14
                int64_t v30 = v29 + str;
                v24 = function_409a40(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40628a_2;
                    }
                    case -1: {
                        goto lab_0x40628a_2;
                    }
                    case -2: {
                        // 0x40636d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4063a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4063aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4063b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4063b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40628a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40628a_2;
                    }
                    case 1: {
                        goto lab_0x405ce0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x405d8c
                        char v34 = *(char *)v33; // 0x405d9d
                        unsigned char v35; // 0x4053b7
                        if (v34 < 125) {
                            // 0x405da8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x405dbf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_405360(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x405d90
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x405d9d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x405da8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x405dbf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_405360(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x405d90
                            v33++;
                        }
                        goto lab_0x405ce0;
                    }
                }
            }
            goto lab_0x40628a_2;
        } else {
            // 0x405954
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x405561;
        }
    }
  lab_0x405b88:
    // 0x405b88
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40648a
        if (v8 > result) {
            // 0x406493
            *(char *)(v12 + result) = 0;
        }
        // 0x4057b7
        return result;
    }
    return function_405360(v10, v6, str, v4, 2, v25 & -3);
  lab_0x405561:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x405570
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40577a_2;
        }
    }
    int64_t v39 = result; // 0x405671
    char v40 = v20; // 0x405671
    int64_t v41 = v38; // 0x405671
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x405671
    int64_t v43 = v36; // 0x405671
    goto lab_0x4055ed;
  lab_0x40577a_2:
    // 0x4057b7
    return function_405360(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40628a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x405561;
    } else {
        uint64_t v49 = v46 + v5; // 0x405e5e
        int64_t v50 = v5 + 1; // 0x405f41
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x405f48
        char v52 = v20; // 0x405f48
        int64_t v53 = result; // 0x405f48
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x405f11
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x405f15
            int64_t v56 = v54 + 1; // 0x405f1a
            int64_t v57 = v51 + 1; // 0x405f41
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x405f0c
                v54 = v56;
                if (v47 > v54) {
                    // 0x405f11
                    *(char *)(v54 + v48) = v55;
                }
                // 0x405f15
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
        goto lab_0x4055ed;
    }
  lab_0x405ce0:
    // 0x405ce0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x405cff
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405d02
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40628a
        goto lab_0x40628a_2;
    }
    goto lab_0x405d0f;
  lab_0x40552d:
    // 0x40552d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40577a_2;
    }
    goto lab_0x405561;
  lab_0x405505:;
    bool v60 = v15 == 1; // 0x405510
    if (v15 == -1) {
        // 0x405512
        v60 = *(char *)v1 == 0;
    }
    // 0x40551e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x405561;
    } else {
        goto lab_0x40552d;
    }
  lab_0x4055ed:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4055f2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4055f6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x405408_2;
}
// Address range: 0x406590 - 0x40672e
int64_t function_406590(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x406592
    int32_t * v3 = __errno_location(); // 0x4065ac
    int64_t v4 = (int64_t)g28; // 0x4065b1
    int32_t v5 = *v3; // 0x4065bb
    int64_t v6 = v4; // 0x4065d1
    if (v2 >= (int64_t)*(int32_t *)&g31) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x406729
            function_408490(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4065e0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4065e7
        int64_t v9; // 0x406590
        if (g28 == &g29) {
            int64_t v10 = function_4082a0(0, v8); // 0x40670a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g29); // 0x40670f
            *(int64_t *)&g28 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4082a0(v4, v8); // 0x4065fb
            *(int64_t *)&g28 = v12;
            v9 = v12;
        }
        // 0x40660a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g31; // 0x40660a
        int32_t v14 = v7; // 0x406611
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g31 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x406641
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40664b
    int64_t * v17 = (int64_t *)v15; // 0x40664e
    uint64_t v18 = *v17; // 0x40664e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x406651
    int64_t result = *v19; // 0x406651
    int64_t v20; // 0x406590
    uint64_t v21 = function_405360(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x406674
    if (v18 > v21) {
        // 0x4066eb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x406687
    *v17 = v22;
    if (result != (int64_t)&g45) {
        // 0x406697
        free((int64_t *)result);
    }
    int64_t result2 = function_408240(v22); // 0x4066b1
    *v19 = result2;
    int64_t v23; // 0x406590
    function_405360(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4066eb
    *v3 = v5;
    return result2;
}
// Address range: 0x406730 - 0x406764
int64_t function_406730(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x406737
    int64_t result = function_408440(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x406756
    return result;
}
// Address range: 0x406770 - 0x40677f
int64_t function_406770(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x40677c
    return result;
}
// Address range: 0x406780 - 0x40678f
int64_t function_406780(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x406788
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x406790 - 0x4067c3
int64_t function_406790(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x4067a9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4067ae
    uint32_t v3 = *v2; // 0x4067ae
    uint32_t v4 = (int32_t)a2 % 32; // 0x4067b2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4067d0 - 0x4067e3
int64_t function_4067d0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x4067dc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4067f0 - 0x40681b
int64_t function_4067f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x4067f8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x406815
        abort();
        // UNREACHABLE
    }
    // 0x40680c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x406820 - 0x406892
int64_t function_406820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x406842
    int32_t * v2 = __errno_location(); // 0x40684b
    uint32_t v3 = *(int32_t *)v1; // 0x40686b
    int64_t result = function_405360(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40687a
    return result;
}
// Address range: 0x4068a0 - 0x406981
int64_t function_4068a0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x4068c2
    int32_t * v2 = __errno_location(); // 0x4068c8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4068e7
    int32_t * v4 = (int32_t *)v1; // 0x4068ea
    int64_t v5 = function_405360(0, 0, a1, a2, (int64_t)*v4, v3); // 0x406905
    int64_t v6 = v5 + 1; // 0x40690a
    int64_t result = function_408240(v6); // 0x40691f
    function_405360(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x406964
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40696d
    return result;
}
// Address range: 0x406990 - 0x40699a
int64_t function_406990(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406990
    return function_4068a0(a1, a2, 0, a3);
}
// Address range: 0x4069a0 - 0x406a35
int64_t function_4069a0(void) {
    uint32_t v1 = *(int32_t *)&g31; // 0x4069a0
    int64_t v2 = v1; // 0x4069a0
    int64_t v3 = v2; // 0x4069b4
    if (v1 >= 2) {
        int64_t v4 = &g31;
        int64_t v5 = v4 + 16; // 0x4069d3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g59;
        while (v5 != (int64_t)g28 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4069d0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g59;
        }
    }
    int64_t v6 = v3; // 0x4069ed
    if (g29 != 0x60f3c0) {
        // 0x4069ef
        free((int64_t *)g29);
        g29 = 256;
        *(int64_t *)&g30 = (int64_t)&g45;
        v6 = &g59;
    }
    int64_t result = v6; // 0x406a11
    if (g28 != &g29) {
        // 0x406a13
        free(g28);
        *(int64_t *)&g28 = (int64_t)&g29;
        result = &g59;
    }
    // 0x406a26
    *(int32_t *)&g31 = 1;
    return result;
}
// Address range: 0x406a40 - 0x406a51
int64_t function_406a40(void) {
    // 0x406a40
    int64_t v1; // 0x406a40
    return function_406590(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x406a60 - 0x406a6a
int64_t function_406a60(void) {
    // 0x406a60
    int64_t v1; // 0x406a60
    return function_406590(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x406a70 - 0x406a86
int64_t function_406a70(int64_t a1) {
    // 0x406a70
    return function_406590(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x406a90 - 0x406aa2
int64_t function_406a90(int64_t a1, int64_t a2) {
    // 0x406a90
    return function_406590(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x406ab0 - 0x406b18
int64_t function_406ab0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406ac0
    return function_406590((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406b20 - 0x406b84
int64_t function_406b20(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406b30
    return function_406590((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x406b90 - 0x406b9c
int64_t function_406b90(int64_t a1, int64_t a2) {
    // 0x406b90
    return function_406ab0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x406ba0 - 0x406baf
int64_t function_406ba0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406ba0
    return function_406b20(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x406bb0 - 0x406c20
int64_t function_406bb0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x406bbd
    int128_t v2 = __asm_movdqa(g47); // 0x406bc5
    int128_t v3 = __asm_movdqa(g48); // 0x406bcd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x406be2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x406bf8
    uint32_t v6 = *v5; // 0x406bf8
    uint32_t v7 = (int32_t)a3 % 32; // 0x406bfd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_406590(0, a1, a2, &v4);
}
// Address range: 0x406c20 - 0x406c2d
int64_t function_406c20(int64_t a1, int64_t a2) {
    // 0x406c20
    return function_406bb0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x406c30 - 0x406c41
int64_t function_406c30(int64_t a1) {
    // 0x406c30
    return function_406bb0(a1, -1, 58);
}
// Address range: 0x406c50 - 0x406c5a
int64_t function_406c50(void) {
    // 0x406c50
    int64_t v1; // 0x406c50
    return function_406bb0(v1, v1, 58);
}
// Address range: 0x406c60 - 0x406cce
int64_t function_406c60(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406c7a
    return function_406590((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406cd0 - 0x406d3c
int64_t function_406cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x406cd7
    int128_t v2 = __asm_movdqa(g47); // 0x406cdf
    int128_t v3 = __asm_movdqa(g48); // 0x406ce7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x406d09
    if (a2 == 0 || a3 == 0) {
        // 0x406d37
        abort();
        // UNREACHABLE
    }
    // 0x406d1a
    return function_406590(a1, a4, a5, &v4);
}
// Address range: 0x406d40 - 0x406d49
int64_t function_406d40(void) {
    // 0x406d40
    int64_t v1; // 0x406d40
    return function_406cd0(v1, v1, v1, v1, -1);
}
// Address range: 0x406d50 - 0x406d67
int64_t function_406d50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406d50
    return function_406cd0(0, a1, a2, a3, -1);
}
// Address range: 0x406d70 - 0x406d83
int64_t function_406d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x406d70
    return function_406cd0(0, a1, a2, a3, a4);
}
// Address range: 0x406d90 - 0x406d9a
int64_t function_406d90(void) {
    // 0x406d90
    int64_t v1; // 0x406d90
    return function_406590(v1, v1, v1, &g27);
}
// Address range: 0x406da0 - 0x406db2
int64_t function_406da0(int64_t a1, int64_t a2) {
    // 0x406da0
    return function_406590(0, a1, a2, &g27);
}
// Address range: 0x406dc0 - 0x406dd1
int64_t function_406dc0(int64_t a1, int64_t a2) {
    // 0x406dc0
    return function_406590(a1, a2, -1, &g27);
}
// Address range: 0x406de0 - 0x406df6
int64_t function_406de0(int64_t a1) {
    // 0x406de0
    return function_406590(0, a1, -1, &g27);
}
// Address range: 0x406e00 - 0x406e23
int64_t function_406e00(int64_t a1) {
    int64_t result = function_408240(24); // 0x406e09
    *(int64_t *)result = a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}
// Address range: 0x406e30 - 0x406e5f
int64_t function_406e30(void) {
    // 0x406e30
    int64_t v1; // 0x406e30
    int64_t v2 = function_407050(v1, v1, v1); // 0x406e31
    int64_t result = 0; // 0x406e3e
    if (v2 != 0) {
        // 0x406e40
        result = function_408240(24);
        *(int64_t *)result = v2;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x406e5d
    return result;
}
// Address range: 0x406e60 - 0x406e64
int64_t function_406e60(int64_t result) {
    // 0x406e60
    return result;
}
// Address range: 0x406e70 - 0x406f65
int64_t function_406e70(int64_t a1, uint64_t a2) {
    uint64_t v1 = a2 + 1; // 0x406e77
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x406e8b
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x406e8f
    int64_t v4; // bp-64, 0x406e70
    int64_t v5 = &v4;
    int64_t v6 = *v3; // 0x406e93
    int64_t result = *v2; // 0x406e93
    int64_t v7; // 0x406e70
    while (true) {
        int64_t v8 = result;
        int64_t v9 = v6;
        int64_t v10 = v9; // 0x406ed0
        int64_t v11; // 0x406e70
        int64_t v12; // 0x406e70
        if (v9 >= a2) {
            // 0x406e98
            v12 = v9;
            v11 = v8;
            v7 = v8;
            if (v9 == a2) {
                // break -> 0x406f2f
                break;
            }
        } else {
            int64_t v13 = 1; // 0x406ee4
            int64_t v14 = 256 * v10 | 255; // 0x406ee8
            v10 = v14;
            int64_t v15 = v13; // 0x406ef1
            while (v14 < a2) {
                // 0x406ee0
                v13 = v15 + 1;
                v14 = 256 * v10 | 255;
                v10 = v14;
                v15 = v13;
            }
            // 0x406ef3
            function_407360(a1, v5, v13);
            int64_t v16 = v5; // 0x406f05
            int64_t v17 = 256 * v9 | 255; // 0x406f17
            int64_t v18 = 256 * v8 | (int64_t)*(char *)v16; // 0x406f1e
            v16++;
            int64_t v19 = v17; // 0x406f24
            int64_t v20 = v18; // 0x406f24
            while (v17 < a2) {
                // 0x406f08
                v17 = 256 * v19 | 255;
                v18 = 256 * v20 | (int64_t)*(char *)v16;
                v16++;
                v19 = v17;
                v20 = v18;
            }
            // 0x406f26
            v12 = v17;
            v11 = v18;
            v7 = v18;
            if (v17 == a2) {
                // break -> 0x406f2f
                break;
            }
        }
        uint64_t v21 = v11;
        uint64_t v22 = v12 - a2; // 0x406ea6
        uint64_t v23 = v22 % v1;
        result = v21 % v1;
        v6 = v23 - 1;
        if (v21 <= v12 - v23) {
            // 0x406f58
            *v2 = v21 / v1;
            *v3 = v22 / v1;
            return result;
        }
    }
    // 0x406f2f
    *v3 = 0;
    *v2 = 0;
    result = v7;
  lab_0x406f3f:
    // 0x406f3f
    return result;
}
// Address range: 0x406f70 - 0x406f8e
int64_t function_406f70(int64_t a1) {
    // 0x406f70
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return &g59;
}
// Address range: 0x406f90 - 0x406fe1
int64_t function_406f90(int64_t a1) {
    int64_t v1 = function_4074c0(a1); // 0x406fa0
    int32_t * v2 = __errno_location(); // 0x406fa8
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return v1 & 0xffffffff;
}
// Address range: 0x406ff0 - 0x40704d
int64_t function_406ff0(int64_t a1) {
    // 0x406ff0
    function_406de0(a1);
    int32_t * err_num = __errno_location(); // 0x407007
    char * format; // 0x406ff0
    if (*err_num == 0) {
        // 0x40703f
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x407019
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x407025
    error(g26, *err_num, format);
    return &g59;
}
// Address range: 0x407050 - 0x40733f
int64_t function_407050(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_408240(0x1038); // 0x40716d
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x406ff0;
        *(int64_t *)(result + 16) = 0;
        // 0x4070c2
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_409b20(a1, "rb"); // 0x407077
        int64_t result2 = 0; // 0x407082
        if (stream != 0) {
            // 0x407088
            result2 = function_408240(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x4070a4
            *(int64_t *)(result2 + 8) = 0x406ff0;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x4070c2
        return result2;
    }
    int64_t result3 = function_408240(0x1038); // 0x4070dd
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x4070f3
    *(int64_t *)(result3 + 8) = 0x406ff0;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x407111
    int64_t v2; // 0x407050
    int128_t pid2; // bp-72, 0x407050
    if (fd < 0) {
        // 0x407198
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x4071b7
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x40713b
        close(fd);
        if (v3 >= 2048) {
            // 0x407158
            function_4077c0(v1);
            // 0x4070c2
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x4072c6
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x4072d2
        uint64_t v7 = v6 + v4; // 0x4072d8
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x407158
            function_4077c0(v1);
            // 0x4070c2
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x407301
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x40730d
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x407325
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x407158
            function_4077c0(v1);
            // 0x4070c2
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x4071cd
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x4071d4
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x4071f0
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x4071ee
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x4071ff
    if (v16 >= 2048) {
        // 0x407158
        function_4077c0(v1);
        // 0x4070c2
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x40721a
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x407221
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x40723f
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x40723d
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x40724e
    if (v21 >= 2048) {
        // 0x407158
        function_4077c0(v1);
        // 0x4070c2
        return result3;
    }
    // 0x40725e
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x407276
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x40727d
    if (v23 == 0) {
        // 0x407158
        function_4077c0(v1);
        // 0x4070c2
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x40728f
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x40728d
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x407158
    function_4077c0(v1);
    // 0x4070c2
    return result3;
}
// Address range: 0x407340 - 0x407345
int64_t function_407340(int64_t a1, int64_t a2) {
    // 0x407340
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x407340
    return result;
}
// Address range: 0x407350 - 0x407355
int64_t function_407350(int64_t a1, int64_t a2) {
    // 0x407350
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x407350
    return result;
}
// Address range: 0x407360 - 0x4074bc
int64_t function_407360(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 != 0) {
        int32_t * v1 = __errno_location(); // 0x40737f
        int64_t result = fread_unlocked((int64_t *)a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x4073ba
        int64_t v2 = a3 - result; // 0x4073c5
        if (v2 == 0) {
            // 0x4073ca
            return result;
        }
        int64_t v3 = v2; // 0x4073c5
        int64_t v4 = result + a2; // 0x4073c2
        int64_t v5 = *(int64_t *)(a1 + 16); // 0x407394
        *v1 = (a2 & 32) == 0 ? 0 : *v1;
        int64_t result2 = fread_unlocked((int64_t *)v4, 1, (int32_t)v3, (struct _IO_FILE *)v5); // 0x4073ba
        v3 -= result2;
        while (v3 != 0) {
            int64_t v6 = v4;
            v4 = result2 + v6;
            v5 = *(int64_t *)(a1 + 16);
            *v1 = (v6 & 32) == 0 ? 0 : *v1;
            result2 = fread_unlocked((int64_t *)v4, 1, (int32_t)v3, (struct _IO_FILE *)v5);
            v3 -= result2;
        }
        // 0x4073ca
        return result2;
    }
    int64_t v7 = *(int64_t *)24; // 0x4073e0
    int64_t v8 = a3; // 0x4073f2
    int64_t * v9; // 0x407360
    int64_t v10; // 0x407360
    int64_t v11; // 0x407360
    int64_t v12; // 0x407360
    if (v7 < a3) {
        int64_t v13 = v7;
        int64_t v14 = v13 + a2; // 0x407403
        v8 -= v13;
        memcpy((int64_t *)a2, (int64_t *)(0x1038 - v13), (int32_t)v13);
        while (v14 % 8 != 0) {
            // 0x40741a
            function_407510(32, 2104);
            v12 = v8;
            v11 = v14;
            v9 = (int64_t *)2104;
            v10 = 2048;
            if (v8 < 2049) {
                goto lab_0x407475;
            }
            v13 = 2048;
            int64_t v15 = v14;
            v14 = v13 + v15;
            v8 -= v13;
            memcpy((int64_t *)v15, (int64_t *)(0x1038 - v13), (int32_t)v13);
        }
        int64_t v16 = v14;
        int64_t v17 = v8;
        while (v17 >= 2048) {
            int64_t result3 = function_407510(32, v16); // 0x40744d
            int64_t v18 = v17 - 2048; // 0x407452
            if (v18 == 0) {
                // 0x407498
                *(int64_t *)24 = 0;
                return result3;
            }
            v16 += 2048;
            v17 = v18;
        }
        // 0x407464
        function_407510(32, 2104);
        v12 = v17;
        v11 = v16;
        v9 = (int64_t *)2104;
        v10 = 2048;
    } else {
        // 0x4074b0
        v12 = a3;
        v11 = a2;
        v9 = (int64_t *)(0x1038 - v7);
        v10 = v7;
    }
  lab_0x407475:;
    int64_t * dest_mem = memcpy((int64_t *)v11, v9, (int32_t)v12); // 0x40747e
    *(int64_t *)24 = v10 - v12;
    // 0x4073ca
    return (int64_t)dest_mem;
}
// Address range: 0x4074c0 - 0x407509
int64_t function_4074c0(int64_t a1) {
    // 0x4074c0
    __explicit_bzero_chk(a1, 0x1038, -1);
    free((int64_t *)a1);
    return a1 == 0 ? 0 : (int64_t)&g59;
}
// Address range: 0x407510 - 0x4077b5
int64_t function_407510(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x407510
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x407517
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x407526
    int64_t v4 = *v1 + 1; // 0x407530
    *v1 = v4;
    int64_t v5 = a2; // 0x407541
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x407552
    int64_t v9 = *v8; // 0x407552
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x407558
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x407573
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x407592
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x407598
    int64_t v14 = *v13; // 0x407598
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x40759c
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x4075c0
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x4075d5
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x4075dc
    int64_t v19 = *v18; // 0x4075dc
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x4075e0
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x4075fb
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x40760d
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x407618
    int64_t v24 = *v23; // 0x407618
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x407629
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x407640
    int64_t v27 = v7 + 32; // 0x407643
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x40765d
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x407548
        v6 = v25;
        v7 = v27;
        v8 = (int64_t *)v7;
        v9 = *v8;
        v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6);
        v11 = v10 + v28 + *(int64_t *)((v9 & 2040) + a1);
        *v8 = v11;
        v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9;
        *(int64_t *)v5 = v12;
        v13 = (int64_t *)(v7 + 8);
        v14 = *v13;
        v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10);
        v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1);
        *v13 = v16;
        v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14;
        *(int64_t *)(v5 + 8) = v17;
        v18 = (int64_t *)(v7 + 16);
        v19 = *v18;
        v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15);
        v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1);
        *v18 = v21;
        v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19;
        *(int64_t *)(v5 + 16) = v22;
        v23 = (int64_t *)(v7 + 24);
        v24 = *v23;
        v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20);
        v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1);
        v27 = v7 + 32;
        *v23 = v26;
        v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24;
        *(int64_t *)(v5 + 24) = v28;
        v5 += 32;
    }
    int64_t v29 = a2 + 1024; // 0x40767b
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x40768a
    int64_t v33 = *v32; // 0x40768a
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x407690
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x4076b5
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x4076c6
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x4076cd
    int64_t v38 = *v37; // 0x4076cd
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x4076d4
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x4076f8
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x40770d
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x407714
    int64_t v43 = *v42; // 0x407714
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x407718
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x407733
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x407745
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x407750
    int64_t v48 = *v47; // 0x407750
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x407761
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x407778
    int64_t result = v31 + 32; // 0x40777b
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x407795
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x407680
        v30 = v49;
        v31 = result;
        v32 = (int64_t *)v31;
        v33 = *v32;
        v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30);
        v35 = v34 + v51 + *(int64_t *)((v33 & 2040) + a1);
        *v32 = v35;
        v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33;
        *(int64_t *)v29 = v36;
        v37 = (int64_t *)(v31 + 8);
        v38 = *v37;
        v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34);
        v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1);
        *v37 = v40;
        v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38;
        *(int64_t *)(v29 + 8) = v41;
        v42 = (int64_t *)(v31 + 16);
        v43 = *v42;
        v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39);
        v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1);
        *v42 = v45;
        v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43;
        *(int64_t *)(v29 + 16) = v46;
        v47 = (int64_t *)(v31 + 24);
        v48 = *v47;
        v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44);
        v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1);
        result = v31 + 32;
        *v47 = v50;
        v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48;
        *(int64_t *)(v29 + 24) = v51;
        v29 += 32;
    }
    // 0x4077a5
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x4077c0 - 0x4079f4
int64_t function_4077c0(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x407807
    int64_t v2 = a1; // 0x407823
    int64_t * v3 = (int64_t *)v2; // 0x407828
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x40782b
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x40782b
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x40782f
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x40782f
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x407833
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x40783a
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x40783e
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x40784b
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x40784e
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x407855
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x407862
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x407865
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x40786c
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x407879
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x40787c
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x407883
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x407890
    int64_t v21 = v5 - v20; // 0x407896
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x4078a0
    uint64_t v23 = v11 - v22; // 0x4078a9
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x4078b4
    int64_t v25 = v14 - v24; // 0x4078be
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x4078cd
    int64_t v27 = v23 + v25; // 0x4078d3
    int64_t v28 = v17 - v26; // 0x4078d6
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x4078e1
    int64_t v30 = v28 + v25; // 0x4078e4
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x4078fa
    while (v1 != v2) {
        // 0x407828
        v3 = (int64_t *)v2;
        v4 = (int64_t *)(v2 + 32);
        v5 = *v4 + v29;
        v6 = (int64_t *)(v2 + 56);
        v7 = *v6 + v28;
        v8 = (int64_t *)(v2 + 40);
        v9 = (int64_t *)(v2 + 48);
        v10 = *v3 - v5 + v20;
        v11 = *v8 + v27 ^ v7 / 512;
        v12 = (int64_t *)(v2 + 8);
        v13 = *v12 - v11 + v22;
        v14 = *v9 + v30 ^ 512 * v10;
        v15 = (int64_t *)(v2 + 16);
        v16 = *v15 - v14 + v24;
        v17 = v13 / 0x800000 ^ v10 + v7;
        v18 = (int64_t *)(v2 + 24);
        v19 = *v18 - v17 + v26;
        v20 = 0x8000 * v16 ^ v13 + v10;
        v21 = v5 - v20;
        *v3 = v20;
        v22 = v19 / 0x4000 ^ v16 + v13;
        v23 = v11 - v22;
        *v12 = v22;
        v24 = v19 + v16 ^ 0x100000 * v21;
        v25 = v14 - v24;
        *v15 = v24;
        v2 += 64;
        v26 = v23 / 0x20000 ^ v19 + v21;
        v27 = v23 + v25;
        v28 = v17 - v26;
        *v18 = v26;
        v29 = 0x4000 * v25 ^ v23 + v21;
        v30 = v28 + v25;
        *v8 = v27;
        *v4 = v29;
        *v9 = v30;
        *v6 = v28;
        v31 = a1;
    }
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x407900
    uint64_t v33 = *v32 + v28; // 0x407900
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x407904
    int64_t v35 = *v34 + v29; // 0x407904
    int64_t * v36 = (int64_t *)v31; // 0x407908
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x40790e
    int64_t v38 = *v36 + v20 - v35; // 0x407912
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x407919
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x40791d
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x407921
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x407927
    uint64_t v43 = *v39 + v22 - v41; // 0x40792e
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x407935
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x407939
    int64_t v46 = *v42 + v24 - v45; // 0x407942
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x407949
    uint64_t v48 = *v44 + v26 - v47; // 0x407952
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x407959
    int64_t v50 = v35 - v49; // 0x407962
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x40796c
    uint64_t v52 = v41 - v51; // 0x407975
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x407980
    int64_t result = v52 + v50; // 0x407983
    int64_t v54 = v45 - v53; // 0x40798a
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x407995
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x407999
    int64_t v57 = v54 + v52; // 0x40799f
    int64_t v58 = v47 - v56; // 0x4079a2
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x4079ad
    int64_t v60 = v58 + v54; // 0x4079b0
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x407900
        v32 = (int64_t *)(v31 + 56);
        v33 = *v32 + v58;
        v34 = (int64_t *)(v31 + 32);
        v35 = *v34 + v59;
        v36 = (int64_t *)v31;
        v37 = (int64_t *)(v31 + 40);
        v38 = *v36 + v49 - v35;
        v39 = (int64_t *)(v31 + 8);
        v40 = (int64_t *)(v31 + 48);
        v41 = *v37 + v57 ^ v33 / 512;
        v42 = (int64_t *)(v31 + 16);
        v43 = *v39 + v51 - v41;
        v44 = (int64_t *)(v31 + 24);
        v45 = *v40 + v60 ^ 512 * v38;
        v46 = *v42 + v53 - v45;
        v47 = v43 / 0x800000 ^ v38 + v33;
        v48 = *v44 + v56 - v47;
        v49 = 0x8000 * v46 ^ v43 + v38;
        v50 = v35 - v49;
        *v36 = v49;
        v51 = v48 / 0x4000 ^ v46 + v43;
        v52 = v41 - v51;
        *v39 = v51;
        v53 = 0x100000 * v50 ^ v48 + v46;
        result = v52 + v50;
        v54 = v45 - v53;
        *v42 = v53;
        v55 = v31 + 64;
        v56 = v52 / 0x20000 ^ v50 + v48;
        v57 = v54 + v52;
        v58 = v47 - v56;
        *v44 = v56;
        v59 = 0x4000 * v54 ^ result;
        v60 = v58 + v54;
        *v37 = v57;
        *v34 = v59;
        *v40 = v60;
        *v32 = v58;
        v31 = v55;
    }
    // 0x4079cc
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x407a00 - 0x407c42
int64_t function_407a00(int64_t fd, int64_t a2, int64_t fd2, int64_t a4, int64_t a5) {
    int32_t result = syscall(SYS_vmsplice); // 0x407a34
    if (result >= 0) {
        // 0x407a7b
        return result;
    }
    int32_t * v1 = __errno_location(); // 0x407a43
    int32_t v2 = *v1; // 0x407a4f
    if (v2 != 95 && (v2 - 22 & -17) != 0) {
        // 0x407a7b
        return result;
    }
    int64_t v3 = (int64_t)v1; // 0x407a43
    char * str2; // 0x407a00
    char v4; // 0x407a00
    int64_t v5; // 0x407a00
    int64_t v6; // bp-200, 0x407a00
    if ((int32_t)a5 == 0) {
        // 0x407a66
        str2 = (char *)a4;
        v5 = v3;
        v4 = !((v2 == 95 | (v2 - 22 & -17) == 0));
    } else {
        if ((a5 & 0xfffffffe) != 0) {
            // 0x407a6f
            *v1 = 95;
            // 0x407a7b
            return -1;
        }
        char * v7 = (char *)a4;
        int32_t v8 = __fxstatat(1, (int32_t)fd2, v7, (struct stat *)&v6, 256); // 0x407aae
        int64_t v9 = 0x100000000 * v3 >> 32; // 0x407ab3
        int32_t * v10 = (int32_t *)v9;
        if (v8 == 0) {
            // 0x407c10
            *v10 = 17;
            // 0x407a7b
            return -1;
        }
        int32_t v11 = *v10; // 0x407ac0
        if (v11 == 75) {
            // 0x407c10
            *v10 = 17;
            // 0x407a7b
            return -1;
        }
        // 0x407acc
        str2 = v7;
        v5 = v9;
        v4 = 1;
        if (v11 != 2) {
            // 0x407a7b
            return -1;
        }
    }
    char * str = (char *)a2; // 0x407ae8
    int32_t len = strlen(str); // 0x407ae8
    int32_t len2 = strlen(str2); // 0x407af3
    if (len == 0 || len2 == 0) {
        // 0x407a7b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x407b0f
    if (*(char *)(a2 - 1 + (int64_t)len) != 47) {
        // 0x407b16
        if (*(char *)(a4 - 1 + (int64_t)len2) != 47) {
            // 0x407a7b
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
    }
    // 0x407b22
    int64_t v12; // bp-344, 0x407a00
    if (__fxstatat(1, (int32_t)fd, str, (struct stat *)&v12, 256) != 0) {
        // 0x407a7b
        return -1;
    }
    int64_t v13 = 0x100000000 * v5 >> 32; // 0x407b49
    int32_t v14; // 0x407a00
    if (v4 != 0) {
        if ((v14 & 0xf000) == 0x4000) {
            // 0x407a7b
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
        // 0x407b64
        *(int32_t *)v13 = 2;
        // 0x407a7b
        return -1;
    }
    // 0x407bb0
    if (__fxstatat(1, (int32_t)fd2, str2, (struct stat *)&v6, 256) != 0) {
        // 0x407bdc
        if (*(int32_t *)v13 != 2 || (v14 & 0xf000) != 0x4000) {
            // 0x407a7b
            return -1;
        }
        // 0x407a7b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    if ((v14 & 0xf000) != 0x4000) {
        // 0x407b8f
        *(int32_t *)v13 = 20;
        // 0x407a7b
        return -1;
    }
    if ((v14 & 0xf000) == 0x4000) {
        // 0x407a7b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x407c31
    *(int32_t *)v13 = 21;
    // 0x407a7b
    return -1;
}
// Address range: 0x407c50 - 0x407c9e
int64_t function_407c50(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x407c5c
    if (fd >= 3) {
        // 0x407c61
        return a1 & 0xffffffff;
    }
    // 0x407c70
    int64_t v1; // 0x407c50
    int64_t v2 = function_40a190(a1, v1); // 0x407c70
    int32_t * v3 = __errno_location(); // 0x407c78
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x407ca0 - 0x40807d
int64_t function_407ca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x407d38
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x407cbc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x407cd6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x407d1b
    if (a6 < 10) {
        // 0x407d2a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x407e22
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x408080 - 0x4080a0
int64_t function_408080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408080
    if (a5 == 0) {
        // 0x40809b
        return function_407ca0(a1, a2, a3, a4, a5, 0, (int64_t)&g59);
    }
    int64_t v1 = 0; // 0x408087
    v1++;
    int64_t v2 = v1; // 0x408099
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x408090
        v1++;
        v2 = v1;
    }
    // 0x40809b
    return function_407ca0(a1, a2, a3, a4, a5, v2, (int64_t)&g59);
}
// Address range: 0x4080a0 - 0x408100
int64_t function_4080a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4080a0
    int64_t v3 = &v2; // 0x4080a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4080d3
    int64_t v6; // 0x4080bd
    int64_t * v7; // 0x4080db
    int64_t v8; // 0x4080db
    int64_t v9; // 0x4080e7
    if (v5 < 48) {
        // 0x4080b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4080f3
            break;
        }
    } else {
        // 0x4080db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4080f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4080d1
    while (v4 != 9) {
        // 0x4080c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4080b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4080f3
                break;
            }
        } else {
            // 0x4080db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4080f3
                break;
            }
        }
        // 0x4080c9
        v10 = 10;
    }
    // 0x4080f3
    return function_407ca0(a1, a2, a3, a4, v3, v10, (int64_t)&g59);
}
// Address range: 0x408100 - 0x4081bc
int64_t function_408100(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x408100
    int64_t v1; // bp-168, 0x408100
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x408100
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x408100
    int64_t v8; // 0x408100
    int64_t v9; // bp-56, 0x408100
    int64_t v10; // 0x408165
    int64_t v11; // 0x408189
    if ((int32_t)v6 < 48) {
        // 0x408150
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4081a0
            break;
        }
    } else {
        // 0x408182
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4081a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40817a
    int64_t v13 = 10; // 0x40817a
    while (v5 != 9) {
        // 0x40817c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x408150
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4081a0
                break;
            }
        } else {
            // 0x408182
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4081a0
                break;
            }
        }
        // 0x408172
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4081a0
    int64_t v14; // bp-136, 0x408100
    int64_t result = function_407ca0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g59); // 0x4081af
    return result;
}
// Address range: 0x4081c0 - 0x408234
int64_t function_4081c0(int64_t a1) {
    // 0x4081c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x408223
    return fputs_unlocked(v1, g36);
}
// Address range: 0x408240 - 0x40825a
int64_t function_408240(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x408244
    if (size != 0 != (mem == NULL)) {
        // 0x408253
        return (int64_t)mem;
    }
    // 0x408255
    function_408490(size);
    // UNREACHABLE
}
// Address range: 0x408260 - 0x408281
int64_t function_408260(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x408263
    int64_t v2 = v1; // 0x408263
    if (v2 < 0) {
        // 0x40827b
        function_408490(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408279
        return function_408240(v2);
    }
    // 0x40827b
    function_408490(v2);
    // UNREACHABLE
}
// Address range: 0x408290 - 0x408292
int64_t function_408290(void) {
    // 0x408290
    int64_t v1; // 0x408290
    return function_408240(v1);
}
// Address range: 0x4082a0 - 0x4082d6
int64_t function_4082a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4082c8
        free(v1);
        return (int32_t)&g59 ^ (int32_t)&g59;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4082b1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4082c0
        return (int64_t)mem;
    }
    // 0x4082d1
    function_408490(a1);
    // UNREACHABLE
}
// Address range: 0x4082e0 - 0x408301
int64_t function_4082e0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4082e3
    int64_t v2 = v1; // 0x4082e3
    if (v2 < 0) {
        // 0x4082fb
        function_408490(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4082f9
        return function_4082a0(a1, v2);
    }
    // 0x4082fb
    function_408490(a1);
    // UNREACHABLE
}
// Address range: 0x408310 - 0x408396
int64_t function_408310(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40836b
            function_408490(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4082a0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x408353
    if (a2 == 0) {
        // 0x408378
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x408358
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40836b
        function_408490(a1);
        // UNREACHABLE
    }
    // 0x40833a
    *(int64_t *)a2 = v2;
    return function_4082a0(a1, v2 * a3);
}
// Address range: 0x4083a0 - 0x4083f0
int64_t function_4083a0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4083a0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4083ea
            function_408490(a1);
            // UNREACHABLE
        }
        // 0x4083c2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4082a0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4083d5
        *(int64_t *)a2 = 128;
        return function_4082a0(0, 128);
    }
    // 0x4083e8
    if (a2 < 0) {
        // 0x4083ea
        function_408490(a1);
        // UNREACHABLE
    }
    // 0x4083c2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4082a0(a1, v1);
}
// Address range: 0x4083f0 - 0x408407
int64_t function_4083f0(int64_t a1, int64_t a2) {
    // 0x4083f0
    return (int64_t)memset((int64_t *)function_408240(a1), 0, (int32_t)a1);
}
// Address range: 0x408410 - 0x40843e
int64_t function_408410(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x408417
    if ((int64_t)v1 < 0) {
        // 0x408439
        function_408490(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x408439
        function_408490(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40842a
    if (mem != NULL) {
        // 0x408434
        return (int64_t)mem;
    }
    // 0x408439
    function_408490(nmemb);
    // UNREACHABLE
}
// Address range: 0x408440 - 0x408468
int64_t function_408440(int64_t a1, int64_t a2) {
    int64_t v1 = function_408240(a2); // 0x40844f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x408470 - 0x408483
int64_t function_408470(int64_t str) {
    // 0x408470
    return function_408440(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x408490 - 0x4084c1
int64_t function_408490(int64_t a1) {
    // 0x408490
    error(g26, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4084d0 - 0x4085a0
int64_t function_4084d0(int64_t a1, int32_t a2, int32_t a3, uint64_t a4, char * a5, int64_t a6, int64_t a7) {
    // 0x4084d0
    int64_t result2; // bp-64, 0x4084d0
    int32_t v1 = function_4085d0(a1, NULL, a2, (int64_t)&result2, a5, a6); // 0x4084fc
    int32_t * v2; // 0x4084d0
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x40857a
        if (v1 == 1) {
            // 0x408598
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x408587
            v2 = v3;
            if (v1 == 3) {
                // 0x40858c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x408500
        if (result >= (int64_t)a3 && result <= a4) {
            // 0x408562
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x40850f
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_406de0(a1); // 0x40852c
    int32_t v6 = *v2; // 0x408531
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x408547
    int32_t v7 = a7; // 0x40854a
    error(v7 == 0 ? 1 : v7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x408562
    return result2;
}
// Address range: 0x4085a0 - 0x4085c1
int64_t function_4085a0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x4085a0
    return function_4084d0(a1, 10, a2, a3, (char *)a4, a5, (int64_t)a6);
}
// Address range: 0x4085d0 - 0x408a8b
int64_t function_4085d0(int64_t a1, int64_t * a2, uint32_t a3, int64_t a4, char * str, int64_t a6) {
    if (a3 >= 37) {
        // 0x4089eb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        if (fileno((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36") < 0) {
            // 0x408a77
            return fclose((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36");
        }
        int64_t v1 = (int64_t)"lib/xstrtol.c"; // 0x408a2a
        if (__freading((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36") != 0) {
            int32_t fd = fileno((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36"); // 0x408a5b
            v1 = 0;
            if (lseek(fd, 0, SEEK_CUR) == -1) {
                // 0x408a77
                return fclose((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36");
            }
        }
        // 0x408a2c
        if ((int32_t)function_408bd0((int64_t)"0 <= strtol_base && strtol_base <= 36", v1) == 0) {
            // 0x408a77
            return fclose((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36");
        }
        int32_t * v2 = __errno_location(); // 0x408a38
        int32_t v3 = *v2; // 0x408a40
        int64_t result = fclose((struct _IO_FILE *)"0 <= strtol_base && strtol_base <= 36"); // 0x408a4e
        if (v3 != 0) {
            // 0x408a80
            *v2 = v3;
            result = 0xffffffff;
        }
        // 0x408a50
        return result;
    }
    char c = a1;
    int32_t * v4 = __errno_location(); // 0x408602
    *v4 = 0;
    int64_t v5 = (int64_t)*__ctype_b_loc() + 1; // 0x408632
    int64_t v6 = a1; // 0x408637
    char v7 = c; // 0x408637
    if ((*(char *)(v5 + (2 * a1 & 510)) & 32) != 0) {
        v6++;
        unsigned char v8 = *(char *)v6; // 0x40862c
        v7 = v8;
        while ((*(char *)(2 * (int64_t)v8 + v5) & 32) != 0) {
            // 0x408628
            v6++;
            v8 = *(char *)v6;
            v7 = v8;
        }
    }
    // 0x408639
    if (v7 == 45) {
        // 0x408675
        return 4;
    }
    // 0x40863e
    int64_t v9; // bp-64, 0x4085d0
    int64_t * v10 = a2 == NULL ? &v9 : a2;
    int32_t v11 = __strtoul_internal((char *)a1, (char **)v10, a3, 0); // 0x408646
    int64_t v12 = *v10; // 0x40864b
    char v13; // 0x4085d0
    int64_t v14; // 0x4085d0
    int64_t v15; // 0x4085d0
    int64_t v16; // 0x4085d0
    int64_t v17; // 0x4085d0
    int64_t v18; // 0x4085d0
    int64_t v19; // 0x4085d0
    if (v12 == a1) {
        // 0x4086a8
        if (c == 0 || str == NULL) {
            // 0x408675
            return 4;
        }
        char * found_char_pos = strchr(str, (int32_t)c); // 0x4086c9
        v18 = 1;
        v15 = 0;
        v13 = c;
        if (found_char_pos == NULL) {
            // 0x408675
            return 4;
        }
        goto lab_0x4086d7;
    } else {
        int32_t v20 = *v4; // 0x408656
        int64_t v21 = 0; // 0x40865c
        if (v20 != 0) {
            // 0x408690
            v21 = 1;
            if (v20 != 34) {
                // 0x408675
                return 4;
            }
        }
        int64_t v22 = v11; // 0x408646
        v17 = v22;
        v14 = v21;
        if (str == NULL) {
            goto lab_0x408672;
        } else {
            char c2 = *(char *)v12; // 0x408665
            v17 = v22;
            v14 = v21;
            if (c2 != 0) {
                char * found_char_pos2 = strchr(str, (int32_t)c2); // 0x4087d3
                v18 = v22;
                v15 = v21;
                v13 = c2;
                v19 = v22;
                v16 = v21;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4086d7;
                } else {
                    goto lab_0x4087e5;
                }
            } else {
                goto lab_0x408672;
            }
        }
    }
  lab_0x4086d7:;
    int64_t v23 = 0x100000000 * v12 >> 32;
    unsigned char v24 = v13 - 69;
    int64_t v25 = 1024; // 0x4086df
    int64_t v26 = 1; // 0x4086df
    int64_t v27; // 0x4085d0
    int64_t v28; // 0x4085d0
    int64_t v29; // 0x4085d0
    int64_t v30; // 0x4085d0
    int64_t v31; // 0x4085d0
    int64_t v32; // 0x4085d0
    int64_t v33; // 0x4085d0
    int64_t v34; // 0x4085d0
    int64_t v35; // 0x4085d0
    int64_t v36; // 0x4085d0
    int64_t v37; // 0x4085d0
    int64_t v38; // 0x4085d0
    int64_t v39; // 0x4085d0
    int64_t v40; // 0x4085d0
    int64_t v41; // 0x4085d0
    int64_t v42; // 0x4085d0
    int64_t v43; // 0x4085d0
    int64_t v44; // 0x4085d0
    int64_t v45; // 0x4085d0
    int64_t v46; // 0x4085d0
    if (v24 < 48) {
        // 0x4086e1
        v25 = 1024;
        v26 = 1;
        if ((1 << (int64_t)((v13 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40874a;
        } else {
            // 0x4086f4
            v25 = 1024;
            v26 = 1;
            if (strchr(str, 48) == NULL) {
                goto lab_0x40874a;
            } else {
                // 0x408710
                v25 = 1000;
                v26 = 2;
                switch (*(char *)(v23 + 1)) {
                    case 68: {
                        goto lab_0x40874a;
                    }
                    case 105: {
                        char v47 = *(char *)(v23 + 2); // 0x408979
                        v25 = 1024;
                        v26 = (v47 == 66 ? 2 : 1) + (int64_t)(v47 == 66);
                        goto lab_0x40874a;
                    }
                    default: {
                        // 0x408725
                        g56 = v24;
                        v25 = 1000;
                        v26 = 2;
                        v29 = 1024;
                        v41 = 1;
                        v28 = v18;
                        v27 = v15;
                        v42 = 1;
                        v30 = 1024;
                        v43 = 1;
                        v19 = v18;
                        v16 = v15;
                        v44 = 1;
                        v31 = 1024;
                        v45 = 1;
                        v32 = 1024;
                        v46 = 1;
                        v33 = 1024;
                        v37 = 1;
                        v34 = 1024;
                        v38 = 1;
                        v35 = 1024;
                        v39 = 1;
                        v36 = 1024;
                        v40 = 1;
                        switch (v13) {
                            case 69: {
                                goto lab_0x4088eb;
                            }
                            case 70: {
                                goto lab_0x4087e5;
                            }
                            case 71: {
                                goto lab_0x408923;
                            }
                            case 72: {
                                goto lab_0x4087e5;
                            }
                            case 73: {
                                goto lab_0x4087e5;
                            }
                            case 74: {
                                goto lab_0x4087e5;
                            }
                            case 75: {
                                goto lab_0x4087ac;
                            }
                            case 76: {
                                goto lab_0x4087e5;
                            }
                            case 77: {
                                goto lab_0x40876e;
                            }
                            case 78: {
                                goto lab_0x4087e5;
                            }
                            case 79: {
                                goto lab_0x4087e5;
                            }
                            case 80: {
                                goto lab_0x4088b8;
                            }
                            case 81: {
                                goto lab_0x4087e5;
                            }
                            case 82: {
                                goto lab_0x4087e5;
                            }
                            case 83: {
                                goto lab_0x4087e5;
                            }
                            case 84: {
                                goto lab_0x408888;
                            }
                            case 85: {
                                goto lab_0x4087e5;
                            }
                            case 86: {
                                goto lab_0x4087e5;
                            }
                            case 87: {
                                goto lab_0x4087e5;
                            }
                            case 88: {
                                goto lab_0x4087e5;
                            }
                            case 89: {
                                goto lab_0x408856;
                            }
                            case 90: {
                                goto lab_0x40881b;
                            }
                            case 91: {
                                goto lab_0x4087e5;
                            }
                            case 92: {
                                goto lab_0x4087e5;
                            }
                            case 93: {
                                goto lab_0x4087e5;
                            }
                            case 94: {
                                goto lab_0x4087e5;
                            }
                            case 95: {
                                goto lab_0x4087e5;
                            }
                            case 96: {
                                goto lab_0x4087e5;
                            }
                            case 97: {
                                goto lab_0x4087e5;
                            }
                            case 98: {
                                goto lab_0x4087ff;
                            }
                            case 99: {
                                goto lab_0x408788;
                            }
                            case 100: {
                                goto lab_0x4087e5;
                            }
                            case 101: {
                                goto lab_0x4087e5;
                            }
                            case 102: {
                                goto lab_0x4087e5;
                            }
                            case 103: {
                                goto lab_0x408923;
                            }
                            case 104: {
                                goto lab_0x4087e5;
                            }
                            case 105: {
                                goto lab_0x4087e5;
                            }
                            case 106: {
                                goto lab_0x4087e5;
                            }
                            case 107: {
                                goto lab_0x4087ac;
                            }
                            case 108: {
                                goto lab_0x4087e5;
                            }
                            case 109: {
                                goto lab_0x40876e;
                            }
                            case 110: {
                                goto lab_0x4087e5;
                            }
                            case 111: {
                                goto lab_0x4087e5;
                            }
                            case 112: {
                                goto lab_0x4087e5;
                            }
                            case 113: {
                                goto lab_0x4087e5;
                            }
                            case 114: {
                                goto lab_0x4087e5;
                            }
                            case 115: {
                                goto lab_0x4087e5;
                            }
                            case 116: {
                                goto lab_0x408888;
                            }
                            default: {
                                goto lab_0x40874a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40874a;
    }
  lab_0x408672:
    // 0x408672
    *(int64_t *)a4 = v17;
    // 0x408675
    return v14 & 0xffffffff;
  lab_0x40874a:
    // 0x40874a
    g57 = v13 - 66;
    v29 = v25;
    v41 = v26;
    v28 = v18;
    v27 = v15;
    v42 = v26;
    v30 = v25;
    v43 = v26;
    v19 = v18;
    v16 = v15;
    v44 = v26;
    v31 = v25;
    v45 = v26;
    v32 = v25;
    v46 = v26;
    v33 = v25;
    v37 = v26;
    v34 = v25;
    v38 = v26;
    v35 = v25;
    v39 = v26;
    v36 = v25;
    v40 = v26;
    int64_t v48; // 0x4085d0
    switch (v13) {
        case 66: {
            // 0x408944
            v48 = v26;
            if (v18 >= 0x40000000000000) {
                goto lab_0x4087b7;
            } else {
                // 0x408951
                v28 = 1024 * v18;
                v27 = v15;
                v42 = v26;
                goto lab_0x408788;
            }
        }
        case 69: {
            goto lab_0x4088eb;
        }
        case 71: {
            goto lab_0x408923;
        }
        case 75: {
            goto lab_0x4087ac;
        }
        case 77: {
            goto lab_0x40876e;
        }
        case 80: {
            goto lab_0x4088b8;
        }
        case 84: {
            goto lab_0x408888;
        }
        case 89: {
            goto lab_0x408856;
        }
        case 90: {
            goto lab_0x40881b;
        }
        case 98: {
            goto lab_0x4087ff;
        }
        case 99: {
            goto lab_0x408788;
        }
        case 103: {
            goto lab_0x408923;
        }
        case 107: {
            goto lab_0x4087ac;
        }
        case 109: {
            goto lab_0x40876e;
        }
        case 116: {
            goto lab_0x408888;
        }
        case 119: {
            // 0x4087f0
            v48 = v26;
            if (v18 < 0) {
                goto lab_0x4087b7;
            } else {
                // 0x4087f5
                v28 = 2 * v18;
                v27 = v15;
                v42 = v26;
                goto lab_0x408788;
            }
        }
        default: {
            goto lab_0x4087e5;
        }
    }
  lab_0x4088eb:;
    uint128_t v49 = (int128_t)v18 * (int128_t)v35; // 0x408903
    int64_t v50 = (int64_t)(v49 < 0xffffffffffffffff ? v49 : 0xffffffffffffffff);
    int64_t v51 = v49 > 0xffffffffffffffff ? 1 : 0;
    int32_t v52 = 5; // 0x40890f
    int64_t v53 = v50; // 0x408912
    int64_t v54 = v39; // 0x408912
    int64_t v55 = v51; // 0x408912
    int32_t v56 = v52; // 0x408912
    int64_t v57 = v51; // 0x408912
    while (v52 != 0) {
        // 0x408900
        v49 = (int128_t)v50 * (int128_t)v35;
        v50 = (int64_t)(v49 < 0xffffffffffffffff ? v49 : 0xffffffffffffffff);
        v51 = v49 > 0xffffffffffffffff ? 1 : v57;
        v52 = v56 - 1;
        v53 = v50;
        v54 = v39;
        v55 = v51;
        v56 = v52;
        v57 = v51;
    }
    goto lab_0x408844;
  lab_0x408923:
    // 0x408923
    v28 = -1;
    v27 = 1;
    v42 = v40;
    if ((int128_t)v36 * (int128_t)v18 <= 0xffffffffffffffff) {
        // 0x40892e
        int128_t v58; // 0x408929
        uint128_t v59; // 0x408929
        uint128_t v60 = (v59 & 0xffffffffffffffff) * v58; // 0x40892e
        v28 = -1;
        v27 = 1;
        int64_t v61; // 0x4085d0
        v42 = v61;
        if (v60 <= 0xffffffffffffffff) {
            uint128_t v62 = (v60 & 0xffffffffffffffff) * v58; // 0x408933
            v28 = -1;
            v27 = 1;
            v42 = v61;
            if (v62 <= 0xffffffffffffffff) {
                // 0x408938
                v28 = v62;
                int64_t v63; // 0x4085d0
                v27 = v63 & 0xffffffff;
                v42 = v61;
            }
        }
    }
    goto lab_0x408788;
  lab_0x4087ac:;
    uint128_t v66 = (int128_t)v30 * (int128_t)v18; // 0x4087af
    v28 = v66;
    v27 = v15;
    v42 = v43;
    v48 = v43;
    if (v66 <= 0xffffffffffffffff) {
        goto lab_0x408788;
    } else {
        goto lab_0x4087b7;
    }
  lab_0x40876e:;
    int128_t v67 = v29; // 0x408774
    uint128_t v68 = v67 * (int128_t)v18; // 0x408774
    v48 = v41;
    if (v68 > 0xffffffffffffffff) {
        goto lab_0x4087b7;
    } else {
        uint128_t v69 = (v68 & 0xffffffffffffffff) * v67; // 0x408779
        v48 = v41;
        if (v69 > 0xffffffffffffffff) {
            goto lab_0x4087b7;
        } else {
            // 0x40877e
            v28 = v69;
            v27 = v15;
            v42 = v41;
            goto lab_0x408788;
        }
    }
  lab_0x4088b8:;
    uint128_t v70 = (int128_t)v18 * (int128_t)v34; // 0x4088cb
    int64_t v71 = (int64_t)(v70 < 0xffffffffffffffff ? v70 : 0xffffffffffffffff);
    int64_t v72 = v70 > 0xffffffffffffffff ? 1 : 0;
    int32_t v73 = 4; // 0x4088d7
    v53 = v71;
    v54 = v38;
    v55 = v72;
    int32_t v74 = v73; // 0x4088da
    int64_t v75 = v72; // 0x4088da
    while (v73 != 0) {
        // 0x4088c8
        v70 = (int128_t)v71 * (int128_t)v34;
        v71 = (int64_t)(v70 < 0xffffffffffffffff ? v70 : 0xffffffffffffffff);
        v72 = v70 > 0xffffffffffffffff ? 1 : v75;
        v73 = v74 - 1;
        v53 = v71;
        v54 = v38;
        v55 = v72;
        v74 = v73;
        v75 = v72;
    }
    goto lab_0x408844;
  lab_0x408888:;
    uint128_t v76 = (int128_t)v18 * (int128_t)v33; // 0x40889b
    int64_t v77 = (int64_t)(v76 < 0xffffffffffffffff ? v76 : 0xffffffffffffffff);
    int64_t v78 = v76 > 0xffffffffffffffff ? 1 : 0;
    int32_t v79 = 3; // 0x4088a7
    v53 = v77;
    v54 = v37;
    v55 = v78;
    int32_t v80 = v79; // 0x4088aa
    int64_t v81 = v78; // 0x4088aa
    while (v79 != 0) {
        // 0x408898
        v76 = (int128_t)v77 * (int128_t)v33;
        v77 = (int64_t)(v76 < 0xffffffffffffffff ? v76 : 0xffffffffffffffff);
        v78 = v76 > 0xffffffffffffffff ? 1 : v81;
        v79 = v80 - 1;
        v53 = v77;
        v54 = v37;
        v55 = v78;
        v80 = v79;
        v81 = v78;
    }
    goto lab_0x408844;
  lab_0x408856:;
    uint128_t v82 = (int128_t)v18 * (int128_t)v32; // 0x40886b
    int64_t v83 = (int64_t)(v82 < 0xffffffffffffffff ? v82 : 0xffffffffffffffff);
    int64_t v84 = v82 > 0xffffffffffffffff ? 1 : 0;
    int32_t v85 = 7; // 0x408877
    v53 = v83;
    v54 = v46;
    v55 = v84;
    int32_t v86 = v85; // 0x40887a
    int64_t v87 = v84; // 0x40887a
    while (v85 != 0) {
        // 0x408868
        v82 = (int128_t)v83 * (int128_t)v32;
        v83 = (int64_t)(v82 < 0xffffffffffffffff ? v82 : 0xffffffffffffffff);
        v84 = v82 > 0xffffffffffffffff ? 1 : v87;
        v85 = v86 - 1;
        v53 = v83;
        v54 = v46;
        v55 = v84;
        v86 = v85;
        v87 = v84;
    }
    goto lab_0x408844;
  lab_0x40881b:;
    uint128_t v88 = (int128_t)v18 * (int128_t)v31; // 0x408833
    int64_t v89 = (int64_t)(v88 < 0xffffffffffffffff ? v88 : 0xffffffffffffffff);
    int64_t v90 = v88 > 0xffffffffffffffff ? 1 : 0;
    int32_t v91 = 6; // 0x40883f
    int32_t v92 = v91; // 0x408842
    int64_t v93 = v90; // 0x408842
    v53 = v89;
    v54 = v45;
    v55 = v90;
    while (v91 != 0) {
        // 0x408830
        v88 = (int128_t)v89 * (int128_t)v31;
        v89 = (int64_t)(v88 < 0xffffffffffffffff ? v88 : 0xffffffffffffffff);
        v90 = v88 > 0xffffffffffffffff ? 1 : v93;
        v91 = v92 - 1;
        v92 = v91;
        v93 = v90;
        v53 = v89;
        v54 = v45;
        v55 = v90;
    }
    goto lab_0x408844;
  lab_0x4087ff:
    // 0x4087ff
    v48 = v44;
    if (v18 >= 0x80000000000000) {
        goto lab_0x4087b7;
    } else {
        // 0x408808
        v28 = 512 * v18;
        v27 = v15;
        v42 = v44;
        goto lab_0x408788;
    }
  lab_0x408788:;
    int64_t v64 = v27;
    int64_t v65 = (0x100000000 * v42 >> 32) + v23; // 0x40878d
    *v10 = v65;
    v17 = v28;
    v14 = (*(char *)v65 != 0 ? v64 | 2 : v64) & 0xffffffff;
    goto lab_0x408672;
  lab_0x4087e5:
    // 0x4087e5
    *(int64_t *)a4 = v19;
    // 0x408675
    return (v16 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4087b7:
    // 0x4087b7
    v28 = -1;
    v27 = 1;
    v42 = v48;
    goto lab_0x408788;
  lab_0x408844:
    // 0x408844
    v28 = v53;
    v27 = (v55 | v15) & 0xffffffff;
    v42 = v54;
    goto lab_0x408788;
}
// Address range: 0x408a90 - 0x408bc5
int64_t function_408a90(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x408ac0
    if (cmd != 1030) {
        // 0x408b70
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x408acc
    int64_t v2; // 0x408a90
    if (g49 < 0) {
        int64_t v3 = function_408a90(fd, 0, v1, a4); // 0x408b14
        int64_t v4 = v3 & 0xffffffff; // 0x408b19
        if ((int32_t)v3 < 0) {
            // 0x408b00
            return v4 & 0xffffffff;
        }
        // 0x408b1f
        v2 = v4;
        if (g49 != -1) {
            // 0x408b00
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x408ae7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x408af6
            g49 = 1;
            // 0x408b00
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_408a90(fd & 0xffffffff, 0, v1, a4); // 0x408ba7
        int64_t v7 = v6 & 0xffffffff; // 0x408bac
        if ((int32_t)v6 < 0) {
            // 0x408b00
            return v7 & 0xffffffff;
        }
        // 0x408bb6
        g49 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x408b2f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x408b3a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x408b00
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x408b52
    close(fd2);
    // 0x408b00
    return 0xffffffff;
}
// Address range: 0x408bd0 - 0x408c10
int64_t function_408bd0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x408bea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x408bea
        return fflush(stream);
    }
    // 0x408bf8
    function_408c10(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x408c10 - 0x408c67
int64_t function_408c10(int64_t stream, int32_t offset, int64_t whence) {
    // 0x408c10
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x408c1a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x408c4b
    int64_t result = -1; // 0x408c54
    if (v1 != -1) {
        // 0x408c56
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x408c62
    return result;
}
// Address range: 0x408c70 - 0x408d4f
int64_t function_408c70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x408c7c
    uint32_t v2 = *v1; // 0x408c7c
    int64_t v3 = a2 & 0xffffffff; // 0x408c81
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408c84
    uint64_t v5 = (int64_t)*v4; // 0x408c84
    int64_t v6; // 0x408cf2
    if (v3 <= v5) {
      lab_0x408cec_2:
        // 0x408cec
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x408c72
    int64_t v8 = v2; // 0x408c70
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x408cec
        goto lab_0x408cec_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408ca8
    int64_t v17; // 0x408cb6
    int64_t * v18; // 0x408cd0
    int64_t * v19; // 0x408cd3
    int64_t v20; // 0x408cde
    int64_t v21; // 0x408cb6
    while ((v16 & 0xffffffff) > v10) {
        // 0x408cb3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x408cd0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x408ce7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x408cec
            goto lab_0x408cec_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x408cec
            goto lab_0x408cec_2;
        }
        // 0x408ca2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x408d2b
    int64_t * v23 = (int64_t *)v22; // 0x408d30
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408d33
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408d30
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408d47
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x408c9d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x408cec
            goto lab_0x408cec_2;
        }
        // 0x408ca2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408cb3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x408cd0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x408ce7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x408cec
                goto lab_0x408cec_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x408cec
                goto lab_0x408cec_2;
            }
            // 0x408ca2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x408d10
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408d30
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408d47
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x408cec
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408d50 - 0x40936c
int64_t function_408d50(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x408d6f
    int64_t v2 = *v1; // 0x408d6f
    char * str2 = (char *)v2; // 0x408d7c
    char c = *str2; // 0x408d7c
    int64_t v3 = v2; // 0x408da8
    int64_t v4 = 0; // 0x408d50
    int32_t v5; // 0x408d50
    int64_t v6; // 0x408d50
    int64_t v7; // 0x408d50
    int64_t v8; // 0x408d50
    int64_t v9; // 0x408d50
    int64_t v10; // 0x408d50
    int64_t v11; // 0x408d50
    int64_t v12; // 0x408d50
    int64_t v13; // 0x408d50
    int64_t str3; // 0x408d50
    int64_t v14; // 0x408d50
    int64_t v15; // 0x408d50
    int64_t v16; // 0x408d50
    int64_t v17; // 0x408d50
    int32_t v18; // 0x408d50
    int32_t v19; // 0x408d50
    int32_t v20; // 0x408d50
    int32_t v21; // 0x408d50
    int32_t v22; // 0x408d50
    int32_t v23; // 0x408d50
    int32_t v24; // 0x408d50
    int32_t v25; // 0x408d50
    int32_t v26; // 0x408d50
    int32_t v27; // 0x408d50
    int32_t v28; // 0x408d50
    int32_t v29; // 0x408d50
    int64_t nmemb; // 0x408d50
    int64_t v30; // 0x408d50
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x408dac
            while (v31 != 0 == (v31 != 61)) {
                // 0x408da8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408db8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x408dbe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408d88
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x408dec
                int64_t v34; // 0x408d50
                int64_t v35; // 0x408d50
                if (strncmp(str, str2, n) == 0) {
                    // 0x408df5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408f70;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408e06
                int64_t v37 = *(int64_t *)v36; // 0x408e0a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x408de0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408df5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408f70;
                        }
                    }
                    // 0x408e06
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
                  lab_0x408e56:
                    // 0x408e56
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
                        goto lab_0x408eb0;
                    } else {
                        if (v11 == 0) {
                            // 0x409020
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408eb0;
                        } else {
                            if (v39 == 0) {
                                // 0x408fd0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x408e7a;
                                } else {
                                    // 0x408fdc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x408e7a;
                                    } else {
                                        // 0x408fea
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x408e7a;
                                        } else {
                                            goto lab_0x408eb0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x408e7a;
                            }
                        }
                    }
                }
              lab_0x408ec1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x409096
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x409242
                            flockfile(g38);
                            int64_t v41 = *v1; // 0x409262
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4092af
                            int64_t v43 = (int64_t)g38;
                            int64_t v44 = v43; // 0x4092c9
                            int64_t v45; // 0x4092cb
                            if (*(char *)v42 != 0) {
                                // 0x4092cb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g38;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4092c3
                            while (v17 + nmemb != v42) {
                                // 0x4092c5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4092cb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g38;
                                }
                                // 0x4092b8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4092f0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g38);
                            v40 = *v1;
                        } else {
                            // 0x4090a4
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4091ff
                        free((int64_t *)v17);
                    }
                    // 0x4090f9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x409110
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x408fbe
                    return 63;
                }
                // 0x408ee0
                v5 = v39;
                if (v13 != 0) {
                    // 0x408f64
                    v35 = v13;
                    v34 = v25;
                  lab_0x408f70:;
                    int32_t * v49 = (int32_t *)a7; // 0x408f80
                    uint32_t v50 = *v49; // 0x408f80
                    int64_t v51 = v50; // 0x408f80
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x408f8a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408f93
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4091bf
                                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40916a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x408fbe
                            return 63;
                        }
                        // 0x409008
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40931f
                                    __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40921d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x409230
                                // 0x408fbe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40912e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x409142
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x408fab
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x408fae
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408fb2
                    int64_t result = v59; // 0x408fb8
                    if (v58 != 0) {
                        // 0x408fba
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x408fbe
                    return result;
                }
            } else {
                // 0x408dbe
                v5 = v32;
            }
            // break -> 0x408ee5
            break;
        }
    }
    // 0x408ee5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x408efd
        if (*(char *)(v60 + 1) != 45) {
            // 0x408f07
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x408fbe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x409049
        __fprintf_chk(g38, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408f36
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408f46
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408eb0:
    // 0x408eb0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408eb0
    int64_t v63 = *(int64_t *)v62; // 0x408eb4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408ec1
        goto lab_0x408ec1;
    }
    goto lab_0x408e56;
  lab_0x408e7a:
    // 0x408e7a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408d50
    int32_t v65; // 0x408d50
    int32_t v66; // 0x408d50
    if (v27 != 0) {
        goto lab_0x408eb0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x409030
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408eb0;
            } else {
                goto lab_0x408ea1;
            }
        } else {
            // 0x408e95
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40918c
                int64_t v67 = (int64_t)mem; // 0x40918c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408eb0;
                } else {
                    // 0x40919f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408ea1;
                }
            } else {
                goto lab_0x408ea1;
            }
        }
    }
  lab_0x408ea1:
    // 0x408ea1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408eb0;
}
// Address range: 0x409370 - 0x409936
int64_t function_409370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x409391
    if (v3 < 1) {
        // 0x40954e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40938d
    int32_t v5 = *(int32_t *)a7; // 0x409399
    uint64_t v6 = a1 & 0xffffffff; // 0x40939b
    int64_t v7 = v2; // 0x4093a0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4093a3
    *v8 = 0;
    int64_t v9; // 0x409370
    int64_t v10; // 0x409370
    int64_t v11; // 0x409370
    int64_t v12; // 0x409370
    int64_t str; // 0x409370
    int64_t v13; // 0x409370
    int64_t v14; // 0x409370
    int64_t v15; // 0x409370
    int64_t v16; // 0x409370
    int64_t v17; // 0x409370
    int32_t v18; // 0x409370
    char v19; // 0x409370
    if (v5 == 0) {
        // 0x409588
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4093ba;
    } else {
        // 0x4093b3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x409400
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x409403
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4094c8;
            } else {
                int64_t v22 = v7 + 1; // 0x409416
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x409426
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4094dc;
                } else {
                    goto lab_0x409438;
                }
            }
        } else {
            goto lab_0x4093ba;
        }
    }
  lab_0x4093ba:
    // 0x4093ba
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4093c0
    *v24 = 0;
    int64_t v25; // 0x409370
    int64_t v26; // 0x409370
    int64_t v27; // 0x409370
    switch (*(char *)&v2) {
        case 45: {
            // 0x4094b0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4094bd;
        }
        case 43: {
            // 0x4097c0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4094bd;
        }
        default: {
            // 0x4093dc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40973f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x409858
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4094bd;
                } else {
                    // 0x40974d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4093ea;
                }
            } else {
                goto lab_0x4093ea;
            }
        }
    }
  lab_0x4094c8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4094cf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409438;
    } else {
        goto lab_0x4094dc;
    }
  lab_0x4093ea:
    // 0x4093ea
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4094bd;
  lab_0x4094bd:
    // 0x4094bd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4094c8;
  lab_0x409438:;
    uint32_t v30 = *(int32_t *)a7; // 0x409438
    int64_t v31 = v30; // 0x409438
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40943a
    if ((int64_t)*v32 > v31) {
        // 0x40943f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409442
    if (*v33 > v30) {
        // 0x409447
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40944a
    int64_t v35 = v31; // 0x40944e
    int64_t v36 = v15; // 0x40944e
    int64_t v37; // 0x409370
    int64_t v38; // 0x409370
    int64_t v39; // 0x409370
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4095b8
        int64_t v41 = v40; // 0x4095b8
        v2 = v41;
        int64_t v42; // 0x409370
        if (*v33 == v40) {
            // 0x4097a0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4097a8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4095c4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4095c8
                function_408c70(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4095d8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4095e1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4095ea
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x409601
            int64_t v47 = v45 & 0xffffffff; // 0x409605
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40960e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x409614
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x409616;
                }
            }
            int64_t v48 = v47 + 1; // 0x4095f0
            int64_t v49 = v48 & 0xffffffff; // 0x4095f0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x409601
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40960e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x409614
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x409616;
                    }
                }
                // 0x4095f0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4097b8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x409616;
    } else {
        goto lab_0x409454;
    }
  lab_0x4094dc:
    // 0x4094dc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4094df
    int64_t v51 = v12; // 0x4094df
    int64_t v52 = v14; // 0x4094df
    if (*(char *)v10 == 0) {
        goto lab_0x409438;
    } else {
        goto lab_0x4094e5;
    }
  lab_0x409454:;
    int32_t v53 = v35; // 0x409454
    int64_t v54; // 0x409370
    int64_t v55; // 0x409370
    int64_t v56; // 0x409370
    int64_t v57; // 0x409370
    int64_t v58; // 0x409370
    int64_t v59; // 0x409370
    char * v60; // 0x409370
    int64_t v61; // 0x409370
    int64_t v62; // 0x409469
    int64_t v63; // 0x409370
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4095a3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4095a6;
    } else {
        // 0x40945c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409370
        int64_t v66 = v65 ? -1 : 1; // 0x409470
        int64_t v67 = (int64_t)"--"; // 0x409370
        int64_t v68 = v62; // 0x409370
        int64_t v69 = 3; // 0x409470
        unsigned char v70 = *(char *)v68; // 0x409470
        char v71 = *(char *)v67; // 0x409470
        char v72 = v71; // 0x409470
        bool v73 = false; // 0x409470
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
            // 0x409560
            if (*(char *)v62 == 45) {
                // 0x409620
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x409620
                if (c == 0) {
                    goto lab_0x40956a;
                } else {
                    // 0x40962d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4096b0;
                    } else {
                        if (c == 45) {
                            // 0x409893
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x409705;
                        } else {
                            // 0x40963e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4096b0;
                            } else {
                                // 0x409643
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409664;
                                } else {
                                    // 0x40964a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4096b0;
                                    } else {
                                        goto lab_0x409664;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40956a;
            }
        } else {
            uint32_t v75 = *v33; // 0x409480
            v2 = v75;
            int32_t v76 = *v32; // 0x409483
            int64_t v77 = v35 + 1; // 0x409486
            int32_t v78 = v77; // 0x409489
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4097f0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409497
                    function_408c70(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4094a5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4095a6;
        }
    }
  lab_0x4094e5:;
    // 0x4094e5
    int64_t v79; // bp-104, 0x409370
    int64_t v80 = &v79; // 0x40937a
    int64_t v81 = v50 + 1; // 0x4094e5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4094ec
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4094f1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4094f5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4094f9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x409501
    *v86 = v84;
    char * str2 = (char *)v52; // 0x409506
    int32_t c2 = v84; // 0x409506
    char * found_char_pos = strchr(str2, c2); // 0x409506
    int64_t v87 = *v82; // 0x40950b
    v2 = v87;
    int64_t v88 = *v85; // 0x409515
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x409520
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x409810
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4097dd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40954e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x409506
    char v91 = *(char *)(v90 + 1); // 0x40953b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4094f5
        if (v91 != 58) {
            // 0x40954e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409764
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409868
                *v8 = 0;
            } else {
                // 0x40984c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40978e
            *v83 = 0;
            // 0x40954e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40976e
        if (v93 != 0) {
            // 0x409800
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40978e
            *v83 = 0;
            // 0x40954e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x409781
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40978e
            *v83 = 0;
            // 0x40954e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4098ca
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40987a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x409881
        // 0x40978e
        *v83 = 0;
        // 0x40954e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4096d9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4096db
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x409900
                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4098b1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4098b8
            // 0x40954e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4096e6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4096ea
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x409705;
  lab_0x409616:
    // 0x409616
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409454;
  lab_0x409705:;
    int64_t v99 = function_408d50(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x409723
    // 0x40954e
    return v99 & 0xffffffff;
  lab_0x4095a6:;
    int32_t v100 = v55; // 0x4095a6
    if (v100 != (int32_t)v59) {
        // 0x4095aa
        *(int32_t *)a7 = v100;
    }
    // 0x40954e
    return 0xffffffff;
  lab_0x40956a:
    // 0x40956a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409571
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40954e
    return v99 & 0xffffffff;
  lab_0x4096b0:
    // 0x4096b0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4094e5;
  lab_0x409664:
    // 0x409664
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408d50(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g16); // 0x40968a
    if ((int32_t)v101 != -1) {
        // 0x40954e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40969f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4096b0;
}
// Address range: 0x409940 - 0x409996
int64_t function_409940(int64_t a1) {
    // 0x409940
    *(int32_t *)&g50 = g34;
    *(int32_t *)&g51 = g33;
    int64_t v1; // 0x409940
    int64_t result = function_409370(v1, v1, v1, v1, v1, v1, &g50, a1 & 0xffffffff); // 0x409966
    g34 = *(int32_t *)&g50;
    g55 = (char *)g53;
    *(int32_t *)&g32 = g52;
    return result;
}
// Address range: 0x4099a0 - 0x4099b8
int64_t function_4099a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4099a0
    return function_409940(1);
}
// Address range: 0x4099c0 - 0x4099d3
int64_t function_4099c0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x4099c0
    return function_409940(0);
}
// Address range: 0x4099e0 - 0x4099f5
int64_t function_4099e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4099e0
    return function_409370(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x409a00 - 0x409a16
int64_t function_409a00(void) {
    // 0x409a00
    return function_409940(0);
}
// Address range: 0x409a20 - 0x409a38
int64_t function_409a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409a20
    return function_409370(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409a40 - 0x409aba
int64_t function_409a40(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x409a4b
    int64_t v2 = (int64_t)&g17; // 0x409a4b
    int32_t * pwc; // 0x409a40
    int64_t v3; // 0x409a40
    int64_t n; // 0x409a40
    if (a2 == 0) {
        goto lab_0x409a92;
    } else {
        // 0x409a4d
        if (a3 == 0) {
            // 0x409a78
            return -2;
        }
        // 0x409a59
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409a92;
        } else {
            goto lab_0x409a64;
        }
    }
  lab_0x409a92:
    // 0x409a92
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409a40
    pwc = (int32_t *)&v4;
    goto lab_0x409a64;
  lab_0x409a64:;
    char * wstr = (char *)v3; // 0x409a6a
    int64_t ps; // 0x409a40
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x409a6a
    int64_t result = v5; // 0x409a6a
    if (v5 < 0xfffffffe) {
        // 0x409a78
        return result;
    }
    int64_t result2 = result; // 0x409aa9
    if ((char)function_409bc0(0, v3) == 0) {
        // 0x409aab
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409a78
    return result2;
}
// Address range: 0x409ac0 - 0x409b1d
int64_t function_409ac0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409ac7
    int64_t v2; // 0x409ac0
    if ((v2 & 32) == 0) {
        // 0x409ae1
        if (v1 == 0) {
            // 0x409afa
            return 0;
        }
        // 0x409afa
        return 0xffffffff;
    }
    if (v1 != 0) {
        // 0x409afa
        return 0xffffffff;
    }
    // 0x409b04
    *__errno_location() = 0;
    // 0x409afa
    return 0xffffffff;
}
// Address range: 0x409b20 - 0x409bb3
int64_t function_409b20(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x409b27
    int64_t result = (int64_t)file; // 0x409b27
    if (file == NULL) {
        // 0x409b41
        return result;
    }
    uint32_t v1 = fileno(file); // 0x409b37
    if (v1 >= 3) {
        // 0x409b41
        return result;
    }
    int32_t fd = function_40a190((int64_t)v1, (int64_t)mode); // 0x409b5a
    if (fd < 0) {
        // 0x409b98
        __errno_location();
        // 0x409b41
        return 0;
    }
    if (fd == 0) {
        struct _IO_FILE * v2 = fdopen(fd, mode); // 0x409b70
        if (v2 != NULL) {
            // 0x409b41
            return (int64_t)v2;
        }
    }
    int32_t * v3 = __errno_location(); // 0x409b7d
    close(fd);
    // 0x409b41
    return 0;
}
// Address range: 0x409bc0 - 0x409c1e
int64_t function_409bc0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x409bc6
    if (locale == NULL) {
        // 0x409bf3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x409bc6
    bool v2; // 0x409bc0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g18; // 0x409bc0
    int64_t v5 = v1; // 0x409bc0
    int64_t v6 = 2; // 0x409be5
    unsigned char v7 = *(char *)v5; // 0x409be5
    char v8 = *(char *)v4; // 0x409be5
    char v9 = v8; // 0x409be5
    bool v10 = false; // 0x409be5
    while (v7 == v8) {
        // 0x409bd8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409bf1
    int64_t v13 = v1; // 0x409bf1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409bf3
        return 0;
    }
    int64_t v14 = 6; // 0x409bf1
    unsigned char v15 = *(char *)v13; // 0x409c0d
    char v16 = *(char *)v12; // 0x409c0d
    char v17 = v16; // 0x409c0d
    bool v18 = false; // 0x409c0d
    while (v15 == v16) {
        // 0x409c00
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
// Address range: 0x409c20 - 0x40a182
int64_t function_409c20(void) {
    char * v1 = nl_langinfo(14); // 0x409c36
    char * v2 = g54; // 0x409c3b
    char * v3; // 0x409c20
    int64_t v4; // 0x409c20
    int64_t v5; // 0x409c20
    int64_t v6; // 0x409c20
    int64_t v7; // 0x409c20
    int32_t size; // 0x409c20
    int32_t size2; // 0x409c20
    int32_t len; // 0x409cf2
    int64_t v8; // 0x409cf2
    char * env_val; // 0x409cdd
    if (v2 == NULL) {
        // 0x409cd8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409d45;
        } else {
            // 0x409cea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409d45;
            } else {
                // 0x409cef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x409cdd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40a175
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409d45;
                    } else {
                        // 0x40a0e9
                        size2 = len + 14;
                        goto lab_0x409d0b;
                    }
                } else {
                    goto lab_0x409d0b;
                }
            }
        }
    } else {
        // 0x409c20
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x409c5a;
    }
  lab_0x409f8c:;
    // 0x409f8c
    int64_t v10; // 0x409c20
    int64_t v11 = v10;
    int64_t v12; // 0x409c20
    int64_t v13 = v12;
    struct _IO_FILE * stream; // 0x409dcb
    int32_t v14 = __uflow(stream); // 0x409f8f
    int64_t v15 = v13; // 0x409f99
    int32_t v16 = v14; // 0x409f99
    int64_t v17 = v11; // 0x409f99
    int64_t v18 = v13; // 0x409f99
    int64_t v19 = v11; // 0x409f99
    if (v14 == -1) {
        // break -> 0x409f9f
        goto lab_0x409f9f;
    }
    goto lab_0x409e19;
  lab_0x409e0e:;
    // 0x409e0e
    int64_t v116; // 0x409c20
    int64_t v137 = v116;
    int64_t v115; // 0x409c20
    int64_t v138 = v115;
    int64_t v114; // 0x409c20
    int64_t v139 = v114;
    int64_t * v30; // 0x409e00
    *v30 = v138 + 1;
    unsigned char v140 = *(char *)v138; // 0x409e16
    v15 = v139;
    v16 = v140;
    v17 = v137;
    goto lab_0x409e19;
  lab_0x409e19:;
    int64_t v20 = v17;
    int32_t c = v16;
    int64_t v21 = v15;
    int64_t v22; // 0x409c20
    int32_t v23; // bp-120, 0x409c20
    int32_t v24; // bp-184, 0x409c20
    int64_t v25; // 0x409c20
    int64_t v26; // 0x409de8
    int64_t v27; // 0x409ded
    int64_t * v28; // 0x409e04
    switch (c) {
        case 32: {
            // 0x409e00
            v25 = v21;
            v22 = v20;
            goto lab_0x409e00_2;
        }
        case 10: {
            // 0x409e00
            v25 = v21;
            v22 = v20;
            goto lab_0x409e00_2;
        }
        case 9: {
            // 0x409e00
            v25 = v21;
            v22 = v20;
            goto lab_0x409e00_2;
        }
        case 35: {
            uint64_t v29 = *v30; // 0x409ff1
            uint64_t v31 = *v28; // 0x409ff5
            int32_t v32; // 0x409c20
            char v33; // 0x409c20
            unsigned char v34; // 0x409fd8
            int32_t v35; // 0x409ffe
            if (v29 < v31) {
                // 0x409fd0
                *v30 = v29 + 1;
                v34 = *(char *)v29;
                v32 = v34;
                v33 = 1;
            } else {
                // 0x409ffb
                v35 = __uflow(stream);
                v32 = v35;
                v33 = v35 != -1;
            }
            char v36 = v33;
            int32_t v37 = v32;
            while (v37 != 10 && v36 != 0) {
                // 0x409ff1
                v29 = *v30;
                v31 = *v28;
                if (v29 < v31) {
                    // 0x409fd0
                    *v30 = v29 + 1;
                    v34 = *(char *)v29;
                    v32 = v34;
                    v33 = 1;
                } else {
                    // 0x409ffb
                    v35 = __uflow(stream);
                    v32 = v35;
                    v33 = v35 != -1;
                }
                // 0x409fe0
                v36 = v33;
                v37 = v32;
            }
            // 0x40a0cf
            v18 = v21;
            v19 = v20;
            if (v37 == -1) {
                // break -> 0x409f9f
                break;
            }
            // 0x409e00
            v25 = v21;
            v22 = v20;
            goto lab_0x409e00_2;
        }
        default: {
            // 0x409e2f
            ungetc(c, stream);
            int32_t items_assigned = fscanf(stream, "%50s %50s", &v24, &v23); // 0x409e47
            int64_t v38 = v27; // 0x409e4f
            v18 = v21;
            v19 = v20;
            if (items_assigned < 2) {
                // break -> 0x409f9f
                break;
            }
            int64_t v39 = v38;
            int32_t v40 = *(int32_t *)v39; // 0x409e58
            int64_t v41 = v39 + 4; // 0x409e5a
            int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x409e66
            uint32_t v43 = v42 & -0x7f7f7f80; // 0x409e68
            v38 = v41;
            while (v43 == 0) {
                // 0x409e58
                v39 = v38;
                v40 = *(int32_t *)v39;
                v41 = v39 + 4;
                v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
                v43 = v42 & -0x7f7f7f80;
                v38 = v41;
            }
            int32_t v44 = (v42 & 0x8080) == 0 ? v43 / 0x10000 : v43; // 0x409e79
            int64_t v45 = v39 + 6; // 0x409e7c
            unsigned char v46 = (char)v44; // 0x409e86
            int64_t v47 = -1 - v46 < v46 ? 4 : 3; // 0x409e8b
            int64_t v48 = v26; // 0x409e8f
            int64_t v49 = v48;
            int32_t v50 = *(int32_t *)v49; // 0x409e92
            int64_t v51 = v49 + 4; // 0x409e94
            int32_t v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80); // 0x409ea0
            uint32_t v53 = v52 & -0x7f7f7f80; // 0x409ea2
            v48 = v51;
            while (v53 == 0) {
                // 0x409e92
                v49 = v48;
                v50 = *(int32_t *)v49;
                v51 = v49 + 4;
                v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80);
                v53 = v52 & -0x7f7f7f80;
                v48 = v51;
            }
            int64_t v54 = (v42 & 0x8080) == 0 ? v45 : v41; // 0x409e80
            int64_t v55 = v54 - v47 - v27; // 0x409e8f
            int32_t v56 = (v52 & 0x8080) == 0 ? v53 / 0x10000 : v53; // 0x409eb8
            int64_t v57 = (v52 & 0x8080) == 0 ? v49 + 6 : v51; // 0x409ebf
            unsigned char v58 = (char)v56; // 0x409ec5
            int64_t v59 = -1 - v58 < v58 ? 4 : 3; // 0x409ec8
            int64_t v60 = v57 - v59 - v26; // 0x409ecc
            int64_t v61 = v60 + v55; // 0x409ed5
            int64_t * v62; // 0x409c20
            int64_t v63; // 0x409c20
            if (v21 != 0) {
                int64_t v64 = v61 + v21; // 0x40a00b
                int64_t * mem = realloc((int64_t *)v20, (int32_t)v64 + 3); // 0x40a020
                v63 = v64;
                v62 = mem;
            } else {
                int64_t * mem2 = malloc((int32_t)v61 + 3); // 0x409ef1
                v63 = v61;
                v62 = mem2;
            }
            int64_t * v65 = v62;
            if (v65 == NULL) {
                // 0x40a12c
                free((int64_t *)v20);
                goto lab_0x409da4;
            }
            int64_t v66 = v63;
            int64_t v67 = (int64_t)v65;
            int64_t v68 = v66 + 2;
            int64_t v69 = v55 + 1; // 0x409f18
            int64_t v70 = v68 - v60 + v67;
            int64_t v71 = -2 - v55 + v70; // 0x409f22
            uint32_t v72 = (int32_t)v69; // 0x409f25
            if (v72 >= 8) {
                int32_t v73 = v24; // 0x40a034
                *(int64_t *)v71 = (int64_t)v73;
                int64_t v74 = (v69 & 0xffffffff) - 8;
                int64_t v75 = *(int64_t *)(v74 + v27); // 0x40a03d
                *(int64_t *)(v71 + v74) = v75;
                int64_t v76 = v71 + 8 & -8; // 0x40a04e
                int64_t v77 = v71 - v76; // 0x40a052
                uint32_t v78 = (int32_t)(v77 + v69); // 0x40a05d
                if (v78 >= 8) {
                    int64_t v79 = v27 - v77; // 0x40a057
                    uint32_t v80 = v78 & -8; // 0x40a079
                    int64_t v81 = 0; // 0x409c20
                    int64_t v82 = v81;
                    int64_t v83 = v82 + 8; // 0x40a06e
                    int64_t v84 = *(int64_t *)(v79 + v82); // 0x40a071
                    *(int64_t *)(v82 + v76) = v84;
                    v81 = v83 & 0xffffffff;
                    while (v80 > (int32_t)v83) {
                        // 0x40a06b
                        v82 = v81;
                        v83 = v82 + 8;
                        v84 = *(int64_t *)(v79 + v82);
                        *(int64_t *)(v82 + v76) = v84;
                        v81 = v83 & 0xffffffff;
                    }
                }
            } else {
                if ((v69 & 4) != 0) {
                    int32_t v85 = v24; // 0x40a0ff
                    *(int32_t *)v71 = v85;
                    int64_t v86 = (v69 & 0xffffffff) - 4;
                    int32_t v87 = *(int32_t *)(v86 + v27); // 0x40a107
                    *(int32_t *)(v71 + v86) = v87;
                } else {
                    if (v72 != 0) {
                        int32_t v88 = v24; // 0x409f3b
                        *(char *)v71 = (char)v88;
                        if ((v69 & 2) != 0) {
                            int64_t v89 = (v69 & 0xffffffff) - 2;
                            int16_t v90 = *(int16_t *)(v89 + v27); // 0x40a152
                            *(int16_t *)(v71 + v89) = v90;
                        }
                    }
                }
            }
            int64_t v91 = v60 + 1; // 0x409f4b
            int64_t v92 = v70 - 1; // 0x409f4f
            uint32_t v93 = (int32_t)v91; // 0x409f54
            if (v93 >= 8) {
                int32_t v94 = v23; // 0x40a082
                *(int64_t *)v92 = (int64_t)v94;
                int64_t v95 = (v91 & 0xffffffff) - 8;
                int64_t v96 = *(int64_t *)(v95 + v26); // 0x40a08e
                *(int64_t *)(v92 + v95) = v96;
                int64_t v97 = v70 + 7 & -8; // 0x40a09c
                int64_t v98 = v92 - v97; // 0x40a0a0
                uint32_t v99 = (int32_t)(v98 + v91); // 0x40a0ab
                if (v99 >= 8) {
                    int64_t v100 = v26 - v98; // 0x40a0a5
                    uint32_t v101 = v99 & -8; // 0x40a0c6
                    int64_t v102 = 0; // 0x409c20
                    int64_t v103 = v102;
                    int64_t v104 = v103 + 8; // 0x40a0bb
                    int64_t v105 = *(int64_t *)(v100 + v103); // 0x40a0be
                    *(int64_t *)(v103 + v97) = v105;
                    v102 = v104 & 0xffffffff;
                    while (v101 > (int32_t)v104) {
                        // 0x40a0b9
                        v103 = v102;
                        v104 = v103 + 8;
                        v105 = *(int64_t *)(v100 + v103);
                        *(int64_t *)(v103 + v97) = v105;
                        v102 = v104 & 0xffffffff;
                    }
                }
            } else {
                if ((v91 & 4) != 0) {
                    int32_t v106 = v23; // 0x40a116
                    *(int32_t *)v92 = v106;
                    int64_t v107 = (v91 & 0xffffffff) - 4;
                    int32_t v108 = *(int32_t *)(v107 + v26); // 0x40a11e
                    *(int32_t *)(v92 + v107) = v108;
                } else {
                    if (v93 != 0) {
                        int32_t v109 = v23; // 0x409f6a
                        *(char *)v92 = (char)v109;
                        if ((v91 & 2) != 0) {
                            int64_t v110 = (v91 & 0xffffffff) - 2;
                            int16_t v111 = *(int16_t *)(v110 + v26); // 0x40a165
                            *(int16_t *)(v92 + v110) = v111;
                        }
                    }
                }
            }
            uint64_t v112 = *v30; // 0x409f7e
            uint64_t v113 = *v28; // 0x409f82
            v114 = v68;
            v115 = v112;
            v116 = v67;
            v12 = v68;
            v10 = v67;
            if (v112 < v113) {
                goto lab_0x409e0e;
            } else {
                goto lab_0x409f8c;
            }
        }
    }
  lab_0x409d45:;
    int64_t * mem3 = malloc(size); // 0x409d45
    int64_t v117 = (int64_t)&g17; // 0x409d50
    int64_t v118; // 0x409c20
    int64_t path; // 0x409c20
    if (mem3 == NULL) {
        goto lab_0x409d22;
    } else {
        int64_t v119 = (int64_t)mem3; // 0x409d45
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v119) = 47;
        path = v119;
        v118 = v4;
        goto lab_0x409d66;
    }
  lab_0x409c5a:;
    int64_t str = v1 == NULL ? (int64_t)&g17 : (int64_t)v1; // 0x409c4d
    char v120 = *v3; // 0x409c5a
    int64_t v121; // 0x409c20
    if (v120 == 0) {
        // 0x409cb4
        v121 = str;
        return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
    }
    char v122 = v120; // 0x409c20
    int64_t v123 = v7;
    char * str2 = (char *)v123;
    int64_t v124; // 0x409c20
    while (strcmp((char *)str, str2) != 0) {
        int64_t v125 = v123 + 1;
        if (v122 == 42) {
            // 0x409ca0
            v124 = v125;
            if (*(char *)v125 == 0) {
                goto lab_0x409ca7;
            }
        }
        int64_t str3 = v125 + (int64_t)strlen(str2); // 0x409c70
        int64_t v126 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x409c7d
        char v127 = *(char *)v126; // 0x409c82
        v122 = v127;
        if (v127 == 0) {
            // 0x409cb4
            v121 = str;
            return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
        }
        v123 = v126;
        str2 = (char *)v123;
    }
    // 0x409c8b
    v124 = v123 + 1;
  lab_0x409ca7:
    // 0x409cb4
    v121 = v124 + (int64_t)strlen(str2);
    return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
  lab_0x409d22:;
    char * v128 = (char *)v117;
    g54 = v128;
    v3 = v128;
    v7 = v117;
    goto lab_0x409c5a;
  lab_0x409d66:;
    int64_t v129 = v118 + path; // 0x409d66
    *(int64_t *)v129 = 0x2e74657372616863;
    *(int16_t *)(v129 + 12) = 115;
    *(int32_t *)(v129 + 8) = 0x61696c61;
    if (open((char *)path, O_RDONLY) >= 0) {
        // 0x409dc1
        int32_t fd; // 0x409d92
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40a0f2
            close(fd);
        } else {
            int64_t v130 = (int64_t)stream; // 0x409dcb
            v26 = &v23;
            v27 = &v24;
            v30 = (int64_t *)(v130 + 8);
            v28 = (int64_t *)(v130 + 16);
            v25 = 0;
            v22 = 0;
            while (true) {
              lab_0x409e00_2:;
                int64_t v131 = v22;
                int64_t v132 = v25;
                uint64_t v133 = *v30; // 0x409e00
                uint64_t v134 = *v28; // 0x409e04
                v114 = v132;
                v115 = v133;
                v116 = v131;
                v12 = v132;
                v10 = v131;
                if (v133 >= v134) {
                    goto lab_0x409f8c;
                } else {
                    goto lab_0x409e0e;
                }
            }
          lab_0x409f9f:;
            int64_t v135 = v18;
            if (v135 != 0) {
                int64_t v136 = v19;
                *(char *)(v136 + v135) = 0;
            }
        }
    }
    goto lab_0x409da4;
  lab_0x409d0b:;
    int64_t * mem4 = malloc(size2); // 0x409d0b
    v117 = (int64_t)&g17;
    if (mem4 != NULL) {
        // 0x409db1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v118 = v8;
        goto lab_0x409d66;
    } else {
        goto lab_0x409d22;
    }
  lab_0x409da4:
    // 0x409da4
    free((int64_t *)path);
    v117 = (int64_t)&g17;
    goto lab_0x409d22;
}
// Address range: 0x40a190 - 0x40a19e
int64_t function_40a190(int64_t a1, int64_t a2) {
    // 0x40a190
    int64_t v1; // 0x40a190
    return function_408a90(a1, 0, 3, v1);
}
// Address range: 0x40a1a0 - 0x40a1fd
int64_t function_40a1a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a1a0
    return function_401b08();
}
// Address range: 0x40a200 - 0x40a201
int64_t function_40a200(void) {
    // 0x40a200
    int64_t result; // 0x40a200
    return result;
}
// Address range: 0x40a210 - 0x40a228
int64_t function_40a210(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a210
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g23);
}
// Address range: 0x40a228 - 0x40a248
int64_t function_40a228(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g19; // 0x40a232
    while (*(int64_t *)v1 != -1) {
        // 0x40a233
        v1 -= 8;
    }
    // 0x40a244
    return result;
}
