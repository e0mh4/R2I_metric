// Address range: 0x401650 - 0x401655
int64_t function_401650(void) {
    // 0x401650
    abort();
    // UNREACHABLE
}
// Address range: 0x401655 - 0x40165a
int64_t function_401655(void) {
    // 0x401655
    abort();
    // UNREACHABLE
}
// Address range: 0x40165a - 0x40165f
int64_t function_40165a(void) {
    // 0x40165a
    abort();
    // UNREACHABLE
}
// Address range: 0x40165f - 0x401664
int64_t function_40165f(void) {
    // 0x40165f
    abort();
    // UNREACHABLE
}
// Address range: 0x401664 - 0x401669
int64_t function_401664(void) {
    // 0x401664
    abort();
    // UNREACHABLE
}
// Address range: 0x401669 - 0x40166e
int64_t function_401669(void) {
    // 0x401669
    abort();
    // UNREACHABLE
}
// Address range: 0x40166e - 0x401673
int64_t function_40166e(void) {
    // 0x40166e
    abort();
    // UNREACHABLE
}
// Address range: 0x401680 - 0x401a70
int64_t function_401680(int64_t a1, int64_t a2) {
    // 0x401680
    function_401ef0(a2);
    int64_t v1; // 0x401680
    if ((int32_t)function_4049a0(0x401e50, a2, v1) != 0) {
        // 0x4019e0
        error(1, *__errno_location(), dcgettext(NULL, "The atexit library function failed", 5));
    }
    if ((int32_t)a1 != 2) {
        // 0x401a0f
        function_401b50((int64_t)g24);
        // 0x40195c
        return 2;
    }
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x4016b9
    int64_t v3 = *v2; // 0x4016b9
    bool v4; // 0x401680
    int64_t v5 = v4 ? -1 : 1; // 0x4016ca
    int64_t v6 = (int64_t)"--help"; // 0x401680
    int64_t v7 = v3; // 0x401680
    int64_t v8 = 7; // 0x4016ca
    unsigned char v9 = *(char *)v7; // 0x4016ca
    char v10 = *(char *)v6; // 0x4016ca
    char v11 = v10; // 0x4016ca
    bool v12 = false; // 0x4016ca
    while (v9 == v10) {
        v8--;
        v6 += v5;
        v7 += v5;
        v11 = v9;
        v12 = true;
        if (v8 == 0) {
            // break -> 
            break;
        }
        v9 = *(char *)v7;
        v10 = *(char *)v6;
        v11 = v10;
        v12 = false;
    }
    unsigned char v13 = v11;
    int64_t v14 = (int64_t)!((v9 < v13 | v12)) - (int64_t)(v9 < v13); // 0x4016cf
    if ((int32_t)v14 == 0) {
        // 0x401a25
        function_401b50((int64_t)g21);
        // 0x40195c
        return v14 & 0xffffffff;
    }
    char * str = (char *)v3; // 0x4016e4
    if (strcmp(str, "--version") == 0) {
        // 0x40194a
        function_401db0("code");
        // 0x40195c
        return 0;
    }
    struct _IO_FILE * file = fopen(str, "r"); // 0x4016f9
    if (file == NULL) {
        // 0x401a3e
        fprintf(g24, "%s: ", "r");
        function_4041e0(*v2);
        // 0x40195c
        return 1;
    }
    int64_t v15 = 1026; // bp-48, 0x40170a
    int64_t v16 = function_403eb0(1026); // bp-56, 0x401722
    int64_t v17 = function_403eb0(1026); // 0x401727
    *(char *)v17 = 0;
    if (fgets((char *)&g27, 257, file) == NULL) {
        // 0x401a67
        return function_401bb0(*v2);
    }
    // 0x40174d
    if (fwrite((int64_t *)&g27, 1, 256, g21) != 256) {
        // 0x401998
        function_401be0((int64_t)&g27);
        // UNREACHABLE
    }
    // 0x401774
    if (fclose(file) == -1) {
        // 0x401a67
        return function_401bb0(*v2);
    }
    int32_t v18 = __getdelim((char **)&v16, (int32_t *)&v15, 10, g22); // 0x4017a6
    int64_t v19 = v17; // 0x4017ad
    int64_t v20 = v16; // 0x4017ad
    if (v18 < 1) {
      lab_0x4019c7:
        // 0x4019c7
        free((int64_t *)v20);
        free((int64_t *)v19);
        // 0x40195c
        return (int32_t)&g37 ^ (int32_t)&g37;
    }
    // 0x4017b3
    char v21; // bp-58, 0x401680
    int64_t v22 = &v21;
    int32_t v23 = v18; // 0x4017a6
    int64_t v24 = 1026; // 0x40192e
    int64_t v25 = v17;
    int64_t v26 = 0;
    int64_t v27; // 0x401680
    int64_t v28; // 0x401680
    int64_t v29; // 0x401680
    int64_t v30; // 0x401680
    char v31; // 0x401680
    int64_t v32; // 0x401680
    int64_t v33; // 0x401680
    while (true) {
      lab_0x4017b3:;
        int64_t v34 = v26;
        v27 = v25;
        v33 = v24;
        *(char *)(v16 - 1 + (int64_t)v23) = 0;
        char v35 = *(char *)v16; // 0x4017c4
        char v36 = v35; // 0x4017c9
        int64_t v37 = v16; // 0x4017c9
        if (v35 != 0) {
            int64_t v38 = v37;
            if (v36 >= 127) {
                // 0x4017d7
                *(char *)v38 = 63;
            }
            int64_t v39 = v38 + 1; // 0x4017da
            char v40 = *(char *)v39; // 0x4017de
            while (v40 != 0) {
                // 0x4017d0
                v38 = v39;
                if (v40 >= 127) {
                    // 0x4017d7
                    *(char *)v38 = 63;
                }
                // 0x4017da
                v39 = v38 + 1;
                v40 = *(char *)v39;
            }
            char v41 = *(char *)v27; // 0x4017ea
            int64_t v42 = v16; // 0x4017f1
            int64_t v43 = v27; // 0x4017f1
            if (!((v41 == 0 | *(char *)v16 != v41))) {
                int64_t v44 = v43 + 1; // 0x40180c
                int64_t v45 = v42 + 1; // 0x401810
                char v46 = *(char *)v44; // 0x401814
                v42 = v45;
                v43 = v44;
                while (!((v46 == 0 | *(char *)v45 != v46))) {
                    // 0x40180c
                    v44 = v43 + 1;
                    v45 = v42 + 1;
                    v46 = *(char *)v44;
                    v42 = v45;
                    v43 = v44;
                }
            }
        }
        // 0x40181f
        v26 = 0;
        int64_t v47 = v26 - v34 + 14; // 0x40182c
        int64_t v48 = v47 & 0xffffffff; // 0x40182c
        uint32_t v49 = (int32_t)v47; // 0x40182f
        if (v49 < 29) {
            // 0x401988
            v32 = v48;
            if (_IO_putc(v49, g21) == -1) {
                // break -> 0x401998
                break;
            }
        } else {
            // 0x401838
            v32 = 30;
            if (_IO_putc(30, g21) == 1) {
                // break -> 0x401998
                break;
            }
            int64_t v50 = (int64_t)g21;
            int64_t v51 = function_401d50(v50, v48, 1); // 0x401859
            v32 = v50;
            if ((char)v51 == 0) {
                // break -> 0x401998
                break;
            }
        }
        int64_t v52 = v16 + (0x100000000 * v26 >> 32); // 0x40186e
        char v53 = *(char *)v52; // 0x401871
        v31 = v53;
        v28 = v52;
        v30 = v16;
        if (v53 != 0) {
            char v54; // 0x401680
            while (true) {
              lab_0x401880:
                // 0x401880
                v29 = v28;
                v54 = v31;
                char v55 = *(char *)(v29 + 1); // 0x401880
                if (v55 == 0) {
                    // break -> 0x4019a0
                    break;
                }
                char str2 = v54; // bp-59, 0x40188e
                char v56 = *(char *)&g27; // 0x401893
                v21 = v55;
                if (v56 != 0) {
                    int64_t v57 = (int64_t)&g27 + 1; // 0x4018b0
                    char v58 = *(char *)v57; // 0x4018b7
                    int64_t v59; // 0x401680
                    char v60; // 0x401680
                    int64_t v61; // 0x401680
                    int64_t v62; // 0x401680
                    int64_t v63; // 0x401680
                    int64_t v64; // 0x4018d5
                    char v65; // 0x4018d9
                    int64_t v66; // 0x4018dd
                    uint64_t v67; // 0x4018fa
                    int64_t v68; // 0x4018b0
                    char v69; // 0x4018b7
                    int32_t v70; // 0x401906
                    if (v54 == v56 == v55 == v58) {
                        v62 = v61;
                        v64 = v22;
                        v63 = v62;
                        v64++;
                        v65 = *(char *)v64;
                        v66 = v63 + 1;
                        if (v65 == 0) {
                            // 0x4018e6
                            v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                            if (v67 % 2 != 0) {
                                // 0x401970
                                fputs(&str2, g21);
                                goto lab_0x401918;
                            } else {
                                // 0x401906
                                v70 = v67;
                                _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                goto lab_0x401918;
                            }
                        }
                        // 0x4018d0
                        v63 = v66;
                        while (*(char *)v66 == v65) {
                            // 0x4018d5
                            v64++;
                            v65 = *(char *)v64;
                            v66 = v63 + 1;
                            if (v65 == 0) {
                                // 0x4018e6
                                v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                if (v67 % 2 != 0) {
                                    // 0x401970
                                    fputs(&str2, g21);
                                    goto lab_0x401918;
                                } else {
                                    // 0x401906
                                    v70 = v67;
                                    _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                    goto lab_0x401918;
                                }
                            }
                            // 0x4018d0
                            v63 = v66;
                        }
                        // 0x4018b0
                        v68 = v62 + 1;
                        v69 = *(char *)v68;
                        v59 = v68;
                        v60 = v69;
                        v61 = v68;
                        while (v54 == v55 == v55 == v69) {
                            // 0x4018c1
                            v62 = v61;
                            v64 = v22;
                            v63 = v62;
                            v64++;
                            v65 = *(char *)v64;
                            v66 = v63 + 1;
                            if (v65 == 0) {
                                // 0x4018e6
                                v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                if (v67 % 2 != 0) {
                                    // 0x401970
                                    fputs(&str2, g21);
                                    goto lab_0x401918;
                                } else {
                                    // 0x401906
                                    v70 = v67;
                                    _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                    goto lab_0x401918;
                                }
                            }
                            // 0x4018d0
                            v63 = v66;
                            while (*(char *)v66 == v65) {
                                // 0x4018d5
                                v64++;
                                v65 = *(char *)v64;
                                v66 = v63 + 1;
                                if (v65 == 0) {
                                    // 0x4018e6
                                    v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                    if (v67 % 2 != 0) {
                                        // 0x401970
                                        fputs(&str2, g21);
                                        goto lab_0x401918;
                                    } else {
                                        // 0x401906
                                        v70 = v67;
                                        _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                        goto lab_0x401918;
                                    }
                                }
                                // 0x4018d0
                                v63 = v66;
                            }
                            // 0x4018b0
                            v68 = v62 + 1;
                            v69 = *(char *)v68;
                            v59 = v68;
                            v60 = v69;
                            v61 = v68;
                        }
                    }
                    char v71 = v58;
                    int64_t v72 = v57; // 0x4018aa
                    while (v71 != 0) {
                        // 0x4018b0
                        v57 = v72 + 1;
                        v58 = *(char *)v57;
                        v59 = v57;
                        v60 = v58;
                        v61 = v57;
                        if (v54 == v71 == v55 == v58) {
                            v62 = v61;
                            v64 = v22;
                            v64++;
                            v65 = *(char *)v64;
                            v66 = v62 + 1;
                            if (v65 == 0) {
                                // 0x4018e6
                                v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                if (v67 % 2 != 0) {
                                    // 0x401970
                                    fputs(&str2, g21);
                                    goto lab_0x401918;
                                } else {
                                    // 0x401906
                                    v70 = v67;
                                    _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                    goto lab_0x401918;
                                }
                            }
                            // 0x4018d0
                            v63 = v66;
                            while (*(char *)v66 == v65) {
                                // 0x4018d5
                                v64++;
                                v65 = *(char *)v64;
                                v66 = v63 + 1;
                                if (v65 == 0) {
                                    // 0x4018e6
                                    v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                    if (v67 % 2 != 0) {
                                        // 0x401970
                                        fputs(&str2, g21);
                                        goto lab_0x401918;
                                    } else {
                                        // 0x401906
                                        v70 = v67;
                                        _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                        goto lab_0x401918;
                                    }
                                }
                                // 0x4018d0
                                v63 = v66;
                            }
                            // 0x4018b0
                            v68 = v62 + 1;
                            v69 = *(char *)v68;
                            v59 = v68;
                            v60 = v69;
                            while (v54 == v55 == v55 == v69) {
                                // 0x4018c1
                                v62 = v68;
                                v64 = v22;
                                v64++;
                                v65 = *(char *)v64;
                                v66 = v62 + 1;
                                if (v65 == 0) {
                                    // 0x4018e6
                                    v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                    if (v67 % 2 != 0) {
                                        // 0x401970
                                        fputs(&str2, g21);
                                        goto lab_0x401918;
                                    } else {
                                        // 0x401906
                                        v70 = v67;
                                        _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                        goto lab_0x401918;
                                    }
                                }
                                // 0x4018d0
                                v63 = v66;
                                while (*(char *)v66 == v65) {
                                    // 0x4018d5
                                    v64++;
                                    v65 = *(char *)v64;
                                    v66 = v63 + 1;
                                    if (v65 == 0) {
                                        // 0x4018e6
                                        v67 = v66 - (int64_t)strlen(&str2) - (int64_t)&g27;
                                        if (v67 % 2 != 0) {
                                            // 0x401970
                                            fputs(&str2, g21);
                                            goto lab_0x401918;
                                        } else {
                                            // 0x401906
                                            v70 = v67;
                                            _IO_putc((int32_t)(v70 < 0) + v70 >> 1 | 128, g21);
                                            goto lab_0x401918;
                                        }
                                    }
                                    // 0x4018d0
                                    v63 = v66;
                                }
                                // 0x4018b0
                                v68 = v62 + 1;
                                v69 = *(char *)v68;
                                v59 = v68;
                                v60 = v69;
                            }
                        }
                        // 0x4018a8
                        v71 = v60;
                        v72 = v59;
                    }
                }
                // 0x401970
                fputs(&str2, g21);
                goto lab_0x401918;
            }
            // 0x4019a0
            _IO_putc((int32_t)v54, g21);
            v30 = v16;
        }
        goto lab_0x40192e;
    }
    // 0x401998
    function_401be0(v32);
    // UNREACHABLE
  lab_0x401918:;
    int64_t v73 = v29 + 2; // 0x401918
    char v74 = *(char *)v73; // 0x40191c
    v31 = v74;
    v28 = v73;
    if (v74 == 0) {
        // 0x401929
        v30 = v16;
        goto lab_0x40192e;
    }
    goto lab_0x401880;
  lab_0x40192e:
    // 0x40192e
    v25 = v30;
    v24 = v15;
    v16 = v27;
    v15 = v33;
    v23 = __getdelim((char **)&v16, (int32_t *)&v15, 10, g22);
    v19 = v25;
    v20 = v16;
    if (v23 < 1) {
        goto lab_0x4019c7;
    }
    goto lab_0x4017b3;
}
// Address range: 0x401a70 - 0x401a9b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401a70
    int64_t v1; // 0x401a70
    __libc_start_main(0x401680, (int32_t)a4, (char **)&v1, (void (*)())0x404930, (void (*)())0x404990, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401a9b - 0x401aba
int64_t function_401a9b(void) {
    // 0x401a9b
    return 0x607238;
}
// Address range: 0x401aba - 0x401af1
int64_t function_401aba(void) {
    // 0x401aba
    return 0;
}
// Address range: 0x401af1 - 0x401b48
int64_t function_401af1(void) {
    // 0x401af1
    if (g25 != 0) {
        // 0x401b47
        int64_t result; // 0x401af1
        return result;
    }
    int64_t v1 = g26; // 0x401b24
    int64_t result2; // 0x401b36
    if (g26 >= ((int64_t)&g10 - (int64_t)&g9 >> 3) - 1) {
        // 0x401b36
        result2 = function_401a9b();
        g25 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g10 - (int64_t)&g9 >> 3) - 1) {
        // 0x401b26
        v1++;
    }
    // 0x401b1a
    g26 = v1;
    // 0x401b36
    result2 = function_401a9b();
    g25 = 1;
    return result2;
}
// Address range: 0x401b48 - 0x401b4d
int64_t function_401b48(void) {
    // 0x401b48
    return function_401aba();
}
// Address range: 0x401b50 - 0x401ba6
int64_t function_401b50(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x401b7f
    fprintf(stream, dcgettext(NULL, "Usage: %s [--version | --help]\nor     %s most_common_bigrams < file-list > locate-database\n", 5));
    return fputs(dcgettext(NULL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5), stream);
}
// Address range: 0x401bb0 - 0x401bd4
int64_t function_401bb0(int64_t a1) {
    // 0x401bb0
    error(1, *__errno_location(), "%s", (char *)a1);
    abort();
    // UNREACHABLE
}
// Address range: 0x401be0 - 0x401c10
int64_t function_401be0(int64_t a1) {
    // 0x401be0
    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x401c10 - 0x401d48
int64_t function_401c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x401c26
    clearerr(stream);
    int64_t data; // bp-44, 0x401c10
    if (fread(&data, 4, 1, stream) != 1) {
        // 0x401cd6
        function_4035c0(0, 8, a2);
        if (feof(stream) == 0) {
            // 0x401d1e
            error(1, *__errno_location(), dcgettext(NULL, "error reading a word from %s", 5));
        } else {
            // 0x401cf9
            error(1, (int32_t)"unexpected EOF in %s" ^ (int32_t)"unexpected EOF in %s", dcgettext(NULL, "unexpected EOF in %s", 5));
        }
        // 0x401d19
        abort();
        // UNREACHABLE
    }
    // 0x401c4c
    int64_t v1; // 0x401c10
    int32_t v2 = v1;
    int64_t result = llvm_bswap_i32((int32_t)data); // 0x401c55
    if (v2 != 0) {
        // 0x401cb6
        return (v2 == 2 ? result : data) & 0xffffffff;
    }
    int64_t result2 = data & 0xffffffff; // 0x401c4c
    if (result2 > a4) {
        // 0x401c60
        if (result <= a4) {
            // 0x401c65
            function_4035c0(0, 8, a2);
            error(0, (int32_t)"WARNING: locate database %s was built with a different byte order" ^ (int32_t)"WARNING: locate database %s was built with a different byte order", dcgettext(NULL, "WARNING: locate database %s was built with a different byte order", 5));
            *(int32_t *)a5 = 2;
            return result;
        }
    } else {
        // 0x401cc8
        if (result > a4) {
            // 0x401ccd
            *(int32_t *)a5 = 1;
        }
    }
    // 0x401cb6
    return result2;
}
// Address range: 0x401d50 - 0x401db0
int64_t function_401d50(int64_t stream, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x401d54
    int64_t data = v1; // bp-12, 0x401d54
    int32_t v2 = a3; // 0x401d58
    if (v2 == 0) {
        // 0x401d8e
        __assert_fail("endian_state_flag != GetwordEndianStateInitial", "word_io.c", 167, "putword");
        return &g37;
    }
    if (v2 == 2) {
        // 0x401d61
        data = llvm_bswap_i32((int32_t)v1);
    }
    int32_t items_written = fwrite(&data, 4, 1, (struct _IO_FILE *)stream); // 0x401d7d
    return (int64_t)(items_written & -256) | (int64_t)(items_written == 1);
}
// Address range: 0x401db0 - 0x401e2a
int64_t function_401db0(char * a1) {
    // 0x401db0
    int64_t v1; // 0x401db0
    function_404110((int64_t)g24, v1);
    char * v2 = dcgettext(NULL, "Kevin Dalley", 5); // 0x401dcf
    char * v3 = dcgettext(NULL, "James Youngman", 5); // 0x401de3
    function_403d80((int64_t)g21, (int64_t)a1, "GNU findutils", (int64_t)g13, (int64_t)dcgettext(NULL, "Eric B. Decker", 5), (int64_t)v3);
    return (int64_t)v2;
}
// Address range: 0x401e30 - 0x401e38
int64_t function_401e30(int64_t a1) {
    // 0x401e30
    g29 = a1;
    int64_t result; // 0x401e30
    return result;
}
// Address range: 0x401e40 - 0x401e48
int64_t function_401e40(int64_t a1) {
    // 0x401e40
    g28 = a1;
    int64_t result; // 0x401e40
    return result;
}
// Address range: 0x401e50 - 0x401eee
int64_t function_401e50(void) {
    // 0x401e50
    int32_t * err_num; // 0x401e66
    if ((int32_t)function_404350((int64_t)g21) == 0) {
        goto lab_0x401e7c;
    } else {
        // 0x401e66
        err_num = __errno_location();
        if (g28 == 0) {
            goto lab_0x401e93;
        } else {
            // 0x401e77
            if (*err_num != 32) {
                goto lab_0x401e93;
            } else {
                goto lab_0x401e7c;
            }
        }
    }
  lab_0x401e7c:;
    int64_t result = function_404350((int64_t)g24); // 0x401e83
    if ((int32_t)result == 0) {
        // 0x401e8c
        return result;
    }
    // 0x401ece
    _exit(g14);
    // UNREACHABLE
  lab_0x401e93:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401e9f
    if (g29 == 0) {
        // 0x401ed9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401eb3
        error(0, *err_num, "%s: %s", (char *)function_403740((int64_t)g29), v1);
    }
    // 0x401ece
    _exit(g14);
    // UNREACHABLE
}
// Address range: 0x401ef0 - 0x401f89
int64_t function_401ef0(int64_t str) {
    // 0x401ef0
    if (str == 0) {
        // 0x401f69
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g24);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401efe
    int64_t result = (int64_t)found_char_pos; // 0x401efe
    if (found_char_pos == NULL) {
        // 0x401f59
        g30 = str;
        g23 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401f08
    if (v1 - str < 7) {
        // 0x401f59
        g30 = str;
        g23 = str;
        return result;
    }
    // 0x401f18
    bool v2; // 0x401ef0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401ef0
    int64_t v5 = result - 6; // 0x401ef0
    int64_t v6 = 7; // 0x401f26
    unsigned char v7 = *(char *)v5; // 0x401f26
    char v8 = *(char *)v4; // 0x401f26
    char v9 = v8; // 0x401f26
    bool v10 = false; // 0x401f26
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
    int64_t v12 = (int64_t)"lt-"; // 0x401f30
    int64_t v13 = v1; // 0x401f30
    int64_t v14 = 3; // 0x401f30
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401f59
        g30 = str;
        g23 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401f42
    char v16 = *(char *)v12; // 0x401f42
    char v17 = v16; // 0x401f42
    bool v18 = false; // 0x401f42
    while (v15 == v16) {
        // 0x401f32
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
    int64_t v20 = v1; // 0x401f4c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401f4e
        v20 = result + 4;
        g20 = v20;
    }
    // 0x401f59
    g30 = v20;
    g23 = v20;
    return result;
}
// Address range: 0x401f90 - 0x402082
int64_t function_401f90(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401fa4
    int64_t result = (int64_t)v1; // 0x401fa4
    if (result != a1) {
        // 0x401fb1
        return result;
    }
    int64_t v2 = function_4043c0(); // 0x401fc0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402076
    if (v3 == 85) {
        // 0x401fd0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402068
            result2 = (int32_t)a2 != 9 ? (int64_t)&g6 : (int64_t)&g1;
            return result2;
        }
        char v4 = *v1; // 0x401ffe
        int64_t result3 = v4 != 96 ? (int64_t)&g2 : (int64_t)&g5; // 0x40200b
        // 0x401fb1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402068
        result2 = (int32_t)a2 != 9 ? (int64_t)&g6 : (int64_t)&g1;
        return result2;
    }
    char v5 = *v1; // 0x40204d
    int64_t result4 = v5 != 96 ? (int64_t)&g3 : (int64_t)&g4; // 0x40205a
    // 0x401fb1
    return result4;
}
// Address range: 0x402090 - 0x4020e9
int64_t function_402090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402090
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4020da
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4020f0 - 0x403093
int64_t function_4020f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t str) {
    // 0x4020f0
    int32_t v1; // 0x4020f0
    uint32_t v2 = v1;
    int64_t v3 = str + 1;
    int64_t v4 = 0; // 0x40212d
    int64_t v5 = 0; // 0x40212d
    int64_t v6; // 0x4020f0
    int64_t v7; // 0x4020f0
    int64_t v8; // 0x4020f0
    int64_t v9; // 0x4020f0
    int64_t v10; // 0x4020f0
    int64_t v11; // 0x4020f0
    int64_t v12; // 0x4020f0
    int64_t v13; // 0x4020f0
    int64_t v14; // 0x4020f0
    int64_t v15; // 0x4020f0
    int64_t v16; // 0x4020f0
    int64_t v17; // 0x4020f0
    int64_t v18; // 0x4020f0
    int64_t v19; // 0x4020f0
    int64_t v20; // 0x4020f0
    int64_t v21; // 0x4020f0
    int64_t v22; // 0x4020f0
    int64_t v23; // 0x4020f0
    int64_t v24; // 0x4020f0
    int64_t result; // 0x4020f0
    int64_t v25; // 0x4020f0
    int64_t v26; // 0x4020f0
    int64_t v27; // 0x4020f0
    int32_t wc; // bp+116, 0x4020f0
    int64_t ps; // bp+120, 0x4020f0
    char v28; // 0x402820
    int64_t v29; // 0x402820
    int64_t v30; // 0x402c52
    int64_t v31; // 0x402c6b
    int64_t v32; // 0x4020f0
    while (true) {
      lab_0x402130_2:
        // 0x402130
        v20 = v19;
        v14 = v13;
        v8 = v7;
        result = v4;
        int64_t v33 = v5; // 0x4020f0
        int64_t v34; // 0x402164
        while (true) {
          lab_0x402130:
            // 0x402130
            v12 = v33;
            bool v35 = v8 == v12; // 0x40213b
            if (v8 == -1) {
                // 0x40213d
                v35 = *(char *)(v12 + str) == 0;
            }
            // 0x40214b
            if (v35) {
                // break (via goto) -> 0x402b40
                goto lab_0x402b40;
            }
            // 0x402154
            v34 = v12 + str;
            v28 = *(char *)v34;
            v29 = v28;
            g36 = v29;
            v9 = v8;
            v18 = v14;
            v24 = v20;
            v6 = v8;
            v16 = v14;
            v22 = v20;
            switch (v28) {
                case 0: {
                    if (v2 % 2 == 0) {
                        // 0x402931
                        v11 = v8;
                        v17 = v14;
                        v23 = v20;
                        v10 = v8;
                        v15 = v14;
                        v21 = v20;
                        if (v32 == 0) {
                            goto lab_0x4027a2;
                        } else {
                            goto lab_0x402249;
                        }
                    }
                    // 0x402d50
                    v33 = v12 + 1;
                    goto lab_0x402130;
                }
                case 7: {
                    goto lab_0x4024f8;
                }
                case 8: {
                    goto lab_0x4024f8;
                }
                case 9: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 10: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 11: {
                    goto lab_0x4024f8;
                }
                case 12: {
                    goto lab_0x4024f8;
                }
                case 13: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 32: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 33: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 34: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 35: {
                    goto lab_0x4024e1;
                }
                case 36: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 37: {
                    goto lab_0x4024f8;
                }
                case 38: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 39: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 40: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 41: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 42: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 43: {
                    goto lab_0x4024f8;
                }
                case 44: {
                    goto lab_0x4024f8;
                }
                case 45: {
                    goto lab_0x4024f8;
                }
                case 46: {
                    goto lab_0x4024f8;
                }
                case 47: {
                    goto lab_0x4024f8;
                }
                case 48: {
                    goto lab_0x4024f8;
                }
                case 49: {
                    goto lab_0x4024f8;
                }
                case 50: {
                    goto lab_0x4024f8;
                }
                case 51: {
                    goto lab_0x4024f8;
                }
                case 52: {
                    goto lab_0x4024f8;
                }
                case 53: {
                    goto lab_0x4024f8;
                }
                case 54: {
                    goto lab_0x4024f8;
                }
                case 55: {
                    goto lab_0x4024f8;
                }
                case 56: {
                    goto lab_0x4024f8;
                }
                case 57: {
                    goto lab_0x4024f8;
                }
                case 58: {
                    goto lab_0x4024f8;
                }
                case 59: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 60: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 61: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 62: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 63: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 65: {
                    goto lab_0x4024f8;
                }
                case 66: {
                    goto lab_0x4024f8;
                }
                case 67: {
                    goto lab_0x4024f8;
                }
                case 68: {
                    goto lab_0x4024f8;
                }
                case 69: {
                    goto lab_0x4024f8;
                }
                case 70: {
                    goto lab_0x4024f8;
                }
                case 71: {
                    goto lab_0x4024f8;
                }
                case 72: {
                    goto lab_0x4024f8;
                }
                case 73: {
                    goto lab_0x4024f8;
                }
                case 74: {
                    goto lab_0x4024f8;
                }
                case 75: {
                    goto lab_0x4024f8;
                }
                case 76: {
                    goto lab_0x4024f8;
                }
                case 77: {
                    goto lab_0x4024f8;
                }
                case 78: {
                    goto lab_0x4024f8;
                }
                case 79: {
                    goto lab_0x4024f8;
                }
                case 80: {
                    goto lab_0x4024f8;
                }
                case 81: {
                    goto lab_0x4024f8;
                }
                case 82: {
                    goto lab_0x4024f8;
                }
                case 83: {
                    goto lab_0x4024f8;
                }
                case 84: {
                    goto lab_0x4024f8;
                }
                case 85: {
                    goto lab_0x4024f8;
                }
                case 86: {
                    goto lab_0x4024f8;
                }
                case 87: {
                    goto lab_0x4024f8;
                }
                case 88: {
                    goto lab_0x4024f8;
                }
                case 89: {
                    goto lab_0x4024f8;
                }
                case 90: {
                    goto lab_0x4024f8;
                }
                case 91: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 92: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 93: {
                    goto lab_0x4024f8;
                }
                case 94: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 95: {
                    goto lab_0x4024f8;
                }
                case 96: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 97: {
                    goto lab_0x4024f8;
                }
                case 98: {
                    goto lab_0x4024f8;
                }
                case 99: {
                    goto lab_0x4024f8;
                }
                case 100: {
                    goto lab_0x4024f8;
                }
                case 101: {
                    goto lab_0x4024f8;
                }
                case 102: {
                    goto lab_0x4024f8;
                }
                case 103: {
                    goto lab_0x4024f8;
                }
                case 104: {
                    goto lab_0x4024f8;
                }
                case 105: {
                    goto lab_0x4024f8;
                }
                case 106: {
                    goto lab_0x4024f8;
                }
                case 107: {
                    goto lab_0x4024f8;
                }
                case 108: {
                    goto lab_0x4024f8;
                }
                case 109: {
                    goto lab_0x4024f8;
                }
                case 110: {
                    goto lab_0x4024f8;
                }
                case 111: {
                    goto lab_0x4024f8;
                }
                case 112: {
                    goto lab_0x4024f8;
                }
                case 113: {
                    goto lab_0x4024f8;
                }
                case 114: {
                    goto lab_0x4024f8;
                }
                case 115: {
                    goto lab_0x4024f8;
                }
                case 116: {
                    goto lab_0x4024f8;
                }
                case 117: {
                    goto lab_0x4024f8;
                }
                case 118: {
                    goto lab_0x4024f8;
                }
                case 119: {
                    goto lab_0x4024f8;
                }
                case 120: {
                    goto lab_0x4024f8;
                }
                case 121: {
                    goto lab_0x4024f8;
                }
                case 122: {
                    goto lab_0x4024f8;
                }
                case 123: {
                    goto lab_0x4024bd;
                }
                case 124: {
                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                }
                case 125: {
                    goto lab_0x4024bd;
                }
                case 126: {
                    goto lab_0x4024e1;
                }
                default: {
                    goto lab_0x4027bd;
                }
            }
        }
      lab_0x4027bd:
        if (v32 != 1) {
            // 0x402bb0
            ps = 0;
            int64_t len = v8; // 0x402bbd
            if (v8 == -1) {
                // 0x402bbf
                len = strlen((char *)str);
            }
            // 0x402beb
            v30 = 0x100000000 * len >> 32;
            v25 = 0;
            while (true) {
              lab_0x402c48:
                // 0x402c48
                v26 = v25;
                uint64_t v36 = v26 + v12; // 0x402c4d
                int64_t v37 = v36 + str;
                v31 = function_4041b0(&wc, v37, v30 - v36);
                v27 = v26;
                switch (v31) {
                    case 0: {
                        goto lab_0x402f50_2;
                    }
                    case -1: {
                        goto lab_0x402f50_2;
                    }
                    case -2: {
                        // 0x402f93
                        v27 = v26;
                        if (v30 > v36) {
                            // 0x402fce
                            v27 = v26;
                            int64_t v38 = v26; // 0x402fd1
                            if (*(char *)v37 != 0) {
                                int64_t v39 = v38 + 1; // 0x402fdf
                                v27 = v39;
                                while (v30 > v39 + v12) {
                                    // 0x402fd8
                                    v27 = v39;
                                    v38 = v39;
                                    if (*(char *)(v39 + v34) == 0) {
                                        // break -> 0x402f50
                                        break;
                                    }
                                    v39 = v38 + 1;
                                    v27 = v39;
                                }
                            }
                        }
                        goto lab_0x402f50_2;
                    }
                    case 1: {
                        goto lab_0x402c20;
                    }
                    default: {
                        int64_t v40 = v36 + v3; // 0x402cba
                        char v41 = *(char *)v40; // 0x402ccd
                        unsigned char v42; // 0x4020f0
                        if (v41 < 125) {
                            // 0x402cd8
                            v42 = (v41 + 37) % 64;
                            if (v42 != 0 != ((1 << (int64_t)v42 & 0x20000002b) == 0)) {
                                // 0x402cf2
                                v6 = v30;
                                v16 = 0x100000000 * v14 >> 32;
                                v22 = 0x100000000 * v20 >> 32;
                                return function_402090(v22, v16, str, v6, 2, v2 & -3);
                            }
                        }
                        // 0x402cc0
                        v40++;
                        while (v37 + v31 != v40) {
                            // 0x402ccd
                            v41 = *(char *)v40;
                            if (v41 < 125) {
                                // 0x402cd8
                                v42 = (v41 + 37) % 64;
                                if (v42 != 0 != ((1 << (int64_t)v42 & 0x20000002b) == 0)) {
                                    // 0x402cf2
                                    v6 = v30;
                                    v16 = 0x100000000 * v14 >> 32;
                                    v22 = 0x100000000 * v20 >> 32;
                                    return function_402090(v22, v16, str, v6, 2, v2 & -3);
                                }
                            }
                            // 0x402cc0
                            v40++;
                        }
                        goto lab_0x402c20;
                    }
                }
            }
            goto lab_0x402f50_2;
        } else {
            // 0x402808
            __ctype_b_loc();
            v9 = 0x100000000000000 * v8 >> 56;
            v18 = v14;
            v24 = v20;
            goto lab_0x4024f8;
        }
    }
  lab_0x402b40:
    // 0x402b40
    v6 = v8;
    v16 = v14;
    v22 = v20;
    if (result != 0) {
        // 0x402b95
        if (result < v14) {
            // 0x402b9e
            *(char *)(v20 + result) = 0;
        }
        // 0x4028bc
        return result;
    }
    return function_402090(v22, v16, str, v6, 2, v2 & -3);
  lab_0x402882_2:
    // 0x4028bc
    return function_402090(v22, v16, str, v6, 2, v2 & -3);
  lab_0x402f50_2:;
    uint64_t v43 = v27;
    int64_t v44 = 0x100000000 * v14 >> 32;
    int64_t v45 = 0x100000000 * v20 >> 32;
    v9 = v30;
    v18 = v44;
    v24 = v45;
    int64_t v46; // 0x4020f0
    int64_t v47; // 0x4020f0
    int64_t v48; // 0x4020f0
    int64_t v49; // 0x4020f0
    if (v43 < 2) {
        goto lab_0x4024f8;
    } else {
        uint64_t v50 = v43 + v12; // 0x402d5e
        int64_t v51 = v12 + 1; // 0x402e54
        v49 = result;
        v46 = v30;
        v5 = v51;
        v47 = v44;
        v48 = v45;
        int64_t v52 = v51; // 0x402e5b
        int64_t v53 = result; // 0x402e5b
        char v54 = v28; // 0x402e5b
        if (v51 < v50) {
            uint64_t v55 = v53;
            if (v55 < v44) {
                // 0x402e24
                *(char *)(v55 + v45) = v54;
            }
            char v56 = *(char *)(v52 + str); // 0x402e28
            int64_t v57 = v55 + 1; // 0x402e2d
            int64_t v58 = v52 + 1; // 0x402e54
            v49 = v57;
            v46 = v30;
            v5 = v58;
            v47 = v44;
            v48 = v45;
            v52 = v58;
            while (v58 < v50) {
                // 0x402e1f
                v55 = v57;
                if (v55 < v44) {
                    // 0x402e24
                    *(char *)(v55 + v45) = v56;
                }
                // 0x402e28
                v56 = *(char *)(v52 + str);
                v57 = v55 + 1;
                v58 = v52 + 1;
                v49 = v57;
                v46 = v30;
                v5 = v58;
                v47 = v44;
                v48 = v45;
                v52 = v58;
            }
        }
        goto lab_0x4022c7;
    }
  lab_0x402c20:
    // 0x402c20
    iswprint(wc);
    int64_t v59 = v31 + v26; // 0x402c38
    int32_t v60 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402c3b
    v25 = v59;
    v27 = v59;
    if (v60 != 0) {
        // break -> 0x402f50
        goto lab_0x402f50_2;
    }
    goto lab_0x402c48;
  lab_0x4024f8:
    // 0x4024f8
    v11 = v9;
    v17 = v18;
    v23 = v24;
    v10 = v9;
    v15 = v18;
    v21 = v24;
    if (v32 == 0) {
        goto lab_0x4027a2;
    } else {
        goto lab_0x402249;
    }
  lab_0x4024e1:
    // 0x4024e1
    v9 = v8;
    v18 = v14;
    v24 = v20;
    v6 = v8;
    v16 = v14;
    v22 = v20;
    if (v12 == 0) {
        goto lab_0x402882_2;
    }
    goto lab_0x4024f8;
  lab_0x4024bd:;
    bool v61 = v8 == 1; // 0x4024c8
    if (v8 == -1) {
        // 0x4024ca
        v61 = *(char *)v3 == 0;
    }
    // 0x4024d6
    v9 = v8;
    v18 = v14;
    v24 = v20;
    if (!v61) {
        goto lab_0x4024f8;
    } else {
        goto lab_0x4024e1;
    }
  lab_0x4027a2:
    // 0x4027a2
    v49 = result;
    v46 = v10;
    v5 = v12 + 1;
    v47 = v15;
    v48 = v21;
    goto lab_0x4022c7;
  lab_0x402249:
    // 0x402249
    v10 = v11;
    v15 = v17;
    v21 = v23;
    v6 = v11;
    v16 = v17;
    v22 = v23;
    if ((*(int32_t *)((v29 / 8 & 28) + v32) & 1 << (int32_t)(v28 % 32)) != 0) {
        goto lab_0x402882_2;
    }
    goto lab_0x4027a2;
  lab_0x4022c7:
    // 0x4022c7
    if (v49 < v47) {
        // 0x4022cc
        char v62; // 0x4020f0
        int64_t v63; // 0x4020f0
        uint64_t v64; // 0x4020f0
        *(char *)(v63 + v64) = v62;
    }
    // 0x4022d0
    v4 = v49 + 1;
    v7 = v46;
    v13 = v47;
    v19 = v48;
    goto lab_0x402130_2;
}
// Address range: 0x4030a0 - 0x40323b
int64_t function_4030a0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x4030a2
    int32_t * v3 = __errno_location(); // 0x4030bc
    int64_t v4 = (int64_t)g16; // 0x4030c1
    int32_t v5 = *v3; // 0x4030cb
    int64_t v6 = v4; // 0x4030e1
    if (*(int32_t *)0x607230 <= (int32_t)v2) {
        int64_t v7 = v2 + 1; // 0x4030e3
        int64_t v8 = 16 * v7 & 0xffffffff0; // 0x4030ed
        int64_t v9; // 0x4030a0
        if (g16 == &g17) {
            int64_t v10 = function_403f00(0, v8); // 0x403217
            int128_t v11 = __asm_movdqa(*(int128_t *)&g17); // 0x40321c
            *(int64_t *)&g16 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403f00(v4, v8); // 0x403106
            *(int64_t *)&g16 = v12;
            v9 = v12;
        }
        // 0x40311a
        v6 = v9;
        uint32_t v13 = *(int32_t *)&g19; // 0x40311a
        int32_t v14 = v7;
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g19 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x40314b
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403155
    int64_t * v17 = (int64_t *)v15; // 0x403158
    uint64_t v18 = *v17; // 0x403158
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x40315b
    int64_t result = *v19; // 0x40315b
    int64_t v20; // 0x4030a0
    uint64_t v21 = function_402090(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x40317e
    if (v18 > v21) {
        // 0x4031f5
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403191
    *v17 = v22;
    if (result != (int64_t)&g31) {
        // 0x4031a1
        free((int64_t *)result);
    }
    int64_t result2 = function_403eb0(v22); // 0x4031bb
    *v19 = result2;
    int64_t v23; // 0x4030a0
    function_402090(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4031f5
    *v3 = v5;
    return result2;
}
// Address range: 0x403240 - 0x403274
int64_t function_403240(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403247
    int64_t result = function_404070(a1 == 0 ? (int64_t)&g32 : a1, 56); // 0x403266
    return result;
}
// Address range: 0x403280 - 0x40328f
int64_t function_403280(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g32 : a1); // 0x40328c
    return result;
}
// Address range: 0x403290 - 0x40329f
int64_t function_403290(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x403298
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g32;
}
// Address range: 0x4032a0 - 0x4032d3
int64_t function_4032a0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 + 8 : a1 + 8; // 0x4032b9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4032be
    uint32_t v3 = *v2; // 0x4032be
    uint32_t v4 = (int32_t)a2 % 32; // 0x4032c2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4032e0 - 0x4032f3
int64_t function_4032e0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g32 + 4 : a1 + 4); // 0x4032ec
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403300 - 0x40332b
int64_t function_403300(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x403308
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403325
        abort();
        // UNREACHABLE
    }
    // 0x40331c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g32;
}
// Address range: 0x403330 - 0x4033a2
int64_t function_403330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g32 : a5; // 0x403352
    int32_t * v2 = __errno_location(); // 0x40335b
    uint32_t v3 = *(int32_t *)v1; // 0x40337b
    int64_t result = function_402090(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40338a
    return result;
}
// Address range: 0x4033b0 - 0x403491
int64_t function_4033b0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g32 : a4; // 0x4033d2
    int32_t * v2 = __errno_location(); // 0x4033d8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4033f7
    int32_t * v4 = (int32_t *)v1; // 0x4033fa
    int64_t v5 = function_402090(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403415
    int64_t v6 = v5 + 1; // 0x40341a
    int64_t result = function_403eb0(v6); // 0x40342f
    function_402090(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403474
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40347d
    return result;
}
// Address range: 0x4034a0 - 0x4034aa
int64_t function_4034a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4034a0
    return function_4033b0(a1, a2, 0, a3);
}
// Address range: 0x4034b0 - 0x403545
int64_t function_4034b0(void) {
    uint32_t v1 = *(int32_t *)&g19; // 0x4034b0
    int64_t v2 = v1; // 0x4034b0
    int64_t v3 = v2; // 0x4034c4
    if (v1 >= 2) {
        int64_t v4 = &g19;
        int64_t v5 = v4 + 16; // 0x4034e3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g37;
        while (v5 != (int64_t)g16 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4034e0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g37;
        }
    }
    int64_t v6 = v3; // 0x4034fd
    if (g17 != 0x6073a0) {
        // 0x4034ff
        free((int64_t *)g17);
        g17 = 256;
        *(int64_t *)&g18 = (int64_t)&g31;
        v6 = &g37;
    }
    int64_t result = v6; // 0x403521
    if (g16 != &g17) {
        // 0x403523
        free(g16);
        *(int64_t *)&g16 = (int64_t)&g17;
        result = &g37;
    }
    // 0x403536
    *(int32_t *)&g19 = 1;
    return result;
}
// Address range: 0x403550 - 0x403561
int64_t function_403550(void) {
    // 0x403550
    int64_t v1; // 0x403550
    return function_4030a0(v1, v1, -1, (int64_t *)&g32);
}
// Address range: 0x403570 - 0x40357a
int64_t function_403570(void) {
    // 0x403570
    int64_t v1; // 0x403570
    return function_4030a0(v1, v1, v1, (int64_t *)&g32);
}
// Address range: 0x403580 - 0x403596
int64_t function_403580(int64_t a1) {
    // 0x403580
    return function_4030a0(0, a1, -1, (int64_t *)&g32);
}
// Address range: 0x4035a0 - 0x4035b2
int64_t function_4035a0(int64_t a1, int64_t a2) {
    // 0x4035a0
    return function_4030a0(0, a1, a2, (int64_t *)&g32);
}
// Address range: 0x4035c0 - 0x403628
int64_t function_4035c0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4035d0
    return function_4030a0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403630 - 0x403694
