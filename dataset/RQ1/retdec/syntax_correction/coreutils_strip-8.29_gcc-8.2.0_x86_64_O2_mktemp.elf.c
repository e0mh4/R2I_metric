#include "decompile_retdec.h"
// Address range: 0x401bd0 - 0x401bd5
int64_t function_401bd0(void) {
    // 0x401bd0
    abort();
    // UNREACHABLE
}
// Address range: 0x401bd5 - 0x401bda
int64_t function_401bd5(void) {
    // 0x401bd5
    abort();
    // UNREACHABLE
}
// Address range: 0x401bda - 0x401bdf
int64_t function_401bda(void) {
    // 0x401bda
    abort();
    // UNREACHABLE
}
// Address range: 0x401bdf - 0x401be4
int64_t function_401bdf(void) {
    // 0x401bdf
    abort();
    // UNREACHABLE
}
// Address range: 0x401be4 - 0x401be9
int64_t function_401be4(void) {
    // 0x401be4
    abort();
    // UNREACHABLE
}
// Address range: 0x401be9 - 0x401bee
int64_t function_401be9(void) {
    // 0x401be9
    abort();
    // UNREACHABLE
}
// Address range: 0x401bee - 0x401bf3
int64_t function_401bee(void) {
    // 0x401bee
    abort();
    // UNREACHABLE
}
// Address range: 0x401c00 - 0x4022a0
int64_t function_401c00(int64_t a1, int64_t a2) {
    // 0x401c00
    function_402a20(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401c00
    function_4074c0(0x402380, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    char v2 = 0; // 0x401c67
    int64_t v3 = 0; // 0x401c67
    int64_t v4 = 0; // 0x401c67
    int64_t v5 = 0; // 0x401c67
    int64_t v6 = 0; // 0x401c67
    int64_t v7 = 0; // 0x401c67
    int64_t v8 = 0; // 0x401c67
    int64_t v9; // 0x401c00
    int64_t v10; // 0x401c00
    int64_t v11; // 0x401c00
    int64_t v12; // 0x401c00
    int64_t v13; // 0x401c00
    int64_t v14; // 0x401c00
    char v15; // 0x401c00
    while (true) {
      lab_0x401c70:
        // 0x401c70
        v15 = v2;
        int64_t v16 = v3; // 0x401ceb
        int64_t v17 = v4; // 0x401c00
        int64_t v18 = v5; // 0x401c00
        int64_t v19 = v6; // 0x401c00
        int64_t v20 = v7; // 0x401c00
        int64_t v21 = v8; // 0x401c00
        while (true) {
            // 0x401c70
            v14 = v16;
            int64_t v22 = v17; // 0x401d70
            int64_t v23 = v18; // 0x401c00
            int64_t v24 = v19; // 0x401c00
            int64_t v25 = v20; // 0x401c00
            int64_t v26 = v21; // 0x401c00
            uint32_t v27; // 0x401c00
            while (true) {
                // 0x401c70
                v12 = v26;
                v13 = v22;
                int64_t v28 = v23; // 0x401c00
                int64_t v29 = v24; // 0x401c00
                int64_t v30 = v25; // 0x401c00
                while (true) {
                    // 0x401c70
                    v9 = v28;
                    while (true) {
                        // 0x401c70
                        v10 = v29;
                        int64_t v31 = v30; // 0x401c00
                        while (true) {
                          lab_0x401c70_2:
                            // 0x401c70
                            v11 = v31;
                            v27 = (int32_t)function_405f90(a1 & 0xffffffff, a2, "dp:qtuV", &g2, 0, v1);
                            switch (v27) {
                                case -1: {
                                    goto lab_0x401d87;
                                }
                                case 112: {
                                    goto lab_0x401d70;
                                }
                                default: {
                                    if (v27 <= 112) {
                                        // break (via goto) -> 0x401cb8
                                        goto lab_0x401cb8;
                                    }
                                    // 0x401c9b
                                    v2 = 1;
                                    v3 = v14;
                                    v4 = v13;
                                    v5 = v9;
                                    v6 = v10;
                                    v7 = v11;
                                    v8 = 1;
                                    if (v27 == 116) {
                                        goto lab_0x401c70;
                                    } else {
                                        if (v27 <= 116) {
                                            // break -> 0x401d00
                                            break;
                                        }
                                        // 0x401ca6
                                        v31 = 1;
                                        if (v27 != 117) {
                                            // break (via goto) -> 0x401ce0
                                            goto lab_0x401ce0;
                                        }
                                        goto lab_0x401c70_2;
                                    }
                                }
                            }
                        }
                        // 0x401d00
                        if (v27 != 113) {
                            // 0x4021ca
                            function_4023c0(1);
                            // UNREACHABLE
                        }
                    }
                  lab_0x401cb8:
                    if (v27 == -130) {
                        // 0x4021d4
                        function_4023c0(0);
                        // UNREACHABLE
                    }
                    if (v27 <= 0xffffff7e) {
                        if (v27 != -131) {
                            goto lab_0x4021ca;
                        } else {
                            goto lab_0x401d23;
                        }
                    }
                    if (v27 == 86) {
                      lab_0x401d23:
                        // 0x401d23
                        function_404d50((int64_t)g29, "mktemp", "GNU coreutils", (int64_t)g18, "Jim Meyering", "Eric Blake");
                        exit(0);
                        // UNREACHABLE
                    }
                    // 0x401cca
                    v28 = 1;
                    v29 = v10;
                    v30 = v11;
                    if (v27 != 100) {
                        // 0x4021ca
                        function_4023c0(1);
                        // UNREACHABLE
                    }
                }
              lab_0x401d70:
                // 0x401d70
                v22 = g48;
                v23 = v9;
                v24 = v10;
                v25 = v11;
                v26 = 1;
            }
          lab_0x401ce0:
            if (v27 != 128) {
              lab_0x4021ca:
                // 0x4021ca
                function_4023c0(1);
                // UNREACHABLE
            }
            // 0x401ceb
            v16 = g48;
            v17 = v13;
            v18 = v9;
            v19 = v10;
            v20 = v11;
            v21 = v12;
        }
    }
  lab_0x401d87:;
    int32_t v32 = *(int32_t *)0x60b2bc; // 0x401d87
    uint32_t v33 = (int32_t)a1 - v32; // 0x401d8e
    if (v33 >= 2) {
        // 0x4021ab
        error(0, (int32_t)"too many templates" ^ (int32_t)"too many templates", dcgettext(NULL, "too many templates", 5));
        // 0x4021ca
        function_4023c0(1);
        // UNREACHABLE
    }
    int64_t v34; // 0x401c00
    int64_t v35; // 0x401c00
    char * format; // 0x402282
    if (v33 == 0) {
        if (v14 == 0) {
            // 0x4020a9
            v35 = (int64_t)"tmp.XXXXXXXXXX";
            v34 = 1;
            goto lab_0x4020b4;
        } else {
            // 0x401f60
            goto lab_0x401ddd;
        }
    } else {
        // 0x401da1
        v35 = *(int64_t *)(8 * (int64_t)v32 + a2);
        v34 = v12;
        if (v14 == 0) {
            goto lab_0x4020b4;
        } else {
            // 0x401db1
            int64_t v36; // 0x401c00
            while (v36 != 0) {
                // 0x401db1
                int64_t v37; // 0x401c00
                int64_t v38 = v37;
                char v39 = *(char *)v38; // 0x401dba
                int64_t v40; // 0x401c00
                int64_t v41 = v40 - 1; // 0x401dba
                v36 = v41;
                int64_t v42; // 0x401c00
                v37 = v38 + v42;
                int64_t v43 = v41; // 0x401dba
                if (v39 == 0) {
                    // break -> 
                    break;
                }
                v40 = v36;
                v43 = 0;
            }
            int64_t v44 = -2; // 0x401dc5
            int64_t v45; // 0x401da7
            if (v44 == 0) {
                // 0x40226b
                function_404640(v45);
                format = dcgettext(NULL, "with --suffix, template %s must end in X", 5);
                error(1, (int32_t)"with --suffix, template %s must end in X" ^ (int32_t)"with --suffix, template %s must end in X", format);
                return &g50;
            }
            // 0x401dd2
            if (*(char *)(v45 - 1 + v44) != 88) {
                // 0x40226b
                function_404640(v45);
                format = dcgettext(NULL, "with --suffix, template %s must end in X", 5);
                error(1, (int32_t)"with --suffix, template %s must end in X" ^ (int32_t)"with --suffix, template %s must end in X", format);
                return &g50;
            }
            goto lab_0x401ddd;
        }
    }
  lab_0x4020b4:;
    int64_t str = function_4050c0(v35); // 0x4020b7
    char * found_char_pos = strrchr((char *)str, 88); // 0x4020c7
    int64_t v46 = (int64_t)found_char_pos; // 0x4020c7
    int64_t v47; // 0x401c00
    int64_t v48; // 0x401c00
    bool v49; // 0x401c00
    if (found_char_pos == NULL) {
        char v50 = v46;
        int64_t v51 = v49 ? -1 : 1;
        int64_t v52 = str; // 0x401c00
        int64_t v53 = -1; // 0x40218e
        int64_t v54 = 0; // 0x40218e
        while (v53 != 0) {
            int64_t v55 = v52;
            v53--;
            v52 = v55 + v51;
            v54 = v53;
            if (*(char *)v55 == v50) {
                // break -> 
                break;
            }
            v54 = 0;
        }
        v47 = v51;
        v48 = str - 1 + -1 - v54;
    } else {
        // 0x4020b4
        v47 = v49 ? -1 : 1;
        v48 = v46 + 1;
    }
    int64_t v56 = v47;
    int64_t v57 = v48; // 0x4020e2
    int64_t v58 = -1;
    int64_t v59 = 0; // 0x4020e2
    while (v58 != 0) {
        int64_t v60 = v57;
        int64_t v61 = v58 - 1; // 0x4020e2
        int64_t v62 = v61; // 0x4020e2
        v57 = v60 + v56;
        v59 = v61;
        if (*(char *)v60 == 0) {
            // break -> 
            break;
        }
        v58 = v62;
        v59 = 0;
    }
    int32_t v63 = -2 - (int32_t)v59; // 0x4020f3
    int64_t v64 = str; // 0x4020f3
    int64_t v65 = v48; // 0x4020f3
    int64_t v66 = 88; // 0x4020f3
    int64_t v67 = v34; // 0x4020f3
    goto lab_0x401e38;
  lab_0x401ddd:;
    int64_t v88 = 14;
    int64_t v89 = -1; // 0x401ded
    int64_t v90 = v14; // 0x401ded
    int64_t v91 = 0; // 0x401ded
    while (v89 != 0) {
        int64_t v92 = v90;
        int64_t v93 = v89 - 1; // 0x401ded
        v89 = v93;
        v90 = v92 + (v49 ? -1 : 1);
        v91 = v93;
        if (*(char *)v92 == 0) {
            // break -> 
            break;
        }
        v91 = 0;
    }
    int64_t v94 = -2 - v91; // 0x401df5
    int64_t v95 = function_404e90(v88 + 1 + v94); // 0x401e08
    memcpy((int64_t *)v95, (int64_t *)(int64_t)"tmp.XXXXXXXXXX", (int32_t)v88);
    int64_t v96 = v95 + v88; // 0x401e25
    memcpy((int64_t *)v96, (int64_t *)v14, -1 - (int32_t)v91);
    v63 = v94;
    v64 = v95;
    v65 = v96;
    v66 = v14;
    v67 = 1;
    goto lab_0x401e38;
  lab_0x401e38:;
    int64_t v68 = v66;
    int64_t v69 = v65;
    int64_t v70 = v64;
    uint32_t v71 = v63;
    int64_t v72; // 0x401c00
    if (v71 == 0) {
        goto lab_0x401e51;
    } else {
        int64_t v73 = function_402890(v69, v68); // 0x401e43
        v72 = v69;
        if (v73 != v69) {
            goto lab_0x40223b;
        } else {
            goto lab_0x401e51;
        }
    }
  lab_0x401e51:;
    int64_t v74 = v70; // 0x401e57
    int64_t v75 = v70; // 0x401e57
    int64_t v76; // 0x401c00
    int64_t v77; // 0x401e85
    if (v69 == v70) {
        goto lab_0x40220b;
    } else {
        // 0x401e5d
        v74 = v70;
        v75 = v69;
        if (*(char *)(v69 - 1) != 88) {
            goto lab_0x40220b;
        } else {
            int64_t v78 = v69 - 2;
            while (v70 - 1 != v78) {
                int64_t v79 = v78 - 1; // 0x401e80
                if (*(char *)v78 != 88) {
                    // break -> 0x401e8d
                    break;
                }
                v78 = v79;
            }
            // 0x401e8d
            v77 = v69 + -1 - v78;
            v74 = v70;
            v75 = v77;
            if (v77 < 3) {
                goto lab_0x40220b;
            } else {
                // 0x401e97
                v76 = v70;
                if ((char)v67 == 0) {
                    goto lab_0x401ee5;
                } else {
                    if (v15 != 0) {
                        // 0x402036
                        getenv("TMPDIR");
                        if (function_402890(v70, v68) == v70) {
                            goto lab_0x401eca;
                        } else {
                            // 0x402079
                            function_404640(v70);
                            error(1, (int32_t)"invalid template, %s, contains directory separator" ^ (int32_t)"invalid template, %s, contains directory separator", dcgettext(NULL, "invalid template, %s, contains directory separator", 5));
                            // 0x4020a9
                            v35 = (int64_t)"tmp.XXXXXXXXXX";
                            v34 = 1;
                            goto lab_0x4020b4;
                        }
                    } else {
                        if (v13 == 0) {
                            // 0x402010
                            getenv("TMPDIR");
                            goto lab_0x401ec1;
                        } else {
                            // 0x401eb5
                            if (*(char *)v13 == 0) {
                                // 0x402010
                                getenv("TMPDIR");
                                goto lab_0x401ec1;
                            } else {
                                goto lab_0x401ec1;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x40220b:
    // 0x40220b
    function_404640(v74);
    error(1, (int32_t)"too few X's in template %s" ^ (int32_t)"too few X's in template %s", dcgettext(NULL, "too few X's in template %s", 5));
    v72 = v75;
    goto lab_0x40223b;
  lab_0x40223b:
    // 0x40223b
    function_404640(v72);
    error(1, (int32_t)"invalid suffix %s, contains directory separator" ^ (int32_t)"invalid suffix %s, contains directory separator", dcgettext(NULL, "invalid suffix %s, contains directory separator", 5));
    int64_t v80 = (int32_t)"invalid suffix %s, contains directory separator" ^ (int32_t)"invalid suffix %s, contains directory separator"; // 0x402266
    // 0x40226b
    function_404640(v80);
    format = dcgettext(NULL, "with --suffix, template %s must end in X", 5);
    error(1, (int32_t)"with --suffix, template %s must end in X" ^ (int32_t)"with --suffix, template %s must end in X", format);
    return &g50;
  lab_0x401ee5:;
    int64_t v81 = v76;
    int64_t str2 = function_4050c0(v81); // 0x401ee8
    int64_t v82 = v71;
    if (v9 == 0) {
        if (v11 != 0) {
            // 0x401fc0
            if ((int32_t)function_404870(str2, v82, 0, 2) >= 0) {
                // 0x401fda
                puts((char *)str2);
                // 0x401faf
                return 0;
            }
            goto lab_0x401fa1;
        } else {
            int32_t fd = function_404870(str2, v82, 0, 0); // 0x401f99
            if (fd >= 0) {
                // 0x4020f8
                if (close(fd) != 0) {
                    goto lab_0x401fa1;
                } else {
                    goto lab_0x402107;
                }
            } else {
                goto lab_0x401fa1;
            }
        }
    } else {
        if (v11 != 0) {
            int64_t v83 = function_404870(str2, v82, 0, 2); // 0x401ff7
            if ((int32_t)v83 == 0) {
                // 0x402006
                puts((char *)str2);
                // 0x401faf
                return v83 & 0xffffffff;
            }
            goto lab_0x401f20;
        } else {
            // 0x401f02
            if ((int32_t)function_404870(str2, v82, 0, 1) == 0) {
                goto lab_0x402107;
            } else {
                goto lab_0x401f20;
            }
        }
    }
  lab_0x401eca:;
    int64_t v84 = function_402920(); // 0x401ed2
    free((int64_t *)v70);
    v76 = v84;
    goto lab_0x401ee5;
  lab_0x401fa1:
    // 0x401fa1
    if (v10 != 0) {
        // 0x401faf
        return 1;
    }
    // 0x40216d
    function_404640(v81);
    int64_t v85 = (int64_t)"failed to create file via template %s"; // 0x402182
    goto lab_0x401f3e;
  lab_0x401f20:
    // 0x401f20
    if (v10 != 0) {
        // 0x401faf
        return 1;
    }
    // 0x401f29
    function_404640(v81);
    v85 = (int64_t)"failed to create directory via template %s";
    goto lab_0x401f3e;
  lab_0x402107:;
    char * str3 = (char *)str2; // 0x40210a
    puts(str3);
    g34 = 1;
    if ((int32_t)function_402770((int64_t)g29) == 0) {
        // 0x401faf
        int64_t v86; // 0x401c00
        int64_t result = v86;
        return result;
    }
    int32_t err_num = *__errno_location(); // 0x402134
    remove(str3);
    if (v10 == 0) {
        // 0x402144
        error(0, err_num, dcgettext(NULL, "write error", 5));
    }
    // 0x401faf
    return 1;
  lab_0x401ec1:
    // 0x401ec1
    if (*(char *)v70 == 47) {
        int64_t v87 = function_404640(v70); // 0x4021de
        error(1, (int32_t)"invalid template, %s; with --tmpdir, it may not be absolute" ^ (int32_t)"invalid template, %s; with --tmpdir, it may not be absolute", dcgettext(NULL, "invalid template, %s; with --tmpdir, it may not be absolute", 5));
        v74 = v87;
        v75 = v77;
        goto lab_0x40220b;
    } else {
        goto lab_0x401eca;
    }
  lab_0x401f3e:
    // 0x401f3e
    error(0, *__errno_location(), dcgettext(NULL, (char *)v85, 5));
    // 0x401faf
    return 1;
}
// Address range: 0x4022a0 - 0x4022cb
// Address range: 0x4022cb - 0x4022ea
int64_t function_4022cb(void) {
    // 0x4022cb
    return &g28;
}
// Address range: 0x4022ea - 0x402321
int64_t function_4022ea(void) {
    // 0x4022ea
    return 0;
}
// Address range: 0x402321 - 0x402378
int64_t function_402321(void) {
    // 0x402321
    if (g32 != 0) {
        // 0x402377
        int64_t result; // 0x402321
        return result;
    }
    int64_t v1 = g33; // 0x402354
    int64_t result2; // 0x402366
    if (g33 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402366
        result2 = function_4022cb();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402356
        v1++;
    }
    // 0x40234a
    g33 = v1;
    // 0x402366
    result2 = function_4022cb();
    g32 = 1;
    return result2;
}
// Address range: 0x402378 - 0x40237d
int64_t function_402378(void) {
    // 0x402378
    return function_4022ea();
}
// Address range: 0x402380 - 0x4023b3
int64_t function_402380(void) {
    // 0x402380
    if (g34 == 0) {
        // 0x402389
        return function_4027f0();
    }
    int64_t result = function_402770((int64_t)g31); // 0x40239b
    if ((int32_t)result == 0) {
        // 0x4023a4
        return result;
    }
    // 0x4023a9
    _exit(1);
    // UNREACHABLE
}
// Address range: 0x4023c0 - 0x40276d
int64_t function_4023c0(int64_t a1) {
    int32_t status = a1; // 0x4023d6
    if (status != 0) {
        // 0x4023da
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4023ff
        exit(status);
        // UNREACHABLE
    }
    // 0x402406
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [TEMPLATE]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Create a temporary file or directory, safely, and print its name.\nTEMPLATE must contain at least 3 consecutive 'X's in last component.\nIf TEMPLATE is not specified, use tmp.XXXXXXXXXX, and --tmpdir is implied.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "Files are created u+rw, and directories u+rwx, minus umask restrictions.\n", 5), g29);
    fputc_unlocked(10, g29);
    fputs_unlocked(dcgettext(NULL, "  -d, --directory     create a directory, not a file\n  -u, --dry-run       do not create anything; merely print a name (unsafe)\n  -q, --quiet         suppress diagnostics about file/dir-creation failure\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --suffix=SUFF   append SUFF to TEMPLATE; SUFF must not contain a slash.\n                        This option is implied if TEMPLATE does not end in X\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -p DIR, --tmpdir[=DIR]  interpret TEMPLATE relative to DIR; if DIR is not\n                        specified, use $TMPDIR if set, else /tmp.  With\n                        this option, TEMPLATE must not be an absolute name;\n                        unlike with -t, TEMPLATE may contain slashes, but\n                        mktemp creates only the final component\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -t                  interpret TEMPLATE as a single file name component,\n                        relative to a directory: $TMPDIR, if set; else the\n                        directory specified via -p; else /tmp [deprecated]\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x40254d
    bool v2; // 0x4023c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4025d0
    int64_t v6 = *(int64_t *)v5; // 0x4025d4
    int64_t v7 = 7; // 0x4025da
    while (v6 != 0) {
        int64_t v8 = (int64_t)"mktemp";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4025e6
        char v11 = *(char *)v9; // 0x4025e6
        char v12 = v11; // 0x4025e6
        bool v13 = false; // 0x4025e6
        while (v10 == v11) {
            // 0x4025dc
            v7--;
            int64_t v14 = v9 + v3; // 0x4025e6
            int64_t v15 = v8 + v3; // 0x4025e6
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
            // break -> 0x4025f2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x4025f2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402704;
        } else {
            // 0x4026ee
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402743
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402654;
            } else {
                goto lab_0x402704;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402654;
        } else {
            // 0x40263a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402743
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402654;
            } else {
                goto lab_0x402654;
            }
        }
    }
  lab_0x402704:
    // 0x402704
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402694
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4023ff
    exit(status);
    // UNREACHABLE
  lab_0x402654:
    // 0x402654
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402694
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4023ff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402770 - 0x4027cd
int64_t function_402770(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x402777
    int64_t v2; // 0x402770
    int64_t result = function_405120(a1, v2); // 0x402788
    if ((v2 & 32) != 0) {
        // 0x4027b0
        if ((int32_t)result == 0) {
            // 0x4027b4
            *__errno_location() = 0;
        }
        // 0x4027aa
        return 0xffffffff;
    }
    // 0x402791
    if ((int32_t)result == 0) {
        // 0x4027aa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x402798
    if (v1 == 0) {
        // 0x40279a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4027aa
    return result2;
}
// Address range: 0x4027d0 - 0x4027d8
int64_t function_4027d0(int64_t a1) {
    // 0x4027d0
    g36 = a1;
    int64_t result; // 0x4027d0
    return result;
}
// Address range: 0x4027e0 - 0x4027e8
int64_t function_4027e0(int64_t a1) {
    // 0x4027e0
    g35 = a1;
    int64_t result; // 0x4027e0
    return result;
}
// Address range: 0x4027f0 - 0x40288e
int64_t function_4027f0(void) {
    // 0x4027f0
    int32_t * err_num; // 0x402806
    if ((int32_t)function_402770((int64_t)g29) == 0) {
        goto lab_0x40281c;
    } else {
        // 0x402806
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x402833;
        } else {
            // 0x402817
            if (*err_num != 32) {
                goto lab_0x402833;
            } else {
                goto lab_0x40281c;
            }
        }
    }
  lab_0x40281c:;
    int64_t result = function_402770((int64_t)g31); // 0x402823
    if ((int32_t)result == 0) {
        // 0x40282c
        return result;
    }
    // 0x40286e
    _exit(g19);
    // UNREACHABLE
  lab_0x402833:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40283f
    if (g36 == 0) {
        // 0x402879
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402853
        error(0, *err_num, "%s: %s", (char *)function_404490((int64_t)g36), v1);
    }
    // 0x40286e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x402890 - 0x4028eb
int64_t function_402890(int64_t a1, int64_t a2) {
    // 0x402890
    int64_t v1; // 0x402890
    char v2 = v1;
    int64_t v3 = a1; // 0x402899
    int64_t v4 = a1; // 0x402899
    char v5 = v2; // 0x402899
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x4028a4
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x4028a0
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x4028ae
    if (v5 == 0) {
      lab_0x4028ea:
        // 0x4028ea
        return result;
    }
    int64_t v7 = v4; // 0x4028d8
    int64_t v8 = 0; // 0x4028d8
    int64_t v9; // 0x402890
    int64_t v10; // 0x4028da
    char v11; // 0x4028de
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x4028d5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x4028da
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x4028d5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x4028ca
    char v14 = *(char *)v13; // 0x4028ce
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
            // 0x4028d5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x4028da
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x4028d5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x4028c0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x4028ea
    return result2;
}
// Address range: 0x4028f0 - 0x40291b
int64_t function_4028f0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4028f4
    int64_t result = len; // 0x4028f4
    if (len < 2) {
        // 0x40290a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x402908
    while (*(char *)(v1 + str) == 47) {
        // 0x402910
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40290a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40290a
    return result2;
}
// Address range: 0x402920 - 0x402938
int64_t function_402920(void) {
    // 0x402920
    int64_t v1; // 0x402920
    int64_t result = function_402940(v1, v1, v1); // 0x402924
    if (result != 0) {
        // 0x40292e
        return result;
    }
    // 0x402933
    function_4050e0(v1);
    // UNREACHABLE
}
// Address range: 0x402940 - 0x402a19
int64_t function_402940(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_402890(a1, a2); // 0x402958
    int64_t v2 = function_4028f0(v1); // 0x402963
    int64_t v3 = 0; // 0x402977
    if (v2 != 0) {
        // 0x402979
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x402990
    int64_t v4 = a2; // 0x402990
    int64_t v5; // 0x402940
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x402a08
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x402971
    int32_t len = strlen((char *)str); // 0x402995
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x4029a5
    if (mem == NULL) {
        // 0x4029f1
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x4029bb
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x4029c7
    if (a3 != 0) {
        // 0x4029d0
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x4029e3
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x4029f1
    return (int64_t)mem;
}
// Address range: 0x402a20 - 0x402ab9
int64_t function_402a20(int64_t str) {
    // 0x402a20
    if (str == 0) {
        // 0x402a99
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402a2e
    int64_t result = (int64_t)found_char_pos; // 0x402a2e
    if (found_char_pos == NULL) {
        // 0x402a89
        g37 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402a38
    if (v1 - str < 7) {
        // 0x402a89
        g37 = str;
        g30 = str;
        return result;
    }
    // 0x402a48
    bool v2; // 0x402a20
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402a20
    int64_t v5 = result - 6; // 0x402a20
    int64_t v6 = 7; // 0x402a56
    unsigned char v7 = *(char *)v5; // 0x402a56
    char v8 = *(char *)v4; // 0x402a56
    char v9 = v8; // 0x402a56
    bool v10 = false; // 0x402a56
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
    int64_t v12 = (int64_t)"lt-"; // 0x402a60
    int64_t v13 = v1; // 0x402a60
    int64_t v14 = 3; // 0x402a60
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402a89
        g37 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402a72
    char v16 = *(char *)v12; // 0x402a72
    char v17 = v16; // 0x402a72
    bool v18 = false; // 0x402a72
    while (v15 == v16) {
        // 0x402a62
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
    int64_t v20 = v1; // 0x402a7c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402a7e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x402a89
    g37 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402ac0 - 0x402bb2
int64_t function_402ac0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402ad4
    int64_t result = (int64_t)v1; // 0x402ad4
    if (result != a1) {
        // 0x402ae1
        return result;
    }
    int64_t v2 = function_4060f0(); // 0x402af0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402ba6
    if (v3 == 85) {
        // 0x402b00
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402b98
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x402b2e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x402b3b
        // 0x402ae1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402b98
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x402b7d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x402b8a
    // 0x402ae1
    return result4;
}
// Address range: 0x402bc0 - 0x402c17
int64_t function_402bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402bc0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402c08
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402c17 - 0x403de1
int64_t function_402c17(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402c61
    int64_t v3 = 0; // 0x402c61
    int64_t v4; // 0x402c17
    int64_t v5; // 0x402c17
    int64_t v6; // 0x402c17
    int64_t v7; // 0x402c17
    int64_t v8; // 0x402c17
    int64_t v9; // 0x402c17
    int64_t v10; // 0x402c17
    int64_t v11; // 0x402c17
    int64_t v12; // 0x402c17
    int64_t v13; // 0x402c17
    int64_t v14; // 0x402c17
    int64_t v15; // 0x402c17
    int64_t v16; // 0x402c17
    int64_t v17; // 0x402c17
    int64_t v18; // 0x402c17
    int64_t result; // 0x402c17
    int64_t v19; // 0x402c17
    int32_t wc; // bp+132, 0x402c17
    int64_t ps; // bp+136, 0x402c17
    char v20; // 0x4031d0
    int64_t v21; // 0x4031d0
    int64_t v22; // 0x403578
    int64_t v23; // 0x402c17
    int64_t v24; // 0x403597
    int32_t v25; // 0x402c17
    while (true) {
      lab_0x402c68_2:
        // 0x402c68
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402c17
        int64_t v27; // 0x402c9c
        while (true) {
          lab_0x402c68:
            // 0x402c68
            v5 = v26;
            bool v28 = v15 == v5; // 0x402c73
            if (v15 == -1) {
                // 0x402c75
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402c83
            if (v28) {
                // break (via goto) -> 0x4033e8
                goto lab_0x4033e8;
            }
            // 0x402c8c
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
                    // 0x40327b
                    if (v25 % 2 == 0) {
                        goto lab_0x402dc1;
                    }
                    // 0x40369d
                    v26 = v5 + 1;
                    goto lab_0x402c68;
                }
                case 7: {
                    goto lab_0x402dc1;
                }
                case 8: {
                    goto lab_0x402dc1;
                }
                case 9: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402dc1;
                }
                case 12: {
                    goto lab_0x402dc1;
                }
                case 13: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402d8d;
                }
                case 36: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402dc1;
                }
                case 38: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402dc1;
                }
                case 44: {
                    goto lab_0x402dc1;
                }
                case 45: {
                    goto lab_0x402dc1;
                }
                case 46: {
                    goto lab_0x402dc1;
                }
                case 47: {
                    goto lab_0x402dc1;
                }
                case 48: {
                    goto lab_0x402dc1;
                }
                case 49: {
                    goto lab_0x402dc1;
                }
                case 50: {
                    goto lab_0x402dc1;
                }
                case 51: {
                    goto lab_0x402dc1;
                }
                case 52: {
                    goto lab_0x402dc1;
                }
                case 53: {
                    goto lab_0x402dc1;
                }
                case 54: {
                    goto lab_0x402dc1;
                }
                case 55: {
                    goto lab_0x402dc1;
                }
                case 56: {
                    goto lab_0x402dc1;
                }
                case 57: {
                    goto lab_0x402dc1;
                }
                case 58: {
                    goto lab_0x402dc1;
                }
                case 59: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402dc1;
                }
                case 66: {
                    goto lab_0x402dc1;
                }
                case 67: {
                    goto lab_0x402dc1;
                }
                case 68: {
                    goto lab_0x402dc1;
                }
                case 69: {
                    goto lab_0x402dc1;
                }
                case 70: {
                    goto lab_0x402dc1;
                }
                case 71: {
                    goto lab_0x402dc1;
                }
                case 72: {
                    goto lab_0x402dc1;
                }
                case 73: {
                    goto lab_0x402dc1;
                }
                case 74: {
                    goto lab_0x402dc1;
                }
                case 75: {
                    goto lab_0x402dc1;
                }
                case 76: {
                    goto lab_0x402dc1;
                }
                case 77: {
                    goto lab_0x402dc1;
                }
                case 78: {
                    goto lab_0x402dc1;
                }
                case 79: {
                    goto lab_0x402dc1;
                }
                case 80: {
                    goto lab_0x402dc1;
                }
                case 81: {
                    goto lab_0x402dc1;
                }
                case 82: {
                    goto lab_0x402dc1;
                }
                case 83: {
                    goto lab_0x402dc1;
                }
                case 84: {
                    goto lab_0x402dc1;
                }
                case 85: {
                    goto lab_0x402dc1;
                }
                case 86: {
                    goto lab_0x402dc1;
                }
                case 87: {
                    goto lab_0x402dc1;
                }
                case 88: {
                    goto lab_0x402dc1;
                }
                case 89: {
                    goto lab_0x402dc1;
                }
                case 90: {
                    goto lab_0x402dc1;
                }
                case 91: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402dc1;
                }
                case 94: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402dc1;
                }
                case 96: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402dc1;
                }
                case 98: {
                    goto lab_0x402dc1;
                }
                case 99: {
                    goto lab_0x402dc1;
                }
                case 100: {
                    goto lab_0x402dc1;
                }
                case 101: {
                    goto lab_0x402dc1;
                }
                case 102: {
                    goto lab_0x402dc1;
                }
                case 103: {
                    goto lab_0x402dc1;
                }
                case 104: {
                    goto lab_0x402dc1;
                }
                case 105: {
                    goto lab_0x402dc1;
                }
                case 106: {
                    goto lab_0x402dc1;
                }
                case 107: {
                    goto lab_0x402dc1;
                }
                case 108: {
                    goto lab_0x402dc1;
                }
                case 109: {
                    goto lab_0x402dc1;
                }
                case 110: {
                    goto lab_0x402dc1;
                }
                case 111: {
                    goto lab_0x402dc1;
                }
                case 112: {
                    goto lab_0x402dc1;
                }
                case 113: {
                    goto lab_0x402dc1;
                }
                case 114: {
                    goto lab_0x402dc1;
                }
                case 115: {
                    goto lab_0x402dc1;
                }
                case 116: {
                    goto lab_0x402dc1;
                }
                case 117: {
                    goto lab_0x402dc1;
                }
                case 118: {
                    goto lab_0x402dc1;
                }
                case 119: {
                    goto lab_0x402dc1;
                }
                case 120: {
                    goto lab_0x402dc1;
                }
                case 121: {
                    goto lab_0x402dc1;
                }
                case 122: {
                    goto lab_0x402dc1;
                }
                case 123: {
                    goto lab_0x402d65;
                }
                case 124: {
                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402d65;
                }
                case 126: {
                    goto lab_0x402d8d;
                }
                default: {
                    goto lab_0x403165;
                }
            }
        }
      lab_0x403165:
        if (v23 != 1) {
            // 0x4034d0
            ps = 0;
            int64_t len = v15; // 0x4034e0
            if (v15 == -1) {
                // 0x4034e2
                len = strlen((char *)str);
            }
            // 0x40350e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40356f:
                // 0x40356f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403574
                int64_t v30 = v29 + str;
                v24 = function_406010(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403aea_2;
                    }
                    case -1: {
                        goto lab_0x403aea_2;
                    }
                    case -2: {
                        // 0x403bcd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403c07
                            v19 = v18;
                            int64_t v31 = v18; // 0x403c0a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403c17
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403c10
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403aea
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403aea_2;
                    }
                    case 1: {
                        goto lab_0x403540;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4035ec
                        char v34 = *(char *)v33; // 0x4035fd
                        unsigned char v35; // 0x402c17
                        if (v34 < 125) {
                            // 0x403608
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40361f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4035f0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4035fd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403608
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40361f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4035f0
                            v33++;
                        }
                        goto lab_0x403540;
                    }
                }
            }
            goto lab_0x403aea_2;
        } else {
            // 0x4031b4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402dc1;
        }
    }
  lab_0x4033e8:
    // 0x4033e8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403cea
        if (v8 > result) {
            // 0x403cf3
            *(char *)(v12 + result) = 0;
        }
        // 0x403017
        return result;
    }
    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402dc1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402dd0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402fda_2;
        }
    }
    int64_t v39 = result; // 0x402ed1
    char v40 = v20; // 0x402ed1
    int64_t v41 = v38; // 0x402ed1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402ed1
    int64_t v43 = v36; // 0x402ed1
    goto lab_0x402e4d;
  lab_0x402fda_2:
    // 0x403017
    return function_402bc0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403aea_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402dc1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4036be
        int64_t v50 = v5 + 1; // 0x4037a1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4037a8
        char v52 = v20; // 0x4037a8
        int64_t v53 = result; // 0x4037a8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403771
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403775
            int64_t v56 = v54 + 1; // 0x40377a
            int64_t v57 = v51 + 1; // 0x4037a1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40376c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403771
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403775
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
        goto lab_0x402e4d;
    }
  lab_0x403540:
    // 0x403540
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40355f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403562
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403aea
        goto lab_0x403aea_2;
    }
    goto lab_0x40356f;
  lab_0x402d8d:
    // 0x402d8d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402fda_2;
    }
    goto lab_0x402dc1;
  lab_0x402d65:;
    bool v60 = v15 == 1; // 0x402d70
    if (v15 == -1) {
        // 0x402d72
        v60 = *(char *)v1 == 0;
    }
    // 0x402d7e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402dc1;
    } else {
        goto lab_0x402d8d;
    }
  lab_0x402e4d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402e52
        *(char *)(v44 + v45) = v40;
    }
    // 0x402e56
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402c68_2;
}
// Address range: 0x403df0 - 0x403f8e
int64_t function_403df0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403df2
    int32_t * v3 = __errno_location(); // 0x403e0c
    int64_t v4 = (int64_t)g21; // 0x403e11
    int32_t v5 = *v3; // 0x403e1b
    int64_t v6 = v4; // 0x403e31
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403f89
            function_4050e0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403e40
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403e47
        int64_t v9; // 0x403df0
        if (g21 == &g22) {
            int64_t v10 = function_404ef0(0, v8); // 0x403f6a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x403f6f
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404ef0(v4, v8); // 0x403e5b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x403e6a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x403e6a
        int32_t v14 = v7; // 0x403e71
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403ea1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403eab
    int64_t * v17 = (int64_t *)v15; // 0x403eae
    uint64_t v18 = *v17; // 0x403eae
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403eb1
    int64_t result = *v19; // 0x403eb1
    int64_t v20; // 0x403df0
    uint64_t v21 = function_402bc0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403ed4
    if (v18 > v21) {
        // 0x403f4b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403ee7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403ef7
        free((int64_t *)result);
    }
    int64_t result2 = function_404e90(v22); // 0x403f11
    *v19 = result2;
    int64_t v23; // 0x403df0
    function_402bc0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403f4b
    *v3 = v5;
    return result2;
}
// Address range: 0x403f90 - 0x403fc4
int64_t function_403f90(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403f97
    int64_t result = function_405090(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x403fb6
    return result;
}
// Address range: 0x403fd0 - 0x403fdf
int64_t function_403fd0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x403fdc
    return result;
}
// Address range: 0x403fe0 - 0x403fef
int64_t function_403fe0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403fe8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403ff0 - 0x404023
int64_t function_403ff0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x404009
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40400e
    uint32_t v3 = *v2; // 0x40400e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404012
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404030 - 0x404043
int64_t function_404030(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40403c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404050 - 0x40407b
int64_t function_404050(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x404058
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404075
        abort();
        // UNREACHABLE
    }
    // 0x40406c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x404080 - 0x4040f2
int64_t function_404080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4040a2
    int32_t * v2 = __errno_location(); // 0x4040ab
    uint32_t v3 = *(int32_t *)v1; // 0x4040cb
    int64_t result = function_402bc0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4040da
    return result;
}
// Address range: 0x404100 - 0x4041e1
int64_t function_404100(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x404122
    int32_t * v2 = __errno_location(); // 0x404128
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404147
    int32_t * v4 = (int32_t *)v1; // 0x40414a
    int64_t v5 = function_402bc0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404165
    int64_t v6 = v5 + 1; // 0x40416a
    int64_t result = function_404e90(v6); // 0x40417f
    function_402bc0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4041c4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4041cd
    return result;
}
// Address range: 0x4041f0 - 0x4041fa
int64_t function_4041f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4041f0
    return function_404100(a1, a2, 0, a3);
}
// Address range: 0x404200 - 0x404295
int64_t function_404200(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x404200
    int64_t v2 = v1; // 0x404200
    int64_t v3 = v2; // 0x404214
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x404233
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404230
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x40424d
    if (g22 != 0x60b320) {
        // 0x40424f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g38;
        v6 = &g50;
    }
    int64_t result = v6; // 0x404271
    if (g21 != &g22) {
        // 0x404273
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g50;
    }
    // 0x404286
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x4042a0 - 0x4042b1
int64_t function_4042a0(void) {
    // 0x4042a0
    int64_t v1; // 0x4042a0
    return function_403df0(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x4042c0 - 0x4042ca
int64_t function_4042c0(void) {
    // 0x4042c0
    int64_t v1; // 0x4042c0
    return function_403df0(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x4042d0 - 0x4042e6
int64_t function_4042d0(int64_t a1) {
    // 0x4042d0
    return function_403df0(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x4042f0 - 0x404302
int64_t function_4042f0(int64_t a1, int64_t a2) {
    // 0x4042f0
    return function_403df0(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x404310 - 0x404378
int64_t function_404310(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404320
    return function_403df0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404380 - 0x4043e4
int64_t function_404380(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404390
    return function_403df0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4043f0 - 0x4043fc
int64_t function_4043f0(int64_t a1, int64_t a2) {
    // 0x4043f0
    return function_404310(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404400 - 0x40440f
int64_t function_404400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404400
    return function_404380(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404410 - 0x404480
int64_t function_404410(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x40441d
    int128_t v2 = __asm_movdqa(g40); // 0x404425
    int128_t v3 = __asm_movdqa(g41); // 0x40442d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404442
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404458
    uint32_t v6 = *v5; // 0x404458
    uint32_t v7 = (int32_t)a3 % 32; // 0x40445d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403df0(0, a1, a2, &v4);
}
// Address range: 0x404480 - 0x40448d
int64_t function_404480(int64_t a1, int64_t a2) {
    // 0x404480
    return function_404410(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404490 - 0x4044a1
int64_t function_404490(int64_t a1) {
    // 0x404490
    return function_404410(a1, -1, 58);
}
// Address range: 0x4044b0 - 0x4044ba
int64_t function_4044b0(void) {
    // 0x4044b0
    int64_t v1; // 0x4044b0
    return function_404410(v1, v1, 58);
}
// Address range: 0x4044c0 - 0x40452e
int64_t function_4044c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4044da
    return function_403df0(a1, a3, -1, &v1);
}
// Address range: 0x404530 - 0x40459c
int64_t function_404530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x404537
    int128_t v2 = __asm_movdqa(g40); // 0x40453f
    int128_t v3 = __asm_movdqa(g41); // 0x404547
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404569
    if (a2 == 0 || a3 == 0) {
        // 0x404597
        abort();
        // UNREACHABLE
    }
    // 0x40457a
    return function_403df0(a1, a4, a5, &v4);
}
// Address range: 0x4045a0 - 0x4045a9
int64_t function_4045a0(void) {
    // 0x4045a0
    int64_t v1; // 0x4045a0
    return function_404530(v1, v1, v1, v1, -1);
}
// Address range: 0x4045b0 - 0x4045c7
int64_t function_4045b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045b0
    return function_404530(0, a1, a2, a3, -1);
}
// Address range: 0x4045d0 - 0x4045e3
int64_t function_4045d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4045d0
    return function_404530(0, a1, a2, a3, a4);
}
// Address range: 0x4045f0 - 0x4045fa
int64_t function_4045f0(void) {
    // 0x4045f0
    int64_t v1; // 0x4045f0
    return function_403df0(v1, v1, v1, &g20);
}
// Address range: 0x404600 - 0x404612
int64_t function_404600(int64_t a1, int64_t a2) {
    // 0x404600
    return function_403df0(0, a1, a2, &g20);
}
// Address range: 0x404620 - 0x404631
int64_t function_404620(void) {
    // 0x404620
    int64_t v1; // 0x404620
    return function_403df0(v1, v1, -1, &g20);
}
// Address range: 0x404640 - 0x404656
int64_t function_404640(int64_t a1) {
    // 0x404640
    return function_403df0(0, a1, -1, &g20);
}
// Address range: 0x404660 - 0x4046b4
int64_t function_404660(int64_t a1) {
    // 0x404660
    int64_t v1; // bp-152, 0x404660
    int32_t v2 = __lxstat(1, (char *)a1, (struct stat *)&v1); // 0x404673
    int32_t * v3 = __errno_location(); // 0x40467a
    if (v2 == 0) {
        // 0x4046a0
        *v3 = 17;
        return 0xffffffff;
    }
    int32_t v4 = *v3; // 0x404683
    if (v4 != 75) {
        // 0x40468a
        return v4 != 2 ? 0xffffffff : 0;
    }
    // 0x4046a0
    *v3 = 17;
    return 0xffffffff;
}
// Address range: 0x4046c0 - 0x4046ca
int64_t function_4046c0(void) {
    // 0x4046c0
    int64_t path; // 0x4046c0
    return mkdir((char *)path, 448);
}
// Address range: 0x4046d0 - 0x4046e6
int64_t function_4046d0(void) {
    // 0x4046d0
    int64_t path; // 0x4046d0
    return open((char *)path, (int32_t)path & -196 | 194);
}
// Address range: 0x4046f0 - 0x404710
int64_t function_4046f0(void) {
    // 0x4046f0
    __assert_fail("! \"invalid KIND in __gen_tempname\"", "lib/tempname.c", 327, "gen_tempname_len");
    return &g50;
}
// Address range: 0x404710 - 0x40486d
int64_t function_404710(int64_t str, int64_t a2, int32_t * a3, int64_t a4, uint64_t a5) {
    int32_t * v1 = __errno_location(); // 0x404735
    int32_t v2 = *v1; // 0x404740
    uint64_t len = (int64_t)strlen((char *)str); // 0x404746
    uint64_t v3 = (0x100000000 * a2 >> 32) + a5; // 0x40474e
    if (v3 > len) {
        // 0x404858
        *v1 = 22;
        // 0x404840
        return 0xffffffff;
    }
    int64_t str2 = len - v3 + str;
    if ((int64_t)strspn((char *)str2, "X") < a5) {
        // 0x404858
        *v1 = 22;
        // 0x404840
        return 0xffffffff;
    }
    int64_t v4 = function_406690(); // 0x404784
    if (v4 == 0) {
        // 0x404840
        return 0xffffffff;
    }
    int32_t v5 = 0x3a2f8; // 0x4047a6
    int64_t v6; // 0x404710
    int64_t v7; // 0x4047c8
    int64_t v8; // 0x4047cc
    char v9; // 0x4047d1
    if (a5 != 0) {
        v7 = str2 + 1;
        v8 = function_4066d0(v4, 61);
        v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        *(char *)str2 = v9;
        v6 = v7;
        while (v7 != str2 + a5) {
            // 0x4047c0
            v7 = v6 + 1;
            v8 = function_4066d0(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)v6 = v9;
            v6 = v7;
        }
    }
    int32_t v10; // 0x404710
    int64_t v11; // 0x404710
    int64_t result; // 0x404710
    while ((int32_t)a4 < 0) {
        int32_t v12 = *v1; // 0x4047f8
        v10 = v12;
        v11 = 0xffffffff;
        if (v12 != 17) {
            goto lab_0x404825;
        }
        // 0x404800
        v5--;
        if (v5 == 0) {
            // 0x404806
            function_4067f0(v4);
            *v1 = 17;
            result = 0xffffffff;
            return result;
        }
        if (a5 != 0) {
            v7 = str2 + 1;
            v8 = function_4066d0(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)str2 = v9;
            v6 = v7;
            while (v7 != str2 + a5) {
                // 0x4047c0
                v7 = v6 + 1;
                v8 = function_4066d0(v4, 61);
                v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
                *(char *)v6 = v9;
                v6 = v7;
            }
        }
    }
    // 0x40481c
    *v1 = v2;
    v10 = v2;
    v11 = a4 & 0xffffffff;
  lab_0x404825:
    // 0x404825
    function_4067f0(v4);
    *v1 = v10;
    result = v11;
  lab_0x404840:
    // 0x404840
    return result;
}
// Address range: 0x404870 - 0x4048eb
int64_t function_404870(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int32_t v1 = a3; // bp-12, 0x404874
    if ((int32_t)a4 < 3) {
        int64_t v2 = *(int64_t *)((8 * a4 & 0x7fffffff8) + (int64_t)&g8); // 0x404884
        int64_t v3; // 0x404870
        return function_404710(a1, a2, &v1, v2, v3);
    }
    // 0x4048cc
    function_4046f0();
    function_4046f0();
    return function_404710(a1, a2, (int32_t *)(int64_t)a3, a4, 6);
}
// Address range: 0x4048f0 - 0x404ccd
int64_t function_4048f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404988
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40490c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404926
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40496b
    if (a6 < 10) {
        // 0x40497a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404a72
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404cd0 - 0x404cf0
int64_t function_404cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404cd0
    if (a5 == 0) {
        // 0x404ceb
        return function_4048f0(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x404cd7
    v1++;
    int64_t v2 = v1; // 0x404ce9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404ce0
        v1++;
        v2 = v1;
    }
    // 0x404ceb
    return function_4048f0(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x404cf0 - 0x404d50
int64_t function_404cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404cf0
    int64_t v3 = &v2; // 0x404cf0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404d23
    int64_t v6; // 0x404d0d
    int64_t * v7; // 0x404d2b
    int64_t v8; // 0x404d2b
    int64_t v9; // 0x404d37
    if (v5 < 48) {
        // 0x404d00
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404d43
            break;
        }
    } else {
        // 0x404d2b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404d43
            break;
        }
    }
    int64_t v10 = 10; // 0x404d21
    while (v4 != 9) {
        // 0x404d19
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404d00
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404d43
                break;
            }
        } else {
            // 0x404d2b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404d43
                break;
            }
        }
        // 0x404d19
        v10 = 10;
    }
    // 0x404d43
    return function_4048f0(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x404d50 - 0x404e0c
int64_t function_404d50(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404d50
    int64_t v1; // bp-168, 0x404d50
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404d50
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404d50
    int64_t v8; // 0x404d50
    int64_t v9; // bp-56, 0x404d50
    int64_t v10; // 0x404db5
    int64_t v11; // 0x404dd9
    if ((int32_t)v6 < 48) {
        // 0x404da0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404df0
            break;
        }
    } else {
        // 0x404dd2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404df0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404dca
    int64_t v13 = 10; // 0x404dca
    while (v5 != 9) {
        // 0x404dcc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404da0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404df0
                break;
            }
        } else {
            // 0x404dd2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404df0
                break;
            }
        }
        // 0x404dc2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404df0
    int64_t v14; // bp-136, 0x404d50
    int64_t result = function_4048f0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x404dff
    return result;
}
// Address range: 0x404e10 - 0x404e84
int64_t function_404e10(int64_t a1) {
    // 0x404e10
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404e73
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404e90 - 0x404eaa
int64_t function_404e90(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404e94
    if (size != 0 != (mem == NULL)) {
        // 0x404ea3
        return (int64_t)mem;
    }
    // 0x404ea5
    function_4050e0(size);
    // UNREACHABLE
}
// Address range: 0x404eb0 - 0x404ed1
int64_t function_404eb0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404eb3
    int64_t v2 = v1; // 0x404eb3
    if (v2 < 0) {
        // 0x404ecb
        function_4050e0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404ec9
        return function_404e90(v2);
    }
    // 0x404ecb
    function_4050e0(v2);
    // UNREACHABLE
}
// Address range: 0x404ee0 - 0x404ee2
int64_t function_404ee0(void) {
    // 0x404ee0
    int64_t v1; // 0x404ee0
    return function_404e90(v1);
}
// Address range: 0x404ef0 - 0x404f26
int64_t function_404ef0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404f18
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404f01
    if (a2 != 0 != (mem == NULL)) {
        // 0x404f10
        return (int64_t)mem;
    }
    // 0x404f21
    function_4050e0(a1);
    // UNREACHABLE
}
// Address range: 0x404f30 - 0x404f51
int64_t function_404f30(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404f33
    int64_t v2 = v1; // 0x404f33
    if (v2 < 0) {
        // 0x404f4b
        function_4050e0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404f49
        return function_404ef0(a1, v2);
    }
    // 0x404f4b
    function_4050e0(a1);
    // UNREACHABLE
}
// Address range: 0x404f60 - 0x404fe6
int64_t function_404f60(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404fbb
            function_4050e0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404ef0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404fa3
    if (a2 == 0) {
        // 0x404fc8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404fa8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404fbb
        function_4050e0(a1);
        // UNREACHABLE
    }
    // 0x404f8a
    *(int64_t *)a2 = v2;
    return function_404ef0(a1, v2 * a3);
}
// Address range: 0x404ff0 - 0x405040
int64_t function_404ff0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404ff0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40503a
            function_4050e0(a1);
            // UNREACHABLE
        }
        // 0x405012
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404ef0(a1, v1);
    }
    if (a2 == 0) {
        // 0x405025
        *(int64_t *)a2 = 128;
        return function_404ef0(0, 128);
    }
    // 0x405038
    if (a2 < 0) {
        // 0x40503a
        function_4050e0(a1);
        // UNREACHABLE
    }
    // 0x405012
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404ef0(a1, v1);
}
// Address range: 0x405040 - 0x405057
int64_t function_405040(int64_t a1, int64_t a2) {
    // 0x405040
    return (int64_t)memset((int64_t *)function_404e90(a1), 0, (int32_t)a1);
}
// Address range: 0x405060 - 0x40508e
int64_t function_405060(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405067
    if ((int64_t)v1 < 0) {
        // 0x405089
        function_4050e0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405089
        function_4050e0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40507a
    if (mem != NULL) {
        // 0x405084
        return (int64_t)mem;
    }
    // 0x405089
    function_4050e0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405090 - 0x4050b8
int64_t function_405090(int64_t a1, int64_t a2) {
    int64_t v1 = function_404e90(a2); // 0x40509f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4050c0 - 0x4050d3
int64_t function_4050c0(int64_t str) {
    // 0x4050c0
    return function_405090(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4050e0 - 0x405111
int64_t function_4050e0(int64_t a1) {
    // 0x4050e0
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405120 - 0x40519b
int64_t function_405120(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405127
    if (fileno(stream) < 0) {
        // 0x405187
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40513a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40516b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405187
            return fclose(stream);
        }
    }
    // 0x40513c
    if ((int32_t)function_4051a0(a1, v1) == 0) {
        // 0x405187
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405148
    int32_t v3 = *v2; // 0x405150
    int64_t result = fclose(stream); // 0x40515e
    if (v3 != 0) {
        // 0x405190
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405160
    return result;
}
// Address range: 0x4051a0 - 0x4051e0
int64_t function_4051a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4051ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4051ba
        return fflush(stream);
    }
    // 0x4051c8
    function_4051e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4051e0 - 0x405237
int64_t function_4051e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4051e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4051ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40521b
    int64_t result = -1; // 0x405224
    if (v1 != -1) {
        // 0x405226
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405232
    return result;
}
// Address range: 0x405240 - 0x40531f
int64_t function_405240(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40524c
    uint32_t v2 = *v1; // 0x40524c
    int64_t v3 = a2 & 0xffffffff; // 0x405251
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405254
    uint64_t v5 = (int64_t)*v4; // 0x405254
    int64_t v6; // 0x4052c2
    if (v3 <= v5) {
      lab_0x4052bc_2:
        // 0x4052bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405242
    int64_t v8 = v2; // 0x405240
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4052bc
        goto lab_0x4052bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405278
    int64_t v17; // 0x405286
    int64_t * v18; // 0x4052a0
    int64_t * v19; // 0x4052a3
    int64_t v20; // 0x4052ae
    int64_t v21; // 0x405286
    while ((v16 & 0xffffffff) > v10) {
        // 0x405283
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4052a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4052b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4052bc
            goto lab_0x4052bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4052bc
            goto lab_0x4052bc_2;
        }
        // 0x405272
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4052fb
    int64_t * v23 = (int64_t *)v22; // 0x405300
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405303
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405300
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405317
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40526d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4052bc
            goto lab_0x4052bc_2;
        }
        // 0x405272
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405283
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4052a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4052b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4052bc
                goto lab_0x4052bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4052bc
                goto lab_0x4052bc_2;
            }
            // 0x405272
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4052e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405300
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405317
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4052bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405320 - 0x40593c
int64_t function_405320(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40533f
    int64_t v2 = *v1; // 0x40533f
    char * str2 = (char *)v2; // 0x40534c
    char c = *str2; // 0x40534c
    int64_t v3 = v2; // 0x405378
    int64_t v4 = 0; // 0x405320
    int32_t v5; // 0x405320
    int64_t v6; // 0x405320
    int64_t v7; // 0x405320
    int64_t v8; // 0x405320
    int64_t v9; // 0x405320
    int64_t v10; // 0x405320
    int64_t v11; // 0x405320
    int64_t v12; // 0x405320
    int64_t v13; // 0x405320
    int64_t str3; // 0x405320
    int64_t v14; // 0x405320
    int64_t v15; // 0x405320
    int64_t v16; // 0x405320
    int64_t v17; // 0x405320
    int32_t v18; // 0x405320
    int32_t v19; // 0x405320
    int32_t v20; // 0x405320
    int32_t v21; // 0x405320
    int32_t v22; // 0x405320
    int32_t v23; // 0x405320
    int32_t v24; // 0x405320
    int32_t v25; // 0x405320
    int32_t v26; // 0x405320
    int32_t v27; // 0x405320
    int32_t v28; // 0x405320
    int32_t v29; // 0x405320
    int64_t nmemb; // 0x405320
    int64_t v30; // 0x405320
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40537c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405378
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405388
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40538e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405358
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4053bc
                int64_t v34; // 0x405320
                int64_t v35; // 0x405320
                if (strncmp(str, str2, n) == 0) {
                    // 0x4053c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405540;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4053d6
                int64_t v37 = *(int64_t *)v36; // 0x4053da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4053b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4053c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405540;
                        }
                    }
                    // 0x4053d6
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
                  lab_0x405426:
                    // 0x405426
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
                        goto lab_0x405480;
                    } else {
                        if (v11 == 0) {
                            // 0x4055f0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405480;
                        } else {
                            if (v39 == 0) {
                                // 0x4055a0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40544a;
                                } else {
                                    // 0x4055ac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40544a;
                                    } else {
                                        // 0x4055ba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40544a;
                                        } else {
                                            goto lab_0x405480;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40544a;
                            }
                        }
                    }
                }
              lab_0x405491:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405666
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405812
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x405832
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40587f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405899
                            int64_t v45; // 0x40589b
                            if (*(char *)v42 != 0) {
                                // 0x40589b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405893
                            while (v17 + nmemb != v42) {
                                // 0x405895
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40589b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405888
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4058c0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405674
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4057cf
                        free((int64_t *)v17);
                    }
                    // 0x4056c9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4056e0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40558e
                    return 63;
                }
                // 0x4054b0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405534
                    v35 = v13;
                    v34 = v25;
                  lab_0x405540:;
                    int32_t * v49 = (int32_t *)a7; // 0x405550
                    uint32_t v50 = *v49; // 0x405550
                    int64_t v51 = v50; // 0x405550
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40555a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405563
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40578f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40573a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40558e
                            return 63;
                        }
                        // 0x4055d8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4058ef
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4057ed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405800
                                // 0x40558e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4056fe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405712
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40557b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40557e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405582
                    int64_t result = v59; // 0x405588
                    if (v58 != 0) {
                        // 0x40558a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40558e
                    return result;
                }
            } else {
                // 0x40538e
                v5 = v32;
            }
            // break -> 0x4054b5
            break;
        }
    }
    // 0x4054b5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4054cd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4054d7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40558e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405619
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405506
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405516
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405480:
    // 0x405480
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405480
    int64_t v63 = *(int64_t *)v62; // 0x405484
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405491
        goto lab_0x405491;
    }
    goto lab_0x405426;
  lab_0x40544a:
    // 0x40544a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405320
    int32_t v65; // 0x405320
    int32_t v66; // 0x405320
    if (v27 != 0) {
        goto lab_0x405480;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405600
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405480;
            } else {
                goto lab_0x405471;
            }
        } else {
            // 0x405465
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40575c
                int64_t v67 = (int64_t)mem; // 0x40575c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405480;
                } else {
                    // 0x40576f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405471;
                }
            } else {
                goto lab_0x405471;
            }
        }
    }
  lab_0x405471:
    // 0x405471
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405480;
}
// Address range: 0x405940 - 0x405f06
int64_t function_405940(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405961
    if (v3 < 1) {
        // 0x405b1e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40595d
    int32_t v5 = *(int32_t *)a7; // 0x405969
    uint64_t v6 = a1 & 0xffffffff; // 0x40596b
    int64_t v7 = v2; // 0x405970
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405973
    *v8 = 0;
    int64_t v9; // 0x405940
    int64_t v10; // 0x405940
    int64_t v11; // 0x405940
    int64_t v12; // 0x405940
    int64_t str; // 0x405940
    int64_t v13; // 0x405940
    int64_t v14; // 0x405940
    int64_t v15; // 0x405940
    int64_t v16; // 0x405940
    int64_t v17; // 0x405940
    int32_t v18; // 0x405940
    char v19; // 0x405940
    if (v5 == 0) {
        // 0x405b58
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40598a;
    } else {
        // 0x405983
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4059d0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4059d3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405a98;
            } else {
                int64_t v22 = v7 + 1; // 0x4059e6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4059f6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405aac;
                } else {
                    goto lab_0x405a08;
                }
            }
        } else {
            goto lab_0x40598a;
        }
    }
  lab_0x40598a:
    // 0x40598a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405990
    *v24 = 0;
    int64_t v25; // 0x405940
    int64_t v26; // 0x405940
    int64_t v27; // 0x405940
    switch (*(char *)&v2) {
        case 45: {
            // 0x405a80
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405a8d;
        }
        case 43: {
            // 0x405d90
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405a8d;
        }
        default: {
            // 0x4059ac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405d0f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405e28
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405a8d;
                } else {
                    // 0x405d1d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4059ba;
                }
            } else {
                goto lab_0x4059ba;
            }
        }
    }
  lab_0x405a98:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405a9f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405a08;
    } else {
        goto lab_0x405aac;
    }
  lab_0x4059ba:
    // 0x4059ba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405a8d;
  lab_0x405a8d:
    // 0x405a8d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405a98;
  lab_0x405a08:;
    uint32_t v30 = *(int32_t *)a7; // 0x405a08
    int64_t v31 = v30; // 0x405a08
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405a0a
    if ((int64_t)*v32 > v31) {
        // 0x405a0f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405a12
    if (*v33 > v30) {
        // 0x405a17
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405a1a
    int64_t v35 = v31; // 0x405a1e
    int64_t v36 = v15; // 0x405a1e
    int64_t v37; // 0x405940
    int64_t v38; // 0x405940
    int64_t v39; // 0x405940
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405b88
        int64_t v41 = v40; // 0x405b88
        v2 = v41;
        int64_t v42; // 0x405940
        if (*v33 == v40) {
            // 0x405d70
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405d78
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405b94
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405b98
                function_405240(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405ba8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405bb1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405bba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405bd1
            int64_t v47 = v45 & 0xffffffff; // 0x405bd5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405bde
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405be4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405be6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405bc0
            int64_t v49 = v48 & 0xffffffff; // 0x405bc0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405bd1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405bde
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405be4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405be6;
                    }
                }
                // 0x405bc0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405d88
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405be6;
    } else {
        goto lab_0x405a24;
    }
  lab_0x405aac:
    // 0x405aac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405aaf
    int64_t v51 = v12; // 0x405aaf
    int64_t v52 = v14; // 0x405aaf
    if (*(char *)v10 == 0) {
        goto lab_0x405a08;
    } else {
        goto lab_0x405ab5;
    }
  lab_0x405a24:;
    int32_t v53 = v35; // 0x405a24
    int64_t v54; // 0x405940
    int64_t v55; // 0x405940
    int64_t v56; // 0x405940
    int64_t v57; // 0x405940
    int64_t v58; // 0x405940
    int64_t v59; // 0x405940
    char * v60; // 0x405940
    int64_t v61; // 0x405940
    int64_t v62; // 0x405a39
    int64_t v63; // 0x405940
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405b73
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405b76;
    } else {
        // 0x405a2c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405940
        int64_t v66 = v65 ? -1 : 1; // 0x405a40
        int64_t v67 = (int64_t)"--"; // 0x405940
        int64_t v68 = v62; // 0x405940
        int64_t v69 = 3; // 0x405a40
        unsigned char v70 = *(char *)v68; // 0x405a40
        char v71 = *(char *)v67; // 0x405a40
        char v72 = v71; // 0x405a40
        bool v73 = false; // 0x405a40
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
            // 0x405b30
            if (*(char *)v62 == 45) {
                // 0x405bf0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405bf0
                if (c == 0) {
                    goto lab_0x405b3a;
                } else {
                    // 0x405bfd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405c80;
                    } else {
                        if (c == 45) {
                            // 0x405e63
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405cd5;
                        } else {
                            // 0x405c0e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405c80;
                            } else {
                                // 0x405c13
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405c34;
                                } else {
                                    // 0x405c1a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405c80;
                                    } else {
                                        goto lab_0x405c34;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405b3a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405a50
            v2 = v75;
            int32_t v76 = *v32; // 0x405a53
            int64_t v77 = v35 + 1; // 0x405a56
            int32_t v78 = v77; // 0x405a59
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405dc0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405a67
                    function_405240(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405a75
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405b76;
        }
    }
  lab_0x405ab5:;
    // 0x405ab5
    int64_t v79; // bp-104, 0x405940
    int64_t v80 = &v79; // 0x40594a
    int64_t v81 = v50 + 1; // 0x405ab5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405abc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405ac1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405ac5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405ac9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405ad1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405ad6
    int32_t c2 = v84; // 0x405ad6
    char * found_char_pos = strchr(str2, c2); // 0x405ad6
    int64_t v87 = *v82; // 0x405adb
    v2 = v87;
    int64_t v88 = *v85; // 0x405ae5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405af0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405de0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405dad
        *(int32_t *)(v1 + 8) = c2;
        // 0x405b1e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405ad6
    char v91 = *(char *)(v90 + 1); // 0x405b0b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405ac5
        if (v91 != 58) {
            // 0x405b1e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405d34
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405e38
                *v8 = 0;
            } else {
                // 0x405e1c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405d5e
            *v83 = 0;
            // 0x405b1e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405d3e
        if (v93 != 0) {
            // 0x405dd0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405d5e
            *v83 = 0;
            // 0x405b1e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405d51
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405d5e
            *v83 = 0;
            // 0x405b1e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405e9a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405e4a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405e51
        // 0x405d5e
        *v83 = 0;
        // 0x405b1e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405ca9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405cab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405ed0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405e81
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405e88
            // 0x405b1e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405cb6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405cba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405cd5;
  lab_0x405be6:
    // 0x405be6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405a24;
  lab_0x405cd5:;
    int64_t v99 = function_405320(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405cf3
    // 0x405b1e
    return v99 & 0xffffffff;
  lab_0x405b76:;
    int32_t v100 = v55; // 0x405b76
    if (v100 != (int32_t)v59) {
        // 0x405b7a
        *(int32_t *)a7 = v100;
    }
    // 0x405b1e
    return 0xffffffff;
  lab_0x405b3a:
    // 0x405b3a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405b41
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405b1e
    return v99 & 0xffffffff;
  lab_0x405c80:
    // 0x405c80
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405ab5;
  lab_0x405c34:
    // 0x405c34
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405320(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x405c5a
    if ((int32_t)v101 != -1) {
        // 0x405b1e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405c6f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405c80;
}
// Address range: 0x405f10 - 0x405f66
int64_t function_405f10(int64_t a1) {
    // 0x405f10
    *(int32_t *)&g42 = g27;
    *(int32_t *)&g43 = g26;
    int64_t v1; // 0x405f10
    int64_t result = function_405940(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x405f36
    g27 = *(int32_t *)&g42;
    g48 = g45;
    *(int32_t *)&g25 = g44;
    return result;
}
// Address range: 0x405f70 - 0x405f88
int64_t function_405f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f70
    return function_405f10(1);
}
// Address range: 0x405f90 - 0x405fa3
int64_t function_405f90(int64_t a1, int64_t a2, char * a3, char (**a4)[10], int32_t a5, int64_t a6) {
    // 0x405f90
    return function_405f10(0);
}
// Address range: 0x405fb0 - 0x405fc5
int64_t function_405fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405fb0
    return function_405940(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405fd0 - 0x405fe6
int64_t function_405fd0(void) {
    // 0x405fd0
    return function_405f10(0);
}
// Address range: 0x405ff0 - 0x406008
int64_t function_405ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405ff0
    return function_405940(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406010 - 0x40608a
int64_t function_406010(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40601b
    int64_t v2 = (int64_t)&g11; // 0x40601b
    int32_t * pwc; // 0x406010
    int64_t v3; // 0x406010
    int64_t n; // 0x406010
    if (a2 == 0) {
        goto lab_0x406062;
    } else {
        // 0x40601d
        if (a3 == 0) {
            // 0x406048
            return -2;
        }
        // 0x406029
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406062;
        } else {
            goto lab_0x406034;
        }
    }
  lab_0x406062:
    // 0x406062
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406010
    pwc = (int32_t *)&v4;
    goto lab_0x406034;
  lab_0x406034:;
    char * wstr = (char *)v3; // 0x40603a
    int64_t ps; // 0x406010
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40603a
    int64_t result = v5; // 0x40603a
    if (v5 < 0xfffffffe) {
        // 0x406048
        return result;
    }
    int64_t result2 = result; // 0x406079
    if ((char)function_406090(0, v3) == 0) {
        // 0x40607b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406048
    return result2;
}
// Address range: 0x406090 - 0x4060ee
int64_t function_406090(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406096
    if (locale == NULL) {
        // 0x4060c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406096
    bool v2; // 0x406090
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x406090
    int64_t v5 = v1; // 0x406090
    int64_t v6 = 2; // 0x4060b5
    unsigned char v7 = *(char *)v5; // 0x4060b5
    char v8 = *(char *)v4; // 0x4060b5
    char v9 = v8; // 0x4060b5
    bool v10 = false; // 0x4060b5
    while (v7 == v8) {
        // 0x4060a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4060c1
    int64_t v13 = v1; // 0x4060c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4060c3
        return 0;
    }
    int64_t v14 = 6; // 0x4060c1
    unsigned char v15 = *(char *)v13; // 0x4060dd
    char v16 = *(char *)v12; // 0x4060dd
    char v17 = v16; // 0x4060dd
    bool v18 = false; // 0x4060dd
    while (v15 == v16) {
        // 0x4060d0
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
// Address range: 0x4060f0 - 0x406652
int64_t function_4060f0(void) {
    char * v1 = nl_langinfo(14); // 0x406106
    char * v2 = g46; // 0x40610b
    char * v3; // 0x4060f0
    int64_t v4; // 0x4060f0
    int64_t v5; // 0x4060f0
    int64_t v6; // 0x4060f0
    int64_t v7; // 0x4060f0
    int32_t size; // 0x4060f0
    int32_t size2; // 0x4060f0
    int32_t len; // 0x4061c2
    int64_t v8; // 0x4061c2
    char * env_val; // 0x4061ad
    if (v2 == NULL) {
        // 0x4061a8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406215;
        } else {
            // 0x4061ba
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406215;
            } else {
                // 0x4061bf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4061ad
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406645
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406215;
                    } else {
                        // 0x4065b9
                        size2 = len + 14;
                        goto lab_0x4061db;
                    }
                } else {
                    goto lab_0x4061db;
                }
            }
        }
    } else {
        // 0x4060f0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40612a;
    }
  lab_0x40645c:;
    // 0x40645c
    struct _IO_FILE * stream; // 0x40629b
    int32_t v10 = __uflow(stream); // 0x40645f
    int64_t v11; // 0x4060f0
    int64_t v12 = v11; // 0x406469
    int64_t v13; // 0x4060f0
    int64_t v14 = v13; // 0x406469
    int32_t v15 = v10; // 0x406469
    int64_t v16; // 0x4060f0
    int64_t v17 = v16; // 0x406469
    int64_t v18 = v11; // 0x406469
    int64_t v19 = v13; // 0x406469
    int64_t v20 = v16; // 0x406469
    if (v10 == -1) {
        // break -> 0x40646f
        goto lab_0x40646f;
    }
    goto lab_0x4062e9;
  lab_0x4062de:;
    // 0x4062de
    int64_t v90; // 0x4060f0
    int64_t * v32; // 0x4062d0
    *v32 = v90 + 1;
    int64_t v89; // 0x4060f0
    v12 = v89;
    int64_t v91; // 0x4060f0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4060f0
    v17 = v92;
    goto lab_0x4062e9;
  lab_0x4062e9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4060f0
    int32_t v25; // bp-120, 0x4060f0
    int32_t v26; // bp-184, 0x4060f0
    int64_t v27; // 0x40629b
    int64_t v28; // 0x4062b8
    int64_t v29; // 0x4062bd
    int64_t * v30; // 0x4062d4
    switch (c) {
        case 32: {
            goto lab_0x4062d0;
        }
        case 10: {
            goto lab_0x4062d0;
        }
        case 9: {
            goto lab_0x4062d0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4064c1
            int32_t v33; // 0x4060f0
            char v34; // 0x4060f0
            int32_t v35; // 0x4064ce
            if (v31 < *v30) {
                // 0x4064a0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4064cb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4064c1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4064a0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4064cb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4064b0
                v36 = v33;
            }
            // 0x40659f
            if (v36 == -1) {
                // break -> 0x40646f
                break;
            }
            goto lab_0x4062d0;
        }
        default: {
            // 0x4062ff
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40646f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406328
            int64_t v39 = v37 + 4; // 0x40632a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406336
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406338
            while (v41 == 0) {
                // 0x406328
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406356
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406362
            int64_t v45 = v43 + 4; // 0x406364
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406370
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406372
            while (v47 == 0) {
                // 0x406362
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40635f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406388
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406398
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40639c
            int64_t v52 = v51 + v48; // 0x4063a5
            int64_t * mem; // 0x4060f0
            int64_t v53; // 0x4060f0
            int64_t v54; // 0x4060f0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4064db
                int64_t v56 = v55 + 3; // 0x4064e7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4063c1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4063d0
            if (mem == NULL) {
                // 0x4065fc
                free((int64_t *)v21);
                function_405120(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x406274;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4063e8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4063f2
            uint32_t v62 = (int32_t)v59; // 0x4063f5
            int64_t v63; // 0x4060f0
            if (v62 >= 8) {
                // 0x406504
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40651e
                int64_t v66 = v61 - v65; // 0x406522
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40652d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40653e
                    int64_t v70 = v69 & 0xffffffff; // 0x40653e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40653b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4065cf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406407
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40640b
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
            int64_t v73 = v51 + 1; // 0x40641b
            int64_t v74 = v60 - 1; // 0x40641f
            uint32_t v75 = (int32_t)v73; // 0x406424
            int64_t v76; // 0x4060f0
            if (v75 >= 8) {
                // 0x406552
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40655c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40656c
                int64_t v80 = v74 - v79; // 0x406570
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40657b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40658b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406589
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4065e6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4065ee
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406436
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40643a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406633
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40644e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4062de;
            } else {
                goto lab_0x40645c;
            }
        }
    }
  lab_0x4062d0:;
    int64_t v93 = v23; // 0x4060f0
    int64_t v94 = v22; // 0x4060f0
    int64_t v95 = v21; // 0x4060f0
    goto lab_0x4062d0_2;
  lab_0x406215:;
    int64_t * mem3 = malloc(size); // 0x406215
    int64_t v97 = (int64_t)&g11; // 0x406220
    int64_t v98; // 0x4060f0
    int64_t path; // 0x4060f0
    if (mem3 == NULL) {
        goto lab_0x4061f2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406215
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406236;
    }
  lab_0x40612a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40611d
    char v100 = *v3; // 0x40612a
    int64_t v101; // 0x4060f0
    if (v100 == 0) {
        // 0x406184
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4060f0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4060f0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406170
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406177;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406140
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40614d
        char v107 = *(char *)v106; // 0x406152
        v102 = v107;
        if (v107 == 0) {
            // 0x406184
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40615b
    v104 = v103 + 1;
  lab_0x406177:
    // 0x406184
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4061f2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40612a;
  lab_0x406236:;
    int64_t v109 = v98 + path; // 0x406236
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406262
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x406291
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4065c2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x4062b5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4062d0_2:;
                uint64_t v96 = *v32; // 0x4062d0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40645c;
                } else {
                    goto lab_0x4062de;
                }
            }
          lab_0x40646f:
            // 0x40646f
            function_405120(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x40648e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406274;
  lab_0x4061db:;
    int64_t * mem4 = malloc(size2); // 0x4061db
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x406281
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406236;
    } else {
        goto lab_0x4061f2;
    }
  lab_0x406274:
    // 0x406274
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4061f2;
}
// Address range: 0x406660 - 0x406683
int64_t function_406660(int64_t a1) {
    int64_t result = function_404e90(24); // 0x406669
    *(int64_t *)result = a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}
// Address range: 0x406690 - 0x4066bf
int64_t function_406690(void) {
    // 0x406690
    int64_t v1; // 0x406690
    int64_t v2 = function_4068b0(v1, v1, v1); // 0x406691
    int64_t result = 0; // 0x40669e
    if (v2 != 0) {
        // 0x4066a0
        result = function_404e90(24);
        *(int64_t *)result = v2;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x4066bd
    return result;
}
// Address range: 0x4066c0 - 0x4066c4
int64_t function_4066c0(int64_t result) {
    // 0x4066c0
    return result;
}
// Address range: 0x4066d0 - 0x4067c5
int64_t function_4066d0(int64_t a1, uint64_t a2) {
    uint64_t v1 = a2 + 1; // 0x4066d7
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4066eb
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4066ef
    int64_t v4 = *v3; // 0x4066f3
    int64_t result = *v2; // 0x4066f3
    int64_t v5; // 0x4066d0
    while (true) {
        int64_t v6 = result;
        int64_t v7 = v4;
        int64_t v8 = v7; // 0x406730
        int64_t v9; // 0x4066d0
        int64_t v10; // 0x4066d0
        if (v7 >= a2) {
            // 0x4066f8
            v10 = v7;
            v9 = v6;
            v5 = v6;
            if (v7 == a2) {
                // break -> 0x40678f
                break;
            }
        } else {
            int64_t v11 = 1; // 0x406744
            int64_t v12 = 256 * v8 | 255; // 0x406748
            v8 = v12;
            int64_t v13 = v11; // 0x406751
            while (v12 < a2) {
                // 0x406740
                v11 = v13 + 1;
                v12 = 256 * v8 | 255;
                v8 = v12;
                v13 = v11;
            }
            // 0x406753
            int64_t v14; // bp-64, 0x4066d0
            function_406bc0(a1, &v14, v11);
            int64_t v15 = &v14; // 0x406765
            int64_t v16 = 256 * v7 | 255; // 0x406777
            int64_t v17 = 256 * v6 | (int64_t)*(char *)v15; // 0x40677e
            v15++;
            int64_t v18 = v16; // 0x406784
            int64_t v19 = v17; // 0x406784
            while (v16 < a2) {
                // 0x406768
                v16 = 256 * v18 | 255;
                v17 = 256 * v19 | (int64_t)*(char *)v15;
                v15++;
                v18 = v16;
                v19 = v17;
            }
            // 0x406786
            v10 = v16;
            v9 = v17;
            v5 = v17;
            if (v16 == a2) {
                // break -> 0x40678f
                break;
            }
        }
        uint64_t v20 = v9;
        uint64_t v21 = v10 - a2; // 0x406706
        uint64_t v22 = v21 % v1;
        result = v20 % v1;
        v4 = v22 - 1;
        if (v20 <= v10 - v22) {
            // 0x4067b8
            *v2 = v20 / v1;
            *v3 = v21 / v1;
            return result;
        }
    }
    // 0x40678f
    *v3 = 0;
    *v2 = 0;
    result = v5;
  lab_0x40679f:
    // 0x40679f
    return result;
}
// Address range: 0x4067d0 - 0x4067ee
int64_t function_4067d0(int64_t a1) {
    // 0x4067d0
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return &g50;
}
// Address range: 0x4067f0 - 0x406841
int64_t function_4067f0(int64_t a1) {
    int64_t v1 = function_406d20(a1); // 0x406800
    int32_t * v2 = __errno_location(); // 0x406808
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return v1 & 0xffffffff;
}
// Address range: 0x406850 - 0x4068ad
int64_t function_406850(int64_t a1) {
    // 0x406850
    function_404640(a1);
    int32_t * err_num = __errno_location(); // 0x406867
    char * format; // 0x406850
    if (*err_num == 0) {
        // 0x40689f
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x406879
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x406885
    error(g19, *err_num, format);
    return &g50;
}
// Address range: 0x4068b0 - 0x406b9f
int64_t function_4068b0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_404e90(0x1038); // 0x4069cd
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x406850;
        *(int64_t *)(result + 16) = 0;
        // 0x406922
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_407260(a1, "rb"); // 0x4068d7
        int64_t result2 = 0; // 0x4068e2
        if (stream != 0) {
            // 0x4068e8
            result2 = function_404e90(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x406904
            *(int64_t *)(result2 + 8) = 0x406850;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x406922
        return result2;
    }
    int64_t result3 = function_404e90(0x1038); // 0x40693d
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x406953
    *(int64_t *)(result3 + 8) = 0x406850;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x406971
    int64_t v2; // 0x4068b0
    int128_t pid2; // bp-72, 0x4068b0
    if (fd < 0) {
        // 0x4069f8
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x406a17
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x40699b
        close(fd);
        if (v3 >= 2048) {
            // 0x4069b8
            function_407020(v1);
            // 0x406922
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x406b26
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x406b32
        uint64_t v7 = v6 + v4; // 0x406b38
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x4069b8
            function_407020(v1);
            // 0x406922
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x406b61
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x406b6d
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x406b85
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x4069b8
            function_407020(v1);
            // 0x406922
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x406a2d
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x406a34
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x406a50
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x406a4e
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x406a5f
    if (v16 >= 2048) {
        // 0x4069b8
        function_407020(v1);
        // 0x406922
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x406a7a
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x406a81
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x406a9f
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x406a9d
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x406aae
    if (v21 >= 2048) {
        // 0x4069b8
        function_407020(v1);
        // 0x406922
        return result3;
    }
    // 0x406abe
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x406ad6
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x406add
    if (v23 == 0) {
        // 0x4069b8
        function_407020(v1);
        // 0x406922
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x406aef
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x406aed
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x4069b8
    function_407020(v1);
    // 0x406922
    return result3;
}
// Address range: 0x406ba0 - 0x406ba5
int64_t function_406ba0(int64_t a1, int64_t a2) {
    // 0x406ba0
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x406ba0
    return result;
}
// Address range: 0x406bb0 - 0x406bb5
int64_t function_406bb0(int64_t a1, int64_t a2) {
    // 0x406bb0
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x406bb0
    return result;
}
// Address range: 0x406bc0 - 0x406d1c
int64_t function_406bc0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        int32_t * v2 = __errno_location(); // 0x406bdf
        int64_t result = fread_unlocked(a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x406c1a
        int64_t v3 = a3 - result; // 0x406c25
        if (v3 == 0) {
            // 0x406c2a
            return result;
        }
        int64_t v4 = v3; // 0x406c25
        int64_t v5 = result + v1; // 0x406c22
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x406bf4
        *v2 = (v1 & 32) == 0 ? 0 : *v2;
        int64_t result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6); // 0x406c1a
        v4 -= result2;
        while (v4 != 0) {
            int64_t v7 = v5;
            v5 = result2 + v7;
            v6 = *(int64_t *)(a1 + 16);
            *v2 = (v7 & 32) == 0 ? 0 : *v2;
            result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6);
            v4 -= result2;
        }
        // 0x406c2a
        return result2;
    }
    int64_t v8 = *(int64_t *)24; // 0x406c40
    int64_t v9 = a3; // 0x406c52
    int64_t * v10; // 0x406bc0
    int64_t v11; // 0x406bc0
    int64_t v12; // 0x406bc0
    int64_t v13; // 0x406bc0
    if (v8 < a3) {
        int64_t v14 = v8;
        int64_t v15 = v14 + v1; // 0x406c63
        v9 -= v14;
        memcpy((int64_t *)v1, (int64_t *)(0x1038 - v14), (int32_t)v14);
        while (v15 % 8 != 0) {
            // 0x406c7a
            function_406d70(32, 2104);
            v13 = v9;
            v12 = v15;
            v10 = (int64_t *)2104;
            v11 = 2048;
            if (v9 < 2049) {
                goto lab_0x406cd5;
            }
            v14 = 2048;
            int64_t v16 = v15;
            v15 = v14 + v16;
            v9 -= v14;
            memcpy((int64_t *)v16, (int64_t *)(0x1038 - v14), (int32_t)v14);
        }
        int64_t v17 = v15;
        int64_t v18 = v9;
        while (v18 >= 2048) {
            int64_t result3 = function_406d70(32, v17); // 0x406cad
            int64_t v19 = v18 - 2048; // 0x406cb2
            if (v19 == 0) {
                // 0x406cf8
                *(int64_t *)24 = 0;
                return result3;
            }
            v17 += 2048;
            v18 = v19;
        }
        // 0x406cc4
        function_406d70(32, 2104);
        v13 = v18;
        v12 = v17;
        v10 = (int64_t *)2104;
        v11 = 2048;
    } else {
        // 0x406d10
        v13 = a3;
        v12 = v1;
        v10 = (int64_t *)(0x1038 - v8);
        v11 = v8;
    }
  lab_0x406cd5:;
    int64_t * dest_mem = memcpy((int64_t *)v12, v10, (int32_t)v13); // 0x406cde
    *(int64_t *)24 = v11 - v13;
    // 0x406c2a
    return (int64_t)dest_mem;
}
// Address range: 0x406d20 - 0x406d69
int64_t function_406d20(int64_t a1) {
    // 0x406d20
    __explicit_bzero_chk(a1, 0x1038, -1);
    free((int64_t *)a1);
    if (a1 == 0) {
        // 0x406d60
        return 0;
    }
    // 0x406d4a
    return function_405120(a1, 0x1038);
}
// Address range: 0x406d70 - 0x407015
int64_t function_406d70(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x406d70
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x406d77
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x406d86
    int64_t v4 = *v1 + 1; // 0x406d90
    *v1 = v4;
    int64_t v5 = a2; // 0x406da1
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x406db2
    int64_t v9 = *v8; // 0x406db2
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x406db8
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x406dd3
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x406df2
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x406df8
    int64_t v14 = *v13; // 0x406df8
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x406dfc
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x406e20
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x406e35
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x406e3c
    int64_t v19 = *v18; // 0x406e3c
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x406e40
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x406e5b
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x406e6d
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x406e78
    int64_t v24 = *v23; // 0x406e78
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x406e89
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x406ea0
    int64_t v27 = v7 + 32; // 0x406ea3
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x406ebd
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x406da8
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
    int64_t v29 = a2 + 1024; // 0x406edb
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x406eea
    int64_t v33 = *v32; // 0x406eea
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x406ef0
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x406f15
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x406f26
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x406f2d
    int64_t v38 = *v37; // 0x406f2d
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x406f34
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x406f58
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x406f6d
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x406f74
    int64_t v43 = *v42; // 0x406f74
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x406f78
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x406f93
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x406fa5
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x406fb0
    int64_t v48 = *v47; // 0x406fb0
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x406fc1
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x406fd8
    int64_t result = v31 + 32; // 0x406fdb
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x406ff5
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x406ee0
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
    // 0x407005
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x407020 - 0x407254
int64_t function_407020(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x407067
    int64_t v2 = a1; // 0x407083
    int64_t * v3 = (int64_t *)v2; // 0x407088
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x40708b
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x40708b
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x40708f
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x40708f
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x407093
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x40709a
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x40709e
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x4070ab
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x4070ae
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x4070b5
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x4070c2
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x4070c5
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x4070cc
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x4070d9
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x4070dc
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x4070e3
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x4070f0
    int64_t v21 = v5 - v20; // 0x4070f6
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x407100
    uint64_t v23 = v11 - v22; // 0x407109
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x407114
    int64_t v25 = v14 - v24; // 0x40711e
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x40712d
    int64_t v27 = v23 + v25; // 0x407133
    int64_t v28 = v17 - v26; // 0x407136
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x407141
    int64_t v30 = v28 + v25; // 0x407144
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x40715a
    while (v1 != v2) {
        // 0x407088
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
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x407160
    uint64_t v33 = *v32 + v28; // 0x407160
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x407164
    int64_t v35 = *v34 + v29; // 0x407164
    int64_t * v36 = (int64_t *)v31; // 0x407168
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x40716e
    int64_t v38 = *v36 + v20 - v35; // 0x407172
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x407179
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x40717d
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x407181
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x407187
    uint64_t v43 = *v39 + v22 - v41; // 0x40718e
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x407195
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x407199
    int64_t v46 = *v42 + v24 - v45; // 0x4071a2
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x4071a9
    uint64_t v48 = *v44 + v26 - v47; // 0x4071b2
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x4071b9
    int64_t v50 = v35 - v49; // 0x4071c2
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x4071cc
    uint64_t v52 = v41 - v51; // 0x4071d5
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x4071e0
    int64_t result = v52 + v50; // 0x4071e3
    int64_t v54 = v45 - v53; // 0x4071ea
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x4071f5
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x4071f9
    int64_t v57 = v54 + v52; // 0x4071ff
    int64_t v58 = v47 - v56; // 0x407202
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x40720d
    int64_t v60 = v58 + v54; // 0x407210
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x407160
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
    // 0x40722c
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x407260 - 0x4072f3
int64_t function_407260(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x407267
    int64_t result = (int64_t)file; // 0x407267
    if (file == NULL) {
        // 0x407281
        return result;
    }
    uint32_t v1 = fileno(file); // 0x407277
    if (v1 >= 3) {
        // 0x407281
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_407300((int64_t)v1, v2); // 0x40729a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x4072d8
        function_405120(result, v2);
        // 0x407281
        return 0;
    }
    // 0x40729e
    if ((int32_t)function_405120(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, mode); // 0x4072b0
        if (v4 != NULL) {
            // 0x407281
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x4072bd
    close(fd);
    // 0x407281
    return 0;
}
// Address range: 0x407300 - 0x40730e
int64_t function_407300(int64_t a1, int64_t a2) {
    // 0x407300
    int64_t v1; // 0x407300
    return function_407310(a1, 0, 3, v1);
}
// Address range: 0x407310 - 0x407445
int64_t function_407310(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x4073f0
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40734c
    int64_t v2; // 0x407310
    if (g47 < 0) {
        int64_t v3 = function_407310(fd, 0, v1, a4); // 0x407394
        int64_t v4 = v3 & 0xffffffff; // 0x407399
        if ((int32_t)v3 < 0) {
            // 0x407380
            return v4 & 0xffffffff;
        }
        // 0x40739f
        v2 = v4;
        if (g47 != -1) {
            // 0x407380
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x407367
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x407376
            g47 = 1;
            // 0x407380
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_407310(fd & 0xffffffff, 0, v1, a4); // 0x407427
        int64_t v7 = v6 & 0xffffffff; // 0x40742c
        if ((int32_t)v6 < 0) {
            // 0x407380
            return v7 & 0xffffffff;
        }
        // 0x407436
        g47 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4073af
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x4073ba
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x407380
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x4073d2
    close(fd2);
    // 0x407380
    return 0xffffffff;
}
// Address range: 0x407450 - 0x4074ad
int64_t function_407450(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407450
    return function_401750();
}
// Address range: 0x4074b0 - 0x4074b1
int64_t function_4074b0(void) {
    // 0x4074b0
    int64_t result; // 0x4074b0
    return result;
}
// Address range: 0x4074c0 - 0x4074d8
int64_t function_4074c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4074c0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x4074d8 - 0x4074f8
int64_t function_4074d8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x4074e2
    while (*(int64_t *)v1 != -1) {
        // 0x4074e3
        v1 -= 8;
    }
    // 0x4074f4
    return result;
}
