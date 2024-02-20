// Address range: 0x401cb0 - 0x401cb5
int64_t function_401cb0(void) {
    // 0x401cb0
    abort();
    // UNREACHABLE
}
// Address range: 0x401cb5 - 0x401cba
int64_t function_401cb5(void) {
    // 0x401cb5
    abort();
    // UNREACHABLE
}
// Address range: 0x401cba - 0x401cbf
int64_t function_401cba(void) {
    // 0x401cba
    abort();
    // UNREACHABLE
}
// Address range: 0x401cbf - 0x401cc4
int64_t function_401cbf(void) {
    // 0x401cbf
    abort();
    // UNREACHABLE
}
// Address range: 0x401cc4 - 0x401cc9
int64_t function_401cc4(void) {
    // 0x401cc4
    abort();
    // UNREACHABLE
}
// Address range: 0x401cc9 - 0x401cce
int64_t function_401cc9(void) {
    // 0x401cc9
    abort();
    // UNREACHABLE
}
// Address range: 0x401cce - 0x401cd3
int64_t function_401cce(void) {
    // 0x401cce
    abort();
    // UNREACHABLE
}
// Address range: 0x401cd3 - 0x401cd8
int64_t function_401cd3(void) {
    // 0x401cd3
    abort();
    // UNREACHABLE
}
// Address range: 0x401ce0 - 0x402426
int64_t function_401ce0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401ce9
    function_403070(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401ce0
    function_414b70(0x402ef0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    g56 = 1;
    g58 = &g11;
    g55 = 1;
    while (true) {
      lab_0x401d4a_2:;
        uint32_t v3 = (int32_t)function_406380(v1, a2, "brs:", &g4, 0, v2);
        switch (v3) {
            case -1: {
                goto lab_0x401e0c;
            }
            case 98: {
                // 0x401e00
                g56 = 0;
                goto lab_0x401d4a_2;
            }
            default: {
                if (v3 <= 98) {
                    if (v3 == -131) {
                        // 0x401d97
                        function_405200((int64_t)g34, "tac", "GNU coreutils", (int64_t)g23, "Jay Lepreau", "David MacKenzie");
                        exit(0);
                        // UNREACHABLE
                    }
                    if (v3 == -130) {
                        // 0x401df7
                        function_402b70(0);
                        // UNREACHABLE
                    }
                    goto lab_0x4023cc;
                }
                if (v3 != 114) {
                    if (v3 != 115) {
                      lab_0x4023cc:
                        // 0x4023cc
                        function_402b70(1);
                        // UNREACHABLE
                    }
                    // 0x401dd9
                    g58 = g72;
                } else {
                    // 0x401d7a
                    g55 = 0;
                }
                goto lab_0x401d4a_2;
            }
        }
    }
  lab_0x401e0c:;
    char v4 = *(char *)g58; // 0x401e1b
    int32_t v5; // 0x401ce0
    int64_t v6; // 0x401ce0
    int64_t v7; // 0x401ce0
    bool v8; // 0x401ce0
    if (g55 != 0) {
        int64_t v9 = 1; // 0x401f49
        int64_t v10 = v1; // 0x401f49
        if (v4 != 0) {
            int64_t v11 = -1; // 0x401f54
            int64_t v12 = g58;
            int64_t v13 = 0; // 0x401f54
            int64_t v14 = v12; // 0x401f54
            while (v11 != 0) {
                int64_t v15 = v12 + (v8 ? -1 : 1); // 0x401f54
                v11--;
                v13 = v11;
                v14 = v15;
                if (*(char *)v12 == 0) {
                    // break -> 
                    break;
                }
                v12 = v15;
                v13 = 0;
                v14 = v12;
            }
            v9 = -2 - v13;
            v10 = v14;
        }
        int32_t v16 = v9; // 0x401f60
        g55 = v16;
        g54 = v9;
        v5 = v16;
        v7 = v10;
        goto lab_0x401e84;
    } else {
        if (v4 == 0) {
            // 0x4023e2
            error(1, (int32_t)"separator cannot be empty" ^ (int32_t)"separator cannot be empty", dcgettext(NULL, "separator cannot be empty", 5));
            v6 = &g81;
            goto lab_0x402404;
        } else {
            // 0x401e2d
            g47 = 0;
            g48 = 0;
            g49 = &g46;
            g50 = 0;
            int64_t v17 = -1; // 0x401e67
            int64_t v18 = g58; // 0x401e67
            int64_t v19 = 0; // 0x401e67
            while (v17 != 0) {
                int64_t v20 = v18;
                v17--;
                v18 = v20 + (v8 ? -1 : 1);
                v19 = v17;
                if (*(char *)v20 == 0) {
                    // break -> 
                    break;
                }
                v19 = 0;
            }
            int64_t v21 = function_4137a0(g58, -2 - v19, (int64_t)&g47); // 0x401e76
            v6 = v21;
            if (v21 != 0) {
                goto lab_0x402404;
            } else {
                // 0x401e84
                v5 = g55;
                v7 = g58;
                goto lab_0x401e84;
            }
        }
    }
  lab_0x4020b2:;
    // 0x4020b2
    int32_t v22; // 0x401ce0
    int64_t v23; // 0x401ce0
    int64_t v24; // 0x401ce0
    int64_t v25; // 0x401ce0
    int64_t fd2; // 0x401ce0
    int64_t v26; // 0x401ce0
    int64_t v27; // 0x401ce0
    int64_t v28; // 0x401ce0
    char * v29; // 0x401ce0
    char * v30; // 0x401ce0
    int32_t v31; // 0x401ce0
    int32_t v32; // 0x401ce0
    int64_t v33; // 0x401ce0
    int64_t v34; // 0x401ce0
    int32_t v35; // 0x401fab
    int64_t v36; // 0x401ce0
    struct _IO_FILE * stream; // 0x402053
    if (fflush_unlocked(stream) != 0) {
        // 0x40221e
        function_404b10(0, 3, v36);
        v28 = (int64_t)"%s: write error";
        goto lab_0x4021d7;
    } else {
        uint64_t v37 = v26;
        v22 = v35;
        v34 = v33;
        v30 = v29;
        v32 = v31;
        v27 = 0;
        fd2 = v25;
        v24 = v23;
        if (v37 >= 0) {
            uint32_t v38 = fileno(stream); // 0x4020ce
            v22 = v35;
            v34 = v33;
            v30 = v29;
            v32 = v31;
            v27 = function_4025f0((int64_t)v38, v36, v37) & 0xffffffff;
            fd2 = v25;
            v24 = v23;
        }
        goto lab_0x4020e4;
    }
  lab_0x401e84:;
    uint64_t v39 = (int64_t)v5; // 0x401e84
    g52 = 0x2000;
    int64_t v40 = 0x2000; // 0x401ea7
    int32_t v41 = 50; // 0x401ea7
    int64_t v42 = 0x2000; // 0x401ea7
    if (v5 >= 0x1000) {
        int64_t v43 = 2 * v40; // 0x401eb9
        while ((v40 & 0x7ffffffffffffffe) <= v39) {
            int32_t v44 = v41 - 1; // 0x401eb0
            v40 = v43;
            v41 = v44;
            if (v44 == 0) {
                // 0x4023d6
                g52 = v43;
                function_405590(v7);
                // UNREACHABLE
            }
            v43 = 2 * v40;
        }
        // 0x401ec7
        g52 = v43;
        v42 = v43;
    }
    uint64_t v45 = v42;
    uint64_t v46 = (v45 | 1) + v39; // 0x401ece
    int64_t v47 = 2 * v46; // 0x401ed6
    g51 = v47;
    if (v46 <= v45 || v45 + v39 >= v47) {
        // 0x402421
        function_405590(v47);
        // UNREACHABLE
    }
    int64_t v48 = function_405340(v47); // 0x401ef2
    int32_t v49 = g55; // 0x401ef7
    g53 = v48;
    int64_t v50; // 0x401ce0
    if (v49 != 0) {
        // 0x4022fa
        v50 = (int64_t)memcpy((int64_t *)v48, (int64_t *)g58, v49 + 1) + (int64_t)v49;
    } else {
        // 0x401f11
        v50 = v48 + 1;
    }
    // 0x401f1c
    g53 = v50;
    int64_t v51 = (int64_t)*(int32_t *)0x61b2dc; // 0x401f1c
    int64_t v52 = (int64_t)"-"; // 0x401f25
    int64_t v53 = (int64_t)&g3; // 0x401f25
    int32_t v54; // 0x401ce0
    if (v1 > v51) {
        int64_t v55 = 8 * v51 + a2; // 0x401f27
        int64_t v56 = *(int64_t *)v55; // 0x401f2b
        v52 = v56;
        v53 = v55;
        v54 = 1;
        if (v56 == 0) {
            goto lab_0x402107;
        } else {
            goto lab_0x401f88;
        }
    } else {
        goto lab_0x401f88;
    }
  lab_0x401f88:;
    int64_t v57 = v53; // 0x401f95
    char * v58 = "-"; // 0x401f95
    int32_t v59 = 1; // 0x401f95
    int64_t v60 = v52; // 0x401f95
    goto lab_0x401f98;
  lab_0x402404:
    // 0x402404
    error(1, 0, "%s", (char *)v6);
    v22 = v2;
    v27 = 0;
    fd2 = v1;
    goto lab_0x4020e4;
  lab_0x402107:
    // 0x402107
    function_402510(0, 0);
    int32_t v95 = v54; // 0x402117
    if (g57 == 0) {
        // 0x40211d
        return v95 % 256 ^ 1;
    }
    // 0x4022cc
    v95 = v54;
    if (close(0) < 0) {
        // 0x4022db
        error(0, *__errno_location(), "-");
        v95 = 0;
    }
    // 0x40211d
    return v95 % 256 ^ 1;
  lab_0x401f98:;
    int64_t path = v60;
    v31 = v59;
    v29 = v58;
    v33 = v57 + 8;
    int64_t v61 = v8 ? -1 : 1; // 0x401fa5
    int64_t v62 = (int64_t)v29; // 0x401ce0
    int64_t v63 = path; // 0x401ce0
    int64_t v64 = 2; // 0x401ce0
    unsigned char v65 = *(char *)v63; // 0x401fa5
    char v66; // 0x401ce0
    while (v65 == *(char *)v62) {
        int64_t v67 = v64 - 1; // 0x401fa5
        v62 += v61;
        v63 += v61;
        v64 = v67;
        v66 = v65;
        if (v67 == 0) {
            // break -> 
            break;
        }
        v65 = *(char *)v63;
    }
    unsigned char v68 = v66;
    v35 = (int32_t)!((v65 < v68 | true)) - (int32_t)(v65 < v68);
    int64_t v69; // 0x401ce0
    int64_t v70; // 0x401ce0
    char * v71; // 0x401ce0
    int32_t v72; // 0x401ce0
    int64_t v73; // 0x401ce0
    int64_t v74; // 0x401ce0
    if (v35 != 0) {
        int32_t fd = open((char *)path, O_RDONLY); // 0x40213e
        v70 = fd;
        v69 = path;
        if (fd >= 0) {
            goto lab_0x401fd9;
        } else {
            // 0x40214d
            function_404a40(4, path);
            v73 = v33;
            v71 = v29;
            v72 = v31;
            v74 = (int64_t)"failed to open %s for reading";
            goto lab_0x402167;
        }
    } else {
        // 0x401fbc
        g57 = 1;
        v70 = 0;
        v69 = (int64_t)dcgettext(NULL, "standard input", 5);
        goto lab_0x401fd9;
    }
  lab_0x4020e4:;
    int64_t v75 = v27;
    int32_t v76 = v32;
    char * v77 = v30;
    int64_t v78 = v34;
    int64_t v79 = v78; // 0x4020e7
    char * v80 = v77; // 0x4020e7
    int32_t v81 = v76; // 0x4020e7
    int64_t v82 = v75; // 0x4020e7
    if (v22 != 0) {
        // 0x40218e
        v79 = v78;
        v80 = v77;
        v81 = v76;
        v82 = v75;
        if (close((int32_t)fd2) == 0) {
            goto lab_0x4020ed;
        } else {
            // 0x40219d
            function_404b10(0, 3, v24);
            v73 = v78;
            v71 = v77;
            v72 = v76;
            v74 = (int64_t)"%s: read error";
            goto lab_0x402167;
        }
    } else {
        goto lab_0x4020ed;
    }
  lab_0x4020ed:;
    int32_t v83 = 0x1000000 * (v81 & (int32_t)v82) >> 24; // 0x4020f6
    int64_t v84 = *(int64_t *)v79; // 0x4020fa
    v57 = v79;
    v58 = v80;
    v59 = v83;
    v60 = v84;
    v54 = v83;
    if (v84 != 0) {
        goto lab_0x401f98;
    } else {
        goto lab_0x402107;
    }
  lab_0x401fd9:
    // 0x401fd9
    v23 = v69;
    v25 = v70;
    int32_t fd3 = v25; // 0x401fe0
    int32_t v85 = lseek(fd3, 0, SEEK_END); // 0x401fe2
    if (v85 < 0) {
        goto lab_0x401ffe;
    } else {
        // 0x401fef
        if (isatty(fd3) == 0) {
            // 0x4022a7
            v22 = v35;
            v34 = v33;
            v30 = v29;
            v32 = v31;
            v27 = function_4025f0(v25, v23, (int64_t)v85) & 0xffffffff;
            fd2 = v25;
            v24 = v23;
            goto lab_0x4020e4;
        } else {
            goto lab_0x401ffe;
        }
    }
  lab_0x401ffe:
    // 0x401ffe
    if (g42 == NULL) {
        char * env_val = getenv("TMPDIR"); // 0x402243
        int64_t v86 = env_val == NULL ? (int64_t)"/tmp" : (int64_t)env_val;
        g42 = (char *)function_402f90(v86, "tacXXXXXX", 0);
        int32_t fd4 = function_404d10(); // 0x402271
        if (fd4 < 0) {
            // 0x402320
            function_404a40(4, v86);
            error(0, *__errno_location(), dcgettext(NULL, "failed to create temporary file in %s", 5));
            goto lab_0x40235a;
        } else {
            struct _IO_FILE * v87 = fdopen(fd4, "w+"); // 0x402281
            g41 = v87;
            if (v87 == NULL) {
                // 0x402378
                char * v88; // 0x402286
                function_404a40(4, (int64_t)v88);
                char * format = dcgettext(NULL, "failed to open %s for writing", 5); // 0x402394
                int32_t * v89 = __errno_location(); // 0x40239e
                int32_t err_num = *v89; // 0x4023ad
                error(0, err_num, format);
                close(fd4);
                char * path2 = g42; // 0x4023be
                unlink(path2);
                goto lab_0x40235a;
            } else {
                // 0x40229d
                unlink(g42);
                goto lab_0x40204c;
            }
        }
    } else {
        // 0x40200c
        clearerr_unlocked(g41);
        if ((int32_t)function_4055d0((int64_t)g41, 0, 0) < 0) {
            goto lab_0x4021fe;
        } else {
            // 0x40202f
            if (ftruncate(fileno(g41), 0) < 0) {
                goto lab_0x4021fe;
            } else {
                goto lab_0x40204c;
            }
        }
    }
  lab_0x402167:
    // 0x402167
    error(0, *__errno_location(), dcgettext(NULL, (char *)v74, 5));
    v79 = v73;
    v80 = v71;
    v81 = v72;
    v82 = 0;
    goto lab_0x4020ed;
  lab_0x4021fe:
    // 0x4021fe
    function_404a40(4, (int64_t)g42);
    v28 = (int64_t)"failed to rewind stream for %s";
    goto lab_0x4021d7;
  lab_0x40235a:
    // 0x40235a
    free((int64_t *)g42);
    g42 = NULL;
    v22 = v35;
    v34 = v33;
    v30 = v29;
    v32 = v31;
    v27 = 0;
    fd2 = v25;
    v24 = v23;
    goto lab_0x4020e4;
  lab_0x4021d7:
    // 0x4021d7
    error(0, *__errno_location(), dcgettext(NULL, (char *)v28, 5));
    v22 = v35;
    v34 = v33;
    v30 = v29;
    v32 = v31;
    v27 = 0;
    fd2 = v25;
    v24 = v23;
    goto lab_0x4020e4;
  lab_0x40204c:
    // 0x40204c
    v36 = (int64_t)g42;
    stream = g41;
    int64_t v90 = function_404cb0(v25, g53, (int64_t)g52); // 0x4020a5
    int64_t v91 = v90; // 0x4020b0
    int64_t v92 = 0; // 0x4020b0
    v26 = 0;
    if (v90 != 0) {
        int64_t n = v91;
        while (n != -1) {
            // 0x402072
            if (n != (int64_t)fwrite_unlocked((int64_t *)g53, 1, (int32_t)n, stream)) {
                // 0x40221e
                function_404b10(0, 3, v36);
                v28 = (int64_t)"%s: write error";
                goto lab_0x4021d7;
            }
            int64_t v93 = v92 + n; // 0x402092
            int64_t v94 = function_404cb0(v25, g53, (int64_t)g52); // 0x4020a5
            v91 = v94;
            v92 = v93;
            v26 = v93;
            if (v94 == 0) {
                goto lab_0x4020b2;
            }
            n = v91;
        }
        // 0x4021bb
        function_404b10(0, 3, v23);
        v28 = (int64_t)"%s: read error";
        goto lab_0x4021d7;
    } else {
        goto lab_0x4020b2;
    }
}
// Address range: 0x402430 - 0x40245b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402430
    int64_t v1; // 0x402430
    __libc_start_main(0x401ce0, (int32_t)a4, (char **)&v1, (void (*)())0x414b00, (void (*)())0x414b60, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40245b - 0x40247a
int64_t function_40245b(void) {
    // 0x40245b
    return &g33;
}
// Address range: 0x40247a - 0x4024b1
int64_t function_40247a(void) {
    // 0x40247a
    return 0;
}
// Address range: 0x4024b1 - 0x402508
int64_t function_4024b1(void) {
    // 0x4024b1
    if (g37 != 0) {
        // 0x402507
        int64_t result; // 0x4024b1
        return result;
    }
    int64_t v1 = g38; // 0x4024e4
    int64_t result2; // 0x4024f6
    if (g38 >= ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x4024f6
        result2 = function_40245b();
        g37 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x4024e6
        v1++;
    }
    // 0x4024da
    g38 = v1;
    // 0x4024f6
    result2 = function_40245b();
    g37 = 1;
    return result2;
}
// Address range: 0x402508 - 0x40250d
int64_t function_402508(void) {
    // 0x402508
    return function_40247a();
}
// Address range: 0x402510 - 0x4025ed
int64_t function_402510(int32_t a1, int32_t a2) {
    int32_t n = g40; // 0x402510
    if (a1 == 0) {
        int32_t result = fwrite_unlocked(&g39, 1, n, g34); // 0x4025c1
        g40 = 0;
        return result;
    }
    int64_t v1 = a1;
    int64_t v2 = n; // 0x402510
    int64_t v3 = (int64_t)a2 - v1; // 0x402519
    int64_t v4 = 0x2000 - v2; // 0x402523
    int64_t v5; // 0x402510
    int64_t v6; // 0x402510
    int64_t v7; // 0x402510
    if (v3 < v4) {
        // 0x4025e0
        v7 = v3 + v2;
        v6 = v3;
        v5 = v1;
    } else {
        int64_t v8 = v2 + (int64_t)&g39; // 0x402510
        int64_t v9 = v3; // 0x40254d
        int64_t v10 = v1; // 0x402561
        v9 -= v4;
        memcpy((int64_t *)v8, (int64_t *)v10, (int32_t)v4);
        v10 += v4;
        fwrite_unlocked(&g39, 1, 0x2000, g34);
        g40 = 0;
        v8 = &g39;
        int64_t v11 = 0x2000; // 0x40258c
        v7 = v9;
        v6 = v9;
        v5 = v10;
        while (v9 >= 0x2000) {
            // 0x402540
            v9 -= v11;
            memcpy((int64_t *)v8, (int64_t *)v10, (int32_t)v11);
            v10 += v11;
            fwrite_unlocked(&g39, 1, 0x2000, g34);
            g40 = 0;
            v8 = &g39;
            v11 = 0x2000;
            v7 = v9;
            v6 = v9;
            v5 = v10;
        }
    }
    int64_t * dest_mem = memcpy(&g39, (int64_t *)v5, (int32_t)v6); // 0x40259c
    g40 = v7;
    return (int64_t)dest_mem;
}
// Address range: 0x4025f0 - 0x402b70
int64_t function_4025f0(int64_t fd, int64_t a2, uint64_t a3) {
    int64_t v1 = g52;
    char v2 = *(char *)g58; // 0x402617
    uint64_t v3 = a3 % v1;
    int64_t v4 = v1; // 0x40263e
    int64_t v5 = a3; // 0x40263e
    if (v3 != 0) {
        int64_t offset = a3 - v3; // 0x402abf
        int32_t v6 = lseek((int32_t)fd, (int32_t)offset, SEEK_SET); // 0x402ac7
        v4 = v1;
        v5 = offset;
        if (v6 < 0) {
            // 0x402ad5
            function_404b10(0, 3, a2);
            error(0, *__errno_location(), dcgettext(NULL, "%s: seek failed", 5));
            v4 = g52;
            v5 = offset;
        }
    }
    int64_t fd2 = 0x100000000 * fd >> 32; // 0x40260f
    int64_t v7 = fd2 & 0xffffffff; // 0x402652
    int64_t v8 = function_404cb0(v7, g53, v4); // 0x402659
    int128_t v9 = g52; // 0x40265e
    int64_t v10 = v9; // 0x40265e
    int64_t v11 = v5; // 0x402668
    int64_t v12 = v8; // 0x402668
    int64_t v13 = v10; // 0x402668
    int64_t v14; // 0x4025f0
    int64_t v15; // 0x4025f0
    int64_t v16; // 0x4025f0
    int64_t v17; // 0x4025f0
    if (v8 != 0) {
        goto lab_0x4026d6;
    } else {
        int32_t v18 = v9; // 0x4025f0
        int64_t v19 = v5; // 0x402648
        int64_t v20 = v10;
        while (v19 != 0) {
            int64_t v21 = v20; // 0x40268a
            if (lseek((int32_t)fd2, -v18, SEEK_CUR) < 0) {
                // 0x40268c
                function_404b10(0, 3, a2);
                error(0, *__errno_location(), dcgettext(NULL, "%s: seek failed", 5));
                v21 = g52;
            }
            // 0x402648
            v19 -= v21;
            int64_t v22 = function_404cb0(v7, g53, v21); // 0x402659
            int64_t v23 = g52;
            v18 = g52;
            v11 = v19;
            v12 = v22;
            v13 = v23;
            if (v22 != 0) {
                goto lab_0x4026d6;
            }
            v20 = v23;
        }
        // 0x402a90
        v17 = 0;
        v15 = 0;
        v16 = 0;
        v14 = 0;
        if (v20 == 0) {
            goto lab_0x402965;
        } else {
            goto lab_0x4026ec;
        }
    }
  lab_0x4026d6:;
    int64_t v24 = v12; // 0x4026d9
    int64_t v25 = v11; // 0x4026d9
    v16 = v12;
    v14 = v11;
    if (v12 == v13) {
        goto lab_0x402965;
    } else {
        goto lab_0x4026e2;
    }
  lab_0x4026ec:;
    char * str2 = (char *)(g58 + 1); // 0x402620
    int64_t n = g54 - 1; // 0x40262f
    int64_t v26 = g53 + v17; // 0x4026ff
    int32_t v27 = 1; // 0x402713
    int64_t v28 = v26; // 0x402713
    int64_t v29 = g53; // 0x402713
    int64_t v30 = v15; // 0x402713
    int64_t v31 = (g55 == 0 ? 0 : 1 - g54) + v26; // 0x402713
    int64_t v32; // 0x4025f0
    int64_t v33; // 0x4025f0
    int64_t v34; // 0x4025f0
    int64_t v35; // 0x4025f0
    int64_t v36; // 0x4025f0
    int64_t v37; // 0x4025f0
    int64_t v38; // 0x4025f0
    int64_t v39; // 0x4025f0
    int32_t v40; // 0x4025f0
    int32_t v41; // 0x4025f0
    while (true) {
      lab_0x402718:
        // 0x402718
        v40 = v27;
        v38 = v31;
        v36 = v28;
        v32 = v29;
        v34 = v30;
        v41 = v27;
        v39 = v31;
        v37 = v28;
        v33 = v29;
        v35 = v30;
        if (g55 != 0) {
            goto lab_0x4028b3;
        } else {
            goto lab_0x402721;
        }
    }
  lab_0x402b1f:
    // 0x402b1f
    error(1, (int32_t)"record too large" ^ (int32_t)"record too large", dcgettext(NULL, "record too large", 5));
    // 0x402b41
    function_405590(1);
    // UNREACHABLE
  lab_0x4028b3:;
    int64_t v42 = v39 - 1; // 0x4028b3
    int32_t v43 = v41; // 0x4028ba
    int64_t v44 = v37; // 0x4028ba
    int64_t v45 = v33; // 0x4028ba
    int64_t v46 = v35; // 0x4028ba
    int64_t v47 = v42; // 0x4028ba
    int32_t v48 = v41; // 0x4028ba
    int64_t str = v39; // 0x4028ba
    int64_t v49 = v37; // 0x4028ba
    int64_t v50 = v33; // 0x4028ba
    int64_t v51 = v35; // 0x4028ba
    int64_t v52 = v42; // 0x4028ba
    if (*(char *)v42 != v2) {
        goto lab_0x4028b0;
    } else {
        goto lab_0x4028bc;
    }
  lab_0x402721:;
    int64_t v53 = v32;
    int64_t v54 = v38 - v53; // 0x40272a
    int64_t v55 = 1 - v54; // 0x40272d
    if (v55 > 1) {
        // break -> 0x402b1f
        goto lab_0x402b1f;
    }
    int64_t v56 = v34;
    int64_t v57 = v36;
    int32_t v58 = v40;
    int64_t v59 = v53; // 0x40273a
    int64_t v60; // 0x4025f0
    int64_t v61; // 0x4025f0
    int64_t v62; // 0x4025f0
    int64_t v63; // 0x4025f0
    int32_t v64; // 0x4025f0
    if (v54 == 0) {
        goto lab_0x40298f;
    } else {
        int64_t v65 = function_414120(&g47, v53, v54, v54 - 1, v55, &g43); // 0x402752
        switch (v65) {
            case -1: {
                // 0x402988
                v59 = g53;
                goto lab_0x40298f;
            }
            case -2: {
                // 0x402b46
                error(1, (int32_t)"error in regular expression search" ^ (int32_t)"error in regular expression search", dcgettext(NULL, "error in regular expression search", 5));
                return &g81;
            }
            default: {
                int64_t v66 = *(int64_t *)g44; // 0x402779
                g54 = *(int64_t *)g45 - v66;
                v64 = v58;
                v63 = v57;
                v60 = g53;
                v61 = v56;
                v62 = v66 + g53;
                goto lab_0x402794;
            }
        }
    }
  lab_0x4028b0:
    // 0x4028b0
    v41 = v43;
    v39 = v47;
    v37 = v44;
    v33 = v45;
    v35 = v46;
    goto lab_0x4028b3;
  lab_0x4028bc:;
    int64_t v67 = v52;
    int64_t v68 = v51;
    int64_t v69 = v50;
    int64_t v70 = v49;
    int32_t v71 = v48;
    v64 = v71;
    v63 = v70;
    v60 = v69;
    v61 = v68;
    v62 = v67;
    int64_t v72; // 0x4025f0
    int64_t v73; // 0x4025f0
    int64_t v74; // 0x4025f0
    int64_t v75; // 0x4025f0
    int64_t v76; // 0x4025f0
    int64_t v77; // 0x4025f0
    int64_t v78; // 0x4025f0
    int32_t v79; // 0x4025f0
    int32_t v80; // 0x4025f0
    if (n == 0) {
        goto lab_0x402794;
    } else {
        // 0x4028c5
        v43 = v71;
        v44 = v70;
        v45 = v69;
        v46 = v68;
        v47 = v67;
        if (strncmp((char *)str, str2, (int32_t)n) != 0) {
            goto lab_0x4028b0;
        } else {
            // 0x4028d9
            v79 = v71;
            v78 = v70;
            v72 = v69;
            v75 = v68;
            v80 = v71;
            v77 = v70;
            v73 = v69;
            v74 = v68;
            v76 = v67;
            if (v67 < v69) {
                goto lab_0x40279d;
            } else {
                goto lab_0x4028e8;
            }
        }
    }
  lab_0x40298f:
    // 0x40298f
    v64 = v58;
    v63 = v57;
    v60 = v59;
    v61 = v56;
    v62 = v59 - 1;
    goto lab_0x402794;
  lab_0x402794:
    // 0x402794
    v79 = v64;
    v78 = v63;
    v72 = v60;
    v75 = v61;
    v80 = v64;
    v77 = v63;
    v73 = v60;
    v74 = v61;
    v76 = v62;
    if (v62 >= v60) {
        goto lab_0x4028e8;
    } else {
        goto lab_0x40279d;
    }
  lab_0x4028e8:;
    int64_t v81 = v76;
    int64_t v82 = v74;
    int64_t v83 = v77;
    int32_t v84 = v80;
    int64_t v85; // 0x4025f0
    int64_t v86; // 0x4025f0
    int32_t v87; // 0x4025f0
    if (g56 == 0) {
        // 0x4029b0
        function_402510((int32_t)v81, (int32_t)v83);
        v87 = v84;
        v86 = v81;
        v85 = g53;
    } else {
        int64_t v88 = g54 + v81; // 0x402901
        char v89 = (char)v84 ^ 1 | (char)(v83 != v88); // 0x40290d
        if (v89 != 0) {
            // 0x402a18
            function_402510((int32_t)v88, (int32_t)v83);
            v87 = 0;
            v86 = v88;
            v85 = g53;
        } else {
            // 0x402919
            v87 = v89;
            v86 = v88;
            v85 = v73;
        }
    }
    int64_t v90 = v85;
    int64_t v91 = v86;
    int32_t v92 = v87;
    v40 = v92;
    v38 = v81;
    v36 = v91;
    v32 = v90;
    v34 = v82;
    if (g55 == 0) {
        goto lab_0x402721;
    } else {
        // 0x40292f
        v27 = v92;
        v28 = v91;
        v29 = v90;
        v30 = v82;
        v31 = v81 + 1 - g54;
        goto lab_0x402718;
    }
  lab_0x40279d:;
    int64_t v93 = v75;
    int64_t v94 = v72;
    int64_t v95 = v78;
    if (v93 == 0) {
        // 0x402aa0
        function_402510((int32_t)v94, (int32_t)v95);
        return 1;
    }
    int32_t v96 = v79;
    int64_t v97 = g52; // 0x4027a6
    uint64_t v98 = v95 - v94; // 0x4027ad
    int64_t v99 = v97; // 0x4027b3
    if (v98 > v97) {
        int64_t v100 = g55; // 0x4027b5
        int64_t v101 = g51; // 0x4027c0
        g52 = 2 * v97;
        int64_t v102 = (4 * v97 | 2) + v100; // 0x4027d7
        g51 = v102;
        int64_t v103 = v101; // 0x4027ea
        if (v102 < v101) {
            // 0x402b41
            function_405590(v103);
            // UNREACHABLE
        }
        int64_t v104 = g55 != 0 ? v100 : 1; // 0x4027dc
        g53 = function_4053a0(v94 - v104, v102) + v104;
        v99 = g52;
    }
    uint64_t v105 = v99;
    int64_t v106; // 0x4025f0
    if (v93 < v105) {
        // 0x4029a0
        g52 = v93;
        v106 = 0;
    } else {
        // 0x402815
        v106 = v93 - v105;
    }
    int64_t offset2 = v106;
    if (lseek((int32_t)fd2, (int32_t)offset2, SEEK_SET) < 0) {
        // 0x4029d0
        function_404b10(0, 3, a2);
        error(0, *__errno_location(), dcgettext(NULL, "%s: seek failed", 5));
    }
    int64_t v107 = g52; // 0x402836
    int64_t v108 = g53 + v107;
    int64_t * dest_mem = memmove((int64_t *)v108, (int64_t *)g53, (int32_t)v98); // 0x402850
    if (function_404cb0(v7, g53, v107) != (int64_t)g52) {
        goto lab_0x402a41_2;
    }
    int64_t v109 = v108 + v98; // 0x40284d
    int64_t v110 = g55 == 0 ? v109 : (int64_t)dest_mem; // 0x40286a
    int64_t v111 = g53; // 0x402896
    v40 = v96;
    v38 = v110;
    v36 = v109;
    v32 = v111;
    v34 = offset2;
    if (g55 == 0) {
        goto lab_0x402721;
    } else {
        int64_t v112 = v110 - 1; // 0x4028a6
        v43 = v96;
        v44 = v109;
        v45 = v111;
        v46 = offset2;
        v47 = v112;
        v48 = v96;
        str = v110;
        v49 = v109;
        v50 = v111;
        v51 = offset2;
        v52 = v112;
        if (*(char *)v112 == v2) {
            goto lab_0x4028bc;
        } else {
            goto lab_0x4028b0;
        }
    }
  lab_0x402965:;
    int64_t v113 = v14; // 0x4025f0
    int64_t v114 = function_404cb0(v7, g53, v16); // 0x402973
    v24 = v16;
    v25 = v113;
    while (v114 != 0) {
        if (v114 == -1) {
            goto lab_0x402a41_2;
        }
        int64_t v115 = v114 + v113; // 0x402952
        v17 = v114;
        v15 = v115;
        int64_t v116 = v114; // 0x40295f
        v113 = v115;
        if (v114 != (int64_t)g52) {
            goto lab_0x4026ec;
        }
        v114 = function_404cb0(v7, g53, v116);
        v24 = v116;
        v25 = v113;
    }
    goto lab_0x4026e2;
  lab_0x4026e2:
    // 0x4026e2
    v17 = v24;
    v15 = v25;
    if (v24 == -1) {
      lab_0x402a41_2:
        // 0x402a41
        function_404b10(0, 3, a2);
        error(0, *__errno_location(), dcgettext(NULL, "%s: read error", 5));
        return (int32_t)&g81 ^ (int32_t)&g81;
    }
    goto lab_0x4026ec;
}
// Address range: 0x402b70 - 0x402ecd
int64_t function_402b70(int32_t status) {
    // 0x402b70
    if (status != 0) {
        // 0x402b8a
        __fprintf_chk(g36, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402baf
        exit(status);
        // UNREACHABLE
    }
    // 0x402bb6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Write each FILE to standard output, last line first.\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "  -b, --before             attach the separator before instead of after\n  -r, --regex              interpret the separator as a regular expression\n  -s, --separator=STRING   use STRING as the separator instead of newline\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g34);
    int64_t v1 = &g1; // bp-136, 0x402ca6
    bool v2; // 0x402b70
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402d30
    int64_t v6 = *(int64_t *)v5; // 0x402d34
    int64_t v7 = 4; // 0x402d3a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"tac";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402d46
        char v11 = *(char *)v9; // 0x402d46
        char v12 = v11; // 0x402d46
        bool v13 = false; // 0x402d46
        while (v10 == v11) {
            // 0x402d3c
            v7--;
            int64_t v14 = v9 + v3; // 0x402d46
            int64_t v15 = v8 + v3; // 0x402d46
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
            // break -> 0x402d52
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x402d52
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402e64;
        } else {
            // 0x402e4e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ea3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402db4;
            } else {
                goto lab_0x402e64;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402db4;
        } else {
            // 0x402d9a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ea3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402db4;
            } else {
                goto lab_0x402db4;
            }
        }
    }
  lab_0x402e64:
    // 0x402e64
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402df4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402baf
    exit(status);
    // UNREACHABLE
  lab_0x402db4:
    // 0x402db4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402df4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402baf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402ed0 - 0x402ed8
int64_t function_402ed0(int64_t a1) {
    // 0x402ed0
    g60 = a1;
    int64_t result; // 0x402ed0
    return result;
}
// Address range: 0x402ee0 - 0x402ee8
int64_t function_402ee0(int64_t a1) {
    // 0x402ee0
    g59 = a1;
    int64_t result; // 0x402ee0
    return result;
}
// Address range: 0x402ef0 - 0x402f8e
int64_t function_402ef0(void) {
    // 0x402ef0
    int32_t * err_num; // 0x402f06
    if ((int32_t)function_4141c0((int64_t)g34) == 0) {
        goto lab_0x402f1c;
    } else {
        // 0x402f06
        err_num = __errno_location();
        if (g59 == 0) {
            goto lab_0x402f33;
        } else {
            // 0x402f17
            if (*err_num != 32) {
                goto lab_0x402f33;
            } else {
                goto lab_0x402f1c;
            }
        }
    }
  lab_0x402f1c:;
    int64_t result = function_4141c0((int64_t)g36); // 0x402f23
    if ((int32_t)result == 0) {
        // 0x402f2c
        return result;
    }
    // 0x402f6e
    _exit(g24);
    // UNREACHABLE
  lab_0x402f33:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402f3f
    if (g60 == 0) {
        // 0x402f79
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402f53
        error(0, *err_num, "%s: %s", (char *)function_404ae0((int64_t)g60), v1);
    }
    // 0x402f6e
    _exit(g24);
    // UNREACHABLE
}
// Address range: 0x402f90 - 0x403069
int64_t function_402f90(int64_t a1, char * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_414220(a1, v1); // 0x402fa8
    int64_t v3 = function_414280(v2); // 0x402fb3
    int64_t v4 = 0; // 0x402fc7
    if (v3 != 0) {
        // 0x402fc9
        v4 = *(char *)(v2 - 1 + v3) != 47;
    }
    char * str = a2; // 0x402fe0
    int64_t v5 = v1; // 0x402fe0
    int64_t v6 = v1; // 0x402fe0
    int64_t v7; // 0x402f90
    if ((char)v7 == 47) {
        v6++;
        char * v8 = (char *)v6;
        str = v8;
        v5 = v6;
        while (*v8 == 47) {
            // 0x403058
            v6++;
            v8 = (char *)v6;
            str = v8;
            v5 = v6;
        }
    }
    int64_t v9 = v2 - a1 + v3; // 0x402fc1
    int32_t len = strlen(str); // 0x402fe5
    int64_t * mem = malloc(len + (int32_t)(v9 + 1 + v4)); // 0x402ff5
    if (mem == NULL) {
        // 0x403041
        return (int64_t)mem;
    }
    int64_t * v10 = mempcpy(mem, (int64_t *)a1, (int32_t)v9); // 0x40300b
    *(char *)v10 = 47;
    int64_t v11 = v4 + (int64_t)v10; // 0x403017
    if (a3 != 0) {
        // 0x403020
        *(int64_t *)(int64_t)a3 = v11 - (int64_t)((char)v7 == 47);
    }
    // 0x403033
    *(char *)mempcpy((int64_t *)v11, (int64_t *)v5, len) = 0;
    // 0x403041
    return (int64_t)mem;
}
// Address range: 0x403070 - 0x403109
int64_t function_403070(int64_t str) {
    // 0x403070
    if (str == 0) {
        // 0x4030e9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g36);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40307e
    int64_t result = (int64_t)found_char_pos; // 0x40307e
    if (found_char_pos == NULL) {
        // 0x4030d9
        g61 = str;
        g35 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403088
    if (v1 - str < 7) {
        // 0x4030d9
        g61 = str;
        g35 = str;
        return result;
    }
    // 0x403098
    bool v2; // 0x403070
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403070
    int64_t v5 = result - 6; // 0x403070
    int64_t v6 = 7; // 0x4030a6
    unsigned char v7 = *(char *)v5; // 0x4030a6
    char v8 = *(char *)v4; // 0x4030a6
    char v9 = v8; // 0x4030a6
    bool v10 = false; // 0x4030a6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4030b0
    int64_t v13 = v1; // 0x4030b0
    int64_t v14 = 3; // 0x4030b0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4030d9
        g61 = str;
        g35 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4030c2
    char v16 = *(char *)v12; // 0x4030c2
    char v17 = v16; // 0x4030c2
    bool v18 = false; // 0x4030c2
    while (v15 == v16) {
        // 0x4030b2
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
    int64_t v20 = v1; // 0x4030cc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4030ce
        v20 = result + 4;
        g33 = v20;
    }
    // 0x4030d9
    g61 = v20;
    g35 = v20;
    return result;
}
// Address range: 0x403110 - 0x403202
int64_t function_403110(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403124
    int64_t result = (int64_t)v1; // 0x403124
    if (result != a1) {
        // 0x403131
        return result;
    }
    int64_t v2 = function_414380(); // 0x403140
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4031f6
    if (v3 == 85) {
        // 0x403150
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4031e8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x40317e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40318b
        // 0x403131
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4031e8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x4031cd
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x4031da
    // 0x403131
    return result4;
}
// Address range: 0x403210 - 0x403267
int64_t function_403210(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403210
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403258
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403267 - 0x404431
int64_t function_403267(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4032b1
    int64_t v3 = 0; // 0x4032b1
    int64_t v4; // 0x403267
    int64_t v5; // 0x403267
    int64_t v6; // 0x403267
    int64_t v7; // 0x403267
    int64_t v8; // 0x403267
    int64_t v9; // 0x403267
    int64_t v10; // 0x403267
    int64_t v11; // 0x403267
    int64_t v12; // 0x403267
    int64_t v13; // 0x403267
    int64_t v14; // 0x403267
    int64_t v15; // 0x403267
    int64_t v16; // 0x403267
    int64_t v17; // 0x403267
    int64_t v18; // 0x403267
    int64_t result; // 0x403267
    int64_t v19; // 0x403267
    int32_t wc; // bp+132, 0x403267
    int64_t ps; // bp+136, 0x403267
    char v20; // 0x403820
    int64_t v21; // 0x403820
    int64_t v22; // 0x403bc8
    int64_t v23; // 0x403267
    int64_t v24; // 0x403be7
    int32_t v25; // 0x403267
    while (true) {
      lab_0x4032b8_2:
        // 0x4032b8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403267
        int64_t v27; // 0x4032ec
        while (true) {
          lab_0x4032b8:
            // 0x4032b8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4032c3
            if (v15 == -1) {
                // 0x4032c5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4032d3
            if (v28) {
                // break (via goto) -> 0x403a38
                goto lab_0x403a38;
            }
            // 0x4032dc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g79 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4038cb
                    if (v25 % 2 == 0) {
                        goto lab_0x403411;
                    }
                    // 0x403ced
                    v26 = v5 + 1;
                    goto lab_0x4032b8;
                }
                case 7: {
                    goto lab_0x403411;
                }
                case 8: {
                    goto lab_0x403411;
                }
                case 9: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403411;
                }
                case 12: {
                    goto lab_0x403411;
                }
                case 13: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4033dd;
                }
                case 36: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403411;
                }
                case 38: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403411;
                }
                case 44: {
                    goto lab_0x403411;
                }
                case 45: {
                    goto lab_0x403411;
                }
                case 46: {
                    goto lab_0x403411;
                }
                case 47: {
                    goto lab_0x403411;
                }
                case 48: {
                    goto lab_0x403411;
                }
                case 49: {
                    goto lab_0x403411;
                }
                case 50: {
                    goto lab_0x403411;
                }
                case 51: {
                    goto lab_0x403411;
                }
                case 52: {
                    goto lab_0x403411;
                }
                case 53: {
                    goto lab_0x403411;
                }
                case 54: {
                    goto lab_0x403411;
                }
                case 55: {
                    goto lab_0x403411;
                }
                case 56: {
                    goto lab_0x403411;
                }
                case 57: {
                    goto lab_0x403411;
                }
                case 58: {
                    goto lab_0x403411;
                }
                case 59: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403411;
                }
                case 66: {
                    goto lab_0x403411;
                }
                case 67: {
                    goto lab_0x403411;
                }
                case 68: {
                    goto lab_0x403411;
                }
                case 69: {
                    goto lab_0x403411;
                }
                case 70: {
                    goto lab_0x403411;
                }
                case 71: {
                    goto lab_0x403411;
                }
                case 72: {
                    goto lab_0x403411;
                }
                case 73: {
                    goto lab_0x403411;
                }
                case 74: {
                    goto lab_0x403411;
                }
                case 75: {
                    goto lab_0x403411;
                }
                case 76: {
                    goto lab_0x403411;
                }
                case 77: {
                    goto lab_0x403411;
                }
                case 78: {
                    goto lab_0x403411;
                }
                case 79: {
                    goto lab_0x403411;
                }
                case 80: {
                    goto lab_0x403411;
                }
                case 81: {
                    goto lab_0x403411;
                }
                case 82: {
                    goto lab_0x403411;
                }
                case 83: {
                    goto lab_0x403411;
                }
                case 84: {
                    goto lab_0x403411;
                }
                case 85: {
                    goto lab_0x403411;
                }
                case 86: {
                    goto lab_0x403411;
                }
                case 87: {
                    goto lab_0x403411;
                }
                case 88: {
                    goto lab_0x403411;
                }
                case 89: {
                    goto lab_0x403411;
                }
                case 90: {
                    goto lab_0x403411;
                }
                case 91: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403411;
                }
                case 94: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403411;
                }
                case 96: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403411;
                }
                case 98: {
                    goto lab_0x403411;
                }
                case 99: {
                    goto lab_0x403411;
                }
                case 100: {
                    goto lab_0x403411;
                }
                case 101: {
                    goto lab_0x403411;
                }
                case 102: {
                    goto lab_0x403411;
                }
                case 103: {
                    goto lab_0x403411;
                }
                case 104: {
                    goto lab_0x403411;
                }
                case 105: {
                    goto lab_0x403411;
                }
                case 106: {
                    goto lab_0x403411;
                }
                case 107: {
                    goto lab_0x403411;
                }
                case 108: {
                    goto lab_0x403411;
                }
                case 109: {
                    goto lab_0x403411;
                }
                case 110: {
                    goto lab_0x403411;
                }
                case 111: {
                    goto lab_0x403411;
                }
                case 112: {
                    goto lab_0x403411;
                }
                case 113: {
                    goto lab_0x403411;
                }
                case 114: {
                    goto lab_0x403411;
                }
                case 115: {
                    goto lab_0x403411;
                }
                case 116: {
                    goto lab_0x403411;
                }
                case 117: {
                    goto lab_0x403411;
                }
                case 118: {
                    goto lab_0x403411;
                }
                case 119: {
                    goto lab_0x403411;
                }
                case 120: {
                    goto lab_0x403411;
                }
                case 121: {
                    goto lab_0x403411;
                }
                case 122: {
                    goto lab_0x403411;
                }
                case 123: {
                    goto lab_0x4033b5;
                }
                case 124: {
                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4033b5;
                }
                case 126: {
                    goto lab_0x4033dd;
                }
                default: {
                    goto lab_0x4037b5;
                }
            }
        }
      lab_0x4037b5:
        if (v23 != 1) {
            // 0x403b20
            ps = 0;
            int64_t len = v15; // 0x403b30
            if (v15 == -1) {
                // 0x403b32
                len = strlen((char *)str);
            }
            // 0x403b5e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403bbf:
                // 0x403bbf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403bc4
                int64_t v30 = v29 + str;
                v24 = function_406400(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40413a_2;
                    }
                    case -1: {
                        goto lab_0x40413a_2;
                    }
                    case -2: {
                        // 0x40421d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404257
                            v19 = v18;
                            int64_t v31 = v18; // 0x40425a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404267
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404260
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40413a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40413a_2;
                    }
                    case 1: {
                        goto lab_0x403b90;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403c3c
                        char v34 = *(char *)v33; // 0x403c4d
                        unsigned char v35; // 0x403267
                        if (v34 < 125) {
                            // 0x403c58
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403c6f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403210(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403c40
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403c4d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403c58
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403c6f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403210(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403c40
                            v33++;
                        }
                        goto lab_0x403b90;
                    }
                }
            }
            goto lab_0x40413a_2;
        } else {
            // 0x403804
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403411;
        }
    }
  lab_0x403a38:
    // 0x403a38
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40433a
        if (v8 > result) {
            // 0x404343
            *(char *)(v12 + result) = 0;
        }
        // 0x403667
        return result;
    }
    return function_403210(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403411:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403420
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40362a_2;
        }
    }
    int64_t v39 = result; // 0x403521
    char v40 = v20; // 0x403521
    int64_t v41 = v38; // 0x403521
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403521
    int64_t v43 = v36; // 0x403521
    goto lab_0x40349d;
  lab_0x40362a_2:
    // 0x403667
    return function_403210(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40413a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403411;
    } else {
        uint64_t v49 = v46 + v5; // 0x403d0e
        int64_t v50 = v5 + 1; // 0x403df1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403df8
        char v52 = v20; // 0x403df8
        int64_t v53 = result; // 0x403df8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403dc1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403dc5
            int64_t v56 = v54 + 1; // 0x403dca
            int64_t v57 = v51 + 1; // 0x403df1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403dbc
                v54 = v56;
                if (v47 > v54) {
                    // 0x403dc1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403dc5
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
        goto lab_0x40349d;
    }
  lab_0x403b90:
    // 0x403b90
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403baf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403bb2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40413a
        goto lab_0x40413a_2;
    }
    goto lab_0x403bbf;
  lab_0x4033dd:
    // 0x4033dd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40362a_2;
    }
    goto lab_0x403411;
  lab_0x4033b5:;
    bool v60 = v15 == 1; // 0x4033c0
    if (v15 == -1) {
        // 0x4033c2
        v60 = *(char *)v1 == 0;
    }
    // 0x4033ce
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403411;
    } else {
        goto lab_0x4033dd;
    }
  lab_0x40349d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4034a2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4034a6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4032b8_2;
}
// Address range: 0x404440 - 0x4045de
int64_t function_404440(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404442
    int32_t * v3 = __errno_location(); // 0x40445c
    int64_t v4 = (int64_t)g26; // 0x404461
    int32_t v5 = *v3; // 0x40446b
    int64_t v6 = v4; // 0x404481
    if (v2 >= (int64_t)*(int32_t *)&g29) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4045d9
            function_405590(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404490
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404497
        int64_t v9; // 0x404440
        if (g26 == &g27) {
            int64_t v10 = function_4053a0(0, v8); // 0x4045ba
            int128_t v11 = __asm_movdqa(*(int128_t *)&g27); // 0x4045bf
            *(int64_t *)&g26 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4053a0(v4, v8); // 0x4044ab
            *(int64_t *)&g26 = v12;
            v9 = v12;
        }
        // 0x4044ba
        v6 = v9;
        int32_t v13 = *(int32_t *)&g29; // 0x4044ba
        int32_t v14 = v7; // 0x4044c1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g29 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4044f1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4044fb
    int64_t * v17 = (int64_t *)v15; // 0x4044fe
    uint64_t v18 = *v17; // 0x4044fe
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404501
    int64_t result = *v19; // 0x404501
    int64_t v20; // 0x404440
    uint64_t v21 = function_403210(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404524
    if (v18 > v21) {
        // 0x40459b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404537
    *v17 = v22;
    if (result != (int64_t)&g62) {
        // 0x404547
        free((int64_t *)result);
    }
    int64_t result2 = function_405340(v22); // 0x404561
    *v19 = result2;
    int64_t v23; // 0x404440
    function_403210(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40459b
    *v3 = v5;
    return result2;
}
// Address range: 0x4045e0 - 0x404614
int64_t function_4045e0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4045e7
    int64_t result = function_405540(a1 == 0 ? (int64_t)&g63 : a1, 56); // 0x404606
    return result;
}
// Address range: 0x404620 - 0x40462f
int64_t function_404620(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g63 : a1); // 0x40462c
    return result;
}
// Address range: 0x404630 - 0x40463f
int64_t function_404630(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g63 : a1; // 0x404638
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g63;
}
// Address range: 0x404640 - 0x404673
int64_t function_404640(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g63 + 8 : a1 + 8; // 0x404659
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40465e
    uint32_t v3 = *v2; // 0x40465e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404662
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404680 - 0x404693
int64_t function_404680(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g63 + 4 : a1 + 4); // 0x40468c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4046a0 - 0x4046cb
int64_t function_4046a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g63 : a1; // 0x4046a8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4046c5
        abort();
        // UNREACHABLE
    }
    // 0x4046bc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g63;
}
// Address range: 0x4046d0 - 0x404742
int64_t function_4046d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g63 : a5; // 0x4046f2
    int32_t * v2 = __errno_location(); // 0x4046fb
    uint32_t v3 = *(int32_t *)v1; // 0x40471b
    int64_t result = function_403210(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40472a
    return result;
}
// Address range: 0x404750 - 0x404831
int64_t function_404750(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g63 : a4; // 0x404772
    int32_t * v2 = __errno_location(); // 0x404778
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404797
    int32_t * v4 = (int32_t *)v1; // 0x40479a
    int64_t v5 = function_403210(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4047b5
    int64_t v6 = v5 + 1; // 0x4047ba
    int64_t result = function_405340(v6); // 0x4047cf
    function_403210(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404814
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40481d
    return result;
}
// Address range: 0x404840 - 0x40484a
int64_t function_404840(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404840
    return function_404750(a1, a2, 0, a3);
}
// Address range: 0x404850 - 0x4048e5
int64_t function_404850(void) {
    uint32_t v1 = *(int32_t *)&g29; // 0x404850
    int64_t v2 = v1; // 0x404850
    int64_t v3 = v2; // 0x404864
    if (v1 >= 2) {
        int64_t v4 = &g29;
        int64_t v5 = v4 + 16; // 0x404883
        free((int64_t *)*(int64_t *)v4);
        v3 = &g81;
        while (v5 != (int64_t)g26 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404880
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g81;
        }
    }
    int64_t v6 = v3; // 0x40489d
    if (g27 != 0x61d500) {
        // 0x40489f
        free((int64_t *)g27);
        g27 = 256;
        *(int64_t *)&g28 = (int64_t)&g62;
        v6 = &g81;
    }
    int64_t result = v6; // 0x4048c1
    if (g26 != &g27) {
        // 0x4048c3
        free(g26);
        *(int64_t *)&g26 = (int64_t)&g27;
        result = &g81;
    }
    // 0x4048d6
    *(int32_t *)&g29 = 1;
    return result;
}
// Address range: 0x4048f0 - 0x404901
int64_t function_4048f0(void) {
    // 0x4048f0
    int64_t v1; // 0x4048f0
    return function_404440(v1, v1, -1, (int64_t *)&g63);
}
// Address range: 0x404910 - 0x40491a
int64_t function_404910(void) {
    // 0x404910
    int64_t v1; // 0x404910
    return function_404440(v1, v1, v1, (int64_t *)&g63);
}
// Address range: 0x404920 - 0x404936
int64_t function_404920(int64_t a1) {
    // 0x404920
    return function_404440(0, a1, -1, (int64_t *)&g63);
}
// Address range: 0x404940 - 0x404952
int64_t function_404940(int64_t a1, int64_t a2) {
    // 0x404940
    return function_404440(0, a1, a2, (int64_t *)&g63);
}
// Address range: 0x404960 - 0x4049c8
int64_t function_404960(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404970
    return function_404440((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4049d0 - 0x404a34
int64_t function_4049d0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4049e0
    return function_404440((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404a40 - 0x404a4c
int64_t function_404a40(int64_t a1, int64_t a2) {
    // 0x404a40
    return function_404960(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404a50 - 0x404a5f
int64_t function_404a50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404a50
    return function_4049d0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404a60 - 0x404ad0
int64_t function_404a60(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g63); // 0x404a6d
    int128_t v2 = __asm_movdqa(g64); // 0x404a75
    int128_t v3 = __asm_movdqa(g65); // 0x404a7d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404a92
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404aa8
    uint32_t v6 = *v5; // 0x404aa8
    uint32_t v7 = (int32_t)a3 % 32; // 0x404aad
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404440(0, a1, a2, &v4);
}
// Address range: 0x404ad0 - 0x404add
int64_t function_404ad0(int64_t a1, int64_t a2) {
    // 0x404ad0
    return function_404a60(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404ae0 - 0x404af1
int64_t function_404ae0(int64_t a1) {
    // 0x404ae0
    return function_404a60(a1, -1, 58);
}
// Address range: 0x404b00 - 0x404b0a
int64_t function_404b00(void) {
    // 0x404b00
    int64_t v1; // 0x404b00
    return function_404a60(v1, v1, 58);
}
// Address range: 0x404b10 - 0x404b7e
int64_t function_404b10(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404b2a
    return function_404440((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404b80 - 0x404bec
int64_t function_404b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g63); // 0x404b87
    int128_t v2 = __asm_movdqa(g64); // 0x404b8f
    int128_t v3 = __asm_movdqa(g65); // 0x404b97
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404bb9
    if (a2 == 0 || a3 == 0) {
        // 0x404be7
        abort();
        // UNREACHABLE
    }
    // 0x404bca
    return function_404440(a1, a4, a5, &v4);
}
// Address range: 0x404bf0 - 0x404bf9
int64_t function_404bf0(void) {
    // 0x404bf0
    int64_t v1; // 0x404bf0
    return function_404b80(v1, v1, v1, v1, -1);
}
// Address range: 0x404c00 - 0x404c17
int64_t function_404c00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c00
    return function_404b80(0, a1, a2, a3, -1);
}
// Address range: 0x404c20 - 0x404c33
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404c20
    return function_404b80(0, a1, a2, a3, a4);
}
// Address range: 0x404c40 - 0x404c4a
int64_t function_404c40(void) {
    // 0x404c40
    int64_t v1; // 0x404c40
    return function_404440(v1, v1, v1, &g25);
}
// Address range: 0x404c50 - 0x404c62
int64_t function_404c50(int64_t a1, int64_t a2) {
    // 0x404c50
    return function_404440(0, a1, a2, &g25);
}
// Address range: 0x404c70 - 0x404c81
int64_t function_404c70(void) {
    // 0x404c70
    int64_t v1; // 0x404c70
    return function_404440(v1, v1, -1, &g25);
}
// Address range: 0x404c90 - 0x404ca6
int64_t function_404c90(int64_t a1) {
    // 0x404c90
    return function_404440(0, a1, -1, &g25);
}
// Address range: 0x404cb0 - 0x404d0e
int64_t function_404cb0(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x404cd1
    while (result < 0) {
        // 0x404cde
        if (*__errno_location() != 4) {
            // break -> 0x404cea
            break;
        }
        result = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x404d10 - 0x404d24
int64_t function_404d10(void) {
    // 0x404d10
    int64_t template; // 0x404d10
    return function_404d50((int64_t)mkstemp((char *)template));
}
// Address range: 0x404d30 - 0x404d42
int64_t function_404d30(int64_t a1, int64_t a2) {
    uint32_t v1 = mkostemp((char *)a1, (int32_t)a2); // 0x404d33
    return function_4142b0((int64_t)v1);
}
// Address range: 0x404d50 - 0x404d9e
int64_t function_404d50(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x404d5c
    if (fd >= 3) {
        // 0x404d61
        return a1 & 0xffffffff;
    }
    // 0x404d70
    int64_t v1; // 0x404d50
    int64_t v2 = function_4148f0(a1, v1); // 0x404d70
    int32_t * v3 = __errno_location(); // 0x404d78
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x404da0 - 0x40517d
int64_t function_404da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404e38
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404dbc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404dd6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404e1b
    if (a6 < 10) {
        // 0x404e2a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404f22
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405180 - 0x4051a0
int64_t function_405180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405180
    if (a5 == 0) {
        // 0x40519b
        return function_404da0(a1, a2, a3, a4, a5, 0, (int64_t)&g81);
    }
    int64_t v1 = 0; // 0x405187
    v1++;
    int64_t v2 = v1; // 0x405199
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405190
        v1++;
        v2 = v1;
    }
    // 0x40519b
    return function_404da0(a1, a2, a3, a4, a5, v2, (int64_t)&g81);
}
// Address range: 0x4051a0 - 0x405200
int64_t function_4051a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4051a0
    int64_t v3 = &v2; // 0x4051a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4051d3
    int64_t v6; // 0x4051bd
    int64_t * v7; // 0x4051db
    int64_t v8; // 0x4051db
    int64_t v9; // 0x4051e7
    if (v5 < 48) {
        // 0x4051b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4051f3
            break;
        }
    } else {
        // 0x4051db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4051f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4051d1
    while (v4 != 9) {
        // 0x4051c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4051b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4051f3
                break;
            }
        } else {
            // 0x4051db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4051f3
                break;
            }
        }
        // 0x4051c9
        v10 = 10;
    }
    // 0x4051f3
    return function_404da0(a1, a2, a3, a4, v3, v10, (int64_t)&g81);
}
// Address range: 0x405200 - 0x4052bc
int64_t function_405200(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405200
    int64_t v1; // bp-168, 0x405200
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405200
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405200
    int64_t v8; // 0x405200
    int64_t v9; // bp-56, 0x405200
    int64_t v10; // 0x405265
    int64_t v11; // 0x405289
    if ((int32_t)v6 < 48) {
        // 0x405250
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4052a0
            break;
        }
    } else {
        // 0x405282
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4052a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40527a
    int64_t v13 = 10; // 0x40527a
    while (v5 != 9) {
        // 0x40527c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405250
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4052a0
                break;
            }
        } else {
            // 0x405282
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4052a0
                break;
            }
        }
        // 0x405272
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4052a0
    int64_t v14; // bp-136, 0x405200
    int64_t result = function_404da0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g81); // 0x4052af
    return result;
}
// Address range: 0x4052c0 - 0x405334
int64_t function_4052c0(int64_t a1) {
    // 0x4052c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405323
    return fputs_unlocked(v1, g34);
}
// Address range: 0x405340 - 0x40535a
int64_t function_405340(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405344
    if (size != 0 != (mem == NULL)) {
        // 0x405353
        return (int64_t)mem;
    }
    // 0x405355
    function_405590(size);
    // UNREACHABLE
}
// Address range: 0x405360 - 0x405381
int64_t function_405360(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405363
    int64_t v2 = v1; // 0x405363
    if (v2 < 0) {
        // 0x40537b
        function_405590(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405379
        return function_405340(v2);
    }
    // 0x40537b
    function_405590(v2);
    // UNREACHABLE
}
// Address range: 0x405390 - 0x405392
int64_t function_405390(void) {
    // 0x405390
    int64_t v1; // 0x405390
    return function_405340(v1);
}
// Address range: 0x4053a0 - 0x4053d6
int64_t function_4053a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4053c8
        free(v1);
        return (int32_t)&g81 ^ (int32_t)&g81;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4053b1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4053c0
        return (int64_t)mem;
    }
    // 0x4053d1
    function_405590(a1);
    // UNREACHABLE
}
// Address range: 0x4053e0 - 0x405401
int64_t function_4053e0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4053e3
    int64_t v2 = v1; // 0x4053e3
    if (v2 < 0) {
        // 0x4053fb
        function_405590(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4053f9
        return function_4053a0(a1, v2);
    }
    // 0x4053fb
    function_405590(a1);
    // UNREACHABLE
}
// Address range: 0x405410 - 0x405496
int64_t function_405410(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40546b
            function_405590(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4053a0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405453
    if (a2 == 0) {
        // 0x405478
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405458
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40546b
        function_405590(a1);
        // UNREACHABLE
    }
    // 0x40543a
    *(int64_t *)a2 = v2;
    return function_4053a0(a1, v2 * a3);
}
// Address range: 0x4054a0 - 0x4054f0
int64_t function_4054a0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4054a0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4054ea
            function_405590(a1);
            // UNREACHABLE
        }
        // 0x4054c2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4053a0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4054d5
        *(int64_t *)a2 = 128;
        return function_4053a0(0, 128);
    }
    // 0x4054e8
    if (a2 < 0) {
        // 0x4054ea
        function_405590(a1);
        // UNREACHABLE
    }
    // 0x4054c2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4053a0(a1, v1);
}
// Address range: 0x4054f0 - 0x405507
int64_t function_4054f0(int64_t a1, int64_t a2) {
    // 0x4054f0
    return (int64_t)memset((int64_t *)function_405340(a1), 0, (int32_t)a1);
}
// Address range: 0x405510 - 0x40553e
int64_t function_405510(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405517
    if ((int64_t)v1 < 0) {
        // 0x405539
        function_405590(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405539
        function_405590(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40552a
    if (mem != NULL) {
        // 0x405534
        return (int64_t)mem;
    }
    // 0x405539
    function_405590(nmemb);
    // UNREACHABLE
}
// Address range: 0x405540 - 0x405568
int64_t function_405540(int64_t a1, int64_t a2) {
    int64_t v1 = function_405340(a2); // 0x40554f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405570 - 0x405583
int64_t function_405570(int64_t str) {
    // 0x405570
    return function_405540(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405590 - 0x4055c1
int64_t function_405590(int64_t a1) {
    // 0x405590
    error(g24, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4055d0 - 0x405627
int64_t function_4055d0(int64_t stream, int32_t offset, int32_t whence) {
    // 0x4055d0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4055da
        return fseeko((struct _IO_FILE *)stream, offset, whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, whence); // 0x40560b
    int64_t result = -1; // 0x405614
    if (v1 != -1) {
        // 0x405616
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405622
    return result;
}
// Address range: 0x405630 - 0x40570f
int64_t function_405630(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40563c
    uint32_t v2 = *v1; // 0x40563c
    int64_t v3 = a2 & 0xffffffff; // 0x405641
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405644
    uint64_t v5 = (int64_t)*v4; // 0x405644
    int64_t v6; // 0x4056b2
    if (v3 <= v5) {
      lab_0x4056ac_2:
        // 0x4056ac
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405632
    int64_t v8 = v2; // 0x405630
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4056ac
        goto lab_0x4056ac_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405668
    int64_t v17; // 0x405676
    int64_t * v18; // 0x405690
    int64_t * v19; // 0x405693
    int64_t v20; // 0x40569e
    int64_t v21; // 0x405676
    while ((v16 & 0xffffffff) > v10) {
        // 0x405673
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405690
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4056a7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4056ac
            goto lab_0x4056ac_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4056ac
            goto lab_0x4056ac_2;
        }
        // 0x405662
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4056eb
    int64_t * v23 = (int64_t *)v22; // 0x4056f0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4056f3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4056f0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405707
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40565d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4056ac
            goto lab_0x4056ac_2;
        }
        // 0x405662
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405673
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405690
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4056a7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4056ac
                goto lab_0x4056ac_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4056ac
                goto lab_0x4056ac_2;
            }
            // 0x405662
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4056d0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4056f0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405707
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4056ac
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405710 - 0x405d2c
int64_t function_405710(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40572f
    int64_t v2 = *v1; // 0x40572f
    char * str2 = (char *)v2; // 0x40573c
    char c = *str2; // 0x40573c
    int64_t v3 = v2; // 0x405768
    int64_t v4 = 0; // 0x405710
    int32_t v5; // 0x405710
    int64_t v6; // 0x405710
    int64_t v7; // 0x405710
    int64_t v8; // 0x405710
    int64_t v9; // 0x405710
    int64_t v10; // 0x405710
    int64_t v11; // 0x405710
    int64_t v12; // 0x405710
    int64_t v13; // 0x405710
    int64_t str3; // 0x405710
    int64_t v14; // 0x405710
    int64_t v15; // 0x405710
    int64_t v16; // 0x405710
    int64_t v17; // 0x405710
    int32_t v18; // 0x405710
    int32_t v19; // 0x405710
    int32_t v20; // 0x405710
    int32_t v21; // 0x405710
    int32_t v22; // 0x405710
    int32_t v23; // 0x405710
    int32_t v24; // 0x405710
    int32_t v25; // 0x405710
    int32_t v26; // 0x405710
    int32_t v27; // 0x405710
    int32_t v28; // 0x405710
    int32_t v29; // 0x405710
    int64_t nmemb; // 0x405710
    int64_t v30; // 0x405710
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40576c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405768
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405778
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40577e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405748
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4057ac
                int64_t v34; // 0x405710
                int64_t v35; // 0x405710
                if (strncmp(str, str2, n) == 0) {
                    // 0x4057b5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405930;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4057c6
                int64_t v37 = *(int64_t *)v36; // 0x4057ca
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4057a0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4057b5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405930;
                        }
                    }
                    // 0x4057c6
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
                  lab_0x405816:
                    // 0x405816
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
                        goto lab_0x405870;
                    } else {
                        if (v11 == 0) {
                            // 0x4059e0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405870;
                        } else {
                            if (v39 == 0) {
                                // 0x405990
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40583a;
                                } else {
                                    // 0x40599c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40583a;
                                    } else {
                                        // 0x4059aa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40583a;
                                        } else {
                                            goto lab_0x405870;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40583a;
                            }
                        }
                    }
                }
              lab_0x405881:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405a56
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405c02
                            flockfile(g36);
                            int64_t v41 = *v1; // 0x405c22
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405c6f
                            int64_t v43 = (int64_t)g36;
                            int64_t v44 = v43; // 0x405c89
                            int64_t v45; // 0x405c8b
                            if (*(char *)v42 != 0) {
                                // 0x405c8b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g36;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405c83
                            while (v17 + nmemb != v42) {
                                // 0x405c85
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405c8b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g36;
                                }
                                // 0x405c78
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405cb0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g36);
                            v40 = *v1;
                        } else {
                            // 0x405a64
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405bbf
                        free((int64_t *)v17);
                    }
                    // 0x405ab9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405ad0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40597e
                    return 63;
                }
                // 0x4058a0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405924
                    v35 = v13;
                    v34 = v25;
                  lab_0x405930:;
                    int32_t * v49 = (int32_t *)a7; // 0x405940
                    uint32_t v50 = *v49; // 0x405940
                    int64_t v51 = v50; // 0x405940
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40594a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405953
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405b7f
                                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405b2a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40597e
                            return 63;
                        }
                        // 0x4059c8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405cdf
                                    __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405bdd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405bf0
                                // 0x40597e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405aee
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405b02
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40596b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40596e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405972
                    int64_t result = v59; // 0x405978
                    if (v58 != 0) {
                        // 0x40597a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40597e
                    return result;
                }
            } else {
                // 0x40577e
                v5 = v32;
            }
            // break -> 0x4058a5
            break;
        }
    }
    // 0x4058a5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4058bd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4058c7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40597e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405a09
        __fprintf_chk(g36, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4058f6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405906
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405870:
    // 0x405870
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405870
    int64_t v63 = *(int64_t *)v62; // 0x405874
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405881
        goto lab_0x405881;
    }
    goto lab_0x405816;
  lab_0x40583a:
    // 0x40583a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405710
    int32_t v65; // 0x405710
    int32_t v66; // 0x405710
    if (v27 != 0) {
        goto lab_0x405870;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4059f0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405870;
            } else {
                goto lab_0x405861;
            }
        } else {
            // 0x405855
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405b4c
                int64_t v67 = (int64_t)mem; // 0x405b4c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405870;
                } else {
                    // 0x405b5f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405861;
                }
            } else {
                goto lab_0x405861;
            }
        }
    }
  lab_0x405861:
    // 0x405861
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405870;
}
// Address range: 0x405d30 - 0x4062f6
int64_t function_405d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405d51
    if (v3 < 1) {
        // 0x405f0e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405d4d
    int32_t v5 = *(int32_t *)a7; // 0x405d59
    uint64_t v6 = a1 & 0xffffffff; // 0x405d5b
    int64_t v7 = v2; // 0x405d60
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405d63
    *v8 = 0;
    int64_t v9; // 0x405d30
    int64_t v10; // 0x405d30
    int64_t v11; // 0x405d30
    int64_t v12; // 0x405d30
    int64_t str; // 0x405d30
    int64_t v13; // 0x405d30
    int64_t v14; // 0x405d30
    int64_t v15; // 0x405d30
    int64_t v16; // 0x405d30
    int64_t v17; // 0x405d30
    int32_t v18; // 0x405d30
    char v19; // 0x405d30
    if (v5 == 0) {
        // 0x405f48
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405d7a;
    } else {
        // 0x405d73
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405dc0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405dc3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405e88;
            } else {
                int64_t v22 = v7 + 1; // 0x405dd6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405de6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405e9c;
                } else {
                    goto lab_0x405df8;
                }
            }
        } else {
            goto lab_0x405d7a;
        }
    }
  lab_0x405d7a:
    // 0x405d7a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405d80
    *v24 = 0;
    int64_t v25; // 0x405d30
    int64_t v26; // 0x405d30
    int64_t v27; // 0x405d30
    switch (*(char *)&v2) {
        case 45: {
            // 0x405e70
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405e7d;
        }
        case 43: {
            // 0x406180
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405e7d;
        }
        default: {
            // 0x405d9c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4060ff
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406218
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405e7d;
                } else {
                    // 0x40610d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405daa;
                }
            } else {
                goto lab_0x405daa;
            }
        }
    }
  lab_0x405e88:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405e8f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405df8;
    } else {
        goto lab_0x405e9c;
    }
  lab_0x405daa:
    // 0x405daa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405e7d;
  lab_0x405e7d:
    // 0x405e7d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405e88;
  lab_0x405df8:;
    uint32_t v30 = *(int32_t *)a7; // 0x405df8
    int64_t v31 = v30; // 0x405df8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405dfa
    if ((int64_t)*v32 > v31) {
        // 0x405dff
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405e02
    if (*v33 > v30) {
        // 0x405e07
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405e0a
    int64_t v35 = v31; // 0x405e0e
    int64_t v36 = v15; // 0x405e0e
    int64_t v37; // 0x405d30
    int64_t v38; // 0x405d30
    int64_t v39; // 0x405d30
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405f78
        int64_t v41 = v40; // 0x405f78
        v2 = v41;
        int64_t v42; // 0x405d30
        if (*v33 == v40) {
            // 0x406160
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406168
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405f84
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405f88
                function_405630(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405f98
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405fa1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405faa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405fc1
            int64_t v47 = v45 & 0xffffffff; // 0x405fc5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405fce
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405fd4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405fd6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405fb0
            int64_t v49 = v48 & 0xffffffff; // 0x405fb0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405fc1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405fce
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405fd4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405fd6;
                    }
                }
                // 0x405fb0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406178
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405fd6;
    } else {
        goto lab_0x405e14;
    }
  lab_0x405e9c:
    // 0x405e9c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405e9f
    int64_t v51 = v12; // 0x405e9f
    int64_t v52 = v14; // 0x405e9f
    if (*(char *)v10 == 0) {
        goto lab_0x405df8;
    } else {
        goto lab_0x405ea5;
    }
  lab_0x405e14:;
    int32_t v53 = v35; // 0x405e14
    int64_t v54; // 0x405d30
    int64_t v55; // 0x405d30
    int64_t v56; // 0x405d30
    int64_t v57; // 0x405d30
    int64_t v58; // 0x405d30
    int64_t v59; // 0x405d30
    char * v60; // 0x405d30
    int64_t v61; // 0x405d30
    int64_t v62; // 0x405e29
    int64_t v63; // 0x405d30
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405f63
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405f66;
    } else {
        // 0x405e1c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405d30
        int64_t v66 = v65 ? -1 : 1; // 0x405e30
        int64_t v67 = (int64_t)"--"; // 0x405d30
        int64_t v68 = v62; // 0x405d30
        int64_t v69 = 3; // 0x405e30
        unsigned char v70 = *(char *)v68; // 0x405e30
        char v71 = *(char *)v67; // 0x405e30
        char v72 = v71; // 0x405e30
        bool v73 = false; // 0x405e30
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
            // 0x405f20
            if (*(char *)v62 == 45) {
                // 0x405fe0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405fe0
                if (c == 0) {
                    goto lab_0x405f2a;
                } else {
                    // 0x405fed
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406070;
                    } else {
                        if (c == 45) {
                            // 0x406253
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4060c5;
                        } else {
                            // 0x405ffe
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406070;
                            } else {
                                // 0x406003
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406024;
                                } else {
                                    // 0x40600a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406070;
                                    } else {
                                        goto lab_0x406024;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405f2a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405e40
            v2 = v75;
            int32_t v76 = *v32; // 0x405e43
            int64_t v77 = v35 + 1; // 0x405e46
            int32_t v78 = v77; // 0x405e49
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4061b0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405e57
                    function_405630(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405e65
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405f66;
        }
    }
  lab_0x405ea5:;
    // 0x405ea5
    int64_t v79; // bp-104, 0x405d30
    int64_t v80 = &v79; // 0x405d3a
    int64_t v81 = v50 + 1; // 0x405ea5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405eac
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405eb1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405eb5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405eb9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405ec1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405ec6
    int32_t c2 = v84; // 0x405ec6
    char * found_char_pos = strchr(str2, c2); // 0x405ec6
    int64_t v87 = *v82; // 0x405ecb
    v2 = v87;
    int64_t v88 = *v85; // 0x405ed5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405ee0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4061d0
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40619d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405f0e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405ec6
    char v91 = *(char *)(v90 + 1); // 0x405efb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405eb5
        if (v91 != 58) {
            // 0x405f0e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406124
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406228
                *v8 = 0;
            } else {
                // 0x40620c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40614e
            *v83 = 0;
            // 0x405f0e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40612e
        if (v93 != 0) {
            // 0x4061c0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40614e
            *v83 = 0;
            // 0x405f0e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406141
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40614e
            *v83 = 0;
            // 0x405f0e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40628a
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40623a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406241
        // 0x40614e
        *v83 = 0;
        // 0x405f0e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406099
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40609b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4062c0
                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406271
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406278
            // 0x405f0e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4060a6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4060aa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4060c5;
  lab_0x405fd6:
    // 0x405fd6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405e14;
  lab_0x4060c5:;
    int64_t v99 = function_405710(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4060e3
    // 0x405f0e
    return v99 & 0xffffffff;
  lab_0x405f66:;
    int32_t v100 = v55; // 0x405f66
    if (v100 != (int32_t)v59) {
        // 0x405f6a
        *(int32_t *)a7 = v100;
    }
    // 0x405f0e
    return 0xffffffff;
  lab_0x405f2a:
    // 0x405f2a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405f31
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405f0e
    return v99 & 0xffffffff;
  lab_0x406070:
    // 0x406070
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405ea5;
  lab_0x406024:
    // 0x406024
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405710(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40604a
    if ((int32_t)v101 != -1) {
        // 0x405f0e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40605f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406070;
}
// Address range: 0x406300 - 0x406356
int64_t function_406300(int64_t a1) {
    // 0x406300
    *(int32_t *)&g66 = g32;
    *(int32_t *)&g67 = g31;
    int64_t v1; // 0x406300
    int64_t result = function_405d30(v1, v1, v1, v1, v1, v1, &g66, a1 & 0xffffffff); // 0x406326
    g32 = *(int32_t *)&g66;
    g72 = g69;
    *(int32_t *)&g30 = g68;
    return result;
}
// Address range: 0x406360 - 0x406378
int64_t function_406360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406360
    return function_406300(1);
}
// Address range: 0x406380 - 0x406393
int64_t function_406380(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x406380
    return function_406300(0);
}
// Address range: 0x4063a0 - 0x4063b5
int64_t function_4063a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4063a0
    return function_405d30(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4063c0 - 0x4063d6
int64_t function_4063c0(void) {
    // 0x4063c0
    return function_406300(0);
}
// Address range: 0x4063e0 - 0x4063f8
int64_t function_4063e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4063e0
    return function_405d30(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406400 - 0x40647a
int64_t function_406400(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40640b
    int64_t v2 = (int64_t)&g12; // 0x40640b
    int32_t * pwc; // 0x406400
    int64_t v3; // 0x406400
    int64_t n; // 0x406400
    if (a2 == 0) {
        goto lab_0x406452;
    } else {
        // 0x40640d
        if (a3 == 0) {
            // 0x406438
            return -2;
        }
        // 0x406419
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406452;
        } else {
            goto lab_0x406424;
        }
    }
  lab_0x406452:
    // 0x406452
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406400
    pwc = (int32_t *)&v4;
    goto lab_0x406424;
  lab_0x406424:;
    char * wstr = (char *)v3; // 0x40642a
    int64_t ps; // 0x406400
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40642a
    int64_t result = v5; // 0x40642a
    if (v5 < 0xfffffffe) {
        // 0x406438
        return result;
    }
    int64_t result2 = result; // 0x406469
    if ((char)function_414320(0, v3) == 0) {
        // 0x40646b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406438
    return result2;
}
// Address range: 0x406480 - 0x4064c3
int64_t function_406480(int64_t a1, int64_t a2, int64_t a3) {
    bool v1 = a1 == 0 | a2 == 0;
    if (v1) {
        // 0x40649a
        return 0;
    }
    // 0x406490
    int64_t v2; // 0x406480
    int64_t result = v2 & -256 | (int64_t)v1; // 0x40648c
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x406490
    if (v3 != *(int64_t *)(a2 + 8)) {
        // 0x40649a
        return result;
    }
    int64_t v4 = v3; // 0x4064b2
    v4--;
    int64_t result2 = 1; // 0x4064b6
    while (v4 >= 0) {
        int64_t v5 = 8 * v4; // 0x4064a8
        int64_t v6 = *(int64_t *)(*(int64_t *)(a1 + 16) + v5); // 0x4064ac
        result2 = result;
        if (v6 != *(int64_t *)(*(int64_t *)(a2 + 16) + v5)) {
            // break -> 0x40649a
            break;
        }
        v4--;
        result2 = 1;
    }
    // 0x40649a
    return result2;
}
// Address range: 0x4064d0 - 0x40653b
int64_t function_4064d0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a1; // 0x4064dd
    int64_t result; // 0x4064d0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = *(int64_t *)(v2 + 8); // 0x4064e3
        v1 = v3;
        if (v3 == 0) {
            int64_t v4 = *(int64_t *)(v2 + 16); // 0x4064ec
            v1 = v4;
            if (v4 == 0) {
                // 0x4064f5
                result = v4;
                if ((int32_t)v4 != 0) {
                    // break -> 0x406536
                    break;
                }
                int64_t v5 = *(int64_t *)v2; // 0x406508
                result = v4;
                if (v5 == 0) {
                    // break -> 0x406536
                    break;
                }
                int64_t v6 = v2;
                int64_t v7 = v5;
                int64_t v8 = *(int64_t *)(v7 + 16); // 0x406510
                v1 = v8;
                while (v8 == 0 || v8 == v6) {
                    // 0x406529
                    result = v8;
                    if ((int32_t)v8 != 0) {
                        return result;
                    }
                    int64_t v9 = *(int64_t *)v7; // 0x406508
                    result = v8;
                    if (v9 == 0) {
                        return result;
                    }
                    v6 = v7;
                    v7 = v9;
                    v8 = *(int64_t *)(v7 + 16);
                    v1 = v8;
                }
            }
        }
    }
  lab_0x406536_2:
    // 0x406536
    return result;
}
// Address range: 0x406540 - 0x40666f
int64_t function_406540(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x406540
    uint64_t v3 = *v2; // 0x406540
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x4065d0
        *(char *)(v1 + 8) = 2;
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40654e
    char v5 = *(char *)(v4 + v3); // 0x406559
    *(char *)a1 = v5;
    if (*(int32_t *)(a2 + 144) >= 2) {
        // 0x406562
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x406568
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                // 0x4065a7
                *(char *)(v1 + 8) = 1;
                return 1;
            }
        }
    }
    switch (v5) {
        case 92: {
            if (a3 % 2 == 0) {
                // 0x4065a7
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            int64_t v6 = v3 + 1;
            if (v6 >= *(int64_t *)(a2 + 88)) {
                // 0x4065a7
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            // 0x406620
            *v2 = v6;
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = *(char *)(v4 + v6);
            return 1;
        }
        case 91: {
            uint64_t v7 = v3 + 1;
            if (v7 >= *(int64_t *)(a2 + 88)) {
                // 0x4065fe
                *(char *)(v1 + 8) = 1;
                *(char *)a1 = 91;
                return 1;
            }
            char v8 = *(char *)(v4 + v7); // 0x4065ea
            *(char *)a1 = v8;
            switch (v8) {
                case 58: {
                    if ((a3 & 4) != 0) {
                        // 0x406665
                        *(char *)(v1 + 8) = 30;
                        return 2;
                    }
                    // 0x4065fe
                    *(char *)(v1 + 8) = 1;
                    *(char *)a1 = 91;
                    return 1;
                }
                case 61: {
                    // 0x406650
                    *(char *)(v1 + 8) = 28;
                    return 2;
                }
                case 46: {
                    // 0x406640
                    *(char *)(v1 + 8) = 26;
                    return 2;
                }
            }
            // 0x4065fe
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = 91;
            return 1;
        }
        case 93: {
            // 0x406610
            *(char *)(v1 + 8) = 21;
            return 1;
        }
    }
    if (v5 == 94) {
        // 0x40658b
        *(char *)(v1 + 8) = 25;
        return 1;
    }
    if (v5 == 45) {
        // 0x4065bd
        *(char *)(v1 + 8) = 22;
        return 1;
    }
    // 0x4065a7
    *(char *)(v1 + 8) = 1;
    return 1;
}
// Address range: 0x406670 - 0x40668d
int64_t function_406670(int64_t a1, int64_t a2) {
    // 0x406670
    if (*(char *)(a2 + 48) != 17 || *(int64_t *)(a2 + 40) != a1) {
        // 0x406676
        return 0;
    }
    char * v1 = (char *)(a2 + 50); // 0x406686
    *v1 = *v1 | 8;
    return 0;
}
// Address range: 0x406690 - 0x40689f
int64_t function_406690(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x4066a5
    uint64_t v2 = 0x100000000 * a2 >> 32; // 0x4066b5
    int64_t v3 = *(int64_t *)(v1 + 48) + 24 * a4; // 0x4066bd
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x4066c1
    int64_t v5 = *v4; // 0x4066c1
    if (v5 < 1) {
        // 0x40686d
        return (int32_t)v2 >> 1;
    }
    int64_t v6 = 1 << a3 % 64;
    int32_t v7 = v2;
    int64_t v8 = v5; // 0x40670e
    int64_t v9 = 0; // 0x40670e
    int64_t v10; // 0x406719
    int64_t v11; // 0x406690
    int64_t v12; // 0x406690
    int64_t v13; // 0x406690
    int64_t v14; // 0x406690
    while (true) {
      lab_0x406723_2:
        // 0x406723
        v13 = v9;
        v10 = v8;
        int64_t v15 = *(int64_t *)(*(int64_t *)(v3 + 16) + 8 * v13); // 0x406727
        int64_t v16 = 16 * v15 + *(int64_t *)v1; // 0x406732
        char v17 = *(char *)(v16 + 8); // 0x406735
        if (v17 == 8) {
            if (v7 % 2 != 0) {
                // 0x406770
                if (*(int64_t *)v16 == a3) {
                    // 0x406750
                    return 0xffffffff;
                }
            }
            goto lab_0x406715;
        } else {
            if (v17 != 9) {
                if (a5 == -1 || v17 != 4) {
                    goto lab_0x406715;
                } else {
                    // 0x40679a
                    v14 = 24 * v15 + 16;
                    v11 = *(int64_t *)(a1 + 216) + 40 * a5;
                    while (true) {
                      lab_0x4067d0:
                        // 0x4067d0
                        v12 = v11;
                        if (*(int64_t *)v12 != v15) {
                            goto lab_0x406840;
                        } else {
                            if (a3 > 63) {
                                goto lab_0x4067e9;
                            } else {
                                // 0x4067dc
                                if ((v6 & (int64_t)*(int16_t *)(v12 + 34)) == 0) {
                                    goto lab_0x406840;
                                } else {
                                    goto lab_0x4067e9;
                                }
                            }
                        }
                    }
                  lab_0x40684c:;
                    int64_t v18 = v13 + 1; // 0x40685f
                    uint64_t v19 = *v4; // 0x406863
                    v8 = v19;
                    v9 = v18;
                    if (v19 <= v18) {
                        // break -> 0x40686d
                        break;
                    }
                    goto lab_0x406723_2;
                }
            } else {
                if ((v7 & 2) != 0) {
                    // 0x40674b
                    if (*(int64_t *)v16 == a3) {
                        // 0x406750
                        return 0;
                    }
                }
                goto lab_0x406715;
            }
        }
    }
  lab_0x40686d:
    // 0x40686d
    return v7 >> 1;
  lab_0x406840:
    // 0x406840
    v11 = v12 + 40;
    if (*(char *)(v12 + 32) == 0) {
        // break -> 0x40684c
        goto lab_0x40684c;
    }
    goto lab_0x4067d0;
  lab_0x4067e9:;
    int64_t v20 = *(int64_t *)*(int64_t *)(v14 + *(int64_t *)(v1 + 40)); // 0x4067f2
    if (v20 == a4) {
        // 0x406888
        return -((v2 % 2)) & 0xffffffff;
    }
    int32_t v21 = function_406690(a1, v2 & 0xffffffff, a3, v20, a5); // 0x406813
    if (v21 == -1) {
        // 0x406750
        return 0xffffffff;
    }
    // 0x40681c
    if ((v7 & 2) != 0 == v21 == 0) {
        // 0x406750
        return 0;
    }
    if (a3 <= 63) {
        int16_t * v22 = (int16_t *)(v12 + 34); // 0x406837
        *v22 = *v22 & -1 - (int16_t)v6;
    }
    goto lab_0x406840;
  lab_0x406715:;
    int64_t v23 = v13 + 1; // 0x406715
    v8 = v10;
    v9 = v23;
    if (v10 <= v23) {
        // break -> 0x40686d
        goto lab_0x40686d;
    }
    goto lab_0x406723;
  lab_0x406723:
    // 0x406723
    goto lab_0x406723_2;
}
// Address range: 0x4068a0 - 0x406906
int64_t function_4068a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a1 + 216) + 40 * a2; // 0x4068ab
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x4068af
    if (v2 > a5) {
        // 0x4068d6
        return 0xffffffff;
    }
    int64_t v3 = *(int64_t *)(v1 + 24); // 0x4068b8
    if (v3 < a5) {
        // 0x4068d6
        return 1;
    }
    if (v3 == a5) {
        // 0x4068e3
        return function_406690(a1, (int64_t)(v2 == a5) | 2, a3, a4, a6);
    }
    // 0x4068cf
    if (v2 == a5) {
        // 0x4068e3
        return function_406690(a1, 1, a3, a4, a6);
    }
    // 0x4068d6
    return 0;
}
// Address range: 0x406910 - 0x4069ac
int64_t function_406910(int64_t a1, uint64_t a2) {
    // 0x406910
    if (*(int32_t *)(a1 + 144) >= 2) {
        if (a2 >= 0x2000000000000000) {
            // 0x4069a0
            return 12;
        }
        int64_t * v1 = (int64_t *)(a1 + 16); // 0x406934
        int32_t v2 = a2;
        int64_t * mem = realloc((int64_t *)*v1, 4 * v2); // 0x406940
        if (mem == NULL) {
            // 0x4069a0
            return 12;
        }
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x40694a
        int64_t v4 = *v3; // 0x40694a
        *v1 = (int64_t)mem;
        if (v4 != 0) {
            int64_t * mem2 = realloc((int64_t *)v4, 8 * v2); // 0x40695f
            if (mem2 == NULL) {
                // 0x4069a0
                return 12;
            }
            // 0x406969
            *v3 = (int64_t)mem2;
        }
    }
    // 0x40696d
    if (*(char *)(a1 + 139) == 0) {
        // 0x406976
        *(int64_t *)(a1 + 64) = a2;
        return 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x406988
    int64_t * mem3 = realloc((int64_t *)*v5, (int32_t)a2); // 0x40698f
    if (mem3 == NULL) {
        // 0x4069a0
        return 12;
    }
    // 0x406999
    *v5 = (int64_t)mem3;
    // 0x406976
    *(int64_t *)(a1 + 64) = a2;
    return 0;
}
// Address range: 0x4069b0 - 0x406a14
int64_t function_4069b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4069bc
    int64_t v2 = *v1; // 0x4069bc
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4069c0
    int64_t v4 = *v3; // 0x4069c0
    int64_t v5 = v4; // 0x4069c7
    int64_t v6 = v2; // 0x4069c7
    if (v2 == a1) {
        int64_t v7 = a1 + 1; // 0x4069e8
        *(int64_t *)a1 = 2 * v7;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)v7); // 0x4069fa
        if (mem == NULL) {
            // 0x4069da
            return 0;
        }
        // 0x406a04
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    // 0x4069c9
    *v1 = v6 + 1;
    *(int64_t *)(8 * v6 + v5) = a2;
    // 0x4069da
    return 1;
}
// Address range: 0x406a20 - 0x406b4c
int64_t function_406a20(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x406a58
        abort();
        // UNREACHABLE
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x406a34
    int64_t v2 = *v1; // 0x406a34
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x406a38
    int64_t v4 = *v3; // 0x406a38
    if (v2 == 0) {
        // 0x406a41
        *(int64_t *)v4 = a2;
        *v1 = *v1 + 1;
        // 0x406a4e
        return 1;
    }
    int64_t v5 = v4; // 0x406a93
    int64_t v6 = v2; // 0x406a93
    if (v2 == a1) {
        // 0x406b20
        *(int64_t *)a1 = 2 * a1;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)a1); // 0x406b2e
        if (mem == NULL) {
            // 0x406a4e
            return 0;
        }
        // 0x406b38
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    int64_t v7 = 8 * v6; // 0x406a99
    int64_t v8; // 0x406a20
    if (*(int64_t *)v5 > a2) {
        // 0x406aa6
        v8 = v7;
        if (v6 >= 1) {
            int64_t v9 = v7 + v5;
            int64_t v10 = v9 - 8; // 0x406ab0
            *(int64_t *)v9 = *(int64_t *)v10;
            v8 = 0;
            while (v10 != v5) {
                // 0x406ab0
                v9 = v10;
                v10 = v9 - 8;
                *(int64_t *)v9 = *(int64_t *)v10;
                v8 = 0;
            }
        }
    } else {
        int64_t v11 = v5 - 8; // 0x406ae0
        int64_t v12 = *(int64_t *)(v7 + v11); // 0x406ae0
        v8 = v7;
        if (v12 > a2) {
            *(int64_t *)(v7 + v5) = v12;
            int64_t v13 = v7 - 8; // 0x406af4
            uint64_t v14 = *(int64_t *)(v13 + v11); // 0x406af8
            v8 = v13;
            int64_t v15 = v13; // 0x406b00
            while (v14 > a2) {
                // 0x406af0
                *(int64_t *)(v15 + v5) = v14;
                v13 = v15 - 8;
                v14 = *(int64_t *)(v13 + v11);
                v8 = v13;
                v15 = v13;
            }
        }
    }
    // 0x406ac3
    *(int64_t *)(v8 + v5) = a2;
    *v1 = *v1 + 1;
    // 0x406a4e
    return 1;
}
// Address range: 0x406b50 - 0x406c4b
int64_t function_406b50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 32; // 0x406b5e
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x406b6b
    int64_t v3 = *v2; // 0x406b6b
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)v1 = v3;
    int64_t size = 8 * v3; // 0x406b7e
    int64_t * mem = malloc((int32_t)size); // 0x406b86
    *(int64_t *)(a2 + 48) = (int64_t)mem;
    if (mem == NULL) {
        // 0x406bce
        return 12;
    }
    if (v3 >= 0 == (v3 != 0)) {
        int64_t v4 = 0; // 0x406ba0
        int64_t v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4); // 0x406bae
        int64_t v6 = size; // 0x406bc0
        int64_t v7; // 0x406bc5
        if ((*(char *)(size + 8 + 16 * v5) & 8) == 0) {
            // 0x406bc2
            v7 = function_4069b0(v1, v5);
            v6 = v1;
            if ((char)v7 == 0) {
                // 0x406bce
                return 12;
            }
        }
        // 0x406ba0
        v4++;
        int64_t v8 = v6; // 0x406ba8
        while (*v2 > v4) {
            // 0x406baa
            v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4);
            v6 = v8;
            if ((*(char *)(v8 + 8 + 16 * v5) & 8) == 0) {
                // 0x406bc2
                v7 = function_4069b0(v1, v5);
                v6 = v1;
                if ((char)v7 == 0) {
                    // 0x406bce
                    return 12;
                }
            }
            // 0x406ba0
            v4++;
            v8 = v6;
        }
    }
    int64_t v9 = 24 * (*(int64_t *)(a1 + 136) & a3) + *(int64_t *)(a1 + 64); // 0x406bf8
    int64_t * v10 = (int64_t *)v9; // 0x406bfc
    uint64_t v11 = *v10; // 0x406bfc
    int64_t * v12 = (int64_t *)(v9 + 16); // 0x406bff
    int64_t v13 = *v12; // 0x406bff
    int64_t v14 = v11 + 1; // 0x406c03
    int64_t * v15 = (int64_t *)(v9 + 8); // 0x406c07
    int64_t v16 = v13; // 0x406c0b
    int64_t v17 = v11; // 0x406c0b
    int64_t v18 = v14; // 0x406c0b
    if (*v15 <= v11) {
        int64_t * mem2 = realloc((int64_t *)v13, 16 * (int32_t)v14); // 0x406c30
        if (mem2 == NULL) {
            // 0x406bce
            return 12;
        }
        // 0x406c3a
        v16 = (int64_t)mem2;
        v17 = *v10;
        *v12 = v16;
        *v15 = 2 * v14;
        v18 = v17 + 1;
    }
    // 0x406c0d
    *v10 = v18;
    *(int64_t *)(8 * v17 + v16) = a2;
    return 0;
}
// Address range: 0x406c50 - 0x406c76
int64_t function_406c50(uint64_t a1, int64_t a2) {
    uint64_t wc = a1 % 256; // 0x406c55
    int32_t v1 = btowc((int32_t)wc); // 0x406c5f
    int64_t v2 = v1; // 0x406c5f
    int64_t result = v2; // 0x406c67
    if (v1 == -1) {
        // 0x406c69
        result = (a2 == 0 ? wc : v2) & 0xffffffff;
    }
    // 0x406c6f
    return result;
}
// Address range: 0x406c80 - 0x406d00
int64_t function_406c80(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x406c82
    int64_t v2 = *(int64_t *)(a1 + 64); // 0x406c87
    int64_t v3 = v2 - v1; // 0x406c87
    uint64_t v4 = v3 == 0 | v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0 ? v2 : v1; // 0x406c8f
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x406c94
    uint64_t v6 = *v5; // 0x406c94
    if (v4 <= v6) {
        // 0x406cf0
        *(int64_t *)(a1 + 56) = v6;
        int64_t result; // 0x406c80
        return result;
    }
    int32_t ** v7 = __ctype_toupper_loc(); // 0x406c9d
    int64_t v8 = v6; // 0x406ca2
    int64_t v9 = *(int64_t *)(a1 + 120); // 0x406cac
    int64_t v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40)); // 0x406cb7
    int64_t v11 = v10; // 0x406cbd
    if (v9 != 0) {
        // 0x406ce8
        v11 = (int64_t)*(char *)(v9 + v10);
    }
    int32_t v12 = *(int32_t *)(4 * v11 + (int64_t)*v7); // 0x406cc6
    *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
    v8++;
    while (v4 != v8) {
        // 0x406ca8
        v9 = *(int64_t *)(a1 + 120);
        v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40));
        v11 = v10;
        if (v9 != 0) {
            // 0x406ce8
            v11 = (int64_t)*(char *)(v9 + v10);
        }
        // 0x406cbf
        v12 = *(int32_t *)(4 * v11 + (int64_t)*v7);
        *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
        v8++;
    }
    // 0x406cd5
    *v5 = v4;
    *(int64_t *)(a1 + 56) = v4;
    return (int64_t)v7;
}
// Address range: 0x406d00 - 0x406ea6
int64_t function_406d00(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x406d0f
    int64_t v2 = *v1; // 0x406d0f
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x406d13
    int64_t v4 = *v3; // 0x406d13
    int64_t * v5 = (int64_t *)(a1 + 64); // 0x406d17
    int64_t v6 = *v5; // 0x406d17
    int64_t v7 = v6 - v2; // 0x406d17
    uint64_t v8 = v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0 ? v6 : v2; // 0x406d1b
    int64_t result; // 0x406d00
    if (v8 <= v4) {
        // 0x406db8
        *v3 = v4;
        *(int64_t *)(a1 + 56) = v4;
        return result;
    }
    int64_t * v9 = (int64_t *)(a1 + 120); // 0x406d30
    int64_t * v10 = (int64_t *)(a1 + 32);
    int64_t * v11 = (int64_t *)(a1 + 40);
    int32_t * v12 = (int32_t *)(a1 + 144);
    int64_t v13; // bp-104, 0x406d00
    int64_t v14 = &v13;
    int64_t v15 = v4; // 0x406d00
    int64_t v16; // 0x406d00
    int64_t v17; // 0x406d00
    int64_t v18; // 0x406d00
    int32_t v19; // bp-108, 0x406d00
    int64_t v20; // 0x406d37
    int64_t result2; // 0x406e78
    while (true) {
      lab_0x406d30:
        // 0x406d30
        v17 = v15;
        int64_t v21 = *v9; // 0x406d30
        v20 = *v10;
        int64_t v22 = v8 - v17; // 0x406d3b
        int64_t v23; // 0x406d00
        if (v21 != 0) {
            // 0x406e10
            v23 = v14;
            if (*v12 >= 1) {
                // 0x406e1e
                v23 = v14;
                int64_t v24 = 0; // 0x406e28
                int64_t v25 = v21; // 0x406e28
                if (v22 >= 0 == (v22 != 0)) {
                    int64_t v26 = v24 + v17;
                    unsigned char v27 = *(char *)(v26 + v25 + *v11); // 0x406e4e
                    char v28 = *(char *)(v25 + (int64_t)v27); // 0x406e51
                    *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                    *(char *)(v24 + v14) = v28;
                    int64_t v29 = v24 + 1; // 0x406e62
                    v23 = v14;
                    while (!((v22 == v29 | (v29 & 0xffffffff) >= (int64_t)*v12))) {
                        // 0x406e3d
                        v25 = *v9;
                        v26 = v29 + v17;
                        v27 = *(char *)(v26 + v25 + *v11);
                        v28 = *(char *)(v25 + (int64_t)v27);
                        *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                        *(char *)(v29 + v14) = v28;
                        v29++;
                        v23 = v14;
                    }
                }
            }
        } else {
            // 0x406d47
            v23 = v21 + v17 + *v11;
        }
        int64_t v30 = function_406400(&v19, v23, v22); // 0x406d59
        if (v30 < 0xffffffffffffffff) {
            // 0x406d68
            v16 = v30;
            v18 = v19;
            if (v30 == -2) {
                // 0x406e78
                result2 = *v1;
                if (*v5 < result2) {
                    // break -> 0x406e86
                    break;
                }
                goto lab_0x406dd0;
            } else {
                goto lab_0x406d76;
            }
        } else {
            goto lab_0x406dd0;
        }
    }
    // 0x406e86
    *v10 = v20;
    // 0x406db8
    *v3 = v17;
    *(int64_t *)(a1 + 56) = v17;
    return result2;
  lab_0x406dd0:;
    int64_t v31 = *v9; // 0x406dd3
    unsigned char v32 = *(char *)(v17 + (int64_t)&v19 + *v11); // 0x406dde
    int64_t v33 = v32; // 0x406dde
    v19 = v32;
    int64_t v34 = v33; // 0x406de8
    if (v31 != 0) {
        unsigned char v35 = *(char *)(v31 + v33); // 0x406e8f
        v19 = v35;
        v34 = v35;
    }
    // 0x406dee
    *v10 = v20;
    v16 = 1;
    v18 = v34;
    goto lab_0x406d76;
  lab_0x406d76:;
    int64_t v36 = v16;
    int64_t v37 = *(int64_t *)(a1 + 16); // 0x406d76
    int64_t v38 = v17 + 1; // 0x406d7a
    int64_t v39 = v37 + 4 * v17;
    *(int32_t *)v39 = (int32_t)v18;
    int64_t v40 = v36 + v17; // 0x406d89
    int64_t v41; // 0x406d00
    if (v38 < v40) {
        int64_t v42 = v39 + 4; // 0x406d9a
        *(int32_t *)v42 = -1;
        v42 += 4;
        while (v37 + 4 * v40 != v42) {
            // 0x406da0
            *(int32_t *)v42 = -1;
            v42 += 4;
        }
        // 0x406daf
        v15 = v40;
        result = v36;
        v41 = v40;
        if (v40 >= v8) {
            // 0x406db8
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    } else {
        // 0x406e00
        v15 = v38;
        result = v36;
        v41 = v38;
        if (v38 >= v8) {
            // 0x406db8
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    }
    // 0x406d30
    goto lab_0x406d30;
}
// Address range: 0x406eb0 - 0x4074ad
int64_t function_406eb0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x406ec1
    int64_t v2 = *v1; // 0x406ec1
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x406ec5
    int64_t v4 = *v3; // 0x406ec5
    int64_t v5 = v4 - v2; // 0x406ec5
    int64_t v6 = v5 == 0 | v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0 ? v4 : v2; // 0x406ec9
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x406ed5
    int64_t v8 = *v7; // 0x406ed5
    int64_t * v9; // 0x406eb0
    int64_t * v10; // 0x406eb0
    int64_t v11; // 0x406eb0
    int64_t v12; // 0x406eb0
    int64_t v13; // 0x406eb0
    int64_t v14; // 0x406eb0
    int64_t v15; // 0x406eb0
    int64_t v16; // 0x406eb0
    int64_t v17; // 0x406eb0
    int64_t v18; // 0x406eb0
    int64_t v19; // 0x406eb0
    int64_t v20; // 0x406eb0
    int64_t wstr; // bp-120, 0x406eb0
    struct _TYPEDEF___mbstate_t * v21; // bp-132, 0x406eb0
    int32_t * v22; // 0x406eb0
    int64_t v23; // 0x406eb0
    int64_t * v24; // 0x407070
    int64_t * v25; // 0x406eb0
    int64_t * v26; // 0x406eb0
    int64_t * v27; // 0x406eb0
    int64_t v28; // 0x40707a
    int64_t v29; // 0x4070a7
    if (*(char *)(a1 + 138) != 0) {
        goto lab_0x406ee6;
    } else {
        int64_t * v30 = (int64_t *)(a1 + 120);
        if (*v30 == 0) {
            // 0x407050
            if (*(char *)(a1 + 140) != 0) {
                goto lab_0x406ee6;
            } else {
                // 0x40705d
                v16 = v8;
                if (v8 < v6) {
                    while (true) {
                      lab_0x407070:
                        // 0x407070
                        v14 = v13;
                        v28 = v14 + v19 + *v24;
                        unsigned char v31 = *(char *)v28; // 0x40707d
                        if (v31 <= -1) {
                            goto lab_0x407099;
                        } else {
                            // 0x407088
                            struct _TYPEDEF___mbstate_t * ps; // 0x40706a
                            if (mbsinit(ps) != 0) {
                                int32_t v32 = *(int32_t *)(4 * (int64_t)v31 + (int64_t)*__ctype_toupper_loc()); // 0x4071a4
                                *(char *)(*v25 + v14) = (char)v32;
                                unsigned char v33 = *(char *)(*v25 + v14); // 0x4071b4
                                *(int32_t *)(*v26 + 4 * v14) = (int32_t)v33;
                                int64_t v34; // 0x406eb0
                                v20 = v34;
                                v15 = v14 + 1;
                                goto lab_0x40715a;
                            } else {
                                goto lab_0x407099;
                            }
                        }
                    }
                  lab_0x407290:
                    // 0x407290
                    v10 = v30;
                    v9 = v27;
                    v22 = (int32_t *)&v21;
                    v23 = v29;
                    v17 = v6;
                    v18 = &wstr;
                    v11 = v14;
                    v12 = v14;
                    goto lab_0x406f10;
                } else {
                    goto lab_0x407163;
                }
            }
        } else {
            goto lab_0x406ee6;
        }
    }
  lab_0x407163:
    // 0x407163
    *v7 = v16;
    *(int64_t *)(a1 + 56) = v16;
    // 0x40703a
    return 0;
  lab_0x406eea:;
    // 0x406eea
    int64_t v35; // 0x406eb0
    int64_t v36 = v35;
    int64_t v37; // 0x406eb0
    int64_t v38 = v37;
    int64_t v39; // 0x406eb0
    int64_t v40 = v39;
    int64_t v41 = v38; // 0x406eed
    int64_t v42 = v36; // 0x406eed
    int64_t v43; // 0x406eb0
    if (v40 > v36) {
        // 0x406ef3
        v10 = (int64_t *)(a1 + 120);
        v9 = (int64_t *)(a1 + 32);
        v22 = (int32_t *)&v21;
        v23 = v40 - v36;
        v17 = v40;
        v18 = v43;
        v11 = v38;
        v12 = v36;
        goto lab_0x406f10;
    } else {
        goto lab_0x407030;
    }
  lab_0x407099:
    // 0x407099
    v29 = v6 - v14;
    int32_t ps2 = (int32_t)*v27; // bp-128, 0x4070aa
    uint64_t v44 = function_406400((int32_t *)&v21, v28, v29); // 0x4070c1
    if (v44 < 0xfffffffffffffffe) {
        int32_t wc = (int64_t)v21; // 0x4070d7
        int32_t wc2 = towupper(wc); // 0x4070dd
        int64_t v45; // 0x407117
        if (wc2 == wc) {
            int64_t v46 = *v25; // 0x407178
            int64_t v47 = *v24; // 0x40717c
            int64_t v48 = v46 + v14; // 0x407186
            memcpy((int64_t *)v48, (int64_t *)(v47 + v14 + v48), (int32_t)v44);
        } else {
            int32_t v49 = wcrtomb((char *)&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x4070fd
            if (v44 != (int64_t)v49) {
                // break -> 0x407290
                goto lab_0x407290;
            }
            // 0x40710b
            v45 = *v25 + v14;
            memcpy((int64_t *)v45, &wstr, (int32_t)v44);
        }
        int64_t v50 = v45;
        int64_t v51 = *v26; // 0x40711f
        int64_t v52 = v14 + 1; // 0x40712b
        int64_t v53 = v51 + 4 * v14;
        *(int32_t *)v53 = wc2;
        int64_t v54 = v44 + v14; // 0x407133
        v20 = v50;
        v15 = v52;
        if (v52 < v54) {
            int64_t v55 = v53 + 4; // 0x407144
            *(int32_t *)v55 = -1;
            v55 += 4;
            v20 = v50;
            v15 = v54;
            while (v51 + 4 * v54 != v55) {
                // 0x407148
                *(int32_t *)v55 = -1;
                v55 += 4;
                v20 = v50;
                v15 = v54;
            }
        }
    } else {
        int64_t v56; // 0x406eb0
        if (v44 != -2) {
            unsigned char v57 = *(char *)(v14 + v56 + *v24); // 0x40720f
            *(char *)(*v25 + v14) = v57;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v57;
            *v27 = (int64_t)ps2;
            v20 = v56;
            v15 = v14 + 1;
        } else {
            // 0x4071ce
            if (*v3 < *v1) {
                // 0x407447
                *v27 = (int64_t)ps2;
                v16 = v14;
                goto lab_0x407163;
            }
            unsigned char v58 = *(char *)(v14 + v56 + *v24); // 0x4071ea
            *(char *)(*v25 + v14) = v58;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v58;
            v20 = v56;
            v15 = v14 + 1;
        }
    }
    goto lab_0x40715a;
  lab_0x40715a:
    // 0x40715a
    v19 = v20;
    v13 = v15;
    v16 = v15;
    if (v6 <= v15) {
        goto lab_0x407163;
    }
    goto lab_0x407070;
  lab_0x406ee6:
    // 0x406ee6
    v39 = v6;
    v43 = a1;
    v37 = *(int64_t *)(a1 + 56);
    v35 = v8;
    goto lab_0x406eea;
  lab_0x407030:
    // 0x407030
    *v7 = v42;
    *(int64_t *)(a1 + 56) = v41;
    // 0x40703a
    return 0;
  lab_0x406f10:;
    int64_t v59 = v12;
    int64_t v60 = v11;
    int64_t v61 = v17;
    int64_t v62 = v23;
    int64_t * v63 = v9;
    int64_t * v64 = v10;
    int64_t v65 = *v64; // 0x406f14
    ps2 = (int32_t)*v63;
    int64_t v66; // 0x406eb0
    if (v65 != 0) {
        int32_t v67 = *(int32_t *)(a1 + 144); // 0x40722f
        if (v62 < 1 || v67 < 1) {
            // 0x40722f
            v66 = &wstr;
        } else {
            int64_t v68 = &wstr;
            int64_t v69 = 2 * (*(int64_t *)(a1 + 40) + v60); // 0x40725c
            int64_t v70 = 0;
            char v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69)); // 0x407270
            *(char *)(v70 + v68) = v71;
            v66 = v68;
            while (v70 != (int64_t)(v67 - 1)) {
                int64_t v72 = v70 + 1; // 0x407261
                v66 = v68;
                if (v62 == v72) {
                    // break -> 0x406f35
                    break;
                }
                v70 = v72;
                v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69));
                *(char *)(v70 + v68) = v71;
                v66 = v68;
            }
        }
    } else {
        // 0x406f26
        v66 = v60 + v18 + *(int64_t *)(a1 + 40);
    }
    int64_t v73 = v66;
    uint64_t v74 = function_406400(v22, v73, v62); // 0x406f48
    int64_t v75; // 0x406eb0
    int32_t wc4; // 0x406f63
    if (v74 < 0xfffffffffffffffe) {
        int32_t wc3 = (int64_t)v21; // 0x406f5e
        wc4 = towupper(wc3);
        if (wc4 == wc3) {
            goto lab_0x407298;
        } else {
            int32_t v76 = wcrtomb((char *)&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x406f91
            int64_t v77 = v76; // 0x406f91
            if (v74 != v77) {
                if (v76 == -1) {
                    goto lab_0x407298;
                } else {
                    int64_t v78 = v59 + v77; // 0x40736b
                    uint64_t v79 = *v3; // 0x407376
                    if (v78 > v79) {
                        goto lab_0x40701f;
                    } else {
                        int64_t * v80 = (int64_t *)(a1 + 24); // 0x407383
                        int64_t v81 = *v80; // 0x407383
                        int64_t v82 = v81; // 0x407388
                        if (v81 == 0) {
                            int64_t * mem = malloc(8 * (int32_t)v79); // 0x407467
                            int64_t v83 = (int64_t)mem; // 0x407467
                            *v80 = v83;
                            v82 = v83;
                            if (mem == NULL) {
                                // 0x40703a
                                return 12;
                            }
                        }
                        char * v84 = (char *)(a1 + 140); // 0x40738e
                        if (*v84 == 0) {
                            int64_t v85 = v82; // 0x40739d
                            if (v59 != 0) {
                                int64_t v86 = 0;
                                *(int64_t *)(8 * v86 + v85) = v86;
                                int64_t v87 = v86 + 1; // 0x4073a7
                                while (v59 != v87) {
                                    // 0x4073a3
                                    v86 = v87;
                                    *(int64_t *)(8 * v86 + v85) = v86;
                                    v87 = v86 + 1;
                                }
                            }
                            // 0x4073b0
                            *v84 = 1;
                        }
                        // 0x4073b8
                        memcpy((int64_t *)(*(int64_t *)(a1 + 8) + v59), &wstr, v76);
                        int64_t v88 = v74 - 1; // 0x4073d8
                        int64_t v89 = *(int64_t *)(a1 + 16) + 4 * v59; // 0x4073dc
                        *(int32_t *)v89 = wc4;
                        int64_t v90 = *v80 + 8 * v59; // 0x4073e7
                        *(int64_t *)v90 = v60;
                        if (v76 >= 2) {
                            uint64_t v91 = 1;
                            int64_t v92 = v91 >= v74 ? v88 : v91; // 0x4073ff
                            *(int64_t *)(8 * v91 + v90) = v92 + v60;
                            *(int32_t *)(4 * v91 + v89) = -1;
                            int64_t v93 = v91 + 1; // 0x407411
                            while (v93 != v77) {
                                // 0x4073f9
                                v91 = v93;
                                v92 = v91 >= v74 ? v88 : v91;
                                *(int64_t *)(8 * v91 + v90) = v92 + v60;
                                *(int32_t *)(4 * v91 + v89) = -1;
                                v93 = v91 + 1;
                            }
                        }
                        int64_t v94 = v77 - v74; // 0x40741e
                        int64_t v95 = *v1 + v94; // 0x407421
                        *v1 = v95;
                        if (v60 < *(int64_t *)(a1 + 96)) {
                            int64_t * v96 = (int64_t *)(a1 + 104); // 0x40742e
                            *v96 = *v96 + v94;
                        }
                        int64_t v97 = *v3; // 0x407432
                        int64_t v98 = v97 - v95; // 0x407432
                        int64_t v99 = v98 == 0 | v98 < 0 != ((v98 ^ v97) & (v97 ^ v95)) < 0 ? v97 : v95; // 0x40743a
                        v39 = v99;
                        v43 = v88;
                        v37 = v74 + v60;
                        v35 = v78;
                        goto lab_0x406eea;
                    }
                }
            } else {
                int64_t v100 = *(int64_t *)(a1 + 8) + v59; // 0x406fb9
                memcpy((int64_t *)v100, &wstr, (int32_t)v74);
                v75 = v100;
                goto lab_0x406fc5;
            }
        }
    } else {
        if (v74 != -2) {
            goto lab_0x4072cd;
        } else {
            // 0x4072bf
            if (*v3 < *v1) {
                goto lab_0x40701f;
            } else {
                goto lab_0x4072cd;
            }
        }
    }
  lab_0x407298:;
    int64_t v101 = *(int64_t *)(a1 + 8) + v59; // 0x4072a8
    memcpy((int64_t *)v101, (int64_t *)v73, (int32_t)v74);
    v75 = v101;
    goto lab_0x406fc5;
  lab_0x4072cd:;
    int64_t v114 = (int64_t)&v21; // 0x406f43
    int64_t v115 = *v64; // 0x4072d0
    int64_t v116 = (int64_t)*(char *)(v60 + v114 + *(int64_t *)(a1 + 40)); // 0x4072db
    int64_t v117 = v116; // 0x4072e1
    if (v115 != 0) {
        // 0x4074a4
        v117 = (int64_t)*(char *)(v115 + v116);
    }
    // 0x4072e7
    *(char *)(*(int64_t *)(a1 + 8) + v59) = (char)v117;
    if (*(char *)(a1 + 140) != 0) {
        // 0x407497
        *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v59) = v60;
    }
    int64_t v118 = *(int64_t *)(a1 + 16); // 0x407300
    int64_t v119 = v60 + 1; // 0x407304
    int64_t v120 = v59 + 1; // 0x407308
    *(int32_t *)(v118 + 4 * v59) = (int32_t)v117;
    v39 = v61;
    v43 = v114;
    v37 = v119;
    v35 = v120;
    if (v74 == -1) {
        // 0x407319
        *v63 = (int64_t)ps2;
        v39 = v61;
        v43 = v114;
        v37 = v119;
        v35 = v120;
    }
    goto lab_0x406eea;
  lab_0x406fc5:;
    int64_t v102 = v75;
    int64_t v103; // 0x406eb0
    if (*(char *)(a1 + 140) != 0) {
        // 0x407330
        v103 = v60;
        if (v74 != 0) {
            int64_t v104 = v74 + v60; // 0x407343
            int64_t v105 = v59 - v60; // 0x407348
            int64_t v106 = v60;
            *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
            int64_t v107 = v106 + 1; // 0x407353
            v103 = v104;
            while (v104 != v107) {
                // 0x40734f
                v106 = v107;
                *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
                v107 = v106 + 1;
                v103 = v104;
            }
        }
    } else {
        // 0x406fd3
        v103 = v74 + v60;
    }
    int64_t v108 = v103;
    int64_t v109 = *(int64_t *)(a1 + 16); // 0x406fda
    int64_t v110 = v59 + 1; // 0x406fde
    int64_t v111 = v74 + v59; // 0x406fe2
    int64_t v112 = v109 + 4 * v59;
    *(int32_t *)v112 = wc4;
    v39 = v61;
    v43 = v102;
    v37 = v108;
    v35 = v110;
    if (v110 < v111) {
        int64_t v113 = v112 + 4; // 0x407004
        while (true) {
            // 0x407008
            *(int32_t *)v113 = -1;
            v113 += 4;
            v39 = v61;
            v43 = v102;
            v37 = v108;
            v35 = v111;
            if (v109 + 4 * v111 == v113) {
                goto lab_0x406eea;
            }
        }
    }
    goto lab_0x406eea;
  lab_0x40701f:
    // 0x40701f
    *v63 = (int64_t)ps2;
    v41 = v60;
    v42 = v59;
    goto lab_0x407030;
}
// Address range: 0x4074b0 - 0x4075fe
int64_t function_4074b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x4074c0
    uint64_t v2 = *v1; // 0x4074c0
    if (v2 >= 0xfffffffffffffff) {
        // 0x40755b
        return 12;
    }
    int64_t * v3 = (int64_t *)(a1 + 88); // 0x4074cd
    int64_t v4 = *v3; // 0x4074cd
    int64_t v5 = 2 * v2; // 0x4074d1
    int64_t v6 = 0x100000000 * a2 >> 32; // 0x4074d4
    int64_t v7 = v5 - v4; // 0x4074da
    int64_t v8 = v7 < 0 == ((v7 ^ v5) & (v4 ^ v5)) < 0 == (v7 != 0) ? v4 : v5; // 0x4074dd
    int64_t v9 = v8 - v6; // 0x4074e1
    int64_t v10 = function_406910(a1, v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v8 : v6); // 0x4074e8
    int64_t result = v10 & 0xffffffff; // 0x4074ed
    if ((int32_t)v10 != 0) {
        // 0x40755b
        return result;
    }
    int64_t * v11 = (int64_t *)(a1 + 184); // 0x4074f3
    int64_t v12 = *v11; // 0x4074f3
    if (v12 != 0) {
        int64_t * mem = realloc((int64_t *)v12, 8 * (int32_t)*v1 + 8); // 0x40750b
        if (mem == NULL) {
            // 0x40755b
            return 12;
        }
        // 0x407519
        *v11 = (int64_t)mem;
    }
    int32_t v13 = *(int32_t *)(a1 + 144); // 0x407527
    if (*(char *)(a1 + 136) != 0) {
        if (v13 >= 2) {
            // 0x40753b
            return function_406eb0(a1);
        }
        // 0x4075d8
        function_406c80(a1);
        return result;
    }
    if (v13 > 1) {
        // 0x4075c0
        function_406d00(a1);
        return result;
    }
    int64_t * v14 = (int64_t *)(a1 + 120); // 0x40756d
    int64_t v15 = *v14; // 0x40756d
    if (v15 == 0) {
        // 0x40755b
        return result;
    }
    int64_t v16 = *v3; // 0x407576
    int64_t * v17 = (int64_t *)(a1 + 48); // 0x40757a
    uint64_t v18 = *v17; // 0x40757a
    int64_t v19 = *v1; // 0x40757e
    int64_t v20 = v19 - v16; // 0x40757e
    uint64_t v21 = v20 == 0 | v20 < 0 != ((v20 ^ v19) & (v19 ^ v16)) < 0 ? v19 : v16; // 0x407582
    if (v21 <= v18) {
        // 0x40758c
        *(int64_t *)(a1 + 56) = v18;
        // 0x40755b
        return result;
    }
    int64_t * v22 = (int64_t *)(a1 + 40); // 0x40759a
    unsigned char v23 = *(char *)(v18 + v12 + *v22); // 0x40759e
    int64_t * v24 = (int64_t *)(a1 + 8); // 0x4075a5
    *(char *)(*v24 + v18) = *(char *)(v15 + (int64_t)v23);
    int64_t v25 = v18 + 1; // 0x4075ac
    int64_t v26 = v25; // 0x4075b3
    if (v21 != v25) {
        unsigned char v27 = *(char *)(v26 + v12 + *v22); // 0x40759e
        *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
        v26++;
        while (v21 != v26) {
            // 0x407590
            v27 = *(char *)(v26 + v12 + *v22);
            *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
            v26++;
        }
    }
    // 0x4075b5
    *v17 = v21;
    *(int64_t *)(a1 + 56) = v21;
    // 0x40755b
    return result;
}
// Address range: 0x407600 - 0x407686
int64_t function_407600(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x407607
    int64_t * v2 = (int64_t *)(a1 + 192); // 0x40760e
    int64_t v3 = *v2; // 0x40760e
    if (v1 > a2) {
        goto lab_0x407640;
    } else {
        // 0x40761a
        if (v1 < *(int64_t *)(a1 + 88)) {
            int64_t result = function_4074b0(a1, a2 + 1 & 0xffffffff); // 0x407626
            if ((int32_t)result != 0) {
                // 0x407636
                return result;
            }
            goto lab_0x40762f;
        } else {
            goto lab_0x407640;
        }
    }
  lab_0x407640:;
    uint64_t v4 = *(int64_t *)(a1 + 48); // 0x407640
    if (v4 <= a2) {
        // 0x407649
        if (v4 < *(int64_t *)(a1 + 88)) {
            int64_t result2 = function_4074b0(a1, a2 + 1 & 0xffffffff); // 0x407655
            if ((int32_t)result2 != 0) {
                // 0x407636
                return result2;
            }
        }
    }
    goto lab_0x40762f;
  lab_0x40762f:
    // 0x40762f
    if (v3 < a2) {
        int64_t v5 = *(int64_t *)(a1 + 184); // 0x407660
        memset((int64_t *)(8 * v3 + 8 + v5), 0, 8 * (int32_t)(a2 - v3));
        *v2 = a2;
    }
    // 0x407636
    return 0;
}
// Address range: 0x407690 - 0x4076ae
int64_t function_407690(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x407697
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g81;
}
// Address range: 0x4076b0 - 0x4076d8
int64_t function_4076b0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 + 8) & 0x400ff; // 0x4076b3
    switch (result) {
        case 6: {
            // 0x4076c8
            return function_407690(a1);
        }
        case 3: {
            // 0x4076d0
            free((int64_t *)a1);
            return &g81;
        }
    }
    // 0x4076c2
    return result;
}
// Address range: 0x4076e0 - 0x4076f4
int64_t function_4076e0(int64_t a1, int64_t a2) {
    // 0x4076e0
    function_4076b0(a2 + 40);
    return 0;
}
// Address range: 0x407700 - 0x4078ce
int64_t function_407700(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407700
    int128_t v1; // 0x407700
    int128_t v2 = v1;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x407714
    uint64_t v4 = *v3; // 0x407714
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x407718
    uint64_t v6 = *v5; // 0x407718
    int64_t v7; // 0x407700
    int64_t v8; // 0x407700
    int64_t v9; // 0x407700
    if (v4 >= v6) {
        uint64_t v10 = 2 * v6; // 0x4077da
        if (v10 >= 0xaaaaaaaaaaaaaab) {
            // 0x4077b8
            return -1;
        }
        int32_t v11 = v6;
        int64_t * mem = realloc((int64_t *)v4, 32 * v11); // 0x4077f7
        if (mem == NULL) {
            // 0x4077b8
            return -1;
        }
        // 0x407805
        *(int64_t *)a1 = (int64_t)mem;
        int64_t * v12 = (int64_t *)(a1 + 24); // 0x40780b
        int32_t v13 = 16 * v11; // 0x40781d
        int64_t * mem2 = realloc((int64_t *)*v12, v13); // 0x40781d
        int64_t * v14 = (int64_t *)(a1 + 32); // 0x407822
        int64_t * mem3 = realloc((int64_t *)*v14, v13); // 0x40782c
        int64_t * v15 = (int64_t *)(a1 + 40); // 0x407831
        int32_t v16 = 48 * v11; // 0x40783c
        int64_t * mem4 = realloc((int64_t *)*v15, v16); // 0x40783c
        int64_t * v17 = (int64_t *)(a1 + 48); // 0x407841
        int64_t * mem5 = realloc((int64_t *)*v17, v16); // 0x40784b
        if (mem2 == NULL | mem3 == NULL || mem4 == NULL || mem5 == NULL) {
            // 0x407890
            free(mem2);
            free(mem3);
            free(mem4);
            free(mem5);
            // 0x4077b8
            return -1;
        }
        int64_t v18 = (int64_t)mem2; // 0x40781d
        int64_t v19 = (int64_t)mem4; // 0x40783c
        *v12 = v18;
        *v14 = (int64_t)mem3;
        *v15 = v19;
        *v17 = (int64_t)mem5;
        *v5 = v10;
        v9 = *v3;
        v7 = v18;
        v8 = v19;
    } else {
        // 0x407725
        v9 = v4;
        v7 = *(int64_t *)(a1 + 24);
        v8 = *(int64_t *)(a1 + 40);
    }
    int64_t v20 = 17 * v9; // 0x40773c
    char v21 = a3; // 0x40773f
    int64_t v22 = v20 + 8; // 0x407742
    *(int64_t *)v22 = a3;
    *(int64_t *)v20 = a2;
    *(int32_t *)v22 = (int32_t)a3 & -0x3ff01;
    bool v23 = v21 == 6; // 0x407752
    if (v21 == 5) {
        int32_t v24 = *(int32_t *)(a1 + 180); // 0x407754
        int32_t v25 = v24 - 1; // 0x407754
        v23 = v25 < 0 == (v24 & -v24) < 0 == (v25 != 0);
    }
    char * v26 = (char *)(v20 + 10); // 0x40775e
    int128_t v27 = __asm_pxor(v2, v2); // 0x407765
    *v26 = 16 * (char)v23 | *v26 & -17;
    *(int64_t *)(v7 + 8 * v9) = -1;
    int64_t v28 = 24 * *v3 + v8; // 0x407781
    __asm_movups(*(int128_t *)v28, v27);
    *(int64_t *)(v28 + 16) = 0;
    int64_t v29 = *(int64_t *)(a1 + 48) + 24 * *v3; // 0x40779d
    __asm_movups(*(int128_t *)v29, v27);
    *(int64_t *)(v29 + 16) = 0;
    int64_t result = *v3; // 0x4077ac
    *v3 = result + 1;
    // 0x4077b8
    return result;
}
// Address range: 0x4078d0 - 0x40796f
int64_t function_4078d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 16 * a2; // 0x4078d7
    int64_t v2 = v1 + a1;
    int64_t result = function_407700(a1, *(int64_t *)v2, *(int64_t *)(v2 + 8)); // 0x4078f6
    if (result != -1) {
        int64_t v3 = a3 & 0xffffffff; // 0x4078db
        int64_t v4 = 16 * result + v3; // 0x407915
        int32_t v5 = 256 * (int32_t)a3; // 0x407918
        int32_t * v6 = (int32_t *)(v4 + 8); // 0x407923
        int32_t v7 = *v6 & -0x3ff01; // 0x407926
        *v6 = v7 | v5 & 0x3ff00;
        uint32_t v8 = (*(int32_t *)((v1 | 8) + v3) | v5) & 0x3ff00 | v7; // 0x40794a
        *v6 = v8;
        *(char *)(v4 + 10) = (char)(v8 / 0x10000) | 4;
        *(int64_t *)(*(int64_t *)(a1 + 32) + 8 * result) = a2;
    }
    // 0x407964
    return result;
}
// Address range: 0x407970 - 0x407bf4
int64_t function_407970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 40);
    int64_t * v2 = (int64_t *)(a1 + 24);
    int64_t v3 = a1; // 0x40798a
    int64_t v4 = a2; // 0x40798a
    int64_t v5 = a3; // 0x40798a
    int64_t v6 = a5 & 0xffffffff;
    int32_t v7 = v6;
    int64_t v8; // 0x407970
    int64_t v9; // 0x407970
    int64_t v10; // 0x407970
    int64_t v11; // 0x407970
    int64_t result; // 0x407970
    int64_t v12; // 0x407970
    int64_t v13; // 0x407970
    int64_t v14; // 0x407970
    int64_t v15; // 0x407970
    int64_t v16; // 0x407b24
    int64_t v17; // 0x407b28
    int64_t v18; // 0x407b28
    int64_t v19; // 0x407b3f
    int64_t v20; // 0x4079b1
    int64_t v21; // 0x4079b5
    int64_t v22; // 0x4079b9
    int64_t v23; // 0x407b55
    int64_t v24; // 0x407bc8
    int64_t v25; // 0x4079cf
    int64_t v26; // 0x4079d3
    int64_t v27; // 0x4079eb
    int64_t v28; // 0x4079ef
    int64_t v29; // 0x4079f6
    int64_t v30; // 0x4079fa
    int64_t v31; // 0x407b79
    int64_t v32; // 0x407970
    int64_t v33; // 0x407bb3
    int64_t v34; // 0x407a28
    int64_t v35; // 0x407a2b
    int64_t v36; // 0x407995
    int64_t v37; // 0x4079a3
    while (true) {
        // 0x40798f
        v8 = v5;
        v10 = v4;
        v13 = v3;
        v36 = *v1;
        v37 = v13 + 8 + 16 * v10;
        if (*(char *)v37 == 4) {
            // 0x407b10
            v16 = 24 * v8;
            v17 = 8 * v10;
            v18 = *(int64_t *)(*v2 + v17);
            *(int64_t *)(v36 + 8 + v16) = 0;
            v19 = function_4078d0(a1, v18, v6);
            if (v19 == -1) {
                return 12;
            }
            // 0x407b55
            v23 = *v2;
            *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
            v15 = v18;
            v12 = v16;
            v9 = v19;
            goto lab_0x407a8a;
        } else {
            // 0x4079ad
            v20 = 24 * v10;
            v21 = v36 + v20;
            v22 = *(int64_t *)(v21 + 8);
            if (v22 == 0) {
                // 0x407bc8
                v24 = *v2;
                *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                result = 0;
                return result;
            }
            // 0x4079c6
            v25 = 24 * v8;
            v26 = v36 + v25;
            v4 = *(int64_t *)*(int64_t *)(v21 + 16);
            *(int64_t *)(v26 + 8) = 0;
            if (v22 == 1) {
                // break -> 0x407ac0
                break;
            }
            // 0x4079eb
            v27 = *(int64_t *)(a1 + 16);
            v28 = v27 - 1;
            v29 = 16 * v28;
            v30 = v29 + v13;
            if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                // 0x407a10
                v32 = 16 * v27 - 32 - v29;
                v14 = v28;
                v11 = v30;
                if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                    // 0x407a48
                    if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                        // 0x407a59
                        if ((char)function_406a20(v26, v14) == 0) {
                            return 12;
                        } else {
                            goto lab_0x407a62;
                        }
                    }
                }
                // 0x407a28
                v34 = v32 + v11;
                v35 = v14 - 1;
                while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                    // 0x407a42
                    v14 = v35;
                    v11 = v34;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x407a48
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x407a59
                            if ((char)function_406a20(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x407a62;
                            }
                        }
                    }
                    // 0x407a28
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                }
            }
            // 0x407b70
            v31 = function_4078d0(a1, v4, v6);
            if (v31 == -1) {
                return 12;
            }
            // 0x407b8b
            if ((char)function_406a20(*v1 + v25, v31) == 0) {
                return 12;
            }
            // 0x407ba2
            v33 = function_407970(a1, v4, v31, a4, v6);
            result = v33;
            if ((int32_t)v33 != 0) {
                // 0x407aaa
                return result;
            }
            goto lab_0x407a62;
        }
    }
    if (v10 == a4 == (v10 != v8)) {
        // 0x407bdb
        result = 0;
        if ((char)function_406a20(v26, v4) != 0) {
            return result;
        } else {
            return 12;
        }
    }
    int64_t v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7); // 0x407ae1
    v5 = function_4078d0(a1, v4, v38);
    while (v5 != -1) {
        // 0x407af5
        v3 = *v1 + v25;
        if ((char)function_406a20(v3, v5) == 0) {
            // break -> 0x407aa5
            break;
        }
        v6 = v38;
        v7 = v6;
        while (true) {
            // 0x40798f
            v8 = v5;
            v10 = v4;
            v13 = v3;
            v36 = *v1;
            v37 = v13 + 8 + 16 * v10;
            if (*(char *)v37 == 4) {
                // 0x407b10
                v16 = 24 * v8;
                v17 = 8 * v10;
                v18 = *(int64_t *)(*v2 + v17);
                *(int64_t *)(v36 + 8 + v16) = 0;
                v19 = function_4078d0(a1, v18, v6);
                if (v19 == -1) {
                    return 12;
                }
                // 0x407b55
                v23 = *v2;
                *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
                v15 = v18;
                v12 = v16;
                v9 = v19;
                goto lab_0x407a8a;
            } else {
                // 0x4079ad
                v20 = 24 * v10;
                v21 = v36 + v20;
                v22 = *(int64_t *)(v21 + 8);
                if (v22 == 0) {
                    // 0x407bc8
                    v24 = *v2;
                    *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                    result = 0;
                    return result;
                }
                // 0x4079c6
                v25 = 24 * v8;
                v26 = v36 + v25;
                v4 = *(int64_t *)*(int64_t *)(v21 + 16);
                *(int64_t *)(v26 + 8) = 0;
                if (v22 == 1) {
                    // break -> 0x407ac0
                    break;
                }
                // 0x4079eb
                v27 = *(int64_t *)(a1 + 16);
                v28 = v27 - 1;
                v29 = 16 * v28;
                v30 = v29 + v13;
                if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                    // 0x407a10
                    v32 = 16 * v27 - 32 - v29;
                    v14 = v28;
                    v11 = v30;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x407a48
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x407a59
                            if ((char)function_406a20(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x407a62;
                            }
                        }
                    }
                    // 0x407a28
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                    while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                        // 0x407a42
                        v14 = v35;
                        v11 = v34;
                        if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                            // 0x407a48
                            if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                                // 0x407a59
                                if ((char)function_406a20(v26, v14) == 0) {
                                    return 12;
                                } else {
                                    goto lab_0x407a62;
                                }
                            }
                        }
                        // 0x407a28
                        v34 = v32 + v11;
                        v35 = v14 - 1;
                    }
                }
                // 0x407b70
                v31 = function_4078d0(a1, v4, v6);
                if (v31 == -1) {
                    return 12;
                }
                // 0x407b8b
                if ((char)function_406a20(*v1 + v25, v31) == 0) {
                    return 12;
                }
                // 0x407ba2
                v33 = function_407970(a1, v4, v31, a4, v6);
                result = v33;
                if ((int32_t)v33 != 0) {
                    // 0x407aaa
                    return result;
                }
                goto lab_0x407a62;
            }
        }
        if (v10 == a4 == (v10 != v8)) {
            // 0x407bdb
            result = 0;
            if ((char)function_406a20(v26, v4) != 0) {
                return result;
            } else {
                return 12;
            }
        }
        // 0x407ad0
        v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7);
        v5 = function_4078d0(a1, v4, v38);
    }
  lab_0x407aa5_5:
    // 0x407aaa
    return 12;
  lab_0x407a8a:;
    int64_t v39 = *v1 + v12; // 0x407a91
    if ((char)function_406a20(v39, v9) == 0) {
        return 12;
    }
    goto lab_0x40798f;
  lab_0x407a62:;
    int64_t v40 = *(int64_t *)(*(int64_t *)(v20 + 16 + *v1) + 8); // 0x407a71
    int64_t v41 = function_4078d0(a1, v40, v6); // 0x407a7c
    v15 = v40;
    v12 = v25;
    v9 = v41;
    if (v41 == -1) {
        // break (via goto) -> 0x407aa5
        goto lab_0x407aa5_5;
    }
    goto lab_0x407a8a;
}
// Address range: 0x407c00 - 0x407c59
int64_t function_407c00(int64_t a1) {
    // 0x407c00
    free((int64_t *)*(int64_t *)(a1 + 48));
    free((int64_t *)*(int64_t *)(a1 + 72));
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x407c16
    int64_t v2 = *v1; // 0x407c16
    if (v2 != a1 + 8) {
        // 0x407c23
        free((int64_t *)*(int64_t *)(v2 + 16));
        free((int64_t *)*v1);
    }
    // 0x407c35
    free((int64_t *)*(int64_t *)(a1 + 24));
    free((int64_t *)*(int64_t *)(a1 + 96));
    free((int64_t *)*(int64_t *)(a1 + 88));
    free((int64_t *)a1);
    return &g81;
}
// Address range: 0x407c60 - 0x407c92
int64_t function_407c60(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    free((int64_t *)*(int64_t *)(v1 + 16));
    free((int64_t *)*(int64_t *)(v1 + 24));
    if (*(char *)(v1 + 139) == 0) {
        // 0x407c7f
        return &g81;
    }
    // 0x407c88
    free((int64_t *)*(int64_t *)(v1 + 8));
    return &g81;
}
// Address range: 0x407ca0 - 0x407d58
int64_t function_407ca0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 232); // 0x407cab
    if (*v2 < 1) {
        // 0x407d39
        *v2 = 0;
        *(int64_t *)(v1 + 200) = 0;
        int64_t result; // 0x407ca0
        return result;
    }
    int64_t v3 = 0; // 0x407d27
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3); // 0x407cc7
    int64_t * v5 = (int64_t *)(v4 + 32); // 0x407ccb
    int64_t * v6 = (int64_t *)(v4 + 40);
    int64_t v7 = 0; // 0x407cd1
    int64_t v8; // 0x407cdd
    int64_t v9; // 0x407ce1
    if (*v5 >= 1) {
        v8 = *(int64_t *)(*v6 + 8 * v7);
        v9 = v7 + 1;
        free((int64_t *)*(int64_t *)(v8 + 32));
        free((int64_t *)v8);
        v7 = v9;
        while (*v5 > v9) {
            // 0x407cd8
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
        }
    }
    // 0x407cfd
    free((int64_t *)*v6);
    int64_t * v10 = (int64_t *)(v4 + 16); // 0x407d07
    int64_t v11 = *v10; // 0x407d07
    if (v11 != 0) {
        // 0x407d11
        free((int64_t *)*(int64_t *)(v11 + 16));
        free((int64_t *)*v10);
    }
    // 0x407d24
    v3++;
    free((int64_t *)v4);
    while (*v2 > v3) {
        // 0x407cc0
        v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3);
        v5 = (int64_t *)(v4 + 32);
        v6 = (int64_t *)(v4 + 40);
        v7 = 0;
        if (*v5 >= 1) {
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
            while (*v5 > v9) {
                // 0x407cd8
                v8 = *(int64_t *)(*v6 + 8 * v7);
                v9 = v7 + 1;
                free((int64_t *)*(int64_t *)(v8 + 32));
                free((int64_t *)v8);
                v7 = v9;
            }
        }
        // 0x407cfd
        free((int64_t *)*v6);
        v10 = (int64_t *)(v4 + 16);
        v11 = *v10;
        if (v11 != 0) {
            // 0x407d11
            free((int64_t *)*(int64_t *)(v11 + 16));
            free((int64_t *)*v10);
        }
        // 0x407d24
        v3++;
        free((int64_t *)v4);
    }
    // 0x407d39
    *v2 = 0;
    *(int64_t *)(v1 + 200) = 0;
    return &g81;
}
// Address range: 0x407d60 - 0x407fe0
int64_t function_407d60(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 48); // 0x407d64
    int64_t v2 = v1; // 0x407d64
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x407d68
    g80 = v2;
    int64_t v4 = v3; // 0x407d73
    switch (v1) {
        case 2: {
            // 0x407e38
            if (*(int64_t *)(a2 + 32) == 0) {
                // 0x407d9a
                return 0;
            }
            // 0x407e43
            __assert_fail("node->next == NULL", "lib/regcomp.c", 1449, "link_nfa_nodes");
            v4 = 1449;
        }
        case 4: {
            // 0x407e60
            *(int64_t *)(8 * v4 + 0x312d203e) = *(int64_t *)0x203e207466656c38;
            // 0x407d9a
            return 0;
        }
        case 8: {
        }
        case 9: {
        }
        case 12: {
            int64_t v5 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x407ed5
            int64_t * v6 = (int64_t *)v5; // 0x407ed9
            *v6 = 1;
            int64_t * v7 = (int64_t *)(v5 + 8); // 0x407ee0
            *v7 = 1;
            int64_t * mem = malloc(8); // 0x407ee8
            *(int64_t *)(v5 + 16) = (int64_t)mem;
            if (mem != NULL) {
                // 0x407ef6
                *mem = *(int64_t *)(*(int64_t *)(a2 + 32) + 56);
                return 0;
            }
            // 0x407f50
            *v7 = 0;
            *v6 = 0;
            // 0x407d9a
            return 12;
        }
        case 10: {
        }
        case 11: {
            char * v8 = (char *)(a1 + 176); // 0x407da0
            *v8 = *v8 | 1;
            int64_t v9 = *(int64_t *)(a2 + 8); // 0x407da7
            int64_t v10 = a2 + 32;
            int64_t v11 = *(int64_t *)(*(int64_t *)(v9 == 0 ? v10 : v9 + 24) + 56);
            if (v11 < 0) {
                // 0x407fc6
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g81;
            }
            int64_t v12 = *(int64_t *)(a2 + 16); // 0x407dbc
            int64_t v13 = *(int64_t *)(*(int64_t *)(v12 == 0 ? v10 : v12 + 24) + 56);
            if (v13 < 0) {
                // 0x407fad
                __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
                // 0x407fc6
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g81;
            }
            int64_t v14 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x407df0
            *(int64_t *)v14 = 2;
            int64_t * mem2 = malloc(16); // 0x407dfb
            int64_t v15 = (int64_t)mem2; // 0x407dfb
            *(int64_t *)(v14 + 16) = v15;
            if (mem2 == NULL) {
                // 0x407d9a
                return 12;
            }
            int64_t * v16 = (int64_t *)(v14 + 8);
            if (v11 == v13) {
                // 0x407f00
                *v16 = 1;
                *mem2 = v11;
                // 0x407d9a
                return 0;
            }
            // 0x407e16
            *v16 = 2;
            if (v11 < v13) {
                // 0x407e24
                *mem2 = v11;
                *(int64_t *)(v15 + 8) = v13;
            } else {
                // 0x407f38
                *mem2 = v13;
                *(int64_t *)(v15 + 8) = v11;
            }
            // 0x407d9a
            return 0;
        }
        case 16: {
            // 0x407d9a
            return 0;
        }
        default: {
            if ((v2 & 8) == 0) {
                int64_t v17 = *(int64_t *)(*(int64_t *)(a2 + 32) + 56); // 0x407d8c
                *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v3) = v17;
                // 0x407d9a
                return 0;
            }
            // 0x407f94
            __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 1484, "link_nfa_nodes");
            // 0x407fad
            __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
            // 0x407fc6
            __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
            return &g81;
        }
    }
}
// Address range: 0x407fe0 - 0x40802e
int64_t function_407fe0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 48); // 0x407fe0
    uint64_t v2 = a2 + 1; // 0x407fe4
    if (v2 >= v1) {
        // 0x408022
        return 1;
    }
    int64_t v3 = *(int64_t *)(a1 + 16) + 4 * v2;
    if (*(int32_t *)v3 != -1) {
        // 0x408022
        return 1;
    }
    int64_t v4 = 2;
    while (v4 != v1 - a2) {
        int64_t v5 = v4 + 1; // 0x408010
        if (*(int32_t *)(v3 - 8 + 4 * v5) != -1) {
            // break -> 0x408022
            break;
        }
        v4 = v5;
    }
    // 0x408022
    return v4 & 0xffffffff;
}
// Address range: 0x408030 - 0x408095
int64_t function_408030(int64_t a1, int64_t a2, uint64_t a3) {
    if (a1 < 1) {
        // 0x408075
        return 0;
    }
    int64_t v1 = a1 - 1; // 0x40803a
    int64_t v2 = 0; // 0x408043
    if (v1 != 0) {
        int64_t v3 = 0;
        int64_t v4 = (v3 + v1) / 2; // 0x408049
        int64_t v5 = v4; // 0x408050
        int64_t v6 = v4; // 0x408050
        int64_t v7 = v1; // 0x408050
        int64_t v8; // 0x408030
        int64_t v9; // 0x40805c
        if (*(int64_t *)(8 * v4 + a2) >= a3) {
            v2 = v3;
            if (v3 >= v5) {
                // break (via goto) -> 0x40806d
                goto lab_0x40806d;
            }
            // 0x408058
            v9 = (v5 + v3) / 2;
            v6 = v9;
            v7 = v5;
            while (*(int64_t *)(8 * v9 + a2) >= a3) {
                // 0x408068
                v8 = v9;
                v2 = v3;
                if (v3 >= v8) {
                    // break (via goto) -> 0x40806d
                    goto lab_0x40806d;
                }
                // 0x408058
                v9 = (v8 + v3) / 2;
                v6 = v9;
                v7 = v8;
            }
        }
        int64_t v10 = v7;
        int64_t v11 = v6 + 1; // 0x408080
        v2 = v11;
        while (v11 < v10) {
            // 0x408045
            v3 = v11;
            v4 = (v3 + v10) / 2;
            v5 = v4;
            v6 = v4;
            v7 = v10;
            if (*(int64_t *)(8 * v4 + a2) >= a3) {
                v2 = v3;
                if (v3 >= v5) {
                    // break (via goto) -> 0x40806d
                    goto lab_0x40806d;
                }
                // 0x408058
                v9 = (v5 + v3) / 2;
                v6 = v9;
                v7 = v5;
                while (*(int64_t *)(8 * v9 + a2) >= a3) {
                    // 0x408068
                    v8 = v9;
                    v2 = v3;
                    if (v3 >= v8) {
                        // break (via goto) -> 0x40806d
                        goto lab_0x40806d;
                    }
                    // 0x408058
                    v9 = (v8 + v3) / 2;
                    v6 = v9;
                    v7 = v8;
                }
            }
            // 0x408080
            v10 = v7;
            v11 = v6 + 1;
            v2 = v11;
        }
    }
  lab_0x40806d:
    // 0x40806d
    if (*(int64_t *)(8 * v2 + a2) == a3) {
        // 0x408090
        return v2 + 1;
    }
    // 0x408075
    return 0;
}
// Address range: 0x4080a0 - 0x408199
int64_t function_4080a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 16; // 0x4080a7
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x4080c1
    int64_t v3 = *v2; // 0x4080c1
    if (function_408030(v3, v1, a3) != 0) {
      lab_0x408188:
        // 0x408175
        return 0;
    }
    int32_t v4 = a5;
    int64_t * v5 = (int64_t *)(a1 + 40);
    int64_t v6 = a3;
    int64_t v7 = 16 * v6 + v3; // 0x4080e0
    int64_t result; // 0x4080a0
    if ((int32_t)*(char *)(v7 + 8) == v4) {
        // 0x4080ed
        if (*(int64_t *)v7 == a4) {
            if (v4 != 9) {
                return 0;
            } else {
                // 0x40815e
                result = 12;
                if ((char)function_406a20(a2, v6) != 0) {
                    return 0;
                } else {
                    return result;
                }
            }
        }
    }
    // 0x4080f2
    result = 12;
    while ((char)function_406a20(a2, v6) != 0) {
        int64_t v8 = 24 * v6; // 0x40810a
        int64_t v9 = *v5 + v8; // 0x40810e
        int64_t v10 = *(int64_t *)(v9 + 8); // 0x408111
        if (v10 == 0) {
            // 0x408175
            return 0;
        }
        int64_t v11 = *(int64_t *)(v9 + 16); // 0x40811a
        int64_t v12 = v11; // 0x408122
        if (v10 == 2) {
            int64_t v13 = function_4080a0(a1, a2, *(int64_t *)(v11 + 8), a4, a5 & 0xffffffff); // 0x408140
            result = v13;
            if ((int32_t)v13 != 0) {
                // break -> 0x408175
                break;
            }
            // 0x408149
            v12 = *(int64_t *)(v8 + 16 + *v5);
        }
        int64_t v14 = *(int64_t *)v12; // 0x408124
        int64_t v15 = *v2; // 0x4080c1
        if (function_408030(v15, v1, v14) != 0) {
            // 0x408175
            return 0;
        }
        v6 = v14;
        v7 = 16 * v6 + v15;
        if ((int32_t)*(char *)(v7 + 8) == v4) {
            // 0x4080ed
            if (*(int64_t *)v7 == a4) {
                if (v4 != 9) {
                    return 0;
                } else {
                    // 0x40815e
                    result = 12;
                    if ((char)function_406a20(a2, v6) != 0) {
                        return 0;
                    } else {
                        return result;
                    }
                }
            }
        }
        // 0x4080f2
        result = 12;
    }
  lab_0x408175:
    // 0x408175
    return result;
}
// Address range: 0x4081a0 - 0x4081c3
int64_t function_4081a0(uint64_t a1, int64_t result2, uint64_t a3) {
    // 0x4081a0
    if (a3 >= a1) {
        // 0x4081c2
        int64_t result; // 0x4081a0
        return result;
    }
    int64_t v1 = a3; // 0x4081a3
    int64_t v2 = 8 * v1 + result2;
    *(int64_t *)v2 = *(int64_t *)(v2 + 8);
    v1++;
    while (v1 != a1) {
        // 0x4081b0
        v2 = 8 * v1 + result2;
        *(int64_t *)v2 = *(int64_t *)(v2 + 8);
        v1++;
    }
    // 0x4081c2
    return result2;
}
// Address range: 0x4081d0 - 0x40825b
int64_t function_4081d0(int64_t a1, int64_t a2) {
    // 0x4081d0
    int64_t * v1; // 0x4081e0
    int64_t v2; // 0x4081e0
    switch (*(char *)(a2 + 48)) {
        case 4: {
            int64_t v3 = *(int64_t *)(a1 + 224); // 0x408230
            if (v3 == 0) {
                // 0x4081dc
                return 0;
            }
            int64_t v4 = a2 + 40; // 0x40823c
            int64_t v5 = *(int64_t *)(8 * (int64_t)*(int32_t *)v4 + v3); // 0x408240
            *(int64_t *)v4 = v5;
            int64_t * v6 = (int64_t *)(a1 + 160); // 0x408251
            *v6 = *v6 | (int64_t)(1 << (int32_t)v5 % 32);
            return 0;
        }
        case 17: {
            // 0x4081e0
            v1 = (int64_t *)(a2 + 8);
            v2 = *v1;
            if (v2 == 0 || *(char *)(v2 + 48) != 17) {
                // 0x4081dc
                return 0;
            }
            // break -> 0x4081ef
            break;
        }
        default: {
            // 0x4081dc
            return 0;
        }
    }
    uint64_t v7 = *(int64_t *)(v2 + 40); // 0x4081ef
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x4081f3
    *v1 = v8;
    if (v8 != 0) {
        // 0x408200
        *(int64_t *)v8 = a2;
    }
    int64_t v9 = *(int64_t *)(a1 + 224); // 0x408203
    int64_t v10 = *(int64_t *)(8 * *(int64_t *)(a2 + 40) + v9); // 0x40820e
    *(int64_t *)(v9 + 8 * v7) = v10;
    if (v7 > 63) {
        // 0x4081dc
        return 0;
    }
    uint64_t v11 = v7 % 64; // 0x408223
    int64_t v12 = -2; // 0x408223
    if (v11 != 0) {
        v12 = 0xfffffffffffffffe >> 64 - v11 | -2 << v11;
    }
    int64_t * v13 = (int64_t *)(a1 + 160); // 0x408226
    *v13 = *v13 & v12;
    // 0x4081dc
    return 0;
}
// Address range: 0x408260 - 0x4082b7
int64_t function_408260(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x408264
    switch (*(char *)(a2 + 48)) {
        case 11: {
            // 0x408298
            *(int64_t *)(v1 + 32) = a2;
            return 0;
        }
        case 16: {
            int64_t v2 = *(int64_t *)(a2 + 16); // 0x4082a0
            *(int64_t *)(v1 + 32) = *(int64_t *)(v2 + 24);
            *(int64_t *)(v2 + 32) = *(int64_t *)(a2 + 32);
            return 0;
        }
    }
    if (v1 != 0) {
        // 0x408275
        *(int64_t *)(v1 + 32) = *(int64_t *)(a2 + 32);
    }
    int64_t v3 = *(int64_t *)(a2 + 16); // 0x40827d
    if (v3 != 0) {
        // 0x408286
        *(int64_t *)(v3 + 32) = *(int64_t *)(a2 + 32);
    }
    // 0x40828e
    return 0;
}
// Address range: 0x4082c0 - 0x40850e
int64_t function_4082c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, uint64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x4082d7
    int64_t v2 = -1; // 0x4082f1
    int64_t v3 = -1; // 0x4082f1
    if (v1 > 0) {
        int64_t v4 = *(int64_t *)(a1 + 216); // 0x4082f7
        int64_t v5 = v4 + 8;
        int64_t v6 = 0;
        uint64_t v7 = v6 + v1; // 0x4082f3
        int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x408308
        int64_t v9 = v8; // 0x408314
        int64_t v10 = v1; // 0x408314
        int64_t v11 = v8; // 0x408314
        int64_t v12; // 0x4082c0
        int64_t v13; // 0x4082c0
        uint64_t v14; // 0x408320
        int64_t v15; // 0x40832e
        if (*(int64_t *)(40 * v8 + v5) >= a5) {
            v13 = v6;
            if (v6 >= v9) {
                // break (via goto) -> 0x40834b
                goto lab_0x40834b;
            }
            // 0x408320
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v9;
            v11 = v15;
            while (*(int64_t *)(40 * v15 + v5) >= a5) {
                // 0x408346
                v12 = v15;
                v13 = v6;
                if (v6 >= v12) {
                    // break (via goto) -> 0x40834b
                    goto lab_0x40834b;
                }
                // 0x408320
                v14 = v12 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v12;
                v11 = v15;
            }
        }
        int64_t v16 = v10;
        int64_t v17 = v11 + 1; // 0x4084b8
        v13 = v17;
        while (v17 < v16) {
            // 0x4082f3
            v6 = v17;
            v7 = v6 + v16;
            v8 = (v7 / 0x8000000000000000 + v7) / 2;
            v9 = v8;
            v10 = v16;
            v11 = v8;
            if (*(int64_t *)(40 * v8 + v5) >= a5) {
                v13 = v6;
                if (v6 >= v9) {
                    // break (via goto) -> 0x40834b
                    goto lab_0x40834b;
                }
                // 0x408320
                v14 = v9 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v9;
                v11 = v15;
                while (*(int64_t *)(40 * v15 + v5) >= a5) {
                    // 0x408346
                    v12 = v15;
                    v13 = v6;
                    if (v6 >= v12) {
                        // break (via goto) -> 0x40834b
                        goto lab_0x40834b;
                    }
                    // 0x408320
                    v14 = v12 + v6;
                    v15 = (v14 / 0x8000000000000000 + v14) / 2;
                    v10 = v12;
                    v11 = v15;
                }
            }
            // 0x4084b8
            v16 = v10;
            v17 = v11 + 1;
            v13 = v17;
        }
      lab_0x40834b:;
        int64_t v18 = v13;
        int64_t v19 = -1; // 0x40834e
        if (v1 > v18) {
            // 0x408354
            v19 = *(int64_t *)(40 * v18 + 8 + v4) != a5 ? -1 : v18;
        }
        int64_t v20 = 0;
        uint64_t v21 = v1 + v20; // 0x40837c
        int64_t v22 = (v21 / 0x8000000000000000 + v21) / 2; // 0x408392
        int64_t v23 = v22; // 0x40839e
        int64_t v24 = v1; // 0x40839e
        int64_t v25 = v22; // 0x40839e
        int64_t v26; // 0x4082c0
        int64_t v27; // 0x4082c0
        uint64_t v28; // 0x4083a8
        int64_t v29; // 0x4083b7
        if (*(int64_t *)(40 * v22 + v5) >= a7) {
            v27 = v20;
            if (v20 >= v23) {
                // break (via goto) -> 0x4083d4
                goto lab_0x4083d4;
            }
            // 0x4083a8
            v28 = v23 + v20;
            v29 = (v28 / 0x8000000000000000 + v28) / 2;
            v24 = v23;
            v25 = v29;
            while (*(int64_t *)(40 * v29 + v5) >= a7) {
                // 0x4083cf
                v26 = v29;
                v27 = v20;
                if (v20 >= v26) {
                    // break (via goto) -> 0x4083d4
                    goto lab_0x4083d4;
                }
                // 0x4083a8
                v28 = v26 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v26;
                v25 = v29;
            }
        }
        int64_t v30 = v24;
        int64_t v31 = v25 + 1; // 0x4084d0
        v27 = v31;
        while (v31 < v30) {
            // 0x40837c
            v20 = v31;
            v21 = v30 + v20;
            v22 = (v21 / 0x8000000000000000 + v21) / 2;
            v23 = v22;
            v24 = v30;
            v25 = v22;
            if (*(int64_t *)(40 * v22 + v5) >= a7) {
                v27 = v20;
                if (v20 >= v23) {
                    // break (via goto) -> 0x4083d4
                    goto lab_0x4083d4;
                }
                // 0x4083a8
                v28 = v23 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v23;
                v25 = v29;
                while (*(int64_t *)(40 * v29 + v5) >= a7) {
                    // 0x4083cf
                    v26 = v29;
                    v27 = v20;
                    if (v20 >= v26) {
                        // break (via goto) -> 0x4083d4
                        goto lab_0x4083d4;
                    }
                    // 0x4083a8
                    v28 = v26 + v20;
                    v29 = (v28 / 0x8000000000000000 + v28) / 2;
                    v24 = v26;
                    v25 = v29;
                }
            }
            // 0x4084d0
            v30 = v24;
            v31 = v25 + 1;
            v27 = v31;
        }
      lab_0x4083d4:;
        int64_t v32 = v27;
        v2 = v19;
        v3 = -1;
        if (v1 > v32) {
            // 0x4083dd
            v2 = v19;
            v3 = *(int64_t *)(40 * v32 + 8 + v4) != a7 ? -1 : v32;
        }
    }
    // 0x4083fc
    if (a2 < 1) {
        // 0x40849e
        return 0;
    }
    int64_t * v33 = (int64_t *)(a1 + 216); // 0x408434
    int64_t * v34 = (int64_t *)*(int64_t *)(a1 + 152); // 0x408465
    int64_t v35 = 0; // 0x4084e5
    int64_t v36 = 8 * v35; // 0x408448
    int64_t v37 = *(int64_t *)(v36 + a3); // 0x408448
    int64_t v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34); // 0x408468
    int64_t v39 = function_4068a0(a1, v37, v38, a4, a5, v2); // 0x40846e
    uint64_t v40 = *(int64_t *)(v38 + v36); // 0x40848c
    int64_t result = 1; // 0x408497
    while ((int32_t)v39 == (int32_t)function_4068a0(a1, v40, v38, a6, a7, v3)) {
        // 0x4084e0
        v35++;
        result = 0;
        if (v35 >= v40) {
            // break -> 0x40849e
            break;
        }
        v36 = 8 * v35;
        v37 = *(int64_t *)(v36 + v38);
        v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34);
        v39 = function_4068a0(a1, v37, v38, a4, a5, v2);
        v40 = *(int64_t *)(v38 + v36);
        result = 1;
    }
    // 0x40849e
    return result;
}
// Address range: 0x408510 - 0x408561
int64_t function_408510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408510
    int64_t result; // 0x408510
    if ((int32_t)result != 0) {
        // 0x40855c
        return result;
    }
    int64_t v1 = a1; // 0x40852e
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x408530
        int64_t v3 = v2; // 0x408539
        int64_t v4 = 0; // 0x408539
        int64_t v5 = v1; // 0x408539
        if (v2 == 0) {
            int64_t v6 = v5;
            int64_t v7 = *(int64_t *)(v6 + 16); // 0x408543
            v3 = v7;
            while (v7 != v4 != v7 != 0) {
                int64_t v8 = *(int64_t *)v6; // 0x408551
                v4 = v6;
                if (v8 == 0) {
                    return result;
                }
                v6 = v8;
                v7 = *(int64_t *)(v6 + 16);
                v3 = v7;
            }
        }
        // 0x408520
        v1 = v3;
    }
}
// Address range: 0x408570 - 0x408733
int64_t function_408570(int64_t * a1, int128_t * a2) {
    // 0x408570
    if (a2 == NULL) {
        // 0x408674
        return 0;
    }
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x408579
    int64_t v3 = *v2; // 0x408579
    if (v3 == 0) {
        // 0x408674
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x40858d
    int64_t v6 = *v5; // 0x40858d
    int64_t v7 = v6 + 2 * v3;
    int64_t v8; // 0x408570
    int64_t * v9; // 0x408570
    int64_t v10; // 0x408570
    int64_t v11; // 0x408570
    int64_t v12; // 0x408570
    if (v7 > v4) {
        int64_t v13 = v3 + v4; // 0x4086d0
        int64_t * v14 = (int64_t *)(v4 + 16);
        int64_t * mem = realloc((int64_t *)*v14, 16 * (int32_t)v13); // 0x4086e2
        if (mem == NULL) {
            // 0x408674
            return 12;
        }
        int64_t v15 = *v5; // 0x4086ec
        *v14 = (int64_t)mem;
        *a1 = 2 * v13;
        int64_t v16 = *v2; // 0x4086f7
        v9 = v14;
        v11 = v16;
        if (v15 != 0) {
            // 0x4086ec
            v8 = 2 * v16 + v15;
            v10 = v16;
            v12 = v15;
            goto lab_0x4085ad;
        } else {
            goto lab_0x408705;
        }
    } else {
        // 0x4085a4
        v8 = v7;
        v10 = v3;
        v12 = v6;
        if (v6 == 0) {
            // 0x4085a4
            v9 = (int64_t *)(v4 + 16);
            v11 = v3;
            goto lab_0x408705;
        } else {
            goto lab_0x4085ad;
        }
    }
  lab_0x408705:;
    int64_t v17 = *v9; // 0x408705
    int64_t v18 = *(int64_t *)(v1 + 16); // 0x408709
    *v5 = v11;
    memcpy((int64_t *)v17, (int64_t *)v18, 8 * (int32_t)*v2);
    // 0x408674
    return 0;
  lab_0x4085ad:;
    int64_t v19 = v10 - 1; // 0x4085b1
    int64_t v20 = -v10; // 0x4085bc
    int64_t v21 = v19; // 0x4085c3
    int64_t v22 = v8; // 0x4085c3
    if (v20 < 0) {
        int64_t v23 = v12; // 0x408570
        int64_t v24 = v20;
        int64_t v25 = v8; // 0x408570
        int64_t v26 = v19;
        while (true) {
            int64_t v27 = v23 - 1;
            int64_t v28 = v24; // 0x4085f6
            v21 = v26;
            v22 = v25;
            if (v27 < 0) {
                // break (via goto) -> 0x408600
                goto lab_0x408600_2;
            }
            int64_t v29 = v25;
            int64_t v30 = v26;
            int64_t v31 = *(int64_t *)(v4 + 16); // 0x4085cf
            uint64_t v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30); // 0x4085d3
            uint64_t v33 = *(int64_t *)(v31 + 8 * v27); // 0x4085d7
            int64_t v34; // 0x408570
            int64_t v35; // 0x408570
            while (v33 != v32) {
                // 0x4085e1
                v34 = v30;
                v35 = v28;
                if (v33 >= v32) {
                    goto lab_0x4085c0;
                }
                int64_t v36 = v30 - 1; // 0x4085e7
                int64_t v37 = v29 - 1; // 0x4085eb
                *(int64_t *)(v31 + 8 * v37) = v32;
                v28 = -v30;
                v21 = v36;
                v22 = v37;
                if (v28 >= 0) {
                    // break (via goto) -> 0x408600
                    goto lab_0x408600_2;
                }
                v21 = v26;
                v22 = v25;
                if (v27 < 0) {
                    // break (via goto) -> 0x408600
                    goto lab_0x408600_2;
                }
                // 0x4085ca
                v29 = v37;
                v30 = v36;
                v31 = *(int64_t *)(v4 + 16);
                v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30);
                v33 = *(int64_t *)(v31 + 8 * v27);
            }
            // 0x4086a0
            v34 = v30 - 1;
            v35 = -v30;
          lab_0x4085c0:
            // 0x4085c0
            v24 = v35;
            v26 = v34;
            v23 = v27;
            v25 = v29;
            v21 = v26;
            v22 = v29;
            if (v24 >= 0) {
                // break -> 0x408600
                break;
            }
        }
    }
  lab_0x408600_2:;
    int64_t v38 = v22; // 0x408603
    if (v21 >= 0) {
        int64_t v39 = v21 + 1; // 0x408605
        int64_t v40 = *(int64_t *)(v4 + 16); // 0x408609
        int64_t v41 = *(int64_t *)(v1 + 16); // 0x40860d
        int64_t v42 = v22 - v39; // 0x408612
        memcpy((int64_t *)(v40 + 8 * v42), (int64_t *)v41, 8 * (int32_t)v39);
        v38 = v42;
    }
    int64_t v43 = *v5; // 0x408626
    int64_t v44 = v43 - 1; // 0x40862f
    int64_t v45 = 2 * *v2 + v44; // 0x40862f
    int64_t v46 = v45 - v38 + 1; // 0x40863a
    if (v46 == 0) {
      lab_0x408674:
        // 0x408674
        return 0;
    }
    int64_t v47 = *(int64_t *)(v4 + 16); // 0x408647
    *v5 = v46 + v43;
    int64_t v48 = v44; // 0x40864f
    int64_t v49 = v46; // 0x40864f
    int64_t v50 = v45; // 0x40864f
    while (true) {
        int64_t v51 = v50;
        int64_t v52 = v49;
        uint64_t v53 = *(int64_t *)(8 * v51 + v47); // 0x408650
        uint64_t v54 = *(int64_t *)(8 * v48 + v47); // 0x408654
        int64_t v55 = 8 * (v52 + v48) + v47; // 0x40865c
        while (v53 > v54) {
            // 0x408665
            *(int64_t *)v55 = v53;
            int64_t v56 = v52 - 1; // 0x40866c
            if (v56 == 0) {
                return 0;
            }
            v51--;
            v52 = v56;
            v53 = *(int64_t *)(8 * v51 + v47);
            v54 = *(int64_t *)(8 * v48 + v47);
            v55 = 8 * (v52 + v48) + v47;
        }
        // 0x408680
        *(int64_t *)v55 = v54;
        int64_t v57 = v48 - 1; // 0x408683
        v48 = v57;
        v49 = v52;
        v50 = v51;
        if (v57 < 0) {
            // 0x408689
            memcpy((int64_t *)v47, (int64_t *)(v47 + 8 * v38), 8 * (int32_t)v52);
            return 0;
        }
    }
    // 0x408674
    int64_t v58; // 0x408570
    int64_t result = v58;
    return result;
}
// Address range: 0x408740 - 0x408994
int64_t function_408740(int128_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 24 * a3; // 0x408754
    int64_t * v2 = (int64_t *)(a2 + 40); // 0x40875c
    int64_t v3 = *v2 + v1; // 0x408764
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x40876b
    int64_t v5 = *v4 + 1; // 0x408778
    int128_t v6 = v5; // bp-120, 0x40877c
    int64_t * mem = malloc(8 * (int32_t)v5); // 0x408785
    if (mem == NULL) {
        // 0x40886a
        return 12;
    }
    int64_t v7 = (int64_t)mem; // 0x408785
    int64_t * v8 = (int64_t *)(a2 + 48); // 0x408798
    int64_t v9 = v1 + 8;
    *(int64_t *)(*v8 + v9) = -1;
    int64_t v10 = a2 + 8 + 16 * a3;
    uint32_t v11 = *(int32_t *)v10; // 0x4087b3
    int64_t v12 = v10; // 0x4087be
    if ((v11 & 0x3ff00) != 0) {
        // 0x4088e0
        if (*v4 == 0) {
            goto lab_0x408930;
        } else {
            int64_t v13 = *(int64_t *)*(int64_t *)(v3 + 16); // 0x4088eb
            v12 = v10;
            if ((*(char *)(a2 + 10 + 16 * v13) & 4) == 0) {
                int64_t result = function_407970(a2, a3, a3, a3, (int64_t)(v11 / 256 % 1024)); // 0x408914
                if ((int32_t)result != 0) {
                    // 0x40886a
                    return result;
                }
                // 0x408921
                v12 = 17 * a3 + 8;
            }
            goto lab_0x4087c4;
        }
    } else {
        goto lab_0x4087c4;
    }
  lab_0x4087c4:;
    // 0x4087c4
    int64_t v14; // 0x408740
    int64_t v15; // 0x408740
    if ((*(char *)v12 & 8) == 0) {
        goto lab_0x408930;
    } else {
        int64_t v16 = *v2; // 0x4087ce
        int64_t v17 = v16 + v1; // 0x4087d2
        if (*(int64_t *)(v17 + 8) < 1) {
            goto lab_0x408930;
        } else {
            int64_t v18 = 0;
            int64_t v19 = *(int64_t *)(*(int64_t *)(v17 + 16) + 8 * v18); // 0x408837
            int64_t v20 = *v8; // 0x40883b
            int64_t v21 = 24 * v19; // 0x408843
            int64_t v22 = v20 + v21; // 0x408847
            int64_t v23 = *(int64_t *)(v22 + 8); // 0x40884a
            int64_t v24 = 0; // 0x408852
            int64_t v25 = v18; // 0x408852
            int64_t v26 = v19; // 0x408852
            int64_t v27 = v21; // 0x408852
            int64_t v28 = v22; // 0x408852
            int64_t v29 = v23; // 0x408852
            int64_t v30; // 0x408740
            int64_t v31; // 0x408898
            int64_t v32; // 0x4088a2
            int64_t v33; // 0x408837
            int64_t v34; // 0x408843
            int64_t v35; // 0x408847
            int64_t v36; // 0x40884a
            if (v23 == -1) {
                // 0x408898
                v31 = v16 + v1;
                v32 = v18;
                v32++;
                v30 = 1;
                if (*(int64_t *)(v31 + 8) <= v32) {
                    // break (via goto) -> 0x4088ac
                    goto lab_0x4088ac;
                }
                // 0x408833
                v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                v34 = 24 * v33;
                v35 = v34 + v20;
                v36 = *(int64_t *)(v35 + 8);
                v24 = 1;
                v25 = v32;
                v26 = v33;
                v27 = v34;
                v28 = v35;
                v29 = v36;
                while (v36 == -1) {
                    // 0x408898
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x4088ac
                        goto lab_0x4088ac;
                    }
                    // 0x408833
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                }
            }
            int64_t v37 = v29;
            int64_t result2; // 0x408740
            int64_t v38; // 0x408740
            int128_t v39; // bp-88, 0x408740
            int64_t v40; // 0x408861
            if (v37 != 0) {
                // 0x4087f0
                v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                v38 = *(int64_t *)(v28 + 16);
            } else {
                // 0x408859
                v40 = function_408740(&v39, a2, v26, v37);
                int64_t v41; // 0x408740
                v38 = v41;
                result2 = v40;
                if ((int32_t)v40 != 0) {
                    // 0x40886a
                    return result2;
                }
            }
            int64_t v42 = function_408570((int64_t *)&v6, &v39); // 0x40880c
            result2 = v42;
            while ((int32_t)v42 == 0) {
                int64_t v43 = v38;
                int64_t v44 = v24; // 0x40881f
                if (*(int64_t *)(v27 + 8 + *v8) == 0) {
                    // 0x408880
                    free((int64_t *)v43);
                    v44 = 1;
                }
                int64_t v45 = *v2; // 0x408821
                int64_t v46 = v25 + 1; // 0x408825
                int64_t v47 = v45 + v1; // 0x408829
                int64_t v48 = v45; // 0x408831
                if (*(int64_t *)(v47 + 8) <= v46) {
                    // break -> 0x4088ac
                    break;
                }
                v18 = v46;
                int64_t v49 = v43;
                v19 = *(int64_t *)(*(int64_t *)(v47 + 16) + 8 * v18);
                v20 = *v8;
                v21 = 24 * v19;
                v22 = v20 + v21;
                v23 = *(int64_t *)(v22 + 8);
                v24 = v44;
                v25 = v18;
                v26 = v19;
                v27 = v21;
                v28 = v22;
                v29 = v23;
                if (v23 == -1) {
                    // 0x408898
                    v31 = v48 + v1;
                    v32 = v18;
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x4088ac
                        goto lab_0x4088ac;
                    }
                    // 0x408833
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                    while (v36 == -1) {
                        // 0x408898
                        v32++;
                        v30 = 1;
                        if (*(int64_t *)(v31 + 8) <= v32) {
                            // break (via goto) -> 0x4088ac
                            goto lab_0x4088ac;
                        }
                        // 0x408833
                        v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                        v34 = 24 * v33;
                        v35 = v34 + v20;
                        v36 = *(int64_t *)(v35 + 8);
                        v24 = 1;
                        v25 = v32;
                        v26 = v33;
                        v27 = v34;
                        v28 = v35;
                        v29 = v36;
                    }
                }
                // 0x408854
                v37 = v29;
                if (v37 != 0) {
                    // 0x4087f0
                    v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                    v38 = *(int64_t *)(v28 + 16);
                } else {
                    // 0x408859
                    v40 = function_408740(&v39, a2, v26, v37);
                    v38 = v49;
                    result2 = v40;
                    if ((int32_t)v40 != 0) {
                        // 0x40886a
                        return result2;
                    }
                }
                // 0x408802
                v42 = function_408570((int64_t *)&v6, &v39);
                result2 = v42;
            }
            // 0x40886a
            return result2;
          lab_0x4088ac:
            // 0x4088ac
            if ((char)function_406a20((int64_t)&v6, a3) == 0) {
                // 0x40886a
                return 12;
            }
            int64_t v50 = *v8; // 0x4088c1
            v15 = v50;
            if ((char)a4 == 1 || (char)v30 == 0) {
                goto lab_0x408945;
            } else {
                // 0x4088d5
                *(int64_t *)(v50 + v9) = 0;
                v14 = 0x100000000 * v7 >> 32;
                goto lab_0x408959;
            }
        }
    }
  lab_0x408930:
    // 0x408930
    if ((char)function_406a20((int64_t)&v6, a3) == 0) {
        // 0x40886a
        return 12;
    }
    // 0x408941
    v15 = *v8;
    goto lab_0x408945;
  lab_0x408945:;
    int128_t v51 = __asm_movdqa(0); // 0x408945
    int64_t v52 = v15 + v1;
    __asm_movups(*(int128_t *)v52, v51);
    int64_t v53 = 0x100000000 * v7 >> 32;
    *(int64_t *)(v52 + 16) = v53;
    v14 = v53;
    goto lab_0x408959;
  lab_0x408959:;
    int128_t v54 = __asm_movdqa(0); // 0x408962
    *(int64_t *)((int64_t)a1 + 16) = v14;
    *a1 = (int128_t)__asm_movaps(v54);
    return 0;
}
// Address range: 0x4089a0 - 0x408adf
int64_t function_4089a0(int64_t a1, int64_t * a2, int64_t a3, uint32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x4089b7
    int64_t v3 = *v2; // 0x4089b7
    int64_t size = 8 * v3; // 0x4089c4
    int128_t v4 = v3; // bp-72, 0x4089cc
    int64_t * mem = malloc((int32_t)size); // 0x4089d1
    if (mem == NULL) {
        // 0x408acd
        return 12;
    }
    int64_t * v5 = (int64_t *)(v1 + 16);
    if (v3 < 1) {
      lab_0x408a6d:
        // 0x408a6d
        free((int64_t *)*v5);
        int128_t v6 = __asm_movdqa(0); // 0x408a7b
        *v5 = (int64_t)mem;
        *(int128_t *)a2 = (int128_t)__asm_movaps(v6);
        return 0;
    }
    int64_t v7 = &v4;
    int64_t v8 = size; // 0x4089a0
    int64_t v9 = 0; // 0x408a63
    int64_t v10; // 0x4089a0
    int64_t v11; // 0x4089a0
    int64_t v12; // 0x408a00
    while (true) {
      lab_0x4089f0:;
        int64_t v13 = *(int64_t *)(*v5 + 8 * v9); // 0x4089f4
        v12 = *(int64_t *)(a1 + 48) + 24 * v13;
        uint64_t v14 = *(int64_t *)(v12 + 8); // 0x408a04
        if (v14 >= 1) {
            int64_t v15 = 0;
            int64_t v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16)); // 0x408a29
            int64_t v17 = 16 * v16 + v8; // 0x408a34
            int64_t v18; // 0x408a5a
            if ((int32_t)*(char *)(v17 + 8) == a4) {
                // 0x408a41
                if (*(int64_t *)v17 == a3) {
                    if (v16 == -1) {
                        goto lab_0x408aa0;
                    } else {
                        // 0x408a4c
                        v18 = function_4080a0(a1, v7, v13, a3, (int64_t)a4);
                        v11 = a1;
                        v10 = v18;
                        if ((int32_t)v18 != 0) {
                            goto lab_0x408aae_2;
                        } else {
                            goto lab_0x408a63;
                        }
                    }
                }
            }
            int64_t v19 = v15 + 1; // 0x408a20
            while (v14 != v19) {
                // 0x408a29
                v15 = v19;
                v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16));
                v17 = 16 * v16 + v8;
                if ((int32_t)*(char *)(v17 + 8) == a4) {
                    // 0x408a41
                    if (*(int64_t *)v17 == a3) {
                        if (v16 == -1) {
                            goto lab_0x408aa0;
                        } else {
                            // 0x408a4c
                            v18 = function_4080a0(a1, v7, v13, a3, (int64_t)a4);
                            v11 = a1;
                            v10 = v18;
                            if ((int32_t)v18 != 0) {
                                goto lab_0x408aae_2;
                            } else {
                                goto lab_0x408a63;
                            }
                        }
                    }
                }
                // 0x408a20
                v19 = v15 + 1;
            }
        }
        goto lab_0x408aa0;
    }
  lab_0x408aae_2:
    // 0x408aae
    free(mem);
    return v10 & 0xffffffff;
  lab_0x408aa0:;
    int64_t v20 = function_408570((int64_t *)&v4, (int128_t *)v12); // 0x408aa5
    v11 = v7;
    v10 = v20;
    if ((int32_t)v20 != 0) {
        // break -> 0x408aae
        goto lab_0x408aae_2;
    }
    goto lab_0x408a63;
  lab_0x408a63:
    // 0x408a63
    v9++;
    v8 = v11;
    if (*v2 <= v9) {
        goto lab_0x408a6d;
    }
    goto lab_0x4089f0;
}
// Address range: 0x408ae0 - 0x408c92
int64_t function_408ae0(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x408ae0
    int64_t v2 = *v1; // 0x408ae0
    if (v2 == 0) {
        // 0x408ba8
        return 0;
    }
    int64_t * v3 = (int64_t *)(a3 + 8); // 0x408aef
    int64_t v4 = *v3; // 0x408aef
    if (v4 == 0) {
        // 0x408ba8
        return 0;
    }
    int64_t v5 = (int64_t)a1;
    int64_t v6 = v4 + v2; // 0x408afe
    int64_t * v7 = (int64_t *)(v5 + 8); // 0x408b13
    int64_t v8 = *v7; // 0x408b13
    int64_t * v9 = (int64_t *)(v5 + 16); // 0x408b1a
    int64_t v10 = *v9; // 0x408b1a
    int64_t v11 = v8; // 0x408b25
    int64_t v12 = v10; // 0x408b25
    int64_t v13 = v4; // 0x408b25
    int64_t v14 = v2; // 0x408b25
    if (v8 + v6 > v5) {
        int64_t v15 = v6 + v5; // 0x408c5a
        int64_t * mem = realloc((int64_t *)v10, 8 * (int32_t)v15); // 0x408c65
        if (mem == NULL) {
            // 0x408ba8
            return 12;
        }
        // 0x408c72
        v12 = (int64_t)mem;
        v11 = *v7;
        v14 = *v1;
        *v9 = v12;
        *(int64_t *)a1 = v15;
        v13 = *v3;
    }
    int64_t v16 = *(int64_t *)(a2 + 16); // 0x408b2b
    int64_t v17 = *(int64_t *)(a3 + 16); // 0x408b2f
    int64_t v18 = v13 - 1; // 0x408b38
    int64_t v19 = v18; // 0x408b4c
    int64_t v20 = v11 - 1; // 0x408b4c
    int64_t v21 = *(int64_t *)(v17 + 8 * v18); // 0x408b4c
    int64_t v22 = v13 + v11 + v14; // 0x408b4c
    int64_t v23 = v14 - 1; // 0x408b4c
    int64_t v24; // 0x408ae0
    int64_t v25; // 0x408ae0
    int64_t v26; // 0x408ae0
    int64_t v27; // 0x408ae0
    int64_t v28; // 0x408ae0
    int64_t v29; // 0x408ae0
    int64_t v30; // 0x408ae0
    int64_t v31; // 0x408ae0
    int64_t v32; // 0x408ae0
    int64_t v33; // 0x408ae0
    int64_t v34; // 0x408ae0
    int64_t v35; // 0x408ae0
    int64_t v36; // 0x408ae0
    int64_t v37; // 0x408ae0
    while (true) {
      lab_0x408b50:;
        int64_t v38 = v21;
        int64_t v39 = *(int64_t *)(8 * v23 + v16);
        v26 = v24;
        v27 = v25;
        v32 = v19;
        v34 = v20;
        v21 = v38;
        v36 = v22;
        v30 = v39;
        v28 = v23;
        v33 = v19;
        v35 = v20;
        v37 = v22;
        v31 = v38;
        v29 = v23;
        if (v39 == v38) {
            goto lab_0x408b66;
        } else {
            goto lab_0x408b55;
        }
    }
  lab_0x408bc0_4:;
    int64_t v40 = *v7; // 0x408bc0
    int64_t v41 = *v1 + v40 + *v3; // 0x408bcb
    int64_t v42 = v40 - 1; // 0x408bd0
    int64_t v43; // 0x408ae0
    int64_t v44 = v41 - v43; // 0x408bd8
    *v7 = v44 + v40;
    int64_t v45; // 0x408ae0
    int64_t v46; // 0x408ae0
    if (v42 < 0 || v44 < 1) {
        // 0x408c40
        v46 = 8 * v44;
        v45 = v12;
    } else {
        int64_t v47 = v42; // 0x408ae0
        int64_t v48 = v44; // 0x408ae0
        int64_t v49 = v41 - 1; // 0x408ae0
        while (true) {
            int64_t v50 = v47;
            int64_t v51 = v49;
            int64_t v52 = v48;
            uint64_t v53 = *(int64_t *)(8 * v51 + v12); // 0x408bf0
            uint64_t v54 = *(int64_t *)(8 * v50 + v12); // 0x408bf4
            int64_t v55 = 8 * (v52 + v50) + v12; // 0x408bfc
            while (v53 > v54) {
                // 0x408c05
                *(int64_t *)v55 = v53;
                int64_t v56 = v52 - 1; // 0x408c0c
                if (v56 == 0) {
                    // break (via goto) -> 0x408c12
                    goto lab_0x408c12;
                }
                v51--;
                v52 = v56;
                v53 = *(int64_t *)(8 * v51 + v12);
                v54 = *(int64_t *)(8 * v50 + v12);
                v55 = 8 * (v52 + v50) + v12;
            }
            // 0x408c20
            *(int64_t *)v55 = v54;
            v47 = v50 - 1;
            v48 = v52;
            v49 = v51;
            if (v50 == 0) {
                // 0x408c2d
                v46 = 8 * v52;
                v45 = *v9;
                goto lab_0x408c44;
            }
        }
      lab_0x408c12:
        // 0x408c12
        v46 = 0;
        v45 = *v9;
    }
    goto lab_0x408c44;
  lab_0x408b88:;
    // 0x408b88
    int64_t v58; // 0x408ae0
    int64_t v59 = v58 - 1; // 0x408b88
    uint64_t v60; // 0x408ae0
    *(int64_t *)(8 * v59 + v12) = v60;
    int64_t v61; // 0x408ae0
    int64_t v62 = v61; // 0x408b8c
    int64_t v63 = v59; // 0x408b8c
    goto lab_0x408b90;
  lab_0x408b66:
    // 0x408b66
    v60 = v31;
    v58 = v37;
    int64_t v72 = v35; // 0x408b69
    v61 = v35;
    if (v35 >= 0) {
        int64_t v73 = v72;
        uint64_t v74 = *(int64_t *)(8 * v73 + v12); // 0x408b7a
        while (v74 > v60) {
            // 0x408b70
            v72 = v73 - 1;
            v61 = -1;
            if (v73 == 0) {
                goto lab_0x408b88;
            }
            v73 = v72;
            v74 = *(int64_t *)(8 * v73 + v12);
        }
        // 0x408b83
        v61 = v73;
        v62 = v73;
        v63 = v58;
        if (v74 == v60) {
            goto lab_0x408b90;
        } else {
            goto lab_0x408b88;
        }
    } else {
        goto lab_0x408b88;
    }
  lab_0x408b55:;
    int64_t v75 = v28;
    v22 = v36;
    v20 = v34;
    v19 = v32;
    int64_t v76 = v27;
    int64_t v77 = v26;
    int64_t v70; // 0x408ae0
    int64_t v69; // 0x408ae0
    int64_t v66; // 0x408ae0
    int64_t v67; // 0x408ae0
    int64_t v68; // 0x408ae0
    if (v77 < v76) {
        int64_t v78 = v19 - 1; // 0x408b57
        v66 = v78;
        v67 = v20;
        v68 = v22;
        v69 = v30;
        v70 = v75;
        if (v78 < 0) {
            // break -> 0x408bc0
            goto lab_0x408bc0_4;
        }
        goto lab_0x408b5d;
    } else {
        // 0x408bb0
        v23 = v75 - 1;
        v24 = v77;
        v25 = v76;
        v43 = v22;
        if (v23 < 0) {
            // break -> 0x408bc0
            goto lab_0x408bc0_4;
        }
        goto lab_0x408b50;
    }
  lab_0x408b90:;
    int64_t v64 = v29 - 1; // 0x408b90
    v43 = v63;
    if (v64 < 0) {
        // break -> 0x408bc0
        goto lab_0x408bc0_4;
    }
    int64_t v65 = v33 - 1; // 0x408b96
    v43 = v63;
    if (v65 < 0) {
        // break -> 0x408bc0
        goto lab_0x408bc0_4;
    }
    // 0x408b9c
    v66 = v65;
    v67 = v62;
    v68 = v63;
    v69 = *(int64_t *)(8 * v64 + v16);
    v70 = v64;
    goto lab_0x408b5d;
  lab_0x408b5d:;
    int64_t v71 = *(int64_t *)(8 * v66 + v17); // 0x408b5d
    v26 = v69;
    v27 = v71;
    v32 = v66;
    v34 = v67;
    v21 = v71;
    v36 = v68;
    v30 = v69;
    v28 = v70;
    v33 = v66;
    v35 = v67;
    v37 = v68;
    v31 = v69;
    v29 = v70;
    if (v69 != v71) {
        goto lab_0x408b55;
    } else {
        goto lab_0x408b66;
    }
  lab_0x408c44:;
    int64_t v57 = v45;
    memcpy((int64_t *)v57, (int64_t *)(v57 + 8 * v43), (int32_t)v46);
    // 0x408ba8
    return 0;
}
// Address range: 0x408ca0 - 0x408d77
int64_t function_408ca0(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t v2 = a2;
    int64_t v3; // 0x408ca0
    int64_t v4; // 0x408ca0
    int32_t v5; // 0x408ca0
    int64_t v6; // 0x408ca0
    if (v2 == 15) {
        int64_t * mem = malloc(968); // 0x408d38
        if (mem == NULL) {
            // 0x408d19
            return 0;
        }
        int64_t v7 = (int64_t)mem; // 0x408d38
        *(int64_t *)a1 = v7;
        *mem = 968;
        v5 = 1;
        v6 = 0;
        v4 = 8;
        v3 = v7;
    } else {
        int64_t v8 = 0x100000000 * a2;
        int64_t v9 = v8 >> 26; // 0x408cb9
        v5 = v2 + 1;
        v6 = v9;
        v4 = v9 | 8;
        v3 = v8 >> 32;
    }
    int64_t v10 = a3;
    int64_t v11 = a4;
    *(int32_t *)a2 = v5;
    int64_t result = v3 + v4; // 0x408cc6
    int64_t v12 = v3 + v6;
    *(int64_t *)(v12 + 8) = 0;
    *(int64_t *)(v12 + 16) = v10;
    *(int64_t *)(v12 + 24) = v11;
    __asm_movups(*(int128_t *)(v12 + 48), __asm_movdqu(*(int128_t *)&v1));
    char * v13 = (char *)(v12 + 58); // 0x408ceb
    *v13 = *v13 & -13;
    *(int64_t *)(v12 + 32) = 0;
    *(int64_t *)(v12 + 40) = 0;
    *(int64_t *)(v12 + 64) = -1;
    if (a3 != 0) {
        // 0x408d0e
        *(int64_t *)v10 = result;
    }
    // 0x408d11
    if (a4 != 0) {
        // 0x408d16
        *(int64_t *)v11 = result;
    }
    // 0x408d19
    return result;
}
// Address range: 0x408d80 - 0x408e29
int64_t function_408d80(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 112; // 0x408d84
    int64_t v2 = a2 + 128; // 0x408d8a
    int64_t v3 = function_408ca0(v1, v2, 0, 0, a1 + 40); // 0x408dbd
    int64_t v4 = v3; // bp-48, 0x408dc2
    if (v3 == 0) {
        // 0x408e0d
        return 0;
    }
    *(int64_t *)v3 = a1;
    int64_t v5 = *&v4; // 0x408dcd
    char * v6 = (char *)(v5 + 50); // 0x408dd0
    *v6 = *v6 | 4;
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x408dd4
    int64_t v8; // 0x408d80
    int64_t v9; // 0x408d80
    int64_t result; // 0x408d80
    int64_t v10; // 0x408d80
    int64_t v11; // 0x408d80
    int64_t v12; // 0x408d80
    int64_t v13; // 0x408d80
    int64_t v14; // 0x408d80
    int64_t v15; // 0x408df9
    int64_t v16; // 0x408dfc
    int64_t v17; // 0x408deb
    int64_t v18; // 0x408deb
    if (v7 != 0) {
        // 0x408da8
        v13 = v7;
        v10 = v5;
        v9 = v5 + 8;
    } else {
        // 0x408deb
        v18 = *(int64_t *)(a1 + 16);
        v11 = v5;
        v12 = v5;
        v8 = v18;
        if (v18 != 0 != v18 != 0) {
            v14 = a1;
            v15 = *(int64_t *)v14;
            if (v15 == 0) {
                // 0x408e08
                result = v4;
                return result;
            }
            // 0x408de8
            v16 = *(int64_t *)v11;
            v17 = *(int64_t *)(v15 + 16);
            v11 = v16;
            v12 = v16;
            v8 = v17;
            while (v17 != 0 != v17 != v14) {
                // 0x408df9
                v14 = v15;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x408e08
                    result = v4;
                    return result;
                }
                // 0x408de8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
            }
        }
        // 0x408e20
        v13 = v8;
        v10 = v12;
        v9 = v12 + 16;
    }
    int64_t v19 = v13;
    int64_t v20 = function_408ca0(v1, v2, 0, 0, v19 + 40); // 0x408dbd
    int64_t * v21 = (int64_t *)v9; // 0x408dc2
    *v21 = v20;
    result = 0;
    while (v20 != 0) {
        int64_t v22 = v19;
        *(int64_t *)v20 = v10;
        v5 = *v21;
        v6 = (char *)(v5 + 50);
        *v6 = *v6 | 4;
        v7 = *(int64_t *)(v22 + 8);
        if (v7 != 0) {
            // 0x408da8
            v13 = v7;
            v10 = v5;
            v9 = v5 + 8;
        } else {
            // 0x408deb
            v18 = *(int64_t *)(v22 + 16);
            v11 = v5;
            int64_t v23 = v22; // 0x408df2
            v12 = v5;
            v8 = v18;
            if (v18 != 0 != v18 != 0) {
                v14 = v23;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x408e08
                    result = v4;
                    return result;
                }
                // 0x408de8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
                while (v17 != 0 != v17 != v14) {
                    // 0x408df9
                    v14 = v15;
                    v15 = *(int64_t *)v14;
                    if (v15 == 0) {
                        // 0x408e08
                        result = v4;
                        return result;
                    }
                    // 0x408de8
                    v16 = *(int64_t *)v11;
                    v17 = *(int64_t *)(v15 + 16);
                    v11 = v16;
                    v12 = v16;
                    v8 = v17;
                }
            }
            // 0x408e20
            v13 = v8;
            v10 = v12;
            v9 = v12 + 16;
        }
        // 0x408daf
        v19 = v13;
        v20 = function_408ca0(v1, v2, 0, 0, v19 + 40);
        v21 = (int64_t *)v9;
        *v21 = v20;
        result = 0;
    }
  lab_0x408e0d:
    // 0x408e0d
    return result;
}
// Address range: 0x408e30 - 0x40904a
int64_t function_408e30(int32_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = *(int64_t *)(a3 + 8); // 0x408e44
    int64_t v1; // 0x408e30
    int64_t v2; // 0x408e30
    int64_t v3; // 0x408e30
    int64_t v4; // 0x408e30
    int64_t v5; // 0x408e30
    int64_t v6; // bp-72, 0x408e30
    int64_t v7; // 0x408e30
    int64_t v8; // 0x408e7f
    int64_t v9; // 0x408e86
    int64_t v10; // 0x408e30
    int64_t v11; // 0x408ea9
    int64_t v12; // 0x408ec3
    if ((*(char *)(a2 + 56) & 16) == 0) {
        int64_t v13 = a2 + 128; // 0x408fd8
        int64_t v14 = a2 + 112; // 0x408fdf
        int64_t v15 = &v6;
        int64_t v16 = function_408ca0(v14, v13, 0, 0, v15); // 0x409002
        int64_t v17 = function_408ca0(v14, v13, 0, 0, v15); // 0x40901c
        v10 = v15;
        v8 = v13;
        v11 = v16;
        v9 = v14;
        v12 = v17;
        v1 = v15;
        v7 = v13;
        v5 = v16;
        v2 = v17;
        v3 = v14;
        v4 = v17;
        if (result != 0) {
            goto lab_0x408ecb;
        } else {
            goto lab_0x408ee9;
        }
    } else {
        if (result == 0) {
            int64_t v18 = a2 + 128; // 0x408f80
            int64_t v19 = a2 + 112; // 0x408f87
            int64_t v20 = &v6;
            int64_t v21 = function_408ca0(v19, v18, 0, 0, v20); // 0x408faa
            int64_t v22 = function_408ca0(v19, v18, 0, 0, v20); // 0x408fc4
            v1 = v20;
            v7 = v18;
            v5 = v21;
            v2 = v22;
            v3 = v19;
            v4 = v22;
            goto lab_0x408ee9;
        } else {
            uint64_t v23 = *(int64_t *)(a3 + 40); // 0x408e60
            if (v23 > 63 || (*(int64_t *)(a2 + 160) & 1 << v23 % 64) == 0) {
                // 0x408f67
                return result;
            }
            // 0x408e7f
            v8 = a2 + 128;
            v9 = a2 + 112;
            v10 = &v6;
            v11 = function_408ca0(v9, v8, 0, 0, v10);
            v12 = function_408ca0(v9, v8, 0, 0, v10);
            goto lab_0x408ecb;
        }
    }
  lab_0x408ecb:;
    int64_t v24 = function_408ca0(v9, v8, (int32_t)result, (int32_t)v12, v10); // 0x408ee1
    v1 = v10;
    v7 = v8;
    v5 = v11;
    v2 = v24;
    v3 = v9;
    v4 = v12;
    goto lab_0x408ee9;
  lab_0x408ee9:;
    int64_t v25 = function_408ca0(v3, v7, (int32_t)v5, (int32_t)v2, v1); // 0x408f04
    int64_t result2; // 0x408e30
    if (v4 == 0 || v5 == 0 || v2 == 0 || v25 == 0) {
        // 0x409038
        *a1 = 12;
        result2 = 0;
    } else {
        int64_t v26 = *(int64_t *)(a3 + 40); // 0x408f35
        *(int64_t *)(v4 + 40) = v26;
        *(int64_t *)(v5 + 40) = v26;
        char * v27 = (char *)(v4 + 50); // 0x408f48
        char v28 = *(char *)(a3 + 50) & 8;
        *v27 = *v27 & -9 | v28;
        char * v29 = (char *)(v5 + 50); // 0x408f5b
        *v29 = *v29 & -9 | v28;
        result2 = v25;
    }
    // 0x408f67
    return result2;
}
// Address range: 0x409050 - 0x4090cb
int64_t function_409050(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40905c
    int64_t v2 = *v1; // 0x40905c
    int32_t result = 0; // bp-28, 0x409060
    int64_t v3; // 0x409050
    if (v2 != 0) {
        // 0x40906d
        if (*(char *)(v2 + 48) == 17) {
            int64_t v4 = function_408e30(&result, a1, v2, v3); // 0x409098
            *v1 = v4;
            if (v4 != 0) {
                // 0x4090a6
                *(int64_t *)v4 = a2;
            }
        }
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x409073
    int64_t v6 = *v5; // 0x409073
    if (v6 == 0 || *(char *)(v6 + 48) != 17) {
        // 0x409082
        return result;
    }
    int64_t v7 = function_408e30(&result, a1, v6, v3); // 0x4090b8
    *v5 = v7;
    if (v7 != 0) {
        // 0x4090c6
        *(int64_t *)v7 = a2;
    }
    // 0x409082
    return result;
}
// Address range: 0x4090d0 - 0x40914f
int64_t function_4090d0(int64_t a1, int64_t a2) {
    // 0x4090d0
    int128_t v1; // 0x4090d0
    int128_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x4090d0
    *(int64_t *)(a1 + 8) = v4;
    if (v4 < 1) {
        int128_t v5 = __asm_pxor(v2, v2); // 0x409120
        *(int64_t *)(v3 + 16) = 0;
        __asm_movups(*(int128_t *)&v3, v5);
        return 0;
    }
    int64_t * v6 = (int64_t *)v3; // 0x4090ef
    *v6 = v4;
    int32_t size = 8 * (int32_t)v4; // 0x4090f5
    int64_t * mem = malloc(size); // 0x4090f5
    *(int64_t *)(v3 + 16) = (int64_t)mem;
    int64_t result; // 0x4090d0
    if (mem == NULL) {
        // 0x409138
        *(int64_t *)(v3 + 8) = 0;
        *v6 = 0;
        result = 12;
    } else {
        // 0x409103
        memcpy(mem, (int64_t *)*(int64_t *)(a2 + 16), size);
        result = 0;
    }
    // 0x409115
    return result;
}
// Address range: 0x409150 - 0x4092d2
int64_t function_409150(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x409150
    int128_t v1; // 0x409150
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    if (a2 != 0) {
        int64_t * v4 = (int64_t *)(a2 + 8); // 0x409167
        int64_t v5 = *v4; // 0x409167
        if (a3 != 0 && v5 >= 1) {
            int64_t * v6 = (int64_t *)(a3 + 8); // 0x40917d
            uint64_t v7 = *v6; // 0x40917d
            if (v7 < 1) {
                // 0x409253
                return function_4090d0(v3, a2);
            }
            int64_t v8 = v7 + v5; // 0x40918d
            *a1 = v8;
            int64_t * mem = malloc(8 * (int32_t)v8); // 0x40919f
            int64_t v9 = (int64_t)mem; // 0x40919f
            *(int64_t *)(v3 + 16) = v9;
            if (mem == NULL) {
                // 0x40923a
                return 12;
            }
            int64_t v10 = *(int64_t *)(a2 + 16); // 0x4091b4
            int64_t v11 = 0;
            int64_t v12 = 0;
            int64_t v13 = v9;
            int64_t v14 = *(int64_t *)(a3 + 16); // 0x4091f8
            int64_t v15 = *(int64_t *)v10; // 0x4091fc
            int64_t v16 = *(int64_t *)(v14 + 8 * v11); // 0x409203
            int64_t v17; // 0x409150
            int64_t v18; // 0x409150
            if (v15 > v16) {
                // 0x40920c
                *(int64_t *)v13 = v16;
                v17 = v11 + 1;
                v18 = v12;
            } else {
                // 0x4091c8
                *(int64_t *)v13 = v15;
                v17 = v11 + (int64_t)(v15 == v16);
                v18 = v12 + 1;
            }
            int64_t v19 = 1; // 0x4091ff
            int64_t v20 = v18;
            int64_t v21 = v17;
            uint64_t v22 = *v4; // 0x4091da
            int64_t v23; // 0x409150
            while (v22 > v20) {
                int64_t v24 = v13 + 8; // 0x4091de
                int64_t v25 = 8 * v20 + v10; // 0x4091eb
                if (v7 <= v21) {
                    int64_t v26 = v22 - v20; // 0x4092b0
                    memcpy((int64_t *)v24, (int64_t *)v25, 8 * (int32_t)v26);
                    v23 = v26 + v19;
                    goto lab_0x409279;
                }
                v11 = v21;
                v12 = v20;
                v13 = v24;
                v14 = *(int64_t *)(a3 + 16);
                v15 = *(int64_t *)v25;
                v16 = *(int64_t *)(v14 + 8 * v11);
                if (v15 > v16) {
                    // 0x40920c
                    *(int64_t *)v13 = v16;
                    v17 = v11 + 1;
                    v18 = v12;
                } else {
                    // 0x4091c8
                    *(int64_t *)v13 = v15;
                    v17 = v11 + (int64_t)(v15 == v16);
                    v18 = v12 + 1;
                }
                // 0x4091da
                v19++;
                v20 = v18;
                v21 = v17;
                v22 = *v4;
            }
            int64_t v27 = *v6; // 0x409270
            v23 = v19;
            if (v27 > v21) {
                int64_t v28 = v27 - v21; // 0x40929b
                memcpy((int64_t *)(8 * v19 + v9), (int64_t *)(8 * v21 + v14), 8 * (int32_t)v28);
                v23 = v28 + v19;
            }
          lab_0x409279:
            // 0x409279
            *(int64_t *)(v3 + 8) = v23;
            return 0;
        }
        // 0x409218
        if (v5 >= 0 == (v5 != 0)) {
            // 0x409253
            return function_4090d0(v3, a2);
        }
    }
    if (a3 != 0) {
        int64_t v29 = *(int64_t *)(a3 + 8); // 0x409222
        if (v29 >= 0 == (v29 != 0)) {
            // 0x409253
            return function_4090d0(v3, a3);
        }
    }
    // 0x409229
    *(int64_t *)(v3 + 16) = 0;
    *(int128_t *)a1 = (int128_t)__asm_movaps(__asm_pxor(v2, v2));
    // 0x40923a
    return 0;
}
// Address range: 0x4092e0 - 0x4095e0
int64_t function_4092e0(int128_t * a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x4092ee
    uint64_t v3 = *v2; // 0x4092ee
    if (v3 == 0) {
        // 0x4095b8
        *(int32_t *)a1 = 0;
        // 0x409387
        return 0;
    }
    uint64_t v4 = (int64_t)a4;
    int64_t v5 = v3 + (v4 & 0xffffffff); // 0x4092fe
    int64_t v6 = v5; // 0x409302
    if (v3 >= 1) {
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x409304
        int64_t v8 = v7; // 0x40930c
        int64_t v9 = v5; // 0x40930c
        v9 += *(int64_t *)v8;
        v8 += 8;
        v6 = v9;
        while (v7 + 8 * v3 != v8) {
            // 0x409310
            v9 += *(int64_t *)v8;
            v8 += 8;
            v6 = v9;
        }
    }
    int64_t v10 = *(int64_t *)(a2 + 136) & v6; // 0x409331
    int64_t v11 = 24 * v10 + *(int64_t *)(a2 + 64); // 0x40933c
    uint64_t v12 = *(int64_t *)v11; // 0x409340
    if (v12 >= 1) {
        int64_t v13 = 0; // 0x409352
        int64_t v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16)); // 0x409361
        int64_t result; // 0x4092e0
        if (*(int64_t *)v14 == v6) {
            // 0x40936a
            if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                // 0x409377
                result = v14;
                if ((char)function_406480(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                    // 0x409387
                    return result;
                }
            }
        }
        // 0x409358
        v13++;
        while (v13 != v12) {
            // 0x409361
            v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16));
            if (*(int64_t *)v14 == v6) {
                // 0x40936a
                if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                    // 0x409377
                    result = v14;
                    if ((char)function_406480(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                        // 0x409387
                        return result;
                    }
                }
            }
            // 0x409358
            v13++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x4093aa
    if (mem == NULL) {
        // 0x409538
        *(int32_t *)a1 = 12;
        // 0x409387
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x4093aa
    int64_t v15 = result2 + 8; // 0x4093bb
    if ((int32_t)function_4090d0(v15, v1) != 0) {
        // 0x4095d3
        free(mem);
        // 0x409538
        *(int32_t *)a1 = 12;
        // 0x409387
        return 0;
    }
    char * v16 = (char *)(result2 + 104); // 0x4093d6
    *v16 = *v16 & -16 | (char)a4 % 16;
    int64_t * v17 = (int64_t *)(result2 + 80); // 0x4093f6
    *v17 = v15;
    int64_t v18; // 0x4092e0
    int64_t v19; // 0x4092e0
    int64_t v20; // 0x4092e0
    int64_t v21; // 0x4092e0
    int64_t v22; // 0x4092e0
    int64_t v23; // 0x4092e0
    int64_t v24; // 0x4092e0
    int64_t v25; // 0x4092e0
    int64_t v26; // 0x409400
    int64_t v27; // 0x4092e0
    int64_t * v28; // 0x4092e0
    uint64_t v29; // 0x40943a
    if (*v2 >= 1) {
        // 0x409400
        v26 = result2 + 24;
        v27 = result2 + 16;
        v28 = (int64_t *)v27;
        v23 = v1;
        v18 = 0;
        v21 = 0;
        while (true) {
          lab_0x409420:
            // 0x409420
            v22 = v21;
            int64_t v30 = v18;
            int64_t v31 = 16 * *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v22) + v23; // 0x40942c
            int64_t v32 = v31 + 8; // 0x409430
            uint32_t v33 = *(int32_t *)v32; // 0x409430
            unsigned char v34 = *(char *)v32; // 0x409433
            v25 = 1;
            v20 = v30;
            if (v34 == 1 == (v33 & 0x3ff00) == 0) {
                goto lab_0x4094fe;
            } else {
                char v35 = 2 * *(char *)(v31 + 10) & 32 | *v16;
                *v16 = v35;
                if (v34 == 2) {
                    // 0x409550
                    *v16 = v35 | 16;
                } else {
                    if (v34 == 4) {
                        // 0x409484
                        *v16 = v35 | 64;
                    }
                }
                int64_t v36 = v34; // 0x409433
                v25 = v36;
                v20 = v30;
                if ((v33 & 0x3ff00) == 0) {
                    goto lab_0x4094fe;
                } else {
                    int64_t v37 = v36; // 0x409499
                    int64_t v38 = v30; // 0x409499
                    if (v15 == *v17) {
                        int64_t * mem2 = malloc(24); // 0x409585
                        int64_t v39 = (int64_t)mem2; // 0x409585
                        *v17 = v39;
                        if (mem2 == NULL) {
                            // 0x4095c6
                            function_407c00(result2);
                            goto lab_0x409538;
                        }
                        // 0x409594
                        if ((int32_t)function_4090d0(v39, v1) != 0) {
                          lab_0x409538:
                            // 0x409538
                            *(int32_t *)a1 = 12;
                            // 0x409387
                            return 0;
                        }
                        // 0x4095a3
                        *v16 = *v16 | -128;
                        v37 = v1;
                        v38 = 0;
                    }
                    // 0x40949f
                    v29 = (int64_t)(v33 / 256 & 0xff03ff);
                    v19 = v38;
                    v24 = v37;
                    if (v29 % 2 == 0) {
                        if (v4 % 2 == 0 || (v29 & 2) == 0) {
                            goto lab_0x4094b3;
                        } else {
                            goto lab_0x4094d0;
                        }
                    } else {
                        if (v4 % 2 == 0) {
                            goto lab_0x4094d0;
                        } else {
                            if ((v29 & 2) != 0) {
                                goto lab_0x4094d0;
                            } else {
                                goto lab_0x4094b3;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x409514:
    // 0x409514
    if ((int32_t)function_406b50(a2, result2, v6) == 0) {
        // 0x409387
        return result2;
    }
    // 0x40952a
    function_407c00(result2);
    // 0x409538
    *(int32_t *)a1 = 12;
    // 0x409387
    return 0;
  lab_0x4094fe:;
    int64_t v40 = v22 + 1; // 0x4094fe
    v23 = v25;
    v18 = v20;
    v21 = v40;
    if (v40 >= *v2) {
        // break -> 0x409514
        goto lab_0x409514;
    }
    goto lab_0x409420;
  lab_0x4094b3:
    if ((v4 & 2) == 0 == ((v29 & 16) != 0)) {
        goto lab_0x4094d0;
    } else {
        // 0x4094be
        v25 = v24;
        v20 = v19;
        if ((v4 & 4) != 0 || (v29 & 64) == 0) {
            goto lab_0x4094fe;
        } else {
            goto lab_0x4094d0;
        }
    }
  lab_0x4094d0:;
    int64_t v41 = v22 - v19; // 0x4094d3
    int64_t v42 = v24; // 0x4094d6
    if (v41 >= 0) {
        int64_t v43 = *v28; // 0x4094d8
        v42 = v24;
        if (v41 < v43) {
            // 0x4094e2
            *v28 = v43 - 1;
            function_4081a0(v27, v26, v41);
            v42 = v26;
        }
    }
    // 0x4094fa
    v25 = v42;
    v20 = v19 + 1;
    goto lab_0x4094fe;
}
// Address range: 0x4095e0 - 0x4097c8
int64_t function_4095e0(int32_t * a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x4095ee
    int64_t v3 = *v2; // 0x4095ee
    if (v3 == 0) {
        // 0x4097b4
        *a1 = 0;
        // 0x40975f
        return 0;
    }
    int64_t v4 = v3; // 0x4095fb
    if (v3 >= 1) {
        int64_t v5 = *(int64_t *)(v1 + 16); // 0x4095fd
        int64_t v6 = v5; // 0x409605
        int64_t v7 = v3; // 0x409605
        v7 += *(int64_t *)v6;
        v6 += 8;
        v4 = v7;
        while (v5 + 8 * v3 != v6) {
            // 0x409608
            v7 += *(int64_t *)v6;
            v6 += 8;
            v4 = v7;
        }
    }
    int64_t v8 = *(int64_t *)(a2 + 136) & v4; // 0x409624
    int64_t v9 = 24 * v8 + *(int64_t *)(a2 + 64); // 0x40962f
    uint64_t v10 = *(int64_t *)v9; // 0x409633
    if (v10 >= 1) {
        int64_t v11 = 0; // 0x409642
        int64_t v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16)); // 0x409648
        int64_t result; // 0x4095e0
        int64_t v13; // 0x409658
        if (*(int64_t *)v12 == v4) {
            // 0x409651
            v13 = function_406480(v12 + 8, v1, 3 * v8);
            result = v12;
            if ((char)v13 != 0) {
                // 0x40975f
                return result;
            }
        }
        // 0x409665
        v11++;
        while (v10 != v11) {
            // 0x409648
            v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16));
            if (*(int64_t *)v12 == v4) {
                // 0x409651
                v13 = function_406480(v12 + 8, v1, 3 * v8);
                result = v12;
                if ((char)v13 != 0) {
                    // 0x40975f
                    return result;
                }
            }
            // 0x409665
            v11++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x409678
    if (mem == NULL) {
        // 0x4097a8
        *a1 = 12;
        // 0x40975f
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x409678
    int64_t v14 = result2 + 8; // 0x409689
    if ((int32_t)function_4090d0(v14, v1) != 0) {
        // 0x4097a0
        free(mem);
        // 0x4097a8
        *a1 = 12;
        // 0x40975f
        return 0;
    }
    uint64_t v15 = *v2; // 0x4096a0
    *(int64_t *)(result2 + 80) = v14;
    char v16; // 0x4095e0
    int64_t v17; // 0x4095e0
    int64_t v18; // 0x4095e0
    int64_t v19; // 0x4096b9
    char * v20; // 0x4095e0
    if (v15 >= 1) {
        int64_t v21 = *(int64_t *)(v1 + 16); // 0x4096b1
        v19 = v21 + 8 * v15;
        v20 = (char *)(result2 + 104);
        v17 = v21;
        while (true) {
          lab_0x409704_2:
            // 0x409704
            v18 = v17;
            int64_t v22 = 16 * *(int64_t *)v18 + v21; // 0x40970b
            int64_t v23 = v22 + 8; // 0x40970e
            char v24 = *(char *)v23; // 0x40970e
            if (v24 != 1) {
                char v25 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                *v20 = v25;
                if (v24 == 2) {
                    // 0x409778
                    *v20 = v25 | 16;
                    goto lab_0x4096fb;
                } else {
                    if (v24 != 4) {
                        // 0x409788
                        v16 = v25;
                        if (v24 == 12) {
                            goto lab_0x409740;
                        } else {
                            // 0x40978d
                            v16 = v25;
                            if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                                goto lab_0x4096fb;
                            } else {
                                goto lab_0x409740;
                            }
                        }
                    } else {
                        // 0x4096f5
                        *v20 = v25 | 64;
                        goto lab_0x4096fb;
                    }
                }
            } else {
                // 0x409717
                if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                    goto lab_0x4096fb;
                } else {
                    char v26 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                    *v20 = v26;
                    v16 = v26;
                    goto lab_0x409740;
                }
            }
        }
    }
  lab_0x40974d_2:
    // 0x40974d
    if ((int32_t)function_406b50(a2, result2, v4) == 0) {
        // 0x40975f
        return result2;
    }
    // 0x4097be
    function_407c00(result2);
    // 0x4097a8
    *a1 = 12;
    // 0x40975f
    return 0;
  lab_0x4096fb:;
    int64_t v27 = v18 + 8; // 0x4096fb
    if (v19 == v27) {
        // break -> 0x40974d
        goto lab_0x40974d_2;
    }
    // 0x409704
    v17 = v27;
    goto lab_0x409704_2;
  lab_0x409740:;
    int64_t v28 = v18 + 8; // 0x409740
    *v20 = v16 | -128;
    if (v19 == v28) {
        // break -> 0x40974d
        goto lab_0x40974d_2;
    }
    // 0x409704
    v17 = v28;
    goto lab_0x409704_2;
}
// Address range: 0x4097d0 - 0x409878
int64_t function_4097d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4097d0
    if (a4 < 1) {
        // 0x409868
        return 0;
    }
    int64_t v1 = 0; // 0x4097d0
    int64_t result; // 0x4097d0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = 8 * v2; // 0x409849
        int64_t * v4 = (int64_t *)(v3 + a2); // 0x409849
        int64_t v5 = *v4; // 0x409849
        int64_t v6 = *(int64_t *)(v3 + a3); // 0x40984e
        if (v5 != 0) {
            if (v6 != 0) {
                // 0x4097fd
                int64_t v7; // bp-72, 0x4097d0
                int64_t v8 = function_409150(&v7, v5 + 8, v6 + 8, a4); // 0x40980a
                int32_t v9 = v8; // 0x40980f
                int32_t v10 = v9; // bp-76, 0x40980f
                result = v8;
                if (v9 != 0) {
                    // break -> 0x409868
                    break;
                }
                // 0x409817
                int64_t v11; // 0x4097d0
                *v4 = function_4095e0(&v10, a1, &v7, a4, v11, v11);
                free((int64_t *)v11);
                uint32_t v12 = v10; // 0x409838
                if (v12 != 0) {
                    // 0x409868
                    result = v12;
                    return result;
                }
            }
            int64_t v13 = v2 + 1; // 0x409840
            v1 = v13;
            result = 0;
            if (v13 == a4) {
                // break -> 0x409868
                break;
            }
        } else {
            // 0x409858
            *v4 = v6;
            int64_t v14 = v2 + 1; // 0x40985d
            v1 = v14;
            result = 0;
            if (v14 == a4) {
                // break -> 0x409868
                break;
            }
        }
    }
  lab_0x409868_2:
    // 0x409868
    return result;
}
// Address range: 0x409880 - 0x409c02
int64_t function_409880(int64_t a1, int128_t * a2, uint64_t a3, int64_t a4, int32_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 200); // 0x409891
    if (v1 <= 0) {
        // 0x409b82
        return 0;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(a1 + 216); // 0x4098a4
    int64_t v4 = *v3; // 0x4098a4
    int64_t v5 = v4 + 8; // 0x4098bc
    int64_t v6 = 0;
    uint64_t v7 = v6 + v1; // 0x4098a0
    int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x4098b5
    int64_t v9 = v8; // 0x4098c1
    int64_t v10 = v8; // 0x4098c1
    int64_t v11 = v1; // 0x4098c1
    int64_t v12; // 0x409880
    int64_t v13; // 0x409880
    uint64_t v14; // 0x4098d0
    int64_t v15; // 0x4098de
    if (*(int64_t *)(40 * v8 + v5) >= a3) {
        v12 = v6;
        if (v9 <= v6) {
            // break (via goto) -> 0x4098fb
            goto lab_0x4098fb;
        }
        // 0x4098d0
        v14 = v9 + v6;
        v15 = (v14 / 0x8000000000000000 + v14) / 2;
        v10 = v15;
        v11 = v9;
        while (*(int64_t *)(40 * v15 + v5) >= a3) {
            // 0x4098f6
            v13 = v15;
            v12 = v6;
            if (v13 <= v6) {
                // break (via goto) -> 0x4098fb
                goto lab_0x4098fb;
            }
            // 0x4098d0
            v14 = v13 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v13;
        }
    }
    int64_t v16 = v10 + 1; // 0x409b70
    v12 = v16;
    while (v16 < v11) {
        // 0x4098a0
        v6 = v16;
        v7 = v6 + v11;
        v8 = (v7 / 0x8000000000000000 + v7) / 2;
        v9 = v8;
        v10 = v8;
        if (*(int64_t *)(40 * v8 + v5) >= a3) {
            v12 = v6;
            if (v9 <= v6) {
                // break (via goto) -> 0x4098fb
                goto lab_0x4098fb;
            }
            // 0x4098d0
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v9;
            while (*(int64_t *)(40 * v15 + v5) >= a3) {
                // 0x4098f6
                v13 = v15;
                v12 = v6;
                if (v13 <= v6) {
                    // break (via goto) -> 0x4098fb
                    goto lab_0x4098fb;
                }
                // 0x4098d0
                v14 = v13 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v15;
                v11 = v13;
            }
        }
        // 0x409b70
        v16 = v10 + 1;
        v12 = v16;
    }
  lab_0x4098fb:
    // 0x4098fb
    if (v1 <= v12) {
        // 0x409b82
        return 0;
    }
    int64_t v17 = 40 * v12; // 0x40990f
    if (v12 == -1 | *(int64_t *)(v17 + 8 + v4) != a3) {
        // 0x409b82
        return 0;
    }
    int64_t v18 = v2 + 16; // 0x409936
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x409945
    int64_t * v20 = (int64_t *)(a1 + 184);
    int64_t v21; // bp-88, 0x409880
    int64_t v22 = &v21;
    int64_t v23 = v4; // 0x40994f
    int64_t * v24; // 0x409880
    int64_t v25; // 0x409880
    int64_t v26; // 0x409880
    int64_t result; // 0x409880
    int64_t v27; // 0x409880
    int64_t v28; // 0x409880
    int64_t v29; // 0x409880
    int64_t v30; // 0x409880
    int32_t v31; // bp-92, 0x409880
    int64_t v32; // 0x409a58
    int64_t v33; // 0x409973
    int64_t v34; // 0x409977
    int64_t v35; // 0x409987
    while (true) {
        // 0x409953
        int64_t v36; // 0x409880
        v29 = v36;
        v25 = v23 + v17;
        int64_t v37; // 0x409a82
        while (true) {
          lab_0x409a38:
            // 0x409a38
            v26 = v25;
            v30 = v29;
            int64_t v38 = *(int64_t *)v26; // 0x409a38
            int64_t v39 = *(int64_t *)(v2 + 8); // 0x409a3b
            v28 = v30;
            if (function_408030(v39, v18, v38) == 0) {
                goto lab_0x409a29;
            } else {
                // 0x409a54
                v32 = *(int64_t *)(v26 + 24) + a3;
                int64_t v40 = v32 - *(int64_t *)(v26 + 16); // 0x409a5e
                if (v40 != a3) {
                    // 0x409968
                    v33 = *(int64_t *)(*(int64_t *)(v19 + 24) + 8 * v38);
                    v34 = 8 * v40;
                    int64_t * v41 = (int64_t *)(*v20 + v34);
                    v35 = *v41;
                    if (v35 == 0) {
                        // 0x409b20
                        v21 = 1;
                        int64_t * mem = malloc(8); // 0x409b3c
                        if (mem == NULL) {
                            // 0x409bc2
                            result = 12;
                            return result;
                        }
                        // 0x409b4b
                        v31 = 0;
                        *mem = v33;
                        v24 = v41;
                        v27 = (int64_t)mem;
                        goto lab_0x4099ee;
                    } else {
                        // 0x409998
                        v28 = v30;
                        if (function_408030(*(int64_t *)(v35 + 16), v35 + 24, v33) != 0) {
                            goto lab_0x409a29;
                        } else {
                            // 0x4099ad
                            v31 = function_4090d0(v22, v35 + 8);
                            int64_t v42 = function_406a20(v22, v33); // 0x4099c9
                            if (v31 != 0) {
                                goto lab_0x409bb0_2;
                            }
                            if ((char)v42 != 1) {
                                goto lab_0x409bb0_2;
                            }
                            // 0x4099e2
                            v24 = (int64_t *)(*v20 + v34);
                            v27 = v30;
                            goto lab_0x4099ee;
                        }
                    }
                } else {
                    int64_t v43 = *(int64_t *)(v19 + 40); // 0x409a6b
                    v37 = *(int64_t *)*(int64_t *)(24 * v38 + 16 + v43);
                    v28 = v30;
                    if (function_408030(v39, v18, v37) == 0) {
                        // break -> 0x409a92
                        break;
                    }
                    goto lab_0x409a29;
                }
            }
        }
        // 0x409a92
        v21 = 1;
        int64_t * mem2 = malloc(8); // 0x409aa9
        int32_t v44; // 0x409880
        if (mem2 == NULL) {
            // 0x409be6
            v21 = 0;
            v44 = 12;
        } else {
            // 0x409abc
            *mem2 = v37;
            v44 = 0;
        }
        // 0x409ac1
        v31 = v44;
        int64_t v45 = function_4089a0(v19, &v21, a4, a5); // 0x409ad6
        int64_t v46 = function_408570((int64_t *)a2, (int128_t *)&v21); // 0x409ae6
        free(mem2);
        uint32_t v47 = v31; // 0x409af8
        if ((v47 || (int32_t)(v46 || v45)) != 0) {
            // 0x409bd6
            result = v47;
            if (v47 != 0) {
                return result;
            } else {
                // 0x409bda
                result = ((int32_t)v45 != 0 ? v45 : v46) & 0xffffffff;
                return result;
            }
        }
        // 0x409b0a
        v36 = (int64_t)mem2;
        v23 = *v3;
    }
  lab_0x409b82:
    // 0x409b82
    return result;
  lab_0x409bb0_2:
    // 0x409bb0
    free((int64_t *)v30);
    result = v31;
    if (v31 != 0) {
        return result;
    } else {
        // 0x409bc2
        result = 12;
        return result;
    }
  lab_0x409a29:
    // 0x409a29
    v29 = v28;
    v25 = v26 + 40;
    result = 0;
    if (*(char *)(v26 + 32) == 0) {
        return result;
    }
    goto lab_0x409a38;
  lab_0x4099ee:;
    int64_t v48 = v27;
    *v24 = function_4095e0(&v31, v19, &v21, v33, v32, v35);
    free((int64_t *)v48);
    v28 = v48;
    if (*(int64_t *)(*v20 + v34) == 0) {
        uint32_t v49 = v31; // 0x409b98
        v28 = v48;
        if (v49 != 0) {
            // 0x409b82
            result = v49;
            goto lab_0x409b82;
        }
    }
    goto lab_0x409a29;
}
// Address range: 0x409c10 - 0x409d51
int64_t function_409c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x409c22
    if (a2 < 1) {
      lab_0x409cf2:
        // 0x409cf2
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 232);
    int64_t * v3 = (int64_t *)(a1 + 248);
    int64_t * v4 = (int64_t *)(a1 + 240);
    int64_t v5 = 0; // 0x409c40
    int64_t v6; // 0x409c10
    int64_t v7; // 0x409c50
    int64_t v8; // 0x409c5b
    uint64_t v9; // 0x409c65
    while (true) {
        // 0x409c4d
        v6 = v5;
        v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
        v8 = 16 * v7 + *(int64_t *)v1;
        if (*(char *)(v8 + 8) == 8) {
            // 0x409c65
            v9 = *(int64_t *)v8;
            if (v9 <= 63) {
                // 0x409c6e
                if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                    // break -> 0x409c7c
                    break;
                }
            }
        }
        // 0x409c40
        v5 = v6 + 1;
        if (v5 >= a2) {
            return 0;
        }
    }
    int64_t v10 = *v2; // 0x409c7c
    int64_t v11 = *v3; // 0x409c83
    int64_t v12 = v10; // 0x409c91
    int64_t v13 = v11; // 0x409c91
    int64_t * mem; // 0x409d20
    if (v10 == *v4) {
        // 0x409d08
        mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
        if (mem == NULL) {
            // break -> 0x409cf2
            break;
        }
        // 0x409d32
        v13 = (int64_t)mem;
        *v3 = v13;
        v12 = *v2;
        *v4 = 2 * v10;
    }
    int64_t * mem2 = calloc(1, 48); // 0x409cac
    int64_t v14 = (int64_t)mem2; // 0x409cac
    *(int64_t *)(v13 + 8 * v12) = v14;
    int64_t result = 12; // 0x409cc2
    while (mem2 != NULL) {
        // 0x409cc4
        *mem2 = a4;
        int64_t v15 = v6 + 1; // 0x409cd0
        *(int64_t *)(v14 + 8) = v7;
        *v2 = v12 + 1;
        result = 0;
        if (v15 >= 48) {
            // break -> 0x409cf2
            break;
        }
        v5 = v15;
        while (true) {
            // 0x409c4d
            v6 = v5;
            v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
            v8 = 16 * v7 + *(int64_t *)v1;
            if (*(char *)(v8 + 8) == 8) {
                // 0x409c65
                v9 = *(int64_t *)v8;
                if (v9 <= 63) {
                    // 0x409c6e
                    if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                        // break -> 0x409c7c
                        break;
                    }
                }
            }
            // 0x409c40
            v5 = v6 + 1;
            if (v5 >= 48) {
                return 0;
            }
        }
        // 0x409c7c
        v10 = *v2;
        v11 = *v3;
        v12 = v10;
        v13 = v11;
        if (v10 == *v4) {
            // 0x409d08
            mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
            result = 12;
            if (mem == NULL) {
                // break -> 0x409cf2
                break;
            }
            // 0x409d32
            v13 = (int64_t)mem;
            *v3 = v13;
            v12 = *v2;
            *v4 = 2 * v10;
        }
        // 0x409c93
        mem2 = calloc(1, 48);
        v14 = (int64_t)mem2;
        *(int64_t *)(v13 + 8 * v12) = v14;
        result = 12;
    }
    // 0x409cf2
    return result;
}
// Address range: 0x409d60 - 0x409e4e
int64_t function_409d60(int64_t a1, int64_t a2, int32_t a3) {
    if (a2 < 0) {
        // 0x409e10
        return (int64_t)*(int32_t *)(a1 + 112);
    }
    // 0x409d72
    if (*(int64_t *)(a1 + 88) == a2) {
        // 0x409db6
        return a3 & 2 ^ 10;
    }
    // 0x409d7c
    if (*(int32_t *)(a1 + 144) < 2) {
        unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a2); // 0x409dcb
        int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 128) + (int64_t)(8 * v1 / 64)); // 0x409dd6
        if ((1 << (int64_t)(v1 % 64) & v2) != 0) {
            // 0x409db6
            return 1;
        }
        // 0x409dea
        if (v1 != 10) {
            // 0x409db6
            return 0;
        }
        // 0x409df1
        return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
    }
    int64_t v3 = a2;
    int32_t wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16)); // 0x409d9a
    while (wc == -1) {
        // 0x409d90
        if (v3 == 0) {
            // 0x409e10
            return (int64_t)*(int32_t *)(a1 + 112);
        }
        v3--;
        wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16));
    }
    // 0x409da2
    if (*(char *)(a1 + 142) != 0) {
        // 0x409e30
        if (wc != 95 != (iswalnum(wc) == 0)) {
            // 0x409db6
            return 1;
        }
    }
    // 0x409daf
    if (wc != 10) {
        // 0x409db6
        return 0;
    }
    // 0x409df1
    return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
}
// Address range: 0x409e50 - 0x409f7b
int64_t function_409e50(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a3); // 0x409e54
    int64_t v2 = a2 + 8;
    unsigned char v3 = *(char *)v2; // 0x409e58
    if (v3 == 3) {
        uint64_t v4 = (int64_t)v1; // 0x409e54
        if ((*(int64_t *)((v4 / 8 & 24) + a2) & 1 << v4 % 64) == 0) {
            // 0x409eff
            return 0;
        }
    } else {
        if (v3 < 4) {
            // 0x409f08
            if (v1 == (char)a2 != (v3 == 1)) {
                // 0x409eff
                return 0;
            }
        } else {
            if (v3 != 5) {
                // 0x409e6e
                if (v1 < 0 || v3 != 7) {
                    // 0x409eff
                    return 0;
                }
            }
            if (v1 == 10) {
                // 0x409f60
                if ((*(char *)(*(int64_t *)(a1 + 152) + 216) & 64) == 0) {
                    // 0x409eff
                    return 0;
                }
            } else {
                if (v1 == 0) {
                    // 0x409e90
                    if (*(char *)(*(int64_t *)(a1 + 152) + 216) <= -1) {
                        // 0x409eff
                        return 0;
                    }
                }
            }
        }
    }
    uint32_t v5 = *(int32_t *)v2; // 0x409ea3
    if ((v5 & 0x3ff00) == 0) {
        // 0x409eff
        return 1;
    }
    int64_t v6 = v5; // 0x409ea3
    uint64_t v7 = function_409d60(a1, a3, *(int32_t *)(a1 + 160)); // 0x409ebf
    if ((v6 & 1024) != 0) {
        // 0x409f50
        if ((v6 & 2048) == 0 != v7 % 2 != 0) {
            // 0x409eff
            return 0;
        }
    } else {
        if ((v6 & 2048) != 0) {
            // 0x409ed7
            if (v7 % 2 != 0) {
                // 0x409eff
                return 0;
            }
        }
    }
    int64_t result = 0; // 0x409ee2
    if ((v6 & 0x2000) != 0 != ((v7 & 2) == 0)) {
        // 0x409eeb
        result = (char)(v5 / 256) <= -1 ? v7 / 8 % 2 : 1;
    }
    // 0x409eff
    return result;
}
// Address range: 0x409f80 - 0x40a048
int64_t function_409f80(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = function_409d60(v1, a4, *(int32_t *)(v1 + 160)); // 0x409f96
    if (a2 < 1) {
        // 0x40a01c
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + 152); // 0x409fa4
    int64_t v4 = 0; // 0x409fc6
    int64_t result; // 0x409f80
    uint32_t v5; // 0x409fde
    uint32_t v6; // 0x409fe1
    int64_t v7; // 0x409fd0
    while (true) {
      lab_0x409fd0:
        // 0x409fd0
        v7 = *(int64_t *)(8 * v4 + v3);
        int64_t v8 = *(int64_t *)v3 + 8 + 16 * v7; // 0x409fde
        if (*(char *)v8 != 2) {
            goto lab_0x40a038;
        } else {
            // 0x409ff1
            v5 = *(int32_t *)v8;
            result = v7;
            if ((v5 & 0x3ff00) == 0) {
                // break -> 0x40a01c
                break;
            }
            // 0x409ff6
            v6 = v5 / 256;
            int64_t v9 = v6; // 0x409fe1
            if ((v9 & 4) == 0) {
                if (v2 % 2 == 0 || (v9 & 8) == 0) {
                    goto lab_0x40a005;
                } else {
                    goto lab_0x40a038;
                }
            } else {
                if (v2 % 2 == 0) {
                    goto lab_0x40a038;
                } else {
                    if ((v9 & 8) != 0) {
                        goto lab_0x40a038;
                    } else {
                        goto lab_0x40a005;
                    }
                }
            }
        }
    }
  lab_0x40a01c_2:
    // 0x40a01c
    return result;
  lab_0x40a038:
    // 0x40a038
    v4++;
    result = 0;
    if (v4 == a2) {
        return result;
    }
    goto lab_0x409fd0;
  lab_0x40a005:
    if ((v2 & 2) == 0 != (v5 & 0x2000) != 0) {
        // 0x40a010
        result = v7;
        if ((v2 & 8) == 0 != (char)v6 < 0) {
            // break -> 0x40a01c
            goto lab_0x40a01c_2;
        }
    }
    goto lab_0x40a038;
}
// Address range: 0x40a050 - 0x40a837
int64_t function_40a050(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x40a06a
    int64_t v3 = *v2; // 0x40a06a
    int64_t v4 = a2 - v3; // 0x40a074
    int64_t * v5; // 0x40a050
    char * v6; // 0x40a050
    int64_t * v7; // 0x40a050
    int32_t * v8; // 0x40a050
    int64_t * v9; // 0x40a050
    int64_t * v10; // 0x40a050
    int64_t v11; // 0x40a050
    if (v3 > a2) {
        int32_t * v12 = (int32_t *)(v1 + 144);
        if (*v12 >= 2) {
            // 0x40a07f
            *(int64_t *)(v1 + 32) = 0;
        }
        int64_t * v13 = (int64_t *)(v1 + 48);
        *v13 = 0;
        *v2 = 0;
        int64_t * v14 = (int64_t *)(v1 + 88);
        *v14 = *(int64_t *)(v1 + 80);
        int64_t * v15 = (int64_t *)(v1 + 56);
        *v15 = 0;
        int64_t * v16 = (int64_t *)(v1 + 104);
        *v16 = *(int64_t *)(v1 + 96);
        char * v17 = (char *)(v1 + 140);
        *v17 = 0;
        *(int32_t *)(v1 + 112) = 2 * a3 & 2 ^ 6;
        v4 = a2;
        if (*(char *)(v1 + 139) == 0) {
            // 0x40a1a0
            *(int64_t *)(v1 + 8) = v1;
            v7 = v13;
            v6 = v17;
            v5 = v15;
            v11 = a2;
            v10 = v16;
            v9 = v14;
            v8 = v12;
            if (a2 != 0) {
                goto lab_0x40a0e3;
            } else {
                goto lab_0x40a1b0;
            }
        } else {
            goto lab_0x40a0da;
        }
    } else {
        goto lab_0x40a0da;
    }
  lab_0x40a6d8:
    // 0x40a6d8
    *v7 = 0;
    int64_t v18; // 0x40a4d7
    int64_t v19 = v18; // 0x40a6e2
    int64_t v20; // 0x40a4da
    int64_t v21 = v20; // 0x40a6e2
    int64_t v22 = 0; // 0x40a6e2
    int64_t v23 = v1; // 0x40a6e2
    goto lab_0x40a57f;
  lab_0x40a2d1:;
    // 0x40a2d1
    int64_t v41; // 0x40a050
    int64_t v38; // 0x40a050
    int64_t v42 = v41 + v38; // 0x40a2d1
    int64_t v43; // 0x40a050
    int64_t v44; // 0x40a050
    int64_t v39; // 0x40a050
    int64_t v45; // 0x40a050
    int64_t v46; // 0x40a050
    int32_t v47; // bp-64, 0x40a050
    if (v42 < a2) {
        int64_t * v48 = (int64_t *)(v1 + 32); // 0x40a304
        int64_t v49 = &v47;
        int64_t v50 = *(int64_t *)(v1 + 80) - v42; // 0x40a30d
        int64_t v51 = function_406400(&v47, v42 + v39, v50); // 0x40a320
        int64_t v52 = v51; // 0x40a336
        int64_t v53 = v47; // 0x40a336
        int64_t v54; // 0x40a050
        if (v51 >= 0xfffffffffffffffe) {
            // 0x40a765
            v54 = 0;
            if (v50 != 0 && v51 != 0) {
                // 0x40a76f
                v54 = (int64_t)*(char *)(v42 + v49);
            }
            // 0x40a777
            v52 = 1;
            v53 = v54;
        }
        int64_t v55 = v52 + v42; // 0x40a33c
        int64_t v56 = v49; // 0x40a342
        while (v55 < a2) {
            int64_t v57 = v55;
            v50 = *(int64_t *)(v1 + 80) - v57;
            v51 = function_406400(&v47, v57 + v56, v50);
            v52 = v51;
            v53 = v47;
            if (v51 >= 0xfffffffffffffffe) {
                // 0x40a765
                v54 = 0;
                if (v50 != 0 && v51 != 0) {
                    // 0x40a76f
                    v54 = (int64_t)*(char *)(v57 + v49);
                }
                // 0x40a777
                v52 = 1;
                v53 = v54;
            }
            // 0x40a33c
            v55 = v52 + v57;
            v56 = v49;
        }
        int64_t v58 = v55 - a2; // 0x40a344
        *v7 = v58;
        v46 = v53;
        v45 = v49;
        v43 = v58;
        v44 = v58;
        if ((int32_t)v53 == -1) {
            goto lab_0x40a6f1;
        } else {
            goto lab_0x40a357;
        }
    } else {
        int64_t v59 = v42 - a2; // 0x40a6e7
        *v7 = v59;
        v44 = v59;
        goto lab_0x40a6f1;
    }
  lab_0x40a0da:
    // 0x40a0da
    if (v4 == 0) {
        // 0x40a0da
        v10 = (int64_t *)(v1 + 104);
        v9 = (int64_t *)(v1 + 88);
        v8 = (int32_t *)(v1 + 144);
        goto lab_0x40a1b0;
    } else {
        // 0x40a0da
        v7 = (int64_t *)(v1 + 48);
        v6 = (char *)(v1 + 140);
        v5 = (int64_t *)(v1 + 56);
        v11 = v4;
        goto lab_0x40a0e3;
    }
  lab_0x40a0e3:;
    int64_t v60 = v11;
    int64_t * v24 = v5;
    int64_t v61 = *v24; // 0x40a0e3
    char v62 = *v6; // 0x40a0e7
    int64_t v63 = *v7; // 0x40a0ee
    char * v64; // 0x40a050
    int64_t v30; // 0x40a050
    int64_t v65; // 0x40a050
    int64_t v31; // 0x40a050
    int64_t v66; // 0x40a050
    int64_t v33; // 0x40a050
    int64_t v67; // 0x40a050
    char v68; // 0x40a050
    int32_t v32; // 0x40a050
    int64_t v40; // 0x40a5f9
    int64_t * v69; // 0x40a398
    int64_t v70; // 0x40a398
    int64_t v71; // 0x40a3c5
    uint64_t v72; // 0x40a3c8
    if (v61 > v60) {
        if (v62 != 0) {
            // 0x40a398
            v69 = (int64_t *)(v1 + 24);
            v70 = *v69;
            int64_t v73 = 0; // 0x40a3a1
            uint64_t v74 = v73 + v63; // 0x40a3b7
            v71 = (v74 / 0x8000000000000000 + v74) / 2;
            v72 = *(int64_t *)(8 * v71 + v70);
            int64_t v75 = v71; // 0x40a3d3
            int64_t v76 = v73; // 0x40a3d3
            if (v72 <= v60) {
                if (v72 >= v60) {
                    // 0x40a6c0
                    goto lab_0x40a415;
                }
                // 0x40a3ae
                v75 = v63;
                v76 = v71 + 1;
            }
            // 0x40a3b2
            v73 = v76;
            int64_t v77 = v75;
            while (v73 < v77) {
                int64_t v78 = v77;
                v74 = v73 + v78;
                v71 = (v74 / 0x8000000000000000 + v74) / 2;
                v72 = *(int64_t *)(8 * v71 + v70);
                v75 = v71;
                v76 = v73;
                if (v72 <= v60) {
                    if (v72 >= v60) {
                        // 0x40a6c0
                        goto lab_0x40a415;
                    }
                    // 0x40a3ae
                    v75 = v78;
                    v76 = v71 + 1;
                }
                // 0x40a3b2
                v73 = v76;
                v77 = v75;
            }
            // 0x40a408
            goto lab_0x40a415;
        } else {
            // 0x40a103
            *(int32_t *)(v1 + 112) = (int32_t)function_409d60(v1, v60 - 1, a3);
            if (*(int32_t *)(v1 + 144) > 1) {
                int64_t v79 = *(int64_t *)(v1 + 16); // 0x40a1c0
                int64_t v80; // 0x40a10d
                memmove((int64_t *)v79, (int64_t *)(v79 + 4 * v60), 4 * (int32_t)v80);
            }
            int64_t v81 = v63 - v60;
            char * v82 = (char *)(v1 + 139); // 0x40a125
            char v83 = *v82; // 0x40a125
            char v84 = v83; // 0x40a12e
            int64_t v85 = v1; // 0x40a12e
            int64_t v86 = v81; // 0x40a12e
            if (v83 != 0) {
                // 0x40a3e0
                v85 = *(int64_t *)(v1 + 8);
                memmove((int64_t *)v85, (int64_t *)(v85 + v60), (int32_t)v81);
                v84 = *v82;
                v86 = *v7 - v60;
            }
            // 0x40a134
            *v24 = *v24 - v60;
            *v7 = v86;
            v68 = v84;
            v66 = v85;
            goto lab_0x40a13c;
        }
    } else {
        if (v62 != 0) {
            // 0x40a73d
            *v6 = 0;
            int64_t v87 = v60 - a2;
            *(int64_t *)(v1 + 88) = *(int64_t *)(v1 + 80) + v87;
            *(int64_t *)(v1 + 104) = *(int64_t *)(v1 + 96) + v87;
        }
        int32_t v88 = *(int32_t *)(v1 + 144); // 0x40a2a8
        int64_t v89 = *v2; // 0x40a2af
        *v7 = 0;
        if (v88 < 2) {
            int64_t v90 = (int64_t)*(char *)(v60 - 1 + v1 + v89); // 0x40a1fe
            int64_t v91 = *(int64_t *)(v1 + 120); // 0x40a204
            *v24 = 0;
            int64_t v92 = v90; // 0x40a213
            if (v91 != 0) {
                // 0x40a215
                v92 = (int64_t)*(char *)(v91 + v90);
            }
            int64_t v93 = *(int64_t *)((v92 / 8 & 24) + *(int64_t *)(v1 + 128)); // 0x40a227
            int32_t v94 = 1; // 0x40a235
            if ((v93 & 1 << v92 % 64) == 0) {
                // 0x40a237
                v94 = 0;
                if (v92 == 10) {
                    // 0x40a23e
                    v94 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
                }
            }
            int64_t * v95 = (int64_t *)(v1 + 88); // 0x40a250
            int64_t * v96 = (int64_t *)(v1 + 104); // 0x40a254
            *(int32_t *)(v1 + 112) = v94;
            int64_t v97 = *v95 - v60; // 0x40a25b
            int64_t v98 = *v96 - v60; // 0x40a25e
            char * v99 = (char *)(v1 + 139);
            v30 = v97;
            v31 = v98;
            v32 = v88;
            v33 = v1;
            if (*v99 == 0) {
                goto lab_0x40a154;
            } else {
                // 0x40a26e
                *v2 = a2;
                *v95 = v97;
                *v96 = v98;
                v64 = v99;
                v65 = v97;
                v67 = v1;
                goto lab_0x40a280;
            }
        } else {
            // 0x40a2c4
            v38 = v61;
            v39 = v1;
            v41 = v89;
            if (*(char *)(v1 + 137) != 0) {
                int64_t v100 = v89 + v1; // 0x40a5a1
                uint64_t v101 = v60 - (int64_t)v88 + v100; // 0x40a5a5
                int64_t v102 = v60 - 1 + v100; // 0x40a5a8
                uint64_t v103 = v101 > v1 ? v101 : v1; // 0x40a5b0
                v38 = v61;
                v39 = v1;
                v41 = v89;
                if (v103 > v102) {
                    goto lab_0x40a2d1;
                } else {
                    int64_t v104 = v102;
                    while ((*(char *)v104 & -64) == -128) {
                        int64_t v105 = v104 - 1; // 0x40a5c0
                        v38 = v61;
                        v39 = v1;
                        v41 = v89;
                        if (v103 > v105) {
                            goto lab_0x40a2d1;
                        }
                        v104 = v105;
                    }
                    int64_t v106 = *(int64_t *)(v1 + 120); // 0x40a5de
                    int64_t v107 = *(int64_t *)(v1 + 88) + v100 - v104; // 0x40a5e8
                    int64_t v108 = v104; // 0x40a5ee
                    if (v106 != 0) {
                        int64_t v109 = v107 - 6; // 0x40a802
                        int32_t v110 = v109 == 0 | v109 < 0 != (5 - v107 & v107) < 0 ? (int32_t)v107 - 1 : 5; // 0x40a80f
                        if (v110 >= 0) {
                            int64_t v111 = v110; // 0x40a825
                            char v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104)); // 0x40a81c
                            int64_t v113; // bp-120, 0x40a050
                            *(char *)((int64_t)&v113 + 50 + v111) = v112;
                            v111--;
                            while ((int32_t)v111 >= 0) {
                                // 0x40a817
                                v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104));
                                *(char *)((int64_t)&v113 + 50 + v111) = v112;
                                v111--;
                            }
                        }
                        // 0x40a82d
                        int64_t v114; // bp-70, 0x40a050
                        v108 = &v114;
                    }
                    // 0x40a5f4
                    int32_t v115; // bp-76, 0x40a050
                    v40 = &v115;
                    v47 = 0;
                    uint64_t v116 = function_406400(&v115, v108, v107); // 0x40a60f
                    uint64_t v117 = v100 + v60 - v104; // 0x40a61e
                    if (v116 >= v117 == v116 < 0xfffffffffffffffe) {
                        int64_t v118 = v116 - v117; // 0x40a708
                        *(int64_t *)(v1 + 32) = 0;
                        *v7 = v118;
                        v46 = v115;
                        v45 = v40;
                        v43 = v118;
                        if (v115 != -1) {
                            goto lab_0x40a357;
                        } else {
                            goto lab_0x40a630;
                        }
                    } else {
                        goto lab_0x40a630;
                    }
                }
            } else {
                goto lab_0x40a2d1;
            }
        }
    }
  lab_0x40a1b0:;
    int64_t v34 = *v9; // 0x40a1be
    int64_t v35 = *v10; // 0x40a1be
    int32_t v36 = *v8; // 0x40a1be
    int64_t v37 = v1; // 0x40a1be
    goto lab_0x40a158;
  lab_0x40a158:
    // 0x40a158
    *v2 = a2;
    *(int64_t *)(v1 + 88) = v34;
    *(int64_t *)(v1 + 104) = v35;
    if (v36 >= 2) {
        // 0x40a16d
        if (*(char *)(v1 + 136) != 0) {
            int64_t result = function_406eb0(v1); // 0x40a1e8
            if ((int32_t)result != 0) {
                // 0x40a188
                return result;
            }
        } else {
            // 0x40a179
            function_406d00(v1);
        }
        // 0x40a17e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a188
        return 0;
    }
    // 0x40a158
    v64 = (char *)(v1 + 139);
    v65 = v34;
    v67 = v37;
    goto lab_0x40a280;
  lab_0x40a280:;
    int64_t v119 = v65;
    if (*v64 == 0) {
        // 0x40a28d
        *(int64_t *)(v1 + 48) = v119;
        // 0x40a17e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a188
        return 0;
    }
    // 0x40a650
    if (*(char *)(v1 + 136) != 0) {
        // 0x40a730
        function_406c80(v1);
        // 0x40a17e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a188
        return 0;
    }
    int64_t * v120 = (int64_t *)(v1 + 120); // 0x40a65d
    int64_t v121 = *v120; // 0x40a65d
    if (v121 == 0) {
        // 0x40a17e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a188
        return 0;
    }
    int64_t v122 = *(int64_t *)(v1 + 64); // 0x40a66a
    int64_t v123 = v122 - v119; // 0x40a66a
    int64_t * v124 = (int64_t *)(v1 + 48); // 0x40a66e
    int64_t v125 = *v124; // 0x40a66e
    int64_t v126 = v123 == 0 | v123 < 0 != ((v123 ^ v122) & (v122 ^ v119)) < 0 ? v122 : v119; // 0x40a672
    int64_t v127 = v125; // 0x40a67a
    if (v126 > v125) {
        unsigned char v128 = *(char *)(v67 + a2 + v125); // 0x40a696
        int64_t * v129 = (int64_t *)(v1 + 8); // 0x40a69f
        *(char *)(*v129 + v125) = *(char *)(v121 + (int64_t)v128);
        int64_t v130 = v125 + 1; // 0x40a6a7
        v127 = v126;
        if (v126 != v130) {
            unsigned char v131 = *(char *)(v130 + v67 + *v2); // 0x40a696
            *(char *)(*v129 + v130) = *(char *)(*v120 + (int64_t)v131);
            int64_t v132 = v130 + 1; // 0x40a6a7
            int64_t v133 = v132; // 0x40a6ae
            v127 = v126;
            while (v126 != v132) {
                // 0x40a688
                v131 = *(char *)(v133 + v67 + *v2);
                *(char *)(*v129 + v133) = *(char *)(*v120 + (int64_t)v131);
                v132 = v133 + 1;
                v133 = v132;
                v127 = v126;
            }
        }
    }
    // 0x40a6b0
    *v124 = v127;
    *(int64_t *)(v1 + 56) = v127;
    // 0x40a17e
    *(int64_t *)(v1 + 72) = 0;
    // 0x40a188
    return 0;
  lab_0x40a415:;
    int64_t v134 = v71 + (int64_t)(v72 < v60);
    int64_t v135 = v71 + (int64_t)(v72 >= v60);
    *(int32_t *)(v1 + 112) = (int32_t)function_409d60(v1, v135, a3);
    int64_t v25; // 0x40a050
    int64_t v26; // 0x40a050
    int64_t v28; // 0x40a050
    char v27; // 0x40a050
    if (v63 > v60 == v60 == v134) {
        int64_t v136 = 8 * v60;
        if (*(int64_t *)(v70 + v136) != v60) {
            goto lab_0x40a4c8;
        } else {
            int64_t v137 = *(int64_t *)(v1 + 16); // 0x40a440
            memmove((int64_t *)v137, (int64_t *)(v137 + 4 * v60), 4 * (int32_t)(v63 - v60));
            int64_t v138 = *(int64_t *)(v1 + 8); // 0x40a45b
            int64_t v139 = *v7; // 0x40a45f
            memmove((int64_t *)v138, (int64_t *)(v138 + v60), (int32_t)(v139 - v60));
            *v24 = *v24 - v60;
            uint64_t v140 = *v7 - v60; // 0x40a477
            *v7 = v140;
            if (v140 >= 1) {
                for (int64_t i = 0; i < *v7; i++) {
                    int64_t v141 = 8 * i + *v69;
                    *(int64_t *)v141 = *(int64_t *)(v141 + v136) - v60;
                }
            }
            // 0x40a4a5
            v25 = *(int64_t *)(v1 + 88) - v60;
            v26 = *(int64_t *)(v1 + 104) - v60;
            v27 = *(char *)(v1 + 139);
            v28 = v138;
            goto lab_0x40a150;
        }
    } else {
        goto lab_0x40a4c8;
    }
  lab_0x40a13c:
    // 0x40a13c
    v25 = *(int64_t *)(v1 + 88) - v60;
    v26 = *(int64_t *)(v1 + 104) - v60;
    v27 = v68;
    v28 = v66;
    goto lab_0x40a150;
  lab_0x40a154:;
    int64_t * v142 = (int64_t *)(v1 + 8); // 0x40a154
    *v142 = *v142 + v60;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    goto lab_0x40a158;
  lab_0x40a4c8:
    // 0x40a4c8
    *v6 = 0;
    v18 = *(int64_t *)(v1 + 80) - a2;
    v20 = *(int64_t *)(v1 + 96) - a2;
    int64_t * v143 = (int64_t *)(v1 + 88); // 0x40a4e1
    *v143 = v18 + v60;
    int64_t * v144 = (int64_t *)(v1 + 104); // 0x40a4e9
    *v144 = v20 + v60;
    int64_t v145 = v134; // 0x40a4f0
    if (v134 >= 0 == (v134 != 0)) {
        int64_t v146 = v134; // 0x40a4f8
        v145 = v146;
        while (*(int64_t *)(v70 - 8 + 8 * v146) == v60) {
            // 0x40a4f8
            v146--;
            if (v146 == 0) {
                // break -> 0x40a505
                break;
            }
            v145 = v146;
        }
    }
    // 0x40a505
    int64_t v147; // 0x40a050
    if (v145 < v63) {
        int64_t v148 = v145; // 0x40a512
        v147 = v148;
        while (*(int32_t *)(4 * v148 + *(int64_t *)(v1 + 16)) == -1) {
            // 0x40a518
            v148++;
            if (v148 == v63) {
                goto lab_0x40a6d8;
            }
            v147 = v148;
        }
        goto lab_0x40a52c;
    } else {
        // 0x40a6cc
        v147 = v145;
        if (v145 != v63) {
            goto lab_0x40a52c;
        } else {
            goto lab_0x40a6d8;
        }
    }
  lab_0x40a150:;
    int32_t v29 = *(int32_t *)(v1 + 144);
    v30 = v25;
    v31 = v26;
    v32 = v29;
    v33 = v28;
    v34 = v25;
    v35 = v26;
    v36 = v29;
    v37 = v28;
    if (v27 != 0) {
        goto lab_0x40a158;
    } else {
        goto lab_0x40a154;
    }
  lab_0x40a630:
    // 0x40a630
    v38 = *v24;
    v39 = v40;
    v41 = *v2;
    goto lab_0x40a2d1;
  lab_0x40a6f1:
    // 0x40a6f1
    *(int32_t *)(v1 + 112) = (int32_t)function_409d60(v1, v63 - 1, a3);
    int64_t v149 = v1; // 0x40a703
    int64_t v150 = v44; // 0x40a703
    goto lab_0x40a37c;
  lab_0x40a357:;
    int64_t v164 = v46; // 0x40a35e
    int64_t v163 = v45; // 0x40a35e
    int32_t v161; // 0x40a050
    int64_t v162; // 0x40a050
    if (*(char *)(v1 + 142) != 0) {
        int64_t v165 = v46 & 0xffffffff; // 0x40a7d4
        int32_t wc = v46; // 0x40a7d6
        v164 = v165;
        v163 = v165;
        v161 = 1;
        v162 = v165;
        if (wc != 95 == iswalnum(wc) == 0) {
            goto lab_0x40a364;
        } else {
            goto lab_0x40a379;
        }
    } else {
        goto lab_0x40a364;
    }
  lab_0x40a52c:;
    uint64_t v166 = *(int64_t *)(8 * v147 + v70) - v60; // 0x40a531
    *v7 = v166;
    v19 = v18;
    v21 = v20;
    v22 = 0;
    v23 = v1;
    if (v166 != 0) {
        if (v166 >= 1) {
            int64_t v167 = *(int64_t *)(v1 + 16); // 0x40a53f
            int64_t v168 = v167; // 0x40a547
            *(int32_t *)v168 = -1;
            v168 += 4;
            while (v167 + 4 * v166 != v168) {
                // 0x40a550
                *(int32_t *)v168 = -1;
                v168 += 4;
            }
        }
        int64_t v169 = *(int64_t *)(v1 + 8); // 0x40a55f
        memset((int64_t *)v169, 255, (int32_t)v166);
        v19 = *v143 - v60;
        v21 = *v144 - v60;
        v22 = *v7;
        v23 = v169;
    }
    goto lab_0x40a57f;
  lab_0x40a37c:;
    // 0x40a37c
    char * v151; // 0x40a050
    int64_t v152; // 0x40a050
    int64_t v153; // 0x40a050
    int64_t v154; // 0x40a050
    int64_t v155; // 0x40a050
    char v156; // 0x40a050
    if (v150 != 0) {
        if (v150 >= 1) {
            int64_t v157 = *(int64_t *)(v1 + 16); // 0x40a78c
            int64_t v158 = v157; // 0x40a794
            *(int32_t *)v158 = -1;
            v158 += 4;
            while (v157 + 4 * v150 != v158) {
                // 0x40a798
                *(int32_t *)v158 = -1;
                v158 += 4;
            }
        }
        char * v159 = (char *)(v1 + 139);
        v156 = 0;
        v155 = v149;
        v153 = v150;
        if (*v159 == 0) {
            goto lab_0x40a38c;
        } else {
            int64_t v160 = *(int64_t *)(v1 + 8); // 0x40a7b6
            memset((int64_t *)v160, 255, (int32_t)v150);
            v151 = v159;
            v154 = v160;
            v152 = *v7;
            goto lab_0x40a385;
        }
    } else {
        // 0x40a37c
        v151 = (char *)(v1 + 139);
        v154 = v149;
        v152 = v150;
        goto lab_0x40a385;
    }
  lab_0x40a364:
    // 0x40a364
    v161 = 0;
    v162 = v163;
    if ((int32_t)v164 == 10) {
        // 0x40a36b
        v161 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
        v162 = v163;
    }
    goto lab_0x40a379;
  lab_0x40a57f:
    // 0x40a57f
    *v24 = v22;
    v25 = v19;
    v26 = v21;
    v27 = *(char *)(v1 + 139);
    v28 = v23;
    goto lab_0x40a150;
  lab_0x40a379:
    // 0x40a379
    *(int32_t *)(v1 + 112) = v161;
    v149 = v162;
    v150 = v43;
    goto lab_0x40a37c;
  lab_0x40a38c:
    // 0x40a38c
    *v24 = v153;
    v68 = v156;
    v66 = v155;
    goto lab_0x40a13c;
  lab_0x40a385:
    // 0x40a385
    v156 = *v151;
    v155 = v154;
    v153 = v152;
    goto lab_0x40a38c;
}
// Address range: 0x40a840 - 0x40aa65
int64_t function_40a840(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40a840
    int128_t v1; // 0x40a840
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x40a842
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40a859
    int128_t v5 = __asm_movaps(v3); // bp-88, 0x40a85d
    int64_t v6 = *v4 + 24 * a2; // 0x40a862
    int64_t v7 = 0; // bp-72, 0x40a86b
    int64_t * v8 = (int64_t *)(v6 + 8); // 0x40a874
    int64_t v9 = *v8; // 0x40a874
    if (v9 < 1) {
        // 0x40aa21
        free(NULL);
        return (int32_t)&g81 ^ (int32_t)&g81;
    }
    int64_t v10 = v6 + 16; // 0x40a8e5
    int64_t * v11 = (int64_t *)v10;
    int64_t v12 = a3 + 8;
    int64_t * v13 = (int64_t *)v12;
    int64_t v14 = a3 + 16;
    int64_t v15 = 0; // 0x40a8d8
    int64_t v16 = a1; // 0x40a840
    int64_t v17 = v9;
    int64_t v18; // 0x40a840
    int64_t v19; // 0x40a840
    int64_t v20; // 0x40a840
    int64_t v21; // 0x40a913
    int64_t v22; // 0x40a91d
    while (true) {
      lab_0x40a8e5:
        // 0x40a8e5
        v19 = v17;
        int64_t v23 = v16;
        int64_t v24 = *(int64_t *)(*v11 + 8 * v15); // 0x40a8e9
        v16 = v23;
        v18 = v19;
        if (v24 == a2) {
            goto lab_0x40a8d8;
        } else {
            // 0x40a8f2
            v16 = v23;
            v18 = v19;
            if ((*(char *)(v23 + 8 + 16 * v24) & 8) == 0) {
                goto lab_0x40a8d8;
            } else {
                // 0x40a903
                v21 = 24 * v24;
                int64_t v25 = *(int64_t *)(a1 + 40) + v21; // 0x40a91a
                v22 = *(int64_t *)(v25 + 16);
                int64_t v26 = *(int64_t *)v22; // 0x40a926
                int64_t v27 = function_408030(v19, v10, v26); // 0x40a931
                if (*(int64_t *)(v25 + 8) > 1) {
                    // 0x40a890
                    v20 = v19;
                    if (v27 != 0) {
                        goto lab_0x40a970;
                    } else {
                        int64_t v28 = *v13; // 0x40a899
                        int64_t v29 = function_408030(v28, v14, v26); // 0x40a8a4
                        v20 = v28;
                        if (v29 == 0) {
                            goto lab_0x40a970;
                        } else {
                            goto lab_0x40a8b2;
                        }
                    }
                } else {
                    // 0x40a94b
                    v16 = v19;
                    v18 = v19;
                    if (v27 != 0) {
                        goto lab_0x40a8d8;
                    } else {
                        int64_t v30 = *v13; // 0x40a950
                        int64_t v31 = function_408030(v30, v14, v26); // 0x40a95b
                        v16 = v30;
                        v18 = v19;
                        if (v31 != 0) {
                            goto lab_0x40a8b2;
                        } else {
                            goto lab_0x40a8d8;
                        }
                    }
                }
            }
        }
    }
  lab_0x40a9b0:
    if (v17 < 1) {
        // 0x40aa21
        free((int64_t *)v7);
        return (int32_t)&g81 ^ (int32_t)&g81;
    }
    int64_t v32 = 0; // 0x40a840
    int64_t v33 = *(int64_t *)(*v11 + 8 * v32); // 0x40a9cc
    int64_t v34; // 0x40a840
    int64_t v35; // 0x40a9dd
    int64_t v36; // 0x40a9f0
    if (function_408030(v34, (int64_t)&v7, v33) == 0) {
        // 0x40a9dd
        v35 = *v13;
        v36 = function_408030(v35, v14, v33) - 1;
        if (v36 > -1 == v36 < v35) {
            // 0x40a9fe
            *v13 = v35 - 1;
            function_4081a0(v12, v14, v36);
        }
    }
    int64_t v37 = v32 + 1; // 0x40aa12
    v32 = v37;
    while (*v8 > v37) {
        // 0x40a9c0
        v33 = *(int64_t *)(*v11 + 8 * v32);
        if (function_408030(v34, (int64_t)&v7, v33) == 0) {
            // 0x40a9dd
            v35 = *v13;
            v36 = function_408030(v35, v14, v33) - 1;
            if (v36 > -1 == v36 < v35) {
                // 0x40a9fe
                *v13 = v35 - 1;
                function_4081a0(v12, v14, v36);
            }
        }
        // 0x40aa12
        v37 = v32 + 1;
        v32 = v37;
    }
    // 0x40aa21
    free((int64_t *)v7);
    return (int32_t)&g81 ^ (int32_t)&g81;
  lab_0x40a8d8:
    // 0x40a8d8
    v17 = v18;
    v15++;
    if (v17 <= v15) {
        // break -> 0x40a9b0
        goto lab_0x40a9b0;
    }
    goto lab_0x40a8e5;
  lab_0x40a970:;
    int64_t v38 = *(int64_t *)(v22 + 8); // 0x40a970
    v16 = v20;
    v18 = v19;
    if (v38 < 1) {
        goto lab_0x40a8d8;
    } else {
        int64_t v39 = function_408030(v19, v10, v38); // 0x40a986
        v16 = v19;
        v18 = v19;
        if (v39 != 0) {
            goto lab_0x40a8d8;
        } else {
            int64_t v40 = *v13; // 0x40a994
            int64_t v41 = function_408030(v40, v14, v38); // 0x40a99c
            v16 = v40;
            v18 = v19;
            if (v41 == 0) {
                goto lab_0x40a8d8;
            } else {
                goto lab_0x40a8b2;
            }
        }
    }
  lab_0x40a8b2:;
    int64_t v42 = function_408ae0(&v5, a4, *v4 + v21); // 0x40a8c4
    if ((int32_t)v42 != 0) {
        // 0x40aa40
        free((int64_t *)v7);
        return v42 & 0xffffffff;
    }
    // 0x40a8d1
    v16 = &v5;
    v18 = *v8;
    goto lab_0x40a8d8;
}
// Address range: 0x40aa70 - 0x40b57d
int64_t function_40aa70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40aa70
    int128_t v1; // 0x40aa70
    int128_t v2 = v1;
    int64_t * mem = malloc(0x3800); // 0x40aa8e
    if (mem == NULL) {
        // 0x40ae32
        return 0;
    }
    int128_t v3 = __asm_pxor(v2, v2); // 0x40aaab
    int128_t v4 = __asm_movaps(v3); // bp-152, 0x40aaaf
    int64_t v5 = __asm_movaps(v3); // 0x40aabf
    int64_t * v6 = (int64_t *)(a2 + 88); // 0x40aac9
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 96); // 0x40aad1
    *v7 = 0;
    int64_t v8; // 0x40aa70
    int64_t v9; // 0x40aa70
    int64_t v10; // 0x40aa70
    int64_t v11; // 0x40aa70
    int64_t v12; // 0x40aa70
    int64_t v13; // 0x40aa70
    int64_t v14; // 0x40aa70
    int64_t v15; // 0x40aa70
    int64_t v16; // 0x40aa70
    int64_t v17; // 0x40aa70
    int64_t v18; // 0x40aa70
    int64_t v19; // 0x40aa70
    int64_t v20; // 0x40aa70
    int64_t v21; // 0x40aa70
    int64_t v22; // 0x40aa70
    int128_t v23; // 0x40aa70
    int128_t v24; // 0x40aa70
    int128_t v25; // 0x40aa70
    int128_t v26; // 0x40aa70
    int64_t v27; // 0x40aa70
    int64_t v28; // 0x40aa70
    int128_t v29; // bp-88, 0x40aa70
    int64_t v30; // 0x40aa8e
    int64_t v31; // 0x40aab4
    int64_t v32; // 0x40aa70
    int64_t v33; // 0x40aa70
    int64_t v34; // 0x40b4b2
    int64_t v35; // 0x40ad17
    int128_t * v36; // 0x40aa70
    int64_t v37; // 0x40aaf2
    int64_t v38; // 0x40ab0b
    uint32_t v39; // 0x40ab0e
    char v40; // 0x40ab12
    int64_t * mem2; // 0x40ab79
    int32_t size2; // 0x40abb8
    int64_t * mem3; // 0x40abbd
    int64_t v41; // 0x40abbd
    int64_t v42; // 0x40abea
    int64_t v43; // 0x40abfa
    int128_t v44; // 0x40aa70
    int128_t v45; // 0x40aa70
    int128_t v46; // 0x40aa70
    int128_t v47; // 0x40aa70
    int128_t v48; // 0x40aa70
    if (*(int64_t *)(a2 + 16) < 1) {
        // 0x40b452
        free(mem);
        goto lab_0x40b45c;
    } else {
        // 0x40aadf
        v30 = (int64_t)mem;
        v31 = v30 + 0x1800;
        v32 = &v4;
        v33 = &v29;
        v36 = (int128_t *)(v32 + 16);
        v23 = v5;
        v28 = 0;
        v44 = v3;
        v14 = a1;
        v18 = a2;
        v10 = 0;
        while (true) {
          lab_0x40aaed:
            // 0x40aaed
            v11 = v10;
            v19 = v18;
            v15 = v14;
            int128_t v49 = v44;
            int128_t v50 = v23;
            v37 = 8 * v28;
            int64_t v51 = *(int64_t *)(*(int64_t *)(v19 + 24) + v37); // 0x40ab03
            v38 = 16 * v51 + *(int64_t *)v15;
            int64_t v52 = v38 + 8; // 0x40ab0e
            v39 = *(int32_t *)v52;
            v40 = *(char *)v52;
            v24 = v50;
            v45 = v49;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            switch (v40) {
                case 1: {
                    unsigned char v53 = *(char *)v38; // 0x40ae48
                    unsigned char v54 = v53 % 64;
                    int64_t * v55 = (int64_t *)((int64_t)(v53 / 8 & 24) + v32); // 0x40ae63
                    *v55 = (v54 == 0 ? 1 : 1 << (int64_t)v54) | *v55;
                    v25 = v50;
                    v47 = v49;
                    goto lab_0x40ae67;
                }
                case 3: {
                    int64_t v56 = 0;
                    int64_t * v57 = (int64_t *)(v56 + v32); // 0x40b2d2
                    *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                    v25 = v50;
                    v47 = v49;
                    int64_t v58 = v56 + 8; // 0x40b2e6
                    while (v56 != 24) {
                        // 0x40b2d2
                        v56 = v58;
                        v57 = (int64_t *)(v56 + v32);
                        *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                        v25 = v50;
                        v47 = v49;
                        v58 = v56 + 8;
                    }
                    goto lab_0x40ae67;
                }
                case 5: {
                    // 0x40b180
                    if (*(int32_t *)(v15 + 180) < 2) {
                        int128_t v59 = __asm_pcmpeqd(v49, v49); // 0x40b210
                        v4 = __asm_movaps(v59);
                        v26 = __asm_movaps(v59);
                        v48 = v59;
                    } else {
                        int64_t v60 = 0;
                        int64_t * v61 = (int64_t *)(v60 + v32); // 0x40b199
                        *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                        int64_t v62 = v60 + 8; // 0x40b1ad
                        v26 = v50;
                        v48 = v49;
                        while (v60 != 24) {
                            // 0x40b199
                            v60 = v62;
                            v61 = (int64_t *)(v60 + v32);
                            *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                            v62 = v60 + 8;
                            v26 = v50;
                            v48 = v49;
                        }
                    }
                    goto lab_0x40b1af;
                }
                case 7: {
                    int128_t v63 = __asm_pcmpeqd(v49, v49); // 0x40b2b0
                    v4 = __asm_movaps(v63);
                    v26 = v50;
                    v48 = v63;
                    goto lab_0x40b1af;
                }
                default: {
                    goto lab_0x40ab42;
                }
            }
        }
      lab_0x40ab53:
        if (v13 < 1) {
            // 0x40b565
            free(mem);
            if (v13 != 0) {
                // 0x40ae32
                return 0;
            }
            goto lab_0x40b45c;
        } else {
            int64_t v64 = v13 + 1; // 0x40ab68
            int128_t v65 = v64; // bp-120, 0x40ab6d
            int64_t size = 8 * v64; // 0x40ab72
            mem2 = malloc((int32_t)size);
            if (mem2 == NULL) {
                goto lab_0x40b327;
            } else {
                // 0x40ab92
                v4 = 0;
                if (v13 > 0xaaaaaaaaaaaa855) {
                    goto lab_0x40b327;
                } else {
                    // 0x40abad
                    size2 = 24 * (int32_t)v13;
                    mem3 = malloc(size2);
                    if (mem3 == NULL) {
                        goto lab_0x40b327;
                    } else {
                        // 0x40abd0
                        v41 = (int64_t)mem3;
                        int64_t v66 = size - 8; // 0x40abd5
                        int128_t v67 = __asm_pxor(v46, v46); // 0x40abd9
                        v42 = v66 + v41;
                        v43 = v42 + v66;
                        v29 = __asm_movaps(v67);
                        __asm_movaps(v67);
                        int64_t * v68 = (int64_t *)(v17 + 48);
                        int64_t v69 = 0; // 0x40ac16
                        int64_t v70 = v30 + 8; // 0x40ac16
                        int64_t v71 = v30; // 0x40ac16
                        int64_t v72 = 0; // 0x40ac16
                        while (true) {
                            int64_t v73 = v70;
                            int64_t v74 = v69;
                            int64_t * v75 = (int64_t *)v73; // 0x40ac2a
                            uint64_t v76 = *v75; // 0x40ac2a
                            if (v76 >= 1) {
                                int64_t v77 = v76; // 0x40ac74
                                for (int64_t i = 0; i < v77; i++) {
                                    int64_t v78 = *(int64_t *)(v73 + 8); // 0x40ac38
                                    int64_t v79 = *(int64_t *)(v17 + 24); // 0x40ac40
                                    int64_t v80 = *(int64_t *)(v79 + 8 * *(int64_t *)(v78 + 8 * i)); // 0x40ac45
                                    int64_t v81 = v77; // 0x40ac4d
                                    if (v80 != -1) {
                                        int64_t v82 = function_408570((int64_t *)&v65, (int128_t *)(*v68 + 24 * v80)); // 0x40ac5f
                                        int32_t v83 = v82; // 0x40ac64
                                        v4 = v83;
                                        if (v83 != 0) {
                                            // 0x40b315
                                            free(mem3);
                                            goto lab_0x40b327;
                                        }
                                        // 0x40ac4f
                                        v81 = *v75;
                                    }
                                    // 0x40ac70
                                    v77 = v81;
                                }
                            }
                            int64_t v84 = function_4092e0(&v4, v17, (int64_t *)&v65, 0); // 0x40ac87
                            int64_t v85 = 8 * v72; // 0x40ac91
                            int64_t * v86 = (int64_t *)(v85 + v41); // 0x40ac91
                            *v86 = v84;
                            if (v84 == 0) {
                                // 0x40b3e8
                                if ((int32_t)v4 != 0) {
                                    // break -> 0x40b315
                                    break;
                                }
                            }
                            // 0x40ac9e
                            int64_t v87; // 0x40aa70
                            if (*(char *)(v84 + 104) < 0) {
                                int64_t v88 = function_4092e0(&v4, v17, (int64_t *)&v65, 1); // 0x40b370
                                *(int64_t *)(v85 + v42) = v88;
                                if (v88 == 0) {
                                    // 0x40b300
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40b315
                                        break;
                                    }
                                }
                                int64_t v89 = v74; // 0x40b390
                                if (v88 != *v86) {
                                    int32_t v90 = *(int32_t *)(v17 + 180); // 0x40b39c
                                    v89 = v90 < 2 == (1 - v90 & v90) < 0 ? 1 : 0x100000000000000 * v74 >> 56;
                                }
                                int64_t v91 = v89;
                                int64_t v92 = function_4092e0(&v4, v17, (int64_t *)&v65, 2); // 0x40b3bd
                                *(int64_t *)(v85 + v43) = v92;
                                v87 = v91;
                                if (v92 == 0) {
                                    // 0x40b3d4
                                    v87 = v91;
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40b315
                                        break;
                                    }
                                }
                            } else {
                                // 0x40aca8
                                *(int64_t *)(v85 + v42) = v84;
                                *(int64_t *)(v85 + v43) = v84;
                                v87 = v74;
                            }
                            // 0x40acba
                            v27 = v87;
                            int64_t v93 = 0;
                            int64_t * v94 = (int64_t *)(v93 + v33); // 0x40acc4
                            *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                            int64_t v95 = v93 + 8; // 0x40acdc
                            while (v93 != 24) {
                                // 0x40acc4
                                v93 = v95;
                                v94 = (int64_t *)(v93 + v33);
                                *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                                v95 = v93 + 8;
                            }
                            // 0x40acde
                            v72++;
                            v69 = v27;
                            v70 = v73 + 24;
                            v71 += 32;
                            if (v72 == v13) {
                                if ((char)v27 != 0) {
                                    int64_t * mem4 = calloc(8, 512); // 0x40b4b2
                                    v34 = (int64_t)mem4;
                                    *v7 = v34;
                                    if (mem4 == NULL) {
                                        // 0x40b315
                                        free(mem3);
                                        goto lab_0x40b327;
                                    } else {
                                        // 0x40b4cc
                                        v22 = v33;
                                        v21 = v34;
                                        v9 = v30 + 0x1820;
                                        goto lab_0x40b4f2;
                                    }
                                } else {
                                    int64_t * mem5 = calloc(8, 256); // 0x40ad17
                                    v35 = (int64_t)mem5;
                                    *v6 = v35;
                                    if (mem5 == NULL) {
                                        // 0x40b315
                                        free(mem3);
                                        goto lab_0x40b327;
                                    } else {
                                        // 0x40ad31
                                        v8 = 0;
                                        goto lab_0x40ad4f;
                                    }
                                }
                            }
                        }
                        // 0x40b315
                        free(mem3);
                        goto lab_0x40b327;
                    }
                }
            }
        }
    }
  lab_0x40b143:;
    int64_t v96 = v30 + 16; // 0x40b148
    int64_t v97; // 0x40aa70
    int64_t v98 = v97 + v96; // 0x40b150
    int64_t v99 = v96; // 0x40b154
    goto lab_0x40b158;
  lab_0x40af8d:;
    // 0x40af8d
    int64_t v145; // 0x40aa70
    int64_t v146; // 0x40afa6
    while (true) {
        // 0x40af96
        int64_t v147; // 0x40aa70
        int64_t v148 = v147;
        int64_t v149; // 0x40aa70
        int64_t v150 = v149;
        int64_t v151 = 8 * v150; // 0x40af96
        int64_t v152 = *(int64_t *)(v151 + v32); // 0x40af96
        int64_t v153 = *(int64_t *)(v151 + v145); // 0x40af9a
        int64_t v154 = v153 & v152; // 0x40af9a
        int64_t v155; // 0x40aa70
        *(int64_t *)(v151 + v155) = v154;
        int64_t v156 = v150 + 1; // 0x40afa2
        v146 = v154 | v148;
        v149 = v156;
        v147 = v146;
        if (v156 == 4) {
            // break -> 0x40afaf
            break;
        }
    }
    int64_t v157 = 0; // 0x40afb2
    int64_t v158 = 0; // 0x40afb2
    int64_t v159 = 0; // 0x40afb2
    int64_t v160; // 0x40aa70
    int64_t v161; // 0x40aa70
    int64_t v162; // 0x40aa70
    if (v146 != 0) {
        int64_t v163 = v159;
        int64_t v164 = v158;
        int64_t v165 = v157;
        int64_t v166 = 8 * v165; // 0x40afc2
        int64_t * v167 = (int64_t *)(v166 + v32); // 0x40afc2
        int64_t v168 = *v167; // 0x40afc2
        int64_t v169 = *(int64_t *)(v166 + v145); // 0x40afc6
        int64_t v170 = v169 & -1 - v168; // 0x40afd0
        int64_t v171 = v168 & -1 - v169; // 0x40afd6
        *(int64_t *)(v166 + v33) = v170;
        int64_t v172 = v170 | v163; // 0x40afdd
        *v167 = v171;
        int64_t v173 = v165 + 1; // 0x40afe4
        int64_t v174 = v171 | v164; // 0x40afe8
        v157 = v173;
        v158 = v174;
        v159 = v172;
        while (v173 != 4) {
            // 0x40afc2
            v163 = v159;
            v164 = v158;
            v165 = v157;
            v166 = 8 * v165;
            v167 = (int64_t *)(v166 + v32);
            v168 = *v167;
            v169 = *(int64_t *)(v166 + v145);
            v170 = v169 & -1 - v168;
            v171 = v168 & -1 - v169;
            *(int64_t *)(v166 + v33) = v170;
            v172 = v170 | v163;
            *v167 = v171;
            v173 = v165 + 1;
            v174 = v171 | v164;
            v157 = v173;
            v158 = v174;
            v159 = v172;
        }
        // 0x40aff1
        int64_t v175; // 0x40aa70
        int64_t v176 = 24 * v175 + v30; // 0x40affb
        int64_t v177 = v176; // 0x40b002
        int64_t v178; // 0x40aa70
        int64_t v179 = v178; // 0x40b002
        if (v172 != 0) {
            int128_t v180 = v29; // 0x40b004
            int128_t v181 = __asm_movdqa(v180); // 0x40b004
            int64_t v182 = 32 * v178 + v31; // 0x40b019
            int128_t v183 = *(int128_t *)v182; // 0x40b01e
            __asm_movups(v183, v181);
            int128_t v184; // 0x40aa70
            int128_t v185 = __asm_movdqa(v184); // 0x40b021
            int128_t v186 = *(int128_t *)(v182 + 16); // 0x40b02a
            __asm_movups(v186, v185);
            int128_t v187 = __asm_movdqa(0); // 0x40b02e
            int64_t v188 = 24 * v178;
            int128_t v189 = *(int128_t *)v145; // 0x40b040
            __asm_movups(v189, v187);
            int128_t v190; // 0x40aa70
            int128_t v191 = __asm_movdqa(v190); // 0x40b045
            int128_t v192 = *(int128_t *)(v145 + 16); // 0x40b04e
            __asm_movups(v192, v191);
            if ((int32_t)function_4090d0(v188 + v30, v176) != 0) {
                goto lab_0x40b143;
            }
            // 0x40b061
            v177 = 0x100000000 * v176 >> 32;
            v179 = v178 + 1;
        }
        int64_t v193 = v179;
        int64_t v194 = v177;
        int64_t * v195; // 0x40aa70
        int64_t v196 = *v195; // 0x40b074
        int64_t v197 = *(int64_t *)(v196 + v37); // 0x40b078
        if ((char)function_406a20(v194, v197) == 0) {
            // 0x40b06a
            goto lab_0x40b143;
        }
        // 0x40b08c
        int64_t v198; // 0x40aa70
        v162 = v198;
        v160 = v193;
        v161 = v175;
        if (v174 == 0) {
            // break -> 0x40b0a5
            goto lab_0x40b0a5_2;
        }
    }
    goto lab_0x40af6e;
  lab_0x40af6e:;
    // 0x40af6e
    int64_t v199; // 0x40aa70
    int64_t v200 = v199;
    int64_t v201; // 0x40aa70
    int64_t v202 = v201 + 1; // 0x40af6e
    v199 = v200;
    int64_t v203; // 0x40aa70
    v203 += 32;
    v201 = v202;
    v162 = 0x100000000000000 * v19 >> 56;
    v160 = v200;
    v161 = v202;
    if (v202 >= v200) {
        // break -> 0x40b0a5
        goto lab_0x40b0a5_2;
    }
    goto lab_0x40af7f;
  lab_0x40ab42:
    // 0x40ab42
    v13 = v12;
    v17 = v16;
    v46 = v45;
    int64_t v206 = v28 + 1; // 0x40ab42
    v23 = v24;
    v28 = v206;
    v44 = v46;
    v14 = v17;
    v18 = v20;
    v10 = v13;
    if (v206 >= *(int64_t *)(v20 + 16)) {
        // break -> 0x40ab53
        goto lab_0x40ab53;
    }
    goto lab_0x40aaed;
  lab_0x40ae67:;
    uint32_t v207 = v39 / 256; // 0x40ab17
    uint32_t v208 = v207 & 0xff03ff;
    int128_t v209 = v47;
    int128_t v210 = v25;
    int128_t v211 = v209; // 0x40ae6a
    int64_t v212; // 0x40ab1a
    int128_t v213; // 0x40aa70
    if ((int16_t)v208 == 0) {
        goto lab_0x40af20;
    } else {
        // 0x40ae70
        v212 = v208;
        v213 = v209;
        if ((v212 & 32) != 0) {
            int128_t v214 = v4; // 0x40b1e0
            int128_t v215 = __asm_pxor(v209, v209); // 0x40b1e5
            v4 = __asm_movaps(v215);
            *v36 = (int128_t)__asm_movaps(v215);
            v24 = v210;
            v45 = v215;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            if ((v214 & 1024) == 0) {
                goto lab_0x40ab42;
            } else {
                // 0x40b1f9
                v4 = 1024;
                v213 = v215;
                goto lab_0x40ae78;
            }
        } else {
            goto lab_0x40ae78;
        }
    }
  lab_0x40b1af:;
    int128_t v216 = v48;
    int128_t v217 = v26;
    int64_t v218 = *(int64_t *)(v15 + 216); // 0x40b1af
    if ((v218 & 64) == 0) {
        // 0x40b1bb
        v4 = (int64_t)v4 & -1025;
    }
    // 0x40b1c4
    v25 = v217;
    v47 = v216;
    if ((char)v218 <= 255) {
        // 0x40b1d0
        v4 = (int64_t)v4 & -2;
        v25 = v217;
        v47 = v216;
    }
    goto lab_0x40ae67;
  lab_0x40af20:;
    int128_t v219 = v211;
    v162 = v19;
    v160 = v11;
    v161 = 0;
    if (v11 >= 1) {
        // 0x40af31
        v199 = v11;
        v203 = v31;
        v201 = 0;
        while (true) {
          lab_0x40af7f:
            // 0x40af7f
            if (v40 == 1) {
                unsigned char v204 = *(char *)v38; // 0x40af50
                int64_t v205 = *(int64_t *)(32 * v201 + v31 + (int64_t)(v204 / 8 & 24)); // 0x40af63
                if ((1 << (int64_t)(v204 % 64) & v205) != 0) {
                    goto lab_0x40af8d;
                } else {
                    goto lab_0x40af6e;
                }
            } else {
                goto lab_0x40af8d;
            }
        }
    }
  lab_0x40b0a5_2:;
    int64_t v220 = v160;
    int64_t v221 = v162;
    v24 = v210;
    v45 = v219;
    v16 = v15;
    v20 = v221;
    v12 = v220;
    int64_t v222; // 0x40aa70
    int64_t v223; // 0x40aa70
    int64_t v224; // 0x40aa70
    int64_t result; // 0x40aa70
    int128_t v225; // 0x40aa70
    if (v220 != v161) {
        goto lab_0x40ab42;
    } else {
        int128_t v226 = __asm_movdqa(v4); // 0x40b0ae
        int64_t v227 = 32 * v220 + v31; // 0x40b0c5
        __asm_movups(*(int128_t *)v227, v226);
        __asm_movups(*(int128_t *)(v227 + 16), __asm_movdqa(v210));
        v97 = 24 * v220;
        int64_t v228 = v97 + v30; // 0x40b0ed
        int64_t * v229 = (int64_t *)v228;
        *v229 = 1;
        int64_t * v230 = (int64_t *)(v228 + 8);
        *v230 = 1;
        int64_t * mem6 = malloc(8); // 0x40b106
        *(int64_t *)(v228 + 16) = (int64_t)mem6;
        if (mem6 == NULL) {
            // 0x40ae0b
            *v230 = 0;
            *v229 = 0;
            if (v220 != 0) {
                goto lab_0x40b143;
            } else {
                // 0x40ae24
                free(mem);
                result = 0;
                goto lab_0x40ae32;
            }
        }
        // 0x40b122
        *mem6 = *(int64_t *)(*(int64_t *)(v221 + 24) + v37);
        v225 = v219;
        v223 = 0x100000000000000 * v15 >> 56;
        v224 = v221;
        v222 = v220 + 1;
        goto lab_0x40b129;
    }
  lab_0x40ae78:;
    int128_t v231 = v213;
    v225 = v231;
    v223 = v15;
    v224 = v19;
    v222 = v11;
    if ((char)v207 <= -1) {
        goto lab_0x40b129;
    } else {
        if ((v212 & 4) == 0) {
            goto lab_0x40aed0;
        } else {
            if (v40 == 1) {
                // 0x40b290
                v225 = v231;
                v223 = v15;
                v224 = v19;
                v222 = v11;
                if ((*(char *)(v38 + 10) & 64) == 0) {
                    goto lab_0x40b129;
                } else {
                    // 0x40b29b
                    if (*(int32_t *)(v15 + 180) > 1) {
                        goto lab_0x40ae9b;
                    } else {
                        goto lab_0x40b260;
                    }
                }
            } else {
                // 0x40ae8d
                if (*(int32_t *)(v15 + 180) < 2) {
                    goto lab_0x40b260;
                } else {
                    goto lab_0x40ae9b;
                }
            }
        }
    }
  lab_0x40b129:;
    int128_t v232 = v225;
    int128_t v233 = __asm_pxor(v232, v232); // 0x40b129
    v4 = __asm_movaps(v233);
    *v36 = (int128_t)__asm_movaps(v233);
    v24 = v210;
    v45 = v233;
    v16 = v223;
    v20 = v224;
    v12 = v222;
    goto lab_0x40ab42;
  lab_0x40aed0:
    // 0x40aed0
    v211 = v231;
    if ((v212 & 8) == 0) {
        goto lab_0x40af20;
    } else {
        if (v40 == 1) {
            // 0x40b2f0
            v225 = v231;
            v223 = v15;
            v224 = v19;
            v222 = v11;
            if ((*(char *)(v38 + 10) & 64) == 0) {
                goto lab_0x40aedd;
            } else {
                goto lab_0x40b129;
            }
        } else {
            goto lab_0x40aedd;
        }
    }
  lab_0x40aedd:
    // 0x40aedd
    if (*(int32_t *)(v15 + 180) < 2) {
        int64_t v234 = 0; // 0x40b23f
        int64_t v235 = 8 * v234; // 0x40b22c
        int64_t * v236 = (int64_t *)(v235 + v32); // 0x40b237
        int64_t v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235); // 0x40b237
        *v236 = v237;
        v234++;
        int64_t v238 = v237; // 0x40b243
        int64_t v239 = v238; // 0x40b24a
        while (v234 != 4) {
            // 0x40b22c
            v235 = 8 * v234;
            v236 = (int64_t *)(v235 + v32);
            v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235);
            *v236 = v237;
            v234++;
            v238 = v237 | v239;
            v239 = v238;
        }
        // 0x40b24c
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v238 == 0) {
            goto lab_0x40ab42;
        } else {
            goto lab_0x40af20;
        }
    } else {
        int64_t v240 = 0; // 0x40aef1
        int64_t v241 = 8 * v240; // 0x40aef3
        int64_t v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120)); // 0x40aefb
        int64_t * v243 = (int64_t *)(v241 + v32); // 0x40af02
        int64_t v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241)); // 0x40af02
        *v243 = v244;
        v240++;
        int64_t v245 = v244; // 0x40af0e
        int64_t v246 = v245; // 0x40af15
        while (v240 != 4) {
            // 0x40aef3
            v241 = 8 * v240;
            v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120));
            v243 = (int64_t *)(v241 + v32);
            v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241));
            *v243 = v244;
            v240++;
            v245 = v244 | v246;
            v246 = v245;
        }
        // 0x40af17
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v245 == 0) {
            goto lab_0x40ab42;
        } else {
            goto lab_0x40af20;
        }
    }
  lab_0x40b260:;
    int64_t v247 = 0; // 0x40b262
    int64_t v248 = 8 * v247; // 0x40b264
    int64_t * v249 = (int64_t *)(v248 + v32); // 0x40b264
    int64_t v250 = *(int64_t *)(v15 + 184 + v248) & *v249; // 0x40b268
    *v249 = v250;
    int64_t v251 = v247 + 1; // 0x40b274
    int64_t v252 = v250; // 0x40b278
    v247 = v251;
    int64_t v253 = v252; // 0x40b27f
    while (v251 != 4) {
        // 0x40b264
        v248 = 8 * v247;
        v249 = (int64_t *)(v248 + v32);
        v250 = *(int64_t *)(v15 + 184 + v248) & *v249;
        *v249 = v250;
        v251 = v247 + 1;
        v252 = v250 | v253;
        v247 = v251;
        v253 = v252;
    }
    // 0x40b281
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v252 != 0) {
        goto lab_0x40aed0;
    } else {
        goto lab_0x40ab42;
    }
  lab_0x40ae9b:;
    int64_t v254 = 0; // 0x40aea1
    int64_t v255 = 8 * v254; // 0x40aea3
    int64_t v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120)); // 0x40aea3
    int64_t * v257 = (int64_t *)(v255 + v32); // 0x40aeb2
    int64_t v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257; // 0x40aeb2
    *v257 = v258;
    int64_t v259 = v254 + 1; // 0x40aeba
    int64_t v260 = v258; // 0x40aebe
    v254 = v259;
    int64_t v261 = v260; // 0x40aec5
    while (v259 != 4) {
        // 0x40aea3
        v255 = 8 * v254;
        v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120));
        v257 = (int64_t *)(v255 + v32);
        v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257;
        *v257 = v258;
        v259 = v254 + 1;
        v260 = v258 | v261;
        v254 = v259;
        v261 = v260;
    }
    // 0x40aec7
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v260 == 0) {
        goto lab_0x40ab42;
    } else {
        goto lab_0x40aed0;
    }
  lab_0x40b45c:;
    int64_t * mem7 = calloc(8, 256); // 0x40b466
    int64_t v262 = (int64_t)mem7; // 0x40b466
    *v6 = v262;
    // 0x40ae32
    return v262 & -256 | (int64_t)(mem7 != NULL);
  lab_0x40b327:
    // 0x40b327
    free(mem2);
    int64_t v263 = v30 + 16; // 0x40b334
    int64_t v264 = v263 + 24; // 0x40b343
    free((int64_t *)*(int64_t *)v263);
    int64_t v265 = v264; // 0x40b34f
    while (v264 != 24 * v13 + v263) {
        // 0x40b340
        v264 = v265 + 24;
        free((int64_t *)*(int64_t *)v265);
        v265 = v264;
    }
    // 0x40b351
    free(mem);
    result = 0;
  lab_0x40ae32:
    // 0x40ae32
    return result;
  lab_0x40b158:;
    int64_t v100 = v99 + 24; // 0x40b15b
    free((int64_t *)*(int64_t *)v99);
    v99 = v100;
    if (v98 != v100) {
        goto lab_0x40b158;
    } else {
        // 0x40b169
        free(mem);
        result = 0;
        goto lab_0x40ae32;
    }
  lab_0x40b4f2:;
    int64_t v101 = v9;
    int64_t v102 = v21;
    int64_t v103 = *(int64_t *)v22; // 0x40b4f2
    int64_t v104; // 0x40aa70
    int64_t v105; // 0x40aa70
    int64_t v106; // 0x40aa70
    int64_t * v107; // 0x40aa70
    if (v103 == 0) {
        goto lab_0x40b512;
    } else {
        // 0x40b502
        v107 = (int64_t *)(v101 - 32);
        v105 = v103;
        v106 = 1;
        v104 = v102;
        goto lab_0x40b502_2;
    }
  lab_0x40ad4f:;
    int64_t v108 = v8;
    int64_t v109 = *(int64_t *)(v108 + v33); // 0x40ad52
    int64_t v110; // 0x40aa70
    int64_t v111; // 0x40aa70
    int64_t v112; // 0x40aa70
    int64_t * v113; // 0x40aa70
    int64_t v114; // 0x40aa70
    int64_t * v115; // 0x40aa70
    if (v109 == 0) {
        goto lab_0x40ad84;
    } else {
        // 0x40ad70
        v113 = (int64_t *)(v108 + v31);
        v114 = v30 + 0x1820 + v108;
        v115 = (int64_t *)(v17 + 184 + v108);
        v110 = v109;
        v111 = 1;
        v112 = 64 * v108 + v35;
        goto lab_0x40ad70_2;
    }
  lab_0x40b512:;
    int64_t v116 = v22 + 8; // 0x40b512
    int64_t v117 = v34; // 0x40b524
    v22 = v116;
    v21 = v102 + 512;
    v9 = v101 + 8;
    int64_t v118; // bp-56, 0x40aa70
    if (v116 != (int64_t)&v118) {
        goto lab_0x40b4f2;
    } else {
        goto lab_0x40ad8e;
    }
  lab_0x40ad84:
    // 0x40ad84
    v8 = v108 + 8;
    v117 = v35;
    if (v108 != 24) {
        goto lab_0x40ad4f;
    } else {
        goto lab_0x40ad8e;
    }
  lab_0x40ad8e:;
    int64_t v119; // 0x40aa70
    char v120; // 0x40aa70
    if ((v120 & 4) == 0) {
        goto lab_0x40adbd;
    } else {
        // 0x40ad9f
        v119 = 0;
        goto lab_0x40ad9f_2;
    }
  lab_0x40b502_2:;
    int64_t v121 = v104;
    int64_t v122 = v106;
    uint64_t v123 = v105;
    int64_t v124; // 0x40aa70
    int64_t v125; // 0x40aa70
    int64_t v126; // 0x40aa70
    if (v123 % 2 != 0) {
        // 0x40b52b
        v126 = 0;
        v125 = v101;
        v124 = 0;
        if ((*v107 & v122) != 0) {
            goto lab_0x40b54c;
        } else {
            goto lab_0x40b536;
        }
    } else {
        goto lab_0x40b506;
    }
  lab_0x40ad70_2:;
    int64_t v127 = v112;
    int64_t v128 = v111;
    uint64_t v129 = v110;
    int64_t v130; // 0x40aa70
    int64_t v131; // 0x40aa70
    int64_t v132; // 0x40aa70
    if (v129 % 2 != 0) {
        // 0x40b400
        v131 = v114;
        v130 = 0;
        v132 = 0;
        if ((*v113 & v128) != 0) {
            goto lab_0x40b42f;
        } else {
            goto lab_0x40b418;
        }
    } else {
        goto lab_0x40ad78;
    }
  lab_0x40adbd:
    // 0x40adbd
    free(mem3);
    free(mem2);
    int64_t v133 = v30 + 16; // 0x40adde
    int64_t v134 = v133; // 0x40ade5
    goto lab_0x40ade8;
  lab_0x40b506:
    // 0x40b506
    v105 = v123 / 2;
    v106 = 2 * v122;
    v104 = v121 + 8;
    if (v123 >= 2) {
        goto lab_0x40b502_2;
    } else {
        goto lab_0x40b512;
    }
  lab_0x40ad78:
    // 0x40ad78
    v110 = v129 / 2;
    v111 = 2 * v128;
    v112 = v127 + 8;
    if (v129 >= 2) {
        goto lab_0x40ad70_2;
    } else {
        goto lab_0x40ad84;
    }
  lab_0x40ade8:;
    int64_t v135 = v134 + 24; // 0x40adec
    free((int64_t *)*(int64_t *)v134);
    v134 = v135;
    if (v133 + (int64_t)size2 != v135) {
        goto lab_0x40ade8;
    } else {
        // 0x40adfa
        free(mem);
        result = 1;
        goto lab_0x40ae32;
    }
  lab_0x40ad9f_2:;
    int64_t v136 = v119;
    if ((*(char *)(v30 + 0x1801 + 32 * v136) & 4) != 0) {
        int64_t v137 = *(int64_t *)(8 * v136 + v43); // 0x40b48e
        *(int64_t *)(v117 + 80) = v137;
        if ((char)v27 == 0) {
            goto lab_0x40adbd;
        } else {
            // 0x40b49c
            *(int64_t *)(v117 + 2128) = v137;
            goto lab_0x40adbd;
        }
    } else {
        int64_t v138 = v136 + 1; // 0x40adb4
        v119 = v138;
        if (v138 != v13) {
            goto lab_0x40ad9f_2;
        } else {
            goto lab_0x40adbd;
        }
    }
  lab_0x40b54c:;
    int64_t v139 = 8 * v124; // 0x40b54c
    *(int64_t *)v121 = *(int64_t *)(v139 + v41);
    *(int64_t *)(v121 + 2048) = *(int64_t *)(v139 + v42);
    goto lab_0x40b506;
  lab_0x40b536:;
    int64_t v140 = v125;
    int64_t v141 = v126 + 1; // 0x40b539
    v126 = v141;
    v125 = v140 + 32;
    v124 = v141;
    if ((*(int64_t *)v140 & v122) == 0) {
        goto lab_0x40b536;
    } else {
        goto lab_0x40b54c;
    }
  lab_0x40b42f:;
    int64_t v142 = v132;
    if ((*v115 & v128) == 0) {
        // 0x40b445
        *(int64_t *)v127 = *(int64_t *)(v142 + v41);
        goto lab_0x40ad78;
    } else {
        // 0x40b439
        *(int64_t *)v127 = *(int64_t *)(v142 + v42);
        goto lab_0x40ad78;
    }
  lab_0x40b418:;
    int64_t v143 = v131;
    int64_t v144 = v130 + 1; // 0x40b41b
    v131 = v143 + 32;
    v130 = v144;
    if ((*(int64_t *)v143 & v128) == 0) {
        goto lab_0x40b418;
    } else {
        // 0x40b42b
        v132 = 8 * v144;
        goto lab_0x40b42f;
    }
}
// Address range: 0x40b580 - 0x40b607
int64_t function_40b580(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 48; // 0x40b580
    char * v2 = (char *)v1; // 0x40b580
    if (*v2 == 16) {
        int64_t v3 = *(int64_t *)(a2 + 8); // 0x40b586
        *(int64_t *)(a2 + 24) = *(int64_t *)(v3 + 24);
        *(int64_t *)(a2 + 56) = *(int64_t *)(v3 + 56);
        return 0;
    }
    // 0x40b5a0
    *(int64_t *)(a2 + 24) = a2;
    int64_t v4 = a2 + 40; // 0x40b5b4
    int64_t v5 = function_407700(a1, *(int64_t *)v4, *(int64_t *)v1); // 0x40b5b8
    *(int64_t *)(a2 + 56) = v5;
    if (v5 == -1) {
        // 0x40b5f6
        return 12;
    }
    // 0x40b5ca
    if (*v2 == 12) {
        int32_t * v6 = (int32_t *)(a1 + 8 + 16 * v5); // 0x40b5e8
        *v6 = *v6 & -0x3ff01 | 256 * *(int32_t *)v4 & 0x3ff00;
    }
    // 0x40b5f6
    return 0;
}
// Address range: 0x40b610 - 0x40b78c
int64_t function_40b610(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        int64_t v2 = 0; // 0x40b62b
        if (*v1 != 0) {
            int64_t v3 = v2 + 1; // 0x40b63f
            int64_t v4 = a1 + 16 * v2; // 0x40b647
            function_4076b0(v4);
            v2 = v3;
            int64_t v5 = v4; // 0x40b654
            while (*v1 > v3) {
                // 0x40b63c
                v3 = v2 + 1;
                v4 = v5 + 16 * v2;
                function_4076b0(v4);
                v2 = v3;
                v5 = v4;
            }
        }
    }
    // 0x40b656
    free((int64_t *)*(int64_t *)(a1 + 24));
    int64_t * v6; // 0x40b610
    int64_t * v7; // 0x40b610
    int64_t * v8; // 0x40b610
    if (*v1 == 0) {
        // 0x40b656
        v7 = (int64_t *)(a1 + 56);
        v6 = (int64_t *)(a1 + 48);
        v8 = (int64_t *)(a1 + 40);
    } else {
        int64_t * v9 = (int64_t *)(a1 + 48);
        int64_t * v10 = (int64_t *)(a1 + 56);
        int64_t * v11 = (int64_t *)(a1 + 40);
        int64_t v12 = 0;
        int64_t v13 = *v9; // 0x40b670
        if (v13 != 0) {
            // 0x40b67a
            free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
        }
        int64_t v14 = *v10; // 0x40b688
        if (v14 != 0) {
            // 0x40b692
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
        }
        int64_t v15 = *v11; // 0x40b6a0
        if (v15 != 0) {
            // 0x40b6aa
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
        }
        int64_t v16 = v12 + 1; // 0x40b6b8
        v7 = v10;
        v6 = v9;
        v8 = v11;
        while (*v1 > v16) {
            // 0x40b670
            v12 = v16;
            v13 = *v9;
            if (v13 != 0) {
                // 0x40b67a
                free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
            }
            // 0x40b688
            v14 = *v10;
            if (v14 != 0) {
                // 0x40b692
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
            }
            // 0x40b6a0
            v15 = *v11;
            if (v15 != 0) {
                // 0x40b6aa
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
            }
            // 0x40b6b8
            v16 = v12 + 1;
            v7 = v10;
            v6 = v9;
            v8 = v11;
        }
    }
    // 0x40b6c3
    free((int64_t *)*v8);
    free((int64_t *)*v6);
    int64_t * v17 = (int64_t *)*v7; // 0x40b6df
    free(v17);
    free(v17);
    int64_t * v18 = (int64_t *)(a1 + 64); // 0x40b6ed
    int64_t v19 = *v18; // 0x40b6ed
    int64_t * v20 = NULL; // 0x40b6f5
    if (v19 != 0) {
        int64_t v21 = 0; // 0x40b733
        int64_t v22 = 24 * v21 + v19; // 0x40b707
        int64_t * v23 = (int64_t *)v22; // 0x40b70b
        int64_t * v24 = (int64_t *)(v22 + 16);
        int64_t v25 = 0; // 0x40b710
        int64_t v26; // 0x40b720
        if (*v23 >= 1) {
            v26 = v25 + 1;
            function_407c00(*(int64_t *)(*v24 + 8 * v25));
            v25 = v26;
            while (v26 < *v23) {
                // 0x40b718
                v26 = v25 + 1;
                function_407c00(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
            }
        }
        // 0x40b72f
        v21++;
        free((int64_t *)*v24);
        int64_t v27 = *v18;
        while (*(int64_t *)(a1 + 136) >= v21) {
            // 0x40b700
            v22 = 24 * v21 + v27;
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 16);
            v25 = 0;
            if (*v23 >= 1) {
                v26 = v25 + 1;
                function_407c00(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
                while (v26 < *v23) {
                    // 0x40b718
                    v26 = v25 + 1;
                    function_407c00(*(int64_t *)(*v24 + 8 * v25));
                    v25 = v26;
                }
            }
            // 0x40b72f
            v21++;
            free((int64_t *)*v24);
            v27 = *v18;
        }
        // 0x40b755
        v20 = (int64_t *)v27;
    }
    // 0x40b755
    free(v20);
    int64_t v28 = *(int64_t *)(a1 + 120); // 0x40b75a
    if (v28 != (int64_t)&g14) {
        // 0x40b768
        free((int64_t *)v28);
    }
    // 0x40b76d
    free((int64_t *)*(int64_t *)(a1 + 224));
    free((int64_t *)a1);
    return &g81;
}
// Address range: 0x40b790 - 0x40b7de
int64_t function_40b790(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 < 1) {
        // 0x40b7d0
        free((int64_t *)*v1);
        return &g81;
    }
    int64_t v2 = 0;
    int64_t v3 = v2 + 1; // 0x40b7a9
    int64_t v4 = 48 * v2; // 0x40b7ad
    free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
    uint64_t v5 = *(int64_t *)(v4 + 16 + *v1); // 0x40b7c0
    free((int64_t *)v5);
    while (v3 < v5) {
        // 0x40b7a0
        v2 = v3;
        v3 = v2 + 1;
        v4 = 48 * v2;
        free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
        v5 = *(int64_t *)(v4 + 16 + *v1);
        free((int64_t *)v5);
    }
    // 0x40b7d0
    free((int64_t *)*v1);
    return &g81;
}
// Address range: 0x40b7e0 - 0x40b870
int64_t function_40b7e0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int128_t * a6) {
    int64_t v1 = a1 - 1; // 0x40b7e7
    *(int64_t *)a1 = v1;
    if (v1 < 0) {
        // 0x40b852
        __assert_fail("num >= 0", "lib/regexec.c", 1359, "pop_fail_stack");
        return &g81;
    }
    int64_t v2 = 48 * v1; // 0x40b7fe
    int64_t v3 = v2 + a2; // 0x40b808
    *a3 = *(int64_t *)v3;
    int64_t v4 = *(int64_t *)(v3 + 16); // 0x40b811
    memcpy((int64_t *)a5, (int64_t *)v4, 16 * (int32_t)a4);
    int64_t * v5 = (int64_t *)((int64_t)a6 + 16); // 0x40b81d
    free((int64_t *)*v5);
    int64_t v6 = v4 + v2;
    free((int64_t *)*(int64_t *)(v6 + 16));
    *a6 = (int128_t)__asm_movaps(__asm_movdqu(*(int128_t *)(v6 + 24)));
    *v5 = *(int64_t *)(v6 + 40);
    return *(int64_t *)(v6 + 8);
}
// Address range: 0x40b870 - 0x40b8bc
int64_t function_40b870(int64_t a1, int64_t str) {
    // 0x40b870
    int64_t v1; // 0x40b870
    uint64_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x40b87f
    if (len != 1) {
        // 0x40b8b0
        return 3;
    }
    int64_t * v3 = (int64_t *)((v2 / 8 & 24) + a1); // 0x40b89a
    *v3 = *v3 | (int64_t)len << v2 % 64;
    return 0;
}
// Address range: 0x40b8c0 - 0x40c086
int64_t function_40b8c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = a4; // 0x40b8e1
    int64_t v3 = a6; // 0x40b8e1
    int64_t v4; // 0x40b8c0
    int64_t v5; // 0x40b8c0
    int64_t v6; // 0x40b8c0
    int64_t v7; // 0x40b8c0
    int64_t v8; // 0x40b8c0
    bool v9; // 0x40b8c0
    if ((a7 & 0x400000) == 0) {
        goto lab_0x40b905;
    } else {
        int64_t v10 = v9 ? -1 : 1;
        int64_t v11 = (int64_t)"upper"; // 0x40b8c0
        int64_t v12 = a6; // 0x40b8c0
        unsigned char v13 = *(char *)v12; // 0x40b8f0
        char v14 = *(char *)v11; // 0x40b8f0
        v2 = 5;
        char v15 = v14; // 0x40b8f0
        bool v16 = false; // 0x40b8f0
        while (v13 == v14) {
            // 0x40b8e3
            v11 += v10;
            v12 += v10;
            v15 = v13;
            v16 = true;
            if (v2 == 0) {
                // break -> 
                break;
            }
            v13 = *(char *)v12;
            v14 = *(char *)v11;
            v2--;
            v15 = v14;
            v16 = false;
        }
        unsigned char v17 = v15;
        v3 = (int64_t)"alpha";
        int64_t v18 = (int64_t)"lower"; // 0x40b8f9
        int64_t v19 = a6; // 0x40b8f9
        if ((v13 >= v17 && !v16) != v13 < v17) {
            unsigned char v20 = *(char *)v19; // 0x40ba03
            char v21 = *(char *)v18; // 0x40ba03
            int64_t v22 = 5; // 0x40ba03
            char v23 = v21; // 0x40ba03
            bool v24 = false; // 0x40ba03
            while (v20 == v21) {
                // 0x40b9f6
                v18 += v10;
                v19 += v10;
                v23 = v20;
                v24 = true;
                if (v22 == 0) {
                    // break -> 
                    break;
                }
                v20 = *(char *)v19;
                v21 = *(char *)v18;
                v22--;
                v23 = v21;
                v24 = false;
            }
            unsigned char v25 = v23;
            int64_t v26 = !((v20 < v25 | v24)) == v20 < v25 ? (int64_t)"alpha" : a6; // 0x40ba15
            v6 = a3;
            v8 = v22;
            v4 = v26;
            v7 = v22;
            v5 = v26;
            if (v22 != v1) {
                goto lab_0x40b915;
            } else {
                goto lab_0x40ba25;
            }
        } else {
            goto lab_0x40b905;
        }
    }
  lab_0x40b905:
    // 0x40b905
    v6 = a3;
    v8 = v2;
    v4 = v3;
    v7 = v1;
    v5 = v3;
    if (v2 == v1) {
        goto lab_0x40ba25;
    } else {
        goto lab_0x40b915;
    }
  lab_0x40ba25:;
    int64_t v27 = 2 * v7 | 1; // 0x40ba25
    int64_t * v28 = (int64_t *)a3; // 0x40ba3e
    int64_t * mem = realloc(v28, 8 * (int32_t)v27); // 0x40ba3e
    if (mem == NULL) {
        // 0x40b9a6
        return 12;
    }
    int64_t v29 = (int64_t)mem; // 0x40ba3e
    *v28 = v29;
    *a5 = v27;
    v6 = v29;
    v8 = v7;
    v4 = v5;
    goto lab_0x40b915;
  lab_0x40b915:
    // 0x40b915
    *(int64_t *)a4 = v8 + 1;
    char * name = (char *)v4; // 0x40b924
    *(int64_t *)(8 * v8 + v6) = (int64_t)wctype(name);
    int64_t v30 = v9 ? -1 : 1;
    int64_t v31 = (int64_t)"alnum"; // 0x40b8c0
    int64_t v32 = v4; // 0x40b8c0
    int64_t v33 = 6; // 0x40b8c0
    unsigned char v34 = *(char *)v32; // 0x40b93a
    char v35 = *(char *)v31; // 0x40b93a
    char v36 = v35; // 0x40b93a
    bool v37 = false; // 0x40b93a
    while (v34 == v35) {
        int64_t v38 = v33 - 1; // 0x40b93a
        v31 += v30;
        v32 += v30;
        v33 = v38;
        v36 = v34;
        v37 = true;
        if (v38 == 0) {
            // break -> 
            break;
        }
        v34 = *(char *)v32;
        v35 = *(char *)v31;
        v36 = v35;
        v37 = false;
    }
    unsigned char v39 = v36;
    int64_t v40 = (int64_t)"cntrl"; // 0x40b943
    int64_t v41 = v4; // 0x40b943
    int64_t v42 = 6; // 0x40b943
    if ((v34 >= v39 && !v37) == v34 < v39) {
        int64_t v43 = (int64_t)*__ctype_b_loc(); // 0x40b9c4
        if (a1 != 0) {
            int64_t v44 = 0;
            unsigned char v45; // 0x40bbee
            unsigned char v46; // 0x40b8c0
            int64_t * v47; // 0x40bc03
            if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                // 0x40bbee
                v45 = *(char *)(v44 + a1);
                v46 = v45 % 64;
                v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
            }
            int64_t v48 = v44 + 1; // 0x40bc11
            while (v44 != 255) {
                // 0x40bbe8
                v44 = v48;
                if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                    // 0x40bbee
                    v45 = *(char *)(v44 + a1);
                    v46 = v45 % 64;
                    v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                    *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
                }
                // 0x40bc07
                v48 = v44 + 1;
            }
        } else {
            int64_t v49 = 0;
            int64_t * v50; // 0x40b9e3
            if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                // 0x40b9d6
                v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                *v50 = *v50 | 1 << v49 % 64;
            }
            int64_t v51 = v49 + 1; // 0x40b9f2
            while (v49 != 255) {
                // 0x40b9d0
                v49 = v51;
                if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                    // 0x40b9d6
                    v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                    *v50 = *v50 | 1 << v49 % 64;
                }
                // 0x40b9e7
                v51 = v49 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v52 = *(char *)v41; // 0x40b952
    char v53 = *(char *)v40; // 0x40b952
    char v54 = v53; // 0x40b952
    bool v55 = false; // 0x40b952
    while (v52 == v53) {
        int64_t v56 = v42 - 1; // 0x40b952
        v40 += v30;
        v41 += v30;
        v42 = v56;
        v54 = v52;
        v55 = true;
        if (v56 == 0) {
            // break -> 
            break;
        }
        v52 = *(char *)v41;
        v53 = *(char *)v40;
        v54 = v53;
        v55 = false;
    }
    unsigned char v57 = v54;
    int64_t v58 = (int64_t)"lower"; // 0x40b95b
    int64_t v59 = v4; // 0x40b95b
    int64_t v60 = 6; // 0x40b95b
    if ((v52 >= v57 && !v55) == v52 < v57) {
        int64_t v61 = (int64_t)*__ctype_b_loc(); // 0x40b96d
        if (a1 != 0) {
            int64_t v62 = 0;
            unsigned char v63; // 0x40bc26
            unsigned char v64; // 0x40b8c0
            int64_t * v65; // 0x40bc3b
            if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                // 0x40bc26
                v63 = *(char *)(v62 + a1);
                v64 = v63 % 64;
                v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
            }
            int64_t v66 = v62 + 1; // 0x40bc49
            while (v62 != 255) {
                // 0x40bc20
                v62 = v66;
                if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                    // 0x40bc26
                    v63 = *(char *)(v62 + a1);
                    v64 = v63 % 64;
                    v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                    *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
                }
                // 0x40bc3f
                v66 = v62 + 1;
            }
        } else {
            int64_t v67 = 0;
            int64_t * v68; // 0x40b993
            if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                // 0x40b986
                v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                *v68 = *v68 | 1 << v67 % 64;
            }
            int64_t v69 = v67 + 1; // 0x40b9a2
            while (v67 != 255) {
                // 0x40b980
                v67 = v69;
                if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                    // 0x40b986
                    v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                    *v68 = *v68 | 1 << v67 % 64;
                }
                // 0x40b997
                v69 = v67 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v70 = *(char *)v59; // 0x40ba71
    char v71 = *(char *)v58; // 0x40ba71
    char v72 = v71; // 0x40ba71
    bool v73 = false; // 0x40ba71
    while (v70 == v71) {
        int64_t v74 = v60 - 1; // 0x40ba71
        v58 += v30;
        v59 += v30;
        v60 = v74;
        v72 = v70;
        v73 = true;
        if (v74 == 0) {
            // break -> 
            break;
        }
        v70 = *(char *)v59;
        v71 = *(char *)v58;
        v72 = v71;
        v73 = false;
    }
    unsigned char v75 = v72;
    int64_t v76 = (int64_t)"space"; // 0x40ba7a
    int64_t v77 = v4; // 0x40ba7a
    int64_t v78 = 6; // 0x40ba7a
    if ((v70 >= v75 && !v73) == v70 < v75) {
        int64_t v79 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v80 = 0;
            unsigned char v81; // 0x40bc5f
            unsigned char v82; // 0x40b8c0
            int64_t * v83; // 0x40bc74
            if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                // 0x40bc5f
                v81 = *(char *)(v80 + a1);
                v82 = v81 % 64;
                v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
            }
            int64_t v84 = v80 + 1; // 0x40bc82
            while (v80 != 255) {
                // 0x40bc58
                v80 = v84;
                if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                    // 0x40bc5f
                    v81 = *(char *)(v80 + a1);
                    v82 = v81 % 64;
                    v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                    *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
                }
                // 0x40bc78
                v84 = v80 + 1;
            }
        } else {
            int64_t v85 = 0;
            int64_t * v86; // 0x40bb0c
            if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                // 0x40baff
                v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                *v86 = *v86 | 1 << v85 % 64;
            }
            int64_t v87 = v85 + 1; // 0x40bb1b
            while (v85 != 255) {
                // 0x40baf8
                v85 = v87;
                if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                    // 0x40baff
                    v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                    *v86 = *v86 | 1 << v85 % 64;
                }
                // 0x40bb10
                v87 = v85 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v88 = *(char *)v77; // 0x40ba89
    char v89 = *(char *)v76; // 0x40ba89
    char v90 = v89; // 0x40ba89
    bool v91 = false; // 0x40ba89
    while (v88 == v89) {
        // 0x40ba7c
        v78--;
        v76 += v30;
        v77 += v30;
        v90 = v88;
        v91 = true;
        if (v78 == 0) {
            // break -> 
            break;
        }
        v88 = *(char *)v77;
        v89 = *(char *)v76;
        v90 = v89;
        v91 = false;
    }
    unsigned char v92 = v90;
    int64_t v93 = (int64_t)"alpha"; // 0x40ba92
    int64_t v94 = v4; // 0x40ba92
    int64_t v95 = 6; // 0x40ba92
    if ((v88 >= v92 && !v91) == v88 < v92) {
        int64_t v96 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v97 = 0;
            unsigned char v98; // 0x40bde7
            unsigned char v99; // 0x40b8c0
            int64_t * v100; // 0x40bdfc
            if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                // 0x40bde7
                v98 = *(char *)(v97 + a1);
                v99 = v98 % 64;
                v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
            }
            int64_t v101 = v97 + 1; // 0x40be0a
            while (v97 != 255) {
                // 0x40bde0
                v97 = v101;
                if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                    // 0x40bde7
                    v98 = *(char *)(v97 + a1);
                    v99 = v98 % 64;
                    v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                    *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
                }
                // 0x40be00
                v101 = v97 + 1;
            }
        } else {
            int64_t v102 = 0;
            int64_t * v103; // 0x40bac4
            if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                // 0x40bab7
                v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                *v103 = *v103 | 1 << v102 % 64;
            }
            int64_t v104 = v102 + 1; // 0x40bad3
            while (v102 != 255) {
                // 0x40bab0
                v102 = v104;
                if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                    // 0x40bab7
                    v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                    *v103 = *v103 | 1 << v102 % 64;
                }
                // 0x40bac8
                v104 = v102 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v105 = *(char *)v94; // 0x40bb2f
    char v106 = *(char *)v93; // 0x40bb2f
    char v107 = v106; // 0x40bb2f
    bool v108 = false; // 0x40bb2f
    while (v105 == v106) {
        int64_t v109 = v95 - 1; // 0x40bb2f
        v93 += v30;
        v94 += v30;
        v95 = v109;
        v107 = v105;
        v108 = true;
        if (v109 == 0) {
            // break -> 
            break;
        }
        v105 = *(char *)v94;
        v106 = *(char *)v93;
        v107 = v106;
        v108 = false;
    }
    unsigned char v110 = v107;
    int64_t v111 = (int64_t)"digit"; // 0x40bb38
    int64_t v112 = v4; // 0x40bb38
    int64_t v113 = 6; // 0x40bb38
    if ((v105 >= v110 && !v108) == v105 < v110) {
        int64_t v114 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v115 = 0;
            unsigned char v116; // 0x40bdb4
            unsigned char v117; // 0x40b8c0
            int64_t * v118; // 0x40bdc9
            if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                // 0x40bdb4
                v116 = *(char *)(v115 + a1);
                v117 = v116 % 64;
                v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
            }
            int64_t v119 = v115 + 1; // 0x40bdd7
            while (v115 != 255) {
                // 0x40bdad
                v115 = v119;
                if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                    // 0x40bdb4
                    v116 = *(char *)(v115 + a1);
                    v117 = v116 % 64;
                    v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                    *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
                }
                // 0x40bdcd
                v119 = v115 + 1;
            }
        } else {
            int64_t v120 = 0;
            int64_t * v121; // 0x40bbcc
            if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                // 0x40bbbf
                v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                *v121 = *v121 | 1 << v120 % 64;
            }
            int64_t v122 = v120 + 1; // 0x40bbdb
            while (v120 != 255) {
                // 0x40bbb8
                v120 = v122;
                if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                    // 0x40bbbf
                    v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                    *v121 = *v121 | 1 << v120 % 64;
                }
                // 0x40bbd0
                v122 = v120 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v123 = *(char *)v112; // 0x40bb47
    char v124 = *(char *)v111; // 0x40bb47
    char v125 = v124; // 0x40bb47
    bool v126 = false; // 0x40bb47
    while (v123 == v124) {
        // 0x40bb3a
        v113--;
        v111 += v30;
        v112 += v30;
        v125 = v123;
        v126 = true;
        if (v113 == 0) {
            // break -> 
            break;
        }
        v123 = *(char *)v112;
        v124 = *(char *)v111;
        v125 = v124;
        v126 = false;
    }
    unsigned char v127 = v125;
    int64_t v128 = (int64_t)"print"; // 0x40bb50
    int64_t v129 = v4; // 0x40bb50
    int64_t v130 = 6; // 0x40bb50
    if ((v123 >= v127 && !v126) == v123 < v127) {
        int64_t v131 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v132 = 0;
            unsigned char v133; // 0x40be1a
            unsigned char v134; // 0x40b8c0
            int64_t * v135; // 0x40be2f
            if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                // 0x40be1a
                v133 = *(char *)(v132 + a1);
                v134 = v133 % 64;
                v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
            }
            int64_t v136 = v132 + 1; // 0x40be3d
            while (v132 != 255) {
                // 0x40be13
                v132 = v136;
                if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                    // 0x40be1a
                    v133 = *(char *)(v132 + a1);
                    v134 = v133 % 64;
                    v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                    *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
                }
                // 0x40be33
                v136 = v132 + 1;
            }
        } else {
            int64_t v137 = 0;
            int64_t * v138; // 0x40bb84
            if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                // 0x40bb77
                v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                *v138 = *v138 | 1 << v137 % 64;
            }
            int64_t v139 = v137 + 1; // 0x40bb93
            while (v137 != 255) {
                // 0x40bb70
                v137 = v139;
                if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                    // 0x40bb77
                    v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                    *v138 = *v138 | 1 << v137 % 64;
                }
                // 0x40bb88
                v139 = v137 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v140 = *(char *)v129; // 0x40bc96
    char v141 = *(char *)v128; // 0x40bc96
    char v142 = v141; // 0x40bc96
    bool v143 = false; // 0x40bc96
    while (v140 == v141) {
        int64_t v144 = v130 - 1; // 0x40bc96
        v128 += v30;
        v129 += v30;
        v130 = v144;
        v142 = v140;
        v143 = true;
        if (v144 == 0) {
            // break -> 
            break;
        }
        v140 = *(char *)v129;
        v141 = *(char *)v128;
        v142 = v141;
        v143 = false;
    }
    unsigned char v145 = v142;
    int64_t v146 = (int64_t)"upper"; // 0x40bc9f
    int64_t v147 = v4; // 0x40bc9f
    int64_t v148 = 6; // 0x40bc9f
    if ((v140 >= v145 && !v143) == v140 < v145) {
        int64_t v149 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v150 = 0;
            unsigned char v151; // 0x40bff1
            unsigned char v152; // 0x40b8c0
            int64_t * v153; // 0x40c006
            if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                // 0x40bff1
                v151 = *(char *)(v150 + a1);
                v152 = v151 % 64;
                v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
            }
            int64_t v154 = v150 + 1; // 0x40c014
            while (v150 != 255) {
                // 0x40bfea
                v150 = v154;
                if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                    // 0x40bff1
                    v151 = *(char *)(v150 + a1);
                    v152 = v151 % 64;
                    v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                    *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
                }
                // 0x40c00a
                v154 = v150 + 1;
            }
        } else {
            int64_t v155 = 0;
            int64_t * v156; // 0x40bcd4
            if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                // 0x40bcc7
                v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                *v156 = *v156 | 1 << v155 % 64;
            }
            int64_t v157 = v155 + 1; // 0x40bce3
            while (v155 != 255) {
                // 0x40bcc0
                v155 = v157;
                if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                    // 0x40bcc7
                    v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                    *v156 = *v156 | 1 << v155 % 64;
                }
                // 0x40bcd8
                v157 = v155 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v158 = *(char *)v147; // 0x40bcf7
    char v159 = *(char *)v146; // 0x40bcf7
    char v160 = v159; // 0x40bcf7
    bool v161 = false; // 0x40bcf7
    while (v158 == v159) {
        int64_t v162 = v148 - 1; // 0x40bcf7
        v146 += v30;
        v147 += v30;
        v148 = v162;
        v160 = v158;
        v161 = true;
        if (v162 == 0) {
            // break -> 
            break;
        }
        v158 = *(char *)v147;
        v159 = *(char *)v146;
        v160 = v159;
        v161 = false;
    }
    unsigned char v163 = v160;
    int64_t v164 = (int64_t)"blank"; // 0x40bd00
    int64_t v165 = v4; // 0x40bd00
    int64_t v166 = 6; // 0x40bd00
    if ((v158 >= v163 && !v161) == v158 < v163) {
        int64_t v167 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v168 = 0;
            unsigned char v169; // 0x40c05b
            unsigned char v170; // 0x40b8c0
            int64_t * v171; // 0x40c070
            if (*(char *)(2 * v168 + v167) % 2 != 0) {
                // 0x40c05b
                v169 = *(char *)(v168 + a1);
                v170 = v169 % 64;
                v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
            }
            int64_t v172 = v168 + 1; // 0x40c07f
            while (v168 != 255) {
                // 0x40c054
                v168 = v172;
                if (*(char *)(2 * v168 + v167) % 2 != 0) {
                    // 0x40c05b
                    v169 = *(char *)(v168 + a1);
                    v170 = v169 % 64;
                    v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                    *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
                }
                // 0x40c074
                v172 = v168 + 1;
            }
        } else {
            int64_t v173 = 0;
            int64_t * v174; // 0x40bd2e
            if (*(char *)(2 * v173 + v167) % 2 != 0) {
                // 0x40bd21
                v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                *v174 = *v174 | 1 << v173 % 64;
            }
            int64_t v175 = v173 + 1; // 0x40bd3d
            while (v173 != 255) {
                // 0x40bd1a
                v173 = v175;
                if (*(char *)(2 * v173 + v167) % 2 != 0) {
                    // 0x40bd21
                    v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                    *v174 = *v174 | 1 << v173 % 64;
                }
                // 0x40bd32
                v175 = v173 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v176 = *(char *)v165; // 0x40bd5b
    char v177 = *(char *)v164; // 0x40bd5b
    char v178 = v177; // 0x40bd5b
    bool v179 = false; // 0x40bd5b
    while (v176 == v177) {
        int64_t v180 = v166 - 1; // 0x40bd5b
        v164 += v30;
        v165 += v30;
        v166 = v180;
        v178 = v176;
        v179 = true;
        if (v180 == 0) {
            // break -> 
            break;
        }
        v176 = *(char *)v165;
        v177 = *(char *)v164;
        v178 = v177;
        v179 = false;
    }
    unsigned char v181 = v178;
    int64_t v182 = (int64_t)"graph"; // 0x40bd64
    int64_t v183 = v4; // 0x40bd64
    int64_t v184 = 6; // 0x40bd64
    if ((v176 >= v181 && !v179) == v176 < v181) {
        int64_t v185 = (int64_t)*__ctype_b_loc(); // 0x40bd76
        if (a1 != 0) {
            int64_t v186 = 0;
            unsigned char v187; // 0x40c028
            unsigned char v188; // 0x40b8c0
            int64_t * v189; // 0x40c03d
            if (*(char *)(2 * v186 + v185) % 2 != 0) {
                // 0x40c028
                v187 = *(char *)(v186 + a1);
                v188 = v187 % 64;
                v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
            }
            int64_t v190 = v186 + 1; // 0x40c04b
            while (v186 != 255) {
                // 0x40c022
                v186 = v190;
                if (*(char *)(2 * v186 + v185) % 2 != 0) {
                    // 0x40c028
                    v187 = *(char *)(v186 + a1);
                    v188 = v187 % 64;
                    v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                    *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
                }
                // 0x40c041
                v190 = v186 + 1;
            }
        } else {
            int64_t v191 = 0;
            int64_t * v192; // 0x40bd95
            if (*(char *)(2 * v191 + v185) % 2 != 0) {
                // 0x40bd88
                v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                *v192 = *v192 | 1 << v191 % 64;
            }
            int64_t v193 = v191 + 1; // 0x40bda4
            while (v191 != 255) {
                // 0x40bd82
                v191 = v193;
                if (*(char *)(2 * v191 + v185) % 2 != 0) {
                    // 0x40bd88
                    v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                    *v192 = *v192 | 1 << v191 % 64;
                }
                // 0x40bd99
                v193 = v191 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    unsigned char v194 = *(char *)v183; // 0x40be51
    char v195 = *(char *)v182; // 0x40be51
    char v196 = v195; // 0x40be51
    bool v197 = false; // 0x40be51
    while (v194 == v195) {
        int64_t v198 = v184 - 1; // 0x40be51
        v182 += v30;
        v183 += v30;
        v184 = v198;
        v196 = v194;
        v197 = true;
        if (v198 == 0) {
            // break -> 
            break;
        }
        v194 = *(char *)v183;
        v195 = *(char *)v182;
        v196 = v195;
        v197 = false;
    }
    unsigned char v199 = v196;
    if ((v194 >= v199 && !v197) == v194 < v199) {
        int64_t v200 = (int64_t)*__ctype_b_loc(); // 0x40be68
        if (a1 != 0) {
            int64_t v201 = 0;
            unsigned char v202; // 0x40bea8
            unsigned char v203; // 0x40b8c0
            int64_t * v204; // 0x40bebd
            if (*(int16_t *)(2 * v201 + v200) < 0) {
                // 0x40bea8
                v202 = *(char *)(v201 + a1);
                v203 = v202 % 64;
                v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
            }
            int64_t v205 = v201 + 1; // 0x40becb
            while (v201 != 255) {
                // 0x40bea1
                v201 = v205;
                if (*(int16_t *)(2 * v201 + v200) < 0) {
                    // 0x40bea8
                    v202 = *(char *)(v201 + a1);
                    v203 = v202 % 64;
                    v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                    *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
                }
                // 0x40bec1
                v205 = v201 + 1;
            }
        } else {
            int64_t v206 = 0;
            int64_t * v207; // 0x40be84
            if (*(int16_t *)(2 * v206 + v200) < 0) {
                // 0x40be77
                v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                *v207 = *v207 | 1 << v206 % 64;
            }
            int64_t v208 = v206 + 1; // 0x40be93
            while (v206 != 255) {
                // 0x40be70
                v206 = v208;
                if (*(int16_t *)(2 * v206 + v200) < 0) {
                    // 0x40be77
                    v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                    *v207 = *v207 | 1 << v206 % 64;
                }
                // 0x40be88
                v208 = v206 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    // 0x40bed2
    if (strcmp(name, "punct") == 0) {
        int64_t v209 = (int64_t)*__ctype_b_loc(); // 0x40beef
        if (a1 != 0) {
            int64_t v210 = 0;
            unsigned char v211; // 0x40bf2d
            unsigned char v212; // 0x40b8c0
            int64_t * v213; // 0x40bf42
            if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                // 0x40bf2d
                v211 = *(char *)(v210 + a1);
                v212 = v211 % 64;
                v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
            }
            int64_t v214 = v210 + 1; // 0x40bf50
            while (v210 != 255) {
                // 0x40bf27
                v210 = v214;
                if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                    // 0x40bf2d
                    v211 = *(char *)(v210 + a1);
                    v212 = v211 % 64;
                    v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                    *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
                }
                // 0x40bf46
                v214 = v210 + 1;
            }
        } else {
            int64_t v215 = 0;
            int64_t * v216; // 0x40bf0a
            if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                // 0x40befd
                v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                *v216 = *v216 | 1 << v215 % 64;
            }
            int64_t v217 = v215 + 1; // 0x40bf19
            while (v215 != 255) {
                // 0x40bef7
                v215 = v217;
                if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                    // 0x40befd
                    v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                    *v216 = *v216 | 1 << v215 % 64;
                }
                // 0x40bf0e
                v217 = v215 + 1;
            }
        }
        // 0x40b9a6
        return 0;
    }
    // 0x40bf57
    if (strcmp(name, "xdigit") != 0) {
        // 0x40b9a6
        return 4;
    }
    int64_t v218 = (int64_t)*__ctype_b_loc() + 1;
    if (a1 == 0) {
        int64_t v219 = 0;
        int64_t * v220; // 0x40bf90
        if ((*(char *)(2 * v219 + v218) & 16) != 0) {
            // 0x40bf83
            v220 = (int64_t *)(8 * (v219 >> 6) + a2);
            *v220 = *v220 | 1 << v219 % 64;
        }
        int64_t v221 = v219 + 1; // 0x40bf9f
        while (v219 != 255) {
            // 0x40bf7c
            v219 = v221;
            if ((*(char *)(2 * v219 + v218) & 16) != 0) {
                // 0x40bf83
                v220 = (int64_t *)(8 * (v219 >> 6) + a2);
                *v220 = *v220 | 1 << v219 % 64;
            }
            // 0x40bf94
            v221 = v219 + 1;
        }
        // 0x40b9a6
        return 0;
    }
    int64_t v222 = 0;
    unsigned char v223; // 0x40bfb4
    unsigned char v224; // 0x40b8c0
    int64_t * v225; // 0x40bfc9
    if ((*(char *)(2 * v222 + v218) & 16) != 0) {
        // 0x40bfb4
        v223 = *(char *)(v222 + a1);
        v224 = v223 % 64;
        v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
        *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
    }
    int64_t v226 = v222 + 1; // 0x40bfd7
    while (v222 != 255) {
        // 0x40bfad
        v222 = v226;
        if ((*(char *)(2 * v222 + v218) & 16) != 0) {
            // 0x40bfb4
            v223 = *(char *)(v222 + a1);
            v224 = v223 % 64;
            v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
            *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
        }
        // 0x40bfcd
        v226 = v222 + 1;
    }
    // 0x40b9a6
    return 0;
}
// Address range: 0x40c090 - 0x40c2c5
int64_t function_40c090(int64_t a1, int64_t a2, char * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-96, 0x40c0bd
    int64_t * mem = calloc(32, 1); // 0x40c0c6
    if (mem == NULL) {
        // 0x40c260
        *(int32_t *)a6 = 12;
        // 0x40c239
        return 0;
    }
    int64_t * mem2 = calloc(80, 1); // 0x40c0e1
    if (mem2 == NULL) {
        // 0x40c280
        free(mem);
        *(int32_t *)a6 = 12;
        // 0x40c239
        return 0;
    }
    int64_t v2 = (int64_t)mem; // 0x40c0c6
    int64_t v3 = (int64_t)mem2; // 0x40c0e1
    char * v4 = (char *)(v3 + 32); // 0x40c0f6
    unsigned char v5 = (char)a5; // 0x40c0fa
    *v4 = *v4 & -2 | v5 % 2;
    int64_t v6 = function_40b8c0(a2, v2, v3 + 24, v3 + 72, &v1, (int64_t)a3, 0); // 0x40c123
    int32_t v7 = v6; // 0x40c12a
    if (v7 != 0) {
        // 0x40c2a0
        free(mem);
        function_407690(v3);
        *(int32_t *)a6 = v7;
        // 0x40c239
        return 0;
    }
    // 0x40c132
    int64_t v8; // 0x40c090
    char v9 = *(char *)&v8; // 0x40c132
    int64_t v10 = v9; // 0x40c132
    v8 = v10;
    v8 = v10;
    int64_t v11 = (int64_t)a4; // 0x40c13e
    if (v9 != 0) {
        int64_t v12 = v8;
        v11++;
        char v13 = *(char *)v11; // 0x40c16d
        v8 = v13;
        int64_t * v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2); // 0x40c172
        *v14 = *v14 | 1 << v12 % 64;
        while (v13 != 0) {
            v12 = v8;
            v11++;
            v13 = *(char *)v11;
            v8 = v13;
            v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2);
            *v14 = *v14 | 1 << v12 % 64;
        }
    }
    if (v5 != 0) {
        int64_t v15 = v2;
        int64_t * v16 = (int64_t *)v15; // 0x40c186
        *v16 = -1 - *v16;
        int64_t v17 = v15 + 8; // 0x40c190
        while (v2 + 24 != v15) {
            // 0x40c186
            v15 = v17;
            v16 = (int64_t *)v15;
            *v16 = -1 - *v16;
            v17 = v15 + 8;
        }
    }
    int32_t * v18 = (int32_t *)(a1 + 180); // 0x40c192
    if (*v18 >= 2) {
        int64_t v19 = *(int64_t *)(a1 + 120); // 0x40c19b
        v8 = v19;
        *mem = *mem & *(int64_t *)v19;
        int64_t v20 = 0; // 0x40c1a9
        v20 += 8;
        int64_t * v21 = (int64_t *)(v20 + v2); // 0x40c1a5
        *v21 = *v21 & *(int64_t *)(v20 + v19);
        while (v20 != 24) {
            // 0x40c1a1
            v20 += 8;
            v21 = (int64_t *)(v20 + v2);
            *v21 = *v21 & *(int64_t *)(v20 + v8);
        }
    }
    int64_t v22 = a1 + 112; // 0x40c1b3
    int64_t v23 = a1 + 128; // 0x40c1b7
    v8 = 0;
    int64_t v24; // bp-88, 0x40c090
    int64_t v25 = &v24; // 0x40c1c2
    v24 = v2;
    int64_t result = function_408ca0(v22, v23, 0, 0, v25); // 0x40c1d7
    if (result != 0) {
        // 0x40c1e4
        if (*v18 < 2) {
            // 0x40c270
            function_407690(v3);
            // 0x40c239
            return result;
        }
        char * v26 = (char *)(a1 + 176); // 0x40c1f1
        *v26 = *v26 | 2;
        v24 = v3;
        int64_t v27 = function_408ca0(v22, v23, 0, 0, v25); // 0x40c211
        if (v27 != 0) {
            // 0x40c21b
            int64_t v28; // bp-72, 0x40c090
            int64_t result2 = function_408ca0(v22, v23, (int32_t)result, (int32_t)v27, (int64_t)&v28); // 0x40c231
            // 0x40c239
            return result2;
        }
    }
    // 0x40c250
    free(mem);
    function_407690(v3);
    // 0x40c260
    *(int32_t *)a6 = 12;
    // 0x40c239
    return 0;
}
// Address range: 0x40c2d0 - 0x40c7a8
int64_t function_40c2d0(int64_t result, int64_t result2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(result + 180); // 0x40c2e7
    int32_t v3 = 0; // 0x40c2f2
    if (*v2 == 1) {
        // 0x40c2f4
        v3 = (int32_t)(*(int64_t *)(result + 24) / 0x400000) % 2;
    }
    // 0x40c303
    if (result2 < 1) {
        // 0x40c4c3
        return result;
    }
    char * v4 = (char *)(result + 26);
    int64_t * v5 = (int64_t *)(result + 16);
    char wstr; // bp-312, 0x40c2d0
    int64_t v6 = &wstr;
    char ps; // bp-320, 0x40c2d0
    int64_t v7 = &ps;
    int64_t v8 = a3; // 0x40c321
    int64_t v9 = 0; // 0x40c321
    int64_t v10 = result; // 0x40c321
    int64_t v11; // 0x40c2d0
    int64_t v12; // 0x40c2d0
    int64_t v13; // 0x40c2d0
    int64_t v14; // 0x40c2d0
    int64_t v15; // 0x40c2d0
    int64_t v16; // 0x40c2d0
    unsigned char v17; // 0x40c384
    int64_t v18; // 0x40c4d9
    while (true) {
      lab_0x40c361_2:
        // 0x40c361
        v13 = v10;
        v11 = v9;
        int64_t v19 = *(int64_t *)(8 * v11 + v8); // 0x40c369
        v1 = v13;
        int64_t v20 = 16 * v19; // 0x40c377
        v16 = v20 + v13;
        v17 = *(char *)(v16 + 8);
        if (v17 != 1) {
            int64_t v21 = v17; // 0x40c384
            char * v22 = NULL; // 0x40c2d0
            int64_t v23 = v13; // 0x40c2d0
            switch (v17) {
                case 3: {
                    int64_t v24 = (int64_t)v22; // 0x40c628
                    int64_t v25 = *(int64_t *)(*(int64_t *)(v23 + v20) + v24); // 0x40c62d
                    int64_t v26 = 0; // 0x40c639
                    int64_t v27 = 8 * v24;
                    int64_t v28 = v23;
                    int64_t v29 = v28; // 0x40c644
                    char * v30; // 0x40c2d0
                    char * v31; // 0x40c2d0
                    int64_t v32; // 0x40c654
                    int32_t v33; // 0x40c66b
                    if ((1 << v26 % 64 & v25) != 0) {
                        // 0x40c646
                        v31 = (char *)(v27 + a4);
                        *v31 = 1;
                        v29 = v28;
                        if (v3 != 0) {
                            // 0x40c654
                            v32 = v27 + 128;
                            v30 = v31;
                            if ((int32_t)v32 < 384) {
                                // 0x40c663
                                v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                v30 = (char *)((int64_t)v33 + a4);
                            }
                            // 0x40c672
                            *v30 = 1;
                            v29 = v32 & 0xffffffff;
                        }
                    }
                    int64_t v34 = v29;
                    int64_t v35 = v27 + 1; // 0x40c679
                    v26 = v26 + 1 & 0xffffffff;
                    while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                        // 0x40c640
                        v27 = v35;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40c646
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40c654
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40c663
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40c672
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40c675
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                    }
                    // 0x40c683
                    v14 = v21;
                    v15 = v16;
                    v12 = v34;
                    while (v22 != (char *)24) {
                        // 0x40c698
                        v1 = v34;
                        v22 = (char *)(v24 + 8);
                        v24 = (int64_t)v22;
                        v25 = *(int64_t *)(*(int64_t *)(v34 + v20) + v24);
                        v26 = 0;
                        v27 = 8 * v24;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40c646
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40c654
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40c663
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40c672
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40c675
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                        while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                            // 0x40c640
                            v27 = v35;
                            v28 = v34;
                            v29 = v28;
                            if ((1 << v26 % 64 & v25) != 0) {
                                // 0x40c646
                                v31 = (char *)(v27 + a4);
                                *v31 = 1;
                                v29 = v28;
                                if (v3 != 0) {
                                    // 0x40c654
                                    v32 = v27 + 128;
                                    v30 = v31;
                                    if ((int32_t)v32 < 384) {
                                        // 0x40c663
                                        v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                        v30 = (char *)((int64_t)v33 + a4);
                                    }
                                    // 0x40c672
                                    *v30 = 1;
                                    v29 = v32 & 0xffffffff;
                                }
                            }
                            // 0x40c675
                            v34 = v29;
                            v35 = v27 + 1;
                            v26 = v26 + 1 & 0xffffffff;
                        }
                        // 0x40c683
                        v14 = v21;
                        v15 = v16;
                        v12 = v34;
                    }
                    goto lab_0x40c34f;
                }
                case 6: {
                    // 0x40c4d5
                    v18 = *(int64_t *)v16;
                    if (*v2 < 2) {
                        goto lab_0x40c506;
                    } else {
                        // 0x40c4e5
                        if (*(int64_t *)(v18 + 72) != 0) {
                            goto lab_0x40c5cc;
                        } else {
                            // 0x40c4f0
                            if (*(char *)(v18 + 32) % 2 != 0) {
                                goto lab_0x40c5cc;
                            } else {
                                // 0x40c4fb
                                if (*(int64_t *)(v18 + 64) != 0) {
                                    goto lab_0x40c5cc;
                                } else {
                                    goto lab_0x40c506;
                                }
                            }
                        }
                    }
                }
                default: {
                    int64_t v36 = v21 & 253; // 0x40c33a
                    if (v36 == 5) {
                        // break -> 0x40c6a4
                        break;
                    }
                    // 0x40c346
                    v14 = v36;
                    v15 = v16;
                    v12 = v13;
                    if (v17 == 2) {
                        int128_t v37 = __asm_movdqa(g16); // 0x40c720
                        __asm_movups(*(int128_t *)&v1, v37);
                        __asm_movups(*(int128_t *)(a4 + 16), v37);
                        __asm_movups(*(int128_t *)(a4 + 32), v37);
                        __asm_movups(*(int128_t *)(a4 + 48), v37);
                        __asm_movups(*(int128_t *)(a4 + 64), v37);
                        __asm_movups(*(int128_t *)(a4 + 80), v37);
                        __asm_movups(*(int128_t *)(a4 + 96), v37);
                        __asm_movups(*(int128_t *)(a4 + 112), v37);
                        __asm_movups(*(int128_t *)(a4 + 128), v37);
                        __asm_movups(*(int128_t *)(a4 + 144), v37);
                        __asm_movups(*(int128_t *)(a4 + 160), v37);
                        __asm_movups(*(int128_t *)(a4 + 176), v37);
                        __asm_movups(*(int128_t *)(a4 + 192), v37);
                        __asm_movups(*(int128_t *)(a4 + 208), v37);
                        __asm_movups(*(int128_t *)(a4 + 224), v37);
                        __asm_movups(*(int128_t *)(a4 + 240), v37);
                        goto lab_0x40c78f;
                    }
                    goto lab_0x40c34f;
                }
            }
        } else {
            char * v38 = (char *)v16; // 0x40c38f
            int64_t v39 = (int64_t)*v38; // 0x40c38f
            *(char *)(v39 + a4) = 1;
            if (v3 != 0) {
                int32_t v40 = *(int32_t *)(4 * v39 + (int64_t)*__ctype_tolower_loc()); // 0x40c3ae
                *(char *)((int64_t)v40 + a4) = 1;
            }
            // 0x40c3b7
            v14 = v39;
            v15 = v16;
            v12 = v13;
            if ((*v4 & 64) == 0) {
                goto lab_0x40c34f;
            } else {
                // 0x40c3c2
                v14 = v39;
                v15 = v16;
                v12 = v13;
                if (*v2 < 2) {
                    goto lab_0x40c34f;
                } else {
                    // 0x40c3cf
                    v1 = v20;
                    wstr = *v38;
                    int64_t v41 = v19 + 1; // 0x40c3e2
                    int64_t v42 = 1; // 0x40c3ea
                    if (*v5 > v41) {
                        // 0x40c3f0
                        v42 = 1;
                        if ((*(int32_t *)(v16 + 24) & 0x2000ff) == 0x200001) {
                            int64_t v43 = v41; // 0x40c43e
                            int64_t v44; // bp-311, 0x40c2d0
                            int64_t v45 = &v44; // 0x40c2d0
                            int64_t v46 = v45 + 1; // 0x40c43a
                            v43++;
                            *(char *)v45 = *(char *)(v16 + 16);
                            while (*v5 > v43) {
                                int64_t v47 = 16 * v43 + v13; // 0x40c423
                                v45 = v46;
                                if ((*(int32_t *)(v47 + 8) & 0x2000ff) != 0x200001) {
                                    // break -> 0x40c44f
                                    break;
                                }
                                v46 = v45 + 1;
                                v43++;
                                *(char *)v45 = *(char *)v47;
                            }
                            // 0x40c44f
                            v42 = v46 - v6;
                        }
                    }
                    // 0x40c45a
                    ps = 0;
                    int32_t wc; // bp-324, 0x40c2d0
                    int64_t v48 = function_406400(&wc, v6, v42); // 0x40c475
                    v14 = v42;
                    v15 = v6;
                    v12 = &wc;
                    if (v48 != v42) {
                        goto lab_0x40c34f;
                    } else {
                        uint32_t wc2 = towlower(wc); // 0x40c487
                        int64_t v49 = wc2; // 0x40c496
                        int32_t v50 = wcrtomb(&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40c498
                        v14 = v7;
                        v15 = v49;
                        v12 = v6;
                        if (v50 == -1) {
                            goto lab_0x40c34f;
                        } else {
                            int64_t v51 = v11 + 1; // 0x40c4ac
                            *(char *)((int64_t)wstr + a4) = 1;
                            v8 = v7;
                            v9 = v51;
                            v10 = v6;
                            if (v51 >= v49) {
                                // 0x40c4c3
                                return result2;
                            }
                            goto lab_0x40c361_2;
                        }
                    }
                }
            }
        }
    }
    if (v17 != 2) {
        // 0x40c4c3
    }
  lab_0x40c34f:;
    int64_t v52 = v11 + 1; // 0x40c354
    v8 = v14;
    v9 = v52;
    v10 = v12;
    if (v52 >= v15) {
        // 0x40c4c3
        return result2;
    }
    goto lab_0x40c361_2;
  lab_0x40c506:;
    int64_t * v53 = (int64_t *)(v18 + 40); // 0x40c509
    int64_t v54 = *v53; // 0x40c509
    v14 = 6;
    v15 = v16;
    v12 = v13;
    if (v54 >= 0 == (v54 != 0)) {
        int64_t * v55 = (int64_t *)v18; // 0x40c52f
        int64_t v56 = 0; // 0x40c518
        ps = 0;
        int64_t v57 = 4 * v56; // 0x40c53d
        uint32_t wc3 = *(int32_t *)(*v55 + v57); // 0x40c545
        int32_t v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40c549
        int64_t v59 = v7; // 0x40c552
        int32_t v60; // 0x40c575
        int64_t v61; // 0x40c554
        if (v58 != -1) {
            // 0x40c554
            v61 = wstr;
            *(char *)(v61 + a4) = 1;
            v59 = v61;
            if (v3 != 0) {
                // 0x40c568
                v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                *(char *)((int64_t)v60 + a4) = 1;
                v59 = v61;
            }
        }
        int64_t v62 = wc3; // 0x40c545
        int64_t v63 = v59;
        int64_t v64 = v63; // 0x40c587
        int64_t v65 = v62; // 0x40c587
        uint32_t wc4; // 0x40c59d
        int64_t v66; // 0x40c5ac
        int32_t v67; // 0x40c5ae
        if ((*v4 & 64) != 0) {
            // 0x40c589
            v64 = v63;
            v65 = v62;
            if (*v2 >= 2) {
                // 0x40c596
                wc4 = towlower(*(int32_t *)(*v55 + v57));
                v66 = wc4;
                v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                v64 = v7;
                v65 = v66;
                if (v67 != -1) {
                    // 0x40c5bd
                    *(char *)((int64_t)wstr + a4) = 1;
                    v64 = v7;
                    v65 = v66;
                }
            }
        }
        // 0x40c518
        v56++;
        v14 = v64;
        v15 = v65;
        v12 = v6;
        while (v56 < *v53) {
            // 0x40c526
            ps = 0;
            v57 = 4 * v56;
            wc3 = *(int32_t *)(*v55 + v57);
            v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps);
            v59 = v7;
            if (v58 != -1) {
                // 0x40c554
                v61 = wstr;
                *(char *)(v61 + a4) = 1;
                v59 = v61;
                if (v3 != 0) {
                    // 0x40c568
                    v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                    *(char *)((int64_t)v60 + a4) = 1;
                    v59 = v61;
                }
            }
            // 0x40c57e
            v62 = wc3;
            v63 = v59;
            v64 = v63;
            v65 = v62;
            if ((*v4 & 64) != 0) {
                // 0x40c589
                v64 = v63;
                v65 = v62;
                if (*v2 >= 2) {
                    // 0x40c596
                    wc4 = towlower(*(int32_t *)(*v55 + v57));
                    v66 = wc4;
                    v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                    v64 = v7;
                    v65 = v66;
                    if (v67 != -1) {
                        // 0x40c5bd
                        *(char *)((int64_t)wstr + a4) = 1;
                        v64 = v7;
                        v65 = v66;
                    }
                }
            }
            // 0x40c518
            v56++;
            v14 = v64;
            v15 = v65;
            v12 = v6;
        }
    }
    goto lab_0x40c34f;
    // 0x40c361
    goto lab_0x40c361_2;
  lab_0x40c5cc:
    // 0x40c5cc
    ps = 0;
    wstr = 0;
    if (function_406400(NULL, v7, 1) == -2) {
        // 0x40c5fd
        *(char *)((int64_t)ps + a4) = 1;
    }
    char v68 = ps + 1; // 0x40c607
    ps = v68;
    v14 = 1;
    v15 = v7;
    v12 = 0;
    while (v68 != 0) {
        // 0x40c5d8
        wstr = 0;
        if (function_406400(NULL, v7, 1) == -2) {
            // 0x40c5fd
            *(char *)((int64_t)ps + a4) = 1;
        }
        // 0x40c607
        v68 = ps + 1;
        ps = v68;
        v14 = 1;
        v15 = v7;
        v12 = 0;
    }
    goto lab_0x40c34f;
  lab_0x40c78f:;
    char * v69 = (char *)(result + 56); // 0x40c794
    *v69 = *v69 | 1;
    // 0x40c4c3
    return result;
}
// Address range: 0x40c7b0 - 0x40ca34
int64_t function_40c7b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a3 + a1; // 0x40c7b8
    char v2 = *(char *)(v1 + 8); // 0x40c7c2
    if (v2 == 7) {
        int64_t v3 = *(int64_t *)(a4 + 8); // 0x40c8d8
        int64_t v4 = v3 + a5; // 0x40c8dc
        unsigned char v5 = *(char *)v4; // 0x40c8dc
        if (v5 < 194) {
            // 0x40c800
            return 0;
        }
        uint64_t v6 = *(int64_t *)(a4 + 88); // 0x40c8ea
        uint64_t v7 = a5 + 1;
        if (v7 >= v6) {
            // 0x40c800
            return 0;
        }
        int64_t v8 = v3 + v7;
        unsigned char v9 = *(char *)v8; // 0x40c8fb
        if (v5 < 224) {
            // 0x40c9d3
            if (v9 == -65 || (v9 ^ -128) < 63) {
                // 0x40c800
                return 2;
            }
            // 0x40c800
            return 0;
        }
        int64_t v10; // 0x40c7b0
        if (v5 < 240) {
            // 0x40c913
            v10 = 3;
            if (v5 == -32 == v9 < 160) {
                // 0x40c800
                return 0;
            }
        } else {
            if (v5 < 248) {
                // 0x40c9b5
                v10 = 4;
                if (v5 == -16 == v9 < 144) {
                    // 0x40c800
                    return 0;
                }
            } else {
                if (v5 < 252) {
                    // 0x40c9ef
                    v10 = 5;
                    if (v5 == -8 == v9 < 136) {
                        // 0x40c800
                        return 0;
                    }
                } else {
                    if (v5 >= 254) {
                        // 0x40c800
                        return 0;
                    }
                    // 0x40ca16
                    v10 = 6;
                    if (v5 == -4 == v9 < 132) {
                        // 0x40c800
                        return 0;
                    }
                }
            }
        }
        // 0x40c92c
        if (v6 < v10 + a5) {
            // 0x40c800
            return 0;
        }
        // 0x40c939
        if (v9 != -65 && (v9 ^ -128) >= 63) {
            // 0x40c800
            return 0;
        }
        int64_t v11 = v8; // 0x40c95e
        v11++;
        while (v10 + v4 != v11) {
            char v12 = *(char *)v11;
            if (v12 != -65 && (v12 ^ -128) >= 63) {
                // 0x40c800
                return 0;
            }
            v11++;
        }
        // 0x40c800
        return v10 & 0xffffffff;
    }
    // 0x40c7d1
    if (*(int32_t *)(a4 + 144) == 1) {
        // 0x40c800
        return 0;
    }
    int64_t v13 = function_407fe0(a4, a5); // 0x40c7e6
    int64_t v14 = v13 & 0xffffffff; // 0x40c7eb
    if (v2 == 5) {
        if ((int32_t)v13 < 2) {
            // 0x40c800
            return 0;
        }
        if ((a5 & 64) == 0) {
            // 0x40c81c
            if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 10) {
                // 0x40c800
                return 0;
            }
        }
        // 0x40c827
        if ((char)a5 > -1) {
            // 0x40c800
            return v14 & 0xffffffff;
        }
        // 0x40c82b
        if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 0) {
            // 0x40c800
            return 0;
        }
        // 0x40c800
        return v14 & 0xffffffff;
    }
    if (v2 == 6 != (int32_t)v13 > 1) {
        // 0x40c800
        return 0;
    }
    int64_t v15 = *(int64_t *)v1; // 0x40c840
    int64_t * v16 = (int64_t *)(v15 + 64); // 0x40c843
    int64_t v17 = *v16; // 0x40c843
    int64_t v18 = *(int64_t *)(v15 + 40); // 0x40c847
    if (v17 != 0) {
        goto lab_0x40c85d;
    } else {
        // 0x40c850
        if ((*(int64_t *)(v15 + 72) || v18) == 0) {
            goto lab_0x40c99d;
        } else {
            goto lab_0x40c85d;
        }
    }
  lab_0x40c8c2_2:
    // 0x40c8c2
    if (*(char *)(v15 + 32) % 2 == 0) {
        // 0x40c800
        return v14 & 0xffffffff;
    }
    // 0x40c800
    return 0;
  lab_0x40c85d:;
    uint32_t wc = *(int32_t *)(*(int64_t *)(a4 + 16) + 4 * a5); // 0x40c861
    if (v18 < 1) {
        goto lab_0x40c88f;
    } else {
        int64_t v19 = *(int64_t *)v15; // 0x40c86a
        if (*(int32_t *)v19 == wc) {
            goto lab_0x40c8c2_2;
        } else {
            int64_t v20 = 1; // 0x40c886
            while (v18 != v20) {
                // 0x40c880
                if (*(int32_t *)(4 * v20 + v19) == wc) {
                    goto lab_0x40c8c2_2;
                }
                v20++;
            }
            goto lab_0x40c88f;
        }
    }
  lab_0x40c88f:;
    int64_t * v21 = (int64_t *)(v15 + 72); // 0x40c88f
    int64_t v22 = v17; // 0x40c896
    if (*v21 < 1) {
        goto lab_0x40c96c;
    } else {
        int64_t v23 = 0; // 0x40c8a0
        int64_t v24 = *(int64_t *)(v15 + 24); // 0x40c8ae
        while (iswctype(wc, (int32_t)*(int64_t *)(v24 + 8 * v23)) == 0) {
            // 0x40c8a0
            v23++;
            if (v23 >= *v21) {
                // 0x40c968
                v22 = *v16;
                goto lab_0x40c96c;
            }
            v24 = *(int64_t *)(v15 + 24);
        }
        goto lab_0x40c8c2_2;
    }
  lab_0x40c99d:
    // 0x40c99d
    if (*(char *)(v15 + 32) % 2 != 0) {
        // 0x40c800
        return v14 & 0xffffffff;
    }
    // 0x40c800
    return 0;
  lab_0x40c96c:
    // 0x40c96c
    if (v22 >= 1) {
        int64_t v25 = 0; // 0x40c977
        int64_t v26 = 4 * v25; // 0x40c980
        if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
            // 0x40c986
            if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                goto lab_0x40c8c2_2;
            }
        }
        // 0x40c994
        v25++;
        while (v25 != v22) {
            // 0x40c980
            v26 = 4 * v25;
            if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
                // 0x40c986
                if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                    goto lab_0x40c8c2_2;
                }
            }
            // 0x40c994
            v25++;
        }
    }
    goto lab_0x40c99d;
}
// Address range: 0x40ca40 - 0x40d15f
int64_t function_40ca40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x40ca40
    int128_t v1; // 0x40ca40
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x40ca61
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x40ca68
    int64_t v5 = *v4; // 0x40ca68
    int64_t v6 = *(int64_t *)(*(int64_t *)v3 + 16 * a3); // 0x40ca79
    int32_t * v7 = (int32_t *)(a1 + 224); // 0x40ca8b
    int32_t result = 0; // bp-128, 0x40ca92
    int64_t v8 = (int64_t)*v7 + a6; // 0x40ca9a
    int64_t * v9; // 0x40ca40
    int64_t v10; // 0x40ca40
    if (v8 < v5) {
        // 0x40ca40
        v9 = (int64_t *)(a2 + 16);
        v10 = a2;
    } else {
        int64_t v11 = v8 + 1; // 0x40d090
        if (0x7fffffffffffffff - v5 < v11) {
            // 0x40cf06
            return 12;
        }
        uint64_t v12 = v11 + v5; // 0x40d0b0
        if (v12 >= 0x2000000000000000) {
            // 0x40cf06
            return 12;
        }
        int64_t * v13 = (int64_t *)(a2 + 16);
        int64_t * mem = realloc((int64_t *)*v13, 8 * (int32_t)v12); // 0x40d0ca
        if (mem == NULL) {
            // 0x40cf06
            return 12;
        }
        int64_t v14 = (int64_t)mem; // 0x40d0ca
        *v13 = v14;
        *v4 = v12;
        memset((int64_t *)(8 * v5 + v14), 0, 8 * (int32_t)v11);
        v9 = v13;
        v10 = 0;
    }
    int64_t * v15 = (int64_t *)(a1 + 184); // 0x40caa6
    int64_t v16 = *v15; // 0x40caa6
    int32_t * v17 = (int32_t *)(a1 + 160); // 0x40cab3
    int32_t v18 = *v17; // 0x40cab3
    int64_t v19 = *v9; // 0x40cabe
    int64_t * v20 = (int64_t *)(a1 + 72); // 0x40cac7
    int64_t v21 = *v20; // 0x40cac7
    *v15 = v19;
    int128_t v22; // bp-120, 0x40ca40
    int32_t v23; // 0x40ca40
    int64_t v24; // 0x40caff
    if (v10 == 0) {
        // 0x40d000
        *v20 = a4;
        v23 = function_409d60(a1, a4 - 1, v18);
        goto lab_0x40d014;
    } else {
        // 0x40cae2
        *v20 = v10;
        v23 = function_409d60(a1, v10 - 1, v18);
        if (v10 == a4) {
            goto lab_0x40d014;
        } else {
            // 0x40caff
            v24 = *(int64_t *)(v19 + 8 * v10);
            if (v24 == 0) {
                goto lab_0x40cb13;
            } else {
                // 0x40cb08
                if ((*(char *)(v24 + 104) & 64) != 0) {
                    int64_t v25 = function_4090d0((int64_t)&v22, v24 + 8); // 0x40cf2f
                } else {
                    goto lab_0x40cb13;
                }
            }
        }
    }
  lab_0x40cee0_2:
    // 0x40cee0
    free(NULL);
    result = 12;
    int64_t v26; // 0x40ca40
    int64_t v27 = v26; // 0x40ceed
    goto lab_0x40cef5_2;
  lab_0x40cd50_2:
    // 0x40cd50
    free(NULL);
    int32_t v52; // bp-124, 0x40ca40
    int32_t v53 = v52; // 0x40cd62
    result = v53;
    int128_t v54; // 0x40cbb2
    int128_t v45 = v54; // 0x40cd6c
    v27 = v26;
    if (v53 != 0) {
        goto lab_0x40cef5_2;
    } else {
        goto lab_0x40cddc;
    }
  lab_0x40ce4d_2:
    // 0x40ce4d
    free((int64_t *)v26);
    int64_t v55 = *(int64_t *)(*v15 + 8 * a6); // 0x40ce67
    int64_t result2; // 0x40ca40
    int64_t v33; // 0x40ca40
    if (v55 == 0) {
        // 0x40d128
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = 1;
    } else {
        // 0x40ce74
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = function_408030(*(int64_t *)(v55 + 16), v55 + 24, a5) == 0;
    }
    // 0x40cf06
    return result2;
  lab_0x40cc00:;
    // 0x40cc00
    int64_t v56; // 0x40ca40
    int64_t v57 = v56;
    int64_t v58; // 0x40ca40
    if ((char)function_409e50(a1, v57, v58) == 0) {
        goto lab_0x40cc3f;
    } else {
        goto lab_0x40cc1d;
    }
  lab_0x40cc3f:;
    // 0x40cc3f
    int64_t v59; // 0x40ca40
    int64_t v60 = v59 + 1; // 0x40cc3f
    int64_t * v61; // 0x40cbb6
    uint64_t v62 = *v61; // 0x40cc43
    int64_t v63 = v60; // 0x40cc47
    if (v60 >= v62) {
        // break -> 0x40cfbd
        goto lab_0x40cfbd;
    }
    goto lab_0x40cc4d;
  lab_0x40cc1d:;
    // 0x40cc1d
    int64_t * v77; // 0x40ca40
    int64_t v92 = *v77; // 0x40cc1d
    int64_t v68; // 0x40cc55
    int64_t v93 = *(int64_t *)(v92 + 8 * v68); // 0x40cc2e
    int64_t v94; // 0x40ca40
    if ((char)function_406a20(v94, v93) == 0) {
        goto lab_0x40cee0_2;
    }
    goto lab_0x40cc3f;
  lab_0x40cbb2:;
    // 0x40cbb2
    int128_t v40; // 0x40ca40
    v54 = __asm_pxor(v40, v40);
    v52 = 0;
    int128_t v83 = __asm_movaps(v54); // bp-88, 0x40cbcb
    int64_t v39; // 0x40ca40
    if (*(int64_t *)(v39 + 40) >= 1) {
        // 0x40cbe5
        int64_t v88; // 0x40cbbb
        int64_t v73 = v88 + 216; // 0x40cbe7
        int64_t * v65 = (int64_t *)(v39 + 48); // 0x40cc4d
        int64_t * v67 = (int64_t *)v88; // 0x40cc51
        int32_t v95; // 0x40cb72
        v58 = v95;
        v77 = (int64_t *)(v88 + 24);
        v63 = 0;
        while (true) {
          lab_0x40cc4d:
            // 0x40cc4d
            v59 = v63;
            int64_t v64 = *v65; // 0x40cc4d
            int64_t v66 = *v67; // 0x40cc51
            v68 = *(int64_t *)(v64 + 8 * v59);
            int64_t v69 = 16 * v68; // 0x40cc5c
            int64_t v70 = v69 + v66; // 0x40cc60
            char v71 = *(char *)(v70 + 10); // 0x40cc64
            v56 = v70;
            if ((v71 & 16) == 0) {
                goto lab_0x40cc00;
            } else {
                int64_t v72 = function_40c7b0(v66, v73, v68, a1, v58); // 0x40cc79
                int32_t v74 = v72; // 0x40cc81
                if (v74 < 2) {
                    if (v74 != 0) {
                        goto lab_0x40cc1d;
                    } else {
                        int64_t v75 = *v67; // 0x40ceb8
                        v56 = v75 + v69;
                        goto lab_0x40cc00;
                    }
                } else {
                    int64_t v76 = *v77; // 0x40cc95
                    int64_t v78 = *v15; // 0x40cca2
                    int64_t v79 = *(int64_t *)(v76 + 8 * v68); // 0x40ccaa
                    int64_t v80 = 8 * ((0x100000000 * v72 >> 32) + v58); // 0x40ccae
                    int64_t v81 = *(int64_t *)(v78 + v80); // 0x40ccb6
                    if (v81 != 0) {
                        int64_t v82 = function_408570((int64_t *)&v83, (int128_t *)(v81 + 8)); // 0x40ccdc
                        int32_t v84 = v82; // 0x40cce6
                        v52 = v84;
                        if (v84 != 0) {
                            goto lab_0x40cd50_2;
                        }
                    }
                    // 0x40ccee
                    int64_t v85; // 0x40ca40
                    if ((char)function_406a20(v85, v79) == 0) {
                        goto lab_0x40cee0_2;
                    }
                    int64_t v86 = *v15; // 0x40cd16
                    int64_t v87 = function_4095e0(&v52, v88, (int64_t *)&v83, v58, v58, a6); // 0x40cd1e
                    *(int64_t *)(v86 + v80) = v87;
                    int64_t v89 = *v15; // 0x40cd27
                    int64_t v90 = *(int64_t *)(v89 + v80); // 0x40cd2f
                    int32_t v91 = v52; // 0x40cd3a
                    if (v90 == 0 && v91 != 0) {
                        goto lab_0x40cd50_2;
                    }
                    goto lab_0x40cc1d;
                }
            }
        }
    }
  lab_0x40cfbd:
    // 0x40cfbd
    free(NULL);
    result = 0;
    v45 = v54;
    goto lab_0x40cddc;
  lab_0x40cddc:;
    // 0x40cddc
    int64_t v42; // 0x40ca40
    int64_t v96 = function_409d60(a1, (int64_t)((int32_t)v42 - 1), *v17); // 0x40cdeb
    int64_t v97 = function_4092e0((int128_t *)&result, v3, (int64_t *)&v22, (int32_t)v96); // 0x40ce04
    int64_t v98; // 0x40ca40
    int64_t v41; // 0x40ca40
    int64_t v99; // 0x40ca40
    int64_t v43; // 0x40cb62
    if (v97 == 0) {
        // 0x40cfd0
        v27 = v26;
        if (result != 0) {
            // break -> 0x40cef5
            goto lab_0x40cef5_2;
        }
        int64_t v100 = *v15; // 0x40cfdc
        *(int64_t *)(v100 + v43) = 0;
        v99 = v41 + 1;
        v98 = v100;
    } else {
        int64_t v101 = *v15; // 0x40ce15
        *(int64_t *)(v101 + v43) = v97;
        v99 = 0;
        v98 = v101;
    }
    // 0x40ce2f
    v33 = v42;
    if (v42 >= a6) {
        goto lab_0x40ce4d_2;
    }
    int64_t v34 = v99; // 0x40ce47
    int128_t v35 = v45; // 0x40ce47
    int64_t v36 = v98; // 0x40ce47
    int64_t v37 = v42; // 0x40ce47
    int64_t v38 = v97; // 0x40ce47
    v33 = v42;
    if (v99 > (int64_t)*v7) {
        goto lab_0x40ce4d_2;
    }
    goto lab_0x40cb5e;
  lab_0x40d014:
    // 0x40d014
    v22 = 1;
    int64_t * mem2 = malloc(8); // 0x40d031
    if (mem2 == NULL) {
        // 0x40cf06
        return 12;
    }
    int64_t v102 = (int64_t)mem2; // 0x40d031
    *mem2 = a3;
    int32_t v103 = 0x100000000 * a7 >> 32;
    result = 0;
    int32_t v104 = function_4089a0(v3, (int64_t *)&v22, v6, v103); // 0x40d076
    result = v104;
    v27 = v102;
    if (v104 == 0) {
        goto lab_0x40cf52;
    } else {
        goto lab_0x40cef5_2;
    }
  lab_0x40cf52:;
    int32_t v105 = function_409880(a1, &v22, a4, v6, v103); // 0x40cf6d
    result = v105;
    v27 = v102;
    int64_t v51 = a4; // 0x40cf73
    int64_t v50 = v102; // 0x40cf73
    int32_t v49 = v23; // 0x40cf73
    if (v105 != 0) {
        goto lab_0x40cef5_2;
    } else {
        goto lab_0x40cf75;
    }
  lab_0x40cef5_2:
    // 0x40cef5
    free((int64_t *)v27);
    // 0x40cf06
    return result;
  lab_0x40cb13:;
    int128_t v28 = __asm_pxor(v2, v2); // 0x40cb1f
    v22 = __asm_movaps(v28);
    int64_t v29 = 0; // 0x40cb23
    int128_t v30 = v28; // 0x40cb23
    int64_t v31 = v10; // 0x40cb23
    int64_t v32 = v24; // 0x40cb23
    goto lab_0x40cb2b;
  lab_0x40cf75:;
    int64_t v48 = function_4092e0((int128_t *)&result, v3, (int64_t *)&v22, v49); // 0x40cf85
    v27 = v50;
    if (v48 != 0 || result == 0) {
        // 0x40cf96
        *(int64_t *)(*v15 + 8 * v51) = v48;
        v29 = v50;
        v31 = v51;
        v32 = v48;
        goto lab_0x40cb2b;
    } else {
        goto lab_0x40cef5_2;
    }
  lab_0x40cb2b:
    // 0x40cb2b
    v26 = v29;
    v33 = v31;
    if (v31 < a6) {
        // 0x40cb36
        v33 = v31;
        if (*v7 < 0) {
            goto lab_0x40ce4d_2;
        } else {
            // 0x40cb46
            v34 = 0;
            v35 = v30;
            v36 = *v15;
            v37 = v31;
            v38 = v32;
            while (true) {
              lab_0x40cb5e:
                // 0x40cb5e
                v39 = v38;
                v40 = v35;
                v41 = v34;
                v42 = v37 + 1;
                v43 = 8 * v42;
                int64_t v44 = *(int64_t *)(v43 + v36); // 0x40cb62
                if (v44 == 0) {
                    // 0x40cec8
                    v45 = v40;
                    if (v39 != 0) {
                        goto lab_0x40cbb2;
                    } else {
                        goto lab_0x40cddc;
                    }
                } else {
                    int64_t v46 = function_408570((int64_t *)&v22, (int128_t *)(v44 + 8)); // 0x40cb98
                    int32_t v47 = v46; // 0x40cb9d
                    result = v47;
                    v27 = v26;
                    if (v47 != 0) {
                        // break -> 0x40cef5
                        break;
                    }
                    // 0x40cba9
                    v45 = v40;
                    if (v39 == 0) {
                        goto lab_0x40cddc;
                    } else {
                        goto lab_0x40cbb2;
                    }
                }
            }
            goto lab_0x40cef5_2;
        }
    } else {
        goto lab_0x40ce4d_2;
    }
}
// Address range: 0x40d160 - 0x40da23
int64_t function_40d160(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40d160
    int128_t v1; // 0x40d160
    int128_t v2 = v1;
    int64_t v3 = 0; // bp-88, 0x40d184
    int64_t v4 = 0; // 0x40d1a6
    if ((char)a5 != 0) {
        int64_t * mem = malloc(96); // 0x40d1b5
        v4 = &v3;
        if (mem == NULL) {
            // 0x40d4c9
            return 12;
        }
    }
    int128_t v5 = __asm_pxor(v2, v2); // 0x40d1d5
    int64_t v6 = 0; // bp-104, 0x40d1d9
    int128_t v7 = __asm_movaps(v5); // bp-120, 0x40d1e1
    uint64_t v8 = 16 * a3; // 0x40d1f3
    int32_t size = v8; // 0x40d1f7
    int64_t result; // 0x40d160
    int64_t v9; // 0x40d160
    char v10; // 0x40d160
    if (v8 < 4031) {
        // 0x40d20a
        v10 = 0;
        int64_t v11; // bp-216, 0x40d160
        v9 = (int64_t)&v11 + -1 - v8 & -16;
    } else {
        int64_t * mem2 = malloc(size); // 0x40d947
        v10 = 1;
        v9 = (int64_t)mem2;
        if (mem2 == NULL) {
            // 0x40d963
            result = 12;
            if (v4 != 0) {
                // 0x40d973
                function_40b790(v4);
                result = 12;
            }
          lab_0x40d4c9:
            // 0x40d4c9
            return result;
        }
    }
    int64_t * v12 = (int64_t *)v9; // 0x40d239
    int64_t * v13 = (int64_t *)a4; // 0x40d239
    memcpy(v12, v13, size);
    int64_t v14 = a4; // bp-128, 0x40d24a
    int64_t * v15 = (int64_t *)(a4 + 8); // 0x40d339
    int64_t v16 = *v15; // 0x40d339
    if (v16 < a4) {
      lab_0x40d4a0_2:
        // 0x40d4a0
        free((int64_t *)v6);
        if (v10 != 0) {
            // 0x40d97d
            free(v12);
            if (v4 == 0) {
                // 0x40d4c9
                return 0;
            }
        } else {
            // 0x40d4b6
            if (v4 == 0) {
                // 0x40d4c9
                return 0;
            }
        }
        // 0x40d4c2
        function_40b790(v4);
        // 0x40d4c9
        return 0;
    }
    int64_t v17 = (int64_t)a2;
    int64_t v18 = v4 + 16;
    int64_t v19 = &v7;
    int64_t * v20 = (int64_t *)(v17 + 184);
    int64_t * v21 = (int64_t *)v4;
    int64_t * v22 = (int64_t *)(v4 + 8);
    int64_t * v23 = (int64_t *)v18;
    int64_t v24 = v16; // 0x40d339
    int64_t v25 = *(int64_t *)(a1 + 144); // 0x40d160
    int64_t v26 = a4; // 0x40d335
    int64_t v27; // 0x40d160
    int64_t v28; // 0x40d160
    int64_t v29; // 0x40d160
    int64_t v30; // 0x40d160
    int64_t v31; // 0x40d160
    int64_t v32; // 0x40d160
    int64_t v33; // 0x40d160
    int64_t v34; // 0x40d160
    int64_t v35; // 0x40d160
    int64_t v36; // 0x40d353
    int64_t v37; // 0x40d4f8
    while (true) {
        // 0x40d346
        int64_t v38; // 0x40d160
        v34 = v38;
        v28 = v24;
        v31 = v26;
        v29 = v25;
        while (true) {
          lab_0x40d346:
            // 0x40d346
            v30 = v29;
            v32 = v31;
            int64_t v39 = v28;
            v35 = v34;
            v36 = 16 * v30;
            int64_t v40 = v36 + a1; // 0x40d35a
            char v41 = *(char *)(v40 + 8); // 0x40d35d
            if (v41 != 8) {
                // 0x40d260
                v27 = v39;
                if (v41 == 9) {
                    int64_t v42 = *(int64_t *)v40 + 1; // 0x40d4e3
                    v27 = v39;
                    if (v42 < a3) {
                        int64_t v43 = 16 * v42; // 0x40d4f4
                        v37 = v43 + a4;
                        if (*(int64_t *)v37 < v32) {
                            // 0x40d870
                            *(int64_t *)(v37 + 8) = v32;
                            memcpy(v12, v13, size);
                            v27 = *v15;
                            goto lab_0x40d269;
                        } else {
                            // 0x40d506
                            if ((*(char *)(v40 + 10) & 8) == 0) {
                                goto lab_0x40d51e;
                            } else {
                                // 0x40d50c
                                if (*(int64_t *)(v43 + v9) != -1) {
                                    // 0x40d8b0
                                    memcpy(v13, v12, size);
                                    int64_t v44 = *v15; // 0x40d8cd
                                    v27 = v44;
                                    goto lab_0x40d269;
                                } else {
                                    goto lab_0x40d51e;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40d269;
                    }
                } else {
                    goto lab_0x40d269;
                }
            } else {
                int64_t v45 = *(int64_t *)v40 + 1; // 0x40d36d
                v27 = v39;
                if (v45 < a3) {
                    int64_t v46 = 16 * v45 + a4; // 0x40d382
                    *(int64_t *)(v46 + 8) = -1;
                    *(int64_t *)v46 = v32;
                    v27 = *v15;
                }
                goto lab_0x40d269;
            }
        }
      lab_0x40d335_2:
        // 0x40d335
        v26 = v14;
        v24 = *v15;
        v38 = v33;
        if (v24 < v26) {
            goto lab_0x40d4a0_2;
        }
    }
  lab_0x40d830_3:
    // 0x40d830
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40d9a0
        free(v12);
        goto lab_0x40d846;
    } else {
        goto lab_0x40d846;
    }
  lab_0x40d73a_3:
    // 0x40d73a
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40da12
        free(v12);
        // 0x40d750
        function_40b790(v4);
        result = 0;
        return result;
    } else {
        // 0x40d750
        function_40b790(v4);
        result = 0;
        return result;
    }
  lab_0x40d269:;
    int64_t v47 = v30; // 0x40d26c
    int64_t v48 = v36; // 0x40d26c
    if (v32 == v27) {
        // 0x40d26e
        v47 = v30;
        v48 = v36;
        if (*(int64_t *)(v17 + 176) == v30) {
            if (v4 == 0) {
                // 0x40d9e9
                free((int64_t *)v6);
                result = 0;
                if (v10 == 0) {
                    return result;
                } else {
                    // 0x40d9ff
                    free(v12);
                    result = (int32_t)&g81 ^ (int32_t)&g81;
                    return result;
                }
            }
            int64_t v49 = a4; // 0x40d710
            int64_t v50 = 0; // 0x40d710
            if (a3 == 0) {
                goto lab_0x40d73a_3;
            }
            int64_t v51; // 0x40d160
            while (true) {
                // 0x40d720
                v51 = v50;
                int64_t v52 = v49;
                if (*(int64_t *)v52 >= 0) {
                    // 0x40d726
                    if (*(int64_t *)(v52 + 8) == -1) {
                        // break -> 0x40d768
                        break;
                    }
                }
                // 0x40d72d
                v50 = v51 + 1;
                v49 = v52 + 16;
                if (v50 == a3) {
                    goto lab_0x40d73a_3;
                }
            }
            if (v51 == a3) {
                goto lab_0x40d73a_3;
            }
            int64_t v53 = function_40b7e0(v4, v18, &v14, a3, a4, &v7); // 0x40d78e
            v47 = v53;
            v48 = 16 * v53;
        }
    }
    int64_t v54 = v48;
    int64_t v55 = v47;
    int64_t v56 = *(int64_t *)(v17 + 152); // 0x40d27c
    int64_t * v57 = (int64_t *)v56; // 0x40d284
    int64_t v58 = *v57; // 0x40d284
    int64_t v59 = v58 + v54; // 0x40d287
    char v60 = *(char *)(v59 + 8); // 0x40d28b
    int64_t v61; // 0x40d160
    int64_t v62; // 0x40d160
    int64_t v63; // 0x40d160
    int64_t v64; // 0x40d160
    int64_t v65; // 0x40d160
    int64_t v66; // 0x40d160
    int64_t v67; // 0x40d160
    int64_t v68; // 0x40d160
    int64_t v69; // 0x40d160
    int64_t v70; // 0x40d160
    int64_t v71; // 0x40d160
    int64_t v72; // 0x40d160
    int64_t v73; // 0x40d62e
    int64_t v74; // 0x40d410
    if ((v60 & 8) != 0) {
        int64_t v75 = *(int64_t *)(8 * v14 + *v20); // 0x40d3b3
        if ((char)function_406a20(v19, v55) == 0) {
            // break (via goto) -> 0x40d830
            goto lab_0x40d830_3;
        }
        int64_t v76 = *(int64_t *)(v56 + 40) + 24 * v55; // 0x40d3c6
        int64_t v77 = *(int64_t *)(v76 + 8); // 0x40d3de
        v71 = v35;
        if (v77 < 1) {
            goto lab_0x40d45a;
        } else {
            // 0x40d3e7
            v61 = -1;
            int64_t v78 = 0;
            v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
            int64_t v79 = v61; // 0x40d425
            int64_t v80; // 0x40d635
            int64_t v81; // 0x40d160
            int64_t * mem3; // 0x40d902
            int64_t v82; // 0x40d902
            int64_t v83; // 0x40d610
            if (function_408030(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                // 0x40d427
                v79 = v74;
                if (v61 != -1) {
                    // 0x40d5f8
                    v83 = function_408030(v35, (int64_t)&v6, v61);
                    v69 = v35;
                    v63 = v83 != 0 ? v74 : v61;
                    if (v4 == 0 || v83 != 0) {
                        goto lab_0x40d32c;
                    } else {
                        // 0x40d62e
                        v73 = *v21;
                        v80 = v73 + 1;
                        *v21 = v80;
                        v81 = *v23;
                        v62 = v81;
                        if (v80 == *v22) {
                            // 0x40d8e8
                            mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                            if (mem3 == NULL) {
                                goto lab_0x40d6a0;
                            } else {
                                // 0x40d910
                                v82 = (int64_t)mem3;
                                *v22 = 2 * *v22;
                                *v23 = v82;
                                v62 = v82;
                                goto lab_0x40d64a;
                            }
                        } else {
                            goto lab_0x40d64a;
                        }
                    }
                }
            }
            int64_t v84 = v79;
            int64_t v85 = v78 + 1; // 0x40d434
            while (v77 != v85) {
                // 0x40d410
                v61 = v84;
                v78 = v85;
                v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
                v79 = v61;
                if (function_408030(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                    // 0x40d427
                    v79 = v74;
                    if (v61 != -1) {
                        // 0x40d5f8
                        v83 = function_408030(v35, (int64_t)&v6, v61);
                        v69 = v35;
                        v63 = v83 != 0 ? v74 : v61;
                        if (v4 == 0 || v83 != 0) {
                            goto lab_0x40d32c;
                        } else {
                            // 0x40d62e
                            v73 = *v21;
                            v80 = v73 + 1;
                            *v21 = v80;
                            v81 = *v23;
                            v62 = v81;
                            if (v80 == *v22) {
                                // 0x40d8e8
                                mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                                if (mem3 == NULL) {
                                    goto lab_0x40d6a0;
                                } else {
                                    // 0x40d910
                                    v82 = (int64_t)mem3;
                                    *v22 = 2 * *v22;
                                    *v23 = v82;
                                    v62 = v82;
                                    goto lab_0x40d64a;
                                }
                            } else {
                                goto lab_0x40d64a;
                            }
                        }
                    }
                }
                // 0x40d434
                v84 = v79;
                v85 = v78 + 1;
            }
            // 0x40d43d
            v33 = v35;
            v25 = v84;
            v70 = v35;
            v64 = v84;
            if (v84 >= 0) {
                // break -> 0x40d335
                goto lab_0x40d335_2;
            }
            goto lab_0x40d450;
        }
    } else {
        // 0x40d297
        if ((*(char *)(v59 + 10) & 16) != 0) {
            int64_t v86 = 0x100000000 * function_40c7b0(v58, v56 + 216, v55, v17, v14);
            v67 = v86 >> 32;
            if (v86 != 0) {
                goto lab_0x40d6e9;
            } else {
                // 0x40d559
                v65 = v14;
                v68 = *v57 + v54;
                goto lab_0x40d2ad;
            }
        } else {
            if (v60 == 4) {
                int64_t v87 = a4 + 16 + 16 * *(int64_t *)v59; // 0x40d57b
                int64_t v88 = *(int64_t *)(v87 + 8); // 0x40d57e
                int64_t v89 = *(int64_t *)v87; // 0x40d582
                int64_t n = v88 - v89; // 0x40d588
                if (v4 == 0) {
                    // 0x40d6e0
                    v67 = n;
                    if (n == 0) {
                        goto lab_0x40d7a8;
                    } else {
                        goto lab_0x40d6e9;
                    }
                } else {
                    // 0x40d599
                    v72 = v35;
                    if (v88 == -1 || v89 == -1) {
                        goto lab_0x40d468;
                    } else {
                        if (n == 0) {
                            goto lab_0x40d7a8;
                        } else {
                            int64_t v90 = *(int64_t *)(v17 + 8); // 0x40d5b6
                            int32_t memcmp_rc = memcmp((int64_t *)(v90 + v89), (int64_t *)(v14 + v90), (int32_t)n); // 0x40d5d0
                            v72 = v35;
                            v66 = n;
                            if (memcmp_rc != 0) {
                                goto lab_0x40d468;
                            } else {
                                goto lab_0x40d5e4;
                            }
                        }
                    }
                }
            } else {
                // 0x40d2a9
                v65 = v14;
                v68 = v59;
                goto lab_0x40d2ad;
            }
        }
    }
  lab_0x40d45a:
    // 0x40d45a
    v72 = v71;
    if (v4 == 0) {
        // 0x40d9b1
        free((int64_t *)v6);
        result = 1;
        if (v10 == 0) {
            return result;
        } else {
            // 0x40d9cc
            free(v12);
            result = 1;
            return result;
        }
    }
    goto lab_0x40d468;
  lab_0x40d51e:
    // 0x40d51e
    *(int64_t *)(v37 + 8) = v32;
    v27 = *v15;
    goto lab_0x40d269;
  lab_0x40d468:;
    int64_t v91 = function_40b7e0(v4, v18, &v14, a3, a4, &v7); // 0x40d485
    int64_t v92 = *v15; // 0x40d491
    v34 = v72;
    v28 = v92;
    v31 = v14;
    v29 = v91;
    if (v92 < v14) {
        goto lab_0x40d4a0_2;
    }
    goto lab_0x40d346;
  lab_0x40d450:
    // 0x40d450
    v71 = v70;
    if (v64 == -2) {
        // break (via goto) -> 0x40d830
        goto lab_0x40d830_3;
    }
    goto lab_0x40d45a;
  lab_0x40d6e9:
    // 0x40d6e9
    v66 = v67;
    goto lab_0x40d5e4;
  lab_0x40d5e4:;
    int64_t v93 = v14 + v66; // 0x40d5f0
    goto lab_0x40d2da;
  lab_0x40d2ad:
    // 0x40d2ad
    if ((char)function_409e50(v17, v68, v65) == 0) {
        goto lab_0x40d45a;
    } else {
        // 0x40d2ce
        v93 = v65 + 1;
        goto lab_0x40d2da;
    }
  lab_0x40d2da:;
    int64_t v94 = v93;
    int64_t v95 = *(int64_t *)(*(int64_t *)(v56 + 24) + 8 * v55);
    v14 = v94;
    v69 = 0;
    v63 = v95;
    if (v4 == 0) {
        goto lab_0x40d32c;
    } else {
        // 0x40d2e8
        v72 = v35;
        if (v94 > *(int64_t *)(v17 + 168)) {
            goto lab_0x40d468;
        } else {
            int64_t v96 = *(int64_t *)(*v20 + 8 * v94); // 0x40d2fe
            v72 = v35;
            if (v96 == 0) {
                goto lab_0x40d468;
            } else {
                int64_t v97 = function_408030(*(int64_t *)(v96 + 16), v96 + 24, v95); // 0x40d316
                v69 = 0;
                v63 = v95;
                v72 = v35;
                if (v97 == 0) {
                    goto lab_0x40d468;
                } else {
                    goto lab_0x40d32c;
                }
            }
        }
    }
  lab_0x40d7a8:
    // 0x40d7a8
    if ((char)function_406a20(v19, v55) == 0) {
        // break (via goto) -> 0x40d830
        goto lab_0x40d830_3;
    }
    int64_t v98 = v14; // 0x40d7c7
    int64_t v99 = *(int64_t *)(24 * v55 + 16 + *(int64_t *)(v56 + 40)); // 0x40d7d6
    int64_t v100 = *(int64_t *)v99; // 0x40d7da
    int64_t v101 = *(int64_t *)(*v20 + 8 * v98); // 0x40d7e5
    int64_t v102 = function_408030(*(int64_t *)(v101 + 16), v101 + 24, v100); // 0x40d7f4
    v69 = v35;
    v63 = v100;
    if (v102 != 0) {
        goto lab_0x40d32c;
    } else {
        // 0x40d802
        v65 = v98;
        v68 = *v57 + v54;
        goto lab_0x40d2ad;
    }
  lab_0x40d32c:
    // 0x40d32c
    v33 = v69;
    v25 = v63;
    v70 = v69;
    v64 = v63;
    if (v63 >= 0) {
        // break -> 0x40d335
        goto lab_0x40d335_2;
    }
    goto lab_0x40d450;
  lab_0x40d846:
    // 0x40d846
    if (v4 != 0) {
      lab_0x40d6b6:
        // 0x40d6b6
        function_40b790(v4);
        return 12;
    }
    // 0x40d4c9
    return 12;
  lab_0x40d64a:;
    int64_t v103 = v62 + 48 * v73; // 0x40d652
    *(int64_t *)(v103 + 8) = v74;
    *(int64_t *)v103 = v14;
    int64_t * mem4 = malloc(size); // 0x40d666
    *(int64_t *)(v103 + 16) = (int64_t)mem4;
    if (mem4 == NULL) {
        goto lab_0x40d6a0;
    } else {
        // 0x40d674
        memcpy(mem4, v13, size);
        v69 = v35;
        v63 = v61;
        if ((int32_t)function_4090d0(v103 + 24, v19) == 0) {
            goto lab_0x40d32c;
        } else {
            goto lab_0x40d6a0;
        }
    }
  lab_0x40d6a0:
    // 0x40d6a0
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40d9a0
        free(v12);
        goto lab_0x40d846;
    } else {
        goto lab_0x40d6b6;
    }
}
// Address range: 0x40da30 - 0x40dbc6
int64_t function_40da30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + 16; // 0x40da44
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x40da57
    int64_t result = function_40ca40(a1, v1, a3, *v2, a4, a5, 8); // 0x40da60
    if ((int32_t)result != 0) {
        // 0x40da6b
        return result;
    }
    int64_t v3 = *v2; // 0x40da80
    int64_t * v4 = (int64_t *)(a1 + 200); // 0x40da84
    uint64_t v5 = *v4; // 0x40da84
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x40da8b
    uint64_t v7 = *v6; // 0x40da8b
    int64_t * v8 = (int64_t *)(a1 + 216); // 0x40da96
    int64_t v9 = *v8; // 0x40da96
    int64_t v10 = v5; // 0x40daa3
    int64_t v11 = v9; // 0x40daa3
    if (v5 >= v7) {
        int64_t * mem = realloc((int64_t *)v9, 80 * (int32_t)v7); // 0x40db4d
        if (mem == NULL) {
            // 0x40dbb0
            free((int64_t *)*v8);
            // 0x40da6b
            return 12;
        }
        int64_t v12 = (int64_t)mem; // 0x40db4d
        *v8 = v12;
        memset((int64_t *)(40 * *v4 + v12), 0, 40 * (int32_t)*v6);
        *v6 = 2 * *v6;
        v10 = *v4;
        v11 = *v8;
    }
    int64_t v13 = 40 * v10; // 0x40daad
    int64_t v14; // 0x40da30
    if (v10 < 1) {
        // 0x40daa9
        v14 = v11 + v13;
    } else {
        int64_t v15 = v13 + v11;
        v14 = v15;
        if (*(int64_t *)(v15 - 32) == a5) {
            // 0x40db30
            *(char *)(v15 - 8) = 1;
            v14 = v15;
        }
    }
    // 0x40dac1
    *(int64_t *)v14 = a4;
    *(int64_t *)(v14 + 8) = a5;
    *(int16_t *)(v14 + 34) = (int16_t)(v3 == v1);
    *(int64_t *)(v14 + 16) = v1;
    *(int64_t *)(v14 + 24) = v3;
    *v4 = v10 + 1;
    *(char *)(v14 + 32) = 0;
    int32_t * v16 = (int32_t *)(a1 + 224); // 0x40daf3
    if (v3 - v1 > (int64_t)*v16) {
        // 0x40db02
        *v16 = (int32_t)v3 - (int32_t)v1;
    }
    // 0x40db0c
    return function_407600(a1, 0);
}
// Address range: 0x40dbd0 - 0x40e442
int64_t function_40dbd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40dbd0
    if (a2 >= 0 != a2 != 0) {
        // 0x40e05b
        return 0;
    }
    // 0x40dc69
    int64_t v1; // bp-232, 0x40dbd0
    int64_t v2 = &v1; // 0x40dbdd
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x40dc6e
    int64_t * v4 = (int64_t *)(v2 + 56); // 0x40dc7a
    int32_t * v5 = (int32_t *)(a1 + 160);
    int64_t * v6 = (int64_t *)(a1 + 200);
    int64_t * v7 = (int64_t *)(a1 + 216);
    int64_t * v8 = (int64_t *)(a1 + 232);
    int64_t * v9 = (int64_t *)(v2 + 104);
    int64_t * v10 = (int64_t *)(v2 + 96);
    int64_t * v11 = (int64_t *)(a1 + 8);
    int64_t * v12 = (int64_t *)(v2 + 24);
    int64_t * v13 = (int64_t *)(v2 + 16);
    int64_t * v14 = (int64_t *)(v2 + 32);
    int64_t * v15 = (int64_t *)(v2 + 64);
    int64_t * v16 = (int64_t *)(v2 + 112);
    int64_t v17 = v2 + 40;
    int64_t * v18 = (int64_t *)v17;
    int64_t * v19 = (int64_t *)(v2 + 120);
    int64_t * v20 = (int64_t *)(v2 + 48);
    int64_t * v21 = (int64_t *)(a1 + 184);
    int64_t v22 = v2 + 140;
    int32_t * v23 = (int32_t *)v22;
    int64_t * v24 = (int64_t *)(v2 + 88);
    int32_t * v25 = (int32_t *)v17;
    int64_t * v26 = (int64_t *)(v2 + 144);
    int128_t * v27 = (int128_t *)v22;
    int64_t * v28 = (int64_t *)(v2 + 160);
    int64_t v29 = *v3; // 0x40dc55
    int64_t v30 = *(int64_t *)(a1 + 72); // 0x40dbd0
    int64_t v31; // 0x40dbd0
    int64_t v32; // 0x40dc76
    int64_t v33; // 0x40dc85
    uint32_t v34; // 0x40dc92
    int64_t v35; // 0x40dc92
    uint64_t v36; // 0x40dcad
    while (true) {
      lab_0x40dc69:
        // 0x40dc69
        v31 = v30;
        v32 = *(int64_t *)(*(int64_t *)*(int64_t *)(v2 + 72) + 8 * v29);
        v33 = 16 * v32;
        int64_t v37 = (v33 | 8) + *(int64_t *)*v4; // 0x40dc8c
        v30 = v31;
        if (*(char *)v37 != 4) {
            goto lab_0x40dc50_3;
        } else {
            // 0x40dc92
            v34 = *(int32_t *)v37;
            if ((v34 & 0x3ff00) == 0) {
                goto lab_0x40dce0;
            } else {
                // 0x40dc9d
                v35 = v34;
                v36 = function_409d60(a1, v31, *v5);
                if ((v35 & 1024) != 0) {
                    // 0x40dc20
                    v30 = v31;
                    if (v36 % 2 == 0) {
                        goto lab_0x40dc50_3;
                    } else {
                        // 0x40dc24
                        v30 = v31;
                        if ((v35 & 2048) != 0) {
                            goto lab_0x40dc50_3;
                        } else {
                            goto lab_0x40dc29;
                        }
                    }
                } else {
                    // 0x40dcc4
                    v30 = v31;
                    if ((v35 & 2048) == 0 || v36 % 2 == 0) {
                        goto lab_0x40dc29;
                    } else {
                        goto lab_0x40dc50_3;
                    }
                }
            }
        }
    }
  lab_0x40e05b_7:;
    // 0x40e05b
    int64_t result; // 0x40dbd0
    return result;
  lab_0x40dda8:;
    int64_t v38 = *(int64_t *)(a1 + 152); // 0x40dda8
    int64_t v39 = *(int64_t *)v38; // 0x40ddb7
    *v9 = v38;
    *v10 = *(int64_t *)(v39 + v33);
    int64_t v40; // 0x40dbd0
    int64_t v41; // 0x40dbd0
    int64_t v42; // 0x40dbd0
    int64_t v43; // 0x40dbd0
    int64_t v44; // 0x40dbd0
    int64_t v45; // 0x40dbd0
    int64_t v46; // 0x40dbd0
    int64_t v47; // 0x40dbd0
    int64_t v48; // 0x40dbd0
    int64_t v49; // 0x40dbd0
    int64_t v50; // 0x40dbd0
    int64_t v51; // 0x40dbd0
    int64_t v52; // 0x40dbd0
    int64_t v53; // 0x40dbd0
    int64_t v54; // 0x40dce0
    int64_t v55; // 0x40ddfc
    int64_t * v56; // 0x40de00
    int64_t * v57; // 0x40e070
    int64_t * v58; // 0x40e075
    int64_t v59; // 0x40de30
    if (*v8 < 1) {
        // 0x40dd7f
        *v23 = 0;
        v30 = v31;
        goto lab_0x40dc50_3;
    } else {
        // 0x40ddca
        *v12 = v31;
        *v13 = 0;
        *v14 = *v11;
        *v15 = v32;
        *v16 = v54;
        v40 = *v13;
        v51 = v39;
        while (true) {
          lab_0x40ddeb:
            // 0x40ddeb
            v55 = *(int64_t *)(*(int64_t *)(a1 + 248) + 8 * v40);
            v56 = (int64_t *)(v55 + 8);
            if (*v10 == *(int64_t *)(16 * *v56 + v51)) {
                // 0x40e070
                v57 = (int64_t *)(v55 + 32);
                v58 = (int64_t *)v55;
                int64_t v60 = *v58; // 0x40e075
                int64_t v61 = *v12; // 0x40e078
                v41 = v61;
                v42 = v60;
                if (*v57 < 1) {
                    goto lab_0x40e223;
                } else {
                    int64_t v62 = v61;
                    v49 = 0;
                    int64_t v63 = v60;
                    int64_t v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49); // 0x40e0b0
                    int64_t v65 = *(int64_t *)(v64 + 8); // 0x40e0b4
                    int64_t v66 = v65 - v63; // 0x40e0bb
                    int64_t v67 = v66 + v62; // 0x40e0be
                    int64_t v68 = v64; // 0x40e0c5
                    int64_t v69; // 0x40dbd0
                    int64_t v70; // 0x40dbd0
                    int32_t memcmp_rc; // 0x40e0e8
                    int64_t v71; // 0x40e1c4
                    int64_t v72; // 0x40e1d1
                    int64_t n; // 0x40e1d5
                    int64_t v73; // 0x40e1da
                    int64_t v74; // 0x40e1df
                    int64_t v75; // 0x40e1e4
                    if (v66 >= 1) {
                        // 0x40e0c7
                        v69 = *v14;
                        v75 = v63;
                        n = v66;
                        v74 = v62;
                        v73 = v64;
                        v72 = v69;
                        if (*(int64_t *)(a1 + 48) < v67) {
                            // 0x40e1a0
                            *v18 = v66;
                            *v14 = v64;
                            v50 = v63;
                            v48 = v62;
                            v43 = v69;
                            if (*(int64_t *)(a1 + 88) < v67) {
                                goto lab_0x40e3b0_2;
                            }
                            // 0x40e1b4
                            *v19 = v62;
                            *v20 = v63;
                            v71 = function_407600(a1, v67);
                            result = v71;
                            if ((int32_t)v71 != 0) {
                                // break (via goto) -> 0x40e05b
                                goto lab_0x40e05b_7;
                            }
                            // 0x40e1d1
                            v72 = *v11;
                            n = *v18;
                            v73 = *v14;
                            v74 = *v19;
                            v75 = *v20;
                        }
                        // 0x40e0d1
                        v70 = v72;
                        *v20 = v73;
                        *v18 = v75;
                        *v14 = v74;
                        memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                        v68 = *v20;
                        v50 = *v18;
                        v48 = *v14;
                        v43 = v70;
                        if (memcmp_rc != 0) {
                            goto lab_0x40e3b0_2;
                        }
                    }
                    int64_t v76 = function_40da30(a1, v55, v68, *v15, *v12); // 0x40e117
                    int64_t v77 = *v11; // 0x40e11c
                    result = v76;
                    if ((int32_t)v76 >= 2) {
                        // break (via goto) -> 0x40e05b
                        goto lab_0x40e05b_7;
                    }
                    int64_t v78 = v49 + 1; // 0x40e098
                    while (v78 < *v57) {
                        // 0x40e0ac
                        v62 = v67;
                        v49 = v78;
                        v63 = v65;
                        v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49);
                        v65 = *(int64_t *)(v64 + 8);
                        v66 = v65 - v63;
                        v67 = v66 + v62;
                        v68 = v64;
                        if (v66 >= 1) {
                            // 0x40e0c7
                            v69 = v77;
                            v75 = v63;
                            n = v66;
                            v74 = v62;
                            v73 = v64;
                            v72 = v69;
                            if (*(int64_t *)(a1 + 48) < v67) {
                                // 0x40e1a0
                                *v18 = v66;
                                *v14 = v64;
                                v50 = v63;
                                v48 = v62;
                                v43 = v69;
                                if (*(int64_t *)(a1 + 88) < v67) {
                                    goto lab_0x40e3b0_2;
                                }
                                // 0x40e1b4
                                *v19 = v62;
                                *v20 = v63;
                                v71 = function_407600(a1, v67);
                                result = v71;
                                if ((int32_t)v71 != 0) {
                                    // break (via goto) -> 0x40e05b
                                    goto lab_0x40e05b_7;
                                }
                                // 0x40e1d1
                                v72 = *v11;
                                n = *v18;
                                v73 = *v14;
                                v74 = *v19;
                                v75 = *v20;
                            }
                            // 0x40e0d1
                            v70 = v72;
                            *v20 = v73;
                            *v18 = v75;
                            *v14 = v74;
                            memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                            v68 = *v20;
                            v50 = *v18;
                            v48 = *v14;
                            v43 = v70;
                            if (memcmp_rc != 0) {
                                goto lab_0x40e3b0_2;
                            }
                        }
                        // 0x40e104
                        v76 = function_40da30(a1, v55, v68, *v15, *v12);
                        v77 = *v11;
                        result = v76;
                        if ((int32_t)v76 >= 2) {
                            // break (via goto) -> 0x40e05b
                            goto lab_0x40e05b_7;
                        }
                        // 0x40e098
                        v78 = v49 + 1;
                    }
                    // 0x40e217
                    *v14 = v77;
                    v44 = v65;
                    v47 = v67;
                    goto lab_0x40e21c;
                }
            } else {
                goto lab_0x40de12_2;
            }
        }
      lab_0x40de30:
        // 0x40de30
        v59 = *v12;
        int64_t v79 = *v15; // 0x40de35
        *v23 = 0;
        int64_t v80 = *v16; // 0x40de45
        v30 = v59;
        if (v80 < *v6) {
            int64_t v81 = *v4; // 0x40de5f
            *v15 = 8 * v79;
            *v10 = 24 * v79;
            int64_t * v82 = (int64_t *)(v81 + 48);
            int64_t * v83 = (int64_t *)(v81 + 24);
            int64_t * v84 = (int64_t *)(v81 + 40);
            v45 = v80;
            while (true) {
              lab_0x40dfb9_2:
                // 0x40dfb9
                v46 = v45;
                int64_t v85 = *v7 + 40 * v46; // 0x40dfc4
                if (v79 != *(int64_t *)v85) {
                    goto lab_0x40dfa8;
                } else {
                    // 0x40dfcd
                    if (v59 != *(int64_t *)(v85 + 8)) {
                        goto lab_0x40dfa8;
                    } else {
                        int64_t v86 = *(int64_t *)(v85 + 24); // 0x40dfd3
                        int64_t v87 = *(int64_t *)(v85 + 16); // 0x40dfd7
                        int64_t v88 = v86 - v87; // 0x40dfe3
                        *v14 = v88;
                        int64_t v89; // 0x40dbd0
                        if (v88 == 0) {
                            // 0x40de88
                            v89 = *(int64_t *)(*v84 + 16 + *v10);
                        } else {
                            // 0x40dff1
                            v89 = *v15 + *v83;
                        }
                        // 0x40dea7
                        *v12 = 24 * *(int64_t *)v89 + *v82;
                        int64_t v90 = v86 + v59 - v87; // 0x40deb3
                        int64_t v91 = function_409d60(a1, v90 - 1, *v5); // 0x40deba
                        int64_t v92 = 8 * v90; // 0x40dec4
                        *v13 = 0;
                        int64_t v93 = *v21; // 0x40ded7
                        int64_t v94 = v93 + v92; // 0x40dede
                        int64_t v95 = *(int64_t *)(v93 + *v24); // 0x40dee2
                        int64_t v96 = *(int64_t *)v94; // 0x40dee6
                        if (v95 != 0) {
                            // 0x40deee
                            *v13 = *(int64_t *)(v95 + 16);
                        }
                        if (v96 == 0) {
                            // 0x40e018
                            *v18 = v94;
                            int64_t v97 = function_4092e0(v27, v81, (int64_t *)*v12, (int32_t)v91); // 0x40e02d
                            int64_t v98 = *v21; // 0x40e037
                            *(int64_t *)*v18 = v97;
                            v52 = v98;
                            v53 = v98;
                            if (*(int64_t *)(v98 + v92) != 0) {
                                goto lab_0x40df82;
                            } else {
                                goto lab_0x40e04c;
                            }
                        } else {
                            // 0x40df00
                            *v25 = (int32_t)v91;
                            *v20 = v92;
                            int64_t v99 = function_409150(v26, *(int64_t *)(v96 + 80), *v12, v91 & 0xffffffff); // 0x40df1a
                            int32_t v100 = v99; // 0x40df28
                            *v23 = v100;
                            if (v100 != 0) {
                                // 0x40e1f0
                                free((int64_t *)*v28);
                                result = (int64_t)*v23;
                                goto lab_0x40e05b_7;
                            }
                            // 0x40df37
                            *v18 = *v21 + *v20;
                            *(int64_t *)*v18 = function_4092e0(v27, v81, v26, *v25);
                            free((int64_t *)*v28);
                            int64_t v101 = *v21; // 0x40df70
                            v52 = v101;
                            v53 = v101;
                            if (*(int64_t *)(v101 + v92) == 0) {
                                goto lab_0x40e04c;
                            } else {
                                goto lab_0x40df82;
                            }
                        }
                    }
                }
            }
        }
        goto lab_0x40dc50_3;
    }
  lab_0x40e3b0_2:;
    int64_t v102 = v48;
    int64_t v103 = v50;
    *v14 = v43;
    if (*v57 > v49) {
        goto lab_0x40de12_2;
    } else {
        // 0x40e3c5
        v44 = v103;
        v47 = v102;
        v41 = v102;
        v42 = v103;
        if (v49 == 0) {
            goto lab_0x40e223;
        } else {
            goto lab_0x40e21c;
        }
    }
  lab_0x40e364:;
    // 0x40e364
    int64_t v104; // 0x40dbd0
    int64_t v105 = v104 + 1; // 0x40e364
    int64_t v106 = v105; // 0x40e36d
    if (*v12 < v105) {
        // break -> 0x40de12
        goto lab_0x40de12_2;
    }
    goto lab_0x40e240;
  lab_0x40dfa8:;
    int64_t v130 = v46 + 1; // 0x40dfa8
    v30 = v59;
    int64_t v131 = v130; // 0x40dfb3
    if (v130 >= *v6) {
        // break -> 0x40dc50
        goto lab_0x40dc50_3;
    }
    // 0x40dfb9
    v45 = v131;
    goto lab_0x40dfb9_2;
  lab_0x40df82:
    // 0x40df82
    if (*v14 != 0) {
        goto lab_0x40dfa8;
    } else {
        // 0x40df8a
        if (*(int64_t *)(*(int64_t *)(*v24 + v52) + 16) > *v13) {
            int64_t v132 = *v12; // 0x40e130
            int64_t v133 = v132 + 16; // 0x40e13b
            int64_t v134 = v132 + 8; // 0x40e13f
            *v13 = v133;
            int64_t v135 = function_409c10(a1, v134, v133, v59); // 0x40e14e
            int32_t v136 = v135; // 0x40e153
            *v23 = v136;
            result = v135;
            if (v136 != 0) {
                // break (via goto) -> 0x40e05b
                goto lab_0x40e05b_7;
            }
            int64_t v137 = function_40dbd0(a1, v134, *v13); // 0x40e170
            int32_t v138 = v137; // 0x40e175
            *v23 = v138;
            result = v137;
            if (v138 != 0) {
                // break (via goto) -> 0x40e05b
                goto lab_0x40e05b_7;
            }
            int64_t v139 = v46 + 1; // 0x40e184
            v30 = v59;
            v131 = v139;
            if (v139 >= *v6) {
                // break -> 0x40dc50
                goto lab_0x40dc50_3;
            }
            // 0x40dfb9
            v45 = v131;
            goto lab_0x40dfb9_2;
        } else {
            goto lab_0x40dfa8;
        }
    }
  lab_0x40e04c:;
    uint32_t v140 = *v23; // 0x40e04c
    v52 = v53;
    if (v140 != 0) {
        // 0x40e05b
        result = v140;
        goto lab_0x40e05b_7;
    }
    goto lab_0x40df82;
  lab_0x40de12_2:;
    int64_t v141 = *v13 + 1; // 0x40de12
    *v13 = v141;
    if (v141 >= *v8) {
        // break -> 0x40de30
        goto lab_0x40de30;
    }
    // 0x40de26
    v40 = v141;
    v51 = *(int64_t *)*v9;
    goto lab_0x40ddeb;
  lab_0x40e223:;
    int64_t v142 = v42;
    int64_t v122; // 0x40e2b5
    int64_t v128; // 0x40e38c
    int64_t v127; // 0x40e391
    int64_t * v143; // 0x40dbd0
    int64_t * v144; // 0x40dbd0
    if (*v12 >= v142) {
        int64_t * v126 = (int64_t *)(v55 + 16);
        v143 = (int64_t *)(v55 + 24);
        v144 = (int64_t *)(v55 + 40);
        v106 = v142;
        int64_t v145 = v41; // 0x40e236
        while (true) {
          lab_0x40e240:
            // 0x40e240
            v104 = v106;
            if (v104 - *v58 >= 1) {
                // 0x40e24b
                int64_t * v107; // 0x40dbd0
                int64_t v108 = *v107; // 0x40e24b
                int64_t v109; // 0x40dbd0
                int64_t v110; // 0x40dbd0
                if (v108 > v110) {
                    int64_t v111 = *v14;
                    v109 = v111;
                } else {
                    // 0x40e3e0
                    int64_t * v112; // 0x40dbd0
                    uint64_t v113 = *v112; // 0x40e3e0
                    if (v113 <= v110) {
                        // break -> 0x40de12
                        break;
                    }
                    int64_t v114 = function_4074b0(a1, v110 + 1 & 0xffffffff); // 0x40e3f1
                    result = v114;
                    if ((int32_t)v114 != 0) {
                        // break (via goto) -> 0x40e05b
                        goto lab_0x40e05b_7;
                    }
                    int64_t v115 = *v11; // 0x40e3fe
                    *v14 = v115;
                    v109 = v115;
                }
                int64_t v116 = v109; // 0x40e255
                char v117 = *(char *)(v104 - 1 + v116); // 0x40e25e
                char v118 = *(char *)(v116 + v110); // 0x40e264
                if (v118 != v117) {
                    // break -> 0x40de12
                    break;
                }
            }
            int64_t v119 = *(int64_t *)(*v21 + 8 * v104); // 0x40e278
            if (v119 != 0) {
                uint64_t v120 = *(int64_t *)(v119 + 16); // 0x40e285
                if (v120 >= 1) {
                    int64_t v121 = 0;
                    v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                    int64_t v123 = 16 * v122 + *(int64_t *)*v9; // 0x40e2c0
                    int64_t v124; // 0x40e2d8
                    int64_t v125; // 0x40e2dc
                    int64_t * mem; // 0x40e38c
                    if (*(char *)(v123 + 8) == 9) {
                        // 0x40e2c9
                        if (*v10 == *(int64_t *)v123) {
                            if (v122 == -1) {
                                goto lab_0x40e364;
                            } else {
                                // 0x40e2d8
                                v124 = *v126;
                                v127 = *v58;
                                v128 = v124;
                                if (v124 == 0) {
                                    // 0x40e378
                                    *v18 = v125;
                                    mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                    v128 = (int64_t)mem;
                                    v127 = *v18;
                                    *v126 = v128;
                                    result = 12;
                                    if (mem != NULL) {
                                        goto lab_0x40e2e8;
                                    } else {
                                        goto lab_0x40e05b_7;
                                    }
                                } else {
                                    goto lab_0x40e2e8;
                                }
                            }
                        }
                    }
                    int64_t v129 = v121 + 1; // 0x40e2a8
                    while (v120 != v129) {
                        // 0x40e2b5
                        v121 = v129;
                        v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                        v123 = 16 * v122 + *(int64_t *)*v9;
                        if (*(char *)(v123 + 8) == 9) {
                            // 0x40e2c9
                            if (*v10 == *(int64_t *)v123) {
                                if (v122 == -1) {
                                    goto lab_0x40e364;
                                } else {
                                    // 0x40e2d8
                                    v124 = *v126;
                                    v125 = *v58;
                                    v127 = v125;
                                    v128 = v124;
                                    if (v124 == 0) {
                                        // 0x40e378
                                        *v18 = v125;
                                        mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                        v128 = (int64_t)mem;
                                        v127 = *v18;
                                        *v126 = v128;
                                        result = 12;
                                        if (mem != NULL) {
                                            goto lab_0x40e2e8;
                                        } else {
                                            goto lab_0x40e05b_7;
                                        }
                                    } else {
                                        goto lab_0x40e2e8;
                                    }
                                }
                            }
                        }
                        // 0x40e2a8
                        v129 = v121 + 1;
                    }
                }
            }
            goto lab_0x40e364;
        }
    }
    goto lab_0x40de12_2;
  lab_0x40e21c:
    // 0x40e21c
    v41 = v47;
    v42 = v44 + 1;
    goto lab_0x40e223;
  lab_0x40dc50_3:
    // 0x40dc50
    v29 = *v3 + 1;
    *v3 = v29;
    if (v29 >= *(int64_t *)*(int64_t *)(v2 + 80)) {
        // break -> 0x40e05b
        goto lab_0x40e05b_7;
    }
    goto lab_0x40dc69;
  lab_0x40dce0:
    // 0x40dce0
    v54 = *v6;
    if (v54 > 0) {
        int64_t v146 = *v7; // 0x40dcf5
        int64_t v147 = v146 + 8; // 0x40dd0d
        int64_t v148 = 0;
        uint64_t v149 = v148 + v54; // 0x40dcf1
        int64_t v150 = (v149 / 0x8000000000000000 + v149) / 2; // 0x40dd06
        int64_t v151 = v150; // 0x40dd12
        int64_t v152 = v54; // 0x40dd12
        int64_t v153 = v150; // 0x40dd12
        int64_t v154; // 0x40dbd0
        int64_t v155; // 0x40dbd0
        uint64_t v156; // 0x40dd20
        int64_t v157; // 0x40dd2e
        if (v31 <= *(int64_t *)(40 * v150 + v147)) {
            v155 = v151;
            v154 = v148;
            if (v155 <= v148) {
                // break (via goto) -> 0x40dd47
                goto lab_0x40dd47;
            }
            // 0x40dd20
            v156 = v155 + v148;
            v157 = (v156 / 0x8000000000000000 + v156) / 2;
            v152 = v155;
            v153 = v157;
            while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                // 0x40dd42
                v155 = v157;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40dd47
                    goto lab_0x40dd47;
                }
                // 0x40dd20
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
            }
        }
        int64_t v158 = v152;
        int64_t v159 = v153 + 1; // 0x40dd98
        v154 = v159;
        while (v159 < v158) {
            // 0x40dcf1
            v148 = v159;
            v149 = v148 + v158;
            v150 = (v149 / 0x8000000000000000 + v149) / 2;
            v151 = v150;
            v152 = v158;
            v153 = v150;
            if (v31 <= *(int64_t *)(40 * v150 + v147)) {
                v155 = v151;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40dd47
                    goto lab_0x40dd47;
                }
                // 0x40dd20
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
                while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                    // 0x40dd42
                    v155 = v157;
                    v154 = v148;
                    if (v155 <= v148) {
                        // break (via goto) -> 0x40dd47
                        goto lab_0x40dd47;
                    }
                    // 0x40dd20
                    v156 = v155 + v148;
                    v157 = (v156 / 0x8000000000000000 + v156) / 2;
                    v152 = v155;
                    v153 = v157;
                }
            }
            // 0x40dd98
            v158 = v152;
            v159 = v153 + 1;
            v154 = v159;
        }
      lab_0x40dd47:;
        int64_t v160 = v154;
        if (v54 > v160) {
            int64_t v161 = v146 + 40 * v160; // 0x40dd57
            int64_t v162 = v161; // 0x40dd5f
            if (v160 != -1 == *(int64_t *)(v161 + 8) == v31) {
                int64_t v163 = v162;
                while (v32 != *(int64_t *)v163) {
                    // 0x40dd70
                    v162 = v163 + 40;
                    if (*(char *)(v163 + 32) == 0) {
                        goto lab_0x40dda8;
                    }
                    v163 = v162;
                }
                // 0x40dd7f
                *v23 = 0;
                v30 = v31;
                goto lab_0x40dc50_3;
            } else {
                goto lab_0x40dda8;
            }
        } else {
            goto lab_0x40dda8;
        }
    } else {
        goto lab_0x40dda8;
    }
  lab_0x40dc29:
    // 0x40dc29
    v30 = v31;
    if ((v35 & 0x2000) != 0 == (v36 & 2) == 0) {
        goto lab_0x40dc50_3;
    } else {
        if ((char)(v34 / 256) > -1) {
            goto lab_0x40dce0;
        } else {
            // 0x40dc3e
            v30 = v31;
            if ((v36 & 8) != 0) {
                goto lab_0x40dce0;
            } else {
                goto lab_0x40dc50_3;
            }
        }
    }
  lab_0x40e2e8:
    // 0x40e2e8
    *(int64_t *)(v2 - 16) = 9;
    int64_t v164 = function_40ca40(a1, v128, *v56, v127, v122, v104, (int64_t)&g81); // 0x40e2fb
    int32_t v165 = v164; // 0x40e302
    if (v165 == 1) {
        goto lab_0x40e364;
    } else {
        // 0x40e307
        result = v164;
        if (v165 != 0) {
            goto lab_0x40e05b_7;
        } else {
            int64_t v166 = *v143; // 0x40e30f
            if (*v57 == v166) {
                int64_t v167 = 2 * v166 | 1; // 0x40e40c
                *v18 = v167;
                int64_t * mem2 = realloc((int64_t *)*v144, 8 * (int32_t)v167); // 0x40e422
                result = 12;
                if (mem2 == NULL) {
                    goto lab_0x40e05b_7;
                } else {
                    // 0x40e430
                    *v144 = (int64_t)mem2;
                    *v143 = *v18;
                    goto lab_0x40e31d;
                }
            } else {
                goto lab_0x40e31d;
            }
        }
    }
  lab_0x40e31d:;
    int64_t * mem3 = calloc(1, 40); // 0x40e327
    result = 12;
    if (mem3 == NULL) {
        goto lab_0x40e05b_7;
    } else {
        int64_t v168 = (int64_t)mem3; // 0x40e327
        int64_t v169 = *v57; // 0x40e331
        *(int64_t *)(*v144 + 8 * v169) = v168;
        *mem3 = v122;
        *(int64_t *)(v168 + 8) = v104;
        *v57 = v169 + 1;
        function_40da30(a1, v55, v168, *v15, *v12);
        goto lab_0x40e364;
    }
}
// Address range: 0x40e450 - 0x40e607
int64_t function_40e450(int32_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 72); // 0x40e464
    int64_t v3 = *v2; // 0x40e464
    int64_t * v4 = (int64_t *)(v1 + 184); // 0x40e468
    int64_t v5 = *(int64_t *)(v1 + 152); // 0x40e46f
    int64_t v6 = 8 * v3; // 0x40e476
    int64_t * v7 = (int64_t *)(v1 + 192); // 0x40e481
    int64_t * v8 = (int64_t *)(*v4 + v6);
    int64_t result; // 0x40e450
    if (*v7 < v3) {
        // 0x40e48a
        *v8 = a3;
        *v7 = v3;
        result = a3;
    } else {
        int64_t v9 = *v8; // 0x40e4c0
        if (v9 == 0) {
            // 0x40e598
            *v8 = a3;
            result = a3;
        } else {
            int64_t v10 = *(int64_t *)(v9 + 80); // 0x40e4cc
            int64_t v11; // bp-88, 0x40e450
            if (a3 == 0) {
                // 0x40e550
                v11 = __asm_movaps(__asm_movdqu(*(int128_t *)v10));
                int64_t v12 = function_409d60(v1, v3 - 1, *(int32_t *)(v1 + 160)); // 0x40e570
                int64_t v13 = function_4092e0((int128_t *)a1, v5, &v11, (int32_t)v12); // 0x40e582
                *v8 = v13;
                result = v13;
            } else {
                int64_t v14 = *(int64_t *)(a3 + 80); // 0x40e4d5
                int64_t v15; // 0x40e450
                int32_t v16 = function_409150(&v11, v14, v10, v15); // 0x40e4e9
                *a1 = v16;
                if (v16 != 0) {
                    // 0x40e4a5
                    return 0;
                }
                int64_t v17 = function_409d60(v1, *v2 - 1, *(int32_t *)(v1 + 160)); // 0x40e506
                int64_t v18 = function_4092e0((int128_t *)a1, v5, &v11, (int32_t)v17); // 0x40e527
                *(int64_t *)(*v4 + v6) = v18;
                result = v18;
                if (v14 != 0) {
                    // 0x40e540
                    free((int64_t *)v15);
                    result = v18;
                }
            }
        }
    }
    // 0x40e497
    if (*(int64_t *)(v5 + 152) == 0) {
        // 0x40e4a5
        return result;
    }
    // 0x40e5a8
    if (result == 0) {
        // 0x40e4a5
        return 0;
    }
    int64_t v19 = result + 16; // 0x40e5ad
    int64_t v20 = result + 24; // 0x40e5b1
    int32_t v21 = function_409c10(v1, v19, v20, v3); // 0x40e5c6
    *a1 = v21;
    if (v21 != 0) {
        // 0x40e4a5
        return 0;
    }
    // 0x40e5ce
    if ((*(char *)(result + 104) & 64) == 0) {
        // 0x40e4a5
        return result;
    }
    int32_t v22 = function_40dbd0(v1, v19, v20); // 0x40e5e6
    *a1 = v22;
    int64_t result2 = 0; // 0x40e5ec
    if (v22 == 0) {
        // 0x40e5ee
        result2 = *(int64_t *)(*v4 + v6);
    }
    // 0x40e4a5
    return result2;
}
// Address range: 0x40e610 - 0x40e934
int64_t function_40e610(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 24); // 0x40e629
    uint64_t v2 = *v1; // 0x40e629
    int64_t * mem = malloc(8); // 0x40e643
    if (mem == NULL) {
        // 0x40e920
        return 12;
    }
    // 0x40e656
    int64_t v3; // bp-152, 0x40e610
    int64_t v4 = &v3; // 0x40e625
    int64_t v5 = (int64_t)mem; // 0x40e643
    *mem = *(int64_t *)(a2 + 16);
    int64_t v6 = v5; // 0x40e66e
    int64_t v7; // 0x40e610
    int64_t v8; // 0x40e610
    int64_t v9; // 0x40e610
    int64_t v10; // 0x40e610
    int64_t * v11; // 0x40e610
    int64_t * v12; // 0x40e610
    int64_t v13; // 0x40e610
    int64_t v14; // 0x40e6ce
    int64_t * v15; // 0x40e6e9
    int64_t * v16; // 0x40e610
    int64_t v17; // 0x40e7be
    if ((int32_t)v5 == 0) {
        // 0x40e674
        v6 = 0;
        if (v2 >= 1) {
            // 0x40e68e
            v11 = (int64_t *)(v4 + 16);
            int32_t * v18 = (int32_t *)(v4 + 28);
            int32_t * v19 = (int32_t *)(a1 + 224);
            int64_t * v20 = (int64_t *)(a1 + 152);
            v12 = (int64_t *)(v4 + 8);
            int64_t * v21 = (int64_t *)(v4 + 40);
            int64_t * v22 = (int64_t *)(v4 + 48);
            int64_t * v23 = (int64_t *)(v4 + 32);
            v13 = a2 + 40;
            int64_t v24 = v2; // 0x40e610
            while (true) {
                int64_t v25 = 8 * v24; // 0x40e691
                *v11 = v25;
                if (*(int64_t *)(v25 + a2) == 0) {
                    uint32_t v26 = *v18 + 1; // 0x40e8e0
                    *v18 = v26;
                    if ((int64_t)*v19 < (int64_t)v26) {
                        // break -> 0x40e8f6
                        break;
                    }
                } else {
                    // 0x40e6a9
                    *v18 = 0;
                    if (*v19 < 0) {
                        // break -> 0x40e8f6
                        break;
                    }
                }
                int64_t v27 = *(int64_t *)(a1 + 184); // 0x40e6c2
                v14 = v24 - 1;
                *(int64_t *)(v4 + 72) = 0;
                int64_t v28 = *(int64_t *)(v27 - 8 + *v11); // 0x40e6db
                v9 = v27;
                if (v28 != 0) {
                    // 0x40e6e9
                    v15 = (int64_t *)(v28 + 40);
                    int64_t v29 = *v20; // 0x40e6ee
                    v9 = v27;
                    if (*v15 >= 1) {
                        // 0x40e6fb
                        *v12 = 0;
                        int64_t * v30 = (int64_t *)v29; // 0x40e7ba
                        v16 = (int64_t *)(v29 + 24);
                        v7 = 0;
                        while (true) {
                          lab_0x40e7b1:
                            // 0x40e7b1
                            v17 = *(int64_t *)(8 * v7 + *(int64_t *)(v28 + 48));
                            int64_t v31 = 16 * v17; // 0x40e7c5
                            int64_t v32 = v31 + *v30; // 0x40e7c9
                            v10 = v32;
                            if ((*(char *)(v32 + 10) & 16) == 0) {
                                goto lab_0x40e710;
                            } else {
                                int64_t v33 = *v20; // 0x40e7d6
                                *v21 = v31;
                                int64_t v34 = v33 + 216; // 0x40e7f2
                                *v22 = v33;
                                *v23 = *v1;
                                int64_t v35 = function_40c7b0(*(int64_t *)v33, v34, v17, a1, v14); // 0x40e803
                                int64_t v36 = *v21; // 0x40e808
                                int32_t v37 = v35; // 0x40e80d
                                int64_t v38 = v35 & 0xffffffff; // 0x40e80f
                                if (v37 < 1) {
                                    // 0x40e870
                                    v8 = v38;
                                    if (v37 != 0) {
                                        goto lab_0x40e751;
                                    } else {
                                        // 0x40e876
                                        v10 = *v30 + v36;
                                        goto lab_0x40e710;
                                    }
                                } else {
                                    int64_t v39 = (0x100000000 * v35 >> 32) + v14; // 0x40e816
                                    v8 = v38;
                                    if (*v23 < v39) {
                                        goto lab_0x40e751;
                                    } else {
                                        int64_t v40 = *(int64_t *)(8 * v39 + v34); // 0x40e82c
                                        if (v40 == 0) {
                                            // 0x40e876
                                            v10 = *v30 + v36;
                                            goto lab_0x40e710;
                                        } else {
                                            // 0x40e835
                                            *v23 = v36;
                                            int64_t v41 = *(int64_t *)(*(int64_t *)(*v22 + 24) + 8 * v17); // 0x40e846
                                            v8 = v38;
                                            if (function_408030(*(int64_t *)(v40 + 16), v40 + 24, v41) != 0) {
                                                goto lab_0x40e751;
                                            } else {
                                                // 0x40e858
                                                v10 = *v30 + *v23;
                                                goto lab_0x40e710;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              lab_0x40e888:
                // 0x40e888
                v6 = v9;
                if ((int32_t)v9 != 0) {
                    goto lab_0x40e8b5_3;
                }
                // 0x40e89f
                v24 = v14;
                v6 = 0;
                if (v14 == 0) {
                    goto lab_0x40e8b5_3;
                }
            }
            // 0x40e8f6
            memset((int64_t *)a2, 0, (int32_t)*v11);
            free((int64_t *)*(int64_t *)(v4 + 80));
            return (int32_t)&g81 ^ (int32_t)&g81;
        }
    }
  lab_0x40e8b5_3:;
    int32_t * v42 = (int32_t *)(v4 + 8); // 0x40e8ba
    *v42 = (int32_t)v6;
    free((int64_t *)*(int64_t *)(v4 + 80));
    return (int64_t)*v42;
  lab_0x40e710:;
    int64_t v43 = v10;
    if ((char)function_409e50(a1, v43, v14) == 0) {
        goto lab_0x40e79c;
    } else {
        int64_t v44 = *(int64_t *)(*v11 + v43); // 0x40e727
        if (v44 == 0) {
            goto lab_0x40e79c;
        } else {
            int64_t v45 = *(int64_t *)(*v16 + 8 * v17); // 0x40e73d
            v8 = 1;
            if (function_408030(*(int64_t *)(v44 + 16), v44 + 24, v45) == 0) {
                goto lab_0x40e79c;
            } else {
                goto lab_0x40e751;
            }
        }
    }
  lab_0x40e79c:;
    int64_t v46 = *v12 + 1; // 0x40e79c
    *v12 = v46;
    v7 = v46;
    v9 = v46;
    if (v46 >= *v15) {
        // break -> 0x40e888
        goto lab_0x40e888;
    }
    goto lab_0x40e7b1;
  lab_0x40e751:
    // 0x40e751
    if (*(int64_t *)v13 == 0) {
        goto lab_0x40e787;
    } else {
        int64_t v47 = *(int64_t *)(*v16 + 8 * v17); // 0x40e772
        *(int64_t *)(v4 - 16) = v14;
        int64_t v48 = *(int64_t *)(v4 + 56); // 0x40e777
        int64_t v49 = function_4082c0(a1, v13, v48, v47, (0x100000000 * v8 >> 32) + v14, v17, (int64_t)&g81); // 0x40e77c
        if ((char)v49 != 0) {
            goto lab_0x40e79c;
        } else {
            goto lab_0x40e787;
        }
    }
  lab_0x40e787:
    // 0x40e787
    v6 = 12;
    if ((char)function_406a20(v4 + 64, v17) == 0) {
        goto lab_0x40e8b5_3;
    }
    goto lab_0x40e79c;
}
// Address range: 0x40e940 - 0x4108c9
int64_t function_40e940(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9) {
    // 0x40e940
    int64_t v1; // 0x40e940
    int64_t v2 = v1;
    int64_t v3; // bp-312, 0x40e940
    __asm_rep_stosq_memset((char *)&v3, 0, 32);
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x40e98c
    char * v5 = (char *)v4; // 0x40e998
    char * v6 = v5; // 0x40e9a0
    if (v4 != 0) {
        unsigned char v7 = *(char *)(a1 + 56); // 0x40e9a2
        v6 = NULL;
        if (a4 != a5 && (v7 & 8) != 0) {
            // 0x40e9b8
            v6 = v7 % 2 == 0 ? v5 : NULL;
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x40e9d5
    uint64_t v9 = *v8; // 0x40e9d5
    int64_t v10 = 0; // 0x40e9e1
    int64_t v11 = a7; // 0x40e9e1
    if (v9 < a7) {
        // 0x40e9e3
        v10 = -1 - v9 + a7;
        v11 = v9 + 1;
    }
    int64_t v12 = *(int64_t *)(a1 + 16); // 0x40ea0d
    if (v12 == 0) {
        // 0x40f3b0
        return 1;
    }
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40ea1d
    int64_t v14 = *v13; // 0x40ea1d
    if (v14 == 0) {
        // 0x40f3b0
        return 1;
    }
    int64_t * v15 = (int64_t *)(a1 + 80); // 0x40ea2a
    int64_t v16 = *v15; // 0x40ea2a
    if (v16 == 0) {
        // 0x40f3b0
        return 1;
    }
    int64_t * v17 = (int64_t *)(a1 + 88); // 0x40ea37
    int64_t v18 = *v17; // 0x40ea37
    if (v18 == 0) {
        // 0x40f3b0
        return 1;
    }
    int64_t * v19 = (int64_t *)(a1 + 96); // 0x40ea44
    if (*v19 == 0) {
        // 0x40f3b0
        return 1;
    }
    int64_t v20 = a4; // 0x40ea54
    int64_t v21 = a5; // 0x40ea54
    if (*(int64_t *)(v14 + 16) != 0) {
        goto lab_0x40ea88;
    } else {
        // 0x40ea56
        v20 = a4;
        v21 = a5;
        if (*(int64_t *)(v16 + 16) != 0) {
            goto lab_0x40ea88;
        } else {
            // 0x40ea5d
            if (*(int64_t *)(v18 + 16) == 0) {
                goto lab_0x40ea6a;
            } else {
                // 0x40ea64
                if (*(char *)(a1 + 56) < 0) {
                    goto lab_0x40ea88;
                } else {
                    goto lab_0x40ea6a;
                }
            }
        }
    }
  lab_0x40f390_9:;
    // 0x40f390
    int64_t v22; // 0x40e940
    free((int64_t *)v22);
    int64_t * v23; // 0x40e940
    int64_t v24; // 0x40e940
    int64_t v25; // 0x40e940
    if (*v23 != 0) {
        // 0x40fba8
        function_407ca0(&v3);
        free((int64_t *)v24);
        free((int64_t *)v25);
    }
    // 0x40f3a8
    function_407c60(&v3);
    // 0x40f3b0
    int64_t v26; // 0x40e940
    return v26 & 0xffffffff;
  lab_0x40f8f8_3:;
    // 0x40f8f8
    int32_t v27; // 0x40e940
    int32_t v28 = v27; // bp-392, 0x40f8f8
    int32_t v29; // 0x40e940
    int32_t v30 = v29; // 0x40f902
    int64_t v31; // 0x40e940
    int64_t v32 = v31; // 0x40f902
    int64_t v33 = 0; // 0x40f902
    int64_t v34; // 0x40e940
    int64_t v35 = v34; // 0x40f902
    int64_t v36; // 0x40e940
    int64_t v37 = v36; // 0x40f902
    int64_t v38; // 0x40e940
    int64_t v39 = v38; // 0x40f902
    int64_t * v40; // 0x40e940
    v23 = v40;
    v26 = 12;
    int64_t v41; // 0x40e940
    v25 = v41;
    int64_t v42; // 0x40e940
    v24 = v42;
    v22 = 0;
    int64_t v43; // 0x40e940
    if (v43 == 0) {
        goto lab_0x40f390_9;
    } else {
        goto lab_0x40f0e8;
    }
  lab_0x40f18f:;
    // 0x40f18f
    int64_t v44; // 0x40e940
    int64_t v45 = v44;
    int64_t v46; // 0x40e940
    int64_t v47 = v46;
    int64_t v48; // 0x40e940
    int64_t v49 = v48;
    int32_t v50; // 0x40e940
    int32_t v51 = v50;
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v52; // 0x40e940
    int64_t v53 = v52; // 0x40e940
    int128_t v54; // 0x40e940
    int128_t v55 = v54; // 0x40e940
    int64_t v56; // 0x40e940
    int64_t v57 = v56; // 0x40e940
    int32_t v58; // 0x40e940
    int64_t v59; // 0x40e940
    int64_t v60; // 0x40e940
    int64_t v61; // 0x40e940
    int64_t v62; // 0x40e940
    int64_t v63; // 0x40e940
    int64_t v64; // 0x40e940
    int64_t v65; // 0x40e940
    int64_t v66; // 0x40e940
    int64_t v67; // bp-376, 0x40e940
    int64_t v68; // 0x40e940
    int64_t * mem; // 0x40fa0f
    int64_t v69; // 0x40e940
    int64_t * mem2; // 0x40fa36
    int64_t v70; // 0x40fa36
    int128_t v71; // 0x40fa5e
    int64_t v72; // 0x40eb3d
    char * v73; // 0x40e940
    char * v74; // 0x40e940
    int64_t v75; // 0x40e940
    int128_t v76; // 0x40e940
    switch (v45) {
        case -1: {
            goto lab_0x40f7f0;
        }
        case -2: {
            goto lab_0x40f390_9;
        }
        default: {
            // 0x40f1a3
            int64_t v77; // 0x40e940
            if (v11 < 2 | (*v73 & 16) != 0) {
                // 0x40f360
                v65 = v45;
                v64 = v43;
                if (*v40 == 0) {
                    goto lab_0x40f373_2;
                }
                int64_t v78 = *(int64_t *)(8 * v45 + v43); // 0x40f9be
                int64_t v79 = function_409f80(&v3, *(int64_t *)(v78 + 16), v78 + 24, v45); // 0x40f9ca
                v77 = v79;
            } else {
                int64_t v80 = *(int64_t *)(8 * v45 + v43); // 0x40f1d7
                int64_t v81 = function_409f80(&v3, *(int64_t *)(v80 + 16), v80 + 24, v45); // 0x40f1e3
                v77 = v81;
                if (*v74 % 2 == 0) {
                    // 0x40f205
                    v65 = v45;
                    v64 = v43;
                    v77 = v81;
                    if (*v40 == 0) {
                        goto lab_0x40f373_2;
                    }
                }
            }
            // 0x40f9df
            if (v45 >= 0x1fffffffffffffff) {
                // break -> 0x40f390
                break;
            }
            int64_t v82 = v45 + 1; // 0x40f9ff
            int32_t size = 8 * (int32_t)v82; // 0x40fa0f
            mem = malloc(size);
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if (mem == NULL) {
                // break -> 0x40f390
                break;
            }
            int64_t v83 = v77;
            v69 = (int64_t)mem;
            if (*v40 == 0) {
                int128_t v84 = __asm_pxor(v54, v54); // 0x40f770
                v67 = v69;
                __asm_movaps(v84);
                int64_t v85 = function_40e610(v72, v75); // 0x40f7b7
                free(NULL);
                int32_t v86 = v85;
                v58 = v86;
                v68 = 0;
                v66 = v83;
                v76 = v84;
                v63 = v85;
                if (v86 != 0) {
                    goto lab_0x40ffa2;
                } else {
                    // 0x40f7d5
                    v60 = v45;
                    if (*mem != 0) {
                        goto lab_0x40fb48;
                    }
                    // 0x40f7df
                    free(mem);
                    v53 = v83;
                    v55 = v84;
                    v57 = v69;
                    goto lab_0x40f7f0;
                }
            } else {
                // 0x40fa33
                mem2 = malloc(size);
                v70 = (int64_t)mem2;
                int64_t v87 = v45; // 0x40fa46
                if (mem2 == NULL) {
                    // 0x40ffe4
                    free(mem);
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    goto lab_0x40f390_9;
                }
                v61 = v83;
                v62 = v82;
                int128_t v88 = v54;
                memset(mem2, 0, 8 * (int32_t)v62);
                v71 = __asm_pxor(v88, v88);
                __asm_movaps(v71);
                v67 = v69;
                int64_t v89 = function_40e610(v72, v75); // 0x40faa1
                free(NULL);
                int32_t v90 = v89;
                v58 = v90;
                v68 = v70;
                v66 = v61;
                v76 = v71;
                v63 = v89;
                while (v90 == 0) {
                    // 0x40fac3
                    v59 = v87;
                    if (*mem != 0) {
                        goto lab_0x40fb1d_2;
                    }
                    // 0x40fac9
                    if (*mem2 != 0) {
                        goto lab_0x40fb1d_2;
                    }
                    int64_t v91 = v59; // 0x40fae8
                    if (v59 == 0) {
                        goto lab_0x40fbd0_2;
                    }
                    int64_t v92; // 0x40e940
                    int64_t v93; // 0x40e940
                    int64_t v94; // 0x40faee
                    while (true) {
                        // 0x40faee
                        v92 = v91;
                        v93 = v92 - 1;
                        v94 = *(int64_t *)(8 * v93 + v43);
                        if (v94 != 0) {
                            // 0x40faf7
                            if ((*(char *)(v94 + 104) & 16) != 0) {
                                // break -> 0x40fafd
                                break;
                            }
                        }
                        // 0x40fae0
                        v91 = v93;
                        if (v93 == 0) {
                            goto lab_0x40fbd0_2;
                        }
                    }
                    int64_t v95 = function_409f80(&v3, *(int64_t *)(v94 + 16), v94 + 24, v93); // 0x40fb10
                    v87 = v93;
                    v61 = v95;
                    v62 = v92;
                    v88 = v71;
                    memset(mem2, 0, 8 * (int32_t)v62);
                    v71 = __asm_pxor(v88, v88);
                    __asm_movaps(v71);
                    v67 = v69;
                    v89 = function_40e610(v72, v75);
                    free(NULL);
                    v90 = v89;
                    v58 = v90;
                    v68 = v70;
                    v66 = v61;
                    v76 = v71;
                    v63 = v89;
                }
                goto lab_0x40ffa2;
            }
        }
    }
  lab_0x40f60e:;
    // 0x40f60e
    int64_t v96; // 0x40e940
    int64_t v97 = v96 + 1; // 0x40f60e
    int64_t v98; // 0x40e940
    int64_t v99 = v98; // 0x40f616
    int64_t v100; // 0x40e940
    int64_t v101 = v100; // 0x40f616
    int64_t v102; // 0x40e940
    int64_t v103 = v102; // 0x40f616
    int64_t v104; // 0x40e940
    int64_t v105 = v104; // 0x40f616
    int64_t v106; // 0x40e940
    int64_t v107 = v106; // 0x40f616
    int64_t v108 = v97; // 0x40f616
    int64_t v109 = v98; // 0x40f616
    int64_t v110 = v102; // 0x40f616
    int64_t v111 = v106; // 0x40f616
    int64_t v112 = v104; // 0x40f616
    int64_t v113 = v106; // 0x40f616
    int64_t v114 = v36; // 0x40f616
    int64_t v115; // 0x40e940
    int64_t v116 = v115; // 0x40f616
    int64_t * v117; // 0x40f4a0
    if (v97 >= *v117) {
        // break -> 0x40f963
        goto lab_0x40f963;
    }
    goto lab_0x40f61c;
  lab_0x40f500:;
    // 0x40f500
    int64_t v118; // 0x40e940
    int64_t v120; // 0x40f624
    int64_t v134 = function_40c7b0(v36, a1 + 216, v120, v72, v118); // 0x40f50e
    int64_t v119; // 0x40e940
    v98 = v119;
    v100 = v72;
    v102 = v120;
    v104 = v36;
    int64_t v135; // 0x40e940
    v106 = v135;
    v115 = v120;
    int64_t v136; // 0x40e940
    int64_t v137; // 0x40e940
    int64_t v138; // 0x40e940
    int64_t v139; // 0x40e940
    int32_t v140; // bp-388, 0x40e940
    int64_t v141; // 0x40f56e
    int64_t * v142; // 0x40eab2
    int32_t v126; // 0x40e940
    int64_t v143; // 0x40e940
    if ((int32_t)v134 == 0) {
        goto lab_0x40f60e;
    } else {
        int64_t v144 = (0x100000000 * v134 >> 32) + v135; // 0x40f51e
        int32_t v145 = function_407600(v72, v144);
        v140 = v145;
        v27 = v145;
        v31 = v119;
        v34 = v118;
        v38 = v120;
        if (v145 != 0) {
            goto lab_0x40f8f8_3;
        }
        int64_t v146 = 8 * v144; // 0x40f566
        v141 = v146 + v43;
        int64_t v147 = *v8 + 24 * *(int64_t *)(*v142 + 8 * v120); // 0x40f57e
        int64_t * v148 = (int64_t *)v141; // 0x40f582
        int64_t v149 = *v148; // 0x40f582
        if (v149 == 0) {
            // 0x40f6a0
            v67 = __asm_movaps(__asm_movdqu(*(int128_t *)v147));
            int64_t v150 = *(int64_t *)(v147 + 16); // 0x40f6b3
            int64_t v151 = function_409d60(v72, v144 - 1, v126); // 0x40f6c6
            int64_t v152 = v151 & 0xffffffff; // 0x40f6de
            int64_t v153 = function_4092e0((int128_t *)&v140, a1, &v67, (int32_t)v151); // 0x40f6e0
            *v148 = v153;
            v98 = v150;
            v100 = v152;
            v102 = v43;
            v104 = v143;
            v106 = v135;
            v115 = v146;
            v139 = v150;
            v137 = v152;
            v138 = v143;
            v136 = v146;
            if (v153 != 0) {
                goto lab_0x40f60e;
            } else {
                goto lab_0x40f700;
            }
        } else {
            int64_t v154 = function_409150(&v67, *(int64_t *)(v149 + 80), v147, v72); // 0x40f59a
            int32_t v155 = v154;
            v140 = v155;
            v27 = v155;
            v31 = v119;
            v34 = v141;
            v38 = v146;
            if (v155 != 0) {
                goto lab_0x40f8f8_3;
            }
            int64_t v156 = function_409d60(v72, v144 - 1, v126); // 0x40f5bc
            int64_t v157 = v156 & 0xffffffff; // 0x40f5d4
            int64_t v158 = function_4092e0((int128_t *)&v140, a1, &v67, (int32_t)v156); // 0x40f5de
            *v148 = v158;
            free((int64_t *)v119);
            v98 = v119;
            v100 = v157;
            v102 = v43;
            v104 = v119;
            v106 = v135;
            v115 = v141;
            v139 = v119;
            v137 = v157;
            v138 = v119;
            v136 = v141;
            if (*v148 == 0) {
                goto lab_0x40f700;
            } else {
                goto lab_0x40f60e;
            }
        }
    }
  lab_0x40f4e1:;
    // 0x40f4e1
    int64_t v131; // 0x40e940
    int64_t v159 = v131;
    v98 = v119;
    int64_t v128; // 0x40f674
    v100 = v128;
    v102 = v159;
    v104 = v72;
    v106 = v118;
    v115 = v120;
    uint64_t v124; // 0x40f638
    uint64_t v125; // 0x40f65e
    int64_t v127; // 0x40f66f
    if ((v124 & 0x2000) != 0 == (v125 & 2) == 0) {
        goto lab_0x40f60e;
    } else {
        uint32_t v160 = (int32_t)v127 & 128; // 0x40f4ee
        if (v160 == 0) {
            goto lab_0x40f500;
        } else {
            // 0x40f4f6
            v98 = v119;
            v100 = v160;
            v102 = v159;
            v104 = v72;
            v106 = v118;
            v115 = v120;
            if ((v125 & 8) == 0) {
                goto lab_0x40f60e;
            } else {
                goto lab_0x40f500;
            }
        }
    }
  lab_0x40f700:
    // 0x40f700
    v98 = v139;
    v100 = v137;
    v102 = v43;
    v104 = v138;
    v106 = v135;
    v115 = v136;
    v27 = v140;
    v31 = v139;
    v34 = v141;
    v38 = v136;
    if (v140 != 0) {
        goto lab_0x40f8f8_3;
    }
    goto lab_0x40f60e;
  lab_0x40f373_2:
    // 0x40f373
    v23 = v40;
    int64_t v161; // 0x40eec5
    v26 = v161;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v162; // 0x40e940
    int64_t v163; // 0x40e940
    int64_t v164; // 0x40e940
    int64_t v165; // 0x40fd37
    if (v11 != 0) {
        // 0x40fd18
        v164 = a8 + 16;
        v165 = 16 * v11 + a8;
        v162 = v164;
        if (v11 < 2) {
            // 0x410024
            *(int64_t *)a8 = 0;
            *(int64_t *)(a8 + 8) = v65;
            v163 = 0;
            goto lab_0x40fdf2;
        } else {
            goto lab_0x40fd50;
        }
    } else {
        goto lab_0x40f390_9;
    }
  lab_0x40fb48:
    // 0x40fb48
    free((int64_t *)v43);
    v65 = v60;
    v64 = v69;
    goto lab_0x40f373_2;
  lab_0x40fb1d_2:;
    int64_t v166 = function_4097d0(a1, v69, v70, v62); // 0x40fb2b
    free(mem2);
    int32_t v167 = v166;
    v60 = v59;
    v58 = v167;
    v68 = 0;
    v66 = v61;
    v76 = v71;
    v63 = v166;
    if (v167 != 0) {
        goto lab_0x40ffa2;
    } else {
        goto lab_0x40fb48;
    }
  lab_0x40fbd0_2:
    // 0x40fbd0
    free(mem);
    free(mem2);
    function_407ca0(&v3);
    int32_t v168 = v51; // 0x40fbf0
    int64_t v169 = v61; // 0x40fbf0
    int128_t v170 = v71; // 0x40fbf0
    int64_t v171; // bp-384, 0x40e940
    int64_t v172 = v171; // 0x40fbf0
    int64_t v173 = v49; // 0x40fbf0
    int64_t v174 = v47; // 0x40fbf0
    int64_t v175 = v69; // 0x40fbf0
    goto lab_0x40f800;
  lab_0x40f0b4:;
    // 0x40f0b4
    int64_t v291; // 0x40e940
    int64_t v404 = v291;
    int64_t v292; // 0x40e940
    int32_t v405 = (int32_t)v292 + 1; // 0x40f0b8
    int64_t v324; // 0x40e940
    int64_t v406 = (int64_t)*(char *)(v292 + v324); // 0x40f0c8
    int64_t v281; // 0x40e940
    int64_t v407 = *(int64_t *)(v281 + 88); // 0x40f0cc
    int64_t v293; // 0x40e940
    int64_t v408 = v293; // 0x40f0d3
    int64_t v409 = v407; // 0x40f0d3
    int64_t v410; // 0x40e940
    int64_t v411; // 0x40e940
    int64_t v412; // 0x40e940
    int64_t v345; // 0x40e940
    if (v407 == 0) {
        int64_t v413 = *(int64_t *)(v281 + 96); // 0x40f718
        while (v413 == 0) {
            // 0x40f910
            int64_t v414; // 0x40e940
            int64_t v415; // 0x40e940
            if ((char)function_40aa70(a1, v281, v404, v415, v414) == 0) {
                // 0x40f928
                v28 = 12;
                v30 = v405;
                int64_t v416; // 0x40e940
                v32 = v416;
                v33 = 0;
                v35 = v414;
                int64_t v417; // 0x40e940
                v37 = v417;
                int64_t v418; // 0x40e940
                v39 = v418;
                v23 = v40;
                v26 = 12;
                v25 = v41;
                v24 = v42;
                v22 = 0;
                if (v43 != 0) {
                    goto lab_0x40f0e8;
                } else {
                    goto lab_0x40f390_9;
                }
            }
            // 0x40f0cc
            int64_t * v419; // 0x40f0cc
            int64_t v420 = *v419; // 0x40f0cc
            v408 = a1;
            v409 = v420;
            if (v420 != 0) {
                goto lab_0x40f0d9;
            }
            v413 = *(int64_t *)(v281 + 96);
        }
        int64_t v421 = v413 + 8 * v406;
        int64_t v422 = function_409d60(v72, (int64_t)v405 - 1, v126) % 2 == 0 ? v421 : v421 + 2048;
        v412 = v345;
        v410 = v422;
        v411 = v72;
    } else {
      lab_0x40f0d9:
        // 0x40f0d9
        v412 = v404;
        v410 = v409 + 8 * v406;
        v411 = v408;
    }
    int64_t v423 = *(int64_t *)v410;
    v30 = v405;
    int64_t v290; // 0x40e940
    v32 = v290;
    v33 = v423;
    int64_t v294; // 0x40e940
    v35 = v294;
    int64_t v295; // 0x40e940
    v37 = v295;
    int64_t v296; // 0x40e940
    v39 = v296;
    int32_t v424 = v405; // 0x40f0e6
    int64_t v425 = v290; // 0x40f0e6
    int64_t v426 = v412; // 0x40f0e6
    int64_t v427 = v423; // 0x40f0e6
    int64_t v428 = v411; // 0x40f0e6
    int64_t v429 = v294; // 0x40f0e6
    int64_t v430 = v295; // 0x40f0e6
    int64_t v431 = v296; // 0x40f0e6
    if (v43 == 0) {
        goto lab_0x40f0fe;
    } else {
        goto lab_0x40f0e8;
    }
  lab_0x40f4a0:;
    // 0x40f4a0
    int64_t v298; // 0x40e940
    int64_t v432 = v298;
    int64_t v297; // 0x40e940
    int64_t v433 = v297;
    v117 = (int64_t *)(v281 + 16);
    int64_t v276; // 0x40e940
    v109 = v276;
    int64_t v277; // 0x40e940
    v110 = v277;
    v111 = v433;
    v112 = v432;
    int64_t v279; // 0x40e940
    v113 = v279;
    int64_t v280; // 0x40e940
    v114 = v280;
    int64_t v282; // 0x40e940
    v116 = v282;
    int64_t v283; // 0x40f079
    if (*v117 >= 1) {
        int64_t * v121 = (int64_t *)(v281 + 24); // 0x40f61c
        v135 = v29;
        v99 = v276;
        v101 = v283;
        v103 = v277;
        v105 = v432;
        v107 = v433;
        v108 = 0;
        while (true) {
          lab_0x40f61c:
            // 0x40f61c
            v96 = v108;
            v118 = v107;
            v36 = v105;
            v119 = v99;
            v120 = *(int64_t *)(*v121 + 8 * v96);
            int64_t v122 = 16 * v120 + v36; // 0x40f62f
            v98 = v119;
            v100 = v101;
            v102 = v103;
            v104 = v36;
            v106 = v118;
            v115 = v120;
            if ((*(char *)(v122 + 10) & 16) == 0) {
                goto lab_0x40f60e;
            } else {
                uint32_t v123 = *(int32_t *)(v122 + 8); // 0x40f638
                if ((v123 & 0x3ff00) == 0) {
                    goto lab_0x40f500;
                } else {
                    // 0x40f647
                    v124 = (int64_t)v123;
                    v125 = function_409d60(v72, v118, v126);
                    v127 = v124 / 256;
                    v128 = v127 & 0xff03ff;
                    if ((v124 & 1024) != 0) {
                        // 0x40f4d0
                        v98 = v119;
                        v100 = v128;
                        v102 = v127;
                        v104 = v72;
                        v106 = v118;
                        v115 = v120;
                        if (v125 % 2 == 0) {
                            goto lab_0x40f60e;
                        } else {
                            uint32_t v129 = (int32_t)v127 & 8; // 0x40f4d8
                            int64_t v130 = v129; // 0x40f4d8
                            v131 = v130;
                            v98 = v119;
                            v100 = v128;
                            v102 = v130;
                            v104 = v72;
                            v106 = v118;
                            v115 = v120;
                            if (v129 != 0) {
                                goto lab_0x40f60e;
                            } else {
                                goto lab_0x40f4e1;
                            }
                        }
                    } else {
                        uint32_t v132 = (int32_t)v127 & 8; // 0x40f682
                        int64_t v133 = v132; // 0x40f682
                        v131 = v133;
                        v98 = v119;
                        v100 = v128;
                        v102 = v133;
                        v104 = v72;
                        v106 = v118;
                        v115 = v120;
                        if (v132 == 0 || v125 % 2 == 0) {
                            goto lab_0x40f4e1;
                        } else {
                            goto lab_0x40f60e;
                        }
                    }
                }
            }
        }
    }
  lab_0x40f963:
    // 0x40f963
    v28 = 0;
    v290 = v109;
    v291 = v110;
    v292 = v111;
    v293 = v112;
    v294 = v113;
    v295 = v114;
    v296 = v116;
    goto lab_0x40f0b4;
  lab_0x40f0fe:;
    int64_t v434 = v431;
    int64_t v435 = v430;
    int64_t v436 = v429;
    int64_t v437 = v425;
    int32_t v438 = v424;
    int32_t v439 = v438; // 0x40f101
    int64_t v440 = v426; // 0x40f101
    int64_t v441 = v427; // 0x40f101
    int64_t v442 = v428; // 0x40f101
    int64_t v264; // 0x40e940
    int64_t v262; // 0x40e940
    int64_t v263; // 0x40e940
    int32_t v260; // 0x40e940
    int64_t v261; // 0x40e940
    int64_t v259; // 0x40e940
    int64_t v275; // 0x40e940
    int64_t v258; // 0x40e940
    int64_t v274; // 0x40e940
    int64_t v273; // 0x40e940
    int32_t v257; // 0x40e940
    int32_t v271; // 0x40e940
    int64_t v346; // 0x40e940
    char v347; // 0x40e940
    if (v427 == 0) {
        // 0x40f107
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 != 0) {
            // break (via goto) -> 0x40f390
            goto lab_0x40f390_9;
        }
        // 0x40f11e
        v257 = v271;
        v258 = v274;
        v259 = v275;
        v260 = v438;
        v261 = v437;
        v262 = v436;
        v263 = v435;
        v264 = v434;
        if (v43 == 0) {
            // break -> 0x40f17d
            goto lab_0x40f17d_6;
        }
        int32_t v443 = v438; // 0x40f136
        v257 = v271;
        v258 = v274;
        v259 = v275;
        v260 = v438;
        v261 = v437;
        v262 = v436;
        v263 = v435;
        v264 = v434;
        if ((v347 & (char)v273) != 0) {
            // break -> 0x40f17d
            goto lab_0x40f17d_6;
        }
        int32_t v444 = v443;
        v257 = v271;
        v258 = v274;
        v259 = v275;
        v260 = v444;
        v261 = v437;
        v262 = v436;
        v263 = v435;
        v264 = v434;
        if (v444 > -1) {
            // break (via goto) -> 0x40f17d
            goto lab_0x40f17d_6;
        }
        int64_t v445 = (int64_t)v444 + 1;
        int64_t v446; // 0x40f163
        while (*(int64_t *)(8 * v445 + v43) == 0) {
            // 0x40f163
            v446 = v445 + 1;
            v257 = v271;
            v258 = v274;
            v259 = v275;
            v260 = 0;
            v261 = v437;
            v262 = v436;
            v263 = v435;
            v264 = v434;
            if (v446 > 0) {
                // break (via goto) -> 0x40f17d
                goto lab_0x40f17d_6;
            }
            v445 = v446;
        }
        int64_t v447 = function_40e450(&v28, &v3, 0); // 0x40f3e5
        uint32_t v448 = v28; // 0x40f3ea
        int32_t v449 = v445;
        while (v448 == 0) {
            // 0x40f3f5
            v443 = v449;
            if (v447 != 0) {
                // 0x40f010
                v439 = v449;
                v440 = v448;
                v441 = v447;
                v442 = v346;
                goto lab_0x40f010_2;
            }
            v444 = v443;
            v257 = v271;
            v258 = v274;
            v259 = v275;
            v260 = v444;
            v261 = v437;
            v262 = v436;
            v263 = v435;
            v264 = v434;
            if (v444 > -1) {
                // break (via goto) -> 0x40f17d
                goto lab_0x40f17d_6;
            }
            // 0x40f150
            v445 = (int64_t)v444 + 1;
            while (*(int64_t *)(8 * v445 + v43) == 0) {
                // 0x40f163
                v446 = v445 + 1;
                v257 = v271;
                v258 = v274;
                v259 = v275;
                v260 = 0;
                v261 = v437;
                v262 = v436;
                v263 = v435;
                v264 = v434;
                if (v446 > 0) {
                    // break (via goto) -> 0x40f17d
                    goto lab_0x40f17d_6;
                }
                v445 = v446;
            }
            // 0x40f3d0
            v447 = function_40e450(&v28, &v3, 0);
            v448 = v28;
            v449 = v445;
        }
        // 0x40f410
        v439 = v449;
        v440 = v448;
        v441 = v447;
        v442 = v346;
        v257 = v271;
        v258 = v274;
        v259 = v275;
        v260 = v449;
        v261 = v437;
        v262 = v436;
        v263 = v435;
        v264 = v434;
        if (v447 == 0) {
            // break -> 0x40f17d
            goto lab_0x40f17d_6;
        }
    }
    goto lab_0x40f010_2;
  lab_0x40f0e8:;
    int64_t v499 = function_40e450(&v28, &v3, v33); // 0x40f0f6
    v424 = v30;
    v425 = v32;
    v426 = v33;
    v427 = v499;
    v428 = v346;
    v429 = v35;
    v430 = v37;
    v431 = v39;
    goto lab_0x40f0fe;
  lab_0x40f010_2:;
    int64_t v450 = v442;
    int64_t v451 = v441;
    int64_t v452 = v440;
    int32_t v453 = v439;
    int64_t v454 = v453; // 0x40f013
    char v455 = *(char *)(v451 + 104); // 0x40f035
    int64_t v456 = v273; // 0x40f03b
    int64_t v457 = v274; // 0x40f03b
    int64_t v458 = v275; // 0x40f03b
    int64_t v459 = v452; // 0x40f03b
    int64_t v460 = v450; // 0x40f03b
    int64_t v461; // 0x40e940
    int64_t v462; // 0x40e940
    if ((v455 & 16) == 0) {
        goto lab_0x40f068;
    } else {
        // 0x40f03d
        v462 = v452;
        v461 = v450;
        if (v455 < 0) {
            int64_t v463 = v451 + 24; // 0x40f434
            int64_t v464 = function_409f80(&v3, *(int64_t *)(v451 + 16), v463, v454); // 0x40f43e
            v462 = v463;
            v461 = v72;
            v456 = v273;
            v457 = v274;
            v458 = v275;
            v459 = v463;
            v460 = v72;
            if (v464 == 0) {
                goto lab_0x40f068;
            } else {
                goto lab_0x40f045;
            }
        } else {
            goto lab_0x40f045;
        }
    }
  lab_0x40f068:;
    // 0x40f068
    char v272; // 0x40e940
    char v465 = v272 & (char)(v281 == v451); // 0x40f01e
    int32_t v466 = v465 == 0 ? (int64_t)v271 : v283;
    int64_t v242 = v434; // 0x40f073
    int64_t v243 = v451; // 0x40f073
    int64_t v244 = v435; // 0x40f073
    int64_t v245 = v436; // 0x40f073
    int64_t v246 = v460; // 0x40f073
    int64_t v247 = v454; // 0x40f073
    int64_t v248 = v459; // 0x40f073
    int64_t v249 = v437; // 0x40f073
    int64_t v251 = v458; // 0x40f073
    int64_t v252 = v457; // 0x40f073
    int64_t v253 = v456; // 0x40f073
    char v254 = v465; // 0x40f073
    int32_t v255 = v453; // 0x40f073
    int32_t v256 = v466; // 0x40f073
    v257 = v466;
    v258 = v457;
    v259 = v458;
    v260 = v453;
    v261 = v437;
    v262 = v436;
    v263 = v435;
    v264 = v434;
    if (v454 >= a6) {
        // break -> 0x40f17d
        goto lab_0x40f17d_6;
    }
    goto lab_0x40f079;
  lab_0x40f045:
    // 0x40f045
    v456 = 1;
    v457 = v454;
    v458 = 0;
    v459 = v462;
    v460 = v461;
    v50 = v453;
    v52 = v437;
    v48 = v436;
    v46 = v435;
    v44 = v454;
    v56 = v434;
    int32_t v307; // 0x40e940
    if (v307 == 0) {
        goto lab_0x40f18f;
    }
    goto lab_0x40f068;
  lab_0x40ee40:
    // 0x40ee40
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v351; // 0x40e940
    int64_t v178; // 0x40ed2c
    if (v178 > v351) {
        // break -> 0x40f390
        goto lab_0x40f390_9;
    }
    char v467 = 0;
    int64_t v468 = v351;
    int64_t v469 = 0; // 0x40ee8f
    if (v468 < a3) {
        // 0x40ee91
        v469 = (int64_t)*(char *)(v468 + a2);
    }
    int64_t v470 = v469;
    int64_t v471 = v470; // 0x40ee99
    int64_t v311; // 0x40eaae
    if (v311 != 0) {
        // 0x40ee9b
        v471 = (int64_t)*(char *)(v470 + v311);
    }
    int64_t v343; // 0x40e940
    while (*(char *)(v471 + v343) == 0) {
        int64_t v472 = v468 - 1; // 0x40ee78
        if (v472 < v178) {
            // 0x40fc48
            v171 = v472;
            v23 = v40;
            v26 = 1;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            goto lab_0x40f390_9;
        }
        v467 = 1;
        v468 = v472;
        v469 = 0;
        if (v468 < a3) {
            // 0x40ee91
            v469 = (int64_t)*(char *)(v468 + a2);
        }
        // 0x40ee96
        v470 = v469;
        v471 = v470;
        if (v311 != 0) {
            // 0x40ee9b
            v471 = (int64_t)*(char *)(v470 + v311);
        }
    }
    // 0x40eea5
    int32_t v354; // 0x40e940
    int32_t v234 = v354; // 0x40eea7
    int64_t v353; // 0x40e940
    int64_t v235 = v353; // 0x40eea7
    int128_t v352; // 0x40e940
    int128_t v236 = v352; // 0x40eea7
    int64_t v237 = v351; // 0x40eea7
    int64_t v238 = a3; // 0x40eea7
    int64_t v239 = v178; // 0x40eea7
    int64_t v348; // 0x40e940
    int64_t v240 = v348; // 0x40eea7
    if (v467 != 0) {
        // 0x40eea9
        v171 = v468;
        v234 = v354;
        v235 = v353;
        v236 = v352;
        v237 = v468;
        v238 = a3;
        v239 = v178;
        v240 = v348;
    }
    goto lab_0x40eeb8;
  lab_0x40eeb8:;
    int64_t v473 = v237;
    v161 = function_40a050(&v3, v473, v126);
    v23 = v40;
    v26 = v161;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if ((int32_t)v161 != 0) {
        // break -> 0x40f390
        goto lab_0x40f390_9;
    }
    int64_t v233 = v240;
    int64_t v232 = v239;
    int64_t v231 = v238;
    v54 = v236;
    int64_t v230 = v235;
    int32_t v214 = v234;
    int64_t v284; // 0x40e940
    int32_t v337; // 0x40ed4f
    if (v284 == 0 || v337 == 1) {
        goto lab_0x40eefc;
    } else {
        // 0x40eeeb
        v168 = v214;
        v169 = v230;
        v170 = v54;
        v172 = v473;
        v173 = v231;
        v174 = v232;
        v175 = v233;
        int32_t * v474; // 0x40e940
        if (*v474 == -1) {
            goto lab_0x40f800;
        } else {
            goto lab_0x40eefc;
        }
    }
  lab_0x40f83c:;
    // 0x40f83c
    int64_t v190; // 0x40e940
    int64_t v475 = v190;
    uint64_t v476 = v475 - v1; // 0x40f8a3
    int64_t v477; // 0x40f8c7
    if (v284 <= v476) {
        // 0x40f8b5
        v477 = function_40a050(&v3, v475, v126);
        v23 = v40;
        v26 = v477;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if ((int32_t)v477 != 0) {
            // break (via goto) -> 0x40f390
            goto lab_0x40f390_9;
        }
    }
    int64_t v478 = v343; // 0x40f866
    if (v475 < a3) {
        // 0x40f868
        v478 = (int64_t)*(char *)(v476 + v324) + v343;
    }
    // 0x40f877
    int32_t v187; // 0x40e940
    v234 = v187;
    int64_t v188; // 0x40e940
    v235 = v188;
    int128_t v189; // 0x40e940
    v236 = v189;
    v237 = v475;
    int64_t v191; // 0x40e940
    v238 = v191;
    int64_t v192; // 0x40e940
    v239 = v192;
    v240 = v178;
    int64_t v179; // 0x40ed3b
    int64_t v177; // 0x40e940
    while (*(char *)v478 == 0) {
        int64_t v479 = v475 + v177; // 0x40f883
        v171 = v479;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v479 < v178 || v479 > v179) {
            // break (via goto) -> 0x40f390
            goto lab_0x40f390_9;
        }
        v475 = v479;
        v476 = v475 - v1;
        if (v284 <= v476) {
            // 0x40f8b5
            v477 = function_40a050(&v3, v475, v126);
            v23 = v40;
            v26 = v477;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if ((int32_t)v477 != 0) {
                // break (via goto) -> 0x40f390
                goto lab_0x40f390_9;
            }
        }
        // 0x40f860
        v478 = v343;
        if (v475 < a3) {
            // 0x40f868
            v478 = (int64_t)*(char *)(v476 + v324) + v343;
        }
        // 0x40f877
        v234 = v187;
        v235 = v188;
        v236 = v189;
        v237 = v475;
        v238 = v191;
        v239 = v192;
        v240 = v178;
    }
    goto lab_0x40eeb8;
  lab_0x40f29c:;
    // 0x40f29c
    int64_t v356; // 0x40e940
    int64_t v480 = v356;
    int64_t v355; // 0x40e940
    int64_t v481 = v355;
    v234 = v354;
    v235 = v353;
    v236 = v352;
    v237 = v481;
    v238 = v480;
    int64_t v349; // 0x40e940
    v239 = v349;
    v240 = v348;
    char * v344; // 0x40e940
    if (v179 == v481) {
        int64_t v482 = 0; // 0x40f2b3
        if (v179 < a3) {
            // 0x40f2b5
            v482 = (int64_t)*v344;
        }
        int64_t v483 = v482;
        int64_t v484 = v483; // 0x40f2c9
        if (v311 != 0) {
            // 0x40f2cb
            v484 = (int64_t)*(char *)(v483 + v311);
        }
        // 0x40f2cf
        v234 = v354;
        v235 = v353;
        v236 = v352;
        v237 = v481;
        v238 = v480;
        v239 = v349;
        v240 = v348;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (*(char *)(v484 + v343) == 0) {
            // break -> 0x40f390
            goto lab_0x40f390_9;
        }
    }
    goto lab_0x40eeb8;
  lab_0x40eefc:;
    int64_t v485 = *v13; // 0x40ef23
    v28 = 0;
    int64_t v217 = v345; // 0x40ef57
    int64_t v219 = v72; // 0x40ef57
    int64_t v221 = v485; // 0x40ef57
    int64_t v222; // 0x40e940
    int64_t v220; // 0x40e940
    int64_t v218; // 0x40e940
    if (*(char *)(v485 + 104) >= 0) {
        goto lab_0x40efa0;
    } else {
        uint64_t v486 = function_409d60(v72, (int64_t)v214 - 1, v126); // 0x40ef67
        if (v486 % 2 != 0) {
            // 0x40fbf8
            v218 = v345;
            v220 = v72;
            v222 = *v15;
            goto lab_0x40fbfc;
        } else {
            int32_t v487 = v486; // 0x40ef74
            v217 = v345;
            v219 = v72;
            v221 = v485;
            if (v487 == 0) {
                goto lab_0x40efa0;
            } else {
                int64_t v488 = v486 & 6; // 0x40ef7a
                if (v488 == 6) {
                    // 0x40ff90
                    v218 = 6;
                    v220 = v72;
                    v222 = *v19;
                    goto lab_0x40fbfc;
                } else {
                    if ((v486 & 2) != 0) {
                        // 0x40fcc0
                        v218 = v488;
                        v220 = v72;
                        v222 = *v17;
                        goto lab_0x40fbfc;
                    } else {
                        // 0x40ef8e
                        v217 = v488;
                        v219 = v72;
                        v221 = v485;
                        if ((v486 & 4) != 0) {
                            int64_t v489 = *(int64_t *)(v485 + 80); // 0x40fcd0
                            int64_t v490 = function_4092e0((int128_t *)&v28, a1, (int64_t *)v489, v487); // 0x40fce1
                            v218 = v489;
                            v220 = v346;
                            v222 = v490;
                            goto lab_0x40fbfc;
                        } else {
                            goto lab_0x40efa0;
                        }
                    }
                }
            }
        }
    }
  lab_0x40efa0:;
    int64_t v197 = v221;
    int64_t v201 = v219;
    int64_t v199 = v217;
    int64_t v241; // 0x40e940
    char v196; // 0x40e940
    int64_t v200; // 0x40e940
    int64_t v198; // 0x40e940
    char v195; // 0x40e940
    if (v43 == 0) {
        goto lab_0x40efc4;
    } else {
        // 0x40efad
        *(int64_t *)(8 * (int64_t)v214 + v43) = v197;
        if (*v40 != 0) {
            int64_t v491 = v197 + 16; // 0x40ff48
            int64_t v492 = v197 + 24; // 0x40ff4c
            int64_t v493 = function_409c10(v72, v491, v492, 0); // 0x40ff5b
            int32_t v494 = v493; // 0x40ff60
            v28 = v494;
            v241 = v493;
            if (v494 != 0) {
                goto lab_0x41004e;
            } else {
                char * v495 = (char *)(v197 + 104); // 0x40ff6f
                char v496 = *v495; // 0x40ff6f
                v195 = 0;
                v196 = v496;
                v198 = v492;
                v200 = v72;
                if ((v496 & 64) != 0) {
                    int64_t v497 = function_40dbd0(v72, v491, v492); // 0x41000a
                    int32_t v498 = v497; // 0x41000f
                    v28 = v498;
                    v241 = v497;
                    if (v498 != 0) {
                        goto lab_0x41004e;
                    } else {
                        // 0x41001a
                        v195 = 0;
                        v196 = *v495;
                        v198 = v492;
                        v200 = v72;
                        goto lab_0x40efd8;
                    }
                } else {
                    goto lab_0x40efd8;
                }
            }
        } else {
            goto lab_0x40efc4;
        }
    }
  lab_0x40f800:;
    int64_t v176 = v172 + v177; // 0x40f808
    v171 = v176;
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v176 < v178 || v176 > v179) {
        // break -> 0x40f390
        goto lab_0x40f390_9;
    }
    int32_t v180 = v168; // 0x40f836
    int64_t v181 = v169; // 0x40f836
    int128_t v182 = v170; // 0x40f836
    int64_t v183 = v176; // 0x40f836
    int64_t v184 = v173; // 0x40f836
    int64_t v185 = v174; // 0x40f836
    int64_t v186 = v175; // 0x40f836
    v187 = v168;
    v188 = v169;
    v189 = v170;
    v190 = v176;
    v191 = v173;
    v192 = v174;
    int32_t v193; // 0x40e940
    if (v193 < 9) {
        goto lab_0x40ee08;
    } else {
        goto lab_0x40f83c;
    }
  lab_0x40efc4:;
    // 0x40efc4
    char v194; // 0x40ede6
    v195 = v194;
    v196 = *(char *)(v197 + 104);
    v198 = v199;
    v200 = v201;
    goto lab_0x40efd8;
  lab_0x40efd8:;
    int64_t v202 = v200;
    int64_t v203 = v198;
    char v204 = v195;
    int64_t v205; // 0x40e940
    int64_t v206; // 0x40e940
    int64_t v207; // 0x40e940
    int64_t v208; // 0x40e940
    int64_t v209; // 0x40e940
    int64_t v210; // 0x40e940
    int64_t v211; // 0x40e940
    int64_t v212; // 0x40e940
    if ((v196 & 16) != 0) {
        // 0x40fc68
        if (*(char *)(v197 + 104) < 0) {
            int64_t v213 = v214;
            int64_t v215 = v197 + 24; // 0x40fcf9
            int64_t v216 = function_409f80(&v3, *(int64_t *)(v197 + 16), v215, v213); // 0x40fd00
            v205 = v213;
            v212 = 0;
            v211 = v215;
            v209 = v72;
            v207 = -1;
            v206 = v213;
            v210 = v215;
            v208 = v72;
            if (v216 == 0) {
                goto lab_0x40eff0;
            } else {
                goto lab_0x40fc73;
            }
        } else {
            // 0x40fc68
            v206 = v214;
            v210 = v203;
            v208 = v202;
            goto lab_0x40fc73;
        }
    } else {
        // 0x40efd8
        v205 = v214;
        v212 = 0;
        v211 = v203;
        v209 = v202;
        v207 = -1;
        goto lab_0x40eff0;
    }
  lab_0x40fbfc:
    // 0x40fbfc
    v217 = v218;
    v219 = v220;
    v221 = v222;
    int64_t v223; // 0x40e940
    int64_t v224; // 0x40e940
    int64_t v225; // 0x40e940
    int64_t v226; // 0x40e940
    int32_t v227; // 0x40e940
    int64_t v228; // 0x40e940
    int128_t v229; // 0x40e940
    if (v222 != 0) {
        goto lab_0x40efa0;
    } else {
        // 0x40fc05
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 == 12) {
            // break -> 0x40f390
            goto lab_0x40f390_9;
        }
        // 0x40fc19
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1073, "check_matching");
        v227 = v214;
        v228 = v230;
        v229 = v54;
        v226 = a1;
        v224 = v231;
        v225 = v232;
        v223 = v233;
      lab_0x40fc38_2:
        // 0x40fc38
        v171 = v226;
        v234 = v227;
        v235 = v228;
        v236 = v229;
        v237 = v226;
        v238 = v224;
        v239 = v225;
        v240 = v223;
        goto lab_0x40eeb8;
    }
  lab_0x41004e:
    // 0x41004e
    v50 = v214;
    v52 = v230;
    v48 = v231;
    v46 = v232;
    v44 = 0x100000000 * v241 >> 32;
    v56 = v233;
    goto lab_0x40f18f;
  lab_0x40eff0:
    // 0x40eff0
    v242 = v233;
    v243 = v197;
    v244 = v232;
    v245 = v231;
    v246 = v209;
    v247 = v205;
    v248 = v211;
    v249 = v230;
    int64_t v250; // 0x40edd7
    v251 = v250;
    v252 = v207;
    v253 = v212;
    v254 = v204;
    v255 = v214;
    v256 = v214;
    v257 = v214;
    v258 = v207;
    v259 = v250;
    v260 = v214;
    v261 = v230;
    v262 = v231;
    v263 = v232;
    v264 = v233;
    int64_t v265; // 0x40e940
    int64_t v266; // bp-576, 0x40e940
    int32_t v267; // bp-688, 0x40e940
    int32_t result; // bp-692, 0x40e940
    int64_t v268; // 0x4100de
    int64_t v269; // 0x410153
    int64_t * v270; // 0x410153
    if (v205 < a6) {
        while (true) {
          lab_0x40f079:
            // 0x40f079
            v271 = v256;
            v29 = v255;
            v272 = v254;
            v273 = v253;
            v274 = v252;
            v275 = v251;
            v276 = v249;
            v277 = v248;
            int64_t v278 = v247;
            v279 = v245;
            v280 = v244;
            v281 = v243;
            v282 = v242;
            v283 = v278 + 1;
            if (v2 < a3 == v283 >= v2 || v284 < a3 == v283 >= v284) {
                int32_t v285 = function_4074b0(v72, v278 + 2 & 0xffffffff);
                v28 = v285;
                if (v285 != 0) {
                    // 0x40f988
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    if (v285 != 12) {
                        // 0x41007d
                        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1128, "check_matching");
                        v266 = v282;
                        v268 = *(int64_t *)0x407d8000002340;
                        result = 0;
                        if (v268 == 0) {
                            int64_t v286 = function_4095e0(&result, 0, (int64_t *)"check_matching", 0x407d8000002340, v279, v280); // 0x41059b
                            *(int64_t *)0x656765722f628cac = v286;
                            // 0x410119
                            return result;
                        }
                        // 0x410130
                        v267 = 0;
                        int64_t v287 = function_4095e0(&v267, 0, (int64_t *)"check_matching", 0x407d8000002340, v279, v280); // 0x410143
                        uint32_t result2 = v267; // 0x41014b
                        if (result2 != 0) {
                            // 0x410119
                            return result2;
                        }
                        // 0x410153
                        v269 = v287 + 56;
                        v270 = (int64_t *)v269;
                        int64_t v288 = *v270; // 0x410153
                        if (v288 != 0) {
                            goto lab_0x4101e0;
                        } else {
                            // 0x410165
                            *(int64_t *)(v287 + 64) = 0;
                            *v270 = 0x676e69686374;
                            int64_t * mem3 = malloc(0x4b431ba0); // 0x410179
                            *(int64_t *)(v287 + 72) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x410119
                                return 12;
                            }
                            // 0x410187
                            v267 = 0;
                            v265 = v288;
                            goto lab_0x4101aa;
                        }
                    } else {
                        goto lab_0x40f390_9;
                    }
                }
                int64_t v289 = v29; // 0x40f484
                v290 = v276;
                v291 = v277;
                v292 = v289;
                v293 = v72;
                v294 = v279;
                v295 = v280;
                v296 = v282;
                v297 = v289;
                v298 = v72;
                if ((*(char *)(v281 + 104) & 32) == 0) {
                    goto lab_0x40f0b4;
                } else {
                    goto lab_0x40f4a0;
                }
            } else {
                // 0x40f0a9
                v290 = v276;
                v291 = v277;
                v292 = v278;
                v293 = v246;
                v294 = v279;
                v295 = v280;
                v296 = v282;
                v297 = v278;
                v298 = v246;
                if ((*(char *)(v281 + 104) & 32) != 0) {
                    goto lab_0x40f4a0;
                } else {
                    goto lab_0x40f0b4;
                }
            }
        }
    }
  lab_0x40f17d_6:;
    int64_t v299 = v264;
    int64_t v300 = v263;
    int64_t v301 = v262;
    int64_t v302 = v261;
    int32_t v303 = v260;
    int64_t v304 = v259;
    int64_t v305 = v258;
    v50 = v303;
    v52 = v302;
    v48 = v301;
    v46 = v300;
    v44 = v305;
    v56 = v299;
    if (v304 != 0) {
        int64_t * v306 = (int64_t *)v304; // 0x40f18c
        *v306 = *v306 + (int64_t)v257;
        v50 = v303;
        v52 = v302;
        v48 = v301;
        v46 = v300;
        v44 = v305;
        v56 = v299;
    }
    goto lab_0x40f18f;
  lab_0x40fc73:
    // 0x40fc73
    v205 = v206;
    v212 = 1;
    v211 = v210;
    v209 = v208;
    v207 = v206;
    v50 = v214;
    v52 = v230;
    v48 = v231;
    v46 = v232;
    v44 = v206;
    v56 = v233;
    if (v307 != 0) {
        goto lab_0x40eff0;
    } else {
        goto lab_0x40f18f;
    }
  lab_0x40f7f0:
    // 0x40f7f0
    function_407ca0(&v3);
    v168 = v51;
    v169 = v53;
    v170 = v55;
    v172 = v171;
    v173 = v49;
    v174 = v47;
    v175 = v57;
    goto lab_0x40f800;
  lab_0x40ffa2:
    // 0x40ffa2
    free(mem);
    free((int64_t *)v68);
    v53 = v66;
    v55 = v76;
    v57 = v69;
    if (v58 != 1) {
        // 0x40f390
        v23 = v40;
        v26 = v63 & 0xffffffff;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        goto lab_0x40f390_9;
    }
    goto lab_0x40f7f0;
  lab_0x40ea88:;
    int64_t v308 = v21;
    int64_t v309 = v20;
    int32_t v310 = 1; // 0x40ea99
    if (v11 == 0) {
        // 0x40ee10
        v310 = *(int64_t *)(a1 + 152) != 0;
    }
    // 0x40ea9f
    v311 = *(int64_t *)(a1 + 40);
    v142 = (int64_t *)(a1 + 24);
    int32_t * v312 = (int32_t *)(a1 + 180); // 0x40eab6
    int64_t v313 = v12 + 1; // 0x40eacd
    int64_t v314 = (int64_t)*v312; // 0x40ead6
    int64_t v315 = v313 - v314; // 0x40ead9
    int64_t v316 = v315 < 0 == ((v315 ^ v313) & (v313 ^ v314)) < 0 ? v313 : v314; // 0x40eae4
    int64_t v317 = a3 + 1; // 0x40eae8
    int64_t v318 = v316 - v317; // 0x40eafc
    int64_t v319 = v318 < 0 == ((v318 ^ v316) & (v316 ^ v317)) < 0 == (v318 != 0) ? v317 : v316; // 0x40eb07
    v3 = a2;
    v72 = &v3;
    int64_t v320 = function_406910(v72, v319); // 0x40eb6c
    int64_t v321; // 0x40e940
    int64_t v322; // 0x40e940
    int64_t v323; // 0x40e940
    if ((int32_t)v320 != 0) {
        // 0x40ea9f
        v23 = (int64_t *)(a1 + 152);
        v26 = v320;
        goto lab_0x40f390_9;
    } else {
        // 0x40eb7d
        v307 = v310;
        if ((*v142 & 0x400000 || v311) != 0) {
            goto lab_0x40ebd3;
        } else {
            // 0x40ebb3
            v321 = a2;
            v322 = a2;
            v323 = a3;
            if (*v312 < 2) {
                goto lab_0x40ebd5;
            } else {
                goto lab_0x40ebd3;
            }
        }
    }
  lab_0x40ebd3:
    // 0x40ebd3
    v322 = v321;
    v323 = 0;
    goto lab_0x40ebd5;
  lab_0x40ea6a:
    // 0x40ea6a
    v20 = 0;
    v21 = 0;
    if (a4 != 0 == (a5 != 0)) {
        // 0x40f3b0
        return 1;
    }
    goto lab_0x40ea88;
  lab_0x40ebd5:
    // 0x40ebd5
    v284 = v323;
    v324 = v322;
    v40 = (int64_t *)(a1 + 152);
    int64_t v325 = *v40; // 0x40ec11
    int64_t v326 = 2 * v325; // 0x40ec2b
    int64_t v327; // 0x40e940
    int64_t v328; // 0x40e940
    if (v326 < 1) {
        goto lab_0x40ec8c;
    } else {
        // 0x40ec3b
        v23 = v40;
        v26 = 12;
        if (v326 > 0x666666666666666) {
            goto lab_0x40f390_9;
        } else {
            int32_t v329 = v325;
            int64_t * mem4 = malloc(80 * v329); // 0x40ec56
            int64_t v330 = (int64_t)mem4; // 0x40ec56
            int64_t * mem5 = malloc(16 * v329); // 0x40ec6d
            int64_t v331 = (int64_t)mem5; // 0x40ec6d
            v328 = v330;
            v327 = v331;
            v23 = v40;
            v26 = 12;
            v25 = v330;
            v24 = v331;
            if (mem4 == NULL || mem5 == NULL) {
                goto lab_0x40f390_9;
            } else {
                goto lab_0x40ec8c;
            }
        }
    }
  lab_0x40ec8c:
    // 0x40ec8c
    v42 = v327;
    v41 = v328;
    int64_t v332; // 0x40e940
    if (v11 < 2) {
        // 0x40fb80
        v332 = 0;
        if ((*(char *)(a1 + 176) & 2) != 0) {
            goto lab_0x40ecb6;
        } else {
            goto lab_0x40ecf2;
        }
    } else {
        goto lab_0x40ecb6;
    }
  lab_0x40ecb6:
    // 0x40ecb6
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    if (v2 < 0x1fffffffffffffff) {
        // 0x40ecd1
        g78 = &v266;
        int64_t * mem6 = malloc(8 * (int32_t)v2 + 8); // 0x40ecd9
        int64_t v333 = (int64_t)mem6; // 0x40ecd9
        v332 = v333;
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v333;
        if (mem6 == NULL) {
            goto lab_0x40f390_9;
        } else {
            goto lab_0x40ecf2;
        }
    } else {
        goto lab_0x40f390_9;
    }
  lab_0x40ecf2:
    // 0x40ecf2
    v43 = v332;
    v171 = v309;
    int64_t v334 = v309 - v308; // 0x40ed18
    bool v335 = v334 == 0 | v334 < 0 != ((v334 ^ v309) & (v308 ^ v309)) < 0;
    int32_t v336 = v335; // 0x40ed1b
    v337 = *v312;
    int32_t v338 = 8; // 0x40ed61
    if (v6 != NULL) {
        int32_t v339 = 4; // 0x40ed6b
        if (v337 != 1) {
            // 0x40ed6d
            v339 = 4 * (int32_t)((*v142 & 0x400000 | v311) == 0);
        }
        // 0x40ed90
        v338 = 2 * v336 | (int32_t)(v311 != 0) | v339;
    }
    // 0x40edac
    v178 = v335 ? v309 : v308;
    v179 = v334 < 0 == ((v334 ^ v309) & (v308 ^ v309)) < 0 ? v309 : v308;
    int64_t v340 = v309 - v179; // 0x40edac
    int64_t v341 = v309 - v178; // 0x40edb4
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v340 < 0 == ((v340 ^ v309) & (v179 ^ v309)) < 0 != v340 != 0 && v341 < 0 == ((v341 ^ v309) & (v178 ^ v309)) < 0) {
        int64_t v342 = 0x100000000 * a9 >> 32;
        v193 = v338;
        v250 = v335 ? (int64_t)&v171 : 0;
        v194 = v250 != 0;
        v343 = (int64_t)v6;
        v344 = (char *)(v179 + a2);
        v126 = v342;
        v177 = (int32_t)!((v334 == 0 | v334 < 0 != ((v334 ^ v309) & (v308 ^ v309)) < 0)) + v336;
        v345 = v342 & 0xffffffff;
        v346 = &v28;
        v143 = &v140;
        v347 = (char)v307 ^ 1;
        v73 = (char *)(a1 + 56);
        v74 = (char *)(a1 + 176);
        v75 = &v67;
        v183 = v309;
        v184 = a5;
        v185 = a6;
        v186 = v325;
        while (true) {
          lab_0x40ee08:
            // 0x40ee08
            v348 = v186;
            v349 = v185;
            int64_t v350 = v184;
            v351 = v183;
            v352 = v182;
            v353 = v181;
            v354 = v180;
            v234 = v354;
            v235 = v353;
            v236 = v352;
            v237 = v351;
            v238 = v350;
            v239 = v349;
            v240 = v348;
            v187 = v354;
            v188 = v353;
            v189 = v352;
            v190 = v351;
            v191 = v350;
            v192 = v349;
            switch (g78) {
                case 0: {
                    goto lab_0x40ee40;
                }
                case 1: {
                    goto lab_0x40ee40;
                }
                case 2: {
                    // 0x40f2f8
                    v355 = v351;
                    v356 = v350;
                    if (v179 > v351) {
                        // 0x40f2ff
                        v234 = v354;
                        v235 = v353;
                        v236 = v352;
                        v237 = v351;
                        v238 = v350;
                        v239 = v349;
                        v240 = v348;
                        int64_t v357 = v351; // 0x40f315
                        if (*(char *)((int64_t)*(char *)(v351 + a2) + v343) != 0) {
                            goto lab_0x40eeb8;
                        } else {
                            int64_t v358 = v357 + 1;
                            while (v179 != v358) {
                                // 0x40f330
                                v357 = v358;
                                v227 = v354;
                                v228 = v353;
                                v229 = v352;
                                v226 = v358;
                                v224 = v350;
                                v225 = v349;
                                v223 = v348;
                                if (*(char *)((int64_t)*(char *)(v358 + a2) + v343) != 0) {
                                    goto lab_0x40fc38_2;
                                }
                                v358 = v357 + 1;
                            }
                            // 0x40f34a
                            v171 = v179;
                            v355 = v358;
                            v356 = v350;
                            goto lab_0x40f29c;
                        }
                    } else {
                        goto lab_0x40f29c;
                    }
                }
                case 3: {
                    // 0x40f220
                    v355 = v351;
                    v356 = v350;
                    if (v179 > v351) {
                        unsigned char v359 = *(char *)(v311 + (int64_t)*(char *)(v351 + a2)); // 0x40f238
                        v234 = v354;
                        v235 = v353;
                        v236 = v352;
                        v237 = v351;
                        v238 = v350;
                        v239 = v349;
                        v240 = v348;
                        int64_t v360 = v351; // 0x40f249
                        if (*(char *)((int64_t)v359 + v343) != 0) {
                            goto lab_0x40eeb8;
                        } else {
                            int64_t v361 = v360 + 1;
                            while (v179 != v361) {
                                unsigned char v362 = *(char *)(v311 + (int64_t)*(char *)(v361 + a2)); // 0x40f275
                                v360 = v361;
                                v227 = v354;
                                v228 = v353;
                                v229 = v352;
                                v226 = v361;
                                v224 = a2;
                                v225 = v349;
                                v223 = v348;
                                if (*(char *)((int64_t)v362 + v343) != 0) {
                                    goto lab_0x40fc38_2;
                                }
                                v361 = v360 + 1;
                            }
                            // 0x40f28f
                            v171 = v179;
                            v355 = v361;
                            v356 = a2;
                            goto lab_0x40f29c;
                        }
                    } else {
                        goto lab_0x40f29c;
                    }
                }
                case 4: {
                    goto lab_0x40eeb8;
                }
                default: {
                    goto lab_0x40f83c;
                }
            }
        }
    }
    goto lab_0x40f390_9;
  lab_0x4101e0:;
    int64_t result3 = function_408ae0((int128_t *)"check_matching", v268 + 8, v269); // 0x4101f9
    int32_t v363 = result3; // 0x4101fe
    result = v363;
    if (v363 != 0) {
        // 0x410119
        return result3;
    }
    int64_t v364 = *(int64_t *)((int64_t)"lib/regexec.c" + 48); // 0x410690
    int64_t v365 = 0; // 0x40e940
    goto lab_0x410690_2;
  lab_0x410690_2:;
    int64_t v366 = 40 * *(int64_t *)(8 * v365 + v364); // 0x4106a1
    if (*(int64_t *)(v366 + 0x407d8000000010) < 1128) {
        // 0x4106af
        if (*(int64_t *)(v366 + 0x407d8000000008) >= 1128) {
            // 0x4106b9
            abort();
            // UNREACHABLE
        }
        goto lab_0x41074d;
    } else {
        goto lab_0x41074d;
    }
  lab_0x4101aa:;
    int64_t v367 = *(int64_t *)(8 * v265 + 0x61666e5f6b6e696c); // 0x4101b1
    int64_t v368 = *(int64_t *)56; // 0x4101b9
    int32_t v369 = function_408570(v270, (int128_t *)(v368 + 24 * v367)); // 0x4101c7
    v267 = v369;
    if (v369 != 0) {
        // 0x410119
        return 12;
    }
    int64_t v370 = v265 + 1; // 0x4101a0
    v265 = v370;
    if (v370 > 0x676e69686373) {
        goto lab_0x4101e0;
    } else {
        goto lab_0x4101aa;
    }
  lab_0x41074d:;
    int64_t v371 = v365 + 1; // 0x41074d
    v365 = v371;
    if (v371 >= *(int64_t *)((int64_t)"lib/regexec.c" + 40)) {
        // 0x41075b
        result = 0;
        int64_t v372 = function_4095e0(&result, 0, (int64_t *)"check_matching", 0x407d8000000000, v279, v280); // 0x410228
        *(int64_t *)0x656765722f628cac = v372;
        uint32_t v373 = result; // 0x410231
        // 0x410119
        return v373 != 0 ? (int64_t)v373 : 0;
    }
    goto lab_0x410690_2;
  lab_0x40fd50:
    // 0x40fd50
    *(int64_t *)(v162 + 8) = -1;
    int64_t v374 = v162 + 16; // 0x40fd54
    *(int64_t *)v162 = -1;
    v162 = v374;
    int64_t v375; // 0x40e940
    int64_t * v376; // 0x40fd71
    if (v165 != v374) {
        goto lab_0x40fd50;
    } else {
        // 0x40fd61
        v376 = (int64_t *)a8;
        *v376 = 0;
        *(int64_t *)(a8 + 8) = v65;
        v163 = 0;
        if (v11 == 1 | (*v73 & 16) != 0) {
            goto lab_0x40fdf2;
        } else {
            // 0x40fda2
            v375 = 0;
            if (*v74 % 2 == 0) {
                goto lab_0x40fdc2;
            } else {
                int64_t v377 = *v40; // 0x40fdb6
                v375 = v377 >= 0 == (v377 != 0);
                goto lab_0x40fdc2;
            }
        }
    }
  lab_0x40fdf2:;
    int64_t v378 = a8; // 0x40fe2d
    int64_t v379 = 0; // 0x40fe2d
    int64_t v380 = v163; // 0x40fe2d
    goto lab_0x40fe33;
  lab_0x40fe33:;
    int64_t v381 = v380;
    int64_t v382 = v378;
    int64_t * v383; // 0x40e940
    int64_t v384; // 0x40e940
    int64_t v385; // 0x40e940
    int64_t * v386; // 0x40fe39
    int64_t v387; // 0x40fe39
    int64_t v388; // 0x41005b
    if (v381 == -1) {
        goto lab_0x40fe53;
    } else {
        // 0x40fe39
        v386 = (int64_t *)(v382 + 8);
        v387 = *v386;
        char v389; // 0x40e940
        if (v389 != 0) {
            // 0x410056
            v388 = v284;
            if (v284 == v381) {
                goto lab_0x41005f;
            } else {
                // 0x41005b
                v388 = *(int64_t *)(8 * v381 + v1);
                goto lab_0x41005f;
            }
        } else {
            // 0x40fe39
            v383 = (int64_t *)v382;
            v384 = v381;
            v385 = v387;
            goto lab_0x40fe46;
        }
    }
  lab_0x40fe53:;
    int64_t v390 = v379 + 1; // 0x40fe53
    if (v390 != v11) {
        int64_t v391 = v382 + 16; // 0x40fe57
        v378 = v391;
        v379 = v390;
        v380 = *(int64_t *)v391;
        goto lab_0x40fe33;
    } else {
        if (v10 < 1) {
            goto lab_0x40feb8;
        } else {
            // 0x40fe6b
            goto lab_0x40fea8;
        }
    }
  lab_0x40fdc2:;
    int64_t v392 = function_40d160(a1, &v3, v11, a8, v375); // 0x40fdda
    v23 = v40;
    v26 = v392;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    if ((int32_t)v392 != 0) {
        goto lab_0x40f390_9;
    } else {
        // 0x40fde7
        v163 = *v376;
        goto lab_0x40fdf2;
    }
  lab_0x40feb8:;
    int64_t v393 = *(int64_t *)(a1 + 224); // 0x40fec5
    v23 = v40;
    v26 = v161;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v394; // 0x40e940
    int64_t v395; // 0x40fedd
    int64_t v396; // 0x40e940
    if (v393 == 0) {
        goto lab_0x40f390_9;
    } else {
        // 0x40fed5
        v395 = v11 - 1;
        v23 = v40;
        v26 = v161;
        v25 = v41;
        v24 = v42;
        v22 = v64;
        if (v395 != 0) {
            // 0x40fee8
            v396 = a8 + 24;
            v394 = 0;
            goto lab_0x40fee8_2;
        } else {
            goto lab_0x40f390_9;
        }
    }
  lab_0x41005f:;
    int64_t v397 = v388;
    int64_t * v398 = (int64_t *)v382;
    *v398 = v397;
    v383 = v398;
    v384 = v397;
    v385 = v284;
    if (v284 == v387) {
        goto lab_0x40fe46;
    } else {
        // 0x410067
        v383 = v398;
        v384 = v397;
        v385 = *(int64_t *)(8 * v387 + v1);
        goto lab_0x40fe46;
    }
  lab_0x40fe46:
    // 0x40fe46
    *v383 = v384 + v171;
    *v386 = v385 + v171;
    goto lab_0x40fe53;
  lab_0x40fea8:
    // 0x40fea8
    *(int64_t *)v165 = -1;
    *(int64_t *)(v165 + 8) = -1;
    if (16 * (v11 + v10) + a8 != v165 + 16) {
        goto lab_0x40fea8;
    } else {
        goto lab_0x40feb8;
    }
  lab_0x40fee8_2:;
    int64_t v399 = v394;
    int64_t * v400 = (int64_t *)(8 * v399 + v393); // 0x40fee8
    int64_t v401 = *v400; // 0x40fee8
    if (v401 == v399) {
        goto lab_0x40ff37;
    } else {
        int64_t v402 = 16 * v399; // 0x40ff10
        *(int64_t *)(v402 + v164) = *(int64_t *)(16 * v401 + v164);
        *(int64_t *)(v402 + v396) = *(int64_t *)(16 * *v400 + v396);
        goto lab_0x40ff37;
    }
  lab_0x40ff37:;
    int64_t v403 = v399 + 1; // 0x40ff37
    v23 = v40;
    v26 = v161;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    v394 = v403;
    if (v403 != v395) {
        goto lab_0x40fee8_2;
    } else {
        goto lab_0x40f390_9;
    }
}
// Address range: 0x4108d0 - 0x410aed
int64_t function_4108d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)(a2 + 144); // 0x4108e6
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x4108ed
    if (*v1 != 1) {
        int64_t v3 = function_407fe0(a2, a2); // 0x4108f9
        if ((int32_t)v3 > 1) {
            // 0x410948
            *(int32_t *)a1 = 1;
            *(int32_t *)(a1 + 8) = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * a2);
            *v2 = (0x100000000 * v3 >> 32) + a2;
            return 0;
        }
    }
    char * v4 = (char *)(a3 + 8); // 0x410903
    char v5 = *v4; // 0x410903
    int64_t v6 = a2 + (0x100000000 * a4 >> 32); // 0x410907
    *v2 = v6;
    int64_t v7; // 0x4108d0
    int64_t v8; // 0x4108d0
    char v9; // 0x4108d0
    int64_t v10; // 0x4108d0
    int64_t v11; // 0x4108d0
    char v12; // 0x4108d0
    int64_t v13; // 0x4108d0
    int64_t v14; // 0x4108d0
    int64_t v15; // 0x4108d0
    int64_t v16; // 0x4108d0
    int64_t * v17; // 0x410970
    int64_t * v18; // 0x4108d0
    int64_t * v19; // 0x4108d0
    int64_t * v20; // 0x4108d0
    switch (v5) {
        case 30: {
        }
        case 28: {
        }
        case 26: {
            // 0x410970
            v17 = (int64_t *)(a2 + 104);
            if (v6 >= *v17) {
                // 0x410938
                return 7;
            }
            // 0x41097a
            v18 = (int64_t *)(a2 + 40);
            v19 = (int64_t *)(a2 + 8);
            v20 = (int64_t *)(a1 + 8);
            v12 = v5;
            v14 = a2;
            v10 = 0;
            v7 = v6;
            while (true) {
              lab_0x4109a2:
                // 0x4109a2
                v8 = v7;
                v11 = v10;
                v15 = v14;
                if (v12 == 30) {
                    // 0x410a20
                    if (*(char *)(a2 + 139) == 0) {
                        goto lab_0x4109a9;
                    } else {
                        // 0x410a2e
                        if (*(char *)(a2 + 140) == 0) {
                            int64_t v21 = v8 + 1; // 0x410a98
                            *v2 = v21;
                            v13 = v21;
                            v16 = v15;
                            v9 = *(char *)(v8 + v15 + *v18);
                            goto lab_0x4109ba;
                        } else {
                            // 0x410a38
                            if (v8 == *(int64_t *)(a2 + 48)) {
                                goto lab_0x410a4d;
                            } else {
                                // 0x410a3e
                                if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v8) == -1) {
                                    goto lab_0x4109a9;
                                } else {
                                    goto lab_0x410a4d;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x4109a9;
                }
            }
          lab_0x410938_3:
            // 0x410938
            return 0;
        }
    }
    if ((char)a6 == 0 == v5 == 22) {
        // 0x410ab0
        int64_t v22; // bp-56, 0x4108d0
        function_406540(&v22, a2, a5);
        char v23; // 0x4108d0
        if (v23 != 21) {
            // 0x410938
            return 11;
        }
    }
    // 0x410929
    *(int32_t *)a1 = 0;
    int64_t v24; // 0x4108d0
    *(char *)(a1 + 8) = *(char *)&v24;
    // 0x410938
    return 0;
  lab_0x4109a9:;
    int64_t v25 = v8 + 1; // 0x4109ad
    *v2 = v25;
    v13 = v25;
    v16 = v15;
    v9 = *(char *)(*v19 + v8);
    goto lab_0x4109ba;
  lab_0x4109ba:;
    uint64_t v26 = v13;
    if (*v17 <= v26) {
        // break -> 0x410938
        goto lab_0x410938_3;
    }
    // 0x4109c0
    if (*(char *)&v24 == v9) {
        // 0x4109c5
        if (*(char *)(*v19 + v26) == 93) {
            // 0x4109cf
            *v2 = v26 + 1;
            *(char *)(*v20 + (0x100000000 * v11 >> 32)) = 0;
            unsigned char v27 = *v4; // 0x4109e0
            v24 = v27;
            switch (v27) {
                case 28: {
                    // 0x410ae0
                    *(int32_t *)a1 = 2;
                    goto lab_0x410938_3;
                }
                case 30: {
                    // 0x410ad3
                    *(int32_t *)a1 = 4;
                    goto lab_0x410938_3;
                }
                default: {
                    // 0x4109f6
                    if (v27 != 26) {
                        goto lab_0x410938_3;
                    } else {
                        // 0x410a01
                        *(int32_t *)a1 = 3;
                        goto lab_0x410938_3;
                    }
                }
            }
        }
    }
    // 0x410988
    *(char *)(*v20 + v11) = v9;
    if (v11 == 31) {
        // break -> 0x410938
        goto lab_0x410938_3;
    }
    // 0x41099a
    v12 = *v4;
    v14 = v16;
    v10 = v11 + 1;
    v7 = *v2;
    goto lab_0x4109a2;
  lab_0x410a4d:;
    int64_t v28 = *(int64_t *)(a2 + 24); // 0x410a4d
    char v29 = *(char *)(*(int64_t *)(v28 + 8 * v8) + v15 + *v18); // 0x410a5c
    if (v29 <= -1) {
        goto lab_0x4109a9;
    } else {
        int64_t v30 = 1; // 0x410a77
        int64_t v31 = v15; // 0x410a77
        if (*v1 != 1) {
            // 0x410a79
            v30 = 0x100000000 * function_407fe0(a2, v8) >> 32;
            v31 = v8;
        }
        int64_t v32 = v30 + v8; // 0x410a86
        *v2 = v32;
        v13 = v32;
        v16 = v31;
        v9 = v29;
        goto lab_0x4109ba;
    }
}
// Address range: 0x410af0 - 0x411193
int64_t function_410af0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x410afe
    uint64_t v3 = *v2; // 0x410afe
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x410c18
        *(char *)(v1 + 8) = 2;
        // 0x410c1e
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x410b0f
    char * v5 = (char *)(v1 + 10); // 0x410b13
    int32_t v6 = *(int32_t *)(a2 + 144); // 0x410b1b
    int64_t v7 = v4 + v3;
    unsigned char v8 = *(char *)v7; // 0x410b24
    char v9 = *v5 & -97;
    *v5 = v9;
    *(char *)a1 = v8;
    char v10; // 0x410af0
    if (v6 < 2) {
        if (v8 == 92) {
            goto lab_0x410bf0;
        } else {
            // 0x410bb6
            *(char *)(v1 + 8) = 1;
            uint16_t v11 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)*__ctype_b_loc()); // 0x410bcb
            v10 = 64 * ((char)(v11 / 8) % 2 | (char)(v8 == 95)) | v9;
            goto lab_0x410b95;
        }
    } else {
        // 0x410b39
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x410b3f
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                int32_t * v12 = (int32_t *)(v1 + 8); // 0x410ca0
                *v12 = *v12 & -0x200100 | 0x200001;
                // 0x410c1e
                return 1;
            }
        }
        if (v8 == 92) {
            goto lab_0x410bf0;
        } else {
            // 0x410b58
            *(char *)(v1 + 8) = 1;
            int32_t wc = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3); // 0x410b65
            v10 = 64 * (char)(wc == 95 | iswalnum(wc) != 0) | *v5 & -65;
            goto lab_0x410b95;
        }
    }
  lab_0x410bf0:;
    uint64_t v13 = v3 + 1;
    if (v13 >= *(int64_t *)(a2 + 88)) {
        // 0x410bfb
        *(char *)(v1 + 8) = 36;
        return 1;
    }
    // 0x410c30
    char v14; // 0x410af0
    int32_t v15; // 0x4110f7
    if (*(char *)(a2 + 139) != 0) {
        if (v6 < 2) {
            goto lab_0x411112;
        } else {
            int64_t v16 = *(int64_t *)(a2 + 16) + 4 * v13;
            v15 = *(int32_t *)v16;
            if (v15 == -1) {
                goto lab_0x41117b;
            } else {
                // 0x4110ff
                if (*(int64_t *)(a2 + 48) == v3 + 2) {
                    goto lab_0x411112;
                } else {
                    // 0x41110a
                    if (*(int32_t *)(v16 + 4) == -1) {
                        goto lab_0x41117b;
                    } else {
                        goto lab_0x411112;
                    }
                }
            }
        }
    } else {
        // 0x410c3e
        v14 = *(char *)(v4 + v13);
        goto lab_0x410c4b;
    }
  lab_0x410b95:
    // 0x410b95
    *v5 = v10;
    g74 = v8 - 10;
    switch (v8) {
        case 10: {
            // 0x410e28
            if ((a3 & 2048) == 0) {
                // 0x410c1e
                return 1;
            }
            // 0x410e3a
            *(char *)(v1 + 8) = 10;
            // 0x410c1e
            return 1;
        }
        case 36: {
            if ((a3 & 8) != 0) {
                // 0x410e90
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x410c1e
                return 1;
            }
            int64_t v17 = v3 + 1; // 0x410e56
            if (v17 == *(int64_t *)(a2 + 88)) {
                // 0x410e90
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x410c1e
                return 1;
            }
            // 0x410e60
            *v2 = v17;
            int64_t v18; // bp-72, 0x410af0
            function_410af0(&v18, a2, a3);
            *v2 = *v2 - 1;
            char v19; // 0x410af0
            if (v19 < 11) {
                // 0x410e90
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x410c1e
                return 1;
            }
            // break -> 0x410c1e
            break;
        }
        case 40: {
            // 0x410cf8
            if ((a3 & 0x2000) == 0) {
                // 0x410c1e
                return 1;
            }
            // 0x410d0a
            *(char *)(v1 + 8) = 8;
            // 0x410c1e
            return 1;
        }
        case 41: {
            // 0x410d18
            if ((a3 & 0x2000) == 0) {
                // 0x410c1e
                return 1;
            }
            // 0x410d2a
            *(char *)(v1 + 8) = 9;
            // 0x410c1e
            return 1;
        }
        case 42: {
            // 0x410d38
            *(char *)(v1 + 8) = 11;
            // 0x410c1e
            return 1;
        }
        case 43: {
            // 0x410d50
            if ((a3 & 1026) != 0) {
                // 0x410c1e
                return 1;
            }
            // 0x410d62
            *(char *)(v1 + 8) = 18;
            // 0x410c1e
            return 1;
        }
        case 46: {
            // 0x410d70
            *(char *)(v1 + 8) = 5;
            // 0x410c1e
            return 1;
        }
        case 63: {
            // 0x410d80
            if ((a3 & 1026) != 0) {
                // 0x410c1e
                return 1;
            }
            // 0x410d92
            *(char *)(v1 + 8) = 19;
            // 0x410c1e
            return 1;
        }
        case 91: {
            // 0x410da0
            *(char *)(v1 + 8) = 20;
            // 0x410c1e
            return 1;
        }
        case 94: {
            if ((a3 & 0x800008) == 0 == (v3 != 0)) {
                // 0x41114a
                if ((a3 & 2048) == 0 | *(char *)(v7 - 1) != 10) {
                    // 0x410c1e
                    return 1;
                }
            }
            // 0x410dc2
            *(char *)(v1 + 8) = 12;
            *(int32_t *)a1 = 16;
            // 0x410c1e
            return 1;
        }
        case 123: {
            // 0x410de0
            if ((a3 & 0x1200) != 0x1200) {
                // 0x410c1e
                return 1;
            }
            // 0x410df9
            *(char *)(v1 + 8) = 23;
            // 0x410c1e
            return 1;
        }
        case 124: {
            // 0x410e08
            if ((a3 & 0x8400) != 0x8000) {
                // 0x410c1e
                return 1;
            }
            // 0x410e3a
            *(char *)(v1 + 8) = 10;
            // 0x410c1e
            return 1;
        }
        case 125: {
            // 0x410ea8
            if ((a3 & 0x1200) != 0x1200) {
                // 0x410c1e
                return 1;
            }
            // 0x410ec1
            *(char *)(v1 + 8) = 24;
            // 0x410c1e
            return 1;
        }
    }
    // 0x410c1e
    return 1;
  lab_0x411112:;
    int64_t v20 = *(int64_t *)(a2 + 40); // 0x41111e
    if (*(char *)(a2 + 140) == 0) {
        // 0x411168
        v14 = *(char *)(v20 + a2 + v13);
        goto lab_0x410c4b;
    } else {
        int64_t v21 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v13); // 0x41112b
        char v22 = *(char *)(v20 + a2 + v21); // 0x41112f
        v14 = v22;
        if (v22 > -1) {
            goto lab_0x410c4b;
        } else {
            // 0x410c3e
            v14 = *(char *)(v4 + v13);
            goto lab_0x410c4b;
        }
    }
  lab_0x410c4b:;
    int64_t v23 = v14;
    int32_t v24 = v14;
    *(char *)a1 = v14;
    *(char *)(v1 + 8) = 1;
    int64_t v25; // 0x410af0
    int64_t v26; // 0x410af0
    int32_t wc2; // 0x410af0
    int32_t v27; // 0x410af0
    int32_t v28; // 0x410af0
    char v29; // 0x410af0
    if (v6 < 2) {
        uint16_t v30 = *(int16_t *)(2 * v23 + (int64_t)*__ctype_b_loc()); // 0x410ccc
        char v31 = *v5; // 0x410ce0
        v29 = 64 * ((char)(v30 / 8) % 2 | (char)(v14 == 95)) | v31 & -65;
        v28 = v24;
        v26 = v23;
        goto lab_0x410c83;
    } else {
        // 0x410c57
        v27 = v24;
        wc2 = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v13);
        v25 = v23;
        goto lab_0x410c5e;
    }
  lab_0x41117b:;
    unsigned char v32 = *(char *)(v4 + v13); // 0x41117b
    *(char *)(v1 + 8) = 1;
    *(char *)a1 = v32;
    v27 = v32;
    wc2 = v15;
    v25 = v32;
    goto lab_0x410c5e;
  lab_0x410c5e:;
    int32_t v33 = iswalnum(wc2); // 0x410c60
    v29 = 64 * (char)(wc2 == 95 | v33 != 0) | *v5 & -65;
    v28 = v27;
    v26 = v25;
    goto lab_0x410c83;
  lab_0x410c83:
    // 0x410c83
    *v5 = v29;
    uint64_t v34 = v26 + 0xffffffd9; // 0x410c83
    g75 = v34 % 256;
    switch ((char)v34) {
        case 0: {
            // 0x4110bb
            if ((a3 & 0x80000) == 0) {
                // 0x4110cd
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 128;
            }
            // 0x410c1e
            return 2;
        }
        case 1: {
            // 0x4110a4
            if ((a3 & 0x2000) != 0) {
                // 0x410c1e
                return 2;
            }
            // 0x410d0a
            *(char *)(v1 + 8) = 8;
            // 0x410c1e
            return 2;
        }
        case 2: {
            // 0x41108d
            if ((a3 & 0x2000) != 0) {
                // 0x410c1e
                return 2;
            }
            // 0x410d2a
            *(char *)(v1 + 8) = 9;
            // 0x410c1e
            return 2;
        }
        case 4: {
            // 0x411072
            if ((a3 & 1026) != 2) {
                // 0x410c1e
                return 2;
            }
            // 0x410d62
            *(char *)(v1 + 8) = 18;
            // 0x410c1e
            return 2;
        }
        case 10: {
        }
        case 11: {
        }
        case 12: {
        }
        case 13: {
        }
        case 14: {
        }
        case 15: {
        }
        case 16: {
        }
        case 17: {
        }
        case 18: {
            // 0x41104a
            if ((a3 & 0x4000) == 0) {
                // 0x41105c
                *(char *)(v1 + 8) = 4;
                *a1 = (int64_t)(v28 - 49);
            }
            // 0x410c1e
            return 2;
        }
        case 21: {
            // 0x411029
            if ((a3 & 0x80000) == 0) {
                // 0x41103b
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 6;
            }
            // 0x410c1e
            return 2;
        }
        case 23: {
            // 0x411008
            if ((a3 & 0x80000) == 0) {
                // 0x41101a
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 9;
            }
            // 0x410c1e
            return 2;
        }
        case 24: {
            // 0x410fed
            if ((a3 & 1026) != 2) {
                // 0x410c1e
                return 2;
            }
            // 0x410d92
            *(char *)(v1 + 8) = 19;
            // 0x410c1e
            return 2;
        }
        case 27: {
            // 0x410fcc
            if ((a3 & 0x80000) == 0) {
                // 0x410fde
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 512;
            }
            // 0x410c1e
            return 2;
        }
        case 44: {
            // 0x410fb1
            if ((a3 & 0x80000) == 0) {
                // 0x410fc3
                *(char *)(v1 + 8) = 35;
            }
            // 0x410c1e
            return 2;
        }
        case 48: {
            // 0x410f96
            if ((a3 & 0x80000) == 0) {
                // 0x410fa8
                *(char *)(v1 + 8) = 33;
            }
            // 0x410c1e
            return 2;
        }
        case 57: {
            // 0x410f75
            if ((a3 & 0x80000) == 0) {
                // 0x410f87
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 64;
            }
            // 0x410c1e
            return 2;
        }
        case 59: {
            // 0x410f54
            if ((a3 & 0x80000) == 0) {
                // 0x410f66
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 256;
            }
            // 0x410c1e
            return 2;
        }
        case 76: {
            // 0x410f39
            if ((a3 & 0x80000) == 0) {
                // 0x410f4b
                *(char *)(v1 + 8) = 34;
            }
            // 0x410c1e
            return 2;
        }
        case 80: {
            // 0x410f1e
            if ((a3 & 0x80000) == 0) {
                // 0x410f30
                *(char *)(v1 + 8) = 32;
            }
            // 0x410c1e
            return 2;
        }
        case 84: {
            // 0x410f00
            if ((a3 & 0x1200) != 512) {
                // 0x410c1e
                return 2;
            }
            // 0x410df9
            *(char *)(v1 + 8) = 23;
            // 0x410c1e
            return 2;
        }
        case 85: {
            // 0x410ee5
            if ((a3 & 0x8400) == 0) {
                // 0x410ef7
                *(char *)(v1 + 8) = 10;
            }
            // 0x410c1e
            return 2;
        }
        case 86: {
            // 0x410eca
            if ((a3 & 0x1200) != 512) {
                // 0x410c1e
                return 2;
            }
            // 0x410ec1
            *(char *)(v1 + 8) = 24;
            // 0x410c1e
            return 2;
        }
    }
    // 0x410c1e
    return 2;
}
// Address range: 0x4111a0 - 0x411256
int64_t function_4111a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 72);
    int64_t result2 = -1;
    *v1 = (0x100000000 * function_410af0((int64_t *)a2, a1, a3) >> 32) + *v1;
    char v2 = *(char *)(a2 + 8); // 0x4111d9
    int64_t result = result2; // 0x4111a0
    switch (v2) {
        case 2: {
            // 0x411237
            return -2;
        }
        case 24: {
            // 0x411237
            return result;
        }
    }
    // 0x4111e6
    int64_t v3; // 0x4111a0
    unsigned char v4 = (char)v3; // 0x4111ce
    while (v4 != 44) {
        int64_t v5 = -2; // 0x4111ed
        if (v2 == 1) {
            // 0x4111f8
            v5 = -2;
            if (result2 != -2 && v4 <= 57) {
                int64_t v6 = v4; // 0x4111ce
                if (result2 == -1) {
                    // 0x411248
                    v5 = v6 - 48;
                } else {
                    int64_t v7 = 10 * result2 + v6; // 0x41120f
                    int64_t v8 = v7 - 0x8030; // 0x411218
                    v5 = v8 < 0 == (0x802f - v7 & v7) < 0 == (v8 != 0) ? 0x8000 : v7 - 48;
                }
            }
        }
        // 0x4111c0
        result2 = v5;
        *v1 = (0x100000000 * function_410af0((int64_t *)a2, a1, a3) >> 32) + *v1;
        v2 = *(char *)(a2 + 8);
        result = result2;
        switch (v2) {
            case 2: {
                // 0x411237
                return -2;
            }
            case 24: {
                // 0x411237
                return result;
            }
        }
        // 0x4111e6
        int64_t v9; // 0x4111a0
        v4 = *(char *)&v9;
    }
    // 0x411237
    return result2;
}
// Address range: 0x411260 - 0x412744
int64_t function_411260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x411260
    int128_t v1; // 0x411260
    int128_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a3;
    int64_t v5; // bp-280, 0x411260
    int64_t v6 = &v5; // 0x41126a
    unsigned char v7 = *(char *)(a3 + 8); // 0x411279
    int64_t v8 = v7; // 0x411279
    int64_t v9 = v4; // 0x411285
    v4 = v8;
    g76 = v8;
    int32_t v10 = v7;
    int64_t * v11; // 0x411260
    int32_t v12; // 0x411260
    int64_t v13; // 0x411260
    int64_t v14; // bp-88, 0x411260
    int64_t v15; // 0x411260
    int64_t v16; // 0x411fbb
    char v17; // 0x411fc2
    int64_t * mem2; // 0x4119a9
    int64_t v18; // 0x4119a9
    int64_t * v19; // 0x4119d0
    char * v20; // 0x4119d7
    switch (v7) {
        case 1: {
            int64_t v21 = a2 + 112; // 0x411b27
            int64_t v22 = a2 + 128; // 0x411b2b
            int64_t v23 = function_408ca0(v21, v22, 0, 0, v9); // 0x411b38
            if (v23 == 0) {
                // 0x411bf1
                *(int32_t *)a6 = 12;
                // 0x4113d8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            // 0x411b4b
            if (*(int32_t *)(a2 + 180) >= 2) {
                int64_t * v24 = (int64_t *)(a1 + 72); // 0x411b68
                int64_t v25 = &v14;
                int64_t v26 = 0x100000000 * v23 >> 32; // 0x411bd5
                uint64_t v27 = *v24; // 0x411b68
                while (*(int64_t *)(a1 + 104) > v27) {
                    // 0x411b76
                    if (v27 == *(int64_t *)(a1 + 48)) {
                        // break -> 0x411300
                        break;
                    }
                    // 0x411b80
                    if (*(int32_t *)(*(int64_t *)(a1 + 16) + 4 * v27) != -1) {
                        // break -> 0x411300
                        break;
                    }
                    // 0x411b8e
                    *v24 = (0x100000000 * function_410af0((int64_t *)v9, a1, a4) >> 32) + *v24;
                    int64_t v28 = function_408ca0(v21, v22, 0, 0, v9); // 0x411bb1
                    v26 = function_408ca0(v21, v22, (int32_t)v26, (int32_t)v28, v25);
                    if (v28 == 0 || v26 == 0) {
                        // 0x411bf1
                        *(int32_t *)a6 = 12;
                        // 0x4113d8
                        *(int64_t *)(v6 + 24) = 0;
                        // 0x41132a
                        return *(int64_t *)(v6 + 24);
                    }
                    v27 = *v24;
                }
            }
            goto lab_0x411300;
        }
        case 4: {
            int64_t v29 = 1 << v10 % 32; // 0x411c11
            if ((*(int64_t *)(a2 + 168) & v29) == 0) {
                // 0x41228c
                *(int32_t *)a6 = 6;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v30 = (int64_t *)(a2 + 160); // 0x411c2c
            *v30 = *v30 | v29;
            if (function_408ca0(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x411bf1
                *(int32_t *)a6 = 12;
                // 0x4113d8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v31 = (int64_t *)(a2 + 152); // 0x411c4d
            *v31 = *v31 + 1;
            char * v32 = (char *)(a2 + 176); // 0x411c55
            *v32 = *v32 | 2;
            goto lab_0x411300;
        }
        case 5: {
            // 0x411c61
            if (function_408ca0(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x411bf1
                *(int32_t *)a6 = 12;
                // 0x4113d8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            // 0x411c8b
            if (*(int32_t *)(a2 + 180) >= 2) {
                char * v33 = (char *)(a2 + 176); // 0x411c98
                *v33 = *v33 | 2;
            }
            goto lab_0x411300;
        }
        case 8: {
            int64_t * v34 = (int64_t *)(a2 + 48); // 0x411341
            uint64_t v35 = *v34; // 0x411341
            v5 = a5;
            *v34 = v35 + 1;
            int64_t v36 = function_410af0((int64_t *)v9, a1, a4 | 0x800000); // 0x411366
            int64_t * v37 = (int64_t *)(a1 + 72); // 0x41136d
            *v37 = (0x100000000 * v36 >> 32) + *v37;
            char * v38 = (char *)(v9 + 8); // 0x411373
            int64_t v39 = 0; // 0x411379
            if (*v38 != 9) {
                // 0x41137f
                v4 = v9;
                int64_t v40 = function_412890(a1, a2, v9, a4, v5 + 1, a6); // 0x41139b
                if (*(int32_t *)&v3 != 0) {
                    // 0x4113d8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x41132a
                    return *(int64_t *)(v6 + 24);
                }
                // 0x4113a9
                v39 = v40;
                if (*v38 != 9) {
                    if (v40 != 0) {
                        // 0x4113ba
                        function_4064d0(v40, 0x4076e0, 0);
                    }
                    // 0x4113c9
                    *(int32_t *)a6 = 8;
                  lab_0x4113d8:
                    // 0x4113d8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x41132a
                    return *(int64_t *)(v6 + 24);
                }
            }
            // 0x411e02
            if (v35 < 9) {
                int32_t v41 = 1 << (int32_t)v35 % 32;
                v4 = v41;
                int64_t * v42 = (int64_t *)(a2 + 168); // 0x411e5a
                *v42 = *v42 | (int64_t)v41;
            }
            int64_t v43 = function_408ca0(a2 + 112, a2 + 128, (int32_t)v39, 0, (int64_t)&v14); // 0x411e2d
            if (v43 == 0) {
                // 0x411bf1
                *(int32_t *)a6 = 12;
                // 0x4113d8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            // 0x411e40
            *(int64_t *)(v43 + 40) = v35;
            goto lab_0x411300;
        }
        case 9: {
            if ((a4 & 0x20000) == 0) {
                // 0x411de9
                *(int32_t *)a6 = 16;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x4112d0;
        }
        case 11: {
            goto lab_0x4112b1;
        }
        case 12: {
            char * v44 = (char *)(a2 + 176); // 0x411cb6
            unsigned char v45 = *v44; // 0x411cb6
            if ((v45 & 16) != 0) {
                // 0x411d10
            } else {
                int64_t v46 = v45; // 0x411cb6
                *v44 = v45 | 16;
                v13 = 0;
                v15 = 0;
                if ((v46 & 8) != 0) {
                    goto lab_0x412505;
                } else {
                    // 0x411cd7
                    *(int64_t *)(a2 + 184) = 0x3ff000000000000;
                    *(int64_t *)(a2 + 192) = 0x7fffffe87fffffe;
                    v13 = 128;
                    v15 = 2;
                    if ((v46 & 4) == 0) {
                        goto lab_0x412505;
                    } else {
                        // 0x411d01
                        __asm_movups(*(int128_t *)(a2 + 200), __asm_pxor(v2, v2));
                        v12 = *(int32_t *)&v4;
                        goto lab_0x411d10_2;
                    }
                }
            }
        }
        case 18: {
            goto lab_0x4112b1;
        }
        case 19: {
            goto lab_0x4112b1;
        }
        case 20: {
            int64_t * mem = calloc(32, 1); // 0x411993
            v5 = (int64_t)mem;
            mem2 = calloc(80, 1);
            if (mem == NULL || mem2 == NULL) {
                // 0x412276
                free((int64_t *)v5);
                free(mem2);
                // 0x411bf1
                *(int32_t *)a6 = 12;
                // 0x4113d8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            // 0x4119c5
            v18 = (int64_t)mem2;
            v19 = (int64_t *)v9;
            int64_t v47 = function_406540(v19, a1, a4); // 0x4119d0
            v20 = (char *)(v9 + 8);
            char v48 = *v20; // 0x4119d7
            v17 = v48;
            v16 = v47;
            switch (v48) {
                case 2: {
                    // 0x41224a
                    *(int32_t *)a6 = 2;
                    v11 = (int64_t *)(v6 + 48);
                    goto lab_0x411f1b_3;
                }
                case 25: {
                    char * v49 = (char *)(v18 + 32); // 0x411f8e
                    *v49 = *v49 | 1;
                    if ((a4 & 256) != 0) {
                        int64_t * v50 = (int64_t *)v5; // 0x411fa2
                        *v50 = *v50 | 1024;
                    }
                    int64_t * v51 = (int64_t *)(a1 + 72); // 0x411fac
                    *v51 = *v51 + (0x100000000 * v47 >> 32);
                    v16 = function_406540(v19, a1, a4);
                    v17 = *v20;
                    if (v17 == 2) {
                        // 0x41224a
                        *(int32_t *)a6 = 2;
                        v11 = (int64_t *)(v6 + 48);
                        goto lab_0x411f1b_3;
                    } else {
                        goto lab_0x4119f2;
                    }
                }
                default: {
                    goto lab_0x4119f2;
                }
            }
        }
        case 23: {
            if ((a4 & 0x1000000) != 0) {
              lab_0x4115d5:
                // 0x4115d5
                *(int64_t *)(v6 + 24) = 0;
                *(int32_t *)*(int64_t *)(v6 + 48) = 13;
                // 0x41132a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x4112b1;
        }
        case 24: {
            goto lab_0x4112d0;
        }
        case 32: {
            goto lab_0x411a94;
        }
        case 33: {
            goto lab_0x411a94;
        }
        case 34: {
            goto lab_0x411ae0;
        }
        case 35: {
            goto lab_0x411ae0;
        }
        case 36: {
            // 0x411b02
            *(int32_t *)a6 = 5;
            // 0x41132a
            return *(int64_t *)(v6 + 24);
        }
        default: {
            goto lab_0x4113d8;
        }
    }
  lab_0x4118eb:;
    // 0x4118eb
    int64_t * v52; // 0x411260
    if (*v52 == 0) {
        goto lab_0x4113d8;
    } else {
        goto lab_0x41168b;
    }
  lab_0x41168b:
    // 0x41168b
    function_4064d0(*v52, 0x4076e0, 0);
    *v52 = 0;
    return *(int64_t *)(v6 + 24);
  lab_0x411782:;
    // 0x411782
    int64_t v53; // 0x411260
    char * v54 = (char *)(v53 + 8);
    char * v55 = v54; // 0x41178b
    int128_t v56; // 0x411260
    int128_t v57 = v56; // 0x41178b
    int64_t * v58; // 0x411300
    int64_t * v59; // 0x411260
    if ((*v58 & 0x200000) == 0) {
        // 0x41225a
        if (*v54 != 2) {
            // 0x4118e0
            *(int32_t *)*v59 = 10;
            goto lab_0x4118eb;
        } else {
            // 0x412266
            *(int32_t *)*v59 = 9;
            goto lab_0x4118eb;
        }
    }
    goto lab_0x411791;
  lab_0x4118a4:;
    // 0x4118a4
    int64_t v83; // 0x411260
    int64_t v336 = v83; // 0x4118a6
    int64_t v337 = v336 - 0x7fff; // 0x4118a6
    int64_t v84; // 0x411260
    int64_t v316 = v84; // 0x4118b4
    if (v337 < 0 == (0x7ffe - v336 & v336) < 0 == (v337 != 0)) {
        // 0x4118b6
        *(int32_t *)*v59 = 15;
        goto lab_0x4118eb;
    }
    goto lab_0x411849;
  lab_0x4117e9:;
    int64_t v338 = *v58; // 0x4117e9
    v4 = v338;
    int128_t v80; // 0x411755
    int128_t * v78; // 0x411260
    *v78 = (int128_t)__asm_movaps(v80);
    int64_t v66; // 0x411260
    int64_t v339 = function_4111a0(v66, v53, v338); // 0x4117f9
    v5 = v339;
    v56 = __asm_movdqa(*v78);
    int64_t v81; // 0x411260
    if (v339 == -2) {
        goto lab_0x411782;
    } else {
        int64_t v340 = v81;
        if (v339 != -1 == v339 < v340) {
            // 0x4118e0
            *(int32_t *)*v59 = 10;
            goto lab_0x4118eb;
        }
        // 0x411825
        if (*(char *)(v53 + 8) != 24) {
            // 0x4118e0
            *(int32_t *)*v59 = 10;
            goto lab_0x4118eb;
        }
        // 0x411831
        v83 = v339;
        v84 = v340;
        if (v339 != -1) {
            goto lab_0x4118a4;
        } else {
            int64_t v341 = v340 - 0x7fff; // 0x41183a
            v316 = v340;
            if (v341 < 0 == (0x7ffe - v340 & v340) < 0 == (v341 != 0)) {
                // 0x4118b6
                *(int32_t *)*v59 = 15;
                goto lab_0x4118eb;
            }
            goto lab_0x411849;
        }
    }
  lab_0x411791:;
    // 0x411791
    int64_t * v60; // 0x411406
    int64_t v61; // 0x411406
    *v60 = v61;
    int128_t * v62; // 0x41140a
    *v62 = (int128_t)__asm_movaps(v57);
    *v55 = 1;
    int64_t v63 = *v52; // 0x4117a5
    int64_t v64 = v53; // 0x4117a5
    int64_t v65 = v66; // 0x4117a5
    goto lab_0x41157e;
  lab_0x4117b0:
    // 0x4117b0
    if (*(int32_t *)*v59 != 0) {
        // 0x4113d8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4117bf;
  lab_0x411849:;
    int64_t v315 = v316;
    int64_t v317 = *v58; // 0x411849
    v4 = v317;
    int64_t v318 = function_410af0((int64_t *)v53, v66, v317); // 0x411854
    int64_t v319 = *v52; // 0x411859
    *v60 = *v60 + (0x100000000 * v318 >> 32);
    int64_t v127; // 0x411260
    int64_t v99; // 0x411260
    int64_t v132; // 0x411260
    int64_t v128; // 0x411260
    int64_t v101; // 0x411260
    int64_t v135; // 0x411260
    int64_t v102; // 0x411260
    int64_t v103; // 0x411260
    int64_t v136; // 0x411260
    int64_t v129; // 0x411260
    int64_t v134; // 0x411260
    int64_t v100; // 0x411260
    int64_t v133; // 0x411260
    int64_t * v89; // 0x411260
    int64_t * v110; // 0x411260
    int64_t * v118; // 0x411260
    int64_t v114; // 0x411260
    char * v108; // 0x411260
    if (v319 == 0) {
        goto lab_0x4117b0;
    } else {
        int64_t v320 = v5; // 0x41186d
        if ((v320 || v315) != 0) {
            if (v315 < 1) {
                // 0x412738
                v4 = 0;
                v132 = 0;
                v133 = v315;
                v134 = *v52;
                v135 = v53;
                v136 = v66;
                goto lab_0x411962;
            } else {
                int64_t v321; // 0x411260
                int64_t v322; // 0x411260
                int64_t v323; // 0x411260
                int64_t v324; // 0x411260
                int64_t v325; // 0x411260
                if (v315 == 1) {
                    int64_t v326 = *v52; // 0x412707
                    v321 = v320;
                    v322 = v53;
                    v323 = v326;
                    v324 = v66;
                    v325 = v326;
                } else {
                    int64_t v327 = *v110; // 0x411603
                    int64_t v328 = *v52; // 0x411608
                    *v89 = v66;
                    *v118 = v53;
                    int64_t v329 = v327 + 112; // 0x41161f
                    int64_t v330 = v327 + 128; // 0x411623
                    int64_t v331 = 2; // 0x41162d
                    int64_t v332 = function_408d80(v328, *v110); // 0x41164a
                    v4 = v328;
                    *v108 = 16;
                    int64_t v333 = function_408ca0(v329, v330, (int32_t)v328, (int32_t)v332, v114); // 0x41166e
                    if (v332 == 0 || v333 == 0) {
                        // 0x411680
                        *(int32_t *)*v59 = 12;
                        goto lab_0x41168b;
                    }
                    // 0x411635
                    v331++;
                    int64_t v334 = v333; // 0x41163c
                    int64_t v335 = v332; // 0x41163c
                    while (v315 >= v331) {
                        // 0x411642
                        v332 = function_408d80(v335, *v110);
                        v4 = v334;
                        *v108 = 16;
                        v333 = function_408ca0(v329, v330, (int32_t)v334, (int32_t)v332, v114);
                        if (v332 == 0 || v333 == 0) {
                            // 0x411680
                            *(int32_t *)*v59 = 12;
                            goto lab_0x41168b;
                        }
                        // 0x411635
                        v331++;
                        v334 = v333;
                        v335 = v332;
                    }
                    // 0x411900
                    v321 = v5;
                    v322 = *v118;
                    v323 = v332;
                    v324 = *v89;
                    v325 = v333;
                }
                // 0x411913
                v4 = v325;
                v127 = v325;
                v128 = v322;
                v129 = v324;
                v99 = v325;
                v100 = v315;
                v101 = v322;
                v102 = v323;
                v103 = v324;
                if (v315 != v321) {
                    goto lab_0x41193f;
                } else {
                    goto lab_0x411920;
                }
            }
        } else {
            // 0x41187a
            v4 = 0;
            function_4064d0(v319, 0x4076e0, 0);
            if (*(int32_t *)*v59 != 0) {
                goto lab_0x41168b;
            }
            goto lab_0x4117bf;
        }
    }
  lab_0x41157e:;
    uint32_t v67 = *(int32_t *)*v59; // 0x411583
    v4 = v67;
    if (v63 == 0 == (v67 != 0)) {
        goto lab_0x4118eb;
    }
    // 0x411592
    *v52 = v63;
    int64_t v68 = v63; // 0x411592
    int64_t v69 = v64; // 0x411592
    int64_t v70 = v65; // 0x411592
    goto lab_0x411597;
  lab_0x4117bf:
    // 0x4117bf
    *v52 = 0;
    v68 = 0;
    v69 = v53;
    v70 = v66;
    goto lab_0x411597;
  lab_0x411718:;
    // 0x411718
    int64_t v96; // 0x411260
    int64_t v104 = v96;
    function_4064d0(v104, 0x406670, (int32_t)*(int64_t *)(v104 + 40));
    goto lab_0x411729;
  lab_0x41147a:;
    // 0x41147a
    int64_t v94; // 0x411260
    int64_t v105 = v94;
    int64_t v93; // 0x411260
    int64_t v106 = v93;
    int64_t v92; // 0x411260
    int64_t v107 = v92;
    char v90; // 0x411260
    *v108 = v90;
    int64_t v109 = *v110; // 0x411481
    int64_t v111 = v109 + 112; // 0x411493
    int64_t v112 = v109 + 128; // 0x411497
    int64_t v113 = function_408ca0(v111, v112, (int32_t)v107, 0, v114); // 0x4114a4
    v4 = v113;
    if (v113 == 0) {
        // 0x411680
        *(int32_t *)*v59 = 12;
        goto lab_0x41168b;
    }
    // 0x4114b5
    int64_t v91; // 0x411260
    int64_t v115 = v91 + 2; // 0x4114b5
    int64_t v116 = v113; // 0x4114bd
    int64_t v117 = v106; // 0x4114bd
    if (v115 <= v5) {
        // 0x4114c3
        *v118 = v106;
        int64_t v119 = v115; // 0x4114cb
        int64_t v120 = v107; // 0x4114cb
        v120 = function_408d80(v120, *v110);
        v4 = v113;
        *v108 = 16;
        int64_t v121 = function_408ca0(v111, v112, (int32_t)v113, (int32_t)v120, v114); // 0x4114fa
        if (v120 == 0 || v121 == 0) {
            // 0x411680
            *(int32_t *)*v59 = 12;
            goto lab_0x41168b;
        }
        // 0x411511
        v4 = v121;
        *v108 = 10;
        int64_t v122 = function_408ca0(v111, v112, (int32_t)v121, 0, v114); // 0x41152c
        if (v122 == 0) {
            // 0x411680
            *(int32_t *)*v59 = 12;
            goto lab_0x41168b;
        }
        // 0x41153d
        v119++;
        int64_t v123 = v122; // 0x411545
        while (v119 <= v5) {
            // 0x4114ce
            v120 = function_408d80(v120, *v110);
            v4 = v123;
            *v108 = 16;
            v121 = function_408ca0(v111, v112, (int32_t)v123, (int32_t)v120, v114);
            if (v120 == 0 || v121 == 0) {
                // 0x411680
                *(int32_t *)*v59 = 12;
                goto lab_0x41168b;
            }
            // 0x411511
            v4 = v121;
            *v108 = 10;
            v122 = function_408ca0(v111, v112, (int32_t)v121, 0, v114);
            if (v122 == 0) {
                // 0x411680
                *(int32_t *)*v59 = 12;
                goto lab_0x41168b;
            }
            // 0x41153d
            v119++;
            v123 = v122;
        }
        // 0x411547
        v4 = v122;
        v116 = v122;
        v117 = *v118;
    }
    int64_t v124 = v117;
    int64_t v125 = v116; // 0x41155d
    int64_t v126 = *v89; // 0x41154f
    v127 = v125;
    v128 = v124;
    v129 = v105;
    if (v126 == 0) {
        goto lab_0x411920;
    } else {
        // 0x41155d
        *v108 = 16;
        v63 = function_408ca0(v111, v112, (int32_t)v126, (int32_t)v125, v114);
        v64 = v124;
        v65 = v105;
        goto lab_0x41157e;
    }
  lab_0x411597:;
    unsigned char v71 = *(char *)(v69 + 8); // 0x411597
    if ((*v58 & 0x1000000) != 0) {
        if (v71 != 11 != v71 != 23) {
            // 0x4115bc
            if (v68 == 0) {
                goto lab_0x4115d5;
            } else {
                // 0x4115c6
                function_4064d0(v68, 0x4076e0, 0);
                goto lab_0x4115d5;
            }
        }
    }
    char v72 = v71; // 0x411324
    int64_t v73 = v70; // 0x411324
    int64_t v74 = v69; // 0x411324
    if (v71 >= 24) {
        // break -> 0x41132a
        goto lab_0x41132a_2;
    }
    goto lab_0x4113f0;
  lab_0x411729:
    // 0x411729
    v90 = v5 == -1 ? 11 : 10;
    int64_t v95; // 0x411260
    v91 = v95;
    v92 = v104;
    int64_t v97; // 0x411260
    v93 = v97;
    int64_t v98; // 0x411260
    v94 = v98;
    goto lab_0x41147a;
  lab_0x411920:
    // 0x411920
    *v52 = v127;
    v68 = v127;
    v69 = v128;
    v70 = v129;
    goto lab_0x411597;
  lab_0x41193f:
    // 0x41193f
    *v89 = v99;
    int64_t v130 = function_408d80(v102, *v110); // 0x41194c
    int64_t v131 = *v89; // 0x411951
    v4 = v131;
    v132 = v131;
    v133 = v100;
    v134 = v130;
    v135 = v101;
    v136 = v103;
    if (v130 == 0) {
        // 0x411680
        *(int32_t *)*v59 = 12;
        goto lab_0x41168b;
    }
    goto lab_0x411962;
  lab_0x411962:
    // 0x411962
    *v89 = v132;
    v95 = v133;
    v96 = v134;
    v97 = v135;
    v98 = v136;
    if (*(char *)(v134 + 48) != 17) {
        goto lab_0x411729;
    } else {
        goto lab_0x411718;
    }
  lab_0x41255a:;
    // 0x41255a
    uint64_t v137; // 0x411260
    int64_t v138 = 1 << v137;
    v4 = v138;
    int64_t * v139; // 0x411260
    *v139 = *v139 | v138;
    goto lab_0x412548;
  lab_0x412548:;
    int64_t v140 = v137 + 1; // 0x412550
    if (v137 == 63) {
        // break -> 0x412569
        goto lab_0x412569;
    }
    goto lab_0x412552;
  lab_0x411f1b_3:
    // 0x411f1b
    free((int64_t *)v5);
    function_407690(v18);
    if (*(int32_t *)*v11 != 0) {
        // 0x4113d8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    // 0x411f3d
    *(int64_t *)(v6 + 24) = 0;
    goto lab_0x411300;
  lab_0x4123be:;
    // 0x4123be
    int64_t * v177; // 0x411260
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x411f1b_3;
  lab_0x4125c6_3:
    // 0x4125c6
    *(int32_t *)*v177 = 11;
    v11 = v177;
    goto lab_0x411f1b_3;
  lab_0x4124c5_5:
    // 0x4124c5
    *(int32_t *)*v177 = 3;
    v11 = v177;
    goto lab_0x411f1b_3;
  lab_0x411a84:;
    // 0x411a84
    int64_t v188; // 0x411a59
    int64_t v254 = v188 & 0xffffffff; // 0x411a5e
    int64_t v234; // 0x411260
    int64_t v255; // 0x411260
    int64_t v235; // 0x411260
    int64_t * v152; // 0x411a34
    int32_t * v168; // 0x411260
    int64_t v178; // 0x411260
    int64_t * v179; // 0x411260
    int64_t * v180; // 0x411260
    int64_t * v181; // 0x411260
    int64_t * v182; // 0x411260
    int64_t v148; // 0x411a03
    int64_t * v149; // 0x411a1e
    int64_t v151; // 0x411a34
    switch (g77) {
        case 0: {
            unsigned char v256 = *(char *)v151; // 0x411ec1
            unsigned char v257 = v256 % 64;
            int64_t v258 = v257 == 0 ? 1 : 1 << (int64_t)v257;
            v4 = v258;
            int64_t * v259 = (int64_t *)(v148 + (int64_t)(v256 / 8 & 24)); // 0x411ed8
            *v259 = v258 | *v259;
            v255 = v254;
            goto lab_0x411e7f;
        }
        case 1: {
            int64_t v260 = *v181; // 0x411e9d
            v4 = v260;
            int64_t v261 = *mem2; // 0x411ea1
            int64_t v262 = v260; // 0x411eaa
            int64_t v263 = v261; // 0x411eaa
            if (v260 == *v182) {
                int64_t v264 = 2 * v260 | 1; // 0x4122c6
                *v182 = v264;
                int64_t * mem3 = realloc((int64_t *)v261, 4 * (int32_t)v264); // 0x4122d8
                if (mem3 == NULL) {
                    goto lab_0x4123be;
                }
                // 0x4122e6
                v263 = (int64_t)mem3;
                *mem2 = v263;
                v262 = *v181;
                v4 = v262;
            }
            // 0x411eb0
            *v181 = v262 + 1;
            *(int32_t *)(4 * v4 + v263) = *v168;
            v255 = v254;
            goto lab_0x411e7f;
        }
        case 2: {
            int32_t v265 = function_40b870(v148, *v152); // 0x411e75
            *(int32_t *)*v177 = v265;
            v255 = v254;
            v11 = v177;
            if (v265 != 0) {
                goto lab_0x411f1b_3;
            }
            goto lab_0x411e7f;
        }
        case 3: {
            int32_t v266 = function_40b870(v148, *v152); // 0x411f5d
            *(int32_t *)*v177 = v266;
            v255 = v254;
            v11 = v177;
            if (v266 != 0) {
                goto lab_0x411f1b_3;
            }
            goto lab_0x411e7f;
        }
        case 4: {
            int64_t v267 = *(int64_t *)(a1 + 120); // 0x411ee3
            *v179 = *v149;
            int64_t v268 = function_40b8c0(v267, v148, v18 + 24, v178, v180, *v152, (int64_t)&g81); // 0x411f03
            int32_t v269 = v268; // 0x411f0d
            *(int32_t *)*v177 = v269;
            v3 = *v179;
            v255 = v254;
            v11 = v177;
            if (v269 != 0) {
                goto lab_0x411f1b_3;
            }
            goto lab_0x411e7f;
        }
        default: {
            // 0x4126c4
            __assert_fail("0", "lib/regcomp.c", 3315, "parse_bracket_exp");
            v234 = &g81;
            v235 = (int64_t)"parse_bracket_exp";
            goto lab_0x4126dd_3;
        }
    }
  lab_0x411fe5:
    // 0x411fe5
    *(int32_t *)*v177 = 7;
    v11 = v177;
    goto lab_0x411f1b_3;
  lab_0x411e7f:;
    int64_t v270 = v255;
    int64_t v183 = v270; // 0x411260
    int64_t v184 = 0; // 0x411260
    int64_t * v156; // 0x411260
    int64_t * v163; // 0x411260
    switch (*v20) {
        case 2: {
            goto lab_0x411fe5;
        }
        case 21: {
            // 0x4122f3
            *v156 = *v156 + (0x100000000 * v270 >> 32);
            if (*(char *)(v6 + 56) != 0) {
                // 0x412301
                v4 = v5 + 32;
                int64_t v271 = v5; // 0x412308
                int64_t * v272 = (int64_t *)v271; // 0x41230c
                *v272 = -1 - *v272;
                v271 += 8;
                while (v4 != v271) {
                    // 0x41230c
                    v272 = (int64_t *)v271;
                    *v272 = -1 - *v272;
                    v271 += 8;
                }
            }
            uint32_t v273 = *(int32_t *)(*v163 + 180); // 0x41231d
            v4 = v273;
            if (v273 >= 2) {
                int64_t v274 = 0;
                int64_t * v275 = (int64_t *)(v274 + v5); // 0x41233b
                *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                int64_t v276 = v274 + 8; // 0x412347
                while (v274 != 24) {
                    // 0x412337
                    v274 = v276;
                    v275 = (int64_t *)(v274 + v5);
                    *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                    v276 = v274 + 8;
                }
            }
            // 0x412349
            if (*v181 != 0) {
                goto lab_0x4123ce;
            } else {
                // 0x412350
                if (*(int64_t *)(v18 + 48) != 0) {
                    goto lab_0x4123ce;
                } else {
                    // 0x412357
                    if (*(int64_t *)(v18 + 56) != 0) {
                        goto lab_0x4123ce;
                    } else {
                        // 0x41235e
                        if (*(int64_t *)(v18 + 64) != 0) {
                            goto lab_0x4123ce;
                        } else {
                            int64_t v277 = v4; // 0x412365
                            v4 = v277 + 0xffffffff & 0xffffffff;
                            if ((int32_t)v277 < 2) {
                                goto lab_0x412378;
                            } else {
                                // 0x41236a
                                if (*(int64_t *)v178 != 0) {
                                    goto lab_0x4123ce;
                                } else {
                                    // 0x412371
                                    if (*(char *)(v18 + 32) % 2 != 0) {
                                        goto lab_0x4123ce;
                                    } else {
                                        goto lab_0x412378;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        default: {
            goto lab_0x411a1e;
        }
    }
  lab_0x41215f:;
    // 0x41215f
    int64_t v203; // 0x411260
    int64_t v278 = (int64_t)*(char *)v203;
    int64_t v220 = v278; // 0x412161
    int64_t v216; // 0x411260
    char v218; // 0x411260
    int64_t v217; // 0x411260
    int64_t v219; // 0x411260
    int64_t * v162; // 0x411260
    int32_t v197; // 0x412126
    if (v197 == 0) {
        goto lab_0x4125b9;
    } else {
        // 0x412167
        v218 = 0;
        v219 = v278;
        if (v197 != 3) {
            goto lab_0x41217a;
        } else {
            int64_t v279 = *v162; // 0x41216e
            v3 = v279;
            v216 = v279;
            v217 = v278;
            goto lab_0x412176;
        }
    }
  lab_0x4125b9:;
    // 0x4125b9
    int64_t v161; // 0x411260
    v218 = *(char *)v161;
    v219 = v220;
    goto lab_0x41217a;
  lab_0x412176:
    // 0x412176
    v218 = *(char *)v216;
    v219 = v217;
    goto lab_0x41217a;
  lab_0x41217a:;
    int64_t v280 = v219;
    unsigned char v281 = v218;
    int64_t v282; // 0x411260
    int64_t v283; // 0x411260
    int32_t v284; // 0x411260
    char * v165; // 0x411260
    int32_t v195; // 0x4120fd
    if (v195 == 0) {
        goto lab_0x412584;
    } else {
        // 0x412183
        v283 = v281;
        v284 = v197;
        v282 = (int64_t)*v168;
        if (*v165 != 0) {
            goto lab_0x412584;
        } else {
            goto lab_0x412193;
        }
    }
  lab_0x412584:;
    // 0x412584
    int32_t * v170; // 0x411260
    *v170 = (int32_t)v281;
    int64_t * v171; // 0x411260
    *v171 = v4;
    int64_t v285 = function_406c50(v280, v4); // 0x412590
    v4 = *v171;
    v283 = (int64_t)*v170;
    int32_t * v160; // 0x411260
    v284 = *v160;
    v282 = v285 & 0xffffffff;
    goto lab_0x412193;
  lab_0x412193:;
    int64_t v286 = v282;
    int32_t v287 = v284;
    int64_t v288 = v283;
    int64_t v289; // 0x411260
    int64_t v290; // 0x411260
    if (v287 == 0) {
        goto lab_0x4124d5;
    } else {
        int64_t v291 = (int64_t)*(int32_t *)v161; // 0x41219b
        v3 = v291;
        v289 = v291;
        v290 = v286;
        if (v287 == 3) {
            goto lab_0x4124d5;
        } else {
            goto lab_0x4121ac;
        }
    }
  lab_0x4124d5:
    // 0x4124d5
    *v170 = (int32_t)v286;
    *v171 = v4;
    int64_t v292 = function_406c50(v288, v4); // 0x4124e4
    v4 = *v171;
    int64_t v293 = v292 & 0xffffffff; // 0x4124f3
    v3 = v293;
    v289 = v293;
    v290 = (int64_t)*v170;
    goto lab_0x4121ac;
  lab_0x4121ac:;
    int32_t v294 = v290;
    if (v294 == -1) {
        goto lab_0x4124c5_5;
    }
    uint32_t v295 = (int32_t)v289; // 0x4121b6
    if (v295 == -1) {
        goto lab_0x4124c5_5;
    }
    // 0x4121c0
    if (v294 > v295 == ((*v149 & 0x10000) != 0)) {
        goto lab_0x4125c6_3;
    }
    int64_t v296 = v4; // 0x4121d4
    int32_t v297 = v294; // 0x4121d7
    int64_t * v172; // 0x411260
    int32_t * v173; // 0x411260
    int32_t * v174; // 0x411260
    int64_t * v175; // 0x411260
    int64_t * v176; // 0x411260
    if (v296 != 0) {
        int64_t v298 = *(int64_t *)(v296 + 64); // 0x4121d9
        int64_t v299 = *(int64_t *)(v296 + 8); // 0x4121dd
        int32_t v300 = v294; // 0x4121e6
        int64_t v301 = v298; // 0x4121e6
        int64_t v302 = v299; // 0x4121e6
        if (v298 == *v172) {
            // 0x412642
            *v173 = v295;
            *v174 = v294;
            *v171 = v4;
            int64_t v303 = 2 * v298 | 1; // 0x41265c
            int64_t v304 = 4 * v303; // 0x412660
            *v172 = v303;
            *v175 = v304;
            *v176 = (int64_t)realloc((int64_t *)v299, (int32_t)v304);
            int64_t * mem4 = realloc((int64_t *)*(int64_t *)(*v171 + 16), (int32_t)*v175); // 0x412690
            int64_t v305 = *v176; // 0x412695
            if (v305 == 0) {
                // 0x4126dd
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x4126dd_3;
            }
            int64_t v306 = *v171; // 0x4126a2
            v4 = v306;
            v300 = *v174;
            v3 = (int64_t)*v173;
            if (mem4 == NULL) {
                // 0x4126dd
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x4126dd_3;
            }
            // 0x4126b3
            *(int64_t *)(v306 + 16) = (int64_t)mem4;
            v301 = *(int64_t *)(v4 + 64);
            *(int64_t *)(v4 + 8) = v305;
            v302 = v305;
        }
        int64_t v307 = 4 * v301; // 0x4121ec
        *(int32_t *)(v302 + v307) = v300;
        *(int64_t *)(v4 + 64) = v301 + 1;
        *(int32_t *)(*(int64_t *)(v4 + 16) + v307) = (int32_t)v3;
        v297 = v300;
    }
    int64_t v308 = 0;
    uint32_t v309 = (int32_t)v308; // 0x412212
    int64_t v310; // 0x412222
    int64_t * v311; // 0x412229
    if (v297 <= v309) {
        // 0x412217
        if ((int32_t)v3 >= v309) {
            // 0x41221c
            v310 = v308 >> 6;
            v4 = v310;
            v311 = (int64_t *)(8 * v310 + v148);
            *v311 = *v311 | 1 << v308 % 64;
        }
    }
    int64_t v312 = v308 + 1; // 0x412238
    while (v308 != 255) {
        // 0x412210
        v308 = v312;
        v309 = (int32_t)v308;
        if (v297 <= v309) {
            // 0x412217
            if ((int32_t)v3 >= v309) {
                // 0x41221c
                v310 = v308 >> 6;
                v4 = v310;
                v311 = (int64_t *)(8 * v310 + v148);
                *v311 = *v311 | 1 << v308 % 64;
            }
        }
        // 0x41222e
        v312 = v308 + 1;
    }
    // 0x41223a
    *(int32_t *)*v177 = 0;
    int64_t v194; // 0x4120f8
    v255 = v194 & 0xffffffff;
    goto lab_0x411e7f;
  lab_0x4112b1:
    if ((a4 & 32) != 0) {
        // 0x4115d5
        *(int64_t *)(v6 + 24) = 0;
        *(int32_t *)*(int64_t *)(v6 + 48) = 13;
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    if ((a4 & 16) != 0) {
        // 0x411ff5
        v5 = a5;
        int64_t v313 = function_410af0((int64_t *)v9, a1, a4); // 0x412005
        int64_t * v314 = (int64_t *)(a1 + 72); // 0x412017
        *v314 = (0x100000000 * v313 >> 32) + *v314;
        function_411260(a1, a2, v9, a4, v5, a6);
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4112d0;
  lab_0x4112d0:
    // 0x4112d0
    *(char *)(v9 + 8) = 1;
    if (function_408ca0(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
        // 0x411bf1
        *(int32_t *)a6 = 12;
        // 0x4113d8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x411300;
  lab_0x411a94:;
    int64_t v223 = &g2; // 0x411ab0
    int64_t v222 = (int64_t)"alnum"; // 0x411ab0
    bool v224 = v7 == 33; // 0x411ab0
    goto lab_0x411ab4;
  lab_0x411ae0:
    // 0x411ae0
    v223 = (int64_t)&g12;
    v222 = (int64_t)"space";
    v224 = v7 == 35;
    goto lab_0x411ab4;
  lab_0x411300:
    // 0x411300
    v58 = (int64_t *)(v6 + 8);
    int64_t v144 = function_410af0((int64_t *)v9, a1, *v58); // 0x41130b
    unsigned char v145 = *(char *)(v9 + 8); // 0x411310
    int64_t * v146 = (int64_t *)(a1 + 72); // 0x411318
    *v146 = *v146 + (0x100000000 * v144 >> 32);
    if (v145 >= 24) {
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    // 0x4113f0
    v52 = (int64_t *)(v6 + 24);
    int64_t v147 = v6 + 32;
    v89 = (int64_t *)v147;
    v78 = (int128_t *)v147;
    v59 = (int64_t *)(v6 + 48);
    v110 = (int64_t *)(v6 + 16);
    v118 = (int64_t *)(v6 + 56);
    v114 = v6 + 192;
    v108 = (char *)(v6 + 200);
    v72 = v145;
    v73 = a1;
    v74 = v9;
    while (true) {
      lab_0x4113f0:;
        unsigned char v75 = v72;
        if ((1 << (int64_t)(v75 % 64) & 0x8c0800) == 0) {
            // break -> 0x41132a
            break;
        }
        // 0x411406
        v53 = v74;
        v66 = v73;
        v60 = (int64_t *)(v66 + 72);
        v61 = *v60;
        v62 = (int128_t *)v53;
        int128_t v76 = __asm_movdqa(*v62); // 0x41140a
        if (v75 == 23) {
            int64_t v77 = *v58; // 0x411740
            v4 = v77;
            *v78 = (int128_t)__asm_movaps(v76);
            int64_t v79 = function_4111a0(v66, v53, v77); // 0x411750
            v80 = __asm_movdqa(*v78);
            v5 = v79;
            v56 = v80;
            switch (v79) {
                case -1: {
                    // 0x4117d0
                    if (*(char *)(v53 + 8) != 1) {
                        // 0x4118e0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x4118eb;
                    }
                    // 0x4117dc
                    v81 = 0;
                    if (*(char *)v53 != 44) {
                        // 0x4118e0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x4118eb;
                    }
                    goto lab_0x4117e9;
                }
                case -2: {
                    goto lab_0x411782;
                }
                default: {
                    char * v82 = (char *)(v53 + 8);
                    v56 = v80;
                    v83 = v79;
                    v84 = v79;
                    switch (*v82) {
                        case 24: {
                            goto lab_0x4118a4;
                        }
                        case 1: {
                            // 0x4118c3
                            v81 = v79;
                            if (*(char *)v53 == 44) {
                                goto lab_0x4117e9;
                            } else {
                                // 0x4118ce
                                v55 = v82;
                                v57 = v80;
                                if ((*v58 & 0x200000) == 0) {
                                    // 0x4118e0
                                    *(int32_t *)*v59 = 10;
                                    goto lab_0x4118eb;
                                }
                                goto lab_0x411791;
                            }
                        }
                        default: {
                            goto lab_0x411782;
                        }
                    }
                }
            }
        } else {
            int64_t v85 = *v58;
            v4 = v85;
            int64_t v86 = function_410af0((int64_t *)v53, v66, v85);
            *v60 = (0x100000000 * v86 >> 32) + *v60;
            int64_t v87 = *v52;
            if (v75 == 19) {
                if (v87 == 0) {
                    goto lab_0x4117b0;
                } else {
                    int64_t v88 = v75 == 18; // 0x4113f9
                    v5 = 1;
                    *v89 = 0;
                    v90 = 10;
                    v91 = v88;
                    v92 = v87;
                    v93 = v53;
                    v94 = v66;
                    v95 = v88;
                    v96 = v87;
                    v97 = v53;
                    v98 = v66;
                    if (*(char *)(v87 + 48) == 17) {
                        goto lab_0x411718;
                    } else {
                        goto lab_0x41147a;
                    }
                }
            } else {
                if (v87 == 0) {
                    goto lab_0x4117b0;
                } else {
                    if (v75 == 18) {
                        // 0x41192a
                        v5 = -1;
                        v4 = v87;
                        v99 = v87;
                        v100 = 1;
                        v101 = v53;
                        v102 = v87;
                        v103 = v66;
                        goto lab_0x41193f;
                    } else {
                        // 0x411453
                        v5 = -1;
                        if (*(char *)(v87 + 48) == 17) {
                            // 0x411700
                            *v89 = 0;
                            v95 = 0;
                            v96 = *v52;
                            v97 = v53;
                            v98 = v66;
                            goto lab_0x411718;
                        } else {
                            // 0x411462
                            *v89 = 0;
                            v90 = 11;
                            v91 = 0;
                            v92 = v87;
                            v93 = v53;
                            v94 = v66;
                            goto lab_0x41147a;
                        }
                    }
                }
            }
        }
    }
    // 0x41132a
    return *(int64_t *)(v6 + 24);
  lab_0x4119f2:
    // 0x4119f2
    if (v17 == 21) {
        // 0x411fda
        *v20 = 1;
    }
    // 0x4119fa
    v148 = v5;
    v149 = (int64_t *)(v6 + 8);
    int64_t v150 = v6 + 112; // 0x411a2f
    v151 = v6 + 120;
    v152 = (int64_t *)v151;
    int64_t v153; // bp-120, 0x411260
    int64_t v154 = &v153;
    int32_t * v155 = (int32_t *)v150; // 0x411a39
    v156 = (int64_t *)(a1 + 72);
    int64_t v157 = v6 + 144;
    int64_t v158 = v6 + 192;
    int64_t v159 = v6 + 128;
    v160 = (int32_t *)v159;
    v161 = v6 + 136;
    v162 = (int64_t *)v161;
    v163 = (int64_t *)(v6 + 16);
    int64_t v164 = v6 + 64;
    v165 = (char *)v164;
    bool v166; // 0x411260
    int64_t v167 = v166 ? -1 : 1;
    v168 = (int32_t *)v151;
    int64_t v169 = v6 + 72;
    v170 = (int32_t *)v169;
    v171 = (int64_t *)v164;
    v172 = (int64_t *)(v6 + 32);
    v173 = (int32_t *)(v6 + 92);
    v174 = (int32_t *)(v6 + 88);
    v175 = (int64_t *)(v6 + 80);
    v176 = (int64_t *)v169;
    v177 = (int64_t *)(v6 + 48);
    v178 = v18 + 72;
    v179 = (int64_t *)(v6 - 16);
    v180 = (int64_t *)(v6 + 104);
    v181 = (int64_t *)(v18 + 40);
    v182 = (int64_t *)(v6 + 24);
    v183 = v16 & 0xffffffff;
    v184 = 1;
    int32_t v185; // 0x411260
    while (true) {
      lab_0x411a1e:
        // 0x411a1e
        v3 = v184;
        int64_t v186 = *v149; // 0x411a1e
        v3 = v184;
        *v152 = v154;
        *v155 = 3;
        int32_t v187 = function_4108d0(v150, a1, v9, v183, v186, (int32_t)v184);
        v185 = v187;
        if (v187 != 0) {
            // break -> 0x412034
            break;
        }
        // 0x411a4e
        g77 = v6 - 8;
        v188 = function_406540(v19, a1, *v149);
        if ((*v155 - 2 & -3) == 0) {
            goto lab_0x411a84;
        } else {
            unsigned char v189 = *v20; // 0x411a6c
            v4 = v189;
            switch (v189) {
                case 2: {
                    goto lab_0x411fe5;
                }
                case 22: {
                    int64_t v190 = 0x100000000 * v188;
                    *v156 = *v156 + (v190 >> 32);
                    int64_t v191 = *v149; // 0x41207b
                    int64_t v192 = function_406540((int64_t *)v157, a1, v191); // 0x41208b
                    unsigned char v193 = *(char *)(v6 + 152); // 0x412090
                    v4 = v193;
                    switch (v193) {
                        case 2: {
                            goto lab_0x411fe5;
                        }
                        case 21: {
                            // 0x4122a5
                            *v156 = *v156 + (-v190 >> 32);
                            *v20 = 1;
                            goto lab_0x411a84;
                        }
                        default: {
                            // 0x4120aa
                            *v160 = 3;
                            *v162 = v158;
                            if ((int32_t)function_4108d0(v159, a1, v157, v192 & 0xffffffff, v191, 1) != 0) {
                                // break -> 0x412034
                                break;
                            }
                            // 0x4120ed
                            v194 = function_406540(v19, a1, *v149);
                            v195 = *v155;
                            int32_t v196 = *(int32_t *)(*v163 + 180); // 0x41210e
                            v4 = v196 < 2 == (1 - v196 & v196) < 0 ? v18 : 0;
                            if ((v195 - 2 & -3) == 0) {
                                goto lab_0x4125c6_3;
                            }
                            // 0x412126
                            v197 = *v160;
                            if ((v197 - 2 & -3) == 0) {
                                goto lab_0x4125c6_3;
                            }
                            // 0x412139
                            *v165 = (char)(v195 == 3);
                            if (v195 == 3) {
                                int64_t v198 = *v152; // 0x41260d
                                int64_t v199 = -1; // 0x41261e
                                int64_t v200 = v198; // 0x41261e
                                int64_t v201; // 0x411260
                                while (v199 != 0) {
                                    int64_t v202 = v200;
                                    v199--;
                                    v200 = v202 + v167;
                                    v201 = v199;
                                    if (*(char *)v202 == 0) {
                                        // break -> 
                                        break;
                                    }
                                }
                                if (-v201 >= 4) {
                                    goto lab_0x4124c5_5;
                                }
                                // 0x412630
                                v203 = v198;
                                if (v197 == 3) {
                                    // 0x4124a1
                                    int64_t v204; // 0x411260
                                    while (v204 != 0) {
                                        int64_t v205; // 0x411260
                                        int64_t v206 = v205;
                                        char v207 = *(char *)v206; // 0x4124af
                                        int64_t v208; // 0x411260
                                        int64_t v209 = v208 - 1; // 0x4124af
                                        v204 = v209;
                                        v205 = v206 + v167;
                                        int64_t v210 = v209; // 0x4124af
                                        if (v207 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v208 = v204;
                                        v210 = 0;
                                    }
                                    v203 = v198;
                                }
                                goto lab_0x41215f;
                            } else {
                                if (v197 == 3) {
                                    int64_t v211 = *v162; // 0x4125d6
                                    v3 = v211;
                                    int64_t v212 = v211; // 0x4125e7
                                    int64_t v213 = -1; // 0x4125e7
                                    int64_t v214 = 0; // 0x4125e7
                                    while (v213 != 0) {
                                        int64_t v215 = v212;
                                        v213--;
                                        v212 = v215 + v167;
                                        v214 = v213;
                                        if (*(char *)v215 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v214 = 0;
                                    }
                                    if (-v214 >= 4) {
                                        goto lab_0x4124c5_5;
                                    }
                                    // 0x4125fd
                                    v203 = v151;
                                    v216 = v211;
                                    v217 = 0;
                                    if (v195 != 0) {
                                        goto lab_0x412176;
                                    } else {
                                        goto lab_0x41215f;
                                    }
                                } else {
                                    // 0x412151
                                    v203 = v151;
                                    if (v195 != 0) {
                                        // 0x4125ad
                                        v218 = 0;
                                        v219 = 0;
                                        v220 = 0;
                                        if (v197 != 0) {
                                            goto lab_0x41217a;
                                        } else {
                                            goto lab_0x4125b9;
                                        }
                                    } else {
                                        goto lab_0x41215f;
                                    }
                                }
                            }
                        }
                    }
                }
                default: {
                    goto lab_0x411a84;
                }
            }
        }
    }
    // 0x412034
    *(int32_t *)*v177 = v185;
    v11 = v177;
    goto lab_0x411f1b_3;
  lab_0x411ab4:;
    int64_t v221 = *(int64_t *)(a1 + 120);
    v4 = v222;
    v3 = a6;
    if (!(((int32_t)a6 == 0 | function_40c090(a2, v221, (char *)v222, (int64_t *)v223, (int64_t)v224, a6) != 0))) {
        // 0x4113d8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x411300;
  lab_0x411f69:;
    // 0x411f69
    int64_t v225; // 0x411d15
    int64_t v226; // 0x411d19
    if (function_408ca0(v225, v226, 0, 0, v9) == 0) {
        // 0x411bf1
        *(int32_t *)a6 = 12;
        // 0x4113d8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41132a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x411dbf;
  lab_0x412505:;
    int16_t * v250 = *__ctype_b_loc(); // 0x412519
    v3 = (v13 | 256) - 64 * v15;
    int64_t v251 = v13; // 0x41252f
    int64_t v252 = 8 * v15 + a2; // 0x41252f
    int64_t v141 = 2 * v13 + (int64_t)v250; // 0x41252f
    while (true) {
        int64_t v143 = v251;
        v139 = (int64_t *)(v252 + 184);
        v140 = 0;
        while (true) {
          lab_0x412552:
            // 0x412552
            v137 = v140;
            if ((*(char *)(2 * v137 + v141) & 8) == 0) {
                int64_t v142 = v137 + v143; // 0x412540
                v4 = v142 & 0xffffffff;
                if ((int32_t)v142 == 95) {
                    goto lab_0x41255a;
                } else {
                    goto lab_0x412548;
                }
            } else {
                goto lab_0x41255a;
            }
        }
      lab_0x412569:;
        int64_t v253 = v143 + 64; // 0x412569
        v12 = v10;
        v251 = v253 & 0xffffffff;
        v252 += 8;
        v141 += 128;
        if ((int32_t)v3 == (int32_t)v253) {
            // break -> 0x411d10
            break;
        }
    }
    goto lab_0x411d10_2;
  lab_0x411dbf:;
    int64_t v227 = function_410af0((int64_t *)v9, a1, a4); // 0x411dca
    int64_t * v228 = (int64_t *)(a1 + 72); // 0x411dd1
    *v228 = (0x100000000 * v227 >> 32) + *v228;
    // 0x41132a
    return *(int64_t *)(v6 + 24);
  lab_0x411d10_2:;
    int32_t v229 = v12;
    v225 = a2 + 112;
    v226 = a2 + 128;
    if ((v229 - 256 & -257) != 0) {
        goto lab_0x411f69;
    } else {
        int32_t * v230 = (int32_t *)v9;
        int64_t v231; // 0x411260
        if (v229 == 256) {
            // 0x41204a
            *v230 = 6;
            v4 = 0;
            v231 = function_408ca0(v225, v226, 0, 0, v9);
        } else {
            // 0x411d3f
            *v230 = 5;
            v4 = 0;
            v231 = function_408ca0(v225, v226, 0, 0, v9);
        }
        // 0x411d64
        *v230 = 10;
        int64_t v232 = function_408ca0(v225, v226, 0, 0, v9); // 0x411d71
        int64_t v233 = function_408ca0(v225, v226, (int32_t)v231, (int32_t)v232, (int64_t)&v14); // 0x411d95
        if (v233 == 0 || v231 == 0 || v232 == 0) {
            // 0x411bf1
            *(int32_t *)a6 = 12;
            // 0x4113d8
            *(int64_t *)(v6 + 24) = 0;
            // 0x41132a
            return *(int64_t *)(v6 + 24);
        }
        goto lab_0x411dbf;
    }
  lab_0x4126dd_3:
    // 0x4126dd
    *v182 = v234;
    free((int64_t *)v235);
    free((int64_t *)*v182);
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x411f1b_3;
  lab_0x4123ce:;
    int64_t v236 = *v163; // 0x4123ce
    char * v237 = (char *)(v236 + 176); // 0x4123da
    *v237 = *v237 | 2;
    int64_t v238 = v236 + 112; // 0x4123e1
    int64_t v239 = v236 + 128; // 0x4123e5
    char * v240 = (char *)(v6 + 168); // 0x4123f2
    *v240 = 6;
    int64_t * v241 = (int64_t *)(v6 + 160); // 0x4123fa
    *v241 = v18;
    int64_t v242 = function_408ca0(v238, v239, 0, 0, v154); // 0x412402
    *v182 = v242;
    int64_t v243 = v5 + 32; // 0x412413
    v4 = v243;
    int64_t v244 = v5; // 0x41241d
    if (v242 == 0) {
        goto lab_0x4123be;
    } else {
        while (*(int64_t *)v244 == 0) {
            int64_t v245 = v244 + 8; // 0x412425
            v244 = v245;
            if (v243 == v245) {
                // 0x41242e
                free((int64_t *)v5);
                goto lab_0x411300;
            }
        }
        // 0x41243c
        *v240 = 3;
        *v241 = v5;
        int64_t v246 = function_408ca0(v238, v239, 0, 0, v154); // 0x41245d
        if (v246 == 0) {
            goto lab_0x4123be;
        } else {
            // 0x41246b
            *(char *)(v6 + 200) = 10;
            int64_t v247 = function_408ca0(v238, v239, (int32_t)v246, (int32_t)*v182, v158); // 0x412489
            *v182 = v247;
            if (v247 != 0) {
                goto lab_0x411300;
            } else {
                goto lab_0x4123be;
            }
        }
    }
  lab_0x412378:
    // 0x412378
    function_407690(v18);
    *(char *)(v6 + 168) = 3;
    *(int64_t *)(v6 + 160) = v5;
    int64_t v248 = *v163; // 0x41239b
    int64_t v249 = function_408ca0(v248 + 112, v248 + 128, 0, 0, v154); // 0x4123ab
    *v182 = v249;
    if (v249 != 0) {
        goto lab_0x411300;
    } else {
        goto lab_0x4123be;
    }
}
// Address range: 0x412750 - 0x41288e
int64_t function_412750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_411260(a1, a2, a3, a4, a5, a6); // 0x41277a
    int64_t v1; // 0x412750
    if ((int32_t)v1 != 0 == result == 0) {
        // 0x412825
        return 0;
    }
    char * v2 = (char *)(a3 + 8); // 0x412798
    char v3 = *v2; // 0x412798
    if ((v3 & -9) == 2) {
        // 0x412825
        return result;
    }
    // 0x4127a6
    int64_t v4; // bp-72, 0x412750
    int64_t v5 = &v4;
    int64_t v6 = result;
    int64_t result2 = v6; // 0x4127a8
    if (a5 != 0 == v3 == 9) {
        return result2;
    }
    int64_t v7 = function_411260(a1, a2, a3, a4, a5, a6); // 0x4127c3
    int32_t v8 = v7;
    if (v7 == 0 == (v8 != 0)) {
        // 0x41284c
        result2 = 0;
        if (v6 == 0) {
            return result2;
        } else {
            // 0x412851
            function_4064d0(v6, 0x4076e0, 0);
            result2 = 0;
            return result2;
        }
    }
    int64_t v9; // 0x412805
    char v10; // 0x412817
    while (v6 != 0 && v7 != 0) {
        // 0x4127e0
        v9 = function_408ca0(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
        if (v9 == 0) {
            // 0x412865
            function_4064d0(v7, 0x4076e0, 0);
            function_4064d0(v6, 0x4076e0, 0);
            *(int32_t *)a6 = 12;
            result2 = 0;
            return result2;
        }
        // 0x412814
        v10 = *v2;
        result2 = v9;
        if ((v10 & -9) == 2) {
            return result2;
        }
        v6 = v9;
        result2 = v6;
        if (a5 != 0 == v10 == 9) {
            return result2;
        }
        // 0x4127af
        v7 = function_411260(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x41284c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x412851
                function_4064d0(v6, 0x4076e0, 0);
                result2 = 0;
                return result2;
            }
        }
    }
    int64_t v11 = v6 == 0 ? v7 : v6; // 0x412843
    char v12 = *v2; // 0x412798
    result2 = v11;
    while ((v12 & -9) != 2) {
        // 0x4127a6
        v6 = v11;
        result2 = v6;
        if (a5 != 0 == v12 == 9) {
            return result2;
        }
        // 0x4127af
        v7 = function_411260(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x41284c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x412851
                function_4064d0(v6, 0x4076e0, 0);
                result2 = 0;
                return result2;
            }
        }
        while (v6 != 0 && v7 != 0) {
            // 0x4127e0
            v9 = function_408ca0(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
            if (v9 == 0) {
                // 0x412865
                function_4064d0(v7, 0x4076e0, 0);
                function_4064d0(v6, 0x4076e0, 0);
                *(int32_t *)a6 = 12;
                result2 = 0;
                return result2;
            }
            // 0x412814
            v10 = *v2;
            result2 = v9;
            if ((v10 & -9) == 2) {
                return result2;
            }
            v6 = v9;
            result2 = v6;
            if (a5 != 0 == v10 == 9) {
                return result2;
            }
            // 0x4127af
            v7 = function_411260(a1, a2, a3, a4, a5, a6);
            v8 = v7;
            if (v7 == 0 == (v8 != 0)) {
                // 0x41284c
                result2 = 0;
                if (v6 == 0) {
                    return result2;
                } else {
                    // 0x412851
                    function_4064d0(v6, 0x4076e0, 0);
                    result2 = 0;
                    return result2;
                }
            }
        }
        // 0x412840
        v11 = v6 == 0 ? v7 : v6;
        v12 = *v2;
        result2 = v11;
    }
  lab_0x412825_2:
    // 0x412825
    return result2;
}
// Address range: 0x412890 - 0x4129e1
int64_t function_412890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a2 + 168); // 0x4128b2
    int64_t v2 = function_412750(a1, a2, a3, a4, a5, a6); // 0x4128c2
    int64_t v3; // 0x412890
    if ((int32_t)v3 != 0 && v2 == 0) {
        // 0x4128e1
        return 0;
    }
    char * v4 = (char *)(a3 + 8); // 0x412979
    int64_t * v5 = (int64_t *)(a1 + 72);
    int64_t v6 = a2 + 112;
    int64_t v7; // bp-72, 0x412890
    int64_t v8 = &v7;
    int64_t v9 = v2;
    int64_t result = v9; // 0x41297d
    while (*v4 == 10) {
        // 0x412983
        *v5 = (0x100000000 * function_410af0((int64_t *)a3, a1, a4 | 0x800000) >> 32) + *v5;
        char v10 = *v4; // 0x41299f
        int64_t v11 = 0; // 0x4129ab
        if ((v10 & -9) != 2 && a5 != 0 != (v10 == 9)) {
            // 0x412907
            v11 = function_412750(a1, a2, a3, a4, a5, a6);
            int64_t v12; // 0x412890
            if (v11 == 0 == (*(int32_t *)&v12 != 0)) {
                // 0x4129c4
                result = 0;
                if (v9 == 0) {
                    return result;
                } else {
                    // 0x4129cd
                    function_4064d0(v9, 0x4076e0, 0);
                    result = 0;
                    return result;
                }
            }
        }
        int64_t v13 = function_408ca0(v6, a2 + 128, (int32_t)v9, (int32_t)v11, v8); // 0x41296c
        if (v13 == 0) {
            // 0x4129b8
            *(int32_t *)a6 = 12;
            result = 0;
            return result;
        }
        v9 = v13;
        result = v9;
    }
  lab_0x4128e1:
    // 0x4128e1
    return result;
}
// Address range: 0x4129f0 - 0x41379a
int64_t function_4129f0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4129f0
    int128_t v1; // 0x4129f0
    int128_t v2 = v1;
    int64_t v3; // 0x4129f0
    int64_t v4 = v3;
    char * v5 = (char *)(a1 + 56); // 0x412a0d
    *v5 = *v5 & -112;
    int64_t v6 = a1 + 8;
    int64_t * v7 = (int64_t *)v6; // 0x412a11
    int32_t result = 0; // bp-268, 0x412a19
    *(int64_t *)(a1 + 24) = a4;
    int64_t * v8 = (int64_t *)(a1 + 16); // 0x412a28
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 48); // 0x412a30
    *v9 = 0;
    int64_t v10 = v6; // 0x412a38
    int64_t v11 = a1; // 0x412a38
    if (*v7 < 232) {
        int64_t * v12 = (int64_t *)a1; // 0x413578
        int64_t * mem = realloc(v12, 232); // 0x413578
        if (mem == NULL) {
            // 0x41333b
            return 12;
        }
        // 0x413589
        v11 = (int64_t)mem;
        *v7 = 232;
        *v12 = v11;
        v10 = v11 + 8;
    }
    // 0x412a3e
    *v8 = 232;
    int64_t v13 = v10 & -8; // 0x412a4f
    int64_t * v14 = (int64_t *)v11; // 0x412a53
    *v14 = 0;
    *(int64_t *)(v11 + 224) = 0;
    __asm_rep_stosq_memset((char *)v13, 0, (v11 + 232 - v13) / 8 % 0x20000000);
    *(int32_t *)(v11 + 128) = 15;
    int64_t v15; // 0x4129f0
    int64_t v16; // 0x4129f0
    uint64_t v17; // 0x4129f0
    int64_t v18; // 0x4129f0
    int64_t v19; // 0x4129f0
    int64_t v20; // 0x412a91
    int64_t * v21; // 0x412add
    int32_t * v22; // 0x412aeb
    char * v23; // 0x412b48
    if (a3 < 0x555555555555555) {
        // 0x412a91
        v20 = a3 + 1;
        *(int64_t *)v10 = v20;
        *v14 = (int64_t)malloc(16 * (int32_t)v20);
        int64_t size = 1; // 0x412ab1
        int64_t v24 = 0; // 0x412ab1
        if (a3 != 0) {
            int64_t v25 = 2; // 0x412ac0
            int64_t v26 = v25; // 0x412ac6
            while (v25 <= a3) {
                // 0x412ac0
                v25 = 2 * v26;
                v26 = v25;
            }
            // 0x412ac8
            size = v25;
            v24 = v25 - 1;
        }
        int64_t * mem2 = calloc(24, (int32_t)size); // 0x412ad1
        *(int64_t *)(v11 + 136) = v24;
        v21 = (int64_t *)(v11 + 64);
        *v21 = (int64_t)mem2;
        int32_t v27 = __ctype_get_mb_cur_max(); // 0x412ae1
        v22 = (int32_t *)(v11 + 180);
        *v22 = v27;
        char * v28 = nl_langinfo(14); // 0x412af1
        if ((*v28 & -33) == 85) {
            int64_t v29 = (int64_t)v28; // 0x412af1
            if ((*(char *)(v29 + 1) & -33) == 84) {
                // 0x412b0d
                if ((*(char *)(v29 + 2) & -33) == 70) {
                    int64_t v30 = v29 + 3; // 0x412b1b
                    bool v31; // 0x4129f0
                    int64_t v32 = v31 ? -1 : 1; // 0x412b31
                    int64_t v33 = (int64_t)&g13; // 0x4129f0
                    int64_t v34 = v30 + (int64_t)(*(char *)v30 == 45); // 0x4129f0
                    int64_t v35 = 2; // 0x412b31
                    unsigned char v36 = *(char *)v34; // 0x412b31
                    char v37 = *(char *)v33; // 0x412b31
                    char v38 = v37; // 0x412b31
                    bool v39 = false; // 0x412b31
                    while (v36 == v37) {
                        v35--;
                        v33 += v32;
                        v34 += v32;
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
                    if ((v36 >= v40 && !v39) == v36 < v40) {
                        char * v41 = (char *)(v11 + 176); // 0x412b3c
                        *v41 = *v41 | 4;
                    }
                }
            }
        }
        // 0x412b48
        v23 = (char *)(v11 + 176);
        char v42 = *v23; // 0x412b48
        *v23 = v42 & -9;
        if (*v22 < 2) {
            goto lab_0x412b73;
        } else {
            if ((v42 & 4) == 0) {
                int64_t * mem3 = calloc(32, 1); // 0x4133ea
                int64_t * v43 = (int64_t *)(v11 + 120); // 0x4133ef
                *v43 = (int64_t)mem3;
                int64_t v44 = 0; // 0x4133f6
                if (mem3 == NULL) {
                    // 0x4133d0
                    result = 12;
                    goto lab_0x4133ae;
                } else {
                    while (true) {
                        int64_t v45 = v44;
                        v16 = 0;
                        v18 = 8 * v45;
                        while (true) {
                          lab_0x413426_2:
                            // 0x413426
                            v19 = v18;
                            v17 = v16;
                            int32_t wc = v19; // 0x413426
                            int32_t v46 = btowc(wc); // 0x41342f
                            int64_t v47 = v19 & 0xffffff80; // 0x41343d
                            if (v46 == -1) {
                                if (v47 != 0) {
                                    goto lab_0x41341b;
                                } else {
                                    // 0x413414
                                    *v23 = *v23 | 8;
                                    goto lab_0x41341b;
                                }
                            } else {
                                int64_t * v48 = (int64_t *)(*v43 + v45); // 0x413455
                                *v48 = *v48 | 1 << v17 % 64;
                                if (v47 != 0) {
                                    goto lab_0x41341b;
                                } else {
                                    if (v46 != wc) {
                                        // 0x413414
                                        *v23 = *v23 | 8;
                                        goto lab_0x41341b;
                                    } else {
                                        int64_t v49 = v17 + 1; // 0x413460
                                        v15 = v49;
                                        if ((int32_t)v49 == 64) {
                                            // break -> 0x413470
                                            break;
                                        }
                                        goto lab_0x413426;
                                    }
                                }
                            }
                        }
                      lab_0x413470:
                        // 0x413470
                        v44 = v45 + 8;
                        if (v45 == 24) {
                            // break -> 0x412b73
                            break;
                        }
                    }
                    goto lab_0x412b73;
                }
            } else {
                // 0x412b6b
                *(int64_t *)(v11 + 120) = (int64_t)&g14;
                goto lab_0x412b73;
            }
        }
    } else {
        // 0x4133d0
        result = 12;
        goto lab_0x4133ae;
    }
  lab_0x41341b:;
    int64_t v50 = v17 + 1; // 0x41341b
    v15 = v50;
    if ((int32_t)v50 == 64) {
        // break -> 0x413470
        goto lab_0x413470;
    }
    goto lab_0x413426;
  lab_0x413426:
    // 0x413426
    v16 = v15 & 0xffffffff;
    v18 = v19 + 1 & 0xffffffff;
    goto lab_0x413426_2;
  lab_0x413630_2:
    // 0x413630
    result = 0;
    int64_t v51; // 0x4129f0
    int64_t v52 = v51; // 0x413638
    int64_t v53 = v51; // 0x413638
    goto lab_0x412d39;
  lab_0x412f20:;
    // 0x412f20
    int64_t * v83; // 0x4129f0
    int64_t v91 = *v83; // 0x412f20
    int64_t v92 = function_4064d0(v91, 0x409050, (int32_t)a1); // 0x412f2c
    int64_t v93 = v92; // 0x412f33
    int64_t v94 = v91; // 0x412f33
    int64_t v95; // 0x4129f0
    int64_t v73; // 0x4129f0
    int64_t v96; // bp-232, 0x4129f0
    int64_t v68; // bp-248, 0x4129f0
    int64_t * v80; // 0x412e77
    int64_t * v97; // 0x4129f0
    if ((int32_t)v92 != 0) {
        goto lab_0x413148_2;
    } else {
        int64_t v98 = *v83; // 0x412f39
        int64_t v99 = function_4064d0(v98, 0x40b580, (int32_t)v73); // 0x412f45
        v93 = v99;
        v94 = v98;
        if ((int32_t)v99 != 0) {
            goto lab_0x413148_2;
        } else {
            // 0x412f52
            function_408510(*v83, 0x408260, v73);
            int64_t v100 = *v83; // 0x412f63
            int64_t v101 = function_408510(v100, 0x407d60, v73); // 0x412f6f
            v93 = v101;
            v94 = v100;
            if ((int32_t)v101 != 0) {
                goto lab_0x413148_2;
            } else {
                // 0x412f88
                v97 = (int64_t *)(v73 + 16);
                int64_t v102 = 0; // 0x4129f0
                int64_t v103 = 0; // 0x4129f0
                int64_t v104; // 0x4129f0
                while (true) {
                    int64_t v105 = *v97; // 0x412f88
                    int64_t v106 = v105; // 0x412f8c
                    int64_t v107 = v102; // 0x412f8c
                    int64_t v108 = v103; // 0x412f8c
                    int64_t v109 = v103; // 0x412f8c
                    int64_t v110 = v102; // 0x412f8c
                    v104 = v103;
                    int64_t v111; // 0x4129f0
                    if (v105 == v103) {
                      lab_0x412fac:
                        // 0x412fac
                        v111 = v109;
                        if ((char)v110 == 0) {
                            // break -> 0x413040
                            break;
                        }
                      lab_0x412fb5:
                        // 0x412fb5
                        v106 = v111;
                        v107 = 0;
                        v108 = 0;
                    }
                    int64_t v112 = v107;
                    int64_t v113 = v106; // 0x412fa6
                    int64_t v114 = v108;
                    int64_t v115; // 0x412fa2
                    while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                        // 0x412fa2
                        v115 = v114 + 1;
                        v109 = v113;
                        v110 = v112;
                        v104 = v115;
                        if (v113 == v115) {
                            goto lab_0x412fac;
                        }
                        v114 = v115;
                    }
                    int64_t v116 = function_408740((int128_t *)&v68, v73, v114, 1); // 0x412fd3
                    if ((int32_t)v116 != 0) {
                        // 0x413148
                        v93 = v116;
                        v94 = &v68;
                        goto lab_0x413148_2;
                    }
                    int64_t v117 = v114 + 1; // 0x412fe9
                    v102 = v112;
                    v103 = v117;
                    while (*(int64_t *)((0x1800000000 * v114 >> 32) + 8 + *v80) == 0) {
                        // 0x412ff5
                        free((int64_t *)v96);
                        int64_t v118 = *v97; // 0x413005
                        v111 = v118;
                        if (v118 == v117) {
                            goto lab_0x412fb5;
                        }
                        v112 = 1;
                        v113 = v118;
                        v114 = v117;
                        while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                            // 0x412fa2
                            v115 = v114 + 1;
                            v109 = v113;
                            v110 = v112;
                            v104 = v115;
                            if (v113 == v115) {
                                goto lab_0x412fac;
                            }
                            v114 = v115;
                        }
                        // 0x412fc0
                        v116 = function_408740((int128_t *)&v68, v73, v114, 1);
                        if ((int32_t)v116 != 0) {
                            // 0x413148
                            v93 = v116;
                            v94 = &v68;
                            goto lab_0x413148_2;
                        }
                        // 0x412fe0
                        v117 = v114 + 1;
                        v102 = v112;
                        v103 = v117;
                    }
                }
                // 0x413040
                v95 = v104;
                if ((*v5 & 16) != 0) {
                    goto lab_0x413158;
                } else {
                    // 0x41304a
                    if (*v9 == 0) {
                        goto lab_0x413158;
                    } else {
                        // 0x413055
                        if (*(char *)(v73 + 176) % 2 == 0) {
                            goto lab_0x413158;
                        } else {
                            goto lab_0x413063;
                        }
                    }
                }
            }
        }
    }
  lab_0x413148_2:
    // 0x413148
    result = v93;
    int64_t v67 = v94; // 0x413150
    goto lab_0x413358;
  lab_0x4131e8:;
    // 0x4131e8
    int64_t v140; // 0x4129f0
    int64_t v141 = v140 + 1; // 0x4131e8
    uint64_t v78; // 0x4129f0
    if (v78 <= v141) {
        // break -> 0x413290
        goto lab_0x413290;
    }
    int64_t v142 = v141; // 0x4129f0
    goto lab_0x4131f5_2;
  lab_0x412b73:;
    // 0x412b73
    int64_t v129; // bp-208, 0x4129f0
    int64_t v124; // bp-216, 0x4129f0
    int64_t * v158; // 0x412b94
    int64_t v128; // 0x412b94
    if (*v14 == 0) {
        // 0x4133d0
        result = 12;
        goto lab_0x4133ae;
    } else {
        // 0x412b7d
        if (*v21 == 0) {
            // 0x4133d0
            result = 12;
            goto lab_0x4133ae;
        } else {
            // 0x412b88
            v158 = (int64_t *)(a1 + 40);
            v128 = *v158;
            result = 0;
            __asm_rep_stosq_memset((char *)&v129, 0, 18);
            v124 = a2;
            if (a3 != 0) {
                int64_t v159 = &v124; // 0x413015
                int64_t v160 = function_406910(v159, v20); // 0x41301a
                v93 = v160;
                v94 = v159;
                if ((int32_t)v160 != 0) {
                    goto lab_0x413148_2;
                } else {
                    // 0x413027
                    goto lab_0x412c32;
                }
            } else {
                goto lab_0x412c32;
            }
        }
    }
  lab_0x4133ae:
    // 0x4133ae
    function_40b610(v11);
    *(int64_t *)a1 = 0;
    *v7 = 0;
    // 0x41333b
    return result;
  lab_0x412c32:;
    int64_t v125 = a4 & 0x400000; // 0x412bb7
    int32_t v126 = *v22;
    int64_t v127 = (v128 | v125) == 0 ? a2 : v129;
    v129 = v127;
    if (v125 == 0) {
        if (v126 > 1) {
            int64_t v130 = &v124;
            function_406d00(v130);
            result = 0;
            v52 = v130;
            v53 = v130;
        } else {
            if ((v128 || v125) != 0) {
                int64_t v131 = a3 - v4; // 0x412cc6
                int64_t v132 = v131 == 0 | v131 < 0 != ((v131 ^ a3) & (v4 ^ a3)) < 0 ? a3 : v4; // 0x412cd6
                if (v132 > v3) {
                    unsigned char v133 = *(char *)(2 * v3 + v124); // 0x412d0d
                    *(char *)(v127 + v3) = *(char *)(v128 + (int64_t)v133);
                    int64_t v134 = v3 + 1; // 0x412d18
                    int64_t v135 = v134; // 0x412d1f
                    if (v132 != v134) {
                        unsigned char v136 = *(char *)(v135 + v3 + v124); // 0x412d0d
                        *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                        int64_t v137 = v135 + 1; // 0x412d18
                        v135 = v137;
                        while (v132 != v137) {
                            // 0x412cf0
                            v136 = *(char *)(v135 + v3 + v124);
                            *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                            v137 = v135 + 1;
                            v135 = v137;
                        }
                    }
                }
            }
            // 0x412d21
            result = 0;
            v52 = &v124;
            v53 = v126;
        }
        goto lab_0x412d39;
    } else {
        // 0x412c48
        v51 = &v124;
        if (v126 < 2) {
            // 0x413558
            function_406c80(v51);
            result = 0;
            v52 = v51;
            v53 = v51;
            goto lab_0x412d39;
        } else {
            int64_t v138 = function_406eb0(v51); // 0x412c56
            v93 = v138;
            v94 = v51;
            // 0x412c51
            while ((int32_t)v138 == 0) {
                if (v3 >= a3) {
                    goto lab_0x413630_2;
                }
                // 0x412c71
                if (v4 > v3 + (int64_t)*v22) {
                    goto lab_0x413630_2;
                }
                int64_t v139 = function_406910(v51, 2 * v4); // 0x412c99
                v93 = v139;
                v94 = v51;
                if ((int32_t)v139 != 0) {
                    // break -> 0x413148
                    break;
                }
                v138 = function_406eb0(v51);
                v93 = v138;
                v94 = v51;
            }
            goto lab_0x413148_2;
        }
    }
  lab_0x413358:;
    int64_t * v119 = (int64_t *)(v67 + 112); // 0x413358
    int64_t v120 = *v119; // 0x413358
    if (v120 != 0) {
        int64_t * v121 = (int64_t *)v120; // 0x413368
        int64_t v122 = *v121; // 0x413368
        free(v121);
        while (v122 != 0) {
            // 0x413368
            v121 = (int64_t *)v122;
            v122 = *v121;
            free(v121);
        }
    }
    // 0x413378
    *v119 = 0;
    int64_t * v123 = (int64_t *)(v67 + 32); // 0x413380
    *(int32_t *)(v67 + 128) = 15;
    *(int64_t *)(v67 + 104) = 0;
    free((int64_t *)*v123);
    *v123 = 0;
    function_407c60(&v124);
    goto lab_0x4133ae;
  lab_0x412d39:;
    int64_t v54 = v53;
    int64_t v55 = v52;
    *v9 = 0;
    *(int64_t *)(v54 + 216) = a4;
    int32_t v56; // bp-264, 0x4129f0
    function_410af0((int64_t *)&v56, v55, a4 | 0x800000);
    int64_t v57 = &v56; // 0x412d71
    int64_t v58 = function_412890(v55, a1, v57, a4, 0, (int64_t)&result); // 0x412d88
    int64_t v59; // 0x4129f0
    int64_t v60; // 0x4129f0
    int64_t v61; // 0x4129f0
    int64_t v62; // 0x4129f0
    int64_t v63; // 0x4135d9
    int64_t v64; // 0x4135e7
    int64_t v65; // 0x4129f0
    int64_t v66; // 0x413602
    if (result != 0) {
        if (v58 == 0) {
            // 0x413752
            *(int64_t *)(v11 + 104) = 0;
            v67 = v55;
            goto lab_0x413358;
        } else {
            // 0x4135d9
            v63 = v54 + 112;
            v64 = v54 + 128;
            v65 = &v68;
            v66 = function_408ca0(v63, v64, 0, 0, v65);
            goto lab_0x412dd7;
        }
    } else {
        int64_t v69 = v54 + 112; // 0x412d99
        int64_t v70 = v54 + 128; // 0x412da7
        int64_t v71 = &v68;
        int64_t v72 = function_408ca0(v69, v70, 0, 0, v71); // 0x412dc2
        v65 = v71;
        v64 = v70;
        v66 = v72;
        v63 = v69;
        v62 = 2;
        v61 = v72;
        v60 = v69;
        v59 = v72;
        if (v58 == 0) {
            goto lab_0x412df6;
        } else {
            goto lab_0x412dd7;
        }
    }
  lab_0x412df6:
    // 0x412df6
    v73 = v60;
    int64_t * v74; // 0x4129f0
    int64_t * v75; // 0x412e12
    int64_t * v76; // 0x412ead
    int64_t * v77; // 0x4129f0
    if (v61 == 0 || v59 == 0) {
        // 0x413618
        result = 12;
        *(int64_t *)(v11 + 104) = 0;
        v67 = v73;
        goto lab_0x413358;
    } else {
        // 0x412e0e
        v78 = v62;
        v75 = (int64_t *)(v11 + 104);
        *v75 = v59;
        int32_t v79 = (int32_t)*(int64_t *)(v73 + 8);
        int32_t size2 = 8 * v79; // 0x412e2f
        int64_t * mem4 = malloc(size2); // 0x412e2f
        *(int64_t *)(v73 + 24) = (int64_t)mem4;
        int64_t * mem5 = malloc(size2); // 0x412e43
        *(int64_t *)(v73 + 32) = (int64_t)mem5;
        int32_t size3 = 24 * v79; // 0x412e54
        int64_t * mem6 = malloc(size3); // 0x412e54
        *(int64_t *)(v73 + 40) = (int64_t)mem6;
        int64_t * mem7 = malloc(size3); // 0x412e65
        v80 = (int64_t *)(v73 + 48);
        *v80 = (int64_t)mem7;
        if (mem4 == NULL | mem5 == NULL || mem6 == NULL || mem7 == NULL) {
            // 0x413350
            result = 12;
            v67 = v73;
            goto lab_0x413358;
        } else {
            int64_t v81 = *v9; // 0x412e9c
            int64_t * mem8 = malloc(8 * (int32_t)v81); // 0x412ea8
            int64_t v82 = (int64_t)mem8; // 0x412ea8
            v76 = (int64_t *)(v73 + 224);
            *v76 = v82;
            if (mem8 == NULL) {
                // 0x412e9c
                v83 = (int64_t *)(v73 + 104);
                goto lab_0x412f20;
            } else {
                // 0x412eb9
                if (v81 != 0) {
                    int64_t v84 = 0;
                    *(int64_t *)(8 * v84 + v82) = v84;
                    int64_t v85 = v84 + 1; // 0x412ec4
                    while (v85 != v81) {
                        // 0x412ec0
                        v84 = v85;
                        *(int64_t *)(8 * v84 + v82) = v84;
                        v85 = v84 + 1;
                    }
                }
                // 0x412ecd
                v77 = (int64_t *)(v73 + 104);
                function_408510(*v77, 0x4081d0, v73);
                int64_t v86 = *v9; // 0x412ede
                int64_t v87 = *v76;
                v74 = (int64_t *)v87;
                if (v86 == 0) {
                    goto lab_0x412f0f;
                } else {
                    // 0x412eeb
                    v83 = v77;
                    if (*v74 == 0) {
                        int64_t v88 = 1; // 0x412f06
                        while (v88 != v86) {
                            int64_t v89 = v88; // 0x412f04
                            v83 = v77;
                            if (*(int64_t *)(8 * v88 + v87) != v88) {
                                goto lab_0x412f20;
                            }
                            v88 = v89 + 1;
                        }
                        goto lab_0x412f0f;
                    } else {
                        goto lab_0x412f20;
                    }
                }
            }
        }
    }
  lab_0x412dd7:;
    int64_t v90 = function_408ca0(v63, v64, (int32_t)v58, (int32_t)v66, v65); // 0x412deb
    v62 = 16;
    v61 = v66;
    v60 = v63;
    v59 = v90;
    goto lab_0x412df6;
  lab_0x412f0f:
    // 0x412f0f
    free(v74);
    *v76 = 0;
    v83 = v77;
    goto lab_0x412f20;
  lab_0x413158:
    // 0x413158
    if (*(int64_t *)(v73 + 152) != 0) {
        goto lab_0x413063;
    } else {
        goto lab_0x413166;
    }
  lab_0x413063:;
    int64_t size4 = 24 * v95; // 0x413067
    int64_t * mem9 = malloc((int32_t)size4); // 0x41306b
    int64_t v161 = (int64_t)mem9; // 0x41306b
    int64_t * v162 = (int64_t *)(v73 + 56); // 0x413070
    *v162 = v161;
    if (mem9 == NULL) {
        // 0x413730
        result = 12;
        v67 = size4;
        goto lab_0x413358;
    } else {
        if (v95 != 0) {
            int128_t v163 = __asm_pxor(v2, v2); // 0x413098
            __asm_movups(*(int128_t *)mem9, v163);
            *(int64_t *)(v161 + 16) = 0;
            uint64_t v164 = *v97; // 0x4130af
            int64_t v165 = 1; // 0x4130b6
            int128_t v166 = v163; // 0x4130b6
            int64_t v167 = v164; // 0x4130b6
            if (v164 > 1) {
                int128_t v168 = v166;
                int128_t v169 = __asm_pxor(v168, v168); // 0x413098
                int64_t v170 = v165 + 1; // 0x41309c
                int64_t v171 = *v162 + 24 * v165; // 0x4130a0
                __asm_movups(*(int128_t *)v171, v169);
                *(int64_t *)(v171 + 16) = 0;
                uint64_t v172 = *v97; // 0x4130af
                v165 = v170;
                v167 = v172;
                while (v172 > v170) {
                    // 0x413090
                    v168 = v169;
                    v169 = __asm_pxor(v168, v168);
                    v170 = v165 + 1;
                    v171 = *v162 + 24 * v165;
                    __asm_movups(*(int128_t *)v171, v169);
                    *(int64_t *)(v171 + 16) = 0;
                    v172 = *v97;
                    v165 = v170;
                    v167 = v172;
                }
            }
            int64_t v173 = v167;
            if (v173 != 0) {
                int64_t v174 = *v80; // 0x4130ca
                int64_t v175 = 0;
                int64_t v176 = 24 * v175; // 0x4130da
                int64_t v177 = v176 + v174; // 0x4130e7
                int64_t v178 = *(int64_t *)(v177 + 8); // 0x4130ea
                int64_t v179 = v173; // 0x4130f3
                int64_t v180 = v174; // 0x4130f3
                int64_t v181; // 0x4129f0
                int64_t v182; // 0x41312e
                int64_t v183; // 0x413137
                int64_t v184; // 0x413100
                int64_t v185; // 0x413109
                if (v178 >= 0 == (v178 != 0)) {
                    // 0x41311d
                    v181 = *(int64_t *)(v177 + 16);
                    v185 = 0;
                    v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                    v183 = function_4069b0(v182, v175);
                    v93 = 12;
                    v94 = v182;
                    if ((char)v183 == 0) {
                        goto lab_0x413148_2;
                    }
                    // 0x413100
                    v184 = *v80;
                    v185++;
                    v181 = 0x100000000 * v181 >> 32;
                    while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                        // 0x41311d
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_4069b0(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x413148_2;
                        }
                        // 0x413100
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                    }
                    // 0x4135b0
                    v179 = *v97;
                    v180 = v184;
                }
                // 0x4135b0
                v174 = v180;
                int64_t v186 = v179; // 0x4135bb
                int64_t v187 = v175 + 1; // 0x4135b0
                while (v186 > v187) {
                    // 0x4130ce
                    v175 = v187;
                    v176 = 24 * v175;
                    v177 = v176 + v174;
                    v178 = *(int64_t *)(v177 + 8);
                    v179 = v186;
                    v180 = v174;
                    if (v178 >= 0 == (v178 != 0)) {
                        // 0x41311d
                        v181 = *(int64_t *)(v177 + 16);
                        v185 = 0;
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_4069b0(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x413148_2;
                        }
                        // 0x413100
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                        while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                            // 0x41311d
                            v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                            v183 = function_4069b0(v182, v175);
                            v93 = 12;
                            v94 = v182;
                            if ((char)v183 == 0) {
                                goto lab_0x413148_2;
                            }
                            // 0x413100
                            v184 = *v80;
                            v185++;
                            v181 = 0x100000000 * v181 >> 32;
                        }
                        // 0x4135b0
                        v179 = *v97;
                        v180 = v184;
                    }
                    // 0x4135b0
                    v174 = v180;
                    v186 = v179;
                    v187 = v175 + 1;
                }
            }
        }
        goto lab_0x413166;
    }
  lab_0x413166:
    // 0x413166
    result = 0;
    unsigned char result2 = *v23 / 4 & (char)(v125 == 0); // 0x413180
    if (result2 != 0) {
        // 0x4134a0
        if (*v158 == 0) {
            // 0x4134ab
            if (*(int64_t *)(v11 + 16) != 0) {
                // 0x4134b8
                return result2;
            }
            int64_t v188 = *(int64_t *)(v11 + 152); // 0x413766
            *v22 = 1;
            *v23 = 2 * (char)(v188 >= 0 == (v188 != 0)) | *v23 & -7;
        }
    }
    int64_t v155 = &v68; // 0x41318c
    int64_t v189 = *(int64_t *)(*(int64_t *)(*v75 + 24) + 56); // 0x413193
    *(int64_t *)(v11 + 144) = v189;
    int64_t * v153 = (int64_t *)(v11 + 48); // 0x4131a2
    int64_t v190 = function_4090d0(v155, *v153 + 24 * v189); // 0x4131aa
    int64_t v191 = v190 & 0xffffffff; // 0x4131af
    int32_t v192 = v190; // 0x4131b2
    v56 = v192;
    int64_t v154 = v155; // 0x4131b8
    int64_t v156 = v191; // 0x4131b8
    if (v192 != 0) {
        goto lab_0x4132cf;
    } else {
        // 0x4131be
        if (*(int64_t *)(v11 + 152) >= 1) {
            int64_t v152 = &v96;
            v142 = 0;
            while (true) {
              lab_0x4131f5_2:
                // 0x4131f5
                v140 = v142;
                int64_t v143 = *v14; // 0x4131fa
                int64_t v144 = *(int64_t *)(v96 + 8 * v140); // 0x4131fd
                int64_t v145 = 16 * v144 + v143; // 0x413208
                if (*(char *)(v145 + 8) == 4) {
                    int64_t * v146 = (int64_t *)v145;
                    int64_t v147 = 0;
                    int64_t v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143; // 0x413229
                    int64_t v149; // 0x41323a
                    int64_t v150; // 0x413250
                    int64_t v151; // 0x41326f
                    if (*(char *)(v148 + 8) == 9) {
                        // 0x413232
                        if (*(int64_t *)v148 == *v146) {
                            // 0x41323a
                            v149 = *(int64_t *)(v11 + 40);
                            v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                            if (function_408030(v78, v152, v150) != 0) {
                                goto lab_0x4131e8;
                            } else {
                                // 0x413260
                                v151 = function_408570(&v68, (int128_t *)(*v153 + 24 * v150));
                                if ((int32_t)v151 != 0) {
                                    // 0x4136f0
                                    v154 = v155;
                                    v156 = v151 & 0xffffffff;
                                    goto lab_0x4132cf;
                                } else {
                                    // 0x4131f5
                                    v142 = 1;
                                    goto lab_0x4131f5_2;
                                }
                            }
                        }
                    }
                    int64_t v157 = v147 + 1; // 0x413218
                    while (v78 != v157) {
                        // 0x413221
                        v147 = v157;
                        v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143;
                        if (*(char *)(v148 + 8) == 9) {
                            // 0x413232
                            if (*(int64_t *)v148 == *v146) {
                                // 0x41323a
                                v149 = *(int64_t *)(v11 + 40);
                                v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                                if (function_408030(v78, v152, v150) != 0) {
                                    goto lab_0x4131e8;
                                } else {
                                    // 0x413260
                                    v151 = function_408570(&v68, (int128_t *)(*v153 + 24 * v150));
                                    if ((int32_t)v151 != 0) {
                                        // 0x4136f0
                                        v154 = v155;
                                        v156 = v151 & 0xffffffff;
                                        goto lab_0x4132cf;
                                    } else {
                                        // 0x4131f5
                                        v142 = 1;
                                        goto lab_0x4131f5_2;
                                    }
                                }
                            }
                        }
                        // 0x413218
                        v157 = v147 + 1;
                    }
                }
                goto lab_0x4131e8;
            }
        }
      lab_0x413290:;
        int64_t v193 = function_4092e0((int128_t *)&v56, v11, &v68, 0); // 0x41329d
        *(int64_t *)(v11 + 72) = v193;
        if (v193 == 0) {
            goto lab_0x413548;
        } else {
            // 0x4132af
            if (*(char *)(v193 + 104) < 0) {
                int64_t v194 = function_4092e0((int128_t *)&v56, v11, &v68, 1); // 0x4134f0
                int64_t * v195 = (int64_t *)(v11 + 80); // 0x413500
                *v195 = v194;
                int64_t v196 = function_4092e0((int128_t *)&v56, v11, &v68, 2); // 0x413509
                int64_t * v197 = (int64_t *)(v11 + 88); // 0x413519
                *v197 = v196;
                int64_t v198 = function_4092e0((int128_t *)&v56, v11, &v68, 6); // 0x413522
                *(int64_t *)(v11 + 96) = v198;
                if (*v195 == 0) {
                    goto lab_0x413548;
                } else {
                    // 0x413532
                    if (v198 != 0 == (*v197 != 0)) {
                        goto lab_0x4132c5;
                    } else {
                        goto lab_0x413548;
                    }
                }
            } else {
                // 0x4132b9
                *(int64_t *)(v11 + 96) = v193;
                *(int64_t *)(v11 + 88) = v193;
                *(int64_t *)(v11 + 80) = v193;
                goto lab_0x4132c5;
            }
        }
    }
  lab_0x4132cf:
    // 0x4132cf
    result = v156;
    int64_t * v199 = (int64_t *)(v154 + 112); // 0x4132d8
    int64_t v200 = *v199; // 0x4132d8
    if (v200 != 0) {
        int64_t * v201 = (int64_t *)v200; // 0x4132e8
        int64_t v202 = *v201; // 0x4132e8
        free(v201);
        while (v202 != 0) {
            // 0x4132e8
            v201 = (int64_t *)v202;
            v202 = *v201;
            free(v201);
        }
    }
    // 0x4132f8
    *v199 = 0;
    int64_t * v203 = (int64_t *)(v154 + 32); // 0x413301
    *(int32_t *)(v154 + 128) = 15;
    *(int64_t *)(v154 + 104) = 0;
    free((int64_t *)*v203);
    *v203 = 0;
    function_407c60(&v124);
    if (result == 0) {
        // 0x41333b
        return result;
    }
    goto lab_0x4133ae;
  lab_0x413548:
    // 0x413548
    v154 = v57;
    v156 = v56;
    goto lab_0x4132cf;
  lab_0x4132c5:
    // 0x4132c5
    free((int64_t *)v96);
    v154 = v96;
    v156 = v191;
    goto lab_0x4132cf;
}
// Address range: 0x4137a0 - 0x413807
int64_t function_4137a0(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 56); // 0x4137c0
    *v1 = *v1 & 111 | (char)(g73 / 0x200000) & 16 | -128;
    int64_t v2; // 0x4137a0
    int64_t v3 = function_4129f0(a3, a1, a2, g73, a1, v2); // 0x4137d5
    if ((int32_t)v3 == 0) {
        // 0x413800
        return 0;
    }
    int64_t v4 = *(int64_t *)((0x100000000 * v3 >> 29) + (int64_t)&g15); // 0x4137e7
    return (int64_t)dcgettext(NULL, (char *)(v4 + (int64_t)"Success"), 5);
}
// Address range: 0x413810 - 0x41381f
int64_t function_413810(int64_t a1) {
    int64_t result = g73; // 0x413810
    g73 = a1;
    return result;
}
// Address range: 0x413820 - 0x4138e3
int64_t function_413820(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x413826
    *(int64_t *)v1 = 0;
    *(int64_t *)(v1 + 248) = 0;
    int64_t v2 = v1 + 8 & -8; // 0x41384a
    __asm_rep_stosq_memset((char *)v2, 0, (v1 + 256 - v2) / 8 % 0x20000000);
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x413863
    int64_t v4 = *v3; // 0x413863
    function_40c2d0(a1, v4 + 16, v4 + 24, v1);
    int64_t v5 = *(int64_t *)(a1 + 80); // 0x413875
    int64_t v6 = v5; // 0x41387f
    if (*v3 != v5) {
        // 0x413881
        function_40c2d0(a1, v5 + 16, v5 + 24, v1);
        v6 = *v3;
    }
    int64_t v7 = *(int64_t *)(a1 + 88); // 0x413899
    int64_t v8 = v6; // 0x4138a1
    if (v7 != v6) {
        // 0x4138a3
        function_40c2d0(a1, v7 + 16, v7 + 24, v1);
        v8 = *v3;
    }
    int64_t v9 = *(int64_t *)(a1 + 96); // 0x4138bb
    if (v9 != v8) {
        // 0x4138c5
        function_40c2d0(a1, v9 + 16, v9 + 24, v1);
    }
    char * v10 = (char *)(a1 + 56); // 0x4138d8
    *v10 = *v10 | 8;
    return 0;
}
// Address range: 0x4138f0 - 0x413e7b
int64_t function_4138f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4138f0
    if (a4 < 0 || a4 > a3) {
        // 0x413a1f
        return -1;
    }
    int64_t v1 = a5 + a4; // 0x4138f5
    int64_t v2 = a3; // 0x413931
    if (v1 > a3) {
        goto lab_0x41395c;
    } else {
        // 0x413937
        v2 = a3;
        if (a5 > -1 == v1 < a4) {
            goto lab_0x41395c;
        } else {
            if (v1 < 0) {
                goto lab_0x413c18;
            } else {
                // 0x41394e
                v2 = v1;
                if (a5 >= 0 || v1 < a4) {
                    goto lab_0x41395c;
                } else {
                    goto lab_0x413c18;
                }
            }
        }
    }
  lab_0x41395c:;
    char * v3 = (char *)(a1 + 56); // 0x41395c
    int64_t v4 = (int64_t)*v3; // 0x41395c
    int64_t v5 = v4; // 0x413972
    int64_t v6 = v2; // 0x413972
    if (v2 > a4) {
        // 0x413974
        v5 = v4;
        v6 = v2;
        if ((v4 & 8) == 0 == (*(int64_t *)(a1 + 32) != 0)) {
            // 0x413b70
            function_413820(a1);
            v5 = (int64_t)*v3;
            v6 = v2;
        }
    }
    goto lab_0x413983;
  lab_0x413983:;
    int64_t size = 16; // 0x413985
    int64_t v7 = 0; // 0x413985
    int64_t v8 = 1; // 0x413985
    int64_t v9; // 0x4138f0
    if (a7 == 0 || (v5 & 16) != 0) {
        goto lab_0x4139b1;
    } else {
        uint64_t v10 = *(int64_t *)(a1 + 48); // 0x413997
        if ((v5 & 6) == 4) {
            int64_t v11 = *(int64_t *)a7; // 0x413b30
            if (v11 > v10) {
                // 0x4139a3
                v9 = v10 + 1;
                goto lab_0x4139aa;
            } else {
                // 0x413b3d
                v9 = v11;
                size = 16;
                v7 = 0;
                v8 = 1;
                if (v11 >= 0 == (v11 != 0)) {
                    goto lab_0x4139aa;
                } else {
                    goto lab_0x4139b1;
                }
            }
        } else {
            // 0x4139a3
            v9 = v10 + 1;
            goto lab_0x4139aa;
        }
    }
  lab_0x4139b1:;
    int64_t * mem = malloc((int32_t)size); // 0x4139c0
    if (mem == NULL) {
        // 0x413a1f
        return -2;
    }
    uint64_t v12 = v8;
    int64_t v13 = (int64_t)mem; // 0x4139c0
    int64_t result = -1; // 0x4138f0
    int64_t v14; // 0x4138f0
    int64_t v15; // 0x4138f0
    int64_t v16; // 0x4138f0
    int64_t v17; // 0x4138f0
    int64_t v18; // 0x4138f0
    int64_t v19; // 0x4138f0
    int64_t v20; // 0x4138f0
    int64_t v21; // 0x4138f0
    int64_t v22; // 0x4138f0
    int64_t v23; // 0x4138f0
    int64_t v24; // 0x4138f0
    int64_t v25; // 0x4138f0
    int64_t v26; // 0x4138f0
    int64_t v27; // 0x4138f0
    int64_t v28; // 0x4138f0
    int64_t v29; // 0x4138f0
    int64_t v30; // 0x4138f0
    int64_t v31; // 0x4138f0
    int64_t v32; // 0x4138f0
    int64_t v33; // 0x4138f0
    int64_t v34; // 0x4138f0
    int64_t v35; // 0x4138f0
    int64_t v36; // 0x4138f0
    int64_t v37; // 0x4138f0
    int64_t v38; // 0x4138f0
    char * v39; // 0x413a41
    switch ((int32_t)v40) {
        case 0: {
            // 0x413a38
            v14 = v7;
            v36 = a2;
            v26 = a3;
            v31 = v6;
            v16 = v6;
            v21 = a6;
            if (v14 == 0) {
                goto lab_0x413b08;
            } else {
                // 0x413a41
                v39 = (char *)(a1 + 56);
                int64_t v41 = v12 + 1; // 0x413a46
                unsigned char v42 = *v39 / 2 % 4;
                switch (v42) {
                    case 0: {
                        int32_t size2 = 8 * (int32_t)v41; // 0x413bc0
                        int64_t * mem2 = malloc(size2); // 0x413bc0
                        int64_t v43 = (int64_t)mem2; // 0x413bc0
                        *(int64_t *)(v14 + 8) = v43;
                        v35 = v41;
                        v25 = a3;
                        int64_t v44; // 0x4138f0
                        v30 = v44;
                        v15 = v44;
                        v20 = 0;
                        if (mem2 == NULL) {
                            goto lab_0x413aed;
                        } else {
                            int64_t * mem3 = malloc(size2); // 0x413be5
                            *(int64_t *)(v14 + 16) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x413cda
                                free(mem2);
                                v35 = v41;
                                v25 = a3;
                                v30 = v43;
                                v15 = v44;
                                v20 = 0;
                                goto lab_0x413aed;
                            } else {
                                // 0x413c02
                                *(int64_t *)v14 = v41;
                                v34 = v41;
                                v24 = a3;
                                v29 = v43;
                                v19 = 1;
                                goto lab_0x413a77;
                            }
                        }
                    }
                    case 1: {
                        int64_t * v45 = (int64_t *)v14; // 0x413c5e
                        v34 = a2;
                        v24 = a3;
                        v29 = v6;
                        v19 = 1;
                        if (*v45 >= v41) {
                            goto lab_0x413a77;
                        } else {
                            int64_t v46 = 8 * v41; // 0x413c68
                            int64_t * v47 = (int64_t *)(v14 + 8); // 0x413c70
                            int32_t v48 = v46; // 0x413c87
                            int64_t * mem4 = realloc((int64_t *)*v47, v48); // 0x413c87
                            v35 = v46;
                            v25 = 1;
                            v30 = v41;
                            v15 = v6;
                            v20 = 0;
                            if (mem4 == NULL) {
                                goto lab_0x413aed;
                            } else {
                                int64_t * v49 = (int64_t *)(v14 + 16); // 0x413c99
                                int64_t * mem5 = realloc((int64_t *)*v49, v48); // 0x413ca1
                                if (mem5 == NULL) {
                                    // 0x413cea
                                    free(mem4);
                                    v35 = v46;
                                    v25 = 1;
                                    v30 = v41;
                                    v15 = v6;
                                    v20 = 0;
                                    goto lab_0x413aed;
                                } else {
                                    // 0x413cb6
                                    *v47 = (int64_t)mem4;
                                    *v49 = (int64_t)mem5;
                                    *v45 = v41;
                                    v34 = v46;
                                    v24 = 1;
                                    v29 = v41;
                                    v19 = 1;
                                    goto lab_0x413a77;
                                }
                            }
                        }
                    }
                    default: {
                        // 0x413a5e
                        v38 = a2;
                        v28 = a3;
                        v33 = v6;
                        v18 = v6;
                        v23 = a6;
                        if (v42 != 2) {
                            goto lab_0x413d2c;
                        } else {
                            // 0x413a67
                            v34 = a2;
                            v24 = a3;
                            v29 = v6;
                            v19 = 2;
                            v37 = a2;
                            v27 = a3;
                            v32 = v6;
                            v17 = v6;
                            v22 = a6;
                            if (v12 > *(int64_t *)v14) {
                                goto lab_0x413d13;
                            } else {
                                goto lab_0x413a77;
                            }
                        }
                    }
                }
            }
        }
        case 1: {
            goto lab_0x413a17;
        }
        default: {
            goto lab_0x413a10;
        }
    }
  lab_0x413c18:
    // 0x413c18
    v5 = (int64_t)*(char *)(a1 + 56);
    v6 = 0;
    goto lab_0x413983;
  lab_0x413a10:
    // 0x413a10
    result = -2;
  lab_0x413a17:
    // 0x413a17
    free(mem);
    // 0x413a1f
    return result;
  lab_0x413b08:;
    int64_t v50 = *mem; // 0x413b0d
    result = v50;
    if ((char)a8 == 0) {
        // 0x413a17
        free(mem);
        // 0x413a1f
        return result;
    }
    if (v50 == a4) {
        // 0x413a17
        free(mem);
        // 0x413a1f
        return *(int64_t *)(v13 + 8) - v50;
    }
    // 0x413cfa
    __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 445, "re_search_stub");
    v37 = v36;
    v27 = v26;
    v32 = v31;
    v17 = v16;
    v22 = v21;
    goto lab_0x413d13;
  lab_0x4139aa:
    // 0x4139aa
    size = 16 * v9;
    v7 = a7;
    v8 = v9;
    goto lab_0x4139b1;
  lab_0x413d13:
    // 0x413d13
    __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 506, "re_copy_regs");
    v38 = v37;
    v28 = v27;
    v33 = v32;
    v18 = v17;
    v23 = v22;
    goto lab_0x413d2c;
  lab_0x413d2c:
    // 0x413d2c
    __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 504, "re_copy_regs");
    if ((v18 || v28) <= -1) {
        // 0x413a1f
        return -2;
    }
    int64_t size3 = v18 + 504; // 0x413d9c
    if ((size3 & (v18 ^ -0x8000000000000000)) < 0) {
        // 0x413a1f
        return -2;
    }
    int64_t * v51 = NULL; // 0x413da8
    int64_t v52 = (int64_t)"lib/regexec.c"; // 0x413da8
    if (v18 != 0) {
        int64_t * mem6 = malloc((int32_t)size3); // 0x413e12
        if (mem6 == NULL) {
            // 0x413a1f
            return -2;
        }
        int64_t v53 = (int64_t)mem6; // 0x413e12
        memcpy(mem6, (int64_t *)"lib/regexec.c", 504);
        memcpy((int64_t *)(v53 + 504), (int64_t *)"re_copy_regs", (int32_t)v18);
        v51 = mem6;
        v52 = v53;
    }
    int64_t result2 = function_4138f0((int64_t)"regs_allocated == REGS_FIXED", v52, size3, v23, v38, v28, v33, a6 % 256); // 0x413dd3
    free(v51);
    // 0x413a1f
    return result2;
  lab_0x413aed:
    // 0x413aed
    *v39 = *v39 & -7 | 2 * (char)v20;
    v36 = v35;
    v26 = v25;
    v31 = v30;
    v16 = v15;
    v21 = v20;
    if (v20 == 0) {
        goto lab_0x413a10;
    } else {
        goto lab_0x413b08;
    }
  lab_0x413a77:;
    int64_t v54 = v19;
    int64_t v55 = v29;
    int64_t v56 = v24;
    int64_t v57 = v34;
    int64_t v58 = 0; // 0x413a7a
    int64_t v59 = v6; // 0x413a7a
    if (v12 >= 1) {
        int64_t v60 = *(int64_t *)(v14 + 8); // 0x413a80
        int64_t v61 = 0; // 0x413a97
        int64_t v62 = 2 * v61; // 0x413aa0
        *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
        int64_t v63 = *(int64_t *)(v13 + 8 + v62); // 0x413aa9
        *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
        v61 += 8;
        v58 = v12;
        v59 = v60;
        while (v61 != 8 * v12) {
            // 0x413aa0
            v62 = 2 * v61;
            *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
            v63 = *(int64_t *)(v13 + 8 + v62);
            *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
            v61 += 8;
            v58 = v12;
            v59 = v60;
        }
    }
    int64_t v64 = v59;
    int64_t v65 = v58;
    int64_t * v66 = (int64_t *)v14; // 0x413abb
    v35 = v57;
    v25 = v56;
    v30 = v55;
    v15 = v64;
    v20 = v54;
    if (*v66 > v65) {
        int64_t v67 = v65 + 1; // 0x413ad8
        int64_t v68 = 8 * v65; // 0x413adc
        *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
        *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
        v35 = v57;
        v25 = v56;
        v30 = v55;
        v15 = v64;
        v20 = v54;
        while (*v66 > v67) {
            int64_t v69 = v67;
            v67 = v69 + 1;
            v68 = 8 * v69;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
            v35 = v57;
            v25 = v56;
            v30 = v55;
            v15 = v64;
            v20 = v54;
        }
    }
    goto lab_0x413aed;
}
// Address range: 0x413e80 - 0x413f90
int64_t function_413e80(int64_t a1, int64_t str, uint64_t a3) {
    // 0x413e80
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t * mem = malloc(256); // 0x413ec5
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x413eca
    *v1 = (int64_t)mem;
    if (mem == NULL) {
        // 0x413f80
        return 12;
    }
    int64_t v2 = (a3 % 2 == 0 ? 0x10102c6 : 0x3b2fc) | 0x200000 * a3 & 0x400000; // 0x413ee7
    int64_t v3 = (a3 & 4) != 0 ? v2 & 0x143b2be | 256 : v2;
    *(int64_t *)(a1 + 40) = 0;
    char * v4 = (char *)(a1 + 56); // 0x413f02
    *v4 = ((a3 & 4) != 0 ? -128 : 0) | 2 * (char)a3 & 16 | *v4 & 111;
    int64_t v5; // 0x413e80
    int64_t v6 = function_4129f0(a1, str, (int64_t)strlen((char *)str), v3, v5, v5); // 0x413f27
    int32_t v7 = v6; // 0x413f2e
    int64_t v8 = 8; // 0x413f31
    if (v7 != 16) {
        // 0x413f33
        v8 = v6 & 0xffffffff;
        if (v7 == 0) {
            // 0x413f37
            function_413820(a1);
            // 0x413f3f
            return v8 & 0xffffffff;
        }
    }
    // 0x413f6d
    free((int64_t *)*v1);
    *v1 = 0;
    // 0x413f3f
    return v8 & 0xffffffff;
}
// Address range: 0x413f90 - 0x41400d
int64_t function_413f90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = *(int64_t *)((0x100000000 * a1 >> 29) + (int64_t)&g15); // 0x413fb1
    char * str = dcgettext(NULL, (char *)(v1 + (int64_t)"Success"), 5); // 0x413fc2
    int64_t result = (int64_t)strlen(str) + 1; // 0x413fd2
    if (a4 == 0) {
        // 0x413fee
        return result;
    }
    int64_t v2 = result; // 0x413fe1
    if (result > a4) {
        // 0x414000
        v2 = a4 - 1;
        *(char *)(v2 + a3) = 0;
    }
    // 0x413fe3
    memcpy((int64_t *)a3, (int64_t *)str, (int32_t)v2);
    // 0x413fee
    return result;
}
// Address range: 0x414010 - 0x414054
int64_t function_414010(int64_t a1) {
    if (a1 != 0) {
        // 0x41401c
        function_40b610(a1);
    }
    // 0x414021
    *(int64_t *)a1 = 0;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x414028
    *(int64_t *)(a1 + 8) = 0;
    free((int64_t *)*v1);
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x414041
    free((int64_t *)*v2);
    *v2 = 0;
    return &g81;
}
// Address range: 0x414060 - 0x4140f6
int64_t function_414060(int64_t a1, int64_t str, int64_t a3, int64_t a4, int64_t a5) {
    if ((a5 & 0xfffffff8) != 0) {
        // 0x4140f0
        return 2;
    }
    int64_t v1; // 0x414060
    int64_t v2; // 0x414060
    int64_t v3; // 0x414060
    int64_t v4; // 0x414060
    int64_t v5; // 0x414060
    int64_t v6; // 0x414060
    if ((a5 & 4) != 0) {
        int64_t v7 = *(int64_t *)(a4 + 8); // 0x4140d3
        v5 = 0;
        v1 = a4;
        v3 = v7;
        v6 = 0;
        v2 = a4;
        v4 = v7;
        if ((*(char *)(a1 + 56) & 16) != 0) {
            goto lab_0x4140a6;
        } else {
            goto lab_0x4140dd;
        }
    } else {
        int64_t len = strlen((char *)str); // 0x41408d
        v5 = 0;
        v1 = 0;
        v3 = len;
        v6 = 0;
        v2 = 0;
        v4 = len;
        if ((*(char *)(a1 + 56) & 16) == 0) {
            goto lab_0x4140dd;
        } else {
            goto lab_0x4140a6;
        }
    }
  lab_0x4140a6:;
    int64_t v8 = v3;
    return (int32_t)function_40e940(a1, str, v8, v1, v8, v8, v6, v5, a5 & 0xffffffff) != 0;
  lab_0x4140dd:
    // 0x4140dd
    v5 = a4;
    v1 = v2;
    v3 = v4;
    v6 = a3;
    goto lab_0x4140a6;
}
// Address range: 0x414100 - 0x414118
int64_t function_414100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x414100
    return function_4138f0(a1, a2, a3, a4, 0, a3, a5, 1);
}
// Address range: 0x414120 - 0x414135
int64_t function_414120(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6) {
    // 0x414120
    return function_4138f0((int64_t)a1, a2, a3, a4, a5, a3, (int64_t)a6, 0);
}
// Address range: 0x414140 - 0x41415a
int64_t function_414140(int64_t a1, int64_t a2) {
    // 0x414140
    int64_t result; // 0x414140
    return result;
}
// Address range: 0x414160 - 0x41417c
int64_t function_414160(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414160
    int64_t result; // 0x414160
    return result;
}
// Address range: 0x414180 - 0x4141bc
int64_t function_414180(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 56);
    char v2 = *v1 & -7;
    if (a3 == 0) {
        // 0x4141a0
        *v1 = v2;
        *(int64_t *)a2 = 0;
        *(int64_t *)(a2 + 16) = 0;
        *(int64_t *)(a2 + 8) = 0;
        int64_t result; // 0x414180
        return result;
    }
    unsigned char result2 = v2 | 2;
    *v1 = result2;
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 8) = a4;
    *(int64_t *)(a2 + 16) = a5;
    return result2;
}
// Address range: 0x4141c0 - 0x41421d
int64_t function_4141c0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4141c7
    int64_t v2; // 0x4141c0
    int64_t result = function_414900(a1, v2); // 0x4141d8
    if ((v2 & 32) != 0) {
        // 0x414200
        if ((int32_t)result == 0) {
            // 0x414204
            *__errno_location() = 0;
        }
        // 0x4141fa
        return 0xffffffff;
    }
    // 0x4141e1
    if ((int32_t)result == 0) {
        // 0x4141fa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4141e8
    if (v1 == 0) {
        // 0x4141ea
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4141fa
    return result2;
}
// Address range: 0x414220 - 0x41427b
int64_t function_414220(int64_t a1, int64_t a2) {
    // 0x414220
    int64_t v1; // 0x414220
    char v2 = v1;
    int64_t v3 = a1; // 0x414229
    int64_t v4 = a1; // 0x414229
    char v5 = v2; // 0x414229
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x414234
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x414230
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x41423e
    if (v5 == 0) {
      lab_0x41427a:
        // 0x41427a
        return result;
    }
    int64_t v7 = v4; // 0x414268
    int64_t v8 = 0; // 0x414268
    int64_t v9; // 0x414220
    int64_t v10; // 0x41426a
    char v11; // 0x41426e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x414265
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x41426a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x414265
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x41425a
    char v14 = *(char *)v13; // 0x41425e
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
            // 0x414265
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x41426a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x414265
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x414250
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x41427a
    return result2;
}
// Address range: 0x414280 - 0x4142ab
int64_t function_414280(int64_t str) {
    int32_t len = strlen((char *)str); // 0x414284
    int64_t result = len; // 0x414284
    if (len < 2) {
        // 0x41429a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x414298
    while (*(char *)(v1 + str) == 47) {
        // 0x4142a0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x41429a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x41429a
    return result2;
}
// Address range: 0x4142b0 - 0x4142fe
int64_t function_4142b0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x4142bc
    if (fd >= 3) {
        // 0x4142c1
        return a1 & 0xffffffff;
    }
    // 0x4142d0
    int64_t v1; // 0x4142b0
    int64_t v2 = function_414300(a1, v1); // 0x4142d0
    int32_t * v3 = __errno_location(); // 0x4142d8
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x414300 - 0x41431a
int64_t function_414300(int64_t a1, int64_t a2) {
    int32_t v1 = (int32_t)a2 & 0x80000; // 0x414300
    int64_t v2; // 0x414300
    return function_414980(a1, v1 != 0 ? 1030 : v1, 3, v2);
}
// Address range: 0x414320 - 0x41437e
int64_t function_414320(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x414326
    if (locale == NULL) {
        // 0x414353
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x414326
    bool v2; // 0x414320
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g17; // 0x414320
    int64_t v5 = v1; // 0x414320
    int64_t v6 = 2; // 0x414345
    unsigned char v7 = *(char *)v5; // 0x414345
    char v8 = *(char *)v4; // 0x414345
    char v9 = v8; // 0x414345
    bool v10 = false; // 0x414345
    while (v7 == v8) {
        // 0x414338
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
    int64_t v12 = (int64_t)"POSIX"; // 0x414351
    int64_t v13 = v1; // 0x414351
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x414353
        return 0;
    }
    int64_t v14 = 6; // 0x414351
    unsigned char v15 = *(char *)v13; // 0x41436d
    char v16 = *(char *)v12; // 0x41436d
    char v17 = v16; // 0x41436d
    bool v18 = false; // 0x41436d
    while (v15 == v16) {
        // 0x414360
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
// Address range: 0x414380 - 0x4148e2
int64_t function_414380(void) {
    char * v1 = nl_langinfo(14); // 0x414396
    char * v2 = g70; // 0x41439b
    char * v3; // 0x414380
    int64_t v4; // 0x414380
    int64_t v5; // 0x414380
    int64_t v6; // 0x414380
    int64_t v7; // 0x414380
    int32_t size; // 0x414380
    int32_t size2; // 0x414380
    int32_t len; // 0x414452
    int64_t v8; // 0x414452
    char * env_val; // 0x41443d
    if (v2 == NULL) {
        // 0x414438
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4144a5;
        } else {
            // 0x41444a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4144a5;
            } else {
                // 0x41444f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x41443d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4148d5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4144a5;
                    } else {
                        // 0x414849
                        size2 = len + 14;
                        goto lab_0x41446b;
                    }
                } else {
                    goto lab_0x41446b;
                }
            }
        }
    } else {
        // 0x414380
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4143ba;
    }
  lab_0x4146ec:;
    // 0x4146ec
    struct _IO_FILE * stream; // 0x41452b
    int32_t v10 = __uflow(stream); // 0x4146ef
    int64_t v11; // 0x414380
    int64_t v12 = v11; // 0x4146f9
    int64_t v13; // 0x414380
    int64_t v14 = v13; // 0x4146f9
    int32_t v15 = v10; // 0x4146f9
    int64_t v16; // 0x414380
    int64_t v17 = v16; // 0x4146f9
    int64_t v18 = v11; // 0x4146f9
    int64_t v19 = v13; // 0x4146f9
    int64_t v20 = v16; // 0x4146f9
    if (v10 == -1) {
        // break -> 0x4146ff
        goto lab_0x4146ff;
    }
    goto lab_0x414579;
  lab_0x41456e:;
    // 0x41456e
    int64_t v90; // 0x414380
    int64_t * v32; // 0x414560
    *v32 = v90 + 1;
    int64_t v89; // 0x414380
    v12 = v89;
    int64_t v91; // 0x414380
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x414380
    v17 = v92;
    goto lab_0x414579;
  lab_0x414579:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x414380
    int32_t v25; // bp-120, 0x414380
    int32_t v26; // bp-184, 0x414380
    int64_t v27; // 0x41452b
    int64_t v28; // 0x414548
    int64_t v29; // 0x41454d
    int64_t * v30; // 0x414564
    switch (c) {
        case 32: {
            goto lab_0x414560;
        }
        case 10: {
            goto lab_0x414560;
        }
        case 9: {
            goto lab_0x414560;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x414751
            int32_t v33; // 0x414380
            char v34; // 0x414380
            int32_t v35; // 0x41475e
            if (v31 < *v30) {
                // 0x414730
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x41475b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x414751
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x414730
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x41475b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x414740
                v36 = v33;
            }
            // 0x41482f
            if (v36 == -1) {
                // break -> 0x4146ff
                break;
            }
            goto lab_0x414560;
        }
        default: {
            // 0x41458f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4146ff
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4145b8
            int64_t v39 = v37 + 4; // 0x4145ba
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4145c6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4145c8
            while (v41 == 0) {
                // 0x4145b8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4145e6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4145f2
            int64_t v45 = v43 + 4; // 0x4145f4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x414600
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x414602
            while (v47 == 0) {
                // 0x4145f2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4145ef
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x414618
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x414628
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x41462c
            int64_t v52 = v51 + v48; // 0x414635
            int64_t * mem; // 0x414380
            int64_t v53; // 0x414380
            int64_t v54; // 0x414380
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x41476b
                int64_t v56 = v55 + 3; // 0x414777
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x414651
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x414660
            if (mem == NULL) {
                // 0x41488c
                free((int64_t *)v21);
                function_414900(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x414504;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x414678
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x414682
            uint32_t v62 = (int32_t)v59; // 0x414685
            int64_t v63; // 0x414380
            if (v62 >= 8) {
                // 0x414794
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4147ae
                int64_t v66 = v61 - v65; // 0x4147b2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4147bd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4147ce
                    int64_t v70 = v69 & 0xffffffff; // 0x4147ce
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4147cb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x41485f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x414697
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x41469b
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
            int64_t v73 = v51 + 1; // 0x4146ab
            int64_t v74 = v60 - 1; // 0x4146af
            uint32_t v75 = (int32_t)v73; // 0x4146b4
            int64_t v76; // 0x414380
            if (v75 >= 8) {
                // 0x4147e2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4147ec
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4147fc
                int64_t v80 = v74 - v79; // 0x414800
                uint32_t v81 = (int32_t)(v80 + v73); // 0x41480b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x41481b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x414819
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x414876
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x41487e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4146c6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4146ca
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4148c3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4146de
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x41456e;
            } else {
                goto lab_0x4146ec;
            }
        }
    }
  lab_0x414560:;
    int64_t v93 = v23; // 0x414380
    int64_t v94 = v22; // 0x414380
    int64_t v95 = v21; // 0x414380
    goto lab_0x414560_2;
  lab_0x4144a5:;
    int64_t * mem3 = malloc(size); // 0x4144a5
    int64_t v97 = (int64_t)&g12; // 0x4144b0
    int64_t v98; // 0x414380
    int64_t path; // 0x414380
    if (mem3 == NULL) {
        goto lab_0x414482;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4144a5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4144c6;
    }
  lab_0x4143ba:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x4143ad
    char v100 = *v3; // 0x4143ba
    int64_t v101; // 0x414380
    if (v100 == 0) {
        // 0x414414
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x414380
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x414380
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x414400
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x414407;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4143d0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4143dd
        char v107 = *(char *)v106; // 0x4143e2
        v102 = v107;
        if (v107 == 0) {
            // 0x414414
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4143eb
    v104 = v103 + 1;
  lab_0x414407:
    // 0x414414
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x414482:;
    char * v108 = (char *)v97;
    g70 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4143ba;
  lab_0x4144c6:;
    int64_t v109 = v98 + path; // 0x4144c6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4144f2
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x414521
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x414852
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x414545
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x414560_2:;
                uint64_t v96 = *v32; // 0x414560
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4146ec;
                } else {
                    goto lab_0x41456e;
                }
            }
          lab_0x4146ff:
            // 0x4146ff
            function_414900(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x41471e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x414504;
  lab_0x41446b:;
    int64_t * mem4 = malloc(size2); // 0x41446b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x414511
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4144c6;
    } else {
        goto lab_0x414482;
    }
  lab_0x414504:
    // 0x414504
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x414482;
}
// Address range: 0x4148f0 - 0x4148fe
int64_t function_4148f0(int64_t a1, int64_t a2) {
    // 0x4148f0
    int64_t v1; // 0x4148f0
    return function_414980(a1, 0, 3, v1);
}
// Address range: 0x414900 - 0x41497b
int64_t function_414900(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x414907
    if (fileno(stream) < 0) {
        // 0x414967
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x41491a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x41494b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x414967
            return fclose(stream);
        }
    }
    // 0x41491c
    if ((int32_t)function_414ac0(a1, v1) == 0) {
        // 0x414967
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x414928
    int32_t v3 = *v2; // 0x414930
    int64_t result = fclose(stream); // 0x41493e
    if (v3 != 0) {
        // 0x414970
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x414940
    return result;
}
// Address range: 0x414980 - 0x414ab5
int64_t function_414980(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x414a60
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x4149bc
    int64_t v2; // 0x414980
    if (g71 < 0) {
        int64_t v3 = function_414980(fd, 0, v1, a4); // 0x414a04
        int64_t v4 = v3 & 0xffffffff; // 0x414a09
        if ((int32_t)v3 < 0) {
            // 0x4149f0
            return v4 & 0xffffffff;
        }
        // 0x414a0f
        v2 = v4;
        if (g71 != -1) {
            // 0x4149f0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4149d7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4149e6
            g71 = 1;
            // 0x4149f0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_414980(fd & 0xffffffff, 0, v1, a4); // 0x414a97
        int64_t v7 = v6 & 0xffffffff; // 0x414a9c
        if ((int32_t)v6 < 0) {
            // 0x4149f0
            return v7 & 0xffffffff;
        }
        // 0x414aa6
        g71 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x414a1f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x414a2a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4149f0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x414a42
    close(fd2);
    // 0x4149f0
    return 0xffffffff;
}
// Address range: 0x414ac0 - 0x414b00
int64_t function_414ac0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x414ada
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x414ada
        return fflush(stream);
    }
    // 0x414ae8
    function_4055d0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x414b00 - 0x414b5d
int64_t function_414b00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414b00
    return function_401808();
}
// Address range: 0x414b60 - 0x414b61
int64_t function_414b60(void) {
    // 0x414b60
    int64_t result; // 0x414b60
    return result;
}
// Address range: 0x414b70 - 0x414b88
int64_t function_414b70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414b70
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g22);
}
// Address range: 0x414b88 - 0x414ba8
int64_t function_414b88(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g18; // 0x414b92
    while (*(int64_t *)v1 != -1) {
        // 0x414b93
        v1 -= 8;
    }
    // 0x414ba4
    return result;
}