int64_t function_403630(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403640
    return function_4030a0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4036a0 - 0x4036ac
int64_t function_4036a0(int64_t a1, int64_t a2) {
    // 0x4036a0
    return function_4035c0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4036b0 - 0x4036bf
int64_t function_4036b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4036b0
    return function_403630(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4036c0 - 0x403730
int64_t function_4036c0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x4036cd
    int128_t v2 = __asm_movdqa(g33); // 0x4036d5
    int128_t v3 = __asm_movdqa(g34); // 0x4036dd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4036f2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403708
    uint32_t v6 = *v5; // 0x403708
    uint32_t v7 = (int32_t)a3 % 32; // 0x40370d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4030a0(0, a1, a2, &v4);
}
// Address range: 0x403730 - 0x40373d
int64_t function_403730(int64_t a1, int64_t a2) {
    // 0x403730
    return function_4036c0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403740 - 0x403751
int64_t function_403740(int64_t a1) {
    // 0x403740
    return function_4036c0(a1, -1, 58);
}
// Address range: 0x403760 - 0x40376a
int64_t function_403760(void) {
    // 0x403760
    int64_t v1; // 0x403760
    return function_4036c0(v1, v1, 58);
}
// Address range: 0x403770 - 0x4037de
int64_t function_403770(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40378a
    return function_4030a0(a1, a3, -1, &v1);
}
// Address range: 0x4037e0 - 0x40384c
int64_t function_4037e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x4037e7
    int128_t v2 = __asm_movdqa(g33); // 0x4037ef
    int128_t v3 = __asm_movdqa(g34); // 0x4037f7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403819
    if (a2 == 0 || a3 == 0) {
        // 0x403847
        abort();
        // UNREACHABLE
    }
    // 0x40382a
    return function_4030a0(a1, a4, a5, &v4);
}
// Address range: 0x403850 - 0x403859
int64_t function_403850(void) {
    // 0x403850
    int64_t v1; // 0x403850
    return function_4037e0(v1, v1, v1, v1, -1);
}
// Address range: 0x403860 - 0x403877
int64_t function_403860(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403860
    return function_4037e0(0, a1, a2, a3, -1);
}
// Address range: 0x403880 - 0x403893
int64_t function_403880(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403880
    return function_4037e0(0, a1, a2, a3, a4);
}
// Address range: 0x4038a0 - 0x4038aa
int64_t function_4038a0(void) {
    // 0x4038a0
    int64_t v1; // 0x4038a0
    return function_4030a0(v1, v1, v1, &g15);
}
// Address range: 0x4038b0 - 0x4038c2
int64_t function_4038b0(int64_t a1, int64_t a2) {
    // 0x4038b0
    return function_4030a0(0, a1, a2, &g15);
}
// Address range: 0x4038d0 - 0x4038e1
int64_t function_4038d0(void) {
    // 0x4038d0
    int64_t v1; // 0x4038d0
    return function_4030a0(v1, v1, -1, &g15);
}
// Address range: 0x4038f0 - 0x403906
int64_t function_4038f0(int64_t a1) {
    // 0x4038f0
    return function_4030a0(0, a1, -1, &g15);
}
// Address range: 0x403910 - 0x403cf5
int64_t function_403910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4039a0
        fprintf(stream, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40392c
        fprintf(stream, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403941
    fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2015);
    int32_t fputs_rc = fputs(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), stream); // 0x403980
    if (a6 < 10) {
        // 0x40398f
        return fputs_rc;
    }
    char * format = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403a72
    return fprintf(stream, format);
}
// Address range: 0x403d00 - 0x403d20
int64_t function_403d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // 0x403d07
    int64_t result; // 0x403d1b
    if (a5 == 0) {
        // 0x403d1b
        result = function_403910(a1, a2, a3, a4, a5, 0, (int64_t)&g37, (int64_t)&g37);
        return result;
    }
    v1++;
    int64_t v2 = v1; // 0x403d19
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403d10
        v1++;
        v2 = v1;
    }
    // 0x403d1b
    result = function_403910(a1, a2, a3, a4, a5, v2, (int64_t)&g37, (int64_t)&g37);
    return result;
}
// Address range: 0x403d20 - 0x403d80
int64_t function_403d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403d20
    int64_t v3 = &v2; // 0x403d20
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403d53
    int64_t v6; // 0x403d3d
    int64_t * v7; // 0x403d5b
    int64_t v8; // 0x403d5b
    int64_t v9; // 0x403d67
    if (v5 < 48) {
        // 0x403d30
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403d73
            break;
        }
    } else {
        // 0x403d5b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403d73
            break;
        }
    }
    int64_t v10 = 10; // 0x403d51
    while (v4 != 9) {
        // 0x403d49
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403d30
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403d73
                break;
            }
        } else {
            // 0x403d5b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403d73
                break;
            }
        }
        // 0x403d49
        v10 = 10;
    }
    int64_t result = function_403910(a1, a2, a3, a4, v3, v10, (int64_t)&g37, (int64_t)&g37); // 0x403d76
    return result;
}
// Address range: 0x403d80 - 0x403e3c
int64_t function_403d80(int64_t a1, int64_t a2, char * a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403d80
    int64_t v1; // bp-168, 0x403d80
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403d80
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403d80
    int64_t v8; // 0x403d80
    int64_t v9; // bp-56, 0x403d80
    int64_t v10; // 0x403de5
    int64_t v11; // 0x403e09
    if ((int32_t)v6 < 48) {
        // 0x403dd0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403e20
            break;
        }
    } else {
        // 0x403e02
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403e20
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403dfa
    int64_t v13 = 10; // 0x403dfa
    while (v5 != 9) {
        // 0x403dfc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403dd0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403e20
                break;
            }
        } else {
            // 0x403e02
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403e20
                break;
            }
        }
        // 0x403df2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403e20
    int64_t v14; // bp-136, 0x403d80
    int64_t result = function_403910(a1, a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g37, (int64_t)&g37); // 0x403e2f
    return result;
}
// Address range: 0x403e40 - 0x403eaa
int64_t function_403e40(int64_t a1) {
    // 0x403e40
    printf(dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    printf(dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * str = dcgettext(NULL, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5); // 0x403e99
    return fputs(str, g21);
}
// Address range: 0x403eb0 - 0x403eca
int64_t function_403eb0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403eb4
    if (size != 0 != (mem == NULL)) {
        // 0x403ec3
        return (int64_t)mem;
    }
    // 0x403ec5
    function_4040d0(size);
    // UNREACHABLE
}
// Address range: 0x403ed0 - 0x403ee3
int64_t function_403ed0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403ed3
    if (v1 <= 0xffffffffffffffff) {
        // 0x403ed8
        return function_403eb0((int64_t)v1);
    }
    // 0x403edd
    function_4040d0(a1);
    // UNREACHABLE
}
// Address range: 0x403ef0 - 0x403ef2
int64_t function_403ef0(void) {
    // 0x403ef0
    int64_t v1; // 0x403ef0
    return function_403eb0(v1);
}
// Address range: 0x403f00 - 0x403f36
int64_t function_403f00(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403f28
        free(v1);
        return (int32_t)&g37 ^ (int32_t)&g37;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403f11
    if (a2 != 0 != (mem == NULL)) {
        // 0x403f20
        return (int64_t)mem;
    }
    // 0x403f31
    function_4040d0(a1);
    // UNREACHABLE
}
// Address range: 0x403f40 - 0x403f53
int64_t function_403f40(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403f43
    if (v1 <= 0xffffffffffffffff) {
        // 0x403f48
        return function_403f00(a1, (int64_t)v1);
    }
    // 0x403f4d
    function_4040d0(a1);
    // UNREACHABLE
}
// Address range: 0x403f60 - 0x403fd6
int64_t function_403f60(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x403f60
    if (a1 != 0) {
        if (0xaaaaaaaaaaaaaaaa / a3 <= a2) {
            // 0x403fd0
            function_4040d0(a1);
            // UNREACHABLE
        }
        // 0x403f8a
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403f00(a1, v1 * a3);
    }
    // 0x403fa0
    if (a2 == 0) {
        int64_t v2 = 128 / a3 + (int64_t)(a3 >= 129); // 0x403fbd
        *(int64_t *)a2 = v2;
        return function_403f00(0, v2 * a3);
    }
    // 0x403f8a
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403f00(a1, v1 * a3);
}
// Address range: 0x403fe0 - 0x40402d
int64_t function_403fe0(int64_t a1, uint64_t a2) {
    if (a1 == 0) {
        int64_t v1 = a2 == 0 ? 128 : a2; // 0x404018
        *(int64_t *)a2 = v1;
        return function_403f00(0, v1);
    }
    if (a2 >= 0xaaaaaaaaaaaaaaaa) {
        // 0x404027
        function_4040d0(a1);
        // UNREACHABLE
    }
    int64_t v2 = a2 + 1 + a2 / 2; // 0x403ffd
    *(int64_t *)a2 = v2;
    return function_403f00(a1, v2);
}
// Address range: 0x404030 - 0x404047
int64_t function_404030(int64_t a1, int64_t a2) {
    // 0x404030
    return (int64_t)memset((int64_t *)function_403eb0(a1), 0, (int32_t)a1);
}
// Address range: 0x404050 - 0x404068
int64_t function_404050(void) {
    // 0x404050
    int64_t nmemb; // 0x404050
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)nmemb); // 0x404054
    if (mem != NULL) {
        // 0x40405e
        return (int64_t)mem;
    }
    // 0x404063
    function_4040d0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404070 - 0x404098
