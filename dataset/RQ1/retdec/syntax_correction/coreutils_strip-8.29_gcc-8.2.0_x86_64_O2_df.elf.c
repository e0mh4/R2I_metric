#include "decompile_retdec.h"
// Address range: 0x4023a0 - 0x4023a5
int64_t function_4023a0(void) {
    // 0x4023a0
    abort();
    // UNREACHABLE
}
// Address range: 0x4023a5 - 0x4023aa
int64_t function_4023a5(void) {
    // 0x4023a5
    abort();
    // UNREACHABLE
}
// Address range: 0x4023aa - 0x4023af
int64_t function_4023aa(void) {
    // 0x4023aa
    abort();
    // UNREACHABLE
}
// Address range: 0x4023af - 0x4023b4
int64_t function_4023af(void) {
    // 0x4023af
    abort();
    // UNREACHABLE
}
// Address range: 0x4023b4 - 0x4023b9
int64_t function_4023b4(void) {
    // 0x4023b4
    abort();
    // UNREACHABLE
}
// Address range: 0x4023b9 - 0x4023be
int64_t function_4023b9(void) {
    // 0x4023b9
    abort();
    // UNREACHABLE
}
// Address range: 0x4023be - 0x4023c3
int64_t function_4023be(void) {
    // 0x4023be
    abort();
    // UNREACHABLE
}
// Address range: 0x4023c3 - 0x4023c8
int64_t function_4023c3(void) {
    // 0x4023c3
    abort();
    // UNREACHABLE
}
// Address range: 0x4023c8 - 0x4023cd
int64_t function_4023c8(void) {
    // 0x4023c8
    abort();
    // UNREACHABLE
}
// Address range: 0x4023cd - 0x4023d2
int64_t function_4023cd(void) {
    // 0x4023cd
    abort();
    // UNREACHABLE
}
// Address range: 0x4023d2 - 0x4023d7
int64_t function_4023d2(void) {
    // 0x4023d2
    abort();
    // UNREACHABLE
}
// Address range: 0x4023d7 - 0x4023dc
int64_t function_4023d7(void) {
    // 0x4023d7
    abort();
    // UNREACHABLE
}
// Address range: 0x4023e0 - 0x403907
int64_t function_4023e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x4023f2
    int64_t str7; // bp-344, 0x4023e0
    int64_t v2 = &str7; // 0x4023f4
    str7 = a2;
    function_4081c0(a2);
    setlocale(LC_ALL, (char *)&g14);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v3; // 0x4023e0
    function_410f70(0x4058f0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3);
    g59 = 0;
    g58 = 0;
    g67 = 0;
    g65 = 0;
    *(int32_t *)&g64 = -1;
    g56 = 0;
    g62 = 0;
    g60 = 0;
    g55 = 0;
    g48 = 1;
    char * format2 = dcgettext(NULL, "options %s and %s are mutually exclusive", 5); // 0x40249d
    int64_t format = (int64_t)format2; // 0x40249d
    int64_t v4 = 0; // 0x4024a5
    int64_t v5; // 0x4023e0
    int32_t v6; // bp-200, 0x4023e0
    while (true) {
      lab_0x4024a8_2:
        // 0x4024a8
        v5 = v4;
        v6 = -1;
        int64_t v7 = function_40c380(v1, str7, "aB:iF:hHklmPTt:vx:", &g3, (int64_t *)&v6, v3); // 0x4024c7
        int32_t v8 = v7;
        switch (v8) {
            case -1: {
                goto lab_0x40280a;
            }
            case 105: {
                // 0x4027b0
                if (g47 == 4) {
                    goto lab_0x4038b4;
                }
                // 0x4027bd
                g47 = 1;
                // 0x4024a8
                v4 = v5;
                goto lab_0x4024a8_2;
            }
            default: {
                int64_t v9; // 0x4023e0
                if (v8 > 105) {
                    // 0x4024e0
                    v9 = v5;
                    if (v8 == 118) {
                        // 0x4024a8
                        v4 = v9;
                        goto lab_0x4024a8_2;
                    } else {
                        if (v8 > 118) {
                            if (v8 == 129) {
                                // 0x4027d0
                                g61 = 1;
                            } else {
                                if (v8 > 129) {
                                    if (v8 != 130) {
                                        if (v8 != 131) {
                                            // 0x402741
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        // 0x4026e7
                                        if (g47 == 1) {
                                          lab_0x4038b4:
                                            // 0x4038b4
                                            error(0, 0, (char *)format);
                                            // 0x402741
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        if (v5 != 0 == g47 == 0) {
                                            // 0x4038c7
                                            error(0, 0, format2);
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        // 0x402703
                                        if (g56 != 0) {
                                            // 0x4038b4
                                            error(0, 0, (char *)format);
                                            // 0x402741
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        // 0x402710
                                        g47 = 4;
                                        if (g82 != 0) {
                                            // 0x40272a
                                            function_404d60();
                                        }
                                    } else {
                                        // 0x4025c3
                                        g55 = 1;
                                    }
                                } else {
                                    if (v8 != 120) {
                                        if (v8 != 128) {
                                            // 0x402741
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        // 0x402573
                                        g61 = 0;
                                    } else {
                                        int64_t v10 = function_40a560(16); // 0x40250d
                                        *(int64_t *)v10 = (int64_t)g82;
                                        *(int64_t *)(v10 + 8) = g58;
                                        g58 = v10;
                                    }
                                }
                            }
                            // 0x4024a8
                            v4 = v5;
                            goto lab_0x4024a8_2;
                        } else {
                            if (v8 == 108) {
                                // 0x4027e0
                                *(char *)&g66 = 1;
                                // 0x4024a8
                                v4 = v5;
                                goto lab_0x4024a8_2;
                            } else {
                                if (v8 > 108) {
                                    if (v8 != 109) {
                                        if (v8 != 116) {
                                            // 0x402741
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        goto lab_0x402629;
                                    } else {
                                        // 0x402598
                                        *(int32_t *)&g64 = 0;
                                        g63 = 0x100000;
                                        // 0x4024a8
                                        v4 = v5;
                                        goto lab_0x4024a8_2;
                                    }
                                } else {
                                    if (v8 != 107) {
                                        // 0x402741
                                        function_404930(1);
                                        // UNREACHABLE
                                    }
                                    // 0x402661
                                    *(int32_t *)&g64 = 0;
                                    g63 = 1024;
                                    // 0x4024a8
                                    v4 = v5;
                                    goto lab_0x4024a8_2;
                                }
                            }
                        }
                    }
                } else {
                    if (v8 == 72) {
                        // 0x4027f0
                        *(int32_t *)&g64 = 144;
                        g63 = 1;
                        // 0x4024a8
                        v4 = v5;
                        goto lab_0x4024a8_2;
                    } else {
                        if (v8 > 72) {
                            if (v8 == 84) {
                                // 0x402790
                                if (g47 == 4) {
                                    // 0x4038b4
                                    error(0, 0, (char *)format);
                                    // 0x402741
                                    function_404930(1);
                                    // UNREACHABLE
                                }
                                // 0x40279d
                                g56 = 1;
                                v9 = v5;
                            } else {
                                if (v8 > 84) {
                                    if (v8 != 97) {
                                        if (v8 != 104) {
                                            // 0x402741
                                            function_404930(1);
                                            // UNREACHABLE
                                        }
                                        // 0x402601
                                        *(int32_t *)&g64 = 176;
                                        g63 = 1;
                                        v9 = v5;
                                    } else {
                                        // 0x402557
                                        g67 = 1;
                                        v9 = v5;
                                    }
                                } else {
                                    if (v8 != 80) {
                                        // 0x402741
                                        function_404930(1);
                                        // UNREACHABLE
                                    }
                                    // 0x4025d9
                                    v9 = 1;
                                    if (g47 == 4) {
                                        // 0x4038b4
                                        error(0, 0, (char *)format);
                                        // 0x402741
                                        function_404930(1);
                                        // UNREACHABLE
                                    }
                                }
                            }
                            // 0x4024a8
                            v4 = v9;
                            goto lab_0x4024a8_2;
                        } else {
                            if (v8 == -130) {
                                // 0x403889
                                function_404930(0);
                                // UNREACHABLE
                            }
                            if (v8 <= 0xffffff7e) {
                                if (v8 == -131) {
                                    // 0x402757
                                    function_40a420((int64_t)g38, "df", "GNU coreutils", (int64_t)g25, "Torbjorn Granlund", "David MacKenzie");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x402741;
                            }
                            if (v8 != 66) {
                                if (v8 != 70) {
                                  lab_0x402741:
                                    // 0x402741
                                    function_404930(1);
                                    // UNREACHABLE
                                }
                                goto lab_0x402629;
                            } else {
                                int64_t v11 = function_407980((int64_t)g82, &g64, &g63); // 0x4026ab
                                if ((int32_t)v11 != 0) {
                                    int32_t v12 = g82; // 0x4026b8
                                    uint32_t v13 = v6; // 0x4026bf
                                    function_40a820(v11 & 0xffffffff, (int64_t)v13, 66, &g3, (int64_t)v12);
                                    // UNREACHABLE
                                }
                                // 0x4024a8
                                v4 = v5;
                                goto lab_0x4024a8_2;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x40280a:
    // 0x40280a
    if (*(int32_t *)&g64 == -1) {
        if (v5 == 0) {
            char * env_val = getenv("DF_BLOCK_SIZE"); // 0x402b31
            function_407980((int64_t)env_val, &g64, &g63);
        } else {
            // 0x402940
            *(int32_t *)&g64 = 0;
            g63 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        }
    }
    // 0x402817
    int64_t v14; // 0x4023e0
    switch (g47) {
        default: {
            // 0x402827
            if ((*(char *)&g64 & 16) == 0) {
                if (v5 != 0) {
                    // 0x40297b
                    g47 = 3;
                }
            } else {
                // 0x402834
                g47 = 2;
            }
        }
        case 1: {
        }
        case 4: {
            int64_t v15 = g59; // 0x40284b
            int64_t v16 = 0; // 0x40284b
            v14 = 0;
            if (g59 != 0) {
                int64_t v17; // 0x4023e0
                while (true) {
                    int64_t v18 = v16;
                    int64_t v19 = v15;
                    int64_t v20 = v18; // 0x40285a
                    if (g58 != 0) {
                        int64_t str = *(int64_t *)v19; // 0x40285c
                        int64_t v21 = g58;
                        int64_t str2 = *(int64_t *)v21; // 0x402871
                        while (strcmp((char *)str, (char *)str2) != 0) {
                            int64_t v22 = *(int64_t *)(v21 + 8); // 0x402868
                            v20 = v18;
                            if (v22 == 0) {
                                goto lab_0x4028b4;
                            }
                            v21 = v22;
                            str2 = *(int64_t *)v21;
                        }
                        // 0x402881
                        function_409de0(str);
                        error(0, (int32_t)"file system type %s both selected and excluded" ^ (int32_t)"file system type %s both selected and excluded", dcgettext(NULL, "file system type %s both selected and excluded", 5));
                        v20 = 1;
                    }
                  lab_0x4028b4:
                    // 0x4028b4
                    v17 = v20;
                    int64_t v23 = *(int64_t *)(v19 + 8); // 0x4028b4
                    v15 = v23;
                    v16 = v17;
                    if (v23 == 0) {
                        // break -> 0x4028be
                        break;
                    }
                }
                // 0x4028be
                v14 = v17;
                if ((char)v17 != 0) {
                    // 0x402925
                    return 1;
                }
            }
            // break -> 0x4028c3
            break;
        }
    }
    uint64_t v24 = (int64_t)g35; // 0x4028c3
    int64_t v25 = v14; // 0x4028cb
    if (v1 > v24) {
        int64_t v26 = function_40a560(144 * 0x100000000 * (a1 - v24) / 0x100000000); // 0x4029a2
        int64_t v27 = g35; // 0x4029a7
        int64_t v28 = str7; // 0x4029ae
        v25 = v28;
        if (v1 > v27) {
            int64_t v29 = v27; // 0x4029f9
            int32_t v30 = v29; // 0x402a09
            int64_t * path = (int64_t *)(8 * v29 + v28); // 0x402a12
            int64_t v31 = *path; // 0x402a12
            int32_t v32; // 0x4029cc
            uint32_t fd; // 0x4029e9
            if (__xstat(1, (char *)v31, (struct stat *)(144 * (int64_t)(v30 - g35) + v26)) == 0) {
                // 0x4029bc
                v32 = *(int32_t *)(v26 + 24 + 144 * (int64_t)(v30 - g35));
                if ((v32 & 0xf000) != 0x1000) {
                    // 0x4029dd
                    fd = open((char *)*path, O_NOCTTY);
                    if (fd >= 0) {
                        // 0x4029f2
                        close(fd);
                    }
                }
            } else {
                // 0x402a32
                error(0, *__errno_location(), "%s", (char *)function_409c60(0, 3, *path));
                g60 = 1;
                *path = 0;
            }
            // 0x4029f9
            v29++;
            v25 = v28;
            while (v29 != v1) {
                // 0x4029f9
                v30 = v29;
                path = (int64_t *)(8 * v29 + v28);
                v31 = *path;
                if (__xstat(1, (char *)v31, (struct stat *)(144 * (int64_t)(v30 - g35) + v26)) == 0) {
                    // 0x4029bc
                    v32 = *(int32_t *)(v26 + 24 + 144 * (int64_t)(v30 - g35));
                    if ((v32 & 0xf000) != 0x1000) {
                        // 0x4029dd
                        fd = open((char *)*path, O_NOCTTY);
                        if (fd >= 0) {
                            // 0x4029f2
                            close(fd);
                        }
                    }
                } else {
                    // 0x402a32
                    error(0, *__errno_location(), "%s", (char *)function_409c60(0, 3, *path));
                    g60 = 1;
                    *path = 0;
                }
                // 0x4029f9
                v29++;
                v25 = v28;
            }
        }
    }
    char v33 = 1; // 0x4028de
    if (g59 == 0) {
        // 0x402af8
        v33 = 1;
        if (g58 == 0) {
            // 0x402b06
            v33 = 1;
            if (g56 == 0) {
                // 0x402b13
                v33 = g24 != 0 ? 1 : *(char *)&g66;
            }
        }
    }
    int64_t v34 = function_40c670(v33); // 0x4028e4
    g57 = v34;
    int64_t format3 = v25; // 0x4028f3
    if (v34 == 0) {
        int32_t status = 1; // 0x402a79
        int64_t v35 = (int64_t)&g14; // 0x402a79
        if (v1 > (int64_t)g35) {
            // 0x402a7b
            status = 1;
            v35 = (int64_t)&g14;
            if (g67 == 0) {
                // 0x402a84
                status = 1;
                v35 = (int64_t)&g14;
                if (*(char *)&g66 == 0) {
                    // 0x402a8d
                    status = 1;
                    v35 = (int64_t)&g14;
                    if (g59 == 0) {
                        // 0x402a97
                        status = 1;
                        v35 = (int64_t)&g14;
                        if (g58 == 0) {
                            // 0x402aa1
                            status = 0;
                            v35 = (int64_t)dcgettext(NULL, "Warning: ", 5);
                        }
                    }
                }
            }
        }
        char * v36 = dcgettext(NULL, "cannot read table of mounted file systems", 5); // 0x402ad0
        error(status, *__errno_location(), "%s%s", (char *)v35, v36);
        format3 = (int64_t)v36;
    }
    // 0x4028f9
    if (g61 != 0) {
        // 0x40298a
        sync();
    }
    // 0x402913
    g84 = g47;
    int32_t v37; // 0x4023e0
    switch (g47) {
        case 0: {
            // 0x402f29
            function_403e20(0, 0);
            if (g56 != 0) {
                // 0x403878
                function_403e20(1, 0);
            }
            // 0x402f3f
            function_403e20(2, 0);
            function_403e20(3, 0);
            function_403e20(4, 0);
            v37 = 0;
            goto lab_0x402b8c;
        }
        case 1: {
            // 0x402eb5
            function_403e20(0, 0);
            if (g56 != 0) {
                // 0x403867
                function_403e20(1, 0);
            }
            // 0x402ecb
            function_403e20(6, 0);
            function_403e20(7, 0);
            function_403e20(8, 0);
            function_403e20(9, 0);
            function_403e20(10, 0);
            goto lab_0x402ba2;
        }
        case 2: {
            // 0x402e6e
            function_403e20(0, 0);
            if (g56 != 0) {
                // 0x403856
                function_403e20(1, 0);
            }
            // 0x402e84
            function_403e20(2, (int32_t)"Size");
            function_403e20(3, (int32_t)"Size" ^ (int32_t)"Size");
            function_403e20(4, (int32_t)"Avail");
            v37 = (int32_t)"Avail" ^ (int32_t)"Avail";
            goto lab_0x402b8c;
        }
        case 3: {
            // 0x402b4d
            function_403e20(0, 0);
            if (g56 != 0) {
                // 0x403845
                function_403e20(1, 0);
            }
            // 0x402b63
            function_403e20(2, 0);
            function_403e20(3, 0);
            function_403e20(4, 0);
            v37 = (int32_t)"Capacity";
            goto lab_0x402b8c;
        }
        case 4: {
            // 0x402f0c
            if (g45 == 0) {
                // 0x402f1a
                function_404d60();
            }
            goto lab_0x402ba2;
        }
        default: {
            // 0x403890
            __assert_fail("!\"invalid header_mode\"", "src/df.c", 496, "get_field_list");
            // 0x4038b4
            error(0, 0, (char *)format3);
            // 0x402741
            function_404930(1);
            // UNREACHABLE
        }
    }
  lab_0x4035d6:;
    int64_t v38; // 0x4023e0
    int64_t v39; // 0x4023e0
    unsigned char v40; // 0x4035c5
    if (v40 % 2 == 0) {
        goto lab_0x4035ec;
    } else {
        // 0x4035da
        v38 = v39;
        if ((g65 || g67) == 0) {
            goto lab_0x403570;
        } else {
            goto lab_0x4035ec;
        }
    }
  lab_0x4035ec:;
    // 0x4035ec
    int64_t v41; // 0x4023e0
    int64_t v42 = *(int64_t *)(v41 + 24); // 0x4035ec
    v38 = v39;
    int64_t v43; // 0x4023e0
    int64_t v44; // 0x4023e0
    int64_t v45; // 0x4023e0
    int64_t v46; // 0x4023e0
    int64_t v47; // 0x4024b8
    int64_t v48; // 0x4023e0
    char * v49; // 0x4035c5
    int64_t * v50; // 0x403613
    int64_t * v51; // 0x403665
    int64_t str3; // 0x403665
    int64_t str4; // 0x4036b9
    if ((char)function_403a10(v42) == 0) {
        goto lab_0x403570;
    } else {
        char v52 = function_403a60(v42); // 0x40360b
        v38 = v39;
        if (v52 != 0) {
            goto lab_0x403570;
        } else {
            // 0x403613
            v50 = (int64_t *)(v41 + 8);
            int32_t v53 = __xstat(1, (char *)*v50, (struct stat *)&v6); // 0x403624
            v38 = v47;
            if (v53 == -1) {
                goto lab_0x403570;
            } else {
                int64_t v54 = g68; // 0x403632
                v43 = v44;
                v46 = v47;
                if (v54 == 0) {
                    goto lab_0x40357c;
                } else {
                    int64_t v55 = v6; // bp-232, 0x40364f
                    int64_t v56 = function_4061f0(v54, &v55); // 0x403654
                    v43 = v44;
                    v46 = v47;
                    if (v56 == 0) {
                        goto lab_0x40357c;
                    } else {
                        // 0x403665
                        v51 = (int64_t *)(v56 + 8);
                        str3 = *v51;
                        int64_t v57 = *(int64_t *)(str3 + 16); // 0x403669
                        int64_t v58 = v44; // 0x403670
                        int64_t v59 = 0; // 0x403670
                        if (v57 != 0) {
                            int64_t v60 = *(int64_t *)(v41 + 16); // 0x403676
                            int64_t v61 = v57; // 0x40367d
                            v58 = v44;
                            v59 = 0;
                            if (v60 != 0) {
                                int64_t v62 = -1; // 0x40368a
                                int64_t v63 = 0; // 0x40368a
                                while (v62 != 0) {
                                    int64_t v64 = v61;
                                    v62--;
                                    v61 = v64 + v48;
                                    v63 = v62;
                                    if (*(char *)v64 == v52) {
                                        // break -> 
                                        break;
                                    }
                                    v63 = 0;
                                }
                                int64_t v65 = v60; // 0x40369a
                                int64_t v66 = -1; // 0x40369a
                                int64_t v67 = 0; // 0x40369a
                                while (v66 != 0) {
                                    int64_t v68 = v65;
                                    v66--;
                                    v65 = v68 + v48;
                                    v67 = v66;
                                    if (*(char *)v68 == v52) {
                                        // break -> 
                                        break;
                                    }
                                    v67 = 0;
                                }
                                v58 = v67;
                                v59 = -2 - v63 < -2 - v67;
                            }
                        }
                        // 0x4036b2
                        v45 = v58;
                        str7 = v59;
                        str4 = *(int64_t *)v41;
                        if (g55 != 0) {
                            goto lab_0x4036df;
                        } else {
                            // 0x4036bf
                            if ((*v49 & 2) == 0) {
                                goto lab_0x4036df;
                            } else {
                                // 0x4036c5
                                if ((*(char *)(str3 + 40) & 2) == 0) {
                                    goto lab_0x4036df;
                                } else {
                                    // 0x4036cc
                                    v43 = v45;
                                    v46 = v47;
                                    if (strcmp((char *)*(int64_t *)str3, (char *)str4) != 0) {
                                        goto lab_0x40357c;
                                    } else {
                                        goto lab_0x4036df;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x403570:
    // 0x403570
    v6 = (int32_t)*(int64_t *)(v41 + 32);
    v43 = v44;
    v46 = v38;
    goto lab_0x40357c;
  lab_0x40357c:;
    int64_t v69 = function_40a560(24); // 0x403581
    *(int64_t *)(v69 + 8) = v41;
    int64_t v70; // 0x4023e0
    *(int64_t *)(v69 + 16) = v70;
    *(int64_t *)v69 = (int64_t)v6;
    int64_t v71 = function_406c00(g68, v69); // 0x4035a7
    int64_t v72 = g68; // 0x4035af
    if (v71 == 0) {
        // break -> 0x4038e8
        goto lab_0x4038e8;
    }
    int64_t v73 = v43; // 0x4035b9
    int64_t v74 = v46; // 0x4035b9
    int64_t v75 = v69; // 0x4035b9
    int64_t v76 = *(int64_t *)(v41 + 48); // 0x4035b9
    int64_t v77; // 0x4023e0
    int64_t v78 = v77; // 0x4035b9
    goto lab_0x4035bc;
  lab_0x4035bc:;
    int64_t v79 = v73; // 0x4035bf
    int64_t v80 = v74; // 0x4035bf
    int64_t v81 = v75; // 0x4035bf
    int64_t v82 = v78; // 0x4035bf
    int64_t v83 = v73; // 0x4035bf
    int64_t v84 = v74; // 0x4035bf
    int64_t v85 = v75; // 0x4035bf
    int64_t v86 = v76; // 0x4035bf
    int64_t v87 = v78; // 0x4035bf
    if (v76 == 0) {
        goto lab_0x4030fe;
    }
    goto lab_0x4035c5;
  lab_0x4036df:;
    char * str5 = (char *)str4; // 0x4036e7
    int64_t v88; // 0x4023e0
    int64_t v89; // 0x4023e0
    if (strchr(str5, 47) == NULL) {
        goto lab_0x403703;
    } else {
        // 0x4036f1
        v89 = v45;
        v88 = v77;
        if (strchr((char *)*(int64_t *)str3, 47) == NULL) {
            goto lab_0x403743;
        } else {
            goto lab_0x403703;
        }
    }
  lab_0x403703:;
    int64_t v90 = *(int64_t *)(str3 + 8); // 0x403703
    int64_t str6 = *v50; // 0x40370d
    int64_t v91 = v90; // 0x403714
    int64_t v92 = -1;
    int64_t v93 = 0; // 0x403714
    while (v92 != 0) {
        int64_t v94 = v91;
        int64_t v95 = v92 - 1; // 0x403714
        int64_t v96 = v95; // 0x403714
        v91 = v94 + v48;
        v93 = v95;
        if (*(char *)v94 == 0) {
            // break -> 
            break;
        }
        v92 = v96;
        v93 = 0;
    }
    int64_t v97 = str6; // 0x403724
    int64_t v98 = -1;
    int64_t v99 = 0; // 0x403724
    while (v98 != 0) {
        int64_t v100 = v97;
        int64_t v101 = v98 - 1; // 0x403724
        int64_t v102 = v101; // 0x403724
        v97 = v100 + v48;
        v99 = v101;
        if (*(char *)v100 == 0) {
            // break -> 
            break;
        }
        v98 = v102;
        v99 = 0;
    }
    int64_t v103 = v99;
    if (-2 - v93 > -2 - v103) {
        // 0x403739
        v89 = v103;
        v88 = v90;
        if ((int32_t)str7 != 0) {
            goto lab_0x4037fa;
        } else {
            goto lab_0x403743;
        }
    } else {
        goto lab_0x4037fa;
    }
  lab_0x4037fa:
    // 0x4037fa
    str7 = v90;
    int64_t v104 = v103; // 0x403810
    int64_t v105 = v90; // 0x403810
    int64_t v106 = v41; // 0x403810
    if (strcmp((char *)*(int64_t *)str3, str5) == 0) {
        goto lab_0x403747;
    } else {
        int32_t strcmp_rc = strcmp((char *)str6, (char *)str7); // 0x403821
        v89 = v103;
        v88 = str7;
        v104 = v103;
        v105 = str7;
        v106 = v41;
        if (strcmp_rc == 0) {
            goto lab_0x403743;
        } else {
            goto lab_0x403747;
        }
    }
  lab_0x403743:
    // 0x403743
    *v51 = v41;
    v104 = v89;
    v105 = v88;
    v106 = str3;
    goto lab_0x403747;
  lab_0x403747:;
    int64_t v107 = v105;
    int64_t v108 = v104;
    int64_t v109 = *(int64_t *)(v41 + 48); // 0x403747
    v73 = v108;
    v74 = v47;
    v75 = v70;
    v76 = v109;
    v78 = v107;
    if (g67 == 0) {
        // 0x403754
        function_40c620(v106);
        v73 = v108;
        v74 = v47;
        v75 = v70;
        v76 = v109;
        v78 = v107;
    }
    goto lab_0x4035bc;
  lab_0x402de8:;
    // 0x402de8
    int64_t v110; // 0x4023e0
    int64_t v111 = v110;
    int64_t v112; // 0x4023e0
    int64_t v113 = v112;
    int64_t v114; // 0x4023e0
    int64_t v115 = v114;
    int64_t v116; // 0x4023e0
    int64_t v117 = *(int64_t *)(v116 + 48); // 0x402de8
    int64_t v118 = v115; // 0x402def
    int64_t v119 = v117; // 0x402def
    int64_t v120 = v113; // 0x402def
    int64_t v121 = v111; // 0x402def
    if (v117 == 0) {
        // break -> 0x40308f
        goto lab_0x40308f_2;
    }
    goto lab_0x402df5;
  lab_0x402e35:;
    // 0x402e35
    int64_t v131; // 0x4023e0
    struct stat * v129; // 0x4023e0
    int64_t * v134; // 0x4023e0
    int64_t * v123; // 0x402df5
    if (__xstat(1, (char *)*(int64_t *)(v116 + 8), v129) != 0) {
        goto lab_0x402e61;
    } else {
        // 0x402e4f
        v114 = v131;
        v112 = 1;
        v110 = v116;
        if (*v134 == *v123) {
            goto lab_0x402de8;
        } else {
            goto lab_0x402e61;
        }
    }
  lab_0x402e61:
    // 0x402e61
    *v123 = -2;
    v114 = v131;
    v112 = 1;
    int64_t v122; // 0x4023e0
    v110 = v122;
    goto lab_0x402de8;
  lab_0x4033e0:;
    // 0x4033e0
    int64_t v147; // 0x4023e0
    int64_t v148 = v147;
    int64_t v149; // 0x4023e0
    int64_t v150 = v149;
    int64_t v151; // 0x4023e0
    int64_t v152 = v151;
    int64_t v153; // 0x4023e0
    int64_t v154 = *(int64_t *)(v153 + 48); // 0x4033e0
    int64_t v155 = v152; // 0x4033e7
    int64_t v156 = v154; // 0x4033e7
    int64_t v157 = v150; // 0x4033e7
    int64_t v158 = v148; // 0x4033e7
    int64_t v159; // 0x4023e0
    int64_t v160 = v159; // 0x4033e7
    if (v154 == 0) {
        // break -> 0x4033e9
        goto lab_0x4033e9;
    }
    goto lab_0x403370;
  lab_0x40339c:;
    int64_t str8 = *(int64_t *)(v153 + 8); // 0x40339c
    int64_t v176 = str8; // 0x4033aa
    int64_t v177 = -1;
    int64_t v178 = 0; // 0x4033aa
    int64_t v173; // 0x4023e0
    while (v177 != 0) {
        int64_t v179 = v176;
        int64_t v180 = v177 - 1; // 0x4033aa
        int64_t v181 = v180; // 0x4033aa
        v176 = v179 + v173;
        v178 = v180;
        if (*(char *)v179 == 0) {
            // break -> 
            break;
        }
        v177 = v181;
        v178 = 0;
    }
    int64_t v182 = v178;
    int64_t n = -2 - v182; // 0x4033af
    int64_t v164; // 0x4023e0
    v151 = v164;
    v149 = n;
    int64_t v162; // 0x4023e0
    v147 = v162;
    int64_t v161; // 0x4023e0
    v159 = v161;
    uint64_t v183; // 0x403356
    int64_t v184; // 0x4023e0
    if (n < v161 || v183 < n) {
        goto lab_0x4033e0;
    } else {
        // 0x4033bd
        v151 = v164;
        v149 = 1;
        v147 = v153;
        v159 = 1;
        if (n == 1) {
            goto lab_0x4033e0;
        } else {
            if (v183 == n) {
                goto lab_0x4034dd;
            } else {
                // 0x4033d0
                v151 = v164;
                v149 = n;
                v147 = v162;
                v159 = v161;
                if (*(char *)(v184 + -1 - v182) == 47) {
                    goto lab_0x4034dd;
                } else {
                    goto lab_0x4033e0;
                }
            }
        }
    }
  lab_0x4034dd:;
    // 0x4034dd
    int64_t * v185; // 0x4023e0
    *v185 = n;
    char * str9; // 0x402dad
    int32_t strncmp_rc = strncmp((char *)str8, str9, (int32_t)n); // 0x4034eb
    int64_t v186 = *v185; // 0x4034f0
    v151 = n;
    v149 = v186;
    v147 = strncmp_rc == 0 ? v153 : v162;
    v159 = strncmp_rc == 0 ? v186 : v161;
    goto lab_0x4033e0;
  lab_0x402d74:;
    // 0x402d74
    int64_t v187; // 0x4023e0
    int64_t v188 = v187;
    int64_t v189; // 0x4023e0
    int64_t v190 = v189;
    char * v191; // 0x402c77
    free((int64_t *)v191);
    int64_t v192; // 0x4023e0
    int64_t v193 = *(int64_t *)(v192 + 48); // 0x402d7c
    int64_t v194 = v190; // 0x402d83
    int64_t v195 = v193; // 0x402d83
    int64_t v196 = v188; // 0x402d83
    if (v193 == 0) {
        // break -> 0x402d89
        goto lab_0x402d89_2;
    }
    goto lab_0x402c70;
  lab_0x402d36:;
    // 0x402d36
    int64_t v203; // 0x4023e0
    int64_t * v210; // 0x4023e0
    *v210 = v203;
    int64_t v204; // 0x4023e0
    char * str14 = (char *)v204; // 0x402d3e
    uint64_t len = (int64_t)strlen(str14); // 0x402d3e
    int64_t v211 = *v210; // 0x402d49
    char * v212; // 0x402c68
    char v213 = *v212 ^ 1;
    int64_t * v214; // 0x402c5f
    char v215 = *v214 > len; // 0x402d5e
    char v216 = v213 | v215; // 0x402d5e
    int64_t v217; // 0x4023e0
    char v218; // 0x4023e0
    char v219; // 0x4023e0
    int64_t v220; // 0x4023e0
    int64_t v197; // 0x4023e0
    int64_t v221; // 0x4023e0
    int64_t * v222; // 0x4023e0
    char * v223; // 0x4023e0
    struct stat * v224; // 0x4023e0
    int64_t v225; // 0x40301a
    int64_t v226; // 0x40301f
    if (v216 != 0) {
        // 0x402ff6
        *v222 = v211;
        *v223 = v215;
        *v210 = len;
        int32_t v227 = __xstat(1, str14, v224); // 0x403015
        v225 = *v210;
        v226 = *v222;
        v218 = v216;
        if (v227 == 0) {
            goto lab_0x403043;
        } else {
            if (v213 == 0) {
                // 0x40333a
                v219 = *v212;
                goto lab_0x403057;
            } else {
                // 0x403031
                v218 = 0;
                if (*v223 == 0) {
                    // 0x40333a
                    v219 = *v212;
                    goto lab_0x403057;
                } else {
                    goto lab_0x403043;
                }
            }
        }
    } else {
        // 0x402d67
        *v212 = 1;
        v220 = v211;
        v221 = v197;
        v217 = v216;
        goto lab_0x402d6c;
    }
  lab_0x403043:;
    int64_t * v228; // 0x4023e0
    int64_t * v229; // 0x4023e0
    int64_t v230; // 0x4023e0
    int64_t * v231; // 0x402c53
    int64_t * v198; // 0x4023e0
    int64_t * v202; // 0x4023e0
    if (v225 == 1) {
        // 0x403434
        free((int64_t *)v226);
        free((int64_t *)v191);
        free((int64_t *)*(int64_t *)(v2 + 104));
        *v231 = v192;
        v229 = v198;
        v228 = v202;
        v230 = v192;
        goto lab_0x403453;
    }
    // 0x40304d
    *v214 = v225;
    *v231 = v192;
    v219 = v218;
    goto lab_0x403057;
  lab_0x402d6c:
    // 0x402d6c
    free((int64_t *)v220);
    v189 = v221;
    v187 = v217;
    goto lab_0x402d74;
  lab_0x402cf9:;
    // 0x402cf9
    char * v209; // 0x402ce7
    free((int64_t *)v209);
    int64_t * v208; // 0x402ce4
    int64_t v233 = function_40a790(*v208); // 0x402d04
    int64_t str15 = v233; // 0x402d0f
    if (v233 == 0) {
        // 0x402feb
        v203 = 0;
        v204 = *v202;
        goto lab_0x402d36;
    } else {
        goto lab_0x402d15;
    }
  lab_0x403057:
    // 0x403057
    *v212 = v219;
    v220 = v226;
    int64_t v232; // 0x4023e0
    v221 = v232;
    v217 = 0;
    goto lab_0x402d6c;
  lab_0x402d15:
    // 0x402d15
    *v210 = str15;
    char * str11; // 0x4023e0
    int32_t strcmp_rc2 = strcmp((char *)str15, str11); // 0x402d20
    int64_t v234 = *v210; // 0x402d25
    v220 = v234;
    v221 = v197;
    v217 = 1;
    if (strcmp_rc2 != 0) {
        goto lab_0x402d6c;
    } else {
        // 0x402d32
        v203 = v234;
        v204 = *v202;
        goto lab_0x402d36;
    }
  lab_0x402629:;
    int64_t v235 = function_40a560(16); // 0x402635
    *(int64_t *)v235 = (int64_t)g82;
    *(int64_t *)(v235 + 8) = g59;
    g59 = v235;
    // 0x4024a8
    v4 = v5;
    goto lab_0x4024a8_2;
  lab_0x402b8c:
    // 0x402b8c
    function_403e20(5, v37);
    function_403e20(10, 0);
    goto lab_0x402ba2;
  lab_0x402ba2:
    // 0x402ba2
    function_403ba0();
    uint64_t v236 = (int64_t)g35; // 0x402ba7
    int64_t v237; // 0x4023e0
    int64_t v238; // 0x4023e0
    int64_t v239; // 0x4023e0
    int64_t v240; // 0x4023e0
    bool v241; // 0x4023e0
    if (v1 > v236) {
        // 0x402bb5
        g65 = 1;
        v238 = g35;
        v239 = ((v236 ^ 0xffffffff) + a1 & 0xffffffff) + (int64_t)&g36;
        goto lab_0x402bd8;
    } else {
        int64_t v242 = g57; // 0x403524
        int64_t v243 = 0; // 0x403524
        int64_t v244 = g57; // 0x403524
        if (g57 != 0) {
            int64_t v245 = 1; // 0x40351e
            int64_t v246 = *(int64_t *)(v242 + 48);
            v242 = v246;
            int64_t v247 = v245; // 0x403524
            v243 = v245;
            v244 = v246;
            while (v246 != 0) {
                // 0x40351a
                v245 = v247 + 1 & 0xffffffff;
                v246 = *(int64_t *)(v242 + 48);
                v242 = v246;
                v247 = v245;
                v243 = v245;
                v244 = v246;
            }
        }
        int64_t v248 = 0x100000000 * v243 >> 32; // 0x403526
        int64_t v249 = function_406460(v248, 0, 0x4039f0, 0x403a00, 0x403ac0); // 0x40353b
        g68 = v249;
        if (v249 == 0) {
            // 0x4038e8
            function_40a7b0(v248);
            // UNREACHABLE
        }
        int64_t v250 = g57; // 0x403550
        v79 = 0x403a00;
        v80 = 0x4039f0;
        v81 = 0;
        if (v250 != 0) {
            // 0x4035c5
            v47 = &v6;
            v48 = v241 ? -1 : 1;
            v83 = 0x403a00;
            v84 = 0x4039f0;
            v85 = 0;
            v86 = v250;
            while (true) {
              lab_0x4035c5:
                // 0x4035c5
                v77 = v87;
                v41 = v86;
                v70 = v85;
                v39 = v84;
                v44 = v83;
                v49 = (char *)(v41 + 40);
                v40 = *v49;
                if ((v40 & 2) == 0) {
                    goto lab_0x4035d6;
                } else {
                    // 0x4035cd
                    v38 = v39;
                    if (*(char *)&g66 != 0) {
                        goto lab_0x403570;
                    } else {
                        goto lab_0x4035d6;
                    }
                }
            }
          lab_0x4038e8:
            // 0x4038e8
            function_40a7b0(v72);
            // UNREACHABLE
        }
      lab_0x4030fe:
        // 0x4030fe
        if (g67 == 0) {
            // 0x403103
            g57 = 0;
            if (v81 != 0) {
                int64_t v251 = *(int64_t *)(v81 + 8); // 0x403110
                int64_t v252 = *(int64_t *)(v81 + 16); // 0x403114
                *(int64_t *)(v251 + 48) = v244;
                int64_t v253 = v251; // 0x403128
                int64_t v254 = v252; // 0x403128
                while (v252 != 0) {
                    // 0x403110
                    v251 = *(int64_t *)(v254 + 8);
                    v252 = *(int64_t *)(v254 + 16);
                    *(int64_t *)(v251 + 48) = v253;
                    v253 = v251;
                    v254 = v252;
                }
                // 0x40312f
                g57 = v251;
            }
            // 0x403136
            function_4066a0(g68);
            g68 = 0;
        }
        // 0x40314d
        v240 = v80;
        v237 = v82;
        if (g57 != 0) {
            int64_t v255 = g57;
            unsigned char v256 = *(char *)(v255 + 40); // 0x403156
            int64_t v257 = *(int64_t *)(v255 + 24); // 0x40315b
            int64_t v258 = *(int64_t *)(v255 + 8); // 0x403161
            *(int64_t *)(v2 - 8) = v79;
            *(int64_t *)(v2 - 16) = 1;
            int64_t v259 = *(int64_t *)v255; // 0x40316d
            *(int64_t *)(v2 - 24) = 0;
            *(int64_t *)(v2 - 32) = (int64_t)(v256 / 2 % 2);
            function_403f10((int32_t)v259, v258, 0, 0, (int32_t)v257, (int32_t)(v256 % 2), (int64_t)&g83, (int64_t)&g83, (int64_t)&g83);
            v255 += 48;
            v240 = 0;
            v237 = v82;
            while (v255 != 0) {
                // 0x403156
                v256 = *(char *)(v255 + 40);
                v257 = *(int64_t *)(v255 + 24);
                v258 = *(int64_t *)(v255 + 8);
                *(int64_t *)(v2 - 8) = 0;
                *(int64_t *)(v2 - 16) = 1;
                v259 = *(int64_t *)v255;
                *(int64_t *)(v2 - 24) = 0;
                *(int64_t *)(v2 - 32) = (int64_t)(v256 / 2 % 2);
                function_403f10((int32_t)v259, v258, 0, 0, (int32_t)v257, (int32_t)(v256 % 2), (int64_t)&g83, (int64_t)&g83, (int64_t)&g83);
                v255 += 48;
                v240 = 0;
                v237 = v82;
            }
        }
        goto lab_0x40318e;
    }
  lab_0x402bd8:;
    // 0x402bd8
    int64_t v260; // 0x4023e0
    int64_t v261 = v260;
    int64_t v262 = v239;
    int64_t v263 = v238;
    int64_t v264 = *(int64_t *)(str7 + 8 * v263); // 0x402bdc
    int64_t * v265 = (int64_t *)(v2 + 32);
    *v265 = v264;
    int64_t v266 = v262; // 0x402beb
    int64_t v267 = v261; // 0x402beb
    int64_t * v268; // 0x4023e0
    int64_t v269; // 0x4023e0
    int64_t v270; // 0x4023e0
    int64_t v271; // 0x4023e0
    int64_t v272; // 0x4023e0
    int64_t v273; // 0x4023e0
    int64_t v274; // 0x4023e0
    int64_t v275; // 0x4023e0
    if (v264 == 0) {
        goto lab_0x402fb8;
    } else {
        int64_t v276 = *(int64_t *)(v2 + 96); // 0x402c00
        int64_t v277 = 144 * (int64_t)((int32_t)v263 - g35) + v276; // 0x402c00
        *(int64_t *)(v2 + 64) = v277;
        int32_t v278 = *(int32_t *)(v277 + 24); // 0x402c0a
        int64_t v279 = v2 + 8;
        *(int32_t *)v279 = v278;
        v275 = v262;
        v272 = v261;
        if ((v278 & 0xb000) != 0x2000) {
            goto lab_0x402da8;
        } else {
            char * v280 = canonicalize_file_name((char *)v264); // 0x402c24
            int64_t v281 = (int64_t)v280; // 0x402c24
            *(int64_t *)(v2 + 104) = v281;
            v269 = v279;
            v268 = v265;
            v273 = v262;
            v270 = v261;
            if (v280 == NULL) {
                goto lab_0x4034bf;
            } else {
                // 0x402c37
                *(int64_t *)v279 = *v280 != 47 ? v264 : v281;
                v274 = v262;
                v271 = v261;
                goto lab_0x402c43;
            }
        }
    }
  lab_0x40318e:
    // 0x40318e
    if (g62 != 0) {
        // 0x40319b
        if (g55 != 0) {
            char v282 = *(char *)&g23; // 0x4031a4
            *(int64_t *)(v2 - 8) = v240;
            *(int64_t *)(v2 - 16) = 0;
            int64_t v283 = v282 == 0 ? (int64_t)"total" : (int64_t)"-"; // 0x4031b8
            *(int64_t *)(v2 - 24) = (int64_t)&g48;
            *(int64_t *)(v2 - 32) = 0;
            function_403f10((int32_t)"total", v283, 0, 0, 0, 0, (int64_t)&g83, (int64_t)&g83, (int64_t)&g83);
        }
        // 0x4031d9
        if (g43 == 0) {
            // 0x402925
            return g60;
        }
        int64_t v284 = v2 + 144;
        int64_t v285 = 0;
        int64_t v286; // 0x403207
        int64_t v287; // 0x40323b
        int64_t v288; // 0x403246
        int32_t v289; // 0x403259
        int64_t v290; // 0x40325c
        int64_t v291; // 0x4032db
        int64_t v292; // 0x40327b
        int64_t v293; // 0x40329b
        int64_t v294; // 0x4032a9
        int64_t * v295; // 0x4032b0
        uint64_t v296; // 0x4032b0
        if (g45 != 0) {
            // 0x403200
            v286 = 8 * v285;
            v292 = 0;
            v293 = *(int64_t *)*(int64_t *)(g44 + v286);
            v287 = 8 * v292;
            v288 = *(int64_t *)(g46 + v287);
            *(int64_t *)v284 = *(int64_t *)(v288 + 32);
            v289 = *(int32_t *)(v288 + 40);
            v290 = function_407f30(v293, v284, v289, 8 * (int32_t)(v292 == g45 - 1));
            v291 = v290;
            if (v290 == 0) {
                // 0x4032d0
                v291 = *(int64_t *)(*(int64_t *)(g44 + v286) + v287);
            }
            // 0x403273
            fputs_unlocked((char *)v291, g38);
            v292++;
            free((int64_t *)v290);
            while (v292 < g45) {
                // 0x403290
                v293 = *(int64_t *)(v287 + 8 + *(int64_t *)(g44 + v286));
                if (v292 != 0) {
                    // 0x4032a9
                    v294 = (int64_t)g38;
                    v295 = (int64_t *)(v294 + 40);
                    v296 = *v295;
                    if (v296 >= *(int64_t *)(v294 + 48)) {
                        // 0x403324
                        __overflow(g38, 32);
                    } else {
                        // 0x4032ba
                        *v295 = v296 + 1;
                        *(char *)v296 = 32;
                    }
                }
                // 0x403220
                v287 = 8 * v292;
                v288 = *(int64_t *)(g46 + v287);
                *(int64_t *)v284 = *(int64_t *)(v288 + 32);
                v289 = *(int32_t *)(v288 + 40);
                v290 = function_407f30(v293, v284, v289, 8 * (int32_t)(v292 == g45 - 1));
                v291 = v290;
                if (v290 == 0) {
                    // 0x4032d0
                    v291 = *(int64_t *)(*(int64_t *)(g44 + v286) + v287);
                }
                // 0x403273
                fputs_unlocked((char *)v291, g38);
                v292++;
                free((int64_t *)v290);
            }
        }
        int64_t v297 = (int64_t)g38; // 0x4032e8
        int64_t * v298 = (int64_t *)(v297 + 40); // 0x4032ef
        uint64_t v299 = *v298; // 0x4032ef
        if (v299 >= *(int64_t *)(v297 + 48)) {
            // 0x4034ce
            __overflow(g38, 10);
        } else {
            // 0x4032fd
            *v298 = v299 + 1;
            *(char *)v299 = 10;
        }
        int64_t v300 = v285 + 1; // 0x403308
        while (v300 < g43) {
            // 0x4031f0
            v285 = v300;
            if (g45 != 0) {
                // 0x403200
                v286 = 8 * v285;
                v292 = 0;
                v293 = *(int64_t *)*(int64_t *)(g44 + v286);
                v287 = 8 * v292;
                v288 = *(int64_t *)(g46 + v287);
                *(int64_t *)v284 = *(int64_t *)(v288 + 32);
                v289 = *(int32_t *)(v288 + 40);
                v290 = function_407f30(v293, v284, v289, 8 * (int32_t)(v292 == g45 - 1));
                v291 = v290;
                if (v290 == 0) {
                    // 0x4032d0
                    v291 = *(int64_t *)(*(int64_t *)(g44 + v286) + v287);
                }
                // 0x403273
                fputs_unlocked((char *)v291, g38);
                v292++;
                free((int64_t *)v290);
                while (v292 < g45) {
                    // 0x403290
                    v293 = *(int64_t *)(v287 + 8 + *(int64_t *)(g44 + v286));
                    if (v292 != 0) {
                        // 0x4032a9
                        v294 = (int64_t)g38;
                        v295 = (int64_t *)(v294 + 40);
                        v296 = *v295;
                        if (v296 >= *(int64_t *)(v294 + 48)) {
                            // 0x403324
                            __overflow(g38, 32);
                        } else {
                            // 0x4032ba
                            *v295 = v296 + 1;
                            *(char *)v296 = 32;
                        }
                    }
                    // 0x403220
                    v287 = 8 * v292;
                    v288 = *(int64_t *)(g46 + v287);
                    *(int64_t *)v284 = *(int64_t *)(v288 + 32);
                    v289 = *(int32_t *)(v288 + 40);
                    v290 = function_407f30(v293, v284, v289, 8 * (int32_t)(v292 == g45 - 1));
                    v291 = v290;
                    if (v290 == 0) {
                        // 0x4032d0
                        v291 = *(int64_t *)(*(int64_t *)(g44 + v286) + v287);
                    }
                    // 0x403273
                    fputs_unlocked((char *)v291, g38);
                    v292++;
                    free((int64_t *)v290);
                }
            }
            // 0x4032e8
            v297 = (int64_t)g38;
            v298 = (int64_t *)(v297 + 40);
            v299 = *v298;
            if (v299 >= *(int64_t *)(v297 + 48)) {
                // 0x4034ce
                __overflow(g38, 10);
            } else {
                // 0x4032fd
                *v298 = v299 + 1;
                *(char *)v299 = 10;
            }
            // 0x403308
            v300 = v285 + 1;
        }
        // 0x402925
        return g60;
    }
    // 0x403490
    if (g60 != 0) {
        // 0x402925
        return g60;
    }
    char * format4 = dcgettext(NULL, "no file systems processed", 5); // 0x4034a9
    error(1, (int32_t)"no file systems processed" ^ (int32_t)"no file systems processed", format4);
    v269 = v2 + 8;
    v268 = (int64_t *)(v2 + 32);
    v273 = (int64_t)format4;
    v270 = v237;
    goto lab_0x4034bf;
  lab_0x402fb8:;
    int64_t v318 = v267;
    int64_t v319 = v266;
    int64_t * v320 = (int64_t *)(v2 + 48); // 0x402fb8
    int64_t v321 = *v320; // 0x402fb8
    v240 = v319;
    v237 = v318;
    if (*(int64_t *)(v2 + 56) == v321) {
        goto lab_0x40318e;
    } else {
        // 0x402fcb
        *v320 = v321 + 1;
        v238 = v321;
        v239 = v319;
        v260 = v318;
        goto lab_0x402bd8;
    }
  lab_0x4034bf:
    // 0x4034bf
    *(int64_t *)v269 = *v268;
    v274 = v273;
    v271 = v270;
    goto lab_0x402c43;
  lab_0x402da8:;
    int64_t v307 = v272;
    int64_t v305 = v275;
    int64_t * v315 = (int64_t *)(v2 + 32); // 0x402da8
    str9 = canonicalize_file_name((char *)*v315);
    int64_t v311 = (int64_t)str9; // 0x402dad
    int64_t v308; // 0x4023e0
    int64_t * v323; // 0x4023e0
    int64_t v312; // 0x4023e0
    int64_t v306; // 0x4023e0
    int64_t v325; // 0x4023e0
    int64_t v326; // 0x4023e0
    int64_t v310; // 0x4023e0
    int64_t v324; // 0x4023e0
    int64_t v304; // 0x4023e0
    int64_t v309; // 0x4023e0
    if (str9 == NULL) {
        goto lab_0x402dca;
    } else {
        // 0x402dc1
        if (*str9 == 47) {
            // 0x403345
            v173 = v241 ? -1 : 1;
            int64_t v337 = v311; // 0x4023e0
            int64_t v338 = -1; // 0x40334e
            int64_t v339 = 0; // 0x40334e
            while (v338 != 0) {
                int64_t v340 = v337;
                v338--;
                v337 = v340 + v173;
                v339 = v338;
                if (*(char *)v340 == 0) {
                    // break -> 
                    break;
                }
                v339 = 0;
            }
            if (g57 == 0) {
                // 0x402f6a
                free((int64_t *)str9);
                v304 = v305;
                v306 = v307;
                goto lab_0x402f72;
            } else {
                // 0x403363
                v183 = -2 - v339;
                v184 = v311 - 1;
                v185 = (int64_t *)(v2 + 8);
                v155 = v305;
                v156 = g57;
                v157 = v307;
                v158 = 0;
                v160 = 0;
                while (true) {
                  lab_0x403370:
                    // 0x403370
                    v161 = v160;
                    v162 = v158;
                    int64_t v163 = v157;
                    v153 = v156;
                    v164 = v155;
                    int64_t v165 = 5; // 0x40337e
                    int64_t v166 = *(int64_t *)(v153 + 24);
                    int64_t v167 = (int64_t)"lofs";
                    unsigned char v168 = *(char *)v166; // 0x40337e
                    char v169 = *(char *)v167; // 0x40337e
                    char v170 = v169; // 0x40337e
                    bool v171 = false; // 0x40337e
                    while (v168 == v169) {
                        v165--;
                        int64_t v172 = v167 + v173; // 0x40337e
                        int64_t v174 = v166 + v173; // 0x40337e
                        v170 = v168;
                        v171 = true;
                        if (v165 == 0) {
                            // break -> 
                            break;
                        }
                        v166 = v174;
                        v167 = v172;
                        v168 = *(char *)v166;
                        v169 = *(char *)v167;
                        v170 = v169;
                        v171 = false;
                    }
                    unsigned char v175 = v170;
                    v151 = v164;
                    v149 = v163;
                    v147 = v162;
                    v159 = v161;
                    if ((v168 >= v175 && !v171) == v168 < v175) {
                        goto lab_0x4033e0;
                    } else {
                        if (v162 == 0) {
                            goto lab_0x40339c;
                        } else {
                            // 0x40338e
                            if (*(char *)(v162 + 40) % 2 != 0) {
                                goto lab_0x40339c;
                            } else {
                                // 0x403396
                                v151 = v164;
                                v149 = v163;
                                v147 = v162;
                                v159 = v161;
                                if (*(char *)(v153 + 40) % 2 != 0) {
                                    goto lab_0x4033e0;
                                } else {
                                    goto lab_0x40339c;
                                }
                            }
                        }
                    }
                }
              lab_0x4033e9:
                // 0x4033e9
                free((int64_t *)str9);
                v308 = v173;
                v309 = v152;
                v310 = v311;
                v312 = v150;
                if (v148 == 0) {
                    goto lab_0x402ddb;
                } else {
                    int64_t * v341 = (int64_t *)(v148 + 8);
                    int64_t v342 = v2 + 144; // 0x4033ff
                    int32_t v343 = __xstat(1, (char *)*v341, (struct stat *)v342); // 0x40340c
                    v308 = v173;
                    v309 = v342;
                    v310 = 1;
                    v312 = v150;
                    if (v343 != 0) {
                        goto lab_0x402ddb;
                    } else {
                        // 0x403419
                        v308 = v173;
                        v309 = v342;
                        v310 = 1;
                        v312 = v150;
                        v323 = v341;
                        v324 = 1;
                        v325 = v150;
                        v326 = v148;
                        if (*(int64_t *)v342 != *(int64_t *)*(int64_t *)(v2 + 64)) {
                            goto lab_0x402ddb;
                        } else {
                            goto lab_0x403098;
                        }
                    }
                }
            }
        } else {
            goto lab_0x402dca;
        }
    }
  lab_0x402c43:;
    int64_t v301 = v271;
    int64_t v302 = v274;
    if (g57 == 0) {
        // 0x403836
        free((int64_t *)*(int64_t *)(v2 + 104));
        v275 = v302;
        v272 = v301;
        goto lab_0x402da8;
    } else {
        // 0x402c53
        v231 = (int64_t *)(v2 + 80);
        *v231 = 0;
        v214 = (int64_t *)(v2 + 40);
        *v214 = -1;
        v212 = (char *)(v2 + 16);
        *v212 = 0;
        int64_t * str10 = (int64_t *)(v2 + 8);
        v210 = (int64_t *)(v2 + 24);
        v232 = v2 + 144;
        v222 = (int64_t *)(v2 + 72);
        v223 = (char *)(v2 + 95);
        v224 = (struct stat *)v232;
        v194 = v302;
        v195 = g57;
        v196 = 0;
        while (true) {
          lab_0x402c70:
            // 0x402c70
            v192 = v195;
            v197 = v194;
            v198 = (int64_t *)v192;
            int64_t v199 = *v198; // 0x402c70
            char * v200 = (char *)v199;
            v191 = canonicalize_file_name(v200);
            char * v201 = v200; // 0x402c82
            if (v191 != NULL) {
                // 0x402c84
                v201 = (char *)(*v191 == 47 ? (int64_t)v191 : v199);
            }
            // 0x402c8b
            str11 = v201;
            v189 = v197;
            v187 = v196;
            if (strcmp((char *)*str10, str11) != 0) {
                goto lab_0x402d74;
            } else {
                // 0x402ca0
                v202 = (int64_t *)(v192 + 8);
                int64_t str13 = *v202; // 0x402ca7
                v203 = 0;
                v204 = str13;
                if (g57 == 0) {
                    goto lab_0x402d36;
                } else {
                    int64_t v205 = g57; // 0x402cd2
                    int64_t str12 = *(int64_t *)(v205 + 8); // 0x402cc0
                    int64_t v206 = strcmp((char *)str12, (char *)str13) == 0 ? v205 : 0; // 0x402cce
                    v205 += 48;
                    int64_t v207 = v206; // 0x402cd9
                    while (v205 != 0) {
                        // 0x402cc0
                        str12 = *(int64_t *)(v205 + 8);
                        v206 = strcmp((char *)str12, (char *)str13) == 0 ? v205 : v207;
                        v205 += 48;
                        v207 = v206;
                    }
                    // 0x402cdb
                    v203 = 0;
                    v204 = str13;
                    if (v206 == 0) {
                        goto lab_0x402d36;
                    } else {
                        // 0x402ce4
                        v208 = (int64_t *)v206;
                        v209 = canonicalize_file_name((char *)*v208);
                        if (v209 == NULL) {
                            goto lab_0x402cf9;
                        } else {
                            // 0x402cf4
                            str15 = (int64_t)v209;
                            if (*v209 == 47) {
                                goto lab_0x402d15;
                            } else {
                                goto lab_0x402cf9;
                            }
                        }
                    }
                }
            }
        }
      lab_0x402d89_2:
        // 0x402d89
        free((int64_t *)*(int64_t *)(v2 + 104));
        int64_t v303 = *v231; // 0x402d93
        if (v303 != 0) {
            // 0x402d89
            v229 = (int64_t *)v303;
            v228 = (int64_t *)(v303 + 8);
            v230 = v303;
            goto lab_0x403453;
        } else {
            // 0x402d9f
            v275 = v190;
            v272 = v301;
            if ((char)v188 != 0) {
                // 0x4037ab
                function_409b90(4, *(int64_t *)(v2 + 32));
                char * format5 = dcgettext(NULL, "cannot access %s: over-mounted by another device", 5); // 0x4037c9
                error(0, (int32_t)"cannot access %s: over-mounted by another device" ^ (int32_t)"cannot access %s: over-mounted by another device", format5);
                g60 = 1;
                v266 = (int64_t)format5;
                v267 = v301;
                goto lab_0x402fb8;
            } else {
                goto lab_0x402da8;
            }
        }
    }
  lab_0x402dca:
    // 0x402dca
    free((int64_t *)str9);
    v304 = v305;
    v306 = v307;
    if (g57 == 0) {
        goto lab_0x402f72;
    } else {
        // 0x402dca
        v308 = v241 ? -1 : 1;
        v309 = v305;
        v310 = v311;
        v312 = v307;
        goto lab_0x402ddb;
    }
  lab_0x402f72:;
    int64_t v313 = v306;
    int64_t v314 = *v315; // 0x402f72
    int64_t v316 = *(int64_t *)(v2 + 64); // 0x402f77
    int64_t v317 = function_404ed0(v314, v316); // 0x402f7f
    v266 = v304;
    v267 = v313;
    if (v317 != 0) {
        // 0x402f8c
        *(int64_t *)(v2 - 8) = v316;
        *(int64_t *)(v2 - 16) = 0;
        *(int64_t *)(v2 - 24) = 0;
        *(int64_t *)(v2 - 32) = 0;
        function_403f10(0, v317, v314, 0, 0, 0, (int64_t)&g83, (int64_t)&g83, (int64_t)&g83);
        free((int64_t *)v317);
        v266 = v314;
        v267 = v313;
    }
    goto lab_0x402fb8;
  lab_0x402ddb:;
    int64_t v322 = v312;
    int64_t v142 = v308;
    v131 = v2 + 144;
    v129 = (struct stat *)v131;
    v134 = (int64_t *)v131;
    v118 = v309;
    v119 = g57;
    v120 = v310;
    v121 = 0;
    while (true) {
      lab_0x402df5:
        // 0x402df5
        v122 = v121;
        v116 = v119;
        v123 = (int64_t *)(v116 + 32);
        int64_t v124 = *v123; // 0x402df5
        int64_t v125 = v124; // 0x402dfd
        int64_t v126 = v118; // 0x402dfd
        int64_t v127 = v120; // 0x402dfd
        if (v124 == -1) {
            int64_t * v128 = (int64_t *)(v116 + 8); // 0x403064
            if (__xstat(1, (char *)*v128, v129) != 0) {
                int32_t * err_num = __errno_location(); // 0x4030d4
                int64_t v130 = v131; // 0x4030df
                int64_t v132 = 1; // 0x4030df
                if (*err_num == 5) {
                    // 0x403777
                    error(0, *err_num, "%s", (char *)function_409c60(0, 3, *v128));
                    g60 = 1;
                    v130 = (int64_t)"%s";
                    v132 = 0;
                }
                // 0x4030e5
                *v123 = -2;
                v125 = -2;
                v126 = v130;
                v127 = v132;
            } else {
                int64_t v133 = *v134; // 0x40307e
                *v123 = v133;
                v125 = v133;
                v126 = v131;
                v127 = 1;
            }
        }
        int64_t v135 = v126;
        v114 = v135;
        v112 = v127;
        v110 = v122;
        if (*(int64_t *)*(int64_t *)(v2 + 64) != v125) {
            goto lab_0x402de8;
        } else {
            int64_t v136 = (int64_t)"lofs"; // 0x4023e0
            int64_t v137 = 5; // 0x402e17
            int64_t v138 = *(int64_t *)(v116 + 24);
            unsigned char v139 = *(char *)v138; // 0x402e17
            char v140 = *(char *)v136; // 0x402e17
            int64_t v141 = v136 + v142; // 0x402e17
            char v143 = v140; // 0x402e17
            bool v144 = false; // 0x402e17
            while (v139 == v140) {
                v137--;
                v136 = v141;
                int64_t v145 = v138 + v142; // 0x402e17
                v143 = v139;
                v144 = true;
                if (v137 == 0) {
                    // break -> 
                    break;
                }
                v138 = v145;
                v139 = *(char *)v138;
                v140 = *(char *)v136;
                v141 = v136 + v142;
                v143 = v140;
                v144 = false;
            }
            unsigned char v146 = v143;
            v114 = v135;
            v112 = v141;
            v110 = v122;
            if ((v139 >= v146 && !v144) == v139 < v146) {
                goto lab_0x402de8;
            } else {
                if (v122 == 0) {
                    goto lab_0x402e35;
                } else {
                    // 0x402e27
                    if (*(char *)(v122 + 40) % 2 != 0) {
                        goto lab_0x402e35;
                    } else {
                        // 0x402e2f
                        v114 = v135;
                        v112 = v141;
                        v110 = v122;
                        if (*(char *)(v116 + 40) % 2 != 0) {
                            goto lab_0x402de8;
                        } else {
                            goto lab_0x402e35;
                        }
                    }
                }
            }
        }
    }
  lab_0x40308f_2:
    // 0x40308f
    v304 = v115;
    v306 = v322;
    if (v111 == 0) {
        goto lab_0x402f72;
    } else {
        // 0x40308f
        v323 = (int64_t *)(v111 + 8);
        v324 = v113;
        v325 = v322;
        v326 = v111;
        goto lab_0x403098;
    }
  lab_0x403453:;
    unsigned char v327 = *(char *)(v230 + 40); // 0x40345a
    int64_t v328 = *(int64_t *)(v230 + 24); // 0x40345f
    int64_t v329 = *v228; // 0x403463
    *(int64_t *)(v2 - 8) = v301;
    *(int64_t *)(v2 - 16) = 0;
    int64_t v330 = *v229; // 0x40346e
    *(int64_t *)(v2 - 24) = 0;
    *(int64_t *)(v2 - 32) = (int64_t)(v327 / 2 % 2);
    int64_t v331 = *(int64_t *)(v2 + 32); // 0x40347d
    function_403f10((int32_t)v330, v329, v331, 0, (int32_t)v328, (int32_t)(v327 % 2), (int64_t)&g83, (int64_t)&g83, (int64_t)&g83);
    v266 = v331;
    v267 = v301;
    goto lab_0x402fb8;
  lab_0x403098:;
    unsigned char v332 = *(char *)(v326 + 40); // 0x403098
    int64_t v333 = *(int64_t *)(v326 + 24); // 0x40309e
    int64_t v334 = *v323; // 0x4030a3
    *(int64_t *)(v2 - 8) = v324;
    *(int64_t *)(v2 - 16) = 0;
    int64_t v335 = *(int64_t *)v326; // 0x4030ae
    *(int64_t *)(v2 - 24) = 0;
    *(int64_t *)(v2 - 32) = (int64_t)(v332 / 2 % 2);
    int64_t v336 = *v315; // 0x4030be
    function_403f10((int32_t)v335, v334, v336, (int32_t)v336, (int32_t)v333, (int32_t)(v332 % 2), (int64_t)&g83, (int64_t)&g83, (int64_t)&g83);
    v266 = v336;
    v267 = v325;
    goto lab_0x402fb8;
}
// Address range: 0x403910 - 0x40393b
// Address range: 0x40393b - 0x40395a
int64_t function_40393b(void) {
    // 0x40393b
    return 0x6175f0;
}
// Address range: 0x40395a - 0x403991
int64_t function_40395a(void) {
    // 0x40395a
    return 0;
}
// Address range: 0x403991 - 0x4039e8
int64_t function_403991(void) {
    // 0x403991
    if (g41 != 0) {
        // 0x4039e7
        int64_t result; // 0x403991
        return result;
    }
    int64_t v1 = g42; // 0x4039c4
    int64_t result2; // 0x4039d6
    if (g42 >= ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x4039d6
        result2 = function_40393b();
        g41 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x4039c6
        v1++;
    }
    // 0x4039ba
    g42 = v1;
    // 0x4039d6
    result2 = function_40393b();
    g41 = 1;
    return result2;
}
// Address range: 0x4039e8 - 0x4039ed
int64_t function_4039e8(void) {
    // 0x4039e8
    return function_40395a();
}
// Address range: 0x4039f0 - 0x4039fc
int64_t function_4039f0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x4039f0
    return a1 % a2;
}
// Address range: 0x403a00 - 0x403a0a
int64_t function_403a00(int64_t a1, int64_t a2) {
    // 0x403a00
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x403a10 - 0x403a5e
int64_t function_403a10(int64_t str) {
    bool v1 = str == 0 | g59 == 0;
    int64_t v2; // 0x403a10
    int64_t result = v2 & 0xffffff00 | (int64_t)v1; // 0x403a28
    if (v1) {
        // 0x403a48
        return result;
    }
    int64_t str2 = g59; // 0x403a3f
    int64_t result2 = 1; // 0x403a3d
    while (strcmp((char *)str, (char *)*(int64_t *)str2) != 0) {
        // 0x403a3f
        str2 += 8;
        result2 = result;
        if (str2 == 0) {
            // break -> 0x403a48
            break;
        }
        result2 = 1;
    }
    // 0x403a48
    return result2;
}
// Address range: 0x403a60 - 0x403abe
int64_t function_403a60(int64_t str) {
    bool v1 = str == 0 | g58 == 0;
    if (v1) {
        // 0x403a98
        return 0;
    }
    int64_t str2 = g58; // 0x403a8f
    int64_t result = 1; // 0x403a8d
    while (strcmp((char *)str, (char *)*(int64_t *)str2) != 0) {
        // 0x403a8f
        str2 += 8;
        int64_t v2; // 0x403a60
        result = v2 & 0xffffff00 | (int64_t)v1;
        if (str2 == 0) {
            // break -> 0x403a98
            break;
        }
        result = 1;
    }
    // 0x403a98
    return result;
}
// Address range: 0x403ac0 - 0x403ac5
int64_t function_403ac0(void) {
    // 0x403ac0
    int64_t v1; // 0x403ac0
    free((int64_t *)v1);
    return &g83;
}
// Address range: 0x403ad0 - 0x403b48
int64_t function_403ad0(void) {
    int64_t v1 = g44; // 0x403ad7
    int64_t v2 = g43 + 1; // 0x403adf
    g43 = v2;
    int64_t v3 = 8 * v2; // 0x403af4
    if (v3 < 0 || v2 >= 0x2000000000000000) {
        // 0x403b43
        function_40a7b0(v1);
        // UNREACHABLE
    }
    int64_t v4 = function_40a5c0(v1, v3); // 0x403b02
    g44 = v4;
    int64_t v5 = 8 * g45; // 0x403b2b
    if (v5 < 0 || g45 >= 0x2000000000000000) {
        // 0x403b43
        function_40a7b0(v5);
        // UNREACHABLE
    }
    int64_t result = function_40a560(v5); // 0x403b39
    *(int64_t *)(v4 - 8 + 8 * g43) = result;
    return result;
}
// Address range: 0x403b50 - 0x403b91
int64_t function_403b50(int64_t result) {
    // 0x403b50
    int64_t v1; // 0x403b50
    char v2 = v1;
    if (v2 == 0) {
        // 0x403b87
        return result;
    }
    int16_t ** v3 = __ctype_b_loc(); // 0x403b60
    if ((*(char *)(2 * (int64_t)v2 + (int64_t)*v3) & 2) != 0) {
        // 0x403b79
        *(char *)result = 63;
    }
    int64_t v4 = result + 1; // 0x403b7c
    char v5 = *(char *)v4; // 0x403b80
    while (v5 != 0) {
        int64_t v6 = v4;
        if ((*(char *)(2 * (int64_t)v5 + (int64_t)*v3) & 2) != 0) {
            // 0x403b79
            *(char *)v6 = 63;
        }
        // 0x403b7c
        v4 = v6 + 1;
        v5 = *(char *)v4;
    }
    // 0x403b87
    return result;
}
// Address range: 0x403ba0 - 0x403e20
int64_t function_403ba0(void) {
    int64_t result = function_403ad0(); // 0x403baf
    if (g45 == 0) {
        // 0x403df0
        return result;
    }
    int64_t v1 = 0; // 0x403bd5
    int64_t v2; // 0x403ba0
    char * v3; // 0x403ba0
    int64_t v4; // 0x403ba0
    int64_t v5; // 0x403ba0
    int64_t v6; // 0x403ba0
    int64_t v7; // bp-696, 0x403ba0
    int32_t v8; // bp-704, 0x403ba0
    int64_t v9; // 0x403c9e
    int64_t v10; // 0x403c5f
    char * str; // 0x403c83
    while (true) {
      lab_0x403c5f:
        // 0x403c5f
        v5 = v4;
        v10 = 8 * v1;
        v8 = 0;
        int64_t * v11 = (int64_t *)(v10 + g46); // 0x403c7b
        str = dcgettext(NULL, (char *)*(int64_t *)(*v11 + 24), 5);
        if (*(int32_t *)*v11 != 2) {
            goto lab_0x403be0;
        } else {
            uint32_t v12 = *(int32_t *)&g64; // 0x403c9e
            v9 = v12;
            switch (g47) {
                case 0: {
                    goto lab_0x403d48;
                }
                case 4: {
                    if ((v12 & 16) != 0) {
                        goto lab_0x403be0;
                    } else {
                        goto lab_0x403d48;
                    }
                }
                default: {
                    if (g47 != 3) {
                        goto lab_0x403be0;
                    } else {
                        int64_t v13 = function_407b40(g63, &v7); // 0x403cc7
                        v6 = v5;
                        v2 = v13;
                        v3 = str;
                        goto lab_0x403ccf;
                    }
                }
            }
        }
    }
  lab_0x403e13:
    // 0x403e13
    function_40a7b0(0);
    // UNREACHABLE
  lab_0x403be0:;
    int64_t v14 = (int64_t)strdup(str); // 0x403be3
    v8 = v14;
    int64_t v15 = v5; // 0x403bed
    int64_t v16 = v14; // 0x403bed
    goto lab_0x403bf0;
  lab_0x403bf0:
    // 0x403bf0
    if (v16 == 0) {
        // break -> 0x403e13
        goto lab_0x403e13;
    }
    // 0x403bf9
    function_403b50(v16);
    int64_t v17 = v8; // 0x403c0e
    *(int64_t *)(*(int64_t *)(g44 - 8 + 8 * g43) + v10) = v17;
    int64_t v18 = *(int64_t *)(g46 + v10); // 0x403c23
    int64_t * v19; // 0x403ba0
    int64_t v20; // 0x403ba0
    if (*(int64_t *)(v18 + 32) > 0x100000000 * function_408190(v17, 0) >> 32) {
        int64_t * v21 = (int64_t *)(*(int64_t *)(g46 + v10) + 32);
        v19 = v21;
        v20 = *v21;
    } else {
        int64_t v22 = function_408190((int64_t)v8, 0); // 0x403d17
        v19 = (int64_t *)(*(int64_t *)(g46 + v10) + 32);
        v20 = 0x100000000 * v22 >> 32;
    }
    // 0x403c4a
    v1++;
    *v19 = v20;
    v4 = v15;
    int64_t result2 = v20; // 0x403c59
    if (g45 <= v1) {
        // 0x403df0
        return result2;
    }
    goto lab_0x403c5f;
  lab_0x403d48:;
    int64_t v23 = g63; // 0x403d5f
    uint64_t v24 = v23 % 1024; // 0x403d74
    v23 /= 1024;
    while ((g63 || v24) == 0) {
        // 0x403d60
        v24 = v23 % 1024;
        v23 /= 1024;
    }
    int64_t v25; // 0x403ba0
    int64_t v26; // 0x403ba0
    if ((g63 == 0) >= (v24 == 0)) {
        if ((g63 == 0) > (v24 == 0)) {
            // 0x403e0e
            v25 = v9 & 260 | 152 | 256;
            goto lab_0x403db7;
        } else {
            // 0x403e18
            v26 = v9 & 292 | 152;
            goto lab_0x403db2;
        }
    } else {
        // 0x403dac
        v26 = v9 & 260 | 184;
        goto lab_0x403db2;
    }
  lab_0x403ccf:;
    char * v27 = dcgettext(NULL, "%s-%s", 5); // 0x403cdb
    int64_t v28 = function_40acf0((int64_t *)&v8, (int64_t)v27, v2, (int64_t)v3, v6, v9); // 0x403cf0
    int32_t v29; // 0x403ba0
    if ((int32_t)v28 != -1) {
        // 0x403ccf
        v29 = v8;
    } else {
        // 0x403cfa
        v8 = 0;
        v29 = 0;
    }
    // 0x403d03
    v15 = v6;
    v16 = v29;
    goto lab_0x403bf0;
  lab_0x403db2:
    // 0x403db2
    v25 = v26;
    int64_t v30 = v26; // 0x403db5
    if ((v26 & 32) == 0) {
        // 0x403e0e
        v25 = v30 | 256;
        goto lab_0x403db7;
    } else {
        goto lab_0x403db7;
    }
  lab_0x403db7:;
    int64_t v31 = function_406fb0(g63, &v7, v25, 1, 1, v9); // 0x403dc7
    v6 = 1;
    v2 = v31;
    v3 = dcgettext(NULL, "blocks", 5);
    goto lab_0x403ccf;
}
// Address range: 0x403e20 - 0x403f0f
int64_t function_403e20(uint32_t a1, int32_t a2) {
    int64_t v1 = g46; // 0x403e32
    int64_t v2 = g45 + 1; // 0x403e39
    g45 = v2;
    int64_t v3 = 8 * v2; // 0x403e4e
    if (v3 < 0) {
        // 0x403eae
        function_40a7b0(v1);
        // UNREACHABLE
    }
    if (v2 >= 0x2000000000000000) {
        // 0x403eae
        function_40a7b0(v1);
        // UNREACHABLE
    }
    int64_t v4 = function_40a5c0(v1, v3); // 0x403e5c
    int64_t v5 = a1; // 0x403e61
    g46 = v4;
    int64_t v6 = 16 * ((0x100000000 * (int64_t)a1 >> 31) + v5); // 0x403e76
    *(int64_t *)(v4 - 8 + 8 * g45) = v6 + (int64_t)&g21;
    if (a2 != 0) {
        // 0x403e8b
        *(int64_t *)(v6 + (int64_t)&g21 + 24) = (int64_t)a2;
    }
    int64_t v7 = 48 * v5; // 0x403e93
    char * v8 = (char *)(v7 + (int64_t)&g21 + 44); // 0x403e9d
    if (*v8 == 0) {
        // 0x403ea3
        *v8 = 1;
        return v7 + (int64_t)&g21;
    }
    // 0x403eb3
    __assert_fail("!\"field used\"", "src/df.c", 356, "alloc_field");
    int64_t v9 = (int64_t)*(int32_t *)&g64; // 0x403eda
    int64_t v10; // 0x403e20
    if (((char)"!\"field used\"" & (char)"!\"field used\"") == 0) {
        // 0x403ee8
        return function_406fb0((int64_t)"src/df.c", (int64_t *)((int64_t)(char)"!\"field used\"" + 356), v9, (int64_t)"alloc_field", v10, (int64_t)(char)"!\"field used\"");
    }
    int64_t result = function_406fb0(-(int64_t)"src/df.c", (int64_t *)((int64_t)(char)"!\"field used\"" + 356), v9, (int64_t)"alloc_field", v10, (int64_t)(char)"!\"field used\"") - 1; // 0x403f02
    *(char *)result = 45;
    return result;
}
// Address range: 0x403f10 - 0x40492c
int64_t function_403f10(int32_t a1, int64_t a2, int64_t a3, int32_t a4, int32_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t result = a9 & 0xffffffff; // 0x403f30
    if ((char)a7 != 0) {
        // 0x403f46
        if (*(char *)&g66 != 0) {
            // 0x404260
            return result;
        }
    }
    if ((char)a6 != 0) {
        // 0x403f58
        if ((g65 || g67) == 0) {
            // 0x404260
            return result;
        }
    }
    int64_t v1 = a5;
    int64_t result2 = function_403a10(v1); // 0x403f73
    if ((char)result2 == 0) {
        // 0x404260
        return result2;
    }
    int64_t result3 = function_403a60(v1); // 0x403f83
    if ((char)result3 != 0) {
        // 0x404260
        return result3;
    }
    int64_t v2 = a4;
    int64_t str2 = a1;
    int64_t v3 = 0x100000000 * a9 >> 32; // 0x403f3e
    int64_t v4; // 0x403f10
    int64_t v5; // 0x403f10
    int64_t v6; // 0x403f10
    char v7; // 0x403f10
    int64_t v8; // 0x403f10
    int64_t v9; // 0x403f10
    int64_t v10; // 0x403f10
    int64_t v11; // bp-904, 0x403f10
    int128_t v12; // 0x403f10
    if (a2 == 0 || a8 != 0) {
        // 0x4041f0
        v4 = a4 == 0 ? a2 == 0 ? str2 : a2 : v2;
        if (a8 == 0) {
            goto lab_0x403fc5;
        } else {
            int128_t v13 = __asm_movdqa(*(int128_t *)a8); // 0x404210
            int128_t v14 = __asm_movdqa(*(int128_t *)(a8 + 16)); // 0x404214
            v11 = __asm_movaps(v13);
            int128_t v15 = __asm_movdqa(*(int128_t *)(a8 + 32)); // 0x40421e
            int64_t result4 = *(int64_t *)(a8 + 48); // 0x404223
            int64_t v16 = v12; // 0x404227
            int64_t v17 = __asm_movaps(v14); // 0x40422d
            __asm_movaps(v15);
            char v18 = __asm_movaps(v15); // 0x404236
            int64_t v19 = v12;
            v10 = v16;
            v6 = result4;
            v8 = v19;
            v9 = v17;
            v7 = v18;
            v5 = v1;
            if (v16 == 0) {
                // 0x404246
                v10 = v16;
                v6 = result4;
                v8 = v19;
                v9 = v17;
                v7 = v18;
                v5 = v1;
                if (g67 == 0) {
                    // 0x404253
                    v10 = v16;
                    v6 = result4;
                    v8 = v19;
                    v9 = v17;
                    v7 = v18;
                    v5 = v1;
                    if (g65 == 0) {
                        // 0x404260
                        return result4;
                    }
                }
            }
            goto lab_0x40401c;
        }
    } else {
        // 0x403fb4
        int64_t v20; // 0x403f10
        if ((char)v20 != 47) {
            // 0x404260
            return 1;
        }
        // 0x403fbe
        v4 = a4 == 0 ? a2 : v2;
        goto lab_0x403fc5;
    }
  lab_0x4041e6:;
    // 0x4041e6
    int64_t v21; // 0x403f10
    int64_t v22 = v21;
    int64_t v23; // 0x4041b8
    uint32_t v24 = *(int32_t *)v23; // 0x4041e6
    int64_t v25 = v24; // 0x4041e6
    g85 = v25;
    int64_t v26 = a2; // 0x4041e8
    int64_t v27; // 0x403f10
    int64_t v28 = v27; // 0x4041e8
    int64_t v29; // 0x403f10
    int64_t v30; // 0x403f10
    int64_t v31; // 0x403f10
    int64_t v32; // bp-912, 0x403f10
    int64_t v33; // 0x403f10
    switch (v24) {
        case 0: {
            int64_t v34 = function_40a790(v33); // 0x4043e4
            v32 = v34;
            v31 = v34;
            v30 = v27;
            goto lab_0x404288;
        }
        case 1: {
            int64_t v35 = function_40a790(v29 == 0 ? (int64_t)"-" : v29); // 0x4043cb
            v32 = v35;
            v31 = v35;
            v30 = v27;
            goto lab_0x404288;
        }
        case 2: {
            goto lab_0x404390;
        }
        case 3: {
            goto lab_0x404380;
        }
        case 4: {
            goto lab_0x404340;
        }
        case 5: {
            goto lab_0x404310;
        }
        case 6: {
            goto lab_0x404390;
        }
        case 7: {
            goto lab_0x404380;
        }
        case 8: {
            goto lab_0x404340;
        }
        case 9: {
            goto lab_0x404310;
        }
        case 10: {
            goto lab_0x40427b;
        }
        case 11: {
            // 0x404400
            v26 = a3 == 0 ? (int64_t)"-" : a3;
            v28 = v27;
            goto lab_0x40427b;
        }
        default: {
            goto lab_0x4048d4;
        }
    }
  lab_0x404390:
    // 0x404390
    v26 = (int64_t)"-";
    v28 = v27;
    if (*(int64_t *)(v22 + 16) < 0xfffffffffffffffe) {
        // 0x4043a3
        v26 = v25;
        v28 = *(int64_t *)(v22 + 8);
    }
    goto lab_0x40427b;
  lab_0x404380:;
    int64_t v187 = v22 + 56; // 0x40438c
    if (*(int64_t *)(v22 + 48) < 0xfffffffffffffffe) {
        goto lab_0x40435b;
    } else {
        goto lab_0x40434e;
    }
  lab_0x404340:
    // 0x404340
    v187 = v22 + 32;
    if (*(int64_t *)(v22 + 24) < 0xfffffffffffffffe) {
        goto lab_0x40435b;
    } else {
        goto lab_0x40434e;
    }
  lab_0x404310:;
    // 0x404310
    int64_t v99; // 0x403f10
    int64_t v102; // 0x403f10
    int64_t v86; // 0x403f10
    int64_t v63; // 0x403f10
    int64_t v103; // 0x403f10
    int64_t v85; // 0x403f10
    int64_t v64; // 0x403f10
    int128_t v128; // 0x403f10
    uint64_t v101; // 0x404310
    uint64_t v111; // 0x404450
    char v110; // 0x404462
    int128_t v38; // 0x403f10
    int128_t v100; // 0x403f10
    int128_t v89; // 0x403f10
    int128_t v40; // 0x403f10
    int128_t v88; // 0x403f10
    int128_t v42; // 0x403f10
    int128_t v87; // 0x403f10
    if (*(int64_t *)(v22 + 48) < 0xfffffffffffffffe) {
        // 0x404450
        if (*(int64_t *)(v22 + 24) < 0xfffffffffffffffe) {
            char v189 = *(char *)(v22 + 56); // 0x40445e
            v110 = *(char *)(v22 + 32);
            if (v189 != 0) {
                int64_t v190 = -v101; // 0x404580
                int64_t v191; // 0x403f10
                int128_t v192; // 0x403f10
                if (v190 < 0) {
                    int64_t v193 = v190 % 2; // 0x4045bf
                    __asm_pxor(v38, v38);
                    int128_t v194 = __asm_cvtsi2sd(v190 / 2 | v193); // 0x4045cc
                    v191 = v193;
                    v192 = __asm_addsd(v194, v194);
                } else {
                    // 0x404588
                    __asm_pxor(v38, v38);
                    int128_t v195 = __asm_cvtsi2sd(v190); // 0x40458c
                    v191 = v190;
                    v192 = v195;
                }
                int128_t v196 = v192;
                int64_t v197 = v191;
                v100 = __asm_xorpd(v196, v128);
                v102 = v22;
                v103 = v197;
                goto lab_0x4044a1;
            } else {
                if (v101 < 0x28f5c28f5c28f5d) {
                    int64_t v198 = v111 + v101; // 0x404480
                    v99 = v198;
                    if (v198 != 0) {
                        // 0x404613
                        v99 = v198;
                        if (v110 != (char)(v198 < v101)) {
                            goto lab_0x404498;
                        } else {
                            uint64_t v199 = 100 * v101; // 0x404626
                            uint64_t v200 = (int64_t)(v199 % v198 != 0); // 0x404633
                            int64_t v201 = v199 / v198 + v200; // 0x404636
                            v63 = v198;
                            v64 = v201;
                            if (v201 < 0) {
                                goto lab_0x4048b2;
                            } else {
                                // 0x404519
                                __asm_pxor(v38, v38);
                                int128_t v202 = __asm_pxor(v42, v42); // 0x404643
                                int128_t v203 = __asm_cvtsi2sd(v201); // 0x404647
                                __asm_comisd(v203, v202);
                                v85 = v201;
                                v86 = v198;
                                v87 = v202;
                                v88 = v40;
                                v89 = v203;
                                if (v201 < v200) {
                                    goto lab_0x40431e;
                                } else {
                                    goto lab_0x404523;
                                }
                            }
                        }
                    } else {
                        goto lab_0x404498;
                    }
                } else {
                    // 0x40448f
                    v99 = v22;
                    if (v101 < 0) {
                        int64_t v204 = v101 % 2; // 0x4045da
                        __asm_pxor(v38, v38);
                        int128_t v205 = __asm_cvtsi2sd(v101 / 2 | v204); // 0x4045e7
                        v100 = __asm_addsd(v205, v205);
                        v102 = v22;
                        v103 = v204;
                        goto lab_0x4044a1;
                    } else {
                        goto lab_0x404498;
                    }
                }
            }
        } else {
            goto lab_0x40431e;
        }
    } else {
        goto lab_0x40431e;
    }
  lab_0x40427b:;
    int64_t v36 = function_40a790(v26); // 0x40427b
    v32 = v36;
    v31 = v36;
    v30 = v28;
    goto lab_0x404288;
  lab_0x404288:;
    int128_t v37 = v38; // 0x40428b
    int128_t v39 = v40; // 0x40428b
    int128_t v41 = v42; // 0x40428b
    int64_t v43 = v31; // 0x40428b
    int64_t v44 = v30; // 0x40428b
    int64_t v45 = v30; // 0x40428b
    if (v31 == 0) {
        goto lab_0x4048ed;
    }
    goto lab_0x404291;
  lab_0x40435b:
    // 0x40435b
    v26 = v25;
    v28 = *(int64_t *)(v22 + 8);
    goto lab_0x40427b;
  lab_0x40434e:
    // 0x40434e
    v26 = (int64_t)"-";
    v28 = v27;
    if (*(char *)v187 == 0) {
        goto lab_0x40427b;
    } else {
        goto lab_0x40435b;
    }
  lab_0x40431e:;
    int64_t v188 = (int64_t)strdup("-"); // 0x404323
    v32 = v188;
    int128_t v65 = v38; // 0x40432d
    int128_t v66 = v40; // 0x40432d
    int128_t v67 = v42; // 0x40432d
    int64_t v68 = v188; // 0x40432d
    goto lab_0x404330;
  lab_0x404291:
    // 0x404291
    function_403b50(v43);
    int64_t v46; // 0x4041b8
    uint64_t v47 = *(int64_t *)(*(int64_t *)(g46 + v46) + 32); // 0x4042a8
    int64_t * v48; // 0x403f10
    int64_t v49; // 0x403f10
    if (v47 > 0x100000000 * function_408190(v32, 0) >> 32) {
        int64_t * v50 = (int64_t *)(*(int64_t *)(g46 + v46) + 32);
        v48 = v50;
        v49 = *v50;
    } else {
        int64_t v51 = function_408190(v32, 0); // 0x404437
        v48 = (int64_t *)(*(int64_t *)(g46 + v46) + 32);
        v49 = 0x100000000 * v51 >> 32;
    }
    // 0x4042cb
    *v48 = v49;
    int64_t v52; // 0x403f10
    int64_t v53 = v52 + 1; // 0x4042d6
    int64_t v54 = *(int64_t *)(g44 - 8 + 8 * g43); // 0x4042e8
    *(int64_t *)(v54 + v46) = v32;
    int128_t v55 = v37; // 0x4042f6
    int128_t v56 = v39; // 0x4042f6
    int128_t v57 = v41; // 0x4042f6
    int64_t v58 = v53; // 0x4042f6
    int64_t v59 = v44; // 0x4042f6
    if (g45 <= v53) {
        // 0x4042fc
        free((int64_t *)v33);
        // 0x404260
        return &g83;
    }
    goto lab_0x4041b8;
  lab_0x404330:
    // 0x404330
    v37 = v65;
    v39 = v66;
    v41 = v67;
    v43 = v68;
    v44 = v27;
    int64_t v69 = v68; // 0x404333
    if (v68 == 0) {
      lab_0x404559:
        // 0x404559
        function_40a7b0(v69);
        // UNREACHABLE
    }
    goto lab_0x404291;
  lab_0x4048b2:;
    uint64_t v70 = v64;
    int64_t v71 = v63;
    __asm_pxor(v38, v38);
    int128_t v72 = __asm_pxor(v42, v42); // 0x4048b9
    int64_t v73 = v70 % 2; // 0x4048bd
    int128_t v74 = __asm_cvtsi2sd(v70 / 2 | v73); // 0x4048c6
    int128_t v75 = __asm_addsd(v74, v74); // 0x4048cf
    int128_t v76 = v40; // 0x4048cf
    int128_t v77 = v72; // 0x4048cf
    int64_t v78 = v71; // 0x4048cf
    int64_t v79 = v73; // 0x4048cf
    goto lab_0x404519;
  lab_0x404519:;
    int64_t v80 = v79;
    int64_t v81 = v78;
    int128_t v82 = v77;
    int128_t v83 = v76;
    int128_t v84 = v75;
    __asm_comisd(v84, v82);
    v85 = v80;
    v86 = v81;
    v87 = v82;
    v88 = v83;
    v89 = v84;
    goto lab_0x404523;
  lab_0x4044a1:;
    int64_t v104 = v103;
    int64_t v105 = v102;
    int128_t v106 = v100;
    char v107; // 0x403f10
    int128_t v108; // 0x403f10
    int64_t v109; // 0x403f10
    if (v110 == 0) {
        if (v111 < 0) {
            // 0x4045f5
            __asm_pxor(v40, v40);
            int64_t v112 = v111 / 2 | v111 % 2; // 0x404602
            char v113 = llvm_ctpop_i8((char)v112); // 0x404602
            int128_t v114 = __asm_cvtsi2sd(v112); // 0x404605
            v107 = v113;
            v109 = v112;
            v108 = __asm_addsd(v114, v114);
        } else {
            char v115 = llvm_ctpop_i8((char)v111); // 0x404560
            __asm_pxor(v40, v40);
            int128_t v116 = __asm_cvtsi2sd(v111); // 0x40456d
            v107 = v115;
            v109 = v111;
            v108 = v116;
        }
    } else {
        uint64_t v117 = -v111; // 0x4044aa
        char v118; // 0x403f10
        int128_t v119; // 0x403f10
        int64_t v120; // 0x403f10
        if (v117 < 0) {
            // 0x40459e
            __asm_pxor(v40, v40);
            int64_t v121 = v117 / 2 | v117 % 2; // 0x4045ab
            char v122 = llvm_ctpop_i8((char)v121); // 0x4045ab
            int128_t v123 = __asm_cvtsi2sd(v121); // 0x4045ae
            v118 = v122;
            v120 = v121;
            v119 = __asm_addsd(v123, v123);
        } else {
            char v124 = llvm_ctpop_i8((char)v117); // 0x4044ad
            __asm_pxor(v40, v40);
            v118 = v124;
            v120 = v111;
            v119 = __asm_cvtsi2sd(v117);
        }
        int128_t v125 = v119;
        int64_t v126 = v120;
        char v127 = v118;
        v107 = v127;
        v109 = v126;
        v108 = __asm_xorpd(v125, v128);
    }
    int128_t v129 = v108;
    int64_t v130 = v109;
    unsigned char v131 = v107;
    int128_t v132 = __asm_addsd(v129, v106); // 0x4044c7
    int128_t v133 = __asm_pxor(v42, v42); // 0x4044cb
    __asm_ucomisd(v132, v133);
    if (v131 % 2 == 0 || v130 != 0) {
        int128_t v134 = __asm_mulsd(v106, 0x4059000000000000); // 0x4044db
        int128_t v135 = __asm_movsd(0x3ff0000000000000); // 0x4044e3
        int128_t v136 = __asm_divsd(v134, v132); // 0x4044eb
        __asm_pxor(v132, v132);
        int128_t v137 = __asm_cvtsi2sd(__asm_cvttsd2si(v136)); // 0x4044f8
        int128_t v138 = __asm_movapd(v137); // 0x4044fd
        __asm_comisd(v136, __asm_subsd(v138, v135));
        v75 = v136;
        v76 = v137;
        v77 = v133;
        v78 = v105;
        v79 = v104;
        if (v130 != 0) {
            int128_t v139 = __asm_addsd(v135, v137); // 0x40450b
            __asm_comisd(v139, v136);
            __asm_comisd(v136, v137);
            v75 = __asm_movapd(v139);
            v76 = v137;
            v77 = v133;
            v78 = v105;
            v79 = v104;
        }
        goto lab_0x404519;
    } else {
        goto lab_0x40431e;
    }
  lab_0x404523:;
    int64_t v90 = v86;
    int64_t v91 = v85;
    int64_t v92; // 0x404117
    int64_t v93 = function_40acf0(&v32, (int64_t)"%.0f%%", v91, v90, v27, v92); // 0x404532
    if ((int32_t)v93 == -1) {
        // 0x404550
        v32 = 0;
        v69 = &v32;
        goto lab_0x404559;
    }
    int128_t v94 = v89;
    int128_t v95 = v88;
    int128_t v96 = v87;
    int64_t v97 = v32; // 0x40453c
    v65 = v94;
    v66 = v95;
    v67 = v96;
    v68 = v97;
    goto lab_0x404330;
  lab_0x404498:;
    int64_t v98 = v99;
    __asm_pxor(v38, v38);
    v100 = __asm_cvtsi2sd(v101);
    v102 = v98;
    v103 = v101;
    goto lab_0x4044a1;
  lab_0x403fc5:;
    int64_t v140 = function_40b070(v4, str2, &v11); // 0x403fd0
    int64_t v141; // 0x403f10
    int64_t v142; // 0x403f10
    int64_t v143; // 0x403f10
    int64_t v144; // 0x403f10
    int64_t result5; // 0x403f10
    int64_t v145; // 0x403f10
    int64_t v61; // bp-776, 0x403f10
    int64_t v146; // 0x403f10
    int64_t v147; // 0x403f10
    char v148; // 0x403f10
    int64_t v149; // 0x403f10
    int64_t v150; // 0x403f10
    int64_t v151; // 0x403f10
    int32_t * err_num; // 0x404668
    uint32_t result6; // 0x404677
    if ((int32_t)v140 != 0) {
        // 0x404668
        err_num = __errno_location();
        if ((char)v3 == 0) {
            goto lab_0x40468b;
        } else {
            // 0x404677
            result6 = *err_num;
            switch (result6) {
                case 13: {
                    goto lab_0x404857;
                }
                case 2: {
                    goto lab_0x404857;
                }
                default: {
                    goto lab_0x40468b;
                }
            }
        }
    } else {
        // 0x403fdd
        v141 = v12;
        v142 = v12;
        v143 = v12;
        v145 = v140;
        if ((char)v3 == 0) {
            goto lab_0x404839;
        } else {
            // 0x403fe8
            if (g67 != 0) {
                // 0x40479c
                int64_t v152; // bp-712, 0x403f10
                int32_t v153 = __xstat(1, (char *)v4, (struct stat *)&v152); // 0x4047ac
                v145 = v153;
                if (v153 != 0) {
                    goto lab_0x404839;
                } else {
                    // 0x4047b9
                    v145 = v152;
                    if (g68 == 0) {
                        goto lab_0x404839;
                    } else {
                        // 0x4047cd
                        v61 = v152;
                        int64_t v154 = function_4061f0(g68, &v61); // 0x4047dd
                        v145 = 0;
                        if (v154 == 0) {
                            goto lab_0x404839;
                        } else {
                            int64_t str = *(int64_t *)(v154 + 8); // 0x4047e7
                            v145 = v154;
                            if (str == 0) {
                                goto lab_0x404839;
                            } else {
                                int32_t strcmp_rc = strcmp((char *)*(int64_t *)str, (char *)str2); // 0x4047f7
                                v145 = 0;
                                if (strcmp_rc == 0) {
                                    goto lab_0x404839;
                                } else {
                                    // 0x404800
                                    v145 = strcmp_rc;
                                    if ((char)a7 != 0 == ((*(char *)(str + 40) & 2) != 0)) {
                                        goto lab_0x404839;
                                    } else {
                                        // 0x404839
                                        v11 = -1;
                                        v151 = -1;
                                        v146 = -1;
                                        v147 = -1;
                                        v149 = -1;
                                        v150 = -1;
                                        v148 = 0;
                                        v144 = (int64_t)"-";
                                        goto lab_0x404015;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                // 0x403ff5
                result5 = v140;
                v151 = v141;
                v149 = v142;
                v150 = v143;
                v144 = v1;
                if (v141 != 0) {
                    goto lab_0x404015;
                } else {
                    goto lab_0x403ffd;
                }
            }
        }
    }
  lab_0x40401c:
    // 0x40401c
    v29 = v5;
    function_403ad0();
    int64_t str3 = function_40a790(a1 == 0 ? (int64_t)"-" : str2); // 0x404037
    int64_t v155 = str3; // 0x404048
    if ((char)v3 != 0) {
        int32_t len = strlen((char *)str3); // 0x40404d
        v155 = str3;
        if (len >= 37) {
            int32_t ini_seg_bytes = strspn((char *)(str3 - 36 + (int64_t)len), "-0123456789abcdefABCDEF"); // 0x404062
            v155 = str3;
            if (ini_seg_bytes == 36) {
                int64_t v156 = function_405250(str3, 0); // 0x4046c2
                v155 = str3;
                if (v156 != 0) {
                    // 0x4046d3
                    free((int64_t *)str3);
                    v155 = v156;
                }
            }
        }
    }
    // 0x404078
    v33 = v155;
    v61 = 1;
    int64_t v62 = v11; // bp-840, 0x40413e
    int64_t v157 = v8; // 0x40418e
    int64_t v158; // 0x403f10
    int64_t v159; // 0x403f10
    int64_t v160; // 0x403f10
    int64_t v161; // 0x403f10
    int64_t v162; // 0x403f10
    int64_t v163; // 0x403f10
    int64_t v164; // 0x403f10
    if (a8 == 0 == (g55 != 0)) {
        if (v158 < 0xfffffffffffffffe) {
            // 0x4046fa
            g53 += v158;
        }
        if (v6 < 0xfffffffffffffffe) {
            // 0x404707
            g54 += v6;
        }
        if (v10 < 0xfffffffffffffffe) {
            // 0x404714
            g49 += v11 * v10;
        }
        if (v9 < 0xfffffffffffffffe) {
            // 0x404725
            g50 += v11 * v9;
        }
        // 0x404730
        v157 = v8;
        if (v8 < 0xfffffffffffffffe) {
            unsigned char v165 = v7 & (char)(v8 < 0xfffffffffffffffe); // 0x40413a
            unsigned char v166 = *(char *)&g52; // 0x40473a
            int64_t v167 = v11 * v8; // 0x404741
            int64_t v168 = g51; // 0x404745
            if (v166 == v165) {
                int64_t v169 = v168 + v167; // 0x40491d
                g51 = v169;
                v157 = v169;
                goto lab_0x40419b;
            } else {
                int64_t v170 = v166 == 0 ? v168 : -v168; // 0x40475c
                int64_t v171 = v165 != 0 ? -v167 : v167; // 0x404768
                v161 = v165;
                v163 = v170;
                v160 = v171;
                if (v170 > v171) {
                    // 0x404775
                    v162 = v166;
                    v159 = v171;
                    v164 = v170 - v171;
                    goto lab_0x40477f;
                } else {
                    goto lab_0x404906;
                }
            }
        } else {
            goto lab_0x40419b;
        }
    } else {
        goto lab_0x40419b;
    }
  lab_0x40468b:
    // 0x40468b
    error(0, *err_num, "%s", (char *)function_409c60(0, 3, v4));
    g60 = 1;
    // 0x404260
    return &g83;
  lab_0x404839:
    // 0x404839
    v151 = v141;
    v149 = v142;
    v150 = v143;
    v144 = v1;
    if (v141 != 0) {
        goto lab_0x404015;
    } else {
        // 0x404845
        result5 = v145;
        if (g67 != 0) {
            goto lab_0x404015;
        } else {
            goto lab_0x403ffd;
        }
    }
  lab_0x40419b:
    // 0x40419b
    if (g45 == 0) {
        // 0x4042fc
        free((int64_t *)v33);
        // 0x404260
        return &g83;
    }
    // 0x4041b8
    int128_t v172; // 0x403f10
    v55 = v172;
    int128_t v173; // 0x403f10
    v56 = v173;
    int128_t v174; // 0x403f10
    v57 = v174;
    v58 = 0;
    v59 = v157;
    while (true) {
      lab_0x4041b8:
        // 0x4041b8
        v27 = v59;
        v52 = v58;
        v42 = v57;
        v40 = v56;
        v38 = v55;
        v46 = 8 * v52;
        v23 = *(int64_t *)(v46 + g46);
        int32_t v60 = *(int32_t *)(v23 + 16); // 0x4041c4
        v21 = &v61;
        if (v60 == 1) {
            goto lab_0x4041e6;
        } else {
            // 0x4041d0
            v21 = &v62;
            if (v60 != 0) {
                // 0x404410
                v21 = 0;
                if (v60 != 2) {
                    // 0x404899
                    __assert_fail("!\"bad field_type\"", "src/df.c", 1077, "get_dev");
                    v63 = (int64_t)"get_dev";
                    v64 = 1077;
                    goto lab_0x4048b2;
                } else {
                    goto lab_0x4041e6;
                }
            } else {
                goto lab_0x4041e6;
            }
        }
    }
  lab_0x4048d4:
    // 0x4048d4
    __assert_fail("!\"unhandled field\"", "src/df.c", 1179, "get_dev");
    v45 = v27;
  lab_0x4048ed:
    // 0x4048ed
    __assert_fail("!\"empty cell\"", "src/df.c", 1183, "get_dev");
    int128_t v175 = v38; // 0x404901
    int128_t v176 = v40; // 0x404901
    int128_t v177 = v42; // 0x404901
    v161 = &g83;
    v163 = 1183;
    v160 = v45;
    goto lab_0x404906;
  lab_0x404857:
    // 0x404857
    if (g67 == 0) {
        // 0x404260
        return result6;
    }
    // 0x404864
    v11 = -1;
    v151 = -1;
    v146 = -1;
    v147 = -1;
    v149 = -1;
    v150 = -1;
    v148 = 0;
    v144 = (int64_t)"-";
    goto lab_0x404015;
  lab_0x404015:
    // 0x404015
    g62 = 1;
    v10 = v151;
    v6 = v146;
    v158 = v147;
    v8 = v149;
    v9 = v150;
    v7 = v148;
    v5 = v144;
    goto lab_0x40401c;
  lab_0x404906:;
    int64_t v178 = v160 - v163; // 0x404906
    *(char *)&g52 = (char)v161;
    int128_t v179 = v175; // 0x404918
    int128_t v180 = v176; // 0x404918
    int128_t v181 = v177; // 0x404918
    v162 = v161 & 0xffffffff;
    v159 = v178;
    v164 = v178;
    goto lab_0x40477f;
  lab_0x403ffd:
    // 0x403ffd
    v151 = v141;
    v149 = v142;
    v150 = v143;
    v144 = v1;
    if (g65 == 0) {
        // 0x404260
        return result5;
    }
    goto lab_0x404015;
  lab_0x40477f:;
    int64_t v182 = v164;
    int64_t v183 = v159;
    int128_t v184 = v181;
    int128_t v185 = v180;
    int128_t v186 = v179;
    g51 = v182;
    v172 = v186;
    v173 = v185;
    v174 = v184;
    v157 = v183;
    if ((char)v162 != 0) {
        // 0x404787
        g51 = -v182;
        v172 = v186;
        v173 = v185;
        v174 = v184;
        v157 = v183;
    }
    goto lab_0x40419b;
}
// Address range: 0x404930 - 0x404d5d
int64_t function_404930(int64_t a1) {
    int32_t status = a1; // 0x404946
    if (status != 0) {
        // 0x40494a
        __fprintf_chk(g40, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40496f
        exit(status);
        // UNREACHABLE
    }
    // 0x404976
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Show information about the file system on which each FILE resides,\nor all file systems by default.\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "  -a, --all             include pseudo, duplicate, inaccessible file systems\n  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n                           '-BM' prints sizes in units of 1,048,576 bytes;\n                           see SIZE format below\n  -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)\n  -H, --si              print sizes in powers of 1000 (e.g., 1.1G)\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "  -i, --inodes          list inode information instead of block usage\n  -k                    like --block-size=1K\n  -l, --local           limit listing to local file systems\n      --no-sync         do not invoke sync before getting usage info (default)\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "      --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,\n                               or print all fields if FIELD_LIST is omitted.\n  -P, --portability     use the POSIX output format\n      --sync            invoke sync before getting usage info\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "      --total           elide all entries insignificant to available space,\n                          and produce a grand total\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "  -t, --type=TYPE       limit listing to file systems of type TYPE\n  -T, --print-type      print file system type\n  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n  -v                    (ignored)\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g38);
    __printf_chk(1, dcgettext(NULL, "\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n", 5), g38);
    fputs_unlocked(dcgettext(NULL, "\nFIELD_LIST is a comma-separated list of columns to be included.  Valid\nfield names are: 'source', 'fstype', 'itotal', 'iused', 'iavail', 'ipcent',\n'size', 'used', 'avail', 'pcent', 'file' and 'target' (see info page).\n", 5), g38);
    int64_t v1 = &g2; // bp-136, 0x404b3a
    bool v2; // 0x404930
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x404bc0
    int64_t v6 = *(int64_t *)v5; // 0x404bc4
    int64_t v7 = 3; // 0x404bca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"df";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x404bd6
        char v11 = *(char *)v9; // 0x404bd6
        char v12 = v11; // 0x404bd6
        bool v13 = false; // 0x404bd6
        while (v10 == v11) {
            // 0x404bcc
            v7--;
            int64_t v14 = v9 + v3; // 0x404bd6
            int64_t v15 = v8 + v3; // 0x404bd6
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
            // break -> 0x404be2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x404be2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x404cf4;
        } else {
            // 0x404cde
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404d33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404c44;
            } else {
                goto lab_0x404cf4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x404c44;
        } else {
            // 0x404c2a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404d33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404c44;
            } else {
                goto lab_0x404c44;
            }
        }
    }
  lab_0x404cf4:
    // 0x404cf4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404c84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40496f
    exit(status);
    // UNREACHABLE
  lab_0x404c44:
    // 0x404c44
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404c84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40496f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x404d60 - 0x404ec1
int64_t function_404d60(void) {
    // 0x404d60
    int64_t v1; // 0x404d60
    int64_t v2 = function_40a790(v1); // 0x404d6e
    char * str = (char *)v2; // 0x404d8b
    char * found_char_pos = strchr(str, 44); // 0x404d8b
    int64_t v3 = 0; // 0x404d93
    if (found_char_pos != NULL) {
        // 0x404d95
        *found_char_pos = 0;
        v3 = (int64_t)found_char_pos + 1;
    }
    uint64_t v4 = 0;
    int64_t str2 = *(int64_t *)(48 * v4 + (int64_t)&g22); // 0x404dae
    int64_t v5; // 0x404d60
    while (strcmp((char *)str2, str) != 0) {
        // 0x404dc1
        if (v4 == 11) {
            // 0x404dcb
            function_409de0(v2);
            v5 = (int64_t)"option --output: field %s unknown";
            goto lab_0x404de0;
        }
        v4++;
        str2 = *(int64_t *)(48 * v4 + (int64_t)&g22);
    }
    char v6 = *(char *)(48 * (v4 & 0xffffffff) + (int64_t)&g23); // 0x404e12
    while (v6 == 0) {
        uint64_t v7 = v4 % 64; // 0x404e27
        if ((1 << v7 & 4075) != 0) {
            // 0x404e70
            function_403e20((int32_t)v4, 0);
        } else {
            if (v7 == 4) {
                // 0x404e80
                function_403e20((int32_t)v4, (int32_t)"Avail");
            } else {
                if (v7 != 2) {
                    // 0x404e8e
                    __assert_fail("!\"invalid field\"", "src/df.c", 427, "decode_output_arg");
                    goto lab_0x404ea7;
                }
                // 0x404e39
                function_403e20((int32_t)v4, (int32_t)"Size");
            }
        }
        // 0x404e45
        if (v3 == 0) {
            // 0x404e51
            free((int64_t *)v2);
            return &g83;
        }
        int64_t v8 = v3;
        str = (char *)v8;
        found_char_pos = strchr(str, 44);
        v3 = 0;
        if (found_char_pos != NULL) {
            // 0x404d95
            *found_char_pos = 0;
            v3 = (int64_t)found_char_pos + 1;
        }
        // 0x404d9c
        v4 = 0;
        str2 = *(int64_t *)(48 * v4 + (int64_t)&g22);
        while (strcmp((char *)str2, str) != 0) {
            // 0x404dc1
            if (v4 == 11) {
                // 0x404dcb
                function_409de0(v8);
                v5 = (int64_t)"option --output: field %s unknown";
                goto lab_0x404de0;
            }
            v4++;
            str2 = *(int64_t *)(48 * v4 + (int64_t)&g22);
        }
        // 0x404e08
        v6 = *(char *)(48 * (v4 & 0xffffffff) + (int64_t)&g23);
    }
    goto lab_0x404ea7;
  lab_0x404ea7:
    // 0x404ea7
    function_409de0(str2);
    v5 = (int64_t)"option --output: field %s used more than once";
  lab_0x404de0:
    // 0x404de0
    error(0, 0, dcgettext(NULL, (char *)v5, 5));
    function_404930(1);
    // UNREACHABLE
}
// Address range: 0x404ed0 - 0x405250
int64_t function_404ed0(int64_t path, int64_t a2) {
    // 0x404ed0
    int64_t v1; // bp-344, 0x404ed0
    int64_t v2 = function_409f30(&v1); // 0x404eef
    int32_t * err_num = __errno_location(); // 0x404ef7
    if ((int32_t)v2 != 0) {
        // 0x4051f8
        error(0, *err_num, dcgettext(NULL, "cannot get current directory", 5));
        // 0x405100
        return 0;
    }
    // 0x404f08
    int64_t v3; // 0x404ed0
    int64_t result; // 0x404ed0
    int64_t v4; // 0x404ed0
    int64_t v5; // bp-328, 0x404ed0
    if ((*(int32_t *)(a2 + 24) & 0xf000) == 0x4000) {
        int128_t v6 = __asm_movdqu(*(int128_t *)&v4); // 0x405110
        int128_t v7 = __asm_movdqu(*(int128_t *)(a2 + 16)); // 0x405114
        int128_t v8 = __asm_movdqu(*(int128_t *)(a2 + 32)); // 0x40511c
        int128_t v9 = __asm_movdqu(*(int128_t *)(a2 + 48)); // 0x405121
        v5 = __asm_movaps(v6);
        int128_t v10 = __asm_movdqu(*(int128_t *)(a2 + 64)); // 0x40512d
        int128_t v11 = __asm_movdqu(*(int128_t *)(a2 + 80)); // 0x405132
        __asm_movaps(v7);
        int128_t v12 = __asm_movdqu(*(int128_t *)(a2 + 96)); // 0x40513e
        int128_t v13 = __asm_movdqu(*(int128_t *)(a2 + 112)); // 0x405143
        int128_t v14 = __asm_movdqu(*(int128_t *)(a2 + 128)); // 0x405148
        __asm_movaps(v8);
        __asm_movaps(v9);
        __asm_movaps(v10);
        __asm_movaps(v11);
        __asm_movaps(v12);
        __asm_movaps(v13);
        __asm_movaps(v14);
        int32_t v15 = chdir((char *)path); // 0x405181
        v4 = path;
        v3 = path;
        if (v15 >= 0) {
            goto lab_0x405077_2;
        } else {
            goto lab_0x405191;
        }
    } else {
        int64_t str = function_405990(); // 0x404f1e
        int32_t len = strlen((char *)str); // 0x404f29
        int64_t * v16 = (int64_t *)str; // 0x404f49
        int64_t * dest_mem = memcpy((int64_t *)((int64_t)&v1 + 15 - ((int64_t)len + 24 & -16) & -16), v16, len + 1); // 0x404f49
        int64_t v17 = (int64_t)dest_mem; // 0x404f49
        free(v16);
        if (chdir((char *)dest_mem) < 0) {
            // 0x405220
            v4 = v17;
            v3 = v17;
            goto lab_0x405191;
        } else {
            // 0x404f69
            if (__xstat(1, ".", (struct stat *)&v5) >= 0) {
                goto lab_0x405077_2;
            } else {
                // 0x404f87
                function_409b90(4, v17);
                error(0, *err_num, dcgettext(NULL, "cannot stat current directory (now %s)", 5));
                result = 0;
                goto lab_0x4050d8;
            }
        }
    }
  lab_0x405077_2:
    // 0x405077
    v4 = (int64_t)"..";
    int128_t v18; // bp-184, 0x404ed0
    int64_t v19; // 0x404ed0
    if (__xstat(1, "..", (struct stat *)&v18) >= 0) {
        while (false && v5 == (int64_t)v18) {
            // 0x404ff0
            if (chdir("..") < 0) {
                // 0x4051d0
                v4 = (int64_t)"..";
                function_409b90(4, (int64_t)"..");
                v19 = (int64_t)"cannot change to directory %s";
                goto lab_0x4050b1;
            }
            int128_t v20 = __asm_movdqa(0); // 0x405002
            int128_t v21; // 0x404ed0
            int128_t v22 = __asm_movdqa(v21); // 0x40500a
            int128_t v23 = __asm_movdqa(v21); // 0x405012
            int128_t v24 = __asm_movdqa(v21); // 0x40501a
            v5 = __asm_movaps(v20);
            int128_t v25 = __asm_movdqa(v21); // 0x405026
            int128_t v26 = __asm_movdqa(v21); // 0x40502b
            int128_t v27 = __asm_movdqa(v21); // 0x405030
            int128_t v28 = __asm_movdqa(v21); // 0x405035
            __asm_movaps(v22);
            int128_t v29 = __asm_movdqa(v21); // 0x405041
            __asm_movaps(v23);
            __asm_movaps(v24);
            __asm_movaps(v25);
            __asm_movaps(v26);
            __asm_movaps(v27);
            __asm_movaps(v28);
            __asm_movaps(v29);
            if (__xstat(1, "..", (struct stat *)&v18) < 0) {
                // 0x405077
                v4 = (int64_t)"..";
                // 0x405095
                function_409b90(4, (int64_t)"..");
                v19 = (int64_t)"cannot stat %s";
                goto lab_0x4050b1;
            }
        }
        // 0x4050d0
        v4 = (int64_t)"..";
        result = function_40a7f0(1, (int64_t)"..");
        goto lab_0x4050d8;
    } else {
        // 0x405095
        function_409b90(4, (int64_t)"..");
        v19 = (int64_t)"cannot stat %s";
        goto lab_0x4050b1;
    }
  lab_0x405191:
    // 0x405191
    function_409b90(4, v3);
    error(0, *err_num, dcgettext(NULL, "cannot change to directory %s", 5));
    // 0x405100
    return 0;
  lab_0x4050d8:
    // 0x4050d8
    if ((int32_t)function_409f80(&v1) != 0) {
        // 0x405228
        error(1, *err_num, dcgettext(NULL, "failed to return to initial working directory", 5));
        return &g83;
    }
    // 0x4050f0
    function_409fa0(&v1);
    // 0x405100
    return result;
  lab_0x4050b1:
    // 0x4050b1
    v4 = v19;
    error(0, *err_num, dcgettext(NULL, (char *)v19, 5));
    result = 0;
    goto lab_0x4050d8;
}
// Address range: 0x405250 - 0x4058c3
int64_t function_405250(int64_t a1, uint32_t a2) {
    int64_t v1 = a1;
    uint32_t v2 = a2 % 4; // 0x405256
    if (a1 == 0 || (a2 + 3 & v2) != 0) {
        // 0x405700
        *__errno_location() = 22;
        // 0x40554e
        return 0;
    }
    int64_t v3; // 0x405250
    int64_t v4; // 0x405250
    int64_t v5; // 0x405250
    switch ((char)a1) {
        case 0: {
            // 0x4057c1
            *__errno_location() = 2;
            // 0x40554e
            return 0;
        }
        case 47: {
            int64_t v6 = function_40a560(0x1000); // 0x405415
            *(char *)v6 = 47;
            v5 = v6 + 1;
            v4 = v6 + 0x1000;
            v3 = v6;
            // break -> 0x4052c5
            break;
        }
        default: {
            int64_t str = function_40a7f0(a1, (int64_t)a2); // 0x405297
            if (str == 0) {
                // 0x40554e
                return 0;
            }
            int32_t len = strlen((char *)str); // 0x4052ab
            int64_t v7 = len; // 0x4052ab
            if (len < 0x1000) {
                int64_t v8 = function_40a5c0(str, 0x1000); // 0x4057dc
                v5 = v8 + v7;
                v4 = v8 + 0x1000;
                v3 = v8;
            } else {
                int64_t v9 = str + v7; // 0x4052bf
                v5 = v9;
                v4 = v9;
                v3 = str;
            }
            // break -> 0x4052c5
            break;
        }
    }
    int64_t v10 = a1; // 0x4052f2
    int64_t v11 = 0; // 0x4052f2
    int64_t v12 = 0; // 0x4052f2
    int64_t v13 = 0; // 0x4052f2
    char * v14 = (char *)&v1; // 0x4052f2
    int64_t v15 = v5; // 0x4052f2
    int64_t v16 = v4; // 0x4052f2
    int64_t v17 = v3; // 0x4052f2
    int64_t v18 = a1; // 0x4052f2
    int64_t v19; // 0x405250
    int64_t v20; // 0x405250
    int64_t v21; // 0x405250
    int64_t v22; // 0x405250
    char * v23; // 0x405250
    int64_t v24; // 0x405250
    int64_t v25; // 0x405250
    int64_t v26; // 0x405250
    int64_t v27; // 0x405250
    int64_t v28; // 0x405250
    int64_t v29; // 0x405250
    int64_t v30; // 0x405250
    int64_t v31; // 0x405250
    int64_t v32; // 0x405250
    int32_t * v33; // 0x405250
    int32_t * v34; // 0x405250
    int32_t v35; // 0x405250
    int32_t v36; // 0x405250
    int32_t v37; // 0x405250
    int64_t v38; // 0x405250
    int64_t v39; // 0x405250
    int64_t v40; // 0x405250
    int64_t v41; // 0x405250
    int64_t v42; // 0x405250
    int64_t v43; // 0x405250
    int64_t v44; // 0x405250
    uint64_t v45; // 0x405250
    int64_t v46; // 0x405333
    char * str3; // 0x405250
    int64_t v47; // 0x405333
    char * v48; // 0x405250
    int64_t v49; // 0x4055c4
    char * str2; // 0x4055d8
    int32_t len2; // 0x4055d8
    int64_t v50; // 0x4055d8
    int32_t len3; // 0x4055e3
    while (true) {
      lab_0x4052f8_4:
        // 0x4052f8
        v36 = v35;
        v39 = v13;
        int64_t v51 = v12;
        int64_t v52 = v10;
        int16_t v53 = (int16_t)v36 & -0x1000;
        v41 = v11;
        v23 = v14;
        v26 = v15;
        v21 = v18;
        int32_t v54; // 0x405250
        while (true) {
          lab_0x4052f8_3:
            // 0x4052f8
            v20 = v17;
            v25 = v16;
            v42 = v41;
            v45 = v20 + 1;
            v24 = (int64_t)*v23;
            v28 = v26;
            v22 = v21;
            int64_t v55; // 0x405250
            int64_t v56; // 0x405350
            while (true) {
              lab_0x4052f8_2:
                // 0x4052f8
                v29 = v28;
                if (v24 == 0) {
                    // break (via goto) -> 0x405500
                    goto lab_0x405500_3;
                }
                int64_t v57 = v22; // 0x405304
                int64_t v58 = v24; // 0x405304
                int64_t v59 = v22; // 0x405304
                int64_t v60; // 0x405310
                unsigned char v61; // 0x405314
                if (v24 == 47) {
                    v60 = v57 + 1;
                    v61 = *(char *)v60;
                    v57 = v60;
                    while (v61 == 47) {
                        // 0x405310
                        v60 = v57 + 1;
                        v61 = *(char *)v60;
                        v57 = v60;
                    }
                    // 0x40531d
                    v58 = v61;
                    v59 = v60;
                    if (v61 == 0) {
                        // break (via goto) -> 0x405500
                        goto lab_0x405500_3;
                    }
                }
                // 0x405325
                v55 = v59;
                int64_t v62 = v58;
                v46 = v55 + 1;
                str3 = (char *)v46;
                unsigned char v63 = *str3; // 0x405333
                int64_t v64 = v46; // 0x40533e
                while (v63 != 0 == (v63 != 47)) {
                    // 0x405333
                    v46 = v64 + 1;
                    str3 = (char *)v46;
                    v63 = *str3;
                    v64 = v46;
                }
                if (v46 == v55) {
                    // break (via goto) -> 0x405500
                    goto lab_0x405500_3;
                }
                // 0x40534d
                v47 = v63;
                v56 = v46 - v55;
                while (v56 != 1) {
                    if (v56 == 2 != ((char)v62 == 46)) {
                        // break (via goto) -> 0x40536c
                        goto lab_0x40536c_2;
                    }
                    // 0x4056c0
                    if (*(char *)(v55 + 1) != 46) {
                        // break (via goto) -> 0x40536c
                        goto lab_0x40536c_2;
                    }
                    int64_t v65 = v47; // 0x4056d6
                    int64_t v66 = v46; // 0x4056d6
                    if (v29 > v45) {
                        int64_t v67 = v29 - 1; // 0x4056dc
                        v27 = v67;
                        if (v20 >= v67) {
                            goto lab_0x4052f8;
                        } else {
                            int64_t v68 = v29 - 2; // 0x4056e5
                            v27 = v67;
                            if (*(char *)v68 != 47) {
                                // 0x405823
                                v27 = v20;
                                v30 = v68;
                                if (v20 == v68) {
                                    goto lab_0x4052f8;
                                } else {
                                    goto lab_0x405830;
                                }
                            } else {
                                goto lab_0x4052f8;
                            }
                        }
                    }
                    if (v65 == 0) {
                        // break (via goto) -> 0x405500
                        goto lab_0x405500_3;
                    }
                    // 0x405300
                    v57 = v66;
                    v58 = v65;
                    v59 = v66;
                    if (v65 == 47) {
                        v60 = v57 + 1;
                        v61 = *(char *)v60;
                        v57 = v60;
                        while (v61 == 47) {
                            // 0x405310
                            v60 = v57 + 1;
                            v61 = *(char *)v60;
                            v57 = v60;
                        }
                        // 0x40531d
                        v58 = v61;
                        v59 = v60;
                        if (v61 == 0) {
                            // break (via goto) -> 0x405500
                            goto lab_0x405500_3;
                        }
                    }
                    // 0x405325
                    v55 = v59;
                    v62 = v58;
                    v46 = v55 + 1;
                    str3 = (char *)v46;
                    v63 = *str3;
                    v64 = v46;
                    while (v63 != 0 == (v63 != 47)) {
                        // 0x405333
                        v46 = v64 + 1;
                        str3 = (char *)v46;
                        v63 = *str3;
                        v64 = v46;
                    }
                    if (v46 == v55) {
                        // break (via goto) -> 0x405500
                        goto lab_0x405500_3;
                    }
                    // 0x40534d
                    v47 = v63;
                    v56 = v46 - v55;
                }
                // 0x4054e8
                v27 = v29;
                if ((char)v62 != 46) {
                    // break -> 0x40536c
                    break;
                }
                goto lab_0x4052f8;
            }
          lab_0x40536c_2:;
            int64_t v69 = v29; // 0x405370
            if (*(char *)(v29 - 1) != 47) {
                // 0x405372
                *(char *)v29 = 47;
                v69 = v29 + 1;
            }
            int64_t v70 = v69;
            int64_t v71 = v70 + v56;
            int64_t v72 = v71; // 0x405380
            int64_t v73 = v70; // 0x405380
            v16 = v25;
            int64_t v74 = v20; // 0x405380
            if (v25 <= v71) {
                int64_t v75 = v56 < 0x1000 == (4095 - v56 & v56) < 0 ? v56 + 1 : 0x1000;
                int64_t v76 = v75 + v25 - v20; // 0x4053a3
                v74 = function_40a5c0(v20, v76);
                v73 = v74 + v70 - v20;
                v72 = v73 + v56;
                v16 = v74 + v76;
            }
            // 0x4053bd
            v17 = v74;
            v19 = v72;
            memcpy((int64_t *)v73, (int64_t *)v55, (int32_t)v56);
            *(char *)v19 = 0;
            v54 = 0;
            if ((a2 & 4) != 0 && v2 == 2) {
                // break -> 0x4053f3
                break;
            }
            // 0x405430
            v1 = 1;
            v48 = (char *)v17;
            int64_t v77; // bp-200, 0x405250
            int32_t v78; // 0x405250
            if ((a2 & 4) == 0) {
                // 0x405568
                v78 = __lxstat(1, v48, (struct stat *)&v77);
            } else {
                // 0x405449
                v78 = __xstat(1, v48, (struct stat *)&v77);
            }
            // 0x405453
            if (v78 == 0) {
                // 0x4054c0
                v54 = v36;
                v14 = str3;
                v10 = v52;
                v11 = v42;
                v12 = v51;
                v13 = v39;
                v37 = v36;
                v15 = v19;
                v18 = v46;
                switch (v53) {
                    case -0x6000: {
                        int64_t v79 = v42; // 0x405586
                        if (v42 == 0) {
                            // 0x405713
                            v1 = 7;
                            v79 = function_406460(7, 0, 0x406e20, 0x406e90, 0x406ed0);
                            if (v79 == 0) {
                                // 0x40573d
                                function_40a7b0(7);
                                // UNREACHABLE
                            }
                        }
                        // 0x40558c
                        v44 = v79;
                        int64_t v80 = function_405b90(v44, v52, &v77); // 0x40559b
                        if ((char)v80 != 0) {
                            // 0x405659
                            v43 = v44;
                            if (v2 != 2) {
                                // 0x405664
                                v31 = 40;
                                v33 = __errno_location();
                                goto lab_0x405671_2;
                            }
                        } else {
                            // 0x4055a8
                            function_405b00(v44, v52, &v77);
                            int64_t v81; // 0x405250
                            v49 = function_40d6b0(v17, v81);
                            if (v49 != 0) {
                                // 0x4055d5
                                str2 = (char *)v49;
                                len2 = strlen(str2);
                                v50 = len2;
                                len3 = strlen(str3);
                                uint64_t v82 = v50 + 1 + (int64_t)len3; // 0x4055f1
                                if (v51 == 0) {
                                    int64_t v83 = v82 >= 0x1000 ? v82 : 0x1000; // 0x4057a1
                                    int64_t v84 = function_40a560(v83); // 0x4057ad
                                    v38 = v83;
                                    v40 = v84;
                                    goto lab_0x405607;
                                } else {
                                    // 0x4055fc
                                    v38 = v51;
                                    v40 = v39;
                                    if (v82 > v51) {
                                        int64_t v85 = function_40a5c0(v39, v82); // 0x405862
                                        v38 = v82;
                                        v40 = v85;
                                        goto lab_0x405607;
                                    } else {
                                        goto lab_0x405607;
                                    }
                                }
                            }
                            int32_t * v86 = __errno_location(); // 0x4057f3
                            uint32_t v87 = *v86; // 0x405800
                            v43 = v44;
                            if (v2 == 2 != v87 != 12) {
                                // 0x405671
                                v31 = v87;
                                v33 = v86;
                                goto lab_0x405671_2;
                            }
                        }
                        goto lab_0x4054a9;
                    }
                    case 0x4000: {
                        goto lab_0x405404;
                    }
                    default: {
                        goto lab_0x4053f3;
                    }
                }
            } else {
                int32_t * v88 = __errno_location(); // 0x405457
                uint32_t v89 = *v88; // 0x40545f
                if (v2 == 0) {
                    // 0x405755
                    v32 = v89;
                    v34 = v88;
                    goto lab_0x405755_3;
                }
                // 0x40546d
                v54 = 0;
                if (v2 != 1) {
                    // break -> 0x4053f3
                    break;
                }
                char v90 = *(char *)(v46 + (int64_t)strspn(str3, "/")); // 0x405495
                v43 = v42;
                if (v89 == 2 != (v90 == 0)) {
                    // 0x405755
                    v32 = v89;
                    v34 = v88;
                    goto lab_0x405755_3;
                }
                goto lab_0x4054a9;
            }
        }
      lab_0x4053f3:
        // 0x4053f3
        v14 = str3;
        v10 = v52;
        v11 = v42;
        v12 = v51;
        v13 = v39;
        v37 = v54;
        v15 = v19;
        v18 = v46;
        if (v2 != 2 == (*str3 != 0)) {
            // 0x405748
            v32 = 20;
            v34 = __errno_location();
            goto lab_0x405755_3;
        }
        goto lab_0x405404;
    }
  lab_0x405500_3:;
    char * v91; // 0x405250
    int64_t v92; // 0x405250
    int64_t v93; // 0x405250
    if (v29 > v45) {
        int64_t v94 = v29 - 1; // 0x40550a
        char * v95 = (char *)v94;
        v91 = v95;
        v92 = v29;
        v93 = v94;
        if (*v95 == 47) {
            goto lab_0x405518;
        } else {
            goto lab_0x405514;
        }
    } else {
        goto lab_0x405514;
    }
  lab_0x4052f8:
    // 0x4052f8
    v24 = v47;
    v28 = v27;
    v22 = v46;
    goto lab_0x4052f8_2;
  lab_0x405404:
    // 0x405404
    v35 = v37;
    goto lab_0x4052f8_4;
  lab_0x4054a9:
    // 0x4054a9
    v41 = v43;
    v23 = str3;
    v26 = v19;
    v21 = v46;
    goto lab_0x4052f8_3;
  lab_0x405514:
    // 0x405514
    v91 = (char *)v29;
    v92 = v29 + 1;
    v93 = v29;
    goto lab_0x405518;
  lab_0x405518:
    // 0x405518
    *v91 = 0;
    int64_t v96 = v20; // 0x40551e
    if (v25 != v92) {
        // 0x405520
        v96 = function_40a5c0(v20, 1 - v20 + v93);
    }
    // 0x405532
    free((int64_t *)v39);
    int64_t result = v96; // 0x405544
    if (v42 != 0) {
        // 0x405546
        function_4066a0(v42);
        result = v96;
    }
  lab_0x40554e:
    // 0x40554e
    return result;
  lab_0x405830:;
    int64_t v97 = v30 - 1; // 0x405830
    v27 = v30;
    if (*(char *)v97 == 47) {
        goto lab_0x4052f8;
    } else {
        // 0x40583a
        v27 = v97;
        v30 = v97;
        if (v20 != v97) {
            goto lab_0x405830;
        } else {
            goto lab_0x4052f8;
        }
    }
  lab_0x405755_3:
    // 0x405755
    free((int64_t *)v39);
    free((int64_t *)v17);
    int64_t v98 = v42; // 0x40577f
    int64_t v99 = v32; // 0x40577f
    int32_t * v100 = v34; // 0x40577f
    if (v42 == 0) {
        goto lab_0x4056b1;
    } else {
        goto lab_0x405695;
    }
  lab_0x4056b1:
    // 0x4056b1
    *v100 = (int32_t)(v99 & 0xffffffff);
    result = 0;
    goto lab_0x40554e;
  lab_0x405695:
    // 0x405695
    function_4066a0(v98);
    goto lab_0x4056b1;
  lab_0x405671_2:
    // 0x405671
    free((int64_t *)v39);
    free((int64_t *)v17);
    v98 = v44;
    v99 = v31;
    v100 = v33;
    goto lab_0x405695;
  lab_0x405607:
    // 0x405607
    memmove((int64_t *)(v40 + v50), (int64_t *)v46, len3 + 1);
    int64_t * v101 = (int64_t *)v49; // 0x405627
    int64_t * dest_mem = memcpy((int64_t *)v40, v101, len2); // 0x405627
    int64_t v102 = v17 + 1; // 0x405630
    int64_t v103; // 0x405250
    int64_t v104; // 0x405250
    if (*str2 == 47) {
        // 0x405816
        *v48 = 47;
        v103 = v102;
        goto lab_0x40564c;
    } else {
        // 0x405643
        v103 = v19;
        if (v19 > v102) {
            int64_t v105 = v19 - 1; // 0x40588c
            v103 = v105;
            if (v17 >= v105) {
                goto lab_0x40564c;
            } else {
                // 0x405895
                v103 = v105;
                v104 = v105;
                if (*(char *)(v19 - 2) == 47) {
                    goto lab_0x40564c;
                } else {
                    goto lab_0x4058a2;
                }
            }
        } else {
            goto lab_0x40564c;
        }
    }
  lab_0x40564c:;
    int64_t v106 = (int64_t)dest_mem; // 0x405627
    free(v101);
    v14 = (char *)dest_mem;
    v10 = v106;
    v11 = v44;
    v12 = v38;
    v13 = v40;
    v37 = v36;
    v15 = v103;
    v18 = v106;
    goto lab_0x405404;
  lab_0x4058a2:;
    int64_t v107 = v104;
    int64_t v108 = v107 - 1; // 0x4058a2
    v103 = v17;
    if (v17 == v108) {
        goto lab_0x40564c;
    } else {
        // 0x4058af
        v103 = v108;
        v104 = v108;
        if (*(char *)(v107 - 2) == 47) {
            goto lab_0x40564c;
        } else {
            goto lab_0x4058a2;
        }
    }
}
// Address range: 0x4058d0 - 0x4058d8
int64_t function_4058d0(int64_t a1) {
    // 0x4058d0
    g70 = a1;
    int64_t result; // 0x4058d0
    return result;
}
// Address range: 0x4058e0 - 0x4058e8
int64_t function_4058e0(int64_t a1) {
    // 0x4058e0
    g69 = a1;
    int64_t result; // 0x4058e0
    return result;
}
// Address range: 0x4058f0 - 0x40598e
int64_t function_4058f0(void) {
    // 0x4058f0
    int32_t * err_num; // 0x405906
    if ((int32_t)function_40db30((int64_t)g38) == 0) {
        goto lab_0x40591c;
    } else {
        // 0x405906
        err_num = __errno_location();
        if (g69 == 0) {
            goto lab_0x405933;
        } else {
            // 0x405917
            if (*err_num != 32) {
                goto lab_0x405933;
            } else {
                goto lab_0x40591c;
            }
        }
    }
  lab_0x40591c:;
    int64_t result = function_40db30((int64_t)g40); // 0x405923
    if ((int32_t)result == 0) {
        // 0x40592c
        return result;
    }
    // 0x40596e
    _exit(g26);
    // UNREACHABLE
  lab_0x405933:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40593f
    if (g70 == 0) {
        // 0x405979
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405953
        error(0, *err_num, "%s: %s", (char *)function_409c30((int64_t)g70), v1);
    }
    // 0x40596e
    _exit(g26);
    // UNREACHABLE
}
// Address range: 0x405990 - 0x4059a8
int64_t function_405990(void) {
    // 0x405990
    int64_t v1; // 0x405990
    int64_t result = function_405a10(v1); // 0x405994
    if (result != 0) {
        // 0x40599e
        return result;
    }
    // 0x4059a3
    function_40a7b0(v1);
    // UNREACHABLE
}
// Address range: 0x4059b0 - 0x405a0d
int64_t function_4059b0(int64_t a1) {
    // 0x4059b0
    int64_t v1; // 0x4059b0
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x4059be
    int64_t v3 = function_405a70(a1, v1); // 0x4059c2
    int64_t result = v3 - a1; // 0x4059ca
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x4059f3
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x4059e0
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x4059f3
            break;
        }
        result2--;
    }
    // 0x4059f3
    return result2;
}
// Address range: 0x405a10 - 0x405a6a
int64_t function_405a10(int64_t a1) {
    // 0x405a10
    int64_t v1; // 0x405a10
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x405a2f
    if (mem == NULL) {
        // 0x405a56
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x405a45
    int64_t v3; // 0x405a10
    if (v2 == 0) {
        // 0x405a60
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x405a45
    *(char *)(v3 + result) = 0;
    // 0x405a56
    return result;
}
// Address range: 0x405a70 - 0x405acb
int64_t function_405a70(int64_t a1, int64_t a2) {
    // 0x405a70
    int64_t v1; // 0x405a70
    char v2 = v1;
    int64_t v3 = a1; // 0x405a79
    int64_t v4 = a1; // 0x405a79
    char v5 = v2; // 0x405a79
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x405a84
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x405a80
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x405a8e
    if (v5 == 0) {
      lab_0x405aca:
        // 0x405aca
        return result;
    }
    int64_t v7 = v4; // 0x405ab8
    int64_t v8 = 0; // 0x405ab8
    int64_t v9; // 0x405a70
    int64_t v10; // 0x405aba
    char v11; // 0x405abe
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x405ab5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x405aba
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x405ab5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x405aaa
    char v14 = *(char *)v13; // 0x405aae
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
            // 0x405ab5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x405aba
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x405ab5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x405aa0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x405aca
    return result2;
}
// Address range: 0x405ad0 - 0x405afb
int64_t function_405ad0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x405ad4
    int64_t result = len; // 0x405ad4
    if (len < 2) {
        // 0x405aea
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x405ae8
    while (*(char *)(v1 + str) == 47) {
        // 0x405af0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x405aea
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x405aea
    return result2;
}
// Address range: 0x405b00 - 0x405b86
int64_t function_405b00(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x405b70
        int64_t result; // 0x405b00
        return result;
    }
    int64_t v1 = (int64_t)a3;
    int64_t result2 = function_40a560(24); // 0x405b1d
    *(int64_t *)result2 = function_40a790(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(v1 + 8);
    *(int64_t *)(result2 + 16) = v1;
    int64_t v2 = function_406c00(a1, result2); // 0x405b46
    if (v2 == 0) {
        // 0x405b81
        function_40a7b0(a1);
        // UNREACHABLE
    }
    // 0x405b50
    if (result2 == v2) {
        // 0x405b70
        return result2;
    }
    // 0x405b55
    return function_406ed0(result2);
}
// Address range: 0x405b90 - 0x405bcb
int64_t function_405b90(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x405bc8
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x405b9d
    int64_t v2 = function_4061f0(a1, &v1); // 0x405bb1
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x405bd0 - 0x405c63
int64_t function_405bd0(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x405be7
    if (v1 == -1) {
        // 0x405c5f
        return -1;
    }
    int64_t v2 = v1; // 0x405bef
    int64_t v3; // 0x405bd0
    while (true) {
      lab_0x405bf8:
        // 0x405bf8
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x405c50;
        } else {
            goto lab_0x405c55;
        }
    }
  lab_0x405c5f_2:;
    // 0x405c5f
    int64_t result; // 0x405bd0
    return result;
  lab_0x405c55:;
    int64_t v4 = v3 + 2; // 0x405c55
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x405c5f
        goto lab_0x405c5f_2;
    }
    goto lab_0x405bf8;
  lab_0x405c50:
    // 0x405c50
    result = v3;
    goto lab_0x405c55;
}
// Address range: 0x405c70 - 0x405c80
int64_t function_405c70(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x405c70
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x405c80 - 0x405c87
int64_t function_405c80(int64_t a1, int64_t a2) {
    // 0x405c80
    int64_t v1; // 0x405c80
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x405c90 - 0x405cb1
int64_t function_405c90(int64_t a1, int64_t a2) {
    // 0x405c90
    int64_t v1; // 0x405c90
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x405ca8
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x405cc0 - 0x405dd9
int64_t function_405cc0(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_405c90(a1, a2); // 0x405cd4
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x405cdc
    int64_t result2 = *v2; // 0x405cdc
    if (result2 == 0) {
        // 0x405d6e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x405d04
            if (v3 == 0) {
                // 0x405d6e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x405d11
            int64_t v5 = v3; // 0x405d17
            int64_t v6 = v1; // 0x405d17
            int64_t result = v4; // 0x405d17
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x405d4c_2:
                // 0x405d4c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x405d51
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x405d60
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x405d6e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x405d24
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x405d31
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x405d4c_2;
                }
                // 0x405d39
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x405d4c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x405d6e
            return 0;
        }
    }
    // 0x405d83
    if ((char)a4 == 0) {
        // 0x405d6e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x405d88
    if (v12 == 0) {
        // 0x405dd0
        *v2 = 0;
        // 0x405d6e
        return result2;
    }
    // 0x405d91
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x405d9f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x405de0 - 0x405e5e
int64_t function_405de0(uint64_t a1) {
    if (a1 == (int64_t)&g4) {
        // 0x405e5d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x405deb
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g4) {
        // 0x405e4a
        *(int64_t *)a1 = (int64_t)&g4;
        return 0;
    }
    // 0x405df9
    __asm_comiss_1(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x405e14
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_2(v2, 0x3dcccccd); // 0x405e21
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x405e29
    __asm_comiss_1(v4, v3);
    __asm_comiss_1(__asm_movss(0x3f800000), v4);
    __asm_comiss_1(v1, v3);
    // 0x405e5d
    return 1;
}
// Address range: 0x405e60 - 0x405faa
int64_t function_405e60(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x405e7a
    uint64_t v2 = *v1; // 0x405e7a
    if (v2 <= a2) {
        // 0x405f64
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x405e60
    int64_t v8 = a2; // 0x405e60
    int64_t v9; // 0x405e60
    int64_t result; // 0x405e60
    int64_t v10; // 0x405e60
    while (true) {
      lab_0x405e96_2:
        // 0x405e96
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x405e96
        int64_t v12 = *v11; // 0x405e96
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x405e88;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x405e9f
            int64_t v14 = *v13; // 0x405e9f
            int64_t v15 = v14; // 0x405ea7
            int64_t v16 = v12; // 0x405ea7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x405ec4
                    int64_t v19 = *v18; // 0x405ec4
                    int64_t v20 = function_405c90(v3, v19); // 0x405ecd
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x405ed2
                    int64_t v22 = *v21; // 0x405ed2
                    int64_t * v23 = (int64_t *)v20; // 0x405ed6
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x405eb0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x405eff
                            break;
                        }
                    } else {
                        // 0x405edc
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x405eff
                            break;
                        }
                    }
                    // 0x405ec4
                    v15 = v22;
                }
                // 0x405eff
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x405f03
                v9 = *v1;
                goto lab_0x405e88;
            } else {
                int64_t v26 = function_405c90(v3, v25); // 0x405f1b
                int64_t * v27 = (int64_t *)v26; // 0x405f20
                if (*v27 == 0) {
                    // 0x405f80
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x405f29
                    int64_t * v29; // 0x405e60
                    int64_t v30; // 0x405e60
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x405f8f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x405f64
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x405f8f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x405f3a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x405f49
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x405f51
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x405f5a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x405f64
                    break;
                }
                goto lab_0x405e96_2;
            }
        }
    }
    // 0x405f64
    return result;
  lab_0x405e88:;
    int64_t v36 = v10 + 16; // 0x405e88
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x405e96_2;
    // 0x405e96
    goto lab_0x405e96_2;
}
// Address range: 0x405fb0 - 0x405fb5
int64_t function_405fb0(int64_t a1) {
    // 0x405fb0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x405fc0 - 0x405fc5
int64_t function_405fc0(int64_t a1) {
    // 0x405fc0
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x405fd0 - 0x405fd5
int64_t function_405fd0(int64_t a1) {
    // 0x405fd0
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x405fe0 - 0x40602f
int64_t function_405fe0(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x405fe3
    int64_t result = 0; // 0x405fec
    if (v1 <= a1) {
      lab_0x40602d:
        // 0x40602d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x405ff0
    while (*(int64_t *)v3 == 0) {
        // 0x405ff0
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x405fff
    int64_t v6 = v5; // 0x40600b
    int64_t v7 = 1; // 0x40600b
    int64_t v8; // 0x405fe0
    int64_t v9; // 0x406010
    int64_t v10; // 0x406014
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x406010
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x406020
    int64_t v12 = v3 + 16; // 0x406024
    while (v12 < v1) {
        // 0x405ff9
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x405ff0
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x405fff
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
                // 0x406010
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40601d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40602d
    return result2;
}
// Address range: 0x406030 - 0x406097
int64_t function_406030(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x406033
    int64_t v2 = a1; // 0x40603f
    int64_t v3 = 0; // 0x40603f
    int64_t v4 = 0; // 0x40603f
    int64_t v5 = 0; // 0x40603f
    int64_t v6 = 0; // 0x40603f
    int64_t v7; // 0x406030
    int64_t v8; // 0x406030
    int64_t v9; // 0x406030
    if (v1 > a1) {
        while (true) {
          lab_0x406051_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x406048;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x406057
                int64_t v13 = v10 + 1; // 0x40605b
                int64_t v14 = v11 + 1; // 0x40605f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x406066
                int64_t v16 = v14; // 0x406066
                if (v12 == 0) {
                    goto lab_0x406048;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x406070
                    int64_t v18 = v16 + 1; // 0x406074
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x406070
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40607d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x406086
                        break;
                    }
                    goto lab_0x406051_2;
                }
            }
        }
    }
  lab_0x406086:
    // 0x406086
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40608f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40608e
    return 0;
  lab_0x406048:;
    int64_t v20 = v8 + 16; // 0x406048
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x406086
        goto lab_0x406086;
    }
    goto lab_0x406051_2;
    // 0x406051
    goto lab_0x406051_2;
}
// Address range: 0x4060a0 - 0x4061e8
int64_t function_4060a0(uint64_t a1, int64_t a2) {
    // 0x4060a0
    int128_t v1; // 0x4060a0
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x4060b3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x4060b7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x4060be
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x4060d0
            while (*(int64_t *)v7 == 0) {
                // 0x4060d0
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40610d
                    goto lab_0x40610d;
                }
            }
        }
    }
  lab_0x40610d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40611c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x4060a0
    int128_t v10; // 0x4060a0
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x4061b3
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x4061bc
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x406153;
        } else {
            goto lab_0x4061c9;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x406146
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x4061c9;
        } else {
            goto lab_0x406153;
        }
    }
  lab_0x406153:
    // 0x406153
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x406157
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x406157
    goto lab_0x40615c;
  lab_0x4061c9:
    // 0x4061c9
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x4061da
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40615c;
  lab_0x40615c:
    // 0x40615c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x4061f0 - 0x406243
int64_t function_4061f0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_405c90(a1, result); // 0x4061fa
    int64_t v2 = *(int64_t *)v1; // 0x4061ff
    if (v2 == 0) {
        // 0x40622d
        return 0;
    }
    // 0x406213
    if (v2 == result) {
        // 0x40622d
        return result;
    }
    int64_t v3 = v1; // 0x406224
    int64_t result2 = v2; // 0x406222
    while ((char)v1 == 0) {
        // 0x406224
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40622d
            break;
        }
        // 0x406210
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40622d
            break;
        }
        result2 = v2;
    }
    // 0x40622d
    return result2;
}
// Address range: 0x406250 - 0x406298
int64_t function_406250(uint64_t a1) {
    int64_t result = 0; // 0x406255
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x406267
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40625e
    if (v1 <= a1) {
        // 0x406267
        return result;
    }
    int64_t v2 = a1; // 0x406265
    int64_t v3 = *(int64_t *)v2; // 0x406279
    result = v3;
    while (v3 == 0) {
        // 0x406270
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x406267
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x406267
    return result;
}
// Address range: 0x4062a0 - 0x40630a
int64_t function_4062a0(int64_t a1, int64_t a2) {
    int64_t v1 = function_405c90(a1, a2); // 0x4062ac
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x4062c8
    while (*(int64_t *)v2 != a2) {
        // 0x4062c0
        if (v3 == 0) {
            goto lab_0x4062d6;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x406300
        return *(int64_t *)v3;
    }
  lab_0x4062d6:;
    int64_t v4 = v1 + 16; // 0x4062e8
    int64_t result = 0; // 0x4062ef
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x4062e0
        result = v5;
        if (v5 != 0) {
            // break -> 0x4062f3
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x4062f3
    return result;
}
// Address range: 0x406310 - 0x406374
int64_t function_406310(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x406316
    int64_t result = 0; // 0x40631a
    if (*v1 <= a1) {
      lab_0x406331:
        // 0x406331
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40631f
    int64_t v4 = v2; // 0x406325
    int64_t v5; // 0x406310
    int64_t v6; // 0x406310
    int64_t v7; // 0x406358
    int64_t v8; // 0x406361
    int64_t v9; // 0x406341
    int64_t v10; // 0x406345
    if (v3 != 0) {
        // 0x406338
        if (v2 >= a3) {
            // break -> 0x406331
            break;
        }
        // 0x40633d
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
            // 0x406355
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x406350
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x406355
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
    int64_t v12 = a1 + 16; // 0x406327
    result = v11;
    while (*v1 > v12) {
        // 0x40631f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x406338
            result = v2;
            if (v2 >= a3) {
                // break -> 0x406331
                break;
            }
            // 0x40633d
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
                // 0x406355
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x406350
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x406355
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x406327
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x406331
    return result;
}
// Address range: 0x406380 - 0x4063f8
int64_t function_406380(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x406391
    int64_t result = 0; // 0x406395
    if (v1 <= a1) {
      lab_0x4063b4:
        // 0x4063b4
        return result;
    }
    int64_t v2 = a1; // 0x4063aa
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x4063a8
    int64_t v5 = v2; // 0x4063a8
    int64_t v6 = v3; // 0x4063a8
    int64_t v7; // 0x406380
    int64_t v8; // 0x4063d8
    int64_t v9; // 0x4063dc
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x4063d8
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x4063e8
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x4063d8
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
        // 0x4063a2
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x4063d8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x4063e8
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x4063d8
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x4063aa
        result2 = v4;
        v2 += 16;
    }
    // 0x4063b4
    return result2;
}
// Address range: 0x406400 - 0x406431
int64_t function_406400(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x406407
    if (v1 == 0) {
        // 0x40642d
        return 0;
    }
    int64_t result = 0; // 0x406407
    v2++;
    char v3 = *(char *)v2; // 0x406423
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40642d
    return result;
}
// Address range: 0x406440 - 0x406460
int64_t function_406440(int64_t a1) {
    // 0x406440
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x406460 - 0x4065ea
int64_t function_406460(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x406460
    int128_t v1; // 0x406460
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40649a
    int64_t result = (int64_t)mem; // 0x40649a
    if (mem == NULL) {
        // 0x40654a
        return result;
    }
    int64_t v3 = result + 40; // 0x4064ab
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x406460
    int128_t v6; // 0x406460
    if (a2 == 0) {
        // 0x406560
        *v4 = (int64_t)&g4;
        int64_t v7 = function_405de0(v3); // 0x406568
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40656d
        if ((char)v7 == 0) {
            // 0x406540
            free(mem);
            // 0x40654a
            return 0;
        }
        // 0x406579
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x4065c3;
        } else {
            goto lab_0x40657e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_405de0(v3) == 0) {
            // 0x406540
            free(mem);
            // 0x40654a
            return 0;
        }
        // 0x4064c5
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_405bd0(a1); // 0x4064d3
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x406540
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x406540
                free(mem);
                // 0x40654a
                return 0;
            }
            // 0x4064f1
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x406540
                free(mem);
                // 0x40654a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x406502
            int64_t v10 = (int64_t)mem2; // 0x406502
            *mem = v10;
            if (mem2 == NULL) {
                // 0x406540
                free(mem);
                // 0x40654a
                return 0;
            }
            // 0x40650f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x405c70 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x405c80 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40654a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x4065b8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40657e;
        } else {
            goto lab_0x4065c3;
        }
    }
  lab_0x4065c3:
    // 0x4065c3
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x4065d3
    int128_t v13 = v6; // 0x4065dc
    int128_t v14 = __asm_addss(v12, v12); // 0x4065dc
    goto lab_0x406587;
  lab_0x40657e:
    // 0x40657e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x406587;
  lab_0x406587:
    // 0x406587
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x406540
    free(mem);
    // 0x40654a
    return 0;
}
// Address range: 0x4065f0 - 0x406698
int64_t function_4065f0(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4065fa
    uint64_t v2 = *v1; // 0x4065fa
    int64_t result; // 0x4065f0
    if (v2 <= a1) {
      lab_0x406683:
        // 0x406683
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x406608
    while (*v6 == 0) {
        // 0x406608
        v7 = v5 + 16;
        int64_t v8; // 0x4065f0
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x406683
            goto lab_0x406683;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x406619
    int64_t v10 = *v9; // 0x406619
    int64_t v11 = *v3; // 0x40661e
    int64_t v12 = v11; // 0x406625
    int64_t v13 = v10; // 0x406625
    int64_t result2 = v11; // 0x406625
    int64_t * v14; // 0x40663e
    int64_t v15; // 0x40663e
    int64_t v16; // 0x40663a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x406635
            v16 = *v3;
        }
        // 0x40663e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x406630
            v16 = 0;
            if (v12 != 0) {
                // 0x406635
                v16 = *v3;
            }
            // 0x40663e
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
    // 0x40665d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x406670
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40667d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40660c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x406608
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x406683
                goto lab_0x406683;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x406619
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x406635
                v16 = *v3;
            }
            // 0x40663e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x406630
                v16 = 0;
                if (v12 != 0) {
                    // 0x406635
                    v16 = *v3;
                }
                // 0x40663e
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
        // 0x40665d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x406683
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x4066a0 - 0x406776
int64_t function_4066a0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4066af
    uint64_t v2 = *v1; // 0x4066af
    int64_t v3 = a1; // 0x4066b3
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x406703;
    } else {
        // 0x4066b5
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x406703;
        } else {
            // 0x4066bc
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x4066d1
                int64_t v6; // 0x4066c8
                while (v5 == 0) {
                    // 0x4066c8
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x406703
                        goto lab_0x406703;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x4066e8
                int64_t v8 = v7; // 0x4066ef
                int64_t v9 = v5; // 0x4066ef
                int64_t v10; // 0x4066a0
                int64_t v11; // 0x4066e8
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x4066e0
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x4066e3
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x4066f6
                v3 = v9;
                while (v2 > v12) {
                    // 0x4066d1
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x4066c8
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x406703
                            goto lab_0x406703;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x4066e3
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x4066e0
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x4066e3
                        v9 = *(int64_t *)v10;
                    }
                    // 0x4066f1
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x406703;
            } else {
                goto lab_0x40673c;
            }
        }
    }
  lab_0x406703:
    // 0x406703
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x406710
        int64_t v14 = v13; // 0x406717
        int64_t v15 = v2; // 0x406717
        int64_t v16; // 0x406720
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x406720
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x406731
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x406731
        int64_t v18 = v15; // 0x40673a
        int64_t v19 = v17; // 0x40673a
        while (v15 > v17) {
            // 0x406710
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x406720
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x406731
                v15 = *v1;
            }
            // 0x406731
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40673c;
  lab_0x40673c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40673c
    if (v20 == 0) {
        // 0x406761
        free(NULL);
        free((int64_t *)a1);
        return &g83;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x406750
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40675f
    while (v21 != 0) {
        // 0x406750
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x406761
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g83;
}
// Address range: 0x406780 - 0x40697a
int64_t function_406780(int64_t a1, uint64_t a2) {
    // 0x406780
    int128_t v1; // 0x406780
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40678b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x406780
        if (a2 < 0) {
            // 0x406900
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x406910
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x4067a0
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x4067a9
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x4068f2
        return 0;
    }
    uint64_t nmemb = function_405bd0(a2); // 0x4067e3
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x4068f2
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40681b
    if (*v6 == nmemb) {
        // 0x4068f2
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40682d
    int64_t v7 = (int64_t)mem; // 0x40682d
    int64_t v8 = v7; // bp-104, 0x406832
    if (mem == NULL) {
        // 0x4068f2
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40688a
    int64_t v10 = *v9; // 0x40688a
    int64_t v11 = function_405e60(&v8, a1, 0); // 0x406893
    int64_t result = v11 & 0xffffffff; // 0x406898
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x406854
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x4068b6
        function_405e60(v13, v12, 1);
        function_405e60(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x406940
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x4068f2
    return result;
}
// Address range: 0x406980 - 0x406bf4
int64_t function_406980(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x406980
    int128_t v1; // 0x406980
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x406980
    int64_t v5 = function_405cc0(a1, a2, &v4, 0); // 0x4069a1
    if (v5 != 0) {
        // 0x4069ae
        if (a3 != NULL) {
            // 0x4069b5
            *a3 = v5;
        }
        // 0x4069b9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x4069c8
    uint64_t v7 = *v6; // 0x4069c8
    int64_t v8; // 0x406980
    int64_t v9; // 0x406980
    int64_t v10; // 0x406980
    int128_t v11; // 0x406980
    int128_t v12; // 0x406980
    int64_t v13; // 0x406980
    if (v7 < 0) {
        // 0x406a50
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x406a60
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x406a64
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x406a69
        int128_t v17 = __asm_addss(v15, v15); // 0x406a6d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x4069eb;
        } else {
            goto lab_0x406a7a;
        }
    } else {
        // 0x4069d1
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x4069d5
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x4069d9
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x4069de
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x406a7a;
        } else {
            goto lab_0x4069eb;
        }
    }
  lab_0x4069eb:
    // 0x4069eb
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x4069f4
    __asm_comiss_1(v11, v21);
    int128_t v22 = v21; // 0x4069fc
    int128_t v23 = v11; // 0x4069fc
    if (v13 == 0) {
        goto lab_0x406a02;
    } else {
        goto lab_0x406aa1;
    }
  lab_0x406a7a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x406a87
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x406a8a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x406a93
    __asm_comiss_1(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x406a02;
    } else {
        goto lab_0x406aa1;
    }
  lab_0x406a02:;
    int64_t * v28 = (int64_t *)v4; // 0x406a07
    if (*v28 == 0) {
        // 0x406b18
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x406b21
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x406a12
    int64_t v31 = *v30; // 0x406a12
    int64_t * v32; // 0x406980
    int64_t v33; // 0x406980
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x406b3d
        if (mem == NULL) {
            // 0x4069b9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x406b3d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x406a27
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x406a3d
    *v37 = *v37 + 1;
    return 1;
  lab_0x406aa1:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x406aa1
    function_405de0(v40);
    int64_t v41 = *(int64_t *)v40; // 0x406aaa
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x406aae
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x406ab2
    int128_t v44; // 0x406980
    if (v42 < 0) {
        // 0x406b70
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x406b80
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x406ac0
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x406ac9
    int128_t v47; // 0x406980
    int64_t v48; // 0x406980
    if (v46 < 0) {
        // 0x406b50
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x406b5d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x406b60
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x406ad2
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x406ad6
        v48 = v46;
        v47 = v51;
    }
    // 0x406adb
    __asm_comiss_1(v47, __asm_mulss_4(__asm_movaps_3(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x406aeb
        int128_t v53 = v52; // 0x406af4
        if (*(char *)(v41 + 16) == 0) {
            // 0x406b90
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x406afa
        __asm_comiss(v53, 0x5f800000);
        // 0x4069b9
        return 0xffffffff;
    }
    goto lab_0x406a02;
}
// Address range: 0x406c00 - 0x406c3b
int64_t function_406c00(int64_t a1, int64_t a2) {
    // 0x406c00
    int64_t v1; // bp-16, 0x406c00
    int64_t v2; // 0x406c00
    int32_t v3 = function_406980(a1, a2, &v1, v2); // 0x406c12
    if (v3 == -1) {
        // 0x406c20
        return 0;
    }
    // 0x406c17
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x406c40 - 0x406e17
int64_t function_406c40(int64_t a1) {
    // 0x406c40
    int128_t v1; // 0x406c40
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x406c40
    int64_t v5; // 0x406c40
    int64_t result = function_405cc0(a1, v5, &v4, 1); // 0x406c55
    if (result == 0) {
        // 0x406c72
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x406c67
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x406c72
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x406c80
    uint64_t v8 = *v7 - 1; // 0x406c84
    *v7 = v8;
    int64_t v9; // 0x406c40
    int64_t v10; // 0x406c40
    int64_t v11; // 0x406c40
    int128_t v12; // 0x406c40
    int128_t v13; // 0x406c40
    int64_t v14; // 0x406c40
    if (v8 < 0) {
        // 0x406d70
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x406d80
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x406d84
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x406d89
        int128_t v18 = __asm_addss(v16, v16); // 0x406d8d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x406cac;
        } else {
            goto lab_0x406d9a;
        }
    } else {
        // 0x406c92
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x406c96
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x406c9a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x406c9f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x406d9a;
        } else {
            goto lab_0x406cac;
        }
    }
  lab_0x406cac:
    // 0x406cac
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x406cb0
    int64_t v23 = v14; // 0x406cb0
    int128_t v24 = v12; // 0x406cb0
    int64_t v25 = v10; // 0x406cb0
    int128_t v26 = v22; // 0x406cb0
    goto lab_0x406cb5;
  lab_0x406d9a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x406da7
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x406daa
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x406cb5;
  lab_0x406cb5:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x406cb5
    __asm_comiss_1(v28, v27);
    if (v23 == 0) {
        // 0x406c72
        return result;
    }
    int64_t v29 = a1 + 40; // 0x406cbe
    function_405de0(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x406cc7
    int64_t v31 = *(int64_t *)v29; // 0x406ccb
    int128_t v32; // 0x406c40
    if (v30 < 0) {
        // 0x406de0
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x406df0
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x406cd8
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x406ce1
    int128_t v35; // 0x406c40
    int64_t v36; // 0x406c40
    if (v34 < 0) {
        // 0x406dc0
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x406dcd
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x406dd0
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x406cee
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x406cf2
        v36 = v34;
        v35 = v39;
    }
    // 0x406cf7
    __asm_comiss_1(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x406c72
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x406d08
    int128_t v41 = v40; // 0x406d11
    if (*(char *)(v31 + 16) == 0) {
        // 0x406d13
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x406d18
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x406e08
    if ((char)function_406780(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x406c72
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x406d3a
    if (*v43 != 0) {
        int64_t v44; // 0x406c40
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x406d48
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x406d59
    *v43 = 0;
    // 0x406c72
    return result;
}
// Address range: 0x406e20 - 0x406e47
int64_t function_406e20(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x406e20
    return (*(int64_t *)(a1 + 8) ^ function_40dc40(a1, a2, a3)) % a2;
}
// Address range: 0x406e50 - 0x406e5d
int64_t function_406e50(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x406e50
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x406e60 - 0x406e85
int64_t function_406e60(int64_t a1, int64_t a2) {
    // 0x406e60
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x406e6a
        return 0;
    }
    // 0x406e7a
    return function_409e00(a1, a2);
}
// Address range: 0x406e90 - 0x406ec3
int64_t function_406e90(int64_t str, int64_t str2) {
    // 0x406e90
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x406e9c
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x406eb4
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x406ed0 - 0x406ee5
int64_t function_406ed0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x406ed7
    free(v1);
    free(v1);
    return &g83;
}
// Address range: 0x406ef0 - 0x406fa7
int64_t function_406ef0(int32_t a1, float80_t a2) {
    // 0x406ef0
    int3_t v1; // 0x406ef0
    int3_t v2 = v1 - 1; // 0x406ef0
    __frontend_reg_store_fpr(v2, 9223372036854775808.0L);
    int3_t v3 = v1 - 2;
    __frontend_reg_store_fpr(v3, a2);
    float80_t v4 = __frontend_reg_load_fpr(v3); // 0x406efa
    float80_t v5 = __frontend_reg_load_fpr(v2); // 0x406efa
    int64_t result; // 0x406ef0
    if (v4 > v5 || v4 == v5) {
        // 0x406f70
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3) - __frontend_reg_load_fpr(v2));
        float80_t v6 = __frontend_reg_load_fpr(v3); // 0x406f76
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        __frontend_reg_store_fpr(v2, v6);
        result = (int64_t)__frontend_reg_load_fpr(v3) ^ -0x8000000000000000;
    } else {
        // 0x406efe
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3));
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        result = __frontend_reg_load_fpr(v3);
    }
    // 0x406f24
    __frontend_reg_store_fpr(v3, (float80_t)result);
    if (result < 0) {
        // 0x406f32
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v3) + 18446744073709551616.0L);
    }
    int3_t v7 = v3;
    if (a1 != 0) {
        // 0x406f68
        __frontend_reg_store_fpr(v7 + 1, __frontend_reg_load_fpr(v7));
        // 0x406f6a
        return result;
    }
    int3_t v8 = v7 + 1; // 0x406f3c
    float80_t v9 = __frontend_reg_load_fpr(v7); // 0x406f3c
    __frontend_reg_store_fpr(v7, __frontend_reg_load_fpr(v8));
    __frontend_reg_store_fpr(v8, v9);
    float80_t v10 = __frontend_reg_load_fpr(v7); // 0x406f3e
    float80_t v11 = __frontend_reg_load_fpr(v8); // 0x406f3e
    if (v10 != v11 == v10 == v11) {
        // 0x406f48
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    } else {
        // 0x406f42
        if (v10 == v11) {
            // 0x406f6a
            return result;
        }
        // 0x406f44
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    }
    int64_t result2 = result + 1; // 0x406f50
    __frontend_reg_store_fpr(v8, (float80_t)result2);
    if (result2 >= 0) {
        // 0x406f6a
        return result2;
    }
    // 0x406fa0
    __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8) + 18446744073709551616.0L);
    return result2;
}
// Address range: 0x406fb0 - 0x40797e
int64_t function_406fb0(int64_t a1, int64_t * str3, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)str3;
    int64_t v2 = a3 & 32; // 0x406fb6
    uint32_t v3 = (int32_t)a3 % 4; // 0x406fc0
    int64_t v4; // bp-168, 0x406fb0
    int64_t v5 = &v4; // 0x406fd0
    int32_t v6 = v2; // 0x406fd7
    uint32_t v7 = (v6 | 1024) - ((int32_t)(v2 == 0) | v6) & 2024; // 0x406fe5
    int64_t v8 = 0x100000000 * a3 >> 32; // 0x406fea
    struct lconv * locale_info = localeconv(); // 0x406ffb
    int64_t str = *(int64_t *)locale_info; // 0x407000
    int64_t len = strlen((char *)str); // 0x407009
    int64_t v9 = len >= 17 ? (int64_t)"." : str; // 0x407023
    int64_t str2 = *(int64_t *)((int64_t)locale_info + 8); // 0x40702c
    int64_t v10 = len >= 17 ? 1 : len; // 0x407031
    uint32_t len2 = strlen((char *)str2); // 0x407042
    int64_t v11 = v1 + 647; // 0x407059
    v4 = v11;
    int64_t v12; // 0x406fb0
    int64_t v13; // 0x406fb0
    int64_t v14; // 0x406fb0
    int64_t v15; // 0x406fb0
    int64_t v16; // 0x406fb0
    int64_t v17; // 0x406fb0
    int64_t v18; // 0x406fb0
    int64_t v19; // 0x406fb0
    int64_t v20; // 0x406fb0
    if (a5 > a4) {
        if (a4 == 0) {
            goto lab_0x407095;
        } else {
            if (a5 % a4 != 0) {
                goto lab_0x407095;
            } else {
                uint64_t v21 = a5 / a4; // 0x407300
                int64_t v22 = a1 / v21; // 0x407314
                uint64_t v23 = 10 * (a1 % v21); // 0x407320
                uint64_t v24 = 2 * (v23 % v21); // 0x407329
                int64_t v25 = v23 / v21 & 0xffffffff; // 0x40732c
                int64_t v26 = v21 > v24 ? (int64_t)(v24 != 0) : v21 < v24 ? 3 : 2;
                uint32_t v27 = (int32_t)v8 & 16; // 0x407345
                v15 = v27;
                v19 = v22;
                v17 = v26;
                v12 = v25;
                v16 = 0;
                v14 = 0xffffffff;
                v20 = v22;
                v18 = v26;
                v13 = v25;
                if (v27 == 0) {
                    goto lab_0x407361;
                } else {
                    goto lab_0x40734e;
                }
            }
        }
    } else {
        if (a4 % a5 != 0) {
            goto lab_0x407095;
        } else {
            uint64_t v28 = a4 / a5; // 0x407072
            int64_t v29 = v28 * a1; // 0x407082
            if (v29 / v28 == a1) {
                uint32_t v30 = (int32_t)v8 & 16; // 0x407601
                int64_t v31 = v30; // 0x407601
                v15 = v31;
                v19 = v29;
                v17 = 0;
                v12 = 0;
                v16 = v31;
                v14 = 0xffffffff;
                v20 = v29;
                v18 = 0;
                v13 = 0;
                if (v30 != 0) {
                    goto lab_0x40734e;
                } else {
                    goto lab_0x407361;
                }
            } else {
                goto lab_0x407095;
            }
        }
    }
  lab_0x407361:;
    int64_t v32 = v16; // 0x40736a
    int64_t v33 = v14; // 0x40736a
    int64_t v34 = v20; // 0x40736a
    int64_t v35 = v18; // 0x40736a
    int64_t v36 = v13; // 0x40736a
    int64_t v37 = v11; // 0x40736a
    int64_t v38; // 0x406fb0
    int64_t v39; // 0x406fb0
    int64_t v40; // 0x406fb0
    int64_t v41; // 0x406fb0
    int64_t v42; // 0x406fb0
    int64_t v43; // 0x406fb0
    int64_t v44; // 0x406fb0
    if (v3 == 1) {
        // 0x4076a0
        v42 = v16;
        v40 = v14;
        v43 = v20;
        v38 = v11;
        v41 = v14;
        v44 = v20;
        v39 = v11;
        if ((int32_t)(v20 % 2 != -v18) + (int32_t)v13 < 6) {
            goto lab_0x4073a0;
        } else {
            goto lab_0x407381;
        }
    } else {
        goto lab_0x407370;
    }
  lab_0x407095:;
    // 0x407095
    int3_t v45; // 0x406fb0
    int3_t v46 = v45 - 1;
    __frontend_reg_store_fpr(v46, (float80_t)a4);
    int3_t v47; // 0x406fb0
    int3_t v48; // 0x406fb0
    if (a4 < 0) {
        // 0x4072e0
        __frontend_reg_store_fpr(v46, __frontend_reg_load_fpr(v46) + 18446744073709551616.0L);
        v47 = v46;
    } else {
        // 0x407095
        v47 = v45 - 2;
        v48 = v46;
    }
    int3_t v49 = v48;
    __frontend_reg_store_fpr(v47, (float80_t)a5);
    float80_t v50 = __frontend_reg_load_fpr(v47);
    int3_t v51; // 0x406fb0
    int3_t v52; // 0x406fb0
    int3_t v53; // 0x406fb0
    int3_t v54; // 0x406fb0
    if (a5 < 0) {
        // 0x4072c0
        __frontend_reg_store_fpr(v47, v50 + 18446744073709551616.0L);
        int3_t v55 = v49 + 1;
        __frontend_reg_store_fpr(v55, __frontend_reg_load_fpr(v55) / __frontend_reg_load_fpr(v49));
        __frontend_reg_store_fpr(v49, (float80_t)a1);
        v51 = v55;
        v53 = v49;
        v52 = v55;
        v54 = v49;
        if (a1 >= 0) {
            goto lab_0x4070d2;
        } else {
            goto lab_0x4072a8;
        }
    } else {
        // 0x4070be
        __frontend_reg_store_fpr(v49, __frontend_reg_load_fpr(v49) / v50);
        __frontend_reg_store_fpr(v47, (float80_t)a1);
        int3_t v56 = v47 + 1;
        v51 = v56;
        v53 = v47;
        v52 = v56;
        v54 = v47;
        if (a1 < 0) {
            goto lab_0x4072a8;
        } else {
            goto lab_0x4070d2;
        }
    }
  lab_0x4070d2:;
    int3_t v57 = v51;
    float80_t v58 = __frontend_reg_load_fpr(v53); // 0x4070d2
    __frontend_reg_store_fpr(v57, v58 * __frontend_reg_load_fpr(v57));
    int3_t v59 = v57; // 0x4070d9
    int3_t v60 = v57; // 0x4070d9
    if ((a3 & 16) == 0) {
        goto lab_0x4071f0;
    } else {
        goto lab_0x4070df;
    }
  lab_0x4072a8:;
    int3_t v61 = v54;
    __frontend_reg_store_fpr(v61, __frontend_reg_load_fpr(v61) + 18446744073709551616.0L);
    int3_t v62 = v61 + 2; // 0x4072ae
    __frontend_reg_store_fpr(v62, __frontend_reg_load_fpr(v52) * __frontend_reg_load_fpr(v62));
    v59 = v62;
    v60 = v62;
    if ((a3 & 16) != 0) {
        goto lab_0x4070df;
    } else {
        goto lab_0x4071f0;
    }
  lab_0x40734e:;
    int64_t v63 = v15;
    v16 = v63;
    v14 = 0;
    v20 = v19;
    v18 = v17;
    v13 = v12;
    int64_t v64; // 0x406fb0
    int64_t v65; // 0x406fb0
    int64_t v66; // 0x406fb0
    int64_t v67; // 0x406fb0
    int64_t v68; // 0x406fb0
    int64_t v69; // 0x406fb0
    int64_t v70; // 0x407586
    int64_t v71; // 0x40756a
    if (v19 < (int64_t)v7) {
        goto lab_0x407361;
    } else {
        int64_t v72; // 0x406fb0
        int32_t v73 = v72; // 0x407584
        int64_t v74; // 0x406fb0
        uint64_t v75; // 0x406fb0
        v70 = v74 / v75;
        int64_t v76; // 0x406fb0
        uint64_t v77 = 10 * (v74 % v75) + v76 & 0xffffffff; // 0x407597
        int64_t v78 = v77 / v75; // 0x407597
        uint32_t v79 = 2 * (int32_t)(v77 % v75) + (v73 >> 1); // 0x407599
        uint32_t v80 = v79 + v73; // 0x4075a2
        int64_t v81 = v79 < v7 ? (int64_t)(v80 != 0) : v7 < v80 ? 3 : 2;
        int64_t v82; // 0x406fb0
        v71 = v82 + 1 & 0xffffffff;
        while (v70 >= v75) {
            // 0x407576
            v16 = v63;
            v14 = v71;
            v20 = v70;
            v18 = v81;
            v13 = v78;
            v82 = v71;
            v74 = v70;
            v72 = v81;
            v76 = v78;
            int64_t v83; // 0x40756a
            if ((int32_t)v83 == 8) {
                goto lab_0x407361;
            }
            int64_t v84 = v76;
            int64_t v85 = v72;
            uint64_t v86 = v74;
            int64_t v87 = v82;
            v73 = v85;
            v70 = v86 / v75;
            v77 = 10 * (v86 % v75) + v84 & 0xffffffff;
            v78 = v77 / v75;
            v79 = 2 * (int32_t)(v77 % v75) + (v73 >> 1);
            v80 = v79 + v73;
            int64_t v88 = v7 < v80 ? 3 : 2;
            v81 = v79 < v7 ? (int64_t)(v80 != 0) : v88;
            v83 = v87 + 1;
            v71 = v83 & 0xffffffff;
        }
        // 0x407750
        v16 = v63;
        v14 = v71;
        v20 = v70;
        v18 = v81;
        v13 = v78;
        if (v70 < 10) {
            bool v89; // 0x406fb0
            if (v3 == 1) {
                int32_t v90 = (int32_t)(v81 + v78 % 2) - 2; // 0x407827
                v89 = v90 >= 0 == (v90 != 0);
            } else {
                // 0x407765
                v89 = v3 == 0 == (v81 != 0);
            }
            // 0x407777
            if (v89) {
                int64_t v91 = v78 + 1; // 0x407810
                v65 = v91 & 0xffffffff;
                if ((int32_t)v91 == 10) {
                    // 0x407883
                    v69 = v70 + 1;
                    v66 = 0;
                    v68 = 10;
                    v67 = 0;
                    v64 = v11;
                    if (v70 == 9) {
                        goto lab_0x4077d0;
                    } else {
                        goto lab_0x407787;
                    }
                } else {
                    goto lab_0x407818;
                }
            } else {
                // 0x40777f
                v69 = v70;
                v66 = v81;
                v65 = v78;
                if (v77 >= v75) {
                    goto lab_0x407818;
                } else {
                    goto lab_0x407787;
                }
            }
        } else {
            goto lab_0x407361;
        }
    }
  lab_0x4071f0:;
    int3_t v92 = v60; // 0x4071f7
    if (v3 != 1) {
        int3_t v93 = v60 - 1; // 0x4071f9
        __frontend_reg_store_fpr(v93, 1.84467e+19L);
        float80_t v94 = __frontend_reg_load_fpr(v93); // 0x4071ff
        float80_t v95 = __frontend_reg_load_fpr(v60); // 0x4071ff
        v92 = v60;
        if (v94 > v95) {
            // 0x4075c0
            function_406ef0(v3, __frontend_reg_load_fpr(v60));
            v92 = v60 + 1;
        }
    }
    // 0x407207
    __frontend_reg_load_fpr(v92);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len3 = strlen((char *)str3); // 0x407236
    int64_t v96 = len3; // 0x40723d
    int64_t v97 = 0xffffffff; // 0x40723d
    int64_t v98 = len3; // 0x40723d
    goto lab_0x407240;
  lab_0x4070df:;
    int3_t v181 = v59;
    int3_t v180 = v181 - 1; // 0x4070df
    __frontend_reg_store_fpr(v180, (float80_t)v7);
    int3_t v206 = v181 - 2; // 0x4070e5
    __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v180));
    int3_t v207 = v181 - 3;
    __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v206));
    int64_t v208 = 1; // 0x4070f6
    int64_t v165 = v208 & 0xffffffff; // 0x4070f6
    __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v207) * __frontend_reg_load_fpr(v180));
    float80_t v209 = __frontend_reg_load_fpr(v207); // 0x4070fb
    __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v181));
    __frontend_reg_store_fpr(v181, v209);
    while (__frontend_reg_load_fpr(v207) >= __frontend_reg_load_fpr(v181)) {
        float80_t v210 = __frontend_reg_load_fpr(v207);
        if ((int32_t)v208 == 8) {
            // 0x407106
            __frontend_reg_store_fpr(v180, v210);
            __frontend_reg_store_fpr(v181, __frontend_reg_load_fpr(v206));
            goto lab_0x407114;
        }
        // 0x4070f0
        __frontend_reg_store_fpr(v206, v210);
        float80_t v211 = __frontend_reg_load_fpr(v206); // 0x4070f2
        __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v181));
        __frontend_reg_store_fpr(v181, v211);
        __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v206));
        v208 = v165 + 1;
        v165 = v208 & 0xffffffff;
        __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v207) * __frontend_reg_load_fpr(v180));
        v209 = __frontend_reg_load_fpr(v207);
        __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v181));
        __frontend_reg_store_fpr(v181, v209);
    }
    // 0x407110
    __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v207));
    __frontend_reg_store_fpr(v181, __frontend_reg_load_fpr(v206));
    goto lab_0x407114;
  lab_0x407370:;
    int64_t v212 = v37;
    int64_t v213 = v34;
    int64_t v214 = v33;
    v41 = v214;
    v44 = v213;
    v39 = v212;
    if (v3 != 0) {
        goto lab_0x4073a0;
    } else {
        // 0x40737a
        v42 = v32;
        v40 = v214;
        v43 = v213;
        v38 = v212;
        v41 = v214;
        v44 = v213;
        v39 = v212;
        if ((int32_t)(v36 + v35) < 1) {
            goto lab_0x4073a0;
        } else {
            goto lab_0x407381;
        }
    }
  lab_0x407240:;
    int64_t v99 = *(int64_t *)(v5 + 8); // 0x407244
    int64_t v100 = v4 - v96; // 0x40724c
    memmove((int64_t *)v100, (int64_t *)v99, (int32_t)v96);
    int64_t v101 = v97; // 0x407255
    int64_t v102 = v100 + v98; // 0x407255
    int64_t v103 = v100; // 0x407255
    goto lab_0x40725a;
  lab_0x407114:;
    float80_t v179 = __frontend_reg_load_fpr(v180); // 0x407122
    __frontend_reg_store_fpr(v181, v179 / __frontend_reg_load_fpr(v181));
    uint64_t v182 = v10 + (v6 == 0 ? 3 : 2); // 0x407129
    int3_t v144; // 0x406fb0
    int3_t v174; // 0x406fb0
    int3_t v148; // 0x406fb0
    int64_t v145; // 0x406fb0
    int3_t v176; // 0x406fb0
    if (v3 == 1) {
        // 0x407650
        __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v181));
        __frontend_reg_load_fpr(v180);
        float80_t v183 = __frontend_reg_load_fpr(v181); // 0x407674
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len6 = strlen((char *)str3); // 0x407680
        __frontend_reg_store_fpr(v181, v183);
        v144 = v181;
        v145 = len6;
        if (v182 < len6) {
            // 0x407690
            __frontend_reg_store_fpr(v180, 10.0L);
            float80_t v184 = __frontend_reg_load_fpr(v181); // 0x407696
            __frontend_reg_store_fpr(v181, v184 * __frontend_reg_load_fpr(v180));
            v148 = v180;
            goto lab_0x4071b6;
        } else {
            goto lab_0x407618;
        }
    } else {
        // 0x407137
        __frontend_reg_store_fpr(v180, 1.84467e+19L);
        float80_t v185 = __frontend_reg_load_fpr(v180); // 0x40713d
        float80_t v186 = __frontend_reg_load_fpr(v181); // 0x40713d
        bool v187 = false; // 0x40713d
        bool v188 = false; // 0x40713d
        if (v185 <= v186) {
            v187 = true;
            v188 = false;
            if (v185 >= v186) {
                v187 = v185 != v186;
                v188 = true;
            }
        }
        __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v181));
        v174 = v180;
        if (!v187 && !v188) {
            // 0x4075d8
            __frontend_reg_load_fpr(v180);
            float80_t v189 = __frontend_reg_load_fpr(v181); // 0x4075e1
            function_406ef0(v3, v189);
            __frontend_reg_store_fpr(v181, v189);
            v174 = v181;
        }
        float80_t v190 = __frontend_reg_load_fpr(v174); // 0x407147
        v176 = v174 + 1;
        __frontend_reg_load_fpr(v176);
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len7 = strlen((char *)str3); // 0x407175
        __frontend_reg_store_fpr(v176, v190);
        v144 = v176;
        v145 = len7;
        if (v182 < len7) {
            // 0x407189
            __frontend_reg_store_fpr(v174, 10.0L);
            __frontend_reg_store_fpr(v176, __frontend_reg_load_fpr(v176) * __frontend_reg_load_fpr(v174));
            goto lab_0x407191;
        } else {
            goto lab_0x407618;
        }
    }
  lab_0x4073a0:;
    int64_t v191 = v39 - 1; // 0x4073b9
    *(char *)v191 = (char)v44 + 48;
    int64_t v192 = v191; // 0x4073db
    while (v44 >= 10) {
        // 0x4073b3
        v191 = v192 - 1;
        *(char *)v191 = (char)v44 + 48;
        v192 = v191;
    }
    int64_t v104 = v41; // 0x4073e2
    int64_t v105 = v191; // 0x4073e2
    int64_t v106 = v41; // 0x4073e2
    int64_t v107 = v39; // 0x4073e2
    int64_t v108 = v191; // 0x4073e2
    if ((a3 & 4) == 0) {
        goto lab_0x407265;
    } else {
        goto lab_0x4073e8;
    }
  lab_0x407381:;
    int64_t v193 = v38;
    int64_t v194 = v40;
    int64_t v195 = v43 + 1; // 0x407381
    v41 = v194;
    v44 = v195;
    v39 = v193;
    if ((int32_t)v194 == 8 || (int32_t)v42 == 0 || v195 != (int64_t)v7) {
        goto lab_0x4073a0;
    } else {
        int64_t v196 = v193; // 0x40770e
        if ((a3 & 8) == 0) {
            // 0x407894
            *(char *)(v193 - 1) = 48;
            int64_t v197 = v193 + -1 - v10; // 0x40789f
            int64_t v198 = v10 & 0xffffffff; // 0x4078a2
            uint32_t v199 = (int32_t)v10; // 0x4078a5
            if (v199 >= 8) {
                int64_t v200 = v197 + 8 & -8; // 0x4078f0
                *(int64_t *)v197 = *(int64_t *)v9;
                *(int64_t *)(v197 + v198 - 8) = *(int64_t *)(v198 + v9 - 8);
                int64_t v201 = v197 - v200; // 0x407907
                uint32_t v202 = (int32_t)(v201 + v10); // 0x407913
                v196 = v197;
                if (v202 >= 8) {
                    int64_t v203 = 0;
                    int64_t v204 = v203 + 8; // 0x407923
                    *(int64_t *)(v203 + v200) = *(int64_t *)(v9 - v201 + v203);
                    v196 = v197;
                    while ((v202 & -8) > (int32_t)v204) {
                        // 0x407921
                        v203 = v204 & 0xffffffff;
                        v204 = v203 + 8;
                        *(int64_t *)(v203 + v200) = *(int64_t *)(v9 - v201 + v203);
                        v196 = v197;
                    }
                }
            } else {
                if ((v10 & 4) != 0) {
                    // 0x40794c
                    *(int32_t *)v197 = *(int32_t *)v9;
                    *(int32_t *)(v197 + v198 - 4) = *(int32_t *)(v198 + v9 - 4);
                    v196 = v197;
                } else {
                    // 0x4078b5
                    v196 = v197;
                    if (v199 != 0) {
                        // 0x4078bd
                        *(char *)v197 = *(char *)v9;
                        v196 = v197;
                        if ((v10 & 2) != 0) {
                            // 0x4078cc
                            *(int16_t *)(v197 + v198 - 2) = *(int16_t *)(v198 + v9 - 2);
                            v196 = v197;
                        }
                    }
                }
            }
        }
        int64_t v205 = v196 - 1; // 0x407714
        *(char *)v205 = 49;
        v101 = v194 + 1 & 0xffffffff;
        v102 = v196;
        v103 = v205;
        goto lab_0x40725a;
    }
  lab_0x40725a:
    // 0x40725a
    v104 = v101;
    v105 = v103;
    v106 = v101;
    v107 = v102;
    v108 = v103;
    if ((*(char *)(v5 + 16) & 4) != 0) {
        goto lab_0x4073e8;
    } else {
        goto lab_0x407265;
    }
  lab_0x407265:;
    int64_t result = v105;
    int64_t v109 = v5 + 16; // 0x407265
    char v110 = *(char *)v109; // 0x407265
    if (v110 > -1) {
        // 0x407288
        *(char *)v4 = 0;
        return result;
    }
    int64_t v111 = v104; // 0x40726f
    int64_t v112; // 0x406fb0
    int64_t v113; // 0x406fb0
    int64_t v114; // 0x406fb0
    int64_t v115; // 0x406fb0
    if ((int32_t)v104 == -1) {
        uint64_t v116 = *(int64_t *)(v5 + 24); // 0x4074b0
        v111 = 0;
        if (v116 < 2) {
            goto lab_0x407275;
        } else {
            int64_t v117 = 1; // 0x4074cd
            int64_t v118 = 1;
            v117 *= (int64_t)*(int32_t *)(v5 + 52);
            int64_t v119 = v118; // 0x4074d7
            while (v116 > v117) {
                int64_t v120 = v118 + 1; // 0x4074d9
                int64_t v121 = v120 & 0xffffffff; // 0x4074d9
                v119 = v121;
                if ((int32_t)v120 == 8) {
                    // break -> 0x4074e1
                    break;
                }
                v118 = v121;
                v117 *= (int64_t)*(int32_t *)(v5 + 52);
                v119 = v118;
            }
            int32_t v122 = *(int32_t *)v109; // 0x4074e1
            int64_t v123 = v122 & 256; // 0x4074e7
            v112 = v123;
            v114 = v119;
            v113 = v123;
            v115 = v119;
            if ((v122 & 64) == 0) {
                goto lab_0x407510;
            } else {
                goto lab_0x4074f1;
            }
        }
    } else {
        goto lab_0x407275;
    }
  lab_0x4073e8:;
    int64_t str4 = len2 >= 17 ? (int64_t)&g14 : str2; // 0x407055
    int32_t len4 = strlen((char *)str4); // 0x4073f5
    int64_t v124 = v107 - v108; // 0x4073fa
    int64_t v125 = v5 + 64; // 0x407408
    int64_t * v126 = (int64_t *)(v5 + 32); // 0x40740d
    *v126 = (int64_t)len4;
    int64_t * v127 = (int64_t *)v125; // 0x407412
    __memcpy_chk(v127, (int64_t *)v108, (int32_t)v124, 41);
    int32_t * v128 = (int32_t *)(v5 + 20); // 0x407417
    *v128 = (int32_t)v106;
    int64_t v129 = *v126; // 0x407429
    int64_t * v130 = (int64_t *)str4;
    int32_t v131 = v129;
    int64_t v132 = *(int64_t *)(v5 + 56);
    int64_t v133 = v107;
    uint64_t v134 = v124;
    unsigned char v135 = *(char *)v132; // 0x407430
    int64_t v136 = -1; // 0x407436
    int64_t v137 = v132; // 0x407436
    if (v135 != 0) {
        // 0x407438
        v136 = v135 >= 127 ? v134 : (int64_t)v135;
        v137 = v132 + 1;
    }
    int64_t v138 = v136;
    while (v134 >= v138) {
        int64_t v139 = v133 - v138; // 0x407470
        int64_t v140 = v134 - v138; // 0x407473
        memcpy((int64_t *)v139, (int64_t *)(v140 + v125), (int32_t)v138);
        if (v140 == 0) {
            // 0x407961
            v104 = (int64_t)*v128;
            v105 = v139;
            goto lab_0x407265;
        }
        int64_t v141 = v139 - v129; // 0x407493
        memcpy((int64_t *)v141, v130, v131);
        v132 = v137;
        v133 = v141;
        v134 = v140;
        v135 = *(char *)v132;
        v136 = v138;
        v137 = v132;
        if (v135 != 0) {
            // 0x407438
            v136 = v135 >= 127 ? v134 : (int64_t)v135;
            v137 = v132 + 1;
        }
        // 0x407449
        v138 = v136;
    }
    int64_t v142 = v133 - v134; // 0x40745d
    memcpy((int64_t *)v142, v127, (int32_t)v134);
    v104 = (int64_t)*v128;
    v105 = v142;
    goto lab_0x407265;
  lab_0x407618:;
    int3_t v143 = v144;
    if ((a3 & 8) == 0) {
        // 0x407638
        __frontend_reg_store_fpr(v143, __frontend_reg_load_fpr(v143));
        goto lab_0x40763a;
    } else {
        // 0x40761f
        if (*(char *)(v1 - 1 + v145) == 48) {
            int3_t v146 = v143 - 1; // 0x4077f8
            __frontend_reg_store_fpr(v146, 10.0L);
            float80_t v147 = __frontend_reg_load_fpr(v143); // 0x407803
            __frontend_reg_store_fpr(v143, v147 * __frontend_reg_load_fpr(v146));
            v148 = v146;
            if (v3 != 1) {
                goto lab_0x407191;
            } else {
                goto lab_0x4071b6;
            }
        } else {
            // 0x40762f
            __frontend_reg_store_fpr(v143, __frontend_reg_load_fpr(v143));
            goto lab_0x40763a;
        }
    }
  lab_0x407275:;
    uint32_t v149 = *(int32_t *)v109 & 256; // 0x407279
    if ((v149 || (int32_t)v111) == 0) {
        // 0x407288
        *(char *)v4 = 0;
        return result;
    }
    int64_t v150 = v149; // 0x407279
    v112 = v150;
    v114 = v111;
    int64_t v151 = v150; // 0x4076e5
    int64_t v152 = v111; // 0x4076e5
    if ((v110 & 64) == 0) {
        goto lab_0x407508;
    } else {
        goto lab_0x4074f1;
    }
  lab_0x407818:;
    int64_t v153 = v70; // 0x40781b
    int64_t v154 = v65 + 48 & 0xffffffff; // 0x40781b
    goto lab_0x407797;
  lab_0x407787:
    // 0x407787
    v153 = v69;
    v154 = 48;
    v68 = v69;
    v67 = v66;
    v64 = v11;
    if ((a3 & 8) != 0) {
        goto lab_0x4077d0;
    } else {
        goto lab_0x407797;
    }
  lab_0x4071b6:;
    int3_t v172 = v148 + 1; // 0x4071b6
    __frontend_reg_store_fpr(v172, __frontend_reg_load_fpr(v172) / __frontend_reg_load_fpr(v148));
    __frontend_reg_load_fpr(v172);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len5 = strlen((char *)str3); // 0x4071e2
    v96 = len5;
    v97 = v165;
    v98 = len5;
    goto lab_0x407240;
  lab_0x407191:;
    int3_t v173 = v174 - 1; // 0x407191
    __frontend_reg_store_fpr(v173, 1.84467e+19L);
    float80_t v175 = __frontend_reg_load_fpr(v173); // 0x407197
    v148 = v174;
    if (v175 > __frontend_reg_load_fpr(v176)) {
        float80_t v177 = __frontend_reg_load_fpr(v174); // 0x40719b
        function_406ef0(v3, __frontend_reg_load_fpr(v176));
        __frontend_reg_store_fpr(v176, v177);
        v148 = v176;
    }
    goto lab_0x4071b6;
  lab_0x407508:
    // 0x407508
    v113 = v151;
    v115 = v152;
    int64_t v168; // 0x406fb0
    if ((int32_t)v152 == 0) {
        // 0x40796d
        v168 = v4;
        if ((int32_t)v151 == 0) {
            // 0x407288
            *(char *)v4 = 0;
            return result;
        }
        goto lab_0x40754d;
    } else {
        goto lab_0x407510;
    }
  lab_0x4074f1:;
    int64_t v178 = *(int64_t *)(v5 + 8); // 0x4074f1
    *(char *)(v178 + 647) = 32;
    v4 = v178 + 648;
    v151 = v112;
    v152 = v114;
    goto lab_0x407508;
  lab_0x4077d0:
    // 0x4077d0
    v32 = v63;
    v33 = v71;
    v34 = v68;
    v35 = v67;
    v36 = 0;
    v37 = v64;
    v41 = v71;
    v44 = v68;
    v39 = v64;
    if (v3 == 1) {
        goto lab_0x4073a0;
    } else {
        goto lab_0x407370;
    }
  lab_0x407797:;
    int64_t v155 = v1 + 646; // 0x40779c
    *(char *)v155 = (char)v154;
    int64_t v156 = v10 & 0xffffffff; // 0x4077a9
    int64_t v157 = v155 - v10; // 0x4077ac
    uint32_t v158 = (int32_t)v10; // 0x4077af
    if (v158 >= 8) {
        int64_t v159 = v157 + 8 & -8; // 0x40783c
        *(int64_t *)v157 = *(int64_t *)v9;
        *(int64_t *)(v156 + v157 - 8) = *(int64_t *)(v156 + v9 - 8);
        int64_t v160 = v157 - v159; // 0x407853
        uint32_t v161 = (int32_t)(v160 + v10); // 0x40785f
        v68 = v153;
        v67 = 0;
        v64 = v157;
        if (v161 >= 8) {
            int64_t v162 = v9 - v160; // 0x407856
            int64_t v163 = 0;
            int64_t v164 = v163 + 8; // 0x40786f
            *(int64_t *)(v163 + v159) = *(int64_t *)(v162 + v163);
            v68 = v153;
            v67 = 0;
            v64 = v157;
            while ((v161 & -8) > (int32_t)v164) {
                // 0x40786d
                v163 = v164 & 0xffffffff;
                v164 = v163 + 8;
                *(int64_t *)(v163 + v159) = *(int64_t *)(v162 + v163);
                v68 = v153;
                v67 = 0;
                v64 = v157;
            }
        }
    } else {
        if ((v10 & 4) != 0) {
            // 0x407937
            *(int32_t *)v157 = *(int32_t *)v9;
            *(int32_t *)(v156 + v157 - 4) = *(int32_t *)(v156 + v9 - 4);
            v68 = v153;
            v67 = 0;
            v64 = v157;
        } else {
            // 0x4077bf
            v68 = v153;
            v67 = 0;
            v64 = v157;
            if (v158 != 0) {
                // 0x4077c3
                *(char *)v157 = *(char *)v9;
                v68 = v153;
                v67 = 0;
                v64 = v157;
                if ((v10 & 2) != 0) {
                    // 0x4077e3
                    *(int16_t *)(v156 + v157 - 2) = *(int16_t *)(v156 + v9 - 2);
                    v68 = v153;
                    v67 = 0;
                    v64 = v157;
                }
            }
        }
    }
    goto lab_0x4077d0;
  lab_0x40763a:
    // 0x40763a
    v96 = v145;
    v97 = v165;
    v98 = v145 + -1 - v10;
    goto lab_0x407240;
  lab_0x407510:;
    int32_t * v166 = (int32_t *)(v5 + 48); // 0x407510
    if (*v166 == 0 == (int32_t)v115 == 1) {
        int64_t v167 = v4 + 1; // 0x407734
        *(char *)v4 = 107;
        v168 = v167;
        if ((int32_t)v113 == 0) {
            // 0x407743
            v4 = v167;
            // 0x407288
            *(char *)v4 = 0;
            return result;
        }
    } else {
        int64_t v169 = v4; // 0x407526
        char v170 = *(char *)((0x100000000 * v115 >> 32) + (int64_t)&g7); // 0x40752a
        int64_t v171 = v169 + 1; // 0x407531
        *(char *)v169 = v170;
        if ((int32_t)v113 == 0) {
            // 0x407743
            v4 = v171;
            // 0x407288
            *(char *)v4 = 0;
            return result;
        }
        // 0x40753f
        v168 = v171;
        if (*v166 != 0) {
            // 0x4076f0
            *(char *)v171 = 105;
            v168 = v169 + 2;
        }
    }
    goto lab_0x40754d;
  lab_0x40754d:
    // 0x40754d
    *(char *)v168 = 66;
    v4 = v168 + 1;
    // 0x407288
    *(char *)v4 = 0;
    return result;
}
// Address range: 0x407980 - 0x407b37
int64_t function_407980(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = a1; // 0x407996
    if (a1 == 0) {
        char * env_val = getenv("BLOCK_SIZE"); // 0x407aa5
        v1 = (int64_t)env_val;
        if (env_val == NULL) {
            char * env_val2 = getenv("BLOCKSIZE"); // 0x407abb
            v1 = (int64_t)env_val2;
            if (env_val2 == NULL) {
                // 0x407acc
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407b22
                    *a3 = 1024;
                    *(int32_t *)a2 = 0;
                } else {
                    // 0x407adb
                    *a3 = 512;
                    *(int32_t *)a2 = 0;
                }
                // 0x4079de
                return 0;
            }
        }
    }
    char v2 = *(char *)v1; // 0x40799e
    int64_t v3 = v1 + (int64_t)(v2 == 39);
    int64_t v4 = v2 != 39 ? 0 : 4;
    int64_t v5 = function_40d7b0(v3, g6, (int64_t *)&g5, 4); // 0x4079be
    if ((int32_t)v5 >= 0) {
        // 0x4079c7
        *a3 = 1;
        int32_t v6 = *(int32_t *)((0x100000000 * v5 >> 30) + (int64_t)&g5); // 0x4079d1
        *(int32_t *)a2 = v6 | (int32_t)v4;
        // 0x4079de
        return 0;
    }
    // 0x4079f0
    int64_t v7; // bp-48, 0x407980
    int64_t v8; // 0x407980
    int64_t result = function_40a8b0(v3, &v7, 0, (int64_t)a3, "eEgGkKmMpPtTyYzZ0", v8); // 0x407a03
    if ((int32_t)result != 0) {
        // 0x407a64
        *(int32_t *)a2 = 0;
        // 0x407a6d
        *a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    int64_t v9 = (int64_t)*(char *)v3 + 0xffffffd0; // 0x407a0f
    int64_t v10 = v9 & 0xffffffff; // 0x407a0f
    int64_t v11 = v10; // 0x407a15
    int64_t v12 = v4; // 0x407a15
    int64_t v13; // 0x407980
    if ((char)v9 < 10) {
        goto lab_0x407a64;
    } else {
        // 0x407a17
        v13 = v10;
        if (v3 != v7) {
            int64_t v14 = v3 + 1; // 0x407a39
            int64_t v15 = (int64_t)*(char *)v14 + 0xffffffd0; // 0x407a40
            while ((char)v15 >= 10) {
                // 0x407a30
                if (v14 == v7) {
                    // 0x407af8
                    v13 = v15 & 0xffffffff;
                    goto lab_0x407af8_2;
                }
                v14++;
                v15 = (int64_t)*(char *)v14 + 0xffffffd0;
            }
            // 0x407a64
            v11 = v15 & 0xffffffff;
            v12 = v4;
            goto lab_0x407a64;
        } else {
            goto lab_0x407af8_2;
        }
    }
  lab_0x407a64:
    // 0x407a64
    *(int32_t *)a2 = (int32_t)v12;
    if (v11 == 0) {
        // 0x407a6d
        *a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    // 0x4079de
    return result;
  lab_0x407af8_2:;
    // 0x407af8
    int64_t v16; // 0x407980
    if (*(char *)(v7 - 1) == 66) {
        int64_t v17 = v4 | 384; // 0x407b10
        v11 = v13;
        v12 = v17;
        v16 = v17;
        if (*(char *)(v7 - 2) != 105) {
            goto lab_0x407a64;
        } else {
            goto lab_0x407b02;
        }
    } else {
        // 0x407afe
        v16 = v4 | 128;
        goto lab_0x407b02;
    }
  lab_0x407b02:
    // 0x407b02
    v11 = v13;
    v12 = v16 & 0xffffffdf | 32;
    goto lab_0x407a64;
}
// Address range: 0x407b40 - 0x407b88
int64_t function_407b40(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x407b40
    *(char *)v1 = 0;
    int64_t result = v1; // 0x407b52
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x407b5b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x407b84
    return result;
}
// Address range: 0x407b90 - 0x407f2b
int64_t function_407b90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5, uint32_t a6) {
    uint64_t v1 = (int64_t)a6; // 0x407b9c
    char * str = (char *)a1; // 0x407bb6
    int32_t len = strlen(str); // 0x407bb6
    int64_t v2 = len; // 0x407bb6
    int32_t * v3 = NULL; // 0x407bc2
    int64_t v4 = a1; // 0x407bc2
    int64_t v5 = 0; // 0x407bc2
    int64_t v6 = v2; // 0x407bc2
    int64_t v7 = v2; // 0x407bc2
    int64_t v8; // 0x407b90
    int64_t result; // 0x407b90
    int64_t v9; // 0x407b90
    int64_t v10; // 0x407b90
    int32_t * v11; // 0x407b90
    int32_t v12; // 0x407b90
    int64_t v13; // 0x407da0
    int64_t * mem; // 0x407d74
    if ((a6 & 2) == 0) {
        // 0x407d10
        v3 = NULL;
        v4 = a1;
        v5 = 0;
        v6 = v2;
        v7 = v2;
        if (__ctype_get_mb_cur_max() < 2) {
            goto lab_0x407bd6;
        } else {
            int32_t v14 = mbstowcs(NULL, str, 0); // 0x407d2b
            if (v14 != -1) {
                int32_t n = v14 + 1; // 0x407d60
                int32_t size = 4 * n; // 0x407d6f
                mem = malloc(size);
                if (mem == NULL) {
                    // 0x407e8a
                    v3 = (int32_t *)mem;
                    v4 = a1;
                    v5 = 0;
                    v6 = v2;
                    v7 = v2;
                    v11 = NULL;
                    v8 = 0;
                    result = -1;
                    if (v1 % 2 != 0) {
                        goto lab_0x407bd6;
                    } else {
                        goto lab_0x407cae;
                    }
                } else {
                    int32_t v15 = mbstowcs((int32_t *)mem, str, n); // 0x407d92
                    v3 = (int32_t *)mem;
                    v4 = a1;
                    v5 = 0;
                    v6 = v2;
                    v7 = v2;
                    if (v15 == 0) {
                        goto lab_0x407bd6;
                    } else {
                        // 0x407da0
                        v13 = (int64_t)mem;
                        *(int32_t *)((int64_t)size - 4 + v13) = 0;
                        int32_t wc = *(int32_t *)mem; // 0x407db1
                        if (wc == 0) {
                            // 0x407e9f
                            v10 = wcswidth((int32_t *)mem, n);
                            goto lab_0x407eb0;
                        } else {
                            int32_t v16 = 0; // 0x407dd9
                            if (iswprint(wc) == 0) {
                                // 0x407ddb
                                *(int32_t *)v13 = 0xfffd;
                                v16 = 1;
                            }
                            int32_t v17 = v16;
                            int64_t v18 = v13 + 4; // 0x407de6
                            int32_t v19 = *(int32_t *)v18; // 0x407dea
                            int32_t wc2 = v19; // 0x407dee
                            while (v19 != 0) {
                                int64_t v20 = v18;
                                v16 = v17;
                                if (iswprint(wc2) == 0) {
                                    // 0x407ddb
                                    *(int32_t *)v20 = 0xfffd;
                                    v16 = 1;
                                }
                                // 0x407de6
                                v17 = v16;
                                v18 = v20 + 4;
                                v19 = *(int32_t *)v18;
                                wc2 = v19;
                            }
                            int64_t v21 = wcswidth((int32_t *)mem, n); // 0x407df7
                            v10 = v21;
                            if ((char)v17 == 0) {
                                goto lab_0x407eb0;
                            } else {
                                // 0x407e0a
                                v9 = v21;
                                v12 = wcstombs(NULL, (int32_t *)mem, 0);
                                goto lab_0x407e20;
                            }
                        }
                    }
                }
            } else {
                // 0x407d36
                v3 = NULL;
                v4 = a1;
                v5 = 0;
                v6 = v2;
                v7 = v2;
                v11 = NULL;
                v8 = 0;
                result = -1;
                if (v1 % 2 != 0) {
                    goto lab_0x407bd6;
                } else {
                    goto lab_0x407cae;
                }
            }
        }
    } else {
        goto lab_0x407bd6;
    }
  lab_0x407bd6:;
    int32_t * v22 = v3; // 0x407bdd
    int64_t v23 = v4; // 0x407bdd
    int64_t v24 = a4; // 0x407bdd
    int64_t v25 = v5; // 0x407bdd
    int64_t v26 = a4; // 0x407bdd
    int32_t * v27 = v3; // 0x407bdd
    int64_t v28 = v4; // 0x407bdd
    int64_t v29 = v5; // 0x407bdd
    int64_t v30 = v6; // 0x407bdd
    int64_t v31 = v7; // 0x407bdd
    if (v7 <= a4) {
        goto lab_0x407cdb;
    } else {
        goto lab_0x407be8;
    }
  lab_0x407cdb:
    // 0x407cdb
    v22 = v27;
    v23 = v28;
    v24 = v31;
    v25 = v29;
    v26 = v30;
    int64_t v32; // 0x407b90
    int64_t v33; // 0x407b90
    int64_t v34; // 0x407b90
    int64_t v35; // 0x407b90
    int64_t v36; // 0x407b90
    int64_t v37; // 0x407b90
    int64_t v38; // 0x407b90
    int32_t * v39; // 0x407b90
    int32_t * v40; // 0x407b90
    int64_t v41; // 0x407b90
    int64_t v42; // 0x407b90
    if (v31 >= a4) {
        goto lab_0x407be8;
    } else {
        int64_t v43 = a4 - v31; // 0x407cee
        *(int64_t *)a4 = v31;
        v39 = v27;
        v41 = v28;
        v37 = v43;
        v32 = v29;
        v35 = v30;
        v40 = v27;
        v42 = v28;
        v38 = 0;
        v33 = v29;
        v34 = v43;
        v36 = v30;
        if (a5 != 0) {
            goto lab_0x407bf8;
        } else {
            goto lab_0x407c0c;
        }
    }
  lab_0x407be8:
    // 0x407be8
    *(int64_t *)a4 = v24;
    v39 = v22;
    v41 = v23;
    v37 = 0;
    v32 = v25;
    v35 = v26;
    v40 = v22;
    v42 = v23;
    v38 = 0;
    v33 = v25;
    v34 = 0;
    v36 = v26;
    if (a5 == 0) {
        goto lab_0x407c0c;
    } else {
        goto lab_0x407bf8;
    }
  lab_0x407c0c:;
    uint64_t v44 = v36;
    int64_t v45 = (v1 & 4) == 0 ? v38 : 0;
    int64_t v46 = (v1 & 8) != 0 ? 0 : v34; // 0x407c28
    if (a3 != 0) {
        uint64_t v47 = a2 - 1 + a3; // 0x407c31
        if (v47 > a2 == (v45 != 0)) {
            int64_t v48 = -v45; // 0x407c5b
            int64_t v49 = a2; // 0x407b90
            int64_t v50 = v49;
            int64_t v51 = v50 + 1; // 0x407c4d
            *(char *)v50 = 32;
            v49 = v51;
            while (v47 > v51 == (a2 - v51 != v48)) {
                // 0x407c4d
                v50 = v49;
                v51 = v50 + 1;
                *(char *)v50 = 32;
                v49 = v51;
            }
        }
        // 0x407c60
        *(char *)a2 = 0;
        uint64_t v52 = v47 - a2; // 0x407c6b
        int64_t v53 = v52 > v44 ? v44 : v52; // 0x407c71
        int64_t v54 = (int64_t)mempcpy((int64_t *)a2, (int64_t *)v42, (int32_t)v53); // 0x407c75
        int64_t v55 = v54; // 0x407c80
        if (v46 != 0 == v47 > v54) {
            int64_t v56 = v54 + 1; // 0x407c95
            *(char *)v54 = 32;
            v55 = v56;
            while (v47 > v56 == (v46 - v56 != -v54)) {
                int64_t v57 = v56;
                v56 = v57 + 1;
                *(char *)v57 = 32;
                v55 = v56;
            }
        }
        // 0x407ca8
        *(char *)v55 = 0;
    }
    // 0x407cab
    v11 = v40;
    v8 = v33;
    result = v44 + v45 + v46;
    goto lab_0x407cae;
  lab_0x407bf8:
    // 0x407bf8
    v40 = v39;
    v42 = v41;
    v38 = v37;
    v33 = v32;
    v34 = 0;
    v36 = v35;
    if (a5 != 1) {
        int64_t v71 = v37 / 2; // 0x407c06
        v40 = v39;
        v42 = v41;
        v38 = v37 % 2 + v71;
        v33 = v32;
        v34 = v71;
        v36 = v35;
    }
    goto lab_0x407c0c;
  lab_0x407cae:
    // 0x407cae
    free((int64_t *)v11);
    free((int64_t *)v8);
    return result;
  lab_0x407eb0:
    // 0x407eb0
    v27 = (int32_t *)mem;
    v28 = a1;
    v29 = 0;
    v30 = v2;
    v31 = v10;
    v9 = v10;
    v12 = len;
    if (v10 <= a4) {
        goto lab_0x407cdb;
    } else {
        goto lab_0x407e20;
    }
  lab_0x407e20:;
    int32_t size2 = v12 + 1;
    int64_t * mem2 = malloc(size2); // 0x407e25
    int64_t v58 = (int64_t)mem2; // 0x407e25
    if (mem2 == NULL) {
        // 0x407f00
        v3 = (int32_t *)mem;
        v4 = a1;
        v5 = v58;
        v6 = v2;
        v7 = v9;
        v11 = (int32_t *)mem;
        v8 = v58;
        result = -1;
        if (v1 % 2 != 0) {
            goto lab_0x407bd6;
        } else {
            goto lab_0x407cae;
        }
    } else {
        int32_t v59 = *(int32_t *)mem; // 0x407e3e
        int32_t * v60 = (int32_t *)mem; // 0x407e48
        int64_t v61 = 0; // 0x407e48
        if (v59 != 0) {
            int64_t v62 = 0;
            int64_t v63 = v13;
            int32_t v64 = wcwidth(v59); // 0x407e72
            int64_t v65; // 0x407b90
            if (v64 != -1) {
                // 0x407e58
                v65 = v64;
            } else {
                // 0x407e7c
                *(int32_t *)v63 = 0xfffd;
                v65 = 1;
            }
            int64_t v66 = v65 + v62; // 0x407e5a
            while (v66 <= a4) {
                int64_t v67 = v63 + 4; // 0x407e64
                int32_t * v68 = (int32_t *)v67;
                int32_t v69 = *v68; // 0x407e68
                v60 = v68;
                v61 = v66;
                if (v69 == 0) {
                    goto lab_0x407ed8;
                }
                v62 = v66;
                v63 = v67;
                v64 = wcwidth(v69);
                if (v64 != -1) {
                    // 0x407e58
                    v65 = v64;
                } else {
                    // 0x407e7c
                    *(int32_t *)v63 = 0xfffd;
                    v65 = 1;
                }
                // 0x407e5a
                v66 = v65 + v62;
            }
            // 0x407ed8
            v60 = (int32_t *)v63;
            v61 = v62;
        }
      lab_0x407ed8:
        // 0x407ed8
        *v60 = 0;
        int32_t v70 = wcstombs((char *)mem2, (int32_t *)mem, size2); // 0x407eeb
        v3 = (int32_t *)mem;
        v4 = v58;
        v5 = v58;
        v6 = v70;
        v7 = v61;
        goto lab_0x407bd6;
    }
}
// Address range: 0x407f30 - 0x407fcd
int64_t function_407f30(int64_t a1, int64_t a2, int32_t a3, int32_t a4) {
    uint64_t v1 = a2 + 1; // 0x407f58
    int64_t * v2 = (int64_t *)0;
    int64_t * mem = realloc(v2, (int32_t)v1); // 0x407f62
    while (mem != NULL) {
        int64_t v3 = (int64_t)mem;
        *(int64_t *)a2 = a2;
        int64_t v4 = function_407b90(a1, v3, v1, a2, a3, a4); // 0x407f89
        int64_t result; // 0x407f30
        if (v4 == -1) {
            // 0x407fc0
            free(mem);
            result = 0;
            return result;
        }
        // 0x407f94
        result = v3;
        if (v1 > v4) {
            // 0x407f9c
            return result;
        }
        v1 = v4 + 1;
        v2 = (int64_t *)v3;
        mem = realloc(v2, (int32_t)v1);
    }
    // 0x407fb0
    free(v2);
    // 0x407f9c
    return 0;
}
// Address range: 0x407fd0 - 0x408183
int64_t function_407fd0(uint64_t a1, int64_t a2, uint64_t a3) {
    uint64_t v1 = a2 + a1; // 0x407fd9
    int64_t v2; // 0x407fd0
    int64_t v3; // 0x407fd0
    int64_t v4; // 0x407fd0
    int64_t v5; // 0x407fd0
    int64_t v6; // 0x407fd0
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x408110
        if (v1 <= a1) {
            // 0x4080f6
            return 0;
        }
        int16_t * v7 = *__ctype_b_loc(); // 0x408124
        v6 = a1;
        v3 = 0;
        while (true) {
          lab_0x408130:
            // 0x408130
            v4 = v3;
            unsigned char v8 = *(char *)v6; // 0x408134
            int16_t v9 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)v7); // 0x408138
            if ((v9 & 0x4000) != 0) {
                goto lab_0x40814a;
            } else {
                // 0x408141
                v2 = 0xffffffff;
                if ((a3 & 2) != 0) {
                    // break -> 0x4080f6
                    break;
                }
                // 0x408146
                v5 = v4;
                if ((v9 & 2) != 0) {
                    goto lab_0x408157;
                } else {
                    goto lab_0x40814a;
                }
            }
        }
      lab_0x4080f6_7:
        // 0x4080f6
        return v2 & 0xffffffff;
    }
    // 0x407ff7
    if (v1 <= a1) {
        // 0x4080f6
        return 0;
    }
    int64_t v10 = a1;
    int64_t v11 = 0; // 0x407fd0
    int64_t v12; // 0x407fd0
    int64_t v13; // 0x407fd0
    int64_t v14; // 0x407fd0
    int64_t v15; // 0x407fd0
    while (true) {
      lab_0x40802c:
        // 0x40802c
        v13 = v11;
        v15 = v10;
        char v16 = *(char *)v15; // 0x40802c
        if (v16 < 64) {
            // 0x408010
            v14 = v15;
            v12 = v13;
            if (v16 > 36 || (v16 & -4) == 32) {
                goto lab_0x40801b;
            } else {
                goto lab_0x408042;
            }
        } else {
            if (v16 == 64) {
                goto lab_0x408042;
            } else {
                // 0x408037
                v14 = v15;
                v12 = v13;
                if (v16 < 96 || v16 < 127) {
                    goto lab_0x40801b;
                } else {
                    goto lab_0x408042;
                }
            }
        }
    }
  lab_0x4080f6_7:
    // 0x4080f6
    return v2 & 0xffffffff;
  lab_0x40814a:
    // 0x40814a
    v2 = v4;
    if ((int32_t)v4 == 0x7fffffff) {
        return v2 & 0xffffffff;
    }
    // 0x408153
    v5 = v4 + 1 & 0xffffffff;
    goto lab_0x408157;
  lab_0x408157:;
    int64_t v17 = v6 + 1; // 0x408130
    v2 = v5;
    v6 = v17;
    v3 = v5;
    if (v1 == v17) {
        // break -> 0x4080f6
        goto lab_0x4080f6_7;
    }
    goto lab_0x408130;
  lab_0x40801b:;
    int64_t v18 = v14 + 1; // 0x40801f
    v11 = v12 + 1 & 0xffffffff;
  lab_0x408023:
    // 0x408023
    v10 = v18;
    if (v10 >= v1) {
        // break -> 0x4080f6
        goto lab_0x4080f6_7;
    }
    goto lab_0x40802c;
  lab_0x408042:;
    int64_t ps = 0; // bp-64, 0x408042
    int64_t v19 = v15; // 0x40804b
    int64_t v20 = v13; // 0x40804b
    int64_t v21; // 0x407fd0
    int64_t v22; // 0x407fd0
    while (true) {
      lab_0x408074:
        // 0x408074
        v21 = v20;
        v22 = v19;
        int32_t wc; // bp-68, 0x407fd0
        int64_t v23 = function_40c400((int64_t *)&wc, v22, v1 - v22); // 0x408087
        switch (v23) {
            case -1: {
                goto lab_0x4080e0;
            }
            case -2: {
                // 0x408160
                v2 = 0xffffffff;
                if (a3 % 2 == 0) {
                    // 0x408023
                    v2 = v21 + 1 & 0xffffffff;
                }
                // 0x4080f6
                return v2 & 0xffffffff;
            }
            default: {
                int32_t v24 = wcwidth(wc); // 0x4080aa
                int64_t v25; // 0x407fd0
                if (v24 >= 0) {
                    int64_t v26 = v24; // 0x4080aa
                    v2 = 0x7fffffff;
                    if ((0x7fffffff - v21 & 0xffffffff) < v26) {
                        // break (via goto) -> 0x4080f6
                        goto lab_0x4080f6_7;
                    }
                    // 0x408060
                    v25 = v21 + v26 & 0xffffffff;
                } else {
                    // 0x4080b3
                    v2 = 0xffffffff;
                    if ((a3 & 2) != 0) {
                        // break (via goto) -> 0x4080f6
                        goto lab_0x4080f6_7;
                    }
                    // 0x4080b9
                    v25 = v21;
                    if (iswcntrl(wc) == 0) {
                        // 0x4080c6
                        v2 = 0x7fffffff;
                        if ((int32_t)v21 == 0x7fffffff) {
                            // break (via goto) -> 0x4080f6
                            goto lab_0x4080f6_7;
                        }
                        // 0x4080d3
                        v25 = v21 + 1 & 0xffffffff;
                    }
                }
                int64_t v27 = (v23 == 0 ? 1 : v23) + v22; // 0x408068
                int32_t v28 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40806b
                v18 = v27;
                v11 = v25;
                v19 = v27;
                v20 = v25;
                if (v28 != 0) {
                    goto lab_0x408023;
                }
                goto lab_0x408074;
            }
        }
    }
  lab_0x4080e0:
    // 0x4080e0
    v14 = v22;
    v12 = v21;
    v2 = 0xffffffff;
    if (a3 % 2 != 0) {
        // break -> 0x4080f6
        goto lab_0x4080f6_7;
    }
    goto lab_0x40801b;
}
// Address range: 0x408190 - 0x4081b3
int64_t function_408190(int64_t str, uint32_t a2) {
    // 0x408190
    return function_407fd0(str, (int64_t)strlen((char *)str), (int64_t)a2);
}
// Address range: 0x4081c0 - 0x408259
int64_t function_4081c0(int64_t str) {
    // 0x4081c0
    if (str == 0) {
        // 0x408239
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g40);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4081ce
    int64_t result = (int64_t)found_char_pos; // 0x4081ce
    if (found_char_pos == NULL) {
        // 0x408229
        g71 = str;
        g39 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4081d8
    if (v1 - str < 7) {
        // 0x408229
        g71 = str;
        g39 = str;
        return result;
    }
    // 0x4081e8
    bool v2; // 0x4081c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4081c0
    int64_t v5 = result - 6; // 0x4081c0
    int64_t v6 = 7; // 0x4081f6
    unsigned char v7 = *(char *)v5; // 0x4081f6
    char v8 = *(char *)v4; // 0x4081f6
    char v9 = v8; // 0x4081f6
    bool v10 = false; // 0x4081f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x408200
    int64_t v13 = v1; // 0x408200
    int64_t v14 = 3; // 0x408200
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x408229
        g71 = str;
        g39 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x408212
    char v16 = *(char *)v12; // 0x408212
    char v17 = v16; // 0x408212
    bool v18 = false; // 0x408212
    while (v15 == v16) {
        // 0x408202
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
    int64_t v20 = v1; // 0x40821c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40821e
        v20 = result + 4;
        g37 = v20;
    }
    // 0x408229
    g71 = v20;
    g39 = v20;
    return result;
}
// Address range: 0x408260 - 0x408352
int64_t function_408260(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x408274
    int64_t result = (int64_t)v1; // 0x408274
    if (result != a1) {
        // 0x408281
        return result;
    }
    int64_t v2 = function_40dc80(); // 0x408290
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x408346
    if (v3 == 85) {
        // 0x4082a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x408338
            result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g1;
            return result2;
        }
        char v4 = *v1; // 0x4082ce
        int64_t result3 = v4 != 96 ? (int64_t)&g8 : (int64_t)&g11; // 0x4082db
        // 0x408281
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x408338
        result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g1;
        return result2;
    }
    char v5 = *v1; // 0x40831d
    int64_t result4 = v5 != 96 ? (int64_t)&g9 : (int64_t)&g10; // 0x40832a
    // 0x408281
    return result4;
}
// Address range: 0x408360 - 0x4083b7
int64_t function_408360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x408360
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x4083b7 - 0x409581
int64_t function_4083b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x408401
    int64_t v3 = 0; // 0x408401
    int64_t v4; // 0x4083b7
    int64_t v5; // 0x4083b7
    int64_t v6; // 0x4083b7
    int64_t v7; // 0x4083b7
    int64_t v8; // 0x4083b7
    int64_t v9; // 0x4083b7
    int64_t v10; // 0x4083b7
    int64_t v11; // 0x4083b7
    int64_t v12; // 0x4083b7
    int64_t v13; // 0x4083b7
    int64_t v14; // 0x4083b7
    int64_t v15; // 0x4083b7
    int64_t v16; // 0x4083b7
    int64_t v17; // 0x4083b7
    int64_t v18; // 0x4083b7
    int64_t result; // 0x4083b7
    int64_t v19; // 0x4083b7
    int32_t wc; // bp+132, 0x4083b7
    int64_t ps; // bp+136, 0x4083b7
    char v20; // 0x408970
    int64_t v21; // 0x408970
    int64_t v22; // 0x408d18
    int64_t v23; // 0x4083b7
    int64_t v24; // 0x408d37
    int32_t v25; // 0x4083b7
    while (true) {
      lab_0x408408_2:
        // 0x408408
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4083b7
        int64_t v27; // 0x40843c
        while (true) {
          lab_0x408408:
            // 0x408408
            v5 = v26;
            bool v28 = v15 == v5; // 0x408413
            if (v15 == -1) {
                // 0x408415
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x408423
            if (v28) {
                // break (via goto) -> 0x408b88
                goto lab_0x408b88;
            }
            // 0x40842c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g91 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x408a1b
                    if (v25 % 2 == 0) {
                        goto lab_0x408561;
                    }
                    // 0x408e3d
                    v26 = v5 + 1;
                    goto lab_0x408408;
                }
                case 7: {
                    goto lab_0x408561;
                }
                case 8: {
                    goto lab_0x408561;
                }
                case 9: {
                    goto lab_0x40877a_2;
                }
                case 10: {
                    goto lab_0x40877a_2;
                }
                case 11: {
                    goto lab_0x408561;
                }
                case 12: {
                    goto lab_0x408561;
                }
                case 13: {
                    goto lab_0x40877a_2;
                }
                case 32: {
                    goto lab_0x40877a_2;
                }
                case 33: {
                    goto lab_0x40877a_2;
                }
                case 34: {
                    goto lab_0x40877a_2;
                }
                case 35: {
                    goto lab_0x40852d;
                }
                case 36: {
                    goto lab_0x40877a_2;
                }
                case 37: {
                    goto lab_0x408561;
                }
                case 38: {
                    goto lab_0x40877a_2;
                }
                case 39: {
                    goto lab_0x40877a_2;
                }
                case 40: {
                    goto lab_0x40877a_2;
                }
                case 41: {
                    goto lab_0x40877a_2;
                }
                case 42: {
                    goto lab_0x40877a_2;
                }
                case 43: {
                    goto lab_0x408561;
                }
                case 44: {
                    goto lab_0x408561;
                }
                case 45: {
                    goto lab_0x408561;
                }
                case 46: {
                    goto lab_0x408561;
                }
                case 47: {
                    goto lab_0x408561;
                }
                case 48: {
                    goto lab_0x408561;
                }
                case 49: {
                    goto lab_0x408561;
                }
                case 50: {
                    goto lab_0x408561;
                }
                case 51: {
                    goto lab_0x408561;
                }
                case 52: {
                    goto lab_0x408561;
                }
                case 53: {
                    goto lab_0x408561;
                }
                case 54: {
                    goto lab_0x408561;
                }
                case 55: {
                    goto lab_0x408561;
                }
                case 56: {
                    goto lab_0x408561;
                }
                case 57: {
                    goto lab_0x408561;
                }
                case 58: {
                    goto lab_0x408561;
                }
                case 59: {
                    goto lab_0x40877a_2;
                }
                case 60: {
                    goto lab_0x40877a_2;
                }
                case 61: {
                    goto lab_0x40877a_2;
                }
                case 62: {
                    goto lab_0x40877a_2;
                }
                case 63: {
                    goto lab_0x40877a_2;
                }
                case 65: {
                    goto lab_0x408561;
                }
                case 66: {
                    goto lab_0x408561;
                }
                case 67: {
                    goto lab_0x408561;
                }
                case 68: {
                    goto lab_0x408561;
                }
                case 69: {
                    goto lab_0x408561;
                }
                case 70: {
                    goto lab_0x408561;
                }
                case 71: {
                    goto lab_0x408561;
                }
                case 72: {
                    goto lab_0x408561;
                }
                case 73: {
                    goto lab_0x408561;
                }
                case 74: {
                    goto lab_0x408561;
                }
                case 75: {
                    goto lab_0x408561;
                }
                case 76: {
                    goto lab_0x408561;
                }
                case 77: {
                    goto lab_0x408561;
                }
                case 78: {
                    goto lab_0x408561;
                }
                case 79: {
                    goto lab_0x408561;
                }
                case 80: {
                    goto lab_0x408561;
                }
                case 81: {
                    goto lab_0x408561;
                }
                case 82: {
                    goto lab_0x408561;
                }
                case 83: {
                    goto lab_0x408561;
                }
                case 84: {
                    goto lab_0x408561;
                }
                case 85: {
                    goto lab_0x408561;
                }
                case 86: {
                    goto lab_0x408561;
                }
                case 87: {
                    goto lab_0x408561;
                }
                case 88: {
                    goto lab_0x408561;
                }
                case 89: {
                    goto lab_0x408561;
                }
                case 90: {
                    goto lab_0x408561;
                }
                case 91: {
                    goto lab_0x40877a_2;
                }
                case 92: {
                    goto lab_0x40877a_2;
                }
                case 93: {
                    goto lab_0x408561;
                }
                case 94: {
                    goto lab_0x40877a_2;
                }
                case 95: {
                    goto lab_0x408561;
                }
                case 96: {
                    goto lab_0x40877a_2;
                }
                case 97: {
                    goto lab_0x408561;
                }
                case 98: {
                    goto lab_0x408561;
                }
                case 99: {
                    goto lab_0x408561;
                }
                case 100: {
                    goto lab_0x408561;
                }
                case 101: {
                    goto lab_0x408561;
                }
                case 102: {
                    goto lab_0x408561;
                }
                case 103: {
                    goto lab_0x408561;
                }
                case 104: {
                    goto lab_0x408561;
                }
                case 105: {
                    goto lab_0x408561;
                }
                case 106: {
                    goto lab_0x408561;
                }
                case 107: {
                    goto lab_0x408561;
                }
                case 108: {
                    goto lab_0x408561;
                }
                case 109: {
                    goto lab_0x408561;
                }
                case 110: {
                    goto lab_0x408561;
                }
                case 111: {
                    goto lab_0x408561;
                }
                case 112: {
                    goto lab_0x408561;
                }
                case 113: {
                    goto lab_0x408561;
                }
                case 114: {
                    goto lab_0x408561;
                }
                case 115: {
                    goto lab_0x408561;
                }
                case 116: {
                    goto lab_0x408561;
                }
                case 117: {
                    goto lab_0x408561;
                }
                case 118: {
                    goto lab_0x408561;
                }
                case 119: {
                    goto lab_0x408561;
                }
                case 120: {
                    goto lab_0x408561;
                }
                case 121: {
                    goto lab_0x408561;
                }
                case 122: {
                    goto lab_0x408561;
                }
                case 123: {
                    goto lab_0x408505;
                }
                case 124: {
                    goto lab_0x40877a_2;
                }
                case 125: {
                    goto lab_0x408505;
                }
                case 126: {
                    goto lab_0x40852d;
                }
                default: {
                    goto lab_0x408905;
                }
            }
        }
      lab_0x408905:
        if (v23 != 1) {
            // 0x408c70
            ps = 0;
            int64_t len = v15; // 0x408c80
            if (v15 == -1) {
                // 0x408c82
                len = strlen((char *)str);
            }
            // 0x408cae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x408d0f:
                // 0x408d0f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x408d14
                int64_t v30 = v29 + str;
                v24 = function_40c400((int64_t *)&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40928a_2;
                    }
                    case -1: {
                        goto lab_0x40928a_2;
                    }
                    case -2: {
                        // 0x40936d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4093a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4093aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4093b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4093b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40928a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40928a_2;
                    }
                    case 1: {
                        goto lab_0x408ce0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x408d8c
                        char v34 = *(char *)v33; // 0x408d9d
                        unsigned char v35; // 0x4083b7
                        if (v34 < 125) {
                            // 0x408da8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x408dbf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40877a_2;
                            }
                        }
                        // 0x408d90
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x408d9d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x408da8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x408dbf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40877a_2;
                                }
                            }
                            // 0x408d90
                            v33++;
                        }
                        goto lab_0x408ce0;
                    }
                }
            }
            goto lab_0x40928a_2;
        } else {
            // 0x408954
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x408561;
        }
    }
  lab_0x408b88:
    // 0x408b88
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40948a
        if (v8 > result) {
            // 0x409493
            *(char *)(v12 + result) = 0;
        }
        // 0x4087b7
        return result;
    }
    goto lab_0x40877a_2;
  lab_0x408561:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x408570
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40877a_2;
        }
    }
    int64_t v42 = result; // 0x408671
    char v43 = v20; // 0x408671
    int64_t v44 = v58; // 0x408671
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x408671
    int64_t v46 = v56; // 0x408671
    goto lab_0x4085ed;
  lab_0x40877a_2:;
    // 0x4087b7
    char * v36; // 0x4083b7
    return function_408360(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x40928a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x408561;
    } else {
        uint64_t v40 = v37 + v5; // 0x408e5e
        int64_t v41 = v5 + 1; // 0x408f41
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x408f48
        char v48 = v20; // 0x408f48
        int64_t v49 = result; // 0x408f48
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x408f11
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x408f15
            int64_t v52 = v50 + 1; // 0x408f1a
            int64_t v53 = v47 + 1; // 0x408f41
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x408f0c
                v50 = v52;
                if (v38 > v50) {
                    // 0x408f11
                    *(char *)(v50 + v39) = v51;
                }
                // 0x408f15
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
        goto lab_0x4085ed;
    }
  lab_0x408ce0:
    // 0x408ce0
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x408cff
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408d02
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x40928a
        goto lab_0x40928a_2;
    }
    goto lab_0x408d0f;
  lab_0x40852d:
    // 0x40852d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40877a_2;
    }
    goto lab_0x408561;
  lab_0x408505:;
    bool v61 = v15 == 1; // 0x408510
    if (v15 == -1) {
        // 0x408512
        v61 = *(char *)v1 == 0;
    }
    // 0x40851e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x408561;
    } else {
        goto lab_0x40852d;
    }
  lab_0x4085ed:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x4085f2
        *(char *)(v59 + v60) = v43;
    }
    // 0x4085f6
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x408408_2;
}
// Address range: 0x409590 - 0x40972e
int64_t function_409590(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x409592
    int32_t * v3 = __errno_location(); // 0x4095ac
    int64_t v4 = (int64_t)g28; // 0x4095b1
    int32_t v5 = *v3; // 0x4095bb
    int64_t v6 = v4; // 0x4095d1
    if (v2 >= (int64_t)*(int32_t *)&g31) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x409729
            function_40a7b0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4095e0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4095e7
        int64_t v9; // 0x409590
        if (g28 == &g29) {
            int64_t v10 = function_40a5c0(0, v8); // 0x40970a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g29); // 0x40970f
            *(int64_t *)&g28 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_40a5c0(v4, v8); // 0x4095fb
            *(int64_t *)&g28 = v12;
            v9 = v12;
        }
        // 0x40960a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g31; // 0x40960a
        int32_t v14 = v7; // 0x409611
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g31 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x409641
    int64_t v17 = v15 + 8; // 0x409644
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x40964b
    int64_t * v19 = (int64_t *)v16; // 0x40964e
    uint64_t v20 = *v19; // 0x40964e
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x409651
    int64_t result = *v21; // 0x409651
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x40965c
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x409665
    int64_t v24; // 0x409590
    uint64_t v25 = function_408360(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x409674
    if (v20 > v25) {
        // 0x4096eb
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x409687
    *v19 = v26;
    if (result != (int64_t)&g72) {
        // 0x409697
        free((int64_t *)result);
    }
    int64_t result2 = function_40a560(v26); // 0x4096b1
    *v21 = result2;
    int64_t v27 = *v22; // 0x4096cb
    int64_t v28 = *v23; // 0x4096ce
    int64_t v29; // 0x409590
    function_408360(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x4096eb
    *v3 = v5;
    return result2;
}
// Address range: 0x409730 - 0x409764
int64_t function_409730(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x409737
    int64_t result = function_40a760(a1 == 0 ? (int64_t)&g73 : a1, 56); // 0x409756
    return result;
}
// Address range: 0x409770 - 0x40977f
int64_t function_409770(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g73 : a1); // 0x40977c
    return result;
}
// Address range: 0x409780 - 0x40978f
int64_t function_409780(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g73 : a1; // 0x409788
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g73;
}
// Address range: 0x409790 - 0x4097c3
int64_t function_409790(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g73 + 8 : a1 + 8; // 0x4097a9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4097ae
    uint32_t v3 = *v2; // 0x4097ae
    uint32_t v4 = (int32_t)a2 % 32; // 0x4097b2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4097d0 - 0x4097e3
int64_t function_4097d0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g73 + 4 : a1 + 4); // 0x4097dc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4097f0 - 0x40981b
int64_t function_4097f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g73 : a1; // 0x4097f8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x409815
        abort();
        // UNREACHABLE
    }
    // 0x40980c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g73;
}
// Address range: 0x409820 - 0x409892
int64_t function_409820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g73 : a5; // 0x409842
    int32_t * v2 = __errno_location(); // 0x40984b
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x409864
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x409868
    uint32_t v5 = *(int32_t *)v1; // 0x40986b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x409871
    int64_t result = function_408360(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40987a
    return result;
}
// Address range: 0x4098a0 - 0x409981
int64_t function_4098a0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g73 : a4; // 0x4098c2
    int32_t * v2 = __errno_location(); // 0x4098c8
    int64_t v3 = v1 + 8; // 0x4098df
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4098e7
    int32_t * v5 = (int32_t *)v1; // 0x4098ea
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x4098f8
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x4098fb
    int64_t v8 = function_408360(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x409905
    int64_t v9 = v8 + 1; // 0x40990a
    int64_t result = function_40a560(v9); // 0x40991f
    function_408360(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x409964
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x40996d
    return result;
}
// Address range: 0x409990 - 0x40999a
int64_t function_409990(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409990
    return function_4098a0(a1, a2, 0, a3);
}
// Address range: 0x4099a0 - 0x409a35
int64_t function_4099a0(void) {
    uint32_t v1 = *(int32_t *)&g31; // 0x4099a0
    int64_t v2 = v1; // 0x4099a0
    int64_t v3 = v2; // 0x4099b4
    if (v1 >= 2) {
        int64_t v4 = &g31;
        int64_t v5 = v4 + 16; // 0x4099d3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g83;
        while (v5 != (int64_t)g28 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4099d0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g83;
        }
    }
    int64_t v6 = v3; // 0x4099ed
    if (g29 != 0x617720) {
        // 0x4099ef
        free((int64_t *)g29);
        g29 = 256;
        *(int64_t *)&g30 = (int64_t)&g72;
        v6 = &g83;
    }
    int64_t result = v6; // 0x409a11
    if (g28 != &g29) {
        // 0x409a13
        free(g28);
        *(int64_t *)&g28 = (int64_t)&g29;
        result = &g83;
    }
    // 0x409a26
    *(int32_t *)&g31 = 1;
    return result;
}
// Address range: 0x409a40 - 0x409a51
int64_t function_409a40(void) {
    // 0x409a40
    int64_t v1; // 0x409a40
    return function_409590(v1, v1, -1, (int64_t *)&g73);
}
// Address range: 0x409a60 - 0x409a6a
int64_t function_409a60(void) {
    // 0x409a60
    int64_t v1; // 0x409a60
    return function_409590(v1, v1, v1, (int64_t *)&g73);
}
// Address range: 0x409a70 - 0x409a86
int64_t function_409a70(int64_t a1) {
    // 0x409a70
    return function_409590(0, a1, -1, (int64_t *)&g73);
}
// Address range: 0x409a90 - 0x409aa2
int64_t function_409a90(int64_t a1, int64_t a2) {
    // 0x409a90
    return function_409590(0, a1, a2, (int64_t *)&g73);
}
// Address range: 0x409ab0 - 0x409b18
int64_t function_409ab0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409ac0
    return function_409590((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x409b20 - 0x409b84
int64_t function_409b20(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409b30
    return function_409590((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x409b90 - 0x409b9c
int64_t function_409b90(int64_t a1, int64_t a2) {
    // 0x409b90
    return function_409ab0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x409ba0 - 0x409baf
int64_t function_409ba0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409ba0
    return function_409b20(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x409bb0 - 0x409c20
int64_t function_409bb0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g73); // 0x409bbd
    int128_t v2 = __asm_movdqa(g74); // 0x409bc5
    int128_t v3 = __asm_movdqa(g75); // 0x409bcd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x409be2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x409bf8
    uint32_t v6 = *v5; // 0x409bf8
    uint32_t v7 = (int32_t)a3 % 32; // 0x409bfd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_409590(0, a1, a2, &v4);
}
// Address range: 0x409c20 - 0x409c2d
int64_t function_409c20(int64_t a1, int64_t a2) {
    // 0x409c20
    return function_409bb0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x409c30 - 0x409c41
int64_t function_409c30(int64_t a1) {
    // 0x409c30
    return function_409bb0(a1, -1, 58);
}
// Address range: 0x409c50 - 0x409c5a
int64_t function_409c50(void) {
    // 0x409c50
    int64_t v1; // 0x409c50
    return function_409bb0(v1, v1, 58);
}
// Address range: 0x409c60 - 0x409cce
int64_t function_409c60(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409c7a
    return function_409590((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x409cd0 - 0x409d3c
int64_t function_409cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g73); // 0x409cd7
    int128_t v2 = __asm_movdqa(g74); // 0x409cdf
    int128_t v3 = __asm_movdqa(g75); // 0x409ce7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x409d09
    if (a2 == 0 || a3 == 0) {
        // 0x409d37
        abort();
        // UNREACHABLE
    }
    // 0x409d1a
    return function_409590(a1, a4, a5, &v4);
}
// Address range: 0x409d40 - 0x409d49
int64_t function_409d40(void) {
    // 0x409d40
    int64_t v1; // 0x409d40
    return function_409cd0(v1, v1, v1, v1, -1);
}
// Address range: 0x409d50 - 0x409d67
int64_t function_409d50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409d50
    return function_409cd0(0, a1, a2, a3, -1);
}
// Address range: 0x409d70 - 0x409d83
int64_t function_409d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x409d70
    return function_409cd0(0, a1, a2, a3, a4);
}
// Address range: 0x409d90 - 0x409d9a
int64_t function_409d90(void) {
    // 0x409d90
    int64_t v1; // 0x409d90
    return function_409590(v1, v1, v1, &g27);
}
// Address range: 0x409da0 - 0x409db2
int64_t function_409da0(int64_t a1, int64_t a2) {
    // 0x409da0
    return function_409590(0, a1, a2, &g27);
}
// Address range: 0x409dc0 - 0x409dd1
int64_t function_409dc0(int64_t a1, int64_t a2) {
    // 0x409dc0
    return function_409590(a1, a2, -1, &g27);
}
// Address range: 0x409de0 - 0x409df6
int64_t function_409de0(int64_t a1) {
    // 0x409de0
    return function_409590(0, a1, -1, &g27);
}
// Address range: 0x409e00 - 0x409f30
int64_t function_409e00(int64_t a1, int64_t a2) {
    int64_t str = function_405a70(a1, a2); // 0x409e19
    int64_t str2 = function_405a70(a2, a2); // 0x409e24
    int64_t n = function_405ad0(str); // 0x409e2f
    if (n != function_405ad0(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x409e44
        return 0;
    }
    int64_t v1 = function_405990(); // 0x409e75
    int64_t v2 = function_405990(); // 0x409e80
    char * v3 = (char *)v1; // 0x409e93
    int64_t v4; // bp-344, 0x409e00
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x409f10
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x409eac
    int64_t v6; // bp-200, 0x409e00
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x409ef0
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x409ec4
    // 0x409ec6
    v7 = v4 == v6;
    // 0x409ed5
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x409e44
    return v7 & 0xffffffff;
}
// Address range: 0x409f30 - 0x409f7a
int64_t function_409f30(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x409f3b
    *v1 = 0;
    int64_t v2; // 0x409f30
    int32_t v3 = function_40db90((int64_t *)".", 0x80000, v2); // 0x409f4f
    *(int32_t *)a1 = v3;
    if (v3 >= 0) {
        // 0x409f57
        return 0;
    }
    int64_t v4 = function_40b160(0, 0); // 0x409f64
    *v1 = v4;
    return v4 == 0 ? 0xffffffff : 0;
}
// Address range: 0x409f80 - 0x409f99
int64_t function_409f80(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t fd = v1;
    if (fd < 0) {
        // 0x409f90
        return function_40ae00(*(int64_t *)(v1 + 8));
    }
    // 0x409f86
    return fchdir(fd);
}
// Address range: 0x409fa0 - 0x409fb9
int64_t function_409fa0(int64_t * a1) {
    // 0x409fa0
    int64_t v1; // 0x409fa0
    uint32_t fd = (int32_t)v1;
    if (fd >= 0) {
        // 0x409faa
        close(fd);
    }
    // 0x409faf
    free((int64_t *)*(int64_t *)((int64_t)a1 + 8));
    return &g83;
}
// Address range: 0x409fc0 - 0x40a39d
int64_t function_409fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x40a058
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x409fdc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x409ff6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40a03b
    if (a6 < 10) {
        // 0x40a04a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x40a142
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x40a3a0 - 0x40a3c0
int64_t function_40a3a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a3a0
    if (a5 == 0) {
        // 0x40a3bb
        return function_409fc0(a1, a2, a3, a4, a5, 0, (int64_t)&g83);
    }
    int64_t v1 = 0; // 0x40a3a7
    v1++;
    int64_t v2 = v1; // 0x40a3b9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x40a3b0
        v1++;
        v2 = v1;
    }
    // 0x40a3bb
    return function_409fc0(a1, a2, a3, a4, a5, v2, (int64_t)&g83);
}
// Address range: 0x40a3c0 - 0x40a420
int64_t function_40a3c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x40a3c0
    int64_t v3 = &v2; // 0x40a3c0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x40a3f3
    int64_t v6; // 0x40a3dd
    int64_t * v7; // 0x40a3fb
    int64_t v8; // 0x40a3fb
    int64_t v9; // 0x40a407
    if (v5 < 48) {
        // 0x40a3d0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x40a413
            break;
        }
    } else {
        // 0x40a3fb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x40a413
            break;
        }
    }
    int64_t v10 = 10; // 0x40a3f1
    while (v4 != 9) {
        // 0x40a3e9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x40a3d0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x40a413
                break;
            }
        } else {
            // 0x40a3fb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x40a413
                break;
            }
        }
        // 0x40a3e9
        v10 = 10;
    }
    // 0x40a413
    return function_409fc0(a1, a2, a3, a4, v3, v10, (int64_t)&g83);
}
// Address range: 0x40a420 - 0x40a4dc
int64_t function_40a420(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x40a420
    int64_t v1; // bp-168, 0x40a420
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x40a420
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x40a420
    int64_t v8; // 0x40a420
    int64_t v9; // bp-56, 0x40a420
    int64_t v10; // 0x40a485
    int64_t v11; // 0x40a4a9
    if ((int32_t)v6 < 48) {
        // 0x40a470
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x40a4c0
            break;
        }
    } else {
        // 0x40a4a2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x40a4c0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40a49a
    int64_t v13 = 10; // 0x40a49a
    while (v5 != 9) {
        // 0x40a49c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x40a470
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x40a4c0
                break;
            }
        } else {
            // 0x40a4a2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x40a4c0
                break;
            }
        }
        // 0x40a492
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x40a4c0
    int64_t v14; // bp-136, 0x40a420
    int64_t result = function_409fc0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g83); // 0x40a4cf
    return result;
}
// Address range: 0x40a4e0 - 0x40a554
int64_t function_40a4e0(int64_t a1) {
    // 0x40a4e0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x40a543
    return fputs_unlocked(v1, g38);
}
// Address range: 0x40a560 - 0x40a57a
int64_t function_40a560(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x40a564
    if (size != 0 != (mem == NULL)) {
        // 0x40a573
        return (int64_t)mem;
    }
    // 0x40a575
    function_40a7b0(size);
    // UNREACHABLE
}
// Address range: 0x40a580 - 0x40a5a1
int64_t function_40a580(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x40a583
    int64_t v2 = v1; // 0x40a583
    if (v2 < 0) {
        // 0x40a59b
        function_40a7b0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x40a599
        return function_40a560(v2);
    }
    // 0x40a59b
    function_40a7b0(v2);
    // UNREACHABLE
}
// Address range: 0x40a5b0 - 0x40a5b2
int64_t function_40a5b0(void) {
    // 0x40a5b0
    int64_t v1; // 0x40a5b0
    return function_40a560(v1);
}
// Address range: 0x40a5c0 - 0x40a5f6
int64_t function_40a5c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x40a5e8
        free(v1);
        return (int32_t)&g83 ^ (int32_t)&g83;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x40a5d1
    if (a2 != 0 != (mem == NULL)) {
        // 0x40a5e0
        return (int64_t)mem;
    }
    // 0x40a5f1
    function_40a7b0(a1);
    // UNREACHABLE
}
// Address range: 0x40a600 - 0x40a621
int64_t function_40a600(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x40a603
    int64_t v2 = v1; // 0x40a603
    if (v2 < 0) {
        // 0x40a61b
        function_40a7b0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x40a619
        return function_40a5c0(a1, v2);
    }
    // 0x40a61b
    function_40a7b0(a1);
    // UNREACHABLE
}
// Address range: 0x40a630 - 0x40a6b6
int64_t function_40a630(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40a68b
            function_40a7b0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_40a5c0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x40a673
    if (a2 == 0) {
        // 0x40a698
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x40a678
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40a68b
        function_40a7b0(a1);
        // UNREACHABLE
    }
    // 0x40a65a
    *(int64_t *)a2 = v2;
    return function_40a5c0(a1, v2 * a3);
}
// Address range: 0x40a6c0 - 0x40a710
int64_t function_40a6c0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x40a6c0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40a70a
            function_40a7b0(a1);
            // UNREACHABLE
        }
        // 0x40a6e2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_40a5c0(a1, v1);
    }
    if (a2 == 0) {
        // 0x40a6f5
        *(int64_t *)a2 = 128;
        return function_40a5c0(0, 128);
    }
    // 0x40a708
    if (a2 < 0) {
        // 0x40a70a
        function_40a7b0(a1);
        // UNREACHABLE
    }
    // 0x40a6e2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_40a5c0(a1, v1);
}
// Address range: 0x40a710 - 0x40a727
int64_t function_40a710(int64_t a1, int64_t a2) {
    // 0x40a710
    return (int64_t)memset((int64_t *)function_40a560(a1), 0, (int32_t)a1);
}
// Address range: 0x40a730 - 0x40a75e
int64_t function_40a730(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x40a737
    if ((int64_t)v1 < 0) {
        // 0x40a759
        function_40a7b0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x40a759
        function_40a7b0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40a74a
    if (mem != NULL) {
        // 0x40a754
        return (int64_t)mem;
    }
    // 0x40a759
    function_40a7b0(nmemb);
    // UNREACHABLE
}
// Address range: 0x40a760 - 0x40a788
int64_t function_40a760(int64_t a1, int64_t a2) {
    int64_t v1 = function_40a560(a2); // 0x40a76f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x40a790 - 0x40a7a3
int64_t function_40a790(int64_t str) {
    // 0x40a790
    return function_40a760(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x40a7b0 - 0x40a7e1
int64_t function_40a7b0(int64_t a1) {
    // 0x40a7b0
    error(g26, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40a7f0 - 0x40a81f
int64_t function_40a7f0(int64_t a1, int64_t a2) {
    int64_t result = function_40b160(0, 0); // 0x40a7f5
    if (result != 0 || *__errno_location() != 12) {
        // 0x40a802
        return result;
    }
    // 0x40a81a
    function_40a7b0(0);
    // UNREACHABLE
}
// Address range: 0x40a820 - 0x40a8a1
int64_t function_40a820(int64_t a1, int64_t a2, int64_t a3, char (**a4)[4], int64_t a5) {
    int64_t v1 = *(int64_t *)((8 * a1 + 0x7fffffff8 & 0x7fffffff8) + (int64_t)&g12); // 0x40a842
    error(g26, 0, dcgettext(NULL, (char *)v1, 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40a8b0 - 0x40acf0
int64_t function_40a8b0(int64_t a1, int64_t * a2, uint32_t a3, int64_t a4, char * str, int64_t a6) {
    if (a3 >= 37) {
        // 0x40accb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g83;
    }
    char c = a1;
    int32_t * v1 = __errno_location(); // 0x40a8e2
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x40a912
    int64_t v3 = a1; // 0x40a917
    char v4 = c; // 0x40a917
    if ((*(char *)(v2 + (2 * a1 & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x40a90c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x40a908
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x40a919
    if (v4 == 45) {
        // 0x40a955
        return 4;
    }
    // 0x40a91e
    int64_t v6; // bp-64, 0x40a8b0
    int64_t * v7 = a2 == NULL ? &v6 : a2;
    int32_t v8 = __strtoul_internal((char *)a1, (char **)v7, a3, 0); // 0x40a926
    int64_t v9 = *v7; // 0x40a92b
    char v10; // 0x40a8b0
    int64_t v11; // 0x40a8b0
    int64_t v12; // 0x40a8b0
    int64_t v13; // 0x40a8b0
    int64_t v14; // 0x40a8b0
    int64_t v15; // 0x40a8b0
    int64_t v16; // 0x40a8b0
    if (v9 == a1) {
        // 0x40a988
        if (c == 0 || str == NULL) {
            // 0x40a955
            return 4;
        }
        char * found_char_pos = strchr(str, (int32_t)c); // 0x40a9a9
        v15 = 1;
        v12 = 0;
        v10 = c;
        if (found_char_pos == NULL) {
            // 0x40a955
            return 4;
        }
        goto lab_0x40a9b7;
    } else {
        int32_t v17 = *v1; // 0x40a936
        int64_t v18 = 0; // 0x40a93c
        if (v17 != 0) {
            // 0x40a970
            v18 = 1;
            if (v17 != 34) {
                // 0x40a955
                return 4;
            }
        }
        int64_t v19 = v8; // 0x40a926
        v14 = v19;
        v11 = v18;
        if (str == NULL) {
            goto lab_0x40a952;
        } else {
            char c2 = *(char *)v9; // 0x40a945
            v14 = v19;
            v11 = v18;
            if (c2 != 0) {
                char * found_char_pos2 = strchr(str, (int32_t)c2); // 0x40aab3
                v15 = v19;
                v12 = v18;
                v10 = c2;
                v16 = v19;
                v13 = v18;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40a9b7;
                } else {
                    goto lab_0x40aac5;
                }
            } else {
                goto lab_0x40a952;
            }
        }
    }
  lab_0x40a9b7:;
    int64_t v20 = 0x100000000 * v9 >> 32;
    unsigned char v21 = v10 - 69;
    int64_t v22 = 1024; // 0x40a9bf
    int64_t v23 = 1; // 0x40a9bf
    int64_t v24; // 0x40a8b0
    int64_t v25; // 0x40a8b0
    int64_t v26; // 0x40a8b0
    int64_t v27; // 0x40a8b0
    int64_t v28; // 0x40a8b0
    int64_t v29; // 0x40a8b0
    int64_t v30; // 0x40a8b0
    int64_t v31; // 0x40a8b0
    int64_t v32; // 0x40a8b0
    int64_t v33; // 0x40a8b0
    int64_t v34; // 0x40a8b0
    int64_t v35; // 0x40a8b0
    int64_t v36; // 0x40a8b0
    int64_t v37; // 0x40a8b0
    int64_t v38; // 0x40a8b0
    int64_t v39; // 0x40a8b0
    int64_t v40; // 0x40a8b0
    int64_t v41; // 0x40a8b0
    int64_t v42; // 0x40a8b0
    int64_t v43; // 0x40a8b0
    if (v21 < 48) {
        // 0x40a9c1
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v10 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40aa2a;
        } else {
            // 0x40a9d4
            v22 = 1024;
            v23 = 1;
            if (strchr(str, 48) == NULL) {
                goto lab_0x40aa2a;
            } else {
                // 0x40a9f0
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v20 + 1)) {
                    case 68: {
                        goto lab_0x40aa2a;
                    }
                    case 105: {
                        char v44 = *(char *)(v20 + 2); // 0x40ac59
                        v22 = 1024;
                        v23 = (v44 == 66 ? 2 : 1) + (int64_t)(v44 == 66);
                        goto lab_0x40aa2a;
                    }
                    default: {
                        // 0x40aa05
                        g86 = v21;
                        v22 = 1000;
                        v23 = 2;
                        v26 = 1024;
                        v38 = 1;
                        v25 = v15;
                        v24 = v12;
                        v39 = 1;
                        v27 = 1024;
                        v40 = 1;
                        v16 = v15;
                        v13 = v12;
                        v41 = 1;
                        v28 = 1024;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        switch (v10) {
                            case 69: {
                                goto lab_0x40abcb;
                            }
                            case 70: {
                                goto lab_0x40aac5;
                            }
                            case 71: {
                                goto lab_0x40ac03;
                            }
                            case 72: {
                                goto lab_0x40aac5;
                            }
                            case 73: {
                                goto lab_0x40aac5;
                            }
                            case 74: {
                                goto lab_0x40aac5;
                            }
                            case 75: {
                                goto lab_0x40aa8c;
                            }
                            case 76: {
                                goto lab_0x40aac5;
                            }
                            case 77: {
                                goto lab_0x40aa4e;
                            }
                            case 78: {
                                goto lab_0x40aac5;
                            }
                            case 79: {
                                goto lab_0x40aac5;
                            }
                            case 80: {
                                goto lab_0x40ab98;
                            }
                            case 81: {
                                goto lab_0x40aac5;
                            }
                            case 82: {
                                goto lab_0x40aac5;
                            }
                            case 83: {
                                goto lab_0x40aac5;
                            }
                            case 84: {
                                goto lab_0x40ab68;
                            }
                            case 85: {
                                goto lab_0x40aac5;
                            }
                            case 86: {
                                goto lab_0x40aac5;
                            }
                            case 87: {
                                goto lab_0x40aac5;
                            }
                            case 88: {
                                goto lab_0x40aac5;
                            }
                            case 89: {
                                goto lab_0x40ab36;
                            }
                            case 90: {
                                goto lab_0x40aafb;
                            }
                            case 91: {
                                goto lab_0x40aac5;
                            }
                            case 92: {
                                goto lab_0x40aac5;
                            }
                            case 93: {
                                goto lab_0x40aac5;
                            }
                            case 94: {
                                goto lab_0x40aac5;
                            }
                            case 95: {
                                goto lab_0x40aac5;
                            }
                            case 96: {
                                goto lab_0x40aac5;
                            }
                            case 97: {
                                goto lab_0x40aac5;
                            }
                            case 98: {
                                goto lab_0x40aadf;
                            }
                            case 99: {
                                goto lab_0x40aa68;
                            }
                            case 100: {
                                goto lab_0x40aac5;
                            }
                            case 101: {
                                goto lab_0x40aac5;
                            }
                            case 102: {
                                goto lab_0x40aac5;
                            }
                            case 103: {
                                goto lab_0x40ac03;
                            }
                            case 104: {
                                goto lab_0x40aac5;
                            }
                            case 105: {
                                goto lab_0x40aac5;
                            }
                            case 106: {
                                goto lab_0x40aac5;
                            }
                            case 107: {
                                goto lab_0x40aa8c;
                            }
                            case 108: {
                                goto lab_0x40aac5;
                            }
                            case 109: {
                                goto lab_0x40aa4e;
                            }
                            case 110: {
                                goto lab_0x40aac5;
                            }
                            case 111: {
                                goto lab_0x40aac5;
                            }
                            case 112: {
                                goto lab_0x40aac5;
                            }
                            case 113: {
                                goto lab_0x40aac5;
                            }
                            case 114: {
                                goto lab_0x40aac5;
                            }
                            case 115: {
                                goto lab_0x40aac5;
                            }
                            case 116: {
                                goto lab_0x40ab68;
                            }
                            default: {
                                goto lab_0x40aa2a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40aa2a;
    }
  lab_0x40a952:
    // 0x40a952
    *(int64_t *)a4 = v14;
    // 0x40a955
    return v11 & 0xffffffff;
  lab_0x40aa2a:
    // 0x40aa2a
    g87 = v10 - 66;
    v26 = v22;
    v38 = v23;
    v25 = v15;
    v24 = v12;
    v39 = v23;
    v27 = v22;
    v40 = v23;
    v16 = v15;
    v13 = v12;
    v41 = v23;
    v28 = v22;
    v42 = v23;
    v29 = v22;
    v43 = v23;
    v30 = v22;
    v34 = v23;
    v31 = v22;
    v35 = v23;
    v32 = v22;
    v36 = v23;
    v33 = v22;
    v37 = v23;
    int64_t v45; // 0x40a8b0
    switch (v10) {
        case 66: {
            // 0x40ac24
            v45 = v23;
            if (v15 >= 0x40000000000000) {
                goto lab_0x40aa97;
            } else {
                // 0x40ac31
                v25 = 1024 * v15;
                v24 = v12;
                v39 = v23;
                goto lab_0x40aa68;
            }
        }
        case 69: {
            goto lab_0x40abcb;
        }
        case 71: {
            goto lab_0x40ac03;
        }
        case 75: {
            goto lab_0x40aa8c;
        }
        case 77: {
            goto lab_0x40aa4e;
        }
        case 80: {
            goto lab_0x40ab98;
        }
        case 84: {
            goto lab_0x40ab68;
        }
        case 89: {
            goto lab_0x40ab36;
        }
        case 90: {
            goto lab_0x40aafb;
        }
        case 98: {
            goto lab_0x40aadf;
        }
        case 99: {
            goto lab_0x40aa68;
        }
        case 103: {
            goto lab_0x40ac03;
        }
        case 107: {
            goto lab_0x40aa8c;
        }
        case 109: {
            goto lab_0x40aa4e;
        }
        case 116: {
            goto lab_0x40ab68;
        }
        case 119: {
            // 0x40aad0
            v45 = v23;
            if (v15 < 0) {
                goto lab_0x40aa97;
            } else {
                // 0x40aad5
                v25 = 2 * v15;
                v24 = v12;
                v39 = v23;
                goto lab_0x40aa68;
            }
        }
        default: {
            goto lab_0x40aac5;
        }
    }
  lab_0x40abcb:;
    uint128_t v46 = (int128_t)v15 * (int128_t)v32; // 0x40abe3
    int64_t v47 = (int64_t)(v46 < 0xffffffffffffffff ? v46 : 0xffffffffffffffff);
    int64_t v48 = v46 > 0xffffffffffffffff ? 1 : 0;
    int32_t v49 = 5; // 0x40abef
    int64_t v50 = v47; // 0x40abf2
    int64_t v51 = v36; // 0x40abf2
    int64_t v52 = v48; // 0x40abf2
    int32_t v53 = v49; // 0x40abf2
    int64_t v54 = v48; // 0x40abf2
    while (v49 != 0) {
        // 0x40abe0
        v46 = (int128_t)v47 * (int128_t)v32;
        v47 = (int64_t)(v46 < 0xffffffffffffffff ? v46 : 0xffffffffffffffff);
        v48 = v46 > 0xffffffffffffffff ? 1 : v54;
        v49 = v53 - 1;
        v50 = v47;
        v51 = v36;
        v52 = v48;
        v53 = v49;
        v54 = v48;
    }
    goto lab_0x40ab24;
  lab_0x40ac03:
    // 0x40ac03
    v25 = -1;
    v24 = 1;
    v39 = v37;
    if ((int128_t)v33 * (int128_t)v15 <= 0xffffffffffffffff) {
        // 0x40ac0e
        int128_t v55; // 0x40ac09
        uint128_t v56; // 0x40ac09
        uint128_t v57 = (v56 & 0xffffffffffffffff) * v55; // 0x40ac0e
        v25 = -1;
        v24 = 1;
        int64_t v58; // 0x40a8b0
        v39 = v58;
        if (v57 <= 0xffffffffffffffff) {
            uint128_t v59 = (v57 & 0xffffffffffffffff) * v55; // 0x40ac13
            v25 = -1;
            v24 = 1;
            v39 = v58;
            if (v59 <= 0xffffffffffffffff) {
                // 0x40ac18
                v25 = v59;
                int64_t v60; // 0x40a8b0
                v24 = v60 & 0xffffffff;
                v39 = v58;
            }
        }
    }
    goto lab_0x40aa68;
  lab_0x40aa8c:;
    uint128_t v63 = (int128_t)v27 * (int128_t)v15; // 0x40aa8f
    v25 = v63;
    v24 = v12;
    v39 = v40;
    v45 = v40;
    if (v63 <= 0xffffffffffffffff) {
        goto lab_0x40aa68;
    } else {
        goto lab_0x40aa97;
    }
  lab_0x40aa4e:;
    int128_t v64 = v26; // 0x40aa54
    uint128_t v65 = v64 * (int128_t)v15; // 0x40aa54
    v45 = v38;
    if (v65 > 0xffffffffffffffff) {
        goto lab_0x40aa97;
    } else {
        uint128_t v66 = (v65 & 0xffffffffffffffff) * v64; // 0x40aa59
        v45 = v38;
        if (v66 > 0xffffffffffffffff) {
            goto lab_0x40aa97;
        } else {
            // 0x40aa5e
            v25 = v66;
            v24 = v12;
            v39 = v38;
            goto lab_0x40aa68;
        }
    }
  lab_0x40ab98:;
    uint128_t v67 = (int128_t)v15 * (int128_t)v31; // 0x40abab
    int64_t v68 = (int64_t)(v67 < 0xffffffffffffffff ? v67 : 0xffffffffffffffff);
    int64_t v69 = v67 > 0xffffffffffffffff ? 1 : 0;
    int32_t v70 = 4; // 0x40abb7
    v50 = v68;
    v51 = v35;
    v52 = v69;
    int32_t v71 = v70; // 0x40abba
    int64_t v72 = v69; // 0x40abba
    while (v70 != 0) {
        // 0x40aba8
        v67 = (int128_t)v68 * (int128_t)v31;
        v68 = (int64_t)(v67 < 0xffffffffffffffff ? v67 : 0xffffffffffffffff);
        v69 = v67 > 0xffffffffffffffff ? 1 : v72;
        v70 = v71 - 1;
        v50 = v68;
        v51 = v35;
        v52 = v69;
        v71 = v70;
        v72 = v69;
    }
    goto lab_0x40ab24;
  lab_0x40ab68:;
    uint128_t v73 = (int128_t)v15 * (int128_t)v30; // 0x40ab7b
    int64_t v74 = (int64_t)(v73 < 0xffffffffffffffff ? v73 : 0xffffffffffffffff);
    int64_t v75 = v73 > 0xffffffffffffffff ? 1 : 0;
    int32_t v76 = 3; // 0x40ab87
    v50 = v74;
    v51 = v34;
    v52 = v75;
    int32_t v77 = v76; // 0x40ab8a
    int64_t v78 = v75; // 0x40ab8a
    while (v76 != 0) {
        // 0x40ab78
        v73 = (int128_t)v74 * (int128_t)v30;
        v74 = (int64_t)(v73 < 0xffffffffffffffff ? v73 : 0xffffffffffffffff);
        v75 = v73 > 0xffffffffffffffff ? 1 : v78;
        v76 = v77 - 1;
        v50 = v74;
        v51 = v34;
        v52 = v75;
        v77 = v76;
        v78 = v75;
    }
    goto lab_0x40ab24;
  lab_0x40ab36:;
    uint128_t v79 = (int128_t)v15 * (int128_t)v29; // 0x40ab4b
    int64_t v80 = (int64_t)(v79 < 0xffffffffffffffff ? v79 : 0xffffffffffffffff);
    int64_t v81 = v79 > 0xffffffffffffffff ? 1 : 0;
    int32_t v82 = 7; // 0x40ab57
    v50 = v80;
    v51 = v43;
    v52 = v81;
    int32_t v83 = v82; // 0x40ab5a
    int64_t v84 = v81; // 0x40ab5a
    while (v82 != 0) {
        // 0x40ab48
        v79 = (int128_t)v80 * (int128_t)v29;
        v80 = (int64_t)(v79 < 0xffffffffffffffff ? v79 : 0xffffffffffffffff);
        v81 = v79 > 0xffffffffffffffff ? 1 : v84;
        v82 = v83 - 1;
        v50 = v80;
        v51 = v43;
        v52 = v81;
        v83 = v82;
        v84 = v81;
    }
    goto lab_0x40ab24;
  lab_0x40aafb:;
    uint128_t v85 = (int128_t)v15 * (int128_t)v28; // 0x40ab13
    int64_t v86 = (int64_t)(v85 < 0xffffffffffffffff ? v85 : 0xffffffffffffffff);
    int64_t v87 = v85 > 0xffffffffffffffff ? 1 : 0;
    int32_t v88 = 6; // 0x40ab1f
    int32_t v89 = v88; // 0x40ab22
    int64_t v90 = v87; // 0x40ab22
    v50 = v86;
    v51 = v42;
    v52 = v87;
    while (v88 != 0) {
        // 0x40ab10
        v85 = (int128_t)v86 * (int128_t)v28;
        v86 = (int64_t)(v85 < 0xffffffffffffffff ? v85 : 0xffffffffffffffff);
        v87 = v85 > 0xffffffffffffffff ? 1 : v90;
        v88 = v89 - 1;
        v89 = v88;
        v90 = v87;
        v50 = v86;
        v51 = v42;
        v52 = v87;
    }
    goto lab_0x40ab24;
  lab_0x40aadf:
    // 0x40aadf
    v45 = v41;
    if (v15 >= 0x80000000000000) {
        goto lab_0x40aa97;
    } else {
        // 0x40aae8
        v25 = 512 * v15;
        v24 = v12;
        v39 = v41;
        goto lab_0x40aa68;
    }
  lab_0x40aa68:;
    int64_t v61 = v24;
    int64_t v62 = (0x100000000 * v39 >> 32) + v20; // 0x40aa6d
    *v7 = v62;
    v14 = v25;
    v11 = (*(char *)v62 != 0 ? v61 | 2 : v61) & 0xffffffff;
    goto lab_0x40a952;
  lab_0x40aac5:
    // 0x40aac5
    *(int64_t *)a4 = v16;
    // 0x40a955
    return (v13 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x40aa97:
    // 0x40aa97
    v25 = -1;
    v24 = 1;
    v39 = v45;
    goto lab_0x40aa68;
  lab_0x40ab24:
    // 0x40ab24
    v25 = v50;
    v24 = (v52 | v12) & 0xffffffff;
    v39 = v51;
    goto lab_0x40aa68;
}
// Address range: 0x40acf0 - 0x40ad7f
int64_t function_40acf0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40acf0
    int64_t v1; // 0x40acf0
    if ((char)v1 != 0) {
        // 0x40ad0f
        int128_t v2; // 0x40acf0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 16; // bp-208, 0x40ad53
    return function_40d650((int64_t)a1, a2, &v3);
}
// Address range: 0x40ad80 - 0x40adc0
int64_t function_40ad80(int32_t fd) {
    // 0x40ad80
    if (fd < 0) {
        // 0x40ad84
        int64_t result; // 0x40ad80
        return result;
    }
    int32_t result2 = close(fd); // 0x40ad8c
    if (result2 == 0) {
        // 0x40ad95
        return result2;
    }
    // 0x40ad9a
    __assert_fail("! close_fail", "lib/chdir-long.c", 64, "cdb_free");
    return &g83;
}
// Address range: 0x40adc0 - 0x40adf7
int64_t function_40adc0(int32_t * a1) {
    // 0x40adc0
    int64_t path; // 0x40adc0
    int32_t fd = path;
    uint32_t v1 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x40add2
    int64_t result = 0xffffffff; // 0x40add9
    if (v1 >= 0) {
        // 0x40addb
        function_40ad80(fd);
        *a1 = v1;
        result = 0;
    }
    // 0x40ade8
    return result;
}
// Address range: 0x40ae00 - 0x40b070
int64_t function_40ae00(int64_t a1) {
    char * path = (char *)a1; // 0x40ae0f
    uint32_t result = chdir(path); // 0x40ae0f
    if (result == 0) {
        // 0x40af46
        return 0;
    }
    int32_t * v1 = __errno_location(); // 0x40ae1e
    if (*v1 != 36) {
        // 0x40af46
        return result;
    }
    int32_t len = strlen(path); // 0x40ae32
    int32_t fd = -100; // bp-44, 0x40ae37
    if (len == 0) {
        // 0x40b052
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g83;
    }
    if (len < 0x1000) {
        // 0x40b039
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40b052
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g83;
    }
    int64_t v2 = len; // 0x40ae32
    int32_t ini_seg_bytes = strspn(path, "/"); // 0x40ae5f
    int64_t v3; // 0x40ae00
    if (ini_seg_bytes == 2) {
        int64_t v4 = function_40c480(a1 + 3, 47, v2 - 3); // 0x40af85
        if (v4 == 0) {
            // 0x40af46
            return 0xffffffff;
        }
        char * v5 = (char *)v4; // 0x40af92
        *v5 = 0;
        int64_t v6 = function_40adc0(&fd); // 0x40af9d
        *v5 = 47;
        if ((int32_t)v6 != 0) {
            goto lab_0x40af30;
        } else {
            int64_t str = v4 + 1; // 0x40afa9
            v3 = str + (int64_t)strspn((char *)str, "/");
            goto lab_0x40ae7d;
        }
    } else {
        // 0x40ae71
        v3 = a1;
        if (ini_seg_bytes != 0) {
            // 0x40af58
            if ((int32_t)function_40adc0(&fd) != 0) {
                goto lab_0x40af30;
            } else {
                // 0x40af6b
                v3 = (int64_t)ini_seg_bytes + a1;
                goto lab_0x40ae7d;
            }
        } else {
            goto lab_0x40ae7d;
        }
    }
  lab_0x40af30:
    // 0x40af30
    function_40ad80(fd);
    // 0x40af46
    return 0xffffffff;
  lab_0x40ae7d:
    // 0x40ae7d
    if (*(char *)v3 == 47) {
      lab_0x40b007:
        // 0x40b007
        __assert_fail("*dir != '/'", "lib/chdir-long.c", 162, "chdir_long");
        // 0x40b020
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40b039
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40b052
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g83;
    }
    uint64_t v7 = v2 + a1; // 0x40ae87
    if (v7 < v3) {
        // 0x40b020
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40b039
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40b052
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g83;
    }
    int64_t v8 = v3; // 0x40aefd
    int64_t v9 = v3; // 0x40aefd
    if (v7 - v3 > 4095) {
        int64_t * v10 = memrchr((int64_t *)v8, 47, 0x1000); // 0x40aea5
        while (v10 != NULL) {
            int64_t v11 = (int64_t)v10; // 0x40aea5
            *(char *)v10 = 0;
            if (v11 - v8 > 4095) {
                // 0x40afee
                __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 179, "chdir_long");
                goto lab_0x40b007;
            }
            int64_t v12 = function_40adc0(&fd); // 0x40aed0
            *(char *)v10 = 47;
            if ((int32_t)v12 != 0) {
                goto lab_0x40af30;
            }
            int64_t str2 = v11 + 1; // 0x40aedc
            int64_t v13 = str2 + (int64_t)strspn((char *)str2, "/"); // 0x40aeed
            v8 = v13;
            v9 = v13;
            if (v7 - v13 <= 4095) {
                goto lab_0x40aeff;
            }
            v10 = memrchr((int64_t *)v8, 47, 0x1000);
        }
        // 0x40afc8
        *v1 = 36;
        // 0x40af46
        return 0xffffffff;
    }
  lab_0x40aeff:
    // 0x40aeff
    if (v7 > v9) {
        // 0x40af04
        if ((int32_t)function_40adc0(&fd) != 0) {
            goto lab_0x40af30;
        } else {
            goto lab_0x40af15;
        }
    } else {
        goto lab_0x40af15;
    }
  lab_0x40af15:
    // 0x40af15
    if (fchdir(fd) == 0) {
        // 0x40afe0
        function_40ad80(fd);
        // 0x40af46
        return 0;
    }
    goto lab_0x40af30;
}
// Address range: 0x40b070 - 0x40b15b
int64_t function_40b070(int64_t path, int64_t a2, int64_t * a3) {
    // 0x40b070
    int64_t v1; // 0x40b070
    int64_t v2 = v1;
    int32_t v3 = g32; // 0x40b081
    int64_t name; // bp-424, 0x40b070
    if (v3 < 0) {
        // 0x40b0c0
        if (uname((struct utsname *)&name) == 0) {
            // 0x40b130
            int64_t v4; // bp-294, 0x40b070
            if (strverscmp((char *)&v4, "2.6.36") < 0) {
                // 0x40b0cc
                g32 = 0;
                goto lab_0x40b0d6;
            } else {
                // 0x40b145
                g32 = 1;
                goto lab_0x40b090;
            }
        } else {
            // 0x40b0cc
            g32 = 0;
            goto lab_0x40b0d6;
        }
    } else {
        if (v3 == 0) {
            goto lab_0x40b0d6;
        } else {
            goto lab_0x40b090;
        }
    }
  lab_0x40b0d6:
    // 0x40b0d6
    if (statfs((char *)path, (struct statfs *)&name) < 0) {
        // 0x40b123
        return 0xffffffff;
    }
    goto lab_0x40b0ea;
  lab_0x40b090:
    // 0x40b090
    if (statvfs((char *)path, (struct statvfs *)&name) < 0) {
        // 0x40b123
        int64_t v8; // 0x40b070
        int64_t result = v8;
        return result;
    }
    int64_t v6 = v2 != 0 ? v2 : name; // 0x40b070
    goto lab_0x40b0ea;
  lab_0x40b0ea:;
    int64_t v5 = (int64_t)a3;
    *a3 = v6;
    *(char *)(v5 + 32) = (char)(v1 >> 63);
    int32_t v7; // 0x40b070
    *(int64_t *)(v5 + 48) = (int64_t)v7;
    // 0x40b123
    return 0;
}
// Address range: 0x40b160 - 0x40b622
int64_t function_40b160(int32_t a1, int32_t a2) {
    // 0x40b160
    int32_t size; // 0x40b160
    int32_t v1; // 0x40b160
    int32_t v2; // 0x40b160
    if (a2 != 0) {
        // 0x40b1c0
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x40b192;
        } else {
            goto lab_0x40b1dc;
        }
    } else {
        // 0x40b180
        size = 0x1000;
        if (a1 != 0) {
            // 0x40b580
            *__errno_location() = 22;
            // 0x40b1a6
            return 0;
        }
        goto lab_0x40b192;
    }
  lab_0x40b520:;
    // 0x40b520
    int32_t v3; // 0x40b51a
    int64_t v4 = v3; // 0x40b522
    int64_t v5; // 0x40b160
    int64_t dirp2 = v5; // 0x40b522
    int32_t * v6; // 0x40b266
    if (v3 != 0) {
        goto lab_0x40b531;
    } else {
        // 0x40b524
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x40b531;
    }
  lab_0x40b332:;
    // 0x40b332
    int64_t v7; // 0x40b160
    int64_t v8 = v7;
    int64_t v9; // 0x40b160
    int64_t v10 = v9 + 19; // 0x40b332
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x40b160
    int64_t v12; // 0x40b160
    int32_t v13; // 0x40b160
    int32_t fd; // 0x40b282
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x40b365
        if (v11 == v12) {
            // break -> 0x40b380
            goto lab_0x40b380;
        }
    }
    int64_t v14 = v8; // 0x40b160
    goto lab_0x40b2f0_2;
  lab_0x40b5fe_2:
    // 0x40b5fe
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x40b531;
  lab_0x40b192:;
    int64_t * mem = malloc(size); // 0x40b197
    int32_t v41 = (int64_t)mem; // 0x40b19c
    int32_t result = v41; // 0x40b1a4
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x40b1a6
        return result;
    }
    goto lab_0x40b1dc;
  lab_0x40b1dc:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x40b1e1
    int64_t v46 = v45 - 1; // 0x40b1f0
    *(char *)v46 = 0;
    int64_t v47; // 0x40b160
    int64_t v48; // 0x40b160
    int32_t * v49; // 0x40b160
    int64_t v50; // 0x40b160
    int64_t v33; // 0x40b160
    int64_t v40; // 0x40b160
    int64_t v51; // 0x40b160
    int32_t v38; // 0x40b160
    int32_t v52; // 0x40b160
    int32_t v53; // 0x40b160
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x40b558;
    } else {
        // 0x40b206
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x40b558;
        } else {
            // 0x40b231
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x40b478;
            } else {
                // 0x40b266
                v6 = __errno_location();
                int32_t v54 = v1; // 0x40b273
                int32_t v55 = v42; // 0x40b273
                int64_t v56 = v11; // 0x40b273
                int64_t v57 = v46; // 0x40b273
                int64_t v58 = 0; // 0x40b273
                int32_t fd2 = -100; // 0x40b273
                int64_t dirp3; // 0x40b160
                while (true) {
                    // 0x40b276
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x40b5a7
                        break;
                    }
                    // 0x40b292
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x40b5b8
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x40b59d;
                        } else {
                            // 0x40b5c1
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x40b59d;
                        }
                    }
                    // 0x40b2ab
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x40b2b0
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x40b599
                            v40 = (int64_t)*v6;
                            goto lab_0x40b59d;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x40b2d7
                    if (dirp == NULL) {
                        // 0x40b599
                        v40 = (int64_t)*v6;
                        goto lab_0x40b59d;
                    }
                    // 0x40b2e8
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x40b2f0_2:;
                        int64_t v15 = v14; // 0x40b160
                        int64_t v16; // 0x40b160
                        int64_t v17; // 0x40b160
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x40b2fb
                            int64_t v20; // 0x40b160
                            int64_t v21; // 0x40b160
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x40b4d0
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x40b520;
                                }
                                // 0x40b4dd
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x40b4e8
                                if (v23 == NULL) {
                                    // 0x40b51a
                                    v3 = *v6;
                                    goto lab_0x40b520;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x40b332;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x40b313
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x40b500
                            if (*(char *)v28 != 0) {
                                // 0x40b50a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x40b313
                                    break;
                                }
                            }
                            // 0x40b2f0
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x40b332;
                        } else {
                            // 0x40b318
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x40b32d
                            int64_t v32; // 0x40b160
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x40b2f0
                                v14 = v31;
                                goto lab_0x40b2f0_2;
                            } else {
                                goto lab_0x40b332;
                            }
                        }
                    }
                  lab_0x40b380:;
                    int64_t v61 = v38; // 0x40b388
                    uint64_t v62 = v57 - v61; // 0x40b388
                    int32_t len = strlen(str); // 0x40b38d
                    uint64_t v63 = (int64_t)len; // 0x40b38d
                    int32_t v64 = v60; // 0x40b398
                    int32_t v65 = v38; // 0x40b398
                    int64_t dest_mem = v57; // 0x40b398
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x40b610
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x40b531;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x40b3a6
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x40b3b1
                        uint64_t v68 = v67 + v66; // 0x40b3b5
                        if (v68 < v66) {
                            goto lab_0x40b5fe_2;
                        }
                        // 0x40b3c8
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x40b3d0
                        if (mem2 == NULL) {
                            goto lab_0x40b5fe_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x40b3d0
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x40b42d
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x40b45e
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x40b560;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x40b478;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x40b5a7
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x40b539;
                } else {
                    goto lab_0x40b531;
                }
            }
        }
    }
  lab_0x40b558:
    // 0x40b558
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x40b560;
  lab_0x40b560:;
    int64_t v77 = (int64_t)*v49; // 0x40b566
    int64_t v34 = v77; // 0x40b56a
    int32_t * v35 = v49; // 0x40b56a
    int32_t * v36 = v49; // 0x40b56a
    int32_t v37 = v53; // 0x40b56a
    int64_t v39 = v77; // 0x40b56a
    if (a1 != 0) {
        goto lab_0x40b541;
    } else {
        goto lab_0x40b56c;
    }
  lab_0x40b541:
    // 0x40b541
    *v35 = (int32_t)v34;
    // 0x40b1a6
    return 0;
  lab_0x40b56c:
    // 0x40b56c
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x40b541;
  lab_0x40b478:
    // 0x40b478
    if (v51 == v47 - 1 + v48) {
        // 0x40b5e7
        int64_t v78; // 0x40b160
        int64_t v79 = v78 - 1; // 0x40b5ec
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x40b4a2
    int32_t v81 = v50 - v51; // 0x40b4a2
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x40b4ad
    if (a2 == 0) {
        // 0x40b5d0
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x40b1a6
    return result2;
  lab_0x40b539:
    // 0x40b539
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x40b56c;
    } else {
        goto lab_0x40b541;
    }
  lab_0x40b531:
    // 0x40b531
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x40b539;
  lab_0x40b59d:
    // 0x40b59d
    close(fd);
    v33 = v40;
    goto lab_0x40b539;
}
// Address range: 0x40b630 - 0x40b70f
int64_t function_40b630(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40b63c
    uint32_t v2 = *v1; // 0x40b63c
    int64_t v3 = a2 & 0xffffffff; // 0x40b641
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40b644
    uint64_t v5 = (int64_t)*v4; // 0x40b644
    int64_t v6; // 0x40b6b2
    if (v3 <= v5) {
      lab_0x40b6ac_2:
        // 0x40b6ac
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40b632
    int64_t v8 = v2; // 0x40b630
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40b6ac
        goto lab_0x40b6ac_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40b668
    int64_t v17; // 0x40b676
    int64_t * v18; // 0x40b690
    int64_t * v19; // 0x40b693
    int64_t v20; // 0x40b69e
    int64_t v21; // 0x40b676
    while ((v16 & 0xffffffff) > v10) {
        // 0x40b673
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40b690
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40b6a7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40b6ac
            goto lab_0x40b6ac_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40b6ac
            goto lab_0x40b6ac_2;
        }
        // 0x40b662
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40b6eb
    int64_t * v23 = (int64_t *)v22; // 0x40b6f0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40b6f3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40b6f0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40b707
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40b65d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40b6ac
            goto lab_0x40b6ac_2;
        }
        // 0x40b662
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40b673
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40b690
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40b6a7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40b6ac
                goto lab_0x40b6ac_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40b6ac
                goto lab_0x40b6ac_2;
            }
            // 0x40b662
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40b6d0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40b6f0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40b707
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40b6ac
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40b710 - 0x40bd2c
int64_t function_40b710(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40b72f
    int64_t v2 = *v1; // 0x40b72f
    char * str2 = (char *)v2; // 0x40b73c
    char c = *str2; // 0x40b73c
    int64_t v3 = v2; // 0x40b768
    int64_t v4 = 0; // 0x40b710
    int32_t v5; // 0x40b710
    int64_t v6; // 0x40b710
    int64_t v7; // 0x40b710
    int64_t v8; // 0x40b710
    int64_t v9; // 0x40b710
    int64_t v10; // 0x40b710
    int64_t v11; // 0x40b710
    int64_t v12; // 0x40b710
    int64_t v13; // 0x40b710
    int64_t str3; // 0x40b710
    int64_t v14; // 0x40b710
    int64_t v15; // 0x40b710
    int64_t v16; // 0x40b710
    int64_t v17; // 0x40b710
    int32_t v18; // 0x40b710
    int32_t v19; // 0x40b710
    int32_t v20; // 0x40b710
    int32_t v21; // 0x40b710
    int32_t v22; // 0x40b710
    int32_t v23; // 0x40b710
    int32_t v24; // 0x40b710
    int32_t v25; // 0x40b710
    int32_t v26; // 0x40b710
    int32_t v27; // 0x40b710
    int32_t v28; // 0x40b710
    int32_t v29; // 0x40b710
    int64_t nmemb; // 0x40b710
    int64_t v30; // 0x40b710
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40b76c
            while (v31 != 0 == (v31 != 61)) {
                // 0x40b768
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40b778
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40b77e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40b748
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40b7ac
                int64_t v34; // 0x40b710
                int64_t v35; // 0x40b710
                if (strncmp(str, str2, n) == 0) {
                    // 0x40b7b5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40b930;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40b7c6
                int64_t v37 = *(int64_t *)v36; // 0x40b7ca
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40b7a0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40b7b5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40b930;
                        }
                    }
                    // 0x40b7c6
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
                  lab_0x40b816:
                    // 0x40b816
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
                        goto lab_0x40b870;
                    } else {
                        if (v11 == 0) {
                            // 0x40b9e0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40b870;
                        } else {
                            if (v39 == 0) {
                                // 0x40b990
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40b83a;
                                } else {
                                    // 0x40b99c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40b83a;
                                    } else {
                                        // 0x40b9aa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40b83a;
                                        } else {
                                            goto lab_0x40b870;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40b83a;
                            }
                        }
                    }
                }
              lab_0x40b881:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40ba56
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40bc02
                            flockfile(g40);
                            int64_t v41 = *v1; // 0x40bc22
                            __fprintf_chk(g40, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40bc6f
                            int64_t v43 = (int64_t)g40;
                            int64_t v44 = v43; // 0x40bc89
                            int64_t v45; // 0x40bc8b
                            if (*(char *)v42 != 0) {
                                // 0x40bc8b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g40;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40bc83
                            while (v17 + nmemb != v42) {
                                // 0x40bc85
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40bc8b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g40;
                                }
                                // 0x40bc78
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40bcb0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g40);
                            v40 = *v1;
                        } else {
                            // 0x40ba64
                            __fprintf_chk(g40, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40bbbf
                        free((int64_t *)v17);
                    }
                    // 0x40bab9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40bad0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40b97e
                    return 63;
                }
                // 0x40b8a0
                v5 = v39;
                if (v13 != 0) {
                    // 0x40b924
                    v35 = v13;
                    v34 = v25;
                  lab_0x40b930:;
                    int32_t * v49 = (int32_t *)a7; // 0x40b940
                    uint32_t v50 = *v49; // 0x40b940
                    int64_t v51 = v50; // 0x40b940
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40b94a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40b953
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40bb7f
                                __fprintf_chk(g40, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40bb2a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40b97e
                            return 63;
                        }
                        // 0x40b9c8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40bcdf
                                    __fprintf_chk(g40, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40bbdd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40bbf0
                                // 0x40b97e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40baee
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40bb02
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40b96b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40b96e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40b972
                    int64_t result = v59; // 0x40b978
                    if (v58 != 0) {
                        // 0x40b97a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40b97e
                    return result;
                }
            } else {
                // 0x40b77e
                v5 = v32;
            }
            // break -> 0x40b8a5
            break;
        }
    }
    // 0x40b8a5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40b8bd
        if (*(char *)(v60 + 1) != 45) {
            // 0x40b8c7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40b97e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40ba09
        __fprintf_chk(g40, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40b8f6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40b906
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40b870:
    // 0x40b870
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40b870
    int64_t v63 = *(int64_t *)v62; // 0x40b874
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40b881
        goto lab_0x40b881;
    }
    goto lab_0x40b816;
  lab_0x40b83a:
    // 0x40b83a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40b710
    int32_t v65; // 0x40b710
    int32_t v66; // 0x40b710
    if (v27 != 0) {
        goto lab_0x40b870;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40b9f0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40b870;
            } else {
                goto lab_0x40b861;
            }
        } else {
            // 0x40b855
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40bb4c
                int64_t v67 = (int64_t)mem; // 0x40bb4c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40b870;
                } else {
                    // 0x40bb5f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40b861;
                }
            } else {
                goto lab_0x40b861;
            }
        }
    }
  lab_0x40b861:
    // 0x40b861
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40b870;
}
// Address range: 0x40bd30 - 0x40c2f6
int64_t function_40bd30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40bd51
    if (v3 < 1) {
        // 0x40bf0e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40bd4d
    int32_t v5 = *(int32_t *)a7; // 0x40bd59
    uint64_t v6 = a1 & 0xffffffff; // 0x40bd5b
    int64_t v7 = v2; // 0x40bd60
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40bd63
    *v8 = 0;
    int64_t v9; // 0x40bd30
    int64_t v10; // 0x40bd30
    int64_t v11; // 0x40bd30
    int64_t v12; // 0x40bd30
    int64_t str; // 0x40bd30
    int64_t v13; // 0x40bd30
    int64_t v14; // 0x40bd30
    int64_t v15; // 0x40bd30
    int64_t v16; // 0x40bd30
    int64_t v17; // 0x40bd30
    int32_t v18; // 0x40bd30
    char v19; // 0x40bd30
    if (v5 == 0) {
        // 0x40bf48
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40bd7a;
    } else {
        // 0x40bd73
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40bdc0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40bdc3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40be88;
            } else {
                int64_t v22 = v7 + 1; // 0x40bdd6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40bde6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40be9c;
                } else {
                    goto lab_0x40bdf8;
                }
            }
        } else {
            goto lab_0x40bd7a;
        }
    }
  lab_0x40bd7a:
    // 0x40bd7a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40bd80
    *v24 = 0;
    int64_t v25; // 0x40bd30
    int64_t v26; // 0x40bd30
    int64_t v27; // 0x40bd30
    switch (*(char *)&v2) {
        case 45: {
            // 0x40be70
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40be7d;
        }
        case 43: {
            // 0x40c180
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40be7d;
        }
        default: {
            // 0x40bd9c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40c0ff
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40c218
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40be7d;
                } else {
                    // 0x40c10d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40bdaa;
                }
            } else {
                goto lab_0x40bdaa;
            }
        }
    }
  lab_0x40be88:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40be8f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40bdf8;
    } else {
        goto lab_0x40be9c;
    }
  lab_0x40bdaa:
    // 0x40bdaa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40be7d;
  lab_0x40be7d:
    // 0x40be7d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40be88;
  lab_0x40bdf8:;
    uint32_t v30 = *(int32_t *)a7; // 0x40bdf8
    int64_t v31 = v30; // 0x40bdf8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40bdfa
    if ((int64_t)*v32 > v31) {
        // 0x40bdff
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40be02
    if (*v33 > v30) {
        // 0x40be07
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40be0a
    int64_t v35 = v31; // 0x40be0e
    int64_t v36 = v15; // 0x40be0e
    int64_t v37; // 0x40bd30
    int64_t v38; // 0x40bd30
    int64_t v39; // 0x40bd30
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40bf78
        int64_t v41 = v40; // 0x40bf78
        v2 = v41;
        int64_t v42; // 0x40bd30
        if (*v33 == v40) {
            // 0x40c160
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40c168
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40bf84
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40bf88
                function_40b630(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40bf98
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40bfa1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40bfaa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40bfc1
            int64_t v47 = v45 & 0xffffffff; // 0x40bfc5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40bfce
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40bfd4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40bfd6;
                }
            }
            int64_t v48 = v47 + 1; // 0x40bfb0
            int64_t v49 = v48 & 0xffffffff; // 0x40bfb0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40bfc1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40bfce
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40bfd4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40bfd6;
                    }
                }
                // 0x40bfb0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40c178
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40bfd6;
    } else {
        goto lab_0x40be14;
    }
  lab_0x40be9c:
    // 0x40be9c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40be9f
    int64_t v51 = v12; // 0x40be9f
    int64_t v52 = v14; // 0x40be9f
    if (*(char *)v10 == 0) {
        goto lab_0x40bdf8;
    } else {
        goto lab_0x40bea5;
    }
  lab_0x40be14:;
    int32_t v53 = v35; // 0x40be14
    int64_t v54; // 0x40bd30
    int64_t v55; // 0x40bd30
    int64_t v56; // 0x40bd30
    int64_t v57; // 0x40bd30
    int64_t v58; // 0x40bd30
    int64_t v59; // 0x40bd30
    char * v60; // 0x40bd30
    int64_t v61; // 0x40bd30
    int64_t v62; // 0x40be29
    int64_t v63; // 0x40bd30
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40bf63
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40bf66;
    } else {
        // 0x40be1c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40bd30
        int64_t v66 = v65 ? -1 : 1; // 0x40be30
        int64_t v67 = (int64_t)"--"; // 0x40bd30
        int64_t v68 = v62; // 0x40bd30
        int64_t v69 = 3; // 0x40be30
        unsigned char v70 = *(char *)v68; // 0x40be30
        char v71 = *(char *)v67; // 0x40be30
        char v72 = v71; // 0x40be30
        bool v73 = false; // 0x40be30
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
            // 0x40bf20
            if (*(char *)v62 == 45) {
                // 0x40bfe0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40bfe0
                if (c == 0) {
                    goto lab_0x40bf2a;
                } else {
                    // 0x40bfed
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40c070;
                    } else {
                        if (c == 45) {
                            // 0x40c253
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40c0c5;
                        } else {
                            // 0x40bffe
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40c070;
                            } else {
                                // 0x40c003
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40c024;
                                } else {
                                    // 0x40c00a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40c070;
                                    } else {
                                        goto lab_0x40c024;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40bf2a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40be40
            v2 = v75;
            int32_t v76 = *v32; // 0x40be43
            int64_t v77 = v35 + 1; // 0x40be46
            int32_t v78 = v77; // 0x40be49
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40c1b0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40be57
                    function_40b630(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40be65
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40bf66;
        }
    }
  lab_0x40bea5:;
    // 0x40bea5
    int64_t v79; // bp-104, 0x40bd30
    int64_t v80 = &v79; // 0x40bd3a
    int64_t v81 = v50 + 1; // 0x40bea5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40beac
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40beb1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40beb5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40beb9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40bec1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40bec6
    int32_t c2 = v84; // 0x40bec6
    char * found_char_pos = strchr(str2, c2); // 0x40bec6
    int64_t v87 = *v82; // 0x40becb
    v2 = v87;
    int64_t v88 = *v85; // 0x40bed5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40bee0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40c1d0
            __fprintf_chk(g40, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40c19d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40bf0e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40bec6
    char v91 = *(char *)(v90 + 1); // 0x40befb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40beb5
        if (v91 != 58) {
            // 0x40bf0e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40c124
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40c228
                *v8 = 0;
            } else {
                // 0x40c20c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40c14e
            *v83 = 0;
            // 0x40bf0e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40c12e
        if (v93 != 0) {
            // 0x40c1c0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40c14e
            *v83 = 0;
            // 0x40bf0e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40c141
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40c14e
            *v83 = 0;
            // 0x40bf0e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40c28a
            __fprintf_chk(g40, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40c23a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40c241
        // 0x40c14e
        *v83 = 0;
        // 0x40bf0e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40c099
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40c09b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40c2c0
                __fprintf_chk(g40, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40c271
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40c278
            // 0x40bf0e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40c0a6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40c0aa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40c0c5;
  lab_0x40bfd6:
    // 0x40bfd6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40be14;
  lab_0x40c0c5:;
    int64_t v99 = function_40b710(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40c0e3
    // 0x40bf0e
    return v99 & 0xffffffff;
  lab_0x40bf66:;
    int32_t v100 = v55; // 0x40bf66
    if (v100 != (int32_t)v59) {
        // 0x40bf6a
        *(int32_t *)a7 = v100;
    }
    // 0x40bf0e
    return 0xffffffff;
  lab_0x40bf2a:
    // 0x40bf2a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40bf31
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40bf0e
    return v99 & 0xffffffff;
  lab_0x40c070:
    // 0x40c070
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40bea5;
  lab_0x40c024:
    // 0x40c024
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40b710(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40c04a
    if ((int32_t)v101 != -1) {
        // 0x40bf0e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40c05f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40c070;
}
// Address range: 0x40c300 - 0x40c356
int64_t function_40c300(int64_t a1) {
    // 0x40c300
    *(int32_t *)&g76 = g35;
    *(int32_t *)&g77 = g34;
    int64_t v1; // 0x40c300
    int64_t result = function_40bd30(v1, v1, v1, v1, v1, v1, &g76, a1 & 0xffffffff); // 0x40c326
    g35 = *(int32_t *)&g76;
    g82 = g79;
    *(int32_t *)&g33 = g78;
    return result;
}
// Address range: 0x40c360 - 0x40c378
int64_t function_40c360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40c360
    return function_40c300(1);
}
// Address range: 0x40c380 - 0x40c393
int64_t function_40c380(int64_t a1, int64_t a2, char * a3, char (**a4)[4], int64_t * a5, int64_t a6) {
    // 0x40c380
    return function_40c300(0);
}
// Address range: 0x40c3a0 - 0x40c3b5
int64_t function_40c3a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40c3a0
    return function_40bd30(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40c3c0 - 0x40c3d6
int64_t function_40c3c0(void) {
    // 0x40c3c0
    return function_40c300(0);
}
// Address range: 0x40c3e0 - 0x40c3f8
int64_t function_40c3e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40c3e0
    return function_40bd30(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40c400 - 0x40c47a
int64_t function_40c400(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40c40b
    int64_t v2 = (int64_t)&g14; // 0x40c40b
    int64_t * pwc; // 0x40c400
    int64_t v3; // 0x40c400
    int64_t n; // 0x40c400
    if (a2 == 0) {
        goto lab_0x40c452;
    } else {
        // 0x40c40d
        if (a3 == 0) {
            // 0x40c438
            return -2;
        }
        // 0x40c419
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40c452;
        } else {
            goto lab_0x40c424;
        }
    }
  lab_0x40c452:
    // 0x40c452
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40c400
    pwc = &v4;
    goto lab_0x40c424;
  lab_0x40c424:;
    char * wstr = (char *)v3; // 0x40c42a
    int64_t ps; // 0x40c400
    int32_t v5 = mbrtowc((int32_t *)pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40c42a
    int64_t result = v5; // 0x40c42a
    if (v5 < 0xfffffffe) {
        // 0x40c438
        return result;
    }
    int64_t result2 = result; // 0x40c469
    if ((char)function_40dbe0(0, v3) == 0) {
        // 0x40c46b
        *(int32_t *)pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40c438
    return result2;
}
// Address range: 0x40c480 - 0x40c584
int64_t function_40c480(int64_t result, uint64_t a2, int64_t a3) {
    // 0x40c480
    if (a3 == 0) {
        // 0x40c4b9
        return 0;
    }
    int64_t v1 = result; // 0x40c48c
    int64_t v2 = a3; // 0x40c48c
    int64_t result2; // 0x40c480
    if (result % 8 != 0) {
        char v3 = a2; // 0x40c48e
        int64_t v4 = result; // 0x40c491
        if ((char)result == v3) {
            // 0x40c4b9
            return result;
        }
        int64_t v5 = a3; // 0x40c491
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40c4a0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40c4c0;
            }
            // 0x40c4a6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40c4b9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40c4b9
        return result2;
    }
  lab_0x40c4c0:;
    int64_t result3 = v1; // 0x40c4ed
    int64_t v6 = v2; // 0x40c4ed
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40c4cf
        int64_t v8 = 0x10000 * v7 | v7; // 0x40c4dc
        int64_t v9 = 0x100000000 * v8 | v8; // 0x40c4e6
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x40c506
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x40c535
            int64_t v12 = v1 + 8; // 0x40c539
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x40c523
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40c54c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x40c543
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x40c4b9
                return 0;
            }
        }
    }
  lab_0x40c54c:;
    char v14 = a2; // 0x40c54c
    if (*(char *)result3 == v14) {
        // 0x40c4b9
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x40c560
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x40c4b9
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x40c4b9
    return result2;
}
// Address range: 0x40c590 - 0x40c61a
int64_t function_40c590(int64_t str, int64_t a2, int64_t a3) {
    uint64_t result = (int64_t)strlen((char *)str) + 1; // 0x40c59e
    int64_t v1 = str; // 0x40c5a2
    int64_t v2 = 0; // 0x40c5a2
    int64_t v3; // 0x40c590
    char v4; // 0x40c5b7
    int64_t v5; // 0x40c5bb
    while (true) {
      lab_0x40c5b7:;
        int64_t v6 = v2;
        v3 = v1;
        int64_t v7 = v6 + str;
        v4 = *(char *)v7;
        v5 = v6 + 1;
        if (v4 != 92) {
            goto lab_0x40c5a8;
        } else {
            int64_t v8 = v6 + 4; // 0x40c5c5
            if (v8 >= result) {
                goto lab_0x40c5a8;
            } else {
                char v9 = *(char *)(v5 + str); // 0x40c5ce
                if ((v9 & -4) == 48) {
                    char v10 = *(char *)(v7 + 2); // 0x40c5dd
                    if ((v10 & -8) == 48) {
                        char v11 = *(char *)(v7 + 3); // 0x40c5ed
                        if ((v11 & -8) == 48) {
                            // 0x40c5fc
                            *(char *)v3 = 8 * (v10 + 8 * v9) + 80 + v11;
                            v2 = v8;
                            goto lab_0x40c5b4;
                        } else {
                            goto lab_0x40c5a8;
                        }
                    } else {
                        goto lab_0x40c5a8;
                    }
                } else {
                    goto lab_0x40c5a8;
                }
            }
        }
    }
    // 0x40c618
    return result;
  lab_0x40c5a8:
    // 0x40c5a8
    *(char *)v3 = v4;
    v2 = v5;
    if (result <= v5) {
        return result;
    }
    goto lab_0x40c5b4;
  lab_0x40c5b4:
    // 0x40c5b4
    v1 = v3 + 1;
    goto lab_0x40c5b7;
}
// Address range: 0x40c620 - 0x40c662
int64_t function_40c620(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40c627
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 8));
    free((int64_t *)*(int64_t *)(a1 + 16));
    if ((*(char *)(a1 + 40) & 4) == 0) {
        // 0x40c644
        free(v1);
        return &g83;
    }
    // 0x40c650
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g83;
}
// Address range: 0x40c670 - 0x40ce2f
int64_t function_40c670(char a1) {
    // 0x40c670
    int64_t v1; // bp-152, 0x40c670
    int64_t v2 = &v1; // 0x40c684
    struct _IO_FILE * file = fopen("/proc/self/mountinfo", "r"); // 0x40c688
    bool v3; // 0x40c670
    bool v4; // 0x40c670
    int64_t * v5; // 0x40c670
    int64_t v6; // 0x40c670
    int64_t v7; // 0x40c670
    int64_t v8; // 0x40c670
    int64_t v9; // 0x40c670
    int64_t v10; // 0x40c670
    int64_t v11; // 0x40c670
    int64_t v12; // 0x40c670
    int64_t v13; // 0x40c670
    int64_t v14; // 0x40c670
    int32_t * v15; // 0x40c670
    int32_t v16; // 0x40c670
    struct mntent * v17; // 0x40c670
    char v18; // 0x40c670
    char v19; // 0x40c670
    int64_t v20; // bp-80, 0x40c670
    int32_t * v21; // 0x40c6d2
    char * v22; // 0x40c854
    unsigned char v23; // 0x40cd48
    int64_t v24; // 0x40c8ba
    unsigned char v25; // 0x40ca70
    bool v26; // 0x40c670
    int64_t * v27; // 0x40c670
    int64_t v28; // 0x40c670
    int64_t v29; // 0x40c670
    struct _IO_FILE * v30; // 0x40caaa
    int64_t v31; // 0x40caf5
    char * v32; // 0x40cb31
    int64_t v33; // 0x40cc94
    char ** v34; // 0x40c6d2
    int64_t v35; // 0x40c7e4
    bool v36; // 0x40c670
    bool v37; // 0x40c670
    if (file == NULL) {
        // 0x40caa0
        v30 = setmntent("/etc/mtab", "r");
        if (v30 == NULL) {
            // 0x40c92a
            return 0;
        }
        int64_t v38 = &v20; // 0x40cabe
        struct mntent * v39 = getmntent(v30); // 0x40caca
        v12 = v38;
        if (v39 != NULL) {
            // 0x40cae0
            v29 = v26 ? -1 : 1;
            v17 = v39;
            v10 = v38;
            while (true) {
              lab_0x40cae0:
                // 0x40cae0
                v11 = v10;
                int64_t v40 = (int64_t)v17;
                char * v41 = hasmntopt(v17, "bind"); // 0x40cae8
                v31 = function_40a560(56);
                int64_t v42 = function_40a790(*(int64_t *)v17); // 0x40cb01
                int64_t * v43 = (int64_t *)v31; // 0x40cb0a
                *v43 = v42;
                int64_t v44 = function_40a790(*(int64_t *)(v40 + 8)); // 0x40cb0d
                *(int64_t *)(v31 + 16) = 0;
                *(int64_t *)(v31 + 8) = v44;
                int64_t v45 = function_40a790(*(int64_t *)(v40 + 16)); // 0x40cb22
                v32 = (char *)(v31 + 40);
                *v32 = *v32 | 4;
                *(int64_t *)(v31 + 24) = v45;
                int64_t v46 = 7; // 0x40cb44
                int64_t v47 = v45;
                int64_t v48 = (int64_t)"autofs";
                unsigned char v49 = *(char *)v47; // 0x40cb44
                char v50 = *(char *)v48; // 0x40cb44
                char v51 = v50; // 0x40cb44
                bool v52 = false; // 0x40cb44
                while (v49 == v50) {
                    v46--;
                    int64_t v53 = v48 + v29; // 0x40cb44
                    int64_t v54 = v47 + v29; // 0x40cb44
                    v51 = v49;
                    v52 = true;
                    if (v46 == 0) {
                        // break -> 
                        break;
                    }
                    v47 = v54;
                    v48 = v53;
                    v49 = *(char *)v47;
                    v50 = *(char *)v48;
                    v51 = v50;
                    v52 = false;
                }
                unsigned char v55 = v51;
                int64_t v56 = v45; // 0x40cb4d
                int64_t v57 = 5; // 0x40cb4d
                char v58 = 1; // 0x40cb4d
                if ((v49 >= v55 && !v52) != v49 < v55) {
                    int64_t v59 = v56;
                    int64_t v60 = (int64_t)"proc";
                    unsigned char v61 = *(char *)v59; // 0x40cb60
                    char v62 = *(char *)v60; // 0x40cb60
                    char v63 = v62; // 0x40cb60
                    bool v64 = false; // 0x40cb60
                    while (v61 == v62) {
                        int64_t v65 = v57 - 1; // 0x40cb60
                        int64_t v66 = v60 + v29; // 0x40cb60
                        v56 = v59 + v29;
                        v57 = v65;
                        v63 = v61;
                        v64 = true;
                        if (v65 == 0) {
                            // break -> 
                            break;
                        }
                        v59 = v56;
                        v60 = v66;
                        v61 = *(char *)v59;
                        v62 = *(char *)v60;
                        v63 = v62;
                        v64 = false;
                    }
                    unsigned char v67 = v63;
                    int64_t v68 = v45; // 0x40cb69
                    int64_t v69 = 6; // 0x40cb69
                    v58 = 1;
                    if ((v61 >= v67 && !v64) != v61 < v67) {
                        int64_t v70 = v68;
                        int64_t v71 = (int64_t)"subfs";
                        unsigned char v72 = *(char *)v70; // 0x40cb7c
                        char v73 = *(char *)v71; // 0x40cb7c
                        char v74 = v73; // 0x40cb7c
                        bool v75 = false; // 0x40cb7c
                        while (v72 == v73) {
                            int64_t v76 = v69 - 1; // 0x40cb7c
                            int64_t v77 = v71 + v29; // 0x40cb7c
                            v68 = v70 + v29;
                            v69 = v76;
                            v74 = v72;
                            v75 = true;
                            if (v76 == 0) {
                                // break -> 
                                break;
                            }
                            v70 = v68;
                            v71 = v77;
                            v72 = *(char *)v70;
                            v73 = *(char *)v71;
                            v74 = v73;
                            v75 = false;
                        }
                        unsigned char v78 = v74;
                        int64_t v79 = v45; // 0x40cb85
                        int64_t v80 = 8; // 0x40cb85
                        v58 = 1;
                        if ((v72 >= v78 && !v75) != v72 < v78) {
                            int64_t v81 = v79;
                            int64_t v82 = (int64_t)"debugfs";
                            unsigned char v83 = *(char *)v81; // 0x40cb98
                            char v84 = *(char *)v82; // 0x40cb98
                            char v85 = v84; // 0x40cb98
                            bool v86 = false; // 0x40cb98
                            while (v83 == v84) {
                                int64_t v87 = v80 - 1; // 0x40cb98
                                int64_t v88 = v82 + v29; // 0x40cb98
                                v79 = v81 + v29;
                                v80 = v87;
                                v85 = v83;
                                v86 = true;
                                if (v87 == 0) {
                                    // break -> 
                                    break;
                                }
                                v81 = v79;
                                v82 = v88;
                                v83 = *(char *)v81;
                                v84 = *(char *)v82;
                                v85 = v84;
                                v86 = false;
                            }
                            unsigned char v89 = v85;
                            int64_t v90 = v45; // 0x40cba1
                            int64_t v91 = 7; // 0x40cba1
                            v58 = 1;
                            if ((v83 >= v89 && !v86) != v83 < v89) {
                                int64_t v92 = v90;
                                int64_t v93 = (int64_t)"devpts";
                                unsigned char v94 = *(char *)v92; // 0x40cbb4
                                char v95 = *(char *)v93; // 0x40cbb4
                                char v96 = v95; // 0x40cbb4
                                bool v97 = false; // 0x40cbb4
                                while (v94 == v95) {
                                    int64_t v98 = v91 - 1; // 0x40cbb4
                                    int64_t v99 = v93 + v29; // 0x40cbb4
                                    v90 = v92 + v29;
                                    v91 = v98;
                                    v96 = v94;
                                    v97 = true;
                                    if (v98 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v92 = v90;
                                    v93 = v99;
                                    v94 = *(char *)v92;
                                    v95 = *(char *)v93;
                                    v96 = v95;
                                    v97 = false;
                                }
                                unsigned char v100 = v96;
                                int64_t v101 = v45; // 0x40cbbd
                                int64_t v102 = 8; // 0x40cbbd
                                v58 = 1;
                                if ((v94 >= v100 && !v97) != v94 < v100) {
                                    int64_t v103 = v101;
                                    int64_t v104 = (int64_t)"fusectl";
                                    unsigned char v105 = *(char *)v103; // 0x40cbd0
                                    char v106 = *(char *)v104; // 0x40cbd0
                                    char v107 = v106; // 0x40cbd0
                                    bool v108 = false; // 0x40cbd0
                                    while (v105 == v106) {
                                        int64_t v109 = v102 - 1; // 0x40cbd0
                                        int64_t v110 = v104 + v29; // 0x40cbd0
                                        v101 = v103 + v29;
                                        v102 = v109;
                                        v107 = v105;
                                        v108 = true;
                                        if (v109 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v103 = v101;
                                        v104 = v110;
                                        v105 = *(char *)v103;
                                        v106 = *(char *)v104;
                                        v107 = v106;
                                        v108 = false;
                                    }
                                    unsigned char v111 = v107;
                                    int64_t v112 = v45; // 0x40cbd9
                                    int64_t v113 = 7; // 0x40cbd9
                                    v58 = 1;
                                    if ((v105 >= v111 && !v108) != v105 < v111) {
                                        int64_t v114 = v112;
                                        int64_t v115 = (int64_t)"mqueue";
                                        unsigned char v116 = *(char *)v114; // 0x40cbec
                                        char v117 = *(char *)v115; // 0x40cbec
                                        char v118 = v117; // 0x40cbec
                                        bool v119 = false; // 0x40cbec
                                        while (v116 == v117) {
                                            int64_t v120 = v113 - 1; // 0x40cbec
                                            int64_t v121 = v115 + v29; // 0x40cbec
                                            v112 = v114 + v29;
                                            v113 = v120;
                                            v118 = v116;
                                            v119 = true;
                                            if (v120 == 0) {
                                                // break -> 
                                                break;
                                            }
                                            v114 = v112;
                                            v115 = v121;
                                            v116 = *(char *)v114;
                                            v117 = *(char *)v115;
                                            v118 = v117;
                                            v119 = false;
                                        }
                                        unsigned char v122 = v118;
                                        int64_t v123 = v45; // 0x40cbf5
                                        int64_t v124 = 11; // 0x40cbf5
                                        v58 = 1;
                                        if ((v116 >= v122 && !v119) != v116 < v122) {
                                            int64_t v125 = v123;
                                            int64_t v126 = (int64_t)"rpc_pipefs";
                                            unsigned char v127 = *(char *)v125; // 0x40cc08
                                            char v128 = *(char *)v126; // 0x40cc08
                                            char v129 = v128; // 0x40cc08
                                            bool v130 = false; // 0x40cc08
                                            while (v127 == v128) {
                                                int64_t v131 = v124 - 1; // 0x40cc08
                                                int64_t v132 = v126 + v29; // 0x40cc08
                                                v123 = v125 + v29;
                                                v124 = v131;
                                                v129 = v127;
                                                v130 = true;
                                                if (v131 == 0) {
                                                    // break -> 
                                                    break;
                                                }
                                                v125 = v123;
                                                v126 = v132;
                                                v127 = *(char *)v125;
                                                v128 = *(char *)v126;
                                                v129 = v128;
                                                v130 = false;
                                            }
                                            unsigned char v133 = v129;
                                            int64_t v134 = v45; // 0x40cc11
                                            int64_t v135 = 6; // 0x40cc11
                                            v58 = 1;
                                            if ((v127 >= v133 && !v130) != v127 < v133) {
                                                int64_t v136 = v134;
                                                int64_t v137 = (int64_t)"sysfs";
                                                unsigned char v138 = *(char *)v136; // 0x40cc20
                                                char v139 = *(char *)v137; // 0x40cc20
                                                char v140 = v139; // 0x40cc20
                                                bool v141 = false; // 0x40cc20
                                                while (v138 == v139) {
                                                    int64_t v142 = v135 - 1; // 0x40cc20
                                                    int64_t v143 = v137 + v29; // 0x40cc20
                                                    v134 = v136 + v29;
                                                    v135 = v142;
                                                    v140 = v138;
                                                    v141 = true;
                                                    if (v142 == 0) {
                                                        // break -> 
                                                        break;
                                                    }
                                                    v136 = v134;
                                                    v137 = v143;
                                                    v138 = *(char *)v136;
                                                    v139 = *(char *)v137;
                                                    v140 = v139;
                                                    v141 = false;
                                                }
                                                unsigned char v144 = v140;
                                                int64_t v145 = v45; // 0x40cc29
                                                int64_t v146 = 6; // 0x40cc29
                                                v58 = 1;
                                                if ((v138 >= v144 && !v141) != v138 < v144) {
                                                    int64_t v147 = v145;
                                                    int64_t v148 = (int64_t)"devfs";
                                                    unsigned char v149 = *(char *)v147; // 0x40cc38
                                                    char v150 = *(char *)v148; // 0x40cc38
                                                    char v151 = v150; // 0x40cc38
                                                    bool v152 = false; // 0x40cc38
                                                    while (v149 == v150) {
                                                        int64_t v153 = v146 - 1; // 0x40cc38
                                                        int64_t v154 = v148 + v29; // 0x40cc38
                                                        v145 = v147 + v29;
                                                        v146 = v153;
                                                        v151 = v149;
                                                        v152 = true;
                                                        if (v153 == 0) {
                                                            // break -> 
                                                            break;
                                                        }
                                                        v147 = v145;
                                                        v148 = v154;
                                                        v149 = *(char *)v147;
                                                        v150 = *(char *)v148;
                                                        v151 = v150;
                                                        v152 = false;
                                                    }
                                                    unsigned char v155 = v151;
                                                    int64_t v156 = v45; // 0x40cc41
                                                    int64_t v157 = 7; // 0x40cc41
                                                    v58 = 1;
                                                    if ((v149 >= v155 && !v152) != v149 < v155) {
                                                        int64_t v158 = v156;
                                                        int64_t v159 = (int64_t)"kernfs";
                                                        unsigned char v160 = *(char *)v158; // 0x40cc50
                                                        char v161 = *(char *)v159; // 0x40cc50
                                                        char v162 = v161; // 0x40cc50
                                                        bool v163 = false; // 0x40cc50
                                                        while (v160 == v161) {
                                                            int64_t v164 = v157 - 1; // 0x40cc50
                                                            int64_t v165 = v159 + v29; // 0x40cc50
                                                            v156 = v158 + v29;
                                                            v157 = v164;
                                                            v162 = v160;
                                                            v163 = true;
                                                            if (v164 == 0) {
                                                                // break -> 
                                                                break;
                                                            }
                                                            v158 = v156;
                                                            v159 = v165;
                                                            v160 = *(char *)v158;
                                                            v161 = *(char *)v159;
                                                            v162 = v161;
                                                            v163 = false;
                                                        }
                                                        unsigned char v166 = v162;
                                                        v58 = 1;
                                                        if ((v160 >= v166 && !v163) != v160 < v166) {
                                                            char * str = (char *)v45; // 0x40cc67
                                                            v58 = 1;
                                                            if (strcmp(str, "ignore") != 0) {
                                                                // 0x40cc75
                                                                v58 = v41 == NULL == strcmp(str, "none") == 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x40cc90
                v33 = *v43;
                *v32 = *v32 & -2 | v58;
                char * str2 = (char *)v33; // 0x40cca7
                v19 = 1;
                if (strchr(str2, 58) == NULL) {
                    // 0x40cd48
                    v23 = *str2;
                    if (v23 == 47) {
                        // 0x40cde0
                        v3 = true;
                        v37 = false;
                        if (*(char *)(v33 + 1) != 47) {
                            goto lab___crit_edge183;
                        } else {
                            int64_t v167; // 0x40c670
                            unsigned char v168 = *(char *)v167; // 0x40cdf8
                            int64_t v169; // 0x40c670
                            char v170 = *(char *)v169; // 0x40cdf8
                            while (v168 == v170) {
                                // 0x40cdeb
                                int64_t v171; // 0x40c670
                                int64_t v172 = v171;
                                int64_t v173 = v172 - 1; // 0x40cdf8
                                int64_t v174; // 0x40c670
                                v169 = v174 + v29;
                                int64_t v175; // 0x40c670
                                v167 = v175 + v29;
                                v171 = v173;
                                char v176 = v168; // 0x40cdf8
                                bool v177 = true; // 0x40cdf8
                                if (v173 == 0) {
                                    // break -> 
                                    break;
                                }
                                v175 = v167;
                                v174 = v169;
                                v168 = *(char *)v175;
                                v170 = *(char *)v174;
                                v176 = v170;
                                v177 = false;
                            }
                            unsigned char v178 = v170;
                            v19 = 1;
                            int64_t v179 = v45; // 0x40ce01
                            int64_t v180 = 5; // 0x40ce01
                            if ((v168 >= v178 && true) == v168 < v178) {
                                goto lab_0x40ccba;
                            } else {
                                int64_t v181 = v179;
                                int64_t v182 = (int64_t)"cifs";
                                unsigned char v183 = *(char *)v181; // 0x40ce14
                                char v184 = *(char *)v182; // 0x40ce14
                                char v185 = v184; // 0x40ce14
                                bool v186 = false; // 0x40ce14
                                while (v183 == v184) {
                                    int64_t v187 = v180 - 1; // 0x40ce14
                                    int64_t v188 = v182 + v29; // 0x40ce14
                                    v179 = v181 + v29;
                                    v180 = v187;
                                    v185 = v183;
                                    v186 = true;
                                    if (v187 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v181 = v179;
                                    v182 = v188;
                                    v183 = *(char *)v181;
                                    v184 = *(char *)v182;
                                    v185 = v184;
                                    v186 = false;
                                }
                                unsigned char v189 = v185;
                                v19 = 1;
                                if ((v183 >= v189 && !v186) == v183 < v189) {
                                    goto lab_0x40ccba;
                                } else {
                                    goto lab_0x40cd52;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40cd52;
                    }
                } else {
                    goto lab_0x40ccba;
                }
            }
        }
      lab_0x40cce8:
        // 0x40cce8
        v9 = v12;
        v13 = v12;
        if (endmntent(v30) != 0) {
            goto lab_0x40c91d;
        } else {
            goto lab_0x40ccf8;
        }
    } else {
        int64_t v190 = &v20; // 0x40c6a2
        int64_t v191 = v2 + 88; // 0x40c6c8
        int64_t v192 = v2 + 80; // 0x40c6cd
        v34 = (char **)v192;
        v21 = (int32_t *)v191;
        if (__getdelim(v34, v21, 10, file) == -1) {
            // 0x40c696
            v5 = (int64_t *)v192;
            v8 = v190;
        } else {
            int64_t v193 = v2 + 31; // 0x40c6ea
            int64_t * v194 = (int64_t *)(v2 - 16); // 0x40c6ef
            int64_t v195 = v2 + 44; // 0x40c6f0
            int64_t v196 = v2 + 40; // 0x40c6f6
            v27 = (int64_t *)v192;
            int64_t v197 = v2 + 64; // 0x40c708
            int64_t v198 = v2 + 32; // 0x40c712
            int32_t * v199 = (int32_t *)(v2 + 36);
            int32_t * v200 = (int32_t *)(v2 + 68);
            int32_t * v201 = (int32_t *)v195;
            int64_t v202 = v2 + 60;
            int64_t v203 = v2 + 56;
            int64_t v204 = v2 + 52;
            int64_t v205 = v2 + 48;
            v28 = v26 ? -1 : 1;
            int32_t * v206 = (int32_t *)v203;
            int32_t * v207 = (int32_t *)v196;
            int32_t * v208 = (int32_t *)v197;
            v6 = v190;
            while (true) {
              lab_0x40c6e1:
                // 0x40c6e1
                v7 = v6;
                int64_t str4; // 0x40c737
                while (true) {
                    // 0x40c6e1
                    *v194 = v193;
                    *(int64_t *)(v2 - 24) = v195;
                    *(int64_t *)(v2 - 32) = v196;
                    int64_t str3 = *v27; // 0x40c6fc
                    if ((sscanf((char *)str3, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", (int64_t *)v198, v199, (int64_t *)v197, v200) & -5) == 3) {
                        // 0x40c728
                        str4 = function_40d2b0(*v27 + (int64_t)*v201, " - ");
                        if (str4 != 0) {
                            // 0x40c748
                            *v194 = v193;
                            if ((sscanf((char *)str4, " - %n%*s%n %n%*s%n %c", (int32_t **)v205, (int64_t *)v204, (char **)v203, (int32_t **)v202) & -5) == 1) {
                                // break -> 0x40c77e
                                break;
                            }
                        }
                    }
                    // 0x40c6c0
                    v5 = v27;
                    v8 = v7;
                    if (__getdelim(v34, v21, 10, file) == -1) {
                        // break (via goto) -> 0x40c8f8
                        goto lab_0x40c8f8_2;
                    }
                }
                // 0x40c77e
                *(char *)(*v27 + (int64_t)*v200) = 0;
                int64_t v209 = *v27; // 0x40c792
                *(char *)(v209 + (int64_t)*v201) = 0;
                *(char *)(str4 + (int64_t)*(int32_t *)v204) = 0;
                *(char *)(str4 + (int64_t)*(int32_t *)v202) = 0;
                function_40c590(str4 + (int64_t)*v206, (int64_t)" - %n%*s%n %n%*s%n %c", v209);
                function_40c590(*v27 + (int64_t)*v207, (int64_t)" - %n%*s%n %n%*s%n %c", v209);
                function_40c590(*v27 + (int64_t)*v208, (int64_t)" - %n%*s%n %n%*s%n %c", v209);
                v35 = function_40a560(56);
                int64_t v210 = function_40a790(str4 + (int64_t)*v206); // 0x40c7f4
                int64_t * v211 = (int64_t *)v35; // 0x40c803
                *v211 = v210;
                *(int64_t *)(v35 + 8) = function_40a790(*v27 + (int64_t)*v207);
                *(int64_t *)(v35 + 16) = function_40a790(*v27 + (int64_t)*v208);
                int64_t v212 = function_40a790(str4 + (int64_t)*(int32_t *)v205); // 0x40c82a
                uint32_t v213 = *(int32_t *)v198; // 0x40c82f
                *(int64_t *)(v35 + 24) = v212;
                uint32_t v214 = *v199; // 0x40c849
                int64_t v215 = 0x100000000 * (int64_t)v213; // 0x40c850
                v22 = (char *)(v35 + 40);
                *v22 = *v22 | 4;
                int64_t v216 = v213 < 0xfffff001 ? v215 : v215 + 0xfffffffffff; // 0x40c85c
                int64_t v217 = v216 | (int64_t)(256 * v213 & 0xfff00) | (int64_t)(v214 % 256) | 0x1000 * (int64_t)v214 & 0xffffff00000; // 0x40c87d
                int64_t v218 = 7; // 0x40c880
                int64_t v219 = v212;
                int64_t v220 = (int64_t)"autofs";
                unsigned char v221 = *(char *)v219; // 0x40c880
                char v222 = *(char *)v220; // 0x40c880
                char v223 = v222; // 0x40c880
                bool v224 = false; // 0x40c880
                while (v221 == v222) {
                    v218--;
                    int64_t v225 = v220 + v28; // 0x40c880
                    int64_t v226 = v219 + v28; // 0x40c880
                    v223 = v221;
                    v224 = true;
                    if (v218 == 0) {
                        // break -> 
                        break;
                    }
                    v219 = v226;
                    v220 = v225;
                    v221 = *(char *)v219;
                    v222 = *(char *)v220;
                    v223 = v222;
                    v224 = false;
                }
                unsigned char v227 = v223;
                *(int64_t *)(v35 + 32) = v217;
                int64_t v228 = v212; // 0x40c88d
                int64_t v229 = 5; // 0x40c88d
                char v230 = 1; // 0x40c88d
                if ((v221 >= v227 && !v224) != v221 < v227) {
                    int64_t v231 = v228;
                    int64_t v232 = (int64_t)"proc";
                    unsigned char v233 = *(char *)v231; // 0x40c89c
                    char v234 = *(char *)v232; // 0x40c89c
                    char v235 = v234; // 0x40c89c
                    bool v236 = false; // 0x40c89c
                    while (v233 == v234) {
                        int64_t v237 = v229 - 1; // 0x40c89c
                        int64_t v238 = v232 + v28; // 0x40c89c
                        v228 = v231 + v28;
                        v229 = v237;
                        v235 = v233;
                        v236 = true;
                        if (v237 == 0) {
                            // break -> 
                            break;
                        }
                        v231 = v228;
                        v232 = v238;
                        v233 = *(char *)v231;
                        v234 = *(char *)v232;
                        v235 = v234;
                        v236 = false;
                    }
                    unsigned char v239 = v235;
                    v230 = 1;
                    int64_t v240 = v212; // 0x40c8a5
                    int64_t v241 = 6; // 0x40c8a5
                    if ((v233 >= v239 && !v236) != v233 < v239) {
                        int64_t v242 = v240;
                        int64_t v243 = (int64_t)"subfs";
                        unsigned char v244 = *(char *)v242; // 0x40c94d
                        char v245 = *(char *)v243; // 0x40c94d
                        char v246 = v245; // 0x40c94d
                        bool v247 = false; // 0x40c94d
                        while (v244 == v245) {
                            int64_t v248 = v241 - 1; // 0x40c94d
                            int64_t v249 = v243 + v28; // 0x40c94d
                            v240 = v242 + v28;
                            v241 = v248;
                            v246 = v244;
                            v247 = true;
                            if (v248 == 0) {
                                // break -> 
                                break;
                            }
                            v242 = v240;
                            v243 = v249;
                            v244 = *(char *)v242;
                            v245 = *(char *)v243;
                            v246 = v245;
                            v247 = false;
                        }
                        unsigned char v250 = v246;
                        v230 = 1;
                        int64_t v251 = v212; // 0x40c956
                        int64_t v252 = 8; // 0x40c956
                        if ((v244 >= v250 && !v247) != v244 < v250) {
                            int64_t v253 = v251;
                            int64_t v254 = (int64_t)"debugfs";
                            unsigned char v255 = *(char *)v253; // 0x40c969
                            char v256 = *(char *)v254; // 0x40c969
                            char v257 = v256; // 0x40c969
                            bool v258 = false; // 0x40c969
                            while (v255 == v256) {
                                int64_t v259 = v252 - 1; // 0x40c969
                                int64_t v260 = v254 + v28; // 0x40c969
                                v251 = v253 + v28;
                                v252 = v259;
                                v257 = v255;
                                v258 = true;
                                if (v259 == 0) {
                                    // break -> 
                                    break;
                                }
                                v253 = v251;
                                v254 = v260;
                                v255 = *(char *)v253;
                                v256 = *(char *)v254;
                                v257 = v256;
                                v258 = false;
                            }
                            unsigned char v261 = v257;
                            v230 = 1;
                            int64_t v262 = v212; // 0x40c972
                            int64_t v263 = 7; // 0x40c972
                            if ((v255 >= v261 && !v258) != v255 < v261) {
                                int64_t v264 = v262;
                                int64_t v265 = (int64_t)"devpts";
                                unsigned char v266 = *(char *)v264; // 0x40c985
                                char v267 = *(char *)v265; // 0x40c985
                                char v268 = v267; // 0x40c985
                                bool v269 = false; // 0x40c985
                                while (v266 == v267) {
                                    int64_t v270 = v263 - 1; // 0x40c985
                                    int64_t v271 = v265 + v28; // 0x40c985
                                    v262 = v264 + v28;
                                    v263 = v270;
                                    v268 = v266;
                                    v269 = true;
                                    if (v270 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v264 = v262;
                                    v265 = v271;
                                    v266 = *(char *)v264;
                                    v267 = *(char *)v265;
                                    v268 = v267;
                                    v269 = false;
                                }
                                unsigned char v272 = v268;
                                v230 = 1;
                                int64_t v273 = v212; // 0x40c98e
                                int64_t v274 = 8; // 0x40c98e
                                if ((v266 >= v272 && !v269) != v266 < v272) {
                                    int64_t v275 = v273;
                                    int64_t v276 = (int64_t)"fusectl";
                                    unsigned char v277 = *(char *)v275; // 0x40c9a1
                                    char v278 = *(char *)v276; // 0x40c9a1
                                    char v279 = v278; // 0x40c9a1
                                    bool v280 = false; // 0x40c9a1
                                    while (v277 == v278) {
                                        int64_t v281 = v274 - 1; // 0x40c9a1
                                        int64_t v282 = v276 + v28; // 0x40c9a1
                                        v273 = v275 + v28;
                                        v274 = v281;
                                        v279 = v277;
                                        v280 = true;
                                        if (v281 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v275 = v273;
                                        v276 = v282;
                                        v277 = *(char *)v275;
                                        v278 = *(char *)v276;
                                        v279 = v278;
                                        v280 = false;
                                    }
                                    unsigned char v283 = v279;
                                    v230 = 1;
                                    int64_t v284 = v212; // 0x40c9aa
                                    int64_t v285 = 7; // 0x40c9aa
                                    if ((v277 >= v283 && !v280) != v277 < v283) {
                                        int64_t v286 = v284;
                                        int64_t v287 = (int64_t)"mqueue";
                                        unsigned char v288 = *(char *)v286; // 0x40c9bd
                                        char v289 = *(char *)v287; // 0x40c9bd
                                        char v290 = v289; // 0x40c9bd
                                        bool v291 = false; // 0x40c9bd
                                        while (v288 == v289) {
                                            int64_t v292 = v285 - 1; // 0x40c9bd
                                            int64_t v293 = v287 + v28; // 0x40c9bd
                                            v284 = v286 + v28;
                                            v285 = v292;
                                            v290 = v288;
                                            v291 = true;
                                            if (v292 == 0) {
                                                // break -> 
                                                break;
                                            }
                                            v286 = v284;
                                            v287 = v293;
                                            v288 = *(char *)v286;
                                            v289 = *(char *)v287;
                                            v290 = v289;
                                            v291 = false;
                                        }
                                        unsigned char v294 = v290;
                                        v230 = 1;
                                        int64_t v295 = v212; // 0x40c9c6
                                        int64_t v296 = 11; // 0x40c9c6
                                        if ((v288 >= v294 && !v291) != v288 < v294) {
                                            int64_t v297 = v295;
                                            int64_t v298 = (int64_t)"rpc_pipefs";
                                            unsigned char v299 = *(char *)v297; // 0x40c9d9
                                            char v300 = *(char *)v298; // 0x40c9d9
                                            char v301 = v300; // 0x40c9d9
                                            bool v302 = false; // 0x40c9d9
                                            while (v299 == v300) {
                                                int64_t v303 = v296 - 1; // 0x40c9d9
                                                int64_t v304 = v298 + v28; // 0x40c9d9
                                                v295 = v297 + v28;
                                                v296 = v303;
                                                v301 = v299;
                                                v302 = true;
                                                if (v303 == 0) {
                                                    // break -> 
                                                    break;
                                                }
                                                v297 = v295;
                                                v298 = v304;
                                                v299 = *(char *)v297;
                                                v300 = *(char *)v298;
                                                v301 = v300;
                                                v302 = false;
                                            }
                                            unsigned char v305 = v301;
                                            v230 = 1;
                                            int64_t v306 = v212; // 0x40c9e2
                                            int64_t v307 = 6; // 0x40c9e2
                                            if ((v299 >= v305 && !v302) != v299 < v305) {
                                                int64_t v308 = v306;
                                                int64_t v309 = (int64_t)"sysfs";
                                                unsigned char v310 = *(char *)v308; // 0x40c9f5
                                                char v311 = *(char *)v309; // 0x40c9f5
                                                char v312 = v311; // 0x40c9f5
                                                bool v313 = false; // 0x40c9f5
                                                while (v310 == v311) {
                                                    int64_t v314 = v307 - 1; // 0x40c9f5
                                                    int64_t v315 = v309 + v28; // 0x40c9f5
                                                    v306 = v308 + v28;
                                                    v307 = v314;
                                                    v312 = v310;
                                                    v313 = true;
                                                    if (v314 == 0) {
                                                        // break -> 
                                                        break;
                                                    }
                                                    v308 = v306;
                                                    v309 = v315;
                                                    v310 = *(char *)v308;
                                                    v311 = *(char *)v309;
                                                    v312 = v311;
                                                    v313 = false;
                                                }
                                                unsigned char v316 = v312;
                                                v230 = 1;
                                                int64_t v317 = v212; // 0x40c9fe
                                                int64_t v318 = 6; // 0x40c9fe
                                                if ((v310 >= v316 && !v313) != v310 < v316) {
                                                    int64_t v319 = v317;
                                                    int64_t v320 = (int64_t)"devfs";
                                                    unsigned char v321 = *(char *)v319; // 0x40ca11
                                                    char v322 = *(char *)v320; // 0x40ca11
                                                    char v323 = v322; // 0x40ca11
                                                    bool v324 = false; // 0x40ca11
                                                    while (v321 == v322) {
                                                        int64_t v325 = v318 - 1; // 0x40ca11
                                                        int64_t v326 = v320 + v28; // 0x40ca11
                                                        v317 = v319 + v28;
                                                        v318 = v325;
                                                        v323 = v321;
                                                        v324 = true;
                                                        if (v325 == 0) {
                                                            // break -> 
                                                            break;
                                                        }
                                                        v319 = v317;
                                                        v320 = v326;
                                                        v321 = *(char *)v319;
                                                        v322 = *(char *)v320;
                                                        v323 = v322;
                                                        v324 = false;
                                                    }
                                                    unsigned char v327 = v323;
                                                    v230 = 1;
                                                    int64_t v328 = v212; // 0x40ca1a
                                                    int64_t v329 = 7; // 0x40ca1a
                                                    if ((v321 >= v327 && !v324) != v321 < v327) {
                                                        int64_t v330 = v328;
                                                        int64_t v331 = (int64_t)"kernfs";
                                                        unsigned char v332 = *(char *)v330; // 0x40ca2d
                                                        char v333 = *(char *)v331; // 0x40ca2d
                                                        char v334 = v333; // 0x40ca2d
                                                        bool v335 = false; // 0x40ca2d
                                                        while (v332 == v333) {
                                                            int64_t v336 = v329 - 1; // 0x40ca2d
                                                            int64_t v337 = v331 + v28; // 0x40ca2d
                                                            v328 = v330 + v28;
                                                            v329 = v336;
                                                            v334 = v332;
                                                            v335 = true;
                                                            if (v336 == 0) {
                                                                // break -> 
                                                                break;
                                                            }
                                                            v330 = v328;
                                                            v331 = v337;
                                                            v332 = *(char *)v330;
                                                            v333 = *(char *)v331;
                                                            v334 = v333;
                                                            v335 = false;
                                                        }
                                                        unsigned char v338 = v334;
                                                        v230 = 1;
                                                        if ((v332 >= v338 && !v335) != v332 < v338) {
                                                            char * str5 = (char *)v212; // 0x40ca44
                                                            v230 = 1;
                                                            if (strcmp(str5, "ignore") != 0) {
                                                                // 0x40ca51
                                                                v230 = strcmp(str5, "none") == 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x40c8ab
                v24 = *v211;
                *v22 = *v22 & -2 | v230;
                char * str6 = (char *)v24; // 0x40c8c3
                v18 = 1;
                if (strchr(str6, 58) == NULL) {
                    // 0x40ca70
                    v25 = *str6;
                    if (v25 == 47) {
                        // 0x40cd70
                        v4 = true;
                        v36 = false;
                        if (*(char *)(v24 + 1) != 47) {
                            goto lab___crit_edge191;
                        } else {
                            int64_t v339; // 0x40c670
                            unsigned char v340 = *(char *)v339; // 0x40cd88
                            int64_t v341; // 0x40c670
                            char v342 = *(char *)v341; // 0x40cd88
                            while (v340 == v342) {
                                // 0x40cd7b
                                int64_t v343; // 0x40c670
                                int64_t v344 = v343;
                                int64_t v345 = v344 - 1; // 0x40cd88
                                int64_t v346; // 0x40c670
                                v341 = v346 + v28;
                                int64_t v347; // 0x40c670
                                v339 = v347 + v28;
                                v343 = v345;
                                char v348 = v340; // 0x40cd88
                                bool v349 = true; // 0x40cd88
                                if (v345 == 0) {
                                    // break -> 
                                    break;
                                }
                                v347 = v339;
                                v346 = v341;
                                v340 = *(char *)v347;
                                v342 = *(char *)v346;
                                v348 = v342;
                                v349 = false;
                            }
                            unsigned char v350 = v342;
                            v18 = 1;
                            int64_t v351 = v212; // 0x40cd91
                            int64_t v352 = 5; // 0x40cd91
                            if ((v340 >= v350 && true) == v340 < v350) {
                                goto lab_0x40c8d6;
                            } else {
                                int64_t v353 = v351;
                                int64_t v354 = (int64_t)"cifs";
                                unsigned char v355 = *(char *)v353; // 0x40cda4
                                char v356 = *(char *)v354; // 0x40cda4
                                char v357 = v356; // 0x40cda4
                                bool v358 = false; // 0x40cda4
                                while (v355 == v356) {
                                    int64_t v359 = v352 - 1; // 0x40cda4
                                    int64_t v360 = v354 + v28; // 0x40cda4
                                    v351 = v353 + v28;
                                    v352 = v359;
                                    v357 = v355;
                                    v358 = true;
                                    if (v359 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v353 = v351;
                                    v354 = v360;
                                    v355 = *(char *)v353;
                                    v356 = *(char *)v354;
                                    v357 = v356;
                                    v358 = false;
                                }
                                unsigned char v361 = v357;
                                v18 = 1;
                                if ((v355 >= v361 && !v358) == v355 < v361) {
                                    goto lab_0x40c8d6;
                                } else {
                                    goto lab_0x40ca7b;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40ca7b;
                    }
                } else {
                    goto lab_0x40c8d6;
                }
            }
        }
      lab_0x40c8f8_2:;
        int64_t v362 = (int64_t)file; // 0x40c688
        free((int64_t *)*v5);
        if ((*(char *)file & 32) != 0) {
            int32_t * v363 = __errno_location(); // 0x40cdc0
            int32_t v364 = *v363; // 0x40cdc8
            function_40e240(v362, v191);
            *v363 = v364;
            v14 = v8;
            v15 = v363;
            v16 = v364;
            goto lab_0x40cd03;
        } else {
            // 0x40c90c
            v9 = v8;
            v13 = v8;
            if ((int32_t)function_40e240(v362, v191) == -1) {
                goto lab_0x40ccf8;
            } else {
                goto lab_0x40c91d;
            }
        }
    }
  lab_0x40c8d6:
    // 0x40c8d6
    *v22 = *v22 & -3 | 2 * v18;
    *(int64_t *)v7 = v35;
    int64_t v365 = v35 + 48; // 0x40c8e8
    v6 = v365;
    v5 = v27;
    v8 = v365;
    if (__getdelim(v34, v21, 10, file) == -1) {
        // break -> 0x40c8f8
        goto lab_0x40c8f8_2;
    }
    goto lab_0x40c6e1;
  lab_0x40ca7b:;
    bool v366 = v25 > 45; // 0x40ca88
    int64_t v367 = (int64_t)"-hosts"; // 0x40ca88
    int64_t v368 = v24; // 0x40ca88
    v4 = v25 > 45;
    v36 = false;
    if (v25 == 45) {
        int64_t v369 = 6; // 0x40c670
        v4 = v366;
        v36 = true;
        while (v369 != 0) {
            int64_t v370 = v368 + v28; // 0x40ca88
            int64_t v371 = v367 + v28; // 0x40ca88
            unsigned char v372 = *(char *)v370;
            unsigned char v373 = *(char *)v371; // 0x40ca88
            v369--;
            v366 = v373 < v372;
            v367 = v371;
            v368 = v370;
            v4 = v373 < v372;
            v36 = false;
            if (v373 != v372) {
                // break -> ._crit_edge191
                break;
            }
            v4 = v366;
            v36 = true;
        }
    }
    goto lab___crit_edge191;
  lab___crit_edge191:;
    bool v374 = v4;
    v18 = !((v374 | v36)) == v374;
    goto lab_0x40c8d6;
  lab_0x40ccba:
    // 0x40ccba
    *(int64_t *)(v31 + 32) = -1;
    *v32 = *v32 & -3 | 2 * v19;
    *(int64_t *)v11 = v31;
    int64_t v375 = v31 + 48; // 0x40ccd3
    struct mntent * v376 = getmntent(v30); // 0x40ccd7
    v17 = v376;
    v10 = v375;
    v12 = v375;
    if (v376 == NULL) {
        // break -> 0x40cce8
        goto lab_0x40cce8;
    }
    goto lab_0x40cae0;
  lab_0x40cd52:;
    bool v377 = v23 > 45; // 0x40cd5f
    int64_t v378 = (int64_t)"-hosts"; // 0x40cd5f
    int64_t v379 = v33; // 0x40cd5f
    v3 = v23 > 45;
    v37 = false;
    if (v23 == 45) {
        int64_t v380 = 6; // 0x40c670
        v3 = v377;
        v37 = true;
        while (v380 != 0) {
            int64_t v381 = v379 + v29; // 0x40cd5f
            int64_t v382 = v378 + v29; // 0x40cd5f
            unsigned char v383 = *(char *)v381;
            unsigned char v384 = *(char *)v382; // 0x40cd5f
            v380--;
            v377 = v384 < v383;
            v378 = v382;
            v379 = v381;
            v3 = v384 < v383;
            v37 = false;
            if (v384 != v383) {
                // break -> ._crit_edge183
                break;
            }
            v3 = v377;
            v37 = true;
        }
    }
    goto lab___crit_edge183;
  lab___crit_edge183:;
    bool v385 = v3;
    v19 = !((v385 | v37)) == v385;
    goto lab_0x40ccba;
  lab_0x40c91d:
    // 0x40c91d
    *(int64_t *)v9 = 0;
    // 0x40c92a
    return *(int64_t *)(v2 + 72);
  lab_0x40ccf8:;
    int32_t * v386 = __errno_location(); // 0x40ccf8
    v14 = v13;
    v15 = v386;
    v16 = *v386;
    goto lab_0x40cd03;
  lab_0x40cd03:
    // 0x40cd03
    *(int64_t *)v14 = 0;
    int64_t * v387 = (int64_t *)(v2 + 72); // 0x40cd0b
    int64_t v388 = *v387; // 0x40cd0b
    if (v388 == 0) {
        // 0x40cd2e
        *v15 = v16;
        return 0;
    }
    int64_t v389 = *(int64_t *)(v388 + 48); // 0x40cd18
    function_40c620(v388);
    *v387 = v389;
    int64_t v390 = v389; // 0x40cd2c
    while (v389 != 0) {
        // 0x40cd18
        v389 = *(int64_t *)(v390 + 48);
        function_40c620(v390);
        *v387 = v389;
        v390 = v389;
    }
    // 0x40cd2e
    *v15 = v16;
    return 0;
}
// Address range: 0x40ce30 - 0x40cf5e
int64_t function_40ce30(int64_t a1, uint64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 1; // 0x40ce57
    int64_t v2 = 0; // 0x40ce57
    int64_t v3 = -1; // 0x40ce57
    int64_t v4; // 0x40ce30
    int64_t v5; // 0x40ce30
    int64_t v6; // 0x40ce30
    if (a2 <= 1) {
        // 0x40ce83
        *a3 = 1;
        v5 = -1;
        v4 = -1;
        v6 = 1;
    } else {
        int64_t v7; // 0x40ce30
        int64_t v8; // 0x40ce30
        int64_t v9; // 0x40ce30
        int64_t v10; // 0x40ce30
        while (true) {
            // 0x40ce59
            v9 = v3;
            int64_t v11 = v9 + a1; // 0x40ce59
            char * v12 = (char *)(v11 + 1);
            int64_t v13 = 1;
            unsigned char v14 = *(char *)(v13 + v11); // 0x40ce5d
            unsigned char v15 = *(char *)(v1 + a1); // 0x40ce62
            int64_t v16 = v1; // 0x40ce65
            int64_t v17 = v1; // 0x40ce65
            int64_t v18 = v13; // 0x40ce65
            int64_t v19 = v2; // 0x40ce65
            int64_t v20 = 1; // 0x40ce65
            char v21 = v14; // 0x40ce65
            char v22 = v15; // 0x40ce65
            unsigned char v23; // 0x40ce5d
            unsigned char v24; // 0x40ce62
            int64_t v25; // 0x40ce77
            if (v15 < v14) {
                v10 = v16;
                v25 = v10 + 1;
                if (v25 >= a2) {
                    // break (via goto) -> 0x40ce83
                    goto lab_0x40ce83;
                }
                // 0x40ce59
                v23 = *v12;
                v24 = *(char *)(v25 + a1);
                while (v24 < v23) {
                    // 0x40ce6b
                    v10 = v25;
                    v25 = v10 + 1;
                    if (v25 >= a2) {
                        // break (via goto) -> 0x40ce83
                        goto lab_0x40ce83;
                    }
                    // 0x40ce59
                    v23 = *v12;
                    v24 = *(char *)(v25 + a1);
                }
                // 0x40cee8
                v17 = v25;
                v18 = 1;
                v19 = v10;
                v20 = v10 - v9;
                v21 = v23;
                v22 = v24;
            }
            // 0x40cee8
            v3 = v19;
            while (v22 == v21) {
                int64_t v26 = v18;
                v13 = v26 == v20 ? 1 : v26 + 1;
                int64_t v27 = v26 == v20 ? v17 : v3;
                int64_t v28 = v27 + v13; // 0x40ce50
                v8 = v9;
                v7 = v20;
                if (v28 >= a2) {
                    goto lab_0x40ce83_3;
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
                        // break (via goto) -> 0x40ce83
                        goto lab_0x40ce83;
                    }
                    // 0x40ce59
                    v23 = *v12;
                    v24 = *(char *)(v25 + a1);
                    while (v24 < v23) {
                        // 0x40ce6b
                        v10 = v25;
                        v25 = v10 + 1;
                        if (v25 >= a2) {
                            // break (via goto) -> 0x40ce83
                            goto lab_0x40ce83;
                        }
                        // 0x40ce59
                        v23 = *v12;
                        v24 = *(char *)(v25 + a1);
                    }
                    // 0x40cee8
                    v17 = v25;
                    v18 = 1;
                    v19 = v10;
                    v20 = v10 - v9;
                    v21 = v23;
                    v22 = v24;
                }
                // 0x40cee8
                v3 = v19;
            }
            // 0x40ceea
            v1 = v3 + 2;
            v2 = v3 + 1;
            v8 = v3;
            v7 = 1;
            if (v1 >= a2) {
                goto lab_0x40ce83_3;
            }
        }
      lab_0x40ce83:
        // 0x40ce83
        v8 = v9;
        v7 = v10 - v9;
      lab_0x40ce83_3:
        // 0x40ce83
        *a3 = v7;
        int64_t v29 = 1; // 0x40cea7
        int64_t v30 = -1; // 0x40cea7
        int64_t v31 = 0; // 0x40cea7
        v5 = v8;
        v4 = -1;
        v6 = 1;
        if (a2 > 1) {
            int64_t v32; // 0x40ce30
            int64_t v33; // 0x40ce30
            while (true) {
                // 0x40cea9
                v32 = v30;
                int64_t v34 = v32 + a1; // 0x40cea9
                char * v35 = (char *)(v34 + 1);
                int64_t v36 = 1;
                unsigned char v37 = *(char *)(v36 + v34); // 0x40cead
                unsigned char v38 = *(char *)(v29 + a1); // 0x40ceb2
                int64_t v39 = v29; // 0x40ceb6
                int64_t v40 = v29; // 0x40ceb6
                int64_t v41 = 1; // 0x40ceb6
                int64_t v42 = v36; // 0x40ceb6
                int64_t v43 = v31; // 0x40ceb6
                char v44 = v37; // 0x40ceb6
                char v45 = v38; // 0x40ceb6
                int64_t v46; // 0x40cec4
                unsigned char v47; // 0x40cead
                unsigned char v48; // 0x40ceb2
                if (v38 > v37) {
                    v33 = v39;
                    v46 = v33 + 1;
                    if (v46 >= a2) {
                        // break (via goto) -> 0x40ced0
                        goto lab_0x40ced0;
                    }
                    // 0x40cea9
                    v47 = *v35;
                    v48 = *(char *)(v46 + a1);
                    while (v48 > v47) {
                        // 0x40ceb8
                        v33 = v46;
                        v46 = v33 + 1;
                        if (v46 >= a2) {
                            // break (via goto) -> 0x40ced0
                            goto lab_0x40ced0;
                        }
                        // 0x40cea9
                        v47 = *v35;
                        v48 = *(char *)(v46 + a1);
                    }
                    // 0x40cf08
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
                    int64_t v52 = v51 + v36; // 0x40cea0
                    v5 = v8;
                    v4 = v32;
                    v6 = v41;
                    if (v52 >= a2) {
                        goto lab_0x40ced0_3;
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
                            // break (via goto) -> 0x40ced0
                            goto lab_0x40ced0;
                        }
                        // 0x40cea9
                        v47 = *v35;
                        v48 = *(char *)(v46 + a1);
                        while (v48 > v47) {
                            // 0x40ceb8
                            v33 = v46;
                            v46 = v33 + 1;
                            if (v46 >= a2) {
                                // break (via goto) -> 0x40ced0
                                goto lab_0x40ced0;
                            }
                            // 0x40cea9
                            v47 = *v35;
                            v48 = *(char *)(v46 + a1);
                        }
                        // 0x40cf08
                        v40 = v46;
                        v41 = v33 - v32;
                        v42 = 1;
                        v43 = v33;
                        v44 = v47;
                        v45 = v48;
                    }
                    // 0x40cf08
                    v49 = v43;
                }
                int64_t v53 = v49 + 2; // 0x40cea0
                v29 = v53;
                v30 = v49;
                v31 = v49 + 1;
                v5 = v8;
                v4 = v49;
                v6 = 1;
                if (v53 >= a2) {
                    goto lab_0x40ced0_3;
                }
            }
          lab_0x40ced0:
            // 0x40ced0
            v5 = v8;
            v4 = v32;
            v6 = v33 - v32;
        }
    }
  lab_0x40ced0_3:;
    int64_t v54 = v4 + 1; // 0x40ced0
    int64_t v55 = v5 + 1; // 0x40ced4
    int64_t result = v55; // 0x40cedb
    if (v54 >= v55) {
        // 0x40cedd
        *a3 = v6;
        result = v54;
    }
    // 0x40cee3
    return result;
}
// Address range: 0x40cf60 - 0x40d2a9
int64_t function_40cf60(int64_t a1, int64_t a2, int64_t str, int64_t a4) {
    // 0x40cf60
    int64_t v1; // 0x40cf60
    int64_t v2; // bp-2112, 0x40cf60
    int64_t v3; // 0x40cf60
    if (a4 < 3) {
        // 0x40d280
        v2 = 1;
        v1 = a4 - 1;
        v3 = 1;
    } else {
        // 0x40cf87
        int64_t v4; // 0x40cf60
        v1 = function_40ce30(str, a4, &v2, a4, v4, v4);
        v3 = v2;
    }
    // 0x40cfa4
    int64_t v5; // bp-2184, 0x40cf60
    int64_t v6 = &v5; // 0x40cf76
    int64_t n = v1;
    int64_t v7; // bp-2104, 0x40cf60
    int64_t v8 = &v7; // 0x40cfb1
    *(int64_t *)v8 = a4;
    v8 += 8;
    int64_t v9; // bp-56, 0x40cf60
    while (v8 != (int64_t)&v9) {
        // 0x40cfb8
        *(int64_t *)v8 = a4;
        v8 += 8;
    }
    int64_t str2 = v3 + str; // 0x40cfc9
    int64_t v10; // 0x40cf60
    int64_t result; // 0x40cf60
    if (a4 == 0) {
        // 0x40d11a
        v10 = -1;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x40d12f
            return 0;
        }
    } else {
        int64_t v11 = a4 - 1;
        int64_t v12 = v6 + 80; // 0x40cff5
        int64_t v13 = str + 1; // 0x40cff1
        *(int64_t *)(8 * (int64_t)*(char *)str + v12) = v11 + str - str;
        while (a4 + str != v13) {
            int64_t v14 = v13;
            unsigned char v15 = *(char *)v14; // 0x40cfe8
            v13 = v14 + 1;
            *(int64_t *)(8 * (int64_t)v15 + v12) = v11 + str - v14;
        }
        // 0x40cfff
        v10 = v11;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x40d14b
            if (function_40c480(a2 + a1, 0, a4 - a2) != 0) {
                // 0x40d12f
                return 0;
            }
            int64_t v16 = a4 - v3; // 0x40d162
            int64_t v17 = 0;
            int64_t v18 = 0; // 0x40cf60
            int64_t v19 = a4;
            while (v19 != 0) {
                int64_t v20 = v17;
                int64_t v21 = 0x100000000 * v18;
                uint64_t v22 = *(int64_t *)(8 * (int64_t)*(char *)(a1 - 1 + v19) + v12); // 0x40d1e4
                int64_t v23; // 0x40cf60
                int64_t v24; // 0x40cf60
                if (v22 != 0) {
                    int64_t v25 = v22; // 0x40d185
                    if (v22 < v3) {
                        // 0x40d187
                        v25 = v21 != 0 ? 0x100000000 * v16 >> 32 : v22;
                    }
                    // 0x40d190
                    v23 = 0;
                    v24 = v25 + v20;
                } else {
                    uint64_t v26 = v21 >> 32; // 0x40d1cb
                    int64_t v27 = v26 >= n ? v26 : n; // 0x40d1f4
                    if (v27 >= v11) {
                        // 0x40d230
                        if (v26 < n) {
                            int64_t v28 = v20 + a1; // 0x40d23d
                            char * v29; // 0x40cf60
                            char v30 = *v29; // 0x40d241
                            int64_t v31; // 0x40d14b
                            char v32 = *(char *)(v28 + v31); // 0x40d246
                            int64_t v33 = v31; // 0x40d24a
                            if (v32 == v30) {
                                int64_t v34 = v33;
                                while (v26 != v34) {
                                    int64_t v35 = v34 - 1;
                                    char v36 = *(char *)(v35 + v28); // 0x40d250
                                    char v37 = *(char *)(v35 + str); // 0x40d255
                                    v33 = v35;
                                    if (v37 != v36) {
                                        // break -> 0x40d268
                                        break;
                                    }
                                    v34 = v33;
                                }
                            }
                        }
                        // 0x40d268
                        if (v26 + 1 > n) {
                            // 0x40d2a0
                            result = v20 + a1;
                            return result;
                        }
                        // 0x40d271
                        v23 = v16;
                        v24 = v20 + v3;
                    } else {
                        int64_t v38 = v27;
                        char v39 = *(char *)(v20 + a1 + v38); // 0x40d211
                        while (*(char *)(v38 + str) == v39) {
                            int64_t v40 = v38 + 1; // 0x40d208
                            if (v40 == v11) {
                                goto lab_0x40d230;
                            }
                            v38 = v40;
                            v39 = *(char *)(v20 + a1 + v38);
                        }
                        // 0x40d21b
                        v23 = 0;
                        v24 = v38 + v20 + 1 - n;
                    }
                }
                // 0x40d196
                v17 = v24;
                int64_t v41 = v17 + a4; // 0x40d199
                v18 = v23;
                if (function_40c480(v19 + a1, 0, v41 - v19) != 0) {
                    // break -> 0x40d12f
                    break;
                }
                v19 = v41;
            }
            // 0x40d12f
            return 0;
        }
    }
    uint64_t v42 = a4 - n; // 0x40d01e
    int64_t v43 = (v42 < n ? n : v42) + 1; // 0x40d02b
    v2 = v43;
    int64_t v44 = function_40c480(a2 + a1, 0, a4 - a2); // 0x40d070
    if (a4 == 0) {
        // 0x40d12f
        return 0;
    }
    int64_t v45 = n - 1;
    int64_t v46 = v44; // 0x40cf60
    int64_t v47 = a4; // 0x40d056
    int64_t v48 = 0;
    int64_t v49; // 0x40cf60
    int64_t v50; // 0x40cf60
    int64_t v51; // 0x40cf60
    int64_t v52; // 0x40cf60
    int64_t v53; // 0x40d086
    int64_t v54; // 0x40d0a1
    while (true) {
      lab_0x40d083:
        // 0x40d083
        result = 0;
        if (v46 != 0) {
            // break -> 0x40d12f
            break;
        }
        // 0x40d091
        v49 = v47;
        v53 = 0x100000000 * v48 >> 32;
        unsigned char v55 = *(char *)(a1 - 1 + v49); // 0x40d091
        int64_t v56 = *(int64_t *)(v6 + 80 + 8 * (int64_t)v55); // 0x40d097
        v51 = v56;
        v50 = v53;
        if (v56 != 0) {
            goto lab_0x40d050;
        } else {
            // 0x40d0a1
            v54 = v53 + a1;
            if (n >= v10) {
                goto lab_0x40d0d3;
            } else {
                // 0x40d0aa
                v52 = n;
                if (*(char *)(v54 + n) == *(char *)(n + str)) {
                    int64_t v57 = n + 1; // 0x40d0ca
                    while (v57 < v10) {
                        int64_t v58 = v57; // 0x40d0c8
                        v52 = v57;
                        if (*(char *)(v57 + str) != *(char *)(v57 + v54)) {
                            goto lab_0x40d110;
                        }
                        v57 = v58 + 1;
                    }
                    goto lab_0x40d0d3;
                } else {
                    goto lab_0x40d110;
                }
            }
        }
    }
  lab_0x40d12f_3:
    // 0x40d12f
    return result;
  lab_0x40d110:
    // 0x40d110
    v51 = v52;
    v50 = 1 - n + v53;
    goto lab_0x40d050;
  lab_0x40d050:;
    int64_t v59 = v50 + v51; // 0x40d050
    goto lab_0x40d053;
  lab_0x40d053:
    // 0x40d053
    v48 = v59;
    v47 = v48 + a4;
    v46 = function_40c480(v49 + a1, 0, v47 - v49);
    result = 0;
    if (v47 == 0) {
        // break -> 0x40d12f
        goto lab_0x40d12f_3;
    }
    goto lab_0x40d083;
  lab_0x40d0d3:
    // 0x40d0d3
    result = v54;
    if (n == 0) {
        // break -> 0x40d12f
        goto lab_0x40d12f_3;
    }
    // 0x40d0dd
    if (*(char *)(v54 + v45) == *(char *)(v45 + str)) {
        result = v54;
        if (v45 == 0) {
            // break (via goto) -> 0x40d12f
            goto lab_0x40d12f_3;
        }
        int64_t v60 = v45 - 1; // 0x40d0fa
        int64_t v61 = v60; // 0x40d0f8
        while (*(char *)(v60 + str) == *(char *)(v60 + v54)) {
            // 0x40d0fa
            result = v54;
            if (v61 == 0) {
                // break (via goto) -> 0x40d12f
                goto lab_0x40d12f_3;
            }
            // 0x40d0f0
            v60 = v61 - 1;
            v61 = v60;
        }
    }
    // 0x40d141
    v59 = v53 + v43;
    goto lab_0x40d053;
}
// Address range: 0x40d2b0 - 0x40d644
int64_t function_40d2b0(int64_t result, char * str) {
    int64_t v1 = (int64_t)str;
    char v2 = result;
    char c = v1;
    if (v2 == 0) {
        // 0x40d375
        return c == 0 ? result : 0;
    }
    int64_t v3 = result; // 0x40d2d0
    int64_t v4 = v1; // 0x40d2d0
    if (c == 0) {
        // 0x40d375
        return result;
    }
    int64_t v5 = 1; // 0x40d2d0
    v3++;
    v4++;
    unsigned char v6 = *(char *)v4; // 0x40d301
    v5 &= (int64_t)(c == v2);
    char v7 = *(char *)v3; // 0x40d307
    while (v7 != 0) {
        // 0x40d2f0
        if (v6 == 0) {
            goto lab_0x40d315;
        }
        char v8 = v6;
        v3++;
        v4++;
        v6 = *(char *)v4;
        v5 &= (int64_t)(v8 == v7);
        v7 = *(char *)v3;
    }
    // 0x40d30e
    if (v6 != 0) {
        // 0x40d375
        return 0;
    }
  lab_0x40d315:
    // 0x40d315
    if (v5 != 0) {
        // 0x40d375
        return result;
    }
    uint64_t v9 = v4 - v1; // 0x40d327
    char * found_char_pos = strchr((char *)(result + 1), (int32_t)c); // 0x40d32e
    int64_t result2 = (int64_t)found_char_pos; // 0x40d32e
    if (v9 == 1 || found_char_pos == NULL) {
        // 0x40d375
        return result2;
    }
    uint64_t v10 = v9 + result; // 0x40d341
    int64_t v11 = v10 < result2 ? 1 : v10 - result2; // 0x40d357
    if (v9 >= 32) {
        // 0x40d375
        return function_40cf60(result2, v11, v1, v9);
    }
    int64_t v12; // 0x40d2b0
    int64_t v13; // bp-64, 0x40d2b0
    int64_t v14; // 0x40d2b0
    if (v9 < 3) {
        // 0x40d619
        v13 = 1;
        v12 = v9 - 1;
        v14 = 1;
    } else {
        // 0x40d39a
        v12 = function_40ce30(v1, v9, &v13, (int64_t)v6, v11, v1 % 256);
        v14 = v13;
    }
    int64_t n = v12;
    int64_t v15; // 0x40d2b0
    int64_t v16; // 0x40d2b0
    int64_t v17; // 0x40d2b0
    int64_t v18; // 0x40d2b0
    int64_t v19; // 0x40d2b0
    int64_t v20; // 0x40d520
    int64_t v21; // 0x40d2b0
    int64_t v22; // 0x40d2b0
    if (memcmp((int64_t *)str, (int64_t *)(v14 + v1), (int32_t)n) != 0) {
        uint64_t v23 = v9 - n; // 0x40d513
        v20 = (v23 < n ? n : v23) + 1;
        v13 = v20;
        if (v9 == 0 | function_40c480(v11 + result2, 0, v9 - v11) != 0) {
            // 0x40d375
            return 0;
        }
        // 0x40d568
        v21 = n - 1;
        int64_t v24 = 0x100000000 - 0x100000000 * n >> 32;
        v15 = v9;
        v17 = 0;
        while (true) {
          lab_0x40d568:
            // 0x40d568
            v18 = v17;
            v16 = v15;
            v22 = v18 + result2;
            if (v9 > n) {
                // 0x40d571
                if (*(char *)(v22 + n) == *(char *)(n + v1)) {
                    int64_t v25 = n + 1; // 0x40d59a
                    while (v9 > v25) {
                        int64_t v26 = v25; // 0x40d598
                        int64_t v27 = v25; // 0x40d598
                        if (*(char *)(v25 + v1) != *(char *)(v25 + v22)) {
                            // 0x40d5e0
                            v19 = v18 + v24 + v27;
                            goto lab_0x40d5ed;
                        }
                        v25 = v26 + 1;
                    }
                    goto lab_0x40d5a3;
                } else {
                    // 0x40d5e0
                    v19 = v18 + v24 + n;
                    goto lab_0x40d5ed;
                }
            } else {
                goto lab_0x40d5a3;
            }
        }
      lab_0x40d375_3:
        // 0x40d375
        return 0;
    }
    // 0x40d3e7
    if (v9 == 0 | function_40c480(v11 + result2, 0, v9 - v11) != 0) {
        // 0x40d375
        return 0;
    }
    int64_t v28 = n - 1; // 0x40d3e7
    char * v29 = (char *)(v28 + v1);
    int64_t v30 = 0x100000000 * (v9 - v14) / 0x100000000;
    int64_t v31 = 0x100000000 - 0x100000000 * n >> 32;
    int64_t v32 = v9; // 0x40d2b0
    int64_t v33 = 0; // 0x40d2b0
    int64_t v34 = 0; // 0x40d2b0
    int64_t v35; // 0x40d2b0
    uint64_t v36; // 0x40d2b0
    int64_t v37; // 0x40d2b0
    int64_t v38; // 0x40d2b0
    while (true) {
      lab_0x40d442:
        // 0x40d442
        v36 = v34;
        v37 = v33;
        v35 = v32;
        int64_t v39 = n >= v36 ? n : v36; // 0x40d448
        if (v9 > v39) {
            // 0x40d451
            v38 = v39;
            if (*(char *)(v39 + v37 + result2) != *(char *)(v39 + v1)) {
                goto lab_0x40d4f0;
            } else {
                int64_t v40; // 0x40d2b0
                while (v9 != v40 + 1) {
                    // 0x40d470
                    int64_t v41; // 0x40d2b0
                    int64_t v42; // 0x40d47a
                    char v43 = *(char *)(v42 + v41); // 0x40d470
                    char v44 = *(char *)(v42 + v1); // 0x40d474
                    v40 = v42;
                    v38 = v42;
                    if (v44 != v43) {
                        goto lab_0x40d4f0;
                    }
                    int64_t v45 = v40;
                    v42 = v45 + 1;
                }
                goto lab_0x40d483;
            }
        } else {
            goto lab_0x40d483;
        }
    }
  lab_0x40d63c:
    // 0x40d375
    return v37 + result2;
  lab_0x40d5a3:
    // 0x40d5a3
    if (n == 0) {
        return 0;
    }
    // 0x40d5ad
    int64_t result3; // 0x40d2b0
    if (*(char *)(v22 + v21) == *(char *)(v21 + v1)) {
        result3 = v22;
        if (v21 == 0) {
            return result3;
        }
        int64_t v46 = v21 - 1; // 0x40d5ca
        int64_t v47 = v46; // 0x40d5c8
        while (*(char *)(v46 + v1) == *(char *)(v46 + v22)) {
            // 0x40d5ca
            result3 = v22;
            if (v47 == 0) {
                return result3;
            }
            // 0x40d5c0
            v46 = v47 - 1;
            v47 = v46;
        }
    }
    // 0x40d5f8
    v19 = v18 + v20;
    goto lab_0x40d5ed;
  lab_0x40d5ed:;
    int64_t v48 = v19 + v9; // 0x40d548
    int64_t v49 = function_40c480(v16 + result2, 0, v48 - v16); // 0x40d559
    v15 = v48;
    v17 = v19;
    if (v48 == 0 || v49 != 0) {
        // break -> 0x40d375
        goto lab_0x40d375_3;
    }
    goto lab_0x40d568;
  lab_0x40d4f0:;
    int64_t v50 = 0; // 0x40d500
    int64_t v51 = v37 + v31 + v38; // 0x40d500
    goto lab_0x40d4df;
  lab_0x40d483:;
    int64_t v54 = n; // 0x40d48b
    if (n > v36) {
        int64_t v55 = v37 + result2; // 0x40d496
        v54 = n;
        if (*v29 == *(char *)(v55 + v28)) {
            int64_t v56 = v28;
            v54 = v56;
            while (v36 != v56) {
                int64_t v57 = v56 - 1;
                int64_t v58 = v57; // 0x40d4ba
                v54 = v56;
                if (*(char *)(v57 + v1) != *(char *)(v57 + v55)) {
                    // break -> 0x40d4c8
                    break;
                }
                v56 = v58;
                v54 = v56;
            }
        }
    }
    // 0x40d4c8
    if (v36 + 1 > v54) {
        // break -> 0x40d63c
        goto lab_0x40d63c;
    }
    // 0x40d4d5
    v50 = v30;
    v51 = v37 + v14;
    goto lab_0x40d4df;
  lab_0x40d4df:;
    int64_t v52 = v51 + v9; // 0x40d410
    int64_t v53 = function_40c480(v35 + result2, 0, v52 - v35); // 0x40d426
    result3 = 0;
    v32 = v52;
    v33 = v51;
    v34 = v50;
    if (v52 == 0 || v53 != 0) {
      lab_0x40d375_3:
        // 0x40d375
        return result3;
    }
    goto lab_0x40d442;
}
// Address range: 0x40d650 - 0x40d6a9
int64_t function_40d650(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x40d650
    int32_t v1; // bp-16, 0x40d650
    int64_t v2; // 0x40d650
    int64_t v3 = function_40e360(0, (int64_t *)&v1, a2, (int64_t)a3, v2, v2, v2, (int64_t)&g83); // 0x40d665
    if (v3 == 0) {
        // 0x40d682
        return 0xffffffff;
    }
    // 0x40d66f
    int64_t result; // 0x40d650
    if (v1 > -1) {
        // 0x40d67d
        *(int64_t *)a1 = v3;
        result = v1;
    } else {
        // 0x40d688
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x40d682
    return result;
}
// Address range: 0x40d6b0 - 0x40d79f
int64_t function_40d6b0(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x40d6e9
    int64_t * mem = malloc((int32_t)size); // 0x40d6f3
    int64_t result = 0; // 0x40d6fe
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x40d709
        if (v1 < 0) {
            // 0x40d768
            if (*__errno_location() != 34) {
                // 0x40d772
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x40d709
        int64_t v3; // 0x40d6b0
        if (buf_size > v2) {
            // 0x40d780
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x40d71b
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x40d728
            int64_t * mem2 = malloc((int32_t)size2); // 0x40d72e
            if (mem2 == NULL) {
                // 0x40d73b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x40d768
                if (*__errno_location() != 34) {
                    // 0x40d772
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x40d716
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x40d780
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x40d71b
            free(buf);
        }
        // 0x40d750
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x40d790
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x40d73b_2:
    // 0x40d73b
    return result;
}
// Address range: 0x40d7a0 - 0x40d7aa
int64_t function_40d7a0(void) {
    // 0x40d7a0
    return function_404930(1);
}
// Address range: 0x40d7b0 - 0x40d8c6
int64_t function_40d7b0(int64_t a1, char ** a2, int64_t * a3, int64_t n) {
    char * str = (char *)a1; // 0x40d7d1
    int32_t len = strlen(str); // 0x40d7d1
    if (a2 == NULL) {
        // 0x40d89d
        return -1;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = -1;
    int64_t * str3 = (int64_t *)(v3 * n + v1);
    int32_t v4 = 0;
    int64_t v5 = 0; // 0x40d837
    int64_t v6 = v1; // 0x40d7b0
    int64_t v7 = v2; // 0x40d83e
    int64_t str4; // 0x40d7b0
    int64_t v8; // 0x40d7b0
    int32_t v9; // 0x40d7b0
    int32_t v10; // 0x40d7b0
    int32_t v11; // 0x40d7b0
    int64_t v12; // 0x40d7b0
    int64_t result; // 0x40d7b0
    int32_t v13; // 0x40d833
    char * str2; // 0x40d852
    while (true) {
        // 0x40d847
        str4 = v6;
        v8 = v5;
        v10 = v4;
        str2 = (char *)v7;
        v9 = v10;
        if (strncmp(str2, str, len) == 0) {
            // 0x40d85b
            result = v8;
            if (len == strlen(str2)) {
                // 0x40d89d
                return result;
            }
            if (v3 == -1) {
                // break -> 0x40d86f
                break;
            }
            // 0x40d800
            v9 = 1;
            if (a3 != NULL) {
                // 0x40d80e
                v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                v9 = v13;
            }
        }
        // 0x40d837
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
    int64_t v14 = v8 + 1; // 0x40d873
    int64_t v15 = *(int64_t *)(8 * v14 + v2); // 0x40d87a
    v12 = v8;
    v11 = v10;
    while (v15 != 0) {
        // 0x40d847
        v3 = v8;
        str3 = (int64_t *)(v3 * n + v1);
        v4 = v10;
        v5 = v14;
        v6 = str4 + n;
        v7 = v15;
        while (true) {
            // 0x40d847
            str4 = v6;
            v8 = v5;
            v10 = v4;
            str2 = (char *)v7;
            v9 = v10;
            if (strncmp(str2, str, len) == 0) {
                // 0x40d85b
                result = v8;
                if (len == strlen(str2)) {
                    // 0x40d89d
                    return result;
                }
                if (v3 == -1) {
                    // break -> 0x40d86f
                    break;
                }
                // 0x40d800
                v9 = 1;
                if (a3 != NULL) {
                    // 0x40d80e
                    v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                    v9 = v13;
                }
            }
            // 0x40d837
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
        // 0x40d86f
        v14 = v8 + 1;
        v15 = *(int64_t *)(8 * v14 + v2);
        v12 = v8;
        v11 = v10;
    }
  lab_0x40d888:
    // 0x40d89d
    return (char)v11 == 0 ? v12 : -2;
}
// Address range: 0x40d8d0 - 0x40d941
int64_t function_40d8d0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x40d8d0
    if (a3 == -1) {
        // 0x40d930
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x40d8e5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x40d8f4
    function_409dc0(1, a1);
    function_409ab0(0, 8, a2);
    error(0, 0, format);
    return &g83;
}
// Address range: 0x40d950 - 0x40da68
int64_t function_40d950(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40d97d
    fputs_unlocked(v1, g40);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x40d9f0
        int64_t v5; // 0x40d9f7
        int64_t v6; // 0x40da17
        while (v3 != 0) {
            // 0x40d9db
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x40d9a0
                break;
            }
            // 0x40d9ed
            v4 = v3 + 1;
            v5 = function_409de0(v2);
            __fprintf_chk(g40, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x40da20
                goto lab_0x40da20;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x40d9a3
        int64_t v8 = function_409de0(v2); // 0x40d9ad
        __fprintf_chk(g40, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40d9cd
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40d9db
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x40d9a0
                    break;
                }
                // 0x40d9ed
                v4 = v3 + 1;
                v5 = function_409de0(v2);
                __fprintf_chk(g40, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x40da20
                    goto lab_0x40da20;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x40d9a0
            v7 = v3 + 1;
            v8 = function_409de0(v2);
            __fprintf_chk(g40, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x40da20:;
    int64_t v10 = (int64_t)g40; // 0x40da20
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x40da27
    uint64_t result = *v11; // 0x40da27
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x40da50
        return __overflow(g40, 10);
    }
    // 0x40da31
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x40da70 - 0x40dae0
int64_t function_40da70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_40d7b0(a2, (char **)a3, (int64_t *)a4, a5); // 0x40da9c
    int64_t result = v1; // 0x40daa4
    if (v1 < 0) {
        // 0x40dab8
        function_40d8d0(a1, a2, v1);
        function_40d950(a3, a4, a5);
        result = -1;
    }
    // 0x40daa6
    return result;
}
// Address range: 0x40dae0 - 0x40db2d
int64_t function_40dae0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x40dae0
    if (result == 0) {
        // 0x40db21
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x40db18
    int32_t n = a4; // 0x40db18
    int64_t v1 = result; // 0x40db1f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x40db21
        return result;
    }
    int64_t str3 = str2; // 0x40db1f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x40db00
    int64_t result2 = 0; // 0x40db0d
    while (v2 != 0) {
        // 0x40db0f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x40db21
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x40db21
    return result2;
}
// Address range: 0x40db30 - 0x40db8d
int64_t function_40db30(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40db37
    int64_t v2; // 0x40db30
    int64_t result = function_40e240(a1, v2); // 0x40db48
    if ((v2 & 32) != 0) {
        // 0x40db70
        if ((int32_t)result == 0) {
            // 0x40db74
            *__errno_location() = 0;
        }
        // 0x40db6a
        return 0xffffffff;
    }
    // 0x40db51
    if ((int32_t)result == 0) {
        // 0x40db6a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40db58
    if (v1 == 0) {
        // 0x40db5a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40db6a
    return result2;
}
// Address range: 0x40db90 - 0x40dbda
int64_t function_40db90(int64_t * path, int64_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x40dba3
    return function_40e1f0((int64_t)fd);
}
// Address range: 0x40dbe0 - 0x40dc3e
int64_t function_40dbe0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40dbe6
    if (locale == NULL) {
        // 0x40dc13
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40dbe6
    bool v2; // 0x40dbe0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g15; // 0x40dbe0
    int64_t v5 = v1; // 0x40dbe0
    int64_t v6 = 2; // 0x40dc05
    unsigned char v7 = *(char *)v5; // 0x40dc05
    char v8 = *(char *)v4; // 0x40dc05
    char v9 = v8; // 0x40dc05
    bool v10 = false; // 0x40dc05
    while (v7 == v8) {
        // 0x40dbf8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40dc11
    int64_t v13 = v1; // 0x40dc11
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40dc13
        return 0;
    }
    int64_t v14 = 6; // 0x40dc11
    unsigned char v15 = *(char *)v13; // 0x40dc2d
    char v16 = *(char *)v12; // 0x40dc2d
    char v17 = v16; // 0x40dc2d
    bool v18 = false; // 0x40dc2d
    while (v15 == v16) {
        // 0x40dc20
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
// Address range: 0x40dc40 - 0x40dc76
int64_t function_40dc40(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40dc46
    if (v1 == 0) {
        // 0x40dc70
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x40dc58
    char v5 = *(char *)v2; // 0x40dc5b
    while (v5 != 0) {
        // 0x40dc50
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x40dc63
    return v4 % a2;
}
// Address range: 0x40dc80 - 0x40e1e2
int64_t function_40dc80(void) {
    char * v1 = nl_langinfo(14); // 0x40dc96
    char * v2 = g80; // 0x40dc9b
    char * v3; // 0x40dc80
    int64_t v4; // 0x40dc80
    int64_t v5; // 0x40dc80
    int64_t v6; // 0x40dc80
    int64_t v7; // 0x40dc80
    int32_t size; // 0x40dc80
    int32_t size2; // 0x40dc80
    int32_t len; // 0x40dd52
    int64_t v8; // 0x40dd52
    char * env_val; // 0x40dd3d
    if (v2 == NULL) {
        // 0x40dd38
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40dda5;
        } else {
            // 0x40dd4a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40dda5;
            } else {
                // 0x40dd4f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40dd3d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40e1d5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40dda5;
                    } else {
                        // 0x40e149
                        size2 = len + 14;
                        goto lab_0x40dd6b;
                    }
                } else {
                    goto lab_0x40dd6b;
                }
            }
        }
    } else {
        // 0x40dc80
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40dcba;
    }
  lab_0x40dfec:;
    // 0x40dfec
    struct _IO_FILE * stream; // 0x40de2b
    int32_t v10 = __uflow(stream); // 0x40dfef
    int64_t v11; // 0x40dc80
    int64_t v12 = v11; // 0x40dff9
    int64_t v13; // 0x40dc80
    int64_t v14 = v13; // 0x40dff9
    int32_t v15 = v10; // 0x40dff9
    int64_t v16; // 0x40dc80
    int64_t v17 = v16; // 0x40dff9
    int64_t v18 = v11; // 0x40dff9
    int64_t v19 = v13; // 0x40dff9
    int64_t v20 = v16; // 0x40dff9
    if (v10 == -1) {
        // break -> 0x40dfff
        goto lab_0x40dfff;
    }
    goto lab_0x40de79;
  lab_0x40de6e:;
    // 0x40de6e
    int64_t v90; // 0x40dc80
    int64_t * v32; // 0x40de60
    *v32 = v90 + 1;
    int64_t v89; // 0x40dc80
    v12 = v89;
    int64_t v91; // 0x40dc80
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40dc80
    v17 = v92;
    goto lab_0x40de79;
  lab_0x40de79:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40dc80
    int32_t v25; // bp-120, 0x40dc80
    int32_t v26; // bp-184, 0x40dc80
    int64_t v27; // 0x40de2b
    int64_t v28; // 0x40de48
    int64_t v29; // 0x40de4d
    int64_t * v30; // 0x40de64
    switch (c) {
        case 32: {
            goto lab_0x40de60;
        }
        case 10: {
            goto lab_0x40de60;
        }
        case 9: {
            goto lab_0x40de60;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40e051
            int32_t v33; // 0x40dc80
            char v34; // 0x40dc80
            int32_t v35; // 0x40e05e
            if (v31 < *v30) {
                // 0x40e030
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40e05b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40e051
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40e030
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40e05b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40e040
                v36 = v33;
            }
            // 0x40e12f
            if (v36 == -1) {
                // break -> 0x40dfff
                break;
            }
            goto lab_0x40de60;
        }
        default: {
            // 0x40de8f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40dfff
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40deb8
            int64_t v39 = v37 + 4; // 0x40deba
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40dec6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40dec8
            while (v41 == 0) {
                // 0x40deb8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40dee6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40def2
            int64_t v45 = v43 + 4; // 0x40def4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40df00
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40df02
            while (v47 == 0) {
                // 0x40def2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40deef
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40df18
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40df28
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40df2c
            int64_t v52 = v51 + v48; // 0x40df35
            int64_t * mem; // 0x40dc80
            int64_t v53; // 0x40dc80
            int64_t v54; // 0x40dc80
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40e06b
                int64_t v56 = v55 + 3; // 0x40e077
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40df51
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40df60
            if (mem == NULL) {
                // 0x40e18c
                free((int64_t *)v21);
                function_40e240(v27, v53);
                v24 = (int64_t)&g14;
                goto lab_0x40de04;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40df78
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40df82
            uint32_t v62 = (int32_t)v59; // 0x40df85
            int64_t v63; // 0x40dc80
            if (v62 >= 8) {
                // 0x40e094
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40e0ae
                int64_t v66 = v61 - v65; // 0x40e0b2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40e0bd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40e0ce
                    int64_t v70 = v69 & 0xffffffff; // 0x40e0ce
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40e0cb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40e15f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40df97
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40df9b
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
            int64_t v73 = v51 + 1; // 0x40dfab
            int64_t v74 = v60 - 1; // 0x40dfaf
            uint32_t v75 = (int32_t)v73; // 0x40dfb4
            int64_t v76; // 0x40dc80
            if (v75 >= 8) {
                // 0x40e0e2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40e0ec
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40e0fc
                int64_t v80 = v74 - v79; // 0x40e100
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40e10b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40e11b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40e119
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40e176
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40e17e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40dfc6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40dfca
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40e1c3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40dfde
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40de6e;
            } else {
                goto lab_0x40dfec;
            }
        }
    }
  lab_0x40de60:;
    int64_t v93 = v23; // 0x40dc80
    int64_t v94 = v22; // 0x40dc80
    int64_t v95 = v21; // 0x40dc80
    goto lab_0x40de60_2;
  lab_0x40dda5:;
    int64_t * mem3 = malloc(size); // 0x40dda5
    int64_t v97 = (int64_t)&g14; // 0x40ddb0
    int64_t v98; // 0x40dc80
    int64_t path; // 0x40dc80
    if (mem3 == NULL) {
        goto lab_0x40dd82;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40dda5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40ddc6;
    }
  lab_0x40dcba:;
    int64_t str = v1 == NULL ? (int64_t)&g14 : (int64_t)v1; // 0x40dcad
    char v100 = *v3; // 0x40dcba
    int64_t v101; // 0x40dc80
    if (v100 == 0) {
        // 0x40dd14
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40dc80
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40dc80
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40dd00
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40dd07;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40dcd0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40dcdd
        char v107 = *(char *)v106; // 0x40dce2
        v102 = v107;
        if (v107 == 0) {
            // 0x40dd14
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40dceb
    v104 = v103 + 1;
  lab_0x40dd07:
    // 0x40dd14
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40dd82:;
    char * v108 = (char *)v97;
    g80 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40dcba;
  lab_0x40ddc6:;
    int64_t v109 = v98 + path; // 0x40ddc6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40ddf2
    v24 = (int64_t)&g14;
    if (fd >= 0) {
        // 0x40de21
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40e152
            close(fd);
            v24 = (int64_t)&g14;
        } else {
            // 0x40de45
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40de60_2:;
                uint64_t v96 = *v32; // 0x40de60
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40dfec;
                } else {
                    goto lab_0x40de6e;
                }
            }
          lab_0x40dfff:
            // 0x40dfff
            function_40e240(v27, v19);
            v24 = (int64_t)&g14;
            if (v18 != 0) {
                // 0x40e01e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40de04;
  lab_0x40dd6b:;
    int64_t * mem4 = malloc(size2); // 0x40dd6b
    v97 = (int64_t)&g14;
    if (mem4 != NULL) {
        // 0x40de11
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40ddc6;
    } else {
        goto lab_0x40dd82;
    }
  lab_0x40de04:
    // 0x40de04
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40dd82;
}
// Address range: 0x40e1f0 - 0x40e23e
int64_t function_40e1f0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40e1fc
    if (fd >= 3) {
        // 0x40e201
        return a1 & 0xffffffff;
    }
    // 0x40e210
    int64_t v1; // 0x40e1f0
    int64_t v2 = function_40fe80(a1, v1); // 0x40e210
    int32_t * v3 = __errno_location(); // 0x40e218
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40e240 - 0x40e2bb
int64_t function_40e240(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40e247
    if (fileno(stream) < 0) {
        // 0x40e2a7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40e25a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40e28b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40e2a7
            return fclose(stream);
        }
    }
    // 0x40e25c
    if ((int32_t)function_40e2c0(a1, v1) == 0) {
        // 0x40e2a7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40e268
    int32_t v3 = *v2; // 0x40e270
    int64_t result = fclose(stream); // 0x40e27e
    if (v3 != 0) {
        // 0x40e2b0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40e280
    return result;
}
// Address range: 0x40e2c0 - 0x40e300
int64_t function_40e2c0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40e2da
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40e2da
        return fflush(stream);
    }
    // 0x40e2e8
    function_40e300(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40e300 - 0x40e357
int64_t function_40e300(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40e300
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40e30a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40e33b
    int64_t result = -1; // 0x40e344
    if (v1 != -1) {
        // 0x40e346
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40e352
    return result;
}
// Address range: 0x40e360 - 0x40fe79
int64_t function_40e360(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x40e360
    int64_t v1; // bp-1416, 0x40e360
    int64_t v2; // bp-1656, 0x40e360
    if ((int32_t)function_4101f0(a3, &v1, &v2) < 0) {
        // 0x40e9d0
        return 0;
    }
    int64_t v3 = &v2; // 0x40e36b
    int64_t v4; // bp-1384, 0x40e360
    int64_t v5; // bp-1640, 0x40e360
    int64_t v6; // 0x40e360
    if ((int32_t)function_40ffd0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x40f2b7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x40f2d3
            free((int64_t *)v6);
        }
        // 0x40f2d8
        *__errno_location() = 22;
        // 0x40e9d0
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40e3cb
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x40e3d3
    uint64_t v9 = v8 + v6; // 0x40e3d7
    int64_t v10; // 0x40e360
    char * v11; // 0x40e360
    int64_t v12; // 0x40e360
    if (v9 < v8) {
        // 0x40ea80
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40e989;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x40ea80
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x40e989;
        } else {
            uint64_t size = v9 + 6; // 0x40e3e7
            if (size < 4000) {
                // 0x40e530
                v12 = 0;
                int64_t v13; // bp-1784, 0x40e360
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x40e424;
            } else {
                if (size == -1) {
                    // 0x40ea80
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x40e989;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x40e408
                    if (mem == NULL) {
                        // 0x40ea80
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x40e989;
                    } else {
                        // 0x40e41d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x40e424;
                    }
                }
            }
        }
    }
  lab_0x40e950_2:;
    // 0x40e950
    int64_t v14; // 0x40e360
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x40e958
    int64_t v17 = v16; // 0x40e966
    int64_t v18 = v16; // 0x40e966
    int64_t v19 = v15; // 0x40e966
    int64_t v20; // 0x40e448
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x40eb78;
    } else {
        goto lab_0x40e971;
    }
  lab_0x40e989:
    // 0x40e989
    if (v6 != (int64_t)&v4) {
        // 0x40e9a0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40e9bc
        free((int64_t *)v6);
    }
    // 0x40e9c1
    *(int32_t *)v10 = 12;
    // 0x40e9d0
    return 0;
  lab_0x40e424:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x40e45d
    int64_t v23 = *v22; // 0x40e45d
    int64_t v24 = 0; // 0x40e463
    int64_t v25 = v20; // 0x40e463
    int64_t v26 = v21; // 0x40e463
    int64_t v27 = 0; // 0x40e463
    int64_t v28; // 0x40e360
    int64_t v29; // 0x40e360
    int64_t v30; // 0x40e360
    int64_t v31; // 0x40e360
    int64_t v32; // 0x40e360
    int64_t v33; // 0x40e360
    int64_t v34; // 0x40e360
    if (v23 == a3) {
        goto lab_0x40ea73;
    } else {
        int64_t v35 = v23 - a3; // 0x40e469
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40e47b;
    }
  lab_0x40ea73:;
    int64_t v36 = v24; // 0x40ea76
    float80_t v37; // 0x40e360
    float80_t v38 = v37; // 0x40ea76
    float80_t v39; // 0x40e360
    float80_t v40 = v39; // 0x40ea76
    int64_t v41 = v25; // 0x40ea76
    int64_t v42 = v26; // 0x40ea76
    int64_t v43 = v27; // 0x40ea76
    int64_t v44; // 0x40e360
    int64_t v45 = v44; // 0x40ea76
    goto lab_0x40e5d8;
  lab_0x40e5d8:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x40e360
    int64_t v51; // 0x40e360
    int64_t v52; // 0x40e360
    int64_t v53; // 0x40e360
    int64_t v54; // 0x40e360
    int64_t v55; // 0x40e360
    int64_t v56; // 0x40e360
    int64_t v57; // 0x40e360
    int64_t dest_mem2; // 0x40e360
    int64_t dest_mem3; // 0x40e360
    int64_t v58; // 0x40e360
    float80_t v59; // 0x40e360
    float80_t v60; // 0x40e360
    float80_t v61; // 0x40e360
    float80_t v62; // 0x40e360
    float80_t v63; // 0x40e360
    uint64_t v64; // 0x40f706
    char * v65; // 0x40e5ec
    char v66; // 0x40e5ec
    int64_t v67; // 0x40e614
    uint32_t v68; // 0x40e618
    int64_t v69; // 0x40e9f5
    char v70; // 0x40e360
    if (v1 == v49) {
        // 0x40f700
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40fe6a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x40f762;
            } else {
                goto lab_0x40e950_2;
            }
        } else {
            // 0x40f710
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x40f762;
            } else {
                if (v47 != 0) {
                    // 0x40fd2d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40e950_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x40fd33
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40f72e;
                        } else {
                            goto lab_0x40fd3f;
                        }
                    }
                } else {
                    // 0x40f71e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40f72e;
                    } else {
                        goto lab_0x40fd3f;
                    }
                }
            }
        }
    } else {
        // 0x40e5ec
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x40e5f1
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40f08c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x40f1c0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x40e950_2;
                } else {
                    goto lab_0x40ea52;
                }
            } else {
                // 0x40ea02
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x40ea52;
                } else {
                    if (v47 != 0) {
                        // 0x40f2f0
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x40e950_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x40f2f6
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x40ea20;
                            } else {
                                goto lab_0x40f302;
                            }
                        }
                    } else {
                        // 0x40ea10
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x40ea20;
                        } else {
                            goto lab_0x40f302;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40f08c
                abort();
                // UNREACHABLE
            }
            // 0x40e609
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g88 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x40ef80
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40ea57;
                }
                case 19: {
                    // 0x40ef70
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40ea57;
                }
                case 20: {
                    // 0x40ef58
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40ea57;
                }
                case 21: {
                    goto lab_0x40eb40;
                }
                case 22: {
                    goto lab_0x40eb40;
                }
                default: {
                    // 0x40e62a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x40ead0
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40eaed;
                        } else {
                            // 0x40ead7
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x40e660;
                            } else {
                                goto lab_0x40eaed;
                            }
                        }
                    } else {
                        goto lab_0x40e660;
                    }
                }
            }
        }
    }
  lab_0x40e47b:;
    int64_t v75 = v34;
    float80_t v76; // 0x40e360
    float80_t v77 = v76;
    float80_t v78; // 0x40e360
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x40e360
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40e47e
    int64_t v89 = v85; // 0x40e47e
    int64_t v90 = v84; // 0x40e47e
    float80_t v91 = v79; // 0x40e47e
    float80_t v92 = v77; // 0x40e47e
    int64_t v93 = v75; // 0x40e47e
    int64_t v94 = v80; // 0x40e47e
    int64_t v95 = v81; // 0x40e47e
    int64_t v96 = v82; // 0x40e47e
    int64_t v97 = v87; // 0x40e47e
    int64_t v98; // 0x40e360
    int64_t v99; // 0x40e360
    int64_t v100; // 0x40e360
    int64_t v101; // 0x40e360
    int64_t v102; // 0x40e360
    if (v82 >= v87) {
        goto lab_0x40e5c9;
    } else {
        if (v82 != 0) {
            // 0x40e560
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x40e950_2;
            } else {
                int64_t v103 = 2 * v82; // 0x40e566
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40e57b;
                } else {
                    goto lab_0x40e56e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x40e4a4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40e58e;
                } else {
                    goto lab_0x40e4b0;
                }
            } else {
                goto lab_0x40e56e;
            }
        }
    }
  lab_0x40e5c9:
    // 0x40e5c9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x40e5d8;
  lab_0x40f762:
    // 0x40f762
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40f76a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40f77b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x40f787
    if (v12 != 0) {
        // 0x40f793
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x40f7b2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40f7ce
        free((int64_t *)v6);
    }
    // 0x40f7d3
    *a2 = v46;
    // 0x40e9d0
    return result;
  lab_0x40eb40:
    // 0x40eb40
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x40ea57;
  lab_0x40e56e:
    // 0x40e56e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x40e950_2;
    } else {
        goto lab_0x40e57b;
    }
  lab_0x40eb78:
    // 0x40eb78
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x40e971;
  lab_0x40e971:
    if (v12 == 0) {
        // 0x40ea80
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40e989;
    } else {
        // 0x40e981
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x40e989;
    }
  lab_0x40ea52:
    // 0x40ea52
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x40ea57;
  lab_0x40e660:;
    int64_t v273 = (int64_t)v11; // 0x40e660
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x40e667
    int64_t v275 = v273 + 1; // 0x40e66b
    *v11 = 37;
    int64_t v276 = v275; // 0x40e674
    if (v274 % 2 != 0) {
        // 0x40e676
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x40e667
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x40e687
    if ((v277 & 2) != 0) {
        // 0x40e689
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x40e693
    if ((v277 & 4) != 0) {
        // 0x40e695
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x40e69f
    if ((v277 & 8) != 0) {
        // 0x40e6a1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40e6ab
    if ((v277 & 16) != 0) {
        // 0x40e6ad
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x40e6b7
    if ((v277 & 64) != 0) {
        // 0x40e6b9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x40e6c3
    if ((v277 & 32) != 0) {
        // 0x40e6c5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40e6cd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x40e6d1
    int64_t v293 = v290; // 0x40e6d8
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x40e6e7
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40e70a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40e70e
    int64_t v298 = v295; // 0x40e715
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x40e724
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40e61a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x40e750
    int64_t v272; // 0x40e360
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x40e759
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x40eb58;
        } else {
            if (v301 == 12) {
                // 0x40f318
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x40e780;
            } else {
                // 0x40e770
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x40eb50
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x40eb58;
                } else {
                    goto lab_0x40e780;
                }
            }
        }
    } else {
        goto lab_0x40e780;
    }
  lab_0x40ea57:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x40ea57
    int64_t v111 = v55 + 88; // 0x40ea5b
    int64_t v112 = *(int64_t *)v111; // 0x40ea5f
    int64_t v113 = v49 + 1; // 0x40ea62
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x40e469
        int64_t v115 = v114 + v105; // 0x40e46f
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
            // 0x40ea98
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
                goto lab_0x40e950_2;
            } else {
                goto lab_0x40e5c9;
            }
        } else {
            goto lab_0x40e47b;
        }
    } else {
        goto lab_0x40ea73;
    }
  lab_0x40e57b:;
    int64_t v116 = v80 == v20; // 0x40e582
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x40e4b0;
    } else {
        goto lab_0x40e58e;
    }
  lab_0x40e58e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x40e360
    if (v102 != 0) {
        goto lab_0x40e4b0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40e5aa
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x40eb65;
        } else {
            // 0x40e5b8
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
            goto lab_0x40e5c9;
        }
    }
  lab_0x40e4b0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x40e4c7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x40e950_2;
    } else {
        // 0x40e4ed
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x40e515
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
        goto lab_0x40e5c9;
    }
  lab_0x40f72e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x40fcf4
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x40e950_2;
        } else {
            // 0x40fd05
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40fd1a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x40f762;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x40f751
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x40eb65;
        } else {
            // 0x40f75f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x40f762;
        }
    }
  lab_0x40fd3f:
    // 0x40fd3f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x40e950_2;
    } else {
        goto lab_0x40f72e;
    }
  lab_0x40eaed:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40eaed
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x40eaf1
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x40eaf5
    int64_t v123 = 0; // 0x40eafc
    int64_t v124 = v122; // 0x40eafc
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x40eb02
        int64_t v126 = v120; // 0x40eb0a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x40fa91
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x40faa9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40fabb
            int64_t v131 = v128; // 0x40fac4
            int64_t v132 = v130; // 0x40fac4
            int64_t v133; // 0x40e360
            int64_t v134; // 0x40fad6
            if (v130 < v129) {
                // 0x40fac6
                if (v121 == v128) {
                    // break -> 0x40e8e0
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40e8cb
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x40e8e0
                        goto lab_0x40e8e0;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x40fa88
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x40fa91
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x40fac6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x40e8e0
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40e8cb
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x40e8e0
                            goto lab_0x40e8e0;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x40fa88
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x40eb14
            if (*(int32_t *)v135 != 5) {
                // 0x40f08c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x40eb20
            int64_t v137 = v136; // 0x40eb20
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40eb2d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x40e8e0:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x40e8e0
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x40e8e4
    int64_t v142; // 0x40e360
    int64_t v143; // 0x40e360
    int64_t v144; // 0x40e360
    if (v140 == v141) {
        goto lab_0x40ef90;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x40e8f1
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x40faf4
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40fafd
            if (v141 == v146) {
                goto lab_0x40efae;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x40fb23
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40fb2a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x40fb43
                int64_t v152 = v151; // 0x40fb4c
                int64_t v153 = v149; // 0x40fb4c
                int64_t v154; // 0x40e360
                int64_t v155; // 0x40fb57
                if (v151 < v150) {
                    // 0x40fb4e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x40e950_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40fb6a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x40e950_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x40fb10
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x40fb19
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40fb4e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x40e950_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40fb6a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x40e950_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x40fb10
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40e91c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x40e903
            if (*(int32_t *)v156 != 5) {
                // 0x40f08c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x40e910
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x40ef90;
            } else {
                goto lab_0x40e91c;
            }
        }
    }
  lab_0x40e780:
    // 0x40e780
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40e78d
    int64_t v160 = 0; // 0x40e795
    if (v159 != -1) {
        // 0x40e79b
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40f08c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40e7be
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40e7cc
        if (*(int32_t *)v162 != 5) {
            // 0x40f08c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40e7df
        int64_t v164; // bp-8, 0x40e360
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x40e360
    uint64_t v165; // 0x40e7f6
    if (v46 > 0xfffffffffffffffd) {
        // 0x40f228
        v14 = v48;
        if (v47 == -1) {
            // 0x40e854
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x40e950_2;
    } else {
        // 0x40e800
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x40e854
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x40ef30
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x40e950_2;
            } else {
                int64_t v167 = 2 * v47; // 0x40ef36
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x40e822;
                } else {
                    goto lab_0x40ef42;
                }
            }
        } else {
            // 0x40e812
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x40e822;
            } else {
                goto lab_0x40ef42;
            }
        }
    }
  lab_0x40ea20:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x40f249
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x40e950_2;
        } else {
            // 0x40f261
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x40f272
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x40ea52;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x40ea41
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x40eb65;
        } else {
            // 0x40ea4f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x40ea52;
        }
    }
  lab_0x40f302:
    // 0x40f302
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x40e950_2;
    } else {
        goto lab_0x40ea20;
    }
  lab_0x40ef90:
    // 0x40ef90
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x40efae;
  lab_0x40eb58:
    // 0x40eb58
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x40e780;
  lab_0x40eb65:
    // 0x40eb65
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x40eb78;
  lab_0x40efae:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x40efb4
    v14 = v48;
    int64_t v170; // 0x40e360
    int64_t v171; // 0x40e360
    int64_t * v172; // 0x40e360
    int64_t v173; // 0x40e360
    int64_t v174; // bp-760, 0x40e360
    uint64_t size5; // 0x40efb8
    if (v169 == -1) {
        goto lab_0x40e950_2;
    } else {
        // 0x40efc9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x40f029;
        } else {
            // 0x40efd5
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x40e950_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40effd
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x40e950_2;
                } else {
                    goto lab_0x40f029;
                }
            }
        }
    }
  lab_0x40e91c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x40efae;
    } else {
        // 0x40e925
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x40efae;
        } else {
            goto lab_0x40e950_2;
        }
    }
  lab_0x40e822:
    // 0x40e822
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x40f1e9
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x40f204
            if (v48 == v20 && v46 != 0) {
                // 0x40f212
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x40e854
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x40e843
        v14 = v48;
        if (mem11 != NULL) {
            // 0x40e854
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x40e950_2;
  lab_0x40ef42:
    // 0x40ef42
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x40e950_2;
    } else {
        goto lab_0x40e822;
    }
  lab_0x40f029:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x40e360
    int64_t v181; // 0x40e360
    int64_t v182; // 0x40e360
    int64_t v183; // 0x40e360
    int64_t v184; // 0x40e360
    int64_t v185; // 0x40e360
    int64_t v186; // 0x40e360
    int64_t v187; // 0x40e360
    int64_t v188; // 0x40e360
    int64_t v189; // 0x40e360
    int64_t v190; // 0x40e360
    int64_t v191; // 0x40e360
    int64_t v192; // 0x40e360
    int64_t v193; // 0x40e360
    float80_t v194; // 0x40e360
    float80_t v195; // 0x40e360
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x40fba2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x40fbb0
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
            // 0x40fcdd
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
        goto lab_0x40f4e9;
    } else {
        // 0x40f031
        int64_t v198; // 0x40e360
        float80_t v199; // 0x40e360
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x40f7f1
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40f7fe
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40f65a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40f05f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x40f068
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40f08c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40f08c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x40fbd6
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x40fbd6
                            v181 = v187 + 3;
                            goto lab_0x40fd51;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x40fd51;
                            } else {
                                goto lab_0x40fc12;
                            }
                        }
                    } else {
                        // 0x40f8e3
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x40f4d7;
                        } else {
                            int64_t v202 = v187 + 2; // 0x40f8f1
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40fe3a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x40f938
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40f94b
                                int64_t v207 = v176 & 0xffffffff; // 0x40f94e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40f95c
                                int64_t v209 = v187 + 1; // 0x40f979
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40f98e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40f99b
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x40f4e9;
                        }
                    }
                } else {
                    // 0x40f688
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x40f688
                        v180 = v187 + 1;
                        goto lab_0x40fc37;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x40fc37;
                        } else {
                            goto lab_0x40f6a8;
                        }
                    }
                }
            } else {
                // 0x40f4c0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x40f4d7;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40fa0c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40fa1d
                    char v215 = *v213; // 0x40fa24
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x40fa60
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40fa6d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x40fa35
                        v182 = v218;
                        int64_t v219; // 0x40fa27
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x40f4e9;
                }
            }
        } else {
            float80_t v220; // 0x40e360
            if (v220 != 0.0L) {
                // 0x40f08c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40f6db
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40f6ea
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
                // 0x40f9c3
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
            goto lab_0x40f4e9;
        }
    }
  lab_0x40f4e9:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40f4ec
    int64_t v229 = v228; // 0x40f4f2
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x40f4f4
        int64_t v232 = v231 + v224; // 0x40f4f7
        int64_t v233 = v232 - v225; // 0x40f4fe
        if ((v230 & 2) != 0) {
            // 0x40f9a3
            v229 = v233;
            int64_t v234 = v224; // 0x40f9a6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x40f9b0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x40f9b0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x40f815
                int64_t v238 = v224; // 0x40f81b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x40f829
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x40f820
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x40f835
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x40f848
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
                int64_t v243 = v224; // 0x40f521
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x40f541
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x40f538
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40f54a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x40f558
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
        // 0x40f08c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x40f588
    int64_t dest_mem5 = v48; // 0x40f595
    int64_t v250 = v248; // 0x40f595
    int64_t v251 = v47; // 0x40f595
    int64_t v252; // 0x40e360
    if (v47 - v46 > v248) {
        goto lab_0x40f610;
    } else {
        if (v249 < v46) {
            // 0x40f7e2
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x40e950_2;
            } else {
                goto lab_0x40f610;
            }
        } else {
            // 0x40f5a0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x40f610;
            } else {
                if (v47 != 0) {
                    // 0x40fb78
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40e950_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x40fb7e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40f5be;
                        } else {
                            goto lab_0x40fb8a;
                        }
                    }
                } else {
                    // 0x40f5ae
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40f5be;
                    } else {
                        goto lab_0x40fb8a;
                    }
                }
            }
        }
    }
  lab_0x40f610:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x40f621
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40f63d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x40ea57;
  lab_0x40f4d7:
    // 0x40f4d7
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x40f4e9;
  lab_0x40fc37:;
    char * v257 = nl_langinfo(0x10000); // 0x40fc6a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40fc7b
    char v259 = *v257; // 0x40fc82
    int64_t v260 = v176 & 0xffffffff; // 0x40fc85
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x40fc93
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x40fcc0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40fccd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x40f6a8;
  lab_0x40f6a8:
    // 0x40f6a8
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
    goto lab_0x40f4e9;
  lab_0x40f5be:
    // 0x40f5be
    if (v48 == 0 || v48 == v20) {
        // 0x40f85b
        int64_t size7; // 0x40e360
        int64_t * mem12 = malloc((int32_t)size7); // 0x40f872
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x40e950_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40f87e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x40f8a9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x40f610;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40f5ed
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x40e950_2;
        } else {
            // 0x40f5fb
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x40f610;
        }
    }
  lab_0x40fb8a:
    // 0x40fb8a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x40e950_2;
    } else {
        goto lab_0x40f5be;
    }
  lab_0x40fd51:;
    int64_t v265 = v187 + 4; // 0x40fd51
    char v266 = *nl_langinfo(0x10000); // 0x40fd9c
    int64_t v267 = v176 & 0xffffffff; // 0x40fd9f
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x40fda6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40fdcd
        int64_t v270 = v265 + 1; // 0x40fdd5
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
    goto lab_0x40fc12;
  lab_0x40fc12:
    // 0x40fc12
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x40f4e9;
}
// Address range: 0x40fe80 - 0x40fe8e
int64_t function_40fe80(int64_t a1, int64_t a2) {
    // 0x40fe80
    int64_t v1; // 0x40fe80
    return function_40fe90(a1, 0, 3, v1);
}
// Address range: 0x40fe90 - 0x40ffc5
int64_t function_40fe90(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x40ff70
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40fecc
    int64_t v2; // 0x40fe90
    if (g81 < 0) {
        int64_t v3 = function_40fe90(fd, 0, v1, a4); // 0x40ff14
        int64_t v4 = v3 & 0xffffffff; // 0x40ff19
        if ((int32_t)v3 < 0) {
            // 0x40ff00
            return v4 & 0xffffffff;
        }
        // 0x40ff1f
        v2 = v4;
        if (g81 != -1) {
            // 0x40ff00
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40fee7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40fef6
            g81 = 1;
            // 0x40ff00
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40fe90(fd & 0xffffffff, 0, v1, a4); // 0x40ffa7
        int64_t v7 = v6 & 0xffffffff; // 0x40ffac
        if ((int32_t)v6 < 0) {
            // 0x40ff00
            return v7 & 0xffffffff;
        }
        // 0x40ffb6
        g81 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40ff2f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40ff3a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40ff00
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40ff52
    close(fd2);
    // 0x40ff00
    return 0xffffffff;
}
// Address range: 0x40ffd0 - 0x4101e9
int64_t function_40ffd0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x410033
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x40ffe8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x40fff9
    g89 = v5;
    int64_t v6; // 0x40ffd0
    int64_t v7; // 0x40ffd0
    int64_t v8; // 0x40ffd0
    int64_t v9; // 0x40ffd0
    int64_t v10; // 0x40ffd0
    int64_t v11; // 0x40ffd0
    int64_t v12; // 0x40ffd0
    uint32_t v13; // 0x4100f0
    int64_t * v14; // 0x410120
    int64_t v15; // 0x410128
    uint32_t v16; // 0x410170
    uint32_t v17; // 0x410140
    int64_t * v18; // 0x4100d0
    int64_t v19; // 0x4100d0
    int64_t * v20; // 0x4100e0
    int64_t v21; // 0x4100e0
    int64_t * v22; // 0x4100b8
    int64_t v23; // 0x4100b8
    int64_t * v24; // 0x4100a0
    int64_t v25; // 0x4100a0
    int64_t * v26; // 0x4101c0
    uint32_t v27; // 0x410080
    int64_t v28; // 0x4101c0
    int64_t * v29; // 0x4101b0
    int64_t v30; // 0x4101b0
    uint32_t v31; // 0x410060
    int64_t * v32; // 0x4101d8
    int64_t v33; // 0x4101d8
    int64_t v34; // 0x410183
    uint32_t v35; // 0x410040
    int64_t v36; // 0x410157
    uint32_t v37; // 0x410008
    int32_t * v38; // 0x4100f0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x410080
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x410087
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x4100d0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x410093
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x410026
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x410060
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x410067
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x4100e0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x410073
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x410026
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x410040
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x410047
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x4100b8
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x410053
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x410026
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
            // 0x410008
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x410013
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x4100a0
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x41001f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x410026
            break;
        }
        case 11: {
            // 0x4100f0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x4100ff
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x4101c0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x41010c
            *(int64_t *)(v4 + 16) = __asm_movsd_6(__asm_movsd(*(int64_t *)v10));
            // break -> 0x410026
            break;
        }
        case 12: {
            // 0x410120
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x410026
            break;
        }
        case 15: {
            // 0x410170
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x410177
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x4101b0
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x410183
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x410026
            break;
        }
        case 16: {
            // 0x410140
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x41014b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x4101d8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x410157
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x410026
            break;
        }
        default: {
            // 0x410033
            return 0xffffffff;
        }
    }
    // 0x410026
    v3++;
    int64_t v39 = v4 + 32; // 0x410031
    while (v3 < v2) {
        // 0x40fff0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g89 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x410080
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x410087
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x4100d0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x410093
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x410026
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x410060
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x410067
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x4100e0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x410073
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x410026
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x410040
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x410047
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x4100b8
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x410053
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x410026
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
                // 0x410008
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x410013
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x4100a0
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x41001f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x410026
                break;
            }
            case 11: {
                // 0x4100f0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x4100ff
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x4101c0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x41010c
                *(int64_t *)(v4 + 16) = __asm_movsd_6(__asm_movsd(*(int64_t *)v10));
                // break -> 0x410026
                break;
            }
            case 12: {
                // 0x410120
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x410026
                break;
            }
            case 15: {
                // 0x410170
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x410177
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x4101b0
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x410183
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x410026
                break;
            }
            case 16: {
                // 0x410140
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x41014b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x4101d8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x410157
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x410026
                break;
            }
            default: {
                // 0x410033
                return 0xffffffff;
            }
        }
        // 0x410026
        v3++;
        v39 = v4 + 32;
    }
    // 0x410033
    return 0;
}
// Address range: 0x4101f0 - 0x410ef9
int64_t function_4101f0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x4101f2
    int64_t v4 = v1 + 16; // 0x4101f6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x410229
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x41023e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x41026b
    int32_t v8 = 0; // 0x410270
    int64_t v9 = 0; // 0x410270
    int64_t v10 = v3; // 0x410270
    int64_t v11 = a1; // 0x410270
    int64_t v12 = 0; // 0x410270
    char v13; // 0x4101f0
    int64_t v14; // 0x4101f0
    int64_t v15; // 0x4101f0
    int64_t v16; // 0x4101f0
    int64_t v17; // 0x4101f0
    int64_t v18; // 0x4101f0
    int64_t v19; // 0x4101f0
    int64_t v20; // 0x4101f0
    int64_t v21; // 0x4101f0
    int64_t v22; // 0x4101f0
    int64_t v23; // 0x4101f0
    int64_t v24; // 0x4101f0
    int64_t v25; // 0x4101f0
    int64_t v26; // 0x4101f0
    int64_t v27; // 0x4101f0
    int64_t v28; // 0x4101f0
    int64_t v29; // 0x4101f0
    int64_t v30; // 0x4101f0
    int32_t v31; // 0x4101f0
    int64_t v32; // 0x4101f0
    int64_t v33; // 0x410260
    int64_t v34; // 0x4102b0
    int64_t * v35; // 0x4102d3
    int64_t v36; // 0x410336
    if (v7 != 0) {
        // 0x410260
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x4101f0
        int64_t v38 = 7; // 0x4101f0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x4101f0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x410260:
            // 0x410260
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x4102a3
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x4102b8
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x4102f4
                int64_t v43 = v42; // 0x4102f4
                int64_t v44 = v43; // 0x4102fd
                int64_t v45 = v33; // 0x4102fd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x410690
                    char v47 = *(char *)v46; // 0x410694
                    int64_t v48 = v46; // 0x41069d
                    while (v47 < 58) {
                        // 0x410690
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x41069f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x410d35
                        char v52 = *(char *)v51; // 0x410d35
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x410d39
                        int64_t v54 = v33; // 0x410d4d
                        int64_t v55 = v51; // 0x410d4d
                        char v56 = v52; // 0x410d4d
                        int64_t v57 = v53; // 0x410d4d
                        bool v58 = v52 < 58; // 0x410d4d
                        bool v59 = v52 < 58; // 0x410d4d
                        char v60 = v52; // 0x410d4d
                        int64_t v61 = v51; // 0x410d4d
                        int64_t v62; // 0x410d62
                        int64_t v63; // 0x410d35
                        char v64; // 0x410d35
                        int64_t v65; // 0x410d39
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x4109b8_9;
                            }
                            // 0x410d33
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
                                // 0x410d4f
                                if (v64 >= 58) {
                                    goto lab_0x4109b8_9;
                                }
                                // 0x410d33
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
                        int64_t v67 = v55; // 0x410d08
                        while (v58) {
                            // 0x410d0e
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
                                    goto lab_0x4109b8_9;
                                }
                                // 0x410d33
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
                                    // 0x410d4f
                                    if (v64 >= 58) {
                                        goto lab_0x4109b8_9;
                                    }
                                    // 0x410d33
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
                            // 0x410d04
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x410e0d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x4109b8_9;
                        }
                        int64_t v68 = v54 + 2; // 0x410e1e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x4101f0
                v36 = v45;
                char v70; // 0x4101f0
                while (true) {
                    // 0x410336
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x410350
                                *v41 = *v41 | 2;
                                // break -> 0x410330
                                break;
                            }
                            case 43: {
                                // 0x410360
                                *v41 = *v41 | 4;
                                // break -> 0x410330
                                break;
                            }
                            case 32: {
                                // 0x410370
                                *v41 = *v41 | 8;
                                // break -> 0x410330
                                break;
                            }
                            case 35: {
                                // 0x410380
                                *v41 = *v41 | 16;
                                // break -> 0x410330
                                break;
                            }
                            case 48: {
                                // 0x410390
                                *v41 = *v41 | 32;
                                // break -> 0x410330
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x410398
                                    break;
                                }
                                // 0x410326
                                *v41 = *v41 | 64;
                                // break -> 0x410330
                                break;
                            }
                        }
                    } else {
                        // 0x41033f
                        *v41 = *v41 | 1;
                    }
                    // 0x410330
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x4101f0
                int64_t * v72; // 0x4102c1
                int64_t * v73; // 0x4102ca
                if (v70 == 42) {
                    // 0x41040d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x41042d
                    int64_t v75 = v74; // 0x41042d
                    int64_t v76 = v75 + 0xffffffd0; // 0x410431
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x410437
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x41080d
                        char v80 = *(char *)v79; // 0x410811
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x41080d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x41081d
                        v26 = v79;
                        int64_t v81 = v75; // 0x410821
                        int64_t v82 = v36; // 0x410821
                        int64_t v83 = 0; // 0x410821
                        if (v80 != 36) {
                            goto lab_0x41043d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x410852
                            int64_t v89 = v85; // 0x410852
                            int64_t v90 = v87; // 0x410852
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x410857
                            int64_t v95 = v92 + 1; // 0x41085a
                            char v96 = *(char *)v95; // 0x41085a
                            int64_t v97 = v96; // 0x41085a
                            while (v94 < v91) {
                                // 0x410871
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x4109b8_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x41082b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x410834
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
                                    // 0x410871
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x4109b8_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x41082b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x410eab
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x4109b8_9;
                            }
                            // 0x410eb9
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x41044c;
                        }
                    } else {
                        goto lab_0x41043d;
                    }
                } else {
                    // 0x41039d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x4101f0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x410abb
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x410ac0
                        int64_t v102 = v71; // 0x410ac9
                        char * v103 = v100; // 0x410ac9
                        int64_t v104 = v36; // 0x410ac9
                        int64_t v105 = v71; // 0x410ac9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x410ad3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x410ad3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x410ad3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x410ae2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x410b05
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x4103a8;
                }
            } else {
                goto lab_0x410268;
            }
        }
    }
  lab_0x410272:
    // 0x410272
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x410294
    return 0;
  lab_0x4109b8_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x4109c3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x4109d5
    if (v3 != v115) {
        // 0x4109e0
        free((int64_t *)v115);
    }
    // 0x4109e5
    *__errno_location() = 22;
    // 0x410294
    return 0xffffffff;
  lab_0x410b90_5:;
    // 0x410b90
    int64_t v116; // 0x4101f0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x410b95
    int64_t v119; // 0x4101f0
    if (v4 == v117) {
        goto lab_0x410ba9_3;
    } else {
        // 0x410b97
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x410ba9_3;
    }
  lab_0x410ba9_3:;
    int64_t v120 = *v5; // 0x410ba9
    int32_t * v121; // 0x410bb9
    if (v3 == v120) {
        // 0x410bb9
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x410bb4
    free((int64_t *)v120);
    // 0x410bb9
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x410268:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x41026b
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
        // break -> 0x410272
        goto lab_0x410272;
    }
    goto lab_0x410260;
  lab_0x41043d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x41043d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x4107e3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x4109b8_9;
        }
        // 0x4107fb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x41044c;
  lab_0x4103a8:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x4103ab
    int64_t v147 = v339; // 0x4103ab
    int64_t v145 = v338; // 0x4103ab
    int64_t v143 = v337; // 0x4103ab
    int64_t v186; // 0x4101f0
    int64_t v190; // 0x4101f0
    int64_t v189; // 0x4101f0
    int64_t v188; // 0x4101f0
    int64_t v187; // 0x4101f0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x4104b0;
    } else {
        goto lab_0x4103b1;
    }
  lab_0x41044c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x41044c
    int64_t v132 = v128; // 0x410453
    int64_t v133 = v16; // 0x410453
    int64_t v134 = v131; // 0x410453
    int64_t v135; // 0x4101f0
    int64_t v136; // 0x4101f0
    int64_t v137; // 0x4101f0
    int64_t v138; // 0x4106ff
    if (v16 > v127) {
        goto lab_0x41045c;
    } else {
        uint64_t v139 = 2 * v16; // 0x4106f5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x410b90_5;
        }
        int64_t size = 32 * v138; // 0x41071e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x410c7c
            if (mem == NULL) {
                goto lab_0x410ba9_3;
            }
            // 0x410c9e
            v135 = (int64_t)mem;
            goto lab_0x410ca9;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x41073f
            int64_t v140 = *v6; // 0x410744
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x410b90_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x41073f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x410ca9;
            } else {
                goto lab_0x41077d;
            }
        }
    }
  lab_0x4103b1:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x4103b8
    int64_t v151 = v146; // 0x4103b8
    int64_t v152 = v144; // 0x4103b8
    uint64_t v153; // 0x4101f0
    int64_t v154; // 0x4101f0
    int64_t v155; // 0x4103f7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x4103fb
        int64_t v158; // 0x4101f0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x410560
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x4103f3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x410568
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x4103f0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x4103f3
                    break;
                }
            }
        } else {
            // 0x410400
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x4103f3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x410568
    int64_t v162 = v161 % 256; // 0x410574
    g90 = v162;
    int64_t v163 = 17; // 0x410577
    int64_t v164 = v154; // 0x410577
    int64_t v165 = v154; // 0x410577
    switch ((char)v161) {
        case 0: {
            goto lab_0x4105e1;
        }
        case 28: {
            goto lab_0x410932;
        }
        case 30: {
            // 0x41095e
            v163 = 14;
            v164 = 99;
            goto lab_0x410589;
        }
        case 32: {
            goto lab_0x410932;
        }
        case 33: {
            goto lab_0x410932;
        }
        case 34: {
            goto lab_0x410932;
        }
        case 46: {
            // 0x41094f
            v163 = 16;
            v164 = 115;
            goto lab_0x410589;
        }
        case 51: {
            goto lab_0x41096d;
        }
        case 60: {
            goto lab_0x410932;
        }
        case 62: {
            int32_t v166 = v153; // 0x410889
            int32_t v167 = v166 - 7; // 0x410889
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x41088f
            v163 = v168;
            v164 = v154;
            goto lab_0x410589;
        }
        case 63: {
            goto lab_0x4108e0;
        }
        case 64: {
            goto lab_0x410932;
        }
        case 65: {
            goto lab_0x410932;
        }
        case 66: {
            goto lab_0x410932;
        }
        case 68: {
            goto lab_0x4108e0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x41089f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x4108a5
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x4108ad
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x4108bb
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x4108cf
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x410589;
        }
        case 74: {
            goto lab_0x41096d;
        }
        case 75: {
            goto lab_0x410589;
        }
        case 78: {
            int32_t v171 = v153; // 0x410580
            int32_t v172 = v171 - 7; // 0x410580
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x410586
            v163 = v173;
            v164 = v154;
            goto lab_0x410589;
        }
        case 80: {
            goto lab_0x41096d;
        }
        case 83: {
            goto lab_0x41096d;
        }
        default: {
            goto lab_0x4109b8_9;
        }
    }
  lab_0x41045c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x410473
        int64_t v178 = v176; // 0x4101f0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x410468
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x410468
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x410481
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x41048d
    int32_t v182 = *v181; // 0x41048d
    if (v182 != 0) {
        // 0x410b0e
        if (v182 != 5) {
            goto lab_0x4109b8_9;
        }
        unsigned char v183 = *(char *)v129; // 0x410b17
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x4103a8;
    } else {
        // 0x410497
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x41049d
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
            goto lab_0x4103b1;
        } else {
            goto lab_0x4104b0;
        }
    }
  lab_0x4104b0:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x4104b0
    char v197 = *v196; // 0x4104b0
    int64_t * v198; // 0x4102d8
    *v198 = v192;
    int64_t v199; // 0x4101f0
    int64_t v200; // 0x4101f0
    int64_t v201; // 0x4101f0
    int64_t v202; // 0x4101f0
    int64_t v203; // 0x4101f0
    int64_t * v204; // 0x4102e1
    int64_t * v205; // 0x4102ea
    int64_t v206; // 0x4104c9
    if (v197 != 42) {
        char v207 = *v196; // 0x4106b0
        int64_t v208 = v193; // 0x4106b9
        char * v209; // 0x4101f0
        int64_t v210; // 0x4101f0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x4106c0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x4106c4
            v208 = v212;
            while (v214 < 58) {
                // 0x4106c0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x4106ce
            v209 = v213;
            v210 = v212;
        } else {
            // 0x4106b0
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x4106e1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x4103b1;
    } else {
        // 0x4104bf
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x4104df
        int64_t v219 = v218; // 0x4104df
        int64_t v220 = v219 + 0xffffffd0; // 0x4104e3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x4104e9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x410d94
            char v224 = *(char *)v223; // 0x410d98
            v221 = v223;
            while (v224 < 58) {
                // 0x410d94
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x410da4
            v201 = v223;
            int64_t v225 = v219; // 0x410da8
            int64_t v226 = v206; // 0x410da8
            int64_t v227 = 0; // 0x410da8
            if (v224 != 36) {
                goto lab_0x4104ef;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x410dd9
                int64_t v233 = v229; // 0x410dd9
                int64_t v234 = v231; // 0x410dd9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x410dde
                int64_t v239 = v236 + 1; // 0x410de5
                char v240 = *(char *)v239; // 0x410de9
                int64_t v241 = v240; // 0x410de9
                while (v238 < v235) {
                    // 0x410df7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x4109b8_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x410db2
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x410dbb
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
                        // 0x410df7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x4109b8_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x410db2
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x410ec7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x4109b8_9;
                }
                // 0x410ed5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x4104fe;
            }
        } else {
            goto lab_0x4104ef;
        }
    }
  lab_0x4105e1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x4105e6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x4105ee
    *a2 = v245;
    int64_t v246; // 0x4101f0
    int64_t v247; // 0x4101f0
    int64_t dest_mem; // 0x4101f0
    int64_t v248; // 0x4101f0
    int64_t v249; // 0x410ee3
    if (v246 > v245) {
        // 0x4105fa
        goto lab_0x410268;
    } else {
        if (v246 < 0) {
            // 0x410ee3
            v249 = *v6;
            v116 = v249;
            goto lab_0x410b90_5;
        }
        int64_t v250 = 2 * v246; // 0x410616
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x410ee3
            v249 = *v6;
            v116 = v249;
            goto lab_0x410b90_5;
        }
        int64_t v251 = *v5; // 0x410627
        int64_t size2 = 176 * v246; // 0x410639
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x410789
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x410cec
                v118 = v252;
                if (v4 == v252) {
                    // 0x410bb9
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x410b97
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x410ba9_3;
            }
            goto lab_0x4107a4;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x41064b
            if (mem4 == NULL) {
                // 0x410ee3
                v249 = *v6;
                v116 = v249;
                goto lab_0x410b90_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x41064b
            int64_t v254 = *v5; // 0x41066d
            int64_t v255 = *a2; // 0x410671
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x4107a4;
            } else {
                goto lab_0x41067f;
            }
        }
    }
  lab_0x410932:
    // 0x410932
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x410947
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x410589;
  lab_0x41096d:;
    uint32_t v335 = (int32_t)v153; // 0x410975
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x41097b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x410983
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x410991
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x41099e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x410589;
  lab_0x4108e0:;
    uint32_t v336 = (int32_t)v153; // 0x4108e8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x4108ee
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4108f6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x410904
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x410911
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x410589;
  lab_0x410589:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x4101f0
    int64_t v260; // 0x4101f0
    int64_t * v261; // 0x4102ef
    if (v259 == -1) {
        // 0x410a94
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x4109b8_9;
        }
        // 0x410aac
        v260 = v148;
    } else {
        // 0x410593
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x410598
    int64_t v264 = v258; // 0x41059f
    int64_t v265 = v162; // 0x41059f
    int64_t v266 = v263; // 0x41059f
    int64_t v267; // 0x4101f0
    int64_t v268; // 0x4101f0
    int64_t v269; // 0x4101f0
    int64_t v270; // 0x4101f0
    int64_t v271; // 0x4101f0
    if (v142 > v262) {
        goto lab_0x4105a5;
    } else {
        uint64_t v272 = 2 * v142; // 0x410a08
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x410a12
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x410b90_5;
        }
        int64_t size3 = 32 * v273; // 0x410a31
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x410a44
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x410b29
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x410ba9_3;
            }
            goto lab_0x410b46;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x410a51
            if (mem6 == NULL) {
                // 0x410ee3
                v249 = *v6;
                v116 = v249;
                goto lab_0x410b90_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x410a51
            int64_t v276 = v274 & 0xffffffff; // 0x410a56
            int64_t v277 = *v6; // 0x410a81
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x410b46;
            } else {
                goto lab_0x410a8b;
            }
        }
    }
  lab_0x4105a5:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x4105bb
        int64_t v282 = v279; // 0x4101f0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x4105b0
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x4105b0
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x4105c9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x4105d5
    int32_t v286 = *v285; // 0x4105d5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x4109fa
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x4109b8_9;
        }
    } else {
        // 0x4105df
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x4105e1;
  lab_0x410ca9:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x410ca9
    int64_t * v290; // 0x4101f0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x41077d;
  lab_0x41077d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x41045c;
  lab_0x4104ef:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x4104ef
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x410d6a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x4109b8_9;
        }
        // 0x410d82
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x4104fe;
  lab_0x4104fe:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x4104fe
    int64_t v300 = v296; // 0x410505
    int64_t v301 = v191; // 0x410505
    int64_t v302 = v299; // 0x410505
    int64_t v303; // 0x4101f0
    int64_t v304; // 0x4101f0
    int64_t v305; // 0x4101f0
    int64_t v306; // 0x410be2
    if (v191 > v295) {
        goto lab_0x41050e;
    } else {
        uint64_t v307 = 2 * v191; // 0x410bd8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x410b90_5;
        }
        int64_t size4 = 32 * v306; // 0x410bfd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x410e2e
            if (mem7 == NULL) {
                goto lab_0x410ba9_3;
            }
            // 0x410e50
            v304 = (int64_t)mem7;
            goto lab_0x410e5b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x410c1e
            int64_t v308 = *v6; // 0x410c23
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x410b90_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x410c1e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x410e5b;
            } else {
                goto lab_0x410c5c;
            }
        }
    }
  lab_0x4107a4:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x4101f0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x41067f;
  lab_0x41067f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x410268;
  lab_0x410b46:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x410b5c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x410a8b;
  lab_0x410a8b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x4105a5;
  lab_0x41050e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x410523
        int64_t v324 = v322; // 0x4101f0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x410518
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x410518
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x410531
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x41053e
    int32_t v328 = *v327; // 0x41053e
    if (v328 != 0) {
        // 0x410c65
        if (v328 != 5) {
            goto lab_0x4109b8_9;
        }
        unsigned char v329 = *(char *)v297; // 0x410c6e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x410548
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x410551
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x4103b1;
  lab_0x410e5b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x410e5b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x410c5c;
  lab_0x410c5c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x41050e;
}
// Address range: 0x410f00 - 0x410f5d
int64_t function_410f00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x410f00
    return function_401da0();
}
// Address range: 0x410f60 - 0x410f61
int64_t function_410f60(void) {
    // 0x410f60
    int64_t result; // 0x410f60
    return result;
}
// Address range: 0x410f70 - 0x410f88
int64_t function_410f70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x410f70
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g20);
}
// Address range: 0x410f88 - 0x410fa8
int64_t function_410f88(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g16; // 0x410f92
    while (*(int64_t *)v1 != -1) {
        // 0x410f93
        v1 -= 8;
    }
    // 0x410fa4
    return result;
}
