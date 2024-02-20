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
// Address range: 0x4016f0 - 0x402056
int64_t function_4016f0(int64_t a1, int64_t a2) {
    // 0x4016f0
    int64_t v1; // 0x4016f0
    int64_t v2 = v1;
    function_4025c0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_4068b0(0x402520, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    int64_t v3; // 0x4016f0
    int64_t v4; // 0x4016f0
    while (true) {
        // 0x401745
        v3 = 0;
        v4 = 0;
        while (true) {
          lab_0x401745_2:;
            // 0x401745
            int64_t v5; // 0x4016f0
            int64_t v6 = function_405ff0(a1 & 0xffffffff, a2, "cor:s:", &g2, 0, v5); // 0x401758
            uint32_t v7 = (int32_t)v6;
            switch (v7) {
                case -1: {
                    goto lab_0x4019b2;
                }
                case 99: {
                    // 0x401918
                    g35 = 1;
                    goto lab_0x401745_2;
                }
                default: {
                    if (v7 <= 99) {
                        if (v7 == -131) {
                            // 0x40189f
                            function_404660((int64_t)g28, "truncate", "GNU coreutils", (int64_t)g17, "Padraig Brady", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v7 == -130) {
                            // 0x4018d5
                            function_402140(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401889;
                    }
                    if (v7 == 114) {
                        // 0x401900
                        *(int64_t *)&g33 = (int64_t)g48;
                    } else {
                        if (v7 == 115) {
                            // break -> 0x401787
                            break;
                        }
                        if (v7 != 111) {
                            // 0x401889
                            function_402140(1);
                            // UNREACHABLE
                        }
                        // 0x401928
                        g34 = 1;
                    }
                    goto lab_0x401745_2;
                }
            }
        }
    }
  lab_0x4019b2:;
    int32_t v8 = *(int32_t *)0x60a25c; // 0x4019b2
    int64_t v9 = v8; // 0x4019b2
    int64_t v10 = 8 * v9 + a2; // 0x4019c0
    int32_t v11 = (int32_t)a1 - v8; // 0x4019c4
    int64_t v12; // 0x4016f0
    int64_t v13; // 0x4016f0
    int64_t v14; // 0x4016f0
    int64_t v15; // 0x4016f0
    int64_t v16; // 0x4016f0
    int64_t v17; // bp-200, 0x4016f0
    int64_t v18; // 0x4016f0
    int32_t v19; // 0x4016f0
    char v20; // 0x4016f0
    int32_t v21; // 0x4016f0
    if (g33 == NULL) {
        // 0x401e6e
        v16 = v9;
        if (v3 == 0) {
            goto lab_0x401ffa;
        } else {
            // 0x401e77
            v18 = -1;
            v13 = v12;
            if (v11 < 1) {
                goto lab_0x401bb0;
            } else {
                goto lab_0x401abd;
            }
        }
    } else {
        if (v3 != 0 && (int32_t)v4 == 0) {
            // 0x4019d9
            function_4041c0(1, "--reference", v8);
            function_4041c0(0, "--size", v8);
            // 0x401a3f
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify a relative %s with %s", 5));
          lab_0x401889:
            // 0x401889
            function_402140(1);
            // UNREACHABLE
        }
        // 0x401a06
        if (v3 == 0 == g34 == 1) {
            // 0x401a14
            function_4041c0(1, "--size", v8);
            function_4041c0(0, "--io-blocks", v8);
            // 0x401a3f
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"%s was specified but %s was not", 5));
            // 0x401889
            function_402140(1);
            // UNREACHABLE
        }
        // 0x401a5f
        if (v11 < 1) {
            goto lab_0x401bb0;
        } else {
            // 0x401a68
            if (__xstat(1, g33, (struct stat *)&v17) != 0) {
                // 0x401fbd
                function_403f90(4, (int64_t)g33);
                char * format = dcgettext(NULL, "cannot stat %s", 5); // 0x401fd9
                error(1, *__errno_location(), format);
                v16 = (int64_t)format;
                goto lab_0x401ffa;
            } else {
                if ((v21 & 0xd000) != 0x8000) {
                    int32_t fd = open(g33, O_RDONLY); // 0x401eda
                    int64_t v22 = fd; // 0x401edf
                    int32_t * v23 = __errno_location(); // 0x401ee2
                    v14 = v22;
                    if (fd < 0) {
                        goto lab_0x401f27;
                    } else {
                        char v24 = lseek(fd, 0, SEEK_END); // 0x401f01
                        int32_t v25 = *v23; // 0x401f06
                        close(fd);
                        v15 = v24;
                        if (v24 >= 0) {
                            goto lab_0x401aa4;
                        } else {
                            // 0x401f20
                            *v23 = v25;
                            v20 = v24;
                            v19 = v25;
                            v14 = v22;
                            goto lab_0x401f27;
                        }
                    }
                } else {
                    // 0x401a96
                    v14 = v11;
                    if (v1 < 0) {
                        goto lab_0x401f27;
                    } else {
                        goto lab_0x401aa4;
                    }
                }
            }
        }
    }
  lab_0x401bb0:
    // 0x401bb0
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing file operand", 5));
    function_402140(1);
    // UNREACHABLE
  lab_0x401ffa:;
    int32_t v26 = v16; // 0x402004
    function_4041c0(1, "--reference", v26);
    function_4041c0(0, "--size", v26);
    // 0x401a3f
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify either %s or %s", 5));
    // 0x401889
    function_402140(1);
    // UNREACHABLE
  lab_0x401abd:;
    int64_t v27 = v18; // 0x401adc
    char v28 = 0; // 0x401adc
    int64_t v29 = v13; // 0x401adc
    int32_t v30 = g35 == 0 ? 2113 : 2049; // 0x401adc
    int64_t v31 = v4; // 0x401adc
    int64_t v32 = v10; // 0x401adc
    goto lab_0x401ae0;
  lab_0x401ae0:;
    int64_t v33 = v31;
    int32_t oflag = v30;
    int64_t v34 = v29;
    int64_t v35 = v27;
    char v36 = v28; // 0x4016f0
    int64_t v37 = v32; // 0x4016f0
    int32_t v38; // 0x4016f0
    int64_t v39; // 0x4016f0
    int64_t v40; // 0x4016f0
    char result; // 0x4016f0
    int64_t path; // 0x401ae4
    int64_t v41; // 0x401ae0
    uint32_t fd2; // 0x401b00
    int64_t v42; // 0x401b05
    while (true) {
        // 0x401ae0
        result = v36;
        path = *(int64_t *)v37;
        if (path == 0) {
            // break (via goto) -> 0x401de6
            goto lab_0x401de6;
        }
        // 0x401af2
        v41 = v37 + 8;
        fd2 = open((char *)path, oflag);
        int32_t v43; // 0x4016f0
        uint64_t v44; // 0x401cd6
        int32_t v45; // 0x401b3e
        if (fd2 != -1) {
            // 0x401b11
            v42 = fd2;
            if (g34 != 0) {
                // 0x401ca2
                if (__fxstat(1, fd2, (struct stat *)&v17) != 0) {
                    // 0x401b4b
                    function_403f90(4, path);
                    goto lab_0x401b65;
                } else {
                    // 0x401cbb
                    v44 = v2 < 0x2000000000000001 ? v2 : 512;
                    if (v34 < (int64_t)(-0x8000000000000000 / (int128_t)v44)) {
                        goto lab_0x401d13;
                    } else {
                        if (0x7fffffffffffffff / v44 < v34) {
                            goto lab_0x401d13;
                        } else {
                            // 0x401cef
                            v38 = v33;
                            v39 = v34 * v44;
                            goto lab_0x401c2b;
                        }
                    }
                }
            } else {
                // 0x401b1e
                v43 = v33;
                v38 = v43;
                v39 = v34;
                if (v35 >= 0 || v43 == 0) {
                    goto lab_0x401c2b;
                } else {
                    // 0x401b32
                    v45 = __fxstat(1, fd2, (struct stat *)&v17);
                    v40 = v34;
                    if (v45 == 0) {
                        goto lab_0x401e02;
                    } else {
                        // 0x401b4b
                        function_403f90(4, path);
                        goto lab_0x401b65;
                    }
                }
            }
        }
        int32_t * err_num = __errno_location(); // 0x401bcf
        while (g35 != 0) {
            int64_t v46 = v41; // 0x401be3
            if (*err_num != 2) {
                // break -> 0x401be9
                break;
            }
            path = *(int64_t *)v46;
            if (path == 0) {
                // break (via goto) -> 0x401de6
                goto lab_0x401de6;
            }
            // 0x401af2
            v41 = v46 + 8;
            fd2 = open((char *)path, oflag);
            if (fd2 != -1) {
                // 0x401b11
                v42 = fd2;
                if (g34 != 0) {
                    // 0x401ca2
                    if (__fxstat(1, fd2, (struct stat *)&v17) != 0) {
                        // 0x401b4b
                        function_403f90(4, path);
                        goto lab_0x401b65;
                    } else {
                        // 0x401cbb
                        v44 = v2 < 0x2000000000000001 ? v2 : 512;
                        if (v34 < (int64_t)(-0x8000000000000000 / (int128_t)v44)) {
                            goto lab_0x401d13;
                        } else {
                            if (0x7fffffffffffffff / v44 < v34) {
                                goto lab_0x401d13;
                            } else {
                                // 0x401cef
                                v38 = v33;
                                v39 = v34 * v44;
                                goto lab_0x401c2b;
                            }
                        }
                    }
                } else {
                    // 0x401b1e
                    v43 = v33;
                    v38 = v43;
                    v39 = v34;
                    if (v35 >= 0 || v43 == 0) {
                        goto lab_0x401c2b;
                    } else {
                        // 0x401b32
                        v45 = __fxstat(1, fd2, (struct stat *)&v17);
                        v40 = v34;
                        if (v45 == 0) {
                            goto lab_0x401e02;
                        } else {
                            // 0x401b4b
                            function_403f90(4, path);
                            goto lab_0x401b65;
                        }
                    }
                }
            }
            // 0x401bcf
            err_num = __errno_location();
        }
        // 0x401be9
        function_403f90(4, path);
        error(0, *err_num, dcgettext(NULL, "cannot open %s for writing", 5));
        v36 = 1;
        v37 = v41;
    }
  lab_0x401de6:
    // 0x401de6
    return result;
  lab_0x401f27:;
    int64_t v47 = function_403f90(4, (int64_t)g33); // 0x401f33
    char * format2 = dcgettext(NULL, "cannot get the size of %s", 5); // 0x401f47
    error(1, *__errno_location(), format2);
    int128_t v48; // 0x4016f0
    int64_t v49 = v48; // 0x401f63
    char v50 = v20; // 0x401f63
    int64_t v51 = v48; // 0x401f63
    int32_t v52 = v19; // 0x401f63
    int64_t v53 = &g52; // 0x401f63
    int64_t v54 = (int64_t)format2; // 0x401f63
    int64_t v55 = v47; // 0x401f63
    int64_t v56 = v10; // 0x401f63
    int64_t v57 = v12; // 0x401f63
    int64_t v58 = v14; // 0x401f63
    goto lab_0x401f68;
  lab_0x401aa4:
    // 0x401aa4
    v18 = v3 == 0 ? -1 : v15;
    v13 = v3 == 0 ? v15 : v12;
    goto lab_0x401abd;
  lab_0x401f68:;
    int64_t v59 = v57;
    int64_t v60 = v56;
    int64_t v61 = v55;
    int64_t v62 = v54;
    int32_t v63 = v52;
    int64_t v64 = v51;
    char v65 = v50;
    int64_t v66 = v49;
    uint64_t v67 = v53 - 1 + v58; // 0x401f68
    int64_t v68 = v67 - v67 % v58; // 0x401f72
    int64_t v69 = v66; // 0x401f79
    char v70 = v65; // 0x401f79
    int64_t v71 = v64; // 0x401f79
    int32_t v72 = v63; // 0x401f79
    int64_t v73 = v62; // 0x401f79
    int64_t v74 = v61; // 0x401f79
    int64_t v75 = v60; // 0x401f79
    int64_t v76 = v59; // 0x401f79
    int64_t length = v68; // 0x401f79
    int64_t v77; // 0x4016f0
    int64_t v78; // 0x4016f0
    int64_t v79; // 0x4016f0
    int64_t v80; // 0x4016f0
    int64_t v81; // 0x4016f0
    int64_t v82; // 0x4016f0
    int64_t v83; // 0x4016f0
    int32_t v84; // 0x4016f0
    char v85; // 0x4016f0
    if (v68 >= 0) {
        goto lab_0x401c3f;
    } else {
        // 0x401f7f
        function_403f90(4, v61);
        v82 = v66;
        v85 = v65;
        v83 = v64;
        v84 = v63;
        v80 = v62;
        v79 = v61;
        v81 = (int64_t)"overflow rounding up size of file %s";
        v77 = v60;
        v78 = v59;
        goto lab_0x401e36;
    }
  lab_0x401c3f:;
    int64_t fd3 = v76;
    int64_t v86 = v75;
    int64_t v87 = v74;
    int64_t v88 = v73;
    int32_t v89 = v72;
    int64_t v90 = v71;
    char v91 = v70;
    int64_t v92 = v69;
    int32_t v93 = ftruncate((int32_t)fd3, (int32_t)length); // 0x401c4b
    int64_t v94 = v92; // 0x401c53
    char v95 = v91; // 0x401c53
    int64_t v96 = v90; // 0x401c53
    int32_t v97 = v89; // 0x401c53
    int64_t v98 = v88; // 0x401c53
    int64_t v99 = v87; // 0x401c53
    int64_t v100 = v86; // 0x401c53
    int64_t fd4 = fd3; // 0x401c53
    char v101 = 0; // 0x401c53
    if (v93 == -1) {
        // 0x401c59
        function_403f90(4, v87);
        error(0, *__errno_location(), dcgettext(NULL, "failed to truncate %s at %ld bytes", 5));
        v94 = v92;
        v95 = v91;
        v96 = v90;
        v97 = v89;
        v98 = v88;
        v99 = v87;
        v100 = v86;
        fd4 = fd3;
        v101 = 1;
    }
    goto lab_0x401b88;
  lab_0x401b88:;
    int64_t v102 = v100;
    int64_t v103 = v98;
    int32_t v104 = v97;
    int64_t v105 = v96;
    int64_t v106 = v94;
    if (close((int32_t)fd4) != 0) {
        // 0x401d55
        function_403f90(4, v99);
        error(0, *__errno_location(), dcgettext(NULL, "failed to close %s", 5));
        v27 = v106;
        v28 = 1;
        v29 = v105;
        v30 = v104;
        v31 = v103;
        v32 = v102;
    } else {
        // 0x401b98
        v27 = v106;
        v28 = v101 | v95;
        v29 = v105;
        v30 = v104;
        v31 = v103;
        v32 = v102;
    }
    goto lab_0x401ae0;
  lab_0x401e36:
    // 0x401e36
    error(0, 0, dcgettext(NULL, (char *)v81, 5));
    v94 = v82;
    v95 = v85;
    v96 = v83;
    v97 = v84;
    v98 = v80;
    v99 = v79;
    v100 = v77;
    fd4 = v78;
    v101 = 1;
    goto lab_0x401b88;
  lab_0x401c2b:;
    int64_t v107 = v39;
    int64_t v108 = v107; // 0x401c2d
    int64_t v109; // 0x4016f0
    int64_t v110; // 0x4016f0
    if (v38 != 0) {
        // 0x401d99
        v110 = v35;
        v109 = v107;
        v40 = v107;
        if (v35 == -1) {
            goto lab_0x401e02;
        } else {
            goto lab_0x401da4;
        }
    } else {
        goto lab_0x401c33;
    }
  lab_0x401b65:
    // 0x401b65
    error(0, *__errno_location(), dcgettext(NULL, (char *)(int64_t)"cannot fstat %s", 5));
    v94 = v35;
    v95 = result;
    v96 = v34;
    v97 = oflag;
    v98 = v33;
    v99 = path;
    v100 = v41;
    fd4 = v42;
    v101 = 1;
    goto lab_0x401b88;
  lab_0x401d13:
    // 0x401d13
    function_403f90(4, path);
    error(0, (int32_t)"overflow in %ld * %ld byte blocks for file %s" ^ (int32_t)"overflow in %ld * %ld byte blocks for file %s", dcgettext(NULL, "overflow in %ld * %ld byte blocks for file %s", 5));
    v94 = v35;
    v95 = result;
    v96 = v34;
    v97 = oflag;
    v98 = v33;
    v99 = path;
    v100 = v41;
    fd4 = v42;
    v101 = 1;
    goto lab_0x401b88;
  lab_0x401c33:;
    int64_t v111 = v108;
    v69 = v35;
    v70 = result;
    v71 = v34;
    v72 = oflag;
    v73 = v33;
    v74 = path;
    v75 = v41;
    v76 = v42;
    length = v111 > 0 ? v111 : 0;
    goto lab_0x401c3f;
  lab_0x401e02:
    // 0x401e02
    if ((v21 & 0xd000) != 0x8000) {
        int32_t v112 = lseek(fd2, 0, SEEK_END); // 0x401e98
        v110 = v112;
        int64_t v113; // 0x4016f0
        v109 = v113;
        if (v112 >= 0) {
            goto lab_0x401da4;
        } else {
            // 0x401ea6
            function_403f90(4, path);
            goto lab_0x401b65;
        }
    } else {
        // 0x401e12
        v109 = v40;
        if (v1 >= 0) {
            goto lab_0x401da4;
        } else {
            // 0x401e1c
            function_403f90(4, path);
            v82 = v35;
            v85 = result;
            v83 = v34;
            v84 = oflag;
            v80 = v33;
            v79 = path;
            v81 = (int64_t)"%s has unusable, apparently negative size";
            v77 = v41;
            v78 = v42;
            goto lab_0x401e36;
        }
    }
  lab_0x401da4:;
    uint64_t v114 = v109;
    uint64_t v115 = v110;
    v49 = v35;
    v50 = result;
    v51 = v34;
    v52 = oflag;
    v53 = v115;
    v54 = v33;
    v55 = path;
    v56 = v41;
    v57 = v42;
    v58 = v114;
    switch ((int32_t)v33) {
        case 2: {
            // 0x401e56
            v108 = v114 < v115 ? v115 : v114;
            goto lab_0x401c33;
        }
        case 3: {
            // 0x401e62
            v69 = v35;
            v70 = result;
            v71 = v34;
            v72 = oflag;
            v73 = v33;
            v74 = path;
            v75 = v41;
            v76 = v42;
            length = v114 > v115 ? v115 : v114;
            goto lab_0x401c3f;
        }
        case 4: {
            // 0x401ec5
            v108 = v115 - v115 % v114;
            goto lab_0x401c33;
        }
        case 5: {
            goto lab_0x401f68;
        }
        default: {
            if (0x7fffffffffffffff - v115 < v114) {
                // 0x401f9e
                function_403f90(4, path);
                v82 = v35;
                v85 = result;
                v83 = v34;
                v84 = oflag;
                v80 = v33;
                v79 = path;
                v81 = (int64_t)"overflow extending size of file %s";
                v77 = v41;
                v78 = v42;
                goto lab_0x401e36;
            } else {
                // 0x401dde
                v108 = v114 + v115;
                goto lab_0x401c33;
            }
        }
    }
}
// Address range: 0x402060 - 0x40208b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402060
    int64_t v1; // 0x402060
    __libc_start_main(0x4016f0, (int32_t)a4, (char **)&v1, (void (*)())0x406840, (void (*)())0x4068a0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40208b - 0x4020aa
int64_t function_40208b(void) {
    // 0x40208b
    return &g27;
}
// Address range: 0x4020aa - 0x4020e1
int64_t function_4020aa(void) {
    // 0x4020aa
    return 0;
}
// Address range: 0x4020e1 - 0x402138
int64_t function_4020e1(void) {
    // 0x4020e1
    if (g31 != 0) {
        // 0x402137
        int64_t result; // 0x4020e1
        return result;
    }
    int64_t v1 = g32; // 0x402114
    int64_t result2; // 0x402126
    if (g32 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x402126
        result2 = function_40208b();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x402116
        v1++;
    }
    // 0x40210a
    g32 = v1;
    // 0x402126
    result2 = function_40208b();
    g31 = 1;
    return result2;
}
// Address range: 0x402138 - 0x40213d
int64_t function_402138(void) {
    // 0x402138
    return function_4020aa();
}
// Address range: 0x402140 - 0x4024fd
int64_t function_402140(int64_t a1) {
    int32_t status = a1; // 0x402156
    if (status != 0) {
        // 0x40215a
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40217f
        exit(status);
        // UNREACHABLE
    }
    // 0x402186
    __printf_chk(1, dcgettext(NULL, "Usage: %s OPTION... FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Shrink or extend the size of each FILE to the specified size\n\nA FILE argument that does not exist is created.\n\nIf a FILE is larger than the specified size, the extra data is lost.\nIf a FILE is shorter, it is extended and the extended part (hole)\nreads as zero bytes.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -c, --no-create        do not create any files\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -o, --io-blocks        treat SIZE as number of IO blocks instead of bytes\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -r, --reference=RFILE  base size on RFILE\n  -s, --size=SIZE        set or adjust the file size by SIZE bytes\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nSIZE may also be prefixed by one of the following modifying characters:\n'+' extend by, '-' reduce by, '<' at most, '>' at least,\n'/' round down to multiple of, '%' round up to multiple of.\n", 5), g28);
    int64_t v1 = &g1; // bp-136, 0x4022df
    bool v2; // 0x402140
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402360
    int64_t v6 = *(int64_t *)v5; // 0x402364
    int64_t v7 = 9; // 0x40236a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"truncate";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402376
        char v11 = *(char *)v9; // 0x402376
        char v12 = v11; // 0x402376
        bool v13 = false; // 0x402376
        while (v10 == v11) {
            // 0x40236c
            v7--;
            int64_t v14 = v9 + v3; // 0x402376
            int64_t v15 = v8 + v3; // 0x402376
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
            // break -> 0x402382
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 9;
    }
    // 0x402382
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402494;
        } else {
            // 0x40247e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4024d3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4023e4;
            } else {
                goto lab_0x402494;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4023e4;
        } else {
            // 0x4023ca
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4024d3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4023e4;
            } else {
                goto lab_0x4023e4;
            }
        }
    }
  lab_0x402494:
    // 0x402494
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402424
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40217f
    exit(status);
    // UNREACHABLE
  lab_0x4023e4:
    // 0x4023e4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402424
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40217f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402500 - 0x402508
int64_t function_402500(int64_t a1) {
    // 0x402500
    g37 = a1;
    int64_t result; // 0x402500
    return result;
}
// Address range: 0x402510 - 0x402518
int64_t function_402510(int64_t a1) {
    // 0x402510
    g36 = a1;
    int64_t result; // 0x402510
    return result;
}
// Address range: 0x402520 - 0x4025be
int64_t function_402520(void) {
    // 0x402520
    int32_t * err_num; // 0x402536
    if ((int32_t)function_4060f0((int64_t)g28) == 0) {
        goto lab_0x40254c;
    } else {
        // 0x402536
        err_num = __errno_location();
        if (g36 == 0) {
            goto lab_0x402563;
        } else {
            // 0x402547
            if (*err_num != 32) {
                goto lab_0x402563;
            } else {
                goto lab_0x40254c;
            }
        }
    }
  lab_0x40254c:;
    int64_t result = function_4060f0((int64_t)g30); // 0x402553
    if ((int32_t)result == 0) {
        // 0x40255c
        return result;
    }
    // 0x40259e
    _exit(g18);
    // UNREACHABLE
  lab_0x402563:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40256f
    if (g37 == 0) {
        // 0x4025a9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402583
        error(0, *err_num, "%s: %s", (char *)function_404030((int64_t)g37), v1);
    }
    // 0x40259e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x4025c0 - 0x402659
int64_t function_4025c0(int64_t str) {
    // 0x4025c0
    if (str == 0) {
        // 0x402639
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4025ce
    int64_t result = (int64_t)found_char_pos; // 0x4025ce
    if (found_char_pos == NULL) {
        // 0x402629
        g38 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4025d8
    if (v1 - str < 7) {
        // 0x402629
        g38 = str;
        g29 = str;
        return result;
    }
    // 0x4025e8
    bool v2; // 0x4025c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4025c0
    int64_t v5 = result - 6; // 0x4025c0
    int64_t v6 = 7; // 0x4025f6
    unsigned char v7 = *(char *)v5; // 0x4025f6
    char v8 = *(char *)v4; // 0x4025f6
    char v9 = v8; // 0x4025f6
    bool v10 = false; // 0x4025f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x402600
    int64_t v13 = v1; // 0x402600
    int64_t v14 = 3; // 0x402600
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402629
        g38 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402612
    char v16 = *(char *)v12; // 0x402612
    char v17 = v16; // 0x402612
    bool v18 = false; // 0x402612
    while (v15 == v16) {
        // 0x402602
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
    int64_t v20 = v1; // 0x40261c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40261e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402629
    g38 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x402660 - 0x402752
int64_t function_402660(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402674
    int64_t result = (int64_t)v1; // 0x402674
    if (result != a1) {
        // 0x402681
        return result;
    }
    int64_t v2 = function_4061b0(); // 0x402690
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402746
    if (v3 == 85) {
        // 0x4026a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402738
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x4026ce
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x4026db
        // 0x402681
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402738
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40271d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40272a
    // 0x402681
    return result4;
}
// Address range: 0x402760 - 0x4027b7
int64_t function_402760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402760
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4027a8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4027b7 - 0x403981
int64_t function_4027b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402801
    int64_t v3 = 0; // 0x402801
    int64_t v4; // 0x4027b7
    int64_t v5; // 0x4027b7
    int64_t v6; // 0x4027b7
    int64_t v7; // 0x4027b7
    int64_t v8; // 0x4027b7
    int64_t v9; // 0x4027b7
    int64_t v10; // 0x4027b7
    int64_t v11; // 0x4027b7
    int64_t v12; // 0x4027b7
    int64_t v13; // 0x4027b7
    int64_t v14; // 0x4027b7
    int64_t v15; // 0x4027b7
    int64_t v16; // 0x4027b7
    int64_t v17; // 0x4027b7
    int64_t v18; // 0x4027b7
    int64_t result; // 0x4027b7
    int64_t v19; // 0x4027b7
    int32_t wc; // bp+132, 0x4027b7
    int64_t ps; // bp+136, 0x4027b7
    char v20; // 0x402d70
    int64_t v21; // 0x402d70
    int64_t v22; // 0x403118
    int64_t v23; // 0x4027b7
    int64_t v24; // 0x403137
    int32_t v25; // 0x4027b7
    while (true) {
      lab_0x402808_2:
        // 0x402808
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4027b7
        int64_t v27; // 0x40283c
        while (true) {
          lab_0x402808:
            // 0x402808
            v5 = v26;
            bool v28 = v15 == v5; // 0x402813
            if (v15 == -1) {
                // 0x402815
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402823
            if (v28) {
                // break (via goto) -> 0x402f88
                goto lab_0x402f88;
            }
            // 0x40282c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g51 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x402e1b
                    if (v25 % 2 == 0) {
                        goto lab_0x402961;
                    }
                    // 0x40323d
                    v26 = v5 + 1;
                    goto lab_0x402808;
                }
                case 7: {
                    goto lab_0x402961;
                }
                case 8: {
                    goto lab_0x402961;
                }
                case 9: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402961;
                }
                case 12: {
                    goto lab_0x402961;
                }
                case 13: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40292d;
                }
                case 36: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402961;
                }
                case 38: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402961;
                }
                case 44: {
                    goto lab_0x402961;
                }
                case 45: {
                    goto lab_0x402961;
                }
                case 46: {
                    goto lab_0x402961;
                }
                case 47: {
                    goto lab_0x402961;
                }
                case 48: {
                    goto lab_0x402961;
                }
                case 49: {
                    goto lab_0x402961;
                }
                case 50: {
                    goto lab_0x402961;
                }
                case 51: {
                    goto lab_0x402961;
                }
                case 52: {
                    goto lab_0x402961;
                }
                case 53: {
                    goto lab_0x402961;
                }
                case 54: {
                    goto lab_0x402961;
                }
                case 55: {
                    goto lab_0x402961;
                }
                case 56: {
                    goto lab_0x402961;
                }
                case 57: {
                    goto lab_0x402961;
                }
                case 58: {
                    goto lab_0x402961;
                }
                case 59: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402961;
                }
                case 66: {
                    goto lab_0x402961;
                }
                case 67: {
                    goto lab_0x402961;
                }
                case 68: {
                    goto lab_0x402961;
                }
                case 69: {
                    goto lab_0x402961;
                }
                case 70: {
                    goto lab_0x402961;
                }
                case 71: {
                    goto lab_0x402961;
                }
                case 72: {
                    goto lab_0x402961;
                }
                case 73: {
                    goto lab_0x402961;
                }
                case 74: {
                    goto lab_0x402961;
                }
                case 75: {
                    goto lab_0x402961;
                }
                case 76: {
                    goto lab_0x402961;
                }
                case 77: {
                    goto lab_0x402961;
                }
                case 78: {
                    goto lab_0x402961;
                }
                case 79: {
                    goto lab_0x402961;
                }
                case 80: {
                    goto lab_0x402961;
                }
                case 81: {
                    goto lab_0x402961;
                }
                case 82: {
                    goto lab_0x402961;
                }
                case 83: {
                    goto lab_0x402961;
                }
                case 84: {
                    goto lab_0x402961;
                }
                case 85: {
                    goto lab_0x402961;
                }
                case 86: {
                    goto lab_0x402961;
                }
                case 87: {
                    goto lab_0x402961;
                }
                case 88: {
                    goto lab_0x402961;
                }
                case 89: {
                    goto lab_0x402961;
                }
                case 90: {
                    goto lab_0x402961;
                }
                case 91: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402961;
                }
                case 94: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402961;
                }
                case 96: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402961;
                }
                case 98: {
                    goto lab_0x402961;
                }
                case 99: {
                    goto lab_0x402961;
                }
                case 100: {
                    goto lab_0x402961;
                }
                case 101: {
                    goto lab_0x402961;
                }
                case 102: {
                    goto lab_0x402961;
                }
                case 103: {
                    goto lab_0x402961;
                }
                case 104: {
                    goto lab_0x402961;
                }
                case 105: {
                    goto lab_0x402961;
                }
                case 106: {
                    goto lab_0x402961;
                }
                case 107: {
                    goto lab_0x402961;
                }
                case 108: {
                    goto lab_0x402961;
                }
                case 109: {
                    goto lab_0x402961;
                }
                case 110: {
                    goto lab_0x402961;
                }
                case 111: {
                    goto lab_0x402961;
                }
                case 112: {
                    goto lab_0x402961;
                }
                case 113: {
                    goto lab_0x402961;
                }
                case 114: {
                    goto lab_0x402961;
                }
                case 115: {
                    goto lab_0x402961;
                }
                case 116: {
                    goto lab_0x402961;
                }
                case 117: {
                    goto lab_0x402961;
                }
                case 118: {
                    goto lab_0x402961;
                }
                case 119: {
                    goto lab_0x402961;
                }
                case 120: {
                    goto lab_0x402961;
                }
                case 121: {
                    goto lab_0x402961;
                }
                case 122: {
                    goto lab_0x402961;
                }
                case 123: {
                    goto lab_0x402905;
                }
                case 124: {
                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402905;
                }
                case 126: {
                    goto lab_0x40292d;
                }
                default: {
                    goto lab_0x402d05;
                }
            }
        }
      lab_0x402d05:
        if (v23 != 1) {
            // 0x403070
            ps = 0;
            int64_t len = v15; // 0x403080
            if (v15 == -1) {
                // 0x403082
                len = strlen((char *)str);
            }
            // 0x4030ae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40310f:
                // 0x40310f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403114
                int64_t v30 = v29 + str;
                v24 = function_406070(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40368a_2;
                    }
                    case -1: {
                        goto lab_0x40368a_2;
                    }
                    case -2: {
                        // 0x40376d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4037a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4037aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4037b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4037b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40368a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40368a_2;
                    }
                    case 1: {
                        goto lab_0x4030e0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40318c
                        char v34 = *(char *)v33; // 0x40319d
                        unsigned char v35; // 0x4027b7
                        if (v34 < 125) {
                            // 0x4031a8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4031bf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402760(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403190
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40319d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4031a8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4031bf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402760(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403190
                            v33++;
                        }
                        goto lab_0x4030e0;
                    }
                }
            }
            goto lab_0x40368a_2;
        } else {
            // 0x402d54
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402961;
        }
    }
  lab_0x402f88:
    // 0x402f88
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40388a
        if (v8 > result) {
            // 0x403893
            *(char *)(v12 + result) = 0;
        }
        // 0x402bb7
        return result;
    }
    return function_402760(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402961:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402970
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402b7a_2;
        }
    }
    int64_t v39 = result; // 0x402a71
    char v40 = v20; // 0x402a71
    int64_t v41 = v38; // 0x402a71
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402a71
    int64_t v43 = v36; // 0x402a71
    goto lab_0x4029ed;
  lab_0x402b7a_2:
    // 0x402bb7
    return function_402760(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40368a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402961;
    } else {
        uint64_t v49 = v46 + v5; // 0x40325e
        int64_t v50 = v5 + 1; // 0x403341
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403348
        char v52 = v20; // 0x403348
        int64_t v53 = result; // 0x403348
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403311
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403315
            int64_t v56 = v54 + 1; // 0x40331a
            int64_t v57 = v51 + 1; // 0x403341
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40330c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403311
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403315
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
        goto lab_0x4029ed;
    }
  lab_0x4030e0:
    // 0x4030e0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4030ff
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403102
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40368a
        goto lab_0x40368a_2;
    }
    goto lab_0x40310f;
  lab_0x40292d:
    // 0x40292d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402b7a_2;
    }
    goto lab_0x402961;
  lab_0x402905:;
    bool v60 = v15 == 1; // 0x402910
    if (v15 == -1) {
        // 0x402912
        v60 = *(char *)v1 == 0;
    }
    // 0x40291e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402961;
    } else {
        goto lab_0x40292d;
    }
  lab_0x4029ed:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4029f2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4029f6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402808_2;
}
// Address range: 0x403990 - 0x403b2e
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403992
    int32_t * v3 = __errno_location(); // 0x4039ac
    int64_t v4 = (int64_t)g20; // 0x4039b1
    int32_t v5 = *v3; // 0x4039bb
    int64_t v6 = v4; // 0x4039d1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403b29
            function_4049f0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4039e0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4039e7
        int64_t v9; // 0x403990
        if (g20 == &g21) {
            int64_t v10 = function_404800(0, v8); // 0x403b0a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x403b0f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404800(v4, v8); // 0x4039fb
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x403a0a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x403a0a
        int32_t v14 = v7; // 0x403a11
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403a41
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403a4b
    int64_t * v17 = (int64_t *)v15; // 0x403a4e
    uint64_t v18 = *v17; // 0x403a4e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403a51
    int64_t result = *v19; // 0x403a51
    int64_t v20; // 0x403990
    uint64_t v21 = function_402760(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403a74
    if (v18 > v21) {
        // 0x403aeb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403a87
    *v17 = v22;
    if (result != (int64_t)&g39) {
        // 0x403a97
        free((int64_t *)result);
    }
    int64_t result2 = function_4047a0(v22); // 0x403ab1
    *v19 = result2;
    int64_t v23; // 0x403990
    function_402760(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403aeb
    *v3 = v5;
    return result2;
}
// Address range: 0x403b30 - 0x403b64
int64_t function_403b30(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403b37
    int64_t result = function_4049a0(a1 == 0 ? (int64_t)&g40 : a1, 56); // 0x403b56
    return result;
}
// Address range: 0x403b70 - 0x403b7f
int64_t function_403b70(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g40 : a1); // 0x403b7c
    return result;
}
// Address range: 0x403b80 - 0x403b8f
int64_t function_403b80(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x403b88
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g40;
}
// Address range: 0x403b90 - 0x403bc3
int64_t function_403b90(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 + 8 : a1 + 8; // 0x403ba9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403bae
    uint32_t v3 = *v2; // 0x403bae
    uint32_t v4 = (int32_t)a2 % 32; // 0x403bb2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403bd0 - 0x403be3
int64_t function_403bd0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g40 + 4 : a1 + 4); // 0x403bdc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403bf0 - 0x403c1b
int64_t function_403bf0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x403bf8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403c15
        abort();
        // UNREACHABLE
    }
    // 0x403c0c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g40;
}
// Address range: 0x403c20 - 0x403c92
int64_t function_403c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g40 : a5; // 0x403c42
    int32_t * v2 = __errno_location(); // 0x403c4b
    uint32_t v3 = *(int32_t *)v1; // 0x403c6b
    int64_t result = function_402760(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403c7a
    return result;
}
// Address range: 0x403ca0 - 0x403d81
int64_t function_403ca0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g40 : a4; // 0x403cc2
    int32_t * v2 = __errno_location(); // 0x403cc8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403ce7
    int32_t * v4 = (int32_t *)v1; // 0x403cea
    int64_t v5 = function_402760(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403d05
    int64_t v6 = v5 + 1; // 0x403d0a
    int64_t result = function_4047a0(v6); // 0x403d1f
    function_402760(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403d64
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403d6d
    return result;
}
// Address range: 0x403d90 - 0x403d9a
int64_t function_403d90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403d90
    return function_403ca0(a1, a2, 0, a3);
}
// Address range: 0x403da0 - 0x403e35
int64_t function_403da0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403da0
    int64_t v2 = v1; // 0x403da0
    int64_t v3 = v2; // 0x403db4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403dd3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g52;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403dd0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g52;
        }
    }
    int64_t v6 = v3; // 0x403ded
    if (g21 != 0x60a2c0) {
        // 0x403def
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g39;
        v6 = &g52;
    }
    int64_t result = v6; // 0x403e11
    if (g20 != &g21) {
        // 0x403e13
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g52;
    }
    // 0x403e26
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403e40 - 0x403e51
int64_t function_403e40(void) {
    // 0x403e40
    int64_t v1; // 0x403e40
    return function_403990(v1, v1, -1, (int64_t *)&g40);
}
// Address range: 0x403e60 - 0x403e6a
int64_t function_403e60(void) {
    // 0x403e60
    int64_t v1; // 0x403e60
    return function_403990(v1, v1, v1, (int64_t *)&g40);
}
// Address range: 0x403e70 - 0x403e86
int64_t function_403e70(int64_t a1) {
    // 0x403e70
    return function_403990(0, a1, -1, (int64_t *)&g40);
}
// Address range: 0x403e90 - 0x403ea2
int64_t function_403e90(int64_t a1, int64_t a2) {
    // 0x403e90
    return function_403990(0, a1, a2, (int64_t *)&g40);
}
// Address range: 0x403eb0 - 0x403f18
int64_t function_403eb0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403ec0
    return function_403990((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403f20 - 0x403f84
int64_t function_403f20(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403f30
    return function_403990((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403f90 - 0x403f9c
int64_t function_403f90(int64_t a1, int64_t a2) {
    // 0x403f90
    return function_403eb0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403fa0 - 0x403faf
int64_t function_403fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403fa0
    return function_403f20(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403fb0 - 0x404020
int64_t function_403fb0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x403fbd
    int128_t v2 = __asm_movdqa(g41); // 0x403fc5
    int128_t v3 = __asm_movdqa(g42); // 0x403fcd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403fe2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403ff8
    uint32_t v6 = *v5; // 0x403ff8
    uint32_t v7 = (int32_t)a3 % 32; // 0x403ffd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403990(0, a1, a2, &v4);
}
// Address range: 0x404020 - 0x40402d
int64_t function_404020(int64_t a1, int64_t a2) {
    // 0x404020
    return function_403fb0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404030 - 0x404041
int64_t function_404030(int64_t a1) {
    // 0x404030
    return function_403fb0(a1, -1, 58);
}
// Address range: 0x404050 - 0x40405a
int64_t function_404050(void) {
    // 0x404050
    int64_t v1; // 0x404050
    return function_403fb0(v1, v1, 58);
}
// Address range: 0x404060 - 0x4040ce
int64_t function_404060(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40407a
    return function_403990(a1, a3, -1, &v1);
}
// Address range: 0x4040d0 - 0x40413c
int64_t function_4040d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x4040d7
    int128_t v2 = __asm_movdqa(g41); // 0x4040df
    int128_t v3 = __asm_movdqa(g42); // 0x4040e7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404109
    if (a2 == 0 || a3 == 0) {
        // 0x404137
        abort();
        // UNREACHABLE
    }
    // 0x40411a
    return function_403990(a1, a4, a5, &v4);
}
// Address range: 0x404140 - 0x404149
int64_t function_404140(void) {
    // 0x404140
    int64_t v1; // 0x404140
    return function_4040d0(v1, v1, v1, v1, -1);
}
// Address range: 0x404150 - 0x404167
int64_t function_404150(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404150
    return function_4040d0(0, a1, a2, a3, -1);
}
// Address range: 0x404170 - 0x404183
int64_t function_404170(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404170
    return function_4040d0(0, a1, a2, a3, a4);
}
// Address range: 0x404190 - 0x40419a
int64_t function_404190(void) {
    // 0x404190
    int64_t v1; // 0x404190
    return function_403990(v1, v1, v1, &g19);
}
// Address range: 0x4041a0 - 0x4041b2
int64_t function_4041a0(int64_t a1, int64_t a2) {
    // 0x4041a0
    return function_403990(0, a1, a2, &g19);
}
// Address range: 0x4041c0 - 0x4041d1
int64_t function_4041c0(int64_t a1, char * a2, int32_t a3) {
    // 0x4041c0
    return function_403990(a1, (int64_t)a2, -1, &g19);
}
// Address range: 0x4041e0 - 0x4041f6
int64_t function_4041e0(int64_t a1) {
    // 0x4041e0
    return function_403990(0, a1, -1, &g19);
}
// Address range: 0x404200 - 0x4045dd
int64_t function_404200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404298
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40421c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404236
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40427b
    if (a6 < 10) {
        // 0x40428a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404382
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4045e0 - 0x404600
int64_t function_4045e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4045e0
    if (a5 == 0) {
        // 0x4045fb
        return function_404200(a1, a2, a3, a4, a5, 0, (int64_t)&g52);
    }
    int64_t v1 = 0; // 0x4045e7
    v1++;
    int64_t v2 = v1; // 0x4045f9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4045f0
        v1++;
        v2 = v1;
    }
    // 0x4045fb
    return function_404200(a1, a2, a3, a4, a5, v2, (int64_t)&g52);
}
// Address range: 0x404600 - 0x404660
int64_t function_404600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404600
    int64_t v3 = &v2; // 0x404600
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404633
    int64_t v6; // 0x40461d
    int64_t * v7; // 0x40463b
    int64_t v8; // 0x40463b
    int64_t v9; // 0x404647
    if (v5 < 48) {
        // 0x404610
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404653
            break;
        }
    } else {
        // 0x40463b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404653
            break;
        }
    }
    int64_t v10 = 10; // 0x404631
    while (v4 != 9) {
        // 0x404629
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404610
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404653
                break;
            }
        } else {
            // 0x40463b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404653
                break;
            }
        }
        // 0x404629
        v10 = 10;
    }
    // 0x404653
    return function_404200(a1, a2, a3, a4, v3, v10, (int64_t)&g52);
}
// Address range: 0x404660 - 0x40471c
int64_t function_404660(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404660
    int64_t v1; // bp-168, 0x404660
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404660
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404660
    int64_t v8; // 0x404660
    int64_t v9; // bp-56, 0x404660
    int64_t v10; // 0x4046c5
    int64_t v11; // 0x4046e9
    if ((int32_t)v6 < 48) {
        // 0x4046b0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404700
            break;
        }
    } else {
        // 0x4046e2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404700
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4046da
    int64_t v13 = 10; // 0x4046da
    while (v5 != 9) {
        // 0x4046dc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4046b0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404700
                break;
            }
        } else {
            // 0x4046e2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404700
                break;
            }
        }
        // 0x4046d2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404700
    int64_t v14; // bp-136, 0x404660
    int64_t result = function_404200(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g52); // 0x40470f
    return result;
}
// Address range: 0x404720 - 0x404794
int64_t function_404720(int64_t a1) {
    // 0x404720
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404783
    return fputs_unlocked(v1, g28);
}
// Address range: 0x4047a0 - 0x4047ba
int64_t function_4047a0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4047a4
    if (size != 0 != (mem == NULL)) {
        // 0x4047b3
        return (int64_t)mem;
    }
    // 0x4047b5
    function_4049f0(size);
    // UNREACHABLE
}
// Address range: 0x4047c0 - 0x4047e1
int64_t function_4047c0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4047c3
    int64_t v2 = v1; // 0x4047c3
    if (v2 < 0) {
        // 0x4047db
        function_4049f0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4047d9
        return function_4047a0(v2);
    }
    // 0x4047db
    function_4049f0(v2);
    // UNREACHABLE
}
// Address range: 0x4047f0 - 0x4047f2
int64_t function_4047f0(void) {
    // 0x4047f0
    int64_t v1; // 0x4047f0
    return function_4047a0(v1);
}
// Address range: 0x404800 - 0x404836
int64_t function_404800(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404828
        free(v1);
        return (int32_t)&g52 ^ (int32_t)&g52;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404811
    if (a2 != 0 != (mem == NULL)) {
        // 0x404820
        return (int64_t)mem;
    }
    // 0x404831
    function_4049f0(a1);
    // UNREACHABLE
}
// Address range: 0x404840 - 0x404861
int64_t function_404840(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404843
    int64_t v2 = v1; // 0x404843
    if (v2 < 0) {
        // 0x40485b
        function_4049f0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404859
        return function_404800(a1, v2);
    }
    // 0x40485b
    function_4049f0(a1);
    // UNREACHABLE
}
// Address range: 0x404870 - 0x4048f6
int64_t function_404870(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4048cb
            function_4049f0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404800(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4048b3
    if (a2 == 0) {
        // 0x4048d8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4048b8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4048cb
        function_4049f0(a1);
        // UNREACHABLE
    }
    // 0x40489a
    *(int64_t *)a2 = v2;
    return function_404800(a1, v2 * a3);
}
// Address range: 0x404900 - 0x404950
int64_t function_404900(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404900
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40494a
            function_4049f0(a1);
            // UNREACHABLE
        }
        // 0x404922
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404800(a1, v1);
    }
    if (a2 == 0) {
        // 0x404935
        *(int64_t *)a2 = 128;
        return function_404800(0, 128);
    }
    // 0x404948
    if (a2 < 0) {
        // 0x40494a
        function_4049f0(a1);
        // UNREACHABLE
    }
    // 0x404922
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404800(a1, v1);
}
// Address range: 0x404950 - 0x404967
int64_t function_404950(int64_t a1, int64_t a2) {
    // 0x404950
    return (int64_t)memset((int64_t *)function_4047a0(a1), 0, (int32_t)a1);
}
// Address range: 0x404970 - 0x40499e
int64_t function_404970(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404977
    if ((int64_t)v1 < 0) {
        // 0x404999
        function_4049f0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404999
        function_4049f0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40498a
    if (mem != NULL) {
        // 0x404994
        return (int64_t)mem;
    }
    // 0x404999
    function_4049f0(nmemb);
    // UNREACHABLE
}
// Address range: 0x4049a0 - 0x4049c8
int64_t function_4049a0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4047a0(a2); // 0x4049af
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4049d0 - 0x4049e3
int64_t function_4049d0(int64_t str) {
    // 0x4049d0
    return function_4049a0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4049f0 - 0x404a21
int64_t function_4049f0(int64_t a1) {
    // 0x4049f0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404a30 - 0x404b14
int64_t function_404a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x404a30
    int64_t result2; // bp-64, 0x404a30
    int32_t v1 = function_404b50(a1, 0, a2 & 0xffffffff, &result2, a5); // 0x404a5c
    int32_t * v2; // 0x404a30
    int32_t * v3; // 0x404a30
    if (v1 != 0) {
        int32_t * v4 = __errno_location(); // 0x404ada
        v2 = v4;
        if (v1 == 1) {
            goto lab_0x404a80;
        } else {
            // 0x404ae7
            v3 = v4;
            if (v1 == 3) {
                // 0x404aec
                *v4 = 0;
                v3 = v4;
            }
            goto lab_0x404a87;
        }
    } else {
        int64_t result = result2; // 0x404a60
        if (result >= a3 && result <= a4) {
            // 0x404ac0
            return result;
        }
        int32_t * v5 = __errno_location(); // 0x404a6f
        v2 = v5;
        if (result < 0x40000000) {
            int64_t v6 = result + 0x40000001; // 0x404af8
            *v5 = v6 == 0 | v6 < 0 != ((v6 ^ result) & (result ^ -0x8000000000000000)) < 0 ? 75 : 34;
            v3 = v5;
            goto lab_0x404a87;
        } else {
            goto lab_0x404a80;
        }
    }
  lab_0x404a80:
    // 0x404a80
    *v2 = 75;
    v3 = v2;
    goto lab_0x404a87;
  lab_0x404a87:;
    int64_t v7 = function_4041e0(a1); // 0x404a8a
    int32_t v8 = *v3; // 0x404a8f
    int32_t status = a7 == 0 ? 1 : a7; // 0x404aaf
    error(status, v8 == 22 ? 0 : v8, "%s: %s", (char *)a6, (char *)v7);
    // 0x404ac0
    return result2;
}
// Address range: 0x404b20 - 0x404b41
int64_t function_404b20(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int32_t a6) {
    // 0x404b20
    int64_t result; // 0x404b20
    return result;
}
// Address range: 0x404b50 - 0x40537f
int64_t function_404b50(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str) {
    uint32_t v1 = (int32_t)a3; // 0x404b62
    if (v1 >= 37) {
        // 0x40531c
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoimax");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    // 0x404b6b
    int64_t v2; // bp-64, 0x404b50
    int64_t v3 = a2 == 0 ? (int64_t)&v2 : (int64_t)a2; // 0x404b78
    int32_t * v4 = __errno_location(); // 0x404b82
    *v4 = 0;
    char * v5 = (char *)a1;
    int32_t v6 = __strtol_internal(v5, (char **)v3, v1, 0); // 0x404b9a
    int64_t * v7 = (int64_t *)v3; // 0x404b9f
    int64_t v8 = *v7; // 0x404b9f
    int64_t v9; // 0x404b50
    int64_t v10; // 0x404b50
    int64_t v11; // 0x404b50
    char v12; // 0x404b50
    int64_t v13; // 0x404b50
    int64_t v14; // 0x404b50
    int64_t v15; // 0x404b50
    if (v8 == a1) {
        // 0x404bf8
        if (str == 0) {
            // 0x404bce
            return 4;
        }
        char c = *v5; // 0x404c01
        if (c == 0) {
            // 0x404bce
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x404c1f
        v14 = 1;
        v10 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x404bce
            return 4;
        }
        goto lab_0x404c2d;
    } else {
        int32_t v16 = *v4; // 0x404baa
        int64_t v17 = 0; // 0x404bb0
        if (v16 != 0) {
            // 0x404be0
            v17 = 1;
            if (v16 != 34) {
                // 0x404bce
                return 4;
            }
        }
        int64_t v18 = v6; // 0x404b9a
        v13 = v18;
        v9 = v17;
        if (str == 0) {
            goto lab_0x404bc7;
        } else {
            char c2 = *(char *)v8; // 0x404bba
            v13 = v18;
            v9 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x404cc7
                v14 = v18;
                v10 = v17;
                v12 = c2;
                v15 = v18;
                v11 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x404c2d;
                } else {
                    goto lab_0x404cd5;
                }
            } else {
                goto lab_0x404bc7;
            }
        }
    }
  lab_0x404c2d:;
    int64_t v19 = v10;
    int64_t v20 = v14;
    unsigned char v21 = v12 - 69;
    int64_t v22 = 1024; // 0x404c34
    int64_t v23 = 1; // 0x404c34
    int64_t v24; // 0x404b50
    int64_t v25; // 0x404b50
    int64_t v26; // 0x404b50
    int64_t v27; // 0x404b50
    int64_t v28; // 0x404b50
    int64_t v29; // 0x404b50
    int64_t v30; // 0x404b50
    int64_t v31; // 0x404b50
    int64_t v32; // 0x404b50
    int64_t v33; // 0x404b50
    int64_t v34; // 0x404b50
    int64_t v35; // 0x404b50
    int64_t v36; // 0x404b50
    int64_t v37; // 0x404b50
    int64_t v38; // 0x404b50
    int64_t v39; // 0x404b50
    int64_t v40; // 0x404b50
    int64_t v41; // 0x404b50
    int64_t v42; // 0x404b50
    if (v21 < 48) {
        // 0x404c60
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x404c40;
        } else {
            // 0x404c74
            v22 = 1024;
            v23 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x404c40;
            } else {
                // 0x404c86
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x404c40;
                    }
                    case 105: {
                        char v43 = *(char *)(v8 + 2); // 0x405262
                        v22 = 1024;
                        v23 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x404c40;
                    }
                    default: {
                        // 0x404c9b
                        g50 = v21;
                        v22 = 1000;
                        v23 = 2;
                        v15 = v20;
                        v11 = v19;
                        v25 = v20;
                        v32 = 1;
                        v24 = v19;
                        v26 = 1024;
                        v33 = 1;
                        v37 = -0x20000000000000;
                        v38 = 1;
                        v27 = 1024;
                        v34 = 1;
                        v40 = -0x20000000000000;
                        v28 = 1024;
                        v35 = 1;
                        v42 = -0x20000000000000;
                        v29 = 1024;
                        v36 = 1;
                        v41 = -0x20000000000000;
                        v30 = 1024;
                        v31 = 1;
                        v39 = -0x20000000000000;
                        switch (v12) {
                            case 69: {
                                goto lab_0x404f28;
                            }
                            case 70: {
                                goto lab_0x404cd5;
                            }
                            case 71: {
                                goto lab_0x404f90;
                            }
                            case 72: {
                                goto lab_0x404cd5;
                            }
                            case 73: {
                                goto lab_0x404cd5;
                            }
                            case 74: {
                                goto lab_0x404cd5;
                            }
                            case 75: {
                                goto lab_0x404d75;
                            }
                            case 76: {
                                goto lab_0x404cd5;
                            }
                            case 77: {
                                goto lab_0x404db8;
                            }
                            case 78: {
                                goto lab_0x404cd5;
                            }
                            case 79: {
                                goto lab_0x404cd5;
                            }
                            case 80: {
                                goto lab_0x404e58;
                            }
                            case 81: {
                                goto lab_0x404cd5;
                            }
                            case 82: {
                                goto lab_0x404cd5;
                            }
                            case 83: {
                                goto lab_0x404cd5;
                            }
                            case 84: {
                                goto lab_0x404ec0;
                            }
                            case 85: {
                                goto lab_0x404cd5;
                            }
                            case 86: {
                                goto lab_0x404cd5;
                            }
                            case 87: {
                                goto lab_0x404cd5;
                            }
                            case 88: {
                                goto lab_0x404cd5;
                            }
                            case 89: {
                                goto lab_0x404ff8;
                            }
                            case 90: {
                                goto lab_0x405060;
                            }
                            case 91: {
                                goto lab_0x404cd5;
                            }
                            case 92: {
                                goto lab_0x404cd5;
                            }
                            case 93: {
                                goto lab_0x404cd5;
                            }
                            case 94: {
                                goto lab_0x404cd5;
                            }
                            case 95: {
                                goto lab_0x404cd5;
                            }
                            case 96: {
                                goto lab_0x404cd5;
                            }
                            case 97: {
                                goto lab_0x404cd5;
                            }
                            case 98: {
                                goto lab_0x404e25;
                            }
                            case 99: {
                                goto lab_0x404d18;
                            }
                            case 100: {
                                goto lab_0x404cd5;
                            }
                            case 101: {
                                goto lab_0x404cd5;
                            }
                            case 102: {
                                goto lab_0x404cd5;
                            }
                            case 103: {
                                goto lab_0x404f90;
                            }
                            case 104: {
                                goto lab_0x404cd5;
                            }
                            case 105: {
                                goto lab_0x404cd5;
                            }
                            case 106: {
                                goto lab_0x404cd5;
                            }
                            case 107: {
                                goto lab_0x404d75;
                            }
                            case 108: {
                                goto lab_0x404cd5;
                            }
                            case 109: {
                                goto lab_0x404db8;
                            }
                            case 110: {
                                goto lab_0x404cd5;
                            }
                            case 111: {
                                goto lab_0x404cd5;
                            }
                            case 112: {
                                goto lab_0x404cd5;
                            }
                            case 113: {
                                goto lab_0x404cd5;
                            }
                            case 114: {
                                goto lab_0x404cd5;
                            }
                            case 115: {
                                goto lab_0x404cd5;
                            }
                            case 116: {
                                goto lab_0x404ec0;
                            }
                            default: {
                                goto lab_0x404c40;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x404c40;
    }
  lab_0x404bc7:
    // 0x404bc7
    *a4 = v13;
    // 0x404bce
    return v9 & 0xffffffff;
  lab_0x404c40:
    // 0x404c40
    g49 = v12 - 66;
    v15 = v20;
    v11 = v19;
    v25 = v20;
    v32 = v23;
    v24 = v19;
    v38 = v23;
    switch (v12) {
        case 66: {
            // 0x404d11
            v25 = 1024 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x404d18;
        }
        case 69: {
            // 0x404f10
            v29 = v22;
            v36 = v23;
            v41 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x404f28;
        }
        case 71: {
            goto lab_0x404f90;
        }
        case 75: {
            goto lab_0x404d75;
        }
        case 77: {
            goto lab_0x404da0;
        }
        case 80: {
            // 0x404e40
            v27 = v22;
            v34 = v23;
            v40 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x404e58;
        }
        case 84: {
            goto lab_0x404ea8;
        }
        case 89: {
            // 0x404fe0
            goto lab_0x404ff8;
        }
        case 90: {
            // 0x405048
            v30 = v22;
            v31 = v23;
            v39 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x405060;
        }
        case 98: {
            goto lab_0x404e25;
        }
        case 99: {
            goto lab_0x404d18;
        }
        case 103: {
            goto lab_0x404f90;
        }
        case 107: {
            goto lab_0x404d75;
        }
        case 109: {
            goto lab_0x404da0;
        }
        case 116: {
            goto lab_0x404ea8;
        }
        case 119: {
            // 0x404d59
            v25 = 2 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x404d18;
        }
        default: {
            goto lab_0x404cd5;
        }
    }
    // 0x404f78
    goto lab_0x404f90;
    // 0x404d60
    goto lab_0x404d75;
  lab_0x404da0:
    // 0x404da0
    v26 = v22;
    v33 = v23;
    v37 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x404db8;
  lab_0x404ea8:
    // 0x404ea8
    v28 = v22;
    v35 = v23;
    v42 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x404ec0;
  lab_0x404e25:
    // 0x404e25
    v25 = 512 * v20;
    v32 = v38;
    v24 = v19;
    goto lab_0x404d18;
  lab_0x404d18:;
    int64_t v63 = v24;
    int64_t v64 = v32 + v8; // 0x404d18
    *v7 = v64;
    v13 = v25;
    v9 = (*(char *)v64 != 0 ? v63 | 2 : v63) & 0xffffffff;
    goto lab_0x404bc7;
  lab_0x404cd5:
    // 0x404cd5
    *a4 = v15;
    // 0x404bce
    return (v11 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x404f28:;
    uint64_t v65 = v29;
    int64_t v66 = v20;
    int64_t v67 = -0x8000000000000000; // 0x404f61
    int64_t v68 = 1; // 0x404f61
    if (v66 >= v41) {
        // 0x404f40
        v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
        v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : 0;
    }
    int32_t v69 = 5; // 0x404f55
    int32_t v70 = v69; // 0x404f58
    int64_t v71 = v68; // 0x404f58
    int64_t v59 = v67; // 0x404f58
    int64_t v61 = v36; // 0x404f58
    int64_t v62 = v68; // 0x404f58
    while (v69 != 0) {
        // 0x404f5e
        v66 = v67;
        v67 = -0x8000000000000000;
        v68 = 1;
        if (v66 >= v41) {
            // 0x404f40
            v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
            v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : v71;
        }
        // 0x404f55
        v69 = v70 - 1;
        v70 = v69;
        v71 = v68;
        v59 = v67;
        v61 = v36;
        v62 = v68;
    }
    goto lab_0x405190;
  lab_0x404f90:
    // 0x404f90
    while (true) {
        // 0x404fc6
        int32_t v44; // 0x404b50
        int32_t v45 = v44;
        int64_t v46; // 0x404b50
        int64_t v47 = v46;
        int64_t v48 = -0x8000000000000000; // 0x404fc9
        int64_t v49 = 1; // 0x404fc9
        int64_t v50; // 0x404b50
        uint64_t v51; // 0x404b50
        if (v47 >= v51) {
            int64_t v52 = v50;
            uint64_t v53; // 0x404b50
            int64_t v54 = v47 > 0x7fffffffffffffff / v53 ? 0x7fffffffffffffff : v47 * v53;
            int64_t v55 = v47 > 0x7fffffffffffffff / v53 ? 1 : v52;
            v48 = v54;
            v49 = v55;
        }
        int64_t v56 = v49;
        int64_t v57 = v48;
        int32_t v58 = v45 - 1; // 0x404fbd
        v46 = v57;
        v44 = v58;
        v50 = v56;
        v59 = v57;
        int64_t v60; // 0x404b50
        v61 = v60;
        v62 = v56;
        if (v58 == 0) {
            // break -> 0x405190
            break;
        }
    }
    goto lab_0x405190;
  lab_0x404d75:;
    int64_t v76 = 1;
    v25 = -0x8000000000000000;
    v32 = v76;
    v24 = 1;
    int64_t v73; // 0x404b50
    int64_t v74; // 0x404b50
    int64_t v75; // 0x404b50
    int64_t v72; // 0x404b50
    if (v20 < -0x20000000000000) {
        goto lab_0x404d18;
    } else {
        int64_t v77 = 1024;
        v73 = 0x7fffffffffffffff / v77;
        v75 = v77;
        v74 = v20;
        v72 = v76;
        goto lab_0x404d8c;
    }
  lab_0x404db8:
    // 0x404db8
    v25 = -0x8000000000000000;
    v32 = v33;
    v24 = 1;
    if (v20 < v37) {
        goto lab_0x404d18;
    } else {
        int64_t v78 = 0x7fffffffffffffff / v26;
        v25 = 0x7fffffffffffffff;
        v32 = v33;
        v24 = 1;
        if (v20 > v78) {
            goto lab_0x404d18;
        } else {
            int64_t v79 = v26 * v20; // 0x404dd8
            v25 = -0x8000000000000000;
            v32 = v33;
            v24 = 1;
            v73 = v78;
            v75 = v26;
            v74 = v79;
            v72 = v33;
            if (v79 < v37) {
                goto lab_0x404d18;
            } else {
                goto lab_0x404d8c;
            }
        }
    }
  lab_0x404e58:;
    uint64_t v80 = v27;
    int64_t v81 = v20;
    int64_t v82 = -0x8000000000000000; // 0x404e91
    int64_t v83 = 1; // 0x404e91
    if (v40 <= v81) {
        // 0x404e70
        v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
        v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : 0;
    }
    int32_t v84 = 4; // 0x404e85
    int32_t v85 = v84; // 0x404e88
    int64_t v86 = v83; // 0x404e88
    v59 = v82;
    v61 = v34;
    v62 = v83;
    while (v84 != 0) {
        // 0x404e8e
        v81 = v82;
        v82 = -0x8000000000000000;
        v83 = 1;
        if (v40 <= v81) {
            // 0x404e70
            v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
            v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : v86;
        }
        // 0x404e85
        v84 = v85 - 1;
        v85 = v84;
        v86 = v83;
        v59 = v82;
        v61 = v34;
        v62 = v83;
    }
    goto lab_0x405190;
  lab_0x404ec0:;
    uint64_t v87 = v28;
    int64_t v88 = v20;
    int64_t v89 = -0x8000000000000000; // 0x404ef9
    int64_t v90 = 1; // 0x404ef9
    if (v42 <= v88) {
        // 0x404ed8
        v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
        v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : 0;
    }
    int32_t v91 = 3; // 0x404eed
    int32_t v92 = v91; // 0x404ef0
    int64_t v93 = v90; // 0x404ef0
    v59 = v89;
    v61 = v35;
    v62 = v90;
    while (v91 != 0) {
        // 0x404ef6
        v88 = v89;
        v89 = -0x8000000000000000;
        v90 = 1;
        if (v42 <= v88) {
            // 0x404ed8
            v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
            v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : v93;
        }
        // 0x404eed
        v91 = v92 - 1;
        v92 = v91;
        v93 = v90;
        v59 = v89;
        v61 = v35;
        v62 = v90;
    }
    goto lab_0x405190;
  lab_0x404ff8:
    // 0x404ff8
    while (true) {
        // 0x40502e
        int32_t v94; // 0x404b50
        int32_t v95 = v94;
        int64_t v96; // 0x404b50
        int64_t v97 = v96;
        int64_t v98 = -0x8000000000000000; // 0x405031
        int64_t v99 = 1; // 0x405031
        int64_t v100; // 0x404b50
        uint64_t v101; // 0x404b50
        if (v101 <= v97) {
            int64_t v102 = v100;
            uint64_t v103; // 0x404b50
            int64_t v104 = v97 > 0x7fffffffffffffff / v103 ? 0x7fffffffffffffff : v97 * v103;
            int64_t v105 = v97 > 0x7fffffffffffffff / v103 ? 1 : v102;
            v98 = v104;
            v99 = v105;
        }
        int64_t v106 = v99;
        int64_t v107 = v98;
        int32_t v108 = v95 - 1; // 0x405025
        v96 = v107;
        v94 = v108;
        v100 = v106;
        v59 = v107;
        int64_t v109; // 0x404b50
        v61 = v109;
        v62 = v106;
        if (v108 == 0) {
            // break -> 0x405190
            break;
        }
    }
    goto lab_0x405190;
  lab_0x405060:;
    uint64_t v110 = v30;
    int64_t v111 = v20;
    int64_t v112 = -0x8000000000000000; // 0x405099
    int64_t v113 = 1; // 0x405099
    if (v39 <= v111) {
        // 0x405078
        v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
        v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : 0;
    }
    int32_t v114 = 6; // 0x40508d
    int32_t v115 = v114; // 0x405090
    int64_t v116 = v113; // 0x405090
    v59 = v112;
    v61 = v31;
    v62 = v113;
    while (v114 != 0) {
        // 0x405096
        v111 = v112;
        v112 = -0x8000000000000000;
        v113 = 1;
        if (v39 <= v111) {
            // 0x405078
            v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
            v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : v116;
        }
        // 0x40508d
        v114 = v115 - 1;
        v115 = v114;
        v116 = v113;
        v59 = v112;
        v61 = v31;
        v62 = v113;
    }
    goto lab_0x405190;
  lab_0x405190:
    // 0x405190
    v25 = v59;
    v32 = v61;
    v24 = (v62 | v19) & 0xffffffff;
    goto lab_0x404d18;
  lab_0x404d8c:
    // 0x404d8c
    v25 = 0x7fffffffffffffff;
    v32 = v72;
    v24 = 1;
    if (v73 >= v74) {
        // 0x404d95
        v25 = v74 * v75;
        v32 = v72;
        v24 = v19;
    }
    goto lab_0x404d18;
}
// Address range: 0x405380 - 0x40599c
int64_t function_405380(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40539f
    int64_t v2 = *v1; // 0x40539f
    char * str2 = (char *)v2; // 0x4053ac
    char c = *str2; // 0x4053ac
    int64_t v3 = v2; // 0x4053d8
    int64_t v4 = 0; // 0x405380
    int32_t v5; // 0x405380
    int64_t v6; // 0x405380
    int64_t v7; // 0x405380
    int64_t v8; // 0x405380
    int64_t v9; // 0x405380
    int64_t v10; // 0x405380
    int64_t v11; // 0x405380
    int64_t v12; // 0x405380
    int64_t v13; // 0x405380
    int64_t str3; // 0x405380
    int64_t v14; // 0x405380
    int64_t v15; // 0x405380
    int64_t v16; // 0x405380
    int64_t v17; // 0x405380
    int32_t v18; // 0x405380
    int32_t v19; // 0x405380
    int32_t v20; // 0x405380
    int32_t v21; // 0x405380
    int32_t v22; // 0x405380
    int32_t v23; // 0x405380
    int32_t v24; // 0x405380
    int32_t v25; // 0x405380
    int32_t v26; // 0x405380
    int32_t v27; // 0x405380
    int32_t v28; // 0x405380
    int32_t v29; // 0x405380
    int64_t nmemb; // 0x405380
    int64_t v30; // 0x405380
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4053dc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4053d8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4053e8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4053ee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4053b8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40541c
                int64_t v34; // 0x405380
                int64_t v35; // 0x405380
                if (strncmp(str, str2, n) == 0) {
                    // 0x405425
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4055a0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405436
                int64_t v37 = *(int64_t *)v36; // 0x40543a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405410
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405425
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4055a0;
                        }
                    }
                    // 0x405436
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
                  lab_0x405486:
                    // 0x405486
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
                        goto lab_0x4054e0;
                    } else {
                        if (v11 == 0) {
                            // 0x405650
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4054e0;
                        } else {
                            if (v39 == 0) {
                                // 0x405600
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4054aa;
                                } else {
                                    // 0x40560c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4054aa;
                                    } else {
                                        // 0x40561a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4054aa;
                                        } else {
                                            goto lab_0x4054e0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4054aa;
                            }
                        }
                    }
                }
              lab_0x4054f1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4056c6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405872
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x405892
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4058df
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x4058f9
                            int64_t v45; // 0x4058fb
                            if (*(char *)v42 != 0) {
                                // 0x4058fb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4058f3
                            while (v17 + nmemb != v42) {
                                // 0x4058f5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4058fb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x4058e8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405920
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x4056d4
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40582f
                        free((int64_t *)v17);
                    }
                    // 0x405729
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405740
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4055ee
                    return 63;
                }
                // 0x405510
                v5 = v39;
                if (v13 != 0) {
                    // 0x405594
                    v35 = v13;
                    v34 = v25;
                  lab_0x4055a0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4055b0
                    uint32_t v50 = *v49; // 0x4055b0
                    int64_t v51 = v50; // 0x4055b0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4055ba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4055c3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4057ef
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40579a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4055ee
                            return 63;
                        }
                        // 0x405638
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40594f
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40584d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405860
                                // 0x4055ee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40575e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405772
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4055db
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4055de
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4055e2
                    int64_t result = v59; // 0x4055e8
                    if (v58 != 0) {
                        // 0x4055ea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4055ee
                    return result;
                }
            } else {
                // 0x4053ee
                v5 = v32;
            }
            // break -> 0x405515
            break;
        }
    }
    // 0x405515
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40552d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405537
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4055ee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405679
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405566
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405576
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4054e0:
    // 0x4054e0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4054e0
    int64_t v63 = *(int64_t *)v62; // 0x4054e4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4054f1
        goto lab_0x4054f1;
    }
    goto lab_0x405486;
  lab_0x4054aa:
    // 0x4054aa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405380
    int32_t v65; // 0x405380
    int32_t v66; // 0x405380
    if (v27 != 0) {
        goto lab_0x4054e0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405660
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4054e0;
            } else {
                goto lab_0x4054d1;
            }
        } else {
            // 0x4054c5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4057bc
                int64_t v67 = (int64_t)mem; // 0x4057bc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4054e0;
                } else {
                    // 0x4057cf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4054d1;
                }
            } else {
                goto lab_0x4054d1;
            }
        }
    }
  lab_0x4054d1:
    // 0x4054d1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4054e0;
}
// Address range: 0x4059a0 - 0x405f66
int64_t function_4059a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4059c1
    if (v3 < 1) {
        // 0x405b7e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4059bd
    int32_t v5 = *(int32_t *)a7; // 0x4059c9
    uint64_t v6 = a1 & 0xffffffff; // 0x4059cb
    int64_t v7 = v2; // 0x4059d0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4059d3
    *v8 = 0;
    int64_t v9; // 0x4059a0
    int64_t v10; // 0x4059a0
    int64_t v11; // 0x4059a0
    int64_t v12; // 0x4059a0
    int64_t str; // 0x4059a0
    int64_t v13; // 0x4059a0
    int64_t v14; // 0x4059a0
    int64_t v15; // 0x4059a0
    int64_t v16; // 0x4059a0
    int64_t v17; // 0x4059a0
    int32_t v18; // 0x4059a0
    char v19; // 0x4059a0
    if (v5 == 0) {
        // 0x405bb8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4059ea;
    } else {
        // 0x4059e3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405a30
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405a33
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405af8;
            } else {
                int64_t v22 = v7 + 1; // 0x405a46
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405a56
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405b0c;
                } else {
                    goto lab_0x405a68;
                }
            }
        } else {
            goto lab_0x4059ea;
        }
    }
  lab_0x4059ea:
    // 0x4059ea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4059f0
    *v24 = 0;
    int64_t v25; // 0x4059a0
    int64_t v26; // 0x4059a0
    int64_t v27; // 0x4059a0
    switch (*(char *)&v2) {
        case 45: {
            // 0x405ae0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405aed;
        }
        case 43: {
            // 0x405df0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405aed;
        }
        default: {
            // 0x405a0c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405d6f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405e88
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405aed;
                } else {
                    // 0x405d7d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405a1a;
                }
            } else {
                goto lab_0x405a1a;
            }
        }
    }
  lab_0x405af8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405aff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405a68;
    } else {
        goto lab_0x405b0c;
    }
  lab_0x405a1a:
    // 0x405a1a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405aed;
  lab_0x405aed:
    // 0x405aed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405af8;
  lab_0x405a68:;
    uint32_t v30 = *(int32_t *)a7; // 0x405a68
    int64_t v31 = v30; // 0x405a68
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405a6a
    if ((int64_t)*v32 > v31) {
        // 0x405a6f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405a72
    if (*v33 > v30) {
        // 0x405a77
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405a7a
    int64_t v35 = v31; // 0x405a7e
    int64_t v36 = v15; // 0x405a7e
    int64_t v37; // 0x4059a0
    int64_t v38; // 0x4059a0
    int64_t v39; // 0x4059a0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405be8
        int64_t v41 = v40; // 0x405be8
        v2 = v41;
        int64_t v42; // 0x4059a0
        if (*v33 == v40) {
            // 0x405dd0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405dd8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405bf4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405c08
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405c11
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405c1a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405c31
            int64_t v47 = v45 & 0xffffffff; // 0x405c35
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405c3e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405c44
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405c46;
                }
            }
            int64_t v48 = v47 + 1; // 0x405c20
            int64_t v49 = v48 & 0xffffffff; // 0x405c20
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405c31
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405c3e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405c44
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405c46;
                    }
                }
                // 0x405c20
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405de8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405c46;
    } else {
        goto lab_0x405a84;
    }
  lab_0x405b0c:
    // 0x405b0c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405b0f
    int64_t v51 = v12; // 0x405b0f
    int64_t v52 = v14; // 0x405b0f
    if (*(char *)v10 == 0) {
        goto lab_0x405a68;
    } else {
        goto lab_0x405b15;
    }
  lab_0x405a84:;
    int32_t v53 = v35; // 0x405a84
    int64_t v54; // 0x4059a0
    int64_t v55; // 0x4059a0
    int64_t v56; // 0x4059a0
    int64_t v57; // 0x4059a0
    int64_t v58; // 0x4059a0
    int64_t v59; // 0x4059a0
    char * v60; // 0x4059a0
    int64_t v61; // 0x4059a0
    int64_t v62; // 0x405a99
    int64_t v63; // 0x4059a0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405bd3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405bd6;
    } else {
        // 0x405a8c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4059a0
        int64_t v66 = v65 ? -1 : 1; // 0x405aa0
        int64_t v67 = (int64_t)"--"; // 0x4059a0
        int64_t v68 = v62; // 0x4059a0
        int64_t v69 = 3; // 0x405aa0
        unsigned char v70 = *(char *)v68; // 0x405aa0
        char v71 = *(char *)v67; // 0x405aa0
        char v72 = v71; // 0x405aa0
        bool v73 = false; // 0x405aa0
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
            // 0x405b90
            if (*(char *)v62 == 45) {
                // 0x405c50
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405c50
                if (c == 0) {
                    goto lab_0x405b9a;
                } else {
                    // 0x405c5d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405ce0;
                    } else {
                        if (c == 45) {
                            // 0x405ec3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405d35;
                        } else {
                            // 0x405c6e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405ce0;
                            } else {
                                // 0x405c73
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405c94;
                                } else {
                                    // 0x405c7a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405ce0;
                                    } else {
                                        goto lab_0x405c94;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405b9a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405ab0
            v2 = v75;
            int32_t v76 = *v32; // 0x405ab3
            int64_t v77 = v35 + 1; // 0x405ab6
            int32_t v78 = v77; // 0x405ab9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405e20
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405ac7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405ad5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405bd6;
        }
    }
  lab_0x405b15:;
    // 0x405b15
    int64_t v79; // bp-104, 0x4059a0
    int64_t v80 = &v79; // 0x4059aa
    int64_t v81 = v50 + 1; // 0x405b15
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405b1c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405b21
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405b25
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405b29
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405b31
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405b36
    int32_t c2 = v84; // 0x405b36
    char * found_char_pos = strchr(str2, c2); // 0x405b36
    int64_t v87 = *v82; // 0x405b3b
    v2 = v87;
    int64_t v88 = *v85; // 0x405b45
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405b50
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405e40
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405e0d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405b7e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405b36
    char v91 = *(char *)(v90 + 1); // 0x405b6b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405b25
        if (v91 != 58) {
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405d94
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405e98
                *v8 = 0;
            } else {
                // 0x405e7c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405dbe
            *v83 = 0;
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405d9e
        if (v93 != 0) {
            // 0x405e30
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405dbe
            *v83 = 0;
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405db1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405dbe
            *v83 = 0;
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405efa
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405eaa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405eb1
        // 0x405dbe
        *v83 = 0;
        // 0x405b7e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405d09
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405d0b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405f30
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405ee1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405ee8
            // 0x405b7e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405d16
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405d1a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405d35;
  lab_0x405c46:
    // 0x405c46
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405a84;
  lab_0x405d35:;
    int64_t v99 = function_405380(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405d53
    // 0x405b7e
    return v99 & 0xffffffff;
  lab_0x405bd6:;
    int32_t v100 = v55; // 0x405bd6
    if (v100 != (int32_t)v59) {
        // 0x405bda
        *(int32_t *)a7 = v100;
    }
    // 0x405b7e
    return 0xffffffff;
  lab_0x405b9a:
    // 0x405b9a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405ba1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405b7e
    return v99 & 0xffffffff;
  lab_0x405ce0:
    // 0x405ce0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405b15;
  lab_0x405c94:
    // 0x405c94
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405380(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x405cba
    if ((int32_t)v101 != -1) {
        // 0x405b7e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405ccf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405ce0;
}
// Address range: 0x405f70 - 0x405fc6
int64_t function_405f70(int64_t a1) {
    // 0x405f70
    *(int32_t *)&g43 = g26;
    *(int32_t *)&g44 = g25;
    int64_t v1; // 0x405f70
    int64_t result = function_4059a0(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x405f96
    g26 = *(int32_t *)&g43;
    g48 = (char *)g46;
    *(int32_t *)&g24 = g45;
    return result;
}
// Address range: 0x405fd0 - 0x405fe8
int64_t function_405fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405fd0
    return function_405f70(1);
}
// Address range: 0x405ff0 - 0x406003
int64_t function_405ff0(int64_t a1, int64_t a2, char * a3, char (**a4)[10], int32_t a5, int64_t a6) {
    // 0x405ff0
    return function_405f70(0);
}
// Address range: 0x406010 - 0x406025
int64_t function_406010(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406010
    return function_4059a0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406030 - 0x406046
int64_t function_406030(void) {
    // 0x406030
    return function_405f70(0);
}
// Address range: 0x406050 - 0x406068
int64_t function_406050(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406050
    return function_4059a0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406070 - 0x4060ea
int64_t function_406070(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40607b
    int64_t v2 = (int64_t)&g10; // 0x40607b
    int32_t * pwc; // 0x406070
    int64_t v3; // 0x406070
    int64_t n; // 0x406070
    if (a2 == 0) {
        goto lab_0x4060c2;
    } else {
        // 0x40607d
        if (a3 == 0) {
            // 0x4060a8
            return -2;
        }
        // 0x406089
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4060c2;
        } else {
            goto lab_0x406094;
        }
    }
  lab_0x4060c2:
    // 0x4060c2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406070
    pwc = (int32_t *)&v4;
    goto lab_0x406094;
  lab_0x406094:;
    char * wstr = (char *)v3; // 0x40609a
    int64_t ps; // 0x406070
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40609a
    int64_t result = v5; // 0x40609a
    if (v5 < 0xfffffffe) {
        // 0x4060a8
        return result;
    }
    int64_t result2 = result; // 0x4060d9
    if ((char)function_406150(0, v3) == 0) {
        // 0x4060db
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4060a8
    return result2;
}
// Address range: 0x4060f0 - 0x40614d
int64_t function_4060f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4060f7
    int64_t v2; // 0x4060f0
    int64_t result = function_406720(a1, v2); // 0x406108
    if ((v2 & 32) != 0) {
        // 0x406130
        if ((int32_t)result == 0) {
            // 0x406134
            *__errno_location() = 0;
        }
        // 0x40612a
        return 0xffffffff;
    }
    // 0x406111
    if ((int32_t)result == 0) {
        // 0x40612a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406118
    if (v1 == 0) {
        // 0x40611a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40612a
    return result2;
}
// Address range: 0x406150 - 0x4061ae
int64_t function_406150(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406156
    if (locale == NULL) {
        // 0x406183
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406156
    bool v2; // 0x406150
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x406150
    int64_t v5 = v1; // 0x406150
    int64_t v6 = 2; // 0x406175
    unsigned char v7 = *(char *)v5; // 0x406175
    char v8 = *(char *)v4; // 0x406175
    char v9 = v8; // 0x406175
    bool v10 = false; // 0x406175
    while (v7 == v8) {
        // 0x406168
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406181
    int64_t v13 = v1; // 0x406181
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406183
        return 0;
    }
    int64_t v14 = 6; // 0x406181
    unsigned char v15 = *(char *)v13; // 0x40619d
    char v16 = *(char *)v12; // 0x40619d
    char v17 = v16; // 0x40619d
    bool v18 = false; // 0x40619d
    while (v15 == v16) {
        // 0x406190
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
// Address range: 0x4061b0 - 0x406712
int64_t function_4061b0(void) {
    char * v1 = nl_langinfo(14); // 0x4061c6
    char * v2 = g47; // 0x4061cb
    char * v3; // 0x4061b0
    int64_t v4; // 0x4061b0
    int64_t v5; // 0x4061b0
    int64_t v6; // 0x4061b0
    int64_t v7; // 0x4061b0
    int32_t size; // 0x4061b0
    int32_t size2; // 0x4061b0
    int32_t len; // 0x406282
    int64_t v8; // 0x406282
    char * env_val; // 0x40626d
    if (v2 == NULL) {
        // 0x406268
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4062d5;
        } else {
            // 0x40627a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4062d5;
            } else {
                // 0x40627f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40626d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406705
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4062d5;
                    } else {
                        // 0x406679
                        size2 = len + 14;
                        goto lab_0x40629b;
                    }
                } else {
                    goto lab_0x40629b;
                }
            }
        }
    } else {
        // 0x4061b0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4061ea;
    }
  lab_0x40651c:;
    // 0x40651c
    struct _IO_FILE * stream; // 0x40635b
    int32_t v10 = __uflow(stream); // 0x40651f
    int64_t v11; // 0x4061b0
    int64_t v12 = v11; // 0x406529
    int64_t v13; // 0x4061b0
    int64_t v14 = v13; // 0x406529
    int32_t v15 = v10; // 0x406529
    int64_t v16; // 0x4061b0
    int64_t v17 = v16; // 0x406529
    int64_t v18 = v11; // 0x406529
    int64_t v19 = v13; // 0x406529
    int64_t v20 = v16; // 0x406529
    if (v10 == -1) {
        // break -> 0x40652f
        goto lab_0x40652f;
    }
    goto lab_0x4063a9;
  lab_0x40639e:;
    // 0x40639e
    int64_t v90; // 0x4061b0
    int64_t * v32; // 0x406390
    *v32 = v90 + 1;
    int64_t v89; // 0x4061b0
    v12 = v89;
    int64_t v91; // 0x4061b0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4061b0
    v17 = v92;
    goto lab_0x4063a9;
  lab_0x4063a9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4061b0
    int32_t v25; // bp-120, 0x4061b0
    int32_t v26; // bp-184, 0x4061b0
    int64_t v27; // 0x40635b
    int64_t v28; // 0x406378
    int64_t v29; // 0x40637d
    int64_t * v30; // 0x406394
    switch (c) {
        case 32: {
            goto lab_0x406390;
        }
        case 10: {
            goto lab_0x406390;
        }
        case 9: {
            goto lab_0x406390;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406581
            int32_t v33; // 0x4061b0
            char v34; // 0x4061b0
            int32_t v35; // 0x40658e
            if (v31 < *v30) {
                // 0x406560
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40658b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406581
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406560
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40658b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406570
                v36 = v33;
            }
            // 0x40665f
            if (v36 == -1) {
                // break -> 0x40652f
                break;
            }
            goto lab_0x406390;
        }
        default: {
            // 0x4063bf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40652f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4063e8
            int64_t v39 = v37 + 4; // 0x4063ea
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4063f6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4063f8
            while (v41 == 0) {
                // 0x4063e8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406416
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406422
            int64_t v45 = v43 + 4; // 0x406424
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406430
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406432
            while (v47 == 0) {
                // 0x406422
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40641f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406448
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406458
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40645c
            int64_t v52 = v51 + v48; // 0x406465
            int64_t * mem; // 0x4061b0
            int64_t v53; // 0x4061b0
            int64_t v54; // 0x4061b0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40659b
                int64_t v56 = v55 + 3; // 0x4065a7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406481
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406490
            if (mem == NULL) {
                // 0x4066bc
                free((int64_t *)v21);
                function_406720(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x406334;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4064a8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4064b2
            uint32_t v62 = (int32_t)v59; // 0x4064b5
            int64_t v63; // 0x4061b0
            if (v62 >= 8) {
                // 0x4065c4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4065de
                int64_t v66 = v61 - v65; // 0x4065e2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4065ed
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4065fe
                    int64_t v70 = v69 & 0xffffffff; // 0x4065fe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4065fb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40668f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4064c7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4064cb
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
            int64_t v73 = v51 + 1; // 0x4064db
            int64_t v74 = v60 - 1; // 0x4064df
            uint32_t v75 = (int32_t)v73; // 0x4064e4
            int64_t v76; // 0x4061b0
            if (v75 >= 8) {
                // 0x406612
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40661c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40662c
                int64_t v80 = v74 - v79; // 0x406630
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40663b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40664b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406649
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4066a6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4066ae
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4064f6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4064fa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4066f3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40650e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40639e;
            } else {
                goto lab_0x40651c;
            }
        }
    }
  lab_0x406390:;
    int64_t v93 = v23; // 0x4061b0
    int64_t v94 = v22; // 0x4061b0
    int64_t v95 = v21; // 0x4061b0
    goto lab_0x406390_2;
  lab_0x4062d5:;
    int64_t * mem3 = malloc(size); // 0x4062d5
    int64_t v97 = (int64_t)&g10; // 0x4062e0
    int64_t v98; // 0x4061b0
    int64_t path; // 0x4061b0
    if (mem3 == NULL) {
        goto lab_0x4062b2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4062d5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4062f6;
    }
  lab_0x4061ea:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x4061dd
    char v100 = *v3; // 0x4061ea
    int64_t v101; // 0x4061b0
    if (v100 == 0) {
        // 0x406244
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4061b0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4061b0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406230
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406237;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406200
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40620d
        char v107 = *(char *)v106; // 0x406212
        v102 = v107;
        if (v107 == 0) {
            // 0x406244
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40621b
    v104 = v103 + 1;
  lab_0x406237:
    // 0x406244
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4062b2:;
    char * v108 = (char *)v97;
    g47 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4061ea;
  lab_0x4062f6:;
    int64_t v109 = v98 + path; // 0x4062f6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406322
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x406351
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406682
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x406375
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406390_2:;
                uint64_t v96 = *v32; // 0x406390
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40651c;
                } else {
                    goto lab_0x40639e;
                }
            }
          lab_0x40652f:
            // 0x40652f
            function_406720(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40654e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406334;
  lab_0x40629b:;
    int64_t * mem4 = malloc(size2); // 0x40629b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x406341
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4062f6;
    } else {
        goto lab_0x4062b2;
    }
  lab_0x406334:
    // 0x406334
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4062b2;
}
// Address range: 0x406720 - 0x40679b
int64_t function_406720(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406727
    if (fileno(stream) < 0) {
        // 0x406787
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40673a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40676b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406787
            return fclose(stream);
        }
    }
    // 0x40673c
    if ((int32_t)function_4067a0(a1, v1) == 0) {
        // 0x406787
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406748
    int32_t v3 = *v2; // 0x406750
    int64_t result = fclose(stream); // 0x40675e
    if (v3 != 0) {
        // 0x406790
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406760
    return result;
}
// Address range: 0x4067a0 - 0x4067e0
int64_t function_4067a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4067ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4067ba
        return fflush(stream);
    }
    // 0x4067c8
    function_4067e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4067e0 - 0x406837
int64_t function_4067e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4067e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4067ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40681b
    int64_t result = -1; // 0x406824
    if (v1 != -1) {
        // 0x406826
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406832
    return result;
}
// Address range: 0x406840 - 0x40689d
int64_t function_406840(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406840
    return function_401338();
}
// Address range: 0x4068a0 - 0x4068a1
int64_t function_4068a0(void) {
    // 0x4068a0
    int64_t result; // 0x4068a0
    return result;
}
// Address range: 0x4068b0 - 0x4068c8
int64_t function_4068b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4068b0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x4068c8 - 0x4068e8
int64_t function_4068c8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x4068d2
    while (*(int64_t *)v1 != -1) {
        // 0x4068d3
        v1 -= 8;
    }
    // 0x4068e4
    return result;
}