int64_t function_404070(int64_t a1, int64_t a2) {
    int64_t v1 = function_403eb0(a2); // 0x40407f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4040a0 - 0x4040ce
int64_t function_4040a0(int64_t str) {
    int64_t v1 = (int64_t)strlen((char *)str) + 1; // 0x4040ae
    int64_t v2 = function_403eb0(v1); // 0x4040b5
    return (int64_t)memcpy((int64_t *)v2, (int64_t *)str, (int32_t)v1);
}
// Address range: 0x4040d0 - 0x404101
int64_t function_4040d0(int64_t a1) {
    // 0x4040d0
    error(g14, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404110 - 0x404150
int64_t function_404110(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40412a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40412a
        return fflush(stream);
    }
    // 0x404138
    function_404150(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404150 - 0x4041a7
int64_t function_404150(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404150
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40415a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40418b
    int64_t result = -1; // 0x404194
    if (v1 != -1) {
        // 0x404196
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4041a2
    return result;
}
// Address range: 0x4041b0 - 0x4041d9
int64_t function_4041b0(int32_t * pwc, int64_t wstr2, int64_t n) {
    // 0x4041b0
    int64_t ps; // 0x4041b0
    int32_t result; // 0x4041d4
    if (wstr2 == 0) {
        int64_t wstr = (int64_t)&g7;
        result = mbrtowc((int32_t *)0, (char *)wstr, (int32_t)1, (struct _TYPEDEF___mbstate_t *)ps);
        return result;
    }
    // 0x4041b5
    if (n == 0) {
        // 0x4041ba
        return -2;
    }
    // 0x4041d4
    result = mbrtowc((int32_t *)(int64_t)pwc, (char *)wstr2, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps);
    return result;
}
// Address range: 0x4041e0 - 0x404253
int64_t function_4041e0(int64_t a1) {
    int32_t v1 = *__errno_location(); // 0x4041f8
    int64_t v2; // bp-264, 0x4041e0
    function_404260(v1, &v2, 256);
    if (a1 == 0) {
        // 0x404219
        return fprintf(g24, "%s\n", &v2);
    }
    if ((char)(int64_t)g24 != 0) {
        // 0x404238
        return fprintf(g24, "%s: %s\n", (char *)a1, &v2);
    }
    // 0x404219
    return fprintf(g24, "%s\n", &v2);
}
// Address range: 0x404260 - 0x40434c
int64_t function_404260(uint32_t err_num, int64_t * buf, uint64_t a3) {
    int64_t v1 = (int64_t)buf;
    int64_t v2 = v1;
    if (a3 < 2) {
        // 0x404320
        if (a3 != 0) {
            // 0x40432b
            *(char *)buf = 0;
        }
        // 0x4042ab
        return 34;
    }
    int64_t v3 = err_num;
    *(char *)buf = 0;
    int32_t * v4 = __errno_location(); // 0x404283
    int32_t v5 = *v4; // 0x404293
    int64_t v6 = __xpg_strerror_r(v3, v1, a3); // 0x404296
    int64_t v7; // 0x404260
    if ((int32_t)v6 < 0) {
        int64_t v8 = (int64_t)*v4; // 0x4042c3
        v7 = v8;
        if ((char)v1 != 0) {
            // 0x4042a7
            *v4 = v5;
            // 0x4042ab
            return v8 & 0xffffffff;
        }
    } else {
        int64_t v9 = v6 & 0xffffffff; // 0x40429b
        v7 = v9;
        if ((char)v1 != 0) {
            // 0x4042a7
            *v4 = v5;
            // 0x4042ab
            return v9 & 0xffffffff;
        }
    }
    int32_t buf_len = a3; // 0x4042d1
    char * str = strerror_r(err_num, (char *)buf, buf_len); // 0x4042d1
    int32_t len = strlen(str); // 0x4042de
    v2 = (int64_t)str;
    if ((int64_t)len < a3) {
        // 0x4042ed
        memcpy(buf, (int64_t *)str, len + 1);
    } else {
        // 0x404338
        memcpy(buf, (int64_t *)str, buf_len - 1);
        *(char *)(a3 - 1 + v1) = 0;
    }
    // 0x4042f9
    if (v7 != 22) {
        // 0x4042a7
        *v4 = v5;
        // 0x4042ab
        return v7 & 0xffffffff;
    }
    // 0x4042ff
    if (*(char *)&v2 == 0) {
        // 0x404304
        snprintf((char *)buf, buf_len, "Unknown error %d", v3);
    }
    // 0x4042a7
    *v4 = v5;
    // 0x4042ab
    return v7 & 0xffffffff;
}
// Address range: 0x404350 - 0x4043b5
int64_t function_404350(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404357
    int32_t v1 = __fpending(stream); // 0x404357
    int32_t is_ferror = ferror(stream); // 0x404362
    int32_t v2 = fclose(stream); // 0x40436c
    if (is_ferror != 0) {
        // 0x404398
        if (v2 == 0) {
            // 0x40439c
            *__errno_location() = 0;
        }
        // 0x40438e
        return 0xffffffff;
    }
    // 0x404375
    if (v2 == 0) {
        // 0x40438e
        return 0;
    }
    int64_t result = 0xffffffff; // 0x40437c
    if (v1 == 0) {
        // 0x40437e
        result = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40438e
    return result;
}
// Address range: 0x4043c0 - 0x404922
int64_t function_4043c0(void) {
    char * v1 = nl_langinfo(14); // 0x4043d6
    char * v2 = g35; // 0x4043db
    char * v3; // 0x4043c0
    int64_t v4; // 0x4043c0
    int64_t v5; // 0x4043c0
    int64_t v6; // 0x4043c0
    int64_t v7; // 0x4043c0
    int32_t size; // 0x4043c0
    int32_t size2; // 0x4043c0
    int32_t len; // 0x404492
    int64_t v8; // 0x404492
    char * env_val; // 0x40447d
    if (v2 == NULL) {
        // 0x404478
        env_val = getenv("CHARSETALIASDIR");
        size = 116;
        v4 = 102;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 101;
        if (env_val == NULL) {
            goto lab_0x4044e5;
        } else {
            // 0x40448a
            size = 116;
            v4 = 102;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 101;
            if (*env_val == 0) {
                goto lab_0x4044e5;
            } else {
                // 0x40448f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40447d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x404915
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4044e5;
                    } else {
                        // 0x404889
                        size2 = len + 14;
                        goto lab_0x4044ab;
                    }
                } else {
                    goto lab_0x4044ab;
                }
            }
        }
    } else {
        // 0x4043c0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4043fa;
    }
  lab_0x40472c:;
    // 0x40472c
    int64_t v10; // 0x4043c0
    int64_t v11 = v10;
    int64_t v12; // 0x4043c0
    int64_t v13 = v12;
    struct _IO_FILE * stream; // 0x40456b
    int32_t v14 = __uflow(stream); // 0x40472f
    int64_t v15 = v13; // 0x404739
    int32_t v16 = v14; // 0x404739
    int64_t v17 = v11; // 0x404739
    int64_t v18 = v13; // 0x404739
    int64_t v19 = v11; // 0x404739
    if (v14 == -1) {
        // break -> 0x40473f
        goto lab_0x40473f;
    }
    goto lab_0x4045b9;
  lab_0x4045ae:;
    // 0x4045ae
    int64_t v116; // 0x4043c0
    int64_t v137 = v116;
    int64_t v115; // 0x4043c0
    int64_t v138 = v115;
    int64_t v114; // 0x4043c0
    int64_t v139 = v114;
    int64_t * v30; // 0x4045a0
    *v30 = v138 + 1;
    unsigned char v140 = *(char *)v138; // 0x4045b6
    v15 = v139;
    v16 = v140;
    v17 = v137;
    goto lab_0x4045b9;
  lab_0x4045b9:;
    int64_t v20 = v17;
    int32_t c = v16;
    int64_t v21 = v15;
    int64_t v22; // 0x4043c0
    int32_t v23; // bp-120, 0x4043c0
    int32_t v24; // bp-184, 0x4043c0
    int64_t v25; // 0x4043c0
    int64_t v26; // 0x404588
    int64_t v27; // 0x40458d
    int64_t * v28; // 0x4045a4
    switch (c) {
        case 32: {
            // 0x4045a0
            v25 = v21;
            v22 = v20;
            goto lab_0x4045a0_2;
        }
        case 10: {
            // 0x4045a0
            v25 = v21;
            v22 = v20;
            goto lab_0x4045a0_2;
        }
        case 9: {
            // 0x4045a0
            v25 = v21;
            v22 = v20;
            goto lab_0x4045a0_2;
        }
        case 35: {
            uint64_t v29 = *v30; // 0x404791
            uint64_t v31 = *v28; // 0x404795
            int32_t v32; // 0x4043c0
            char v33; // 0x4043c0
            unsigned char v34; // 0x404778
            int32_t v35; // 0x40479e
            if (v29 < v31) {
                // 0x404770
                *v30 = v29 + 1;
                v34 = *(char *)v29;
                v32 = v34;
                v33 = 1;
            } else {
                // 0x40479b
                v35 = __uflow(stream);
                v32 = v35;
                v33 = v35 != -1;
            }
            char v36 = v33;
            int32_t v37 = v32;
            while (v37 != 10 && v36 != 0) {
                // 0x404791
                v29 = *v30;
                v31 = *v28;
                if (v29 < v31) {
                    // 0x404770
                    *v30 = v29 + 1;
                    v34 = *(char *)v29;
                    v32 = v34;
                    v33 = 1;
                } else {
                    // 0x40479b
                    v35 = __uflow(stream);
                    v32 = v35;
                    v33 = v35 != -1;
                }
                // 0x404780
                v36 = v33;
                v37 = v32;
            }
            // 0x40486f
            v18 = v21;
            v19 = v20;
            if (v37 == -1) {
                // break -> 0x40473f
                break;
            }
            // 0x4045a0
            v25 = v21;
            v22 = v20;
            goto lab_0x4045a0_2;
        }
        default: {
            // 0x4045cf
            ungetc(c, stream);
            int32_t items_assigned = fscanf(stream, "%50s %50s", &v24, &v23); // 0x4045e7
            int64_t v38 = v27; // 0x4045ef
            v18 = v21;
            v19 = v20;
            if (items_assigned < 2) {
                // break -> 0x40473f
                break;
            }
            int64_t v39 = v38;
            int32_t v40 = *(int32_t *)v39; // 0x4045f8
            int64_t v41 = v39 + 4; // 0x4045fa
            int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x404606
            uint32_t v43 = v42 & -0x7f7f7f80; // 0x404608
            v38 = v41;
            while (v43 == 0) {
                // 0x4045f8
                v39 = v38;
                v40 = *(int32_t *)v39;
                v41 = v39 + 4;
                v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
                v43 = v42 & -0x7f7f7f80;
                v38 = v41;
            }
            int32_t v44 = (v42 & 0x8080) == 0 ? v43 / 0x10000 : v43; // 0x404619
            int64_t v45 = v39 + 6; // 0x40461c
            unsigned char v46 = (char)v44; // 0x404626
            int64_t v47 = -1 - v46 < v46 ? 4 : 3; // 0x40462b
            int64_t v48 = v26; // 0x40462f
            int64_t v49 = v48;
            int32_t v50 = *(int32_t *)v49; // 0x404632
            int64_t v51 = v49 + 4; // 0x404634
            int32_t v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80); // 0x404640
            uint32_t v53 = v52 & -0x7f7f7f80; // 0x404642
            v48 = v51;
            while (v53 == 0) {
                // 0x404632
                v49 = v48;
                v50 = *(int32_t *)v49;
                v51 = v49 + 4;
                v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80);
                v53 = v52 & -0x7f7f7f80;
                v48 = v51;
            }
            int64_t v54 = (v42 & 0x8080) == 0 ? v45 : v41; // 0x404620
            int64_t v55 = v54 - v47 - v27; // 0x40462f
            int32_t v56 = (v52 & 0x8080) == 0 ? v53 / 0x10000 : v53; // 0x404658
            int64_t v57 = (v52 & 0x8080) == 0 ? v49 + 6 : v51; // 0x40465f
            unsigned char v58 = (char)v56; // 0x404665
            int64_t v59 = -1 - v58 < v58 ? 4 : 3; // 0x404668
            int64_t v60 = v57 - v59 - v26; // 0x40466c
            int64_t v61 = v60 + v55; // 0x404675
            int64_t * v62; // 0x4043c0
            int64_t v63; // 0x4043c0
            if (v21 != 0) {
                int64_t v64 = v61 + v21; // 0x4047ab
                int64_t * mem = realloc((int64_t *)v20, (int32_t)v64 + 3); // 0x4047c0
                v63 = v64;
                v62 = mem;
            } else {
                int64_t * mem2 = malloc((int32_t)v61 + 3); // 0x404691
                v63 = v61;
                v62 = mem2;
            }
            int64_t * v65 = v62;
            if (v65 == NULL) {
                // 0x4048cc
                free((int64_t *)v20);
                fclose(stream);
                goto lab_0x404544;
            }
            int64_t v66 = v63;
            int64_t v67 = (int64_t)v65;
            int64_t v68 = v66 + 2;
            int64_t v69 = v55 + 1; // 0x4046b8
            int64_t v70 = v68 - v60 + v67;
            int64_t v71 = -2 - v55 + v70; // 0x4046c2
            uint32_t v72 = (int32_t)v69; // 0x4046c5
            if (v72 >= 8) {
                int32_t v73 = v24; // 0x4047d4
                *(int64_t *)v71 = (int64_t)v73;
                int64_t v74 = (v69 & 0xffffffff) - 8;
                int64_t v75 = *(int64_t *)(v74 + v27); // 0x4047dd
                *(int64_t *)(v71 + v74) = v75;
                int64_t v76 = v71 + 8 & -8; // 0x4047ee
                int64_t v77 = v71 - v76; // 0x4047f2
                uint32_t v78 = (int32_t)(v77 + v69); // 0x4047fd
                if (v78 >= 8) {
                    int64_t v79 = v27 - v77; // 0x4047f7
                    uint32_t v80 = v78 & -8; // 0x404819
                    int64_t v81 = 0; // 0x4043c0
                    int64_t v82 = v81;
                    int64_t v83 = v82 + 8; // 0x40480e
                    int64_t v84 = *(int64_t *)(v79 + v82); // 0x404811
                    *(int64_t *)(v82 + v76) = v84;
                    v81 = v83 & 0xffffffff;
                    while (v80 > (int32_t)v83) {
                        // 0x40480b
                        v82 = v81;
                        v83 = v82 + 8;
                        v84 = *(int64_t *)(v79 + v82);
                        *(int64_t *)(v82 + v76) = v84;
                        v81 = v83 & 0xffffffff;
                    }
                }
            } else {
                if ((v69 & 4) != 0) {
                    int32_t v85 = v24; // 0x40489f
                    *(int32_t *)v71 = v85;
                    int64_t v86 = (v69 & 0xffffffff) - 4;
                    int32_t v87 = *(int32_t *)(v86 + v27); // 0x4048a7
                    *(int32_t *)(v71 + v86) = v87;
                } else {
                    if (v72 != 0) {
                        int32_t v88 = v24; // 0x4046db
                        *(char *)v71 = (char)v88;
                        if ((v69 & 2) != 0) {
                            int64_t v89 = (v69 & 0xffffffff) - 2;
                            int16_t v90 = *(int16_t *)(v89 + v27); // 0x4048f2
                            *(int16_t *)(v71 + v89) = v90;
                        }
                    }
                }
            }
            int64_t v91 = v60 + 1; // 0x4046eb
            int64_t v92 = v70 - 1; // 0x4046ef
            uint32_t v93 = (int32_t)v91; // 0x4046f4
            if (v93 >= 8) {
                int32_t v94 = v23; // 0x404822
                *(int64_t *)v92 = (int64_t)v94;
                int64_t v95 = (v91 & 0xffffffff) - 8;
                int64_t v96 = *(int64_t *)(v95 + v26); // 0x40482e
                *(int64_t *)(v92 + v95) = v96;
                int64_t v97 = v70 + 7 & -8; // 0x40483c
                int64_t v98 = v92 - v97; // 0x404840
                uint32_t v99 = (int32_t)(v98 + v91); // 0x40484b
                if (v99 >= 8) {
                    int64_t v100 = v26 - v98; // 0x404845
                    uint32_t v101 = v99 & -8; // 0x404866
                    int64_t v102 = 0; // 0x4043c0
                    int64_t v103 = v102;
                    int64_t v104 = v103 + 8; // 0x40485b
                    int64_t v105 = *(int64_t *)(v100 + v103); // 0x40485e
                    *(int64_t *)(v103 + v97) = v105;
                    v102 = v104 & 0xffffffff;
                    while (v101 > (int32_t)v104) {
                        // 0x404859
                        v103 = v102;
                        v104 = v103 + 8;
                        v105 = *(int64_t *)(v100 + v103);
                        *(int64_t *)(v103 + v97) = v105;
                        v102 = v104 & 0xffffffff;
                    }
                }
            } else {
                if ((v91 & 4) != 0) {
                    int32_t v106 = v23; // 0x4048b6
                    *(int32_t *)v92 = v106;
                    int64_t v107 = (v91 & 0xffffffff) - 4;
                    int32_t v108 = *(int32_t *)(v107 + v26); // 0x4048be
                    *(int32_t *)(v92 + v107) = v108;
                } else {
                    if (v93 != 0) {
                        int32_t v109 = v23; // 0x40470a
                        *(char *)v92 = (char)v109;
                        if ((v91 & 2) != 0) {
                            int64_t v110 = (v91 & 0xffffffff) - 2;
                            int16_t v111 = *(int16_t *)(v110 + v26); // 0x404905
                            *(int16_t *)(v92 + v110) = v111;
                        }
                    }
                }
            }
            uint64_t v112 = *v30; // 0x40471e
            uint64_t v113 = *v28; // 0x404722
            v114 = v68;
            v115 = v112;
            v116 = v67;
            v12 = v68;
            v10 = v67;
            if (v112 < v113) {
                goto lab_0x4045ae;
            } else {
                goto lab_0x40472c;
            }
        }
    }
  lab_0x4044e5:;
    int64_t * mem3 = malloc(size); // 0x4044e5
    int64_t v117 = (int64_t)&g7; // 0x4044f0
    int64_t v118; // 0x4043c0
    int64_t path; // 0x4043c0
    if (mem3 == NULL) {
        goto lab_0x4044c2;
    } else {
        int64_t v119 = (int64_t)mem3; // 0x4044e5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v119) = 47;
        path = v119;
        v118 = v4;
        goto lab_0x404506;
    }
  lab_0x4043fa:;
    int64_t str = v1 == NULL ? (int64_t)&g7 : (int64_t)v1; // 0x4043ed
    char v120 = *v3; // 0x4043fa
    int64_t v121; // 0x4043c0
    if (v120 == 0) {
        // 0x404454
        v121 = str;
        return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
    }
    char v122 = v120; // 0x4043c0
    int64_t v123 = v7;
    char * str2 = (char *)v123;
    int64_t v124; // 0x4043c0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v125 = v123 + 1;
        if (v122 == 42) {
            // 0x404440
            v124 = v125;
            if (*(char *)v125 == 0) {
                goto lab_0x404447;
            }
        }
        int64_t str3 = v125 + (int64_t)strlen(str2); // 0x404410
        int64_t v126 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40441d
        char v127 = *(char *)v126; // 0x404422
        v122 = v127;
        if (v127 == 0) {
            // 0x404454
            v121 = str;
            return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
        }
        v123 = v126;
        str2 = (char *)v123;
    }
    // 0x40442b
    v124 = v123 + 1;
  lab_0x404447:
    // 0x404454
    v121 = v124 + (int64_t)strlen(str2);
    return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
  lab_0x4044c2:;
    char * v128 = (char *)v117;
    g35 = v128;
    v3 = v128;
    v7 = v117;
    goto lab_0x4043fa;
  lab_0x404506:;
    int64_t v129 = v118 + path; // 0x404506
    *(int64_t *)v129 = 0x2e74657372616863;
    *(int16_t *)(v129 + 12) = 115;
    *(int32_t *)(v129 + 8) = 0x61696c61;
    if (open((char *)path, O_RDONLY) >= 0) {
        // 0x404561
        int32_t fd; // 0x404532
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x404892
            close(fd);
        } else {
            int64_t v130 = (int64_t)stream; // 0x40456b
            v26 = &v23;
            v27 = &v24;
            v30 = (int64_t *)(v130 + 8);
            v28 = (int64_t *)(v130 + 16);
            v25 = 0;
            v22 = 0;
            while (true) {
              lab_0x4045a0_2:;
                int64_t v131 = v22;
                int64_t v132 = v25;
                uint64_t v133 = *v30; // 0x4045a0
                uint64_t v134 = *v28; // 0x4045a4
                v114 = v132;
                v115 = v133;
                v116 = v131;
                v12 = v132;
                v10 = v131;
                if (v133 >= v134) {
                    goto lab_0x40472c;
                } else {
                    goto lab_0x4045ae;
                }
            }
          lab_0x40473f:;
            int64_t v135 = v18;
            fclose(stream);
            if (v135 != 0) {
                int64_t v136 = v19;
                *(char *)(v136 + v135) = 0;
            }
        }
    }
    goto lab_0x404544;
  lab_0x4044ab:;
    int64_t * mem4 = malloc(size2); // 0x4044ab
    v117 = (int64_t)&g7;
    if (mem4 != NULL) {
        // 0x404551
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v118 = v8;
        goto lab_0x404506;
    } else {
        goto lab_0x4044c2;
    }
  lab_0x404544:
    // 0x404544
    free((int64_t *)path);
    v117 = (int64_t)&g7;
    goto lab_0x4044c2;
}
// Address range: 0x404930 - 0x40498d
int64_t function_404930(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404930
    return function_4012d0();
}
// Address range: 0x404990 - 0x404991
int64_t function_404990(void) {
    // 0x404990
    int64_t result; // 0x404990
    return result;
}
// Address range: 0x4049a0 - 0x4049b8
int64_t function_4049a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4049a0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g12);
}
// Address range: 0x4049b8 - 0x4049d8
int64_t function_4049b8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g8; // 0x4049c2
    while (*(int64_t *)v1 != -1) {
        // 0x4049c3
        v1 -= 8;
    }
    // 0x4049d4
    return result;
}
