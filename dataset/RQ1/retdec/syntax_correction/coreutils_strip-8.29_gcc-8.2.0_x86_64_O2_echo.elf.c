#include "decompile_retdec.h"
// Address range: 0x401450 - 0x401455
int64_t function_401450(void) {
    // 0x401450
    abort();
    // UNREACHABLE
}
// Address range: 0x401455 - 0x40145a
int64_t function_401455(void) {
    // 0x401455
    abort();
    // UNREACHABLE
}
// Address range: 0x40145a - 0x40145f
int64_t function_40145a(void) {
    // 0x40145a
    abort();
    // UNREACHABLE
}
// Address range: 0x40145f - 0x401464
int64_t function_40145f(void) {
    // 0x40145f
    abort();
    // UNREACHABLE
}
// Address range: 0x401464 - 0x401469
int64_t function_401464(void) {
    // 0x401464
    abort();
    // UNREACHABLE
}
// Address range: 0x401469 - 0x40146e
int64_t function_401469(void) {
    // 0x401469
    abort();
    // UNREACHABLE
}
// Address range: 0x401470 - 0x4019b3
int64_t function_401470(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1;
    int64_t v2 = a2; // 0x401490
    char * v3; // 0x401470
    int64_t v4; // 0x401470
    int64_t v5; // 0x401470
    if (getenv("POSIXLY_CORRECT") == NULL) {
        goto lab_0x401546;
    } else {
        if (v1 < 2) {
            // 0x40167a
            function_401f90(a2);
            setlocale(LC_ALL, (char *)&g8);
            bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
            textdomain("coreutils");
            function_404c40(0x401ef0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
            goto lab_0x4016b4;
        } else {
            int64_t * str = (int64_t *)(a2 + 8);
            v2 = (int64_t)"-n";
            if (strcmp((char *)*str, "-n") == 0) {
                goto lab_0x401546;
            } else {
                // 0x4014b5
                function_401f90((int64_t)"-n");
                setlocale(LC_ALL, (char *)&g8);
                bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
                textdomain("coreutils");
                function_404c40(0x401ef0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
                v3 = (char *)*str;
                v5 = a1 + 0xffffffff & 0xffffffff;
                v4 = 1;
                goto lab_0x4014fc;
            }
        }
    }
  lab_0x401708:;
    // 0x401708
    int64_t v6; // 0x401470
    int64_t v7 = v6; // 0x401708
    int64_t v8 = v6 % 256; // 0x401708
    int64_t v9; // 0x401470
    int64_t v10 = v9; // 0x401708
    goto lab_0x40170b;
  lab_0x40170b:;
    int64_t v11 = (int64_t)g23; // 0x40170b
    int64_t * v12 = (int64_t *)(v11 + 40); // 0x401712
    uint64_t v13 = *v12; // 0x401712
    if (v13 >= *(int64_t *)(v11 + 48)) {
        // 0x4018c0
        __overflow(g23, (int32_t)v8);
    } else {
        // 0x401720
        *v12 = v13 + 1;
        *(char *)v13 = (char)v7;
    }
    char v14 = *(char *)v10; // 0x40172d
    int64_t v15 = v10; // 0x401736
    char v16 = v14; // 0x401736
    if (v14 == 0) {
        // break -> 0x4018d0
        goto lab_0x4018d0;
    }
    goto lab_0x40173c;
  lab_0x401847:;
    // 0x401847
    int64_t v24; // 0x401470
    int64_t v34 = v24;
    unsigned char v35 = *(char *)v34;
    int64_t v36 = (int64_t)v35 + 0xffffffd0; // 0x401847
    int64_t v23; // 0x401470
    int64_t v37 = v23 + 0xffffffd0 & 0xffffffff; // 0x40184a
    char v38 = v35; // 0x40184f
    int64_t v39 = v37; // 0x40184f
    int64_t v40 = v34; // 0x40184f
    if ((char)v36 < 8) {
        int64_t v41 = v34 + 1; // 0x401851
        v38 = *(char *)v41;
        v39 = v36 + 8 * v37 & 0xffffffff;
        v40 = v41;
    }
    int64_t v42 = v40;
    int64_t v43 = v39;
    unsigned char v44 = v38; // 0x401858
    v6 = v43;
    v9 = v42;
    if ((v44 & -8) == 48) {
        // 0x401869
        v6 = (int64_t)v44 + 0xffffffd0 + 8 * v43 & 0xffffffff;
        v9 = v42 + 1;
    }
    goto lab_0x401708;
  lab_0x40188e:;
    int64_t v45 = (int64_t)g23; // 0x40188e
    int64_t * v46 = (int64_t *)(v45 + 40); // 0x401899
    uint64_t v47 = *v46; // 0x401899
    int64_t v21; // 0x401741
    int64_t v22; // 0x40174f
    if (*(int64_t *)(v45 + 48) > v47) {
        // 0x4018a7
        *v46 = v47 + 1;
        *(char *)v47 = 92;
        v7 = v21;
        v8 = v21;
        v10 = v22;
    } else {
        // 0x40197f
        __overflow(g23, 92);
        v7 = v21;
        v8 = v21;
        v10 = v22;
    }
    goto lab_0x40170b;
  lab_0x401663:;
    // 0x401663
    int64_t v48; // 0x401470
    int64_t v49 = v48;
    char v50; // 0x401470
    char v51 = v50;
    int64_t v52 = 1; // 0x40166a
    int64_t v53 = v49; // 0x40166a
    int64_t v54; // 0x401470
    if (v51 == 101) {
        goto lab_0x401657;
    } else {
        int64_t v55 = v54;
        v52 = v55;
        v53 = 0;
        if (v51 != 110) {
            // 0x401650
            v52 = v51 == 69 ? 0 : v55 & 0xffffffff;
            v53 = v49;
            goto lab_0x401657;
        } else {
            goto lab_0x401657;
        }
    }
  lab_0x4016e5:;
    // 0x4016e5
    int64_t v56; // 0x401470
    if ((char)v56 == 0) {
        // 0x4016d4
        return 0;
    }
    goto lab_0x4016b4;
  lab_0x401918:;
    // 0x401918
    int64_t v72; // 0x401470
    int64_t v99 = v72 + 0xffffffff; // 0x401918
    int64_t v73; // 0x401470
    int64_t v60 = v73; // 0x4015de
    int64_t v96; // 0x401470
    int64_t v61 = v96; // 0x4015de
    int64_t v97; // 0x401470
    int64_t v62 = v97; // 0x4015de
    int64_t v63 = v99 & 0xffffffff; // 0x4015de
    v56 = v96;
    if ((int32_t)v99 < 1) {
        goto lab_0x4016e5;
    }
    goto lab_0x4015e4;
  lab_0x401546:
    // 0x401546
    function_401f90(v2);
    setlocale(LC_ALL, (char *)&g8);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_404c40(0x401ef0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v64; // 0x401470
    if (v1 != 2) {
        int64_t v100 = a1 + 0xffffffff; // 0x4019a0
        v64 = v100 & 0xffffffff;
        if ((int32_t)v100 < 1) {
            goto lab_0x4016b4;
        } else {
            goto lab_0x4015e4_2;
        }
    } else {
        char * str2 = (char *)*(int64_t *)(a2 + 8); // 0x401595
        if (strcmp(str2, "--help") == 0) {
            // 0x4019ac
            function_401b20(0);
            // UNREACHABLE
        }
        // 0x4015a2
        v64 = 1;
        if (strcmp(str2, "--version") == 0) {
            // 0x40194c
            function_404030((int64_t)g23, "echo", "GNU coreutils", (int64_t)g15, "Brian Fox", "Chet Ramey");
            // 0x4016d4
            return 0;
        }
        goto lab_0x4015e4_2;
    }
  lab_0x4016b4:;
    int64_t v57 = (int64_t)g23; // 0x4016b4
    int64_t * v58 = (int64_t *)(v57 + 40); // 0x4016bb
    uint64_t v59 = *v58; // 0x4016bb
    if (v59 >= *(int64_t *)(v57 + 48)) {
        // 0x401991
        __overflow(g23, 10);
    } else {
        // 0x4016c9
        *v58 = v59 + 1;
        *(char *)v59 = 10;
    }
  lab_0x4016d4:
    // 0x4016d4
    return 0;
  lab_0x4015e4_2:
    // 0x4015e4
    v60 = a2;
    v61 = 1;
    v62 = 0;
    v63 = v64;
    int64_t v65; // 0x401470
    int64_t v66; // 0x401470
    int64_t v67; // 0x401470
    int64_t v68; // 0x401470
    int64_t v69; // 0x4015e4
    char * v70; // 0x401470
    char v71; // 0x4015e7
    while (true) {
      lab_0x4015e4:
        // 0x4015e4
        v72 = v63;
        v65 = v62;
        v66 = v61;
        v67 = v60;
        v73 = v67 + 8;
        v69 = *(int64_t *)v73;
        v70 = (char *)v69;
        v71 = *v70;
        if (v71 != 45) {
            // break -> 0x4016ec
            break;
        }
        int64_t v74 = v69 + 1; // 0x4015f0
        char v75 = *(char *)v74; // 0x4015f0
        if (v75 != 0 != v75 < 111) {
            // break -> 0x4016ec
            break;
        }
        unsigned char v76 = (v75 + 59) % 64;
        if (v76 != 0 == (1 << (int64_t)v76) % 0x20100000002 == 0) {
            // break -> 0x4016ec
            break;
        }
        int64_t v77 = v69 + 2; // 0x40161f
        while (true) {
            int64_t v78 = v77;
            char v79 = *(char *)v78; // 0x401647
            v50 = v75;
            v68 = v74;
            v54 = v65;
            v48 = v66;
            if (v79 == 0) {
                goto lab_0x401663;
            }
            if (v79 >= 111) {
                // break (via goto) -> 0x4016ec
                goto lab_0x4016ec_2;
            }
            unsigned char v80 = (v79 + 59) % 64;
            v77 = v78 + 1;
            if (v80 != 0 == (1 << (int64_t)v80) % 0x20100000002 == 0) {
                // break (via goto) -> 0x4016ec
                goto lab_0x4016ec_2;
            }
        }
        goto lab_0x401918;
    }
  lab_0x4016ec_2:
    // 0x4016ec
    v3 = v70;
    v5 = v72;
    v4 = v66;
    if ((char)v65 == 0) {
        goto lab_0x4014fc;
    } else {
        char v81 = v71; // 0x4016f8
        int64_t v82 = v69; // 0x4016f8
        int64_t v83 = v73; // 0x4016f8
        while (true) {
            // 0x4016fd
            v15 = v82;
            v16 = v81;
            if (v81 != 0) {
                while (true) {
                  lab_0x40173c:;
                    int64_t v17 = v15;
                    int64_t v18 = v16;
                    int64_t v19 = v17 + 1;
                    v6 = v18;
                    v9 = v19;
                    if (v16 != 92) {
                        goto lab_0x401708;
                    } else {
                        unsigned char v20 = *(char *)v19; // 0x401741
                        v7 = v18;
                        v8 = 92;
                        v10 = v19;
                        if (v20 == 0) {
                            goto lab_0x40170b;
                        } else {
                            // 0x40174b
                            v21 = v20;
                            v22 = v17 + 2;
                            g36 = v20 - 48;
                            v7 = v18;
                            v8 = 92;
                            v10 = v22;
                            v23 = v21;
                            v24 = v22;
                            switch (v20) {
                                case 48: {
                                    unsigned char v25 = *(char *)v22; // 0x401876
                                    v7 = 0;
                                    v8 = 0;
                                    v10 = v22;
                                    if ((v25 & -8) == 48) {
                                        // 0x401924
                                        v23 = v25;
                                        v24 = v17 + 3;
                                        goto lab_0x401847;
                                    } else {
                                        goto lab_0x40170b;
                                    }
                                }
                                case 49: {
                                    goto lab_0x401847;
                                }
                                case 50: {
                                    goto lab_0x401847;
                                }
                                case 51: {
                                    goto lab_0x401847;
                                }
                                case 52: {
                                    goto lab_0x401847;
                                }
                                case 53: {
                                    goto lab_0x401847;
                                }
                                case 54: {
                                    goto lab_0x401847;
                                }
                                case 55: {
                                    goto lab_0x401847;
                                }
                                case 92: {
                                    goto lab_0x40170b;
                                }
                                case 97: {
                                    // 0x401834
                                    v7 = 7;
                                    v8 = 7;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 98: {
                                    // 0x401825
                                    v7 = 8;
                                    v8 = 8;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 99: {
                                    goto lab_0x4016d4;
                                }
                                case 101: {
                                    // 0x401816
                                    v7 = 27;
                                    v8 = 27;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 102: {
                                    // 0x401807
                                    v7 = 12;
                                    v8 = 12;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 110: {
                                    // 0x4017f8
                                    v7 = 10;
                                    v8 = 10;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 114: {
                                    // 0x4017e9
                                    v7 = 13;
                                    v8 = 13;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 116: {
                                    // 0x4017da
                                    v7 = 9;
                                    v8 = 9;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 118: {
                                    // 0x4017cb
                                    v7 = 11;
                                    v8 = 11;
                                    v10 = v22;
                                    goto lab_0x40170b;
                                }
                                case 120: {
                                    int16_t * v26 = *__ctype_b_loc(); // 0x401785
                                    int64_t v27 = (int64_t)*(char *)v22; // 0x401788
                                    int64_t v28 = (int64_t)v26 + 1; // 0x401790
                                    if ((*(char *)(v28 + 2 * v27) & 16) == 0) {
                                        goto lab_0x40188e;
                                    } else {
                                        uint64_t v29 = function_401aa0(v27); // 0x40179b
                                        int64_t v30 = v17 + 3; // 0x4017a0
                                        int64_t v31 = (int64_t)*(char *)v30; // 0x4017a0
                                        int64_t v32 = v29 & 0xffffffff; // 0x4017a4
                                        if ((*(char *)(2 * v31 + v28) & 16) == 0) {
                                            // 0x401931
                                            v7 = v32;
                                            v8 = v29 % 256;
                                            v10 = v30;
                                        } else {
                                            uint64_t v33 = function_401aa0(v31) + 16 * v32; // 0x4017c1
                                            v7 = v33 & 0xffffffff;
                                            v8 = v33 % 256;
                                            v10 = v17 + 4;
                                        }
                                        goto lab_0x40170b;
                                    }
                                }
                                default: {
                                    goto lab_0x40188e;
                                }
                            }
                        }
                    }
                }
            }
          lab_0x4018d0:
            // 0x4018d0
            v83 += 8;
            v56 = v66;
            if (v83 == v67 + 16 + (8 * v72 + 0x7fffffff8 & 0x7fffffff8)) {
                // break -> 0x4016e5
                break;
            }
            int64_t v84 = (int64_t)g23; // 0x4018dd
            int64_t * v85 = (int64_t *)(v84 + 40); // 0x4018e4
            uint64_t v86 = *v85; // 0x4018e4
            if (v86 >= *(int64_t *)(v84 + 48)) {
                // 0x40193d
                __overflow(g23, 32);
            } else {
                // 0x4018ee
                *v85 = v86 + 1;
                *(char *)v86 = 32;
            }
            // 0x4016fd
            v82 = *(int64_t *)v83;
            v81 = *(char *)v82;
        }
        goto lab_0x4016e5;
    }
  lab_0x4014fc:
    // 0x4014fc
    fputs_unlocked(v3, g23);
    v56 = v4;
    if ((8 * v5 + 0x7fffffff8 & 0x7fffffff8) != 0) {
        int64_t v87 = (int64_t)g23; // 0x401520
        int64_t * v88 = (int64_t *)(v87 + 40); // 0x401527
        uint64_t v89 = *v88; // 0x401527
        if (v89 >= *(int64_t *)(v87 + 48)) {
            // 0x401909
            struct _IO_FILE * v90; // 0x401520
            __overflow(v90, 32);
        } else {
            // 0x401535
            *v88 = v89 + 1;
            *(char *)v89 = 32;
        }
        // 0x401540
        int64_t v91; // 0x401470
        int64_t v92 = v91 + 8; // 0x401540
        fputs_unlocked((char *)*(int64_t *)v92, g23);
        int64_t v93; // 0x401470
        v56 = v93;
        int64_t v94; // 0x4014ff
        while (v94 != v92) {
            // 0x401520
            v87 = (int64_t)g23;
            v88 = (int64_t *)(v87 + 40);
            v89 = *v88;
            if (v89 >= *(int64_t *)(v87 + 48)) {
                // 0x401909
                __overflow(g23, 32);
            } else {
                // 0x401535
                *v88 = v89 + 1;
                *(char *)v89 = 32;
            }
            // 0x401540
            v92 += 8;
            fputs_unlocked((char *)*(int64_t *)v92, g23);
            v56 = v93;
        }
    }
    goto lab_0x4016e5;
  lab_0x401657:;
    int64_t v95 = v68 + 1; // 0x401663
    v96 = v53;
    v97 = v52;
    char v98 = *(char *)v95; // 0x401657
    v50 = v98;
    v68 = v95;
    v54 = v97;
    v48 = v96;
    if (v98 == 0) {
        goto lab_0x401918;
    } else {
        goto lab_0x401663;
    }
}
// Address range: 0x4019c0 - 0x4019eb
// Address range: 0x4019eb - 0x401a0a
int64_t function_4019eb(void) {
    // 0x4019eb
    return 0x608218;
}
// Address range: 0x401a0a - 0x401a41
int64_t function_401a0a(void) {
    // 0x401a0a
    return 0;
}
// Address range: 0x401a41 - 0x401a98
int64_t function_401a41(void) {
    // 0x401a41
    if (g26 != 0) {
        // 0x401a97
        int64_t result; // 0x401a41
        return result;
    }
    int64_t v1 = g27; // 0x401a74
    int64_t result2; // 0x401a86
    if (g27 >= ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401a86
        result2 = function_4019eb();
        g26 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401a76
        v1++;
    }
    // 0x401a6a
    g27 = v1;
    // 0x401a86
    result2 = function_4019eb();
    g26 = 1;
    return result2;
}
// Address range: 0x401a98 - 0x401a9d
int64_t function_401a98(void) {
    // 0x401a98
    return function_401a0a();
}
// Address range: 0x401aa0 - 0x401b18
int64_t function_401aa0(uint64_t a1) {
    uint64_t v1 = a1 + 0xffffffbf; // 0x401aa0
    g37 = v1 % 256;
    int64_t result = 10; // 0x401aaa
    switch ((char)v1) {
        case 1: {
        }
        case 33: {
            // 0x401b00
            result = 11;
        }
        case 0: {
        }
        case 32: {
            // 0x401ab8
            return result;
        }
        case 2: {
        }
        case 34: {
            // 0x401ac0
            result = 12;
            return result;
        }
        case 3: {
        }
        case 35: {
            // 0x401ad0
            result = 13;
            return result;
        }
        case 4: {
        }
        case 36: {
            // 0x401ae0
            result = 14;
            return result;
        }
        case 5: {
        }
        case 37: {
            // 0x401af0
            result = 15;
            return result;
        }
        default: {
            // 0x401b10
            return a1 % 256 + 0xffffffd0 & 0xffffffff;
        }
    }
}
// Address range: 0x401b20 - 0x401ec5
int64_t function_401b20(int32_t status) {
    // 0x401b20
    if (status != 0) {
        // 0x401b3a
        __fprintf_chk(g25, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401b5f
        exit(status);
        // UNREACHABLE
    }
    // 0x401b66
    __printf_chk(1, dcgettext(NULL, "Usage: %s [SHORT-OPTION]... [STRING]...\n  or:  %s LONG-OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Echo the STRING(s) to standard output.\n\n  -n             do not output the trailing newline\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "  -e             enable interpretation of backslash escapes\n  -E             disable interpretation of backslash escapes (default)\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "\nIf -e is in effect, the following sequences are recognized:\n\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "  \\0NNN   byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n", 5), g23);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x401ca1
    bool v2; // 0x401b20
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401d28
    int64_t v6 = *(int64_t *)v5; // 0x401d2c
    int64_t v7 = 5; // 0x401d32
    while (v6 != 0) {
        int64_t v8 = (int64_t)"echo";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401d3e
        char v11 = *(char *)v9; // 0x401d3e
        char v12 = v11; // 0x401d3e
        bool v13 = false; // 0x401d3e
        while (v10 == v11) {
            // 0x401d34
            v7--;
            int64_t v14 = v9 + v3; // 0x401d3e
            int64_t v15 = v8 + v3; // 0x401d3e
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
            // break -> 0x401d4a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x401d4a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401e5c;
        } else {
            // 0x401e46
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e9b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401dac;
            } else {
                goto lab_0x401e5c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401dac;
        } else {
            // 0x401d92
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e9b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401dac;
            } else {
                goto lab_0x401dac;
            }
        }
    }
  lab_0x401e5c:
    // 0x401e5c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401dec
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b5f
    exit(status);
    // UNREACHABLE
  lab_0x401dac:
    // 0x401dac
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401dec
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b5f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401ed0 - 0x401ed8
int64_t function_401ed0(int64_t a1) {
    // 0x401ed0
    g29 = a1;
    int64_t result; // 0x401ed0
    return result;
}
// Address range: 0x401ee0 - 0x401ee8
int64_t function_401ee0(int64_t a1) {
    // 0x401ee0
    g28 = a1;
    int64_t result; // 0x401ee0
    return result;
}
// Address range: 0x401ef0 - 0x401f8e
int64_t function_401ef0(void) {
    // 0x401ef0
    int32_t * err_num; // 0x401f06
    if ((int32_t)function_404480((int64_t)g23) == 0) {
        goto lab_0x401f1c;
    } else {
        // 0x401f06
        err_num = __errno_location();
        if (g28 == 0) {
            goto lab_0x401f33;
        } else {
            // 0x401f17
            if (*err_num != 32) {
                goto lab_0x401f33;
            } else {
                goto lab_0x401f1c;
            }
        }
    }
  lab_0x401f1c:;
    int64_t result = function_404480((int64_t)g25); // 0x401f23
    if ((int32_t)result == 0) {
        // 0x401f2c
        return result;
    }
    // 0x401f6e
    _exit(g16);
    // UNREACHABLE
  lab_0x401f33:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401f3f
    if (g29 == 0) {
        // 0x401f79
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401f53
        error(0, *err_num, "%s: %s", (char *)function_403a00((int64_t)g29), v1);
    }
    // 0x401f6e
    _exit(g16);
    // UNREACHABLE
}
// Address range: 0x401f90 - 0x402029
int64_t function_401f90(int64_t str) {
    // 0x401f90
    if (str == 0) {
        // 0x402009
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g25);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401f9e
    int64_t result = (int64_t)found_char_pos; // 0x401f9e
    if (found_char_pos == NULL) {
        // 0x401ff9
        g30 = str;
        g24 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401fa8
    if (v1 - str < 7) {
        // 0x401ff9
        g30 = str;
        g24 = str;
        return result;
    }
    // 0x401fb8
    bool v2; // 0x401f90
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401f90
    int64_t v5 = result - 6; // 0x401f90
    int64_t v6 = 7; // 0x401fc6
    unsigned char v7 = *(char *)v5; // 0x401fc6
    char v8 = *(char *)v4; // 0x401fc6
    char v9 = v8; // 0x401fc6
    bool v10 = false; // 0x401fc6
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
    int64_t v12 = (int64_t)"lt-"; // 0x401fd0
    int64_t v13 = v1; // 0x401fd0
    int64_t v14 = 3; // 0x401fd0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401ff9
        g30 = str;
        g24 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401fe2
    char v16 = *(char *)v12; // 0x401fe2
    char v17 = v16; // 0x401fe2
    bool v18 = false; // 0x401fe2
    while (v15 == v16) {
        // 0x401fd2
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
    int64_t v20 = v1; // 0x401fec
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401fee
        v20 = result + 4;
        g22 = v20;
    }
    // 0x401ff9
    g30 = v20;
    g24 = v20;
    return result;
}
// Address range: 0x402030 - 0x402122
int64_t function_402030(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402044
    int64_t result = (int64_t)v1; // 0x402044
    if (result != a1) {
        // 0x402051
        return result;
    }
    int64_t v2 = function_404540(); // 0x402060
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402116
    if (v3 == 85) {
        // 0x402070
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402108
            result2 = (int32_t)a2 != 9 ? (int64_t)&g7 : (int64_t)&g2;
            return result2;
        }
        char v4 = *v1; // 0x40209e
        int64_t result3 = v4 != 96 ? (int64_t)&g3 : (int64_t)&g6; // 0x4020ab
        // 0x402051
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402108
        result2 = (int32_t)a2 != 9 ? (int64_t)&g7 : (int64_t)&g2;
        return result2;
    }
    char v5 = *v1; // 0x4020ed
    int64_t result4 = v5 != 96 ? (int64_t)&g4 : (int64_t)&g5; // 0x4020fa
    // 0x402051
    return result4;
}
// Address range: 0x402130 - 0x402187
int64_t function_402130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402130
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402178
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402187 - 0x403351
int64_t function_402187(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = 0; // 0x4021d1
    int64_t v2 = 0; // 0x4021d1
    int64_t v3; // 0x402187
    int64_t v4; // 0x402187
    int64_t v5; // 0x402187
    int64_t v6; // 0x402187
    int64_t v7; // 0x402187
    int64_t v8; // 0x402187
    int64_t v9; // 0x402187
    int64_t v10; // 0x402187
    int64_t v11; // 0x402187
    int64_t v12; // 0x402187
    int64_t v13; // 0x402187
    int64_t v14; // 0x402187
    int64_t v15; // 0x402187
    int64_t v16; // 0x402187
    int64_t v17; // 0x402187
    int64_t v18; // 0x402187
    int64_t v19; // 0x402187
    int64_t result; // 0x402187
    int64_t v20; // 0x402187
    int64_t v21; // 0x402187
    int64_t ps; // bp+136, 0x402187
    char v22; // 0x402740
    int64_t v23; // 0x402740
    int32_t wc; // 0x402187
    int64_t v24; // 0x402187
    while (true) {
      lab_0x4021d8_2:
        // 0x4021d8
        v11 = v10;
        v7 = v6;
        v14 = v13;
        result = v1;
        int64_t v25 = v2; // 0x402187
        int64_t v26; // 0x40220c
        while (true) {
          lab_0x4021d8:
            // 0x4021d8
            v4 = v25;
            bool v27 = v14 == v4; // 0x4021e3
            if (v14 == -1) {
                // 0x4021e5
                v27 = *(char *)(v4 + str) == 0;
            }
            // 0x4021f3
            if (v27) {
                // break (via goto) -> 0x402958
                goto lab_0x402958;
            }
            // 0x4021fc
            v26 = v4 + str;
            v22 = *(char *)v26;
            v23 = v22;
            g38 = v23;
            v17 = v14;
            v8 = v7;
            v12 = v11;
            v3 = v14;
            v5 = v7;
            v9 = v11;
            switch (v22) {
                case 0: {
                    // 0x4027eb
                    if (wc % 2 == 0) {
                        goto lab_0x402331;
                    }
                    // 0x402c0d
                    v25 = v4 + 1;
                    goto lab_0x4021d8;
                }
                case 7: {
                    goto lab_0x402331;
                }
                case 8: {
                    goto lab_0x402331;
                }
                case 9: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 10: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 11: {
                    goto lab_0x402331;
                }
                case 12: {
                    goto lab_0x402331;
                }
                case 13: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 32: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 33: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 34: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 35: {
                    goto lab_0x4022fd;
                }
                case 36: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 37: {
                    goto lab_0x402331;
                }
                case 38: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 39: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 40: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 41: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 42: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 43: {
                    goto lab_0x402331;
                }
                case 44: {
                    goto lab_0x402331;
                }
                case 45: {
                    goto lab_0x402331;
                }
                case 46: {
                    goto lab_0x402331;
                }
                case 47: {
                    goto lab_0x402331;
                }
                case 48: {
                    goto lab_0x402331;
                }
                case 49: {
                    goto lab_0x402331;
                }
                case 50: {
                    goto lab_0x402331;
                }
                case 51: {
                    goto lab_0x402331;
                }
                case 52: {
                    goto lab_0x402331;
                }
                case 53: {
                    goto lab_0x402331;
                }
                case 54: {
                    goto lab_0x402331;
                }
                case 55: {
                    goto lab_0x402331;
                }
                case 56: {
                    goto lab_0x402331;
                }
                case 57: {
                    goto lab_0x402331;
                }
                case 58: {
                    goto lab_0x402331;
                }
                case 59: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 60: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 61: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 62: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 63: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 65: {
                    goto lab_0x402331;
                }
                case 66: {
                    goto lab_0x402331;
                }
                case 67: {
                    goto lab_0x402331;
                }
                case 68: {
                    goto lab_0x402331;
                }
                case 69: {
                    goto lab_0x402331;
                }
                case 70: {
                    goto lab_0x402331;
                }
                case 71: {
                    goto lab_0x402331;
                }
                case 72: {
                    goto lab_0x402331;
                }
                case 73: {
                    goto lab_0x402331;
                }
                case 74: {
                    goto lab_0x402331;
                }
                case 75: {
                    goto lab_0x402331;
                }
                case 76: {
                    goto lab_0x402331;
                }
                case 77: {
                    goto lab_0x402331;
                }
                case 78: {
                    goto lab_0x402331;
                }
                case 79: {
                    goto lab_0x402331;
                }
                case 80: {
                    goto lab_0x402331;
                }
                case 81: {
                    goto lab_0x402331;
                }
                case 82: {
                    goto lab_0x402331;
                }
                case 83: {
                    goto lab_0x402331;
                }
                case 84: {
                    goto lab_0x402331;
                }
                case 85: {
                    goto lab_0x402331;
                }
                case 86: {
                    goto lab_0x402331;
                }
                case 87: {
                    goto lab_0x402331;
                }
                case 88: {
                    goto lab_0x402331;
                }
                case 89: {
                    goto lab_0x402331;
                }
                case 90: {
                    goto lab_0x402331;
                }
                case 91: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 92: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 93: {
                    goto lab_0x402331;
                }
                case 94: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 95: {
                    goto lab_0x402331;
                }
                case 96: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 97: {
                    goto lab_0x402331;
                }
                case 98: {
                    goto lab_0x402331;
                }
                case 99: {
                    goto lab_0x402331;
                }
                case 100: {
                    goto lab_0x402331;
                }
                case 101: {
                    goto lab_0x402331;
                }
                case 102: {
                    goto lab_0x402331;
                }
                case 103: {
                    goto lab_0x402331;
                }
                case 104: {
                    goto lab_0x402331;
                }
                case 105: {
                    goto lab_0x402331;
                }
                case 106: {
                    goto lab_0x402331;
                }
                case 107: {
                    goto lab_0x402331;
                }
                case 108: {
                    goto lab_0x402331;
                }
                case 109: {
                    goto lab_0x402331;
                }
                case 110: {
                    goto lab_0x402331;
                }
                case 111: {
                    goto lab_0x402331;
                }
                case 112: {
                    goto lab_0x402331;
                }
                case 113: {
                    goto lab_0x402331;
                }
                case 114: {
                    goto lab_0x402331;
                }
                case 115: {
                    goto lab_0x402331;
                }
                case 116: {
                    goto lab_0x402331;
                }
                case 117: {
                    goto lab_0x402331;
                }
                case 118: {
                    goto lab_0x402331;
                }
                case 119: {
                    goto lab_0x402331;
                }
                case 120: {
                    goto lab_0x402331;
                }
                case 121: {
                    goto lab_0x402331;
                }
                case 122: {
                    goto lab_0x402331;
                }
                case 123: {
                    goto lab_0x4022d5;
                }
                case 124: {
                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                }
                case 125: {
                    goto lab_0x4022d5;
                }
                case 126: {
                    goto lab_0x4022fd;
                }
                default: {
                    goto lab_0x4026d5;
                }
            }
        }
      lab_0x4026d5:
        if (v24 != 1) {
            // 0x402a40
            ps = 0;
            int64_t len = v14; // 0x402a50
            if (v14 == -1) {
                // 0x402a52
                len = strlen((char *)str);
            }
            int64_t v28 = len;
            v18 = 0;
            while (true) {
              lab_0x402adf:
                // 0x402adf
                v19 = v18;
                uint64_t v29 = v19 + v4; // 0x402ae4
                v20 = 0;
                switch (str) {
                    case 0: {
                        goto lab_0x403029_2;
                    }
                    case -1: {
                        // 0x403109
                        v15 = 0x100000000 * v28 >> 32;
                        goto lab_0x40305a_2;
                    }
                    case -2: {
                        int64_t v30 = 0x100000000 * v28 >> 32; // 0x40313d
                        v15 = v30;
                        if (v29 >= v30) {
                            goto lab_0x40305a_2;
                        } else {
                            // 0x403177
                            v15 = v30;
                            if (*(char *)(v29 - 2) != 0) {
                                int64_t v31 = 1; // 0x403187
                                v21 = v31;
                                v16 = v30;
                                while (v31 + v4 < v30) {
                                    // 0x403180
                                    v21 = v31;
                                    v16 = v30;
                                    int64_t v32 = v31; // 0x403185
                                    if (*(char *)(v31 + v26) == 0) {
                                        // break -> 0x40305a
                                        break;
                                    }
                                    v31 = v32 + 1;
                                    v21 = v31;
                                    v16 = v30;
                                }
                                goto lab_0x40305a;
                            } else {
                                goto lab_0x40305a_2;
                            }
                        }
                    }
                    case 1: {
                        goto lab_0x402ab0;
                    }
                    default: {
                        int64_t v33; // 0x402187
                        char v34; // 0x402b6d
                        unsigned char v35; // 0x402187
                        if (*(char *)v33 < 125) {
                            // 0x402b78
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402b8f
                                v3 = 0x100000000 * v28 >> 32;
                                v5 = 0x100000000 * v7 >> 32;
                                v9 = 0x100000000 * v11 >> 32;
                                return function_402130(v9, v5, str, v3, 2, wc & -3);
                            }
                        }
                        int64_t v36 = v33 + 1; // 0x402b60
                        v33 = v36;
                        // 0x402b4c
                        int64_t v37; // 0x402b59
                        while (v37 != v36) {
                            // 0x402b6d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402b78
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402b8f
                                    v3 = 0x100000000 * v28 >> 32;
                                    v5 = 0x100000000 * v7 >> 32;
                                    v9 = 0x100000000 * v11 >> 32;
                                    return function_402130(v9, v5, str, v3, 2, wc & -3);
                                }
                            }
                            // 0x402b60
                            v36 = v33 + 1;
                            v33 = v36;
                        }
                        goto lab_0x402ab0;
                    }
                }
            }
          lab_0x403029_2:
            // 0x403029
            v21 = v20;
            v16 = 0x100000000 * v28 >> 32;
            goto lab_0x40305a;
        } else {
            // 0x402724
            __ctype_b_loc();
            v17 = 0x100000000000000 * v14 >> 56;
            v8 = v7;
            v12 = v11;
            goto lab_0x402331;
        }
    }
  lab_0x402958:
    // 0x402958
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (result != 0) {
        // 0x40325a
        if (v7 > result) {
            // 0x403263
            *(char *)(v11 + result) = 0;
        }
        // 0x402587
        return result;
    }
    return function_402130(v9, v5, str, v3, 2, wc & -3);
  lab_0x402331:;
    int64_t v38 = v12;
    int64_t v39 = v8;
    int64_t v40 = v17;
    if (v24 != 0) {
        // 0x402340
        v3 = v40;
        v5 = v39;
        v9 = v38;
        if ((*(int32_t *)((v23 / 8 & 28) + v24) & 1 << (int32_t)(v22 % 32)) != 0) {
            goto lab_0x40254a_2;
        }
    }
    int64_t v41 = result; // 0x402441
    char v42 = v22; // 0x402441
    int64_t v43 = v40; // 0x402441
    v2 = v4 + 1;
    int64_t v44 = v39; // 0x402441
    int64_t v45 = v38; // 0x402441
    goto lab_0x4023bd;
  lab_0x40254a_2:
    // 0x402587
    return function_402130(v9, v5, str, v3, 2, wc & -3);
  lab_0x402ab0:
    // 0x402ab0
    iswprint(wc);
    int64_t v48 = v19 + str; // 0x402acf
    int32_t v49 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402ad2
    v18 = v48;
    v20 = v48;
    if (v49 != 0) {
        // break -> 0x403029
        goto lab_0x403029_2;
    }
    goto lab_0x402adf;
  lab_0x4022fd:
    // 0x4022fd
    v17 = v14;
    v8 = v7;
    v12 = v11;
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (v4 == 0) {
        goto lab_0x40254a_2;
    }
    goto lab_0x402331;
  lab_0x4022d5:;
    bool v50 = v14 == 1; // 0x4022e0
    if (v14 == -1) {
        // 0x4022e2
        v50 = *(char *)(str + 1) == 0;
    }
    // 0x4022ee
    v17 = v14;
    v8 = v7;
    v12 = v11;
    if (!v50) {
        goto lab_0x402331;
    } else {
        goto lab_0x4022fd;
    }
  lab_0x40305a:;
    int64_t v51 = v16;
    uint64_t v52 = v21;
    int64_t v53 = 0x100000000 * v7 >> 32;
    int64_t v54 = 0x100000000 * v11 >> 32;
    v17 = v51;
    v8 = v53;
    v12 = v54;
    if (v52 < 2) {
        goto lab_0x402331;
    } else {
        uint64_t v55 = v52 + v4; // 0x402c2e
        int64_t v56 = v4 + 1; // 0x402d11
        v41 = result;
        v42 = v22;
        v43 = v51;
        v2 = v56;
        v44 = v53;
        v45 = v54;
        int64_t v57 = v56; // 0x402d18
        char v58 = v22; // 0x402d18
        int64_t v59 = result; // 0x402d18
        if (v56 < v55) {
            uint64_t v60 = v59;
            if (v53 > v60) {
                // 0x402ce1
                *(char *)(v60 + v54) = v58;
            }
            char v61 = *(char *)(v57 + str); // 0x402ce5
            int64_t v62 = v60 + 1; // 0x402cea
            int64_t v63 = v57 + 1; // 0x402d11
            v41 = v62;
            v42 = v61;
            v43 = v51;
            v2 = v63;
            v44 = v53;
            v45 = v54;
            v57 = v63;
            while (v63 < v55) {
                // 0x402cdc
                v60 = v62;
                if (v53 > v60) {
                    // 0x402ce1
                    *(char *)(v60 + v54) = v61;
                }
                // 0x402ce5
                v61 = *(char *)(v57 + str);
                v62 = v60 + 1;
                v63 = v57 + 1;
                v41 = v62;
                v42 = v61;
                v43 = v51;
                v2 = v63;
                v44 = v53;
                v45 = v54;
                v57 = v63;
            }
        }
        goto lab_0x4023bd;
    }
  lab_0x4023bd:;
    int64_t v46 = v45;
    uint64_t v47 = v41;
    if (v47 < v44) {
        // 0x4023c2
        *(char *)(v46 + v47) = v42;
    }
    // 0x4023c6
    v1 = v47 + 1;
    v13 = v43;
    v6 = v44;
    v10 = v46;
    goto lab_0x4021d8_2;
  lab_0x40305a_2:
    // 0x40305a
    v17 = v15;
    v8 = 0x100000000 * v7 >> 32;
    v12 = 0x100000000 * v11 >> 32;
    goto lab_0x402331;
}
// Address range: 0x403360 - 0x4034fe
int64_t function_403360(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403362
    int32_t * v3 = __errno_location(); // 0x40337c
    int64_t v4 = (int64_t)g18; // 0x403381
    int32_t v5 = *v3; // 0x40338b
    int64_t v6 = v4; // 0x4033a1
    if (v2 >= (int64_t)*(int32_t *)0x608210) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4034f9
            function_4043c0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4033b0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4033b7
        int64_t v9; // 0x403360
        if (g18 == &g19) {
            int64_t v10 = function_4041d0(0, v8); // 0x4034da
            int128_t v11 = __asm_movdqa(*(int128_t *)&g19); // 0x4034df
            *(int64_t *)&g18 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4041d0(v4, v8); // 0x4033cb
            *(int64_t *)&g18 = v12;
            v9 = v12;
        }
        // 0x4033da
        v6 = v9;
        int32_t v13 = *(int32_t *)&g21; // 0x4033da
        int32_t v14 = v7; // 0x4033e1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g21 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403411
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40341b
    int64_t * v17 = (int64_t *)v15; // 0x40341e
    uint64_t v18 = *v17; // 0x40341e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403421
    int64_t result = *v19; // 0x403421
    int64_t v20; // 0x403360
    uint64_t v21 = function_402130(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403444
    if (v18 > v21) {
        // 0x4034bb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403457
    *v17 = v22;
    if (result != (int64_t)&g31) {
        // 0x403467
        free((int64_t *)result);
    }
    int64_t result2 = function_404170(v22); // 0x403481
    *v19 = result2;
    int64_t v23; // 0x403360
    function_402130(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4034bb
    *v3 = v5;
    return result2;
}
// Address range: 0x403500 - 0x403534
int64_t function_403500(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403507
    int64_t result = function_404370(a1 == 0 ? (int64_t)&g32 : a1, 56); // 0x403526
    return result;
}
// Address range: 0x403540 - 0x40354f
int64_t function_403540(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g32 : a1); // 0x40354c
    return result;
}
// Address range: 0x403550 - 0x40355f
int64_t function_403550(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x403558
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g32;
}
// Address range: 0x403560 - 0x403593
int64_t function_403560(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 + 8 : a1 + 8; // 0x403579
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40357e
    uint32_t v3 = *v2; // 0x40357e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403582
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4035a0 - 0x4035b3
int64_t function_4035a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g32 + 4 : a1 + 4); // 0x4035ac
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4035c0 - 0x4035eb
int64_t function_4035c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x4035c8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4035e5
        abort();
        // UNREACHABLE
    }
    // 0x4035dc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g32;
}
// Address range: 0x4035f0 - 0x403662
int64_t function_4035f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g32 : a5; // 0x403612
    int32_t * v2 = __errno_location(); // 0x40361b
    uint32_t v3 = *(int32_t *)v1; // 0x40363b
    int64_t result = function_402130(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40364a
    return result;
}
// Address range: 0x403670 - 0x403751
int64_t function_403670(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g32 : a4; // 0x403692
    int32_t * v2 = __errno_location(); // 0x403698
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4036b7
    int32_t * v4 = (int32_t *)v1; // 0x4036ba
    int64_t v5 = function_402130(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4036d5
    int64_t v6 = v5 + 1; // 0x4036da
    int64_t result = function_404170(v6); // 0x4036ef
    function_402130(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403734
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40373d
    return result;
}
// Address range: 0x403760 - 0x40376a
int64_t function_403760(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403760
    return function_403670(a1, a2, 0, a3);
}
// Address range: 0x403770 - 0x403805
int64_t function_403770(void) {
    uint32_t v1 = *(int32_t *)&g21; // 0x403770
    int64_t v2 = v1; // 0x403770
    int64_t v3 = v2; // 0x403784
    if (v1 >= 2) {
        int64_t v4 = &g21;
        int64_t v5 = v4 + 16; // 0x4037a3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g39;
        while (v5 != (int64_t)g18 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4037a0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g39;
        }
    }
    int64_t v6 = v3; // 0x4037bd
    if (g19 != 0x608280) {
        // 0x4037bf
        free((int64_t *)g19);
        g19 = 256;
        *(int64_t *)&g20 = (int64_t)&g31;
        v6 = &g39;
    }
    int64_t result = v6; // 0x4037e1
    if (g18 != &g19) {
        // 0x4037e3
        free(g18);
        *(int64_t *)&g18 = (int64_t)&g19;
        result = &g39;
    }
    // 0x4037f6
    *(int32_t *)&g21 = 1;
    return result;
}
// Address range: 0x403810 - 0x403821
int64_t function_403810(void) {
    // 0x403810
    int64_t v1; // 0x403810
    return function_403360(v1, v1, -1, (int64_t *)&g32);
}
// Address range: 0x403830 - 0x40383a
int64_t function_403830(void) {
    // 0x403830
    int64_t v1; // 0x403830
    return function_403360(v1, v1, v1, (int64_t *)&g32);
}
// Address range: 0x403840 - 0x403856
int64_t function_403840(int64_t a1) {
    // 0x403840
    return function_403360(0, a1, -1, (int64_t *)&g32);
}
// Address range: 0x403860 - 0x403872
int64_t function_403860(int64_t a1, int64_t a2) {
    // 0x403860
    return function_403360(0, a1, a2, (int64_t *)&g32);
}
// Address range: 0x403880 - 0x4038e8
int64_t function_403880(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403890
    return function_403360((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4038f0 - 0x403954
int64_t function_4038f0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403900
    return function_403360((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403960 - 0x40396c
int64_t function_403960(int64_t a1, int64_t a2) {
    // 0x403960
    return function_403880(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403970 - 0x40397f
int64_t function_403970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403970
    return function_4038f0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403980 - 0x4039f0
int64_t function_403980(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x40398d
    int128_t v2 = __asm_movdqa(g33); // 0x403995
    int128_t v3 = __asm_movdqa(g34); // 0x40399d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4039b2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4039c8
    uint32_t v6 = *v5; // 0x4039c8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4039cd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403360(0, a1, a2, &v4);
}
// Address range: 0x4039f0 - 0x4039fd
int64_t function_4039f0(int64_t a1, int64_t a2) {
    // 0x4039f0
    return function_403980(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403a00 - 0x403a11
int64_t function_403a00(int64_t a1) {
    // 0x403a00
    return function_403980(a1, -1, 58);
}
// Address range: 0x403a20 - 0x403a2a
int64_t function_403a20(void) {
    // 0x403a20
    int64_t v1; // 0x403a20
    return function_403980(v1, v1, 58);
}
// Address range: 0x403a30 - 0x403a9e
int64_t function_403a30(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403a4a
    return function_403360(a1, a3, -1, &v1);
}
// Address range: 0x403aa0 - 0x403b0c
int64_t function_403aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x403aa7
    int128_t v2 = __asm_movdqa(g33); // 0x403aaf
    int128_t v3 = __asm_movdqa(g34); // 0x403ab7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403ad9
    if (a2 == 0 || a3 == 0) {
        // 0x403b07
        abort();
        // UNREACHABLE
    }
    // 0x403aea
    return function_403360(a1, a4, a5, &v4);
}
// Address range: 0x403b10 - 0x403b19
int64_t function_403b10(void) {
    // 0x403b10
    int64_t v1; // 0x403b10
    return function_403aa0(v1, v1, v1, v1, -1);
}
// Address range: 0x403b20 - 0x403b37
int64_t function_403b20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403b20
    return function_403aa0(0, a1, a2, a3, -1);
}
// Address range: 0x403b40 - 0x403b53
int64_t function_403b40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403b40
    return function_403aa0(0, a1, a2, a3, a4);
}
// Address range: 0x403b60 - 0x403b6a
int64_t function_403b60(void) {
    // 0x403b60
    int64_t v1; // 0x403b60
    return function_403360(v1, v1, v1, &g17);
}
// Address range: 0x403b70 - 0x403b82
int64_t function_403b70(int64_t a1, int64_t a2) {
    // 0x403b70
    return function_403360(0, a1, a2, &g17);
}
// Address range: 0x403b90 - 0x403ba1
int64_t function_403b90(void) {
    // 0x403b90
    int64_t v1; // 0x403b90
    return function_403360(v1, v1, -1, &g17);
}
// Address range: 0x403bb0 - 0x403bc6
int64_t function_403bb0(int64_t a1) {
    // 0x403bb0
    return function_403360(0, a1, -1, &g17);
}
// Address range: 0x403bd0 - 0x403fad
int64_t function_403bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403c68
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403bec
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403c06
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403c4b
    if (a6 < 10) {
        // 0x403c5a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403d52
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403fb0 - 0x403fd0
int64_t function_403fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403fb0
    if (a5 == 0) {
        // 0x403fcb
        return function_403bd0(a1, a2, a3, a4, a5, 0, (int64_t)&g39);
    }
    int64_t v1 = 0; // 0x403fb7
    v1++;
    int64_t v2 = v1; // 0x403fc9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403fc0
        v1++;
        v2 = v1;
    }
    // 0x403fcb
    return function_403bd0(a1, a2, a3, a4, a5, v2, (int64_t)&g39);
}
// Address range: 0x403fd0 - 0x404030
int64_t function_403fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403fd0
    int64_t v3 = &v2; // 0x403fd0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404003
    int64_t v6; // 0x403fed
    int64_t * v7; // 0x40400b
    int64_t v8; // 0x40400b
    int64_t v9; // 0x404017
    if (v5 < 48) {
        // 0x403fe0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404023
            break;
        }
    } else {
        // 0x40400b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404023
            break;
        }
    }
    int64_t v10 = 10; // 0x404001
    while (v4 != 9) {
        // 0x403ff9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403fe0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404023
                break;
            }
        } else {
            // 0x40400b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404023
                break;
            }
        }
        // 0x403ff9
        v10 = 10;
    }
    // 0x404023
    return function_403bd0(a1, a2, a3, a4, v3, v10, (int64_t)&g39);
}
// Address range: 0x404030 - 0x4040ec
int64_t function_404030(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404030
    int64_t v1; // bp-168, 0x404030
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404030
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404030
    int64_t v8; // 0x404030
    int64_t v9; // bp-56, 0x404030
    int64_t v10; // 0x404095
    int64_t v11; // 0x4040b9
    if ((int32_t)v6 < 48) {
        // 0x404080
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4040d0
            break;
        }
    } else {
        // 0x4040b2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4040d0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4040aa
    int64_t v13 = 10; // 0x4040aa
    while (v5 != 9) {
        // 0x4040ac
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404080
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4040d0
                break;
            }
        } else {
            // 0x4040b2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4040d0
                break;
            }
        }
        // 0x4040a2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4040d0
    int64_t v14; // bp-136, 0x404030
    int64_t result = function_403bd0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g39); // 0x4040df
    return result;
}
// Address range: 0x4040f0 - 0x404164
int64_t function_4040f0(int64_t a1) {
    // 0x4040f0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404153
    return fputs_unlocked(v1, g23);
}
// Address range: 0x404170 - 0x40418a
int64_t function_404170(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404174
    if (size != 0 != (mem == NULL)) {
        // 0x404183
        return (int64_t)mem;
    }
    // 0x404185
    function_4043c0(size);
    // UNREACHABLE
}
// Address range: 0x404190 - 0x4041b1
int64_t function_404190(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404193
    int64_t v2 = v1; // 0x404193
    if (v2 < 0) {
        // 0x4041ab
        function_4043c0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4041a9
        return function_404170(v2);
    }
    // 0x4041ab
    function_4043c0(v2);
    // UNREACHABLE
}
// Address range: 0x4041c0 - 0x4041c2
int64_t function_4041c0(void) {
    // 0x4041c0
    int64_t v1; // 0x4041c0
    return function_404170(v1);
}
// Address range: 0x4041d0 - 0x404206
int64_t function_4041d0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4041f8
        free(v1);
        return (int32_t)&g39 ^ (int32_t)&g39;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4041e1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4041f0
        return (int64_t)mem;
    }
    // 0x404201
    function_4043c0(a1);
    // UNREACHABLE
}
// Address range: 0x404210 - 0x404231
int64_t function_404210(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404213
    int64_t v2 = v1; // 0x404213
    if (v2 < 0) {
        // 0x40422b
        function_4043c0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404229
        return function_4041d0(a1, v2);
    }
    // 0x40422b
    function_4043c0(a1);
    // UNREACHABLE
}
// Address range: 0x404240 - 0x4042c6
int64_t function_404240(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40429b
            function_4043c0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4041d0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404283
    if (a2 == 0) {
        // 0x4042a8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404288
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40429b
        function_4043c0(a1);
        // UNREACHABLE
    }
    // 0x40426a
    *(int64_t *)a2 = v2;
    return function_4041d0(a1, v2 * a3);
}
// Address range: 0x4042d0 - 0x404320
int64_t function_4042d0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4042d0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40431a
            function_4043c0(a1);
            // UNREACHABLE
        }
        // 0x4042f2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4041d0(a1, v1);
    }
    if (a2 == 0) {
        // 0x404305
        *(int64_t *)a2 = 128;
        return function_4041d0(0, 128);
    }
    // 0x404318
    if (a2 < 0) {
        // 0x40431a
        function_4043c0(a1);
        // UNREACHABLE
    }
    // 0x4042f2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4041d0(a1, v1);
}
// Address range: 0x404320 - 0x404337
int64_t function_404320(int64_t a1, int64_t a2) {
    // 0x404320
    return (int64_t)memset((int64_t *)function_404170(a1), 0, (int32_t)a1);
}
// Address range: 0x404340 - 0x40436e
int64_t function_404340(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404347
    if ((int64_t)v1 < 0) {
        // 0x404369
        function_4043c0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404369
        function_4043c0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40435a
    if (mem != NULL) {
        // 0x404364
        return (int64_t)mem;
    }
    // 0x404369
    function_4043c0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404370 - 0x404398
int64_t function_404370(int64_t a1, int64_t a2) {
    int64_t v1 = function_404170(a2); // 0x40437f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4043a0 - 0x4043b3
int64_t function_4043a0(int64_t str) {
    // 0x4043a0
    return function_404370(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4043c0 - 0x4043f1
int64_t function_4043c0(int64_t a1) {
    // 0x4043c0
    error(g16, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404400 - 0x40447a
int64_t function_404400(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40440b
    int64_t v2 = (int64_t)&g8; // 0x40440b
    int64_t v3; // 0x404400
    int64_t v4; // 0x404400
    int64_t n; // 0x404400
    if (a2 == 0) {
        goto lab_0x404452;
    } else {
        // 0x40440d
        if (a3 == 0) {
            // 0x404438
            return -2;
        }
        // 0x404419
        n = a3;
        v4 = a2;
        v3 = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == 0) {
            goto lab_0x404452;
        } else {
            goto lab_0x404424;
        }
    }
  lab_0x404452:
    // 0x404452
    n = v1;
    v4 = v2;
    int64_t v5; // bp-28, 0x404400
    v3 = &v5;
    goto lab_0x404424;
  lab_0x404424:;
    int32_t * pwc = (int32_t *)v3; // 0x40442a
    char * wstr = (char *)v4; // 0x40442a
    int64_t ps; // 0x404400
    int32_t v6 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40442a
    int64_t result = v6; // 0x40442a
    if (v6 < 0xfffffffe) {
        // 0x404438
        return result;
    }
    int64_t result2 = result; // 0x404469
    if ((char)function_4044e0(0, v4) == 0) {
        // 0x40446b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404438
    return result2;
}
// Address range: 0x404480 - 0x4044dd
int64_t function_404480(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404487
    int64_t v2; // 0x404480
    int64_t result = function_404ab0(a1, v2); // 0x404498
    if ((v2 & 32) != 0) {
        // 0x4044c0
        if ((int32_t)result == 0) {
            // 0x4044c4
            *__errno_location() = 0;
        }
        // 0x4044ba
        return 0xffffffff;
    }
    // 0x4044a1
    if ((int32_t)result == 0) {
        // 0x4044ba
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4044a8
    if (v1 == 0) {
        // 0x4044aa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4044ba
    return result2;
}
// Address range: 0x4044e0 - 0x40453e
int64_t function_4044e0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4044e6
    if (locale == NULL) {
        // 0x404513
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4044e6
    bool v2; // 0x4044e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g9; // 0x4044e0
    int64_t v5 = v1; // 0x4044e0
    int64_t v6 = 2; // 0x404505
    unsigned char v7 = *(char *)v5; // 0x404505
    char v8 = *(char *)v4; // 0x404505
    char v9 = v8; // 0x404505
    bool v10 = false; // 0x404505
    while (v7 == v8) {
        // 0x4044f8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x404511
    int64_t v13 = v1; // 0x404511
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x404513
        return 0;
    }
    int64_t v14 = 6; // 0x404511
    unsigned char v15 = *(char *)v13; // 0x40452d
    char v16 = *(char *)v12; // 0x40452d
    char v17 = v16; // 0x40452d
    bool v18 = false; // 0x40452d
    while (v15 == v16) {
        // 0x404520
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
// Address range: 0x404540 - 0x404aa2
int64_t function_404540(void) {
    char * v1 = nl_langinfo(14); // 0x404556
    char * v2 = g35; // 0x40455b
    char * v3; // 0x404540
    int64_t v4; // 0x404540
    int64_t v5; // 0x404540
    int64_t v6; // 0x404540
    int64_t v7; // 0x404540
    int32_t size; // 0x404540
    int32_t size2; // 0x404540
    int32_t len; // 0x404612
    int64_t v8; // 0x404612
    char * env_val; // 0x4045fd
    if (v2 == NULL) {
        // 0x4045f8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x404665;
        } else {
            // 0x40460a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x404665;
            } else {
                // 0x40460f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4045fd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x404a95
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x404665;
                    } else {
                        // 0x404a09
                        size2 = len + 14;
                        goto lab_0x40462b;
                    }
                } else {
                    goto lab_0x40462b;
                }
            }
        }
    } else {
        // 0x404540
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40457a;
    }
  lab_0x4048ac:;
    // 0x4048ac
    struct _IO_FILE * stream; // 0x4046eb
    int32_t v10 = __uflow(stream); // 0x4048af
    int64_t v11; // 0x404540
    int64_t v12 = v11; // 0x4048b9
    int64_t v13; // 0x404540
    int64_t v14 = v13; // 0x4048b9
    int32_t v15 = v10; // 0x4048b9
    int64_t v16; // 0x404540
    int64_t v17 = v16; // 0x4048b9
    int64_t v18 = v11; // 0x4048b9
    int64_t v19 = v13; // 0x4048b9
    int64_t v20 = v16; // 0x4048b9
    if (v10 == -1) {
        // break -> 0x4048bf
        goto lab_0x4048bf;
    }
    goto lab_0x404739;
  lab_0x40472e:;
    // 0x40472e
    int64_t v90; // 0x404540
    int64_t * v32; // 0x404720
    *v32 = v90 + 1;
    int64_t v89; // 0x404540
    v12 = v89;
    int64_t v91; // 0x404540
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x404540
    v17 = v92;
    goto lab_0x404739;
  lab_0x404739:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x404540
    int32_t v25; // bp-120, 0x404540
    int32_t v26; // bp-184, 0x404540
    int64_t v27; // 0x4046eb
    int64_t v28; // 0x404708
    int64_t v29; // 0x40470d
    int64_t * v30; // 0x404724
    switch (c) {
        case 32: {
            goto lab_0x404720;
        }
        case 10: {
            goto lab_0x404720;
        }
        case 9: {
            goto lab_0x404720;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x404911
            int32_t v33; // 0x404540
            char v34; // 0x404540
            int32_t v35; // 0x40491e
            if (v31 < *v30) {
                // 0x4048f0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40491b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x404911
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4048f0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40491b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x404900
                v36 = v33;
            }
            // 0x4049ef
            if (v36 == -1) {
                // break -> 0x4048bf
                break;
            }
            goto lab_0x404720;
        }
        default: {
            // 0x40474f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4048bf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x404778
            int64_t v39 = v37 + 4; // 0x40477a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x404786
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x404788
            while (v41 == 0) {
                // 0x404778
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4047a6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4047b2
            int64_t v45 = v43 + 4; // 0x4047b4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4047c0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4047c2
            while (v47 == 0) {
                // 0x4047b2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4047af
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4047d8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4047e8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4047ec
            int64_t v52 = v51 + v48; // 0x4047f5
            int64_t * mem; // 0x404540
            int64_t v53; // 0x404540
            int64_t v54; // 0x404540
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40492b
                int64_t v56 = v55 + 3; // 0x404937
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x404811
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x404820
            if (mem == NULL) {
                // 0x404a4c
                free((int64_t *)v21);
                function_404ab0(v27, v53);
                v24 = (int64_t)&g8;
                goto lab_0x4046c4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x404838
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x404842
            uint32_t v62 = (int32_t)v59; // 0x404845
            int64_t v63; // 0x404540
            if (v62 >= 8) {
                // 0x404954
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40496e
                int64_t v66 = v61 - v65; // 0x404972
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40497d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40498e
                    int64_t v70 = v69 & 0xffffffff; // 0x40498e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40498b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x404a1f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x404857
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40485b
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
            int64_t v73 = v51 + 1; // 0x40486b
            int64_t v74 = v60 - 1; // 0x40486f
            uint32_t v75 = (int32_t)v73; // 0x404874
            int64_t v76; // 0x404540
            if (v75 >= 8) {
                // 0x4049a2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4049ac
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4049bc
                int64_t v80 = v74 - v79; // 0x4049c0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4049cb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4049db
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4049d9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x404a36
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x404a3e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x404886
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40488a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x404a83
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40489e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40472e;
            } else {
                goto lab_0x4048ac;
            }
        }
    }
  lab_0x404720:;
    int64_t v93 = v23; // 0x404540
    int64_t v94 = v22; // 0x404540
    int64_t v95 = v21; // 0x404540
    goto lab_0x404720_2;
  lab_0x404665:;
    int64_t * mem3 = malloc(size); // 0x404665
    int64_t v97 = (int64_t)&g8; // 0x404670
    int64_t v98; // 0x404540
    int64_t path; // 0x404540
    if (mem3 == NULL) {
        goto lab_0x404642;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x404665
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x404686;
    }
  lab_0x40457a:;
    int64_t str = v1 == NULL ? (int64_t)&g8 : (int64_t)v1; // 0x40456d
    char v100 = *v3; // 0x40457a
    int64_t v101; // 0x404540
    if (v100 == 0) {
        // 0x4045d4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x404540
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x404540
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4045c0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4045c7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x404590
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40459d
        char v107 = *(char *)v106; // 0x4045a2
        v102 = v107;
        if (v107 == 0) {
            // 0x4045d4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4045ab
    v104 = v103 + 1;
  lab_0x4045c7:
    // 0x4045d4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x404642:;
    char * v108 = (char *)v97;
    g35 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40457a;
  lab_0x404686:;
    int64_t v109 = v98 + path; // 0x404686
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4046b2
    v24 = (int64_t)&g8;
    if (fd >= 0) {
        // 0x4046e1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x404a12
            close(fd);
            v24 = (int64_t)&g8;
        } else {
            // 0x404705
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x404720_2:;
                uint64_t v96 = *v32; // 0x404720
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4048ac;
                } else {
                    goto lab_0x40472e;
                }
            }
          lab_0x4048bf:
            // 0x4048bf
            function_404ab0(v27, v19);
            v24 = (int64_t)&g8;
            if (v18 != 0) {
                // 0x4048de
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4046c4;
  lab_0x40462b:;
    int64_t * mem4 = malloc(size2); // 0x40462b
    v97 = (int64_t)&g8;
    if (mem4 != NULL) {
        // 0x4046d1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x404686;
    } else {
        goto lab_0x404642;
    }
  lab_0x4046c4:
    // 0x4046c4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x404642;
}
// Address range: 0x404ab0 - 0x404b2b
int64_t function_404ab0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404ab7
    if (fileno(stream) < 0) {
        // 0x404b17
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x404aca
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x404afb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x404b17
            return fclose(stream);
        }
    }
    // 0x404acc
    if ((int32_t)function_404b30(a1, v1) == 0) {
        // 0x404b17
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x404ad8
    int32_t v3 = *v2; // 0x404ae0
    int64_t result = fclose(stream); // 0x404aee
    if (v3 != 0) {
        // 0x404b20
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x404af0
    return result;
}
// Address range: 0x404b30 - 0x404b70
int64_t function_404b30(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x404b4a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x404b4a
        return fflush(stream);
    }
    // 0x404b58
    function_404b70(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404b70 - 0x404bc7
int64_t function_404b70(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404b70
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x404b7a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x404bab
    int64_t result = -1; // 0x404bb4
    if (v1 != -1) {
        // 0x404bb6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404bc2
    return result;
}
// Address range: 0x404bd0 - 0x404c2d
int64_t function_404bd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404bd0
    return function_401138();
}
// Address range: 0x404c30 - 0x404c31
int64_t function_404c30(void) {
    // 0x404c30
    int64_t result; // 0x404c30
    return result;
}
// Address range: 0x404c40 - 0x404c58
int64_t function_404c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c40
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g14);
}
// Address range: 0x404c58 - 0x404c78
int64_t function_404c58(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g10; // 0x404c62
    while (*(int64_t *)v1 != -1) {
        // 0x404c63
        v1 -= 8;
    }
    // 0x404c74
    return result;
}
