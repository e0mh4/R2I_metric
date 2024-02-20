#include "decompile_retdec.h"
// Address range: 0x401720 - 0x401725
int64_t function_401720(void) {
    // 0x401720
    abort();
    // UNREACHABLE
}
// Address range: 0x401725 - 0x40172a
int64_t function_401725(void) {
    // 0x401725
    abort();
    // UNREACHABLE
}
// Address range: 0x40172a - 0x40172f
int64_t function_40172a(void) {
    // 0x40172a
    abort();
    // UNREACHABLE
}
// Address range: 0x40172f - 0x401734
int64_t function_40172f(void) {
    // 0x40172f
    abort();
    // UNREACHABLE
}
// Address range: 0x401734 - 0x401739
int64_t function_401734(void) {
    // 0x401734
    abort();
    // UNREACHABLE
}
// Address range: 0x401739 - 0x40173e
int64_t function_401739(void) {
    // 0x401739
    abort();
    // UNREACHABLE
}
// Address range: 0x401740 - 0x401a08
int64_t function_401740(int64_t a1, int64_t a2) {
    // 0x401740
    function_402860(a2);
    setlocale(LC_ALL, (char *)&g3);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401740
    function_4062e0(0x402780, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    g38 = 0;
    g37 = 0;
    int64_t v2 = (int64_t)&g2; // 0x40179c
    int64_t v3; // 0x401740
    while (true) {
        // 0x4017a3
        v3 = v2;
        while (true) {
          lab_0x4017a3:;
            uint32_t v4 = (int32_t)function_405b40(a1 & 0xffffffff, a2, "d:sz", &g4, 0, v1);
            switch (v4) {
                case -1: {
                    goto lab_0x401865;
                }
                case 100: {
                    goto lab_0x401850;
                }
                default: {
                    if (v4 <= 100) {
                        if (v4 == -131) {
                            // 0x4017e7
                            function_404900((int64_t)g29, "paste", "GNU coreutils", (int64_t)g18, "David M. Ihnat", "David MacKenzie");
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v4 == -130) {
                            // 0x401840
                            function_4023e0(0);
                            // UNREACHABLE
                        }
                        goto lab_0x4019fe;
                    }
                    if (v4 != 115) {
                        if (v4 != 122) {
                            // 0x4019fe
                            function_4023e0(1);
                            // UNREACHABLE
                        }
                        // 0x401829
                        *(char *)&g17 = 0;
                    } else {
                        // 0x4017d3
                        g37 = 1;
                    }
                    goto lab_0x4017a3;
                }
            }
        }
      lab_0x401850:;
        char * v5 = g51; // 0x401850
        v2 = *v5 == 0 ? (int64_t)"\\0" : (int64_t)v5;
    }
  lab_0x401865:;
    int32_t v6 = *(int32_t *)0x60927c; // 0x401865
    if (v6 == (int32_t)a1) {
        // 0x401870
        *(int64_t *)(8 * (int64_t)v6 + a2) = (int64_t)"-";
    }
    int64_t v7 = function_404c70(v3); // 0x401880
    g36 = v7;
    char v8 = *(char *)v3; // 0x4018a2
    char v9 = v8; // 0x4018a7
    int64_t v10 = a2; // 0x4018a7
    int64_t v11 = v3; // 0x4018a7
    int64_t v12 = v7; // 0x4018a7
    int64_t v13 = v7; // 0x4018a7
    int64_t v14 = v7; // 0x4018a7
    int64_t v15 = a2; // 0x4018a7
    int64_t v16; // 0x401740
    int64_t v17; // 0x401740
    int64_t v18; // 0x401740
    int64_t v19; // 0x401740
    int64_t v20; // 0x401740
    int64_t v21; // 0x401740
    int64_t v22; // 0x401740
    int64_t v23; // 0x401740
    int64_t v24; // 0x401740
    int64_t v25; // 0x401740
    int64_t v26; // 0x401740
    int64_t v27; // 0x401740
    int64_t v28; // 0x401740
    int64_t v29; // 0x401740
    int64_t v30; // 0x401740
    int64_t v31; // 0x40189e
    if (v8 != 0) {
        while (true) {
          lab_0x4018ad:;
            int64_t v32 = v12;
            int64_t v33 = v11;
            int64_t v34 = v10;
            char v35 = v9;
            if (v35 != 92) {
                // 0x401898
                *(char *)v32 = v35;
                v16 = v32;
                v20 = v34;
                v30 = v33 + 1;
                goto lab_0x40189e;
            } else {
                char v36 = *(char *)(v33 + 1); // 0x4018b2
                if (v36 == 102) {
                    // 0x4019a6
                    *(char *)v32 = 12;
                    v17 = v32;
                    v25 = v33;
                    v22 = v34;
                    goto lab_0x4018e1;
                } else {
                    int64_t v37 = v36; // 0x4018b2
                    v18 = v32;
                    v26 = v33;
                    v28 = v37;
                    v23 = v34;
                    if (v36 > 102) {
                        goto lab_0x40192d;
                    } else {
                        if (v36 == 48) {
                            // 0x4019cd
                            *(char *)v32 = 0;
                            v17 = v32;
                            v25 = v33;
                            v22 = v34;
                            goto lab_0x4018e1;
                        } else {
                            if (v36 > 48) {
                                if (v36 == 92) {
                                    // 0x4019ae
                                    *(char *)v32 = 92;
                                    v17 = v32;
                                    v25 = v33;
                                    v22 = v34;
                                    goto lab_0x4018e1;
                                } else {
                                    // 0x4018d5
                                    v19 = v32;
                                    v27 = v33;
                                    v29 = v37;
                                    v24 = v34;
                                    if (v36 != 98) {
                                        goto lab_0x4019b6;
                                    } else {
                                        // 0x4018de
                                        *(char *)v32 = 8;
                                        v17 = v32;
                                        v25 = v33;
                                        v22 = v34;
                                        goto lab_0x4018e1;
                                    }
                                }
                            } else {
                                // 0x4018e7
                                v19 = v32;
                                v27 = v33;
                                v29 = v37;
                                v24 = v34;
                                if (v36 != 0) {
                                    goto lab_0x4019b6;
                                } else {
                                    // 0x4018ef
                                    g35 = v32;
                                    int64_t v38 = function_404300(0, 6, v3); // 0x401900
                                    char * format = dcgettext(NULL, "delimiter list ends with an unescaped backslash: %s", 5); // 0x401914
                                    error(1, (int32_t)"delimiter list ends with an unescaped backslash: %s" ^ (int32_t)"delimiter list ends with an unescaped backslash: %s", format);
                                    v18 = &g53;
                                    v26 = v38;
                                    v28 = (int64_t)format;
                                    v23 = v38;
                                    goto lab_0x40192d;
                                }
                            }
                        }
                    }
                }
            }
        }
      lab_0x4018a2:
        // 0x4018a2
        v13 = g36;
        v14 = v31;
        v15 = v21;
    }
    // 0x401955
    g35 = v14;
    free((int64_t *)v13);
    if (g38 == 0 || (int32_t)function_404cd0((int64_t)g30, 8 * (int64_t)g27 + v15) != -1) {
        // 0x401998
        return g37 == 0 ? 113 : 33;
    }
    // 0x4019e6
    error(1, *__errno_location(), "-");
  lab_0x4019fe:
    // 0x4019fe
    function_4023e0(1);
    // UNREACHABLE
  lab_0x40189e:
    // 0x40189e
    v21 = v20;
    v31 = v16 + 1;
    char v39 = *(char *)v30; // 0x4018a2
    v9 = v39;
    v10 = v21;
    v11 = v30;
    v12 = v31;
    if (v39 == 0) {
        // break -> 0x4018a2
        goto lab_0x4018a2;
    }
    goto lab_0x4018ad;
  lab_0x4018e1:
    // 0x4018e1
    v16 = v17;
    v20 = v22;
    v30 = v25 + 2;
    goto lab_0x40189e;
  lab_0x40192d:;
    int64_t v40 = v23;
    int64_t v41 = v28;
    int64_t v42 = v26;
    int64_t v43 = v18;
    char v44 = v41; // 0x40192d
    if (v44 == 114) {
        // 0x4019bd
        *(char *)v43 = 13;
        v17 = v43;
        v25 = v42;
        v22 = v40;
        goto lab_0x4018e1;
    } else {
        if (v44 > 114) {
            if (v44 == 116) {
                // 0x4019c5
                *(char *)v43 = 9;
                v17 = v43;
                v25 = v42;
                v22 = v40;
                goto lab_0x4018e1;
            } else {
                // 0x401941
                v19 = v43;
                v27 = v42;
                v29 = v41;
                v24 = v40;
                if (v44 != 118) {
                    goto lab_0x4019b6;
                } else {
                    // 0x401946
                    *(char *)v43 = 11;
                    v17 = v43;
                    v25 = v42;
                    v22 = v40;
                    goto lab_0x4018e1;
                }
            }
        } else {
            // 0x40194b
            v19 = v43;
            v27 = v42;
            v29 = v41;
            v24 = v40;
            if (v44 != 110) {
                goto lab_0x4019b6;
            } else {
                // 0x401950
                *(char *)v43 = 10;
                v17 = v43;
                v25 = v42;
                v22 = v40;
                goto lab_0x4018e1;
            }
        }
    }
  lab_0x4019b6:
    // 0x4019b6
    *(char *)v19 = (char)v29;
    v17 = v19;
    v25 = v27;
    v22 = v24;
    goto lab_0x4018e1;
}
// Address range: 0x401a10 - 0x401a3b
// Address range: 0x401a3b - 0x401a5a
int64_t function_401a3b(void) {
    // 0x401a3b
    return &g28;
}
// Address range: 0x401a5a - 0x401a91
int64_t function_401a5a(void) {
    // 0x401a5a
    return 0;
}
// Address range: 0x401a91 - 0x401ae8
int64_t function_401a91(void) {
    // 0x401a91
    if (g33 != 0) {
        // 0x401ae7
        int64_t result; // 0x401a91
        return result;
    }
    int64_t v1 = g34; // 0x401ac4
    int64_t result2; // 0x401ad6
    if (g34 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401ad6
        result2 = function_401a3b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401ac6
        v1++;
    }
    // 0x401aba
    g34 = v1;
    // 0x401ad6
    result2 = function_401a3b();
    g33 = 1;
    return result2;
}
// Address range: 0x401ae8 - 0x401aed
int64_t function_401ae8(void) {
    // 0x401ae8
    return function_401a5a();
}
// Address range: 0x401af0 - 0x401e67
int64_t function_401af0(int64_t a1) {
    char * format = dcgettext(NULL, "write error", 5); // 0x401afd
    uint32_t err_num = *__errno_location(); // 0x401b12
    error(1, err_num, format);
    int32_t * err_num2 = __errno_location(); // 0x401b3d
    bool v1; // 0x401af0
    int64_t v2 = v1 ? -1 : 1; // 0x401b61
    int64_t * v3 = (int64_t *)(int64_t)err_num; // 0x401b50
    int64_t file_path = *v3; // 0x401b50
    int64_t v4 = (int64_t)"-"; // 0x401af0
    int64_t v5 = file_path; // 0x401af0
    int64_t v6 = 2; // 0x401b61
    unsigned char v7 = *(char *)v5; // 0x401b61
    char v8 = *(char *)v4; // 0x401b61
    char v9 = v8; // 0x401b61
    bool v10 = false; // 0x401b61
    while (v7 == v8) {
        v6--;
        v4 += v2;
        v5 += v2;
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
    int64_t stream; // 0x401da8
    if ((v7 >= v11 && !v10) != v7 < v11) {
        struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x401da8
        if (file == NULL) {
            goto lab_0x401cd2;
        } else {
            // 0x401db9
            stream = (int64_t)file;
            function_402830(stream, 2, (int64_t)format);
            goto lab_0x401b86;
        }
    } else {
        // 0x401b78
        g38 = 1;
        stream = (int64_t)g30;
        goto lab_0x401b86;
    }
  lab_0x401cd2:
    // 0x401cd2
    error(0, *err_num2, "%s", (char *)function_404300(0, 3, *v3));
    // 0x401c86
    return 0;
  lab_0x401b86:;
    int64_t * v12 = (int64_t *)(stream + 8); // 0x401b86
    uint64_t v13 = *v12; // 0x401b86
    int64_t * v14 = (int64_t *)(stream + 16); // 0x401b8a
    int64_t v15 = *v14; // 0x401b8a
    int64_t v16; // 0x401af0
    int64_t v17; // 0x401af0
    int64_t v18; // 0x401af0
    int64_t v19; // 0x401af0
    int64_t v20; // 0x401af0
    char v21; // 0x401af0
    int64_t v22; // 0x401af0
    int64_t v23; // 0x401af0
    if (v13 >= v15) {
        uint32_t v24 = __uflow((struct _IO_FILE *)stream); // 0x401c23
        if (v24 != -1) {
            // 0x401e5a
            v20 = *v12;
            v22 = *v14;
            v16 = g36;
            v18 = v24;
            goto lab_0x401bdb;
        } else {
            // 0x401c3c
            v21 = *(char *)&g17;
            v23 = v15;
            v19 = (int64_t)*err_num2;
            v17 = g36;
            goto lab_0x401c43;
        }
    } else {
        int64_t v25 = v13 + 1; // 0x401b9e
        *v12 = v25;
        v20 = v25;
        v22 = v15;
        v16 = g36;
        v18 = (int64_t)*(char *)v13;
        goto lab_0x401bdb;
    }
  lab_0x401bdb:;
    uint64_t v26 = v18;
    int64_t v27 = v16;
    int64_t v28 = v22;
    uint64_t v29 = v20;
    int64_t v30; // 0x401af0
    int64_t v31; // 0x401af0
    int64_t v32; // 0x401af0
    int64_t v33; // 0x401af0
    int64_t v34; // 0x401af0
    int64_t v35; // 0x401d27
    if (v28 > v29) {
        // 0x401be4
        *v12 = v29 + 1;
        v31 = (int64_t)*(char *)v29;
        goto lab_0x401bf0;
    } else {
        uint32_t v36 = __uflow((struct _IO_FILE *)stream); // 0x401d0b
        v31 = v36;
        if (v36 != -1) {
            goto lab_0x401bf0;
        } else {
            int64_t v37 = (int64_t)g29; // 0x401d20
            v35 = (int64_t)*err_num2;
            int64_t * v38 = (int64_t *)(v37 + 40); // 0x401d2a
            uint64_t v39 = *v38; // 0x401d2a
            if (v39 >= *(int64_t *)(v37 + 48)) {
                int64_t v40 = v26 % 256; // 0x401e30
                int32_t v41 = __overflow(g29, (int32_t)v40); // 0x401e39
                v34 = v40;
                v33 = v37;
                v32 = v35;
                v30 = v27;
                if (v41 >= 0) {
                    goto lab_0x401d43;
                } else {
                    goto lab_0x401deb;
                }
            } else {
                // 0x401d38
                *v38 = v39 + 1;
                *(char *)v39 = (char)v26;
                v34 = v28;
                goto lab_0x401d43;
            }
        }
    }
  lab_0x401c43:;
    int64_t v42 = (int64_t)g29; // 0x401c43
    int64_t * v43 = (int64_t *)(v42 + 40); // 0x401c4a
    uint64_t v44 = *v43; // 0x401c4a
    int64_t v45; // 0x401af0
    if (v44 >= *(int64_t *)(v42 + 48)) {
        int32_t v46 = __overflow(g29, (int32_t)v21); // 0x401e18
        v45 = v21;
        v33 = v42;
        v32 = v19;
        v30 = v17;
        if (v46 >= 0) {
            goto lab_0x401c62;
        } else {
            goto lab_0x401deb;
        }
    } else {
        // 0x401c58
        *v43 = v44 + 1;
        *(char *)v44 = v21;
        v45 = v23;
        goto lab_0x401c62;
    }
  lab_0x401bf0:;
    int64_t v47 = v31;
    uint32_t v48 = (int32_t)v26; // 0x401bf7
    int64_t v49; // 0x401af0
    int64_t v50; // 0x401af0
    int64_t v51; // 0x401af0
    int64_t v52; // 0x401af0
    int64_t v53; // 0x401af0
    int64_t v54; // 0x401af0
    if ((int32_t)*(char *)&g17 == v48) {
        unsigned char v55 = *(char *)v27; // 0x401bb0
        if (v55 != 0) {
            int64_t v56 = (int64_t)g29; // 0x401ca0
            int64_t * v57 = (int64_t *)(v56 + 40); // 0x401ca7
            uint64_t v58 = *v57; // 0x401ca7
            v53 = v55;
            v54 = v56;
            v52 = v47;
            v50 = v27;
            if (v58 >= *(int64_t *)(v56 + 48)) {
                goto lab_0x401df0;
            } else {
                // 0x401cb5
                *v57 = v58 + 1;
                *(char *)v58 = v55;
                goto lab_0x401bbd;
            }
        } else {
            goto lab_0x401bbd;
        }
    } else {
        int64_t v59 = (int64_t)g29; // 0x401bfc
        int64_t * v60 = (int64_t *)(v59 + 40); // 0x401c03
        uint64_t v61 = *v60; // 0x401c03
        if (v61 >= *(int64_t *)(v59 + 48)) {
            // 0x401dd0
            v51 = v47;
            v49 = v27;
            v33 = v59;
            v32 = v47;
            v30 = v27;
            if (__overflow(g29, v48 % 256) >= 0) {
                goto lab_0x401bd0;
            } else {
                goto lab_0x401deb;
            }
        } else {
            // 0x401c11
            *v60 = v61 + 1;
            *(char *)v61 = (char)v26;
            v51 = v47;
            v49 = v27;
            goto lab_0x401bd0;
        }
    }
  lab_0x401c62:;
    char result = 1; // 0x401c65
    int64_t v62 = v45; // 0x401c65
    int64_t v63 = v19; // 0x401c65
    if ((*(char *)stream & 32) != 0) {
        goto lab_0x401d5e;
    } else {
        goto lab_0x401c6b;
    }
  lab_0x401deb:
    // 0x401deb
    v53 = function_401af0(v33);
    v54 = v33;
    v52 = v32;
    v50 = v30;
    goto lab_0x401df0;
  lab_0x401d5e:;
    uint32_t err_num3 = 0x1000000 * (int32_t)v63 >> 24; // 0x401d73
    error(0, err_num3, "%s", (char *)function_404300(0, 3, *v3));
    result = 0;
    v62 = err_num3;
    goto lab_0x401c6b;
  lab_0x401c6b:
    // 0x401c6b
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x401c73
        clearerr_unlocked((struct _IO_FILE *)stream);
        // 0x401c86
        return result;
    }
    // 0x401cc8
    if ((int32_t)function_404cd0(stream, v62) != -1) {
        // 0x401c86
        return result;
    }
    goto lab_0x401cd2;
  lab_0x401df0:;
    int32_t v64 = __overflow((struct _IO_FILE *)v54, (int32_t)v53 % 256); // 0x401df8
    v33 = v54;
    v32 = v52 & 0xffffffff;
    v30 = v50;
    if (v64 >= 0) {
        goto lab_0x401bbd;
    } else {
        goto lab_0x401deb;
    }
  lab_0x401bbd:;
    int64_t v65 = v27 + 1; // 0x401bbd
    v51 = v47;
    v49 = g35 == v65 ? g36 : v65;
    goto lab_0x401bd0;
  lab_0x401d43:;
    unsigned char v66 = *(char *)&g17; // 0x401d43
    v21 = v66;
    v23 = v34;
    v19 = v35;
    v17 = v27;
    if ((int32_t)v66 != (int32_t)v26) {
        goto lab_0x401c43;
    } else {
        // 0x401d55
        result = 1;
        v62 = v34;
        v63 = v35;
        if ((*(char *)stream & 32) == 0) {
            goto lab_0x401c6b;
        } else {
            goto lab_0x401d5e;
        }
    }
  lab_0x401bd0:
    // 0x401bd0
    v20 = *v12;
    v22 = *v14;
    v16 = v49;
    v18 = v51 & 0xffffffff;
    goto lab_0x401bdb;
}
// Address range: 0x401e70 - 0x4023db
int64_t function_401e70(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 2; // 0x401e7d
    int64_t v2 = function_404a40(v1); // 0x401e8a
    uint64_t v3 = a1 + 1; // 0x401e94
    int64_t v4 = 8 * v3; // 0x401ea2
    if (v4 < 0 || v3 >= 0x2000000000000000) {
        // 0x4023d6
        function_404c90(v1);
        // UNREACHABLE
    }
    int64_t v5 = function_404a40(v4); // 0x401ebb
    int64_t * v6; // 0x401e70
    int64_t * v7; // 0x401e70
    int64_t v8; // 0x401e70
    int64_t v9; // 0x401e70
    int64_t v10; // 0x401e70
    int64_t v11; // 0x401e70
    int64_t v12; // 0x401e70
    int64_t v13; // 0x401e70
    int64_t v14; // 0x401e70
    int64_t v15; // 0x401e70
    int64_t v16; // 0x401e70
    int64_t v17; // 0x401e70
    int64_t v18; // 0x401e70
    int64_t v19; // 0x401e70
    int64_t v20; // 0x401e70
    int64_t v21; // 0x401e70
    int64_t v22; // 0x401e70
    int64_t v23; // 0x401e70
    char v24; // 0x401e70
    char v25; // 0x401e70
    int32_t v26; // 0x401e70
    int32_t v27; // 0x401e70
    int32_t v28; // 0x401e70
    int32_t v29; // 0x401e70
    int64_t * v30; // 0x401e70
    int64_t * data; // 0x401e70
    int64_t v31; // 0x401e70
    if (a1 == 0) {
        // 0x401eb8
        v7 = (int64_t *)v2;
        v6 = (int64_t *)v5;
        v27 = 1;
    } else {
        // 0x401f0c
        bool v32; // 0x401e70
        int64_t v33 = v32 ? -1 : 1; // 0x401f1b
        int32_t v34 = 0;
        int64_t v35 = 0;
        int64_t v36 = a2;
        int64_t * v37 = (int64_t *)v36;
        int64_t file_path = *v37; // 0x401f0c
        int64_t v38 = 2; // 0x401f1b
        int64_t v39 = (int64_t)"-";
        unsigned char v40 = *(char *)file_path; // 0x401f1b
        char v41 = *(char *)v39; // 0x401f1b
        int64_t v42 = file_path + v33; // 0x401f1b
        char v43 = v41; // 0x401f1b
        bool v44 = false; // 0x401f1b
        int64_t v45; // 0x401e70
        int64_t v46; // 0x401e70
        while (v40 == v41) {
            v38--;
            v45 = v39 + v33;
            v46 = v42;
            v43 = v40;
            v44 = true;
            if (v38 == 0) {
                // break -> 
                break;
            }
            v39 = v45;
            v40 = *(char *)v46;
            v41 = *(char *)v39;
            v42 = v46 + v33;
            v43 = v41;
            v44 = false;
        }
        int64_t v47; // 0x401e70
        int64_t v48; // 0x401e70
        int32_t v49; // 0x401e70
        int64_t v50; // 0x401efb
        int64_t v51; // 0x401f03
        while ((v40 >= v43 && !v44) == v40 < v43) {
            // 0x401ee8
            g38 = 1;
            v50 = v36 + 8;
            *(int64_t *)(8 * v35 + v5) = (int64_t)g30;
            v51 = v35 + 1;
            v49 = v34;
            v48 = v42;
            v47 = v50;
            v13 = a1;
            if (v51 == a1) {
                // break (via goto) -> 0x401f79
                goto lab_0x401f79;
            }
            v35 = v51;
            v36 = v50;
            v37 = (int64_t *)v36;
            file_path = *v37;
            v38 = 2;
            v39 = (int64_t)"-";
            v40 = *(char *)file_path;
            v41 = *(char *)v39;
            v42 = file_path + v33;
            v43 = v41;
            v44 = false;
            while (v40 == v41) {
                v38--;
                v45 = v39 + v33;
                v46 = v42;
                v43 = v40;
                v44 = true;
                if (v38 == 0) {
                    // break -> 
                    break;
                }
                v39 = v45;
                v40 = *(char *)v46;
                v41 = *(char *)v39;
                v42 = v46 + v33;
                v43 = v41;
                v44 = false;
            }
        }
        struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x401f2e
        int64_t v52 = (int64_t)file; // 0x401f2e
        *(int64_t *)(8 * v35 + v5) = v52;
        int64_t * v53 = v37; // 0x401f42
        if (file == NULL) {
            goto lab_0x4023a8;
        }
        int64_t v54 = v35 + 1; // 0x401f63
        int64_t v55 = v36 + 8; // 0x401f67
        int32_t v56 = fileno(file) == 0 ? 1 : v34; // 0x401f6b
        function_402830(v52, 2, file_path);
        v49 = v56;
        v48 = 2;
        v47 = v55;
        v13 = v54;
        while (v54 != a1) {
            // 0x401f0c
            v34 = v56;
            v35 = v54;
            v36 = v55;
            v37 = (int64_t *)v36;
            file_path = *v37;
            v38 = 2;
            v39 = (int64_t)"-";
            v40 = *(char *)file_path;
            v41 = *(char *)v39;
            v42 = file_path + v33;
            v43 = v41;
            v44 = false;
            while (v40 == v41) {
                v38--;
                v45 = v39 + v33;
                v46 = v42;
                v43 = v40;
                v44 = true;
                if (v38 == 0) {
                    // break -> 
                    break;
                }
                v39 = v45;
                v40 = *(char *)v46;
                v41 = *(char *)v39;
                v42 = v46 + v33;
                v43 = v41;
                v44 = false;
            }
            while ((v40 >= v43 && !v44) == v40 < v43) {
                // 0x401ee8
                g38 = 1;
                v50 = v36 + 8;
                *(int64_t *)(8 * v35 + v5) = (int64_t)g30;
                v51 = v35 + 1;
                v49 = v34;
                v48 = v42;
                v47 = v50;
                v13 = a1;
                if (v51 == a1) {
                    // break (via goto) -> 0x401f79
                    goto lab_0x401f79;
                }
                v35 = v51;
                v36 = v50;
                v37 = (int64_t *)v36;
                file_path = *v37;
                v38 = 2;
                v39 = (int64_t)"-";
                v40 = *(char *)file_path;
                v41 = *(char *)v39;
                v42 = file_path + v33;
                v43 = v41;
                v44 = false;
                while (v40 == v41) {
                    v38--;
                    v45 = v39 + v33;
                    v46 = v42;
                    v43 = v40;
                    v44 = true;
                    if (v38 == 0) {
                        // break -> 
                        break;
                    }
                    v39 = v45;
                    v40 = *(char *)v46;
                    v41 = *(char *)v39;
                    v42 = v46 + v33;
                    v43 = v41;
                    v44 = false;
                }
            }
            // 0x401f26
            file = fopen((char *)file_path, "r");
            v52 = (int64_t)file;
            *(int64_t *)(8 * v35 + v5) = v52;
            v53 = v37;
            if (file == NULL) {
                goto lab_0x4023a8;
            }
            // 0x401f48
            v54 = v35 + 1;
            v55 = v36 + 8;
            v56 = fileno(file) == 0 ? 1 : v34;
            function_402830(v52, 2, file_path);
            v49 = v56;
            v48 = 2;
            v47 = v55;
            v13 = v54;
        }
      lab_0x401f79:;
        int32_t v57 = 1; // 0x401f7e
        if ((char)v49 != 0) {
            // 0x401f84
            v57 = v49;
            if (g38 != 0) {
                // 0x40237f
                error(1, (int32_t)"standard input is closed" ^ (int32_t)"standard input is closed", dcgettext(NULL, "standard input is closed", 5));
                v53 = (int64_t *)v47;
              lab_0x4023a8:
                // 0x4023a8
                error(1, *__errno_location(), "%s", (char *)function_404300(0, 3, *v53));
                // 0x4023d6
                function_404c90(1);
                // UNREACHABLE
            }
        }
        // 0x401f94
        v30 = (int64_t *)v5;
        data = (int64_t *)v2;
        v31 = a2 - 8;
        v28 = v57;
        v22 = v48;
        v14 = v13;
        while (true) {
          lab_0x401f94:;
            int64_t v58 = *v30; // 0x401fad
            v29 = v28;
            v24 = 0;
            v19 = g36;
            v17 = 1;
            v23 = v22;
            v8 = v58;
            v9 = 0;
            v11 = v5;
            v15 = v14;
            v26 = v28;
            v25 = 0;
            v20 = g36;
            v18 = 1;
            v21 = v22;
            v10 = 0;
            v12 = v5;
            v16 = v14;
            if (v58 == 0) {
                goto lab_0x4020e7;
            } else {
                goto lab_0x401fc0;
            }
        }
    }
  lab_0x4021ab:
    // 0x4021ab
    free(v6);
    free(v7);
    return v27 % 256;
  lab_0x4020e7:;
    int64_t v59 = v16;
    int64_t v60 = v12;
    int64_t n = v10;
    int64_t v61 = v21;
    int64_t v62 = v18;
    int64_t v63 = v20;
    char v64 = v25;
    int32_t v65 = v26;
    int64_t v66; // 0x401e70
    int64_t v67; // 0x401e70
    int64_t v68; // 0x401e70
    int64_t v69; // 0x401e70
    int64_t v70; // 0x401e70
    int64_t v71; // 0x401e70
    int64_t v72; // 0x401e70
    int64_t v73; // 0x401e70
    int64_t v74; // 0x401e70
    int64_t v75; // 0x401e70
    int64_t v76; // 0x401e70
    int64_t v77; // 0x401e70
    int64_t v78; // 0x401e70
    int64_t v79; // 0x401e70
    char v80; // 0x401e70
    int32_t v81; // 0x401e70
    int32_t v82; // 0x401e70
    int32_t v83; // 0x401e70
    if (v13 == v62) {
        // 0x40214e
        v81 = v65;
        v78 = v61;
        v70 = v59;
        if (v64 == 0) {
            goto lab_0x4021a2;
        } else {
            // 0x402155
            if (n == 0) {
                goto lab_0x402183;
            } else {
                int32_t v84 = fwrite_unlocked(data, 1, (int32_t)n, g29); // 0x40216e
                v82 = v65;
                v75 = v63;
                v73 = v13;
                v77 = v2;
                v66 = n;
                v68 = v60;
                v71 = v59;
                if (n != (int64_t)v84) {
                    goto lab_0x402071;
                } else {
                    // 0x40217c
                    goto lab_0x402183;
                }
            }
        }
    } else {
        char v85 = *(char *)v63; // 0x4020ec
        int64_t v86 = n; // 0x4020f1
        if (v85 != 0) {
            // 0x4020f3
            *(char *)(n + v2) = v85;
            v86 = n + 1;
        }
        int64_t v87 = v63 + 1; // 0x402100
        v83 = v65;
        v80 = v64;
        v76 = g35 == v87 ? g36 : v87;
        v74 = v62;
        v79 = v61;
        v67 = v86;
        v69 = v60;
        v72 = v59;
        goto lab_0x4020be;
    }
  lab_0x401fc0:;
    int64_t v88 = v15;
    int64_t v89 = v11;
    int64_t n2 = v9;
    int64_t v90 = v8;
    int64_t v91 = v17;
    int64_t v92 = v19;
    int32_t v93 = v29;
    int64_t * v94 = (int64_t *)(v90 + 8); // 0x401fc0
    uint64_t v95 = *v94; // 0x401fc0
    struct _IO_FILE * stream; // 0x401e70
    int64_t v96; // 0x401e70
    int64_t v97; // 0x401e70
    int64_t v98; // 0x401e70
    int64_t v99; // 0x401e70
    int64_t v100; // 0x401e70
    int64_t v101; // 0x401e70
    char v102; // 0x401e70
    int32_t v103; // 0x401e70
    int32_t v104; // 0x401e70
    int32_t * v105; // 0x40221a
    if (*(int64_t *)(v90 + 16) > v95) {
        // 0x401fce
        *v94 = v95 + 1;
        int64_t v106 = (int64_t)*(char *)v95; // 0x401fd6
        v97 = v106;
        v98 = v106;
        v96 = 0;
        if (n2 == 0) {
            goto lab_0x40200a;
        } else {
            goto lab_0x401fdf;
        }
    } else {
        struct _IO_FILE * v107 = (struct _IO_FILE *)v90;
        uint32_t v108 = __uflow(v107); // 0x402211
        v105 = __errno_location();
        int64_t v109 = v108; // 0x40221f
        v97 = v109;
        if (n2 != 0 && v108 != -1) {
            goto lab_0x401fdf;
        } else {
            // 0x402249
            v98 = v109;
            v96 = n2;
            if (v108 != -1) {
                goto lab_0x40200a;
            } else {
                // 0x402253
                v102 = v24;
                if ((*(char *)v90 & 32) != 0) {
                    uint32_t err_num = *v105; // 0x40222e
                    int64_t v110 = *(int64_t *)(8 * v91 + v31); // 0x402291
                    int64_t v111 = err_num; // 0x40229b
                    error(0, err_num, "%s", (char *)function_404300(0, 3, v110));
                    int64_t v112 = 0x100000000 * v90 >> 32; // 0x4022b0
                    v103 = 0;
                    v100 = v111;
                    v99 = v112;
                    if (v112 != (int64_t)g30) {
                        goto lab_0x402265;
                    } else {
                        // 0x402280
                        stream = (struct _IO_FILE *)v112;
                        v104 = 0;
                        v101 = v111;
                        goto lab_0x4022c6;
                    }
                } else {
                    // 0x402259
                    v103 = v93;
                    v100 = v23;
                    v99 = v90;
                    stream = v107;
                    v104 = v93;
                    v101 = v23;
                    if (v90 == (int64_t)g30) {
                        goto lab_0x4022c6;
                    } else {
                        goto lab_0x402265;
                    }
                }
            }
        }
    }
  lab_0x4021a2:
    // 0x4021a2
    v28 = v81;
    v22 = v78;
    v14 = v70;
    v7 = data;
    v6 = v30;
    v27 = v81;
    if (v70 == 0) {
        // break -> 0x4021ab
        goto lab_0x4021ab;
    }
    goto lab_0x401f94;
  lab_0x4020be:;
    int64_t v113 = v72;
    int64_t v114 = v79;
    uint64_t v115 = v74;
    int32_t v116 = v83;
    v81 = v116;
    v78 = v114;
    v70 = v113;
    if (v13 <= v115 || v113 == 0) {
        goto lab_0x4021a2;
    } else {
        int64_t v117 = v69 + 8; // 0x4020ca
        int64_t v118 = v115 + 1; // 0x4020ce
        int64_t v119 = *(int64_t *)v117; // 0x4020da
        v29 = v116;
        v24 = v80;
        v19 = v76;
        v17 = v118;
        v23 = v114;
        v8 = v119;
        v9 = v67;
        v11 = v117;
        v15 = v113;
        v26 = v116;
        v25 = v80;
        v20 = v76;
        v18 = v118;
        v21 = v114;
        v10 = v67;
        v12 = v117;
        v16 = v113;
        if (v119 != 0) {
            goto lab_0x401fc0;
        } else {
            goto lab_0x4020e7;
        }
    }
  lab_0x40200a:;
    int64_t v120 = v96;
    int64_t v121 = v98;
    int32_t v122 = v93; // 0x402017
    int64_t v123 = v92; // 0x402017
    int64_t v124 = v91; // 0x402017
    int64_t v125 = v121; // 0x402017
    int64_t v126 = v120; // 0x402017
    int64_t v127 = v89; // 0x402017
    int64_t v128 = v88; // 0x402017
    int64_t v129; // 0x401e70
    int64_t v130; // 0x401e70
    int64_t v131; // 0x401e70
    int64_t v132; // 0x401e70
    int64_t v133; // 0x401e70
    int64_t v134; // 0x401e70
    int64_t v135; // 0x401e70
    int64_t v136; // 0x401e70
    int64_t v137; // 0x401e70
    int64_t v138; // 0x401e70
    int64_t v139; // 0x401e70
    int64_t v140; // 0x401e70
    int64_t v141; // 0x401e70
    int32_t v142; // 0x401e70
    int32_t v143; // 0x401e70
    if ((int32_t)v121 != (int32_t)*(char *)&g17) {
        goto lab_0x402053;
    } else {
        // 0x402305
        v143 = v93;
        v138 = v92;
        v136 = v91;
        v141 = v121;
        v130 = v120;
        v132 = v89;
        v133 = v88;
        v142 = v93;
        v139 = v92;
        v137 = v13;
        v140 = v121;
        v135 = v121;
        v129 = v120;
        v131 = v89;
        v134 = v88;
        if (v13 == v91) {
            goto lab_0x402124;
        } else {
            goto lab_0x402095;
        }
    }
  lab_0x401fdf:;
    int32_t v144 = fwrite_unlocked(data, 1, (int32_t)n2, g29); // 0x401ff8
    v82 = v93;
    v75 = v92;
    v73 = v91;
    v77 = v2;
    v66 = n2;
    v68 = v89;
    v71 = v88;
    if (n2 != (int64_t)v144) {
        goto lab_0x402071;
    } else {
        // 0x402007
        v98 = 0x1000000 * (int32_t)v97 >> 24;
        v96 = 0;
        goto lab_0x40200a;
    }
  lab_0x402183:;
    int64_t v145 = (int64_t)g29;
    unsigned char v146 = *(char *)&g17; // 0x402183
    int64_t * v147 = (int64_t *)(v145 + 40); // 0x40218a
    uint64_t v148 = *v147; // 0x40218a
    if (v148 >= *(int64_t *)(v145 + 48)) {
        int32_t v149 = __overflow(g29, (int32_t)v146); // 0x402336
        v82 = v65;
        v75 = v63;
        v73 = v13;
        v77 = v145;
        v66 = n;
        v68 = v60;
        v71 = v59;
        v81 = v65;
        v78 = v146;
        v70 = v59;
        if (v149 >= 0) {
            goto lab_0x4021a2;
        } else {
            goto lab_0x402071;
        }
    } else {
        int64_t v150 = v148 + 1; // 0x402198
        *v147 = v150;
        *(char *)v148 = v146;
        v81 = v65;
        v78 = v150;
        v70 = v59;
        goto lab_0x4021a2;
    }
  lab_0x402053:;
    int64_t v151 = v128;
    int64_t v152 = v127;
    int64_t v153 = v126;
    int64_t v154 = v125;
    int64_t v155 = v124;
    int64_t v156 = v123;
    int32_t v157 = v122;
    int64_t v158 = (int64_t)g29; // 0x402053
    int64_t * v159 = (int64_t *)(v158 + 40); // 0x40205a
    uint64_t v160 = *v159; // 0x40205a
    if (v160 < *(int64_t *)(v158 + 48)) {
        // 0x402020
        *v159 = v160 + 1;
        *(char *)v160 = (char)v154;
        goto lab_0x40202b;
    } else {
        // 0x402064
        v82 = v157;
        v75 = v156;
        v73 = v155;
        v77 = v158;
        v66 = v153;
        v68 = v152;
        v71 = v151;
        if (__overflow(g29, (int32_t)v154 % 256) >= 0) {
            goto lab_0x40202b;
        } else {
            goto lab_0x402071;
        }
    }
  lab_0x402071:
    // 0x402071
    function_401af0(v77);
    int32_t v161 = v82; // 0x402076
    int64_t v162 = v75; // 0x402076
    int64_t v163 = v73; // 0x402076
    int64_t v164 = v77; // 0x402076
    int64_t v165 = v66; // 0x402076
    int64_t v166 = v68; // 0x402076
    int64_t v167 = v71; // 0x402076
    goto lab_0x402080;
  lab_0x402124:;
    int64_t v212 = v134;
    int64_t v211 = v131;
    int64_t v210 = v129;
    uint64_t v213 = v135;
    int64_t v209 = v137;
    int64_t v208 = v139;
    int32_t v207 = v142;
    int64_t v214 = (int64_t)g29; // 0x402124
    int64_t * v215 = (int64_t *)(v214 + 40); // 0x40212b
    uint64_t v216 = *v215; // 0x40212b
    if (v216 >= *(int64_t *)(v214 + 48)) {
        // 0x402313
        v82 = v207;
        v75 = v208;
        v73 = v209;
        v77 = v214;
        v66 = v210;
        v68 = v211;
        v71 = v212;
        if (__overflow(g29, (int32_t)(v213 % 256)) >= 0) {
            goto lab_0x402144;
        } else {
            goto lab_0x402071;
        }
    } else {
        // 0x402139
        *v215 = v216 + 1;
        *(char *)v216 = (char)v213;
        goto lab_0x402144;
    }
  lab_0x402095:;
    int64_t v199 = v133;
    int64_t v198 = v132;
    int64_t v197 = v130;
    int64_t v217 = v141;
    int64_t v195 = v136;
    int64_t v193 = v138;
    int32_t v194 = v143;
    unsigned char v218 = *(char *)v193; // 0x402095
    int64_t v196 = v217; // 0x40209a
    if (v218 != 0) {
        int64_t v219 = (int64_t)g29; // 0x4021e5
        int64_t * v220 = (int64_t *)(v219 + 40); // 0x4021ec
        uint64_t v221 = *v220; // 0x4021ec
        if (v221 >= *(int64_t *)(v219 + 48)) {
            int32_t v222 = __overflow(g29, (int32_t)v218); // 0x402353
            v82 = v194;
            v75 = v193;
            v73 = v195;
            v77 = v219;
            v66 = v197;
            v68 = v198;
            v71 = v199;
            v196 = v218;
            if (v222 >= 0) {
                goto lab_0x4020a0;
            } else {
                goto lab_0x402071;
            }
        } else {
            // 0x4021fa
            *v220 = v221 + 1;
            *(char *)v221 = v218;
            v196 = v217;
            goto lab_0x4020a0;
        }
    } else {
        goto lab_0x4020a0;
    }
  lab_0x402080:;
    int64_t v168 = v167;
    int64_t v169 = v166;
    int64_t v170 = v165;
    int64_t v171 = v163;
    int64_t v172 = v162;
    int32_t v173 = v161;
    uint32_t v174 = __uflow((struct _IO_FILE *)v164); // 0x402080
    int64_t v175 = v174; // 0x402085
    int32_t v176 = v173; // 0x40208a
    int64_t v177 = v172; // 0x40208a
    int64_t v178 = v171; // 0x40208a
    int64_t v179 = v175; // 0x40208a
    int64_t v180 = v170; // 0x40208a
    int64_t v181 = v169; // 0x40208a
    int64_t v182 = v168; // 0x40208a
    if (v174 != -1) {
        goto lab_0x402044;
    } else {
        // 0x40208c
        v143 = v173;
        v138 = v172;
        v136 = v171;
        v141 = v175;
        v130 = v170;
        v132 = v169;
        v133 = v168;
        if (v13 == v171) {
            unsigned char v183 = *(char *)&g17; // 0x4021d8
            v142 = v173;
            v139 = v172;
            int64_t v184; // 0x401e70
            v137 = v184;
            v140 = v175;
            v135 = v183;
            v129 = v170;
            v131 = v169;
            v134 = v168;
            goto lab_0x402124;
        } else {
            goto lab_0x402095;
        }
    }
  lab_0x40202b:;
    int64_t v185 = *(int64_t *)v152; // 0x40202b
    int64_t * v186 = (int64_t *)(v185 + 8); // 0x40202f
    uint64_t v187 = *v186; // 0x40202f
    v161 = v157;
    v162 = v156;
    v163 = v155;
    v164 = v185;
    v165 = v153;
    v166 = v152;
    v167 = v151;
    if (v187 >= *(int64_t *)(v185 + 16)) {
        goto lab_0x402080;
    } else {
        // 0x402039
        *v186 = v187 + 1;
        v176 = v157;
        v177 = v156;
        v178 = v155;
        v179 = (int64_t)*(char *)v187;
        v180 = v153;
        v181 = v152;
        v182 = v151;
        goto lab_0x402044;
    }
  lab_0x402265:;
    int64_t v188 = function_404cd0(v99, v100); // 0x402265
    int32_t v189 = v103; // 0x40226d
    int64_t v190 = v100; // 0x40226d
    if ((int32_t)v188 == -1) {
        int64_t v191 = function_404300(0, 3, *(int64_t *)(8 * v91 + v31)); // 0x4022de
        uint32_t err_num2 = *v105; // 0x4022f2
        error(0, err_num2, "%s", (char *)v191);
        v189 = 0;
        v190 = err_num2;
    }
    goto lab_0x40226f;
  lab_0x4022c6:
    // 0x4022c6
    clearerr_unlocked(stream);
    v189 = v104;
    v190 = v101;
    goto lab_0x40226f;
  lab_0x402044:;
    int64_t v200 = v182;
    int64_t v201 = v181;
    int64_t v202 = v180;
    int64_t v203 = v179;
    int64_t v204 = v178;
    int64_t v205 = v177;
    int32_t v206 = v176;
    v122 = v206;
    v123 = v205;
    v124 = v204;
    v125 = v203;
    v126 = v202;
    v127 = v201;
    v128 = v200;
    if ((int32_t)*(char *)&g17 == (int32_t)v203) {
        // 0x402118
        v143 = v206;
        v138 = v205;
        v136 = v204;
        v141 = v203;
        v130 = v202;
        v132 = v201;
        v133 = v200;
        v142 = v206;
        v139 = v205;
        v137 = v204;
        v140 = v203;
        v135 = v203;
        v129 = v202;
        v131 = v201;
        v134 = v200;
        if (v13 != v204) {
            goto lab_0x402095;
        } else {
            goto lab_0x402124;
        }
    } else {
        goto lab_0x402053;
    }
  lab_0x402144:
    // 0x402144
    v83 = v207;
    v80 = 1;
    v76 = v208;
    v74 = v209;
    v79 = v140;
    v67 = v210;
    v69 = v211;
    v72 = v212;
    goto lab_0x4020be;
  lab_0x40226f:
    // 0x40226f
    *(int64_t *)v89 = 0;
    v26 = v189;
    v25 = v102;
    v20 = v92;
    v18 = v91;
    v21 = v190;
    v10 = n2;
    v12 = v89;
    v16 = v88 - 1;
    goto lab_0x4020e7;
  lab_0x4020a0:;
    int64_t v192 = v193 + 1; // 0x4020a0
    v83 = v194;
    v80 = 1;
    v76 = g35 == v192 ? g36 : v192;
    v74 = v195;
    v79 = v196;
    v67 = v197;
    v69 = v198;
    v72 = v199;
    goto lab_0x4020be;
}
// Address range: 0x4023e0 - 0x40275d
int64_t function_4023e0(int32_t status) {
    // 0x4023e0
    if (status != 0) {
        // 0x4023fa
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40241f
        exit(status);
        // UNREACHABLE
    }
    // 0x402426
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Write lines consisting of the sequentially corresponding lines from\neach FILE, separated by TABs, to standard output.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -d, --delimiters=LIST   reuse characters from LIST instead of TABs\n  -s, --serial            paste one file at a time instead of in parallel\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x402539
    bool v2; // 0x4023e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4025c0
    int64_t v6 = *(int64_t *)v5; // 0x4025c4
    int64_t v7 = 6; // 0x4025ca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"paste";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4025d6
        char v11 = *(char *)v9; // 0x4025d6
        char v12 = v11; // 0x4025d6
        bool v13 = false; // 0x4025d6
        while (v10 == v11) {
            // 0x4025cc
            v7--;
            int64_t v14 = v9 + v3; // 0x4025d6
            int64_t v15 = v8 + v3; // 0x4025d6
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
            // break -> 0x4025e2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x4025e2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4026f4;
        } else {
            // 0x4026de
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402733
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402644;
            } else {
                goto lab_0x4026f4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402644;
        } else {
            // 0x40262a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402733
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402644;
            } else {
                goto lab_0x402644;
            }
        }
    }
  lab_0x4026f4:
    // 0x4026f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402684
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40241f
    exit(status);
    // UNREACHABLE
  lab_0x402644:
    // 0x402644
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402684
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40241f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402760 - 0x402768
int64_t function_402760(int64_t a1) {
    // 0x402760
    g40 = a1;
    int64_t result; // 0x402760
    return result;
}
// Address range: 0x402770 - 0x402778
int64_t function_402770(int64_t a1) {
    // 0x402770
    g39 = a1;
    int64_t result; // 0x402770
    return result;
}
// Address range: 0x402780 - 0x40281e
int64_t function_402780(void) {
    // 0x402780
    int32_t * err_num; // 0x402796
    if ((int32_t)function_405c40((int64_t)g29) == 0) {
        goto lab_0x4027ac;
    } else {
        // 0x402796
        err_num = __errno_location();
        if (g39 == 0) {
            goto lab_0x4027c3;
        } else {
            // 0x4027a7
            if (*err_num != 32) {
                goto lab_0x4027c3;
            } else {
                goto lab_0x4027ac;
            }
        }
    }
  lab_0x4027ac:;
    int64_t result = function_405c40((int64_t)g32); // 0x4027b3
    if ((int32_t)result == 0) {
        // 0x4027bc
        return result;
    }
    // 0x4027fe
    _exit(g19);
    // UNREACHABLE
  lab_0x4027c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4027cf
    if (g40 == 0) {
        // 0x402809
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4027e3
        error(0, *err_num, "%s: %s", (char *)function_4042d0((int64_t)g40), v1);
    }
    // 0x4027fe
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x402820 - 0x402825
int64_t function_402820(void) {
    // 0x402820
    int64_t fd; // 0x402820
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402830 - 0x402851
int64_t function_402830(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402830
    if (stream == 0) {
        // 0x402850
        int64_t result; // 0x402830
        return result;
    }
    // 0x402835
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402860 - 0x4028f9
int64_t function_402860(int64_t str) {
    // 0x402860
    if (str == 0) {
        // 0x4028d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40286e
    int64_t result = (int64_t)found_char_pos; // 0x40286e
    if (found_char_pos == NULL) {
        // 0x4028c9
        g41 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402878
    if (v1 - str < 7) {
        // 0x4028c9
        g41 = str;
        g31 = str;
        return result;
    }
    // 0x402888
    bool v2; // 0x402860
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402860
    int64_t v5 = result - 6; // 0x402860
    int64_t v6 = 7; // 0x402896
    unsigned char v7 = *(char *)v5; // 0x402896
    char v8 = *(char *)v4; // 0x402896
    char v9 = v8; // 0x402896
    bool v10 = false; // 0x402896
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
    int64_t v12 = (int64_t)"lt-"; // 0x4028a0
    int64_t v13 = v1; // 0x4028a0
    int64_t v14 = 3; // 0x4028a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4028c9
        g41 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4028b2
    char v16 = *(char *)v12; // 0x4028b2
    char v17 = v16; // 0x4028b2
    bool v18 = false; // 0x4028b2
    while (v15 == v16) {
        // 0x4028a2
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
    int64_t v20 = v1; // 0x4028bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4028be
        v20 = result + 4;
        g28 = v20;
    }
    // 0x4028c9
    g41 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x402900 - 0x4029f2
int64_t function_402900(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402914
    int64_t result = (int64_t)v1; // 0x402914
    if (result != a1) {
        // 0x402921
        return result;
    }
    int64_t v2 = function_405d00(); // 0x402930
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4029e6
    if (v3 == 85) {
        // 0x402940
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4029d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x40296e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40297b
        // 0x402921
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4029d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x4029bd
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x4029ca
    // 0x402921
    return result4;
}
// Address range: 0x402a00 - 0x402a57
int64_t function_402a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402a00
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402a48
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402a57 - 0x403c21
int64_t function_402a57(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402aa1
    int64_t v3 = 0; // 0x402aa1
    int64_t v4; // 0x402a57
    int64_t v5; // 0x402a57
    int64_t v6; // 0x402a57
    int64_t v7; // 0x402a57
    int64_t v8; // 0x402a57
    int64_t v9; // 0x402a57
    int64_t v10; // 0x402a57
    int64_t v11; // 0x402a57
    int64_t v12; // 0x402a57
    int64_t v13; // 0x402a57
    int64_t v14; // 0x402a57
    int64_t v15; // 0x402a57
    int64_t v16; // 0x402a57
    int64_t v17; // 0x402a57
    int64_t v18; // 0x402a57
    int64_t result; // 0x402a57
    int64_t v19; // 0x402a57
    int32_t wc; // bp+132, 0x402a57
    int64_t ps; // bp+136, 0x402a57
    char v20; // 0x403010
    int64_t v21; // 0x403010
    int64_t v22; // 0x4033b8
    int64_t v23; // 0x402a57
    int64_t v24; // 0x4033d7
    int32_t v25; // 0x402a57
    while (true) {
      lab_0x402aa8_2:
        // 0x402aa8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402a57
        int64_t v27; // 0x402adc
        while (true) {
          lab_0x402aa8:
            // 0x402aa8
            v5 = v26;
            bool v28 = v15 == v5; // 0x402ab3
            if (v15 == -1) {
                // 0x402ab5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402ac3
            if (v28) {
                // break (via goto) -> 0x403228
                goto lab_0x403228;
            }
            // 0x402acc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g52 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4030bb
                    if (v25 % 2 == 0) {
                        goto lab_0x402c01;
                    }
                    // 0x4034dd
                    v26 = v5 + 1;
                    goto lab_0x402aa8;
                }
                case 7: {
                    goto lab_0x402c01;
                }
                case 8: {
                    goto lab_0x402c01;
                }
                case 9: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402c01;
                }
                case 12: {
                    goto lab_0x402c01;
                }
                case 13: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402bcd;
                }
                case 36: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402c01;
                }
                case 38: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402c01;
                }
                case 44: {
                    goto lab_0x402c01;
                }
                case 45: {
                    goto lab_0x402c01;
                }
                case 46: {
                    goto lab_0x402c01;
                }
                case 47: {
                    goto lab_0x402c01;
                }
                case 48: {
                    goto lab_0x402c01;
                }
                case 49: {
                    goto lab_0x402c01;
                }
                case 50: {
                    goto lab_0x402c01;
                }
                case 51: {
                    goto lab_0x402c01;
                }
                case 52: {
                    goto lab_0x402c01;
                }
                case 53: {
                    goto lab_0x402c01;
                }
                case 54: {
                    goto lab_0x402c01;
                }
                case 55: {
                    goto lab_0x402c01;
                }
                case 56: {
                    goto lab_0x402c01;
                }
                case 57: {
                    goto lab_0x402c01;
                }
                case 58: {
                    goto lab_0x402c01;
                }
                case 59: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402c01;
                }
                case 66: {
                    goto lab_0x402c01;
                }
                case 67: {
                    goto lab_0x402c01;
                }
                case 68: {
                    goto lab_0x402c01;
                }
                case 69: {
                    goto lab_0x402c01;
                }
                case 70: {
                    goto lab_0x402c01;
                }
                case 71: {
                    goto lab_0x402c01;
                }
                case 72: {
                    goto lab_0x402c01;
                }
                case 73: {
                    goto lab_0x402c01;
                }
                case 74: {
                    goto lab_0x402c01;
                }
                case 75: {
                    goto lab_0x402c01;
                }
                case 76: {
                    goto lab_0x402c01;
                }
                case 77: {
                    goto lab_0x402c01;
                }
                case 78: {
                    goto lab_0x402c01;
                }
                case 79: {
                    goto lab_0x402c01;
                }
                case 80: {
                    goto lab_0x402c01;
                }
                case 81: {
                    goto lab_0x402c01;
                }
                case 82: {
                    goto lab_0x402c01;
                }
                case 83: {
                    goto lab_0x402c01;
                }
                case 84: {
                    goto lab_0x402c01;
                }
                case 85: {
                    goto lab_0x402c01;
                }
                case 86: {
                    goto lab_0x402c01;
                }
                case 87: {
                    goto lab_0x402c01;
                }
                case 88: {
                    goto lab_0x402c01;
                }
                case 89: {
                    goto lab_0x402c01;
                }
                case 90: {
                    goto lab_0x402c01;
                }
                case 91: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402c01;
                }
                case 94: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402c01;
                }
                case 96: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402c01;
                }
                case 98: {
                    goto lab_0x402c01;
                }
                case 99: {
                    goto lab_0x402c01;
                }
                case 100: {
                    goto lab_0x402c01;
                }
                case 101: {
                    goto lab_0x402c01;
                }
                case 102: {
                    goto lab_0x402c01;
                }
                case 103: {
                    goto lab_0x402c01;
                }
                case 104: {
                    goto lab_0x402c01;
                }
                case 105: {
                    goto lab_0x402c01;
                }
                case 106: {
                    goto lab_0x402c01;
                }
                case 107: {
                    goto lab_0x402c01;
                }
                case 108: {
                    goto lab_0x402c01;
                }
                case 109: {
                    goto lab_0x402c01;
                }
                case 110: {
                    goto lab_0x402c01;
                }
                case 111: {
                    goto lab_0x402c01;
                }
                case 112: {
                    goto lab_0x402c01;
                }
                case 113: {
                    goto lab_0x402c01;
                }
                case 114: {
                    goto lab_0x402c01;
                }
                case 115: {
                    goto lab_0x402c01;
                }
                case 116: {
                    goto lab_0x402c01;
                }
                case 117: {
                    goto lab_0x402c01;
                }
                case 118: {
                    goto lab_0x402c01;
                }
                case 119: {
                    goto lab_0x402c01;
                }
                case 120: {
                    goto lab_0x402c01;
                }
                case 121: {
                    goto lab_0x402c01;
                }
                case 122: {
                    goto lab_0x402c01;
                }
                case 123: {
                    goto lab_0x402ba5;
                }
                case 124: {
                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402ba5;
                }
                case 126: {
                    goto lab_0x402bcd;
                }
                default: {
                    goto lab_0x402fa5;
                }
            }
        }
      lab_0x402fa5:
        if (v23 != 1) {
            // 0x403310
            ps = 0;
            int64_t len = v15; // 0x403320
            if (v15 == -1) {
                // 0x403322
                len = strlen((char *)str);
            }
            // 0x40334e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4033af:
                // 0x4033af
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4033b4
                int64_t v30 = v29 + str;
                v24 = function_405bc0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40392a_2;
                    }
                    case -1: {
                        goto lab_0x40392a_2;
                    }
                    case -2: {
                        // 0x403a0d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403a47
                            v19 = v18;
                            int64_t v31 = v18; // 0x403a4a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403a57
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403a50
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40392a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40392a_2;
                    }
                    case 1: {
                        goto lab_0x403380;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40342c
                        char v34 = *(char *)v33; // 0x40343d
                        unsigned char v35; // 0x402a57
                        if (v34 < 125) {
                            // 0x403448
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40345f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403430
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40343d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403448
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40345f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403430
                            v33++;
                        }
                        goto lab_0x403380;
                    }
                }
            }
            goto lab_0x40392a_2;
        } else {
            // 0x402ff4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402c01;
        }
    }
  lab_0x403228:
    // 0x403228
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403b2a
        if (v8 > result) {
            // 0x403b33
            *(char *)(v12 + result) = 0;
        }
        // 0x402e57
        return result;
    }
    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402c01:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402c10
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402e1a_2;
        }
    }
    int64_t v39 = result; // 0x402d11
    char v40 = v20; // 0x402d11
    int64_t v41 = v38; // 0x402d11
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402d11
    int64_t v43 = v36; // 0x402d11
    goto lab_0x402c8d;
  lab_0x402e1a_2:
    // 0x402e57
    return function_402a00(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40392a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402c01;
    } else {
        uint64_t v49 = v46 + v5; // 0x4034fe
        int64_t v50 = v5 + 1; // 0x4035e1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4035e8
        char v52 = v20; // 0x4035e8
        int64_t v53 = result; // 0x4035e8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4035b1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4035b5
            int64_t v56 = v54 + 1; // 0x4035ba
            int64_t v57 = v51 + 1; // 0x4035e1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4035ac
                v54 = v56;
                if (v47 > v54) {
                    // 0x4035b1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4035b5
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
        goto lab_0x402c8d;
    }
  lab_0x403380:
    // 0x403380
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40339f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4033a2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40392a
        goto lab_0x40392a_2;
    }
    goto lab_0x4033af;
  lab_0x402bcd:
    // 0x402bcd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402e1a_2;
    }
    goto lab_0x402c01;
  lab_0x402ba5:;
    bool v60 = v15 == 1; // 0x402bb0
    if (v15 == -1) {
        // 0x402bb2
        v60 = *(char *)v1 == 0;
    }
    // 0x402bbe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402c01;
    } else {
        goto lab_0x402bcd;
    }
  lab_0x402c8d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402c92
        *(char *)(v44 + v45) = v40;
    }
    // 0x402c96
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402aa8_2;
}
// Address range: 0x403c30 - 0x403dce
int64_t function_403c30(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403c32
    int32_t * v3 = __errno_location(); // 0x403c4c
    int64_t v4 = (int64_t)g21; // 0x403c51
    int32_t v5 = *v3; // 0x403c5b
    int64_t v6 = v4; // 0x403c71
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403dc9
            function_404c90(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403c80
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403c87
        int64_t v9; // 0x403c30
        if (g21 == &g22) {
            int64_t v10 = function_404aa0(0, v8); // 0x403daa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x403daf
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404aa0(v4, v8); // 0x403c9b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x403caa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x403caa
        int32_t v14 = v7; // 0x403cb1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403ce1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403ceb
    int64_t * v17 = (int64_t *)v15; // 0x403cee
    uint64_t v18 = *v17; // 0x403cee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403cf1
    int64_t result = *v19; // 0x403cf1
    int64_t v20; // 0x403c30
    uint64_t v21 = function_402a00(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403d14
    if (v18 > v21) {
        // 0x403d8b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403d27
    *v17 = v22;
    if (result != (int64_t)&g42) {
        // 0x403d37
        free((int64_t *)result);
    }
    int64_t result2 = function_404a40(v22); // 0x403d51
    *v19 = result2;
    int64_t v23; // 0x403c30
    function_402a00(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403d8b
    *v3 = v5;
    return result2;
}
// Address range: 0x403dd0 - 0x403e04
int64_t function_403dd0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403dd7
    int64_t result = function_404c40(a1 == 0 ? (int64_t)&g43 : a1, 56); // 0x403df6
    return result;
}
// Address range: 0x403e10 - 0x403e1f
int64_t function_403e10(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g43 : a1); // 0x403e1c
    return result;
}
// Address range: 0x403e20 - 0x403e2f
int64_t function_403e20(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x403e28
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g43;
}
// Address range: 0x403e30 - 0x403e63
int64_t function_403e30(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 + 8 : a1 + 8; // 0x403e49
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403e4e
    uint32_t v3 = *v2; // 0x403e4e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403e52
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403e70 - 0x403e83
int64_t function_403e70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g43 + 4 : a1 + 4); // 0x403e7c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403e90 - 0x403ebb
int64_t function_403e90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x403e98
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403eb5
        abort();
        // UNREACHABLE
    }
    // 0x403eac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g43;
}
// Address range: 0x403ec0 - 0x403f32
int64_t function_403ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g43 : a5; // 0x403ee2
    int32_t * v2 = __errno_location(); // 0x403eeb
    uint32_t v3 = *(int32_t *)v1; // 0x403f0b
    int64_t result = function_402a00(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403f1a
    return result;
}
// Address range: 0x403f40 - 0x404021
int64_t function_403f40(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g43 : a4; // 0x403f62
    int32_t * v2 = __errno_location(); // 0x403f68
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403f87
    int32_t * v4 = (int32_t *)v1; // 0x403f8a
    int64_t v5 = function_402a00(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403fa5
    int64_t v6 = v5 + 1; // 0x403faa
    int64_t result = function_404a40(v6); // 0x403fbf
    function_402a00(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404004
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40400d
    return result;
}
// Address range: 0x404030 - 0x40403a
int64_t function_404030(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404030
    return function_403f40(a1, a2, 0, a3);
}
// Address range: 0x404040 - 0x4040d5
int64_t function_404040(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x404040
    int64_t v2 = v1; // 0x404040
    int64_t v3 = v2; // 0x404054
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x404073
        free((int64_t *)*(int64_t *)v4);
        v3 = &g53;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404070
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g53;
        }
    }
    int64_t v6 = v3; // 0x40408d
    if (g22 != 0x609300) {
        // 0x40408f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g42;
        v6 = &g53;
    }
    int64_t result = v6; // 0x4040b1
    if (g21 != &g22) {
        // 0x4040b3
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g53;
    }
    // 0x4040c6
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x4040e0 - 0x4040f1
int64_t function_4040e0(void) {
    // 0x4040e0
    int64_t v1; // 0x4040e0
    return function_403c30(v1, v1, -1, (int64_t *)&g43);
}
// Address range: 0x404100 - 0x40410a
int64_t function_404100(void) {
    // 0x404100
    int64_t v1; // 0x404100
    return function_403c30(v1, v1, v1, (int64_t *)&g43);
}
// Address range: 0x404110 - 0x404126
int64_t function_404110(int64_t a1) {
    // 0x404110
    return function_403c30(0, a1, -1, (int64_t *)&g43);
}
// Address range: 0x404130 - 0x404142
int64_t function_404130(int64_t a1, int64_t a2) {
    // 0x404130
    return function_403c30(0, a1, a2, (int64_t *)&g43);
}
// Address range: 0x404150 - 0x4041b8
int64_t function_404150(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404160
    return function_403c30((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4041c0 - 0x404224
int64_t function_4041c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4041d0
    return function_403c30((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404230 - 0x40423c
int64_t function_404230(int64_t a1, int64_t a2) {
    // 0x404230
    return function_404150(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404240 - 0x40424f
int64_t function_404240(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404240
    return function_4041c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404250 - 0x4042c0
int64_t function_404250(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x40425d
    int128_t v2 = __asm_movdqa(g44); // 0x404265
    int128_t v3 = __asm_movdqa(g45); // 0x40426d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404282
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404298
    uint32_t v6 = *v5; // 0x404298
    uint32_t v7 = (int32_t)a3 % 32; // 0x40429d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403c30(0, a1, a2, &v4);
}
// Address range: 0x4042c0 - 0x4042cd
int64_t function_4042c0(int64_t a1, int64_t a2) {
    // 0x4042c0
    return function_404250(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4042d0 - 0x4042e1
int64_t function_4042d0(int64_t a1) {
    // 0x4042d0
    return function_404250(a1, -1, 58);
}
// Address range: 0x4042f0 - 0x4042fa
int64_t function_4042f0(void) {
    // 0x4042f0
    int64_t v1; // 0x4042f0
    return function_404250(v1, v1, 58);
}
// Address range: 0x404300 - 0x40436e
int64_t function_404300(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40431a
    return function_403c30((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404370 - 0x4043dc
int64_t function_404370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x404377
    int128_t v2 = __asm_movdqa(g44); // 0x40437f
    int128_t v3 = __asm_movdqa(g45); // 0x404387
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4043a9
    if (a2 == 0 || a3 == 0) {
        // 0x4043d7
        abort();
        // UNREACHABLE
    }
    // 0x4043ba
    return function_403c30(a1, a4, a5, &v4);
}
// Address range: 0x4043e0 - 0x4043e9
int64_t function_4043e0(void) {
    // 0x4043e0
    int64_t v1; // 0x4043e0
    return function_404370(v1, v1, v1, v1, -1);
}
// Address range: 0x4043f0 - 0x404407
int64_t function_4043f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4043f0
    return function_404370(0, a1, a2, a3, -1);
}
// Address range: 0x404410 - 0x404423
int64_t function_404410(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404410
    return function_404370(0, a1, a2, a3, a4);
}
// Address range: 0x404430 - 0x40443a
int64_t function_404430(void) {
    // 0x404430
    int64_t v1; // 0x404430
    return function_403c30(v1, v1, v1, &g20);
}
// Address range: 0x404440 - 0x404452
int64_t function_404440(int64_t a1, int64_t a2) {
    // 0x404440
    return function_403c30(0, a1, a2, &g20);
}
// Address range: 0x404460 - 0x404471
int64_t function_404460(void) {
    // 0x404460
    int64_t v1; // 0x404460
    return function_403c30(v1, v1, -1, &g20);
}
// Address range: 0x404480 - 0x404496
int64_t function_404480(int64_t a1) {
    // 0x404480
    return function_403c30(0, a1, -1, &g20);
}
// Address range: 0x4044a0 - 0x40487d
int64_t function_4044a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404538
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4044bc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4044d6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40451b
    if (a6 < 10) {
        // 0x40452a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404622
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404880 - 0x4048a0
int64_t function_404880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404880
    if (a5 == 0) {
        // 0x40489b
        return function_4044a0(a1, a2, a3, a4, a5, 0, (int64_t)&g53);
    }
    int64_t v1 = 0; // 0x404887
    v1++;
    int64_t v2 = v1; // 0x404899
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404890
        v1++;
        v2 = v1;
    }
    // 0x40489b
    return function_4044a0(a1, a2, a3, a4, a5, v2, (int64_t)&g53);
}
// Address range: 0x4048a0 - 0x404900
int64_t function_4048a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4048a0
    int64_t v3 = &v2; // 0x4048a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4048d3
    int64_t v6; // 0x4048bd
    int64_t * v7; // 0x4048db
    int64_t v8; // 0x4048db
    int64_t v9; // 0x4048e7
    if (v5 < 48) {
        // 0x4048b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4048f3
            break;
        }
    } else {
        // 0x4048db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4048f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4048d1
    while (v4 != 9) {
        // 0x4048c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4048b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4048f3
                break;
            }
        } else {
            // 0x4048db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4048f3
                break;
            }
        }
        // 0x4048c9
        v10 = 10;
    }
    // 0x4048f3
    return function_4044a0(a1, a2, a3, a4, v3, v10, (int64_t)&g53);
}
// Address range: 0x404900 - 0x4049bc
int64_t function_404900(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404900
    int64_t v1; // bp-168, 0x404900
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404900
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404900
    int64_t v8; // 0x404900
    int64_t v9; // bp-56, 0x404900
    int64_t v10; // 0x404965
    int64_t v11; // 0x404989
    if ((int32_t)v6 < 48) {
        // 0x404950
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4049a0
            break;
        }
    } else {
        // 0x404982
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4049a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40497a
    int64_t v13 = 10; // 0x40497a
    while (v5 != 9) {
        // 0x40497c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404950
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4049a0
                break;
            }
        } else {
            // 0x404982
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4049a0
                break;
            }
        }
        // 0x404972
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4049a0
    int64_t v14; // bp-136, 0x404900
    int64_t result = function_4044a0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g53); // 0x4049af
    return result;
}
// Address range: 0x4049c0 - 0x404a34
int64_t function_4049c0(int64_t a1) {
    // 0x4049c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404a23
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404a40 - 0x404a5a
int64_t function_404a40(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404a44
    if (size != 0 != (mem == NULL)) {
        // 0x404a53
        return (int64_t)mem;
    }
    // 0x404a55
    function_404c90(size);
    // UNREACHABLE
}
// Address range: 0x404a60 - 0x404a81
int64_t function_404a60(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404a63
    int64_t v2 = v1; // 0x404a63
    if (v2 < 0) {
        // 0x404a7b
        function_404c90(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404a79
        return function_404a40(v2);
    }
    // 0x404a7b
    function_404c90(v2);
    // UNREACHABLE
}
// Address range: 0x404a90 - 0x404a92
int64_t function_404a90(void) {
    // 0x404a90
    int64_t v1; // 0x404a90
    return function_404a40(v1);
}
// Address range: 0x404aa0 - 0x404ad6
int64_t function_404aa0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404ac8
        free(v1);
        return (int32_t)&g53 ^ (int32_t)&g53;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404ab1
    if (a2 != 0 != (mem == NULL)) {
        // 0x404ac0
        return (int64_t)mem;
    }
    // 0x404ad1
    function_404c90(a1);
    // UNREACHABLE
}
// Address range: 0x404ae0 - 0x404b01
int64_t function_404ae0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404ae3
    int64_t v2 = v1; // 0x404ae3
    if (v2 < 0) {
        // 0x404afb
        function_404c90(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404af9
        return function_404aa0(a1, v2);
    }
    // 0x404afb
    function_404c90(a1);
    // UNREACHABLE
}
// Address range: 0x404b10 - 0x404b96
int64_t function_404b10(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404b6b
            function_404c90(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404aa0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404b53
    if (a2 == 0) {
        // 0x404b78
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404b58
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404b6b
        function_404c90(a1);
        // UNREACHABLE
    }
    // 0x404b3a
    *(int64_t *)a2 = v2;
    return function_404aa0(a1, v2 * a3);
}
// Address range: 0x404ba0 - 0x404bf0
int64_t function_404ba0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404ba0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404bea
            function_404c90(a1);
            // UNREACHABLE
        }
        // 0x404bc2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404aa0(a1, v1);
    }
    if (a2 == 0) {
        // 0x404bd5
        *(int64_t *)a2 = 128;
        return function_404aa0(0, 128);
    }
    // 0x404be8
    if (a2 < 0) {
        // 0x404bea
        function_404c90(a1);
        // UNREACHABLE
    }
    // 0x404bc2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404aa0(a1, v1);
}
// Address range: 0x404bf0 - 0x404c07
int64_t function_404bf0(int64_t a1, int64_t a2) {
    // 0x404bf0
    return (int64_t)memset((int64_t *)function_404a40(a1), 0, (int32_t)a1);
}
// Address range: 0x404c10 - 0x404c3e
int64_t function_404c10(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404c17
    if ((int64_t)v1 < 0) {
        // 0x404c39
        function_404c90(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404c39
        function_404c90(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404c2a
    if (mem != NULL) {
        // 0x404c34
        return (int64_t)mem;
    }
    // 0x404c39
    function_404c90(nmemb);
    // UNREACHABLE
}
// Address range: 0x404c40 - 0x404c68
int64_t function_404c40(int64_t a1, int64_t a2) {
    int64_t v1 = function_404a40(a2); // 0x404c4f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404c70 - 0x404c83
int64_t function_404c70(int64_t str) {
    // 0x404c70
    return function_404c40(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404c90 - 0x404cc1
int64_t function_404c90(int64_t a1) {
    // 0x404c90
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404cd0 - 0x404d4b
int64_t function_404cd0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404cd7
    if (fileno(stream) < 0) {
        // 0x404d37
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x404cea
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x404d1b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x404d37
            return fclose(stream);
        }
    }
    // 0x404cec
    if ((int32_t)function_404d50(a1, v1) == 0) {
        // 0x404d37
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x404cf8
    int32_t v3 = *v2; // 0x404d00
    int64_t result = fclose(stream); // 0x404d0e
    if (v3 != 0) {
        // 0x404d40
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x404d10
    return result;
}
// Address range: 0x404d50 - 0x404d90
int64_t function_404d50(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x404d6a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x404d6a
        return fflush(stream);
    }
    // 0x404d78
    function_404d90(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404d90 - 0x404de7
int64_t function_404d90(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404d90
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x404d9a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x404dcb
    int64_t result = -1; // 0x404dd4
    if (v1 != -1) {
        // 0x404dd6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404de2
    return result;
}
// Address range: 0x404df0 - 0x404ecf
int64_t function_404df0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x404dfc
    uint32_t v2 = *v1; // 0x404dfc
    int64_t v3 = a2 & 0xffffffff; // 0x404e01
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404e04
    uint64_t v5 = (int64_t)*v4; // 0x404e04
    int64_t v6; // 0x404e72
    if (v3 <= v5) {
      lab_0x404e6c_2:
        // 0x404e6c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404df2
    int64_t v8 = v2; // 0x404df0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x404e6c
        goto lab_0x404e6c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404e28
    int64_t v17; // 0x404e36
    int64_t * v18; // 0x404e50
    int64_t * v19; // 0x404e53
    int64_t v20; // 0x404e5e
    int64_t v21; // 0x404e36
    while ((v16 & 0xffffffff) > v10) {
        // 0x404e33
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404e50
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404e67
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x404e6c
            goto lab_0x404e6c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x404e6c
            goto lab_0x404e6c_2;
        }
        // 0x404e22
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x404eab
    int64_t * v23 = (int64_t *)v22; // 0x404eb0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404eb3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404eb0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404ec7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x404e1d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x404e6c
            goto lab_0x404e6c_2;
        }
        // 0x404e22
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404e33
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404e50
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404e67
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x404e6c
                goto lab_0x404e6c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x404e6c
                goto lab_0x404e6c_2;
            }
            // 0x404e22
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404e90
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404eb0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404ec7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x404e6c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404ed0 - 0x4054ec
int64_t function_404ed0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404eef
    int64_t v2 = *v1; // 0x404eef
    char * str2 = (char *)v2; // 0x404efc
    char c = *str2; // 0x404efc
    int64_t v3 = v2; // 0x404f28
    int64_t v4 = 0; // 0x404ed0
    int32_t v5; // 0x404ed0
    int64_t v6; // 0x404ed0
    int64_t v7; // 0x404ed0
    int64_t v8; // 0x404ed0
    int64_t v9; // 0x404ed0
    int64_t v10; // 0x404ed0
    int64_t v11; // 0x404ed0
    int64_t v12; // 0x404ed0
    int64_t v13; // 0x404ed0
    int64_t str3; // 0x404ed0
    int64_t v14; // 0x404ed0
    int64_t v15; // 0x404ed0
    int64_t v16; // 0x404ed0
    int64_t v17; // 0x404ed0
    int32_t v18; // 0x404ed0
    int32_t v19; // 0x404ed0
    int32_t v20; // 0x404ed0
    int32_t v21; // 0x404ed0
    int32_t v22; // 0x404ed0
    int32_t v23; // 0x404ed0
    int32_t v24; // 0x404ed0
    int32_t v25; // 0x404ed0
    int32_t v26; // 0x404ed0
    int32_t v27; // 0x404ed0
    int32_t v28; // 0x404ed0
    int32_t v29; // 0x404ed0
    int64_t nmemb; // 0x404ed0
    int64_t v30; // 0x404ed0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404f2c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404f28
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404f38
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404f3e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404f08
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x404f6c
                int64_t v34; // 0x404ed0
                int64_t v35; // 0x404ed0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404f75
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4050f0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404f86
                int64_t v37 = *(int64_t *)v36; // 0x404f8a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404f60
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404f75
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4050f0;
                        }
                    }
                    // 0x404f86
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
                  lab_0x404fd6:
                    // 0x404fd6
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
                        goto lab_0x405030;
                    } else {
                        if (v11 == 0) {
                            // 0x4051a0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405030;
                        } else {
                            if (v39 == 0) {
                                // 0x405150
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x404ffa;
                                } else {
                                    // 0x40515c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x404ffa;
                                    } else {
                                        // 0x40516a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x404ffa;
                                        } else {
                                            goto lab_0x405030;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x404ffa;
                            }
                        }
                    }
                }
              lab_0x405041:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405216
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4053c2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x4053e2
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40542f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x405449
                            int64_t v45; // 0x40544b
                            if (*(char *)v42 != 0) {
                                // 0x40544b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405443
                            while (v17 + nmemb != v42) {
                                // 0x405445
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40544b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x405438
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405470
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x405224
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40537f
                        free((int64_t *)v17);
                    }
                    // 0x405279
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405290
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40513e
                    return 63;
                }
                // 0x405060
                v5 = v39;
                if (v13 != 0) {
                    // 0x4050e4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4050f0:;
                    int32_t * v49 = (int32_t *)a7; // 0x405100
                    uint32_t v50 = *v49; // 0x405100
                    int64_t v51 = v50; // 0x405100
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40510a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405113
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40533f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4052ea
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40513e
                            return 63;
                        }
                        // 0x405188
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40549f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40539d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4053b0
                                // 0x40513e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4052ae
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4052c2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40512b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40512e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405132
                    int64_t result = v59; // 0x405138
                    if (v58 != 0) {
                        // 0x40513a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40513e
                    return result;
                }
            } else {
                // 0x404f3e
                v5 = v32;
            }
            // break -> 0x405065
            break;
        }
    }
    // 0x405065
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40507d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405087
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40513e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4051c9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4050b6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4050c6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405030:
    // 0x405030
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405030
    int64_t v63 = *(int64_t *)v62; // 0x405034
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405041
        goto lab_0x405041;
    }
    goto lab_0x404fd6;
  lab_0x404ffa:
    // 0x404ffa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404ed0
    int32_t v65; // 0x404ed0
    int32_t v66; // 0x404ed0
    if (v27 != 0) {
        goto lab_0x405030;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4051b0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405030;
            } else {
                goto lab_0x405021;
            }
        } else {
            // 0x405015
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40530c
                int64_t v67 = (int64_t)mem; // 0x40530c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405030;
                } else {
                    // 0x40531f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405021;
                }
            } else {
                goto lab_0x405021;
            }
        }
    }
  lab_0x405021:
    // 0x405021
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405030;
}
// Address range: 0x4054f0 - 0x405ab6
int64_t function_4054f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405511
    if (v3 < 1) {
        // 0x4056ce
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40550d
    int32_t v5 = *(int32_t *)a7; // 0x405519
    uint64_t v6 = a1 & 0xffffffff; // 0x40551b
    int64_t v7 = v2; // 0x405520
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405523
    *v8 = 0;
    int64_t v9; // 0x4054f0
    int64_t v10; // 0x4054f0
    int64_t v11; // 0x4054f0
    int64_t v12; // 0x4054f0
    int64_t str; // 0x4054f0
    int64_t v13; // 0x4054f0
    int64_t v14; // 0x4054f0
    int64_t v15; // 0x4054f0
    int64_t v16; // 0x4054f0
    int64_t v17; // 0x4054f0
    int32_t v18; // 0x4054f0
    char v19; // 0x4054f0
    if (v5 == 0) {
        // 0x405708
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40553a;
    } else {
        // 0x405533
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405580
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405583
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405648;
            } else {
                int64_t v22 = v7 + 1; // 0x405596
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4055a6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40565c;
                } else {
                    goto lab_0x4055b8;
                }
            }
        } else {
            goto lab_0x40553a;
        }
    }
  lab_0x40553a:
    // 0x40553a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405540
    *v24 = 0;
    int64_t v25; // 0x4054f0
    int64_t v26; // 0x4054f0
    int64_t v27; // 0x4054f0
    switch (*(char *)&v2) {
        case 45: {
            // 0x405630
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40563d;
        }
        case 43: {
            // 0x405940
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40563d;
        }
        default: {
            // 0x40555c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4058bf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4059d8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40563d;
                } else {
                    // 0x4058cd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40556a;
                }
            } else {
                goto lab_0x40556a;
            }
        }
    }
  lab_0x405648:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40564f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4055b8;
    } else {
        goto lab_0x40565c;
    }
  lab_0x40556a:
    // 0x40556a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40563d;
  lab_0x40563d:
    // 0x40563d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405648;
  lab_0x4055b8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4055b8
    int64_t v31 = v30; // 0x4055b8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4055ba
    if ((int64_t)*v32 > v31) {
        // 0x4055bf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4055c2
    if (*v33 > v30) {
        // 0x4055c7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4055ca
    int64_t v35 = v31; // 0x4055ce
    int64_t v36 = v15; // 0x4055ce
    int64_t v37; // 0x4054f0
    int64_t v38; // 0x4054f0
    int64_t v39; // 0x4054f0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405738
        int64_t v41 = v40; // 0x405738
        v2 = v41;
        int64_t v42; // 0x4054f0
        if (*v33 == v40) {
            // 0x405920
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405928
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405744
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405748
                function_404df0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405758
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405761
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40576a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405781
            int64_t v47 = v45 & 0xffffffff; // 0x405785
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40578e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405794
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405796;
                }
            }
            int64_t v48 = v47 + 1; // 0x405770
            int64_t v49 = v48 & 0xffffffff; // 0x405770
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405781
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40578e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405794
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405796;
                    }
                }
                // 0x405770
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405938
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405796;
    } else {
        goto lab_0x4055d4;
    }
  lab_0x40565c:
    // 0x40565c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40565f
    int64_t v51 = v12; // 0x40565f
    int64_t v52 = v14; // 0x40565f
    if (*(char *)v10 == 0) {
        goto lab_0x4055b8;
    } else {
        goto lab_0x405665;
    }
  lab_0x4055d4:;
    int32_t v53 = v35; // 0x4055d4
    int64_t v54; // 0x4054f0
    int64_t v55; // 0x4054f0
    int64_t v56; // 0x4054f0
    int64_t v57; // 0x4054f0
    int64_t v58; // 0x4054f0
    int64_t v59; // 0x4054f0
    char * v60; // 0x4054f0
    int64_t v61; // 0x4054f0
    int64_t v62; // 0x4055e9
    int64_t v63; // 0x4054f0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405723
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405726;
    } else {
        // 0x4055dc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4054f0
        int64_t v66 = v65 ? -1 : 1; // 0x4055f0
        int64_t v67 = (int64_t)"--"; // 0x4054f0
        int64_t v68 = v62; // 0x4054f0
        int64_t v69 = 3; // 0x4055f0
        unsigned char v70 = *(char *)v68; // 0x4055f0
        char v71 = *(char *)v67; // 0x4055f0
        char v72 = v71; // 0x4055f0
        bool v73 = false; // 0x4055f0
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
            // 0x4056e0
            if (*(char *)v62 == 45) {
                // 0x4057a0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4057a0
                if (c == 0) {
                    goto lab_0x4056ea;
                } else {
                    // 0x4057ad
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405830;
                    } else {
                        if (c == 45) {
                            // 0x405a13
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405885;
                        } else {
                            // 0x4057be
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405830;
                            } else {
                                // 0x4057c3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4057e4;
                                } else {
                                    // 0x4057ca
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405830;
                                    } else {
                                        goto lab_0x4057e4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4056ea;
            }
        } else {
            uint32_t v75 = *v33; // 0x405600
            v2 = v75;
            int32_t v76 = *v32; // 0x405603
            int64_t v77 = v35 + 1; // 0x405606
            int32_t v78 = v77; // 0x405609
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405970
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405617
                    function_404df0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405625
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405726;
        }
    }
  lab_0x405665:;
    // 0x405665
    int64_t v79; // bp-104, 0x4054f0
    int64_t v80 = &v79; // 0x4054fa
    int64_t v81 = v50 + 1; // 0x405665
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40566c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405671
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405675
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405679
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405681
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405686
    int32_t c2 = v84; // 0x405686
    char * found_char_pos = strchr(str2, c2); // 0x405686
    int64_t v87 = *v82; // 0x40568b
    v2 = v87;
    int64_t v88 = *v85; // 0x405695
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4056a0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405990
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40595d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4056ce
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405686
    char v91 = *(char *)(v90 + 1); // 0x4056bb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405675
        if (v91 != 58) {
            // 0x4056ce
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4058e4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4059e8
                *v8 = 0;
            } else {
                // 0x4059cc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40590e
            *v83 = 0;
            // 0x4056ce
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4058ee
        if (v93 != 0) {
            // 0x405980
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40590e
            *v83 = 0;
            // 0x4056ce
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405901
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40590e
            *v83 = 0;
            // 0x4056ce
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405a4a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4059fa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405a01
        // 0x40590e
        *v83 = 0;
        // 0x4056ce
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405859
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40585b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405a80
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405a31
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405a38
            // 0x4056ce
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405866
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40586a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405885;
  lab_0x405796:
    // 0x405796
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4055d4;
  lab_0x405885:;
    int64_t v99 = function_404ed0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4058a3
    // 0x4056ce
    return v99 & 0xffffffff;
  lab_0x405726:;
    int32_t v100 = v55; // 0x405726
    if (v100 != (int32_t)v59) {
        // 0x40572a
        *(int32_t *)a7 = v100;
    }
    // 0x4056ce
    return 0xffffffff;
  lab_0x4056ea:
    // 0x4056ea
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4056f1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4056ce
    return v99 & 0xffffffff;
  lab_0x405830:
    // 0x405830
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405665;
  lab_0x4057e4:
    // 0x4057e4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404ed0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40580a
    if ((int32_t)v101 != -1) {
        // 0x4056ce
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40581f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405830;
}
// Address range: 0x405ac0 - 0x405b16
int64_t function_405ac0(int64_t a1) {
    // 0x405ac0
    *(int32_t *)&g46 = g27;
    *(int32_t *)&g47 = g26;
    int64_t v1; // 0x405ac0
    int64_t result = function_4054f0(v1, v1, v1, v1, v1, v1, &g46, a1 & 0xffffffff); // 0x405ae6
    g27 = *(int32_t *)&g46;
    g51 = (char *)g49;
    *(int32_t *)&g25 = g48;
    return result;
}
// Address range: 0x405b20 - 0x405b38
int64_t function_405b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405b20
    return function_405ac0(1);
}
// Address range: 0x405b40 - 0x405b53
int64_t function_405b40(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x405b40
    return function_405ac0(0);
}
// Address range: 0x405b60 - 0x405b75
int64_t function_405b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405b60
    return function_4054f0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405b80 - 0x405b96
int64_t function_405b80(void) {
    // 0x405b80
    return function_405ac0(0);
}
// Address range: 0x405ba0 - 0x405bb8
int64_t function_405ba0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405ba0
    return function_4054f0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405bc0 - 0x405c3a
int64_t function_405bc0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405bcb
    int64_t v2 = (int64_t)&g3; // 0x405bcb
    int32_t * pwc; // 0x405bc0
    int64_t v3; // 0x405bc0
    int64_t n; // 0x405bc0
    if (a2 == 0) {
        goto lab_0x405c12;
    } else {
        // 0x405bcd
        if (a3 == 0) {
            // 0x405bf8
            return -2;
        }
        // 0x405bd9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405c12;
        } else {
            goto lab_0x405be4;
        }
    }
  lab_0x405c12:
    // 0x405c12
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405bc0
    pwc = (int32_t *)&v4;
    goto lab_0x405be4;
  lab_0x405be4:;
    char * wstr = (char *)v3; // 0x405bea
    int64_t ps; // 0x405bc0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405bea
    int64_t result = v5; // 0x405bea
    if (v5 < 0xfffffffe) {
        // 0x405bf8
        return result;
    }
    int64_t result2 = result; // 0x405c29
    if ((char)function_405ca0(0, v3) == 0) {
        // 0x405c2b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405bf8
    return result2;
}
// Address range: 0x405c40 - 0x405c9d
int64_t function_405c40(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405c47
    int64_t v2; // 0x405c40
    int64_t result = function_404cd0(a1, v2); // 0x405c58
    if ((v2 & 32) != 0) {
        // 0x405c80
        if ((int32_t)result == 0) {
            // 0x405c84
            *__errno_location() = 0;
        }
        // 0x405c7a
        return 0xffffffff;
    }
    // 0x405c61
    if ((int32_t)result == 0) {
        // 0x405c7a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405c68
    if (v1 == 0) {
        // 0x405c6a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405c7a
    return result2;
}
// Address range: 0x405ca0 - 0x405cfe
int64_t function_405ca0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405ca6
    if (locale == NULL) {
        // 0x405cd3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405ca6
    bool v2; // 0x405ca0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405ca0
    int64_t v5 = v1; // 0x405ca0
    int64_t v6 = 2; // 0x405cc5
    unsigned char v7 = *(char *)v5; // 0x405cc5
    char v8 = *(char *)v4; // 0x405cc5
    char v9 = v8; // 0x405cc5
    bool v10 = false; // 0x405cc5
    while (v7 == v8) {
        // 0x405cb8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405cd1
    int64_t v13 = v1; // 0x405cd1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405cd3
        return 0;
    }
    int64_t v14 = 6; // 0x405cd1
    unsigned char v15 = *(char *)v13; // 0x405ced
    char v16 = *(char *)v12; // 0x405ced
    char v17 = v16; // 0x405ced
    bool v18 = false; // 0x405ced
    while (v15 == v16) {
        // 0x405ce0
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
// Address range: 0x405d00 - 0x406262
int64_t function_405d00(void) {
    char * v1 = nl_langinfo(14); // 0x405d16
    char * v2 = g50; // 0x405d1b
    char * v3; // 0x405d00
    int64_t v4; // 0x405d00
    int64_t v5; // 0x405d00
    int64_t v6; // 0x405d00
    int64_t v7; // 0x405d00
    int32_t size; // 0x405d00
    int32_t size2; // 0x405d00
    int32_t len; // 0x405dd2
    int64_t v8; // 0x405dd2
    char * env_val; // 0x405dbd
    if (v2 == NULL) {
        // 0x405db8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405e25;
        } else {
            // 0x405dca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405e25;
            } else {
                // 0x405dcf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405dbd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406255
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405e25;
                    } else {
                        // 0x4061c9
                        size2 = len + 14;
                        goto lab_0x405deb;
                    }
                } else {
                    goto lab_0x405deb;
                }
            }
        }
    } else {
        // 0x405d00
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405d3a;
    }
  lab_0x40606c:;
    // 0x40606c
    struct _IO_FILE * stream; // 0x405eab
    int32_t v10 = __uflow(stream); // 0x40606f
    int64_t v11; // 0x405d00
    int64_t v12 = v11; // 0x406079
    int64_t v13; // 0x405d00
    int64_t v14 = v13; // 0x406079
    int32_t v15 = v10; // 0x406079
    int64_t v16; // 0x405d00
    int64_t v17 = v16; // 0x406079
    int64_t v18 = v11; // 0x406079
    int64_t v19 = v13; // 0x406079
    int64_t v20 = v16; // 0x406079
    if (v10 == -1) {
        // break -> 0x40607f
        goto lab_0x40607f;
    }
    goto lab_0x405ef9;
  lab_0x405eee:;
    // 0x405eee
    int64_t v90; // 0x405d00
    int64_t * v32; // 0x405ee0
    *v32 = v90 + 1;
    int64_t v89; // 0x405d00
    v12 = v89;
    int64_t v91; // 0x405d00
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405d00
    v17 = v92;
    goto lab_0x405ef9;
  lab_0x405ef9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405d00
    int32_t v25; // bp-120, 0x405d00
    int32_t v26; // bp-184, 0x405d00
    int64_t v27; // 0x405eab
    int64_t v28; // 0x405ec8
    int64_t v29; // 0x405ecd
    int64_t * v30; // 0x405ee4
    switch (c) {
        case 32: {
            goto lab_0x405ee0;
        }
        case 10: {
            goto lab_0x405ee0;
        }
        case 9: {
            goto lab_0x405ee0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4060d1
            int32_t v33; // 0x405d00
            char v34; // 0x405d00
            int32_t v35; // 0x4060de
            if (v31 < *v30) {
                // 0x4060b0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4060db
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4060d1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4060b0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4060db
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4060c0
                v36 = v33;
            }
            // 0x4061af
            if (v36 == -1) {
                // break -> 0x40607f
                break;
            }
            goto lab_0x405ee0;
        }
        default: {
            // 0x405f0f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40607f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405f38
            int64_t v39 = v37 + 4; // 0x405f3a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405f46
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405f48
            while (v41 == 0) {
                // 0x405f38
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405f66
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405f72
            int64_t v45 = v43 + 4; // 0x405f74
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405f80
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405f82
            while (v47 == 0) {
                // 0x405f72
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405f6f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405f98
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405fa8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x405fac
            int64_t v52 = v51 + v48; // 0x405fb5
            int64_t * mem; // 0x405d00
            int64_t v53; // 0x405d00
            int64_t v54; // 0x405d00
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4060eb
                int64_t v56 = v55 + 3; // 0x4060f7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405fd1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405fe0
            if (mem == NULL) {
                // 0x40620c
                free((int64_t *)v21);
                function_404cd0(v27, v53);
                v24 = (int64_t)&g3;
                goto lab_0x405e84;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405ff8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406002
            uint32_t v62 = (int32_t)v59; // 0x406005
            int64_t v63; // 0x405d00
            if (v62 >= 8) {
                // 0x406114
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40612e
                int64_t v66 = v61 - v65; // 0x406132
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40613d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40614e
                    int64_t v70 = v69 & 0xffffffff; // 0x40614e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40614b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4061df
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406017
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40601b
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
            int64_t v73 = v51 + 1; // 0x40602b
            int64_t v74 = v60 - 1; // 0x40602f
            uint32_t v75 = (int32_t)v73; // 0x406034
            int64_t v76; // 0x405d00
            if (v75 >= 8) {
                // 0x406162
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40616c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40617c
                int64_t v80 = v74 - v79; // 0x406180
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40618b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40619b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406199
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4061f6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4061fe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406046
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40604a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406243
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40605e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405eee;
            } else {
                goto lab_0x40606c;
            }
        }
    }
  lab_0x405ee0:;
    int64_t v93 = v23; // 0x405d00
    int64_t v94 = v22; // 0x405d00
    int64_t v95 = v21; // 0x405d00
    goto lab_0x405ee0_2;
  lab_0x405e25:;
    int64_t * mem3 = malloc(size); // 0x405e25
    int64_t v97 = (int64_t)&g3; // 0x405e30
    int64_t v98; // 0x405d00
    int64_t path; // 0x405d00
    if (mem3 == NULL) {
        goto lab_0x405e02;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405e25
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405e46;
    }
  lab_0x405d3a:;
    int64_t str = v1 == NULL ? (int64_t)&g3 : (int64_t)v1; // 0x405d2d
    char v100 = *v3; // 0x405d3a
    int64_t v101; // 0x405d00
    if (v100 == 0) {
        // 0x405d94
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405d00
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405d00
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405d80
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405d87;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405d50
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405d5d
        char v107 = *(char *)v106; // 0x405d62
        v102 = v107;
        if (v107 == 0) {
            // 0x405d94
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405d6b
    v104 = v103 + 1;
  lab_0x405d87:
    // 0x405d94
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405e02:;
    char * v108 = (char *)v97;
    g50 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405d3a;
  lab_0x405e46:;
    int64_t v109 = v98 + path; // 0x405e46
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405e72
    v24 = (int64_t)&g3;
    if (fd >= 0) {
        // 0x405ea1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4061d2
            close(fd);
            v24 = (int64_t)&g3;
        } else {
            // 0x405ec5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405ee0_2:;
                uint64_t v96 = *v32; // 0x405ee0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40606c;
                } else {
                    goto lab_0x405eee;
                }
            }
          lab_0x40607f:
            // 0x40607f
            function_404cd0(v27, v19);
            v24 = (int64_t)&g3;
            if (v18 != 0) {
                // 0x40609e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405e84;
  lab_0x405deb:;
    int64_t * mem4 = malloc(size2); // 0x405deb
    v97 = (int64_t)&g3;
    if (mem4 != NULL) {
        // 0x405e91
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405e46;
    } else {
        goto lab_0x405e02;
    }
  lab_0x405e84:
    // 0x405e84
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405e02;
}
// Address range: 0x406270 - 0x4062cd
int64_t function_406270(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406270
    return function_401380();
}
// Address range: 0x4062d0 - 0x4062d1
int64_t function_4062d0(void) {
    // 0x4062d0
    int64_t result; // 0x4062d0
    return result;
}
// Address range: 0x4062e0 - 0x4062f8
int64_t function_4062e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4062e0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x4062f8 - 0x406318
int64_t function_4062f8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406302
    while (*(int64_t *)v1 != -1) {
        // 0x406303
        v1 -= 8;
    }
    // 0x406314
    return result;
}
